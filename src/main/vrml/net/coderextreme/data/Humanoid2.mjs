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
meta3.content = "Humanoid2.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d";
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
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "sacrum";
HAnimSegment53.DEF = "hanim_sacrum";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Transform55 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "HAnimJointShape";
Transform55.child = new undefined();

Transform55.child[0] = Shape56;

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
HAnimSite64.name = "crotch";
HAnimSite64.DEF = "hanim_crotch";
HAnimSite64.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor65 = browser.currentScene.createNode("TouchSensor");
TouchSensor65.description = "HAnimSite crotch";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimSegment53.children[3] = HAnimSite64;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.name = "l_asis";
HAnimSite67.DEF = "hanim_l_asis";
HAnimSite67.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor68 = browser.currentScene.createNode("TouchSensor");
TouchSensor68.description = "HAnimSite l_asis";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = TouchSensor68;

let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "HAnimSiteShape";
HAnimSite67.children[1] = Shape69;

HAnimSegment53.children[4] = HAnimSite67;

let HAnimSite70 = browser.currentScene.createNode("HAnimSite");
HAnimSite70.name = "l_iliocristale";
HAnimSite70.DEF = "hanim_l_iliocristale";
HAnimSite70.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor71 = browser.currentScene.createNode("TouchSensor");
TouchSensor71.description = "HAnimSite l_iliocristale";
HAnimSite70.children = new MFNode();

HAnimSite70.children[0] = TouchSensor71;

let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "HAnimSiteShape";
HAnimSite70.children[1] = Shape72;

HAnimSegment53.children[5] = HAnimSite70;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.name = "l_psis";
HAnimSite73.DEF = "hanim_l_psis";
HAnimSite73.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor74 = browser.currentScene.createNode("TouchSensor");
TouchSensor74.description = "HAnimSite l_psis";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = TouchSensor74;

let Shape75 = browser.currentScene.createNode("Shape");
Shape75.USE = "HAnimSiteShape";
HAnimSite73.children[1] = Shape75;

HAnimSegment53.children[6] = HAnimSite73;

let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.name = "l_trochanterion";
HAnimSite76.DEF = "hanim_l_trochanterion";
HAnimSite76.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor77 = browser.currentScene.createNode("TouchSensor");
TouchSensor77.description = "HAnimSite l_trochanterion";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

HAnimSegment53.children[7] = HAnimSite76;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
HAnimSite79.name = "r_asis";
HAnimSite79.DEF = "hanim_r_asis";
HAnimSite79.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor80 = browser.currentScene.createNode("TouchSensor");
TouchSensor80.description = "HAnimSite r_asis";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = TouchSensor80;

let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "HAnimSiteShape";
HAnimSite79.children[1] = Shape81;

HAnimSegment53.children[8] = HAnimSite79;

let HAnimSite82 = browser.currentScene.createNode("HAnimSite");
HAnimSite82.name = "r_iliocristale";
HAnimSite82.DEF = "hanim_r_iliocristale";
HAnimSite82.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor83 = browser.currentScene.createNode("TouchSensor");
TouchSensor83.description = "HAnimSite r_iliocristale";
HAnimSite82.children = new MFNode();

HAnimSite82.children[0] = TouchSensor83;

let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "HAnimSiteShape";
HAnimSite82.children[1] = Shape84;

HAnimSegment53.children[9] = HAnimSite82;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "r_psis";
HAnimSite85.DEF = "hanim_r_psis";
HAnimSite85.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor86 = browser.currentScene.createNode("TouchSensor");
TouchSensor86.description = "HAnimSite r_psis";
HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = TouchSensor86;

let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "HAnimSiteShape";
HAnimSite85.children[1] = Shape87;

HAnimSegment53.children[10] = HAnimSite85;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.name = "r_trochanterion";
HAnimSite88.DEF = "hanim_r_trochanterion";
HAnimSite88.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor89 = browser.currentScene.createNode("TouchSensor");
TouchSensor89.description = "HAnimSite r_trochanterion";
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
HAnimSite95.name = "navel";
HAnimSite95.DEF = "hanim_navel";
HAnimSite95.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor96 = browser.currentScene.createNode("TouchSensor");
TouchSensor96.description = "HAnimSite navel";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimSegment53.children[13] = HAnimSite95;

let HAnimSite98 = browser.currentScene.createNode("HAnimSite");
HAnimSite98.name = "waist_preferred_anterior";
HAnimSite98.DEF = "hanim_waist_preferred_anterior";
let TouchSensor99 = browser.currentScene.createNode("TouchSensor");
TouchSensor99.description = "HAnimSite waist_preferred_anterior";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimSegment53.children[14] = HAnimSite98;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "waist_preferred_posterior";
HAnimSite101.DEF = "hanim_waist_preferred_posterior";
HAnimSite101.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor102 = browser.currentScene.createNode("TouchSensor");
TouchSensor102.description = "HAnimSite waist_preferred_posterior";
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
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.name = "pelvis";
HAnimSegment105.DEF = "hanim_pelvis";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Transform107 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimJointShape";
Transform107.child = new undefined();

Transform107.child[0] = Shape108;

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
HAnimSite113.name = "l_femoral_lateral_epicondyles";
HAnimSite113.DEF = "hanim_l_femoral_lateral_epicondyles";
HAnimSite113.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor114 = browser.currentScene.createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_femoral_lateral_epicondyles";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment105.children[2] = HAnimSite113;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.name = "l_femoral_medial_epicondyles";
HAnimSite116.DEF = "hanim_l_femoral_medial_epicondyles";
HAnimSite116.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor117 = browser.currentScene.createNode("TouchSensor");
TouchSensor117.description = "HAnimSite l_femoral_medial_epicondyles";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = TouchSensor117;

let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116.children[1] = Shape118;

HAnimSegment105.children[3] = HAnimSite116;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.name = "l_knee_crease";
HAnimSite119.DEF = "hanim_l_knee_crease";
HAnimSite119.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor120 = browser.currentScene.createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_knee_crease";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment105.children[4] = HAnimSite119;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.name = "l_suprapatella";
HAnimSite122.DEF = "hanim_l_suprapatella";
let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_suprapatella";
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
HAnimSite129.name = "r_femoral_lateral_epicondyles";
HAnimSite129.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite129.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor130 = browser.currentScene.createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_femoral_lateral_epicondyles";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment105.children[7] = HAnimSite129;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "r_femoral_medial_epicondyles";
HAnimSite132.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite132.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite r_femoral_medial_epicondyles";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment105.children[8] = HAnimSite132;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "r_knee_crease";
HAnimSite135.DEF = "hanim_r_knee_crease";
HAnimSite135.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor136 = browser.currentScene.createNode("TouchSensor");
TouchSensor136.description = "HAnimSite r_knee_crease";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment105.children[9] = HAnimSite135;

let HAnimSite138 = browser.currentScene.createNode("HAnimSite");
HAnimSite138.name = "r_suprapatella";
HAnimSite138.DEF = "hanim_r_suprapatella";
let TouchSensor139 = browser.currentScene.createNode("TouchSensor");
TouchSensor139.description = "HAnimSite r_suprapatella";
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
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "l_thigh";
HAnimSegment142.DEF = "hanim_l_thigh";
let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Transform144 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "HAnimJointShape";
Transform144.child = new undefined();

Transform144.child[0] = Shape145;

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
HAnimSite150.name = "l_lateral_malleolus";
HAnimSite150.DEF = "hanim_l_lateral_malleolus";
HAnimSite150.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor151 = browser.currentScene.createNode("TouchSensor");
TouchSensor151.description = "HAnimSite l_lateral_malleolus";
HAnimSite150.children = new MFNode();

HAnimSite150.children[0] = TouchSensor151;

let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "HAnimSiteShape";
HAnimSite150.children[1] = Shape152;

HAnimSegment142.children[2] = HAnimSite150;

let HAnimSite153 = browser.currentScene.createNode("HAnimSite");
HAnimSite153.name = "l_medial_malleolus";
HAnimSite153.DEF = "hanim_l_medial_malleolus";
HAnimSite153.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor154 = browser.currentScene.createNode("TouchSensor");
TouchSensor154.description = "HAnimSite l_medial_malleolus";
HAnimSite153.children = new MFNode();

HAnimSite153.children[0] = TouchSensor154;

let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimSiteShape";
HAnimSite153.children[1] = Shape155;

HAnimSegment142.children[3] = HAnimSite153;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.name = "l_tibiale";
HAnimSite156.DEF = "hanim_l_tibiale";
let TouchSensor157 = browser.currentScene.createNode("TouchSensor");
TouchSensor157.description = "HAnimSite l_tibiale";
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
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "l_calf";
HAnimSegment160.DEF = "hanim_l_calf";
let Transform161 = browser.currentScene.createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Transform162 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "HAnimJointShape";
Transform162.child = new undefined();

Transform162.child[0] = Shape163;

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
HAnimSite168.name = "l_calcaneus_posterior";
HAnimSite168.DEF = "hanim_l_calcaneus_posterior";
HAnimSite168.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor169 = browser.currentScene.createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_calcaneus_posterior";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment160.children[2] = HAnimSite168;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "l_sphyrion";
HAnimSite171.DEF = "hanim_l_sphyrion";
HAnimSite171.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor172 = browser.currentScene.createNode("TouchSensor");
TouchSensor172.description = "HAnimSite l_sphyrion";
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
Transform177.child = new undefined();

Transform177.child[0] = Shape178;

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
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.name = "l_metatarsal_2";
HAnimSegment184.DEF = "hanim_l_metatarsal_2";
let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
let Transform186 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

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

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.name = "l_metatarsal_phalanx_1";
HAnimSite192.DEF = "hanim_l_metatarsal_phalanx_1";
let TouchSensor193 = browser.currentScene.createNode("TouchSensor");
TouchSensor193.description = "HAnimSite l_metatarsal_phalanx_1";
HAnimSite192.children = new MFNode();

HAnimSite192.children[0] = TouchSensor193;

let Shape194 = browser.currentScene.createNode("Shape");
Shape194.USE = "HAnimSiteShape";
HAnimSite192.children[1] = Shape194;

HAnimSegment184.children[2] = HAnimSite192;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
HAnimSite195.name = "l_metatarsal_phalanx_5";
HAnimSite195.DEF = "hanim_l_metatarsal_phalanx_5";
let TouchSensor196 = browser.currentScene.createNode("TouchSensor");
TouchSensor196.description = "HAnimSite l_metatarsal_phalanx_5";
HAnimSite195.children = new MFNode();

HAnimSite195.children[0] = TouchSensor196;

let Shape197 = browser.currentScene.createNode("Shape");
Shape197.USE = "HAnimSiteShape";
HAnimSite195.children[1] = Shape197;

HAnimSegment184.children[3] = HAnimSite195;

let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite198.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
let TouchSensor199 = browser.currentScene.createNode("TouchSensor");
TouchSensor199.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite198.children = new MFNode();

HAnimSite198.children[0] = TouchSensor199;

let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "HAnimSiteShape";
HAnimSite198.children[1] = Shape200;

HAnimSegment184.children[4] = HAnimSite198;

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

HAnimSegment184.children[5] = HAnimSite201;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite204.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
let TouchSensor205 = browser.currentScene.createNode("TouchSensor");
TouchSensor205.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite204.children = new MFNode();

HAnimSite204.children[0] = TouchSensor205;

let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "HAnimSiteShape";
HAnimSite204.children[1] = Shape206;

HAnimSegment184.children[6] = HAnimSite204;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite207.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
let TouchSensor208 = browser.currentScene.createNode("TouchSensor");
TouchSensor208.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = TouchSensor208;

let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207.children[1] = Shape209;

HAnimSegment184.children[7] = HAnimSite207;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite210.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment184.children[8] = HAnimSite210;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_metatarsophalangeal_2";
HAnimJoint213.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint213.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment214.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
let Transform216 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimJointShape";
Transform216.child = new undefined();

Transform216.child[0] = Shape217;

Transform215.children = new MFNode();

Transform215.children[0] = Transform216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

let Shape218 = browser.currentScene.createNode("Shape");
let LineSet219 = browser.currentScene.createNode("LineSet");
LineSet219.vertexCount = new MFInt32(new int[2]);
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet219.coord = Coordinate220;

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSegmentLineColorRGBA";
LineSet219.color = ColorRGBA221;

Shape218.geometry = LineSet219;

HAnimSegment214.children[1] = Shape218;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint222.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint222.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint213.children[1] = HAnimJoint222;

HAnimJoint183.children[1] = HAnimJoint213;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint159.children[1] = HAnimJoint174;

HAnimJoint141.children[1] = HAnimJoint159;

HAnimJoint104.children[1] = HAnimJoint141;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.name = "r_hip";
HAnimJoint223.DEF = "hanim_r_hip";
HAnimJoint223.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment224.name = "r_thigh";
HAnimSegment224.DEF = "hanim_r_thigh";
let Transform225 = browser.currentScene.createNode("Transform");
Transform225.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform226 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "HAnimJointShape";
Transform226.child = new undefined();

Transform226.child[0] = Shape227;

Transform225.children = new MFNode();

Transform225.children[0] = Transform226;

HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = Transform225;

