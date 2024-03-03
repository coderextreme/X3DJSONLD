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
meta3.content = "Humanoid4.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4.x3d";
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

let Shape61 = browser.currentScene.createNode("Shape");
let LineSet62 = browser.currentScene.createNode("LineSet");
LineSet62.vertexCount = new MFInt32(new int[2]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet62.coord = Coordinate63;

//from humanoid_root to vl5 vertices 2
let ColorRGBA64 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA64.USE = "HAnimSegmentLineColorRGBA";
LineSet62.color = ColorRGBA64;

Shape61.geometry = LineSet62;

HAnimSegment53.children[2] = Shape61;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "sacroiliac";
HAnimJoint65.DEF = "hanim_sacroiliac";
HAnimJoint65.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "pelvis";
HAnimSegment66.DEF = "hanim_pelvis";
let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Transform68 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "HAnimJointShape";
Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform67.children = new MFNode();

Transform67.children[0] = Transform68;

HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = Transform67;

let Shape70 = browser.currentScene.createNode("Shape");
let LineSet71 = browser.currentScene.createNode("LineSet");
LineSet71.vertexCount = new MFInt32(new int[2]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet71.coord = Coordinate72;

//from sacroiliac to l_hip vertices 2
let ColorRGBA73 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
LineSet71.color = ColorRGBA73;

Shape70.geometry = LineSet71;

HAnimSegment66.children[1] = Shape70;

let Shape74 = browser.currentScene.createNode("Shape");
let LineSet75 = browser.currentScene.createNode("LineSet");
LineSet75.vertexCount = new MFInt32(new int[2]);
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet75.coord = Coordinate76;

//from sacroiliac to r_hip vertices 2
let ColorRGBA77 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA";
LineSet75.color = ColorRGBA77;

Shape74.geometry = LineSet75;

HAnimSegment66.children[2] = Shape74;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_hip";
HAnimJoint78.DEF = "hanim_l_hip";
HAnimJoint78.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.name = "l_thigh";
HAnimSegment79.DEF = "hanim_l_thigh";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Transform81 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "HAnimJointShape";
Transform81.child = new undefined();

Transform81.child[0] = Shape82;

Transform80.children = new MFNode();

Transform80.children[0] = Transform81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

let Shape83 = browser.currentScene.createNode("Shape");
let LineSet84 = browser.currentScene.createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet84.coord = Coordinate85;

//from l_hip to l_knee vertices 2
let ColorRGBA86 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSegmentLineColorRGBA";
LineSet84.color = ColorRGBA86;

Shape83.geometry = LineSet84;

HAnimSegment79.children[1] = Shape83;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_knee";
HAnimJoint87.DEF = "hanim_l_knee";
HAnimJoint87.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment88 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment88.name = "l_calf";
HAnimSegment88.DEF = "hanim_l_calf";
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Transform90 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "HAnimJointShape";
Transform90.child = new undefined();

Transform90.child[0] = Shape91;

Transform89.children = new MFNode();

Transform89.children[0] = Transform90;

HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = Transform89;

let Shape92 = browser.currentScene.createNode("Shape");
let LineSet93 = browser.currentScene.createNode("LineSet");
LineSet93.vertexCount = new MFInt32(new int[2]);
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet93.coord = Coordinate94;

//from l_knee to l_talocrural vertices 2
let ColorRGBA95 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA95.USE = "HAnimSegmentLineColorRGBA";
LineSet93.color = ColorRGBA95;

Shape92.geometry = LineSet93;

HAnimSegment88.children[1] = Shape92;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "l_talocrural";
HAnimJoint96.DEF = "hanim_l_talocrural";
HAnimJoint96.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.name = "l_talus";
HAnimSegment97.DEF = "hanim_l_talus";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform98.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform98.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
let Transform99 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "HAnimJointShape";
Transform99.child = new undefined();

Transform99.child[0] = Shape100;

Transform98.children = new MFNode();

Transform98.children[0] = Transform99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

let Shape101 = browser.currentScene.createNode("Shape");
let LineSet102 = browser.currentScene.createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]);
LineSet102.coord = Coordinate103;

//from l_talocrural to l_talocalcaneonavicular vertices 2
let ColorRGBA104 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSegmentLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment97.children[1] = Shape101;

let Shape105 = browser.currentScene.createNode("Shape");
let LineSet106 = browser.currentScene.createNode("LineSet");
LineSet106.vertexCount = new MFInt32(new int[2]);
let Coordinate107 = browser.currentScene.createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]);
LineSet106.coord = Coordinate107;

//from l_talocrural to l_calcaneocuboid vertices 2
let ColorRGBA108 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA108.USE = "HAnimSegmentLineColorRGBA";
LineSet106.color = ColorRGBA108;

Shape105.geometry = LineSet106;

HAnimSegment97.children[2] = Shape105;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "l_talocalcaneonavicular";
HAnimJoint109.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint109.center = new SFVec3f(new float[0.0781,0.0283,-0.097]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "l_navicular";
HAnimSegment110.DEF = "hanim_l_navicular";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new SFVec3f(new float[0.0781,0.0283,-0.097]);
let Transform112 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimJointShape";
Transform112.child = new undefined();

Transform112.child[0] = Shape113;

Transform111.children = new MFNode();

Transform111.children[0] = Transform112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

let Shape114 = browser.currentScene.createNode("Shape");
let LineSet115 = browser.currentScene.createNode("LineSet");
LineSet115.vertexCount = new MFInt32(new int[2]);
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]);
LineSet115.coord = Coordinate116;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
let ColorRGBA117 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA117.USE = "HAnimSegmentLineColorRGBA";
LineSet115.color = ColorRGBA117;

Shape114.geometry = LineSet115;

HAnimSegment110.children[1] = Shape114;

let Shape118 = browser.currentScene.createNode("Shape");
let LineSet119 = browser.currentScene.createNode("LineSet");
LineSet119.vertexCount = new MFInt32(new int[2]);
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]);
LineSet119.coord = Coordinate120;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
let ColorRGBA121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA121.USE = "HAnimSegmentLineColorRGBA";
LineSet119.color = ColorRGBA121;

Shape118.geometry = LineSet119;

HAnimSegment110.children[2] = Shape118;

let Shape122 = browser.currentScene.createNode("Shape");
let LineSet123 = browser.currentScene.createNode("LineSet");
LineSet123.vertexCount = new MFInt32(new int[2]);
let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]);
LineSet123.coord = Coordinate124;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
let ColorRGBA125 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA125.USE = "HAnimSegmentLineColorRGBA";
LineSet123.color = ColorRGBA125;

Shape122.geometry = LineSet123;

HAnimSegment110.children[3] = Shape122;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "l_cuneonavicular_1";
HAnimJoint126.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint126.center = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
HAnimJoint126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint126.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.name = "l_cuneiform_1";
HAnimSegment127.DEF = "hanim_l_cuneiform_1";
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
let Transform129 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129.child = new undefined();

Transform129.child[0] = Shape130;

Transform128.children = new MFNode();

Transform128.children[0] = Transform129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

let Shape131 = browser.currentScene.createNode("Shape");
let LineSet132 = browser.currentScene.createNode("LineSet");
LineSet132.vertexCount = new MFInt32(new int[2]);
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]);
LineSet132.coord = Coordinate133;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
let ColorRGBA134 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA134.USE = "HAnimSegmentLineColorRGBA";
LineSet132.color = ColorRGBA134;

Shape131.geometry = LineSet132;

HAnimSegment127.children[1] = Shape131;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "l_tarsometatarsal_1";
HAnimJoint135.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint135.center = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.name = "l_metatarsal_1";
HAnimSegment136.DEF = "hanim_l_metatarsal_1";
let Transform137 = browser.currentScene.createNode("Transform");
Transform137.translation = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
let Transform138 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimJointShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

Transform137.children = new MFNode();

Transform137.children[0] = Transform138;

HAnimSegment136.children = new MFNode();

HAnimSegment136.children[0] = Transform137;

let Shape140 = browser.currentScene.createNode("Shape");
let LineSet141 = browser.currentScene.createNode("LineSet");
LineSet141.vertexCount = new MFInt32(new int[2]);
let Coordinate142 = browser.currentScene.createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]);
LineSet141.coord = Coordinate142;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
let ColorRGBA143 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA143.USE = "HAnimSegmentLineColorRGBA";
LineSet141.color = ColorRGBA143;

Shape140.geometry = LineSet141;

HAnimSegment136.children[1] = Shape140;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "l_metatarsophalangeal_1";
HAnimJoint144.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint144.center = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
HAnimJoint144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment145.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform146 = browser.currentScene.createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
let Transform147 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.child = new undefined();

Transform147.child[0] = Shape148;

Transform146.children = new MFNode();

Transform146.children[0] = Transform147;

HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = Transform146;

let Shape149 = browser.currentScene.createNode("Shape");
let LineSet150 = browser.currentScene.createNode("LineSet");
LineSet150.vertexCount = new MFInt32(new int[2]);
let Coordinate151 = browser.currentScene.createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]);
LineSet150.coord = Coordinate151;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
let ColorRGBA152 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA152.USE = "HAnimSegmentLineColorRGBA";
LineSet150.color = ColorRGBA152;

Shape149.geometry = LineSet150;

HAnimSegment145.children[1] = Shape149;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "l_tarsal_interphalangeal_1";
HAnimJoint153.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.children[1] = HAnimJoint153;

HAnimJoint135.children[1] = HAnimJoint144;

HAnimJoint126.children[1] = HAnimJoint135;

HAnimJoint109.children[1] = HAnimJoint126;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_cuneonavicular_2";
HAnimJoint154.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint154.center = new SFVec3f(new float[0.0812,0.025,-0.0805]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "l_cuneiform_2";
HAnimSegment155.DEF = "hanim_l_cuneiform_2";
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.0812,0.025,-0.0805]);
let Transform157 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape158 = browser.currentScene.createNode("Shape");
Shape158.USE = "HAnimJointShape";
Transform157.child = new undefined();

Transform157.child[0] = Shape158;

Transform156.children = new MFNode();

Transform156.children[0] = Transform157;

HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = Transform156;

let Shape159 = browser.currentScene.createNode("Shape");
let LineSet160 = browser.currentScene.createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[2]);
let Coordinate161 = browser.currentScene.createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]);
LineSet160.coord = Coordinate161;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
let ColorRGBA162 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA162.USE = "HAnimSegmentLineColorRGBA";
LineSet160.color = ColorRGBA162;

Shape159.geometry = LineSet160;

HAnimSegment155.children[1] = Shape159;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "l_tarsometatarsal_2";
HAnimJoint163.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint163.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "l_metatarsal_2";
HAnimSegment164.DEF = "hanim_l_metatarsal_2";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
let Transform166 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "HAnimJointShape";
Transform166.child = new undefined();

Transform166.child[0] = Shape167;

Transform165.children = new MFNode();

Transform165.children[0] = Transform166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

let Shape168 = browser.currentScene.createNode("Shape");
let LineSet169 = browser.currentScene.createNode("LineSet");
LineSet169.vertexCount = new MFInt32(new int[2]);
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet169.coord = Coordinate170;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
let ColorRGBA171 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA171.USE = "HAnimSegmentLineColorRGBA";
LineSet169.color = ColorRGBA171;

Shape168.geometry = LineSet169;

HAnimSegment164.children[1] = Shape168;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "l_metatarsophalangeal_2";
HAnimJoint172.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint172.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment173.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
let Transform175 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175.child = new undefined();

Transform175.child[0] = Shape176;

Transform174.children = new MFNode();

Transform174.children[0] = Transform175;

HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = Transform174;

let Shape177 = browser.currentScene.createNode("Shape");
let LineSet178 = browser.currentScene.createNode("LineSet");
LineSet178.vertexCount = new MFInt32(new int[2]);
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]);
LineSet178.coord = Coordinate179;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA180 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA180.USE = "HAnimSegmentLineColorRGBA";
LineSet178.color = ColorRGBA180;

Shape177.geometry = LineSet178;

HAnimSegment173.children[1] = Shape177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint181.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint181.center = new SFVec3f(new float[0.0841,0.0041,0.0121]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l_tarsal_middle_phalanx_2";
HAnimSegment182.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.0841,0.0041,0.0121]);
let Transform184 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

Transform183.children = new MFNode();

Transform183.children[0] = Transform184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

let Shape186 = browser.currentScene.createNode("Shape");
let LineSet187 = browser.currentScene.createNode("LineSet");
LineSet187.vertexCount = new MFInt32(new int[2]);
let Coordinate188 = browser.currentScene.createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]);
LineSet187.coord = Coordinate188;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA189 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA189.USE = "HAnimSegmentLineColorRGBA";
LineSet187.color = ColorRGBA189;

Shape186.geometry = LineSet187;

HAnimSegment182.children[1] = Shape186;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint190.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint190.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint190.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint190.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.children[1] = HAnimJoint190;

HAnimJoint172.children[1] = HAnimJoint181;

HAnimJoint163.children[1] = HAnimJoint172;

HAnimJoint154.children[1] = HAnimJoint163;

HAnimJoint109.children[2] = HAnimJoint154;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "l_cuneonavicular_3";
HAnimJoint191.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint191.center = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.name = "l_cuneiform_3";
HAnimSegment192.DEF = "hanim_l_cuneiform_3";
let Transform193 = browser.currentScene.createNode("Transform");
Transform193.translation = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
let Transform194 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape195 = browser.currentScene.createNode("Shape");
Shape195.USE = "HAnimJointShape";
Transform194.child = new undefined();

Transform194.child[0] = Shape195;

Transform193.children = new MFNode();

Transform193.children[0] = Transform194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

let Shape196 = browser.currentScene.createNode("Shape");
let LineSet197 = browser.currentScene.createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625]);
LineSet197.coord = Coordinate198;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
let ColorRGBA199 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSegmentLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment192.children[1] = Shape196;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.name = "l_tarsometatarsal_3";
HAnimJoint200.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint200.center = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
HAnimJoint200.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint200.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.name = "l_metatarsal_3";
HAnimSegment201.DEF = "hanim_l_metatarsal_3";
let Transform202 = browser.currentScene.createNode("Transform");
Transform202.translation = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
let Transform203 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape204 = browser.currentScene.createNode("Shape");
Shape204.USE = "HAnimJointShape";
Transform203.child = new undefined();

Transform203.child[0] = Shape204;

Transform202.children = new MFNode();

Transform202.children[0] = Transform203;

HAnimSegment201.children = new MFNode();

HAnimSegment201.children[0] = Transform202;

let Shape205 = browser.currentScene.createNode("Shape");
let LineSet206 = browser.currentScene.createNode("LineSet");
LineSet206.vertexCount = new MFInt32(new int[2]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065]);
LineSet206.coord = Coordinate207;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
let ColorRGBA208 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA208.USE = "HAnimSegmentLineColorRGBA";
LineSet206.color = ColorRGBA208;

Shape205.geometry = LineSet206;

HAnimSegment201.children[1] = Shape205;

HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.name = "l_metatarsophalangeal_3";
HAnimJoint209.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint209.center = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
HAnimJoint209.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint209.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment210 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment210.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment210.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform211 = browser.currentScene.createNode("Transform");
Transform211.translation = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
let Transform212 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "HAnimJointShape";
Transform212.child = new undefined();

Transform212.child[0] = Shape213;

Transform211.children = new MFNode();

Transform211.children[0] = Transform212;

HAnimSegment210.children = new MFNode();

HAnimSegment210.children[0] = Transform211;

let Shape214 = browser.currentScene.createNode("Shape");
let LineSet215 = browser.currentScene.createNode("LineSet");
LineSet215.vertexCount = new MFInt32(new int[2]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]);
LineSet215.coord = Coordinate216;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA217 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA217.USE = "HAnimSegmentLineColorRGBA";
LineSet215.color = ColorRGBA217;

Shape214.geometry = LineSet215;

HAnimSegment210.children[1] = Shape214;

HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint218.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint218.center = new SFVec3f(new float[0.0987,0.0034,0.0086]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "l_tarsal_middle_phalanx_3";
HAnimSegment219.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.0987,0.0034,0.0086]);
let Transform221 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

Transform220.children = new MFNode();

Transform220.children[0] = Transform221;

HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = Transform220;

let Shape223 = browser.currentScene.createNode("Shape");
let LineSet224 = browser.currentScene.createNode("LineSet");
LineSet224.vertexCount = new MFInt32(new int[2]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]);
LineSet224.coord = Coordinate225;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA226 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[1] = Shape223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint227.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint227.center = new SFVec3f(new float[0.1002,0.0013,0.0178]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.children[1] = HAnimJoint227;

HAnimJoint209.children[1] = HAnimJoint218;

HAnimJoint200.children[1] = HAnimJoint209;

HAnimJoint191.children[1] = HAnimJoint200;

HAnimJoint109.children[3] = HAnimJoint191;

HAnimJoint96.children[1] = HAnimJoint109;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "l_calcaneocuboid";
HAnimJoint228.DEF = "hanim_l_calcaneocuboid";
HAnimJoint228.center = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.name = "l_calcaneus";
HAnimSegment229.DEF = "hanim_l_calcaneus";
let Transform230 = browser.currentScene.createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
let Transform231 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "HAnimJointShape";
Transform231.child = new undefined();

Transform231.child[0] = Shape232;

Transform230.children = new MFNode();

Transform230.children[0] = Transform231;

HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = Transform230;

let Shape233 = browser.currentScene.createNode("Shape");
let LineSet234 = browser.currentScene.createNode("LineSet");
LineSet234.vertexCount = new MFInt32(new int[2]);
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]);
LineSet234.coord = Coordinate235;

//from l_calcaneocuboid to l_transversetarsal vertices 2
let ColorRGBA236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet234.color = ColorRGBA236;

Shape233.geometry = LineSet234;

HAnimSegment229.children[1] = Shape233;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "l_transversetarsal";
HAnimJoint237.DEF = "hanim_l_transversetarsal";
HAnimJoint237.center = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.name = "l_cuboid";
HAnimSegment238.DEF = "hanim_l_cuboid";
let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
let Transform240 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "HAnimJointShape";
Transform240.child = new undefined();

Transform240.child[0] = Shape241;

Transform239.children = new MFNode();

Transform239.children[0] = Transform240;

HAnimSegment238.children = new MFNode();

HAnimSegment238.children[0] = Transform239;

let Shape242 = browser.currentScene.createNode("Shape");
let LineSet243 = browser.currentScene.createNode("LineSet");
LineSet243.vertexCount = new MFInt32(new int[2]);
let Coordinate244 = browser.currentScene.createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]);
LineSet243.coord = Coordinate244;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
let ColorRGBA245 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
LineSet243.color = ColorRGBA245;

Shape242.geometry = LineSet243;

HAnimSegment238.children[1] = Shape242;

let Shape246 = browser.currentScene.createNode("Shape");
let LineSet247 = browser.currentScene.createNode("LineSet");
LineSet247.vertexCount = new MFInt32(new int[2]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]);
LineSet247.coord = Coordinate248;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
let ColorRGBA249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA";
LineSet247.color = ColorRGBA249;

Shape246.geometry = LineSet247;

HAnimSegment238.children[2] = Shape246;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.name = "l_tarsometatarsal_4";
HAnimJoint250.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint250.center = new SFVec3f(new float[0.1063,0.016,-0.0634]);
HAnimJoint250.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint250.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment251.name = "l_metatarsal_4";
HAnimSegment251.DEF = "hanim_l_metatarsal_4";
let Transform252 = browser.currentScene.createNode("Transform");
Transform252.translation = new SFVec3f(new float[0.1063,0.016,-0.0634]);
let Transform253 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape254 = browser.currentScene.createNode("Shape");
Shape254.USE = "HAnimJointShape";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

