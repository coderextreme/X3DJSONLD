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
meta3.content = "Humanoid3.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d";
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
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint241.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint241.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint265.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint265.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint295.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint295.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint304.llimit = new MFFloat(new float[0,0,0]);
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
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
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
Coordinate312.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet311.coord = Coordinate312;

//from vl5 to vl4 vertices 2
let ColorRGBA313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.name = "vl4";
HAnimJoint314.DEF = "hanim_vl4";
HAnimJoint314.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint314.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint314.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.name = "l4";
HAnimSegment315.DEF = "hanim_l4";
let Transform316 = browser.currentScene.createNode("Transform");
Transform316.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Transform317 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape318 = browser.currentScene.createNode("Shape");
Shape318.USE = "HAnimJointShape";
Transform317.child = new undefined();

Transform317.child[0] = Shape318;

Transform316.children = new MFNode();

Transform316.children[0] = Transform317;

HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = Transform316;

let Shape319 = browser.currentScene.createNode("Shape");
let LineSet320 = browser.currentScene.createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
let Coordinate321 = browser.currentScene.createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet320.coord = Coordinate321;

//from vl4 to vl3 vertices 2
let ColorRGBA322 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSegmentLineColorRGBA";
LineSet320.color = ColorRGBA322;

Shape319.geometry = LineSet320;

HAnimSegment315.children[1] = Shape319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.name = "vl3";
HAnimJoint323.DEF = "hanim_vl3";
HAnimJoint323.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint323.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint323.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.name = "l3";
HAnimSegment324.DEF = "hanim_l3";
let Transform325 = browser.currentScene.createNode("Transform");
Transform325.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Transform326 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "HAnimJointShape";
Transform326.child = new undefined();

Transform326.child[0] = Shape327;

Transform325.children = new MFNode();

Transform325.children[0] = Transform326;

HAnimSegment324.children = new MFNode();

HAnimSegment324.children[0] = Transform325;

let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet329.coord = Coordinate330;

//from vl3 to vl2 vertices 2
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment324.children[1] = Shape328;

let HAnimSite332 = browser.currentScene.createNode("HAnimSite");
HAnimSite332.name = "l_rib10";
HAnimSite332.DEF = "hanim_l_rib10";
HAnimSite332.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor333 = browser.currentScene.createNode("TouchSensor");
TouchSensor333.description = "HAnimSite l_rib10";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

let Shape334 = browser.currentScene.createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment324.children[2] = HAnimSite332;

let HAnimSite335 = browser.currentScene.createNode("HAnimSite");
HAnimSite335.name = "r_rib10";
HAnimSite335.DEF = "hanim_r_rib10";
HAnimSite335.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor336 = browser.currentScene.createNode("TouchSensor");
TouchSensor336.description = "HAnimSite r_rib10";
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = TouchSensor336;

let Shape337 = browser.currentScene.createNode("Shape");
Shape337.USE = "HAnimSiteShape";
HAnimSite335.children[1] = Shape337;

HAnimSegment324.children[3] = HAnimSite335;

let HAnimSite338 = browser.currentScene.createNode("HAnimSite");
HAnimSite338.name = "spine_2_middle_back";
HAnimSite338.DEF = "hanim_spine_2_middle_back";
let TouchSensor339 = browser.currentScene.createNode("TouchSensor");
TouchSensor339.description = "HAnimSite spine_2_middle_back";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = TouchSensor339;

let Shape340 = browser.currentScene.createNode("Shape");
Shape340.USE = "HAnimSiteShape";
HAnimSite338.children[1] = Shape340;

HAnimSegment324.children[4] = HAnimSite338;

HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.name = "vl2";
HAnimJoint341.DEF = "hanim_vl2";
HAnimJoint341.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint341.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment342.name = "l2";
HAnimSegment342.DEF = "hanim_l2";
let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Transform344 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "HAnimJointShape";
Transform344.child = new undefined();

Transform344.child[0] = Shape345;

Transform343.children = new MFNode();

Transform343.children[0] = Transform344;

HAnimSegment342.children = new MFNode();

HAnimSegment342.children[0] = Transform343;

let Shape346 = browser.currentScene.createNode("Shape");
let LineSet347 = browser.currentScene.createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[2]);
let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet347.coord = Coordinate348;

//from vl2 to vl1 vertices 2
let ColorRGBA349 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimSegment342.children[1] = Shape346;

HAnimJoint341.children = new MFNode();

HAnimJoint341.children[0] = HAnimSegment342;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.name = "vl1";
HAnimJoint350.DEF = "hanim_vl1";
HAnimJoint350.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint350.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint350.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment351.name = "l1";
HAnimSegment351.DEF = "hanim_l1";
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform353 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape354 = browser.currentScene.createNode("Shape");
Shape354.USE = "HAnimJointShape";
Transform353.child = new undefined();

Transform353.child[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

HAnimSegment351.children = new MFNode();

HAnimSegment351.children[0] = Transform352;

let Shape355 = browser.currentScene.createNode("Shape");
let LineSet356 = browser.currentScene.createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[2]);
let Coordinate357 = browser.currentScene.createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet356.coord = Coordinate357;

//from vl1 to vt12 vertices 2
let ColorRGBA358 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA358;

Shape355.geometry = LineSet356;

HAnimSegment351.children[1] = Shape355;

HAnimJoint350.children = new MFNode();

HAnimJoint350.children[0] = HAnimSegment351;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.name = "vt12";
HAnimJoint359.DEF = "hanim_vt12";
HAnimJoint359.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint359.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment360.name = "t12";
HAnimSegment360.DEF = "hanim_t12";
let Transform361 = browser.currentScene.createNode("Transform");
Transform361.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform362 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "HAnimJointShape";
Transform362.child = new undefined();

Transform362.child[0] = Shape363;

Transform361.children = new MFNode();

Transform361.children[0] = Transform362;

HAnimSegment360.children = new MFNode();

HAnimSegment360.children[0] = Transform361;

let Shape364 = browser.currentScene.createNode("Shape");
let LineSet365 = browser.currentScene.createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
let Coordinate366 = browser.currentScene.createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet365.coord = Coordinate366;

//from vt12 to vt11 vertices 2
let ColorRGBA367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA367.USE = "HAnimSegmentLineColorRGBA";
LineSet365.color = ColorRGBA367;

Shape364.geometry = LineSet365;

HAnimSegment360.children[1] = Shape364;

HAnimJoint359.children = new MFNode();

HAnimJoint359.children[0] = HAnimSegment360;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.name = "vt11";
HAnimJoint368.DEF = "hanim_vt11";
HAnimJoint368.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint368.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint368.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment369.name = "t11";
HAnimSegment369.DEF = "hanim_t11";
let Transform370 = browser.currentScene.createNode("Transform");
Transform370.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform371 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371.child = new undefined();

Transform371.child[0] = Shape372;

Transform370.children = new MFNode();

Transform370.children[0] = Transform371;

HAnimSegment369.children = new MFNode();

HAnimSegment369.children[0] = Transform370;

let Shape373 = browser.currentScene.createNode("Shape");
let LineSet374 = browser.currentScene.createNode("LineSet");
LineSet374.vertexCount = new MFInt32(new int[2]);
let Coordinate375 = browser.currentScene.createNode("Coordinate");
Coordinate375.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet374.coord = Coordinate375;

//from vt11 to vt10 vertices 2
let ColorRGBA376 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA376.USE = "HAnimSegmentLineColorRGBA";
LineSet374.color = ColorRGBA376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[1] = Shape373;

let HAnimSite377 = browser.currentScene.createNode("HAnimSite");
HAnimSite377.name = "substernale";
HAnimSite377.DEF = "hanim_substernale";
HAnimSite377.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor378 = browser.currentScene.createNode("TouchSensor");
TouchSensor378.description = "HAnimSite substernale";
HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = TouchSensor378;

let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377.children[1] = Shape379;

HAnimSegment369.children[2] = HAnimSite377;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.name = "vt10";
HAnimJoint380.DEF = "hanim_vt10";
HAnimJoint380.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint380.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint380.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment381 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment381.name = "t10";
HAnimSegment381.DEF = "hanim_t10";
let Transform382 = browser.currentScene.createNode("Transform");
Transform382.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform383 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape384 = browser.currentScene.createNode("Shape");
Shape384.USE = "HAnimJointShape";
Transform383.child = new undefined();

Transform383.child[0] = Shape384;

Transform382.children = new MFNode();

Transform382.children[0] = Transform383;

HAnimSegment381.children = new MFNode();

HAnimSegment381.children[0] = Transform382;

let Shape385 = browser.currentScene.createNode("Shape");
let LineSet386 = browser.currentScene.createNode("LineSet");
LineSet386.vertexCount = new MFInt32(new int[2]);
let Coordinate387 = browser.currentScene.createNode("Coordinate");
Coordinate387.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet386.coord = Coordinate387;

//from vt10 to vt9 vertices 2
let ColorRGBA388 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA388.USE = "HAnimSegmentLineColorRGBA";
LineSet386.color = ColorRGBA388;

Shape385.geometry = LineSet386;

HAnimSegment381.children[1] = Shape385;

let HAnimSite389 = browser.currentScene.createNode("HAnimSite");
HAnimSite389.name = "l_thelion";
HAnimSite389.DEF = "hanim_l_thelion";
HAnimSite389.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor390 = browser.currentScene.createNode("TouchSensor");
TouchSensor390.description = "HAnimSite l_thelion";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment381.children[2] = HAnimSite389;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.name = "r_thelion";
HAnimSite392.DEF = "hanim_r_thelion";
HAnimSite392.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor393 = browser.currentScene.createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_thelion";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment381.children[3] = HAnimSite392;

HAnimJoint380.children = new MFNode();

HAnimJoint380.children[0] = HAnimSegment381;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.name = "vt9";
HAnimJoint395.DEF = "hanim_vt9";
HAnimJoint395.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment396 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment396.name = "t9";
HAnimSegment396.DEF = "hanim_t9";
let Transform397 = browser.currentScene.createNode("Transform");
Transform397.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
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
Coordinate402.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet401.coord = Coordinate402;

//from vt9 to vt8 vertices 2
let ColorRGBA403 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet401.color = ColorRGBA403;

Shape400.geometry = LineSet401;

HAnimSegment396.children[1] = Shape400;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.name = "vt8";
HAnimJoint404.DEF = "hanim_vt8";
HAnimJoint404.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment405 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment405.name = "t8";
HAnimSegment405.DEF = "hanim_t8";
let Transform406 = browser.currentScene.createNode("Transform");
Transform406.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform407 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape408 = browser.currentScene.createNode("Shape");
Shape408.USE = "HAnimJointShape";
Transform407.child = new undefined();

Transform407.child[0] = Shape408;

Transform406.children = new MFNode();

Transform406.children[0] = Transform407;

HAnimSegment405.children = new MFNode();

HAnimSegment405.children[0] = Transform406;

let Shape409 = browser.currentScene.createNode("Shape");
let LineSet410 = browser.currentScene.createNode("LineSet");
LineSet410.vertexCount = new MFInt32(new int[2]);
let Coordinate411 = browser.currentScene.createNode("Coordinate");
Coordinate411.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet410.coord = Coordinate411;

//from vt8 to vt7 vertices 2
let ColorRGBA412 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA412.USE = "HAnimSegmentLineColorRGBA";
LineSet410.color = ColorRGBA412;

Shape409.geometry = LineSet410;

HAnimSegment405.children[1] = Shape409;

HAnimJoint404.children = new MFNode();

HAnimJoint404.children[0] = HAnimSegment405;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.name = "vt7";
HAnimJoint413.DEF = "hanim_vt7";
HAnimJoint413.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint413.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint413.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment414.name = "t7";
HAnimSegment414.DEF = "hanim_t7";
let Transform415 = browser.currentScene.createNode("Transform");
Transform415.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform416 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "HAnimJointShape";
Transform416.child = new undefined();

Transform416.child[0] = Shape417;

Transform415.children = new MFNode();

Transform415.children[0] = Transform416;

HAnimSegment414.children = new MFNode();

HAnimSegment414.children[0] = Transform415;

let Shape418 = browser.currentScene.createNode("Shape");
let LineSet419 = browser.currentScene.createNode("LineSet");
LineSet419.vertexCount = new MFInt32(new int[2]);
let Coordinate420 = browser.currentScene.createNode("Coordinate");
Coordinate420.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet419.coord = Coordinate420;

//from vt7 to vt6 vertices 2
let ColorRGBA421 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA";
LineSet419.color = ColorRGBA421;

Shape418.geometry = LineSet419;

HAnimSegment414.children[1] = Shape418;

let HAnimSite422 = browser.currentScene.createNode("HAnimSite");
HAnimSite422.name = "l_chest_midsagittal_plane";
HAnimSite422.DEF = "hanim_l_chest_midsagittal_plane";
let TouchSensor423 = browser.currentScene.createNode("TouchSensor");
TouchSensor423.description = "HAnimSite l_chest_midsagittal_plane";
HAnimSite422.children = new MFNode();

HAnimSite422.children[0] = TouchSensor423;

let Shape424 = browser.currentScene.createNode("Shape");
Shape424.USE = "HAnimSiteShape";
HAnimSite422.children[1] = Shape424;

HAnimSegment414.children[2] = HAnimSite422;

let HAnimSite425 = browser.currentScene.createNode("HAnimSite");
HAnimSite425.name = "mesosternale";
HAnimSite425.DEF = "hanim_mesosternale";
let TouchSensor426 = browser.currentScene.createNode("TouchSensor");
TouchSensor426.description = "HAnimSite mesosternale";
HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = TouchSensor426;

let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "HAnimSiteShape";
HAnimSite425.children[1] = Shape427;

HAnimSegment414.children[3] = HAnimSite425;

let HAnimSite428 = browser.currentScene.createNode("HAnimSite");
HAnimSite428.name = "r_chest_midsagittal_plane";
HAnimSite428.DEF = "hanim_r_chest_midsagittal_plane";
let TouchSensor429 = browser.currentScene.createNode("TouchSensor");
TouchSensor429.description = "HAnimSite r_chest_midsagittal_plane";
HAnimSite428.children = new MFNode();

HAnimSite428.children[0] = TouchSensor429;

let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "HAnimSiteShape";
HAnimSite428.children[1] = Shape430;

HAnimSegment414.children[4] = HAnimSite428;

let HAnimSite431 = browser.currentScene.createNode("HAnimSite");
HAnimSite431.name = "rear_center_midsagittal_plane";
HAnimSite431.DEF = "hanim_rear_center_midsagittal_plane";
let TouchSensor432 = browser.currentScene.createNode("TouchSensor");
TouchSensor432.description = "HAnimSite rear_center_midsagittal_plane";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimSegment414.children[5] = HAnimSite431;

HAnimJoint413.children = new MFNode();

HAnimJoint413.children[0] = HAnimSegment414;

let HAnimJoint434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint434.name = "vt6";
HAnimJoint434.DEF = "hanim_vt6";
HAnimJoint434.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint434.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint434.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment435.name = "t6";
HAnimSegment435.DEF = "hanim_t6";
let Transform436 = browser.currentScene.createNode("Transform");
Transform436.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform437 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "HAnimJointShape";
Transform437.child = new undefined();

Transform437.child[0] = Shape438;

Transform436.children = new MFNode();

Transform436.children[0] = Transform437;

HAnimSegment435.children = new MFNode();

HAnimSegment435.children[0] = Transform436;

let Shape439 = browser.currentScene.createNode("Shape");
let LineSet440 = browser.currentScene.createNode("LineSet");
LineSet440.vertexCount = new MFInt32(new int[2]);
let Coordinate441 = browser.currentScene.createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet440.coord = Coordinate441;

//from vt6 to vt5 vertices 2
let ColorRGBA442 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet440.color = ColorRGBA442;

Shape439.geometry = LineSet440;

HAnimSegment435.children[1] = Shape439;

let HAnimSite443 = browser.currentScene.createNode("HAnimSite");
HAnimSite443.name = "spine_1_middle_back";
HAnimSite443.DEF = "hanim_spine_1_middle_back";
let TouchSensor444 = browser.currentScene.createNode("TouchSensor");
TouchSensor444.description = "HAnimSite spine_1_middle_back";
HAnimSite443.children = new MFNode();

HAnimSite443.children[0] = TouchSensor444;

let Shape445 = browser.currentScene.createNode("Shape");
Shape445.USE = "HAnimSiteShape";
HAnimSite443.children[1] = Shape445;

HAnimSegment435.children[2] = HAnimSite443;

HAnimJoint434.children = new MFNode();

HAnimJoint434.children[0] = HAnimSegment435;

let HAnimJoint446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint446.name = "vt5";
HAnimJoint446.DEF = "hanim_vt5";
HAnimJoint446.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint446.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.name = "t5";
HAnimSegment447.DEF = "hanim_t5";
let Transform448 = browser.currentScene.createNode("Transform");
Transform448.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
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
Coordinate453.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet452.coord = Coordinate453;

//from vt5 to vt4 vertices 2
let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[1] = Shape451;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

let HAnimJoint455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint455.name = "vt4";
HAnimJoint455.DEF = "hanim_vt4";
HAnimJoint455.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint455.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.name = "t4";
HAnimSegment456.DEF = "hanim_t4";
let Transform457 = browser.currentScene.createNode("Transform");
Transform457.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform458 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "HAnimJointShape";
Transform458.child = new undefined();