let Shape228 = browser.currentScene.createNode("Shape");
let LineSet229 = browser.currentScene.createNode("LineSet");
LineSet229.vertexCount = new MFInt32(new int[2]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet229.coord = Coordinate230;

//from r_hip to r_knee vertices 2
let ColorRGBA231 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA231.USE = "HAnimSegmentLineColorRGBA";
LineSet229.color = ColorRGBA231;

Shape228.geometry = LineSet229;

HAnimSegment224.children[1] = Shape228;

let HAnimSite232 = browser.currentScene.createNode("HAnimSite");
HAnimSite232.name = "r_lateral_malleolus";
HAnimSite232.DEF = "hanim_r_lateral_malleolus";
HAnimSite232.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor233 = browser.currentScene.createNode("TouchSensor");
TouchSensor233.description = "HAnimSite r_lateral_malleolus";
HAnimSite232.children = new MFNode();

HAnimSite232.children[0] = TouchSensor233;

let Shape234 = browser.currentScene.createNode("Shape");
Shape234.USE = "HAnimSiteShape";
HAnimSite232.children[1] = Shape234;

HAnimSegment224.children[2] = HAnimSite232;

let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
HAnimSite235.name = "r_medial_malleolus";
HAnimSite235.DEF = "hanim_r_medial_malleolus";
HAnimSite235.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor236 = browser.currentScene.createNode("TouchSensor");
TouchSensor236.description = "HAnimSite r_medial_malleolus";
HAnimSite235.children = new MFNode();

HAnimSite235.children[0] = TouchSensor236;

let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "HAnimSiteShape";
HAnimSite235.children[1] = Shape237;

HAnimSegment224.children[3] = HAnimSite235;

let HAnimSite238 = browser.currentScene.createNode("HAnimSite");
HAnimSite238.name = "r_tibiale";
HAnimSite238.DEF = "hanim_r_tibiale";
let TouchSensor239 = browser.currentScene.createNode("TouchSensor");
TouchSensor239.description = "HAnimSite r_tibiale";
HAnimSite238.children = new MFNode();

HAnimSite238.children[0] = TouchSensor239;

let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "HAnimSiteShape";
HAnimSite238.children[1] = Shape240;

HAnimSegment224.children[4] = HAnimSite238;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.name = "r_knee";
HAnimJoint241.DEF = "hanim_r_knee";
HAnimJoint241.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.name = "r_calf";
HAnimSegment242.DEF = "hanim_r_calf";
let Transform243 = browser.currentScene.createNode("Transform");
Transform243.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform244 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape245 = browser.currentScene.createNode("Shape");
Shape245.USE = "HAnimJointShape";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

Transform243.children = new MFNode();

Transform243.children[0] = Transform244;

HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = Transform243;

let Shape246 = browser.currentScene.createNode("Shape");
let LineSet247 = browser.currentScene.createNode("LineSet");
LineSet247.vertexCount = new MFInt32(new int[2]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet247.coord = Coordinate248;

//from r_knee to r_talocrural vertices 2
let ColorRGBA249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA";
LineSet247.color = ColorRGBA249;

Shape246.geometry = LineSet247;

HAnimSegment242.children[1] = Shape246;

let HAnimSite250 = browser.currentScene.createNode("HAnimSite");
HAnimSite250.name = "r_calcaneus_posterior";
HAnimSite250.DEF = "hanim_r_calcaneus_posterior";
HAnimSite250.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor251 = browser.currentScene.createNode("TouchSensor");
TouchSensor251.description = "HAnimSite r_calcaneus_posterior";
HAnimSite250.children = new MFNode();

HAnimSite250.children[0] = TouchSensor251;

let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "HAnimSiteShape";
HAnimSite250.children[1] = Shape252;

HAnimSegment242.children[2] = HAnimSite250;

let HAnimSite253 = browser.currentScene.createNode("HAnimSite");
HAnimSite253.name = "r_sphyrion";
HAnimSite253.DEF = "hanim_r_sphyrion";
HAnimSite253.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor254 = browser.currentScene.createNode("TouchSensor");
TouchSensor254.description = "HAnimSite r_sphyrion";
HAnimSite253.children = new MFNode();

HAnimSite253.children[0] = TouchSensor254;

let Shape255 = browser.currentScene.createNode("Shape");
Shape255.USE = "HAnimSiteShape";
HAnimSite253.children[1] = Shape255;

HAnimSegment242.children[3] = HAnimSite253;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.name = "r_talocrural";
HAnimJoint256.DEF = "hanim_r_talocrural";
HAnimJoint256.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.name = "r_talus";
HAnimSegment257.DEF = "hanim_r_talus";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform258.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform258.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform259 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.child = new undefined();

Transform259.child[0] = Shape260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

let Shape261 = browser.currentScene.createNode("Shape");
let LineSet262 = browser.currentScene.createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
let Coordinate263 = browser.currentScene.createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet262.coord = Coordinate263;

//from r_talocrural to r_tarsometatarsal_2 vertices 2
let ColorRGBA264 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA264.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.name = "r_tarsometatarsal_2";
HAnimJoint265.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint265.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
let HAnimSegment266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment266.name = "r_metatarsal_2";
HAnimSegment266.DEF = "hanim_r_metatarsal_2";
let Transform267 = browser.currentScene.createNode("Transform");
Transform267.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
let Transform268 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "HAnimJointShape";
Transform268.child = new undefined();

Transform268.child[0] = Shape269;

Transform267.children = new MFNode();

Transform267.children[0] = Transform268;

HAnimSegment266.children = new MFNode();

HAnimSegment266.children[0] = Transform267;

let Shape270 = browser.currentScene.createNode("Shape");
let LineSet271 = browser.currentScene.createNode("LineSet");
LineSet271.vertexCount = new MFInt32(new int[2]);
let Coordinate272 = browser.currentScene.createNode("Coordinate");
Coordinate272.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet271.coord = Coordinate272;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA273 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA273.USE = "HAnimSegmentLineColorRGBA";
LineSet271.color = ColorRGBA273;

Shape270.geometry = LineSet271;

HAnimSegment266.children[1] = Shape270;

let HAnimSite274 = browser.currentScene.createNode("HAnimSite");
HAnimSite274.name = "r_metatarsal_phalanx_1";
HAnimSite274.DEF = "hanim_r_metatarsal_phalanx_1";
let TouchSensor275 = browser.currentScene.createNode("TouchSensor");
TouchSensor275.description = "HAnimSite r_metatarsal_phalanx_1";
HAnimSite274.children = new MFNode();

HAnimSite274.children[0] = TouchSensor275;

let Shape276 = browser.currentScene.createNode("Shape");
Shape276.USE = "HAnimSiteShape";
HAnimSite274.children[1] = Shape276;

HAnimSegment266.children[2] = HAnimSite274;

let HAnimSite277 = browser.currentScene.createNode("HAnimSite");
HAnimSite277.name = "r_metatarsal_phalanx_5";
HAnimSite277.DEF = "hanim_r_metatarsal_phalanx_5";
let TouchSensor278 = browser.currentScene.createNode("TouchSensor");
TouchSensor278.description = "HAnimSite r_metatarsal_phalanx_5";
HAnimSite277.children = new MFNode();

HAnimSite277.children[0] = TouchSensor278;

let Shape279 = browser.currentScene.createNode("Shape");
Shape279.USE = "HAnimSiteShape";
HAnimSite277.children[1] = Shape279;

HAnimSegment266.children[3] = HAnimSite277;

let HAnimSite280 = browser.currentScene.createNode("HAnimSite");
HAnimSite280.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite280.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
let TouchSensor281 = browser.currentScene.createNode("TouchSensor");
TouchSensor281.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite280.children = new MFNode();

HAnimSite280.children[0] = TouchSensor281;

let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimSiteShape";
HAnimSite280.children[1] = Shape282;

HAnimSegment266.children[4] = HAnimSite280;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite283.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite283.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor284 = browser.currentScene.createNode("TouchSensor");
TouchSensor284.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite283.children = new MFNode();

HAnimSite283.children[0] = TouchSensor284;

let Shape285 = browser.currentScene.createNode("Shape");
Shape285.USE = "HAnimSiteShape";
HAnimSite283.children[1] = Shape285;

HAnimSegment266.children[5] = HAnimSite283;

let HAnimSite286 = browser.currentScene.createNode("HAnimSite");
HAnimSite286.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite286.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
let TouchSensor287 = browser.currentScene.createNode("TouchSensor");
TouchSensor287.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = TouchSensor287;

let Shape288 = browser.currentScene.createNode("Shape");
Shape288.USE = "HAnimSiteShape";
HAnimSite286.children[1] = Shape288;

HAnimSegment266.children[6] = HAnimSite286;

let HAnimSite289 = browser.currentScene.createNode("HAnimSite");
HAnimSite289.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite289.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
let TouchSensor290 = browser.currentScene.createNode("TouchSensor");
TouchSensor290.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = TouchSensor290;

let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "HAnimSiteShape";
HAnimSite289.children[1] = Shape291;

HAnimSegment266.children[7] = HAnimSite289;

let HAnimSite292 = browser.currentScene.createNode("HAnimSite");
HAnimSite292.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite292.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
let TouchSensor293 = browser.currentScene.createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment266.children[8] = HAnimSite292;

HAnimJoint265.children = new MFNode();

HAnimJoint265.children[0] = HAnimSegment266;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.name = "r_metatarsophalangeal_2";
HAnimJoint295.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint295.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment296.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform297 = browser.currentScene.createNode("Transform");
Transform297.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
let Transform298 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "HAnimJointShape";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

Transform297.children = new MFNode();

Transform297.children[0] = Transform298;

HAnimSegment296.children = new MFNode();

HAnimSegment296.children[0] = Transform297;

let Shape300 = browser.currentScene.createNode("Shape");
let LineSet301 = browser.currentScene.createNode("LineSet");
LineSet301.vertexCount = new MFInt32(new int[2]);
let Coordinate302 = browser.currentScene.createNode("Coordinate");
Coordinate302.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet301.coord = Coordinate302;

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA303 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA303.USE = "HAnimSegmentLineColorRGBA";
LineSet301.color = ColorRGBA303;

Shape300.geometry = LineSet301;

HAnimSegment296.children[1] = Shape300;

HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint304.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint304.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint295.children[1] = HAnimJoint304;

HAnimJoint265.children[1] = HAnimJoint295;

HAnimJoint256.children[1] = HAnimJoint265;

HAnimJoint241.children[1] = HAnimJoint256;

HAnimJoint223.children[1] = HAnimJoint241;

HAnimJoint104.children[2] = HAnimJoint223;

HAnimJoint52.children[1] = HAnimJoint104;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.name = "vl5";
HAnimJoint305.DEF = "hanim_vl5";
HAnimJoint305.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.name = "l5";
HAnimSegment306.DEF = "hanim_l5";
let Transform307 = browser.currentScene.createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform308 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "HAnimJointShape";
Transform308.child = new undefined();

Transform308.child[0] = Shape309;

Transform307.children = new MFNode();

Transform307.children[0] = Transform308;

HAnimSegment306.children = new MFNode();

HAnimSegment306.children[0] = Transform307;

let Shape310 = browser.currentScene.createNode("Shape");
let LineSet311 = browser.currentScene.createNode("LineSet");
LineSet311.vertexCount = new MFInt32(new int[2]);
let Coordinate312 = browser.currentScene.createNode("Coordinate");
Coordinate312.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet311.coord = Coordinate312;

//from vl5 to vl3 vertices 2
let ColorRGBA313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

let HAnimSite314 = browser.currentScene.createNode("HAnimSite");
HAnimSite314.name = "l_rib10";
HAnimSite314.DEF = "hanim_l_rib10";
HAnimSite314.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor315 = browser.currentScene.createNode("TouchSensor");
TouchSensor315.description = "HAnimSite l_rib10";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment306.children[2] = HAnimSite314;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "r_rib10";
HAnimSite317.DEF = "hanim_r_rib10";
HAnimSite317.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor318 = browser.currentScene.createNode("TouchSensor");
TouchSensor318.description = "HAnimSite r_rib10";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

HAnimSegment306.children[3] = HAnimSite317;

let HAnimSite320 = browser.currentScene.createNode("HAnimSite");
HAnimSite320.name = "spine_1_middle_back";
HAnimSite320.DEF = "hanim_spine_1_middle_back";
let TouchSensor321 = browser.currentScene.createNode("TouchSensor");
TouchSensor321.description = "HAnimSite spine_1_middle_back";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = TouchSensor321;

let Shape322 = browser.currentScene.createNode("Shape");
Shape322.USE = "HAnimSiteShape";
HAnimSite320.children[1] = Shape322;

HAnimSegment306.children[4] = HAnimSite320;

let HAnimSite323 = browser.currentScene.createNode("HAnimSite");
HAnimSite323.name = "spine_2_middle_back";
HAnimSite323.DEF = "hanim_spine_2_middle_back";
let TouchSensor324 = browser.currentScene.createNode("TouchSensor");
TouchSensor324.description = "HAnimSite spine_2_middle_back";
HAnimSite323.children = new MFNode();

HAnimSite323.children[0] = TouchSensor324;

let Shape325 = browser.currentScene.createNode("Shape");
Shape325.USE = "HAnimSiteShape";
HAnimSite323.children[1] = Shape325;

HAnimSegment306.children[5] = HAnimSite323;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.name = "vl3";
HAnimJoint326.DEF = "hanim_vl3";
HAnimJoint326.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment327.name = "l3";
HAnimSegment327.DEF = "hanim_l3";
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Transform329 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape330 = browser.currentScene.createNode("Shape");
Shape330.USE = "HAnimJointShape";
Transform329.child = new undefined();

Transform329.child[0] = Shape330;

Transform328.children = new MFNode();

Transform328.children[0] = Transform329;

HAnimSegment327.children = new MFNode();

HAnimSegment327.children[0] = Transform328;

let Shape331 = browser.currentScene.createNode("Shape");
let LineSet332 = browser.currentScene.createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
let Coordinate333 = browser.currentScene.createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet332.coord = Coordinate333;

//from vl3 to vl1 vertices 2
let ColorRGBA334 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimSegment327.children[1] = Shape331;

HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.name = "vl1";
HAnimJoint335.DEF = "hanim_vl1";
HAnimJoint335.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment336.name = "l1";
HAnimSegment336.DEF = "hanim_l1";
let Transform337 = browser.currentScene.createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform338 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338.child = new undefined();

Transform338.child[0] = Shape339;

Transform337.children = new MFNode();

Transform337.children[0] = Transform338;

HAnimSegment336.children = new MFNode();

HAnimSegment336.children[0] = Transform337;

let Shape340 = browser.currentScene.createNode("Shape");
let LineSet341 = browser.currentScene.createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[2]);
let Coordinate342 = browser.currentScene.createNode("Coordinate");
Coordinate342.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet341.coord = Coordinate342;

//from vl1 to vt10 vertices 2
let ColorRGBA343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

let HAnimSite344 = browser.currentScene.createNode("HAnimSite");
HAnimSite344.name = "l_thelion";
HAnimSite344.DEF = "hanim_l_thelion";
HAnimSite344.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor345 = browser.currentScene.createNode("TouchSensor");
TouchSensor345.description = "HAnimSite l_thelion";
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = TouchSensor345;

let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "HAnimSiteShape";
HAnimSite344.children[1] = Shape346;

HAnimSegment336.children[2] = HAnimSite344;

let HAnimSite347 = browser.currentScene.createNode("HAnimSite");
HAnimSite347.name = "r_thelion";
HAnimSite347.DEF = "hanim_r_thelion";
HAnimSite347.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor348 = browser.currentScene.createNode("TouchSensor");
TouchSensor348.description = "HAnimSite r_thelion";
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = TouchSensor348;

let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "HAnimSiteShape";
HAnimSite347.children[1] = Shape349;

HAnimSegment336.children[3] = HAnimSite347;

let HAnimSite350 = browser.currentScene.createNode("HAnimSite");
HAnimSite350.name = "substernale";
HAnimSite350.DEF = "hanim_substernale";
HAnimSite350.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor351 = browser.currentScene.createNode("TouchSensor");
TouchSensor351.description = "HAnimSite substernale";
HAnimSite350.children = new MFNode();

HAnimSite350.children[0] = TouchSensor351;

let Shape352 = browser.currentScene.createNode("Shape");
Shape352.USE = "HAnimSiteShape";
HAnimSite350.children[1] = Shape352;

HAnimSegment336.children[4] = HAnimSite350;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.name = "vt10";
HAnimJoint353.DEF = "hanim_vt10";
HAnimJoint353.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment354.name = "t10";
HAnimSegment354.DEF = "hanim_t10";
let Transform355 = browser.currentScene.createNode("Transform");
Transform355.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform356 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "HAnimJointShape";
Transform356.child = new undefined();

Transform356.child[0] = Shape357;

Transform355.children = new MFNode();

Transform355.children[0] = Transform356;

HAnimSegment354.children = new MFNode();

HAnimSegment354.children[0] = Transform355;

let Shape358 = browser.currentScene.createNode("Shape");
let LineSet359 = browser.currentScene.createNode("LineSet");
LineSet359.vertexCount = new MFInt32(new int[2]);
let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet359.coord = Coordinate360;

//from vt10 to vt6 vertices 2
let ColorRGBA361 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
LineSet359.color = ColorRGBA361;

Shape358.geometry = LineSet359;

HAnimSegment354.children[1] = Shape358;

let HAnimSite362 = browser.currentScene.createNode("HAnimSite");
HAnimSite362.name = "l_chest_midsagittal_plane";
HAnimSite362.DEF = "hanim_l_chest_midsagittal_plane";
let TouchSensor363 = browser.currentScene.createNode("TouchSensor");
TouchSensor363.description = "HAnimSite l_chest_midsagittal_plane";
HAnimSite362.children = new MFNode();

HAnimSite362.children[0] = TouchSensor363;

let Shape364 = browser.currentScene.createNode("Shape");
Shape364.USE = "HAnimSiteShape";
HAnimSite362.children[1] = Shape364;

HAnimSegment354.children[2] = HAnimSite362;

let HAnimSite365 = browser.currentScene.createNode("HAnimSite");
HAnimSite365.name = "mesosternale";
HAnimSite365.DEF = "hanim_mesosternale";
let TouchSensor366 = browser.currentScene.createNode("TouchSensor");
TouchSensor366.description = "HAnimSite mesosternale";
HAnimSite365.children = new MFNode();

HAnimSite365.children[0] = TouchSensor366;

let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "HAnimSiteShape";
HAnimSite365.children[1] = Shape367;

HAnimSegment354.children[3] = HAnimSite365;

let HAnimSite368 = browser.currentScene.createNode("HAnimSite");
HAnimSite368.name = "r_chest_midsagittal_plane";
HAnimSite368.DEF = "hanim_r_chest_midsagittal_plane";
let TouchSensor369 = browser.currentScene.createNode("TouchSensor");
TouchSensor369.description = "HAnimSite r_chest_midsagittal_plane";
HAnimSite368.children = new MFNode();

HAnimSite368.children[0] = TouchSensor369;

let Shape370 = browser.currentScene.createNode("Shape");
Shape370.USE = "HAnimSiteShape";
HAnimSite368.children[1] = Shape370;

HAnimSegment354.children[4] = HAnimSite368;

let HAnimSite371 = browser.currentScene.createNode("HAnimSite");
HAnimSite371.name = "rear_center_midsagittal_plane";
HAnimSite371.DEF = "hanim_rear_center_midsagittal_plane";
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "HAnimSite rear_center_midsagittal_plane";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment354.children[5] = HAnimSite371;

HAnimJoint353.children = new MFNode();

HAnimJoint353.children[0] = HAnimSegment354;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.name = "vt6";
HAnimJoint374.DEF = "hanim_vt6";
HAnimJoint374.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment375 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment375.name = "t6";
HAnimSegment375.DEF = "hanim_t6";
let Transform376 = browser.currentScene.createNode("Transform");
Transform376.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform377 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377.child = new undefined();

Transform377.child[0] = Shape378;

Transform376.children = new MFNode();

Transform376.children[0] = Transform377;

HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = Transform376;

let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet380.coord = Coordinate381;

//from vt6 to vt1 vertices 2
let ColorRGBA382 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimSegment375.children[1] = Shape379;

let HAnimSite383 = browser.currentScene.createNode("HAnimSite");
HAnimSite383.name = "cervicale";
HAnimSite383.DEF = "hanim_cervicale";
HAnimSite383.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor384 = browser.currentScene.createNode("TouchSensor");
TouchSensor384.description = "HAnimSite cervicale";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment375.children[2] = HAnimSite383;

let HAnimSite386 = browser.currentScene.createNode("HAnimSite");
HAnimSite386.name = "l_neck_base";
HAnimSite386.DEF = "hanim_l_neck_base";
HAnimSite386.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimSite l_neck_base";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment375.children[3] = HAnimSite386;

let HAnimSite389 = browser.currentScene.createNode("HAnimSite");
HAnimSite389.name = "r_neck_base";
HAnimSite389.DEF = "hanim_r_neck_base";
HAnimSite389.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor390 = browser.currentScene.createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_neck_base";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment375.children[4] = HAnimSite389;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.name = "suprasternale";
HAnimSite392.DEF = "hanim_suprasternale";
HAnimSite392.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor393 = browser.currentScene.createNode("TouchSensor");
TouchSensor393.description = "HAnimSite suprasternale";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment375.children[5] = HAnimSite392;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.name = "vt1";
HAnimJoint395.DEF = "hanim_vt1";
HAnimJoint395.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment396 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment396.name = "t1";
HAnimSegment396.DEF = "hanim_t1";
let Transform397 = browser.currentScene.createNode("Transform");
Transform397.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform398 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape399 = browser.currentScene.createNode("Shape");
Shape399.USE = "HAnimJointShape";
Transform398.child = new undefined();

Transform398.child[0] = Shape399;

Transform397.children = new MFNode();

Transform397.children[0] = Transform398;

HAnimSegment396.children = new MFNode();

HAnimSegment396.children[0] = Transform397;

let Shape400 = browser.currentScene.createNode("Shape");
let LineSet401 = browser.currentScene.createNode("LineSet");
LineSet401.vertexCount = new MFInt32(new int[2]);
let Coordinate402 = browser.currentScene.createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet401.coord = Coordinate402;

//from vt1 to vc4 vertices 2
let ColorRGBA403 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet401.color = ColorRGBA403;

Shape400.geometry = LineSet401;

HAnimSegment396.children[1] = Shape400;

let Shape404 = browser.currentScene.createNode("Shape");
let LineSet405 = browser.currentScene.createNode("LineSet");
LineSet405.vertexCount = new MFInt32(new int[2]);
let Coordinate406 = browser.currentScene.createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet405.coord = Coordinate406;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA407 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSegmentLineColorRGBA";
LineSet405.color = ColorRGBA407;

Shape404.geometry = LineSet405;

HAnimSegment396.children[2] = Shape404;

let HAnimSite408 = browser.currentScene.createNode("HAnimSite");
HAnimSite408.name = "l_acromion";
HAnimSite408.DEF = "hanim_l_acromion";
HAnimSite408.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor409 = browser.currentScene.createNode("TouchSensor");
TouchSensor409.description = "HAnimSite l_acromion";
HAnimSite408.children = new MFNode();

HAnimSite408.children[0] = TouchSensor409;

let Shape410 = browser.currentScene.createNode("Shape");
Shape410.USE = "HAnimSiteShape";
HAnimSite408.children[1] = Shape410;

HAnimSegment396.children[3] = HAnimSite408;

let HAnimSite411 = browser.currentScene.createNode("HAnimSite");
HAnimSite411.name = "l_axilla_distal_pt";
HAnimSite411.DEF = "hanim_l_axilla_distal_pt";
HAnimSite411.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor412 = browser.currentScene.createNode("TouchSensor");
TouchSensor412.description = "HAnimSite l_axilla_distal_pt";
HAnimSite411.children = new MFNode();

HAnimSite411.children[0] = TouchSensor412;

let Shape413 = browser.currentScene.createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411.children[1] = Shape413;

HAnimSegment396.children[4] = HAnimSite411;

let HAnimSite414 = browser.currentScene.createNode("HAnimSite");
HAnimSite414.name = "l_axilla_posterior_folds";
HAnimSite414.DEF = "hanim_l_axilla_posterior_folds";
let TouchSensor415 = browser.currentScene.createNode("TouchSensor");
TouchSensor415.description = "HAnimSite l_axilla_posterior_folds";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

let Shape416 = browser.currentScene.createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment396.children[5] = HAnimSite414;

let HAnimSite417 = browser.currentScene.createNode("HAnimSite");
HAnimSite417.name = "l_axilla_proximal";
HAnimSite417.DEF = "hanim_l_axilla_proximal";
HAnimSite417.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor418 = browser.currentScene.createNode("TouchSensor");
TouchSensor418.description = "HAnimSite l_axilla_proximal";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment396.children[6] = HAnimSite417;

let HAnimSite420 = browser.currentScene.createNode("HAnimSite");
HAnimSite420.name = "l_clavicale";
HAnimSite420.DEF = "hanim_l_clavicale";
HAnimSite420.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor421 = browser.currentScene.createNode("TouchSensor");
TouchSensor421.description = "HAnimSite l_clavicale";
HAnimSite420.children = new MFNode();

HAnimSite420.children[0] = TouchSensor421;

let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "HAnimSiteShape";
HAnimSite420.children[1] = Shape422;

HAnimSegment396.children[7] = HAnimSite420;

let Shape423 = browser.currentScene.createNode("Shape");
let LineSet424 = browser.currentScene.createNode("LineSet");
LineSet424.vertexCount = new MFInt32(new int[2]);
let Coordinate425 = browser.currentScene.createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet424.coord = Coordinate425;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA426 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet424.color = ColorRGBA426;

Shape423.geometry = LineSet424;

HAnimSegment396.children[8] = Shape423;

let HAnimSite427 = browser.currentScene.createNode("HAnimSite");
HAnimSite427.name = "r_acromion";
HAnimSite427.DEF = "hanim_r_acromion";
HAnimSite427.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor428 = browser.currentScene.createNode("TouchSensor");
TouchSensor428.description = "HAnimSite r_acromion";
HAnimSite427.children = new MFNode();

HAnimSite427.children[0] = TouchSensor428;

let Shape429 = browser.currentScene.createNode("Shape");
Shape429.USE = "HAnimSiteShape";
HAnimSite427.children[1] = Shape429;

HAnimSegment396.children[9] = HAnimSite427;

let HAnimSite430 = browser.currentScene.createNode("HAnimSite");
HAnimSite430.name = "r_axilla_distal_pt";
HAnimSite430.DEF = "hanim_r_axilla_distal_pt";
HAnimSite430.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor431 = browser.currentScene.createNode("TouchSensor");
TouchSensor431.description = "HAnimSite r_axilla_distal_pt";
HAnimSite430.children = new MFNode();

HAnimSite430.children[0] = TouchSensor431;

let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430.children[1] = Shape432;

HAnimSegment396.children[10] = HAnimSite430;

let HAnimSite433 = browser.currentScene.createNode("HAnimSite");
HAnimSite433.name = "r_axilla_posterior_folds";
HAnimSite433.DEF = "hanim_r_axilla_posterior_folds";
let TouchSensor434 = browser.currentScene.createNode("TouchSensor");
TouchSensor434.description = "HAnimSite r_axilla_posterior_folds";
HAnimSite433.children = new MFNode();

HAnimSite433.children[0] = TouchSensor434;

let Shape435 = browser.currentScene.createNode("Shape");
Shape435.USE = "HAnimSiteShape";
HAnimSite433.children[1] = Shape435;

HAnimSegment396.children[11] = HAnimSite433;

let HAnimSite436 = browser.currentScene.createNode("HAnimSite");
HAnimSite436.name = "r_axilla_proximal";
HAnimSite436.DEF = "hanim_r_axilla_proximal";
HAnimSite436.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor437 = browser.currentScene.createNode("TouchSensor");
TouchSensor437.description = "HAnimSite r_axilla_proximal";
HAnimSite436.children = new MFNode();

HAnimSite436.children[0] = TouchSensor437;

let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "HAnimSiteShape";
HAnimSite436.children[1] = Shape438;

HAnimSegment396.children[12] = HAnimSite436;

let HAnimSite439 = browser.currentScene.createNode("HAnimSite");
HAnimSite439.name = "r_clavicale";
HAnimSite439.DEF = "hanim_r_clavicale";
HAnimSite439.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor440 = browser.currentScene.createNode("TouchSensor");
TouchSensor440.description = "HAnimSite r_clavicale";
HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = TouchSensor440;

let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimSiteShape";
HAnimSite439.children[1] = Shape441;

HAnimSegment396.children[13] = HAnimSite439;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

let HAnimJoint442 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint442.name = "vc4";
HAnimJoint442.DEF = "hanim_vc4";
HAnimJoint442.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.name = "c4";
HAnimSegment443.DEF = "hanim_c4";
let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform445 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape446 = browser.currentScene.createNode("Shape");
Shape446.USE = "HAnimJointShape";
Transform445.child = new undefined();

Transform445.child[0] = Shape446;

Transform444.children = new MFNode();

Transform444.children[0] = Transform445;

HAnimSegment443.children = new MFNode();

HAnimSegment443.children[0] = Transform444;

let Shape447 = browser.currentScene.createNode("Shape");
let LineSet448 = browser.currentScene.createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet448.coord = Coordinate449;

//from vc4 to vc2 vertices 2
let ColorRGBA450 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSegmentLineColorRGBA";
LineSet448.color = ColorRGBA450;

Shape447.geometry = LineSet448;

HAnimSegment443.children[1] = Shape447;

let HAnimSite451 = browser.currentScene.createNode("HAnimSite");
HAnimSite451.name = "adams_apple";
HAnimSite451.DEF = "hanim_adams_apple";
let TouchSensor452 = browser.currentScene.createNode("TouchSensor");
TouchSensor452.description = "HAnimSite adams_apple";
HAnimSite451.children = new MFNode();

HAnimSite451.children[0] = TouchSensor452;

let Shape453 = browser.currentScene.createNode("Shape");
Shape453.USE = "HAnimSiteShape";
HAnimSite451.children[1] = Shape453;

HAnimSegment443.children[2] = HAnimSite451;

HAnimJoint442.children = new MFNode();

HAnimJoint442.children[0] = HAnimSegment443;

let HAnimJoint454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint454.name = "vc2";
HAnimJoint454.DEF = "hanim_vc2";
HAnimJoint454.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.name = "c2";
HAnimSegment455.DEF = "hanim_c2";
let Transform456 = browser.currentScene.createNode("Transform");
Transform456.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform457 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape458 = browser.currentScene.createNode("Shape");
Shape458.USE = "HAnimJointShape";
Transform457.child = new undefined();

Transform457.child[0] = Shape458;

Transform456.children = new MFNode();

Transform456.children[0] = Transform457;

HAnimSegment455.children = new MFNode();

HAnimSegment455.children[0] = Transform456;

let Shape459 = browser.currentScene.createNode("Shape");
let LineSet460 = browser.currentScene.createNode("LineSet");
LineSet460.vertexCount = new MFInt32(new int[2]);
let Coordinate461 = browser.currentScene.createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet460.coord = Coordinate461;

//from vc2 to skullbase vertices 2
let ColorRGBA462 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA462.USE = "HAnimSegmentLineColorRGBA";
LineSet460.color = ColorRGBA462;

Shape459.geometry = LineSet460;

HAnimSegment455.children[1] = Shape459;

let HAnimSite463 = browser.currentScene.createNode("HAnimSite");
HAnimSite463.name = "glabella";
HAnimSite463.DEF = "hanim_glabella";
let TouchSensor464 = browser.currentScene.createNode("TouchSensor");
TouchSensor464.description = "HAnimSite glabella";
HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = TouchSensor464;

let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "HAnimSiteShape";
HAnimSite463.children[1] = Shape465;

HAnimSegment455.children[2] = HAnimSite463;

let HAnimSite466 = browser.currentScene.createNode("HAnimSite");
HAnimSite466.name = "l_ectocanthus";
HAnimSite466.DEF = "hanim_l_ectocanthus";
let TouchSensor467 = browser.currentScene.createNode("TouchSensor");
TouchSensor467.description = "HAnimSite l_ectocanthus";
HAnimSite466.children = new MFNode();

HAnimSite466.children[0] = TouchSensor467;

let Shape468 = browser.currentScene.createNode("Shape");
Shape468.USE = "HAnimSiteShape";
HAnimSite466.children[1] = Shape468;

HAnimSegment455.children[3] = HAnimSite466;

let HAnimSite469 = browser.currentScene.createNode("HAnimSite");
HAnimSite469.name = "l_gonion";
HAnimSite469.DEF = "hanim_l_gonion";
HAnimSite469.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor470 = browser.currentScene.createNode("TouchSensor");
TouchSensor470.description = "HAnimSite l_gonion";
HAnimSite469.children = new MFNode();

HAnimSite469.children[0] = TouchSensor470;

let Shape471 = browser.currentScene.createNode("Shape");
Shape471.USE = "HAnimSiteShape";
HAnimSite469.children[1] = Shape471;

HAnimSegment455.children[4] = HAnimSite469;

let HAnimSite472 = browser.currentScene.createNode("HAnimSite");
HAnimSite472.name = "l_infraorbitale";
HAnimSite472.DEF = "hanim_l_infraorbitale";
HAnimSite472.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor473 = browser.currentScene.createNode("TouchSensor");
TouchSensor473.description = "HAnimSite l_infraorbitale";
HAnimSite472.children = new MFNode();

HAnimSite472.children[0] = TouchSensor473;

let Shape474 = browser.currentScene.createNode("Shape");
Shape474.USE = "HAnimSiteShape";
HAnimSite472.children[1] = Shape474;

HAnimSegment455.children[5] = HAnimSite472;

let HAnimSite475 = browser.currentScene.createNode("HAnimSite");
HAnimSite475.name = "l_tragion";
HAnimSite475.DEF = "hanim_l_tragion";
HAnimSite475.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor476 = browser.currentScene.createNode("TouchSensor");
TouchSensor476.description = "HAnimSite l_tragion";
HAnimSite475.children = new MFNode();

HAnimSite475.children[0] = TouchSensor476;

let Shape477 = browser.currentScene.createNode("Shape");
Shape477.USE = "HAnimSiteShape";
HAnimSite475.children[1] = Shape477;

HAnimSegment455.children[6] = HAnimSite475;

let HAnimSite478 = browser.currentScene.createNode("HAnimSite");
HAnimSite478.name = "menton";
HAnimSite478.DEF = "hanim_menton";
let TouchSensor479 = browser.currentScene.createNode("TouchSensor");
TouchSensor479.description = "HAnimSite menton";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

HAnimSegment455.children[7] = HAnimSite478;

let HAnimSite481 = browser.currentScene.createNode("HAnimSite");
HAnimSite481.name = "nuchale";
HAnimSite481.DEF = "hanim_nuchale";
HAnimSite481.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor482 = browser.currentScene.createNode("TouchSensor");
TouchSensor482.description = "HAnimSite nuchale";
HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = TouchSensor482;

let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "HAnimSiteShape";
HAnimSite481.children[1] = Shape483;

HAnimSegment455.children[8] = HAnimSite481;

let HAnimSite484 = browser.currentScene.createNode("HAnimSite");
HAnimSite484.name = "opisthocranion";
HAnimSite484.DEF = "hanim_opisthocranion";
let TouchSensor485 = browser.currentScene.createNode("TouchSensor");
TouchSensor485.description = "HAnimSite opisthocranion";
HAnimSite484.children = new MFNode();

HAnimSite484.children[0] = TouchSensor485;

let Shape486 = browser.currentScene.createNode("Shape");
Shape486.USE = "HAnimSiteShape";
HAnimSite484.children[1] = Shape486;

HAnimSegment455.children[9] = HAnimSite484;

let HAnimSite487 = browser.currentScene.createNode("HAnimSite");
HAnimSite487.name = "r_ectocanthus";
HAnimSite487.DEF = "hanim_r_ectocanthus";
let TouchSensor488 = browser.currentScene.createNode("TouchSensor");
TouchSensor488.description = "HAnimSite r_ectocanthus";
HAnimSite487.children = new MFNode();

HAnimSite487.children[0] = TouchSensor488;

let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "HAnimSiteShape";
HAnimSite487.children[1] = Shape489;

HAnimSegment455.children[10] = HAnimSite487;

let HAnimSite490 = browser.currentScene.createNode("HAnimSite");
HAnimSite490.name = "r_gonion";
HAnimSite490.DEF = "hanim_r_gonion";
HAnimSite490.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor491 = browser.currentScene.createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_gonion";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment455.children[11] = HAnimSite490;

let HAnimSite493 = browser.currentScene.createNode("HAnimSite");
HAnimSite493.name = "r_infraorbitale";
HAnimSite493.DEF = "hanim_r_infraorbitale";
HAnimSite493.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor494 = browser.currentScene.createNode("TouchSensor");
TouchSensor494.description = "HAnimSite r_infraorbitale";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = TouchSensor494;

let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "HAnimSiteShape";
HAnimSite493.children[1] = Shape495;

HAnimSegment455.children[12] = HAnimSite493;

let HAnimSite496 = browser.currentScene.createNode("HAnimSite");
HAnimSite496.name = "r_tragion";
HAnimSite496.DEF = "hanim_r_tragion";
HAnimSite496.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor497 = browser.currentScene.createNode("TouchSensor");
TouchSensor497.description = "HAnimSite r_tragion";
HAnimSite496.children = new MFNode();

HAnimSite496.children[0] = TouchSensor497;

let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "HAnimSiteShape";
HAnimSite496.children[1] = Shape498;

HAnimSegment455.children[13] = HAnimSite496;

let HAnimSite499 = browser.currentScene.createNode("HAnimSite");
HAnimSite499.name = "sellion";
HAnimSite499.DEF = "hanim_sellion";
HAnimSite499.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor500 = browser.currentScene.createNode("TouchSensor");
TouchSensor500.description = "HAnimSite sellion";
HAnimSite499.children = new MFNode();

HAnimSite499.children[0] = TouchSensor500;

let Shape501 = browser.currentScene.createNode("Shape");
Shape501.USE = "HAnimSiteShape";
HAnimSite499.children[1] = Shape501;

HAnimSegment455.children[14] = HAnimSite499;

let HAnimSite502 = browser.currentScene.createNode("HAnimSite");
HAnimSite502.name = "skull_vertex";
HAnimSite502.DEF = "hanim_skull_vertex";
let TouchSensor503 = browser.currentScene.createNode("TouchSensor");
TouchSensor503.description = "HAnimSite skull_vertex";
HAnimSite502.children = new MFNode();

HAnimSite502.children[0] = TouchSensor503;

let Shape504 = browser.currentScene.createNode("Shape");
Shape504.USE = "HAnimSiteShape";
HAnimSite502.children[1] = Shape504;

HAnimSegment455.children[15] = HAnimSite502;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.name = "supramenton";
HAnimSite505.DEF = "hanim_supramenton";
HAnimSite505.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor506 = browser.currentScene.createNode("TouchSensor");
TouchSensor506.description = "HAnimSite supramenton";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

HAnimSegment455.children[16] = HAnimSite505;

HAnimJoint454.children = new MFNode();

HAnimJoint454.children[0] = HAnimSegment455;

let HAnimJoint508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint508.name = "skullbase";
HAnimJoint508.DEF = "hanim_skullbase";
HAnimJoint508.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint454.children[1] = HAnimJoint508;

HAnimJoint442.children[1] = HAnimJoint454;

HAnimJoint395.children[1] = HAnimJoint442;

let HAnimJoint509 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint509.name = "l_sternoclavicular";
HAnimJoint509.DEF = "hanim_l_sternoclavicular";
HAnimJoint509.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.name = "l_clavicle";
HAnimSegment510.DEF = "hanim_l_clavicle";
let Transform511 = browser.currentScene.createNode("Transform");
Transform511.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform512 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape513 = browser.currentScene.createNode("Shape");
Shape513.USE = "HAnimJointShape";
Transform512.child = new undefined();

Transform512.child[0] = Shape513;

Transform511.children = new MFNode();

Transform511.children[0] = Transform512;

HAnimSegment510.children = new MFNode();

HAnimSegment510.children[0] = Transform511;

let Shape514 = browser.currentScene.createNode("Shape");
let LineSet515 = browser.currentScene.createNode("LineSet");
LineSet515.vertexCount = new MFInt32(new int[2]);
let Coordinate516 = browser.currentScene.createNode("Coordinate");
Coordinate516.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet515.coord = Coordinate516;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA517 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA";
LineSet515.color = ColorRGBA517;

Shape514.geometry = LineSet515;

HAnimSegment510.children[1] = Shape514;

HAnimJoint509.children = new MFNode();

HAnimJoint509.children[0] = HAnimSegment510;

let HAnimJoint518 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint518.name = "l_acromioclavicular";
HAnimJoint518.DEF = "hanim_l_acromioclavicular";
HAnimJoint518.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment519 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment519.name = "l_scapula";
HAnimSegment519.DEF = "hanim_l_scapula";
let Transform520 = browser.currentScene.createNode("Transform");
Transform520.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform521 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape522 = browser.currentScene.createNode("Shape");
Shape522.USE = "HAnimJointShape";
Transform521.child = new undefined();

Transform521.child[0] = Shape522;

Transform520.children = new MFNode();

Transform520.children[0] = Transform521;

HAnimSegment519.children = new MFNode();

HAnimSegment519.children[0] = Transform520;

let Shape523 = browser.currentScene.createNode("Shape");
let LineSet524 = browser.currentScene.createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
let Coordinate525 = browser.currentScene.createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet524.coord = Coordinate525;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA526 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSegmentLineColorRGBA";
LineSet524.color = ColorRGBA526;

Shape523.geometry = LineSet524;

HAnimSegment519.children[1] = Shape523;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.name = "l_bideltoid";
HAnimSite527.DEF = "hanim_l_bideltoid";
let TouchSensor528 = browser.currentScene.createNode("TouchSensor");
TouchSensor528.description = "HAnimSite l_bideltoid";
HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = TouchSensor528;

let Shape529 = browser.currentScene.createNode("Shape");
Shape529.USE = "HAnimSiteShape";
HAnimSite527.children[1] = Shape529;

HAnimSegment519.children[2] = HAnimSite527;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.name = "l_humeral_lateral_epicondyles";
HAnimSite530.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite530.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_humeral_lateral_epicondyles";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimSegment519.children[3] = HAnimSite530;

HAnimJoint518.children = new MFNode();

HAnimJoint518.children[0] = HAnimSegment519;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.name = "l_shoulder";
HAnimJoint533.DEF = "hanim_l_shoulder";
HAnimJoint533.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.name = "l_upperarm";
HAnimSegment534.DEF = "hanim_l_upperarm";
let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform536 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

Transform535.children = new MFNode();

Transform535.children[0] = Transform536;

HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = Transform535;

let Shape538 = browser.currentScene.createNode("Shape");
let LineSet539 = browser.currentScene.createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet539.coord = Coordinate540;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA541 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[1] = Shape538;

let HAnimSite542 = browser.currentScene.createNode("HAnimSite");
HAnimSite542.name = "l_humeral_medial_epicondyles";
HAnimSite542.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite542.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor543 = browser.currentScene.createNode("TouchSensor");
TouchSensor543.description = "HAnimSite l_humeral_medial_epicondyles";
HAnimSite542.children = new MFNode();

HAnimSite542.children[0] = TouchSensor543;

let Shape544 = browser.currentScene.createNode("Shape");
Shape544.USE = "HAnimSiteShape";
HAnimSite542.children[1] = Shape544;

HAnimSegment534.children[2] = HAnimSite542;

let HAnimSite545 = browser.currentScene.createNode("HAnimSite");
HAnimSite545.name = "l_olecranon";
HAnimSite545.DEF = "hanim_l_olecranon";
HAnimSite545.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor546 = browser.currentScene.createNode("TouchSensor");
TouchSensor546.description = "HAnimSite l_olecranon";
HAnimSite545.children = new MFNode();

HAnimSite545.children[0] = TouchSensor546;

let Shape547 = browser.currentScene.createNode("Shape");
Shape547.USE = "HAnimSiteShape";
HAnimSite545.children[1] = Shape547;

HAnimSegment534.children[3] = HAnimSite545;

let HAnimSite548 = browser.currentScene.createNode("HAnimSite");
HAnimSite548.name = "l_radial_styloid";
HAnimSite548.DEF = "hanim_l_radial_styloid";
HAnimSite548.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor549 = browser.currentScene.createNode("TouchSensor");
TouchSensor549.description = "HAnimSite l_radial_styloid";
HAnimSite548.children = new MFNode();

HAnimSite548.children[0] = TouchSensor549;

let Shape550 = browser.currentScene.createNode("Shape");
Shape550.USE = "HAnimSiteShape";
HAnimSite548.children[1] = Shape550;

HAnimSegment534.children[4] = HAnimSite548;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.name = "l_radiale";
HAnimSite551.DEF = "hanim_l_radiale";
HAnimSite551.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor552 = browser.currentScene.createNode("TouchSensor");
TouchSensor552.description = "HAnimSite l_radiale";
HAnimSite551.children = new MFNode();

HAnimSite551.children[0] = TouchSensor552;

let Shape553 = browser.currentScene.createNode("Shape");
Shape553.USE = "HAnimSiteShape";
HAnimSite551.children[1] = Shape553;

HAnimSegment534.children[5] = HAnimSite551;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

let HAnimJoint554 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint554.name = "l_elbow";
HAnimJoint554.DEF = "hanim_l_elbow";
HAnimJoint554.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment555 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment555.name = "l_forearm";
HAnimSegment555.DEF = "hanim_l_forearm";
let Transform556 = browser.currentScene.createNode("Transform");
Transform556.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform557 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape558 = browser.currentScene.createNode("Shape");
Shape558.USE = "HAnimJointShape";
Transform557.child = new undefined();

Transform557.child[0] = Shape558;

Transform556.children = new MFNode();

Transform556.children[0] = Transform557;

HAnimSegment555.children = new MFNode();

HAnimSegment555.children[0] = Transform556;

let Shape559 = browser.currentScene.createNode("Shape");
let LineSet560 = browser.currentScene.createNode("LineSet");
LineSet560.vertexCount = new MFInt32(new int[2]);
let Coordinate561 = browser.currentScene.createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet560.coord = Coordinate561;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA562 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA562.USE = "HAnimSegmentLineColorRGBA";
LineSet560.color = ColorRGBA562;

Shape559.geometry = LineSet560;

HAnimSegment555.children[1] = Shape559;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.name = "l_ulnar_styloid";
HAnimSite563.DEF = "hanim_l_ulnar_styloid";
HAnimSite563.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor564 = browser.currentScene.createNode("TouchSensor");
TouchSensor564.description = "HAnimSite l_ulnar_styloid";
HAnimSite563.children = new MFNode();

HAnimSite563.children[0] = TouchSensor564;

let Shape565 = browser.currentScene.createNode("Shape");
Shape565.USE = "HAnimSiteShape";
HAnimSite563.children[1] = Shape565;

HAnimSegment555.children[2] = HAnimSite563;

HAnimJoint554.children = new MFNode();

HAnimJoint554.children[0] = HAnimSegment555;

let HAnimJoint566 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint566.name = "l_radiocarpal";
HAnimJoint566.DEF = "hanim_l_radiocarpal";
HAnimJoint566.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment567 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment567.name = "l_carpal";
HAnimSegment567.DEF = "hanim_l_carpal";
let Transform568 = browser.currentScene.createNode("Transform");
Transform568.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform568.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform568.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform569 = browser.currentScene.createNode("Transform");
Transform569.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape570 = browser.currentScene.createNode("Shape");
Shape570.USE = "HAnimJointShape";
Transform569.child = new undefined();

Transform569.child[0] = Shape570;

Transform568.children = new MFNode();

Transform568.children[0] = Transform569;

HAnimSegment567.children = new MFNode();

HAnimSegment567.children[0] = Transform568;

let Shape571 = browser.currentScene.createNode("Shape");
let LineSet572 = browser.currentScene.createNode("LineSet");
LineSet572.vertexCount = new MFInt32(new int[2]);
let Coordinate573 = browser.currentScene.createNode("Coordinate");
Coordinate573.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet572.coord = Coordinate573;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
let ColorRGBA574 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA";
LineSet572.color = ColorRGBA574;

Shape571.geometry = LineSet572;

HAnimSegment567.children[1] = Shape571;

let Shape575 = browser.currentScene.createNode("Shape");
let LineSet576 = browser.currentScene.createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet576.coord = Coordinate577;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
let ColorRGBA578 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment567.children[2] = Shape575;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.name = "l_metacarpal_phalanx_2";
HAnimSite579.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite579.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor580 = browser.currentScene.createNode("TouchSensor");
TouchSensor580.description = "HAnimSite l_metacarpal_phalanx_2";
HAnimSite579.children = new MFNode();

HAnimSite579.children[0] = TouchSensor580;

let Shape581 = browser.currentScene.createNode("Shape");
Shape581.USE = "HAnimSiteShape";
HAnimSite579.children[1] = Shape581;

HAnimSegment567.children[3] = HAnimSite579;

let Shape582 = browser.currentScene.createNode("Shape");
let LineSet583 = browser.currentScene.createNode("LineSet");
LineSet583.vertexCount = new MFInt32(new int[2]);
let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet583.coord = Coordinate584;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
let ColorRGBA585 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment567.children[4] = Shape582;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.name = "l_metacarpal_phalanx_3";
HAnimSite586.DEF = "hanim_l_metacarpal_phalanx_3";
let TouchSensor587 = browser.currentScene.createNode("TouchSensor");
TouchSensor587.description = "HAnimSite l_metacarpal_phalanx_3";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment567.children[5] = HAnimSite586;

let Shape589 = browser.currentScene.createNode("Shape");
let LineSet590 = browser.currentScene.createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
let Coordinate591 = browser.currentScene.createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet590.coord = Coordinate591;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
let ColorRGBA592 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment567.children[6] = Shape589;

let Shape593 = browser.currentScene.createNode("Shape");
let LineSet594 = browser.currentScene.createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet594.coord = Coordinate595;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
let ColorRGBA596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment567.children[7] = Shape593;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.name = "l_metacarpal_phalanx_5";
HAnimSite597.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite597.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor598 = browser.currentScene.createNode("TouchSensor");
TouchSensor598.description = "HAnimSite l_metacarpal_phalanx_5";
HAnimSite597.children = new MFNode();

HAnimSite597.children[0] = TouchSensor598;

let Shape599 = browser.currentScene.createNode("Shape");
Shape599.USE = "HAnimSiteShape";
HAnimSite597.children[1] = Shape599;

HAnimSegment567.children[8] = HAnimSite597;

HAnimJoint566.children = new MFNode();

HAnimJoint566.children[0] = HAnimSegment567;

let HAnimJoint600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint600.name = "l_carpometacarpal_1";
HAnimJoint600.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint600.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment601 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment601.name = "l_metacarpal_1";
HAnimSegment601.DEF = "hanim_l_metacarpal_1";
let Transform602 = browser.currentScene.createNode("Transform");
Transform602.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform603 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape604 = browser.currentScene.createNode("Shape");
Shape604.USE = "HAnimJointShape";
Transform603.child = new undefined();

Transform603.child[0] = Shape604;

Transform602.children = new MFNode();

Transform602.children[0] = Transform603;

HAnimSegment601.children = new MFNode();

HAnimSegment601.children[0] = Transform602;

let Shape605 = browser.currentScene.createNode("Shape");
let LineSet606 = browser.currentScene.createNode("LineSet");
LineSet606.vertexCount = new MFInt32(new int[2]);
let Coordinate607 = browser.currentScene.createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet606.coord = Coordinate607;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA608 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA608.USE = "HAnimSegmentLineColorRGBA";
LineSet606.color = ColorRGBA608;

Shape605.geometry = LineSet606;

HAnimSegment601.children[1] = Shape605;

HAnimJoint600.children = new MFNode();

HAnimJoint600.children[0] = HAnimSegment601;

let HAnimJoint609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint609.name = "l_metacarpophalangeal_1";
HAnimJoint609.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint609.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment610 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment610.name = "l_carpal_proximal_phalanx_1";
HAnimSegment610.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform611 = browser.currentScene.createNode("Transform");
Transform611.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform612 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape613 = browser.currentScene.createNode("Shape");
Shape613.USE = "HAnimJointShape";
Transform612.child = new undefined();

Transform612.child[0] = Shape613;

Transform611.children = new MFNode();

Transform611.children[0] = Transform612;

HAnimSegment610.children = new MFNode();

HAnimSegment610.children[0] = Transform611;

let Shape614 = browser.currentScene.createNode("Shape");
let LineSet615 = browser.currentScene.createNode("LineSet");
LineSet615.vertexCount = new MFInt32(new int[2]);
let Coordinate616 = browser.currentScene.createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet615.coord = Coordinate616;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA617 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSegmentLineColorRGBA";
LineSet615.color = ColorRGBA617;

Shape614.geometry = LineSet615;

HAnimSegment610.children[1] = Shape614;

let HAnimSite618 = browser.currentScene.createNode("HAnimSite");
HAnimSite618.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite618.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor619 = browser.currentScene.createNode("TouchSensor");
TouchSensor619.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite618.children = new MFNode();

HAnimSite618.children[0] = TouchSensor619;

let Shape620 = browser.currentScene.createNode("Shape");
Shape620.USE = "HAnimSiteShape";
HAnimSite618.children[1] = Shape620;

HAnimSegment610.children[2] = HAnimSite618;

HAnimJoint609.children = new MFNode();

HAnimJoint609.children[0] = HAnimSegment610;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.name = "l_carpal_interphalangeal_1";
HAnimJoint621.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint621.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint609.children[1] = HAnimJoint621;

HAnimJoint600.children[1] = HAnimJoint609;

HAnimJoint566.children[1] = HAnimJoint600;

let HAnimJoint622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint622.name = "l_carpometacarpal_2";
HAnimJoint622.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint622.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment623 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment623.name = "l_metacarpal_2";
HAnimSegment623.DEF = "hanim_l_metacarpal_2";
let Transform624 = browser.currentScene.createNode("Transform");
Transform624.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform625 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape626 = browser.currentScene.createNode("Shape");
Shape626.USE = "HAnimJointShape";
Transform625.child = new undefined();

Transform625.child[0] = Shape626;

Transform624.children = new MFNode();

Transform624.children[0] = Transform625;

HAnimSegment623.children = new MFNode();

HAnimSegment623.children[0] = Transform624;

let Shape627 = browser.currentScene.createNode("Shape");
let LineSet628 = browser.currentScene.createNode("LineSet");
LineSet628.vertexCount = new MFInt32(new int[2]);
let Coordinate629 = browser.currentScene.createNode("Coordinate");
Coordinate629.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet628.coord = Coordinate629;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA630 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA630.USE = "HAnimSegmentLineColorRGBA";
LineSet628.color = ColorRGBA630;

Shape627.geometry = LineSet628;

HAnimSegment623.children[1] = Shape627;

HAnimJoint622.children = new MFNode();

HAnimJoint622.children[0] = HAnimSegment623;

let HAnimJoint631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint631.name = "l_metacarpophalangeal_2";
HAnimJoint631.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint631.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment632 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment632.name = "l_carpal_proximal_phalanx_2";
HAnimSegment632.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform633 = browser.currentScene.createNode("Transform");
Transform633.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform634 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "HAnimJointShape";
Transform634.child = new undefined();

Transform634.child[0] = Shape635;

Transform633.children = new MFNode();

Transform633.children[0] = Transform634;

HAnimSegment632.children = new MFNode();

HAnimSegment632.children[0] = Transform633;

let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
let Coordinate638 = browser.currentScene.createNode("Coordinate");
Coordinate638.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet637.coord = Coordinate638;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA639 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimSegment632.children[1] = Shape636;

HAnimJoint631.children = new MFNode();

HAnimJoint631.children[0] = HAnimSegment632;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint640.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint640.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment641 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment641.name = "l_carpal_middle_phalanx_2";
HAnimSegment641.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform642 = browser.currentScene.createNode("Transform");
Transform642.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform643 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "HAnimJointShape";
Transform643.child = new undefined();

Transform643.child[0] = Shape644;

Transform642.children = new MFNode();

Transform642.children[0] = Transform643;

HAnimSegment641.children = new MFNode();

HAnimSegment641.children[0] = Transform642;

let Shape645 = browser.currentScene.createNode("Shape");
let LineSet646 = browser.currentScene.createNode("LineSet");
LineSet646.vertexCount = new MFInt32(new int[2]);
let Coordinate647 = browser.currentScene.createNode("Coordinate");
Coordinate647.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet646.coord = Coordinate647;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA648 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

let HAnimSite649 = browser.currentScene.createNode("HAnimSite");
HAnimSite649.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite649.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor650 = browser.currentScene.createNode("TouchSensor");
TouchSensor650.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = TouchSensor650;

let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "HAnimSiteShape";
HAnimSite649.children[1] = Shape651;

HAnimSegment641.children[2] = HAnimSite649;

let HAnimSite652 = browser.currentScene.createNode("HAnimSite");
HAnimSite652.name = "l_dactylion";
HAnimSite652.DEF = "hanim_l_dactylion";
HAnimSite652.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor653 = browser.currentScene.createNode("TouchSensor");
TouchSensor653.description = "HAnimSite l_dactylion";
HAnimSite652.children = new MFNode();

HAnimSite652.children[0] = TouchSensor653;

let Shape654 = browser.currentScene.createNode("Shape");
Shape654.USE = "HAnimSiteShape";
HAnimSite652.children[1] = Shape654;

HAnimSegment641.children[3] = HAnimSite652;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

let HAnimJoint655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint655.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint655.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint655.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint640.children[1] = HAnimJoint655;

HAnimJoint631.children[1] = HAnimJoint640;

HAnimJoint622.children[1] = HAnimJoint631;

HAnimJoint566.children[2] = HAnimJoint622;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.name = "l_carpometacarpal_3";
HAnimJoint656.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint656.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "l_metacarpal_3";
HAnimSegment657.DEF = "hanim_l_metacarpal_3";
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform659 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.child = new undefined();

Transform659.child[0] = Shape660;

Transform658.children = new MFNode();

Transform658.children[0] = Transform659;

HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = Transform658;

let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet662.coord = Coordinate663;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

let HAnimJoint665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint665.name = "l_metacarpophalangeal_3";
HAnimJoint665.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint665.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment666 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment666.name = "l_carpal_proximal_phalanx_3";
HAnimSegment666.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform667 = browser.currentScene.createNode("Transform");
Transform667.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform668 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape669 = browser.currentScene.createNode("Shape");
Shape669.USE = "HAnimJointShape";
Transform668.child = new undefined();

Transform668.child[0] = Shape669;

Transform667.children = new MFNode();

Transform667.children[0] = Transform668;

HAnimSegment666.children = new MFNode();

HAnimSegment666.children[0] = Transform667;

let Shape670 = browser.currentScene.createNode("Shape");
let LineSet671 = browser.currentScene.createNode("LineSet");
LineSet671.vertexCount = new MFInt32(new int[2]);
let Coordinate672 = browser.currentScene.createNode("Coordinate");
Coordinate672.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet671.coord = Coordinate672;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA673 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
LineSet671.color = ColorRGBA673;

Shape670.geometry = LineSet671;

HAnimSegment666.children[1] = Shape670;

HAnimJoint665.children = new MFNode();

HAnimJoint665.children[0] = HAnimSegment666;

let HAnimJoint674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint674.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint674.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint674.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment675.name = "l_carpal_middle_phalanx_3";
HAnimSegment675.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform676 = browser.currentScene.createNode("Transform");
Transform676.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform677 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "HAnimJointShape";
Transform677.child = new undefined();

Transform677.child[0] = Shape678;

Transform676.children = new MFNode();

Transform676.children[0] = Transform677;

HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = Transform676;

let Shape679 = browser.currentScene.createNode("Shape");
let LineSet680 = browser.currentScene.createNode("LineSet");
LineSet680.vertexCount = new MFInt32(new int[2]);
let Coordinate681 = browser.currentScene.createNode("Coordinate");
Coordinate681.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet680.coord = Coordinate681;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA682 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
LineSet680.color = ColorRGBA682;

Shape679.geometry = LineSet680;

HAnimSegment675.children[1] = Shape679;

let HAnimSite683 = browser.currentScene.createNode("HAnimSite");
HAnimSite683.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite683.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor684 = browser.currentScene.createNode("TouchSensor");
TouchSensor684.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite683.children = new MFNode();

HAnimSite683.children[0] = TouchSensor684;

let Shape685 = browser.currentScene.createNode("Shape");
Shape685.USE = "HAnimSiteShape";
HAnimSite683.children[1] = Shape685;

HAnimSegment675.children[2] = HAnimSite683;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

let HAnimJoint686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint686.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint686.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint686.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint674.children[1] = HAnimJoint686;

HAnimJoint665.children[1] = HAnimJoint674;

HAnimJoint656.children[1] = HAnimJoint665;

HAnimJoint566.children[3] = HAnimJoint656;

let HAnimJoint687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint687.name = "l_carpometacarpal_4";
HAnimJoint687.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint687.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment688.name = "l_metacarpal_4";
HAnimSegment688.DEF = "hanim_l_metacarpal_4";
let Transform689 = browser.currentScene.createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform690 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimJointShape";
Transform690.child = new undefined();

Transform690.child[0] = Shape691;

Transform689.children = new MFNode();

Transform689.children[0] = Transform690;

HAnimSegment688.children = new MFNode();

HAnimSegment688.children[0] = Transform689;

let Shape692 = browser.currentScene.createNode("Shape");
let LineSet693 = browser.currentScene.createNode("LineSet");
LineSet693.vertexCount = new MFInt32(new int[2]);
let Coordinate694 = browser.currentScene.createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet693.coord = Coordinate694;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA695 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA695.USE = "HAnimSegmentLineColorRGBA";
LineSet693.color = ColorRGBA695;

Shape692.geometry = LineSet693;

HAnimSegment688.children[1] = Shape692;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

let HAnimJoint696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint696.name = "l_metacarpophalangeal_4";
HAnimJoint696.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint696.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment697.name = "l_carpal_proximal_phalanx_4";
HAnimSegment697.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform698 = browser.currentScene.createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform699 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape700 = browser.currentScene.createNode("Shape");
Shape700.USE = "HAnimJointShape";
Transform699.child = new undefined();

Transform699.child[0] = Shape700;

Transform698.children = new MFNode();

Transform698.children[0] = Transform699;

HAnimSegment697.children = new MFNode();

HAnimSegment697.children[0] = Transform698;

let Shape701 = browser.currentScene.createNode("Shape");
let LineSet702 = browser.currentScene.createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
let Coordinate703 = browser.currentScene.createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet702.coord = Coordinate703;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA704 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA704.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA704;

Shape701.geometry = LineSet702;

HAnimSegment697.children[1] = Shape701;

HAnimJoint696.children = new MFNode();

HAnimJoint696.children[0] = HAnimSegment697;

let HAnimJoint705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint705.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint705.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint705.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment706.name = "l_carpal_middle_phalanx_4";
HAnimSegment706.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform708 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape709 = browser.currentScene.createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.child = new undefined();

Transform708.child[0] = Shape709;

Transform707.children = new MFNode();

Transform707.children[0] = Transform708;

HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = Transform707;

let Shape710 = browser.currentScene.createNode("Shape");
let LineSet711 = browser.currentScene.createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
let Coordinate712 = browser.currentScene.createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet711.coord = Coordinate712;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA713 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[1] = Shape710;

let HAnimSite714 = browser.currentScene.createNode("HAnimSite");
HAnimSite714.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite714.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor715 = browser.currentScene.createNode("TouchSensor");
TouchSensor715.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite714.children = new MFNode();

HAnimSite714.children[0] = TouchSensor715;

let Shape716 = browser.currentScene.createNode("Shape");
Shape716.USE = "HAnimSiteShape";
HAnimSite714.children[1] = Shape716;

HAnimSegment706.children[2] = HAnimSite714;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

let HAnimJoint717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint717.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint717.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint717.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint705.children[1] = HAnimJoint717;

HAnimJoint696.children[1] = HAnimJoint705;

HAnimJoint687.children[1] = HAnimJoint696;

HAnimJoint566.children[4] = HAnimJoint687;

let HAnimJoint718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint718.name = "l_carpometacarpal_5";
HAnimJoint718.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint718.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment719 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment719.name = "l_metacarpal_5";
HAnimSegment719.DEF = "hanim_l_metacarpal_5";
let Transform720 = browser.currentScene.createNode("Transform");
Transform720.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform721 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape722 = browser.currentScene.createNode("Shape");
Shape722.USE = "HAnimJointShape";
Transform721.child = new undefined();

Transform721.child[0] = Shape722;

Transform720.children = new MFNode();

Transform720.children[0] = Transform721;

HAnimSegment719.children = new MFNode();

HAnimSegment719.children[0] = Transform720;

let Shape723 = browser.currentScene.createNode("Shape");
let LineSet724 = browser.currentScene.createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet724.coord = Coordinate725;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA726 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment719.children[1] = Shape723;

HAnimJoint718.children = new MFNode();

HAnimJoint718.children[0] = HAnimSegment719;

let HAnimJoint727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint727.name = "l_metacarpophalangeal_5";
HAnimJoint727.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint727.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment728.name = "l_carpal_proximal_phalanx_5";
HAnimSegment728.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform729 = browser.currentScene.createNode("Transform");
Transform729.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform730 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape731 = browser.currentScene.createNode("Shape");
Shape731.USE = "HAnimJointShape";
Transform730.child = new undefined();

Transform730.child[0] = Shape731;

Transform729.children = new MFNode();

Transform729.children[0] = Transform730;

HAnimSegment728.children = new MFNode();

HAnimSegment728.children[0] = Transform729;

let Shape732 = browser.currentScene.createNode("Shape");
let LineSet733 = browser.currentScene.createNode("LineSet");
LineSet733.vertexCount = new MFInt32(new int[2]);
let Coordinate734 = browser.currentScene.createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet733.coord = Coordinate734;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA735 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet733.color = ColorRGBA735;

Shape732.geometry = LineSet733;

HAnimSegment728.children[1] = Shape732;

HAnimJoint727.children = new MFNode();

HAnimJoint727.children[0] = HAnimSegment728;

let HAnimJoint736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint736.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint736.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint736.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment737.name = "l_carpal_middle_phalanx_5";
HAnimSegment737.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform738 = browser.currentScene.createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform739 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "HAnimJointShape";
Transform739.child = new undefined();

Transform739.child[0] = Shape740;

Transform738.children = new MFNode();

Transform738.children[0] = Transform739;

HAnimSegment737.children = new MFNode();

HAnimSegment737.children[0] = Transform738;

let Shape741 = browser.currentScene.createNode("Shape");
let LineSet742 = browser.currentScene.createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
let Coordinate743 = browser.currentScene.createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet742.coord = Coordinate743;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA744 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSegmentLineColorRGBA";
LineSet742.color = ColorRGBA744;

Shape741.geometry = LineSet742;

HAnimSegment737.children[1] = Shape741;

let HAnimSite745 = browser.currentScene.createNode("HAnimSite");
HAnimSite745.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite745.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor746 = browser.currentScene.createNode("TouchSensor");
TouchSensor746.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = TouchSensor746;

let Shape747 = browser.currentScene.createNode("Shape");
Shape747.USE = "HAnimSiteShape";
HAnimSite745.children[1] = Shape747;

HAnimSegment737.children[2] = HAnimSite745;

HAnimJoint736.children = new MFNode();

HAnimJoint736.children[0] = HAnimSegment737;

let HAnimJoint748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint748.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint748.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint748.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint736.children[1] = HAnimJoint748;

HAnimJoint727.children[1] = HAnimJoint736;

HAnimJoint718.children[1] = HAnimJoint727;

HAnimJoint566.children[5] = HAnimJoint718;

HAnimJoint554.children[1] = HAnimJoint566;

HAnimJoint533.children[1] = HAnimJoint554;

HAnimJoint518.children[1] = HAnimJoint533;

HAnimJoint509.children[1] = HAnimJoint518;

HAnimJoint395.children[2] = HAnimJoint509;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.name = "r_sternoclavicular";
HAnimJoint749.DEF = "hanim_r_sternoclavicular";
HAnimJoint749.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let HAnimSegment750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment750.name = "r_clavicle";
HAnimSegment750.DEF = "hanim_r_clavicle";
let Transform751 = browser.currentScene.createNode("Transform");
Transform751.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform752 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape753 = browser.currentScene.createNode("Shape");
Shape753.USE = "HAnimJointShape";
Transform752.child = new undefined();

Transform752.child[0] = Shape753;

Transform751.children = new MFNode();

Transform751.children[0] = Transform752;

HAnimSegment750.children = new MFNode();

HAnimSegment750.children[0] = Transform751;

let Shape754 = browser.currentScene.createNode("Shape");
let LineSet755 = browser.currentScene.createNode("LineSet");
LineSet755.vertexCount = new MFInt32(new int[2]);
let Coordinate756 = browser.currentScene.createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet755.coord = Coordinate756;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

let HAnimJoint758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint758.name = "r_acromioclavicular";
HAnimJoint758.DEF = "hanim_r_acromioclavicular";
HAnimJoint758.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let HAnimSegment759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment759.name = "r_scapula";
HAnimSegment759.DEF = "hanim_r_scapula";
let Transform760 = browser.currentScene.createNode("Transform");
Transform760.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform761 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape762 = browser.currentScene.createNode("Shape");
Shape762.USE = "HAnimJointShape";
Transform761.child = new undefined();

Transform761.child[0] = Shape762;

Transform760.children = new MFNode();

Transform760.children[0] = Transform761;

HAnimSegment759.children = new MFNode();

HAnimSegment759.children[0] = Transform760;

let Shape763 = browser.currentScene.createNode("Shape");
let LineSet764 = browser.currentScene.createNode("LineSet");
LineSet764.vertexCount = new MFInt32(new int[2]);
let Coordinate765 = browser.currentScene.createNode("Coordinate");
Coordinate765.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet764.coord = Coordinate765;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA766 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSegmentLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment759.children[1] = Shape763;

let HAnimSite767 = browser.currentScene.createNode("HAnimSite");
HAnimSite767.name = "r_bideltoid";
HAnimSite767.DEF = "hanim_r_bideltoid";
let TouchSensor768 = browser.currentScene.createNode("TouchSensor");
TouchSensor768.description = "HAnimSite r_bideltoid";
HAnimSite767.children = new MFNode();

HAnimSite767.children[0] = TouchSensor768;

let Shape769 = browser.currentScene.createNode("Shape");
Shape769.USE = "HAnimSiteShape";
HAnimSite767.children[1] = Shape769;

HAnimSegment759.children[2] = HAnimSite767;

let HAnimSite770 = browser.currentScene.createNode("HAnimSite");
HAnimSite770.name = "r_humeral_lateral_epicondyles";
HAnimSite770.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite770.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor771 = browser.currentScene.createNode("TouchSensor");
TouchSensor771.description = "HAnimSite r_humeral_lateral_epicondyles";
HAnimSite770.children = new MFNode();

HAnimSite770.children[0] = TouchSensor771;

let Shape772 = browser.currentScene.createNode("Shape");
Shape772.USE = "HAnimSiteShape";
HAnimSite770.children[1] = Shape772;

HAnimSegment759.children[3] = HAnimSite770;

HAnimJoint758.children = new MFNode();

HAnimJoint758.children[0] = HAnimSegment759;

let HAnimJoint773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint773.name = "r_shoulder";
HAnimJoint773.DEF = "hanim_r_shoulder";
HAnimJoint773.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment774.name = "r_upperarm";
HAnimSegment774.DEF = "hanim_r_upperarm";
let Transform775 = browser.currentScene.createNode("Transform");
Transform775.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform776 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape777 = browser.currentScene.createNode("Shape");
Shape777.USE = "HAnimJointShape";
Transform776.child = new undefined();

Transform776.child[0] = Shape777;

Transform775.children = new MFNode();

Transform775.children[0] = Transform776;

HAnimSegment774.children = new MFNode();

HAnimSegment774.children[0] = Transform775;

let Shape778 = browser.currentScene.createNode("Shape");
let LineSet779 = browser.currentScene.createNode("LineSet");
LineSet779.vertexCount = new MFInt32(new int[2]);
let Coordinate780 = browser.currentScene.createNode("Coordinate");
Coordinate780.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet779.coord = Coordinate780;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA781 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA";
LineSet779.color = ColorRGBA781;

Shape778.geometry = LineSet779;

HAnimSegment774.children[1] = Shape778;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "r_humeral_medial_epicondyles";
HAnimSite782.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite782.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor783 = browser.currentScene.createNode("TouchSensor");
TouchSensor783.description = "HAnimSite r_humeral_medial_epicondyles";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment774.children[2] = HAnimSite782;

let HAnimSite785 = browser.currentScene.createNode("HAnimSite");
HAnimSite785.name = "r_olecranon";
HAnimSite785.DEF = "hanim_r_olecranon";
HAnimSite785.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor786 = browser.currentScene.createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_olecranon";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment774.children[3] = HAnimSite785;

let HAnimSite788 = browser.currentScene.createNode("HAnimSite");
HAnimSite788.name = "r_radial_styloid";
HAnimSite788.DEF = "hanim_r_radial_styloid";
HAnimSite788.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor789 = browser.currentScene.createNode("TouchSensor");
TouchSensor789.description = "HAnimSite r_radial_styloid";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment774.children[4] = HAnimSite788;

let HAnimSite791 = browser.currentScene.createNode("HAnimSite");
HAnimSite791.name = "r_radiale";
HAnimSite791.DEF = "hanim_r_radiale";
HAnimSite791.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor792 = browser.currentScene.createNode("TouchSensor");
TouchSensor792.description = "HAnimSite r_radiale";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

let Shape793 = browser.currentScene.createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment774.children[5] = HAnimSite791;

HAnimJoint773.children = new MFNode();

HAnimJoint773.children[0] = HAnimSegment774;

let HAnimJoint794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint794.name = "r_elbow";
HAnimJoint794.DEF = "hanim_r_elbow";
HAnimJoint794.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment795.name = "r_forearm";
HAnimSegment795.DEF = "hanim_r_forearm";
let Transform796 = browser.currentScene.createNode("Transform");
Transform796.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform797 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "HAnimJointShape";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

Transform796.children = new MFNode();

Transform796.children[0] = Transform797;

HAnimSegment795.children = new MFNode();

HAnimSegment795.children[0] = Transform796;

let Shape799 = browser.currentScene.createNode("Shape");
let LineSet800 = browser.currentScene.createNode("LineSet");
LineSet800.vertexCount = new MFInt32(new int[2]);
let Coordinate801 = browser.currentScene.createNode("Coordinate");
Coordinate801.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet800.coord = Coordinate801;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA802 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA802.USE = "HAnimSegmentLineColorRGBA";
LineSet800.color = ColorRGBA802;

Shape799.geometry = LineSet800;

HAnimSegment795.children[1] = Shape799;

let HAnimSite803 = browser.currentScene.createNode("HAnimSite");
HAnimSite803.name = "r_ulnar_styloid";
HAnimSite803.DEF = "hanim_r_ulnar_styloid";
HAnimSite803.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor804 = browser.currentScene.createNode("TouchSensor");
TouchSensor804.description = "HAnimSite r_ulnar_styloid";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = TouchSensor804;

let Shape805 = browser.currentScene.createNode("Shape");
Shape805.USE = "HAnimSiteShape";
HAnimSite803.children[1] = Shape805;

HAnimSegment795.children[2] = HAnimSite803;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = HAnimSegment795;

let HAnimJoint806 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint806.name = "r_radiocarpal";
HAnimJoint806.DEF = "hanim_r_radiocarpal";
HAnimJoint806.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment807.name = "r_carpal";
HAnimSegment807.DEF = "hanim_r_carpal";
let Transform808 = browser.currentScene.createNode("Transform");
Transform808.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform808.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform808.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform809 = browser.currentScene.createNode("Transform");
Transform809.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape810 = browser.currentScene.createNode("Shape");
Shape810.USE = "HAnimJointShape";
Transform809.child = new undefined();

Transform809.child[0] = Shape810;

Transform808.children = new MFNode();

Transform808.children[0] = Transform809;

HAnimSegment807.children = new MFNode();

HAnimSegment807.children[0] = Transform808;

let Shape811 = browser.currentScene.createNode("Shape");
let LineSet812 = browser.currentScene.createNode("LineSet");
LineSet812.vertexCount = new MFInt32(new int[2]);
let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet812.coord = Coordinate813;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
let ColorRGBA814 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA814.USE = "HAnimSegmentLineColorRGBA";
LineSet812.color = ColorRGBA814;

Shape811.geometry = LineSet812;

HAnimSegment807.children[1] = Shape811;

let Shape815 = browser.currentScene.createNode("Shape");
let LineSet816 = browser.currentScene.createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
let Coordinate817 = browser.currentScene.createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet816.coord = Coordinate817;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
let ColorRGBA818 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA818.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA818;

Shape815.geometry = LineSet816;

HAnimSegment807.children[2] = Shape815;

let HAnimSite819 = browser.currentScene.createNode("HAnimSite");
HAnimSite819.name = "r_metacarpal_phalanx_2";
HAnimSite819.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite819.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor820 = browser.currentScene.createNode("TouchSensor");
TouchSensor820.description = "HAnimSite r_metacarpal_phalanx_2";
HAnimSite819.children = new MFNode();

HAnimSite819.children[0] = TouchSensor820;

let Shape821 = browser.currentScene.createNode("Shape");
Shape821.USE = "HAnimSiteShape";
HAnimSite819.children[1] = Shape821;

HAnimSegment807.children[3] = HAnimSite819;

let Shape822 = browser.currentScene.createNode("Shape");
let LineSet823 = browser.currentScene.createNode("LineSet");
LineSet823.vertexCount = new MFInt32(new int[2]);
let Coordinate824 = browser.currentScene.createNode("Coordinate");
Coordinate824.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet823.coord = Coordinate824;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
let ColorRGBA825 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA825.USE = "HAnimSegmentLineColorRGBA";
LineSet823.color = ColorRGBA825;

Shape822.geometry = LineSet823;

HAnimSegment807.children[4] = Shape822;

let HAnimSite826 = browser.currentScene.createNode("HAnimSite");
HAnimSite826.name = "r_metacarpal_phalanx_3";
HAnimSite826.DEF = "hanim_r_metacarpal_phalanx_3";
let TouchSensor827 = browser.currentScene.createNode("TouchSensor");
TouchSensor827.description = "HAnimSite r_metacarpal_phalanx_3";
HAnimSite826.children = new MFNode();

HAnimSite826.children[0] = TouchSensor827;

let Shape828 = browser.currentScene.createNode("Shape");
Shape828.USE = "HAnimSiteShape";
HAnimSite826.children[1] = Shape828;

HAnimSegment807.children[5] = HAnimSite826;

let Shape829 = browser.currentScene.createNode("Shape");
let LineSet830 = browser.currentScene.createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[2]);
let Coordinate831 = browser.currentScene.createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet830.coord = Coordinate831;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
let ColorRGBA832 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA832;

