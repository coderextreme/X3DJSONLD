const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("CADInterchange"));
scene .addComponent (browser .getComponent ("CADGeometry", 2));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 1));
scene.addMetaData("title", "CADPartChildNoTransformation.x3d");
scene.addMetaData("description", "Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.");
scene.addMetaData("creator", "Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk");
scene.addMetaData("translator", "Vince Marchetti bushing generation using python scripts");
scene.addMetaData("reference", "https://www.web3d.org/member-only/mantis/view.php?id=528");
scene.addMetaData("warning", "This scene is intended for specification development only.");
scene.addMetaData("created", "29 June 2012");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "CADPartChildNoTransformation.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new X3D.MFColor([0.9607843,1,0.9607843]);
browser.currentScene.children[1] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Hello CAD bushing";
Viewpoint18.orientation = new X3D.SFRotation([1,0,0,-0.321751]);
Viewpoint18.position = new X3D.SFVec3f([0,5,15]);
browser.currentScene.children[2] = Viewpoint18;

let CADAssembly19 = browser.currentScene.createNode("CADAssembly");
CADAssembly19.name = "DesignPatternAssembly";
let CADPart20 = browser.currentScene.createNode("CADPart");
CADPart20.name = "CADPartExample";
//the rotation and translation attributes serve to position the bushing within the assembly
let CADFace21 = browser.currentScene.createNode("CADFace");
CADFace21.name = "outerSurface";
let Shape22 = browser.currentScene.createNode("Shape");
//note solid='true' and so one-sided external rendering only
let Cylinder23 = browser.currentScene.createNode("Cylinder");
Cylinder23.bottom = False;
Cylinder23.height = 3;
Cylinder23.radius = 2;
Cylinder23.top = False;
geometry = Cylinder23;

let Appearance24 = browser.currentScene.createNode("Appearance");
Appearance24.DEF = "AppearanceGrey";
let Material25 = browser.currentScene.createNode("Material");
material = Material25;

appearance = Appearance24;

shape = Shape22;

CADPart20YYY.children = new X3D.MFNode();

CADPart20ZZZ.children[0] = CADFace21;

let CADFace26 = browser.currentScene.createNode("CADFace");
CADFace26.name = "innerSurface";
let Shape27 = browser.currentScene.createNode("Shape");
//note solid='false' and so two-sided internal + external rendering
let Cylinder28 = browser.currentScene.createNode("Cylinder");
Cylinder28.bottom = False;
Cylinder28.height = 3;
Cylinder28.solid = False;
Cylinder28.top = False;
geometry = Cylinder28;

let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.USE = "AppearanceGrey";
appearance = Appearance29;

shape = Shape27;

CADPart20ZZZ.children[1] = CADFace26;

let CADFace30 = browser.currentScene.createNode("CADFace");
CADFace30.name = "topCap";
let Shape31 = browser.currentScene.createNode("Shape");
let IndexedTriangleSet32 = browser.currentScene.createNode("IndexedTriangleSet");
IndexedTriangleSet32.index = new X3D.MFInt32([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new X3D.MFVec3f([2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0]);
coord = Coordinate33;

geometry = IndexedTriangleSet32;

let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.USE = "AppearanceGrey";
appearance = Appearance34;

shape = Shape31;

CADPart20ZZZ.children[2] = CADFace30;

let CADFace35 = browser.currentScene.createNode("CADFace");
CADFace35.name = "bottomCap";
let Shape36 = browser.currentScene.createNode("Shape");
let IndexedTriangleSet37 = browser.currentScene.createNode("IndexedTriangleSet");
IndexedTriangleSet37.index = new X3D.MFInt32([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new X3D.MFVec3f([2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0]);
coord = Coordinate38;

geometry = IndexedTriangleSet37;

let Appearance39 = browser.currentScene.createNode("Appearance");
Appearance39.USE = "AppearanceGrey";
appearance = Appearance39;

shape = Shape36;

CADPart20ZZZ.children[3] = CADFace35;

CADAssembly19YYY.children = new X3D.MFNode();

CADAssembly19ZZZ.children[0] = CADPart20;

browser.currentScene.children[3] = CADAssembly19;

}
main ();
