const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("title", "InlineSoundSource.x3d");
scene.addMetaData("description", "This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file.");
scene.addMetaData("info", "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.");
scene.addMetaData("creator", "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman");
scene.addMetaData("created", "28 October 2020");
scene.addMetaData("modified", "4 August 2021");
scene.addMetaData("reference", "CHANGELOG.txt");
scene.addMetaData("TODO", "credit for audio files");
scene.addMetaData("reference", "https://medialab.hmu.gr/minipages/x3domAudio");
scene.addMetaData("identifier", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "InlineSoundSource.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.DEF = "NAV";
browser.currentScene.children[1] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new X3D.MFString([new X3D.SFString("images/generic/BK1.png"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")]);
Background17.bottomUrl = new X3D.MFString([new X3D.SFString("images/generic/DN1.png"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")]);
Background17.frontUrl = new X3D.MFString([new X3D.SFString("images/generic/FR1.png"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")]);
Background17.leftUrl = new X3D.MFString([new X3D.SFString("images/generic/LF1.png"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")]);
Background17.rightUrl = new X3D.MFString([new X3D.SFString("images/generic/RT1.png"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")]);
Background17.topUrl = new X3D.MFString([new X3D.SFString("images/generic/UP1.png"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")]);
browser.currentScene.children[2] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "Camera001";
Viewpoint18.description = "Camera001";
Viewpoint18.farDistance = 0;
Viewpoint18.nearDistance = 1;
Viewpoint18.orientation = new X3D.SFRotation([1,0,0,-0.523599]);
Viewpoint18.position = new X3D.SFVec3f([0,2000,3500]);
browser.currentScene.children[3] = Viewpoint18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "Floor";
Transform19.translation = new X3D.SFVec3f([1.241,0,0.358]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "WireColor";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0.122,0.114,0.125]);
material = Material22;

appearance = Appearance21;

let IndexedFaceSet23 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet23.DEF = "Box001-GEOMETRY";
IndexedFaceSet23.coordIndex = new X3D.MFInt32([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]);
IndexedFaceSet23.solid = False;
let Coordinate24 = browser.currentScene.createNode("Coordinate");
Coordinate24.point = new X3D.MFVec3f([-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000]);
coord = Coordinate24;

let Normal25 = browser.currentScene.createNode("Normal");
Normal25.vector = new X3D.MFVec3f([0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
normal = Normal25;

geometry = IndexedFaceSet23;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[4] = Transform19;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "InlineScene";
let Inline27 = browser.currentScene.createNode("Inline");
Inline27.DEF = "inline";
Inline27.url = new X3D.MFString([new X3D.SFString("x3d/example1.x3d"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d"), new X3D.SFString("x3d/example1.wrl"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl")]);
Transform26YYY.children = new X3D.MFNode();

Transform26ZZZ.children[0] = Inline27;

browser.currentScene.children[5] = Transform26;

}
main ();