Shape829.geometry = LineSet830;

HAnimSegment807.children[6] = Shape829;

let Shape833 = browser.currentScene.createNode("Shape");
let LineSet834 = browser.currentScene.createNode("LineSet");
LineSet834.vertexCount = new MFInt32(new int[2]);
let Coordinate835 = browser.currentScene.createNode("Coordinate");
Coordinate835.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet834.coord = Coordinate835;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
let ColorRGBA836 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA836.USE = "HAnimSegmentLineColorRGBA";
LineSet834.color = ColorRGBA836;

Shape833.geometry = LineSet834;

HAnimSegment807.children[7] = Shape833;

let HAnimSite837 = browser.currentScene.createNode("HAnimSite");
HAnimSite837.name = "r_metacarpal_phalanx_5";
HAnimSite837.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite837.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor838 = browser.currentScene.createNode("TouchSensor");
TouchSensor838.description = "HAnimSite r_metacarpal_phalanx_5";
HAnimSite837.children = new MFNode();

HAnimSite837.children[0] = TouchSensor838;

let Shape839 = browser.currentScene.createNode("Shape");
Shape839.USE = "HAnimSiteShape";
HAnimSite837.children[1] = Shape839;

HAnimSegment807.children[8] = HAnimSite837;

HAnimJoint806.children = new MFNode();