Transform252.children = new MFNode();

Transform252.children[0] = Transform253;

HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = Transform252;

let Shape255 = browser.currentScene.createNode("Shape");
let LineSet256 = browser.currentScene.createNode("LineSet");
LineSet256.vertexCount = new MFInt32(new int[2]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]);
LineSet256.coord = Coordinate257;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
let ColorRGBA258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSegmentLineColorRGBA";
LineSet256.color = ColorRGBA258;

Shape255.geometry = LineSet256;

HAnimSegment251.children[1] = Shape255;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.name = "l_metatarsophalangeal_4";
HAnimJoint259.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint259.center = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
HAnimJoint259.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint259.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment260.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment260.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform261 = browser.currentScene.createNode("Transform");
Transform261.translation = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
let Transform262 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape263 = browser.currentScene.createNode("Shape");
Shape263.USE = "HAnimJointShape";
Transform262.child = new undefined();

Transform262.child[0] = Shape263;

Transform261.children = new MFNode();

Transform261.children[0] = Transform262;

HAnimSegment260.children = new MFNode();

HAnimSegment260.children[0] = Transform261;

let Shape264 = browser.currentScene.createNode("Shape");
let LineSet265 = browser.currentScene.createNode("LineSet");
LineSet265.vertexCount = new MFInt32(new int[2]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]);
LineSet265.coord = Coordinate266;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA267 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSegmentLineColorRGBA";
LineSet265.color = ColorRGBA267;

Shape264.geometry = LineSet265;

HAnimSegment260.children[1] = Shape264;

HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint268.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint268.center = new SFVec3f(new float[0.114,0.0037,0.0044]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.name = "l_tarsal_middle_phalanx_4";
HAnimSegment269.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new SFVec3f(new float[0.114,0.0037,0.0044]);
let Transform271 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape272 = browser.currentScene.createNode("Shape");
Shape272.USE = "HAnimJointShape";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

Transform270.children = new MFNode();

Transform270.children[0] = Transform271;

HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = Transform270;

let Shape273 = browser.currentScene.createNode("Shape");
let LineSet274 = browser.currentScene.createNode("LineSet");
LineSet274.vertexCount = new MFInt32(new int[2]);
let Coordinate275 = browser.currentScene.createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[0.114,0.0037,0.0044,0.1155,0.0008,0.0118]);
LineSet274.coord = Coordinate275;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA276 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet274.color = ColorRGBA276;

Shape273.geometry = LineSet274;

HAnimSegment269.children[1] = Shape273;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint277.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint277.center = new SFVec3f(new float[0.1155,0.0008,0.0118]);
HAnimJoint277.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint277.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.children[1] = HAnimJoint277;

HAnimJoint259.children[1] = HAnimJoint268;

HAnimJoint250.children[1] = HAnimJoint259;

HAnimJoint237.children[1] = HAnimJoint250;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "l_tarsometatarsal_5";
HAnimJoint278.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint278.center = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "l_metatarsal_5";
HAnimSegment279.DEF = "hanim_l_metatarsal_5";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
let Transform281 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.child = new undefined();

Transform281.child[0] = Shape282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

let Shape283 = browser.currentScene.createNode("Shape");
let LineSet284 = browser.currentScene.createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]);
LineSet284.coord = Coordinate285;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.name = "l_metatarsophalangeal_5";
HAnimJoint287.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint287.center = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment288.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
let Transform290 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "HAnimJointShape";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

HAnimSegment288.children = new MFNode();

HAnimSegment288.children[0] = Transform289;

let Shape292 = browser.currentScene.createNode("Shape");
let LineSet293 = browser.currentScene.createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
let Coordinate294 = browser.currentScene.createNode("Coordinate");
Coordinate294.point = new MFVec3f(new float[0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]);
LineSet293.coord = Coordinate294;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA295 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint296.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint296.center = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.name = "l_tarsal_middle_phalanx_5";
HAnimSegment297.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
let Transform299 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "HAnimJointShape";
Transform299.child = new undefined();

Transform299.child[0] = Shape300;

Transform298.children = new MFNode();

Transform298.children[0] = Transform299;

HAnimSegment297.children = new MFNode();

HAnimSegment297.children[0] = Transform298;

let Shape301 = browser.currentScene.createNode("Shape");
let LineSet302 = browser.currentScene.createNode("LineSet");
LineSet302.vertexCount = new MFInt32(new int[2]);
let Coordinate303 = browser.currentScene.createNode("Coordinate");
Coordinate303.point = new MFVec3f(new float[0.1262,0.0023,-0.0077,0.1271,0,0]);
LineSet302.coord = Coordinate303;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA304 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA";
LineSet302.color = ColorRGBA304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint305.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint305.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.children[1] = HAnimJoint305;

HAnimJoint287.children[1] = HAnimJoint296;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint237.children[2] = HAnimJoint278;

HAnimJoint228.children[1] = HAnimJoint237;

HAnimJoint96.children[2] = HAnimJoint228;

HAnimJoint87.children[1] = HAnimJoint96;

HAnimJoint78.children[1] = HAnimJoint87;

HAnimJoint65.children[1] = HAnimJoint78;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.name = "r_hip";
HAnimJoint306.DEF = "hanim_r_hip";
HAnimJoint306.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.name = "r_thigh";
HAnimSegment307.DEF = "hanim_r_thigh";
let Transform308 = browser.currentScene.createNode("Transform");
Transform308.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform309 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape310 = browser.currentScene.createNode("Shape");
Shape310.USE = "HAnimJointShape";
Transform309.child = new undefined();

Transform309.child[0] = Shape310;

Transform308.children = new MFNode();

Transform308.children[0] = Transform309;

HAnimSegment307.children = new MFNode();

HAnimSegment307.children[0] = Transform308;

let Shape311 = browser.currentScene.createNode("Shape");
let LineSet312 = browser.currentScene.createNode("LineSet");
LineSet312.vertexCount = new MFInt32(new int[2]);
let Coordinate313 = browser.currentScene.createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet312.coord = Coordinate313;

//from r_hip to r_knee vertices 2
let ColorRGBA314 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA314.USE = "HAnimSegmentLineColorRGBA";
LineSet312.color = ColorRGBA314;

Shape311.geometry = LineSet312;

HAnimSegment307.children[1] = Shape311;

HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.name = "r_knee";
HAnimJoint315.DEF = "hanim_r_knee";
HAnimJoint315.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint315.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint315.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.name = "r_calf";
HAnimSegment316.DEF = "hanim_r_calf";
let Transform317 = browser.currentScene.createNode("Transform");
Transform317.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform318 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimJointShape";
Transform318.child = new undefined();

Transform318.child[0] = Shape319;

Transform317.children = new MFNode();

Transform317.children[0] = Transform318;

HAnimSegment316.children = new MFNode();

HAnimSegment316.children[0] = Transform317;

let Shape320 = browser.currentScene.createNode("Shape");
let LineSet321 = browser.currentScene.createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[2]);
let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet321.coord = Coordinate322;

//from r_knee to r_talocrural vertices 2
let ColorRGBA323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSegmentLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimSegment316.children[1] = Shape320;

HAnimJoint315.children = new MFNode();

HAnimJoint315.children[0] = HAnimSegment316;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.name = "r_talocrural";
HAnimJoint324.DEF = "hanim_r_talocrural";
HAnimJoint324.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.name = "r_talus";
HAnimSegment325.DEF = "hanim_r_talus";
let Transform326 = browser.currentScene.createNode("Transform");
Transform326.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform326.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform326.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform327 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "HAnimJointShape";
Transform327.child = new undefined();

Transform327.child[0] = Shape328;

Transform326.children = new MFNode();

Transform326.children[0] = Transform327;

HAnimSegment325.children = new MFNode();

HAnimSegment325.children[0] = Transform326;

let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
let Coordinate331 = browser.currentScene.createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]);
LineSet330.coord = Coordinate331;

//from r_talocrural to r_talocalcaneonavicular vertices 2
let ColorRGBA332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment325.children[1] = Shape329;

let Shape333 = browser.currentScene.createNode("Shape");
let LineSet334 = browser.currentScene.createNode("LineSet");
LineSet334.vertexCount = new MFInt32(new int[2]);
let Coordinate335 = browser.currentScene.createNode("Coordinate");
Coordinate335.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]);
LineSet334.coord = Coordinate335;

//from r_talocrural to r_calcaneocuboid vertices 2
let ColorRGBA336 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA336.USE = "HAnimSegmentLineColorRGBA";
LineSet334.color = ColorRGBA336;

Shape333.geometry = LineSet334;

HAnimSegment325.children[2] = Shape333;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.name = "r_talocalcaneonavicular";
HAnimJoint337.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint337.center = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
HAnimJoint337.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint337.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment338.name = "r_navicular";
HAnimSegment338.DEF = "hanim_r_navicular";
let Transform339 = browser.currentScene.createNode("Transform");
Transform339.translation = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
let Transform340 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "HAnimJointShape";
Transform340.child = new undefined();

Transform340.child[0] = Shape341;

Transform339.children = new MFNode();

Transform339.children[0] = Transform340;

HAnimSegment338.children = new MFNode();

HAnimSegment338.children[0] = Transform339;

let Shape342 = browser.currentScene.createNode("Shape");
let LineSet343 = browser.currentScene.createNode("LineSet");
LineSet343.vertexCount = new MFInt32(new int[2]);
let Coordinate344 = browser.currentScene.createNode("Coordinate");
Coordinate344.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]);
LineSet343.coord = Coordinate344;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
let ColorRGBA345 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA345.USE = "HAnimSegmentLineColorRGBA";
LineSet343.color = ColorRGBA345;

Shape342.geometry = LineSet343;

HAnimSegment338.children[1] = Shape342;

let Shape346 = browser.currentScene.createNode("Shape");
let LineSet347 = browser.currentScene.createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[2]);
let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]);
LineSet347.coord = Coordinate348;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
let ColorRGBA349 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimSegment338.children[2] = Shape346;

let Shape350 = browser.currentScene.createNode("Shape");
let LineSet351 = browser.currentScene.createNode("LineSet");
LineSet351.vertexCount = new MFInt32(new int[2]);
let Coordinate352 = browser.currentScene.createNode("Coordinate");
Coordinate352.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]);
LineSet351.coord = Coordinate352;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
let ColorRGBA353 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA353.USE = "HAnimSegmentLineColorRGBA";
LineSet351.color = ColorRGBA353;

Shape350.geometry = LineSet351;

HAnimSegment338.children[3] = Shape350;

HAnimJoint337.children = new MFNode();

HAnimJoint337.children[0] = HAnimSegment338;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.name = "r_cuneonavicular_1";
HAnimJoint354.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint354.center = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
HAnimJoint354.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint354.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment355.name = "r_cuneiform_1";
HAnimSegment355.DEF = "hanim_r_cuneiform_1";
let Transform356 = browser.currentScene.createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
let Transform357 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "HAnimJointShape";
Transform357.child = new undefined();

Transform357.child[0] = Shape358;

Transform356.children = new MFNode();

Transform356.children[0] = Transform357;

HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = Transform356;

let Shape359 = browser.currentScene.createNode("Shape");
let LineSet360 = browser.currentScene.createNode("LineSet");
LineSet360.vertexCount = new MFInt32(new int[2]);
let Coordinate361 = browser.currentScene.createNode("Coordinate");
Coordinate361.point = new MFVec3f(new float[-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]);
LineSet360.coord = Coordinate361;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
let ColorRGBA362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA362.USE = "HAnimSegmentLineColorRGBA";
LineSet360.color = ColorRGBA362;

Shape359.geometry = LineSet360;

HAnimSegment355.children[1] = Shape359;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimSegment355;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.name = "r_tarsometatarsal_1";
HAnimJoint363.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint363.center = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
HAnimJoint363.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint363.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment364 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment364.name = "r_metatarsal_1";
HAnimSegment364.DEF = "hanim_r_metatarsal_1";
let Transform365 = browser.currentScene.createNode("Transform");
Transform365.translation = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
let Transform366 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "HAnimJointShape";
Transform366.child = new undefined();

Transform366.child[0] = Shape367;

Transform365.children = new MFNode();

Transform365.children[0] = Transform366;

HAnimSegment364.children = new MFNode();

HAnimSegment364.children[0] = Transform365;

let Shape368 = browser.currentScene.createNode("Shape");
let LineSet369 = browser.currentScene.createNode("LineSet");
LineSet369.vertexCount = new MFInt32(new int[2]);
let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]);
LineSet369.coord = Coordinate370;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
let ColorRGBA371 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
LineSet369.color = ColorRGBA371;

Shape368.geometry = LineSet369;

HAnimSegment364.children[1] = Shape368;

HAnimJoint363.children = new MFNode();

HAnimJoint363.children[0] = HAnimSegment364;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.name = "r_metatarsophalangeal_1";
HAnimJoint372.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint372.center = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment373 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment373.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment373.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
let Transform375 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape376 = browser.currentScene.createNode("Shape");
Shape376.USE = "HAnimJointShape";
Transform375.child = new undefined();

Transform375.child[0] = Shape376;

Transform374.children = new MFNode();

Transform374.children[0] = Transform375;

HAnimSegment373.children = new MFNode();

HAnimSegment373.children[0] = Transform374;

let Shape377 = browser.currentScene.createNode("Shape");
let LineSet378 = browser.currentScene.createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[2]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]);
LineSet378.coord = Coordinate379;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
let ColorRGBA380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimSegment373.children[1] = Shape377;

HAnimJoint372.children = new MFNode();

HAnimJoint372.children[0] = HAnimSegment373;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.name = "r_tarsal_interphalangeal_1";
HAnimJoint381.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint381.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint381.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.children[1] = HAnimJoint381;

HAnimJoint363.children[1] = HAnimJoint372;

HAnimJoint354.children[1] = HAnimJoint363;

HAnimJoint337.children[1] = HAnimJoint354;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.name = "r_cuneonavicular_2";
HAnimJoint382.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint382.center = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
HAnimJoint382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint382.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment383 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment383.name = "r_cuneiform_2";
HAnimSegment383.DEF = "hanim_r_cuneiform_2";
let Transform384 = browser.currentScene.createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
let Transform385 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape386 = browser.currentScene.createNode("Shape");
Shape386.USE = "HAnimJointShape";
Transform385.child = new undefined();

Transform385.child[0] = Shape386;

Transform384.children = new MFNode();

Transform384.children[0] = Transform385;

HAnimSegment383.children = new MFNode();

HAnimSegment383.children[0] = Transform384;

let Shape387 = browser.currentScene.createNode("Shape");
let LineSet388 = browser.currentScene.createNode("LineSet");
LineSet388.vertexCount = new MFInt32(new int[2]);
let Coordinate389 = browser.currentScene.createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]);
LineSet388.coord = Coordinate389;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
let ColorRGBA390 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSegmentLineColorRGBA";
LineSet388.color = ColorRGBA390;

Shape387.geometry = LineSet388;

HAnimSegment383.children[1] = Shape387;

HAnimJoint382.children = new MFNode();

HAnimJoint382.children[0] = HAnimSegment383;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.name = "r_tarsometatarsal_2";
HAnimJoint391.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint391.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint391.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment392.name = "r_metatarsal_2";
HAnimSegment392.DEF = "hanim_r_metatarsal_2";
let Transform393 = browser.currentScene.createNode("Transform");
Transform393.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
let Transform394 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "HAnimJointShape";
Transform394.child = new undefined();

Transform394.child[0] = Shape395;

Transform393.children = new MFNode();

Transform393.children[0] = Transform394;

HAnimSegment392.children = new MFNode();

HAnimSegment392.children[0] = Transform393;

let Shape396 = browser.currentScene.createNode("Shape");
let LineSet397 = browser.currentScene.createNode("LineSet");
LineSet397.vertexCount = new MFInt32(new int[2]);
let Coordinate398 = browser.currentScene.createNode("Coordinate");
Coordinate398.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet397.coord = Coordinate398;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA399 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA399.USE = "HAnimSegmentLineColorRGBA";
LineSet397.color = ColorRGBA399;

Shape396.geometry = LineSet397;

HAnimSegment392.children[1] = Shape396;

HAnimJoint391.children = new MFNode();

HAnimJoint391.children[0] = HAnimSegment392;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.name = "r_metatarsophalangeal_2";
HAnimJoint400.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint400.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint400.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment401.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment401.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform402 = browser.currentScene.createNode("Transform");
Transform402.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
let Transform403 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape404 = browser.currentScene.createNode("Shape");
Shape404.USE = "HAnimJointShape";
Transform403.child = new undefined();

Transform403.child[0] = Shape404;

Transform402.children = new MFNode();

Transform402.children[0] = Transform403;

HAnimSegment401.children = new MFNode();

HAnimSegment401.children[0] = Transform402;

let Shape405 = browser.currentScene.createNode("Shape");
let LineSet406 = browser.currentScene.createNode("LineSet");
LineSet406.vertexCount = new MFInt32(new int[2]);
let Coordinate407 = browser.currentScene.createNode("Coordinate");
Coordinate407.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]);
LineSet406.coord = Coordinate407;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
LineSet406.color = ColorRGBA408;

Shape405.geometry = LineSet406;

HAnimSegment401.children[1] = Shape405;

HAnimJoint400.children = new MFNode();

HAnimJoint400.children[0] = HAnimSegment401;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint409.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint409.center = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
HAnimJoint409.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint409.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment410 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment410.name = "r_tarsal_middle_phalanx_2";
HAnimSegment410.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform411 = browser.currentScene.createNode("Transform");
Transform411.translation = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
let Transform412 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape413 = browser.currentScene.createNode("Shape");
Shape413.USE = "HAnimJointShape";
Transform412.child = new undefined();

Transform412.child[0] = Shape413;

Transform411.children = new MFNode();

Transform411.children[0] = Transform412;

HAnimSegment410.children = new MFNode();

HAnimSegment410.children[0] = Transform411;

let Shape414 = browser.currentScene.createNode("Shape");
let LineSet415 = browser.currentScene.createNode("LineSet");
LineSet415.vertexCount = new MFInt32(new int[2]);
let Coordinate416 = browser.currentScene.createNode("Coordinate");
Coordinate416.point = new MFVec3f(new float[-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]);
LineSet415.coord = Coordinate416;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA417 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA417.USE = "HAnimSegmentLineColorRGBA";
LineSet415.color = ColorRGBA417;

Shape414.geometry = LineSet415;

HAnimSegment410.children[1] = Shape414;

HAnimJoint409.children = new MFNode();

HAnimJoint409.children[0] = HAnimSegment410;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint418.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint418.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint418.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint418.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint409.children[1] = HAnimJoint418;

HAnimJoint400.children[1] = HAnimJoint409;

HAnimJoint391.children[1] = HAnimJoint400;

HAnimJoint382.children[1] = HAnimJoint391;

HAnimJoint337.children[2] = HAnimJoint382;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.name = "r_cuneonavicular_3";
HAnimJoint419.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint419.center = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
HAnimJoint419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint419.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment420.name = "r_cuneiform_3";
HAnimSegment420.DEF = "hanim_r_cuneiform_3";
let Transform421 = browser.currentScene.createNode("Transform");
Transform421.translation = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
let Transform422 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.child = new undefined();

Transform422.child[0] = Shape423;

Transform421.children = new MFNode();

Transform421.children[0] = Transform422;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Transform421;

let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625]);
LineSet425.coord = Coordinate426;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
let ColorRGBA427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[1] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.name = "r_tarsometatarsal_3";
HAnimJoint428.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint428.center = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.name = "r_metatarsal_3";
HAnimSegment429.DEF = "hanim_r_metatarsal_3";
let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
let Transform431 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

Transform430.children = new MFNode();