Transform458.child[0] = Shape459;

Transform457.children = new MFNode();

Transform457.children[0] = Transform458;

HAnimSegment456.children = new MFNode();

HAnimSegment456.children[0] = Transform457;

let Shape460 = browser.currentScene.createNode("Shape");
let LineSet461 = browser.currentScene.createNode("LineSet");
LineSet461.vertexCount = new MFInt32(new int[2]);
let Coordinate462 = browser.currentScene.createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet461.coord = Coordinate462;

//from vt4 to vt3 vertices 2
let ColorRGBA463 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA463.USE = "HAnimSegmentLineColorRGBA";
LineSet461.color = ColorRGBA463;

Shape460.geometry = LineSet461;

HAnimSegment456.children[1] = Shape460;

HAnimJoint455.children = new MFNode();

HAnimJoint455.children[0] = HAnimSegment456;

let HAnimJoint464 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint464.name = "vt3";
HAnimJoint464.DEF = "hanim_vt3";
HAnimJoint464.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint464.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint464.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.name = "t3";
HAnimSegment465.DEF = "hanim_t3";
let Transform466 = browser.currentScene.createNode("Transform");
Transform466.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform467 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape468 = browser.currentScene.createNode("Shape");
Shape468.USE = "HAnimJointShape";
Transform467.child = new undefined();

Transform467.child[0] = Shape468;

Transform466.children = new MFNode();

Transform466.children[0] = Transform467;

HAnimSegment465.children = new MFNode();

HAnimSegment465.children[0] = Transform466;

let Shape469 = browser.currentScene.createNode("Shape");
let LineSet470 = browser.currentScene.createNode("LineSet");
LineSet470.vertexCount = new MFInt32(new int[2]);
let Coordinate471 = browser.currentScene.createNode("Coordinate");
Coordinate471.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet470.coord = Coordinate471;

//from vt3 to vt2 vertices 2
let ColorRGBA472 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA472.USE = "HAnimSegmentLineColorRGBA";
LineSet470.color = ColorRGBA472;

Shape469.geometry = LineSet470;

HAnimSegment465.children[1] = Shape469;

HAnimJoint464.children = new MFNode();

HAnimJoint464.children[0] = HAnimSegment465;

let HAnimJoint473 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint473.name = "vt2";
HAnimJoint473.DEF = "hanim_vt2";
HAnimJoint473.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint473.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint473.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.name = "t2";
HAnimSegment474.DEF = "hanim_t2";
let Transform475 = browser.currentScene.createNode("Transform");
Transform475.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Transform476 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape477 = browser.currentScene.createNode("Shape");
Shape477.USE = "HAnimJointShape";
Transform476.child = new undefined();

Transform476.child[0] = Shape477;

Transform475.children = new MFNode();

Transform475.children[0] = Transform476;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Transform475;

let Shape478 = browser.currentScene.createNode("Shape");
let LineSet479 = browser.currentScene.createNode("LineSet");
LineSet479.vertexCount = new MFInt32(new int[2]);
let Coordinate480 = browser.currentScene.createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet479.coord = Coordinate480;

//from vt2 to vt1 vertices 2
let ColorRGBA481 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA481.USE = "HAnimSegmentLineColorRGBA";
LineSet479.color = ColorRGBA481;

Shape478.geometry = LineSet479;

HAnimSegment474.children[1] = Shape478;

let HAnimSite482 = browser.currentScene.createNode("HAnimSite");
HAnimSite482.name = "cervicale";
HAnimSite482.DEF = "hanim_cervicale";
HAnimSite482.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor483 = browser.currentScene.createNode("TouchSensor");
TouchSensor483.description = "HAnimSite cervicale";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

HAnimSegment474.children[2] = HAnimSite482;

let HAnimSite485 = browser.currentScene.createNode("HAnimSite");
HAnimSite485.name = "suprasternale";
HAnimSite485.DEF = "hanim_suprasternale";
HAnimSite485.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor486 = browser.currentScene.createNode("TouchSensor");
TouchSensor486.description = "HAnimSite suprasternale";
HAnimSite485.children = new MFNode();

HAnimSite485.children[0] = TouchSensor486;

let Shape487 = browser.currentScene.createNode("Shape");
Shape487.USE = "HAnimSiteShape";
HAnimSite485.children[1] = Shape487;

HAnimSegment474.children[3] = HAnimSite485;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

let HAnimJoint488 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint488.name = "vt1";
HAnimJoint488.DEF = "hanim_vt1";
HAnimJoint488.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint488.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint488.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.name = "t1";
HAnimSegment489.DEF = "hanim_t1";
let Transform490 = browser.currentScene.createNode("Transform");
Transform490.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform491 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "HAnimJointShape";
Transform491.child = new undefined();

Transform491.child[0] = Shape492;

Transform490.children = new MFNode();

Transform490.children[0] = Transform491;

HAnimSegment489.children = new MFNode();

HAnimSegment489.children[0] = Transform490;

let Shape493 = browser.currentScene.createNode("Shape");
let LineSet494 = browser.currentScene.createNode("LineSet");
LineSet494.vertexCount = new MFInt32(new int[2]);
let Coordinate495 = browser.currentScene.createNode("Coordinate");
Coordinate495.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet494.coord = Coordinate495;

//from vt1 to vc7 vertices 2
let ColorRGBA496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
LineSet494.color = ColorRGBA496;

Shape493.geometry = LineSet494;

HAnimSegment489.children[1] = Shape493;

let HAnimSite497 = browser.currentScene.createNode("HAnimSite");
HAnimSite497.name = "l_neck_base";
HAnimSite497.DEF = "hanim_l_neck_base";
HAnimSite497.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor498 = browser.currentScene.createNode("TouchSensor");
TouchSensor498.description = "HAnimSite l_neck_base";
HAnimSite497.children = new MFNode();

HAnimSite497.children[0] = TouchSensor498;

let Shape499 = browser.currentScene.createNode("Shape");
Shape499.USE = "HAnimSiteShape";
HAnimSite497.children[1] = Shape499;

HAnimSegment489.children[2] = HAnimSite497;

let HAnimSite500 = browser.currentScene.createNode("HAnimSite");
HAnimSite500.name = "r_neck_base";
HAnimSite500.DEF = "hanim_r_neck_base";
HAnimSite500.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor501 = browser.currentScene.createNode("TouchSensor");
TouchSensor501.description = "HAnimSite r_neck_base";
HAnimSite500.children = new MFNode();

HAnimSite500.children[0] = TouchSensor501;

let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "HAnimSiteShape";
HAnimSite500.children[1] = Shape502;

HAnimSegment489.children[3] = HAnimSite500;

let Shape503 = browser.currentScene.createNode("Shape");
let LineSet504 = browser.currentScene.createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
let Coordinate505 = browser.currentScene.createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet504.coord = Coordinate505;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA506 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment489.children[4] = Shape503;

let HAnimSite507 = browser.currentScene.createNode("HAnimSite");
HAnimSite507.name = "l_acromion";
HAnimSite507.DEF = "hanim_l_acromion";
HAnimSite507.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor508 = browser.currentScene.createNode("TouchSensor");
TouchSensor508.description = "HAnimSite l_acromion";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

let Shape509 = browser.currentScene.createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment489.children[5] = HAnimSite507;

let HAnimSite510 = browser.currentScene.createNode("HAnimSite");
HAnimSite510.name = "l_axilla_distal_pt";
HAnimSite510.DEF = "hanim_l_axilla_distal_pt";
HAnimSite510.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor511 = browser.currentScene.createNode("TouchSensor");
TouchSensor511.description = "HAnimSite l_axilla_distal_pt";
HAnimSite510.children = new MFNode();

HAnimSite510.children[0] = TouchSensor511;

let Shape512 = browser.currentScene.createNode("Shape");
Shape512.USE = "HAnimSiteShape";
HAnimSite510.children[1] = Shape512;

HAnimSegment489.children[6] = HAnimSite510;

let HAnimSite513 = browser.currentScene.createNode("HAnimSite");
HAnimSite513.name = "l_axilla_posterior_folds";
HAnimSite513.DEF = "hanim_l_axilla_posterior_folds";
let TouchSensor514 = browser.currentScene.createNode("TouchSensor");
TouchSensor514.description = "HAnimSite l_axilla_posterior_folds";
HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = TouchSensor514;

let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "HAnimSiteShape";
HAnimSite513.children[1] = Shape515;

HAnimSegment489.children[7] = HAnimSite513;

let HAnimSite516 = browser.currentScene.createNode("HAnimSite");
HAnimSite516.name = "l_axilla_proximal";
HAnimSite516.DEF = "hanim_l_axilla_proximal";
HAnimSite516.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor517 = browser.currentScene.createNode("TouchSensor");
TouchSensor517.description = "HAnimSite l_axilla_proximal";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimSegment489.children[8] = HAnimSite516;

let HAnimSite519 = browser.currentScene.createNode("HAnimSite");
HAnimSite519.name = "l_clavicale";
HAnimSite519.DEF = "hanim_l_clavicale";
HAnimSite519.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor520 = browser.currentScene.createNode("TouchSensor");
TouchSensor520.description = "HAnimSite l_clavicale";
HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = TouchSensor520;

let Shape521 = browser.currentScene.createNode("Shape");
Shape521.USE = "HAnimSiteShape";
HAnimSite519.children[1] = Shape521;

HAnimSegment489.children[9] = HAnimSite519;

let Shape522 = browser.currentScene.createNode("Shape");
let LineSet523 = browser.currentScene.createNode("LineSet");
LineSet523.vertexCount = new MFInt32(new int[2]);
let Coordinate524 = browser.currentScene.createNode("Coordinate");
Coordinate524.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet523.coord = Coordinate524;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSegmentLineColorRGBA";
LineSet523.color = ColorRGBA525;

Shape522.geometry = LineSet523;

HAnimSegment489.children[10] = Shape522;

let HAnimSite526 = browser.currentScene.createNode("HAnimSite");
HAnimSite526.name = "r_acromion";
HAnimSite526.DEF = "hanim_r_acromion";
HAnimSite526.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor527 = browser.currentScene.createNode("TouchSensor");
TouchSensor527.description = "HAnimSite r_acromion";
HAnimSite526.children = new MFNode();

HAnimSite526.children[0] = TouchSensor527;

let Shape528 = browser.currentScene.createNode("Shape");
Shape528.USE = "HAnimSiteShape";
HAnimSite526.children[1] = Shape528;

HAnimSegment489.children[11] = HAnimSite526;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.name = "r_axilla_distal_pt";
HAnimSite529.DEF = "hanim_r_axilla_distal_pt";
HAnimSite529.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor530 = browser.currentScene.createNode("TouchSensor");
TouchSensor530.description = "HAnimSite r_axilla_distal_pt";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

let Shape531 = browser.currentScene.createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment489.children[12] = HAnimSite529;

let HAnimSite532 = browser.currentScene.createNode("HAnimSite");
HAnimSite532.name = "r_axilla_posterior_folds";
HAnimSite532.DEF = "hanim_r_axilla_posterior_folds";
let TouchSensor533 = browser.currentScene.createNode("TouchSensor");
TouchSensor533.description = "HAnimSite r_axilla_posterior_folds";
HAnimSite532.children = new MFNode();

HAnimSite532.children[0] = TouchSensor533;

let Shape534 = browser.currentScene.createNode("Shape");
Shape534.USE = "HAnimSiteShape";
HAnimSite532.children[1] = Shape534;

HAnimSegment489.children[13] = HAnimSite532;

let HAnimSite535 = browser.currentScene.createNode("HAnimSite");
HAnimSite535.name = "r_axilla_proximal";
HAnimSite535.DEF = "hanim_r_axilla_proximal";
HAnimSite535.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor536 = browser.currentScene.createNode("TouchSensor");
TouchSensor536.description = "HAnimSite r_axilla_proximal";
HAnimSite535.children = new MFNode();

HAnimSite535.children[0] = TouchSensor536;

let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "HAnimSiteShape";
HAnimSite535.children[1] = Shape537;

HAnimSegment489.children[14] = HAnimSite535;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.name = "r_clavicale";
HAnimSite538.DEF = "hanim_r_clavicale";
HAnimSite538.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor539 = browser.currentScene.createNode("TouchSensor");
TouchSensor539.description = "HAnimSite r_clavicale";
HAnimSite538.children = new MFNode();

HAnimSite538.children[0] = TouchSensor539;

let Shape540 = browser.currentScene.createNode("Shape");
Shape540.USE = "HAnimSiteShape";
HAnimSite538.children[1] = Shape540;

HAnimSegment489.children[15] = HAnimSite538;

HAnimJoint488.children = new MFNode();

HAnimJoint488.children[0] = HAnimSegment489;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "vc7";
HAnimJoint541.DEF = "hanim_vc7";
HAnimJoint541.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.name = "c7";
HAnimSegment542.DEF = "hanim_c7";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform544 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.child = new undefined();

Transform544.child[0] = Shape545;

Transform543.children = new MFNode();

Transform543.children[0] = Transform544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

let Shape546 = browser.currentScene.createNode("Shape");
let LineSet547 = browser.currentScene.createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet547.coord = Coordinate548;

//from vc7 to vc6 vertices 2
let ColorRGBA549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[1] = Shape546;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

let HAnimJoint550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint550.name = "vc6";
HAnimJoint550.DEF = "hanim_vc6";
HAnimJoint550.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment551.name = "c6";
HAnimSegment551.DEF = "hanim_c6";
let Transform552 = browser.currentScene.createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform553 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.child = new undefined();

Transform553.child[0] = Shape554;

Transform552.children = new MFNode();

Transform552.children[0] = Transform553;

HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = Transform552;

let Shape555 = browser.currentScene.createNode("Shape");
let LineSet556 = browser.currentScene.createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
let Coordinate557 = browser.currentScene.createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet556.coord = Coordinate557;

//from vc6 to vc5 vertices 2
let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[1] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

let HAnimJoint559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint559.name = "vc5";
HAnimJoint559.DEF = "hanim_vc5";
HAnimJoint559.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment560 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment560.name = "c5";
HAnimSegment560.DEF = "hanim_c5";
let Transform561 = browser.currentScene.createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform562 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = Transform561;

let Shape564 = browser.currentScene.createNode("Shape");
let LineSet565 = browser.currentScene.createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
let Coordinate566 = browser.currentScene.createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet565.coord = Coordinate566;

//from vc5 to vc4 vertices 2
let ColorRGBA567 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

let HAnimJoint568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint568.name = "vc4";
HAnimJoint568.DEF = "hanim_vc4";
HAnimJoint568.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment569 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment569.name = "c4";
HAnimSegment569.DEF = "hanim_c4";
let Transform570 = browser.currentScene.createNode("Transform");
Transform570.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform571 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571.child = new undefined();

Transform571.child[0] = Shape572;

Transform570.children = new MFNode();

Transform570.children[0] = Transform571;

HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = Transform570;

let Shape573 = browser.currentScene.createNode("Shape");
let LineSet574 = browser.currentScene.createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet574.coord = Coordinate575;

//from vc4 to vc3 vertices 2
let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[1] = Shape573;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

let HAnimJoint577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint577.name = "vc3";
HAnimJoint577.DEF = "hanim_vc3";
HAnimJoint577.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment578.name = "c3";
HAnimSegment578.DEF = "hanim_c3";
let Transform579 = browser.currentScene.createNode("Transform");
Transform579.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform580 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape581 = browser.currentScene.createNode("Shape");
Shape581.USE = "HAnimJointShape";
Transform580.child = new undefined();

Transform580.child[0] = Shape581;

Transform579.children = new MFNode();

Transform579.children[0] = Transform580;

HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = Transform579;

let Shape582 = browser.currentScene.createNode("Shape");
let LineSet583 = browser.currentScene.createNode("LineSet");
LineSet583.vertexCount = new MFInt32(new int[2]);
let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet583.coord = Coordinate584;

//from vc3 to vc2 vertices 2
let ColorRGBA585 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment578.children[1] = Shape582;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.name = "adams_apple";
HAnimSite586.DEF = "hanim_adams_apple";
let TouchSensor587 = browser.currentScene.createNode("TouchSensor");
TouchSensor587.description = "HAnimSite adams_apple";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment578.children[2] = HAnimSite586;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

let HAnimJoint589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint589.name = "vc2";
HAnimJoint589.DEF = "hanim_vc2";
HAnimJoint589.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint589.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint589.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment590 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment590.name = "c2";
HAnimSegment590.DEF = "hanim_c2";
let Transform591 = browser.currentScene.createNode("Transform");
Transform591.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform592 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "HAnimJointShape";
Transform592.child = new undefined();

Transform592.child[0] = Shape593;

Transform591.children = new MFNode();

Transform591.children[0] = Transform592;

HAnimSegment590.children = new MFNode();

HAnimSegment590.children[0] = Transform591;

let Shape594 = browser.currentScene.createNode("Shape");
let LineSet595 = browser.currentScene.createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
let Coordinate596 = browser.currentScene.createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet595.coord = Coordinate596;

//from vc2 to vc1 vertices 2
let ColorRGBA597 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSegmentLineColorRGBA";
LineSet595.color = ColorRGBA597;

Shape594.geometry = LineSet595;

HAnimSegment590.children[1] = Shape594;

HAnimJoint589.children = new MFNode();