HAnimJoint806.children[0] = HAnimSegment807;

let HAnimJoint840 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint840.name = "r_carpometacarpal_1";
HAnimJoint840.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint840.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let HAnimSegment841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment841.name = "r_metacarpal_1";
HAnimSegment841.DEF = "hanim_r_metacarpal_1";
let Transform842 = browser.currentScene.createNode("Transform");
Transform842.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform843 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape844 = browser.currentScene.createNode("Shape");
Shape844.USE = "HAnimJointShape";
Transform843.child = new undefined();

Transform843.child[0] = Shape844;

Transform842.children = new MFNode();

Transform842.children[0] = Transform843;

HAnimSegment841.children = new MFNode();

HAnimSegment841.children[0] = Transform842;

let Shape845 = browser.currentScene.createNode("Shape");
let LineSet846 = browser.currentScene.createNode("LineSet");
LineSet846.vertexCount = new MFInt32(new int[2]);
let Coordinate847 = browser.currentScene.createNode("Coordinate");
Coordinate847.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet846.coord = Coordinate847;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA848 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA848.USE = "HAnimSegmentLineColorRGBA";
LineSet846.color = ColorRGBA848;

Shape845.geometry = LineSet846;

HAnimSegment841.children[1] = Shape845;

HAnimJoint840.children = new MFNode();