Transform430.children[0] = Transform431;

HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = Transform430;

let Shape433 = browser.currentScene.createNode("Shape");
let LineSet434 = browser.currentScene.createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
let Coordinate435 = browser.currentScene.createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065]);
LineSet434.coord = Coordinate435;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
let ColorRGBA436 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.name = "r_metatarsophalangeal_3";
HAnimJoint437.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint437.center = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
HAnimJoint437.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint437.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment438.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
let Transform440 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

Transform439.children = new MFNode();

Transform439.children[0] = Transform440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

let Shape442 = browser.currentScene.createNode("Shape");
let LineSet443 = browser.currentScene.createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
let Coordinate444 = browser.currentScene.createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]);
LineSet443.coord = Coordinate444;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint446.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint446.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint446.center = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
HAnimJoint446.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.name = "r_tarsal_middle_phalanx_3";
HAnimSegment447.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform448 = browser.currentScene.createNode("Transform");
Transform448.translation = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
let Transform449 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape450 = browser.currentScene.createNode("Shape");
Shape450.USE = "HAnimJointShape";
Transform449.child = new undefined();

Transform449.child[0] = Shape450;

Transform448.children = new MFNode();

Transform448.children[0] = Transform449;

HAnimSegment447.children = new MFNode();

HAnimSegment447.children[0] = Transform448;

let Shape451 = browser.currentScene.createNode("Shape");
let LineSet452 = browser.currentScene.createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]);
LineSet452.coord = Coordinate453;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[1] = Shape451;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

let HAnimJoint455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint455.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint455.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint455.center = new SFVec3f(new float[-0.1002,0.0013,0.0178]);
HAnimJoint455.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.children[1] = HAnimJoint455;

HAnimJoint437.children[1] = HAnimJoint446;

HAnimJoint428.children[1] = HAnimJoint437;

HAnimJoint419.children[1] = HAnimJoint428;

HAnimJoint337.children[3] = HAnimJoint419;

HAnimJoint324.children[1] = HAnimJoint337;

let HAnimJoint456 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint456.name = "r_calcaneocuboid";
HAnimJoint456.DEF = "hanim_r_calcaneocuboid";
HAnimJoint456.center = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
HAnimJoint456.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint456.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment457.name = "r_calcaneus";
HAnimSegment457.DEF = "hanim_r_calcaneus";
let Transform458 = browser.currentScene.createNode("Transform");
Transform458.translation = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
let Transform459 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape460 = browser.currentScene.createNode("Shape");
Shape460.USE = "HAnimJointShape";
Transform459.child = new undefined();

Transform459.child[0] = Shape460;

Transform458.children = new MFNode();

Transform458.children[0] = Transform459;

HAnimSegment457.children = new MFNode();

HAnimSegment457.children[0] = Transform458;

let Shape461 = browser.currentScene.createNode("Shape");
let LineSet462 = browser.currentScene.createNode("LineSet");
LineSet462.vertexCount = new MFInt32(new int[2]);
let Coordinate463 = browser.currentScene.createNode("Coordinate");
Coordinate463.point = new MFVec3f(new float[-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]);
LineSet462.coord = Coordinate463;

//from r_calcaneocuboid to r_transversetarsal vertices 2
let ColorRGBA464 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA464.USE = "HAnimSegmentLineColorRGBA";
LineSet462.color = ColorRGBA464;

Shape461.geometry = LineSet462;

HAnimSegment457.children[1] = Shape461;

HAnimJoint456.children = new MFNode();

HAnimJoint456.children[0] = HAnimSegment457;

let HAnimJoint465 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint465.name = "r_transversetarsal";
HAnimJoint465.DEF = "hanim_r_transversetarsal";
HAnimJoint465.center = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
HAnimJoint465.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint465.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.name = "r_cuboid";
HAnimSegment466.DEF = "hanim_r_cuboid";
let Transform467 = browser.currentScene.createNode("Transform");
Transform467.translation = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
let Transform468 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape469 = browser.currentScene.createNode("Shape");
Shape469.USE = "HAnimJointShape";
Transform468.child = new undefined();

Transform468.child[0] = Shape469;

Transform467.children = new MFNode();

Transform467.children[0] = Transform468;

HAnimSegment466.children = new MFNode();

HAnimSegment466.children[0] = Transform467;

let Shape470 = browser.currentScene.createNode("Shape");
let LineSet471 = browser.currentScene.createNode("LineSet");
LineSet471.vertexCount = new MFInt32(new int[2]);
let Coordinate472 = browser.currentScene.createNode("Coordinate");
Coordinate472.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]);
LineSet471.coord = Coordinate472;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
let ColorRGBA473 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA473.USE = "HAnimSegmentLineColorRGBA";
LineSet471.color = ColorRGBA473;

Shape470.geometry = LineSet471;

HAnimSegment466.children[1] = Shape470;

let Shape474 = browser.currentScene.createNode("Shape");
let LineSet475 = browser.currentScene.createNode("LineSet");
LineSet475.vertexCount = new MFInt32(new int[2]);
let Coordinate476 = browser.currentScene.createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]);
LineSet475.coord = Coordinate476;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
let ColorRGBA477 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet475.color = ColorRGBA477;

Shape474.geometry = LineSet475;

HAnimSegment466.children[2] = Shape474;

HAnimJoint465.children = new MFNode();

HAnimJoint465.children[0] = HAnimSegment466;

let HAnimJoint478 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint478.name = "r_tarsometatarsal_4";
HAnimJoint478.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint478.center = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
HAnimJoint478.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint478.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.name = "r_metatarsal_4";
HAnimSegment479.DEF = "hanim_r_metatarsal_4";
let Transform480 = browser.currentScene.createNode("Transform");
Transform480.translation = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
let Transform481 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape482 = browser.currentScene.createNode("Shape");
Shape482.USE = "HAnimJointShape";
Transform481.child = new undefined();

Transform481.child[0] = Shape482;

Transform480.children = new MFNode();

Transform480.children[0] = Transform481;

HAnimSegment479.children = new MFNode();

HAnimSegment479.children[0] = Transform480;

let Shape483 = browser.currentScene.createNode("Shape");
let LineSet484 = browser.currentScene.createNode("LineSet");
LineSet484.vertexCount = new MFInt32(new int[2]);
let Coordinate485 = browser.currentScene.createNode("Coordinate");
Coordinate485.point = new MFVec3f(new float[-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]);
LineSet484.coord = Coordinate485;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
let ColorRGBA486 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA486.USE = "HAnimSegmentLineColorRGBA";
LineSet484.color = ColorRGBA486;

Shape483.geometry = LineSet484;

HAnimSegment479.children[1] = Shape483;

HAnimJoint478.children = new MFNode();

HAnimJoint478.children[0] = HAnimSegment479;

let HAnimJoint487 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint487.name = "r_metatarsophalangeal_4";
HAnimJoint487.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint487.center = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
HAnimJoint487.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint487.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment488.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform489 = browser.currentScene.createNode("Transform");
Transform489.translation = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
let Transform490 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape491 = browser.currentScene.createNode("Shape");
Shape491.USE = "HAnimJointShape";
Transform490.child = new undefined();

Transform490.child[0] = Shape491;

Transform489.children = new MFNode();

Transform489.children[0] = Transform490;

HAnimSegment488.children = new MFNode();

HAnimSegment488.children[0] = Transform489;

let Shape492 = browser.currentScene.createNode("Shape");
let LineSet493 = browser.currentScene.createNode("LineSet");
LineSet493.vertexCount = new MFInt32(new int[2]);
let Coordinate494 = browser.currentScene.createNode("Coordinate");
Coordinate494.point = new MFVec3f(new float[-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]);
LineSet493.coord = Coordinate494;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA495 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA495.USE = "HAnimSegmentLineColorRGBA";
LineSet493.color = ColorRGBA495;

Shape492.geometry = LineSet493;

HAnimSegment488.children[1] = Shape492;

HAnimJoint487.children = new MFNode();

HAnimJoint487.children[0] = HAnimSegment488;

let HAnimJoint496 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint496.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint496.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint496.center = new SFVec3f(new float[-0.114,0.0037,0.0044]);
HAnimJoint496.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint496.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.name = "r_tarsal_middle_phalanx_4";
HAnimSegment497.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform498 = browser.currentScene.createNode("Transform");
Transform498.translation = new SFVec3f(new float[-0.114,0.0037,0.0044]);
let Transform499 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "HAnimJointShape";
Transform499.child = new undefined();

Transform499.child[0] = Shape500;

Transform498.children = new MFNode();

Transform498.children[0] = Transform499;

HAnimSegment497.children = new MFNode();

HAnimSegment497.children[0] = Transform498;

let Shape501 = browser.currentScene.createNode("Shape");
let LineSet502 = browser.currentScene.createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
let Coordinate503 = browser.currentScene.createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]);
LineSet502.coord = Coordinate503;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA504 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA504.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA504;

Shape501.geometry = LineSet502;

HAnimSegment497.children[1] = Shape501;

HAnimJoint496.children = new MFNode();

HAnimJoint496.children[0] = HAnimSegment497;

let HAnimJoint505 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint505.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint505.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint505.center = new SFVec3f(new float[-0.1155,0.0008,0.0118]);
HAnimJoint505.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint505.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint496.children[1] = HAnimJoint505;

HAnimJoint487.children[1] = HAnimJoint496;

HAnimJoint478.children[1] = HAnimJoint487;

HAnimJoint465.children[1] = HAnimJoint478;

let HAnimJoint506 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint506.name = "r_tarsometatarsal_5";
HAnimJoint506.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint506.center = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
HAnimJoint506.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint506.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.name = "r_metatarsal_5";
HAnimSegment507.DEF = "hanim_r_metatarsal_5";
let Transform508 = browser.currentScene.createNode("Transform");
Transform508.translation = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
let Transform509 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "HAnimJointShape";
Transform509.child = new undefined();

Transform509.child[0] = Shape510;

Transform508.children = new MFNode();

Transform508.children[0] = Transform509;

HAnimSegment507.children = new MFNode();

HAnimSegment507.children[0] = Transform508;

let Shape511 = browser.currentScene.createNode("Shape");
let LineSet512 = browser.currentScene.createNode("LineSet");
LineSet512.vertexCount = new MFInt32(new int[2]);
let Coordinate513 = browser.currentScene.createNode("Coordinate");
Coordinate513.point = new MFVec3f(new float[-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]);
LineSet512.coord = Coordinate513;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
let ColorRGBA514 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA514.USE = "HAnimSegmentLineColorRGBA";
LineSet512.color = ColorRGBA514;

Shape511.geometry = LineSet512;

HAnimSegment507.children[1] = Shape511;

HAnimJoint506.children = new MFNode();

HAnimJoint506.children[0] = HAnimSegment507;

let HAnimJoint515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint515.name = "r_metatarsophalangeal_5";
HAnimJoint515.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint515.center = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
HAnimJoint515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint515.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment516.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform517 = browser.currentScene.createNode("Transform");
Transform517.translation = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
let Transform518 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape519 = browser.currentScene.createNode("Shape");
Shape519.USE = "HAnimJointShape";
Transform518.child = new undefined();

Transform518.child[0] = Shape519;

Transform517.children = new MFNode();

Transform517.children[0] = Transform518;

HAnimSegment516.children = new MFNode();

HAnimSegment516.children[0] = Transform517;

let Shape520 = browser.currentScene.createNode("Shape");
let LineSet521 = browser.currentScene.createNode("LineSet");
LineSet521.vertexCount = new MFInt32(new int[2]);
let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]);
LineSet521.coord = Coordinate522;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSegmentLineColorRGBA";
LineSet521.color = ColorRGBA523;

Shape520.geometry = LineSet521;

HAnimSegment516.children[1] = Shape520;

HAnimJoint515.children = new MFNode();

HAnimJoint515.children[0] = HAnimSegment516;

let HAnimJoint524 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint524.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint524.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint524.center = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
HAnimJoint524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint524.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment525.name = "r_tarsal_middle_phalanx_5";
HAnimSegment525.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform526 = browser.currentScene.createNode("Transform");
Transform526.translation = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
let Transform527 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape528 = browser.currentScene.createNode("Shape");
Shape528.USE = "HAnimJointShape";
Transform527.child = new undefined();

Transform527.child[0] = Shape528;

Transform526.children = new MFNode();

Transform526.children[0] = Transform527;

HAnimSegment525.children = new MFNode();

HAnimSegment525.children[0] = Transform526;

let Shape529 = browser.currentScene.createNode("Shape");
let LineSet530 = browser.currentScene.createNode("LineSet");
LineSet530.vertexCount = new MFInt32(new int[2]);
let Coordinate531 = browser.currentScene.createNode("Coordinate");
Coordinate531.point = new MFVec3f(new float[-0.1262,0.0023,-0.0077,-0.1271,0,0]);
LineSet530.coord = Coordinate531;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA532 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA532.USE = "HAnimSegmentLineColorRGBA";
LineSet530.color = ColorRGBA532;

Shape529.geometry = LineSet530;

HAnimSegment525.children[1] = Shape529;

HAnimJoint524.children = new MFNode();

HAnimJoint524.children[0] = HAnimSegment525;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint533.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint533.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint524.children[1] = HAnimJoint533;

HAnimJoint515.children[1] = HAnimJoint524;

HAnimJoint506.children[1] = HAnimJoint515;

HAnimJoint465.children[2] = HAnimJoint506;

HAnimJoint456.children[1] = HAnimJoint465;

HAnimJoint324.children[2] = HAnimJoint456;

HAnimJoint315.children[1] = HAnimJoint324;

HAnimJoint306.children[1] = HAnimJoint315;

HAnimJoint65.children[2] = HAnimJoint306;

HAnimJoint52.children[1] = HAnimJoint65;

let HAnimJoint534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint534.name = "vl5";
HAnimJoint534.DEF = "hanim_vl5";
HAnimJoint534.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint534.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment535.name = "l5";
HAnimSegment535.DEF = "hanim_l5";
let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform537 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape538 = browser.currentScene.createNode("Shape");
Shape538.USE = "HAnimJointShape";
Transform537.child = new undefined();

Transform537.child[0] = Shape538;

Transform536.children = new MFNode();

Transform536.children[0] = Transform537;

HAnimSegment535.children = new MFNode();

HAnimSegment535.children[0] = Transform536;

let Shape539 = browser.currentScene.createNode("Shape");
let LineSet540 = browser.currentScene.createNode("LineSet");
LineSet540.vertexCount = new MFInt32(new int[2]);
let Coordinate541 = browser.currentScene.createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet540.coord = Coordinate541;

//from vl5 to vl4 vertices 2
let ColorRGBA542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet540.color = ColorRGBA542;

Shape539.geometry = LineSet540;

HAnimSegment535.children[1] = Shape539;

HAnimJoint534.children = new MFNode();

HAnimJoint534.children[0] = HAnimSegment535;

let HAnimJoint543 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint543.name = "vl4";
HAnimJoint543.DEF = "hanim_vl4";
HAnimJoint543.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment544 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment544.name = "l4";
HAnimSegment544.DEF = "hanim_l4";
let Transform545 = browser.currentScene.createNode("Transform");
Transform545.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Transform546 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape547 = browser.currentScene.createNode("Shape");
Shape547.USE = "HAnimJointShape";
Transform546.child = new undefined();

Transform546.child[0] = Shape547;

Transform545.children = new MFNode();

Transform545.children[0] = Transform546;

HAnimSegment544.children = new MFNode();

HAnimSegment544.children[0] = Transform545;

let Shape548 = browser.currentScene.createNode("Shape");
let LineSet549 = browser.currentScene.createNode("LineSet");
LineSet549.vertexCount = new MFInt32(new int[2]);
let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet549.coord = Coordinate550;

//from vl4 to vl3 vertices 2
let ColorRGBA551 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet549.color = ColorRGBA551;

Shape548.geometry = LineSet549;

HAnimSegment544.children[1] = Shape548;

HAnimJoint543.children = new MFNode();

HAnimJoint543.children[0] = HAnimSegment544;

let HAnimJoint552 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint552.name = "vl3";
HAnimJoint552.DEF = "hanim_vl3";
HAnimJoint552.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint552.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment553 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment553.name = "l3";
HAnimSegment553.DEF = "hanim_l3";
let Transform554 = browser.currentScene.createNode("Transform");
Transform554.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Transform555 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape556 = browser.currentScene.createNode("Shape");
Shape556.USE = "HAnimJointShape";
Transform555.child = new undefined();

Transform555.child[0] = Shape556;

Transform554.children = new MFNode();

Transform554.children[0] = Transform555;

HAnimSegment553.children = new MFNode();

HAnimSegment553.children[0] = Transform554;

let Shape557 = browser.currentScene.createNode("Shape");
let LineSet558 = browser.currentScene.createNode("LineSet");
LineSet558.vertexCount = new MFInt32(new int[2]);
let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet558.coord = Coordinate559;

//from vl3 to vl2 vertices 2
let ColorRGBA560 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet558.color = ColorRGBA560;

Shape557.geometry = LineSet558;

HAnimSegment553.children[1] = Shape557;

HAnimJoint552.children = new MFNode();

HAnimJoint552.children[0] = HAnimSegment553;

let HAnimJoint561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint561.name = "vl2";
HAnimJoint561.DEF = "hanim_vl2";
HAnimJoint561.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment562 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment562.name = "l2";
HAnimSegment562.DEF = "hanim_l2";
let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Transform564 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape565 = browser.currentScene.createNode("Shape");
Shape565.USE = "HAnimJointShape";
Transform564.child = new undefined();

Transform564.child[0] = Shape565;

Transform563.children = new MFNode();

Transform563.children[0] = Transform564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

let Shape566 = browser.currentScene.createNode("Shape");
let LineSet567 = browser.currentScene.createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet567.coord = Coordinate568;

//from vl2 to vl1 vertices 2
let ColorRGBA569 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimSegment562.children[1] = Shape566;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

let HAnimJoint570 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint570.name = "vl1";
HAnimJoint570.DEF = "hanim_vl1";
HAnimJoint570.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint570.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint570.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment571 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment571.name = "l1";
HAnimSegment571.DEF = "hanim_l1";
let Transform572 = browser.currentScene.createNode("Transform");
Transform572.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform573 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape574 = browser.currentScene.createNode("Shape");
Shape574.USE = "HAnimJointShape";
Transform573.child = new undefined();

Transform573.child[0] = Shape574;

Transform572.children = new MFNode();

Transform572.children[0] = Transform573;

HAnimSegment571.children = new MFNode();

HAnimSegment571.children[0] = Transform572;

let Shape575 = browser.currentScene.createNode("Shape");
let LineSet576 = browser.currentScene.createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet576.coord = Coordinate577;

//from vl1 to vt12 vertices 2
let ColorRGBA578 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment571.children[1] = Shape575;

HAnimJoint570.children = new MFNode();

HAnimJoint570.children[0] = HAnimSegment571;

let HAnimJoint579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint579.name = "vt12";
HAnimJoint579.DEF = "hanim_vt12";
HAnimJoint579.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint579.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint579.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment580 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment580.name = "t12";
HAnimSegment580.DEF = "hanim_t12";
let Transform581 = browser.currentScene.createNode("Transform");
Transform581.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform582 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape583 = browser.currentScene.createNode("Shape");
Shape583.USE = "HAnimJointShape";
Transform582.child = new undefined();

Transform582.child[0] = Shape583;

Transform581.children = new MFNode();

Transform581.children[0] = Transform582;

HAnimSegment580.children = new MFNode();

HAnimSegment580.children[0] = Transform581;

