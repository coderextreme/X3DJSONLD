const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "JohnJoint.x3d");
scene.addMetaData("identifier", "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d");
scene.addMetaData("description", "An attempt at a standard LOA-4 skeleton");
scene.addMetaData("generator", "h6.pl");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "12 January 2023");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Transform11 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet13 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet13.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet13.colorPerVertex = False;
IndexedLineSet13.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new X3D.MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
coord = Coordinate14;

let Color15 = browser.currentScene.createNode("Color");
Color15.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color15;

geometry = IndexedLineSet13;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Transform11;

let Group16 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform17 = browser.currentScene.createNode("Transform");
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.DEF = "HAnimJointShape";
let Sphere20 = browser.currentScene.createNode("Sphere");
Sphere20.radius = 0.02;
geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.DEF = "HAnimJointMaterial";
Material22.diffuseColor = new X3D.SFColor([0,0,0.8]);
Material22.transparency = 0.3;
material = Material22;

appearance = Appearance21;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape19;

Transform17YYY.children = new X3D.MFNode();

Transform17ZZZ.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([0,2.05,0]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "HAnimSegmentLine";
let LineSet25 = browser.currentScene.createNode("LineSet");
LineSet25.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA26 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA26.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA26.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA26;

let Coordinate27 = browser.currentScene.createNode("Coordinate");
Coordinate27.point = new X3D.MFVec3f([-0.05,0,0,0.05,0,0]);
coord = Coordinate27;

geometry = LineSet25;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Transform17ZZZ.children[1] = Transform23;

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group16YYY.children = new X3D.MFNode();

Group16ZZZ.children[0] = Transform17;

browser.currentScene.children[1] = Group16;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "default";
browser.currentScene.children[3] = Viewpoint29;

}
main ();