HAnimJoint840.children[0] = HAnimSegment841;

let HAnimJoint849 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint849.name = "r_metacarpophalangeal_1";
HAnimJoint849.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint849.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let HAnimSegment850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment850.name = "r_carpal_proximal_phalanx_1";
HAnimSegment850.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform851 = browser.currentScene.createNode("Transform");
Transform851.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform852 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimJointShape";
Transform852.child = new undefined();

Transform852.child[0] = Shape853;

Transform851.children = new MFNode();

Transform851.children[0] = Transform852;

HAnimSegment850.children = new MFNode();

HAnimSegment850.children[0] = Transform851;

let Shape854 = browser.currentScene.createNode("Shape");
let LineSet855 = browser.currentScene.createNode("LineSet");
LineSet855.vertexCount = new MFInt32(new int[2]);
let Coordinate856 = browser.currentScene.createNode("Coordinate");
Coordinate856.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet855.coord = Coordinate856;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA857 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA857.USE = "HAnimSegmentLineColorRGBA";
LineSet855.color = ColorRGBA857;

Shape854.geometry = LineSet855;

HAnimSegment850.children[1] = Shape854;

let HAnimSite858 = browser.currentScene.createNode("HAnimSite");
HAnimSite858.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite858.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor859 = browser.currentScene.createNode("TouchSensor");
TouchSensor859.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite858.children = new MFNode();

