const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "CoordinateAxes.x3d");
scene.addMetaData("creator", "Don Brutzman, Byounghyun Yoo");
scene.addMetaData("created", "14 July 2000");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("description", "X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.");
scene.addMetaData("reference", "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d");
scene.addMetaData("reference", "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d");
scene.addMetaData("reference", "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d");
scene.addMetaData("reference", "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d");
scene.addMetaData("identifier", "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "CoordinateAxes.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let Collision16 = browser.currentScene.createNode("Collision");
Collision16.DEF = "DoNotCollideWithVisualizationWidget";
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
let Group17 = browser.currentScene.createNode("Group");
//Vertical Y arrow and label
let Group18 = browser.currentScene.createNode("Group");
Group18.DEF = "ArrowGreen";
let Shape19 = browser.currentScene.createNode("Shape");
let Cylinder20 = browser.currentScene.createNode("Cylinder");
Cylinder20.DEF = "ArrowCylinder";
Cylinder20.radius = 0.025;
Cylinder20.top = False;
geometry = Cylinder20;

let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "Green";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0.1,0.6,0.1]);
Material22.emissiveColor = new X3D.SFColor([0.05,0.2,0.05]);
material = Material22;

appearance = Appearance21;

Group18YYY.children = new X3D.MFNode();

Group18ZZZ.children[0] = Shape19;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([0,1,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Cone25 = browser.currentScene.createNode("Cone");
Cone25.DEF = "ArrowCone";
Cone25.bottomRadius = 0.05;
Cone25.height = 0.1;
geometry = Cone25;

let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.USE = "Green";
appearance = Appearance26;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Group18ZZZ.children[1] = Transform23;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = Group18;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new X3D.SFVec3f([0,1.08,0]);
let Billboard28 = browser.currentScene.createNode("Billboard");
let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
Appearance30.DEF = "LABEL_APPEARANCE";
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new X3D.SFColor([1,1,0.3]);
Material31.emissiveColor = new X3D.SFColor([0.33,0.33,0.1]);
material = Material31;

appearance = Appearance30;

let Text32 = browser.currentScene.createNode("Text");
Text32.string = new X3D.MFString([new X3D.SFString("Y")]);
let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.DEF = "LABEL_FONT";
FontStyle33.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle33.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle33.size = 0.2;
fontStyle = FontStyle33;

geometry = Text32;

Billboard28YYY.children = new X3D.MFNode();

Billboard28ZZZ.children[0] = Shape29;

Transform27YYY.children = new X3D.MFNode();

Transform27ZZZ.children[0] = Billboard28;

Group17ZZZ.children[1] = Transform27;

proxy = Group17;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.rotation = new X3D.SFRotation([0,0,1,-1.57079]);
//Horizontal X arrow and label
let Group35 = browser.currentScene.createNode("Group");
let Group36 = browser.currentScene.createNode("Group");
Group36.DEF = "ArrowRed";
let Shape37 = browser.currentScene.createNode("Shape");
let Cylinder38 = browser.currentScene.createNode("Cylinder");
Cylinder38.USE = "ArrowCylinder";
geometry = Cylinder38;

let Appearance39 = browser.currentScene.createNode("Appearance");
Appearance39.DEF = "Red";
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new X3D.SFColor([0.7,0.1,0.1]);
Material40.emissiveColor = new X3D.SFColor([0.33,0,0]);
material = Material40;

appearance = Appearance39;

Group36YYY.children = new X3D.MFNode();

Group36ZZZ.children[0] = Shape37;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new X3D.SFVec3f([0,1,0]);
let Shape42 = browser.currentScene.createNode("Shape");
let Cone43 = browser.currentScene.createNode("Cone");
Cone43.USE = "ArrowCone";
geometry = Cone43;

let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.USE = "Red";
appearance = Appearance44;

Transform41YYY.child = new X3D.undefined();

Transform41ZZZ.child[0] = Shape42;

Group36ZZZ.children[1] = Transform41;

Group35YYY.children = new X3D.MFNode();

Group35ZZZ.children[0] = Group36;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.rotation = new X3D.SFRotation([0,0,1,1.57079]);
Transform45.translation = new X3D.SFVec3f([0.072,1.1,0]);
//note label rotated back to original coordinate frame
let Billboard46 = browser.currentScene.createNode("Billboard");
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "LABEL_APPEARANCE";
appearance = Appearance48;

let Text49 = browser.currentScene.createNode("Text");
Text49.string = new X3D.MFString([new X3D.SFString("X")]);
let FontStyle50 = browser.currentScene.createNode("FontStyle");
FontStyle50.USE = "LABEL_FONT";
fontStyle = FontStyle50;

geometry = Text49;

Billboard46YYY.children = new X3D.MFNode();

Billboard46ZZZ.children[0] = Shape47;

Transform45YYY.children = new X3D.MFNode();

Transform45ZZZ.children[0] = Billboard46;

Group35ZZZ.children[1] = Transform45;

Transform34YYY.children = new X3D.MFNode();

Transform34ZZZ.children[0] = Group35;

proxy = Transform34;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.rotation = new X3D.SFRotation([1,0,0,1.57079]);
//Perpendicular Z arrow and label, note right-hand rule
let Group52 = browser.currentScene.createNode("Group");
let Group53 = browser.currentScene.createNode("Group");
Group53.DEF = "ArrowBlue";
let Shape54 = browser.currentScene.createNode("Shape");
let Cylinder55 = browser.currentScene.createNode("Cylinder");
Cylinder55.USE = "ArrowCylinder";
geometry = Cylinder55;

let Appearance56 = browser.currentScene.createNode("Appearance");
Appearance56.DEF = "Blue";
let Material57 = browser.currentScene.createNode("Material");
Material57.diffuseColor = new X3D.SFColor([0.3,0.3,1]);
Material57.emissiveColor = new X3D.SFColor([0.1,0.1,0.33]);
material = Material57;

appearance = Appearance56;

Group53YYY.children = new X3D.MFNode();

Group53ZZZ.children[0] = Shape54;

let Transform58 = browser.currentScene.createNode("Transform");
Transform58.translation = new X3D.SFVec3f([0,1,0]);
let Shape59 = browser.currentScene.createNode("Shape");
let Cone60 = browser.currentScene.createNode("Cone");
Cone60.USE = "ArrowCone";
geometry = Cone60;

let Appearance61 = browser.currentScene.createNode("Appearance");
Appearance61.USE = "Blue";
appearance = Appearance61;

Transform58YYY.child = new X3D.undefined();

Transform58ZZZ.child[0] = Shape59;

Group53ZZZ.children[1] = Transform58;

Group52YYY.children = new X3D.MFNode();

Group52ZZZ.children[0] = Group53;

let Transform62 = browser.currentScene.createNode("Transform");
Transform62.rotation = new X3D.SFRotation([1,0,0,-1.57079]);
Transform62.translation = new X3D.SFVec3f([0,1.1,0.072]);
//note label rotated back to original coordinate frame
let Billboard63 = browser.currentScene.createNode("Billboard");
let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
Appearance65.USE = "LABEL_APPEARANCE";
appearance = Appearance65;

let Text66 = browser.currentScene.createNode("Text");
Text66.string = new X3D.MFString([new X3D.SFString("Z")]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.USE = "LABEL_FONT";
fontStyle = FontStyle67;

geometry = Text66;

Billboard63YYY.children = new X3D.MFNode();

Billboard63ZZZ.children[0] = Shape64;

Transform62YYY.children = new X3D.MFNode();

Transform62ZZZ.children[0] = Billboard63;

Group52ZZZ.children[1] = Transform62;

Transform51YYY.children = new X3D.MFNode();

Transform51ZZZ.children[0] = Group52;

proxy = Transform51;

browser.currentScene.children[1] = Collision16;

}
main ();