let Shape584 = browser.currentScene.createNode("Shape");
let LineSet585 = browser.currentScene.createNode("LineSet");
LineSet585.vertexCount = new MFInt32(new int[2]);
let Coordinate586 = browser.currentScene.createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet585.coord = Coordinate586;

//from vt12 to vt11 vertices 2
let ColorRGBA587 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
LineSet585.color = ColorRGBA587;

Shape584.geometry = LineSet585;

HAnimSegment580.children[1] = Shape584;

HAnimJoint579.children = new MFNode();

HAnimJoint579.children[0] = HAnimSegment580;

let HAnimJoint588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint588.name = "vt11";
HAnimJoint588.DEF = "hanim_vt11";
HAnimJoint588.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint588.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint588.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment589 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment589.name = "t11";
HAnimSegment589.DEF = "hanim_t11";
let Transform590 = browser.currentScene.createNode("Transform");
Transform590.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform591 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape592 = browser.currentScene.createNode("Shape");
Shape592.USE = "HAnimJointShape";
Transform591.child = new undefined();

Transform591.child[0] = Shape592;

Transform590.children = new MFNode();

Transform590.children[0] = Transform591;

HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = Transform590;

let Shape593 = browser.currentScene.createNode("Shape");
let LineSet594 = browser.currentScene.createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet594.coord = Coordinate595;

//from vt11 to vt10 vertices 2
let ColorRGBA596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment589.children[1] = Shape593;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

let HAnimJoint597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint597.name = "vt10";
HAnimJoint597.DEF = "hanim_vt10";
HAnimJoint597.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint597.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint597.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment598 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment598.name = "t10";
HAnimSegment598.DEF = "hanim_t10";
let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform600 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600.child = new undefined();

Transform600.child[0] = Shape601;

Transform599.children = new MFNode();

Transform599.children[0] = Transform600;

HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = Transform599;

let Shape602 = browser.currentScene.createNode("Shape");
let LineSet603 = browser.currentScene.createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
let Coordinate604 = browser.currentScene.createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet603.coord = Coordinate604;

//from vt10 to vt9 vertices 2
let ColorRGBA605 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[1] = Shape602;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

let HAnimJoint606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint606.name = "vt9";
HAnimJoint606.DEF = "hanim_vt9";
HAnimJoint606.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint606.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint606.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment607 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment607.name = "t9";
HAnimSegment607.DEF = "hanim_t9";
let Transform608 = browser.currentScene.createNode("Transform");
Transform608.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Transform609 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape610 = browser.currentScene.createNode("Shape");
Shape610.USE = "HAnimJointShape";
Transform609.child = new undefined();

Transform609.child[0] = Shape610;

Transform608.children = new MFNode();

Transform608.children[0] = Transform609;

HAnimSegment607.children = new MFNode();

HAnimSegment607.children[0] = Transform608;

let Shape611 = browser.currentScene.createNode("Shape");
let LineSet612 = browser.currentScene.createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
let Coordinate613 = browser.currentScene.createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet612.coord = Coordinate613;

//from vt9 to vt8 vertices 2
let ColorRGBA614 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

let HAnimJoint615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint615.name = "vt8";
HAnimJoint615.DEF = "hanim_vt8";
HAnimJoint615.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint615.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint615.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment616 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment616.name = "t8";
HAnimSegment616.DEF = "hanim_t8";
let Transform617 = browser.currentScene.createNode("Transform");
Transform617.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform618 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

Transform617.children = new MFNode();

Transform617.children[0] = Transform618;

HAnimSegment616.children = new MFNode();

HAnimSegment616.children[0] = Transform617;

let Shape620 = browser.currentScene.createNode("Shape");
let LineSet621 = browser.currentScene.createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
let Coordinate622 = browser.currentScene.createNode("Coordinate");
Coordinate622.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet621.coord = Coordinate622;

//from vt8 to vt7 vertices 2
let ColorRGBA623 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

let HAnimJoint624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint624.name = "vt7";
HAnimJoint624.DEF = "hanim_vt7";
HAnimJoint624.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint624.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment625 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment625.name = "t7";
HAnimSegment625.DEF = "hanim_t7";
let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform627 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape628 = browser.currentScene.createNode("Shape");
Shape628.USE = "HAnimJointShape";
Transform627.child = new undefined();

Transform627.child[0] = Shape628;

Transform626.children = new MFNode();

Transform626.children[0] = Transform627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

let Shape629 = browser.currentScene.createNode("Shape");
let LineSet630 = browser.currentScene.createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
let Coordinate631 = browser.currentScene.createNode("Coordinate");
Coordinate631.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet630.coord = Coordinate631;

//from vt7 to vt6 vertices 2
let ColorRGBA632 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

let HAnimJoint633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint633.name = "vt6";
HAnimJoint633.DEF = "hanim_vt6";
HAnimJoint633.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint633.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment634 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment634.name = "t6";
HAnimSegment634.DEF = "hanim_t6";
let Transform635 = browser.currentScene.createNode("Transform");
Transform635.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform636 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape637 = browser.currentScene.createNode("Shape");
Shape637.USE = "HAnimJointShape";
Transform636.child = new undefined();

Transform636.child[0] = Shape637;

Transform635.children = new MFNode();

Transform635.children[0] = Transform636;

HAnimSegment634.children = new MFNode();

HAnimSegment634.children[0] = Transform635;

let Shape638 = browser.currentScene.createNode("Shape");
let LineSet639 = browser.currentScene.createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
let Coordinate640 = browser.currentScene.createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet639.coord = Coordinate640;

//from vt6 to vt5 vertices 2
let ColorRGBA641 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment634.children[1] = Shape638;

HAnimJoint633.children = new MFNode();

HAnimJoint633.children[0] = HAnimSegment634;

let HAnimJoint642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint642.name = "vt5";
HAnimJoint642.DEF = "hanim_vt5";
HAnimJoint642.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint642.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint642.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment643 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment643.name = "t5";
HAnimSegment643.DEF = "hanim_t5";
let Transform644 = browser.currentScene.createNode("Transform");
Transform644.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Transform645 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "HAnimJointShape";
Transform645.child = new undefined();

Transform645.child[0] = Shape646;

Transform644.children = new MFNode();

Transform644.children[0] = Transform645;

HAnimSegment643.children = new MFNode();

HAnimSegment643.children[0] = Transform644;

let Shape647 = browser.currentScene.createNode("Shape");
let LineSet648 = browser.currentScene.createNode("LineSet");
LineSet648.vertexCount = new MFInt32(new int[2]);
let Coordinate649 = browser.currentScene.createNode("Coordinate");
Coordinate649.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet648.coord = Coordinate649;

//from vt5 to vt4 vertices 2
let ColorRGBA650 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA650.USE = "HAnimSegmentLineColorRGBA";
LineSet648.color = ColorRGBA650;

Shape647.geometry = LineSet648;

HAnimSegment643.children[1] = Shape647;

HAnimJoint642.children = new MFNode();

HAnimJoint642.children[0] = HAnimSegment643;

let HAnimJoint651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint651.name = "vt4";
HAnimJoint651.DEF = "hanim_vt4";
HAnimJoint651.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment652 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment652.name = "t4";
HAnimSegment652.DEF = "hanim_t4";
let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform654 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape655 = browser.currentScene.createNode("Shape");
Shape655.USE = "HAnimJointShape";
Transform654.child = new undefined();

Transform654.child[0] = Shape655;

Transform653.children = new MFNode();

Transform653.children[0] = Transform654;

HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = Transform653;

let Shape656 = browser.currentScene.createNode("Shape");
let LineSet657 = browser.currentScene.createNode("LineSet");
LineSet657.vertexCount = new MFInt32(new int[2]);
let Coordinate658 = browser.currentScene.createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet657.coord = Coordinate658;

//from vt4 to vt3 vertices 2
let ColorRGBA659 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA659.USE = "HAnimSegmentLineColorRGBA";
LineSet657.color = ColorRGBA659;

Shape656.geometry = LineSet657;

HAnimSegment652.children[1] = Shape656;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

let HAnimJoint660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint660.name = "vt3";
HAnimJoint660.DEF = "hanim_vt3";
HAnimJoint660.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment661 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment661.name = "t3";
HAnimSegment661.DEF = "hanim_t3";
let Transform662 = browser.currentScene.createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform663 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape664 = browser.currentScene.createNode("Shape");
Shape664.USE = "HAnimJointShape";
Transform663.child = new undefined();

Transform663.child[0] = Shape664;

Transform662.children = new MFNode();

Transform662.children[0] = Transform663;

HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = Transform662;

let Shape665 = browser.currentScene.createNode("Shape");
let LineSet666 = browser.currentScene.createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
let Coordinate667 = browser.currentScene.createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet666.coord = Coordinate667;

//from vt3 to vt2 vertices 2
let ColorRGBA668 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA668.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA668;

Shape665.geometry = LineSet666;

HAnimSegment661.children[1] = Shape665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

let HAnimJoint669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint669.name = "vt2";
HAnimJoint669.DEF = "hanim_vt2";
HAnimJoint669.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint669.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint669.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment670.name = "t2";
HAnimSegment670.DEF = "hanim_t2";
let Transform671 = browser.currentScene.createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Transform672 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape673 = browser.currentScene.createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.child = new undefined();

Transform672.child[0] = Shape673;

Transform671.children = new MFNode();

Transform671.children[0] = Transform672;

HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = Transform671;

let Shape674 = browser.currentScene.createNode("Shape");
let LineSet675 = browser.currentScene.createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
let Coordinate676 = browser.currentScene.createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet675.coord = Coordinate676;

//from vt2 to vt1 vertices 2
let ColorRGBA677 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA677.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[1] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

let HAnimJoint678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint678.name = "vt1";
HAnimJoint678.DEF = "hanim_vt1";
HAnimJoint678.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint678.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint678.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment679.name = "t1";
HAnimSegment679.DEF = "hanim_t1";
let Transform680 = browser.currentScene.createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform681 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape682 = browser.currentScene.createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.child = new undefined();

Transform681.child[0] = Shape682;

Transform680.children = new MFNode();

Transform680.children[0] = Transform681;

HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = Transform680;

let Shape683 = browser.currentScene.createNode("Shape");
let LineSet684 = browser.currentScene.createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
let Coordinate685 = browser.currentScene.createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet684.coord = Coordinate685;

//from vt1 to vc7 vertices 2
let ColorRGBA686 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[1] = Shape683;

let Shape687 = browser.currentScene.createNode("Shape");
let LineSet688 = browser.currentScene.createNode("LineSet");
LineSet688.vertexCount = new MFInt32(new int[2]);
let Coordinate689 = browser.currentScene.createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet688.coord = Coordinate689;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA690 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA690.USE = "HAnimSegmentLineColorRGBA";
LineSet688.color = ColorRGBA690;

Shape687.geometry = LineSet688;

HAnimSegment679.children[2] = Shape687;

let Shape691 = browser.currentScene.createNode("Shape");
let LineSet692 = browser.currentScene.createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet692.coord = Coordinate693;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA694 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment679.children[3] = Shape691;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

let HAnimJoint695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint695.name = "vc7";
HAnimJoint695.DEF = "hanim_vc7";
HAnimJoint695.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint695.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint695.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment696.name = "c7";
HAnimSegment696.DEF = "hanim_c7";
let Transform697 = browser.currentScene.createNode("Transform");
Transform697.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform698 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape699 = browser.currentScene.createNode("Shape");
Shape699.USE = "HAnimJointShape";
Transform698.child = new undefined();

Transform698.child[0] = Shape699;

Transform697.children = new MFNode();

Transform697.children[0] = Transform698;

HAnimSegment696.children = new MFNode();

HAnimSegment696.children[0] = Transform697;

let Shape700 = browser.currentScene.createNode("Shape");
let LineSet701 = browser.currentScene.createNode("LineSet");
LineSet701.vertexCount = new MFInt32(new int[2]);
let Coordinate702 = browser.currentScene.createNode("Coordinate");
Coordinate702.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet701.coord = Coordinate702;

//from vc7 to vc6 vertices 2
let ColorRGBA703 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA703.USE = "HAnimSegmentLineColorRGBA";
LineSet701.color = ColorRGBA703;

Shape700.geometry = LineSet701;

HAnimSegment696.children[1] = Shape700;

HAnimJoint695.children = new MFNode();

HAnimJoint695.children[0] = HAnimSegment696;

let HAnimJoint704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint704.name = "vc6";
HAnimJoint704.DEF = "hanim_vc6";
HAnimJoint704.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint704.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint704.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment705.name = "c6";
HAnimSegment705.DEF = "hanim_c6";
let Transform706 = browser.currentScene.createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform707 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape708 = browser.currentScene.createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

Transform706.children = new MFNode();

Transform706.children[0] = Transform707;

HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = Transform706;

let Shape709 = browser.currentScene.createNode("Shape");
let LineSet710 = browser.currentScene.createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
let Coordinate711 = browser.currentScene.createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet710.coord = Coordinate711;

//from vc6 to vc5 vertices 2
let ColorRGBA712 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[1] = Shape709;

HAnimJoint704.children = new MFNode();

HAnimJoint704.children[0] = HAnimSegment705;

let HAnimJoint713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint713.name = "vc5";
HAnimJoint713.DEF = "hanim_vc5";
HAnimJoint713.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint713.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint713.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment714 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment714.name = "c5";
HAnimSegment714.DEF = "hanim_c5";
let Transform715 = browser.currentScene.createNode("Transform");
Transform715.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform716 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape717 = browser.currentScene.createNode("Shape");
Shape717.USE = "HAnimJointShape";
Transform716.child = new undefined();

Transform716.child[0] = Shape717;

Transform715.children = new MFNode();

Transform715.children[0] = Transform716;

HAnimSegment714.children = new MFNode();

HAnimSegment714.children[0] = Transform715;

let Shape718 = browser.currentScene.createNode("Shape");
let LineSet719 = browser.currentScene.createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
let Coordinate720 = browser.currentScene.createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet719.coord = Coordinate720;

//from vc5 to vc4 vertices 2
let ColorRGBA721 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA721;

Shape718.geometry = LineSet719;

HAnimSegment714.children[1] = Shape718;

HAnimJoint713.children = new MFNode();

HAnimJoint713.children[0] = HAnimSegment714;

let HAnimJoint722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint722.name = "vc4";
HAnimJoint722.DEF = "hanim_vc4";
HAnimJoint722.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint722.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint722.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment723.name = "c4";
HAnimSegment723.DEF = "hanim_c4";
let Transform724 = browser.currentScene.createNode("Transform");
Transform724.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform725 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape726 = browser.currentScene.createNode("Shape");
Shape726.USE = "HAnimJointShape";
Transform725.child = new undefined();

Transform725.child[0] = Shape726;

Transform724.children = new MFNode();

Transform724.children[0] = Transform725;

HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = Transform724;

let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet728.coord = Coordinate729;

//from vc4 to vc3 vertices 2
let ColorRGBA730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment723.children[1] = Shape727;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

let HAnimJoint731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint731.name = "vc3";
HAnimJoint731.DEF = "hanim_vc3";
HAnimJoint731.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint731.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint731.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment732.name = "c3";
HAnimSegment732.DEF = "hanim_c3";
let Transform733 = browser.currentScene.createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform734 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape735 = browser.currentScene.createNode("Shape");
Shape735.USE = "HAnimJointShape";
Transform734.child = new undefined();

Transform734.child[0] = Shape735;

Transform733.children = new MFNode();

Transform733.children[0] = Transform734;

HAnimSegment732.children = new MFNode();

HAnimSegment732.children[0] = Transform733;

let Shape736 = browser.currentScene.createNode("Shape");
let LineSet737 = browser.currentScene.createNode("LineSet");
LineSet737.vertexCount = new MFInt32(new int[2]);
let Coordinate738 = browser.currentScene.createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet737.coord = Coordinate738;

//from vc3 to vc2 vertices 2
let ColorRGBA739 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSegmentLineColorRGBA";
LineSet737.color = ColorRGBA739;

Shape736.geometry = LineSet737;

HAnimSegment732.children[1] = Shape736;

HAnimJoint731.children = new MFNode();

HAnimJoint731.children[0] = HAnimSegment732;

let HAnimJoint740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint740.name = "vc2";
HAnimJoint740.DEF = "hanim_vc2";
HAnimJoint740.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment741.name = "c2";
HAnimSegment741.DEF = "hanim_c2";
let Transform742 = browser.currentScene.createNode("Transform");
Transform742.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform743 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape744 = browser.currentScene.createNode("Shape");
Shape744.USE = "HAnimJointShape";
Transform743.child = new undefined();

Transform743.child[0] = Shape744;

Transform742.children = new MFNode();

Transform742.children[0] = Transform743;

HAnimSegment741.children = new MFNode();

HAnimSegment741.children[0] = Transform742;

let Shape745 = browser.currentScene.createNode("Shape");
let LineSet746 = browser.currentScene.createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
let Coordinate747 = browser.currentScene.createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet746.coord = Coordinate747;

//from vc2 to vc1 vertices 2
let ColorRGBA748 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA748.USE = "HAnimSegmentLineColorRGBA";
LineSet746.color = ColorRGBA748;

Shape745.geometry = LineSet746;

HAnimSegment741.children[1] = Shape745;

HAnimJoint740.children = new MFNode();

HAnimJoint740.children[0] = HAnimSegment741;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.name = "vc1";
HAnimJoint749.DEF = "hanim_vc1";
HAnimJoint749.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment750.name = "c1";
HAnimSegment750.DEF = "hanim_c1";
let Transform751 = browser.currentScene.createNode("Transform");
Transform751.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
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
Coordinate756.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet755.coord = Coordinate756;

//from vc1 to skullbase vertices 2
let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

let HAnimJoint758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint758.name = "skullbase";
HAnimJoint758.DEF = "hanim_skullbase";
HAnimJoint758.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint758.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment759.name = "skull";
HAnimSegment759.DEF = "hanim_skull";
let Transform760 = browser.currentScene.createNode("Transform");
Transform760.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
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
Coordinate765.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet764.coord = Coordinate765;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA766 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSegmentLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment759.children[1] = Shape763;

let Shape767 = browser.currentScene.createNode("Shape");
let LineSet768 = browser.currentScene.createNode("LineSet");
LineSet768.vertexCount = new MFInt32(new int[2]);
let Coordinate769 = browser.currentScene.createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet768.coord = Coordinate769;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA770 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA770.USE = "HAnimSegmentLineColorRGBA";
LineSet768.color = ColorRGBA770;

Shape767.geometry = LineSet768;

HAnimSegment759.children[2] = Shape767;

let Shape771 = browser.currentScene.createNode("Shape");
let LineSet772 = browser.currentScene.createNode("LineSet");
LineSet772.vertexCount = new MFInt32(new int[2]);
let Coordinate773 = browser.currentScene.createNode("Coordinate");
Coordinate773.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet772.coord = Coordinate773;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA774 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA774.USE = "HAnimSegmentLineColorRGBA";
LineSet772.color = ColorRGBA774;

Shape771.geometry = LineSet772;

HAnimSegment759.children[3] = Shape771;

let Shape775 = browser.currentScene.createNode("Shape");
let LineSet776 = browser.currentScene.createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet776.coord = Coordinate777;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA778 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment759.children[4] = Shape775;

let Shape779 = browser.currentScene.createNode("Shape");
let LineSet780 = browser.currentScene.createNode("LineSet");
LineSet780.vertexCount = new MFInt32(new int[2]);
let Coordinate781 = browser.currentScene.createNode("Coordinate");
Coordinate781.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet780.coord = Coordinate781;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA782 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA782.USE = "HAnimSegmentLineColorRGBA";
LineSet780.color = ColorRGBA782;

Shape779.geometry = LineSet780;