HAnimSite858.children[0] = TouchSensor859;

let Shape860 = browser.currentScene.createNode("Shape");
Shape860.USE = "HAnimSiteShape";
HAnimSite858.children[1] = Shape860;

HAnimSegment850.children[2] = HAnimSite858;

HAnimJoint849.children = new MFNode();

HAnimJoint849.children[0] = HAnimSegment850;

let HAnimJoint861 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint861.name = "r_carpal_interphalangeal_1";
HAnimJoint861.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint861.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint849.children[1] = HAnimJoint861;

HAnimJoint840.children[1] = HAnimJoint849;

HAnimJoint806.children[1] = HAnimJoint840;

let HAnimJoint862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint862.name = "r_carpometacarpal_2";
HAnimJoint862.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint862.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.name = "r_metacarpal_2";
HAnimSegment863.DEF = "hanim_r_metacarpal_2";
let Transform864 = browser.currentScene.createNode("Transform");
Transform864.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform865 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "HAnimJointShape";
Transform865.child = new undefined();

Transform865.child[0] = Shape866;

Transform864.children = new MFNode();

Transform864.children[0] = Transform865;

HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = Transform864;

let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet868.coord = Coordinate869;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment863.children[1] = Shape867;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

let HAnimJoint871 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint871.name = "r_metacarpophalangeal_2";
HAnimJoint871.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint871.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let HAnimSegment872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment872.name = "r_carpal_proximal_phalanx_2";
HAnimSegment872.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform873 = browser.currentScene.createNode("Transform");
Transform873.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform874 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape875 = browser.currentScene.createNode("Shape");
Shape875.USE = "HAnimJointShape";
Transform874.child = new undefined();

Transform874.child[0] = Shape875;

Transform873.children = new MFNode();

Transform873.children[0] = Transform874;

HAnimSegment872.children = new MFNode();

HAnimSegment872.children[0] = Transform873;

let Shape876 = browser.currentScene.createNode("Shape");
let LineSet877 = browser.currentScene.createNode("LineSet");
LineSet877.vertexCount = new MFInt32(new int[2]);
let Coordinate878 = browser.currentScene.createNode("Coordinate");
Coordinate878.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet877.coord = Coordinate878;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA879 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSegmentLineColorRGBA";
LineSet877.color = ColorRGBA879;

Shape876.geometry = LineSet877;

HAnimSegment872.children[1] = Shape876;

HAnimJoint871.children = new MFNode();

HAnimJoint871.children[0] = HAnimSegment872;

let HAnimJoint880 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint880.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint880.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint880.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let HAnimSegment881 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment881.name = "r_carpal_middle_phalanx_2";
HAnimSegment881.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform882 = browser.currentScene.createNode("Transform");
Transform882.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform883 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimJointShape";
Transform883.child = new undefined();

Transform883.child[0] = Shape884;

Transform882.children = new MFNode();

Transform882.children[0] = Transform883;

HAnimSegment881.children = new MFNode();

HAnimSegment881.children[0] = Transform882;

let Shape885 = browser.currentScene.createNode("Shape");
let LineSet886 = browser.currentScene.createNode("LineSet");
LineSet886.vertexCount = new MFInt32(new int[2]);
let Coordinate887 = browser.currentScene.createNode("Coordinate");
Coordinate887.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet886.coord = Coordinate887;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA888 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA888.USE = "HAnimSegmentLineColorRGBA";
LineSet886.color = ColorRGBA888;

Shape885.geometry = LineSet886;

HAnimSegment881.children[1] = Shape885;

let HAnimSite889 = browser.currentScene.createNode("HAnimSite");
HAnimSite889.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite889.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor890 = browser.currentScene.createNode("TouchSensor");
TouchSensor890.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = TouchSensor890;

let Shape891 = browser.currentScene.createNode("Shape");
Shape891.USE = "HAnimSiteShape";
HAnimSite889.children[1] = Shape891;

HAnimSegment881.children[2] = HAnimSite889;

let HAnimSite892 = browser.currentScene.createNode("HAnimSite");
HAnimSite892.name = "r_dactylion";
HAnimSite892.DEF = "hanim_r_dactylion";
HAnimSite892.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor893 = browser.currentScene.createNode("TouchSensor");
TouchSensor893.description = "HAnimSite r_dactylion";
HAnimSite892.children = new MFNode();

HAnimSite892.children[0] = TouchSensor893;

let Shape894 = browser.currentScene.createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892.children[1] = Shape894;

HAnimSegment881.children[3] = HAnimSite892;

HAnimJoint880.children = new MFNode();

HAnimJoint880.children[0] = HAnimSegment881;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint895.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint895.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint880.children[1] = HAnimJoint895;

HAnimJoint871.children[1] = HAnimJoint880;

HAnimJoint862.children[1] = HAnimJoint871;

HAnimJoint806.children[2] = HAnimJoint862;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.name = "r_carpometacarpal_3";
HAnimJoint896.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint896.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let HAnimSegment897 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment897.name = "r_metacarpal_3";
HAnimSegment897.DEF = "hanim_r_metacarpal_3";
let Transform898 = browser.currentScene.createNode("Transform");
Transform898.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform899 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape900 = browser.currentScene.createNode("Shape");
Shape900.USE = "HAnimJointShape";
Transform899.child = new undefined();

Transform899.child[0] = Shape900;

Transform898.children = new MFNode();

Transform898.children[0] = Transform899;

HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = Transform898;

let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet902.coord = Coordinate903;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA904 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

let HAnimJoint905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint905.name = "r_metacarpophalangeal_3";
HAnimJoint905.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint905.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let HAnimSegment906 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment906.name = "r_carpal_proximal_phalanx_3";
HAnimSegment906.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform907 = browser.currentScene.createNode("Transform");
Transform907.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform908 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape909 = browser.currentScene.createNode("Shape");
Shape909.USE = "HAnimJointShape";
Transform908.child = new undefined();

Transform908.child[0] = Shape909;

Transform907.children = new MFNode();

Transform907.children[0] = Transform908;

HAnimSegment906.children = new MFNode();

HAnimSegment906.children[0] = Transform907;

let Shape910 = browser.currentScene.createNode("Shape");
let LineSet911 = browser.currentScene.createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet911.coord = Coordinate912;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA913 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint914.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint914.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let HAnimSegment915 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment915.name = "r_carpal_middle_phalanx_3";
HAnimSegment915.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform916 = browser.currentScene.createNode("Transform");
Transform916.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform917 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "HAnimJointShape";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

Transform916.children = new MFNode();

Transform916.children[0] = Transform917;

HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = Transform916;

let Shape919 = browser.currentScene.createNode("Shape");
let LineSet920 = browser.currentScene.createNode("LineSet");
LineSet920.vertexCount = new MFInt32(new int[2]);
let Coordinate921 = browser.currentScene.createNode("Coordinate");
Coordinate921.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet920.coord = Coordinate921;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA922 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA";
LineSet920.color = ColorRGBA922;

Shape919.geometry = LineSet920;

HAnimSegment915.children[1] = Shape919;

let HAnimSite923 = browser.currentScene.createNode("HAnimSite");
HAnimSite923.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite923.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor924 = browser.currentScene.createNode("TouchSensor");
TouchSensor924.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite923.children = new MFNode();

HAnimSite923.children[0] = TouchSensor924;

let Shape925 = browser.currentScene.createNode("Shape");
Shape925.USE = "HAnimSiteShape";
HAnimSite923.children[1] = Shape925;

HAnimSegment915.children[2] = HAnimSite923;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint926.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint926.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint914.children[1] = HAnimJoint926;

HAnimJoint905.children[1] = HAnimJoint914;

HAnimJoint896.children[1] = HAnimJoint905;

HAnimJoint806.children[3] = HAnimJoint896;

let HAnimJoint927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint927.name = "r_carpometacarpal_4";
HAnimJoint927.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint927.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let HAnimSegment928 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment928.name = "r_metacarpal_4";
HAnimSegment928.DEF = "hanim_r_metacarpal_4";
let Transform929 = browser.currentScene.createNode("Transform");
Transform929.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform930 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape931 = browser.currentScene.createNode("Shape");
Shape931.USE = "HAnimJointShape";
Transform930.child = new undefined();

Transform930.child[0] = Shape931;

Transform929.children = new MFNode();

Transform929.children[0] = Transform930;

HAnimSegment928.children = new MFNode();

HAnimSegment928.children[0] = Transform929;

let Shape932 = browser.currentScene.createNode("Shape");
let LineSet933 = browser.currentScene.createNode("LineSet");
LineSet933.vertexCount = new MFInt32(new int[2]);
let Coordinate934 = browser.currentScene.createNode("Coordinate");
Coordinate934.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet933.coord = Coordinate934;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA935 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA935.USE = "HAnimSegmentLineColorRGBA";
LineSet933.color = ColorRGBA935;

Shape932.geometry = LineSet933;

HAnimSegment928.children[1] = Shape932;

HAnimJoint927.children = new MFNode();

HAnimJoint927.children[0] = HAnimSegment928;

let HAnimJoint936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint936.name = "r_metacarpophalangeal_4";
HAnimJoint936.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint936.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let HAnimSegment937 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment937.name = "r_carpal_proximal_phalanx_4";
HAnimSegment937.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform938 = browser.currentScene.createNode("Transform");
Transform938.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform939 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "HAnimJointShape";
Transform939.child = new undefined();

Transform939.child[0] = Shape940;

Transform938.children = new MFNode();

Transform938.children[0] = Transform939;

HAnimSegment937.children = new MFNode();

HAnimSegment937.children[0] = Transform938;

let Shape941 = browser.currentScene.createNode("Shape");
let LineSet942 = browser.currentScene.createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
let Coordinate943 = browser.currentScene.createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet942.coord = Coordinate943;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA944 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSegmentLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimSegment937.children[1] = Shape941;

HAnimJoint936.children = new MFNode();

HAnimJoint936.children[0] = HAnimSegment937;

let HAnimJoint945 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint945.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint945.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint945.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let HAnimSegment946 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment946.name = "r_carpal_middle_phalanx_4";
HAnimSegment946.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform947 = browser.currentScene.createNode("Transform");
Transform947.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform948 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape949 = browser.currentScene.createNode("Shape");
Shape949.USE = "HAnimJointShape";
Transform948.child = new undefined();

Transform948.child[0] = Shape949;

Transform947.children = new MFNode();

Transform947.children[0] = Transform948;

HAnimSegment946.children = new MFNode();

HAnimSegment946.children[0] = Transform947;

let Shape950 = browser.currentScene.createNode("Shape");
let LineSet951 = browser.currentScene.createNode("LineSet");
LineSet951.vertexCount = new MFInt32(new int[2]);
let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet951.coord = Coordinate952;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA953 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
LineSet951.color = ColorRGBA953;

Shape950.geometry = LineSet951;

HAnimSegment946.children[1] = Shape950;

let HAnimSite954 = browser.currentScene.createNode("HAnimSite");
HAnimSite954.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite954.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor955 = browser.currentScene.createNode("TouchSensor");
TouchSensor955.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite954.children = new MFNode();

HAnimSite954.children[0] = TouchSensor955;

let Shape956 = browser.currentScene.createNode("Shape");
Shape956.USE = "HAnimSiteShape";
HAnimSite954.children[1] = Shape956;

