const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("title", "HAnimPoseExternProtoDeclare.x3d");
scene.addMetaData("description", "Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.");
scene.addMetaData("created", "1 November 2025");
scene.addMetaData("modified", "14 December 2025");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("creator", "Joe Williams");
scene.addMetaData("contributor", "Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses");
scene.addMetaData("reference", "Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
await browser .loadComponents (scene);
let WorldInfo21 = browser.currentScene.createNode("WorldInfo");
WorldInfo21.DEF = "ModelInfo";
WorldInfo21.info = new X3D.MFString([new X3D.SFString("Design to illustrate a potential HAnimPose node")]);
WorldInfo21.title = "HAnimPoseExternProtoDeclare";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo21;

let Background22 = browser.currentScene.createNode("Background");
Background22.skyColor = new X3D.MFColor([0.6,0.6,0.8]);
browser.currentScene.children[1] = Background22;

let NavigationInfo23 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo23;

let ExternProtoDeclare24 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "HAnimPose";
ExternProtoDeclare24.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.";
ExternProtoDeclare24.url = new X3D.MFString([new X3D.SFString("Filename.x3d#HAnimPose"), new X3D.SFString("https://some.address.org/Filename.x3d#HAnimPose")]);
ExternProtoDeclare25.getField("parentHAnimHumanoid")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare26.getField("name")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare27.getField("children")//initializating Joint nodes (if any) go here
ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare28.getField("description")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare29.getField("enabled")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare30.getField("loa")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare31.getField("transitionDuration")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare32.getField("metadata")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare33.getField("isActive")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare34.getField("commencePose")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare35.getField("resetAllJoints")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare36.getField("set_fraction")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare37.getField("set_startTime")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare38.getField("isLoaded")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare39.getField("traceEnabled")ExternProtoDeclare24YYY.field = new X3D.MFNode();

browser.currentScene.children[3] = ExternProtoDeclare24;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "HAnimPoseExternProtoDeclare description";
Viewpoint40.position = new X3D.SFVec3f([0,1,4]);
browser.currentScene.children[4] = Viewpoint40;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "DisplayHeader1";
Transform41.translation = new X3D.SFVec3f([0,1.5,0]);
let Anchor42 = browser.currentScene.createNode("Anchor");
Anchor42.description = "go to HAnimPoseExternProtoDeclareIndex page";
Anchor42.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor42.url = new X3D.MFString([new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html")]);
let Shape43 = browser.currentScene.createNode("Shape");
let Text44 = browser.currentScene.createNode("Text");
Text44.string = new X3D.MFString([new X3D.SFString("Utility scene"), new X3D.SFString("HAnimPoseExternProtoDeclare.x3d")]);
let FontStyle45 = browser.currentScene.createNode("FontStyle");
FontStyle45.DEF = "HeaderFont";
FontStyle45.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle45.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle45.size = 0.15;
FontStyle45.style = "BOLD";
fontStyle = FontStyle45;

geometry = Text44;

let Appearance46 = browser.currentScene.createNode("Appearance");
Appearance46.DEF = "PoseTextAppearance";
let Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new X3D.SFColor([0.1,0.3,0.5]);
material = Material47;

appearance = Appearance46;

Anchor42YYY.children = new X3D.MFNode();

Anchor42ZZZ.children[0] = Shape43;

let Shape48 = browser.currentScene.createNode("Shape");
let Box49 = browser.currentScene.createNode("Box");
Box49.size = new X3D.SFVec3f([3.5,0.5,0.001]);
geometry = Box49;

let Appearance50 = browser.currentScene.createNode("Appearance");
Appearance50.DEF = "TransparentAppearance";
let Material51 = browser.currentScene.createNode("Material");
Material51.transparency = 1;
material = Material51;

appearance = Appearance50;

Anchor42ZZZ.children[1] = Shape48;

Transform41YYY.children = new X3D.MFNode();

Transform41ZZZ.children[0] = Anchor42;

browser.currentScene.children[5] = Transform41;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.DEF = "DisplayHeader2";
Transform52.translation = new X3D.SFVec3f([0,0.5,0]);
let Anchor53 = browser.currentScene.createNode("Anchor");
Anchor53.description = "go to HAnimPosePrototypeIndex page";
Anchor53.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor53.url = new X3D.MFString([new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html")]);
let Shape54 = browser.currentScene.createNode("Shape");
let Text55 = browser.currentScene.createNode("Text");
Text55.string = new X3D.MFString([new X3D.SFString("This model supports"), new X3D.SFString("HAnimPosePrototype.x3d")]);
let FontStyle56 = browser.currentScene.createNode("FontStyle");
FontStyle56.USE = "HeaderFont";
fontStyle = FontStyle56;

geometry = Text55;

let Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.USE = "PoseTextAppearance";
appearance = Appearance57;

Anchor53YYY.children = new X3D.MFNode();

Anchor53ZZZ.children[0] = Shape54;

Transform52YYY.children = new X3D.MFNode();

Transform52ZZZ.children[0] = Anchor53;

let Shape58 = browser.currentScene.createNode("Shape");
let Box59 = browser.currentScene.createNode("Box");
Box59.size = new X3D.SFVec3f([2.6,0.5,0.001]);
geometry = Box59;

let Appearance60 = browser.currentScene.createNode("Appearance");
Appearance60.USE = "TransparentAppearance";
appearance = Appearance60;

Transform52ZZZ.child[1] = Shape58;

browser.currentScene.children[6] = Transform52;

}
main ();