HAnimSegment759.children[5] = Shape779;

let Shape783 = browser.currentScene.createNode("Shape");
let LineSet784 = browser.currentScene.createNode("LineSet");
LineSet784.vertexCount = new MFInt32(new int[2]);
let Coordinate785 = browser.currentScene.createNode("Coordinate");
Coordinate785.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet784.coord = Coordinate785;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA786 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA786.USE = "HAnimSegmentLineColorRGBA";
LineSet784.color = ColorRGBA786;

Shape783.geometry = LineSet784;

HAnimSegment759.children[6] = Shape783;

let Shape787 = browser.currentScene.createNode("Shape");
let LineSet788 = browser.currentScene.createNode("LineSet");
LineSet788.vertexCount = new MFInt32(new int[2]);
let Coordinate789 = browser.currentScene.createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet788.coord = Coordinate789;

//from skullbase to temporomandibular vertices 2
let ColorRGBA790 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA790.USE = "HAnimSegmentLineColorRGBA";
LineSet788.color = ColorRGBA790;

Shape787.geometry = LineSet788;

HAnimSegment759.children[7] = Shape787;

HAnimJoint758.children = new MFNode();

HAnimJoint758.children[0] = HAnimSegment759;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.name = "l_eyelid_joint";
HAnimJoint791.DEF = "hanim_l_eyelid_joint";
HAnimJoint791.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint791.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint791.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[1] = HAnimJoint791;

let HAnimJoint792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint792.name = "r_eyelid_joint";
HAnimJoint792.DEF = "hanim_r_eyelid_joint";
HAnimJoint792.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[2] = HAnimJoint792;

let HAnimJoint793 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint793.name = "l_eyeball_joint";
HAnimJoint793.DEF = "hanim_l_eyeball_joint";
HAnimJoint793.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint793.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint793.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[3] = HAnimJoint793;

let HAnimJoint794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint794.name = "r_eyeball_joint";
HAnimJoint794.DEF = "hanim_r_eyeball_joint";
HAnimJoint794.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint794.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint794.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[4] = HAnimJoint794;

let HAnimJoint795 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint795.name = "l_eyebrow_joint";
HAnimJoint795.DEF = "hanim_l_eyebrow_joint";
HAnimJoint795.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint795.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint795.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[5] = HAnimJoint795;

let HAnimJoint796 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint796.name = "r_eyebrow_joint";
HAnimJoint796.DEF = "hanim_r_eyebrow_joint";
HAnimJoint796.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint796.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint796.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[6] = HAnimJoint796;

let HAnimJoint797 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint797.name = "temporomandibular";
HAnimJoint797.DEF = "hanim_temporomandibular";
HAnimJoint797.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint797.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint797.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[7] = HAnimJoint797;

HAnimJoint749.children[1] = HAnimJoint758;

HAnimJoint740.children[1] = HAnimJoint749;

HAnimJoint731.children[1] = HAnimJoint740;

HAnimJoint722.children[1] = HAnimJoint731;

HAnimJoint713.children[1] = HAnimJoint722;

HAnimJoint704.children[1] = HAnimJoint713;

HAnimJoint695.children[1] = HAnimJoint704;

HAnimJoint678.children[1] = HAnimJoint695;

let HAnimJoint798 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint798.name = "l_sternoclavicular";
HAnimJoint798.DEF = "hanim_l_sternoclavicular";
HAnimJoint798.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint798.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint798.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment799.name = "l_clavicle";
HAnimSegment799.DEF = "hanim_l_clavicle";
let Transform800 = browser.currentScene.createNode("Transform");
Transform800.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform801 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimJointShape";
Transform801.child = new undefined();

Transform801.child[0] = Shape802;

Transform800.children = new MFNode();

Transform800.children[0] = Transform801;

HAnimSegment799.children = new MFNode();

HAnimSegment799.children[0] = Transform800;

let Shape803 = browser.currentScene.createNode("Shape");
let LineSet804 = browser.currentScene.createNode("LineSet");
LineSet804.vertexCount = new MFInt32(new int[2]);
let Coordinate805 = browser.currentScene.createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet804.coord = Coordinate805;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA806 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet804.color = ColorRGBA806;

Shape803.geometry = LineSet804;

HAnimSegment799.children[1] = Shape803;

HAnimJoint798.children = new MFNode();

HAnimJoint798.children[0] = HAnimSegment799;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.name = "l_acromioclavicular";
HAnimJoint807.DEF = "hanim_l_acromioclavicular";
HAnimJoint807.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint807.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment808.name = "l_scapula";
HAnimSegment808.DEF = "hanim_l_scapula";
let Transform809 = browser.currentScene.createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform810 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape811 = browser.currentScene.createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810.child = new undefined();

Transform810.child[0] = Shape811;

Transform809.children = new MFNode();

Transform809.children[0] = Transform810;

HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = Transform809;

let Shape812 = browser.currentScene.createNode("Shape");
let LineSet813 = browser.currentScene.createNode("LineSet");
LineSet813.vertexCount = new MFInt32(new int[2]);
let Coordinate814 = browser.currentScene.createNode("Coordinate");
Coordinate814.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet813.coord = Coordinate814;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA815 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA815.USE = "HAnimSegmentLineColorRGBA";
LineSet813.color = ColorRGBA815;

Shape812.geometry = LineSet813;

HAnimSegment808.children[1] = Shape812;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

let HAnimJoint816 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint816.name = "l_shoulder";
HAnimJoint816.DEF = "hanim_l_shoulder";
HAnimJoint816.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint816.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment817.name = "l_upperarm";
HAnimSegment817.DEF = "hanim_l_upperarm";
let Transform818 = browser.currentScene.createNode("Transform");
Transform818.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform819 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape820 = browser.currentScene.createNode("Shape");
Shape820.USE = "HAnimJointShape";
Transform819.child = new undefined();

Transform819.child[0] = Shape820;

Transform818.children = new MFNode();

Transform818.children[0] = Transform819;

HAnimSegment817.children = new MFNode();

HAnimSegment817.children[0] = Transform818;

let Shape821 = browser.currentScene.createNode("Shape");
let LineSet822 = browser.currentScene.createNode("LineSet");
LineSet822.vertexCount = new MFInt32(new int[2]);
let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet822.coord = Coordinate823;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA824 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA824.USE = "HAnimSegmentLineColorRGBA";
LineSet822.color = ColorRGBA824;

Shape821.geometry = LineSet822;

HAnimSegment817.children[1] = Shape821;

HAnimJoint816.children = new MFNode();

HAnimJoint816.children[0] = HAnimSegment817;

let HAnimJoint825 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint825.name = "l_elbow";
HAnimJoint825.DEF = "hanim_l_elbow";
HAnimJoint825.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint825.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint825.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.name = "l_forearm";
HAnimSegment826.DEF = "hanim_l_forearm";
let Transform827 = browser.currentScene.createNode("Transform");
Transform827.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform828 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape829 = browser.currentScene.createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.child = new undefined();

Transform828.child[0] = Shape829;

Transform827.children = new MFNode();

Transform827.children[0] = Transform828;

HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = Transform827;

let Shape830 = browser.currentScene.createNode("Shape");
let LineSet831 = browser.currentScene.createNode("LineSet");
LineSet831.vertexCount = new MFInt32(new int[2]);
let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet831.coord = Coordinate832;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA833 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA833.USE = "HAnimSegmentLineColorRGBA";
LineSet831.color = ColorRGBA833;

Shape830.geometry = LineSet831;

HAnimSegment826.children[1] = Shape830;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.name = "l_radiocarpal";
HAnimJoint834.DEF = "hanim_l_radiocarpal";
HAnimJoint834.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.name = "l_carpal";
HAnimSegment835.DEF = "hanim_l_carpal";
let Transform836 = browser.currentScene.createNode("Transform");
Transform836.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform836.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform836.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform837 = browser.currentScene.createNode("Transform");
Transform837.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape838 = browser.currentScene.createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

Transform836.children = new MFNode();

Transform836.children[0] = Transform837;

HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = Transform836;

let Shape839 = browser.currentScene.createNode("Shape");
let LineSet840 = browser.currentScene.createNode("LineSet");
LineSet840.vertexCount = new MFInt32(new int[2]);
let Coordinate841 = browser.currentScene.createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]);
LineSet840.coord = Coordinate841;

//from l_radiocarpal to l_midcarpal_1 vertices 2
let ColorRGBA842 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA842.USE = "HAnimSegmentLineColorRGBA";
LineSet840.color = ColorRGBA842;

Shape839.geometry = LineSet840;

HAnimSegment835.children[1] = Shape839;

let Shape843 = browser.currentScene.createNode("Shape");
let LineSet844 = browser.currentScene.createNode("LineSet");
LineSet844.vertexCount = new MFInt32(new int[2]);
let Coordinate845 = browser.currentScene.createNode("Coordinate");
Coordinate845.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]);
LineSet844.coord = Coordinate845;

//from l_radiocarpal to l_midcarpal_2 vertices 2
let ColorRGBA846 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA846.USE = "HAnimSegmentLineColorRGBA";
LineSet844.color = ColorRGBA846;

Shape843.geometry = LineSet844;

HAnimSegment835.children[2] = Shape843;

let Shape847 = browser.currentScene.createNode("Shape");
let LineSet848 = browser.currentScene.createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
let Coordinate849 = browser.currentScene.createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]);
LineSet848.coord = Coordinate849;

//from l_radiocarpal to l_midcarpal_3 vertices 2
let ColorRGBA850 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet848.color = ColorRGBA850;

Shape847.geometry = LineSet848;

HAnimSegment835.children[3] = Shape847;

let Shape851 = browser.currentScene.createNode("Shape");
let LineSet852 = browser.currentScene.createNode("LineSet");
LineSet852.vertexCount = new MFInt32(new int[2]);
let Coordinate853 = browser.currentScene.createNode("Coordinate");
Coordinate853.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]);
LineSet852.coord = Coordinate853;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
let ColorRGBA854 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA854.USE = "HAnimSegmentLineColorRGBA";
LineSet852.color = ColorRGBA854;

Shape851.geometry = LineSet852;

HAnimSegment835.children[4] = Shape851;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

let HAnimJoint855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint855.name = "l_midcarpal_1";
HAnimJoint855.DEF = "hanim_l_midcarpal_1";
HAnimJoint855.center = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
HAnimJoint855.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint855.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment856.name = "l_trapezium";
HAnimSegment856.DEF = "hanim_l_trapezium";
let Transform857 = browser.currentScene.createNode("Transform");
Transform857.translation = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
let Transform858 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

Transform857.children = new MFNode();

Transform857.children[0] = Transform858;

HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = Transform857;

let Shape860 = browser.currentScene.createNode("Shape");
let LineSet861 = browser.currentScene.createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
let Coordinate862 = browser.currentScene.createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]);
LineSet861.coord = Coordinate862;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
let ColorRGBA863 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimSegment856.children[1] = Shape860;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

let HAnimJoint864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint864.name = "l_carpometacarpal_1";
HAnimJoint864.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint864.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment865.name = "l_metacarpal_1";
HAnimSegment865.DEF = "hanim_l_metacarpal_1";
let Transform866 = browser.currentScene.createNode("Transform");
Transform866.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform867 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.child = new undefined();

Transform867.child[0] = Shape868;

Transform866.children = new MFNode();

Transform866.children[0] = Transform867;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Transform866;

let Shape869 = browser.currentScene.createNode("Shape");
let LineSet870 = browser.currentScene.createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
let Coordinate871 = browser.currentScene.createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet870.coord = Coordinate871;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA872 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment865.children[1] = Shape869;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

let HAnimJoint873 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint873.name = "l_metacarpophalangeal_1";
HAnimJoint873.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint873.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint873.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment874 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment874.name = "l_carpal_proximal_phalanx_1";
HAnimSegment874.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform875 = browser.currentScene.createNode("Transform");
Transform875.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform876 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape877 = browser.currentScene.createNode("Shape");
Shape877.USE = "HAnimJointShape";
Transform876.child = new undefined();

Transform876.child[0] = Shape877;

Transform875.children = new MFNode();

Transform875.children[0] = Transform876;

HAnimSegment874.children = new MFNode();

HAnimSegment874.children[0] = Transform875;

let Shape878 = browser.currentScene.createNode("Shape");
let LineSet879 = browser.currentScene.createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
let Coordinate880 = browser.currentScene.createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet879.coord = Coordinate880;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA881 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet879.color = ColorRGBA881;

Shape878.geometry = LineSet879;

HAnimSegment874.children[1] = Shape878;

HAnimJoint873.children = new MFNode();

HAnimJoint873.children[0] = HAnimSegment874;

let HAnimJoint882 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint882.name = "l_carpal_interphalangeal_1";
HAnimJoint882.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint882.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint882.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint882.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.children[1] = HAnimJoint882;

HAnimJoint864.children[1] = HAnimJoint873;

HAnimJoint855.children[1] = HAnimJoint864;

HAnimJoint834.children[1] = HAnimJoint855;

let HAnimJoint883 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint883.name = "l_midcarpal_2";
HAnimJoint883.DEF = "hanim_l_midcarpal_2";
HAnimJoint883.center = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
HAnimJoint883.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint883.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment884 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment884.name = "l_trapezoid";
HAnimSegment884.DEF = "hanim_l_trapezoid";
let Transform885 = browser.currentScene.createNode("Transform");
Transform885.translation = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
let Transform886 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "HAnimJointShape";
Transform886.child = new undefined();

Transform886.child[0] = Shape887;

Transform885.children = new MFNode();

Transform885.children[0] = Transform886;

HAnimSegment884.children = new MFNode();

HAnimSegment884.children[0] = Transform885;

let Shape888 = browser.currentScene.createNode("Shape");
let LineSet889 = browser.currentScene.createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
let Coordinate890 = browser.currentScene.createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]);
LineSet889.coord = Coordinate890;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
let ColorRGBA891 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment884.children[1] = Shape888;

HAnimJoint883.children = new MFNode();

HAnimJoint883.children[0] = HAnimSegment884;

let HAnimJoint892 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint892.name = "l_carpometacarpal_2";
HAnimJoint892.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint892.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint892.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint892.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment893 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment893.name = "l_metacarpal_2";
HAnimSegment893.DEF = "hanim_l_metacarpal_2";
let Transform894 = browser.currentScene.createNode("Transform");
Transform894.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform895 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape896 = browser.currentScene.createNode("Shape");
Shape896.USE = "HAnimJointShape";
Transform895.child = new undefined();

Transform895.child[0] = Shape896;

Transform894.children = new MFNode();

Transform894.children[0] = Transform895;

HAnimSegment893.children = new MFNode();

HAnimSegment893.children[0] = Transform894;

let Shape897 = browser.currentScene.createNode("Shape");
let LineSet898 = browser.currentScene.createNode("LineSet");
LineSet898.vertexCount = new MFInt32(new int[2]);
let Coordinate899 = browser.currentScene.createNode("Coordinate");
Coordinate899.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet898.coord = Coordinate899;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA900 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA900.USE = "HAnimSegmentLineColorRGBA";
LineSet898.color = ColorRGBA900;

Shape897.geometry = LineSet898;

HAnimSegment893.children[1] = Shape897;

HAnimJoint892.children = new MFNode();

HAnimJoint892.children[0] = HAnimSegment893;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.name = "l_metacarpophalangeal_2";
HAnimJoint901.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint901.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint901.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint901.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment902 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment902.name = "l_carpal_proximal_phalanx_2";
HAnimSegment902.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform904 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape905 = browser.currentScene.createNode("Shape");
Shape905.USE = "HAnimJointShape";
Transform904.child = new undefined();

Transform904.child[0] = Shape905;

Transform903.children = new MFNode();

Transform903.children[0] = Transform904;

HAnimSegment902.children = new MFNode();

HAnimSegment902.children[0] = Transform903;

let Shape906 = browser.currentScene.createNode("Shape");
let LineSet907 = browser.currentScene.createNode("LineSet");
LineSet907.vertexCount = new MFInt32(new int[2]);
let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet907.coord = Coordinate908;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA909 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment902.children[1] = Shape906;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

let HAnimJoint910 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint910.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint910.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint910.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint910.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint910.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment911 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment911.name = "l_carpal_middle_phalanx_2";
HAnimSegment911.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform912 = browser.currentScene.createNode("Transform");
Transform912.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform913 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape914 = browser.currentScene.createNode("Shape");
Shape914.USE = "HAnimJointShape";
Transform913.child = new undefined();

Transform913.child[0] = Shape914;

Transform912.children = new MFNode();

Transform912.children[0] = Transform913;

HAnimSegment911.children = new MFNode();

HAnimSegment911.children[0] = Transform912;

let Shape915 = browser.currentScene.createNode("Shape");
let LineSet916 = browser.currentScene.createNode("LineSet");
LineSet916.vertexCount = new MFInt32(new int[2]);
let Coordinate917 = browser.currentScene.createNode("Coordinate");
Coordinate917.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet916.coord = Coordinate917;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA918 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet916.color = ColorRGBA918;

Shape915.geometry = LineSet916;

HAnimSegment911.children[1] = Shape915;

HAnimJoint910.children = new MFNode();

HAnimJoint910.children[0] = HAnimSegment911;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint919.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint919.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint919.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint910.children[1] = HAnimJoint919;

HAnimJoint901.children[1] = HAnimJoint910;

HAnimJoint892.children[1] = HAnimJoint901;

HAnimJoint883.children[1] = HAnimJoint892;

HAnimJoint834.children[2] = HAnimJoint883;

let HAnimJoint920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint920.name = "l_midcarpal_3";
HAnimJoint920.DEF = "hanim_l_midcarpal_3";
HAnimJoint920.center = new SFVec3f(new float[0.1809,0.7,-0.1067]);
HAnimJoint920.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint920.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment921 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment921.name = "l_capitate";
HAnimSegment921.DEF = "hanim_l_capitate";
let Transform922 = browser.currentScene.createNode("Transform");
Transform922.translation = new SFVec3f(new float[0.1809,0.7,-0.1067]);
let Transform923 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape924 = browser.currentScene.createNode("Shape");
Shape924.USE = "HAnimJointShape";
Transform923.child = new undefined();

Transform923.child[0] = Shape924;

Transform922.children = new MFNode();

Transform922.children[0] = Transform923;

HAnimSegment921.children = new MFNode();

HAnimSegment921.children[0] = Transform922;

let Shape925 = browser.currentScene.createNode("Shape");
let LineSet926 = browser.currentScene.createNode("LineSet");
LineSet926.vertexCount = new MFInt32(new int[2]);
let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]);
LineSet926.coord = Coordinate927;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
let ColorRGBA928 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSegmentLineColorRGBA";
LineSet926.color = ColorRGBA928;

Shape925.geometry = LineSet926;

HAnimSegment921.children[1] = Shape925;

HAnimJoint920.children = new MFNode();

HAnimJoint920.children[0] = HAnimSegment921;

let HAnimJoint929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint929.name = "l_carpometacarpal_3";
HAnimJoint929.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint929.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint929.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint929.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment930 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment930.name = "l_metacarpal_3";
HAnimSegment930.DEF = "hanim_l_metacarpal_3";
let Transform931 = browser.currentScene.createNode("Transform");
Transform931.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform932 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape933 = browser.currentScene.createNode("Shape");
Shape933.USE = "HAnimJointShape";
Transform932.child = new undefined();

Transform932.child[0] = Shape933;

Transform931.children = new MFNode();

Transform931.children[0] = Transform932;

HAnimSegment930.children = new MFNode();

HAnimSegment930.children[0] = Transform931;