HAnimSegment946.children[2] = HAnimSite954;

HAnimJoint945.children = new MFNode();

HAnimJoint945.children[0] = HAnimSegment946;

let HAnimJoint957 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint957.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint957.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint957.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint945.children[1] = HAnimJoint957;

HAnimJoint936.children[1] = HAnimJoint945;

HAnimJoint927.children[1] = HAnimJoint936;

HAnimJoint806.children[4] = HAnimJoint927;

let HAnimJoint958 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint958.name = "r_carpometacarpal_5";
HAnimJoint958.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint958.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let HAnimSegment959 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment959.name = "r_metacarpal_5";
HAnimSegment959.DEF = "hanim_r_metacarpal_5";
let Transform960 = browser.currentScene.createNode("Transform");
Transform960.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform961 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape962 = browser.currentScene.createNode("Shape");
Shape962.USE = "HAnimJointShape";
Transform961.child = new undefined();

Transform961.child[0] = Shape962;

Transform960.children = new MFNode();

Transform960.children[0] = Transform961;

HAnimSegment959.children = new MFNode();

HAnimSegment959.children[0] = Transform960;

let Shape963 = browser.currentScene.createNode("Shape");
let LineSet964 = browser.currentScene.createNode("LineSet");
LineSet964.vertexCount = new MFInt32(new int[2]);
let Coordinate965 = browser.currentScene.createNode("Coordinate");
Coordinate965.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet964.coord = Coordinate965;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA966 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA966.USE = "HAnimSegmentLineColorRGBA";
LineSet964.color = ColorRGBA966;

Shape963.geometry = LineSet964;

HAnimSegment959.children[1] = Shape963;

HAnimJoint958.children = new MFNode();

HAnimJoint958.children[0] = HAnimSegment959;

let HAnimJoint967 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint967.name = "r_metacarpophalangeal_5";
HAnimJoint967.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint967.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let HAnimSegment968 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment968.name = "r_carpal_proximal_phalanx_5";
HAnimSegment968.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform969 = browser.currentScene.createNode("Transform");
Transform969.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform970 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape971 = browser.currentScene.createNode("Shape");
Shape971.USE = "HAnimJointShape";
Transform970.child = new undefined();

Transform970.child[0] = Shape971;

Transform969.children = new MFNode();

Transform969.children[0] = Transform970;

HAnimSegment968.children = new MFNode();

HAnimSegment968.children[0] = Transform969;

let Shape972 = browser.currentScene.createNode("Shape");
let LineSet973 = browser.currentScene.createNode("LineSet");
LineSet973.vertexCount = new MFInt32(new int[2]);
let Coordinate974 = browser.currentScene.createNode("Coordinate");
Coordinate974.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet973.coord = Coordinate974;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA975 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA975.USE = "HAnimSegmentLineColorRGBA";
LineSet973.color = ColorRGBA975;

Shape972.geometry = LineSet973;

HAnimSegment968.children[1] = Shape972;

HAnimJoint967.children = new MFNode();

HAnimJoint967.children[0] = HAnimSegment968;

let HAnimJoint976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint976.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint976.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint976.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let HAnimSegment977 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment977.name = "r_carpal_middle_phalanx_5";
HAnimSegment977.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform978 = browser.currentScene.createNode("Transform");
Transform978.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform979 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape980 = browser.currentScene.createNode("Shape");
Shape980.USE = "HAnimJointShape";
Transform979.child = new undefined();

Transform979.child[0] = Shape980;

Transform978.children = new MFNode();

Transform978.children[0] = Transform979;

HAnimSegment977.children = new MFNode();

HAnimSegment977.children[0] = Transform978;

let Shape981 = browser.currentScene.createNode("Shape");
let LineSet982 = browser.currentScene.createNode("LineSet");
LineSet982.vertexCount = new MFInt32(new int[2]);
let Coordinate983 = browser.currentScene.createNode("Coordinate");
Coordinate983.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet982.coord = Coordinate983;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA984 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA";
LineSet982.color = ColorRGBA984;

Shape981.geometry = LineSet982;

HAnimSegment977.children[1] = Shape981;

let HAnimSite985 = browser.currentScene.createNode("HAnimSite");
HAnimSite985.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite985.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor986 = browser.currentScene.createNode("TouchSensor");
TouchSensor986.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = TouchSensor986;

let Shape987 = browser.currentScene.createNode("Shape");
Shape987.USE = "HAnimSiteShape";
HAnimSite985.children[1] = Shape987;

HAnimSegment977.children[2] = HAnimSite985;

HAnimJoint976.children = new MFNode();

HAnimJoint976.children[0] = HAnimSegment977;

let HAnimJoint988 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint988.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint988.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint988.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint976.children[1] = HAnimJoint988;

HAnimJoint967.children[1] = HAnimJoint976;

HAnimJoint958.children[1] = HAnimJoint967;

HAnimJoint806.children[5] = HAnimJoint958;

HAnimJoint794.children[1] = HAnimJoint806;

HAnimJoint773.children[1] = HAnimJoint794;

HAnimJoint758.children[1] = HAnimJoint773;

HAnimJoint749.children[1] = HAnimJoint758;

HAnimJoint395.children[3] = HAnimJoint749;

HAnimJoint374.children[1] = HAnimJoint395;

HAnimJoint353.children[1] = HAnimJoint374;

HAnimJoint335.children[1] = HAnimJoint353;

HAnimJoint326.children[1] = HAnimJoint335;

HAnimJoint305.children[1] = HAnimJoint326;

HAnimJoint52.children[2] = HAnimJoint305;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint989 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint989.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint989;

let HAnimJoint990 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint990.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint990;

let HAnimJoint991 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint991.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint991;

let HAnimJoint992 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint992.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint992;

let HAnimJoint993 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint993.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint993;

let HAnimJoint994 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint994.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint994;

let HAnimJoint995 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint995.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint995;

let HAnimJoint996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint996.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint996;

let HAnimJoint997 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint997.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint997;

let HAnimJoint998 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint998.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint998;

let HAnimJoint999 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint999.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint999;

let HAnimJoint1000 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1000.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1000;

let HAnimJoint1001 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1001.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1001;

let HAnimJoint1002 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1002.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1002;

let HAnimJoint1003 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1003.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint1003;

let HAnimJoint1004 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1004.USE = "hanim_vl3";
HAnimHumanoid43.joints[17] = HAnimJoint1004;

let HAnimJoint1005 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1005.USE = "hanim_vl1";
HAnimHumanoid43.joints[18] = HAnimJoint1005;

let HAnimJoint1006 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1006.USE = "hanim_vt10";
HAnimHumanoid43.joints[19] = HAnimJoint1006;

let HAnimJoint1007 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1007.USE = "hanim_vt6";
HAnimHumanoid43.joints[20] = HAnimJoint1007;

let HAnimJoint1008 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1008.USE = "hanim_vt1";
HAnimHumanoid43.joints[21] = HAnimJoint1008;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.USE = "hanim_vc4";
HAnimHumanoid43.joints[22] = HAnimJoint1009;

let HAnimJoint1010 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1010.USE = "hanim_vc2";
HAnimHumanoid43.joints[23] = HAnimJoint1010;

let HAnimJoint1011 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1011.USE = "hanim_skullbase";
HAnimHumanoid43.joints[24] = HAnimJoint1011;

let HAnimJoint1012 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1012.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[25] = HAnimJoint1012;

let HAnimJoint1013 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1013.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[26] = HAnimJoint1013;

let HAnimJoint1014 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1014.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[27] = HAnimJoint1014;

let HAnimJoint1015 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1015.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[28] = HAnimJoint1015;

let HAnimJoint1016 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1016.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[29] = HAnimJoint1016;

let HAnimJoint1017 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1017.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[30] = HAnimJoint1017;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[31] = HAnimJoint1018;

let HAnimJoint1019 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1019.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[32] = HAnimJoint1019;

let HAnimJoint1020 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1020.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[33] = HAnimJoint1020;

let HAnimJoint1021 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1021.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[34] = HAnimJoint1021;

let HAnimJoint1022 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1022.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[35] = HAnimJoint1022;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[36] = HAnimJoint1023;

let HAnimJoint1024 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1024.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[37] = HAnimJoint1024;

let HAnimJoint1025 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1025.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[38] = HAnimJoint1025;

let HAnimJoint1026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1026.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[39] = HAnimJoint1026;

let HAnimJoint1027 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1027.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[40] = HAnimJoint1027;

let HAnimJoint1028 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1028.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[41] = HAnimJoint1028;

let HAnimJoint1029 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1029.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[42] = HAnimJoint1029;

let HAnimJoint1030 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1030.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[43] = HAnimJoint1030;

let HAnimJoint1031 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1031.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[44] = HAnimJoint1031;

let HAnimJoint1032 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1032.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[45] = HAnimJoint1032;

let HAnimJoint1033 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1033.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[46] = HAnimJoint1033;

let HAnimJoint1034 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1034.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[47] = HAnimJoint1034;

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[48] = HAnimJoint1035;

let HAnimJoint1036 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1036.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint1036;

let HAnimJoint1037 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1037.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[50] = HAnimJoint1037;

let HAnimJoint1038 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1038.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[51] = HAnimJoint1038;

let HAnimJoint1039 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1039.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint1039;

let HAnimJoint1040 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1040.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[53] = HAnimJoint1040;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[54] = HAnimJoint1041;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint1042;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[56] = HAnimJoint1043;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[57] = HAnimJoint1044;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint1045;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint1046;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1047.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint1047;

let HAnimJoint1048 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1048.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[61] = HAnimJoint1048;

let HAnimJoint1049 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1049.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint1049;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint1050;

let HAnimJoint1051 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1051.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[64] = HAnimJoint1051;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[65] = HAnimJoint1052;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint1053;

let HAnimJoint1054 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1054.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint1054;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[68] = HAnimJoint1055;

let HAnimJoint1056 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1056.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[69] = HAnimJoint1056;

let HAnimJoint1057 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1057.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint1057;

let HAnimJoint1058 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1058.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint1058;

let HAnimJoint1059 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1059.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[72] = HAnimJoint1059;

let HAnimSegment1060 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1060.USE = "hanim_sacrum";
HAnimHumanoid43.segments[73] = HAnimSegment1060;

let HAnimSegment1061 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1061.USE = "hanim_pelvis";
HAnimHumanoid43.segments[74] = HAnimSegment1061;

let HAnimSegment1062 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1062.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[75] = HAnimSegment1062;

let HAnimSegment1063 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1063.USE = "hanim_l_calf";
HAnimHumanoid43.segments[76] = HAnimSegment1063;

let HAnimSegment1064 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1064.USE = "hanim_l_talus";
HAnimHumanoid43.segments[77] = HAnimSegment1064;

let HAnimSegment1065 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1065.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[78] = HAnimSegment1065;

let HAnimSegment1066 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1066.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[79] = HAnimSegment1066;

let HAnimSegment1067 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1067.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[80] = HAnimSegment1067;

let HAnimSegment1068 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1068.USE = "hanim_r_calf";
HAnimHumanoid43.segments[81] = HAnimSegment1068;

let HAnimSegment1069 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1069.USE = "hanim_r_talus";
HAnimHumanoid43.segments[82] = HAnimSegment1069;

let HAnimSegment1070 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1070.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[83] = HAnimSegment1070;

let HAnimSegment1071 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1071.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[84] = HAnimSegment1071;

let HAnimSegment1072 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1072.USE = "hanim_l5";
HAnimHumanoid43.segments[85] = HAnimSegment1072;

let HAnimSegment1073 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1073.USE = "hanim_l3";
HAnimHumanoid43.segments[86] = HAnimSegment1073;

let HAnimSegment1074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1074.USE = "hanim_l1";
HAnimHumanoid43.segments[87] = HAnimSegment1074;

let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.USE = "hanim_t10";
HAnimHumanoid43.segments[88] = HAnimSegment1075;

let HAnimSegment1076 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1076.USE = "hanim_t6";
HAnimHumanoid43.segments[89] = HAnimSegment1076;

let HAnimSegment1077 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1077.USE = "hanim_t1";
HAnimHumanoid43.segments[90] = HAnimSegment1077;

let HAnimSegment1078 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1078.USE = "hanim_c4";
HAnimHumanoid43.segments[91] = HAnimSegment1078;

let HAnimSegment1079 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1079.USE = "hanim_c2";
HAnimHumanoid43.segments[92] = HAnimSegment1079;

let HAnimSegment1080 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1080.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[93] = HAnimSegment1080;

let HAnimSegment1081 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1081.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[94] = HAnimSegment1081;

let HAnimSegment1082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1082.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[95] = HAnimSegment1082;

let HAnimSegment1083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1083.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[96] = HAnimSegment1083;

let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[97] = HAnimSegment1084;

let HAnimSegment1085 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1085.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[98] = HAnimSegment1085;

let HAnimSegment1086 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1086.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[99] = HAnimSegment1086;

let HAnimSegment1087 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1087.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[100] = HAnimSegment1087;

let HAnimSegment1088 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1088.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[101] = HAnimSegment1088;

let HAnimSegment1089 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1089.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1089;

let HAnimSegment1090 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1090.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[103] = HAnimSegment1090;

let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[104] = HAnimSegment1091;

let HAnimSegment1092 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1092.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[105] = HAnimSegment1092;

let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[106] = HAnimSegment1093;

let HAnimSegment1094 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1094.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[107] = HAnimSegment1094;

let HAnimSegment1095 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1095.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[108] = HAnimSegment1095;

let HAnimSegment1096 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1096.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[109] = HAnimSegment1096;

let HAnimSegment1097 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1097.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[110] = HAnimSegment1097;

let HAnimSegment1098 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1098.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[111] = HAnimSegment1098;

let HAnimSegment1099 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1099.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[112] = HAnimSegment1099;

let HAnimSegment1100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1100.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[113] = HAnimSegment1100;

let HAnimSegment1101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1101.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[114] = HAnimSegment1101;

let HAnimSegment1102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1102.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[115] = HAnimSegment1102;

let HAnimSegment1103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1103.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[116] = HAnimSegment1103;

let HAnimSegment1104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1104.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[117] = HAnimSegment1104;

let HAnimSegment1105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1105.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[118] = HAnimSegment1105;

let HAnimSegment1106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1106.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[119] = HAnimSegment1106;

let HAnimSegment1107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1107.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[120] = HAnimSegment1107;

let HAnimSegment1108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1108.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[121] = HAnimSegment1108;

let HAnimSegment1109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1109.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[122] = HAnimSegment1109;

let HAnimSegment1110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1110.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[123] = HAnimSegment1110;

let HAnimSegment1111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1111.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[124] = HAnimSegment1111;

let HAnimSegment1112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1112.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[125] = HAnimSegment1112;

let HAnimSegment1113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1113.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[126] = HAnimSegment1113;

let HAnimSegment1114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1114.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[127] = HAnimSegment1114;

let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[128] = HAnimSegment1115;

let HAnimSegment1116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1116.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[129] = HAnimSegment1116;

let HAnimSegment1117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1117.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[130] = HAnimSegment1117;

let HAnimSite1118 = browser.currentScene.createNode("HAnimSite");
HAnimSite1118.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[131] = HAnimSite1118;

let HAnimSite1119 = browser.currentScene.createNode("HAnimSite");
HAnimSite1119.USE = "hanim_crotch";
HAnimHumanoid43.viewpoints[132] = HAnimSite1119;

let HAnimSite1120 = browser.currentScene.createNode("HAnimSite");
HAnimSite1120.USE = "hanim_l_asis";
HAnimHumanoid43.viewpoints[133] = HAnimSite1120;

let HAnimSite1121 = browser.currentScene.createNode("HAnimSite");
HAnimSite1121.USE = "hanim_l_iliocristale";
HAnimHumanoid43.viewpoints[134] = HAnimSite1121;

let HAnimSite1122 = browser.currentScene.createNode("HAnimSite");
HAnimSite1122.USE = "hanim_l_psis";
HAnimHumanoid43.viewpoints[135] = HAnimSite1122;

let HAnimSite1123 = browser.currentScene.createNode("HAnimSite");
HAnimSite1123.USE = "hanim_l_trochanterion";
HAnimHumanoid43.viewpoints[136] = HAnimSite1123;

let HAnimSite1124 = browser.currentScene.createNode("HAnimSite");
HAnimSite1124.USE = "hanim_r_asis";
HAnimHumanoid43.viewpoints[137] = HAnimSite1124;

let HAnimSite1125 = browser.currentScene.createNode("HAnimSite");
HAnimSite1125.USE = "hanim_r_iliocristale";
HAnimHumanoid43.viewpoints[138] = HAnimSite1125;

let HAnimSite1126 = browser.currentScene.createNode("HAnimSite");
HAnimSite1126.USE = "hanim_r_psis";
HAnimHumanoid43.viewpoints[139] = HAnimSite1126;

let HAnimSite1127 = browser.currentScene.createNode("HAnimSite");
HAnimSite1127.USE = "hanim_r_trochanterion";
HAnimHumanoid43.viewpoints[140] = HAnimSite1127;

let HAnimSite1128 = browser.currentScene.createNode("HAnimSite");
HAnimSite1128.USE = "hanim_navel";
HAnimHumanoid43.viewpoints[141] = HAnimSite1128;

let HAnimSite1129 = browser.currentScene.createNode("HAnimSite");
HAnimSite1129.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid43.viewpoints[142] = HAnimSite1129;

let HAnimSite1130 = browser.currentScene.createNode("HAnimSite");
HAnimSite1130.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid43.viewpoints[143] = HAnimSite1130;

let HAnimSite1131 = browser.currentScene.createNode("HAnimSite");
HAnimSite1131.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[144] = HAnimSite1131;

let HAnimSite1132 = browser.currentScene.createNode("HAnimSite");
HAnimSite1132.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[145] = HAnimSite1132;

let HAnimSite1133 = browser.currentScene.createNode("HAnimSite");
HAnimSite1133.USE = "hanim_l_knee_crease";
HAnimHumanoid43.viewpoints[146] = HAnimSite1133;