HAnimJoint589.children[0] = HAnimSegment590;

let HAnimJoint598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint598.name = "vc1";
HAnimJoint598.DEF = "hanim_vc1";
HAnimJoint598.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint598.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint598.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment599 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment599.name = "c1";
HAnimSegment599.DEF = "hanim_c1";
let Transform600 = browser.currentScene.createNode("Transform");
Transform600.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Transform601 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape602 = browser.currentScene.createNode("Shape");
Shape602.USE = "HAnimJointShape";
Transform601.child = new undefined();

Transform601.child[0] = Shape602;

Transform600.children = new MFNode();

Transform600.children[0] = Transform601;

HAnimSegment599.children = new MFNode();

HAnimSegment599.children[0] = Transform600;

let Shape603 = browser.currentScene.createNode("Shape");
let LineSet604 = browser.currentScene.createNode("LineSet");
LineSet604.vertexCount = new MFInt32(new int[2]);
let Coordinate605 = browser.currentScene.createNode("Coordinate");
Coordinate605.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet604.coord = Coordinate605;

//from vc1 to skullbase vertices 2
let ColorRGBA606 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA606.USE = "HAnimSegmentLineColorRGBA";
LineSet604.color = ColorRGBA606;

Shape603.geometry = LineSet604;

HAnimSegment599.children[1] = Shape603;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.name = "glabella";
HAnimSite607.DEF = "hanim_glabella";
let TouchSensor608 = browser.currentScene.createNode("TouchSensor");
TouchSensor608.description = "HAnimSite glabella";
HAnimSite607.children = new MFNode();

HAnimSite607.children[0] = TouchSensor608;

let Shape609 = browser.currentScene.createNode("Shape");
Shape609.USE = "HAnimSiteShape";
HAnimSite607.children[1] = Shape609;

HAnimSegment599.children[2] = HAnimSite607;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.name = "l_ectocanthus";
HAnimSite610.DEF = "hanim_l_ectocanthus";
let TouchSensor611 = browser.currentScene.createNode("TouchSensor");
TouchSensor611.description = "HAnimSite l_ectocanthus";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = TouchSensor611;

let Shape612 = browser.currentScene.createNode("Shape");
Shape612.USE = "HAnimSiteShape";
HAnimSite610.children[1] = Shape612;

HAnimSegment599.children[3] = HAnimSite610;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.name = "l_infraorbitale";
HAnimSite613.DEF = "hanim_l_infraorbitale";
HAnimSite613.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor614 = browser.currentScene.createNode("TouchSensor");
TouchSensor614.description = "HAnimSite l_infraorbitale";
HAnimSite613.children = new MFNode();

HAnimSite613.children[0] = TouchSensor614;

let Shape615 = browser.currentScene.createNode("Shape");
Shape615.USE = "HAnimSiteShape";
HAnimSite613.children[1] = Shape615;

HAnimSegment599.children[4] = HAnimSite613;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.name = "l_tragion";
HAnimSite616.DEF = "hanim_l_tragion";
HAnimSite616.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor617 = browser.currentScene.createNode("TouchSensor");
TouchSensor617.description = "HAnimSite l_tragion";
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = TouchSensor617;

let Shape618 = browser.currentScene.createNode("Shape");
Shape618.USE = "HAnimSiteShape";
HAnimSite616.children[1] = Shape618;

HAnimSegment599.children[5] = HAnimSite616;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.name = "nuchale";
HAnimSite619.DEF = "hanim_nuchale";
HAnimSite619.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor620 = browser.currentScene.createNode("TouchSensor");
TouchSensor620.description = "HAnimSite nuchale";
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = TouchSensor620;

let Shape621 = browser.currentScene.createNode("Shape");
Shape621.USE = "HAnimSiteShape";
HAnimSite619.children[1] = Shape621;

HAnimSegment599.children[6] = HAnimSite619;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.name = "opisthocranion";
HAnimSite622.DEF = "hanim_opisthocranion";
let TouchSensor623 = browser.currentScene.createNode("TouchSensor");
TouchSensor623.description = "HAnimSite opisthocranion";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment599.children[7] = HAnimSite622;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.name = "r_ectocanthus";
HAnimSite625.DEF = "hanim_r_ectocanthus";
let TouchSensor626 = browser.currentScene.createNode("TouchSensor");
TouchSensor626.description = "HAnimSite r_ectocanthus";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

HAnimSegment599.children[8] = HAnimSite625;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.name = "r_infraorbitale";
HAnimSite628.DEF = "hanim_r_infraorbitale";
HAnimSite628.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor629 = browser.currentScene.createNode("TouchSensor");
TouchSensor629.description = "HAnimSite r_infraorbitale";
HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = TouchSensor629;

let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "HAnimSiteShape";
HAnimSite628.children[1] = Shape630;

HAnimSegment599.children[9] = HAnimSite628;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.name = "r_tragion";
HAnimSite631.DEF = "hanim_r_tragion";
HAnimSite631.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor632 = browser.currentScene.createNode("TouchSensor");
TouchSensor632.description = "HAnimSite r_tragion";
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = TouchSensor632;

let Shape633 = browser.currentScene.createNode("Shape");
Shape633.USE = "HAnimSiteShape";
HAnimSite631.children[1] = Shape633;

HAnimSegment599.children[10] = HAnimSite631;

let HAnimSite634 = browser.currentScene.createNode("HAnimSite");
HAnimSite634.name = "sellion";
HAnimSite634.DEF = "hanim_sellion";
HAnimSite634.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor635 = browser.currentScene.createNode("TouchSensor");
TouchSensor635.description = "HAnimSite sellion";
HAnimSite634.children = new MFNode();

HAnimSite634.children[0] = TouchSensor635;

let Shape636 = browser.currentScene.createNode("Shape");
Shape636.USE = "HAnimSiteShape";
HAnimSite634.children[1] = Shape636;

HAnimSegment599.children[11] = HAnimSite634;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.name = "skull_vertex";
HAnimSite637.DEF = "hanim_skull_vertex";
let TouchSensor638 = browser.currentScene.createNode("TouchSensor");
TouchSensor638.description = "HAnimSite skull_vertex";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

HAnimSegment599.children[12] = HAnimSite637;

HAnimJoint598.children = new MFNode();

HAnimJoint598.children[0] = HAnimSegment599;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.name = "skullbase";
HAnimJoint640.DEF = "hanim_skullbase";
HAnimJoint640.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment641 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment641.name = "skull";
HAnimSegment641.DEF = "hanim_skull";
let Transform642 = browser.currentScene.createNode("Transform");
Transform642.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
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
Coordinate647.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet646.coord = Coordinate647;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA648 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

let Shape649 = browser.currentScene.createNode("Shape");
let LineSet650 = browser.currentScene.createNode("LineSet");
LineSet650.vertexCount = new MFInt32(new int[2]);
let Coordinate651 = browser.currentScene.createNode("Coordinate");
Coordinate651.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet650.coord = Coordinate651;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA652 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA652.USE = "HAnimSegmentLineColorRGBA";
LineSet650.color = ColorRGBA652;

Shape649.geometry = LineSet650;

HAnimSegment641.children[2] = Shape649;

let Shape653 = browser.currentScene.createNode("Shape");
let LineSet654 = browser.currentScene.createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet654.coord = Coordinate655;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA656 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA656;

Shape653.geometry = LineSet654;

HAnimSegment641.children[3] = Shape653;

let Shape657 = browser.currentScene.createNode("Shape");
let LineSet658 = browser.currentScene.createNode("LineSet");
LineSet658.vertexCount = new MFInt32(new int[2]);
let Coordinate659 = browser.currentScene.createNode("Coordinate");
Coordinate659.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet658.coord = Coordinate659;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA660 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA660.USE = "HAnimSegmentLineColorRGBA";
LineSet658.color = ColorRGBA660;

Shape657.geometry = LineSet658;

HAnimSegment641.children[4] = Shape657;

let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet662.coord = Coordinate663;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment641.children[5] = Shape661;

let Shape665 = browser.currentScene.createNode("Shape");
let LineSet666 = browser.currentScene.createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
let Coordinate667 = browser.currentScene.createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet666.coord = Coordinate667;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA668 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA668.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA668;

Shape665.geometry = LineSet666;

HAnimSegment641.children[6] = Shape665;

let Shape669 = browser.currentScene.createNode("Shape");
let LineSet670 = browser.currentScene.createNode("LineSet");
LineSet670.vertexCount = new MFInt32(new int[2]);
let Coordinate671 = browser.currentScene.createNode("Coordinate");
Coordinate671.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet670.coord = Coordinate671;

//from skullbase to temporomandibular vertices 2
let ColorRGBA672 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA672.USE = "HAnimSegmentLineColorRGBA";
LineSet670.color = ColorRGBA672;

Shape669.geometry = LineSet670;

HAnimSegment641.children[7] = Shape669;

let HAnimSite673 = browser.currentScene.createNode("HAnimSite");
HAnimSite673.name = "l_gonion";
HAnimSite673.DEF = "hanim_l_gonion";
HAnimSite673.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor674 = browser.currentScene.createNode("TouchSensor");
TouchSensor674.description = "HAnimSite l_gonion";
HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = TouchSensor674;

let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "HAnimSiteShape";
HAnimSite673.children[1] = Shape675;

HAnimSegment641.children[8] = HAnimSite673;

let HAnimSite676 = browser.currentScene.createNode("HAnimSite");
HAnimSite676.name = "menton";
HAnimSite676.DEF = "hanim_menton";
let TouchSensor677 = browser.currentScene.createNode("TouchSensor");
TouchSensor677.description = "HAnimSite menton";
HAnimSite676.children = new MFNode();

HAnimSite676.children[0] = TouchSensor677;

let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "HAnimSiteShape";
HAnimSite676.children[1] = Shape678;

HAnimSegment641.children[9] = HAnimSite676;

let HAnimSite679 = browser.currentScene.createNode("HAnimSite");
HAnimSite679.name = "r_gonion";
HAnimSite679.DEF = "hanim_r_gonion";
HAnimSite679.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor680 = browser.currentScene.createNode("TouchSensor");
TouchSensor680.description = "HAnimSite r_gonion";
HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = TouchSensor680;

let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimSiteShape";
HAnimSite679.children[1] = Shape681;

HAnimSegment641.children[10] = HAnimSite679;

let HAnimSite682 = browser.currentScene.createNode("HAnimSite");
HAnimSite682.name = "supramenton";
HAnimSite682.DEF = "hanim_supramenton";
HAnimSite682.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor683 = browser.currentScene.createNode("TouchSensor");
TouchSensor683.description = "HAnimSite supramenton";
HAnimSite682.children = new MFNode();

HAnimSite682.children[0] = TouchSensor683;

let Shape684 = browser.currentScene.createNode("Shape");
Shape684.USE = "HAnimSiteShape";
HAnimSite682.children[1] = Shape684;

HAnimSegment641.children[11] = HAnimSite682;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

let HAnimJoint685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint685.name = "l_eyelid_joint";
HAnimJoint685.DEF = "hanim_l_eyelid_joint";
HAnimJoint685.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint685.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint685.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[1] = HAnimJoint685;

let HAnimJoint686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint686.name = "r_eyelid_joint";
HAnimJoint686.DEF = "hanim_r_eyelid_joint";
HAnimJoint686.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint686.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint686.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[2] = HAnimJoint686;

let HAnimJoint687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint687.name = "l_eyeball_joint";
HAnimJoint687.DEF = "hanim_l_eyeball_joint";
HAnimJoint687.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[3] = HAnimJoint687;

let HAnimJoint688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint688.name = "r_eyeball_joint";
HAnimJoint688.DEF = "hanim_r_eyeball_joint";
HAnimJoint688.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint688.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint688.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[4] = HAnimJoint688;

let HAnimJoint689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint689.name = "l_eyebrow_joint";
HAnimJoint689.DEF = "hanim_l_eyebrow_joint";
HAnimJoint689.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint689.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint689.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[5] = HAnimJoint689;

let HAnimJoint690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint690.name = "r_eyebrow_joint";
HAnimJoint690.DEF = "hanim_r_eyebrow_joint";
HAnimJoint690.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint690.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint690.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[6] = HAnimJoint690;

let HAnimJoint691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint691.name = "temporomandibular";
HAnimJoint691.DEF = "hanim_temporomandibular";
HAnimJoint691.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint691.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint691.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[7] = HAnimJoint691;

HAnimJoint598.children[1] = HAnimJoint640;

HAnimJoint589.children[1] = HAnimJoint598;

HAnimJoint577.children[1] = HAnimJoint589;

HAnimJoint568.children[1] = HAnimJoint577;

HAnimJoint559.children[1] = HAnimJoint568;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint541.children[1] = HAnimJoint550;

HAnimJoint488.children[1] = HAnimJoint541;

let HAnimJoint692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint692.name = "l_sternoclavicular";
HAnimJoint692.DEF = "hanim_l_sternoclavicular";
HAnimJoint692.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint692.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint692.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment693.name = "l_clavicle";
HAnimSegment693.DEF = "hanim_l_clavicle";
let Transform694 = browser.currentScene.createNode("Transform");
Transform694.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform695 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "HAnimJointShape";
Transform695.child = new undefined();

Transform695.child[0] = Shape696;

Transform694.children = new MFNode();

Transform694.children[0] = Transform695;

HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = Transform694;

let Shape697 = browser.currentScene.createNode("Shape");
let LineSet698 = browser.currentScene.createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet698.coord = Coordinate699;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA700 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

let HAnimJoint701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint701.name = "l_acromioclavicular";
HAnimJoint701.DEF = "hanim_l_acromioclavicular";
HAnimJoint701.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment702.name = "l_scapula";
HAnimSegment702.DEF = "hanim_l_scapula";
let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform704 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape705 = browser.currentScene.createNode("Shape");
Shape705.USE = "HAnimJointShape";
Transform704.child = new undefined();

Transform704.child[0] = Shape705;

Transform703.children = new MFNode();

Transform703.children[0] = Transform704;

HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = Transform703;

let Shape706 = browser.currentScene.createNode("Shape");
let LineSet707 = browser.currentScene.createNode("LineSet");
LineSet707.vertexCount = new MFInt32(new int[2]);
let Coordinate708 = browser.currentScene.createNode("Coordinate");
Coordinate708.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet707.coord = Coordinate708;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA709 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[1] = Shape706;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.name = "l_bideltoid";
HAnimSite710.DEF = "hanim_l_bideltoid";
let TouchSensor711 = browser.currentScene.createNode("TouchSensor");
TouchSensor711.description = "HAnimSite l_bideltoid";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment702.children[2] = HAnimSite710;

let HAnimSite713 = browser.currentScene.createNode("HAnimSite");
HAnimSite713.name = "l_humeral_lateral_epicondyles";
HAnimSite713.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite713.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor714 = browser.currentScene.createNode("TouchSensor");
TouchSensor714.description = "HAnimSite l_humeral_lateral_epicondyles";
HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = TouchSensor714;

let Shape715 = browser.currentScene.createNode("Shape");
Shape715.USE = "HAnimSiteShape";
HAnimSite713.children[1] = Shape715;

HAnimSegment702.children[3] = HAnimSite713;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

let HAnimJoint716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint716.name = "l_shoulder";
HAnimJoint716.DEF = "hanim_l_shoulder";
HAnimJoint716.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint716.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint716.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment717.name = "l_upperarm";
HAnimSegment717.DEF = "hanim_l_upperarm";
let Transform718 = browser.currentScene.createNode("Transform");
Transform718.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform719 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape720 = browser.currentScene.createNode("Shape");
Shape720.USE = "HAnimJointShape";
Transform719.child = new undefined();

Transform719.child[0] = Shape720;

Transform718.children = new MFNode();

Transform718.children[0] = Transform719;

HAnimSegment717.children = new MFNode();

HAnimSegment717.children[0] = Transform718;

let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet722.coord = Coordinate723;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA724 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment717.children[1] = Shape721;

let HAnimSite725 = browser.currentScene.createNode("HAnimSite");
HAnimSite725.name = "l_humeral_medial_epicondyles";
HAnimSite725.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite725.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor726 = browser.currentScene.createNode("TouchSensor");
TouchSensor726.description = "HAnimSite l_humeral_medial_epicondyles";
HAnimSite725.children = new MFNode();

HAnimSite725.children[0] = TouchSensor726;

let Shape727 = browser.currentScene.createNode("Shape");
Shape727.USE = "HAnimSiteShape";
HAnimSite725.children[1] = Shape727;

HAnimSegment717.children[2] = HAnimSite725;

let HAnimSite728 = browser.currentScene.createNode("HAnimSite");
HAnimSite728.name = "l_olecranon";
HAnimSite728.DEF = "hanim_l_olecranon";
HAnimSite728.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor729 = browser.currentScene.createNode("TouchSensor");
TouchSensor729.description = "HAnimSite l_olecranon";
HAnimSite728.children = new MFNode();

HAnimSite728.children[0] = TouchSensor729;

let Shape730 = browser.currentScene.createNode("Shape");
Shape730.USE = "HAnimSiteShape";
HAnimSite728.children[1] = Shape730;

HAnimSegment717.children[3] = HAnimSite728;

let HAnimSite731 = browser.currentScene.createNode("HAnimSite");
HAnimSite731.name = "l_radial_styloid";
HAnimSite731.DEF = "hanim_l_radial_styloid";
HAnimSite731.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor732 = browser.currentScene.createNode("TouchSensor");
TouchSensor732.description = "HAnimSite l_radial_styloid";
HAnimSite731.children = new MFNode();