let Shape934 = browser.currentScene.createNode("Shape");
let LineSet935 = browser.currentScene.createNode("LineSet");
LineSet935.vertexCount = new MFInt32(new int[2]);
let Coordinate936 = browser.currentScene.createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet935.coord = Coordinate936;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA937 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA";
LineSet935.color = ColorRGBA937;

Shape934.geometry = LineSet935;

HAnimSegment930.children[1] = Shape934;

HAnimJoint929.children = new MFNode();

HAnimJoint929.children[0] = HAnimSegment930;

let HAnimJoint938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint938.name = "l_metacarpophalangeal_3";
HAnimJoint938.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint938.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint938.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint938.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment939 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment939.name = "l_carpal_proximal_phalanx_3";
HAnimSegment939.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform940 = browser.currentScene.createNode("Transform");
Transform940.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform941 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape942 = browser.currentScene.createNode("Shape");
Shape942.USE = "HAnimJointShape";
Transform941.child = new undefined();

Transform941.child[0] = Shape942;

Transform940.children = new MFNode();

Transform940.children[0] = Transform941;

HAnimSegment939.children = new MFNode();

HAnimSegment939.children[0] = Transform940;

let Shape943 = browser.currentScene.createNode("Shape");
let LineSet944 = browser.currentScene.createNode("LineSet");
LineSet944.vertexCount = new MFInt32(new int[2]);
let Coordinate945 = browser.currentScene.createNode("Coordinate");
Coordinate945.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet944.coord = Coordinate945;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA946 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA946.USE = "HAnimSegmentLineColorRGBA";
LineSet944.color = ColorRGBA946;

Shape943.geometry = LineSet944;

HAnimSegment939.children[1] = Shape943;

HAnimJoint938.children = new MFNode();

HAnimJoint938.children[0] = HAnimSegment939;

let HAnimJoint947 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint947.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint947.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint947.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint947.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint947.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment948 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment948.name = "l_carpal_middle_phalanx_3";
HAnimSegment948.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform949 = browser.currentScene.createNode("Transform");
Transform949.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform950 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape951 = browser.currentScene.createNode("Shape");
Shape951.USE = "HAnimJointShape";
Transform950.child = new undefined();

Transform950.child[0] = Shape951;

Transform949.children = new MFNode();

Transform949.children[0] = Transform950;

HAnimSegment948.children = new MFNode();

HAnimSegment948.children[0] = Transform949;

let Shape952 = browser.currentScene.createNode("Shape");
let LineSet953 = browser.currentScene.createNode("LineSet");
LineSet953.vertexCount = new MFInt32(new int[2]);
let Coordinate954 = browser.currentScene.createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet953.coord = Coordinate954;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA955 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet953.color = ColorRGBA955;

Shape952.geometry = LineSet953;

HAnimSegment948.children[1] = Shape952;

HAnimJoint947.children = new MFNode();

HAnimJoint947.children[0] = HAnimSegment948;

let HAnimJoint956 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint956.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint956.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint956.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint956.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint956.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint947.children[1] = HAnimJoint956;

HAnimJoint938.children[1] = HAnimJoint947;

HAnimJoint929.children[1] = HAnimJoint938;

HAnimJoint920.children[1] = HAnimJoint929;

HAnimJoint834.children[3] = HAnimJoint920;

let HAnimJoint957 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint957.name = "l_midcarpal_4_5";
HAnimJoint957.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint957.center = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
HAnimJoint957.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint957.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment958 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment958.name = "l_hamate";
HAnimSegment958.DEF = "hanim_l_hamate";
let Transform959 = browser.currentScene.createNode("Transform");
Transform959.translation = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
let Transform960 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape961 = browser.currentScene.createNode("Shape");
Shape961.USE = "HAnimJointShape";
Transform960.child = new undefined();

Transform960.child[0] = Shape961;

Transform959.children = new MFNode();

Transform959.children[0] = Transform960;

HAnimSegment958.children = new MFNode();

HAnimSegment958.children[0] = Transform959;

let Shape962 = browser.currentScene.createNode("Shape");
let LineSet963 = browser.currentScene.createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]);
LineSet963.coord = Coordinate964;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment958.children[1] = Shape962;

let Shape966 = browser.currentScene.createNode("Shape");
let LineSet967 = browser.currentScene.createNode("LineSet");
LineSet967.vertexCount = new MFInt32(new int[2]);
let Coordinate968 = browser.currentScene.createNode("Coordinate");
Coordinate968.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]);
LineSet967.coord = Coordinate968;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet967.color = ColorRGBA969;

Shape966.geometry = LineSet967;

HAnimSegment958.children[2] = Shape966;

HAnimJoint957.children = new MFNode();

HAnimJoint957.children[0] = HAnimSegment958;

let HAnimJoint970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint970.name = "l_carpometacarpal_4";
HAnimJoint970.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint970.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint970.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint970.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment971 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment971.name = "l_metacarpal_4";
HAnimSegment971.DEF = "hanim_l_metacarpal_4";
let Transform972 = browser.currentScene.createNode("Transform");
Transform972.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform973 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "HAnimJointShape";
Transform973.child = new undefined();

Transform973.child[0] = Shape974;

Transform972.children = new MFNode();

Transform972.children[0] = Transform973;

HAnimSegment971.children = new MFNode();

HAnimSegment971.children[0] = Transform972;

let Shape975 = browser.currentScene.createNode("Shape");
let LineSet976 = browser.currentScene.createNode("LineSet");
LineSet976.vertexCount = new MFInt32(new int[2]);
let Coordinate977 = browser.currentScene.createNode("Coordinate");
Coordinate977.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet976.coord = Coordinate977;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA978 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA978.USE = "HAnimSegmentLineColorRGBA";
LineSet976.color = ColorRGBA978;

Shape975.geometry = LineSet976;

HAnimSegment971.children[1] = Shape975;

HAnimJoint970.children = new MFNode();

HAnimJoint970.children[0] = HAnimSegment971;

let HAnimJoint979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint979.name = "l_metacarpophalangeal_4";
HAnimJoint979.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint979.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint979.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint979.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment980 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment980.name = "l_carpal_proximal_phalanx_4";
HAnimSegment980.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform981 = browser.currentScene.createNode("Transform");
Transform981.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform982 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape983 = browser.currentScene.createNode("Shape");
Shape983.USE = "HAnimJointShape";
Transform982.child = new undefined();

Transform982.child[0] = Shape983;

Transform981.children = new MFNode();

Transform981.children[0] = Transform982;

HAnimSegment980.children = new MFNode();

HAnimSegment980.children[0] = Transform981;

let Shape984 = browser.currentScene.createNode("Shape");
let LineSet985 = browser.currentScene.createNode("LineSet");
LineSet985.vertexCount = new MFInt32(new int[2]);
let Coordinate986 = browser.currentScene.createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet985.coord = Coordinate986;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA987 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA987.USE = "HAnimSegmentLineColorRGBA";
LineSet985.color = ColorRGBA987;

Shape984.geometry = LineSet985;

HAnimSegment980.children[1] = Shape984;

HAnimJoint979.children = new MFNode();

HAnimJoint979.children[0] = HAnimSegment980;

let HAnimJoint988 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint988.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint988.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint988.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint988.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment989 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment989.name = "l_carpal_middle_phalanx_4";
HAnimSegment989.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform990 = browser.currentScene.createNode("Transform");
Transform990.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform991 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "HAnimJointShape";
Transform991.child = new undefined();

Transform991.child[0] = Shape992;

Transform990.children = new MFNode();

Transform990.children[0] = Transform991;

HAnimSegment989.children = new MFNode();

HAnimSegment989.children[0] = Transform990;

let Shape993 = browser.currentScene.createNode("Shape");
let LineSet994 = browser.currentScene.createNode("LineSet");
LineSet994.vertexCount = new MFInt32(new int[2]);
let Coordinate995 = browser.currentScene.createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet994.coord = Coordinate995;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA996 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA";
LineSet994.color = ColorRGBA996;

Shape993.geometry = LineSet994;

HAnimSegment989.children[1] = Shape993;

HAnimJoint988.children = new MFNode();

HAnimJoint988.children[0] = HAnimSegment989;

let HAnimJoint997 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint997.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint997.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint997.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint997.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint997.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.children[1] = HAnimJoint997;

HAnimJoint979.children[1] = HAnimJoint988;

HAnimJoint970.children[1] = HAnimJoint979;

HAnimJoint957.children[1] = HAnimJoint970;

let HAnimJoint998 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint998.name = "l_carpometacarpal_5";
HAnimJoint998.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint998.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint998.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint998.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment999 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment999.name = "l_metacarpal_5";
HAnimSegment999.DEF = "hanim_l_metacarpal_5";
let Transform1000 = browser.currentScene.createNode("Transform");
Transform1000.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform1001 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1002 = browser.currentScene.createNode("Shape");
Shape1002.USE = "HAnimJointShape";
Transform1001.child = new undefined();

Transform1001.child[0] = Shape1002;

Transform1000.children = new MFNode();

Transform1000.children[0] = Transform1001;

HAnimSegment999.children = new MFNode();

HAnimSegment999.children[0] = Transform1000;

let Shape1003 = browser.currentScene.createNode("Shape");
let LineSet1004 = browser.currentScene.createNode("LineSet");
LineSet1004.vertexCount = new MFInt32(new int[2]);
let Coordinate1005 = browser.currentScene.createNode("Coordinate");
Coordinate1005.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1004.coord = Coordinate1005;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1006 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
LineSet1004.color = ColorRGBA1006;

Shape1003.geometry = LineSet1004;

HAnimSegment999.children[1] = Shape1003;

HAnimJoint998.children = new MFNode();

HAnimJoint998.children[0] = HAnimSegment999;

let HAnimJoint1007 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1007.name = "l_metacarpophalangeal_5";
HAnimJoint1007.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1007.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1007.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1007.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1008 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1008.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1008.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1009 = browser.currentScene.createNode("Transform");
Transform1009.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform1010 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1011 = browser.currentScene.createNode("Shape");
Shape1011.USE = "HAnimJointShape";
Transform1010.child = new undefined();

Transform1010.child[0] = Shape1011;

Transform1009.children = new MFNode();

Transform1009.children[0] = Transform1010;

HAnimSegment1008.children = new MFNode();

HAnimSegment1008.children[0] = Transform1009;

let Shape1012 = browser.currentScene.createNode("Shape");
let LineSet1013 = browser.currentScene.createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
let Coordinate1014 = browser.currentScene.createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1013.coord = Coordinate1014;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1015 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1015.USE = "HAnimSegmentLineColorRGBA";
LineSet1013.color = ColorRGBA1015;

Shape1012.geometry = LineSet1013;

HAnimSegment1008.children[1] = Shape1012;

HAnimJoint1007.children = new MFNode();

HAnimJoint1007.children[0] = HAnimSegment1008;

let HAnimJoint1016 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1016.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1016.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1016.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1016.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1016.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1017 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1017.name = "l_carpal_middle_phalanx_5";
HAnimSegment1017.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1018 = browser.currentScene.createNode("Transform");
Transform1018.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform1019 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1020 = browser.currentScene.createNode("Shape");
Shape1020.USE = "HAnimJointShape";
Transform1019.child = new undefined();

Transform1019.child[0] = Shape1020;

Transform1018.children = new MFNode();

Transform1018.children[0] = Transform1019;

HAnimSegment1017.children = new MFNode();

HAnimSegment1017.children[0] = Transform1018;

let Shape1021 = browser.currentScene.createNode("Shape");
let LineSet1022 = browser.currentScene.createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1022.coord = Coordinate1023;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1024 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment1017.children[1] = Shape1021;

HAnimJoint1016.children = new MFNode();

HAnimJoint1016.children[0] = HAnimSegment1017;

let HAnimJoint1025 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1025.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1025.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1025.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1025.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1025.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1016.children[1] = HAnimJoint1025;

HAnimJoint1007.children[1] = HAnimJoint1016;

HAnimJoint998.children[1] = HAnimJoint1007;

HAnimJoint957.children[2] = HAnimJoint998;

HAnimJoint834.children[4] = HAnimJoint957;

HAnimJoint825.children[1] = HAnimJoint834;

HAnimJoint816.children[1] = HAnimJoint825;

HAnimJoint807.children[1] = HAnimJoint816;

HAnimJoint798.children[1] = HAnimJoint807;

HAnimJoint678.children[2] = HAnimJoint798;

let HAnimJoint1026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1026.name = "r_sternoclavicular";
HAnimJoint1026.DEF = "hanim_r_sternoclavicular";
HAnimJoint1026.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1026.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1026.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1027.name = "r_clavicle";
HAnimSegment1027.DEF = "hanim_r_clavicle";
let Transform1028 = browser.currentScene.createNode("Transform");
Transform1028.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform1029 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "HAnimJointShape";
Transform1029.child = new undefined();

Transform1029.child[0] = Shape1030;

Transform1028.children = new MFNode();

Transform1028.children[0] = Transform1029;

HAnimSegment1027.children = new MFNode();

HAnimSegment1027.children[0] = Transform1028;

let Shape1031 = browser.currentScene.createNode("Shape");
let LineSet1032 = browser.currentScene.createNode("LineSet");
LineSet1032.vertexCount = new MFInt32(new int[2]);
let Coordinate1033 = browser.currentScene.createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1032.coord = Coordinate1033;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1034 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimSegment1027.children[1] = Shape1031;

HAnimJoint1026.children = new MFNode();

HAnimJoint1026.children[0] = HAnimSegment1027;

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.name = "r_acromioclavicular";
HAnimJoint1035.DEF = "hanim_r_acromioclavicular";
HAnimJoint1035.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1035.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1035.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1036 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1036.name = "r_scapula";
HAnimSegment1036.DEF = "hanim_r_scapula";
let Transform1037 = browser.currentScene.createNode("Transform");
Transform1037.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform1038 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1039 = browser.currentScene.createNode("Shape");
Shape1039.USE = "HAnimJointShape";
Transform1038.child = new undefined();

Transform1038.child[0] = Shape1039;

Transform1037.children = new MFNode();

Transform1037.children[0] = Transform1038;

HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = Transform1037;

let Shape1040 = browser.currentScene.createNode("Shape");
let LineSet1041 = browser.currentScene.createNode("LineSet");
LineSet1041.vertexCount = new MFInt32(new int[2]);
let Coordinate1042 = browser.currentScene.createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1041.coord = Coordinate1042;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1043 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1043.USE = "HAnimSegmentLineColorRGBA";
LineSet1041.color = ColorRGBA1043;

Shape1040.geometry = LineSet1041;

HAnimSegment1036.children[1] = Shape1040;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "r_shoulder";
HAnimJoint1044.DEF = "hanim_r_shoulder";
HAnimJoint1044.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1045.name = "r_upperarm";
HAnimSegment1045.DEF = "hanim_r_upperarm";
let Transform1046 = browser.currentScene.createNode("Transform");
Transform1046.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform1047 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1048 = browser.currentScene.createNode("Shape");
Shape1048.USE = "HAnimJointShape";
Transform1047.child = new undefined();

Transform1047.child[0] = Shape1048;

Transform1046.children = new MFNode();

Transform1046.children[0] = Transform1047;

HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = Transform1046;

let Shape1049 = browser.currentScene.createNode("Shape");
let LineSet1050 = browser.currentScene.createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
let Coordinate1051 = browser.currentScene.createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1050.coord = Coordinate1051;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1052 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimSegment1045.children[1] = Shape1049;

HAnimJoint1044.children = new MFNode();

HAnimJoint1044.children[0] = HAnimSegment1045;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "r_elbow";
HAnimJoint1053.DEF = "hanim_r_elbow";
HAnimJoint1053.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1054 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1054.name = "r_forearm";
HAnimSegment1054.DEF = "hanim_r_forearm";
let Transform1055 = browser.currentScene.createNode("Transform");
Transform1055.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform1056 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1057 = browser.currentScene.createNode("Shape");
Shape1057.USE = "HAnimJointShape";
Transform1056.child = new undefined();

Transform1056.child[0] = Shape1057;

Transform1055.children = new MFNode();

Transform1055.children[0] = Transform1056;

HAnimSegment1054.children = new MFNode();

HAnimSegment1054.children[0] = Transform1055;

let Shape1058 = browser.currentScene.createNode("Shape");
let LineSet1059 = browser.currentScene.createNode("LineSet");
LineSet1059.vertexCount = new MFInt32(new int[2]);
let Coordinate1060 = browser.currentScene.createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1059.coord = Coordinate1060;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1061 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSegmentLineColorRGBA";
LineSet1059.color = ColorRGBA1061;

Shape1058.geometry = LineSet1059;

HAnimSegment1054.children[1] = Shape1058;

HAnimJoint1053.children = new MFNode();

HAnimJoint1053.children[0] = HAnimSegment1054;

let HAnimJoint1062 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1062.name = "r_radiocarpal";
HAnimJoint1062.DEF = "hanim_r_radiocarpal";
HAnimJoint1062.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1062.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1062.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1063 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1063.name = "r_carpal";
HAnimSegment1063.DEF = "hanim_r_carpal";
let Transform1064 = browser.currentScene.createNode("Transform");
Transform1064.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1064.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1064.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform1065 = browser.currentScene.createNode("Transform");
Transform1065.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape1066 = browser.currentScene.createNode("Shape");
Shape1066.USE = "HAnimJointShape";
Transform1065.child = new undefined();

Transform1065.child[0] = Shape1066;

Transform1064.children = new MFNode();

Transform1064.children[0] = Transform1065;

HAnimSegment1063.children = new MFNode();

HAnimSegment1063.children[0] = Transform1064;

let Shape1067 = browser.currentScene.createNode("Shape");
let LineSet1068 = browser.currentScene.createNode("LineSet");
LineSet1068.vertexCount = new MFInt32(new int[2]);
let Coordinate1069 = browser.currentScene.createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]);
LineSet1068.coord = Coordinate1069;

//from r_radiocarpal to r_midcarpal_1 vertices 2
let ColorRGBA1070 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA";
LineSet1068.color = ColorRGBA1070;

Shape1067.geometry = LineSet1068;

HAnimSegment1063.children[1] = Shape1067;

let Shape1071 = browser.currentScene.createNode("Shape");
let LineSet1072 = browser.currentScene.createNode("LineSet");
LineSet1072.vertexCount = new MFInt32(new int[2]);
let Coordinate1073 = browser.currentScene.createNode("Coordinate");
Coordinate1073.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]);
LineSet1072.coord = Coordinate1073;

//from r_radiocarpal to r_midcarpal_2 vertices 2
let ColorRGBA1074 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1074.USE = "HAnimSegmentLineColorRGBA";
LineSet1072.color = ColorRGBA1074;

Shape1071.geometry = LineSet1072;

HAnimSegment1063.children[2] = Shape1071;

let Shape1075 = browser.currentScene.createNode("Shape");
let LineSet1076 = browser.currentScene.createNode("LineSet");
LineSet1076.vertexCount = new MFInt32(new int[2]);
let Coordinate1077 = browser.currentScene.createNode("Coordinate");
Coordinate1077.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]);
LineSet1076.coord = Coordinate1077;

//from r_radiocarpal to r_midcarpal_3 vertices 2
let ColorRGBA1078 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1076.color = ColorRGBA1078;

Shape1075.geometry = LineSet1076;

HAnimSegment1063.children[3] = Shape1075;

let Shape1079 = browser.currentScene.createNode("Shape");
let LineSet1080 = browser.currentScene.createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
let Coordinate1081 = browser.currentScene.createNode("Coordinate");
Coordinate1081.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]);
LineSet1080.coord = Coordinate1081;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
let ColorRGBA1082 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1063.children[4] = Shape1079;

HAnimJoint1062.children = new MFNode();

