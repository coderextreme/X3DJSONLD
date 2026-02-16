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
scene .addComponent (browser .getComponent ("Shape", 4));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene .addComponent (browser .getComponent ("DIS", 2));
scene.addMetaData("title", "bumpyfreewrlsliders.x3d");
scene.addMetaData("description", "Bumpy Orbitals with Sliders for FreeWRL");
scene.addMetaData("creator", "Doug Sanden, Christoph Valentin, John Carlson");
scene.addMetaData("identifier", "https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d");
scene.addMetaData("license", "license.html");
await browser .loadComponents (scene);
//LayerSet with two layers, navigation happens in layer 1
let LayerSet18 = browser.currentScene.createNode("LayerSet");
LayerSet18.activeLayer = 1;
LayerSet18.order = new X3D.MFInt32([1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display
//like a HUD (heads up display)
let Layer19 = browser.currentScene.createNode("Layer");
Layer19.pickable = True;
Layer19.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
//basic nodes, which might be present in any scene
let NavigationInfo20 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo20.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT"), new X3D.SFString("ANY")]);
NavigationInfo20.avatarSize = new X3D.MFFloat([0.25,1.75,0.75]);
Layer19YYY.children = new X3D.MFNode();

Layer19ZZZ.children[0] = NavigationInfo20;

let DirectionalLight21 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight21.ambientIntensity = 0.2;
DirectionalLight21.direction = new X3D.SFVec3f([0,-1,0]);
Layer19ZZZ.children[1] = DirectionalLight21;

let DirectionalLight22 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight22.ambientIntensity = 0.2;
DirectionalLight22.direction = new X3D.SFVec3f([-1,-0.1,-1]);
Layer19ZZZ.children[2] = DirectionalLight22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "My Overview";
Viewpoint23.fieldOfView = 1.570796;
Viewpoint23.position = new X3D.SFVec3f([0,1.75,60]);
Layer19ZZZ.children[3] = Viewpoint23;

//this group contains the red/green/blue 3D crosshair
let Group24 = browser.currentScene.createNode("Group");
//Arrow X
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new X3D.SFVec3f([25,0,0]);
Transform25.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape26 = browser.currentScene.createNode("Shape");
let Cylinder27 = browser.currentScene.createNode("Cylinder");
Cylinder27.DEF = "Shaft";
Cylinder27.radius = 0.35;
Cylinder27.height = 50;
geometry = Cylinder27;

let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.DEF = "RED";
Material29.diffuseColor = new X3D.SFColor([1,0,0]);
Material29.emissiveColor = new X3D.SFColor([1,0,0]);
material = Material29;

appearance = Appearance28;

Transform25YYY.child = new X3D.undefined();

Transform25ZZZ.child[0] = Shape26;

Group24YYY.children = new X3D.MFNode();

Group24ZZZ.children[0] = Transform25;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new X3D.SFVec3f([50,0,0]);
Transform30.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape31 = browser.currentScene.createNode("Shape");
let Cone32 = browser.currentScene.createNode("Cone");
Cone32.DEF = "Tip";
Cone32.bottomRadius = 0.8;
Cone32.height = 3;
geometry = Cone32;

let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.USE = "RED";
material = Material34;

appearance = Appearance33;

Transform30YYY.child = new X3D.undefined();

Transform30ZZZ.child[0] = Shape31;

Group24ZZZ.children[1] = Transform30;

//Arrow Y
let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new X3D.SFVec3f([0,25,0]);
let Shape36 = browser.currentScene.createNode("Shape");
let Cylinder37 = browser.currentScene.createNode("Cylinder");
Cylinder37.USE = "Shaft";
geometry = Cylinder37;

let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.DEF = "GREEN";
Material39.diffuseColor = new X3D.SFColor([0,1,0]);
Material39.emissiveColor = new X3D.SFColor([0,1,0]);
material = Material39;

appearance = Appearance38;

Transform35YYY.child = new X3D.undefined();

Transform35ZZZ.child[0] = Shape36;

Group24ZZZ.children[2] = Transform35;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.translation = new X3D.SFVec3f([0,50,0]);
let Shape41 = browser.currentScene.createNode("Shape");
let Cone42 = browser.currentScene.createNode("Cone");
Cone42.USE = "Tip";
geometry = Cone42;

let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "GREEN";
material = Material44;

appearance = Appearance43;

Transform40YYY.child = new X3D.undefined();

Transform40ZZZ.child[0] = Shape41;

Group24ZZZ.children[3] = Transform40;

//Arrow Z
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new X3D.SFVec3f([0,0,25]);
Transform45.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape46 = browser.currentScene.createNode("Shape");
let Cylinder47 = browser.currentScene.createNode("Cylinder");
Cylinder47.USE = "Shaft";
geometry = Cylinder47;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.DEF = "BLUE";
Material49.diffuseColor = new X3D.SFColor([0,0,1]);
Material49.emissiveColor = new X3D.SFColor([0,0,1]);
material = Material49;

appearance = Appearance48;

Transform45YYY.child = new X3D.undefined();

Transform45ZZZ.child[0] = Shape46;

Group24ZZZ.children[4] = Transform45;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new X3D.SFVec3f([0,0,50]);
Transform50.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape51 = browser.currentScene.createNode("Shape");
let Cone52 = browser.currentScene.createNode("Cone");
Cone52.USE = "Tip";
geometry = Cone52;

let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.USE = "BLUE";
material = Material54;

appearance = Appearance53;

Transform50YYY.child = new X3D.undefined();

Transform50ZZZ.child[0] = Shape51;

Group24ZZZ.children[5] = Transform50;

Layer19ZZZ.children[4] = Group24;

//the model that is being reviewed by the users of this scene
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background56 = browser.currentScene.createNode("Background");
Background56.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background56.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background56.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background56.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background56.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background56.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
Transform55YYY.children = new X3D.MFNode();

Transform55ZZZ.children[0] = Background56;

let Transform57 = browser.currentScene.createNode("Transform");
let Shape58 = browser.currentScene.createNode("Shape");
let Sphere59 = browser.currentScene.createNode("Sphere");
Sphere59.radius = 5;
geometry = Sphere59;

//<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\">
//<Coordinate DEF=\"OrbitCoordinates\"/>
//</IndexedFaceSet>
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material61.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material61;

let ComposedCubeMapTexture62 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture62.DEF = "texture";
let ImageTexture63 = browser.currentScene.createNode("ImageTexture");
ImageTexture63.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture63;

let ImageTexture64 = browser.currentScene.createNode("ImageTexture");
ImageTexture64.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture64;

let ImageTexture65 = browser.currentScene.createNode("ImageTexture");
ImageTexture65.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture65;

let ImageTexture66 = browser.currentScene.createNode("ImageTexture");
ImageTexture66.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture66;

let ImageTexture67 = browser.currentScene.createNode("ImageTexture");
ImageTexture67.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture67;

let ImageTexture68 = browser.currentScene.createNode("ImageTexture");
ImageTexture68.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture68;

texture = ComposedCubeMapTexture62;

let ComposedShader69 = browser.currentScene.createNode("ComposedShader");
ComposedShader69.DEF = "freewrlShader";
ComposedShader69.language = "GLSL";
ComposedShader70.getField("fw_textureCoordGenType").setValue("0");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader71.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader72.getField("bias").setValue("0.5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader73.getField("scale").setValue("0.5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader74.getField("power").setValue("2");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader75.getField("a").setValue("15");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader76.getField("b").setValue("5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader77.getField("c").setValue("20");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader78.getField("d").setValue("20");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader79.getField("tdelta").setValue("0");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader80.getField("pdelta").setValue("0");
ComposedShader69YYY.field = new X3D.MFNode();

//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"/>
//</field>
let ShaderPart81 = browser.currentScene.createNode("ShaderPart");
ShaderPart81.type = "VERTEX";
let IS82 = browser.currentScene.createNode("IS");
let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "url";
connect83.protoField = "vertex";
IS82YYY.connect = new X3D.MFNode();

IS82ZZZ.connect[0] = connect83;

iS = IS82;

ComposedShader69YYY.parts = new X3D.MFNode();

ComposedShader69ZZZ.parts[0] = ShaderPart81;

let ShaderPart84 = browser.currentScene.createNode("ShaderPart");
ShaderPart84.type = "FRAGMENT";
let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "url";
connect86.protoField = "fragment";
IS85YYY.connect = new X3D.MFNode();

IS85ZZZ.connect[0] = connect86;

iS = IS85;

ComposedShader69ZZZ.parts[1] = ShaderPart84;

Appearance60YYY.shaders = new X3D.MFNode();

Appearance60ZZZ.shaders[0] = ComposedShader69;

//<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\">
//<field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field>
//<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>
//<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='a' type='SFFloat' accessType='inputOutput' value='15'></field>
//<field name='b' type='SFFloat' accessType='inputOutput' value='5'></field>
//<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>
//<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>
//<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<ShaderPart type='VERTEX'>
//<IS>
//<connect nodeField=\"url\" protoField=\"vertex\"/>
//</IS>
//</ShaderPart>
//<ShaderPart type='FRAGMENT'>
//<IS>
//<connect nodeField=\"url\" protoField=\"fragment\"/>
//</IS>
//</ShaderPart>
//</ComposedShader>
appearance = Appearance60;

Transform57YYY.child = new X3D.undefined();

Transform57ZZZ.child[0] = Shape58;

Transform55ZZZ.children[1] = Transform57;

Layer19ZZZ.children[5] = Transform55;

//<Script DEF=\"OrbitScript\">
//<field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/>
//<field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/>
//<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>
//<field name='b' type='SFFloat' accessType='inputOutput' value='10'></field>
//<field name='c' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='d' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script>
//<ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/>
//<ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>
//DIS multiuser facilities
let DISEntityManager87 = browser.currentScene.createNode("DISEntityManager");
DISEntityManager87.DEF = "EntityManager";
let DISEntityTypeMapping88 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping88.category = 77;
DISEntityTypeMapping88.specific = 1;
DISEntityTypeMapping88.url = new X3D.MFString([new X3D.SFString("../data/Leif8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")]);
DISEntityManager87YYY.children = new X3D.MFNode();

DISEntityManager87ZZZ.children[0] = DISEntityTypeMapping88;

let DISEntityTypeMapping89 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping89.category = 77;
DISEntityTypeMapping89.specific = 2;
DISEntityTypeMapping89.url = new X3D.MFString([new X3D.SFString("../data/Lily8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d")]);
DISEntityManager87ZZZ.children[1] = DISEntityTypeMapping89;

let DISEntityTypeMapping90 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping90.category = 77;
DISEntityTypeMapping90.specific = 3;
DISEntityTypeMapping90.url = new X3D.MFString([new X3D.SFString("../data/Tufani8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d")]);
DISEntityManager87ZZZ.children[2] = DISEntityTypeMapping90;

let DISEntityTypeMapping91 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping91.category = 77;
DISEntityTypeMapping91.specific = 4;
DISEntityTypeMapping91.url = new X3D.MFString([new X3D.SFString("../data/Gramps8Final.x3d"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d")]);
DISEntityManager87ZZZ.children[3] = DISEntityTypeMapping91;

Layer19ZZZ.children[6] = DISEntityManager87;

let Collision92 = browser.currentScene.createNode("Collision");
let Group93 = browser.currentScene.createNode("Group");
Group93.DEF = "AvatarHolder";
proxy = Group93;

Layer19ZZZ.children[7] = Collision92;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "addedEntities";
ROUTE94.fromNode = "EntityManager";
ROUTE94.toField = "addChildren";
ROUTE94.toNode = "AvatarHolder";
Layer19ZZZ.children[8] = ROUTE94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromField = "removedEntities";
ROUTE95.fromNode = "EntityManager";
ROUTE95.toField = "removeChildren";
ROUTE95.toNode = "AvatarHolder";
Layer19ZZZ.children[9] = ROUTE95;

LayerSet18YYY.layers = new X3D.MFNode();

LayerSet18ZZZ.layers[0] = Layer19;

let LayoutLayer96 = browser.currentScene.createNode("LayoutLayer");
LayoutLayer96.pickable = True;
LayoutLayer96.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.translation = new X3D.SFVec3f([0,0,-3]);
let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new X3D.SFColor([0.1,0.1,0.1]);
Material100.transparency = 1;
material = Material100;

appearance = Appearance99;

let Box101 = browser.currentScene.createNode("Box");
Box101.size = new X3D.SFVec3f([100,100,0.02]);
geometry = Box101;

Transform97YYY.child = new X3D.undefined();

Transform97ZZZ.child[0] = Shape98;

LayoutLayer96YYY.children = new X3D.MFNode();

LayoutLayer96ZZZ.children[0] = Transform97;

let Transform102 = browser.currentScene.createNode("Transform");
Transform102.DEF = "equationTransform";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new X3D.SFVec3f([0,0,-20]);
let Shape104 = browser.currentScene.createNode("Shape");
let Text105 = browser.currentScene.createNode("Text");
Text105.DEF = "equation";
Text105.string = new X3D.MFString([new X3D.SFString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")]);
let FontStyle106 = browser.currentScene.createNode("FontStyle");
FontStyle106.size = 0.09;
fontStyle = FontStyle106;

geometry = Text105;

let Appearance107 = browser.currentScene.createNode("Appearance");
let Material108 = browser.currentScene.createNode("Material");
Material108.diffuseColor = new X3D.SFColor([0,1,1]);
material = Material108;

appearance = Appearance107;

Transform103YYY.child = new X3D.undefined();

Transform103ZZZ.child[0] = Shape104;

Transform102YYY.children = new X3D.MFNode();

Transform102ZZZ.children[0] = Transform103;

LayoutLayer96ZZZ.children[1] = Transform102;

let ProtoDeclare109 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0.7 0"></field>
<field name="transformTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0.1"></field>
<field name="sensorTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="numberTranslation" accessType="inputOutput" type="SFVec3f" value="0.2 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;a=&quot;"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="shaderNode" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><IS><connect nodeField="translation" protoField="sensorTranslation"></connect>
</IS>
<PlaneSensor DEF="protoSensor" maxPosition="2 0"></PlaneSensor>
<Transform translation="0 0 0"><TouchSensor DEF="protoTS"></TouchSensor>
</Transform>
<Transform><Shape><Text DEF="protoText" string="&quot;a=&quot;"><IS><connect nodeField="string" protoField="textString"></connect>
</IS>
<FontStyle containerField="fontStyle" size="0.2"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
<Transform><IS><connect nodeField="translation" protoField="numberTranslation"></connect>
</IS>
<Shape><Text DEF="protoNumber" string="&quot;0&quot;"><FontStyle containerField="fontStyle" size="0.2"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
</Transform>
</Transform>
<Script DEF="protoValueTransformerScript" directOutput="true" mustEvaluate="true"><field name="protoScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="shader" accessType="inputOutput" type="SFNode"></field>
<field name="newTranslation" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="protoValue_changed" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="protoNumber_changed" accessType="inputOutput" type="MFString" value="&quot;0.0&quot;"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString" value="a"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="shader" protoField="shaderNode"></connect>
</IS>
<![CDATA[ecmascript:
	const newTranslation = function(Value) {
	    protoValue_changed = Value[0] * protoScale;
	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());
	    Browser.println("In newTranslation:");
	    Browser.println(shader);
	    Browser.println(Value[0]);
	    Browser.println(Value.x);
	    Browser.println(protoScale);
	    Browser.println(Value[0] * protoScale);
	    Browser.println(protoParameterName);
					// shader[protoParameterName] = Value[0] * protoScale;
	};]]></Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoNumber_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoNumber"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare109.name = "SliderProto";
ProtoInterface111.getField("sliderTranslation").setValue("0 0.7 0");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface112.getField("transformTranslation").setValue("0 0 0.1");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface113.getField("sensorTranslation").setValue("0 0 0");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface114.getField("numberTranslation").setValue("0.2 0 0");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface115.getField("textString").setValue("\"a=\"");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface116.getField("parameterName").setValue("a");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface117.getField("parameterScale").setValue("30");
ProtoInterface110YYY.field = new X3D.MFNode();

ProtoInterface118.getField("shaderNode")ProtoInterface110YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface110;

let ProtoBody119 = browser.currentScene.createNode("ProtoBody");
let Group120 = browser.currentScene.createNode("Group");
let Transform121 = browser.currentScene.createNode("Transform");
Transform121.DEF = "protoSlider";
Transform121.translation = new X3D.SFVec3f([0,0.7,0]);
let IS122 = browser.currentScene.createNode("IS");
let connect123 = browser.currentScene.createNode("connect");
connect123.nodeField = "translation";
connect123.protoField = "sliderTranslation";
IS122YYY.connect = new X3D.MFNode();

IS122ZZZ.connect[0] = connect123;

iS = IS122;

let Transform124 = browser.currentScene.createNode("Transform");
Transform124.DEF = "protoTransform";
Transform124.translation = new X3D.SFVec3f([0,0,0.1]);
let IS125 = browser.currentScene.createNode("IS");
let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "translation";
connect126.protoField = "sensorTranslation";
IS125YYY.connect = new X3D.MFNode();

IS125ZZZ.connect[0] = connect126;

iS = IS125;

let PlaneSensor127 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor127.DEF = "protoSensor";
PlaneSensor127.maxPosition = new X3D.SFVec2f([2,0]);
Transform124YYY.children = new X3D.MFNode();

Transform124ZZZ.children[0] = PlaneSensor127;

let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor129 = browser.currentScene.createNode("TouchSensor");
TouchSensor129.DEF = "protoTS";
Transform128YYY.children = new X3D.MFNode();

Transform128ZZZ.children[0] = TouchSensor129;

Transform124ZZZ.children[1] = Transform128;

let Transform130 = browser.currentScene.createNode("Transform");
let Shape131 = browser.currentScene.createNode("Shape");
let Text132 = browser.currentScene.createNode("Text");
Text132.DEF = "protoText";
Text132.string = new X3D.MFString([new X3D.SFString("a=")]);
let IS133 = browser.currentScene.createNode("IS");
let connect134 = browser.currentScene.createNode("connect");
connect134.nodeField = "string";
connect134.protoField = "textString";
IS133YYY.connect = new X3D.MFNode();

IS133ZZZ.connect[0] = connect134;

iS = IS133;

let FontStyle135 = browser.currentScene.createNode("FontStyle");
FontStyle135.size = 0.2;
fontStyle = FontStyle135;

geometry = Text132;

let Appearance136 = browser.currentScene.createNode("Appearance");
let Material137 = browser.currentScene.createNode("Material");
Material137.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material137;

appearance = Appearance136;

Transform130YYY.child = new X3D.undefined();

Transform130ZZZ.child[0] = Shape131;

let Transform138 = browser.currentScene.createNode("Transform");
let IS139 = browser.currentScene.createNode("IS");
let connect140 = browser.currentScene.createNode("connect");
connect140.nodeField = "translation";
connect140.protoField = "numberTranslation";
IS139YYY.connect = new X3D.MFNode();

IS139ZZZ.connect[0] = connect140;

iS = IS139;

let Shape141 = browser.currentScene.createNode("Shape");
let Text142 = browser.currentScene.createNode("Text");
Text142.DEF = "protoNumber";
Text142.string = new X3D.MFString([new X3D.SFString("0")]);
let FontStyle143 = browser.currentScene.createNode("FontStyle");
FontStyle143.size = 0.2;
fontStyle = FontStyle143;

geometry = Text142;

let Appearance144 = browser.currentScene.createNode("Appearance");
let Material145 = browser.currentScene.createNode("Material");
Material145.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material145;

appearance = Appearance144;

Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape141;

Transform130ZZZ.children[1] = Transform138;

Transform124ZZZ.children[2] = Transform130;

Transform121YYY.children = new X3D.MFNode();

Transform121ZZZ.children[0] = Transform124;

Group120YYY.children = new X3D.MFNode();

Group120ZZZ.children[0] = Transform121;

let Script146 = browser.currentScene.createNode("Script");
Script146.DEF = "protoValueTransformerScript";
Script146.directOutput = True;
Script146.mustEvaluate = True;
Script147.getField("protoScale").setValue("30");
Script146YYY.field = new X3D.MFNode();

Script148.getField("shader")Script146YYY.field = new X3D.MFNode();

Script149.getField("newTranslation").setValue("1 1 1");
Script146YYY.field = new X3D.MFNode();

Script150.getField("protoValue_changed").setValue("1");
Script146YYY.field = new X3D.MFNode();

Script151.getField("protoNumber_changed").setValue("\"0.0\"");
Script146YYY.field = new X3D.MFNode();

Script152.getField("protoParameterName").setValue("a");
Script146YYY.field = new X3D.MFNode();

let IS153 = browser.currentScene.createNode("IS");
let connect154 = browser.currentScene.createNode("connect");
connect154.nodeField = "protoScale";
connect154.protoField = "parameterScale";
IS153YYY.connect = new X3D.MFNode();

IS153ZZZ.connect[0] = connect154;

let connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "protoParameterName";
connect155.protoField = "parameterName";
IS153ZZZ.connect[1] = connect155;

let connect156 = browser.currentScene.createNode("connect");
connect156.nodeField = "shader";
connect156.protoField = "shaderNode";
IS153ZZZ.connect[2] = connect156;

iS = IS153;


Script146.setSourceCode(`ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};`)
Group120ZZZ.children[1] = Script146;

let ROUTE157 = browser.currentScene.createNode("ROUTE");
ROUTE157.fromField = "translation_changed";
ROUTE157.fromNode = "protoSensor";
ROUTE157.toField = "set_translation";
ROUTE157.toNode = "protoTransform";
Group120ZZZ.children[2] = ROUTE157;

let ROUTE158 = browser.currentScene.createNode("ROUTE");
ROUTE158.fromField = "translation_changed";
ROUTE158.fromNode = "protoSensor";
ROUTE158.toField = "newTranslation";
ROUTE158.toNode = "protoValueTransformerScript";
Group120ZZZ.children[3] = ROUTE158;

let ROUTE159 = browser.currentScene.createNode("ROUTE");
ROUTE159.fromField = "protoNumber_changed";
ROUTE159.fromNode = "protoValueTransformerScript";
ROUTE159.toField = "string";
ROUTE159.toNode = "protoNumber";
Group120ZZZ.children[4] = ROUTE159;

ProtoBody119YYY.children = new X3D.MFNode();

ProtoBody119ZZZ.children[0] = Group120;

protoBody = ProtoBody119;

LayoutLayer96ZZZ.children[2] = ProtoDeclare109;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "SliderProto";
ProtoInstance160.DEF = "aPI";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "sliderTranslation";
fieldValue161.value = "0 0.7 0";
ProtoInstance160YYY.fieldValue = new X3D.MFNode();

ProtoInstance160ZZZ.fieldValue[0] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "transformTranslation";
fieldValue162.value = "0 0 0.1";
ProtoInstance160ZZZ.fieldValue[1] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "sensorTranslation";
fieldValue163.value = "0 0 0";
ProtoInstance160ZZZ.fieldValue[2] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "numberTranslation";
fieldValue164.value = "0.3 0 0";
ProtoInstance160ZZZ.fieldValue[3] = fieldValue164;

let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "textString";
fieldValue165.value = "\"a=\"";
ProtoInstance160ZZZ.fieldValue[4] = fieldValue165;

let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "parameterName";
fieldValue166.value = "a";
ProtoInstance160ZZZ.fieldValue[5] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "parameterScale";
fieldValue167.value = "30";
ProtoInstance160ZZZ.fieldValue[6] = fieldValue167;

let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "shaderNode";
let ComposedShader169 = browser.currentScene.createNode("ComposedShader");
ComposedShader169.USE = "freewrlShader";
fieldValue168YYY.children = new X3D.MFNode();

fieldValue168ZZZ.children[0] = ComposedShader169;

ProtoInstance160ZZZ.fieldValue[7] = fieldValue168;

LayoutLayer96ZZZ.children[3] = ProtoInstance160;

let ProtoInstance170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance170.name = "SliderProto";
ProtoInstance170.DEF = "bPI";
let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "sliderTranslation";
fieldValue171.value = "0 0.4 0";
ProtoInstance170YYY.fieldValue = new X3D.MFNode();

ProtoInstance170ZZZ.fieldValue[0] = fieldValue171;

let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "transformTranslation";
fieldValue172.value = "0 0 0.1";
ProtoInstance170ZZZ.fieldValue[1] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "sensorTranslation";
fieldValue173.value = "0 0 0";
ProtoInstance170ZZZ.fieldValue[2] = fieldValue173;

let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "numberTranslation";
fieldValue174.value = "0.3 0 0";
ProtoInstance170ZZZ.fieldValue[3] = fieldValue174;

let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "textString";
fieldValue175.value = "\"b=\"";
ProtoInstance170ZZZ.fieldValue[4] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "parameterName";
fieldValue176.value = "b";
ProtoInstance170ZZZ.fieldValue[5] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "parameterScale";
fieldValue177.value = "30";
ProtoInstance170ZZZ.fieldValue[6] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "shaderNode";
let ComposedShader179 = browser.currentScene.createNode("ComposedShader");
ComposedShader179.USE = "freewrlShader";
fieldValue178YYY.children = new X3D.MFNode();

fieldValue178ZZZ.children[0] = ComposedShader179;

ProtoInstance170ZZZ.fieldValue[7] = fieldValue178;

LayoutLayer96ZZZ.children[4] = ProtoInstance170;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "SliderProto";
ProtoInstance180.DEF = "cPI";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "sliderTranslation";
fieldValue181.value = "0 0.1 0";
ProtoInstance180YYY.fieldValue = new X3D.MFNode();

ProtoInstance180ZZZ.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "transformTranslation";
fieldValue182.value = "0 0 0.1";
ProtoInstance180ZZZ.fieldValue[1] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "sensorTranslation";
fieldValue183.value = "0 0 0";
ProtoInstance180ZZZ.fieldValue[2] = fieldValue183;

let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "numberTranslation";
fieldValue184.value = "0.3 0 0";
ProtoInstance180ZZZ.fieldValue[3] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "textString";
fieldValue185.value = "\"c=\"";
ProtoInstance180ZZZ.fieldValue[4] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "parameterName";
fieldValue186.value = "c";
ProtoInstance180ZZZ.fieldValue[5] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "parameterScale";
fieldValue187.value = "20";
ProtoInstance180ZZZ.fieldValue[6] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "shaderNode";
let ComposedShader189 = browser.currentScene.createNode("ComposedShader");
ComposedShader189.USE = "freewrlShader";
fieldValue188YYY.children = new X3D.MFNode();

fieldValue188ZZZ.children[0] = ComposedShader189;

ProtoInstance180ZZZ.fieldValue[7] = fieldValue188;

LayoutLayer96ZZZ.children[5] = ProtoInstance180;

let ProtoInstance190 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance190.name = "SliderProto";
ProtoInstance190.DEF = "dPI";
let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "sliderTranslation";
fieldValue191.value = "0 -0.2 0";
ProtoInstance190YYY.fieldValue = new X3D.MFNode();

ProtoInstance190ZZZ.fieldValue[0] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "transformTranslation";
fieldValue192.value = "0 0 0.1";
ProtoInstance190ZZZ.fieldValue[1] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "sensorTranslation";
fieldValue193.value = "0 0 0";
ProtoInstance190ZZZ.fieldValue[2] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "numberTranslation";
fieldValue194.value = "0.3 0 0";
ProtoInstance190ZZZ.fieldValue[3] = fieldValue194;

let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "textString";
fieldValue195.value = "\"d=\"";
ProtoInstance190ZZZ.fieldValue[4] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "parameterName";
fieldValue196.value = "d";
ProtoInstance190ZZZ.fieldValue[5] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "parameterScale";
fieldValue197.value = "20";
ProtoInstance190ZZZ.fieldValue[6] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "shaderNode";
let ComposedShader199 = browser.currentScene.createNode("ComposedShader");
ComposedShader199.USE = "freewrlShader";
fieldValue198YYY.children = new X3D.MFNode();

fieldValue198ZZZ.children[0] = ComposedShader199;

ProtoInstance190ZZZ.fieldValue[7] = fieldValue198;

LayoutLayer96ZZZ.children[6] = ProtoInstance190;

let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.name = "SliderProto";
ProtoInstance200.DEF = "tdeltaPI";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "sliderTranslation";
fieldValue201.value = "0 -0.5 0";
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
fieldValue204.name = "numberTranslation";
fieldValue204.value = "0.8 0 0";
ProtoInstance200ZZZ.fieldValue[3] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "textString";
fieldValue205.value = "\"tdelta=\"";
ProtoInstance200ZZZ.fieldValue[4] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "parameterName";
fieldValue206.value = "tdelta";
ProtoInstance200ZZZ.fieldValue[5] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "parameterScale";
fieldValue207.value = "6.28";
ProtoInstance200ZZZ.fieldValue[6] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "shaderNode";
let ComposedShader209 = browser.currentScene.createNode("ComposedShader");
ComposedShader209.USE = "freewrlShader";
fieldValue208YYY.children = new X3D.MFNode();

fieldValue208ZZZ.children[0] = ComposedShader209;

ProtoInstance200ZZZ.fieldValue[7] = fieldValue208;

LayoutLayer96ZZZ.children[7] = ProtoInstance200;

let ProtoInstance210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance210.name = "SliderProto";
ProtoInstance210.DEF = "pdeltaPI";
let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "sliderTranslation";
fieldValue211.value = "0 -0.8 0";
ProtoInstance210YYY.fieldValue = new X3D.MFNode();

ProtoInstance210ZZZ.fieldValue[0] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "transformTranslation";
fieldValue212.value = "0 0 0.1";
ProtoInstance210ZZZ.fieldValue[1] = fieldValue212;

let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "sensorTranslation";
fieldValue213.value = "0 0 0";
ProtoInstance210ZZZ.fieldValue[2] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "numberTranslation";
fieldValue214.value = "0.8 0 0";
ProtoInstance210ZZZ.fieldValue[3] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "textString";
fieldValue215.value = "\"pdelta=\"";
ProtoInstance210ZZZ.fieldValue[4] = fieldValue215;

let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "parameterName";
fieldValue216.value = "pdelta";
ProtoInstance210ZZZ.fieldValue[5] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "parameterScale";
fieldValue217.value = "6.28";
ProtoInstance210ZZZ.fieldValue[6] = fieldValue217;

let fieldValue218 = browser.currentScene.createNode("fieldValue");
fieldValue218.name = "shaderNode";
let ComposedShader219 = browser.currentScene.createNode("ComposedShader");
ComposedShader219.USE = "freewrlShader";
fieldValue218YYY.children = new X3D.MFNode();

fieldValue218ZZZ.children[0] = ComposedShader219;

ProtoInstance210ZZZ.fieldValue[7] = fieldValue218;

LayoutLayer96ZZZ.children[8] = ProtoInstance210;

let Layout220 = browser.currentScene.createNode("Layout");
Layout220.align = new X3D.MFString([new X3D.SFString("LEFT"), new X3D.SFString("BOTTOM")]);
Layout220.offset = new X3D.MFFloat([-0.5,0]);
layout = Layout220;

let Viewport221 = browser.currentScene.createNode("Viewport");
viewport = Viewport221;

LayerSet18ZZZ.layers[1] = LayoutLayer96;

browser.currentScene.layerSet = new X3D.undefined();

browser.currentScene.layerSet[0] = LayerSet18;

}
main ();