HAnimSite731.children[0] = TouchSensor732;

let Shape733 = browser.currentScene.createNode("Shape");
Shape733.USE = "HAnimSiteShape";
HAnimSite731.children[1] = Shape733;

HAnimSegment717.children[4] = HAnimSite731;

let HAnimSite734 = browser.currentScene.createNode("HAnimSite");
HAnimSite734.name = "l_radiale";
HAnimSite734.DEF = "hanim_l_radiale";
HAnimSite734.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor735 = browser.currentScene.createNode("TouchSensor");
TouchSensor735.description = "HAnimSite l_radiale";
HAnimSite734.children = new MFNode();

HAnimSite734.children[0] = TouchSensor735;

let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "HAnimSiteShape";
HAnimSite734.children[1] = Shape736;

HAnimSegment717.children[5] = HAnimSite734;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

let HAnimJoint737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint737.name = "l_elbow";
HAnimJoint737.DEF = "hanim_l_elbow";
HAnimJoint737.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint737.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint737.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment738.name = "l_forearm";
HAnimSegment738.DEF = "hanim_l_forearm";
let Transform739 = browser.currentScene.createNode("Transform");
Transform739.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform740 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape741 = browser.currentScene.createNode("Shape");
Shape741.USE = "HAnimJointShape";
Transform740.child = new undefined();

Transform740.child[0] = Shape741;

Transform739.children = new MFNode();

Transform739.children[0] = Transform740;

HAnimSegment738.children = new MFNode();

HAnimSegment738.children[0] = Transform739;

let Shape742 = browser.currentScene.createNode("Shape");
let LineSet743 = browser.currentScene.createNode("LineSet");
LineSet743.vertexCount = new MFInt32(new int[2]);
let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet743.coord = Coordinate744;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA745 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA";
LineSet743.color = ColorRGBA745;

Shape742.geometry = LineSet743;

HAnimSegment738.children[1] = Shape742;

let HAnimSite746 = browser.currentScene.createNode("HAnimSite");
HAnimSite746.name = "l_ulnar_styloid";
HAnimSite746.DEF = "hanim_l_ulnar_styloid";
HAnimSite746.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor747 = browser.currentScene.createNode("TouchSensor");
TouchSensor747.description = "HAnimSite l_ulnar_styloid";
HAnimSite746.children = new MFNode();

HAnimSite746.children[0] = TouchSensor747;

let Shape748 = browser.currentScene.createNode("Shape");
Shape748.USE = "HAnimSiteShape";
HAnimSite746.children[1] = Shape748;

HAnimSegment738.children[2] = HAnimSite746;

HAnimJoint737.children = new MFNode();

HAnimJoint737.children[0] = HAnimSegment738;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.name = "l_radiocarpal";
HAnimJoint749.DEF = "hanim_l_radiocarpal";
HAnimJoint749.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment750.name = "l_carpal";
HAnimSegment750.DEF = "hanim_l_carpal";
let Transform751 = browser.currentScene.createNode("Transform");
Transform751.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform751.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform751.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform752 = browser.currentScene.createNode("Transform");
Transform752.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
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
Coordinate756.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet755.coord = Coordinate756;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

let Shape758 = browser.currentScene.createNode("Shape");
let LineSet759 = browser.currentScene.createNode("LineSet");
LineSet759.vertexCount = new MFInt32(new int[2]);
let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet759.coord = Coordinate760;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
let ColorRGBA761 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSegmentLineColorRGBA";
LineSet759.color = ColorRGBA761;

Shape758.geometry = LineSet759;

HAnimSegment750.children[2] = Shape758;

let HAnimSite762 = browser.currentScene.createNode("HAnimSite");
HAnimSite762.name = "l_metacarpal_phalanx_2";
HAnimSite762.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite762.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor763 = browser.currentScene.createNode("TouchSensor");
TouchSensor763.description = "HAnimSite l_metacarpal_phalanx_2";
HAnimSite762.children = new MFNode();

HAnimSite762.children[0] = TouchSensor763;

let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "HAnimSiteShape";
HAnimSite762.children[1] = Shape764;

HAnimSegment750.children[3] = HAnimSite762;

let Shape765 = browser.currentScene.createNode("Shape");
let LineSet766 = browser.currentScene.createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
let Coordinate767 = browser.currentScene.createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet766.coord = Coordinate767;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
let ColorRGBA768 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSegmentLineColorRGBA";
LineSet766.color = ColorRGBA768;

Shape765.geometry = LineSet766;

HAnimSegment750.children[4] = Shape765;

let HAnimSite769 = browser.currentScene.createNode("HAnimSite");
HAnimSite769.name = "l_metacarpal_phalanx_3";
HAnimSite769.DEF = "hanim_l_metacarpal_phalanx_3";
let TouchSensor770 = browser.currentScene.createNode("TouchSensor");
TouchSensor770.description = "HAnimSite l_metacarpal_phalanx_3";
HAnimSite769.children = new MFNode();

HAnimSite769.children[0] = TouchSensor770;

let Shape771 = browser.currentScene.createNode("Shape");
Shape771.USE = "HAnimSiteShape";
HAnimSite769.children[1] = Shape771;

HAnimSegment750.children[5] = HAnimSite769;

let Shape772 = browser.currentScene.createNode("Shape");
let LineSet773 = browser.currentScene.createNode("LineSet");
LineSet773.vertexCount = new MFInt32(new int[2]);
let Coordinate774 = browser.currentScene.createNode("Coordinate");
Coordinate774.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet773.coord = Coordinate774;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
let ColorRGBA775 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSegmentLineColorRGBA";
LineSet773.color = ColorRGBA775;

Shape772.geometry = LineSet773;

HAnimSegment750.children[6] = Shape772;

let Shape776 = browser.currentScene.createNode("Shape");
let LineSet777 = browser.currentScene.createNode("LineSet");
LineSet777.vertexCount = new MFInt32(new int[2]);
let Coordinate778 = browser.currentScene.createNode("Coordinate");
Coordinate778.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet777.coord = Coordinate778;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
let ColorRGBA779 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA779.USE = "HAnimSegmentLineColorRGBA";
LineSet777.color = ColorRGBA779;

Shape776.geometry = LineSet777;

HAnimSegment750.children[7] = Shape776;

let HAnimSite780 = browser.currentScene.createNode("HAnimSite");
HAnimSite780.name = "l_metacarpal_phalanx_5";
HAnimSite780.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite780.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor781 = browser.currentScene.createNode("TouchSensor");
TouchSensor781.description = "HAnimSite l_metacarpal_phalanx_5";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment750.children[8] = HAnimSite780;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

let HAnimJoint783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint783.name = "l_carpometacarpal_1";
HAnimJoint783.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint783.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint783.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint783.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment784.name = "l_metacarpal_1";
HAnimSegment784.DEF = "hanim_l_metacarpal_1";
let Transform785 = browser.currentScene.createNode("Transform");
Transform785.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform786 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "HAnimJointShape";
Transform786.child = new undefined();

Transform786.child[0] = Shape787;

Transform785.children = new MFNode();

Transform785.children[0] = Transform786;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Transform785;

let Shape788 = browser.currentScene.createNode("Shape");
let LineSet789 = browser.currentScene.createNode("LineSet");
LineSet789.vertexCount = new MFInt32(new int[2]);
let Coordinate790 = browser.currentScene.createNode("Coordinate");
Coordinate790.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet789.coord = Coordinate790;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA791 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA791.USE = "HAnimSegmentLineColorRGBA";
LineSet789.color = ColorRGBA791;

Shape788.geometry = LineSet789;

HAnimSegment784.children[1] = Shape788;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

let HAnimJoint792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint792.name = "l_metacarpophalangeal_1";
HAnimJoint792.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint792.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment793.name = "l_carpal_proximal_phalanx_1";
HAnimSegment793.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform794 = browser.currentScene.createNode("Transform");
Transform794.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform795 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "HAnimJointShape";
Transform795.child = new undefined();

Transform795.child[0] = Shape796;

Transform794.children = new MFNode();

Transform794.children[0] = Transform795;

HAnimSegment793.children = new MFNode();

HAnimSegment793.children[0] = Transform794;

let Shape797 = browser.currentScene.createNode("Shape");
let LineSet798 = browser.currentScene.createNode("LineSet");
LineSet798.vertexCount = new MFInt32(new int[2]);
let Coordinate799 = browser.currentScene.createNode("Coordinate");
Coordinate799.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet798.coord = Coordinate799;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA800 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA";
LineSet798.color = ColorRGBA800;

Shape797.geometry = LineSet798;

HAnimSegment793.children[1] = Shape797;

let HAnimSite801 = browser.currentScene.createNode("HAnimSite");
HAnimSite801.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite801.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor802 = browser.currentScene.createNode("TouchSensor");
TouchSensor802.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = TouchSensor802;

let Shape803 = browser.currentScene.createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801.children[1] = Shape803;

HAnimSegment793.children[2] = HAnimSite801;

HAnimJoint792.children = new MFNode();

HAnimJoint792.children[0] = HAnimSegment793;

let HAnimJoint804 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint804.name = "l_carpal_interphalangeal_1";
HAnimJoint804.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint804.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint804.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint804.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.children[1] = HAnimJoint804;

HAnimJoint783.children[1] = HAnimJoint792;

HAnimJoint749.children[1] = HAnimJoint783;

let HAnimJoint805 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint805.name = "l_carpometacarpal_2";
HAnimJoint805.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint805.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint805.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint805.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment806.name = "l_metacarpal_2";
HAnimSegment806.DEF = "hanim_l_metacarpal_2";
let Transform807 = browser.currentScene.createNode("Transform");
Transform807.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform808 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape809 = browser.currentScene.createNode("Shape");
Shape809.USE = "HAnimJointShape";
Transform808.child = new undefined();

Transform808.child[0] = Shape809;

Transform807.children = new MFNode();

Transform807.children[0] = Transform808;

HAnimSegment806.children = new MFNode();

HAnimSegment806.children[0] = Transform807;

let Shape810 = browser.currentScene.createNode("Shape");
let LineSet811 = browser.currentScene.createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[2]);
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet811.coord = Coordinate812;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA813 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA";
LineSet811.color = ColorRGBA813;

Shape810.geometry = LineSet811;

HAnimSegment806.children[1] = Shape810;

HAnimJoint805.children = new MFNode();

HAnimJoint805.children[0] = HAnimSegment806;

let HAnimJoint814 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint814.name = "l_metacarpophalangeal_2";
HAnimJoint814.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint814.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint814.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint814.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment815.name = "l_carpal_proximal_phalanx_2";
HAnimSegment815.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform816 = browser.currentScene.createNode("Transform");
Transform816.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform817 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape818 = browser.currentScene.createNode("Shape");
Shape818.USE = "HAnimJointShape";
Transform817.child = new undefined();

Transform817.child[0] = Shape818;

Transform816.children = new MFNode();

Transform816.children[0] = Transform817;

HAnimSegment815.children = new MFNode();

HAnimSegment815.children[0] = Transform816;

let Shape819 = browser.currentScene.createNode("Shape");
let LineSet820 = browser.currentScene.createNode("LineSet");
LineSet820.vertexCount = new MFInt32(new int[2]);
let Coordinate821 = browser.currentScene.createNode("Coordinate");
Coordinate821.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet820.coord = Coordinate821;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA822 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA822.USE = "HAnimSegmentLineColorRGBA";
LineSet820.color = ColorRGBA822;

Shape819.geometry = LineSet820;

HAnimSegment815.children[1] = Shape819;

HAnimJoint814.children = new MFNode();

HAnimJoint814.children[0] = HAnimSegment815;

let HAnimJoint823 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint823.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint823.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint823.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint823.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment824.name = "l_carpal_middle_phalanx_2";
HAnimSegment824.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform825 = browser.currentScene.createNode("Transform");
Transform825.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform826 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape827 = browser.currentScene.createNode("Shape");
Shape827.USE = "HAnimJointShape";
Transform826.child = new undefined();

Transform826.child[0] = Shape827;

Transform825.children = new MFNode();

Transform825.children[0] = Transform826;

HAnimSegment824.children = new MFNode();

HAnimSegment824.children[0] = Transform825;

let Shape828 = browser.currentScene.createNode("Shape");
let LineSet829 = browser.currentScene.createNode("LineSet");
LineSet829.vertexCount = new MFInt32(new int[2]);
let Coordinate830 = browser.currentScene.createNode("Coordinate");
Coordinate830.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet829.coord = Coordinate830;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA831 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA831.USE = "HAnimSegmentLineColorRGBA";
LineSet829.color = ColorRGBA831;

Shape828.geometry = LineSet829;

HAnimSegment824.children[1] = Shape828;

let HAnimSite832 = browser.currentScene.createNode("HAnimSite");
HAnimSite832.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite832.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor833 = browser.currentScene.createNode("TouchSensor");
TouchSensor833.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite832.children = new MFNode();

HAnimSite832.children[0] = TouchSensor833;

let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimSiteShape";
HAnimSite832.children[1] = Shape834;

HAnimSegment824.children[2] = HAnimSite832;

let HAnimSite835 = browser.currentScene.createNode("HAnimSite");
HAnimSite835.name = "l_dactylion";
HAnimSite835.DEF = "hanim_l_dactylion";
HAnimSite835.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor836 = browser.currentScene.createNode("TouchSensor");
TouchSensor836.description = "HAnimSite l_dactylion";
HAnimSite835.children = new MFNode();

HAnimSite835.children[0] = TouchSensor836;

let Shape837 = browser.currentScene.createNode("Shape");
Shape837.USE = "HAnimSiteShape";
HAnimSite835.children[1] = Shape837;

HAnimSegment824.children[3] = HAnimSite835;

HAnimJoint823.children = new MFNode();

HAnimJoint823.children[0] = HAnimSegment824;

let HAnimJoint838 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint838.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint838.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint838.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint838.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint838.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.children[1] = HAnimJoint838;

HAnimJoint814.children[1] = HAnimJoint823;

HAnimJoint805.children[1] = HAnimJoint814;

HAnimJoint749.children[2] = HAnimJoint805;

let HAnimJoint839 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint839.name = "l_carpometacarpal_3";
HAnimJoint839.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint839.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment840.name = "l_metacarpal_3";
HAnimSegment840.DEF = "hanim_l_metacarpal_3";
let Transform841 = browser.currentScene.createNode("Transform");
Transform841.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform842 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape843 = browser.currentScene.createNode("Shape");
Shape843.USE = "HAnimJointShape";
Transform842.child = new undefined();

Transform842.child[0] = Shape843;

Transform841.children = new MFNode();

Transform841.children[0] = Transform842;

HAnimSegment840.children = new MFNode();

HAnimSegment840.children[0] = Transform841;

let Shape844 = browser.currentScene.createNode("Shape");
let LineSet845 = browser.currentScene.createNode("LineSet");
LineSet845.vertexCount = new MFInt32(new int[2]);
let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet845.coord = Coordinate846;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA847 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSegmentLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment840.children[1] = Shape844;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

let HAnimJoint848 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint848.name = "l_metacarpophalangeal_3";
HAnimJoint848.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint848.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint848.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint848.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment849.name = "l_carpal_proximal_phalanx_3";
HAnimSegment849.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform850 = browser.currentScene.createNode("Transform");
Transform850.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform851 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape852 = browser.currentScene.createNode("Shape");
Shape852.USE = "HAnimJointShape";
Transform851.child = new undefined();

Transform851.child[0] = Shape852;

Transform850.children = new MFNode();

Transform850.children[0] = Transform851;

HAnimSegment849.children = new MFNode();

HAnimSegment849.children[0] = Transform850;

let Shape853 = browser.currentScene.createNode("Shape");
let LineSet854 = browser.currentScene.createNode("LineSet");
LineSet854.vertexCount = new MFInt32(new int[2]);
let Coordinate855 = browser.currentScene.createNode("Coordinate");
Coordinate855.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet854.coord = Coordinate855;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA856 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA856.USE = "HAnimSegmentLineColorRGBA";
LineSet854.color = ColorRGBA856;

Shape853.geometry = LineSet854;

HAnimSegment849.children[1] = Shape853;

HAnimJoint848.children = new MFNode();

HAnimJoint848.children[0] = HAnimSegment849;

let HAnimJoint857 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint857.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint857.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint857.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint857.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint857.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment858.name = "l_carpal_middle_phalanx_3";
HAnimSegment858.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform859 = browser.currentScene.createNode("Transform");
Transform859.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform860 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape861 = browser.currentScene.createNode("Shape");
Shape861.USE = "HAnimJointShape";
Transform860.child = new undefined();

Transform860.child[0] = Shape861;

Transform859.children = new MFNode();

Transform859.children[0] = Transform860;

HAnimSegment858.children = new MFNode();

HAnimSegment858.children[0] = Transform859;

let Shape862 = browser.currentScene.createNode("Shape");
let LineSet863 = browser.currentScene.createNode("LineSet");
LineSet863.vertexCount = new MFInt32(new int[2]);
let Coordinate864 = browser.currentScene.createNode("Coordinate");
Coordinate864.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet863.coord = Coordinate864;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA865 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA865.USE = "HAnimSegmentLineColorRGBA";
LineSet863.color = ColorRGBA865;

