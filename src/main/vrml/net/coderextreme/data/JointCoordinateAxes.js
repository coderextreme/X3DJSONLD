const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("converter", "x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("converted", "Mon, 31 Jul 2023 03:48:04 GMT");
await browser .loadComponents (scene);
let NavigationInfo5 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo5.headlight = False;
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo5;

let Group6 = browser.currentScene.createNode("Group");
let Group7 = browser.currentScene.createNode("Group");
Group7.DEF = "ARROW";
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
Appearance9.DEF = "ARROW_APPEARANCE";
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new X3D.SFColor([0.3,0.3,1]);
Material10.emissiveColor = new X3D.SFColor([0.3,0.3,0.33]);
material = Material10;

appearance = Appearance9;

let Cylinder11 = browser.currentScene.createNode("Cylinder");
Cylinder11.top = False;
Cylinder11.bottom = False;
Cylinder11.radius = 0.025;
geometry = Cylinder11;

Group7YYY.children = new X3D.MFNode();

Group7ZZZ.children[0] = Shape8;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new X3D.SFVec3f([0,1,0]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "ARROW_POINTER";
let Appearance14 = browser.currentScene.createNode("Appearance");
Appearance14.USE = "ARROW_APPEARANCE";
appearance = Appearance14;

let Cone15 = browser.currentScene.createNode("Cone");
Cone15.height = 0.1;
Cone15.bottomRadius = 0.05;
geometry = Cone15;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

Group7ZZZ.children[1] = Transform12;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new X3D.SFVec3f([0,-1,0]);
Transform16.rotation = new X3D.SFRotation([1,0,0,3.1416]);
let Shape17 = browser.currentScene.createNode("Shape");
Shape17.USE = "ARROW_POINTER";
Transform16YYY.child = new X3D.undefined();

Transform16ZZZ.child[0] = Shape17;

Group7ZZZ.children[2] = Transform16;

Group6YYY.children = new X3D.MFNode();

Group6ZZZ.children[0] = Group7;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new X3D.SFVec3f([0,1.08,0]);
let Billboard19 = browser.currentScene.createNode("Billboard");
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "LABEL_APPEARANCE";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([1,1,0.3]);
Material22.emissiveColor = new X3D.SFColor([0.33,0.33,0.1]);
material = Material22;

appearance = Appearance21;

let Text23 = browser.currentScene.createNode("Text");
Text23.string = new X3D.MFString([new X3D.SFString("Y")]);
let FontStyle24 = browser.currentScene.createNode("FontStyle");
FontStyle24.DEF = "LABEL_FONT";
FontStyle24.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle24.size = 0.2;
FontStyle24.justify = new X3D.MFString([new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle24;

geometry = Text23;

Billboard19YYY.children = new X3D.MFNode();

Billboard19ZZZ.children[0] = Shape20;

Transform18YYY.children = new X3D.MFNode();

Transform18ZZZ.children[0] = Billboard19;

Group6ZZZ.children[1] = Transform18;

browser.currentScene.children[1] = Group6;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.rotation = new X3D.SFRotation([0,0,1,-1.5708]);
let Group26 = browser.currentScene.createNode("Group");
let Group27 = browser.currentScene.createNode("Group");
Group27.USE = "ARROW";
Group26YYY.children = new X3D.MFNode();

Group26ZZZ.children[0] = Group27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new X3D.SFVec3f([0.072,1.1,0]);
Transform28.rotation = new X3D.SFRotation([0,0,1,1.5708]);
let Billboard29 = browser.currentScene.createNode("Billboard");
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.USE = "LABEL_APPEARANCE";
appearance = Appearance31;

let Text32 = browser.currentScene.createNode("Text");
Text32.string = new X3D.MFString([new X3D.SFString("X")]);
let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.USE = "LABEL_FONT";
fontStyle = FontStyle33;

geometry = Text32;

Billboard29YYY.children = new X3D.MFNode();

Billboard29ZZZ.children[0] = Shape30;

Transform28YYY.children = new X3D.MFNode();

Transform28ZZZ.children[0] = Billboard29;

Group26ZZZ.children[1] = Transform28;

Transform25YYY.children = new X3D.MFNode();

Transform25ZZZ.children[0] = Group26;

browser.currentScene.children[2] = Transform25;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.rotation = new X3D.SFRotation([1,0,0,1.5708]);
let Group35 = browser.currentScene.createNode("Group");
let Group36 = browser.currentScene.createNode("Group");
Group36.USE = "ARROW";
Group35YYY.children = new X3D.MFNode();

Group35ZZZ.children[0] = Group36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new X3D.SFVec3f([0,1.1,0.072]);
Transform37.rotation = new X3D.SFRotation([1,0,0,-1.5708]);
let Billboard38 = browser.currentScene.createNode("Billboard");
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.USE = "LABEL_APPEARANCE";
appearance = Appearance40;

let Text41 = browser.currentScene.createNode("Text");
Text41.string = new X3D.MFString([new X3D.SFString("Z")]);
let FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.USE = "LABEL_FONT";
fontStyle = FontStyle42;

geometry = Text41;

Billboard38YYY.children = new X3D.MFNode();

Billboard38ZZZ.children[0] = Shape39;

Transform37YYY.children = new X3D.MFNode();

Transform37ZZZ.children[0] = Billboard38;

Group35ZZZ.children[1] = Transform37;

Transform34YYY.children = new X3D.MFNode();

Transform34ZZZ.children[0] = Group35;

browser.currentScene.children[3] = Transform34;

}
main ();