let HAnimSite1134 = browser.currentScene.createNode("HAnimSite");
HAnimSite1134.USE = "hanim_l_suprapatella";
HAnimHumanoid43.viewpoints[147] = HAnimSite1134;

let HAnimSite1135 = browser.currentScene.createNode("HAnimSite");
HAnimSite1135.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[148] = HAnimSite1135;

let HAnimSite1136 = browser.currentScene.createNode("HAnimSite");
HAnimSite1136.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[149] = HAnimSite1136;

let HAnimSite1137 = browser.currentScene.createNode("HAnimSite");
HAnimSite1137.USE = "hanim_r_knee_crease";
HAnimHumanoid43.viewpoints[150] = HAnimSite1137;

let HAnimSite1138 = browser.currentScene.createNode("HAnimSite");
HAnimSite1138.USE = "hanim_r_suprapatella";
HAnimHumanoid43.viewpoints[151] = HAnimSite1138;

let HAnimSite1139 = browser.currentScene.createNode("HAnimSite");
HAnimSite1139.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid43.viewpoints[152] = HAnimSite1139;

let HAnimSite1140 = browser.currentScene.createNode("HAnimSite");
HAnimSite1140.USE = "hanim_l_medial_malleolus";
HAnimHumanoid43.viewpoints[153] = HAnimSite1140;

let HAnimSite1141 = browser.currentScene.createNode("HAnimSite");
HAnimSite1141.USE = "hanim_l_tibiale";
HAnimHumanoid43.viewpoints[154] = HAnimSite1141;

let HAnimSite1142 = browser.currentScene.createNode("HAnimSite");
HAnimSite1142.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid43.viewpoints[155] = HAnimSite1142;

let HAnimSite1143 = browser.currentScene.createNode("HAnimSite");
HAnimSite1143.USE = "hanim_l_sphyrion";
HAnimHumanoid43.viewpoints[156] = HAnimSite1143;

let HAnimSite1144 = browser.currentScene.createNode("HAnimSite");
HAnimSite1144.USE = "hanim_l_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[157] = HAnimSite1144;

let HAnimSite1145 = browser.currentScene.createNode("HAnimSite");
HAnimSite1145.USE = "hanim_l_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[158] = HAnimSite1145;

let HAnimSite1146 = browser.currentScene.createNode("HAnimSite");
HAnimSite1146.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[159] = HAnimSite1146;

let HAnimSite1147 = browser.currentScene.createNode("HAnimSite");
HAnimSite1147.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[160] = HAnimSite1147;

let HAnimSite1148 = browser.currentScene.createNode("HAnimSite");
HAnimSite1148.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[161] = HAnimSite1148;

let HAnimSite1149 = browser.currentScene.createNode("HAnimSite");
HAnimSite1149.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[162] = HAnimSite1149;

let HAnimSite1150 = browser.currentScene.createNode("HAnimSite");
HAnimSite1150.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[163] = HAnimSite1150;

let HAnimSite1151 = browser.currentScene.createNode("HAnimSite");
HAnimSite1151.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid43.viewpoints[164] = HAnimSite1151;

let HAnimSite1152 = browser.currentScene.createNode("HAnimSite");
HAnimSite1152.USE = "hanim_r_medial_malleolus";
HAnimHumanoid43.viewpoints[165] = HAnimSite1152;

let HAnimSite1153 = browser.currentScene.createNode("HAnimSite");
HAnimSite1153.USE = "hanim_r_tibiale";
HAnimHumanoid43.viewpoints[166] = HAnimSite1153;

let HAnimSite1154 = browser.currentScene.createNode("HAnimSite");
HAnimSite1154.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid43.viewpoints[167] = HAnimSite1154;

let HAnimSite1155 = browser.currentScene.createNode("HAnimSite");
HAnimSite1155.USE = "hanim_r_sphyrion";
HAnimHumanoid43.viewpoints[168] = HAnimSite1155;

let HAnimSite1156 = browser.currentScene.createNode("HAnimSite");
HAnimSite1156.USE = "hanim_r_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[169] = HAnimSite1156;

let HAnimSite1157 = browser.currentScene.createNode("HAnimSite");
HAnimSite1157.USE = "hanim_r_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[170] = HAnimSite1157;

let HAnimSite1158 = browser.currentScene.createNode("HAnimSite");
HAnimSite1158.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[171] = HAnimSite1158;

let HAnimSite1159 = browser.currentScene.createNode("HAnimSite");
HAnimSite1159.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[172] = HAnimSite1159;

let HAnimSite1160 = browser.currentScene.createNode("HAnimSite");
HAnimSite1160.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[173] = HAnimSite1160;

let HAnimSite1161 = browser.currentScene.createNode("HAnimSite");
HAnimSite1161.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[174] = HAnimSite1161;

let HAnimSite1162 = browser.currentScene.createNode("HAnimSite");
HAnimSite1162.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[175] = HAnimSite1162;

let HAnimSite1163 = browser.currentScene.createNode("HAnimSite");
HAnimSite1163.USE = "hanim_l_rib10";
HAnimHumanoid43.viewpoints[176] = HAnimSite1163;

let HAnimSite1164 = browser.currentScene.createNode("HAnimSite");
HAnimSite1164.USE = "hanim_r_rib10";
HAnimHumanoid43.viewpoints[177] = HAnimSite1164;

let HAnimSite1165 = browser.currentScene.createNode("HAnimSite");
HAnimSite1165.USE = "hanim_spine_1_middle_back";
HAnimHumanoid43.viewpoints[178] = HAnimSite1165;

let HAnimSite1166 = browser.currentScene.createNode("HAnimSite");
HAnimSite1166.USE = "hanim_spine_2_middle_back";
HAnimHumanoid43.viewpoints[179] = HAnimSite1166;

let HAnimSite1167 = browser.currentScene.createNode("HAnimSite");
HAnimSite1167.USE = "hanim_l_thelion";
HAnimHumanoid43.viewpoints[180] = HAnimSite1167;

let HAnimSite1168 = browser.currentScene.createNode("HAnimSite");
HAnimSite1168.USE = "hanim_r_thelion";
HAnimHumanoid43.viewpoints[181] = HAnimSite1168;

let HAnimSite1169 = browser.currentScene.createNode("HAnimSite");
HAnimSite1169.USE = "hanim_substernale";
HAnimHumanoid43.viewpoints[182] = HAnimSite1169;

let HAnimSite1170 = browser.currentScene.createNode("HAnimSite");
HAnimSite1170.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[183] = HAnimSite1170;

let HAnimSite1171 = browser.currentScene.createNode("HAnimSite");
HAnimSite1171.USE = "hanim_mesosternale";
HAnimHumanoid43.viewpoints[184] = HAnimSite1171;

let HAnimSite1172 = browser.currentScene.createNode("HAnimSite");
HAnimSite1172.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[185] = HAnimSite1172;

let HAnimSite1173 = browser.currentScene.createNode("HAnimSite");
HAnimSite1173.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid43.viewpoints[186] = HAnimSite1173;

let HAnimSite1174 = browser.currentScene.createNode("HAnimSite");
HAnimSite1174.USE = "hanim_cervicale";
HAnimHumanoid43.viewpoints[187] = HAnimSite1174;

let HAnimSite1175 = browser.currentScene.createNode("HAnimSite");
HAnimSite1175.USE = "hanim_l_neck_base";
HAnimHumanoid43.viewpoints[188] = HAnimSite1175;

let HAnimSite1176 = browser.currentScene.createNode("HAnimSite");
HAnimSite1176.USE = "hanim_r_neck_base";
HAnimHumanoid43.viewpoints[189] = HAnimSite1176;

let HAnimSite1177 = browser.currentScene.createNode("HAnimSite");
HAnimSite1177.USE = "hanim_suprasternale";
HAnimHumanoid43.viewpoints[190] = HAnimSite1177;

let HAnimSite1178 = browser.currentScene.createNode("HAnimSite");
HAnimSite1178.USE = "hanim_l_acromion";
HAnimHumanoid43.viewpoints[191] = HAnimSite1178;

let HAnimSite1179 = browser.currentScene.createNode("HAnimSite");
HAnimSite1179.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[192] = HAnimSite1179;

let HAnimSite1180 = browser.currentScene.createNode("HAnimSite");
HAnimSite1180.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[193] = HAnimSite1180;

let HAnimSite1181 = browser.currentScene.createNode("HAnimSite");
HAnimSite1181.USE = "hanim_l_axilla_proximal";
HAnimHumanoid43.viewpoints[194] = HAnimSite1181;

let HAnimSite1182 = browser.currentScene.createNode("HAnimSite");
HAnimSite1182.USE = "hanim_l_clavicale";
HAnimHumanoid43.viewpoints[195] = HAnimSite1182;

let HAnimSite1183 = browser.currentScene.createNode("HAnimSite");
HAnimSite1183.USE = "hanim_r_acromion";
HAnimHumanoid43.viewpoints[196] = HAnimSite1183;

let HAnimSite1184 = browser.currentScene.createNode("HAnimSite");
HAnimSite1184.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[197] = HAnimSite1184;

let HAnimSite1185 = browser.currentScene.createNode("HAnimSite");
HAnimSite1185.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[198] = HAnimSite1185;

let HAnimSite1186 = browser.currentScene.createNode("HAnimSite");
HAnimSite1186.USE = "hanim_r_axilla_proximal";
HAnimHumanoid43.viewpoints[199] = HAnimSite1186;

let HAnimSite1187 = browser.currentScene.createNode("HAnimSite");
HAnimSite1187.USE = "hanim_r_clavicale";
HAnimHumanoid43.viewpoints[200] = HAnimSite1187;

let HAnimSite1188 = browser.currentScene.createNode("HAnimSite");
HAnimSite1188.USE = "hanim_adams_apple";
HAnimHumanoid43.viewpoints[201] = HAnimSite1188;

let HAnimSite1189 = browser.currentScene.createNode("HAnimSite");
HAnimSite1189.USE = "hanim_glabella";
HAnimHumanoid43.viewpoints[202] = HAnimSite1189;

let HAnimSite1190 = browser.currentScene.createNode("HAnimSite");
HAnimSite1190.USE = "hanim_l_ectocanthus";
HAnimHumanoid43.viewpoints[203] = HAnimSite1190;

let HAnimSite1191 = browser.currentScene.createNode("HAnimSite");
HAnimSite1191.USE = "hanim_l_gonion";
HAnimHumanoid43.viewpoints[204] = HAnimSite1191;

let HAnimSite1192 = browser.currentScene.createNode("HAnimSite");
HAnimSite1192.USE = "hanim_l_infraorbitale";
HAnimHumanoid43.viewpoints[205] = HAnimSite1192;

let HAnimSite1193 = browser.currentScene.createNode("HAnimSite");
HAnimSite1193.USE = "hanim_l_tragion";
HAnimHumanoid43.viewpoints[206] = HAnimSite1193;

let HAnimSite1194 = browser.currentScene.createNode("HAnimSite");
HAnimSite1194.USE = "hanim_menton";
HAnimHumanoid43.viewpoints[207] = HAnimSite1194;

let HAnimSite1195 = browser.currentScene.createNode("HAnimSite");
HAnimSite1195.USE = "hanim_nuchale";
HAnimHumanoid43.viewpoints[208] = HAnimSite1195;

let HAnimSite1196 = browser.currentScene.createNode("HAnimSite");
HAnimSite1196.USE = "hanim_opisthocranion";
HAnimHumanoid43.viewpoints[209] = HAnimSite1196;

let HAnimSite1197 = browser.currentScene.createNode("HAnimSite");
HAnimSite1197.USE = "hanim_r_ectocanthus";
HAnimHumanoid43.viewpoints[210] = HAnimSite1197;

let HAnimSite1198 = browser.currentScene.createNode("HAnimSite");
HAnimSite1198.USE = "hanim_r_gonion";
HAnimHumanoid43.viewpoints[211] = HAnimSite1198;

let HAnimSite1199 = browser.currentScene.createNode("HAnimSite");
HAnimSite1199.USE = "hanim_r_infraorbitale";
HAnimHumanoid43.viewpoints[212] = HAnimSite1199;

let HAnimSite1200 = browser.currentScene.createNode("HAnimSite");
HAnimSite1200.USE = "hanim_r_tragion";
HAnimHumanoid43.viewpoints[213] = HAnimSite1200;

let HAnimSite1201 = browser.currentScene.createNode("HAnimSite");
HAnimSite1201.USE = "hanim_sellion";
HAnimHumanoid43.viewpoints[214] = HAnimSite1201;

let HAnimSite1202 = browser.currentScene.createNode("HAnimSite");
HAnimSite1202.USE = "hanim_skull_vertex";
HAnimHumanoid43.viewpoints[215] = HAnimSite1202;

let HAnimSite1203 = browser.currentScene.createNode("HAnimSite");
HAnimSite1203.USE = "hanim_supramenton";
HAnimHumanoid43.viewpoints[216] = HAnimSite1203;

let HAnimSite1204 = browser.currentScene.createNode("HAnimSite");
HAnimSite1204.USE = "hanim_l_bideltoid";
HAnimHumanoid43.viewpoints[217] = HAnimSite1204;

let HAnimSite1205 = browser.currentScene.createNode("HAnimSite");
HAnimSite1205.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[218] = HAnimSite1205;

let HAnimSite1206 = browser.currentScene.createNode("HAnimSite");
HAnimSite1206.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[219] = HAnimSite1206;

let HAnimSite1207 = browser.currentScene.createNode("HAnimSite");
HAnimSite1207.USE = "hanim_l_olecranon";
HAnimHumanoid43.viewpoints[220] = HAnimSite1207;

let HAnimSite1208 = browser.currentScene.createNode("HAnimSite");
HAnimSite1208.USE = "hanim_l_radial_styloid";
HAnimHumanoid43.viewpoints[221] = HAnimSite1208;

let HAnimSite1209 = browser.currentScene.createNode("HAnimSite");
HAnimSite1209.USE = "hanim_l_radiale";
HAnimHumanoid43.viewpoints[222] = HAnimSite1209;

let HAnimSite1210 = browser.currentScene.createNode("HAnimSite");
HAnimSite1210.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid43.viewpoints[223] = HAnimSite1210;

let HAnimSite1211 = browser.currentScene.createNode("HAnimSite");
HAnimSite1211.USE = "hanim_l_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[224] = HAnimSite1211;

let HAnimSite1212 = browser.currentScene.createNode("HAnimSite");
HAnimSite1212.USE = "hanim_l_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[225] = HAnimSite1212;

let HAnimSite1213 = browser.currentScene.createNode("HAnimSite");
HAnimSite1213.USE = "hanim_l_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[226] = HAnimSite1213;

let HAnimSite1214 = browser.currentScene.createNode("HAnimSite");
HAnimSite1214.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[227] = HAnimSite1214;

let HAnimSite1215 = browser.currentScene.createNode("HAnimSite");
HAnimSite1215.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[228] = HAnimSite1215;

let HAnimSite1216 = browser.currentScene.createNode("HAnimSite");
HAnimSite1216.USE = "hanim_l_dactylion";
HAnimHumanoid43.viewpoints[229] = HAnimSite1216;

let HAnimSite1217 = browser.currentScene.createNode("HAnimSite");
HAnimSite1217.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[230] = HAnimSite1217;

let HAnimSite1218 = browser.currentScene.createNode("HAnimSite");
HAnimSite1218.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[231] = HAnimSite1218;

let HAnimSite1219 = browser.currentScene.createNode("HAnimSite");
HAnimSite1219.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[232] = HAnimSite1219;

let HAnimSite1220 = browser.currentScene.createNode("HAnimSite");
HAnimSite1220.USE = "hanim_r_bideltoid";
HAnimHumanoid43.viewpoints[233] = HAnimSite1220;

let HAnimSite1221 = browser.currentScene.createNode("HAnimSite");
HAnimSite1221.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[234] = HAnimSite1221;

let HAnimSite1222 = browser.currentScene.createNode("HAnimSite");
HAnimSite1222.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[235] = HAnimSite1222;

let HAnimSite1223 = browser.currentScene.createNode("HAnimSite");
HAnimSite1223.USE = "hanim_r_olecranon";
HAnimHumanoid43.viewpoints[236] = HAnimSite1223;

let HAnimSite1224 = browser.currentScene.createNode("HAnimSite");
HAnimSite1224.USE = "hanim_r_radial_styloid";
HAnimHumanoid43.viewpoints[237] = HAnimSite1224;

let HAnimSite1225 = browser.currentScene.createNode("HAnimSite");
HAnimSite1225.USE = "hanim_r_radiale";
HAnimHumanoid43.viewpoints[238] = HAnimSite1225;

let HAnimSite1226 = browser.currentScene.createNode("HAnimSite");
HAnimSite1226.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid43.viewpoints[239] = HAnimSite1226;

let HAnimSite1227 = browser.currentScene.createNode("HAnimSite");
HAnimSite1227.USE = "hanim_r_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[240] = HAnimSite1227;

let HAnimSite1228 = browser.currentScene.createNode("HAnimSite");
HAnimSite1228.USE = "hanim_r_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[241] = HAnimSite1228;

let HAnimSite1229 = browser.currentScene.createNode("HAnimSite");
HAnimSite1229.USE = "hanim_r_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[242] = HAnimSite1229;

let HAnimSite1230 = browser.currentScene.createNode("HAnimSite");
HAnimSite1230.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[243] = HAnimSite1230;

let HAnimSite1231 = browser.currentScene.createNode("HAnimSite");
HAnimSite1231.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[244] = HAnimSite1231;

let HAnimSite1232 = browser.currentScene.createNode("HAnimSite");
HAnimSite1232.USE = "hanim_r_dactylion";
HAnimHumanoid43.viewpoints[245] = HAnimSite1232;

let HAnimSite1233 = browser.currentScene.createNode("HAnimSite");
HAnimSite1233.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[246] = HAnimSite1233;

let HAnimSite1234 = browser.currentScene.createNode("HAnimSite");
HAnimSite1234.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[247] = HAnimSite1234;

let HAnimSite1235 = browser.currentScene.createNode("HAnimSite");
HAnimSite1235.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[248] = HAnimSite1235;

browser.currentScene.children[4] = HAnimHumanoid43;

