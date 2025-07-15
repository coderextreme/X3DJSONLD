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
scene.addMetaData("title", "bumpyfreewrljsonverse.x3d");
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
//basic nodes, which might be present in any scene
let NavigationInfo32 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo32.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
NavigationInfo32.avatarSize = new X3D.MFFloat([0.25,1.75,0.75]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo32;

let DirectionalLight33 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight33.ambientIntensity = 0.2;
DirectionalLight33.direction = new X3D.SFVec3f([0,-1,0]);
browser.currentScene.children[1] = DirectionalLight33;

let DirectionalLight34 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight34.ambientIntensity = 0.2;
DirectionalLight34.direction = new X3D.SFVec3f([-1,-0.1,-1]);
browser.currentScene.children[2] = DirectionalLight34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "My Overview";
Viewpoint35.fieldOfView = 1.570796;
Viewpoint35.position = new X3D.SFVec3f([0,1.75,60]);
browser.currentScene.children[3] = Viewpoint35;

//LayerSet with two layers, navigation happens in layer 1
let LayerSet36 = browser.currentScene.createNode("LayerSet");
LayerSet36.activeLayer = 1;
LayerSet36.order = new X3D.MFInt32([1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
let Layer37 = browser.currentScene.createNode("Layer");
Layer37.pickable = True;
Layer37.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
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

Layer37YYY.children = new X3D.MFNode();

Layer37ZZZ.children[0] = Group38;

//the model that is being reviewed by the users of this scene
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
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
//<Sphere radius='40'></Sphere>
let IndexedFaceSet73 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet73.convex = False;
IndexedFaceSet73.DEF = "Orbit";
let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.DEF = "OrbitCoordinates";
coord = Coordinate74;

geometry = IndexedFaceSet73;

let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material76.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material76;

let ComposedCubeMapTexture77 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture77.DEF = "texture";
let ImageTexture78 = browser.currentScene.createNode("ImageTexture");
ImageTexture78.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture78;

let ImageTexture79 = browser.currentScene.createNode("ImageTexture");
ImageTexture79.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture79;

let ImageTexture80 = browser.currentScene.createNode("ImageTexture");
ImageTexture80.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture80;

let ImageTexture81 = browser.currentScene.createNode("ImageTexture");
ImageTexture81.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture81;

let ImageTexture82 = browser.currentScene.createNode("ImageTexture");
ImageTexture82.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture82;

let ImageTexture83 = browser.currentScene.createNode("ImageTexture");
ImageTexture83.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture83;

texture = ComposedCubeMapTexture77;

let ComposedShader84 = browser.currentScene.createNode("ComposedShader");
ComposedShader84.DEF = "freewrlShader";
ComposedShader84.language = "GLSL";
ComposedShader85.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader86.getField("fw_textureCoordGenType").setValue("0");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader87.getField("bias").setValue("0.5");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader88.getField("scale").setValue("0.5");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader89.getField("power").setValue("2");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader90.getField("a").setValue("15");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader91.getField("b").setValue("5");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader92.getField("c").setValue("5");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader93.getField("d").setValue("5");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader94.getField("tdelta").setValue("0");
ComposedShader84YYY.field = new X3D.MFNode();

ComposedShader95.getField("pdelta").setValue("0");
ComposedShader84YYY.field = new X3D.MFNode();

let ShaderPart96 = browser.currentScene.createNode("ShaderPart");
ShaderPart96.url = new X3D.MFString([new X3D.SFString("../shaders/freewrl_flowers_chromatic.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")]);
ShaderPart96.type = "VERTEX";
ComposedShader84YYY.parts = new X3D.MFNode();

ComposedShader84ZZZ.parts[0] = ShaderPart96;

let ShaderPart97 = browser.currentScene.createNode("ShaderPart");
ShaderPart97.url = new X3D.MFString([new X3D.SFString("../shaders/freewrl.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")]);
ShaderPart97.type = "FRAGMENT";
ComposedShader84ZZZ.parts[1] = ShaderPart97;

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
Appearance75YYY.shaders = new X3D.MFNode();

Appearance75ZZZ.shaders[0] = ComposedShader84;

appearance = Appearance75;

Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

Transform69ZZZ.children[1] = Transform71;

Layer37ZZZ.children[1] = Transform69;

let Script98 = browser.currentScene.createNode("Script");
Script98.DEF = "OrbitScript";
Script99.getField("coordinates")Script98YYY.field = new X3D.MFNode();

Script100.getField("coordIndexes")Script98YYY.field = new X3D.MFNode();

Script101.getField("a").setValue("10");
Script98YYY.field = new X3D.MFNode();

Script102.getField("b").setValue("10");
Script98YYY.field = new X3D.MFNode();

Script103.getField("c").setValue("2");
Script98YYY.field = new X3D.MFNode();

Script104.getField("d").setValue("2");
Script98YYY.field = new X3D.MFNode();

Script105.getField("pdelta").setValue("0");
Script98YYY.field = new X3D.MFNode();

Script106.getField("tdelta").setValue("0");
Script98YYY.field = new X3D.MFNode();


Script98.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}`)
Layer37ZZZ.children[2] = Script98;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromField = "coordIndexes";
ROUTE107.fromNode = "OrbitScript";
ROUTE107.toField = "set_coordIndex";
ROUTE107.toNode = "Orbit";
Layer37ZZZ.children[3] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromField = "coordinates";
ROUTE108.fromNode = "OrbitScript";
ROUTE108.toField = "set_point";
ROUTE108.toNode = "OrbitCoordinates";
Layer37ZZZ.children[4] = ROUTE108;

//DIS multiuser facilities
let DISEntityManager109 = browser.currentScene.createNode("DISEntityManager");
DISEntityManager109.DEF = "EntityManager";
DISEntityManager109.networkMode = "networkReader";
let DISEntityTypeMapping110 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping110.readInterval = "3";
DISEntityTypeMapping110.category = 77;
DISEntityTypeMapping110.specific = 1;
DISEntityTypeMapping110.url = new X3D.MFString([new X3D.SFString("../data/Gramps8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d")]);
DISEntityManager109YYY.children = new X3D.MFNode();

DISEntityManager109ZZZ.children[0] = DISEntityTypeMapping110;

let DISEntityTypeMapping111 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping111.readInterval = "3";
DISEntityTypeMapping111.category = 77;
DISEntityTypeMapping111.specific = 2;
DISEntityTypeMapping111.url = new X3D.MFString([new X3D.SFString("../data/Leif8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")]);
DISEntityManager109ZZZ.children[1] = DISEntityTypeMapping111;

let DISEntityTypeMapping112 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping112.readInterval = "3";
DISEntityTypeMapping112.category = 77;
DISEntityTypeMapping112.specific = 3;
DISEntityTypeMapping112.url = new X3D.MFString([new X3D.SFString("../data/Lily8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d")]);
DISEntityManager109ZZZ.children[2] = DISEntityTypeMapping112;

let DISEntityTypeMapping113 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping113.readInterval = "3";
DISEntityTypeMapping113.category = 77;
DISEntityTypeMapping113.specific = 4;
DISEntityTypeMapping113.url = new X3D.MFString([new X3D.SFString("../data/Tufani8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d")]);
DISEntityManager109ZZZ.children[3] = DISEntityTypeMapping113;

Layer37ZZZ.children[5] = DISEntityManager109;

let Collision114 = browser.currentScene.createNode("Collision");
Collision114.enabled = False;
let Group115 = browser.currentScene.createNode("Group");
Group115.DEF = "AvatarHolder";
proxy = Group115;

Layer37ZZZ.children[6] = Collision114;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "addedEntities";
ROUTE116.fromNode = "EntityManager";
ROUTE116.toField = "addChildren";
ROUTE116.toNode = "AvatarHolder";
Layer37ZZZ.children[7] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "removedEntities";
ROUTE117.fromNode = "EntityManager";
ROUTE117.toField = "removeChildren";
ROUTE117.toNode = "AvatarHolder";
Layer37ZZZ.children[8] = ROUTE117;

LayerSet36YYY.layers = new X3D.MFNode();

LayerSet36ZZZ.layers[0] = Layer37;

let LayoutLayer118 = browser.currentScene.createNode("LayoutLayer");
LayoutLayer118.pickable = True;
LayoutLayer118.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new X3D.SFVec3f([0,0,-3]);
let Shape120 = browser.currentScene.createNode("Shape");
let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.diffuseColor = new X3D.SFColor([0,0,0]);
Material122.transparency = 0.7;
material = Material122;

appearance = Appearance121;

let Box123 = browser.currentScene.createNode("Box");
Box123.size = new X3D.SFVec3f([100,100,0.02]);
geometry = Box123;

Transform119YYY.child = new X3D.undefined();

Transform119ZZZ.child[0] = Shape120;

LayoutLayer118YYY.children = new X3D.MFNode();

LayoutLayer118ZZZ.children[0] = Transform119;

let Transform124 = browser.currentScene.createNode("Transform");
Transform124.DEF = "equationTransform";
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new X3D.SFVec3f([0,0,-20]);
let Shape126 = browser.currentScene.createNode("Shape");
let Text127 = browser.currentScene.createNode("Text");
Text127.DEF = "equation";
Text127.string = new X3D.MFString([new X3D.SFString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")]);
let FontStyle128 = browser.currentScene.createNode("FontStyle");
FontStyle128.size = 0.09;
fontStyle = FontStyle128;

geometry = Text127;

let Appearance129 = browser.currentScene.createNode("Appearance");
let Material130 = browser.currentScene.createNode("Material");
Material130.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material130;

appearance = Appearance129;

Transform125YYY.child = new X3D.undefined();

Transform125ZZZ.child[0] = Shape126;

Transform124YYY.children = new X3D.MFNode();

Transform124ZZZ.children[0] = Transform125;

LayoutLayer118ZZZ.children[1] = Transform124;

let ProtoDeclare131 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0.7 0"></field>
<field name="transformTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0.1"></field>
<field name="sensorTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;a=&quot;"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="shaderNode" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><IS><connect nodeField="translation" protoField="sensorTranslation"></connect>
</IS>
<PlaneSensor DEF="protoSensor" maxPosition="1 0"></PlaneSensor>
<Transform translation="0 0 0"><TouchSensor DEF="protoTS"></TouchSensor>
</Transform>
<Transform><Shape><Text DEF="protoText" string="&quot;a=&quot;"><IS><connect nodeField="string" protoField="textString"></connect>
</IS>
<FontStyle containerField="fontStyle" size="0.23"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
</Transform>
<Script DEF="protoValueTransformerScript" directOutput="true" mustEvaluate="true"><field name="protoScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="shader" accessType="inputOutput" type="SFNode"></field>
<field name="newTranslation" accessType="inputOnly" type="SFVec3f" value="1 1 1"></field>
<field name="protoValue_changed" accessType="outputOnly" type="SFFloat" value="1"></field>
<field name="protoText_changed" accessType="outputOnly" type="MFString" value="&quot;1.0&quot;"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="shader" protoField="shaderNode"></connect>
</IS>
<![CDATA[ecmascript:
const newTranslation = function(Value) {
	'use strict';
	protoValue_changed = Value.x * protoScale;
	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));

        var orientation = Value.x;

        var ps = Browser.currentScene.getNamedNode("protoSensor");
        var t = Browser.currentScene.getNamedNode("protoTransform");
        var txt = Browser.currentScene.getNamedNode("protoText");
        if (shader) {
            shader.getField(protoParameterName).setValue(orientation * protoScale);
        }
        if (txt) {
            var stringField = txt.getField("string");
            var label = protoParameterName;
            stringField.setValue(new MFString(label+"="+(orientation * protoScale).toFixed(2)));
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
        }
        if (t) {
            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
        }
}]]></Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoText_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoText"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare131.name = "SliderProto";
ProtoInterface133.getField("sliderTranslation").setValue("0 0.7 0");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface134.getField("transformTranslation").setValue("0 0 0.1");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface135.getField("sensorTranslation").setValue("0 0 0");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface136.getField("textString").setValue("\"a=\"");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface137.getField("parameterScale").setValue("30");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface138.getField("parameterName").setValue("a");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface139.getField("shaderNode")ProtoInterface132YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface132;

let ProtoBody140 = browser.currentScene.createNode("ProtoBody");
let Group141 = browser.currentScene.createNode("Group");
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.DEF = "protoSlider";
Transform142.translation = new X3D.SFVec3f([0,0.7,0]);
let IS143 = browser.currentScene.createNode("IS");
let connect144 = browser.currentScene.createNode("connect");
connect144.nodeField = "translation";
connect144.protoField = "sliderTranslation";
IS143YYY.connect = new X3D.MFNode();

IS143ZZZ.connect[0] = connect144;

iS = IS143;

let Transform145 = browser.currentScene.createNode("Transform");
Transform145.DEF = "protoTransform";
Transform145.translation = new X3D.SFVec3f([0,0,0.1]);
let IS146 = browser.currentScene.createNode("IS");
let connect147 = browser.currentScene.createNode("connect");
connect147.nodeField = "translation";
connect147.protoField = "sensorTranslation";
IS146YYY.connect = new X3D.MFNode();

IS146ZZZ.connect[0] = connect147;

iS = IS146;

let PlaneSensor148 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor148.DEF = "protoSensor";
PlaneSensor148.maxPosition = new X3D.SFVec2f([1,0]);
Transform145YYY.children = new X3D.MFNode();

Transform145ZZZ.children[0] = PlaneSensor148;

let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor150 = browser.currentScene.createNode("TouchSensor");
TouchSensor150.DEF = "protoTS";
Transform149YYY.children = new X3D.MFNode();

Transform149ZZZ.children[0] = TouchSensor150;

Transform145ZZZ.children[1] = Transform149;

let Transform151 = browser.currentScene.createNode("Transform");
let Shape152 = browser.currentScene.createNode("Shape");
let Text153 = browser.currentScene.createNode("Text");
Text153.DEF = "protoText";
Text153.string = new X3D.MFString([new X3D.SFString("a=")]);
let IS154 = browser.currentScene.createNode("IS");
let connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "string";
connect155.protoField = "textString";
IS154YYY.connect = new X3D.MFNode();

IS154ZZZ.connect[0] = connect155;

iS = IS154;

let FontStyle156 = browser.currentScene.createNode("FontStyle");
FontStyle156.size = 0.23;
fontStyle = FontStyle156;

geometry = Text153;

let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
material = Material158;

appearance = Appearance157;

Transform151YYY.child = new X3D.undefined();

Transform151ZZZ.child[0] = Shape152;

Transform145ZZZ.children[2] = Transform151;

Transform142YYY.children = new X3D.MFNode();

Transform142ZZZ.children[0] = Transform145;

Group141YYY.children = new X3D.MFNode();

Group141ZZZ.children[0] = Transform142;

let Script159 = browser.currentScene.createNode("Script");
Script159.DEF = "protoValueTransformerScript";
Script159.directOutput = True;
Script159.mustEvaluate = True;
Script160.getField("protoScale").setValue("30");
Script159YYY.field = new X3D.MFNode();

Script161.getField("protoParameterName").setValue("a");
Script159YYY.field = new X3D.MFNode();

Script162.getField("shader")Script159YYY.field = new X3D.MFNode();

Script163.getField("newTranslation").setValue("1 1 1");
Script159YYY.field = new X3D.MFNode();

Script164.getField("protoValue_changed").setValue("1");
Script159YYY.field = new X3D.MFNode();

Script165.getField("protoText_changed").setValue("\"1.0\"");
Script159YYY.field = new X3D.MFNode();

let IS166 = browser.currentScene.createNode("IS");
let connect167 = browser.currentScene.createNode("connect");
connect167.nodeField = "protoScale";
connect167.protoField = "parameterScale";
IS166YYY.connect = new X3D.MFNode();

IS166ZZZ.connect[0] = connect167;

let connect168 = browser.currentScene.createNode("connect");
connect168.nodeField = "protoParameterName";
connect168.protoField = "parameterName";
IS166ZZZ.connect[1] = connect168;

let connect169 = browser.currentScene.createNode("connect");
connect169.nodeField = "shader";
connect169.protoField = "shaderNode";
IS166ZZZ.connect[2] = connect169;

iS = IS166;


Script159.setSourceCode(`ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\n"+
"	protoValue_changed = Value.x * protoScale;\n"+
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}`)
Group141ZZZ.children[1] = Script159;

let ROUTE170 = browser.currentScene.createNode("ROUTE");
ROUTE170.fromField = "translation_changed";
ROUTE170.fromNode = "protoSensor";
ROUTE170.toField = "set_translation";
ROUTE170.toNode = "protoTransform";
Group141ZZZ.children[2] = ROUTE170;

let ROUTE171 = browser.currentScene.createNode("ROUTE");
ROUTE171.fromField = "translation_changed";
ROUTE171.fromNode = "protoSensor";
ROUTE171.toField = "newTranslation";
ROUTE171.toNode = "protoValueTransformerScript";
Group141ZZZ.children[3] = ROUTE171;

let ROUTE172 = browser.currentScene.createNode("ROUTE");
ROUTE172.fromField = "protoText_changed";
ROUTE172.fromNode = "protoValueTransformerScript";
ROUTE172.toField = "string";
ROUTE172.toNode = "protoText";
Group141ZZZ.children[4] = ROUTE172;

ProtoBody140YYY.children = new X3D.MFNode();

ProtoBody140ZZZ.children[0] = Group141;

protoBody = ProtoBody140;

LayoutLayer118ZZZ.children[2] = ProtoDeclare131;

let ProtoInstance173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance173.name = "SliderProto";
ProtoInstance173.DEF = "aPI";
let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "sliderTranslation";
fieldValue174.value = "0 0.7 0";
ProtoInstance173YYY.fieldValue = new X3D.MFNode();

ProtoInstance173ZZZ.fieldValue[0] = fieldValue174;

let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "transformTranslation";
fieldValue175.value = "0 0 0.1";
ProtoInstance173ZZZ.fieldValue[1] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "sensorTranslation";
fieldValue176.value = "0 0 0";
ProtoInstance173ZZZ.fieldValue[2] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "textString";
fieldValue177.value = "\"a=\"";
ProtoInstance173ZZZ.fieldValue[3] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "parameterScale";
fieldValue178.value = "30";
ProtoInstance173ZZZ.fieldValue[4] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "parameterName";
fieldValue179.value = "a";
ProtoInstance173ZZZ.fieldValue[5] = fieldValue179;

let fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "shaderNode";
let ComposedShader181 = browser.currentScene.createNode("ComposedShader");
ComposedShader181.USE = "freewrlShader";
fieldValue180YYY.children = new X3D.MFNode();

fieldValue180ZZZ.children[0] = ComposedShader181;

ProtoInstance173ZZZ.fieldValue[6] = fieldValue180;

LayoutLayer118ZZZ.children[3] = ProtoInstance173;

let ProtoInstance182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance182.name = "SliderProto";
ProtoInstance182.DEF = "bPI";
let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "sliderTranslation";
fieldValue183.value = "0 0.4 0";
ProtoInstance182YYY.fieldValue = new X3D.MFNode();

ProtoInstance182ZZZ.fieldValue[0] = fieldValue183;

let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "transformTranslation";
fieldValue184.value = "0 0 0.1";
ProtoInstance182ZZZ.fieldValue[1] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "sensorTranslation";
fieldValue185.value = "0 0 0";
ProtoInstance182ZZZ.fieldValue[2] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "textString";
fieldValue186.value = "\"b=\"";
ProtoInstance182ZZZ.fieldValue[3] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "parameterScale";
fieldValue187.value = "30";
ProtoInstance182ZZZ.fieldValue[4] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "parameterName";
fieldValue188.value = "b";
ProtoInstance182ZZZ.fieldValue[5] = fieldValue188;

let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "shaderNode";
let ComposedShader190 = browser.currentScene.createNode("ComposedShader");
ComposedShader190.USE = "freewrlShader";
fieldValue189YYY.children = new X3D.MFNode();

fieldValue189ZZZ.children[0] = ComposedShader190;

ProtoInstance182ZZZ.fieldValue[6] = fieldValue189;

LayoutLayer118ZZZ.children[4] = ProtoInstance182;

let ProtoInstance191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance191.name = "SliderProto";
ProtoInstance191.DEF = "cPI";
let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "sliderTranslation";
fieldValue192.value = "0 0.1 0";
ProtoInstance191YYY.fieldValue = new X3D.MFNode();

ProtoInstance191ZZZ.fieldValue[0] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "transformTranslation";
fieldValue193.value = "0 0 0.1";
ProtoInstance191ZZZ.fieldValue[1] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "sensorTranslation";
fieldValue194.value = "0 0 0";
ProtoInstance191ZZZ.fieldValue[2] = fieldValue194;

let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "textString";
fieldValue195.value = "\"c=\"";
ProtoInstance191ZZZ.fieldValue[3] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "parameterScale";
fieldValue196.value = "20";
ProtoInstance191ZZZ.fieldValue[4] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "parameterName";
fieldValue197.value = "c";
ProtoInstance191ZZZ.fieldValue[5] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "shaderNode";
let ComposedShader199 = browser.currentScene.createNode("ComposedShader");
ComposedShader199.USE = "freewrlShader";
fieldValue198YYY.children = new X3D.MFNode();

fieldValue198ZZZ.children[0] = ComposedShader199;

ProtoInstance191ZZZ.fieldValue[6] = fieldValue198;

LayoutLayer118ZZZ.children[5] = ProtoInstance191;

let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.name = "SliderProto";
ProtoInstance200.DEF = "dPI";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "sliderTranslation";
fieldValue201.value = "0 -0.2 0";
ProtoInstance200YYY.fieldValue = new X3D.MFNode();

ProtoInstance200ZZZ.fieldValue[0] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "transformTranslation";
fieldValue202.value = "0 0 0.1";
ProtoInstance200ZZZ.fieldValue[1] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "sensorTranslation";
fieldValue203.value = "0 0 0";
ProtoInstance200ZZZ.fieldValue[2] = fieldValue203;

let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "textString";
fieldValue204.value = "\"d=\"";
ProtoInstance200ZZZ.fieldValue[3] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "parameterScale";
fieldValue205.value = "20";
ProtoInstance200ZZZ.fieldValue[4] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "parameterName";
fieldValue206.value = "d";
ProtoInstance200ZZZ.fieldValue[5] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "shaderNode";
let ComposedShader208 = browser.currentScene.createNode("ComposedShader");
ComposedShader208.USE = "freewrlShader";
fieldValue207YYY.children = new X3D.MFNode();

fieldValue207ZZZ.children[0] = ComposedShader208;

ProtoInstance200ZZZ.fieldValue[6] = fieldValue207;

LayoutLayer118ZZZ.children[6] = ProtoInstance200;

let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "SliderProto";
ProtoInstance209.DEF = "tdeltaPI";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "sliderTranslation";
fieldValue210.value = "0 -0.5 0";
ProtoInstance209YYY.fieldValue = new X3D.MFNode();

ProtoInstance209ZZZ.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "transformTranslation";
fieldValue211.value = "0 0 0.1";
ProtoInstance209ZZZ.fieldValue[1] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "sensorTranslation";
fieldValue212.value = "0 0 0";
ProtoInstance209ZZZ.fieldValue[2] = fieldValue212;

let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "textString";
fieldValue213.value = "\"tdelta=\"";
ProtoInstance209ZZZ.fieldValue[3] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "parameterScale";
fieldValue214.value = "6.28";
ProtoInstance209ZZZ.fieldValue[4] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "parameterName";
fieldValue215.value = "tdelta";
ProtoInstance209ZZZ.fieldValue[5] = fieldValue215;

let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "shaderNode";
let ComposedShader217 = browser.currentScene.createNode("ComposedShader");
ComposedShader217.USE = "freewrlShader";
fieldValue216YYY.children = new X3D.MFNode();

fieldValue216ZZZ.children[0] = ComposedShader217;

ProtoInstance209ZZZ.fieldValue[6] = fieldValue216;

LayoutLayer118ZZZ.children[7] = ProtoInstance209;

let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.name = "SliderProto";
ProtoInstance218.DEF = "pdeltaPI";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "sliderTranslation";
fieldValue219.value = "0 -0.8 0";
ProtoInstance218YYY.fieldValue = new X3D.MFNode();

ProtoInstance218ZZZ.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "transformTranslation";
fieldValue220.value = "0 0 0.1";
ProtoInstance218ZZZ.fieldValue[1] = fieldValue220;

let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "sensorTranslation";
fieldValue221.value = "0 0 0";
ProtoInstance218ZZZ.fieldValue[2] = fieldValue221;

let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "textString";
fieldValue222.value = "\"pdelta=\"";
ProtoInstance218ZZZ.fieldValue[3] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "parameterScale";
fieldValue223.value = "6.28";
ProtoInstance218ZZZ.fieldValue[4] = fieldValue223;

let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "parameterName";
fieldValue224.value = "pdelta";
ProtoInstance218ZZZ.fieldValue[5] = fieldValue224;

let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "shaderNode";
let ComposedShader226 = browser.currentScene.createNode("ComposedShader");
ComposedShader226.USE = "freewrlShader";
fieldValue225YYY.children = new X3D.MFNode();

fieldValue225ZZZ.children[0] = ComposedShader226;

ProtoInstance218ZZZ.fieldValue[6] = fieldValue225;

LayoutLayer118ZZZ.children[8] = ProtoInstance218;

let Layout227 = browser.currentScene.createNode("Layout");
Layout227.align = new X3D.MFString([new X3D.SFString("LEFT"), new X3D.SFString("BOTTOM")]);
Layout227.offset = new X3D.MFFloat([-0.2,0.19]);
Layout227.offsetUnits = new X3D.MFString([new X3D.SFString("WORLD"), new X3D.SFString("WORLD")]);
Layout227.scaleMode = new X3D.MFString([new X3D.SFString("NONE"), new X3D.SFString("NONE")]);
Layout227.size = new X3D.MFFloat([0.4,0.6]);
Layout227.sizeUnits = new X3D.MFString([new X3D.SFString("WORLD"), new X3D.SFString("WORLD")]);
layout = Layout227;

let Viewport228 = browser.currentScene.createNode("Viewport");
Viewport228.clipBoundary = new X3D.MFFloat([0,1,0,1]);
viewport = Viewport228;

LayerSet36ZZZ.layers[1] = LayoutLayer118;

browser.currentScene.layerSet[4] = LayerSet36;

}
main ();