Shape862.geometry = LineSet863;

HAnimSegment858.children[1] = Shape862;

let HAnimSite866 = browser.currentScene.createNode("HAnimSite");
HAnimSite866.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite866.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor867 = browser.currentScene.createNode("TouchSensor");
TouchSensor867.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite866.children = new MFNode();

HAnimSite866.children[0] = TouchSensor867;

let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimSiteShape";
HAnimSite866.children[1] = Shape868;

HAnimSegment858.children[2] = HAnimSite866;

HAnimJoint857.children = new MFNode();

HAnimJoint857.children[0] = HAnimSegment858;

let HAnimJoint869 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint869.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint869.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint869.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint869.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint869.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint857.children[1] = HAnimJoint869;

HAnimJoint848.children[1] = HAnimJoint857;

HAnimJoint839.children[1] = HAnimJoint848;

HAnimJoint749.children[3] = HAnimJoint839;

let HAnimJoint870 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint870.name = "l_carpometacarpal_4";
HAnimJoint870.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint870.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint870.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint870.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment871.name = "l_metacarpal_4";
HAnimSegment871.DEF = "hanim_l_metacarpal_4";
let Transform872 = browser.currentScene.createNode("Transform");
Transform872.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform873 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape874 = browser.currentScene.createNode("Shape");
Shape874.USE = "HAnimJointShape";
Transform873.child = new undefined();

Transform873.child[0] = Shape874;

Transform872.children = new MFNode();

Transform872.children[0] = Transform873;

HAnimSegment871.children = new MFNode();

HAnimSegment871.children[0] = Transform872;

let Shape875 = browser.currentScene.createNode("Shape");
let LineSet876 = browser.currentScene.createNode("LineSet");
LineSet876.vertexCount = new MFInt32(new int[2]);
let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet876.coord = Coordinate877;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA878 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA878.USE = "HAnimSegmentLineColorRGBA";
LineSet876.color = ColorRGBA878;

Shape875.geometry = LineSet876;

HAnimSegment871.children[1] = Shape875;

HAnimJoint870.children = new MFNode();

HAnimJoint870.children[0] = HAnimSegment871;

let HAnimJoint879 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint879.name = "l_metacarpophalangeal_4";
HAnimJoint879.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint879.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint879.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint879.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment880 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment880.name = "l_carpal_proximal_phalanx_4";
HAnimSegment880.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform881 = browser.currentScene.createNode("Transform");
Transform881.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform882 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimJointShape";
Transform882.child = new undefined();

Transform882.child[0] = Shape883;

Transform881.children = new MFNode();

Transform881.children[0] = Transform882;

HAnimSegment880.children = new MFNode();

HAnimSegment880.children[0] = Transform881;

let Shape884 = browser.currentScene.createNode("Shape");
let LineSet885 = browser.currentScene.createNode("LineSet");
LineSet885.vertexCount = new MFInt32(new int[2]);
let Coordinate886 = browser.currentScene.createNode("Coordinate");
Coordinate886.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet885.coord = Coordinate886;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA887 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA887.USE = "HAnimSegmentLineColorRGBA";
LineSet885.color = ColorRGBA887;

Shape884.geometry = LineSet885;

HAnimSegment880.children[1] = Shape884;

HAnimJoint879.children = new MFNode();

HAnimJoint879.children[0] = HAnimSegment880;

let HAnimJoint888 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint888.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint888.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint888.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint888.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint888.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment889 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment889.name = "l_carpal_middle_phalanx_4";
HAnimSegment889.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform890 = browser.currentScene.createNode("Transform");
Transform890.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform891 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimJointShape";
Transform891.child = new undefined();

Transform891.child[0] = Shape892;

Transform890.children = new MFNode();

Transform890.children[0] = Transform891;

HAnimSegment889.children = new MFNode();

HAnimSegment889.children[0] = Transform890;

let Shape893 = browser.currentScene.createNode("Shape");
let LineSet894 = browser.currentScene.createNode("LineSet");
LineSet894.vertexCount = new MFInt32(new int[2]);
let Coordinate895 = browser.currentScene.createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet894.coord = Coordinate895;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA896 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA896.USE = "HAnimSegmentLineColorRGBA";
LineSet894.color = ColorRGBA896;

Shape893.geometry = LineSet894;

HAnimSegment889.children[1] = Shape893;

let HAnimSite897 = browser.currentScene.createNode("HAnimSite");
HAnimSite897.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite897.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor898 = browser.currentScene.createNode("TouchSensor");
TouchSensor898.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite897.children = new MFNode();

HAnimSite897.children[0] = TouchSensor898;

let Shape899 = browser.currentScene.createNode("Shape");
Shape899.USE = "HAnimSiteShape";
HAnimSite897.children[1] = Shape899;

HAnimSegment889.children[2] = HAnimSite897;

HAnimJoint888.children = new MFNode();

HAnimJoint888.children[0] = HAnimSegment889;

let HAnimJoint900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint900.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint900.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint900.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint900.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint888.children[1] = HAnimJoint900;

HAnimJoint879.children[1] = HAnimJoint888;

HAnimJoint870.children[1] = HAnimJoint879;

HAnimJoint749.children[4] = HAnimJoint870;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.name = "l_carpometacarpal_5";
HAnimJoint901.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint901.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint901.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint901.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment902 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment902.name = "l_metacarpal_5";
HAnimSegment902.DEF = "hanim_l_metacarpal_5";
let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
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
Coordinate908.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet907.coord = Coordinate908;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA909 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment902.children[1] = Shape906;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

let HAnimJoint910 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint910.name = "l_metacarpophalangeal_5";
HAnimJoint910.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint910.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint910.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint910.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment911 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment911.name = "l_carpal_proximal_phalanx_5";
HAnimSegment911.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform912 = browser.currentScene.createNode("Transform");
Transform912.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
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
Coordinate917.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet916.coord = Coordinate917;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA918 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet916.color = ColorRGBA918;

Shape915.geometry = LineSet916;

HAnimSegment911.children[1] = Shape915;

HAnimJoint910.children = new MFNode();

HAnimJoint910.children[0] = HAnimSegment911;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint919.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint919.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint919.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment920 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment920.name = "l_carpal_middle_phalanx_5";
HAnimSegment920.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform921 = browser.currentScene.createNode("Transform");
Transform921.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform922 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape923 = browser.currentScene.createNode("Shape");
Shape923.USE = "HAnimJointShape";
Transform922.child = new undefined();

Transform922.child[0] = Shape923;

Transform921.children = new MFNode();

Transform921.children[0] = Transform922;

HAnimSegment920.children = new MFNode();

HAnimSegment920.children[0] = Transform921;

let Shape924 = browser.currentScene.createNode("Shape");
let LineSet925 = browser.currentScene.createNode("LineSet");
LineSet925.vertexCount = new MFInt32(new int[2]);
let Coordinate926 = browser.currentScene.createNode("Coordinate");
Coordinate926.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet925.coord = Coordinate926;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA927 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA927.USE = "HAnimSegmentLineColorRGBA";
LineSet925.color = ColorRGBA927;

Shape924.geometry = LineSet925;

HAnimSegment920.children[1] = Shape924;

let HAnimSite928 = browser.currentScene.createNode("HAnimSite");
HAnimSite928.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite928.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor929 = browser.currentScene.createNode("TouchSensor");
TouchSensor929.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite928.children = new MFNode();

HAnimSite928.children[0] = TouchSensor929;

let Shape930 = browser.currentScene.createNode("Shape");
Shape930.USE = "HAnimSiteShape";
HAnimSite928.children[1] = Shape930;

HAnimSegment920.children[2] = HAnimSite928;

HAnimJoint919.children = new MFNode();

HAnimJoint919.children[0] = HAnimSegment920;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint931.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint931.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.children[1] = HAnimJoint931;

HAnimJoint910.children[1] = HAnimJoint919;

HAnimJoint901.children[1] = HAnimJoint910;

HAnimJoint749.children[5] = HAnimJoint901;

HAnimJoint737.children[1] = HAnimJoint749;

HAnimJoint716.children[1] = HAnimJoint737;

HAnimJoint701.children[1] = HAnimJoint716;

HAnimJoint692.children[1] = HAnimJoint701;

HAnimJoint488.children[2] = HAnimJoint692;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.name = "r_sternoclavicular";
HAnimJoint932.DEF = "hanim_r_sternoclavicular";
HAnimJoint932.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.name = "r_clavicle";
HAnimSegment933.DEF = "hanim_r_clavicle";
let Transform934 = browser.currentScene.createNode("Transform");
Transform934.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform935 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape936 = browser.currentScene.createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

Transform934.children = new MFNode();

Transform934.children[0] = Transform935;

HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = Transform934;

let Shape937 = browser.currentScene.createNode("Shape");
let LineSet938 = browser.currentScene.createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet938.coord = Coordinate939;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA940 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.name = "r_acromioclavicular";
HAnimJoint941.DEF = "hanim_r_acromioclavicular";
HAnimJoint941.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment942 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment942.name = "r_scapula";
HAnimSegment942.DEF = "hanim_r_scapula";
let Transform943 = browser.currentScene.createNode("Transform");
Transform943.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform944 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "HAnimJointShape";
Transform944.child = new undefined();

Transform944.child[0] = Shape945;

Transform943.children = new MFNode();

Transform943.children[0] = Transform944;

HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = Transform943;

let Shape946 = browser.currentScene.createNode("Shape");
let LineSet947 = browser.currentScene.createNode("LineSet");
LineSet947.vertexCount = new MFInt32(new int[2]);
let Coordinate948 = browser.currentScene.createNode("Coordinate");
Coordinate948.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet947.coord = Coordinate948;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA949 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[1] = Shape946;

let HAnimSite950 = browser.currentScene.createNode("HAnimSite");
HAnimSite950.name = "r_bideltoid";
HAnimSite950.DEF = "hanim_r_bideltoid";
let TouchSensor951 = browser.currentScene.createNode("TouchSensor");
TouchSensor951.description = "HAnimSite r_bideltoid";
HAnimSite950.children = new MFNode();

HAnimSite950.children[0] = TouchSensor951;

let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "HAnimSiteShape";
HAnimSite950.children[1] = Shape952;

HAnimSegment942.children[2] = HAnimSite950;

let HAnimSite953 = browser.currentScene.createNode("HAnimSite");
HAnimSite953.name = "r_humeral_lateral_epicondyles";
HAnimSite953.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite953.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor954 = browser.currentScene.createNode("TouchSensor");
TouchSensor954.description = "HAnimSite r_humeral_lateral_epicondyles";
HAnimSite953.children = new MFNode();

HAnimSite953.children[0] = TouchSensor954;

let Shape955 = browser.currentScene.createNode("Shape");
Shape955.USE = "HAnimSiteShape";
HAnimSite953.children[1] = Shape955;

HAnimSegment942.children[3] = HAnimSite953;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

let HAnimJoint956 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint956.name = "r_shoulder";
HAnimJoint956.DEF = "hanim_r_shoulder";
HAnimJoint956.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint956.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint956.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment957 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment957.name = "r_upperarm";
HAnimSegment957.DEF = "hanim_r_upperarm";
let Transform958 = browser.currentScene.createNode("Transform");
Transform958.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform959 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape960 = browser.currentScene.createNode("Shape");
Shape960.USE = "HAnimJointShape";
Transform959.child = new undefined();

Transform959.child[0] = Shape960;

Transform958.children = new MFNode();

Transform958.children[0] = Transform959;

HAnimSegment957.children = new MFNode();

HAnimSegment957.children[0] = Transform958;

let Shape961 = browser.currentScene.createNode("Shape");
let LineSet962 = browser.currentScene.createNode("LineSet");
LineSet962.vertexCount = new MFInt32(new int[2]);
let Coordinate963 = browser.currentScene.createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet962.coord = Coordinate963;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA964 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA964.USE = "HAnimSegmentLineColorRGBA";
LineSet962.color = ColorRGBA964;

Shape961.geometry = LineSet962;

HAnimSegment957.children[1] = Shape961;

let HAnimSite965 = browser.currentScene.createNode("HAnimSite");
HAnimSite965.name = "r_humeral_medial_epicondyles";
HAnimSite965.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite965.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor966 = browser.currentScene.createNode("TouchSensor");
TouchSensor966.description = "HAnimSite r_humeral_medial_epicondyles";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

let Shape967 = browser.currentScene.createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimSegment957.children[2] = HAnimSite965;

let HAnimSite968 = browser.currentScene.createNode("HAnimSite");
HAnimSite968.name = "r_olecranon";
HAnimSite968.DEF = "hanim_r_olecranon";
HAnimSite968.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor969 = browser.currentScene.createNode("TouchSensor");
TouchSensor969.description = "HAnimSite r_olecranon";
HAnimSite968.children = new MFNode();

HAnimSite968.children[0] = TouchSensor969;

let Shape970 = browser.currentScene.createNode("Shape");
Shape970.USE = "HAnimSiteShape";
HAnimSite968.children[1] = Shape970;

HAnimSegment957.children[3] = HAnimSite968;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.name = "r_radial_styloid";
HAnimSite971.DEF = "hanim_r_radial_styloid";
HAnimSite971.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor972 = browser.currentScene.createNode("TouchSensor");
TouchSensor972.description = "HAnimSite r_radial_styloid";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

let Shape973 = browser.currentScene.createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment957.children[4] = HAnimSite971;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.name = "r_radiale";
HAnimSite974.DEF = "hanim_r_radiale";
HAnimSite974.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor975 = browser.currentScene.createNode("TouchSensor");
TouchSensor975.description = "HAnimSite r_radiale";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment957.children[5] = HAnimSite974;

HAnimJoint956.children = new MFNode();

HAnimJoint956.children[0] = HAnimSegment957;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.name = "r_elbow";
HAnimJoint977.DEF = "hanim_r_elbow";
HAnimJoint977.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint977.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint977.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.name = "r_forearm";
HAnimSegment978.DEF = "hanim_r_forearm";
let Transform979 = browser.currentScene.createNode("Transform");
Transform979.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform980 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimJointShape";
Transform980.child = new undefined();

Transform980.child[0] = Shape981;

Transform979.children = new MFNode();

Transform979.children[0] = Transform980;

HAnimSegment978.children = new MFNode();

HAnimSegment978.children[0] = Transform979;

let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
let Coordinate984 = browser.currentScene.createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet983.coord = Coordinate984;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment978.children[1] = Shape982;

let HAnimSite986 = browser.currentScene.createNode("HAnimSite");
HAnimSite986.name = "r_ulnar_styloid";
HAnimSite986.DEF = "hanim_r_ulnar_styloid";
HAnimSite986.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor987 = browser.currentScene.createNode("TouchSensor");
TouchSensor987.description = "HAnimSite r_ulnar_styloid";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment978.children[2] = HAnimSite986;

HAnimJoint977.children = new MFNode();

HAnimJoint977.children[0] = HAnimSegment978;

let HAnimJoint989 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint989.name = "r_radiocarpal";
HAnimJoint989.DEF = "hanim_r_radiocarpal";
HAnimJoint989.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint989.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint989.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment990 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment990.name = "r_carpal";
HAnimSegment990.DEF = "hanim_r_carpal";
let Transform991 = browser.currentScene.createNode("Transform");
Transform991.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform991.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform991.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform992 = browser.currentScene.createNode("Transform");
Transform992.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape993 = browser.currentScene.createNode("Shape");
Shape993.USE = "HAnimJointShape";
Transform992.child = new undefined();

Transform992.child[0] = Shape993;

Transform991.children = new MFNode();

Transform991.children[0] = Transform992;

HAnimSegment990.children = new MFNode();

HAnimSegment990.children[0] = Transform991;

let Shape994 = browser.currentScene.createNode("Shape");
let LineSet995 = browser.currentScene.createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
let Coordinate996 = browser.currentScene.createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet995.coord = Coordinate996;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
let ColorRGBA997 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimSegment990.children[1] = Shape994;

let Shape998 = browser.currentScene.createNode("Shape");
let LineSet999 = browser.currentScene.createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
let Coordinate1000 = browser.currentScene.createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet999.coord = Coordinate1000;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
let ColorRGBA1001 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1001.USE = "HAnimSegmentLineColorRGBA";
LineSet999.color = ColorRGBA1001;

Shape998.geometry = LineSet999;

HAnimSegment990.children[2] = Shape998;

let HAnimSite1002 = browser.currentScene.createNode("HAnimSite");
HAnimSite1002.name = "r_metacarpal_phalanx_2";
HAnimSite1002.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1002.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1003 = browser.currentScene.createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite r_metacarpal_phalanx_2";
HAnimSite1002.children = new MFNode();

HAnimSite1002.children[0] = TouchSensor1003;

let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "HAnimSiteShape";
HAnimSite1002.children[1] = Shape1004;

HAnimSegment990.children[3] = HAnimSite1002;

let Shape1005 = browser.currentScene.createNode("Shape");
let LineSet1006 = browser.currentScene.createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
let Coordinate1007 = browser.currentScene.createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet1006.coord = Coordinate1007;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
let ColorRGBA1008 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1008;

Shape1005.geometry = LineSet1006;

HAnimSegment990.children[4] = Shape1005;

