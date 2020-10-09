let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CoordinateAxes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Collision3 = browser.currentScene.createNode("Collision");
Collision3.DEF = "DoNotCollideWithVisualizationWidget";
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
let Group4 = browser.currentScene.createNode("Group");
//Vertical Y arrow and label
let Group5 = browser.currentScene.createNode("Group");
Group5.DEF = "ArrowGreen";
let Shape6 = browser.currentScene.createNode("Shape");
let Cylinder7 = browser.currentScene.createNode("Cylinder");
Cylinder7.DEF = "ArrowCylinder";
Cylinder7.radius = 0.025;
Cylinder7.top = False;
Shape6.geometry = Cylinder7;

let Appearance8 = browser.currentScene.createNode("Appearance");
Appearance8.DEF = "Green";
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.1,0.6,0.1]);
Material9.emissiveColor = new SFColor(new float[0.05,0.2,0.05]);
Appearance8.material = Material9;

Shape6.appearance = Appearance8;

Group5.children = new MFNode();

Group5.children[0] = Shape6;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.translation = new SFVec3f(new float[0,1,0]);
let Shape11 = browser.currentScene.createNode("Shape");
let Cone12 = browser.currentScene.createNode("Cone");
Cone12.DEF = "ArrowCone";
Cone12.bottomRadius = 0.05;
Cone12.height = 0.1;
Shape11.geometry = Cone12;

let Appearance13 = browser.currentScene.createNode("Appearance");
Appearance13.USE = "Green";
Shape11.appearance = Appearance13;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Group5.children[1] = Transform10;

Group4.children = new MFNode();

Group4.children[0] = Group5;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = new SFVec3f(new float[0,1.08,0]);
let Billboard15 = browser.currentScene.createNode("Billboard");
let Shape16 = browser.currentScene.createNode("Shape");
let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "LABEL_APPEARANCE";
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[1,1,0.3]);
Material18.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

let Text19 = browser.currentScene.createNode("Text");
Text19.string = new MFString(new java.lang.String["Y"]);
let FontStyle20 = browser.currentScene.createNode("FontStyle");
FontStyle20.DEF = "LABEL_FONT";
FontStyle20.family = new MFString(new java.lang.String["SANS"]);
FontStyle20.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle20.size = 0.2;
Text19.fontStyle = FontStyle20;

Shape16.geometry = Text19;

Billboard15.children = new MFNode();

Billboard15.children[0] = Shape16;

Transform14.children = new MFNode();

Transform14.children[0] = Billboard15;

Group4.children[1] = Transform14;

Collision3.proxy = Group4;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.rotation = new SFRotation(new float[0,0,1,-1.57079]);
//Horizontal X arrow and label
let Group22 = browser.currentScene.createNode("Group");
let Group23 = browser.currentScene.createNode("Group");
Group23.DEF = "ArrowRed";
let Shape24 = browser.currentScene.createNode("Shape");
let Cylinder25 = browser.currentScene.createNode("Cylinder");
Cylinder25.USE = "ArrowCylinder";
Shape24.geometry = Cylinder25;

let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.DEF = "Red";
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[0.7,0.1,0.1]);
Material27.emissiveColor = new SFColor(new float[0.33,0,0]);
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Group23.children = new MFNode();

Group23.children[0] = Shape24;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,1,0]);
let Shape29 = browser.currentScene.createNode("Shape");
let Cone30 = browser.currentScene.createNode("Cone");
Cone30.USE = "ArrowCone";
Shape29.geometry = Cone30;

let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.USE = "Red";
Shape29.appearance = Appearance31;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

Group23.children[1] = Transform28;

Group22.children = new MFNode();

Group22.children[0] = Group23;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new SFRotation(new float[0,0,1,1.57079]);
Transform32.translation = new SFVec3f(new float[0.072,1.1,0]);
//note label rotated back to original coordinate frame
let Billboard33 = browser.currentScene.createNode("Billboard");
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.USE = "LABEL_APPEARANCE";
Shape34.appearance = Appearance35;

let Text36 = browser.currentScene.createNode("Text");
Text36.string = new MFString(new java.lang.String["X"]);
let FontStyle37 = browser.currentScene.createNode("FontStyle");
FontStyle37.USE = "LABEL_FONT";
Text36.fontStyle = FontStyle37;

Shape34.geometry = Text36;

Billboard33.children = new MFNode();

Billboard33.children[0] = Shape34;

Transform32.children = new MFNode();

Transform32.children[0] = Billboard33;

Group22.children[1] = Transform32;

Transform21.children = new MFNode();

Transform21.children[0] = Group22;

Collision3.proxy = Transform21;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.rotation = new SFRotation(new float[1,0,0,1.57079]);
//Perpendicular Z arrow and label, note right-hand rule
let Group39 = browser.currentScene.createNode("Group");
let Group40 = browser.currentScene.createNode("Group");
Group40.DEF = "ArrowBlue";
let Shape41 = browser.currentScene.createNode("Shape");
let Cylinder42 = browser.currentScene.createNode("Cylinder");
Cylinder42.USE = "ArrowCylinder";
Shape41.geometry = Cylinder42;

let Appearance43 = browser.currentScene.createNode("Appearance");
Appearance43.DEF = "Blue";
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material44.emissiveColor = new SFColor(new float[0.1,0.1,0.33]);
Appearance43.material = Material44;

Shape41.appearance = Appearance43;

Group40.children = new MFNode();

Group40.children[0] = Shape41;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,1,0]);
let Shape46 = browser.currentScene.createNode("Shape");
let Cone47 = browser.currentScene.createNode("Cone");
Cone47.USE = "ArrowCone";
Shape46.geometry = Cone47;

let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "Blue";
Shape46.appearance = Appearance48;

Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

Group40.children[1] = Transform45;

Group39.children = new MFNode();

Group39.children[0] = Group40;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.rotation = new SFRotation(new float[1,0,0,-1.57079]);
Transform49.translation = new SFVec3f(new float[0,1.1,0.072]);
//note label rotated back to original coordinate frame
let Billboard50 = browser.currentScene.createNode("Billboard");
let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
Appearance52.USE = "LABEL_APPEARANCE";
Shape51.appearance = Appearance52;

let Text53 = browser.currentScene.createNode("Text");
Text53.string = new MFString(new java.lang.String["Z"]);
let FontStyle54 = browser.currentScene.createNode("FontStyle");
FontStyle54.USE = "LABEL_FONT";
Text53.fontStyle = FontStyle54;

Shape51.geometry = Text53;

Billboard50.children = new MFNode();

Billboard50.children[0] = Shape51;

Transform49.children = new MFNode();

Transform49.children[0] = Billboard50;

Group39.children[1] = Transform49;

Transform38.children = new MFNode();

Transform38.children[0] = Group39;

Collision3.proxy = Transform38;

browser.currentScene.children[1] = Collision3;

