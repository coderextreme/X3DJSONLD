let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "qq3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "translator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "11 Jan 2015";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "05 May 2017";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "12 extrusions to test prototype expander";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "identifier";
meta8.content = "https://coderextreme.net/x3d/qq3.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "generator";
meta9.content = "manual";
head1.meta[7] = meta9;

head = head1;

let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Process" ><ProtoBody><Group><!--left--><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeLeftDown"><Appearance><Material diffuseColor="0.7 1 0"></Material>
</Appearance>
<Extrusion containerField="geometry" spine="-2.5 0 0 -1.5 0 0" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0"></Extrusion>
</Shape>
</Transform>
<!--right--><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeUpRight"><Appearance><Material diffuseColor="0 0.7 1"></Material>
</Appearance>
<Extrusion containerField="geometry" spine="1.5 0 0 2.5 0 0" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0"></Extrusion>
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
Transform14.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "ShapeLeftDown";
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.7,1,0]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let Extrusion18 = browser.currentScene.createNode("Extrusion");
Extrusion18.spine = new MFVec3f(new float[-2.5,0,0,-1.5,0,0]);
Extrusion18.creaseAngle = 0.785;
Extrusion18.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape15.geometry = Extrusion18;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

Group13.children = new MFNode();

Group13.children[0] = Transform14;

//right
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "ShapeUpRight";
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,0.7,1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Extrusion23 = browser.currentScene.createNode("Extrusion");
Extrusion23.spine = new MFVec3f(new float[1.5,0,0,2.5,0,0]);
Extrusion23.creaseAngle = 0.785;
Extrusion23.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape20.geometry = Extrusion23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Group13.children[1] = Transform19;

//up
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.USE = "ShapeUpRight";
Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Group13.children[2] = Transform24;

//down
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.USE = "ShapeLeftDown";
Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

Group13.children[3] = Transform26;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare11.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "Process pipes";
Viewpoint28.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint28.position = new SFVec3f(new float[0,5,12]);
browser.currentScene.children[1] = Viewpoint28;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,-2.5,0]);
let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "Process";
Transform29.children = new MFNode();

Transform29.children[0] = ProtoInstance30;

browser.currentScene.children[2] = Transform29;

let Transform31 = browser.currentScene.createNode("Transform");
let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "Process";
Transform31.children = new MFNode();

Transform31.children[0] = ProtoInstance32;

browser.currentScene.children[3] = Transform31;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,2.5,0]);
let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "Process";
Transform33.children = new MFNode();

Transform33.children[0] = ProtoInstance34;

browser.currentScene.children[4] = Transform33;