let HAnimSite1009 = browser.currentScene.createNode("HAnimSite");
HAnimSite1009.name = "r_metacarpal_phalanx_3";
HAnimSite1009.DEF = "hanim_r_metacarpal_phalanx_3";
let TouchSensor1010 = browser.currentScene.createNode("TouchSensor");
TouchSensor1010.description = "HAnimSite r_metacarpal_phalanx_3";
HAnimSite1009.children = new MFNode();

HAnimSite1009.children[0] = TouchSensor1010;

let Shape1011 = browser.currentScene.createNode("Shape");
Shape1011.USE = "HAnimSiteShape";
HAnimSite1009.children[1] = Shape1011;

HAnimSegment990.children[5] = HAnimSite1009;

let Shape1012 = browser.currentScene.createNode("Shape");
let LineSet1013 = browser.currentScene.createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
let Coordinate1014 = browser.currentScene.createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet1013.coord = Coordinate1014;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
let ColorRGBA1015 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1015.USE = "HAnimSegmentLineColorRGBA";
LineSet1013.color = ColorRGBA1015;

Shape1012.geometry = LineSet1013;

HAnimSegment990.children[6] = Shape1012;

let Shape1016 = browser.currentScene.createNode("Shape");
let LineSet1017 = browser.currentScene.createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
let Coordinate1018 = browser.currentScene.createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet1017.coord = Coordinate1018;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
let ColorRGBA1019 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1019.USE = "HAnimSegmentLineColorRGBA";
LineSet1017.color = ColorRGBA1019;

Shape1016.geometry = LineSet1017;

HAnimSegment990.children[7] = Shape1016;

let HAnimSite1020 = browser.currentScene.createNode("HAnimSite");
HAnimSite1020.name = "r_metacarpal_phalanx_5";
HAnimSite1020.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1020.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1021 = browser.currentScene.createNode("TouchSensor");
TouchSensor1021.description = "HAnimSite r_metacarpal_phalanx_5";
HAnimSite1020.children = new MFNode();

HAnimSite1020.children[0] = TouchSensor1021;

let Shape1022 = browser.currentScene.createNode("Shape");
Shape1022.USE = "HAnimSiteShape";
HAnimSite1020.children[1] = Shape1022;

HAnimSegment990.children[8] = HAnimSite1020;

HAnimJoint989.children = new MFNode();

HAnimJoint989.children[0] = HAnimSegment990;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.name = "r_carpometacarpal_1";
HAnimJoint1023.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1023.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1023.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1023.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1024 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1024.name = "r_metacarpal_1";
HAnimSegment1024.DEF = "hanim_r_metacarpal_1";
let Transform1025 = browser.currentScene.createNode("Transform");
Transform1025.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform1026 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "HAnimJointShape";
Transform1026.child = new undefined();

Transform1026.child[0] = Shape1027;

Transform1025.children = new MFNode();

Transform1025.children[0] = Transform1026;

HAnimSegment1024.children = new MFNode();

HAnimSegment1024.children[0] = Transform1025;

let Shape1028 = browser.currentScene.createNode("Shape");
let LineSet1029 = browser.currentScene.createNode("LineSet");
LineSet1029.vertexCount = new MFInt32(new int[2]);
let Coordinate1030 = browser.currentScene.createNode("Coordinate");
Coordinate1030.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1029.coord = Coordinate1030;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1031 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1031.USE = "HAnimSegmentLineColorRGBA";
LineSet1029.color = ColorRGBA1031;

Shape1028.geometry = LineSet1029;

HAnimSegment1024.children[1] = Shape1028;

HAnimJoint1023.children = new MFNode();

HAnimJoint1023.children[0] = HAnimSegment1024;

let HAnimJoint1032 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1032.name = "r_metacarpophalangeal_1";
HAnimJoint1032.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1032.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1032.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1032.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1033 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1033.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1033.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1034 = browser.currentScene.createNode("Transform");
Transform1034.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform1035 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1036 = browser.currentScene.createNode("Shape");
Shape1036.USE = "HAnimJointShape";
Transform1035.child = new undefined();

Transform1035.child[0] = Shape1036;

Transform1034.children = new MFNode();

Transform1034.children[0] = Transform1035;

HAnimSegment1033.children = new MFNode();

HAnimSegment1033.children[0] = Transform1034;

let Shape1037 = browser.currentScene.createNode("Shape");
let LineSet1038 = browser.currentScene.createNode("LineSet");
LineSet1038.vertexCount = new MFInt32(new int[2]);
let Coordinate1039 = browser.currentScene.createNode("Coordinate");
Coordinate1039.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1038.coord = Coordinate1039;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1040 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1040.USE = "HAnimSegmentLineColorRGBA";
LineSet1038.color = ColorRGBA1040;

Shape1037.geometry = LineSet1038;

HAnimSegment1033.children[1] = Shape1037;

let HAnimSite1041 = browser.currentScene.createNode("HAnimSite");
HAnimSite1041.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1041.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor1042 = browser.currentScene.createNode("TouchSensor");
TouchSensor1042.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1041.children = new MFNode();

HAnimSite1041.children[0] = TouchSensor1042;

let Shape1043 = browser.currentScene.createNode("Shape");
Shape1043.USE = "HAnimSiteShape";
HAnimSite1041.children[1] = Shape1043;

HAnimSegment1033.children[2] = HAnimSite1041;

HAnimJoint1032.children = new MFNode();

HAnimJoint1032.children[0] = HAnimSegment1033;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "r_carpal_interphalangeal_1";
HAnimJoint1044.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1044.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1032.children[1] = HAnimJoint1044;

HAnimJoint1023.children[1] = HAnimJoint1032;

HAnimJoint989.children[1] = HAnimJoint1023;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.name = "r_carpometacarpal_2";
HAnimJoint1045.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1045.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1045.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1045.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1046 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1046.name = "r_metacarpal_2";
HAnimSegment1046.DEF = "hanim_r_metacarpal_2";
let Transform1047 = browser.currentScene.createNode("Transform");
Transform1047.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1048 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1049 = browser.currentScene.createNode("Shape");
Shape1049.USE = "HAnimJointShape";
Transform1048.child = new undefined();

Transform1048.child[0] = Shape1049;

Transform1047.children = new MFNode();

Transform1047.children[0] = Transform1048;

HAnimSegment1046.children = new MFNode();

HAnimSegment1046.children[0] = Transform1047;

let Shape1050 = browser.currentScene.createNode("Shape");
let LineSet1051 = browser.currentScene.createNode("LineSet");
LineSet1051.vertexCount = new MFInt32(new int[2]);
let Coordinate1052 = browser.currentScene.createNode("Coordinate");
Coordinate1052.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1051.coord = Coordinate1052;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1053 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1053.USE = "HAnimSegmentLineColorRGBA";
LineSet1051.color = ColorRGBA1053;

Shape1050.geometry = LineSet1051;

HAnimSegment1046.children[1] = Shape1050;

HAnimJoint1045.children = new MFNode();

HAnimJoint1045.children[0] = HAnimSegment1046;

let HAnimJoint1054 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1054.name = "r_metacarpophalangeal_2";
HAnimJoint1054.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1054.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1054.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1054.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1055 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1055.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1055.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1056 = browser.currentScene.createNode("Transform");
Transform1056.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1057 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1058 = browser.currentScene.createNode("Shape");
Shape1058.USE = "HAnimJointShape";
Transform1057.child = new undefined();

Transform1057.child[0] = Shape1058;

Transform1056.children = new MFNode();

Transform1056.children[0] = Transform1057;

HAnimSegment1055.children = new MFNode();

HAnimSegment1055.children[0] = Transform1056;

let Shape1059 = browser.currentScene.createNode("Shape");
let LineSet1060 = browser.currentScene.createNode("LineSet");
LineSet1060.vertexCount = new MFInt32(new int[2]);
let Coordinate1061 = browser.currentScene.createNode("Coordinate");
Coordinate1061.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1060.coord = Coordinate1061;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1062 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1062.USE = "HAnimSegmentLineColorRGBA";
LineSet1060.color = ColorRGBA1062;

Shape1059.geometry = LineSet1060;

HAnimSegment1055.children[1] = Shape1059;

HAnimJoint1054.children = new MFNode();

HAnimJoint1054.children[0] = HAnimSegment1055;

let HAnimJoint1063 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1063.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1063.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1063.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1063.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1063.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1064 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1064.name = "r_carpal_middle_phalanx_2";
HAnimSegment1064.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1065 = browser.currentScene.createNode("Transform");
Transform1065.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1066 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1067 = browser.currentScene.createNode("Shape");
Shape1067.USE = "HAnimJointShape";
Transform1066.child = new undefined();

Transform1066.child[0] = Shape1067;

Transform1065.children = new MFNode();

Transform1065.children[0] = Transform1066;

HAnimSegment1064.children = new MFNode();

HAnimSegment1064.children[0] = Transform1065;

let Shape1068 = browser.currentScene.createNode("Shape");
let LineSet1069 = browser.currentScene.createNode("LineSet");
LineSet1069.vertexCount = new MFInt32(new int[2]);
let Coordinate1070 = browser.currentScene.createNode("Coordinate");
Coordinate1070.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1069.coord = Coordinate1070;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1071 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1071.USE = "HAnimSegmentLineColorRGBA";
LineSet1069.color = ColorRGBA1071;

Shape1068.geometry = LineSet1069;

HAnimSegment1064.children[1] = Shape1068;

let HAnimSite1072 = browser.currentScene.createNode("HAnimSite");
HAnimSite1072.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1072.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor1073 = browser.currentScene.createNode("TouchSensor");
TouchSensor1073.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1072.children = new MFNode();

HAnimSite1072.children[0] = TouchSensor1073;

let Shape1074 = browser.currentScene.createNode("Shape");
Shape1074.USE = "HAnimSiteShape";
HAnimSite1072.children[1] = Shape1074;

HAnimSegment1064.children[2] = HAnimSite1072;

let HAnimSite1075 = browser.currentScene.createNode("HAnimSite");
HAnimSite1075.name = "r_dactylion";
HAnimSite1075.DEF = "hanim_r_dactylion";
HAnimSite1075.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1076 = browser.currentScene.createNode("TouchSensor");
TouchSensor1076.description = "HAnimSite r_dactylion";
HAnimSite1075.children = new MFNode();

HAnimSite1075.children[0] = TouchSensor1076;

let Shape1077 = browser.currentScene.createNode("Shape");
Shape1077.USE = "HAnimSiteShape";
HAnimSite1075.children[1] = Shape1077;

HAnimSegment1064.children[3] = HAnimSite1075;

HAnimJoint1063.children = new MFNode();

HAnimJoint1063.children[0] = HAnimSegment1064;

let HAnimJoint1078 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1078.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1078.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1078.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1078.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1078.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1063.children[1] = HAnimJoint1078;

HAnimJoint1054.children[1] = HAnimJoint1063;

HAnimJoint1045.children[1] = HAnimJoint1054;

HAnimJoint989.children[2] = HAnimJoint1045;

let HAnimJoint1079 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1079.name = "r_carpometacarpal_3";
HAnimJoint1079.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1079.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1079.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1079.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1080 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1080.name = "r_metacarpal_3";
HAnimSegment1080.DEF = "hanim_r_metacarpal_3";
let Transform1081 = browser.currentScene.createNode("Transform");
Transform1081.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1082 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1083 = browser.currentScene.createNode("Shape");
Shape1083.USE = "HAnimJointShape";
Transform1082.child = new undefined();

Transform1082.child[0] = Shape1083;

Transform1081.children = new MFNode();

Transform1081.children[0] = Transform1082;

HAnimSegment1080.children = new MFNode();

HAnimSegment1080.children[0] = Transform1081;

let Shape1084 = browser.currentScene.createNode("Shape");
let LineSet1085 = browser.currentScene.createNode("LineSet");
LineSet1085.vertexCount = new MFInt32(new int[2]);
let Coordinate1086 = browser.currentScene.createNode("Coordinate");
Coordinate1086.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1085.coord = Coordinate1086;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1087 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1087.USE = "HAnimSegmentLineColorRGBA";
LineSet1085.color = ColorRGBA1087;

Shape1084.geometry = LineSet1085;

HAnimSegment1080.children[1] = Shape1084;

HAnimJoint1079.children = new MFNode();

HAnimJoint1079.children[0] = HAnimSegment1080;

let HAnimJoint1088 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1088.name = "r_metacarpophalangeal_3";
HAnimJoint1088.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1088.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1088.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1088.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1089 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1089.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1089.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1090 = browser.currentScene.createNode("Transform");
Transform1090.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1091 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1092 = browser.currentScene.createNode("Shape");
Shape1092.USE = "HAnimJointShape";
Transform1091.child = new undefined();

Transform1091.child[0] = Shape1092;

Transform1090.children = new MFNode();

Transform1090.children[0] = Transform1091;

HAnimSegment1089.children = new MFNode();

HAnimSegment1089.children[0] = Transform1090;

let Shape1093 = browser.currentScene.createNode("Shape");
let LineSet1094 = browser.currentScene.createNode("LineSet");
LineSet1094.vertexCount = new MFInt32(new int[2]);
let Coordinate1095 = browser.currentScene.createNode("Coordinate");
Coordinate1095.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1094.coord = Coordinate1095;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1096 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1096.USE = "HAnimSegmentLineColorRGBA";
LineSet1094.color = ColorRGBA1096;

Shape1093.geometry = LineSet1094;

HAnimSegment1089.children[1] = Shape1093;

HAnimJoint1088.children = new MFNode();

HAnimJoint1088.children[0] = HAnimSegment1089;

let HAnimJoint1097 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1097.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1097.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1097.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1097.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1097.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1098 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1098.name = "r_carpal_middle_phalanx_3";
HAnimSegment1098.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1099 = browser.currentScene.createNode("Transform");
Transform1099.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1100 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1101 = browser.currentScene.createNode("Shape");
Shape1101.USE = "HAnimJointShape";
Transform1100.child = new undefined();

Transform1100.child[0] = Shape1101;

Transform1099.children = new MFNode();

Transform1099.children[0] = Transform1100;

HAnimSegment1098.children = new MFNode();

HAnimSegment1098.children[0] = Transform1099;

let Shape1102 = browser.currentScene.createNode("Shape");
let LineSet1103 = browser.currentScene.createNode("LineSet");
LineSet1103.vertexCount = new MFInt32(new int[2]);
let Coordinate1104 = browser.currentScene.createNode("Coordinate");
Coordinate1104.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1103.coord = Coordinate1104;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1105.USE = "HAnimSegmentLineColorRGBA";
LineSet1103.color = ColorRGBA1105;

Shape1102.geometry = LineSet1103;

HAnimSegment1098.children[1] = Shape1102;

let HAnimSite1106 = browser.currentScene.createNode("HAnimSite");
HAnimSite1106.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1106.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor1107 = browser.currentScene.createNode("TouchSensor");
TouchSensor1107.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1106.children = new MFNode();

HAnimSite1106.children[0] = TouchSensor1107;

let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "HAnimSiteShape";
HAnimSite1106.children[1] = Shape1108;

HAnimSegment1098.children[2] = HAnimSite1106;

HAnimJoint1097.children = new MFNode();

HAnimJoint1097.children[0] = HAnimSegment1098;

let HAnimJoint1109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1109.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1109.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1109.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1109.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1097.children[1] = HAnimJoint1109;

HAnimJoint1088.children[1] = HAnimJoint1097;

HAnimJoint1079.children[1] = HAnimJoint1088;

HAnimJoint989.children[3] = HAnimJoint1079;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpometacarpal_4";
HAnimJoint1110.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1110.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1111.name = "r_metacarpal_4";
HAnimSegment1111.DEF = "hanim_r_metacarpal_4";
let Transform1112 = browser.currentScene.createNode("Transform");
Transform1112.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1113 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1114 = browser.currentScene.createNode("Shape");
Shape1114.USE = "HAnimJointShape";
Transform1113.child = new undefined();

Transform1113.child[0] = Shape1114;

Transform1112.children = new MFNode();

Transform1112.children[0] = Transform1113;

HAnimSegment1111.children = new MFNode();

HAnimSegment1111.children[0] = Transform1112;

let Shape1115 = browser.currentScene.createNode("Shape");
let LineSet1116 = browser.currentScene.createNode("LineSet");
LineSet1116.vertexCount = new MFInt32(new int[2]);
let Coordinate1117 = browser.currentScene.createNode("Coordinate");
Coordinate1117.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1116.coord = Coordinate1117;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1116.color = ColorRGBA1118;

Shape1115.geometry = LineSet1116;

HAnimSegment1111.children[1] = Shape1115;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = HAnimSegment1111;

let HAnimJoint1119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1119.name = "r_metacarpophalangeal_4";
HAnimJoint1119.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1119.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1119.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1120.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1120.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1121 = browser.currentScene.createNode("Transform");
Transform1121.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1122 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1123 = browser.currentScene.createNode("Shape");
Shape1123.USE = "HAnimJointShape";
Transform1122.child = new undefined();

Transform1122.child[0] = Shape1123;

Transform1121.children = new MFNode();

Transform1121.children[0] = Transform1122;

HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = Transform1121;

let Shape1124 = browser.currentScene.createNode("Shape");
let LineSet1125 = browser.currentScene.createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
let Coordinate1126 = browser.currentScene.createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1125.coord = Coordinate1126;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1127 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1127.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1120.children[1] = Shape1124;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