HAnimJoint1062.children[0] = HAnimSegment1063;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.name = "r_midcarpal_1";
HAnimJoint1083.DEF = "hanim_r_midcarpal_1";
HAnimJoint1083.center = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
HAnimJoint1083.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1083.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.name = "r_trapezium";
HAnimSegment1084.DEF = "hanim_r_trapezium";
let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
let Transform1086 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1087 = browser.currentScene.createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.child = new undefined();

Transform1086.child[0] = Shape1087;

Transform1085.children = new MFNode();

Transform1085.children[0] = Transform1086;

HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = Transform1085;

let Shape1088 = browser.currentScene.createNode("Shape");
let LineSet1089 = browser.currentScene.createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
let Coordinate1090 = browser.currentScene.createNode("Coordinate");
Coordinate1090.point = new MFVec3f(new float[-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]);
LineSet1089.coord = Coordinate1090;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
let ColorRGBA1091 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1092.name = "r_carpometacarpal_1";
HAnimJoint1092.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1092.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.name = "r_metacarpal_1";
HAnimSegment1093.DEF = "hanim_r_metacarpal_1";
let Transform1094 = browser.currentScene.createNode("Transform");
Transform1094.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform1095 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

Transform1094.children = new MFNode();

Transform1094.children[0] = Transform1095;

HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = Transform1094;

let Shape1097 = browser.currentScene.createNode("Shape");
let LineSet1098 = browser.currentScene.createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
let Coordinate1099 = browser.currentScene.createNode("Coordinate");
Coordinate1099.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1098.coord = Coordinate1099;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSegmentLineColorRGBA";
LineSet1098.color = ColorRGBA1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[1] = Shape1097;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

let HAnimJoint1101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1101.name = "r_metacarpophalangeal_1";
HAnimJoint1101.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1101.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1102.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1102.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1103 = browser.currentScene.createNode("Transform");
Transform1103.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform1104 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "HAnimJointShape";
Transform1104.child = new undefined();

Transform1104.child[0] = Shape1105;

Transform1103.children = new MFNode();

Transform1103.children[0] = Transform1104;

HAnimSegment1102.children = new MFNode();

HAnimSegment1102.children[0] = Transform1103;

let Shape1106 = browser.currentScene.createNode("Shape");
let LineSet1107 = browser.currentScene.createNode("LineSet");
LineSet1107.vertexCount = new MFInt32(new int[2]);
let Coordinate1108 = browser.currentScene.createNode("Coordinate");
Coordinate1108.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1107.coord = Coordinate1108;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimSegment1102.children[1] = Shape1106;

HAnimJoint1101.children = new MFNode();

HAnimJoint1101.children[0] = HAnimSegment1102;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpal_interphalangeal_1";
HAnimJoint1110.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1110.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.children[1] = HAnimJoint1110;

HAnimJoint1092.children[1] = HAnimJoint1101;

HAnimJoint1083.children[1] = HAnimJoint1092;

HAnimJoint1062.children[1] = HAnimJoint1083;

let HAnimJoint1111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1111.name = "r_midcarpal_2";
HAnimJoint1111.DEF = "hanim_r_midcarpal_2";
HAnimJoint1111.center = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
HAnimJoint1111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1111.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1112.name = "r_trapezoid";
HAnimSegment1112.DEF = "hanim_r_trapezoid";
let Transform1113 = browser.currentScene.createNode("Transform");
Transform1113.translation = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
let Transform1114 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1115 = browser.currentScene.createNode("Shape");
Shape1115.USE = "HAnimJointShape";
Transform1114.child = new undefined();

Transform1114.child[0] = Shape1115;

Transform1113.children = new MFNode();

Transform1113.children[0] = Transform1114;

HAnimSegment1112.children = new MFNode();

HAnimSegment1112.children[0] = Transform1113;

let Shape1116 = browser.currentScene.createNode("Shape");
let LineSet1117 = browser.currentScene.createNode("LineSet");
LineSet1117.vertexCount = new MFInt32(new int[2]);
let Coordinate1118 = browser.currentScene.createNode("Coordinate");
Coordinate1118.point = new MFVec3f(new float[-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]);
LineSet1117.coord = Coordinate1118;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
let ColorRGBA1119 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1119.USE = "HAnimSegmentLineColorRGBA";
LineSet1117.color = ColorRGBA1119;

Shape1116.geometry = LineSet1117;

HAnimSegment1112.children[1] = Shape1116;

HAnimJoint1111.children = new MFNode();

HAnimJoint1111.children[0] = HAnimSegment1112;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.name = "r_carpometacarpal_2";
HAnimJoint1120.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1120.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1120.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1121.name = "r_metacarpal_2";
HAnimSegment1121.DEF = "hanim_r_metacarpal_2";
let Transform1122 = browser.currentScene.createNode("Transform");
Transform1122.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1123 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1124 = browser.currentScene.createNode("Shape");
Shape1124.USE = "HAnimJointShape";
Transform1123.child = new undefined();

Transform1123.child[0] = Shape1124;

Transform1122.children = new MFNode();

Transform1122.children[0] = Transform1123;

HAnimSegment1121.children = new MFNode();

HAnimSegment1121.children[0] = Transform1122;

let Shape1125 = browser.currentScene.createNode("Shape");
let LineSet1126 = browser.currentScene.createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
let Coordinate1127 = browser.currentScene.createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1126.coord = Coordinate1127;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1121.children[1] = Shape1125;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = HAnimSegment1121;

let HAnimJoint1129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1129.name = "r_metacarpophalangeal_2";
HAnimJoint1129.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1129.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1129.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1130.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1130.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1131 = browser.currentScene.createNode("Transform");
Transform1131.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1132 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1133 = browser.currentScene.createNode("Shape");
Shape1133.USE = "HAnimJointShape";
Transform1132.child = new undefined();

Transform1132.child[0] = Shape1133;

Transform1131.children = new MFNode();

Transform1131.children[0] = Transform1132;

HAnimSegment1130.children = new MFNode();

HAnimSegment1130.children[0] = Transform1131;

let Shape1134 = browser.currentScene.createNode("Shape");
let LineSet1135 = browser.currentScene.createNode("LineSet");
LineSet1135.vertexCount = new MFInt32(new int[2]);
let Coordinate1136 = browser.currentScene.createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1135.coord = Coordinate1136;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1137 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
LineSet1135.color = ColorRGBA1137;

Shape1134.geometry = LineSet1135;

HAnimSegment1130.children[1] = Shape1134;

HAnimJoint1129.children = new MFNode();

HAnimJoint1129.children[0] = HAnimSegment1130;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1138.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1138.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1138.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1139.name = "r_carpal_middle_phalanx_2";
HAnimSegment1139.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1140 = browser.currentScene.createNode("Transform");
Transform1140.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1141 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1142 = browser.currentScene.createNode("Shape");
Shape1142.USE = "HAnimJointShape";
Transform1141.child = new undefined();

Transform1141.child[0] = Shape1142;

Transform1140.children = new MFNode();

Transform1140.children[0] = Transform1141;

HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = Transform1140;

let Shape1143 = browser.currentScene.createNode("Shape");
let LineSet1144 = browser.currentScene.createNode("LineSet");
LineSet1144.vertexCount = new MFInt32(new int[2]);
let Coordinate1145 = browser.currentScene.createNode("Coordinate");
Coordinate1145.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1144.coord = Coordinate1145;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1146 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSegmentLineColorRGBA";
LineSet1144.color = ColorRGBA1146;

Shape1143.geometry = LineSet1144;

HAnimSegment1139.children[1] = Shape1143;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

let HAnimJoint1147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1147.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1147.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1147.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1147.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1138.children[1] = HAnimJoint1147;

HAnimJoint1129.children[1] = HAnimJoint1138;

HAnimJoint1120.children[1] = HAnimJoint1129;

HAnimJoint1111.children[1] = HAnimJoint1120;

HAnimJoint1062.children[2] = HAnimJoint1111;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.name = "r_midcarpal_3";
HAnimJoint1148.DEF = "hanim_r_midcarpal_3";
HAnimJoint1148.center = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
HAnimJoint1148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1148.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1149.name = "r_capitate";
HAnimSegment1149.DEF = "hanim_r_capitate";
let Transform1150 = browser.currentScene.createNode("Transform");
Transform1150.translation = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
let Transform1151 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1152 = browser.currentScene.createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151.child = new undefined();

Transform1151.child[0] = Shape1152;

Transform1150.children = new MFNode();

Transform1150.children[0] = Transform1151;

HAnimSegment1149.children = new MFNode();

HAnimSegment1149.children[0] = Transform1150;

let Shape1153 = browser.currentScene.createNode("Shape");
let LineSet1154 = browser.currentScene.createNode("LineSet");
LineSet1154.vertexCount = new MFInt32(new int[2]);
let Coordinate1155 = browser.currentScene.createNode("Coordinate");
Coordinate1155.point = new MFVec3f(new float[-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]);
LineSet1154.coord = Coordinate1155;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
let ColorRGBA1156 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1156.USE = "HAnimSegmentLineColorRGBA";
LineSet1154.color = ColorRGBA1156;

Shape1153.geometry = LineSet1154;

HAnimSegment1149.children[1] = Shape1153;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.name = "r_carpometacarpal_3";
HAnimJoint1157.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1157.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1158.name = "r_metacarpal_3";
HAnimSegment1158.DEF = "hanim_r_metacarpal_3";
let Transform1159 = browser.currentScene.createNode("Transform");
Transform1159.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1160 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.child = new undefined();

Transform1160.child[0] = Shape1161;

Transform1159.children = new MFNode();

Transform1159.children[0] = Transform1160;

HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = Transform1159;

let Shape1162 = browser.currentScene.createNode("Shape");
let LineSet1163 = browser.currentScene.createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1163.coord = Coordinate1164;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1165 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[1] = Shape1162;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.name = "r_metacarpophalangeal_3";
HAnimJoint1166.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1166.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1166.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1167.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1167.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1168 = browser.currentScene.createNode("Transform");
Transform1168.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1169 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1170 = browser.currentScene.createNode("Shape");
Shape1170.USE = "HAnimJointShape";
Transform1169.child = new undefined();

Transform1169.child[0] = Shape1170;

Transform1168.children = new MFNode();

Transform1168.children[0] = Transform1169;

HAnimSegment1167.children = new MFNode();

HAnimSegment1167.children[0] = Transform1168;

let Shape1171 = browser.currentScene.createNode("Shape");
let LineSet1172 = browser.currentScene.createNode("LineSet");
LineSet1172.vertexCount = new MFInt32(new int[2]);
let Coordinate1173 = browser.currentScene.createNode("Coordinate");
Coordinate1173.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1172.coord = Coordinate1173;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1174 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1174.USE = "HAnimSegmentLineColorRGBA";
LineSet1172.color = ColorRGBA1174;

Shape1171.geometry = LineSet1172;

HAnimSegment1167.children[1] = Shape1171;

HAnimJoint1166.children = new MFNode();

HAnimJoint1166.children[0] = HAnimSegment1167;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1175.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1175.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1175.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1176.name = "r_carpal_middle_phalanx_3";
HAnimSegment1176.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1177 = browser.currentScene.createNode("Transform");
Transform1177.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1178 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1179 = browser.currentScene.createNode("Shape");
Shape1179.USE = "HAnimJointShape";
Transform1178.child = new undefined();

Transform1178.child[0] = Shape1179;

Transform1177.children = new MFNode();

Transform1177.children[0] = Transform1178;

HAnimSegment1176.children = new MFNode();

HAnimSegment1176.children[0] = Transform1177;

let Shape1180 = browser.currentScene.createNode("Shape");
let LineSet1181 = browser.currentScene.createNode("LineSet");
LineSet1181.vertexCount = new MFInt32(new int[2]);
let Coordinate1182 = browser.currentScene.createNode("Coordinate");
Coordinate1182.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1181.coord = Coordinate1182;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1183 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1183.USE = "HAnimSegmentLineColorRGBA";
LineSet1181.color = ColorRGBA1183;

Shape1180.geometry = LineSet1181;

HAnimSegment1176.children[1] = Shape1180;

HAnimJoint1175.children = new MFNode();

HAnimJoint1175.children[0] = HAnimSegment1176;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1184.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1184.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1184.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1175.children[1] = HAnimJoint1184;

HAnimJoint1166.children[1] = HAnimJoint1175;

HAnimJoint1157.children[1] = HAnimJoint1166;

HAnimJoint1148.children[1] = HAnimJoint1157;

HAnimJoint1062.children[3] = HAnimJoint1148;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.name = "r_midcarpal_4_5";
HAnimJoint1185.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1185.center = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
HAnimJoint1185.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1185.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1186.name = "r_hamate";
HAnimSegment1186.DEF = "hanim_r_hamate";
let Transform1187 = browser.currentScene.createNode("Transform");
Transform1187.translation = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
let Transform1188 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1189 = browser.currentScene.createNode("Shape");
Shape1189.USE = "HAnimJointShape";
Transform1188.child = new undefined();

Transform1188.child[0] = Shape1189;

Transform1187.children = new MFNode();

Transform1187.children[0] = Transform1188;

HAnimSegment1186.children = new MFNode();

HAnimSegment1186.children[0] = Transform1187;

let Shape1190 = browser.currentScene.createNode("Shape");
let LineSet1191 = browser.currentScene.createNode("LineSet");
LineSet1191.vertexCount = new MFInt32(new int[2]);
let Coordinate1192 = browser.currentScene.createNode("Coordinate");
Coordinate1192.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]);
LineSet1191.coord = Coordinate1192;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
let ColorRGBA1193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
LineSet1191.color = ColorRGBA1193;

Shape1190.geometry = LineSet1191;

HAnimSegment1186.children[1] = Shape1190;

let Shape1194 = browser.currentScene.createNode("Shape");
let LineSet1195 = browser.currentScene.createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
let Coordinate1196 = browser.currentScene.createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]);
LineSet1195.coord = Coordinate1196;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
let ColorRGBA1197 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1186.children[2] = Shape1194;

HAnimJoint1185.children = new MFNode();

HAnimJoint1185.children[0] = HAnimSegment1186;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.name = "r_carpometacarpal_4";
HAnimJoint1198.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1198.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1198.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1199.name = "r_metacarpal_4";
HAnimSegment1199.DEF = "hanim_r_metacarpal_4";
let Transform1200 = browser.currentScene.createNode("Transform");
Transform1200.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1201 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1202 = browser.currentScene.createNode("Shape");
Shape1202.USE = "HAnimJointShape";
Transform1201.child = new undefined();

Transform1201.child[0] = Shape1202;

Transform1200.children = new MFNode();

Transform1200.children[0] = Transform1201;

HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = Transform1200;

let Shape1203 = browser.currentScene.createNode("Shape");
let LineSet1204 = browser.currentScene.createNode("LineSet");
LineSet1204.vertexCount = new MFInt32(new int[2]);
let Coordinate1205 = browser.currentScene.createNode("Coordinate");
Coordinate1205.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1204.coord = Coordinate1205;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1206 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[1] = Shape1203;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.name = "r_metacarpophalangeal_4";
HAnimJoint1207.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1207.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1207.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1207.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1208 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1208.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1208.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1209 = browser.currentScene.createNode("Transform");
Transform1209.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1210 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1211 = browser.currentScene.createNode("Shape");
Shape1211.USE = "HAnimJointShape";
Transform1210.child = new undefined();

Transform1210.child[0] = Shape1211;

Transform1209.children = new MFNode();

Transform1209.children[0] = Transform1210;

HAnimSegment1208.children = new MFNode();

HAnimSegment1208.children[0] = Transform1209;

let Shape1212 = browser.currentScene.createNode("Shape");
let LineSet1213 = browser.currentScene.createNode("LineSet");
LineSet1213.vertexCount = new MFInt32(new int[2]);
let Coordinate1214 = browser.currentScene.createNode("Coordinate");
Coordinate1214.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1213.coord = Coordinate1214;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1215 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
LineSet1213.color = ColorRGBA1215;

Shape1212.geometry = LineSet1213;

HAnimSegment1208.children[1] = Shape1212;

HAnimJoint1207.children = new MFNode();

HAnimJoint1207.children[0] = HAnimSegment1208;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1216.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1216.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1216.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1216.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1217.name = "r_carpal_middle_phalanx_4";
HAnimSegment1217.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1218 = browser.currentScene.createNode("Transform");
Transform1218.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1219 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1220 = browser.currentScene.createNode("Shape");
Shape1220.USE = "HAnimJointShape";
Transform1219.child = new undefined();

Transform1219.child[0] = Shape1220;

Transform1218.children = new MFNode();

Transform1218.children[0] = Transform1219;

HAnimSegment1217.children = new MFNode();

HAnimSegment1217.children[0] = Transform1218;

let Shape1221 = browser.currentScene.createNode("Shape");
let LineSet1222 = browser.currentScene.createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
let Coordinate1223 = browser.currentScene.createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1222.coord = Coordinate1223;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1224 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1217.children[1] = Shape1221;

HAnimJoint1216.children = new MFNode();

HAnimJoint1216.children[0] = HAnimSegment1217;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1225.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1225.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1225.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1225.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1216.children[1] = HAnimJoint1225;

HAnimJoint1207.children[1] = HAnimJoint1216;

HAnimJoint1198.children[1] = HAnimJoint1207;

HAnimJoint1185.children[1] = HAnimJoint1198;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.name = "r_carpometacarpal_5";
HAnimJoint1226.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1226.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1226.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1227.name = "r_metacarpal_5";
HAnimSegment1227.DEF = "hanim_r_metacarpal_5";
let Transform1228 = browser.currentScene.createNode("Transform");
Transform1228.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1229 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1230 = browser.currentScene.createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229.child = new undefined();

Transform1229.child[0] = Shape1230;

Transform1228.children = new MFNode();

Transform1228.children[0] = Transform1229;

HAnimSegment1227.children = new MFNode();

HAnimSegment1227.children[0] = Transform1228;

let Shape1231 = browser.currentScene.createNode("Shape");
let LineSet1232 = browser.currentScene.createNode("LineSet");
LineSet1232.vertexCount = new MFInt32(new int[2]);
let Coordinate1233 = browser.currentScene.createNode("Coordinate");
Coordinate1233.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1232.coord = Coordinate1233;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1234.USE = "HAnimSegmentLineColorRGBA";
LineSet1232.color = ColorRGBA1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[1] = Shape1231;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.name = "r_metacarpophalangeal_5";
HAnimJoint1235.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1235.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1235.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1236.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1236.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1237 = browser.currentScene.createNode("Transform");
Transform1237.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1238 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1239 = browser.currentScene.createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.child = new undefined();

Transform1238.child[0] = Shape1239;

Transform1237.children = new MFNode();

Transform1237.children[0] = Transform1238;

HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = Transform1237;

let Shape1240 = browser.currentScene.createNode("Shape");
let LineSet1241 = browser.currentScene.createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1241.coord = Coordinate1242;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[1] = Shape1240;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1244.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1244.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1245.name = "r_carpal_middle_phalanx_5";
HAnimSegment1245.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1246 = browser.currentScene.createNode("Transform");
Transform1246.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1247 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1248 = browser.currentScene.createNode("Shape");
Shape1248.USE = "HAnimJointShape";
Transform1247.child = new undefined();

Transform1247.child[0] = Shape1248;

Transform1246.children = new MFNode();

Transform1246.children[0] = Transform1247;

HAnimSegment1245.children = new MFNode();

HAnimSegment1245.children[0] = Transform1246;

let Shape1249 = browser.currentScene.createNode("Shape");
let LineSet1250 = browser.currentScene.createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
let Coordinate1251 = browser.currentScene.createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1250.coord = Coordinate1251;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1245.children[1] = Shape1249;

HAnimJoint1244.children = new MFNode();

