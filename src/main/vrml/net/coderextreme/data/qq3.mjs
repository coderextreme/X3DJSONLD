const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "qq3.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("translator", "John Carlson");
scene.addMetaData("created", "11 Jan 2015");
scene.addMetaData("modified", "05 May 2017");
scene.addMetaData("description", "12 extrusions");
scene.addMetaData("identifier", "https://coderextreme.net/x3d/qq3.x3d");
scene.addMetaData("generator", "manual");
await browser .loadComponents (scene);
let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Process" ><ProtoBody><Group><!--left--><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeLeftDown"><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 1 0"></Material>
</Appearance>
<Extrusion spine="-2.5 0 0 -2 0 0 -1.5 0 0" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0"></Extrusion>
</Shape>
</Transform>
<!--right--><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeUpRight"><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0.7 1"></Material>
</Appearance>
<Extrusion spine="1.5 0 0 2 0 0 2.5 0 0" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0"></Extrusion>
</Shape>
</Transform>
<!--up--><Transform scale="0.5 0.5 0.5"><Shape USE="ShapeUpRight"></Shape>
</Transform>
<!--down--><Transform scale="0.5 0.5 0.5"><Shape USE="ShapeLeftDown"></Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "Process";
let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Group13 = browser.currentScene.createNode("Group");
//left
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "ShapeLeftDown";
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new X3D.SFColor([0.7,1,0]);
material = Material17;

appearance = Appearance16;

let Extrusion18 = browser.currentScene.createNode("Extrusion");
Extrusion18.spine = new X3D.MFVec3f([-2.5,0,0,-2,0,0,-1.5,0,0]);
Extrusion18.creaseAngle = 0.785;
Extrusion18.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
geometry = Extrusion18;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape15;

Group13YYY.children = new X3D.MFNode();

Group13ZZZ.children[0] = Transform14;

//right
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "ShapeUpRight";
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0,0.7,1]);
material = Material22;

appearance = Appearance21;

let Extrusion23 = browser.currentScene.createNode("Extrusion");
Extrusion23.spine = new X3D.MFVec3f([1.5,0,0,2,0,0,2.5,0,0]);
Extrusion23.creaseAngle = 0.785;
Extrusion23.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
geometry = Extrusion23;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

Group13ZZZ.children[1] = Transform19;

//up
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.USE = "ShapeUpRight";
Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Group13ZZZ.children[2] = Transform24;

//down
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.USE = "ShapeLeftDown";
Transform26YYY.child = new X3D.undefined();

Transform26ZZZ.child[0] = Shape27;

Group13ZZZ.children[3] = Transform26;

ProtoBody12YYY.children = new X3D.MFNode();

ProtoBody12ZZZ.children[0] = Group13;

protoBody = ProtoBody12;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "Process pipes";
Viewpoint28.orientation = new X3D.SFRotation([1,0,0,-0.4]);
Viewpoint28.position = new X3D.SFVec3f([0,5,12]);
browser.currentScene.children[1] = Viewpoint28;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([0,-2.5,0]);
let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "Process";
Transform29YYY.children = new X3D.MFNode();

Transform29ZZZ.children[0] = ProtoInstance30;

browser.currentScene.children[2] = Transform29;

let Transform31 = browser.currentScene.createNode("Transform");
let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "Process";
Transform31YYY.children = new X3D.MFNode();

Transform31ZZZ.children[0] = ProtoInstance32;

browser.currentScene.children[3] = Transform31;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new X3D.SFVec3f([0,2.5,0]);
let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "Process";
Transform33YYY.children = new X3D.MFNode();

Transform33ZZZ.children[0] = ProtoInstance34;

browser.currentScene.children[4] = Transform33;

}
main ();