let HAnimJoint1128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1128.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1128.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1128.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1129.name = "r_carpal_middle_phalanx_4";
HAnimSegment1129.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1130 = browser.currentScene.createNode("Transform");
Transform1130.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1131 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1132 = browser.currentScene.createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.child = new undefined();

Transform1131.child[0] = Shape1132;

Transform1130.children = new MFNode();

Transform1130.children[0] = Transform1131;

HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = Transform1130;

let Shape1133 = browser.currentScene.createNode("Shape");
let LineSet1134 = browser.currentScene.createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
let Coordinate1135 = browser.currentScene.createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1134.coord = Coordinate1135;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1136 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[1] = Shape1133;

let HAnimSite1137 = browser.currentScene.createNode("HAnimSite");
HAnimSite1137.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1137.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor1138 = browser.currentScene.createNode("TouchSensor");
TouchSensor1138.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1137.children = new MFNode();

HAnimSite1137.children[0] = TouchSensor1138;

let Shape1139 = browser.currentScene.createNode("Shape");
Shape1139.USE = "HAnimSiteShape";
HAnimSite1137.children[1] = Shape1139;

HAnimSegment1129.children[2] = HAnimSite1137;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

let HAnimJoint1140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1140.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1140.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1140.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1140.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.children[1] = HAnimJoint1140;

HAnimJoint1119.children[1] = HAnimJoint1128;

HAnimJoint1110.children[1] = HAnimJoint1119;

HAnimJoint989.children[4] = HAnimJoint1110;

let HAnimJoint1141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1141.name = "r_carpometacarpal_5";
HAnimJoint1141.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1141.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1141.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1142.name = "r_metacarpal_5";
HAnimSegment1142.DEF = "hanim_r_metacarpal_5";
let Transform1143 = browser.currentScene.createNode("Transform");
Transform1143.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1144 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1145 = browser.currentScene.createNode("Shape");
Shape1145.USE = "HAnimJointShape";
Transform1144.child = new undefined();

Transform1144.child[0] = Shape1145;

Transform1143.children = new MFNode();

Transform1143.children[0] = Transform1144;

HAnimSegment1142.children = new MFNode();

HAnimSegment1142.children[0] = Transform1143;

let Shape1146 = browser.currentScene.createNode("Shape");
let LineSet1147 = browser.currentScene.createNode("LineSet");
LineSet1147.vertexCount = new MFInt32(new int[2]);
let Coordinate1148 = browser.currentScene.createNode("Coordinate");
Coordinate1148.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1147.coord = Coordinate1148;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1149 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1149.USE = "HAnimSegmentLineColorRGBA";
LineSet1147.color = ColorRGBA1149;

Shape1146.geometry = LineSet1147;

HAnimSegment1142.children[1] = Shape1146;

HAnimJoint1141.children = new MFNode();

HAnimJoint1141.children[0] = HAnimSegment1142;

let HAnimJoint1150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1150.name = "r_metacarpophalangeal_5";
HAnimJoint1150.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1150.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1150.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1151.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1151.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1152 = browser.currentScene.createNode("Transform");
Transform1152.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1153 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1154 = browser.currentScene.createNode("Shape");
Shape1154.USE = "HAnimJointShape";
Transform1153.child = new undefined();

Transform1153.child[0] = Shape1154;

Transform1152.children = new MFNode();

Transform1152.children[0] = Transform1153;

HAnimSegment1151.children = new MFNode();

HAnimSegment1151.children[0] = Transform1152;

let Shape1155 = browser.currentScene.createNode("Shape");
let LineSet1156 = browser.currentScene.createNode("LineSet");
LineSet1156.vertexCount = new MFInt32(new int[2]);
let Coordinate1157 = browser.currentScene.createNode("Coordinate");
Coordinate1157.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1156.coord = Coordinate1157;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1158 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA";
LineSet1156.color = ColorRGBA1158;

Shape1155.geometry = LineSet1156;

HAnimSegment1151.children[1] = Shape1155;

HAnimJoint1150.children = new MFNode();

HAnimJoint1150.children[0] = HAnimSegment1151;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1159.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1160.name = "r_carpal_middle_phalanx_5";
HAnimSegment1160.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1161 = browser.currentScene.createNode("Transform");
Transform1161.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1162 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162.child = new undefined();

Transform1162.child[0] = Shape1163;

Transform1161.children = new MFNode();

Transform1161.children[0] = Transform1162;

HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = Transform1161;

let Shape1164 = browser.currentScene.createNode("Shape");
let LineSet1165 = browser.currentScene.createNode("LineSet");
LineSet1165.vertexCount = new MFInt32(new int[2]);
let Coordinate1166 = browser.currentScene.createNode("Coordinate");
Coordinate1166.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1165.coord = Coordinate1166;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[1] = Shape1164;

let HAnimSite1168 = browser.currentScene.createNode("HAnimSite");
HAnimSite1168.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1168.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor1169 = browser.currentScene.createNode("TouchSensor");
TouchSensor1169.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1168.children = new MFNode();

HAnimSite1168.children[0] = TouchSensor1169;

let Shape1170 = browser.currentScene.createNode("Shape");
Shape1170.USE = "HAnimSiteShape";
HAnimSite1168.children[1] = Shape1170;

HAnimSegment1160.children[2] = HAnimSite1168;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

let HAnimJoint1171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1171.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1171.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1171.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1171.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1159.children[1] = HAnimJoint1171;

HAnimJoint1150.children[1] = HAnimJoint1159;

HAnimJoint1141.children[1] = HAnimJoint1150;

HAnimJoint989.children[5] = HAnimJoint1141;

HAnimJoint977.children[1] = HAnimJoint989;

HAnimJoint956.children[1] = HAnimJoint977;

HAnimJoint941.children[1] = HAnimJoint956;

HAnimJoint932.children[1] = HAnimJoint941;

HAnimJoint488.children[3] = HAnimJoint932;

HAnimJoint473.children[1] = HAnimJoint488;

HAnimJoint464.children[1] = HAnimJoint473;

HAnimJoint455.children[1] = HAnimJoint464;

HAnimJoint446.children[1] = HAnimJoint455;

HAnimJoint434.children[1] = HAnimJoint446;

HAnimJoint413.children[1] = HAnimJoint434;

HAnimJoint404.children[1] = HAnimJoint413;

HAnimJoint395.children[1] = HAnimJoint404;

HAnimJoint380.children[1] = HAnimJoint395;

HAnimJoint368.children[1] = HAnimJoint380;

HAnimJoint359.children[1] = HAnimJoint368;

HAnimJoint350.children[1] = HAnimJoint359;

HAnimJoint341.children[1] = HAnimJoint350;

HAnimJoint323.children[1] = HAnimJoint341;

HAnimJoint314.children[1] = HAnimJoint323;

HAnimJoint305.children[1] = HAnimJoint314;

HAnimJoint52.children[2] = HAnimJoint305;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint1172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1172;

let HAnimJoint1173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1173;

let HAnimJoint1174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1174;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1175;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1176;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint1177;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint1178;

let HAnimJoint1179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint1179;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint1180;

let HAnimJoint1181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint1181;

let HAnimJoint1182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint1182;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1183;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1184;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1185;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint1186;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_vl4";
HAnimHumanoid43.joints[17] = HAnimJoint1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_vl3";
HAnimHumanoid43.joints[18] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_vl2";
HAnimHumanoid43.joints[19] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_vl1";
HAnimHumanoid43.joints[20] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_vt12";
HAnimHumanoid43.joints[21] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_vt11";
HAnimHumanoid43.joints[22] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_vt10";
HAnimHumanoid43.joints[23] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_vt9";
HAnimHumanoid43.joints[24] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_vt8";
HAnimHumanoid43.joints[25] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_vt7";
HAnimHumanoid43.joints[26] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_vt6";
HAnimHumanoid43.joints[27] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_vt5";
HAnimHumanoid43.joints[28] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_vt4";
HAnimHumanoid43.joints[29] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_vt3";
HAnimHumanoid43.joints[30] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_vt2";
HAnimHumanoid43.joints[31] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_vt1";
HAnimHumanoid43.joints[32] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_vc7";
HAnimHumanoid43.joints[33] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_vc6";
HAnimHumanoid43.joints[34] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_vc5";
HAnimHumanoid43.joints[35] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_vc4";
HAnimHumanoid43.joints[36] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_vc3";
HAnimHumanoid43.joints[37] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_vc2";
HAnimHumanoid43.joints[38] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_vc1";
HAnimHumanoid43.joints[39] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_skullbase";
HAnimHumanoid43.joints[40] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[41] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[42] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[43] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[44] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[45] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[46] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[47] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[50] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[51] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[52] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[53] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[54] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[56] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[57] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[60] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[61] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[64] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[65] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[68] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[69] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[72] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[73] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[74] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[75] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[76] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[77] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[78] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[79] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[80] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[81] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[82] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[83] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[84] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[85] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[86] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[87] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[88] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[89] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[90] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[91] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[92] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[93] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[94] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[95] = HAnimJoint1265;

let HAnimSegment1266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1266.USE = "hanim_sacrum";
HAnimHumanoid43.segments[96] = HAnimSegment1266;

let HAnimSegment1267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1267.USE = "hanim_pelvis";
HAnimHumanoid43.segments[97] = HAnimSegment1267;

let HAnimSegment1268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1268.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[98] = HAnimSegment1268;

let HAnimSegment1269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1269.USE = "hanim_l_calf";
HAnimHumanoid43.segments[99] = HAnimSegment1269;

let HAnimSegment1270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1270.USE = "hanim_l_talus";
HAnimHumanoid43.segments[100] = HAnimSegment1270;

let HAnimSegment1271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1271.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[101] = HAnimSegment1271;

let HAnimSegment1272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1272.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1272;

let HAnimSegment1273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1273.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[103] = HAnimSegment1273;

let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.USE = "hanim_r_calf";
HAnimHumanoid43.segments[104] = HAnimSegment1274;

let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.USE = "hanim_r_talus";
HAnimHumanoid43.segments[105] = HAnimSegment1275;

let HAnimSegment1276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1276.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[106] = HAnimSegment1276;

let HAnimSegment1277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1277.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[107] = HAnimSegment1277;

let HAnimSegment1278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1278.USE = "hanim_l5";
HAnimHumanoid43.segments[108] = HAnimSegment1278;

let HAnimSegment1279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1279.USE = "hanim_l4";
HAnimHumanoid43.segments[109] = HAnimSegment1279;

let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.USE = "hanim_l3";
HAnimHumanoid43.segments[110] = HAnimSegment1280;

let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.USE = "hanim_l2";
HAnimHumanoid43.segments[111] = HAnimSegment1281;

let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.USE = "hanim_l1";
HAnimHumanoid43.segments[112] = HAnimSegment1282;

let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.USE = "hanim_t12";
HAnimHumanoid43.segments[113] = HAnimSegment1283;

let HAnimSegment1284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1284.USE = "hanim_t11";
HAnimHumanoid43.segments[114] = HAnimSegment1284;

let HAnimSegment1285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1285.USE = "hanim_t10";
HAnimHumanoid43.segments[115] = HAnimSegment1285;

let HAnimSegment1286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1286.USE = "hanim_t9";
HAnimHumanoid43.segments[116] = HAnimSegment1286;

let HAnimSegment1287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1287.USE = "hanim_t8";
HAnimHumanoid43.segments[117] = HAnimSegment1287;

let HAnimSegment1288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1288.USE = "hanim_t7";
HAnimHumanoid43.segments[118] = HAnimSegment1288;

let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.USE = "hanim_t6";
HAnimHumanoid43.segments[119] = HAnimSegment1289;

let HAnimSegment1290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1290.USE = "hanim_t5";
HAnimHumanoid43.segments[120] = HAnimSegment1290;

let HAnimSegment1291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1291.USE = "hanim_t4";
HAnimHumanoid43.segments[121] = HAnimSegment1291;

let HAnimSegment1292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1292.USE = "hanim_t3";
HAnimHumanoid43.segments[122] = HAnimSegment1292;

let HAnimSegment1293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1293.USE = "hanim_t2";
HAnimHumanoid43.segments[123] = HAnimSegment1293;

let HAnimSegment1294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1294.USE = "hanim_t1";
HAnimHumanoid43.segments[124] = HAnimSegment1294;

let HAnimSegment1295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1295.USE = "hanim_c7";
HAnimHumanoid43.segments[125] = HAnimSegment1295;

let HAnimSegment1296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1296.USE = "hanim_c6";
HAnimHumanoid43.segments[126] = HAnimSegment1296;

let HAnimSegment1297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1297.USE = "hanim_c5";
HAnimHumanoid43.segments[127] = HAnimSegment1297;

let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.USE = "hanim_c4";
HAnimHumanoid43.segments[128] = HAnimSegment1298;

let HAnimSegment1299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1299.USE = "hanim_c3";
HAnimHumanoid43.segments[129] = HAnimSegment1299;

let HAnimSegment1300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1300.USE = "hanim_c2";
HAnimHumanoid43.segments[130] = HAnimSegment1300;

let HAnimSegment1301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1301.USE = "hanim_c1";
HAnimHumanoid43.segments[131] = HAnimSegment1301;

let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.USE = "hanim_skull";
HAnimHumanoid43.segments[132] = HAnimSegment1302;

let HAnimSegment1303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1303.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[133] = HAnimSegment1303;

let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[134] = HAnimSegment1304;

let HAnimSegment1305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1305.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[135] = HAnimSegment1305;

let HAnimSegment1306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1306.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[136] = HAnimSegment1306;

let HAnimSegment1307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1307.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[137] = HAnimSegment1307;

let HAnimSegment1308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1308.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[138] = HAnimSegment1308;

let HAnimSegment1309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1309.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[139] = HAnimSegment1309;

let HAnimSegment1310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1310.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[140] = HAnimSegment1310;

let HAnimSegment1311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1311.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[141] = HAnimSegment1311;

let HAnimSegment1312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1312.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[142] = HAnimSegment1312;

let HAnimSegment1313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1313.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[143] = HAnimSegment1313;

let HAnimSegment1314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1314.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[144] = HAnimSegment1314;

let HAnimSegment1315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1315.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[145] = HAnimSegment1315;

let HAnimSegment1316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1316.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[146] = HAnimSegment1316;

let HAnimSegment1317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1317.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[147] = HAnimSegment1317;

let HAnimSegment1318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1318.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[148] = HAnimSegment1318;

let HAnimSegment1319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1319.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[149] = HAnimSegment1319;

let HAnimSegment1320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1320.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[150] = HAnimSegment1320;

let HAnimSegment1321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1321.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[151] = HAnimSegment1321;

let HAnimSegment1322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1322.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[152] = HAnimSegment1322;

let HAnimSegment1323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1323.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[153] = HAnimSegment1323;

let HAnimSegment1324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1324.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[154] = HAnimSegment1324;

let HAnimSegment1325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1325.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[155] = HAnimSegment1325;

let HAnimSegment1326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1326.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[156] = HAnimSegment1326;

let HAnimSegment1327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1327.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[157] = HAnimSegment1327;

let HAnimSegment1328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1328.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[158] = HAnimSegment1328;

let HAnimSegment1329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1329.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[159] = HAnimSegment1329;

let HAnimSegment1330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1330.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1330;

let HAnimSegment1331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1331.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[161] = HAnimSegment1331;

let HAnimSegment1332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1332.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1332;

let HAnimSegment1333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1333.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1333;

let HAnimSegment1334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1334.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1334;

let HAnimSegment1335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1335.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[165] = HAnimSegment1335;

let HAnimSegment1336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1336.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[166] = HAnimSegment1336;

let HAnimSegment1337 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1337.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[167] = HAnimSegment1337;

let HAnimSegment1338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1338.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[168] = HAnimSegment1338;

let HAnimSegment1339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1339.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[169] = HAnimSegment1339;

let HAnimSegment1340 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1340.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[170] = HAnimSegment1340;

let HAnimSite1341 = browser.currentScene.createNode("HAnimSite");
HAnimSite1341.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[171] = HAnimSite1341;

let HAnimSite1342 = browser.currentScene.createNode("HAnimSite");
HAnimSite1342.USE = "hanim_crotch";
HAnimHumanoid43.viewpoints[172] = HAnimSite1342;

let HAnimSite1343 = browser.currentScene.createNode("HAnimSite");
HAnimSite1343.USE = "hanim_l_asis";
HAnimHumanoid43.viewpoints[173] = HAnimSite1343;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.USE = "hanim_l_iliocristale";
HAnimHumanoid43.viewpoints[174] = HAnimSite1344;

let HAnimSite1345 = browser.currentScene.createNode("HAnimSite");
HAnimSite1345.USE = "hanim_l_psis";
HAnimHumanoid43.viewpoints[175] = HAnimSite1345;

let HAnimSite1346 = browser.currentScene.createNode("HAnimSite");
HAnimSite1346.USE = "hanim_l_trochanterion";
HAnimHumanoid43.viewpoints[176] = HAnimSite1346;

let HAnimSite1347 = browser.currentScene.createNode("HAnimSite");
HAnimSite1347.USE = "hanim_r_asis";
HAnimHumanoid43.viewpoints[177] = HAnimSite1347;

let HAnimSite1348 = browser.currentScene.createNode("HAnimSite");
HAnimSite1348.USE = "hanim_r_iliocristale";
HAnimHumanoid43.viewpoints[178] = HAnimSite1348;