HAnimJoint1244.children[0] = HAnimSegment1245;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1253.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1253.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1253.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1253.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.children[1] = HAnimJoint1253;

HAnimJoint1235.children[1] = HAnimJoint1244;

HAnimJoint1226.children[1] = HAnimJoint1235;

HAnimJoint1185.children[2] = HAnimJoint1226;

HAnimJoint1062.children[4] = HAnimJoint1185;

HAnimJoint1053.children[1] = HAnimJoint1062;

HAnimJoint1044.children[1] = HAnimJoint1053;

HAnimJoint1035.children[1] = HAnimJoint1044;

HAnimJoint1026.children[1] = HAnimJoint1035;

HAnimJoint678.children[3] = HAnimJoint1026;

HAnimJoint669.children[1] = HAnimJoint678;

HAnimJoint660.children[1] = HAnimJoint669;

HAnimJoint651.children[1] = HAnimJoint660;

HAnimJoint642.children[1] = HAnimJoint651;

HAnimJoint633.children[1] = HAnimJoint642;

HAnimJoint624.children[1] = HAnimJoint633;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint597.children[1] = HAnimJoint606;

HAnimJoint588.children[1] = HAnimJoint597;

HAnimJoint579.children[1] = HAnimJoint588;

HAnimJoint570.children[1] = HAnimJoint579;

HAnimJoint561.children[1] = HAnimJoint570;

HAnimJoint552.children[1] = HAnimJoint561;

HAnimJoint543.children[1] = HAnimJoint552;

HAnimJoint534.children[1] = HAnimJoint543;

HAnimJoint52.children[2] = HAnimJoint534;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[7] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[8] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[11] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[12] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1265;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1266;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1267;

let HAnimJoint1268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[16] = HAnimJoint1268;

let HAnimJoint1269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[17] = HAnimJoint1269;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1270;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1271;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1272;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[21] = HAnimJoint1273;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[22] = HAnimJoint1274;

let HAnimJoint1275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[23] = HAnimJoint1275;

let HAnimJoint1276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1276;

let HAnimJoint1277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1277;

let HAnimJoint1278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1278;

let HAnimJoint1279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[27] = HAnimJoint1279;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1280;

let HAnimJoint1281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1281;

let HAnimJoint1282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1282;

let HAnimJoint1283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[31] = HAnimJoint1283;

let HAnimJoint1284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_r_hip";
HAnimHumanoid43.joints[32] = HAnimJoint1284;

let HAnimJoint1285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_r_knee";
HAnimHumanoid43.joints[33] = HAnimJoint1285;

let HAnimJoint1286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[34] = HAnimJoint1286;

let HAnimJoint1287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[35] = HAnimJoint1287;

let HAnimJoint1288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[36] = HAnimJoint1288;

let HAnimJoint1289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1289;

let HAnimJoint1290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1290;

let HAnimJoint1291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[39] = HAnimJoint1291;

let HAnimJoint1292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[40] = HAnimJoint1292;

let HAnimJoint1293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1293;

let HAnimJoint1294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1294;

let HAnimJoint1295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1295;

let HAnimJoint1296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[44] = HAnimJoint1296;

let HAnimJoint1297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[45] = HAnimJoint1297;

let HAnimJoint1298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1298;

let HAnimJoint1299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1299;

let HAnimJoint1300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1300;

let HAnimJoint1301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[49] = HAnimJoint1301;

let HAnimJoint1302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[50] = HAnimJoint1302;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[51] = HAnimJoint1303;

let HAnimJoint1304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1304;

let HAnimJoint1305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1305;

let HAnimJoint1306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1306;

let HAnimJoint1307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint1307;

let HAnimJoint1308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1308;

let HAnimJoint1309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1309;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1310;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[59] = HAnimJoint1311;

let HAnimJoint1312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_vl5";
HAnimHumanoid43.joints[60] = HAnimJoint1312;

let HAnimJoint1313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_vl4";
HAnimHumanoid43.joints[61] = HAnimJoint1313;

let HAnimJoint1314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_vl3";
HAnimHumanoid43.joints[62] = HAnimJoint1314;

let HAnimJoint1315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_vl2";
HAnimHumanoid43.joints[63] = HAnimJoint1315;

let HAnimJoint1316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_vl1";
HAnimHumanoid43.joints[64] = HAnimJoint1316;

let HAnimJoint1317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_vt12";
HAnimHumanoid43.joints[65] = HAnimJoint1317;

let HAnimJoint1318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_vt11";
HAnimHumanoid43.joints[66] = HAnimJoint1318;

let HAnimJoint1319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_vt10";
HAnimHumanoid43.joints[67] = HAnimJoint1319;

let HAnimJoint1320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_vt9";
HAnimHumanoid43.joints[68] = HAnimJoint1320;

let HAnimJoint1321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_vt8";
HAnimHumanoid43.joints[69] = HAnimJoint1321;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_vt7";
HAnimHumanoid43.joints[70] = HAnimJoint1322;

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_vt6";
HAnimHumanoid43.joints[71] = HAnimJoint1323;

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_vt5";
HAnimHumanoid43.joints[72] = HAnimJoint1324;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_vt4";
HAnimHumanoid43.joints[73] = HAnimJoint1325;

let HAnimJoint1326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_vt3";
HAnimHumanoid43.joints[74] = HAnimJoint1326;

let HAnimJoint1327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_vt2";
HAnimHumanoid43.joints[75] = HAnimJoint1327;

let HAnimJoint1328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_vt1";
HAnimHumanoid43.joints[76] = HAnimJoint1328;

let HAnimJoint1329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_vc7";
HAnimHumanoid43.joints[77] = HAnimJoint1329;

let HAnimJoint1330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_vc6";
HAnimHumanoid43.joints[78] = HAnimJoint1330;

let HAnimJoint1331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_vc5";
HAnimHumanoid43.joints[79] = HAnimJoint1331;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_vc4";
HAnimHumanoid43.joints[80] = HAnimJoint1332;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_vc3";
HAnimHumanoid43.joints[81] = HAnimJoint1333;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_vc2";
HAnimHumanoid43.joints[82] = HAnimJoint1334;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_vc1";
HAnimHumanoid43.joints[83] = HAnimJoint1335;

let HAnimJoint1336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_skullbase";
HAnimHumanoid43.joints[84] = HAnimJoint1336;

let HAnimJoint1337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1337;

let HAnimJoint1338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1338;

let HAnimJoint1339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1339;

let HAnimJoint1340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1340;

let HAnimJoint1341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1341;

let HAnimJoint1342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[90] = HAnimJoint1342;

let HAnimJoint1343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[91] = HAnimJoint1343;

let HAnimJoint1344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1344;

let HAnimJoint1345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[93] = HAnimJoint1345;

let HAnimJoint1346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[94] = HAnimJoint1346;

let HAnimJoint1347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[95] = HAnimJoint1347;

let HAnimJoint1348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1348.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[96] = HAnimJoint1348;

let HAnimJoint1349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1349.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1349;

let HAnimJoint1350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1350.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1350;

let HAnimJoint1351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1351.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1351;

let HAnimJoint1352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1352.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[100] = HAnimJoint1352;

let HAnimJoint1353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1353.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1353;

let HAnimJoint1354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1354.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1354;

let HAnimJoint1355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1355.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1355;

let HAnimJoint1356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1356.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1356;

let HAnimJoint1357 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1357.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[105] = HAnimJoint1357;

let HAnimJoint1358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1358.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1358;

let HAnimJoint1359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1359.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1359;

let HAnimJoint1360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1360.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1360;

let HAnimJoint1361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1361.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1361;

let HAnimJoint1362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1362.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[110] = HAnimJoint1362;

let HAnimJoint1363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1363.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[111] = HAnimJoint1363;

let HAnimJoint1364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1364.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1364;

let HAnimJoint1365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1365.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1365;

let HAnimJoint1366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1366.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1366;

let HAnimJoint1367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1367.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[115] = HAnimJoint1367;

let HAnimJoint1368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1368.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1368;

let HAnimJoint1369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1369.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1369;

let HAnimJoint1370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1370.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1370;

let HAnimJoint1371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1371.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[119] = HAnimJoint1371;

let HAnimJoint1372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1372.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1372;

let HAnimJoint1373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1373.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[121] = HAnimJoint1373;

let HAnimJoint1374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1374.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[122] = HAnimJoint1374;

let HAnimJoint1375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1375.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[123] = HAnimJoint1375;

let HAnimJoint1376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1376.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[124] = HAnimJoint1376;

let HAnimJoint1377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1377.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1377;

let HAnimJoint1378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1378.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1378;

let HAnimJoint1379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1379.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1379;

let HAnimJoint1380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1380.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[128] = HAnimJoint1380;

let HAnimJoint1381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1381.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1381;

let HAnimJoint1382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1382.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1382;

let HAnimJoint1383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1383.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1383;

let HAnimJoint1384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1384.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1384;

let HAnimJoint1385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1385.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[133] = HAnimJoint1385;

let HAnimJoint1386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1386.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1386;

let HAnimJoint1387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1387.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1387;

let HAnimJoint1388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1388.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1388;

let HAnimJoint1389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1389.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1389;

let HAnimJoint1390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1390.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[138] = HAnimJoint1390;

let HAnimJoint1391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1391.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[139] = HAnimJoint1391;

let HAnimJoint1392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1392.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1392;

let HAnimJoint1393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1393.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1393;

let HAnimJoint1394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1394.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1394;

let HAnimJoint1395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1395.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[143] = HAnimJoint1395;

let HAnimJoint1396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1396.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1396;

let HAnimJoint1397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1397.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1397;

let HAnimJoint1398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1398.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1398;

let HAnimJoint1399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1399.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[147] = HAnimJoint1399;

let HAnimSegment1400 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1400.USE = "hanim_sacrum";
HAnimHumanoid43.segments[148] = HAnimSegment1400;

let HAnimSegment1401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1401.USE = "hanim_pelvis";
HAnimHumanoid43.segments[149] = HAnimSegment1401;

let HAnimSegment1402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1402.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[150] = HAnimSegment1402;

let HAnimSegment1403 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1403.USE = "hanim_l_calf";
HAnimHumanoid43.segments[151] = HAnimSegment1403;

let HAnimSegment1404 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1404.USE = "hanim_l_talus";
HAnimHumanoid43.segments[152] = HAnimSegment1404;

let HAnimSegment1405 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1405.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[153] = HAnimSegment1405;

let HAnimSegment1406 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1406.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[154] = HAnimSegment1406;

let HAnimSegment1407 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1407.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[155] = HAnimSegment1407;

let HAnimSegment1408 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1408.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[156] = HAnimSegment1408;

let HAnimSegment1409 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1409.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[157] = HAnimSegment1409;

let HAnimSegment1410 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1410.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[158] = HAnimSegment1410;

let HAnimSegment1411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1411.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1411;

let HAnimSegment1412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1412.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1412;

let HAnimSegment1413 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1413.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[161] = HAnimSegment1413;

let HAnimSegment1414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1414.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1414;

let HAnimSegment1415 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1415.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1415;

let HAnimSegment1416 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1416.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1416;

let HAnimSegment1417 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1417.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[165] = HAnimSegment1417;

let HAnimSegment1418 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1418.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[166] = HAnimSegment1418;

let HAnimSegment1419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1419.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[167] = HAnimSegment1419;

let HAnimSegment1420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1420.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1420;

let HAnimSegment1421 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1421.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[169] = HAnimSegment1421;

let HAnimSegment1422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1422.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[170] = HAnimSegment1422;

let HAnimSegment1423 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1423.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1423;

let HAnimSegment1424 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1424.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment1424;

let HAnimSegment1425 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1425.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[173] = HAnimSegment1425;

let HAnimSegment1426 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1426.USE = "hanim_r_calf";
HAnimHumanoid43.segments[174] = HAnimSegment1426;

let HAnimSegment1427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1427.USE = "hanim_r_talus";
HAnimHumanoid43.segments[175] = HAnimSegment1427;

let HAnimSegment1428 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1428.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[176] = HAnimSegment1428;

let HAnimSegment1429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1429.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[177] = HAnimSegment1429;

let HAnimSegment1430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1430.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[178] = HAnimSegment1430;

let HAnimSegment1431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1431.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[179] = HAnimSegment1431;

let HAnimSegment1432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1432.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[180] = HAnimSegment1432;

let HAnimSegment1433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1433.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[181] = HAnimSegment1433;

let HAnimSegment1434 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1434.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1434;

let HAnimSegment1435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1435.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[183] = HAnimSegment1435;

let HAnimSegment1436 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1436.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[184] = HAnimSegment1436;

let HAnimSegment1437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1437.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[185] = HAnimSegment1437;

let HAnimSegment1438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1438.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1438;

let HAnimSegment1439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1439.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[187] = HAnimSegment1439;

let HAnimSegment1440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1440.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[188] = HAnimSegment1440;

let HAnimSegment1441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1441.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[189] = HAnimSegment1441;

let HAnimSegment1442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1442.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[190] = HAnimSegment1442;

let HAnimSegment1443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1443.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1443;

let HAnimSegment1444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1444.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[192] = HAnimSegment1444;

let HAnimSegment1445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1445.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[193] = HAnimSegment1445;

let HAnimSegment1446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1446.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1446;

let HAnimSegment1447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1447.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[195] = HAnimSegment1447;

let HAnimSegment1448 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1448.USE = "hanim_l5";
HAnimHumanoid43.segments[196] = HAnimSegment1448;

let HAnimSegment1449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1449.USE = "hanim_l4";
HAnimHumanoid43.segments[197] = HAnimSegment1449;

let HAnimSegment1450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1450.USE = "hanim_l3";
HAnimHumanoid43.segments[198] = HAnimSegment1450;

let HAnimSegment1451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1451.USE = "hanim_l2";
HAnimHumanoid43.segments[199] = HAnimSegment1451;

let HAnimSegment1452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1452.USE = "hanim_l1";
HAnimHumanoid43.segments[200] = HAnimSegment1452;

let HAnimSegment1453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1453.USE = "hanim_t12";
HAnimHumanoid43.segments[201] = HAnimSegment1453;

let HAnimSegment1454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1454.USE = "hanim_t11";
HAnimHumanoid43.segments[202] = HAnimSegment1454;

let HAnimSegment1455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1455.USE = "hanim_t10";
HAnimHumanoid43.segments[203] = HAnimSegment1455;

let HAnimSegment1456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1456.USE = "hanim_t9";
HAnimHumanoid43.segments[204] = HAnimSegment1456;

let HAnimSegment1457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1457.USE = "hanim_t8";
HAnimHumanoid43.segments[205] = HAnimSegment1457;

let HAnimSegment1458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1458.USE = "hanim_t7";
HAnimHumanoid43.segments[206] = HAnimSegment1458;

let HAnimSegment1459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1459.USE = "hanim_t6";
HAnimHumanoid43.segments[207] = HAnimSegment1459;

let HAnimSegment1460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1460.USE = "hanim_t5";
HAnimHumanoid43.segments[208] = HAnimSegment1460;

let HAnimSegment1461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1461.USE = "hanim_t4";
HAnimHumanoid43.segments[209] = HAnimSegment1461;

let HAnimSegment1462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1462.USE = "hanim_t3";
HAnimHumanoid43.segments[210] = HAnimSegment1462;

let HAnimSegment1463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1463.USE = "hanim_t2";
HAnimHumanoid43.segments[211] = HAnimSegment1463;

let HAnimSegment1464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1464.USE = "hanim_t1";
HAnimHumanoid43.segments[212] = HAnimSegment1464;

let HAnimSegment1465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1465.USE = "hanim_c7";
HAnimHumanoid43.segments[213] = HAnimSegment1465;

let HAnimSegment1466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1466.USE = "hanim_c6";
HAnimHumanoid43.segments[214] = HAnimSegment1466;

let HAnimSegment1467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1467.USE = "hanim_c5";
HAnimHumanoid43.segments[215] = HAnimSegment1467;

let HAnimSegment1468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1468.USE = "hanim_c4";
HAnimHumanoid43.segments[216] = HAnimSegment1468;

let HAnimSegment1469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1469.USE = "hanim_c3";
HAnimHumanoid43.segments[217] = HAnimSegment1469;

let HAnimSegment1470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1470.USE = "hanim_c2";
HAnimHumanoid43.segments[218] = HAnimSegment1470;

let HAnimSegment1471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1471.USE = "hanim_c1";
HAnimHumanoid43.segments[219] = HAnimSegment1471;

let HAnimSegment1472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1472.USE = "hanim_skull";
HAnimHumanoid43.segments[220] = HAnimSegment1472;

let HAnimSegment1473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1473.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[221] = HAnimSegment1473;

let HAnimSegment1474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1474.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[222] = HAnimSegment1474;

let HAnimSegment1475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1475.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[223] = HAnimSegment1475;

let HAnimSegment1476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1476.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[224] = HAnimSegment1476;

let HAnimSegment1477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1477.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[225] = HAnimSegment1477;

let HAnimSegment1478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1478.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[226] = HAnimSegment1478;

let HAnimSegment1479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1479.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[227] = HAnimSegment1479;

let HAnimSegment1480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1480.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[228] = HAnimSegment1480;

let HAnimSegment1481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1481.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[229] = HAnimSegment1481;

let HAnimSegment1482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1482.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[230] = HAnimSegment1482;

let HAnimSegment1483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1483.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1483;

let HAnimSegment1484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1484.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[232] = HAnimSegment1484;

let HAnimSegment1485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1485.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[233] = HAnimSegment1485;

let HAnimSegment1486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1486.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[234] = HAnimSegment1486;

let HAnimSegment1487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1487.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1487;

let HAnimSegment1488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1488.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[236] = HAnimSegment1488;

let HAnimSegment1489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1489.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[237] = HAnimSegment1489;

let HAnimSegment1490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1490.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[238] = HAnimSegment1490;

let HAnimSegment1491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1491.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1491;

let HAnimSegment1492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1492.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[240] = HAnimSegment1492;

let HAnimSegment1493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1493.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[241] = HAnimSegment1493;

let HAnimSegment1494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1494.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1494;

let HAnimSegment1495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1495.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[243] = HAnimSegment1495;

let HAnimSegment1496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1496.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[244] = HAnimSegment1496;

let HAnimSegment1497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1497.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[245] = HAnimSegment1497;

let HAnimSegment1498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1498.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[246] = HAnimSegment1498;

let HAnimSegment1499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1499.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[247] = HAnimSegment1499;

let HAnimSegment1500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1500.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[248] = HAnimSegment1500;

let HAnimSegment1501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1501.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[249] = HAnimSegment1501;

let HAnimSegment1502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1502.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[250] = HAnimSegment1502;

let HAnimSegment1503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1503.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[251] = HAnimSegment1503;

let HAnimSegment1504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1504.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[252] = HAnimSegment1504;

let HAnimSegment1505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1505.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[253] = HAnimSegment1505;

let HAnimSegment1506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1506.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1506;

let HAnimSegment1507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1507.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[255] = HAnimSegment1507;

let HAnimSegment1508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1508.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[256] = HAnimSegment1508;

let HAnimSegment1509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1509.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[257] = HAnimSegment1509;

let HAnimSegment1510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1510.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1510;

let HAnimSegment1511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1511.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[259] = HAnimSegment1511;

let HAnimSegment1512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1512.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[260] = HAnimSegment1512;

let HAnimSegment1513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1513.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[261] = HAnimSegment1513;

let HAnimSegment1514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1514.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1514;

let HAnimSegment1515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1515.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[263] = HAnimSegment1515;

let HAnimSegment1516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1516.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[264] = HAnimSegment1516;

let HAnimSegment1517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1517.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1517;

let HAnimSegment1518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1518.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[266] = HAnimSegment1518;

browser.currentScene.children[4] = HAnimHumanoid43;

