const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "GridXZ_20x20Fixed.x3d");
scene.addMetaData("creator", "MV4204 class");
scene.addMetaData("created", "3 September 2000");
scene.addMetaData("modified", "28 November 2019");
scene.addMetaData("reference", "GridXY_20x20Fixed.x3d");
scene.addMetaData("reference", "GridYZ_20x20Fixed.x3d");
scene.addMetaData("description", "Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d");
scene.addMetaData("generator", "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../../license.html");
await browser .loadComponents (scene);
let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "GridXZ_20x20Fixed.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.description = "XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)";
Viewpoint14.orientation = new X3D.SFRotation([1,0,0,-0.4]);
Viewpoint14.position = new X3D.SFVec3f([0,10,25]);
browser.currentScene.children[1] = Viewpoint14;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "GridLocation";
let Group16 = browser.currentScene.createNode("Group");
let Shape17 = browser.currentScene.createNode("Shape");
Shape17.DEF = "LinesAlignedAlongZ";
let IndexedLineSet18 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet18.colorIndex = new X3D.MFInt32([1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]);
IndexedLineSet18.colorPerVertex = False;
IndexedLineSet18.coordIndex = new X3D.MFInt32([1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]);
let Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.DEF = "EndPoints";
Coordinate19.point = new X3D.MFVec3f([0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10]);
coord = Coordinate19;

let Color20 = browser.currentScene.createNode("Color");
Color20.color = new X3D.MFColor([0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05]);
color = Color20;

geometry = IndexedLineSet18;

Group16YYY.children = new X3D.MFNode();

Group16ZZZ.children[0] = Shape17;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "LinesAlignedAlongX";
Transform21.rotation = new X3D.SFRotation([0,1,0,1.57079]);
let Shape22 = browser.currentScene.createNode("Shape");
Shape22.USE = "LinesAlignedAlongZ";
Transform21YYY.child = new X3D.undefined();

Transform21ZZZ.child[0] = Shape22;

Group16ZZZ.children[1] = Transform21;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([0,-0.5,0]);
let Billboard24 = browser.currentScene.createNode("Billboard");
let Shape25 = browser.currentScene.createNode("Shape");
let Text26 = browser.currentScene.createNode("Text");
Text26.DEF = "CenterTextNode";
Text26.string = new X3D.MFString([new X3D.SFString("origin")]);
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.DEF = "FS4";
FontStyle27.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle27.size = 0.4;
fontStyle = FontStyle27;

geometry = Text26;

let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.DEF = "DefaultAppearance";
let Material29 = browser.currentScene.createNode("Material");
material = Material29;

appearance = Appearance28;

Billboard24YYY.children = new X3D.MFNode();

Billboard24ZZZ.children[0] = Shape25;

Transform23YYY.children = new X3D.MFNode();

Transform23ZZZ.children[0] = Billboard24;

Group16ZZZ.children[2] = Transform23;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new X3D.SFVec3f([10,-0.5,10]);
let Billboard31 = browser.currentScene.createNode("Billboard");
let Shape32 = browser.currentScene.createNode("Shape");
let Text33 = browser.currentScene.createNode("Text");
Text33.string = new X3D.MFString([new X3D.SFString("10 0 10")]);
let FontStyle34 = browser.currentScene.createNode("FontStyle");
FontStyle34.USE = "FS4";
fontStyle = FontStyle34;

geometry = Text33;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.USE = "DefaultAppearance";
appearance = Appearance35;

Billboard31YYY.children = new X3D.MFNode();

Billboard31ZZZ.children[0] = Shape32;

Transform30YYY.children = new X3D.MFNode();

Transform30ZZZ.children[0] = Billboard31;

Group16ZZZ.children[3] = Transform30;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new X3D.SFVec3f([10,-0.5,-10]);
let Billboard37 = browser.currentScene.createNode("Billboard");
let Shape38 = browser.currentScene.createNode("Shape");
let Text39 = browser.currentScene.createNode("Text");
Text39.string = new X3D.MFString([new X3D.SFString("10 0 -10")]);
let FontStyle40 = browser.currentScene.createNode("FontStyle");
FontStyle40.USE = "FS4";
fontStyle = FontStyle40;

geometry = Text39;

let Appearance41 = browser.currentScene.createNode("Appearance");
Appearance41.USE = "DefaultAppearance";
appearance = Appearance41;

Billboard37YYY.children = new X3D.MFNode();

Billboard37ZZZ.children[0] = Shape38;

Transform36YYY.children = new X3D.MFNode();

Transform36ZZZ.children[0] = Billboard37;

Group16ZZZ.children[4] = Transform36;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.translation = new X3D.SFVec3f([-10,-0.5,10]);
let Billboard43 = browser.currentScene.createNode("Billboard");
let Shape44 = browser.currentScene.createNode("Shape");
let Text45 = browser.currentScene.createNode("Text");
Text45.string = new X3D.MFString([new X3D.SFString("-10 0 10")]);
let FontStyle46 = browser.currentScene.createNode("FontStyle");
FontStyle46.USE = "FS4";
fontStyle = FontStyle46;

geometry = Text45;

let Appearance47 = browser.currentScene.createNode("Appearance");
Appearance47.USE = "DefaultAppearance";
appearance = Appearance47;

Billboard43YYY.children = new X3D.MFNode();

Billboard43ZZZ.children[0] = Shape44;

Transform42YYY.children = new X3D.MFNode();

Transform42ZZZ.children[0] = Billboard43;

Group16ZZZ.children[5] = Transform42;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new X3D.SFVec3f([-10,-0.5,-10]);
let Billboard49 = browser.currentScene.createNode("Billboard");
let Shape50 = browser.currentScene.createNode("Shape");
let Text51 = browser.currentScene.createNode("Text");
Text51.string = new X3D.MFString([new X3D.SFString("-10 0 -10")]);
let FontStyle52 = browser.currentScene.createNode("FontStyle");
FontStyle52.USE = "FS4";
fontStyle = FontStyle52;

geometry = Text51;

let Appearance53 = browser.currentScene.createNode("Appearance");
Appearance53.USE = "DefaultAppearance";
appearance = Appearance53;

Billboard49YYY.children = new X3D.MFNode();

Billboard49ZZZ.children[0] = Shape50;

Transform48YYY.children = new X3D.MFNode();

Transform48ZZZ.children[0] = Billboard49;

Group16ZZZ.children[6] = Transform48;

Transform15YYY.children = new X3D.MFNode();

Transform15ZZZ.children[0] = Group16;

browser.currentScene.children[2] = Transform15;

}
main ();
