const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene .addComponent (browser .getComponent ("DIS", 2));
//<component name='Shape' level='4'></component>
//Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
scene.addMetaData("title", "bumpyx_itesliders.x3d");
scene.addMetaData("description", "*enter description here, short-sentence summaries preferred*");
scene.addMetaData("creator", "Doug Sanden, Christoph Valentin, John Carlson");
scene.addMetaData("translator", "*if manually translating VRML-to-X3D, enter name of person translating here*");
scene.addMetaData("created", "*enter date of initial version here*");
scene.addMetaData("translated", "*enter date of translation here*");
scene.addMetaData("modified", "*enter date of latest revision here*");
scene.addMetaData("version", "*enter version here, if any*");
scene.addMetaData("reference", "*enter reference citation or relative/online url here*");
scene.addMetaData("reference", "*enter additional url/bibliographic reference information here*");
scene.addMetaData("requires", "*enter reference resource here if required to support function, delivery, or coherence of content*");
scene.addMetaData("rights", "*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024");
scene.addMetaData("drawing", "*enter drawing filename/url here*");
scene.addMetaData("MovingImage", "*enter movie filename/url here*");
scene.addMetaData("photo", "*enter photo filename/url here*");
scene.addMetaData("subject", "*enter subject keywords here*");
scene.addMetaData("accessRights", "*enter permission statements or url here*");
scene.addMetaData("identifier", "*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*");
scene.addMetaData("generator", "PSPad, http://www.pspad.com/");
scene.addMetaData("license", "license.html");
//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
await browser .loadComponents (scene);
//LayerSet with two layers, navigation happens in layer 1
let LayerSet32 = browser.currentScene.createNode("LayerSet");
LayerSet32.activeLayer = 1;
LayerSet32.order = new X3D.MFInt32([1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
let Layer33 = browser.currentScene.createNode("Layer");
Layer33.pickable = True;
Layer33.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
//basic nodes, which might be present in any scene
let NavigationInfo34 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo34.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
NavigationInfo34.avatarSize = new X3D.MFFloat([0.25,1.75,0.75]);
Layer33YYY.children = new X3D.MFNode();

Layer33ZZZ.children[0] = NavigationInfo34;

let DirectionalLight35 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight35.ambientIntensity = 0.2;
DirectionalLight35.direction = new X3D.SFVec3f([0,-1,0]);
Layer33ZZZ.children[1] = DirectionalLight35;

let DirectionalLight36 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight36.ambientIntensity = 0.2;
DirectionalLight36.direction = new X3D.SFVec3f([-1,-0.1,-1]);
Layer33ZZZ.children[2] = DirectionalLight36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "My Overview";
Viewpoint37.fieldOfView = 1.570796;
Viewpoint37.position = new X3D.SFVec3f([0,1.75,60]);
Layer33ZZZ.children[3] = Viewpoint37;

//this group contains the red/green/blue 3D crosshair
let Group38 = browser.currentScene.createNode("Group");
//Arrow X
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new X3D.SFVec3f([25,0,0]);
Transform39.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape40 = browser.currentScene.createNode("Shape");
let Cylinder41 = browser.currentScene.createNode("Cylinder");
Cylinder41.DEF = "Shaft";
Cylinder41.radius = 0.35;
Cylinder41.height = 50;
geometry = Cylinder41;

let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.DEF = "RED";
Material43.diffuseColor = new X3D.SFColor([1,0,0]);
Material43.emissiveColor = new X3D.SFColor([1,0,0]);
material = Material43;

appearance = Appearance42;

Transform39YYY.child = new X3D.undefined();

Transform39ZZZ.child[0] = Shape40;

Group38YYY.children = new X3D.MFNode();

Group38ZZZ.children[0] = Transform39;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new X3D.SFVec3f([50,0,0]);
Transform44.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape45 = browser.currentScene.createNode("Shape");
let Cone46 = browser.currentScene.createNode("Cone");
Cone46.DEF = "Tip";
Cone46.bottomRadius = 0.8;
Cone46.height = 3;
geometry = Cone46;

let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.USE = "RED";
material = Material48;

appearance = Appearance47;

Transform44YYY.child = new X3D.undefined();

Transform44ZZZ.child[0] = Shape45;

Group38ZZZ.children[1] = Transform44;

//Arrow Y
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new X3D.SFVec3f([0,25,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Cylinder51 = browser.currentScene.createNode("Cylinder");
Cylinder51.USE = "Shaft";
geometry = Cylinder51;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.DEF = "GREEN";
Material53.diffuseColor = new X3D.SFColor([0,1,0]);
Material53.emissiveColor = new X3D.SFColor([0,1,0]);
material = Material53;

appearance = Appearance52;

Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

Group38ZZZ.children[2] = Transform49;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([0,50,0]);
let Shape55 = browser.currentScene.createNode("Shape");
let Cone56 = browser.currentScene.createNode("Cone");
Cone56.USE = "Tip";
geometry = Cone56;

let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.USE = "GREEN";
material = Material58;

appearance = Appearance57;

Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

Group38ZZZ.children[3] = Transform54;

//Arrow Z
let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new X3D.SFVec3f([0,0,25]);
Transform59.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape60 = browser.currentScene.createNode("Shape");
let Cylinder61 = browser.currentScene.createNode("Cylinder");
Cylinder61.USE = "Shaft";
geometry = Cylinder61;

let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.DEF = "BLUE";
Material63.diffuseColor = new X3D.SFColor([0,0,1]);
Material63.emissiveColor = new X3D.SFColor([0,0,1]);
material = Material63;

appearance = Appearance62;

Transform59YYY.child = new X3D.undefined();

Transform59ZZZ.child[0] = Shape60;

Group38ZZZ.children[4] = Transform59;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new X3D.SFVec3f([0,0,50]);
Transform64.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape65 = browser.currentScene.createNode("Shape");
let Cone66 = browser.currentScene.createNode("Cone");
Cone66.USE = "Tip";
geometry = Cone66;

let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.USE = "BLUE";
material = Material68;

appearance = Appearance67;

Transform64YYY.child = new X3D.undefined();

Transform64ZZZ.child[0] = Shape65;

Group38ZZZ.children[5] = Transform64;

Layer33ZZZ.children[4] = Group38;

//the model that is being reviewed by the users of this scene
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background70 = browser.currentScene.createNode("Background");
Background70.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background70.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background70.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background70.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background70.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background70.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
Transform69YYY.children = new X3D.MFNode();

Transform69ZZZ.children[0] = Background70;

let Transform71 = browser.currentScene.createNode("Transform");
let Shape72 = browser.currentScene.createNode("Shape");
let Sphere73 = browser.currentScene.createNode("Sphere");
Sphere73.radius = 40;
geometry = Sphere73;

let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material75.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material75;

let ComposedCubeMapTexture76 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture76.DEF = "texture";
let ImageTexture77 = browser.currentScene.createNode("ImageTexture");
ImageTexture77.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture77;

let ImageTexture78 = browser.currentScene.createNode("ImageTexture");
ImageTexture78.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture78;

let ImageTexture79 = browser.currentScene.createNode("ImageTexture");
ImageTexture79.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture79;

let ImageTexture80 = browser.currentScene.createNode("ImageTexture");
ImageTexture80.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture80;

let ImageTexture81 = browser.currentScene.createNode("ImageTexture");
ImageTexture81.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture81;

let ImageTexture82 = browser.currentScene.createNode("ImageTexture");
ImageTexture82.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture82;

texture = ComposedCubeMapTexture76;

let ComposedShader83 = browser.currentScene.createNode("ComposedShader");
ComposedShader83.DEF = "x_iteShader";
ComposedShader83.language = "GLSL";
ComposedShader84.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader85.getField("cube")let ComposedCubeMapTexture86 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture86.USE = "texture";
field85YYY.children = new X3D.MFNode();

field85ZZZ.children[0] = ComposedCubeMapTexture86;

ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader87.getField("bias").setValue("0.5");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader88.getField("scale").setValue("0.5");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader89.getField("power").setValue("2");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader90.getField("a").setValue("15");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader91.getField("b").setValue("5");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader92.getField("c").setValue("5");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader93.getField("d").setValue("5");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader94.getField("tdelta").setValue("0");
ComposedShader83YYY.field = new X3D.MFNode();

ComposedShader95.getField("pdelta").setValue("0");
ComposedShader83YYY.field = new X3D.MFNode();

let ShaderPart96 = browser.currentScene.createNode("ShaderPart");
ShaderPart96.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite_flowers_chromatic.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")]);
ShaderPart96.type = "VERTEX";
ComposedShader83YYY.parts = new X3D.MFNode();

ComposedShader83ZZZ.parts[0] = ShaderPart96;

let ShaderPart97 = browser.currentScene.createNode("ShaderPart");
ShaderPart97.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]);
ShaderPart97.type = "FRAGMENT";
ComposedShader83ZZZ.parts[1] = ShaderPart97;

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance74YYY.shaders = new X3D.MFNode();

Appearance74ZZZ.shaders[0] = ComposedShader83;

appearance = Appearance74;

Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

Transform69ZZZ.children[1] = Transform71;

Layer33ZZZ.children[5] = Transform69;

//DIS multiuser facilities
let DISEntityManager98 = browser.currentScene.createNode("DISEntityManager");
DISEntityManager98.DEF = "EntityManager";
let DISEntityTypeMapping99 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping99.category = 77;
DISEntityTypeMapping99.specific = 1;
DISEntityTypeMapping99.url = new X3D.MFString([new X3D.SFString("Leif8Final.x3d")]);
DISEntityManager98YYY.children = new X3D.MFNode();

DISEntityManager98ZZZ.children[0] = DISEntityTypeMapping99;

let DISEntityTypeMapping100 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping100.category = 77;
DISEntityTypeMapping100.specific = 2;
DISEntityTypeMapping100.url = new X3D.MFString([new X3D.SFString("Lily8Final.x3d")]);
DISEntityManager98ZZZ.children[1] = DISEntityTypeMapping100;

Layer33ZZZ.children[6] = DISEntityManager98;

let Collision101 = browser.currentScene.createNode("Collision");
Collision101.enabled = False;
let Group102 = browser.currentScene.createNode("Group");
Group102.DEF = "AvatarHolder";
proxy = Group102;

Layer33ZZZ.children[7] = Collision101;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromField = "addedEntities";
ROUTE103.fromNode = "EntityManager";
ROUTE103.toField = "addChildren";
ROUTE103.toNode = "AvatarHolder";
Layer33ZZZ.children[8] = ROUTE103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "removedEntities";
ROUTE104.fromNode = "EntityManager";
ROUTE104.toField = "removeChildren";
ROUTE104.toNode = "AvatarHolder";
Layer33ZZZ.children[9] = ROUTE104;

LayerSet32YYY.layers = new X3D.MFNode();

LayerSet32ZZZ.layers[0] = Layer33;

let LayoutLayer105 = browser.currentScene.createNode("LayoutLayer");
LayoutLayer105.pickable = True;
LayoutLayer105.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new X3D.SFVec3f([0,0,-3]);
let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.diffuseColor = new X3D.SFColor([0,0,0]);
Material109.transparency = 0.7;
material = Material109;

appearance = Appearance108;

let Box110 = browser.currentScene.createNode("Box");
Box110.size = new X3D.SFVec3f([100,100,0.02]);
geometry = Box110;

Transform106YYY.child = new X3D.undefined();

Transform106ZZZ.child[0] = Shape107;

LayoutLayer105YYY.children = new X3D.MFNode();

LayoutLayer105ZZZ.children[0] = Transform106;

//the plane sensors
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.DEF = "aSlider";
Transform111.translation = new X3D.SFVec3f([0,0.7,0]);
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
material = Material115;

appearance = Appearance114;

let Cylinder116 = browser.currentScene.createNode("Cylinder");
Cylinder116.radius = 0.05;
Cylinder116.height = 2.5;
geometry = Cylinder116;

Transform112YYY.child = new X3D.undefined();

Transform112ZZZ.child[0] = Shape113;

Transform111YYY.children = new X3D.MFNode();

Transform111ZZZ.children[0] = Transform112;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.DEF = "aTransform";
Transform117.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor118 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor118.DEF = "aSensor";
PlaneSensor118.minPosition = new X3D.SFVec2f([-20,0]);
PlaneSensor118.maxPosition = new X3D.SFVec2f([20,0]);
Transform117YYY.children = new X3D.MFNode();

Transform117ZZZ.children[0] = PlaneSensor118;

let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor120 = browser.currentScene.createNode("TouchSensor");
TouchSensor120.DEF = "aTS";
Transform119YYY.children = new X3D.MFNode();

Transform119ZZZ.children[0] = TouchSensor120;

let Shape121 = browser.currentScene.createNode("Shape");
let Sphere122 = browser.currentScene.createNode("Sphere");
Sphere122.radius = 0.08;
geometry = Sphere122;

let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material124;

appearance = Appearance123;

Transform119ZZZ.child[1] = Shape121;

Transform117ZZZ.children[1] = Transform119;

let Shape125 = browser.currentScene.createNode("Shape");
let Cylinder126 = browser.currentScene.createNode("Cylinder");
Cylinder126.radius = 0.05;
Cylinder126.height = 0.3;
geometry = Cylinder126;

let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
material = Material128;

appearance = Appearance127;

Transform117ZZZ.child[2] = Shape125;

Transform111ZZZ.children[1] = Transform117;

let Transform129 = browser.currentScene.createNode("Transform");
Transform129.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape130 = browser.currentScene.createNode("Shape");
let Appearance131 = browser.currentScene.createNode("Appearance");
let Material132 = browser.currentScene.createNode("Material");
material = Material132;

appearance = Appearance131;

let Cylinder133 = browser.currentScene.createNode("Cylinder");
Cylinder133.radius = 0.05;
Cylinder133.height = 2.5;
geometry = Cylinder133;

Transform129YYY.child = new X3D.undefined();

Transform129ZZZ.child[0] = Shape130;

Transform111ZZZ.children[2] = Transform129;

LayoutLayer105ZZZ.children[1] = Transform111;

let Transform134 = browser.currentScene.createNode("Transform");
Transform134.DEF = "bSlider";
Transform134.translation = new X3D.SFVec3f([0,0.4,0]);
let Transform135 = browser.currentScene.createNode("Transform");
Transform135.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape136 = browser.currentScene.createNode("Shape");
let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
material = Material138;

appearance = Appearance137;

let Cylinder139 = browser.currentScene.createNode("Cylinder");
Cylinder139.radius = 0.05;
Cylinder139.height = 2.5;
geometry = Cylinder139;

Transform135YYY.child = new X3D.undefined();

Transform135ZZZ.child[0] = Shape136;

Transform134YYY.children = new X3D.MFNode();

Transform134ZZZ.children[0] = Transform135;

let Transform140 = browser.currentScene.createNode("Transform");
Transform140.DEF = "bTransform";
Transform140.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor141 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor141.DEF = "bSensor";
PlaneSensor141.minPosition = new X3D.SFVec2f([-20,0]);
PlaneSensor141.maxPosition = new X3D.SFVec2f([20,0]);
Transform140YYY.children = new X3D.MFNode();

Transform140ZZZ.children[0] = PlaneSensor141;

let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor143 = browser.currentScene.createNode("TouchSensor");
TouchSensor143.DEF = "bTS";
Transform142YYY.children = new X3D.MFNode();

Transform142ZZZ.children[0] = TouchSensor143;

let Shape144 = browser.currentScene.createNode("Shape");
let Sphere145 = browser.currentScene.createNode("Sphere");
Sphere145.radius = 0.08;
geometry = Sphere145;

let Appearance146 = browser.currentScene.createNode("Appearance");
let Material147 = browser.currentScene.createNode("Material");
Material147.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material147;

appearance = Appearance146;

Transform142ZZZ.child[1] = Shape144;

Transform140ZZZ.children[1] = Transform142;

let Shape148 = browser.currentScene.createNode("Shape");
let Cylinder149 = browser.currentScene.createNode("Cylinder");
Cylinder149.radius = 0.05;
Cylinder149.height = 0.3;
geometry = Cylinder149;

let Appearance150 = browser.currentScene.createNode("Appearance");
let Material151 = browser.currentScene.createNode("Material");
material = Material151;

appearance = Appearance150;

Transform140ZZZ.child[2] = Shape148;

Transform134ZZZ.children[1] = Transform140;

LayoutLayer105ZZZ.children[2] = Transform134;

let Transform152 = browser.currentScene.createNode("Transform");
Transform152.DEF = "cSlider";
Transform152.translation = new X3D.SFVec3f([0,0.1,0]);
let Transform153 = browser.currentScene.createNode("Transform");
Transform153.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape154 = browser.currentScene.createNode("Shape");
let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
material = Material156;

appearance = Appearance155;

let Cylinder157 = browser.currentScene.createNode("Cylinder");
Cylinder157.radius = 0.05;
Cylinder157.height = 2.5;
geometry = Cylinder157;

Transform153YYY.child = new X3D.undefined();

Transform153ZZZ.child[0] = Shape154;

Transform152YYY.children = new X3D.MFNode();

Transform152ZZZ.children[0] = Transform153;

let Transform158 = browser.currentScene.createNode("Transform");
Transform158.DEF = "cTransform";
Transform158.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor159 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor159.DEF = "cSensor";
PlaneSensor159.minPosition = new X3D.SFVec2f([-20,0]);
PlaneSensor159.maxPosition = new X3D.SFVec2f([20,0]);
Transform158YYY.children = new X3D.MFNode();

Transform158ZZZ.children[0] = PlaneSensor159;

let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor161 = browser.currentScene.createNode("TouchSensor");
TouchSensor161.DEF = "cTS";
Transform160YYY.children = new X3D.MFNode();

Transform160ZZZ.children[0] = TouchSensor161;

let Shape162 = browser.currentScene.createNode("Shape");
let Sphere163 = browser.currentScene.createNode("Sphere");
Sphere163.radius = 0.08;
geometry = Sphere163;

let Appearance164 = browser.currentScene.createNode("Appearance");
let Material165 = browser.currentScene.createNode("Material");
Material165.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material165;

appearance = Appearance164;

Transform160ZZZ.child[1] = Shape162;

Transform158ZZZ.children[1] = Transform160;

let Shape166 = browser.currentScene.createNode("Shape");
let Cylinder167 = browser.currentScene.createNode("Cylinder");
Cylinder167.radius = 0.05;
Cylinder167.height = 0.3;
geometry = Cylinder167;

let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
material = Material169;

appearance = Appearance168;

Transform158ZZZ.child[2] = Shape166;

Transform152ZZZ.children[1] = Transform158;

LayoutLayer105ZZZ.children[3] = Transform152;

let Transform170 = browser.currentScene.createNode("Transform");
Transform170.DEF = "dSlider";
Transform170.translation = new X3D.SFVec3f([0,-0.2,0]);
let Transform171 = browser.currentScene.createNode("Transform");
Transform171.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
material = Material174;

appearance = Appearance173;

let Cylinder175 = browser.currentScene.createNode("Cylinder");
Cylinder175.radius = 0.05;
Cylinder175.height = 2.5;
geometry = Cylinder175;

Transform171YYY.child = new X3D.undefined();

Transform171ZZZ.child[0] = Shape172;

Transform170YYY.children = new X3D.MFNode();

Transform170ZZZ.children[0] = Transform171;

let Transform176 = browser.currentScene.createNode("Transform");
Transform176.DEF = "dTransform";
Transform176.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor177 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor177.DEF = "dSensor";
PlaneSensor177.minPosition = new X3D.SFVec2f([-20,0]);
PlaneSensor177.maxPosition = new X3D.SFVec2f([20,0]);
Transform176YYY.children = new X3D.MFNode();

Transform176ZZZ.children[0] = PlaneSensor177;

let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor179 = browser.currentScene.createNode("TouchSensor");
TouchSensor179.DEF = "dTS";
Transform178YYY.children = new X3D.MFNode();

Transform178ZZZ.children[0] = TouchSensor179;

let Shape180 = browser.currentScene.createNode("Shape");
let Sphere181 = browser.currentScene.createNode("Sphere");
Sphere181.radius = 0.08;
geometry = Sphere181;

let Appearance182 = browser.currentScene.createNode("Appearance");
let Material183 = browser.currentScene.createNode("Material");
Material183.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material183;

appearance = Appearance182;

Transform178ZZZ.child[1] = Shape180;

Transform176ZZZ.children[1] = Transform178;

let Shape184 = browser.currentScene.createNode("Shape");
let Cylinder185 = browser.currentScene.createNode("Cylinder");
Cylinder185.radius = 0.05;
Cylinder185.height = 0.3;
geometry = Cylinder185;

let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
material = Material187;

appearance = Appearance186;

Transform176ZZZ.child[2] = Shape184;

Transform170ZZZ.children[1] = Transform176;

LayoutLayer105ZZZ.children[4] = Transform170;

let Transform188 = browser.currentScene.createNode("Transform");
Transform188.DEF = "pdeltaSlider";
Transform188.translation = new X3D.SFVec3f([0,-0.5,0]);
let Transform189 = browser.currentScene.createNode("Transform");
Transform189.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
material = Material192;

appearance = Appearance191;

let Cylinder193 = browser.currentScene.createNode("Cylinder");
Cylinder193.radius = 0.05;
Cylinder193.height = 2.5;
geometry = Cylinder193;

Transform189YYY.child = new X3D.undefined();

Transform189ZZZ.child[0] = Shape190;

Transform188YYY.children = new X3D.MFNode();

Transform188ZZZ.children[0] = Transform189;

let Transform194 = browser.currentScene.createNode("Transform");
Transform194.DEF = "pdeltaTransform";
Transform194.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor195 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor195.DEF = "pdeltaSensor";
PlaneSensor195.minPosition = new X3D.SFVec2f([-20,0]);
PlaneSensor195.maxPosition = new X3D.SFVec2f([20,0]);
Transform194YYY.children = new X3D.MFNode();

Transform194ZZZ.children[0] = PlaneSensor195;

let Transform196 = browser.currentScene.createNode("Transform");
Transform196.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor197 = browser.currentScene.createNode("TouchSensor");
TouchSensor197.DEF = "pdeltaTS";
Transform196YYY.children = new X3D.MFNode();

Transform196ZZZ.children[0] = TouchSensor197;

let Shape198 = browser.currentScene.createNode("Shape");
let Sphere199 = browser.currentScene.createNode("Sphere");
Sphere199.radius = 0.08;
geometry = Sphere199;

let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material201;

appearance = Appearance200;

Transform196ZZZ.child[1] = Shape198;

Transform194ZZZ.children[1] = Transform196;

let Shape202 = browser.currentScene.createNode("Shape");
let Cylinder203 = browser.currentScene.createNode("Cylinder");
Cylinder203.radius = 0.05;
Cylinder203.height = 0.3;
geometry = Cylinder203;

let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
material = Material205;

appearance = Appearance204;

Transform194ZZZ.child[2] = Shape202;

Transform188ZZZ.children[1] = Transform194;

LayoutLayer105ZZZ.children[5] = Transform188;

let Transform206 = browser.currentScene.createNode("Transform");
Transform206.DEF = "tdeltaSlider";
Transform206.translation = new X3D.SFVec3f([0,-0.8,0]);
let Transform207 = browser.currentScene.createNode("Transform");
Transform207.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
material = Material210;

appearance = Appearance209;

let Cylinder211 = browser.currentScene.createNode("Cylinder");
Cylinder211.radius = 0.05;
Cylinder211.height = 2.5;
geometry = Cylinder211;

Transform207YYY.child = new X3D.undefined();

Transform207ZZZ.child[0] = Shape208;

Transform206YYY.children = new X3D.MFNode();

Transform206ZZZ.children[0] = Transform207;

let Transform212 = browser.currentScene.createNode("Transform");
Transform212.DEF = "tdeltaTransform";
Transform212.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor213 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor213.DEF = "tdeltaSensor";
PlaneSensor213.minPosition = new X3D.SFVec2f([-20,0]);
PlaneSensor213.maxPosition = new X3D.SFVec2f([20,0]);
Transform212YYY.children = new X3D.MFNode();

Transform212ZZZ.children[0] = PlaneSensor213;

let Transform214 = browser.currentScene.createNode("Transform");
Transform214.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.DEF = "tdeltaTS";
Transform214YYY.children = new X3D.MFNode();

Transform214ZZZ.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
let Sphere217 = browser.currentScene.createNode("Sphere");
Sphere217.radius = 0.08;
geometry = Sphere217;

let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material219;

appearance = Appearance218;

Transform214ZZZ.child[1] = Shape216;

Transform212ZZZ.children[1] = Transform214;

let Shape220 = browser.currentScene.createNode("Shape");
let Cylinder221 = browser.currentScene.createNode("Cylinder");
Cylinder221.radius = 0.05;
Cylinder221.height = 0.3;
geometry = Cylinder221;

let Appearance222 = browser.currentScene.createNode("Appearance");
let Material223 = browser.currentScene.createNode("Material");
material = Material223;

appearance = Appearance222;

Transform212ZZZ.child[2] = Shape220;

Transform206ZZZ.children[1] = Transform212;

LayoutLayer105ZZZ.children[6] = Transform206;

let Script224 = browser.currentScene.createNode("Script");
Script224.DEF = "aValueTransformerScript";
Script224.directOutput = True;
Script224.mustEvaluate = True;
Script225.getField("newTranslation").setValue("1 1 1");
Script224YYY.field = new X3D.MFNode();

Script226.getField("aValue_changed").setValue("1");
Script224YYY.field = new X3D.MFNode();


Script224.setSourceCode(`ecmascript: function newTranslation(Value) { aValue_changed = Value.x * 30; }`)
LayoutLayer105ZZZ.children[7] = Script224;

let Script227 = browser.currentScene.createNode("Script");
Script227.DEF = "bValueTransformerScript";
Script227.directOutput = True;
Script227.mustEvaluate = True;
Script228.getField("newTranslation").setValue("1 1 1");
Script227YYY.field = new X3D.MFNode();

Script229.getField("bValue_changed").setValue("1");
Script227YYY.field = new X3D.MFNode();


Script227.setSourceCode(`ecmascript: function newTranslation(Value) { bValue_changed = Value.x * 30; }`)
LayoutLayer105ZZZ.children[8] = Script227;

let Script230 = browser.currentScene.createNode("Script");
Script230.DEF = "cValueTransformerScript";
Script230.directOutput = True;
Script230.mustEvaluate = True;
Script231.getField("newTranslation").setValue("1 1 1");
Script230YYY.field = new X3D.MFNode();

Script232.getField("cValue_changed").setValue("1");
Script230YYY.field = new X3D.MFNode();


Script230.setSourceCode(`ecmascript: function newTranslation(Value) { cValue_changed = Value.x * 5; }`)
LayoutLayer105ZZZ.children[9] = Script230;

let Script233 = browser.currentScene.createNode("Script");
Script233.DEF = "dValueTransformerScript";
Script233.directOutput = True;
Script233.mustEvaluate = True;
Script234.getField("newTranslation").setValue("1 1 1");
Script233YYY.field = new X3D.MFNode();

Script235.getField("dValue_changed").setValue("1");
Script233YYY.field = new X3D.MFNode();


Script233.setSourceCode(`ecmascript: function newTranslation(Value) { dValue_changed = Value.x * 5; }`)
LayoutLayer105ZZZ.children[10] = Script233;

let Script236 = browser.currentScene.createNode("Script");
Script236.DEF = "pdeltaValueTransformerScript";
Script236.directOutput = True;
Script236.mustEvaluate = True;
Script237.getField("newTranslation").setValue("1 1 1");
Script236YYY.field = new X3D.MFNode();

Script238.getField("pdeltaValue_changed").setValue("1");
Script236YYY.field = new X3D.MFNode();


Script236.setSourceCode(`ecmascript: function newTranslation(Value) { pdeltaValue_changed = Value.x; }`)
LayoutLayer105ZZZ.children[11] = Script236;

let Script239 = browser.currentScene.createNode("Script");
Script239.DEF = "tdeltaValueTransformerScript";
Script239.directOutput = True;
Script239.mustEvaluate = True;
Script240.getField("newTranslation").setValue("1 1 1");
Script239YYY.field = new X3D.MFNode();

Script241.getField("tdeltaValue_changed").setValue("1");
Script239YYY.field = new X3D.MFNode();


Script239.setSourceCode(`ecmascript: function newTranslation(Value) { tdeltaValue_changed = Value.x; }`)
LayoutLayer105ZZZ.children[12] = Script239;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromField = "translation_changed";
ROUTE242.fromNode = "aSensor";
ROUTE242.toField = "set_translation";
ROUTE242.toNode = "aTransform";
LayoutLayer105ZZZ.children[13] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromField = "translation_changed";
ROUTE243.fromNode = "bSensor";
ROUTE243.toField = "set_translation";
ROUTE243.toNode = "bTransform";
LayoutLayer105ZZZ.children[14] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromField = "translation_changed";
ROUTE244.fromNode = "cSensor";
ROUTE244.toField = "set_translation";
ROUTE244.toNode = "cTransform";
LayoutLayer105ZZZ.children[15] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromField = "translation_changed";
ROUTE245.fromNode = "dSensor";
ROUTE245.toField = "set_translation";
ROUTE245.toNode = "dTransform";
LayoutLayer105ZZZ.children[16] = ROUTE245;

let ROUTE246 = browser.currentScene.createNode("ROUTE");
ROUTE246.fromField = "translation_changed";
ROUTE246.fromNode = "pdeltaSensor";
ROUTE246.toField = "set_translation";
ROUTE246.toNode = "pdeltaTransform";
LayoutLayer105ZZZ.children[17] = ROUTE246;

let ROUTE247 = browser.currentScene.createNode("ROUTE");
ROUTE247.fromField = "translation_changed";
ROUTE247.fromNode = "tdeltaSensor";
ROUTE247.toField = "set_translation";
ROUTE247.toNode = "tdeltaTransform";
LayoutLayer105ZZZ.children[18] = ROUTE247;

let ROUTE248 = browser.currentScene.createNode("ROUTE");
ROUTE248.fromField = "translation_changed";
ROUTE248.fromNode = "aSensor";
ROUTE248.toField = "newTranslation";
ROUTE248.toNode = "aValueTransformerScript";
LayoutLayer105ZZZ.children[19] = ROUTE248;

let ROUTE249 = browser.currentScene.createNode("ROUTE");
ROUTE249.fromField = "translation_changed";
ROUTE249.fromNode = "bSensor";
ROUTE249.toField = "newTranslation";
ROUTE249.toNode = "bValueTransformerScript";
LayoutLayer105ZZZ.children[20] = ROUTE249;

let ROUTE250 = browser.currentScene.createNode("ROUTE");
ROUTE250.fromField = "translation_changed";
ROUTE250.fromNode = "cSensor";
ROUTE250.toField = "newTranslation";
ROUTE250.toNode = "cValueTransformerScript";
LayoutLayer105ZZZ.children[21] = ROUTE250;

let ROUTE251 = browser.currentScene.createNode("ROUTE");
ROUTE251.fromField = "translation_changed";
ROUTE251.fromNode = "dSensor";
ROUTE251.toField = "newTranslation";
ROUTE251.toNode = "dValueTransformerScript";
LayoutLayer105ZZZ.children[22] = ROUTE251;

let ROUTE252 = browser.currentScene.createNode("ROUTE");
ROUTE252.fromField = "translation_changed";
ROUTE252.fromNode = "pdeltaSensor";
ROUTE252.toField = "newTranslation";
ROUTE252.toNode = "pdeltaValueTransformerScript";
LayoutLayer105ZZZ.children[23] = ROUTE252;

let ROUTE253 = browser.currentScene.createNode("ROUTE");
ROUTE253.fromField = "translation_changed";
ROUTE253.fromNode = "tdeltaSensor";
ROUTE253.toField = "newTranslation";
ROUTE253.toNode = "tdeltaValueTransformerScript";
LayoutLayer105ZZZ.children[24] = ROUTE253;

let ROUTE254 = browser.currentScene.createNode("ROUTE");
ROUTE254.fromField = "aValue_changed";
ROUTE254.fromNode = "aValueTransformerScript";
ROUTE254.toField = "a";
ROUTE254.toNode = "x_iteShader";
LayoutLayer105ZZZ.children[25] = ROUTE254;

let ROUTE255 = browser.currentScene.createNode("ROUTE");
ROUTE255.fromField = "bValue_changed";
ROUTE255.fromNode = "bValueTransformerScript";
ROUTE255.toField = "b";
ROUTE255.toNode = "x_iteShader";
LayoutLayer105ZZZ.children[26] = ROUTE255;

let ROUTE256 = browser.currentScene.createNode("ROUTE");
ROUTE256.fromField = "cValue_changed";
ROUTE256.fromNode = "cValueTransformerScript";
ROUTE256.toField = "c";
ROUTE256.toNode = "x_iteShader";
LayoutLayer105ZZZ.children[27] = ROUTE256;

let ROUTE257 = browser.currentScene.createNode("ROUTE");
ROUTE257.fromField = "dValue_changed";
ROUTE257.fromNode = "dValueTransformerScript";
ROUTE257.toField = "d";
ROUTE257.toNode = "x_iteShader";
LayoutLayer105ZZZ.children[28] = ROUTE257;

let ROUTE258 = browser.currentScene.createNode("ROUTE");
ROUTE258.fromField = "pdeltaValue_changed";
ROUTE258.fromNode = "pdeltaValueTransformerScript";
ROUTE258.toField = "pdelta";
ROUTE258.toNode = "x_iteShader";
LayoutLayer105ZZZ.children[29] = ROUTE258;

let ROUTE259 = browser.currentScene.createNode("ROUTE");
ROUTE259.fromField = "tdeltaValue_changed";
ROUTE259.fromNode = "tdeltaValueTransformerScript";
ROUTE259.toField = "tdelta";
ROUTE259.toNode = "x_iteShader";
LayoutLayer105ZZZ.children[30] = ROUTE259;

let Layout260 = browser.currentScene.createNode("Layout");
Layout260.align = new X3D.MFString([new X3D.SFString("RIGHT"), new X3D.SFString("BOTTOM")]);
Layout260.offset = new X3D.MFFloat([0,0.2]);
Layout260.size = new X3D.MFFloat([0.4,0.6]);
layout = Layout260;

let Viewport261 = browser.currentScene.createNode("Viewport");
Viewport261.clipBoundary = new X3D.MFFloat([0,1,0,1]);
viewport = Viewport261;

LayerSet32ZZZ.layers[1] = LayoutLayer105;

browser.currentScene.layerSet = new X3D.undefined();

browser.currentScene.layerSet[0] = LayerSet32;

}
main ();
