var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Collision2 = browser.currentScene.createNode("Collision");
Collision2.DEF = "DoNotCollideWithVisualizationWidget";
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group3 = browser.currentScene.createNode("Group");
//Vertical Y arrow and label
Group4 = browser.currentScene.createNode("Group");
Group4.DEF = "ArrowGreen";
Shape5 = browser.currentScene.createNode("Shape");
Cylinder6 = browser.currentScene.createNode("Cylinder");
Cylinder6.DEF = "ArrowCylinder";
Cylinder6.radius = 0.025;
Cylinder6.top = False;
Shape5.geometry = Cylinder6;

Appearance7 = browser.currentScene.createNode("Appearance");
Appearance7.DEF = "Green";
Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = [0.1,0.6,0.1];
Material8.emissiveColor = [0.05,0.2,0.05];
Appearance7.material = Material8;

Shape5.appearance = Appearance7;

Group4.children = [];

Group4.children[0] = Shape5;

Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = [0,1,0];
Shape10 = browser.currentScene.createNode("Shape");
Cone11 = browser.currentScene.createNode("Cone");
Cone11.DEF = "ArrowCone";
Cone11.bottomRadius = 0.05;
Cone11.height = 0.1;
Shape10.geometry = Cone11;

Appearance12 = browser.currentScene.createNode("Appearance");
Appearance12.USE = "Green";
Shape10.appearance = Appearance12;

Transform9.children = [];

Transform9.children[0] = Shape10;

Group4.children[1] = Transform9;

Group3.children = [];

Group3.children[0] = Group4;

Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = [0,1.08,0];
Billboard14 = browser.currentScene.createNode("Billboard");
Shape15 = browser.currentScene.createNode("Shape");
Appearance16 = browser.currentScene.createNode("Appearance");
Appearance16.DEF = "LABEL_APPEARANCE";
Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = [1,1,0.3];
Material17.emissiveColor = [0.33,0.33,0.1];
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

Text18 = browser.currentScene.createNode("Text");
Text18.string = ["Y"];
FontStyle19 = browser.currentScene.createNode("FontStyle");
FontStyle19.DEF = "LABEL_FONT";
FontStyle19.family = ["SANS"];
FontStyle19.justify = ["MIDDLE","MIDDLE"];
FontStyle19.size = 0.2;
Text18.fontStyle = FontStyle19;

Shape15.geometry = Text18;

Billboard14.children = [];

Billboard14.children[0] = Shape15;

Transform13.children = [];

Transform13.children[0] = Billboard14;

Group3.children[1] = Transform13;

Collision2.proxy = Group3;

Transform20 = browser.currentScene.createNode("Transform");
Transform20.rotation = [0,0,1,-1.57079];
//Horizontal X arrow and label
Group21 = browser.currentScene.createNode("Group");
Group22 = browser.currentScene.createNode("Group");
Group22.DEF = "ArrowRed";
Shape23 = browser.currentScene.createNode("Shape");
Cylinder24 = browser.currentScene.createNode("Cylinder");
Cylinder24.USE = "ArrowCylinder";
Shape23.geometry = Cylinder24;

Appearance25 = browser.currentScene.createNode("Appearance");
Appearance25.DEF = "Red";
Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = [0.7,0.1,0.1];
Material26.emissiveColor = [0.33,0,0];
Appearance25.material = Material26;

Shape23.appearance = Appearance25;

Group22.children = [];

Group22.children[0] = Shape23;

Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = [0,1,0];
Shape28 = browser.currentScene.createNode("Shape");
Cone29 = browser.currentScene.createNode("Cone");
Cone29.USE = "ArrowCone";
Shape28.geometry = Cone29;

Appearance30 = browser.currentScene.createNode("Appearance");
Appearance30.USE = "Red";
Shape28.appearance = Appearance30;

Transform27.children = [];

Transform27.children[0] = Shape28;

Group22.children[1] = Transform27;

Group21.children = [];

Group21.children[0] = Group22;

Transform31 = browser.currentScene.createNode("Transform");
Transform31.rotation = [0,0,1,1.57079];
Transform31.translation = [0.072,1.1,0];
//note label rotated back to original coordinate frame
Billboard32 = browser.currentScene.createNode("Billboard");
Shape33 = browser.currentScene.createNode("Shape");
Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.USE = "LABEL_APPEARANCE";
Shape33.appearance = Appearance34;

Text35 = browser.currentScene.createNode("Text");
Text35.string = ["X"];
FontStyle36 = browser.currentScene.createNode("FontStyle");
FontStyle36.USE = "LABEL_FONT";
Text35.fontStyle = FontStyle36;

Shape33.geometry = Text35;

Billboard32.children = [];

Billboard32.children[0] = Shape33;

Transform31.children = [];

Transform31.children[0] = Billboard32;

Group21.children[1] = Transform31;

Transform20.children = [];

Transform20.children[0] = Group21;

Collision2.proxy = Transform20;

Transform37 = browser.currentScene.createNode("Transform");
Transform37.rotation = [1,0,0,1.57079];
//Perpendicular Z arrow and label, note right-hand rule
Group38 = browser.currentScene.createNode("Group");
Group39 = browser.currentScene.createNode("Group");
Group39.DEF = "ArrowBlue";
Shape40 = browser.currentScene.createNode("Shape");
Cylinder41 = browser.currentScene.createNode("Cylinder");
Cylinder41.USE = "ArrowCylinder";
Shape40.geometry = Cylinder41;

Appearance42 = browser.currentScene.createNode("Appearance");
Appearance42.DEF = "Blue";
Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = [0.3,0.3,1];
Material43.emissiveColor = [0.1,0.1,0.33];
Appearance42.material = Material43;

Shape40.appearance = Appearance42;

Group39.children = [];

Group39.children[0] = Shape40;

Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = [0,1,0];
Shape45 = browser.currentScene.createNode("Shape");
Cone46 = browser.currentScene.createNode("Cone");
Cone46.USE = "ArrowCone";
Shape45.geometry = Cone46;

Appearance47 = browser.currentScene.createNode("Appearance");
Appearance47.USE = "Blue";
Shape45.appearance = Appearance47;

Transform44.children = [];

Transform44.children[0] = Shape45;

Group39.children[1] = Transform44;

Group38.children = [];

Group38.children[0] = Group39;

Transform48 = browser.currentScene.createNode("Transform");
Transform48.rotation = [1,0,0,-1.57079];
Transform48.translation = [0,1.1,0.072];
//note label rotated back to original coordinate frame
Billboard49 = browser.currentScene.createNode("Billboard");
Shape50 = browser.currentScene.createNode("Shape");
Appearance51 = browser.currentScene.createNode("Appearance");
Appearance51.USE = "LABEL_APPEARANCE";
Shape50.appearance = Appearance51;

Text52 = browser.currentScene.createNode("Text");
Text52.string = ["Z"];
FontStyle53 = browser.currentScene.createNode("FontStyle");
FontStyle53.USE = "LABEL_FONT";
Text52.fontStyle = FontStyle53;

Shape50.geometry = Text52;

Billboard49.children = [];

Billboard49.children[0] = Shape50;

Transform48.children = [];

Transform48.children[0] = Billboard49;

Group38.children[1] = Transform48;

Transform37.children = [];

Transform37.children[0] = Group38;

Collision2.proxy = Transform37;

browser.currentScene.children = [];

browser.currentScene.children[0] = Collision2;

