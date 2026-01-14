const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
//<component name='Shape' level='4'></component>
//<component name='DIS' level='2'></component>
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "bumpyx_itesliders.x3d");
scene.addMetaData("description", "*Bumpy flower with prototype sliders*");
scene.addMetaData("creator", "Doug Sanden, Christoph Valentin, John Carlson");
scene.addMetaData("identifier", "https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d");
scene.addMetaData("generator", "PSPad, http://www.pspad.com/");
scene.addMetaData("license", "license.html");
//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
await browser .loadComponents (scene);
//LayerSet with two layers, navigation happens in layer 1
let LayerSet17 = browser.currentScene.createNode("LayerSet");
LayerSet17.activeLayer = 1;
LayerSet17.order = new X3D.MFInt32([1,2,3]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
let Layer18 = browser.currentScene.createNode("Layer");
Layer18.pickable = True;
Layer18.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
//basic nodes, which might be present in any scene
let NavigationInfo19 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo19.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
NavigationInfo19.avatarSize = new X3D.MFFloat([0.25,1.75,0.75]);
Layer18YYY.children = new X3D.MFNode();

Layer18ZZZ.children[0] = NavigationInfo19;

let DirectionalLight20 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight20.ambientIntensity = 0.2;
DirectionalLight20.direction = new X3D.SFVec3f([0,-1,0]);
Layer18ZZZ.children[1] = DirectionalLight20;

let DirectionalLight21 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight21.ambientIntensity = 0.2;
DirectionalLight21.direction = new X3D.SFVec3f([-1,-0.1,-1]);
Layer18ZZZ.children[2] = DirectionalLight21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "My Overview";
Viewpoint22.fieldOfView = 1.570796;
Viewpoint22.position = new X3D.SFVec3f([0,1.75,60]);
Layer18ZZZ.children[3] = Viewpoint22;

//this group contains the red/green/blue 3D crosshair
let Group23 = browser.currentScene.createNode("Group");
//Arrow X
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([25,0,0]);
Transform24.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape25 = browser.currentScene.createNode("Shape");
let Cylinder26 = browser.currentScene.createNode("Cylinder");
Cylinder26.DEF = "Shaft";
Cylinder26.radius = 0.35;
Cylinder26.height = 50;
geometry = Cylinder26;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.DEF = "RED";
Material28.diffuseColor = new X3D.SFColor([1,0,0]);
Material28.emissiveColor = new X3D.SFColor([1,0,0]);
material = Material28;

appearance = Appearance27;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Group23YYY.children = new X3D.MFNode();

Group23ZZZ.children[0] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([50,0,0]);
Transform29.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape30 = browser.currentScene.createNode("Shape");
let Cone31 = browser.currentScene.createNode("Cone");
Cone31.DEF = "Tip";
Cone31.bottomRadius = 0.8;
Cone31.height = 3;
geometry = Cone31;

let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.USE = "RED";
material = Material33;

appearance = Appearance32;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

Group23ZZZ.children[1] = Transform29;

//Arrow Y
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new X3D.SFVec3f([0,25,0]);
let Shape35 = browser.currentScene.createNode("Shape");
let Cylinder36 = browser.currentScene.createNode("Cylinder");
Cylinder36.USE = "Shaft";
geometry = Cylinder36;

let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.DEF = "GREEN";
Material38.diffuseColor = new X3D.SFColor([0,1,0]);
Material38.emissiveColor = new X3D.SFColor([0,1,0]);
material = Material38;

appearance = Appearance37;

Transform34YYY.child = new X3D.undefined();

Transform34ZZZ.child[0] = Shape35;

Group23ZZZ.children[2] = Transform34;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new X3D.SFVec3f([0,50,0]);
let Shape40 = browser.currentScene.createNode("Shape");
let Cone41 = browser.currentScene.createNode("Cone");
Cone41.USE = "Tip";
geometry = Cone41;

let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.USE = "GREEN";
material = Material43;

appearance = Appearance42;

Transform39YYY.child = new X3D.undefined();

Transform39ZZZ.child[0] = Shape40;

Group23ZZZ.children[3] = Transform39;

//Arrow Z
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new X3D.SFVec3f([0,0,25]);
Transform44.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape45 = browser.currentScene.createNode("Shape");
let Cylinder46 = browser.currentScene.createNode("Cylinder");
Cylinder46.USE = "Shaft";
geometry = Cylinder46;

let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.DEF = "BLUE";
Material48.diffuseColor = new X3D.SFColor([0,0,1]);
Material48.emissiveColor = new X3D.SFColor([0,0,1]);
material = Material48;

appearance = Appearance47;

Transform44YYY.child = new X3D.undefined();

Transform44ZZZ.child[0] = Shape45;

Group23ZZZ.children[4] = Transform44;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new X3D.SFVec3f([0,0,50]);
Transform49.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape50 = browser.currentScene.createNode("Shape");
let Cone51 = browser.currentScene.createNode("Cone");
Cone51.USE = "Tip";
geometry = Cone51;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.USE = "BLUE";
material = Material53;

appearance = Appearance52;

Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

Group23ZZZ.children[5] = Transform49;

Layer18ZZZ.children[4] = Group23;

//the model that is being reviewed by the users of this scene
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background55 = browser.currentScene.createNode("Background");
Background55.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background55.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background55.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background55.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background55.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background55.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
Transform54YYY.children = new X3D.MFNode();

Transform54ZZZ.children[0] = Background55;

let Transform56 = browser.currentScene.createNode("Transform");
let Shape57 = browser.currentScene.createNode("Shape");
//<Sphere radius='40'></Sphere>
let IndexedFaceSet58 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet58.convex = False;
IndexedFaceSet58.DEF = "Orbit";
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.DEF = "OrbitCoordinates";
coord = Coordinate59;

geometry = IndexedFaceSet58;

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
ComposedShader69.DEF = "x_iteShader";
ComposedShader69.language = "GLSL";
ComposedShader70.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader71.getField("cube")let ComposedCubeMapTexture72 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture72.USE = "texture";
field71YYY.children = new X3D.MFNode();

field71ZZZ.children[0] = ComposedCubeMapTexture72;

ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader73.getField("bias").setValue("0.5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader74.getField("scale").setValue("0.5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader75.getField("power").setValue("2");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader76.getField("a").setValue("15");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader77.getField("b").setValue("5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader78.getField("c").setValue("5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader79.getField("d").setValue("5");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader80.getField("tdelta").setValue("0");
ComposedShader69YYY.field = new X3D.MFNode();

ComposedShader81.getField("pdelta").setValue("0");
ComposedShader69YYY.field = new X3D.MFNode();

let ShaderPart82 = browser.currentScene.createNode("ShaderPart");
ShaderPart82.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite_flowers_chromatic.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")]);
ShaderPart82.type = "VERTEX";
ComposedShader69YYY.parts = new X3D.MFNode();

ComposedShader69ZZZ.parts[0] = ShaderPart82;

let ShaderPart83 = browser.currentScene.createNode("ShaderPart");
ShaderPart83.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]);
ShaderPart83.type = "FRAGMENT";
ComposedShader69ZZZ.parts[1] = ShaderPart83;

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance60YYY.shaders = new X3D.MFNode();

Appearance60ZZZ.shaders[0] = ComposedShader69;

appearance = Appearance60;

Transform56YYY.child = new X3D.undefined();

Transform56ZZZ.child[0] = Shape57;

Transform54ZZZ.children[1] = Transform56;

Layer18ZZZ.children[5] = Transform54;

let Script84 = browser.currentScene.createNode("Script");
Script84.DEF = "OrbitScript";
Script85.getField("coordinates")Script84YYY.field = new X3D.MFNode();

Script86.getField("coordIndexes")Script84YYY.field = new X3D.MFNode();

Script87.getField("a").setValue("10");
Script84YYY.field = new X3D.MFNode();

Script88.getField("b").setValue("10");
Script84YYY.field = new X3D.MFNode();

Script89.getField("c").setValue("2");
Script84YYY.field = new X3D.MFNode();

Script90.getField("d").setValue("2");
Script84YYY.field = new X3D.MFNode();

Script91.getField("pdelta").setValue("0");
Script84YYY.field = new X3D.MFNode();

Script92.getField("tdelta").setValue("0");
Script84YYY.field = new X3D.MFNode();


Script84.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}`)
Layer18ZZZ.children[6] = Script84;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromField = "coordIndexes";
ROUTE93.fromNode = "OrbitScript";
ROUTE93.toField = "set_coordIndex";
ROUTE93.toNode = "Orbit";
Layer18ZZZ.children[7] = ROUTE93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "coordinates";
ROUTE94.fromNode = "OrbitScript";
ROUTE94.toField = "set_point";
ROUTE94.toNode = "OrbitCoordinates";
Layer18ZZZ.children[8] = ROUTE94;

LayerSet17YYY.layers = new X3D.MFNode();

LayerSet17ZZZ.layers[0] = Layer18;

let LayoutLayer95 = browser.currentScene.createNode("LayoutLayer");
LayoutLayer95.pickable = True;
LayoutLayer95.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
let Layout96 = browser.currentScene.createNode("Layout");
Layout96.align = new X3D.MFString([new X3D.SFString("LEFT"), new X3D.SFString("BOTTOM")]);
Layout96.offset = new X3D.MFFloat([-0.2,0.19]);
Layout96.size = new X3D.MFFloat([0.4,0.6]);
layout = Layout96;

let Viewport97 = browser.currentScene.createNode("Viewport");
Viewport97.clipBoundary = new X3D.MFFloat([0,1,0,1]);
viewport = Viewport97;

let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new X3D.SFVec3f([0,0,-3]);
let Shape99 = browser.currentScene.createNode("Shape");
let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.diffuseColor = new X3D.SFColor([0,0,0]);
Material101.transparency = 0.7;
material = Material101;

appearance = Appearance100;

let Box102 = browser.currentScene.createNode("Box");
Box102.size = new X3D.SFVec3f([100,100,0.02]);
geometry = Box102;

Transform98YYY.child = new X3D.undefined();

Transform98ZZZ.child[0] = Shape99;

LayoutLayer95YYY.children = new X3D.MFNode();

LayoutLayer95ZZZ.children[0] = Transform98;

let Transform103 = browser.currentScene.createNode("Transform");
Transform103.DEF = "equationTransform";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new X3D.SFVec3f([0,0,-20]);
let Shape105 = browser.currentScene.createNode("Shape");
let Text106 = browser.currentScene.createNode("Text");
Text106.DEF = "equation";
Text106.string = new X3D.MFString([new X3D.SFString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")]);
let FontStyle107 = browser.currentScene.createNode("FontStyle");
FontStyle107.size = 0.09;
fontStyle = FontStyle107;

geometry = Text106;

let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material109;

appearance = Appearance108;

Transform104YYY.child = new X3D.undefined();

Transform104ZZZ.child[0] = Shape105;

Transform103YYY.children = new X3D.MFNode();

Transform103ZZZ.children[0] = Transform104;

LayoutLayer95ZZZ.children[1] = Transform103;

let ProtoDeclare110 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0.7 0"></field>
<field name="transformTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0.1"></field>
<field name="sensorTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;a=&quot;"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="petNames" accessType="inputOutput" type="MFString"></field>
<field name="shaderNode" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><IS><connect nodeField="translation" protoField="sensorTranslation"></connect>
</IS>
<PlaneSensor DEF="protoSensor" description="Grab with mouse to adjust slider" maxPosition="1 0"></PlaneSensor>
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
<Script url="&quot;../javascripts/X3DUser.js&quot; &quot;https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js&quot;" DEF="protoValueTransformerScript" directOutput="true" mustEvaluate="true"><field name="protoScale" accessType="inputOutput" type="SFFloat"></field>
<field name="petNames" accessType="inputOutput" type="MFString"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString"></field>
<field name="shader" accessType="inputOutput" type="SFNode"></field>
<field name="newTranslation" accessType="inputOnly" type="SFVec3f" value="1 1 1"></field>
<field name="protoValue_changed" accessType="outputOnly" type="SFFloat" value="1"></field>
<field name="protoText_changed" accessType="outputOnly" type="MFString" value="&quot;1.0&quot;"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="petNames" protoField="petNames"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="shader" protoField="shaderNode"></connect>
</IS>
</Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoText_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoText"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare110.name = "SliderProto";
ProtoInterface112.getField("sliderTranslation").setValue("0 0.7 0");
ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface113.getField("transformTranslation").setValue("0 0 0.1");
ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface114.getField("sensorTranslation").setValue("0 0 0");
ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface115.getField("textString").setValue("\"a=\"");
ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface116.getField("parameterScale").setValue("30");
ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface117.getField("parameterName").setValue("a");
ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface118.getField("petNames")ProtoInterface111YYY.field = new X3D.MFNode();

ProtoInterface119.getField("shaderNode")ProtoInterface111YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface111;

let ProtoBody120 = browser.currentScene.createNode("ProtoBody");
let Group121 = browser.currentScene.createNode("Group");
let Transform122 = browser.currentScene.createNode("Transform");
Transform122.DEF = "protoSlider";
Transform122.translation = new X3D.SFVec3f([0,0.7,0]);
let IS123 = browser.currentScene.createNode("IS");
let connect124 = browser.currentScene.createNode("connect");
connect124.nodeField = "translation";
connect124.protoField = "sliderTranslation";
IS123YYY.connect = new X3D.MFNode();

IS123ZZZ.connect[0] = connect124;

iS = IS123;

let Transform125 = browser.currentScene.createNode("Transform");
Transform125.DEF = "protoTransform";
Transform125.translation = new X3D.SFVec3f([0,0,0.1]);
let IS126 = browser.currentScene.createNode("IS");
let connect127 = browser.currentScene.createNode("connect");
connect127.nodeField = "translation";
connect127.protoField = "sensorTranslation";
IS126YYY.connect = new X3D.MFNode();

IS126ZZZ.connect[0] = connect127;

iS = IS126;

let PlaneSensor128 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor128.DEF = "protoSensor";
PlaneSensor128.description = "Grab with mouse to adjust slider";
PlaneSensor128.maxPosition = new X3D.SFVec2f([1,0]);
Transform125YYY.children = new X3D.MFNode();

Transform125ZZZ.children[0] = PlaneSensor128;

let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor130 = browser.currentScene.createNode("TouchSensor");
TouchSensor130.DEF = "protoTS";
Transform129YYY.children = new X3D.MFNode();

Transform129ZZZ.children[0] = TouchSensor130;

Transform125ZZZ.children[1] = Transform129;

let Transform131 = browser.currentScene.createNode("Transform");
let Shape132 = browser.currentScene.createNode("Shape");
let Text133 = browser.currentScene.createNode("Text");
Text133.DEF = "protoText";
Text133.string = new X3D.MFString([new X3D.SFString("a=")]);
let IS134 = browser.currentScene.createNode("IS");
let connect135 = browser.currentScene.createNode("connect");
connect135.nodeField = "string";
connect135.protoField = "textString";
IS134YYY.connect = new X3D.MFNode();

IS134ZZZ.connect[0] = connect135;

iS = IS134;

let FontStyle136 = browser.currentScene.createNode("FontStyle");
FontStyle136.size = 0.23;
fontStyle = FontStyle136;

geometry = Text133;

let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
material = Material138;

appearance = Appearance137;

Transform131YYY.child = new X3D.undefined();

Transform131ZZZ.child[0] = Shape132;

Transform125ZZZ.children[2] = Transform131;

Transform122YYY.children = new X3D.MFNode();

Transform122ZZZ.children[0] = Transform125;

Group121YYY.children = new X3D.MFNode();

Group121ZZZ.children[0] = Transform122;

let Script139 = browser.currentScene.createNode("Script");
Script139.url = new X3D.MFString([new X3D.SFString("../javascripts/X3DUser.js"), new X3D.SFString("https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js")]);
Script139.DEF = "protoValueTransformerScript";
Script139.directOutput = True;
Script139.mustEvaluate = True;
Script140.getField("protoScale")Script139YYY.field = new X3D.MFNode();

Script141.getField("petNames")Script139YYY.field = new X3D.MFNode();

Script142.getField("protoParameterName")Script139YYY.field = new X3D.MFNode();

Script143.getField("shader")Script139YYY.field = new X3D.MFNode();

Script144.getField("newTranslation").setValue("1 1 1");
Script139YYY.field = new X3D.MFNode();

Script145.getField("protoValue_changed").setValue("1");
Script139YYY.field = new X3D.MFNode();

Script146.getField("protoText_changed").setValue("\"1.0\"");
Script139YYY.field = new X3D.MFNode();

let IS147 = browser.currentScene.createNode("IS");
let connect148 = browser.currentScene.createNode("connect");
connect148.nodeField = "protoScale";
connect148.protoField = "parameterScale";
IS147YYY.connect = new X3D.MFNode();

IS147ZZZ.connect[0] = connect148;

let connect149 = browser.currentScene.createNode("connect");
connect149.nodeField = "petNames";
connect149.protoField = "petNames";
IS147ZZZ.connect[1] = connect149;

let connect150 = browser.currentScene.createNode("connect");
connect150.nodeField = "protoParameterName";
connect150.protoField = "parameterName";
IS147ZZZ.connect[2] = connect150;

let connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "shader";
connect151.protoField = "shaderNode";
IS147ZZZ.connect[3] = connect151;

iS = IS147;

Group121ZZZ.children[1] = Script139;

let ROUTE152 = browser.currentScene.createNode("ROUTE");
ROUTE152.fromField = "translation_changed";
ROUTE152.fromNode = "protoSensor";
ROUTE152.toField = "set_translation";
ROUTE152.toNode = "protoTransform";
Group121ZZZ.children[2] = ROUTE152;

let ROUTE153 = browser.currentScene.createNode("ROUTE");
ROUTE153.fromField = "translation_changed";
ROUTE153.fromNode = "protoSensor";
ROUTE153.toField = "newTranslation";
ROUTE153.toNode = "protoValueTransformerScript";
Group121ZZZ.children[3] = ROUTE153;

let ROUTE154 = browser.currentScene.createNode("ROUTE");
ROUTE154.fromField = "protoText_changed";
ROUTE154.fromNode = "protoValueTransformerScript";
ROUTE154.toField = "string";
ROUTE154.toNode = "protoText";
Group121ZZZ.children[4] = ROUTE154;

ProtoBody120YYY.children = new X3D.MFNode();

ProtoBody120ZZZ.children[0] = Group121;

protoBody = ProtoBody120;

LayoutLayer95ZZZ.children[2] = ProtoDeclare110;

let ProtoInstance155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance155.name = "SliderProto";
ProtoInstance155.DEF = "aPI";
let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "sliderTranslation";
fieldValue156.value = "0 0.7 0";
ProtoInstance155YYY.fieldValue = new X3D.MFNode();

ProtoInstance155ZZZ.fieldValue[0] = fieldValue156;

let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "transformTranslation";
fieldValue157.value = "0 0 0.1";
ProtoInstance155ZZZ.fieldValue[1] = fieldValue157;

let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "sensorTranslation";
fieldValue158.value = "0 0 0";
ProtoInstance155ZZZ.fieldValue[2] = fieldValue158;

let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "textString";
fieldValue159.value = "\"a=\"";
ProtoInstance155ZZZ.fieldValue[3] = fieldValue159;

let fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "parameterScale";
fieldValue160.value = "30";
ProtoInstance155ZZZ.fieldValue[4] = fieldValue160;

let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "parameterName";
fieldValue161.value = "a";
ProtoInstance155ZZZ.fieldValue[5] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "petNames";
fieldValue162.value = "\"yottzumm\" \"group1-petname\"";
ProtoInstance155ZZZ.fieldValue[6] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "shaderNode";
let ComposedShader164 = browser.currentScene.createNode("ComposedShader");
ComposedShader164.USE = "x_iteShader";
fieldValue163YYY.children = new X3D.MFNode();

fieldValue163ZZZ.children[0] = ComposedShader164;

ProtoInstance155ZZZ.fieldValue[7] = fieldValue163;

LayoutLayer95ZZZ.children[3] = ProtoInstance155;

let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "SliderProto";
ProtoInstance165.DEF = "bPI";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "sliderTranslation";
fieldValue166.value = "0 0.4 0";
ProtoInstance165YYY.fieldValue = new X3D.MFNode();

ProtoInstance165ZZZ.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "transformTranslation";
fieldValue167.value = "0 0 0.1";
ProtoInstance165ZZZ.fieldValue[1] = fieldValue167;

let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "sensorTranslation";
fieldValue168.value = "0 0 0";
ProtoInstance165ZZZ.fieldValue[2] = fieldValue168;

let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "textString";
fieldValue169.value = "\"b=\"";
ProtoInstance165ZZZ.fieldValue[3] = fieldValue169;

let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "parameterScale";
fieldValue170.value = "30";
ProtoInstance165ZZZ.fieldValue[4] = fieldValue170;

let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "parameterName";
fieldValue171.value = "b";
ProtoInstance165ZZZ.fieldValue[5] = fieldValue171;

let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "petNames";
fieldValue172.value = "\"yottzumm\" \"group1-petname\"";
ProtoInstance165ZZZ.fieldValue[6] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "shaderNode";
let ComposedShader174 = browser.currentScene.createNode("ComposedShader");
ComposedShader174.USE = "x_iteShader";
fieldValue173YYY.children = new X3D.MFNode();

fieldValue173ZZZ.children[0] = ComposedShader174;

ProtoInstance165ZZZ.fieldValue[7] = fieldValue173;

LayoutLayer95ZZZ.children[4] = ProtoInstance165;

let ProtoInstance175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance175.name = "SliderProto";
ProtoInstance175.DEF = "cPI";
let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "sliderTranslation";
fieldValue176.value = "0 0.1 0";
ProtoInstance175YYY.fieldValue = new X3D.MFNode();

ProtoInstance175ZZZ.fieldValue[0] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "transformTranslation";
fieldValue177.value = "0 0 0.1";
ProtoInstance175ZZZ.fieldValue[1] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "sensorTranslation";
fieldValue178.value = "0 0 0";
ProtoInstance175ZZZ.fieldValue[2] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "textString";
fieldValue179.value = "\"c=\"";
ProtoInstance175ZZZ.fieldValue[3] = fieldValue179;

let fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "parameterScale";
fieldValue180.value = "20";
ProtoInstance175ZZZ.fieldValue[4] = fieldValue180;

let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "parameterName";
fieldValue181.value = "c";
ProtoInstance175ZZZ.fieldValue[5] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "petNames";
fieldValue182.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\"";
ProtoInstance175ZZZ.fieldValue[6] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "shaderNode";
let ComposedShader184 = browser.currentScene.createNode("ComposedShader");
ComposedShader184.USE = "x_iteShader";
fieldValue183YYY.children = new X3D.MFNode();

fieldValue183ZZZ.children[0] = ComposedShader184;

ProtoInstance175ZZZ.fieldValue[7] = fieldValue183;

LayoutLayer95ZZZ.children[5] = ProtoInstance175;

let ProtoInstance185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance185.name = "SliderProto";
ProtoInstance185.DEF = "dPI";
let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "sliderTranslation";
fieldValue186.value = "0 -0.2 0";
ProtoInstance185YYY.fieldValue = new X3D.MFNode();

ProtoInstance185ZZZ.fieldValue[0] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "transformTranslation";
fieldValue187.value = "0 0 0.1";
ProtoInstance185ZZZ.fieldValue[1] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "sensorTranslation";
fieldValue188.value = "0 0 0";
ProtoInstance185ZZZ.fieldValue[2] = fieldValue188;

let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "textString";
fieldValue189.value = "\"d=\"";
ProtoInstance185ZZZ.fieldValue[3] = fieldValue189;

let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "parameterScale";
fieldValue190.value = "20";
ProtoInstance185ZZZ.fieldValue[4] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "parameterName";
fieldValue191.value = "d";
ProtoInstance185ZZZ.fieldValue[5] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "petNames";
fieldValue192.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\"";
ProtoInstance185ZZZ.fieldValue[6] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "shaderNode";
let ComposedShader194 = browser.currentScene.createNode("ComposedShader");
ComposedShader194.USE = "x_iteShader";
fieldValue193YYY.children = new X3D.MFNode();

fieldValue193ZZZ.children[0] = ComposedShader194;

ProtoInstance185ZZZ.fieldValue[7] = fieldValue193;

LayoutLayer95ZZZ.children[6] = ProtoInstance185;

let ProtoInstance195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance195.name = "SliderProto";
ProtoInstance195.DEF = "tdeltaPI";
let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "sliderTranslation";
fieldValue196.value = "0 -0.5 0";
ProtoInstance195YYY.fieldValue = new X3D.MFNode();

ProtoInstance195ZZZ.fieldValue[0] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "transformTranslation";
fieldValue197.value = "0 0 0.1";
ProtoInstance195ZZZ.fieldValue[1] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "sensorTranslation";
fieldValue198.value = "0 0 0";
ProtoInstance195ZZZ.fieldValue[2] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "textString";
fieldValue199.value = "\"tdelta=\"";
ProtoInstance195ZZZ.fieldValue[3] = fieldValue199;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "parameterScale";
fieldValue200.value = "6.28";
ProtoInstance195ZZZ.fieldValue[4] = fieldValue200;

let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "parameterName";
fieldValue201.value = "tdelta";
ProtoInstance195ZZZ.fieldValue[5] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "petNames";
fieldValue202.value = "\"yottzumm2\" \"group1-petname\"";
ProtoInstance195ZZZ.fieldValue[6] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "shaderNode";
let ComposedShader204 = browser.currentScene.createNode("ComposedShader");
ComposedShader204.USE = "x_iteShader";
fieldValue203YYY.children = new X3D.MFNode();

fieldValue203ZZZ.children[0] = ComposedShader204;

ProtoInstance195ZZZ.fieldValue[7] = fieldValue203;

LayoutLayer95ZZZ.children[7] = ProtoInstance195;

let ProtoInstance205 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance205.name = "SliderProto";
ProtoInstance205.DEF = "pdeltaPI";
let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "sliderTranslation";
fieldValue206.value = "0 -0.8 0";
ProtoInstance205YYY.fieldValue = new X3D.MFNode();

ProtoInstance205ZZZ.fieldValue[0] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "transformTranslation";
fieldValue207.value = "0 0 0.1";
ProtoInstance205ZZZ.fieldValue[1] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "sensorTranslation";
fieldValue208.value = "0 0 0";
ProtoInstance205ZZZ.fieldValue[2] = fieldValue208;

let fieldValue209 = browser.currentScene.createNode("fieldValue");
fieldValue209.name = "textString";
fieldValue209.value = "\"pdelta=\"";
ProtoInstance205ZZZ.fieldValue[3] = fieldValue209;

let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "parameterScale";
fieldValue210.value = "6.28";
ProtoInstance205ZZZ.fieldValue[4] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "parameterName";
fieldValue211.value = "pdelta";
ProtoInstance205ZZZ.fieldValue[5] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "petNames";
fieldValue212.value = "\"yottzumm2\" \"group1-petname\"";
ProtoInstance205ZZZ.fieldValue[6] = fieldValue212;

let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "shaderNode";
let ComposedShader214 = browser.currentScene.createNode("ComposedShader");
ComposedShader214.USE = "x_iteShader";
fieldValue213YYY.children = new X3D.MFNode();

fieldValue213ZZZ.children[0] = ComposedShader214;

ProtoInstance205ZZZ.fieldValue[7] = fieldValue213;

LayoutLayer95ZZZ.children[8] = ProtoInstance205;

LayerSet17ZZZ.layers[1] = LayoutLayer95;

let Layer215 = browser.currentScene.createNode("Layer");
Layer215.pickable = True;
Layer215.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
let Viewpoint216 = browser.currentScene.createNode("Viewpoint");
Viewpoint216.description = "My Humanoids";
Viewpoint216.fieldOfView = 1.570796;
Viewpoint216.position = new X3D.SFVec3f([0,1.75,80]);
Layer215YYY.children = new X3D.MFNode();

Layer215ZZZ.children[0] = Viewpoint216;

let Script217 = browser.currentScene.createNode("Script");
Script217.url = new X3D.MFString([new X3D.SFString("../javascripts/X3DAvatar.js"), new X3D.SFString("https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js")]);
Script217.DEF = "HumanoidScript";
Script217.directOutput = True;
Script217.mustEvaluate = True;
Layer215ZZZ.children[1] = Script217;

let Group218 = browser.currentScene.createNode("Group");
Group218.DEF = "humanoidGroup";
let Group219 = browser.currentScene.createNode("Group");
Group218YYY.children = new X3D.MFNode();

Group218ZZZ.children[0] = Group219;

Layer215ZZZ.children[2] = Group218;

LayerSet17ZZZ.layers[2] = Layer215;

browser.currentScene.layerSet = new X3D.undefined();

browser.currentScene.layerSet[0] = LayerSet17;

}
main ();
