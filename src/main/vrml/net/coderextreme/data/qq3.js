var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "Process";
ProtoBody3 = browser.currentScene.createNode("ProtoBody");
Group4 = browser.currentScene.createNode("Group");
//left
Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape6 = browser.currentScene.createNode("Shape");
Shape6.DEF = "ShapeLeftDown";
Appearance7 = browser.currentScene.createNode("Appearance");
Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.7,1,0]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

Extrusion9 = browser.currentScene.createNode("Extrusion");
Extrusion9.spine = new MFVec3f(new float[-2.5,0,0,-1.5,0,0]);
Extrusion9.creaseAngle = 0.785;
Extrusion9.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape6.geometry = Extrusion9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

Group4.children = new MFNode();

Group4.children[0] = Transform5;

//right
Transform10 = browser.currentScene.createNode("Transform");
Transform10.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "ShapeUpRight";
Appearance12 = browser.currentScene.createNode("Appearance");
Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0,0.7,1]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

Extrusion14 = browser.currentScene.createNode("Extrusion");
Extrusion14.spine = new MFVec3f(new float[1.5,0,0,2.5,0,0]);
Extrusion14.creaseAngle = 0.785;
Extrusion14.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape11.geometry = Extrusion14;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Group4.children[1] = Transform10;

//up
Transform15 = browser.currentScene.createNode("Transform");
Transform15.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape16 = browser.currentScene.createNode("Shape");
Shape16.USE = "ShapeUpRight";
Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

Group4.children[2] = Transform15;

//down
Transform17 = browser.currentScene.createNode("Transform");
Transform17.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape18 = browser.currentScene.createNode("Shape");
Shape18.USE = "ShapeLeftDown";
Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Group4.children[3] = Transform17;

ProtoBody3.children = new MFNode();

ProtoBody3.children[0] = Group4;

ProtoDeclare2.protoBody = ProtoBody3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "Process pipes";
Viewpoint19.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint19.position = new SFVec3f(new float[0,5,12]);
browser.currentScene.children[1] = Viewpoint19;

Transform20 = browser.currentScene.createNode("Transform");
Transform20.translation = new SFVec3f(new float[0,-2.5,0]);
ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "Process";
Transform20.children = new MFNode();

Transform20.children[0] = ProtoInstance21;

browser.currentScene.children[2] = Transform20;

Transform22 = browser.currentScene.createNode("Transform");
ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "Process";
Transform22.children = new MFNode();

Transform22.children[0] = ProtoInstance23;

browser.currentScene.children[3] = Transform22;

Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.5,0]);
ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "Process";
Transform24.children = new MFNode();

Transform24.children[0] = ProtoInstance25;

browser.currentScene.children[4] = Transform24;