let HAnimSite1349 = browser.currentScene.createNode("HAnimSite");
HAnimSite1349.USE = "hanim_r_psis";
HAnimHumanoid43.viewpoints[179] = HAnimSite1349;

let HAnimSite1350 = browser.currentScene.createNode("HAnimSite");
HAnimSite1350.USE = "hanim_r_trochanterion";
HAnimHumanoid43.viewpoints[180] = HAnimSite1350;

let HAnimSite1351 = browser.currentScene.createNode("HAnimSite");
HAnimSite1351.USE = "hanim_navel";
HAnimHumanoid43.viewpoints[181] = HAnimSite1351;

let HAnimSite1352 = browser.currentScene.createNode("HAnimSite");
HAnimSite1352.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid43.viewpoints[182] = HAnimSite1352;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid43.viewpoints[183] = HAnimSite1353;

let HAnimSite1354 = browser.currentScene.createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[184] = HAnimSite1354;

let HAnimSite1355 = browser.currentScene.createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[185] = HAnimSite1355;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_knee_crease";
HAnimHumanoid43.viewpoints[186] = HAnimSite1356;

let HAnimSite1357 = browser.currentScene.createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_suprapatella";
HAnimHumanoid43.viewpoints[187] = HAnimSite1357;

let HAnimSite1358 = browser.currentScene.createNode("HAnimSite");
HAnimSite1358.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[188] = HAnimSite1358;

let HAnimSite1359 = browser.currentScene.createNode("HAnimSite");
HAnimSite1359.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[189] = HAnimSite1359;

let HAnimSite1360 = browser.currentScene.createNode("HAnimSite");
HAnimSite1360.USE = "hanim_r_knee_crease";
HAnimHumanoid43.viewpoints[190] = HAnimSite1360;

let HAnimSite1361 = browser.currentScene.createNode("HAnimSite");
HAnimSite1361.USE = "hanim_r_suprapatella";
HAnimHumanoid43.viewpoints[191] = HAnimSite1361;

let HAnimSite1362 = browser.currentScene.createNode("HAnimSite");
HAnimSite1362.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid43.viewpoints[192] = HAnimSite1362;

let HAnimSite1363 = browser.currentScene.createNode("HAnimSite");
HAnimSite1363.USE = "hanim_l_medial_malleolus";
HAnimHumanoid43.viewpoints[193] = HAnimSite1363;

let HAnimSite1364 = browser.currentScene.createNode("HAnimSite");
HAnimSite1364.USE = "hanim_l_tibiale";
HAnimHumanoid43.viewpoints[194] = HAnimSite1364;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid43.viewpoints[195] = HAnimSite1365;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.USE = "hanim_l_sphyrion";
HAnimHumanoid43.viewpoints[196] = HAnimSite1366;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.USE = "hanim_l_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[197] = HAnimSite1367;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.USE = "hanim_l_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[198] = HAnimSite1368;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[199] = HAnimSite1369;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[200] = HAnimSite1370;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[201] = HAnimSite1371;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[202] = HAnimSite1372;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[203] = HAnimSite1373;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid43.viewpoints[204] = HAnimSite1374;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.USE = "hanim_r_medial_malleolus";
HAnimHumanoid43.viewpoints[205] = HAnimSite1375;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.USE = "hanim_r_tibiale";
HAnimHumanoid43.viewpoints[206] = HAnimSite1376;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid43.viewpoints[207] = HAnimSite1377;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.USE = "hanim_r_sphyrion";
HAnimHumanoid43.viewpoints[208] = HAnimSite1378;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.USE = "hanim_r_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[209] = HAnimSite1379;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.USE = "hanim_r_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[210] = HAnimSite1380;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[211] = HAnimSite1381;

let HAnimSite1382 = browser.currentScene.createNode("HAnimSite");
HAnimSite1382.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[212] = HAnimSite1382;

let HAnimSite1383 = browser.currentScene.createNode("HAnimSite");
HAnimSite1383.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[213] = HAnimSite1383;

let HAnimSite1384 = browser.currentScene.createNode("HAnimSite");
HAnimSite1384.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[214] = HAnimSite1384;

let HAnimSite1385 = browser.currentScene.createNode("HAnimSite");
HAnimSite1385.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[215] = HAnimSite1385;

let HAnimSite1386 = browser.currentScene.createNode("HAnimSite");
HAnimSite1386.USE = "hanim_l_rib10";
HAnimHumanoid43.viewpoints[216] = HAnimSite1386;

let HAnimSite1387 = browser.currentScene.createNode("HAnimSite");
HAnimSite1387.USE = "hanim_r_rib10";
HAnimHumanoid43.viewpoints[217] = HAnimSite1387;

let HAnimSite1388 = browser.currentScene.createNode("HAnimSite");
HAnimSite1388.USE = "hanim_spine_2_middle_back";
HAnimHumanoid43.viewpoints[218] = HAnimSite1388;

let HAnimSite1389 = browser.currentScene.createNode("HAnimSite");
HAnimSite1389.USE = "hanim_substernale";
HAnimHumanoid43.viewpoints[219] = HAnimSite1389;

let HAnimSite1390 = browser.currentScene.createNode("HAnimSite");
HAnimSite1390.USE = "hanim_l_thelion";
HAnimHumanoid43.viewpoints[220] = HAnimSite1390;

let HAnimSite1391 = browser.currentScene.createNode("HAnimSite");
HAnimSite1391.USE = "hanim_r_thelion";
HAnimHumanoid43.viewpoints[221] = HAnimSite1391;

let HAnimSite1392 = browser.currentScene.createNode("HAnimSite");
HAnimSite1392.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[222] = HAnimSite1392;

let HAnimSite1393 = browser.currentScene.createNode("HAnimSite");
HAnimSite1393.USE = "hanim_mesosternale";
HAnimHumanoid43.viewpoints[223] = HAnimSite1393;

let HAnimSite1394 = browser.currentScene.createNode("HAnimSite");
HAnimSite1394.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[224] = HAnimSite1394;

let HAnimSite1395 = browser.currentScene.createNode("HAnimSite");
HAnimSite1395.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid43.viewpoints[225] = HAnimSite1395;

let HAnimSite1396 = browser.currentScene.createNode("HAnimSite");
HAnimSite1396.USE = "hanim_spine_1_middle_back";
HAnimHumanoid43.viewpoints[226] = HAnimSite1396;

let HAnimSite1397 = browser.currentScene.createNode("HAnimSite");
HAnimSite1397.USE = "hanim_cervicale";
HAnimHumanoid43.viewpoints[227] = HAnimSite1397;

let HAnimSite1398 = browser.currentScene.createNode("HAnimSite");
HAnimSite1398.USE = "hanim_suprasternale";
HAnimHumanoid43.viewpoints[228] = HAnimSite1398;

let HAnimSite1399 = browser.currentScene.createNode("HAnimSite");
HAnimSite1399.USE = "hanim_l_neck_base";
HAnimHumanoid43.viewpoints[229] = HAnimSite1399;

let HAnimSite1400 = browser.currentScene.createNode("HAnimSite");
HAnimSite1400.USE = "hanim_r_neck_base";
HAnimHumanoid43.viewpoints[230] = HAnimSite1400;

let HAnimSite1401 = browser.currentScene.createNode("HAnimSite");
HAnimSite1401.USE = "hanim_l_acromion";
HAnimHumanoid43.viewpoints[231] = HAnimSite1401;

let HAnimSite1402 = browser.currentScene.createNode("HAnimSite");
HAnimSite1402.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite1402;

let HAnimSite1403 = browser.currentScene.createNode("HAnimSite");
HAnimSite1403.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[233] = HAnimSite1403;

let HAnimSite1404 = browser.currentScene.createNode("HAnimSite");
HAnimSite1404.USE = "hanim_l_axilla_proximal";
HAnimHumanoid43.viewpoints[234] = HAnimSite1404;

let HAnimSite1405 = browser.currentScene.createNode("HAnimSite");
HAnimSite1405.USE = "hanim_l_clavicale";
HAnimHumanoid43.viewpoints[235] = HAnimSite1405;

let HAnimSite1406 = browser.currentScene.createNode("HAnimSite");
HAnimSite1406.USE = "hanim_r_acromion";
HAnimHumanoid43.viewpoints[236] = HAnimSite1406;

let HAnimSite1407 = browser.currentScene.createNode("HAnimSite");
HAnimSite1407.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite1407;

let HAnimSite1408 = browser.currentScene.createNode("HAnimSite");
HAnimSite1408.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[238] = HAnimSite1408;

let HAnimSite1409 = browser.currentScene.createNode("HAnimSite");
HAnimSite1409.USE = "hanim_r_axilla_proximal";
HAnimHumanoid43.viewpoints[239] = HAnimSite1409;

let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.USE = "hanim_r_clavicale";
HAnimHumanoid43.viewpoints[240] = HAnimSite1410;

let HAnimSite1411 = browser.currentScene.createNode("HAnimSite");
HAnimSite1411.USE = "hanim_adams_apple";
HAnimHumanoid43.viewpoints[241] = HAnimSite1411;

let HAnimSite1412 = browser.currentScene.createNode("HAnimSite");
HAnimSite1412.USE = "hanim_glabella";
HAnimHumanoid43.viewpoints[242] = HAnimSite1412;

let HAnimSite1413 = browser.currentScene.createNode("HAnimSite");
HAnimSite1413.USE = "hanim_l_ectocanthus";
HAnimHumanoid43.viewpoints[243] = HAnimSite1413;

let HAnimSite1414 = browser.currentScene.createNode("HAnimSite");
HAnimSite1414.USE = "hanim_l_infraorbitale";
HAnimHumanoid43.viewpoints[244] = HAnimSite1414;

let HAnimSite1415 = browser.currentScene.createNode("HAnimSite");
HAnimSite1415.USE = "hanim_l_tragion";
HAnimHumanoid43.viewpoints[245] = HAnimSite1415;

let HAnimSite1416 = browser.currentScene.createNode("HAnimSite");
HAnimSite1416.USE = "hanim_nuchale";
HAnimHumanoid43.viewpoints[246] = HAnimSite1416;

let HAnimSite1417 = browser.currentScene.createNode("HAnimSite");
HAnimSite1417.USE = "hanim_opisthocranion";
HAnimHumanoid43.viewpoints[247] = HAnimSite1417;

let HAnimSite1418 = browser.currentScene.createNode("HAnimSite");
HAnimSite1418.USE = "hanim_r_ectocanthus";
HAnimHumanoid43.viewpoints[248] = HAnimSite1418;

let HAnimSite1419 = browser.currentScene.createNode("HAnimSite");
HAnimSite1419.USE = "hanim_r_infraorbitale";
HAnimHumanoid43.viewpoints[249] = HAnimSite1419;

let HAnimSite1420 = browser.currentScene.createNode("HAnimSite");
HAnimSite1420.USE = "hanim_r_tragion";
HAnimHumanoid43.viewpoints[250] = HAnimSite1420;

let HAnimSite1421 = browser.currentScene.createNode("HAnimSite");
HAnimSite1421.USE = "hanim_sellion";
HAnimHumanoid43.viewpoints[251] = HAnimSite1421;

let HAnimSite1422 = browser.currentScene.createNode("HAnimSite");
HAnimSite1422.USE = "hanim_skull_vertex";
HAnimHumanoid43.viewpoints[252] = HAnimSite1422;

let HAnimSite1423 = browser.currentScene.createNode("HAnimSite");
HAnimSite1423.USE = "hanim_l_gonion";
HAnimHumanoid43.viewpoints[253] = HAnimSite1423;

let HAnimSite1424 = browser.currentScene.createNode("HAnimSite");
HAnimSite1424.USE = "hanim_menton";
HAnimHumanoid43.viewpoints[254] = HAnimSite1424;

let HAnimSite1425 = browser.currentScene.createNode("HAnimSite");
HAnimSite1425.USE = "hanim_r_gonion";
HAnimHumanoid43.viewpoints[255] = HAnimSite1425;

let HAnimSite1426 = browser.currentScene.createNode("HAnimSite");
HAnimSite1426.USE = "hanim_supramenton";
HAnimHumanoid43.viewpoints[256] = HAnimSite1426;

let HAnimSite1427 = browser.currentScene.createNode("HAnimSite");
HAnimSite1427.USE = "hanim_l_bideltoid";
HAnimHumanoid43.viewpoints[257] = HAnimSite1427;

let HAnimSite1428 = browser.currentScene.createNode("HAnimSite");
HAnimSite1428.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[258] = HAnimSite1428;

let HAnimSite1429 = browser.currentScene.createNode("HAnimSite");
HAnimSite1429.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[259] = HAnimSite1429;

let HAnimSite1430 = browser.currentScene.createNode("HAnimSite");
HAnimSite1430.USE = "hanim_l_olecranon";
HAnimHumanoid43.viewpoints[260] = HAnimSite1430;

let HAnimSite1431 = browser.currentScene.createNode("HAnimSite");
HAnimSite1431.USE = "hanim_l_radial_styloid";
HAnimHumanoid43.viewpoints[261] = HAnimSite1431;

let HAnimSite1432 = browser.currentScene.createNode("HAnimSite");
HAnimSite1432.USE = "hanim_l_radiale";
HAnimHumanoid43.viewpoints[262] = HAnimSite1432;

let HAnimSite1433 = browser.currentScene.createNode("HAnimSite");
HAnimSite1433.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid43.viewpoints[263] = HAnimSite1433;

let HAnimSite1434 = browser.currentScene.createNode("HAnimSite");
HAnimSite1434.USE = "hanim_l_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[264] = HAnimSite1434;

let HAnimSite1435 = browser.currentScene.createNode("HAnimSite");
HAnimSite1435.USE = "hanim_l_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[265] = HAnimSite1435;

let HAnimSite1436 = browser.currentScene.createNode("HAnimSite");
HAnimSite1436.USE = "hanim_l_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[266] = HAnimSite1436;

let HAnimSite1437 = browser.currentScene.createNode("HAnimSite");
HAnimSite1437.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[267] = HAnimSite1437;

let HAnimSite1438 = browser.currentScene.createNode("HAnimSite");
HAnimSite1438.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[268] = HAnimSite1438;

let HAnimSite1439 = browser.currentScene.createNode("HAnimSite");
HAnimSite1439.USE = "hanim_l_dactylion";
HAnimHumanoid43.viewpoints[269] = HAnimSite1439;

let HAnimSite1440 = browser.currentScene.createNode("HAnimSite");
HAnimSite1440.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[270] = HAnimSite1440;

let HAnimSite1441 = browser.currentScene.createNode("HAnimSite");
HAnimSite1441.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[271] = HAnimSite1441;

let HAnimSite1442 = browser.currentScene.createNode("HAnimSite");
HAnimSite1442.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[272] = HAnimSite1442;

let HAnimSite1443 = browser.currentScene.createNode("HAnimSite");
HAnimSite1443.USE = "hanim_r_bideltoid";
HAnimHumanoid43.viewpoints[273] = HAnimSite1443;

let HAnimSite1444 = browser.currentScene.createNode("HAnimSite");
HAnimSite1444.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[274] = HAnimSite1444;

let HAnimSite1445 = browser.currentScene.createNode("HAnimSite");
HAnimSite1445.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[275] = HAnimSite1445;

let HAnimSite1446 = browser.currentScene.createNode("HAnimSite");
HAnimSite1446.USE = "hanim_r_olecranon";
HAnimHumanoid43.viewpoints[276] = HAnimSite1446;

let HAnimSite1447 = browser.currentScene.createNode("HAnimSite");
HAnimSite1447.USE = "hanim_r_radial_styloid";
HAnimHumanoid43.viewpoints[277] = HAnimSite1447;

let HAnimSite1448 = browser.currentScene.createNode("HAnimSite");
HAnimSite1448.USE = "hanim_r_radiale";
HAnimHumanoid43.viewpoints[278] = HAnimSite1448;

let HAnimSite1449 = browser.currentScene.createNode("HAnimSite");
HAnimSite1449.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid43.viewpoints[279] = HAnimSite1449;

let HAnimSite1450 = browser.currentScene.createNode("HAnimSite");
HAnimSite1450.USE = "hanim_r_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[280] = HAnimSite1450;

let HAnimSite1451 = browser.currentScene.createNode("HAnimSite");
HAnimSite1451.USE = "hanim_r_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[281] = HAnimSite1451;

let HAnimSite1452 = browser.currentScene.createNode("HAnimSite");
HAnimSite1452.USE = "hanim_r_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[282] = HAnimSite1452;

let HAnimSite1453 = browser.currentScene.createNode("HAnimSite");
HAnimSite1453.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[283] = HAnimSite1453;

let HAnimSite1454 = browser.currentScene.createNode("HAnimSite");
HAnimSite1454.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[284] = HAnimSite1454;

let HAnimSite1455 = browser.currentScene.createNode("HAnimSite");
HAnimSite1455.USE = "hanim_r_dactylion";
HAnimHumanoid43.viewpoints[285] = HAnimSite1455;

let HAnimSite1456 = browser.currentScene.createNode("HAnimSite");
HAnimSite1456.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[286] = HAnimSite1456;

let HAnimSite1457 = browser.currentScene.createNode("HAnimSite");
HAnimSite1457.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[287] = HAnimSite1457;

let HAnimSite1458 = browser.currentScene.createNode("HAnimSite");
HAnimSite1458.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[288] = HAnimSite1458;

browser.currentScene.children[4] = HAnimHumanoid43;

