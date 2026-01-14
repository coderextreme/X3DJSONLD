const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene.addMetaData("title", "SimpleShader.x3d");
scene.addMetaData("description", "Simple shader example");
scene.addMetaData("creator", "John Stewart");
scene.addMetaData("translator", "Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick");
scene.addMetaData("created", "26 May 2009");
scene.addMetaData("translated", "15 October 2009");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("reference", "http://www.opengl.org/wiki/Fragment_Shader");
scene.addMetaData("reference", "http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader");
scene.addMetaData("reference", "https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest");
scene.addMetaData("subject", "X3D shader example");
scene.addMetaData("reference", "originals/simpleShader.x3dv");
scene.addMetaData("reference", "ShaderTutorialInstantReality.pdf");
scene.addMetaData("generator", "Titania V3.0.3, http://titania.create3000.de");
scene.addMetaData("info", "World of Titania");
scene.addMetaData("outputStyle", "nicest");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d");
scene.addMetaData("license", "../../license.html");
//meta content='under development' name='warning'/
await browser .loadComponents (scene);
let ProtoDeclare23 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="myPrototype" ><ProtoInterface><field name="myInputRange" accessType="initializeOnly" type="SFVec3f" value="0.95 0.44 0.22"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="TR"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.5 0.5 0.9"></Material>
<ComposedShader language="GLSL"><field name="decis" accessType="initializeOnly" type="SFVec3f"></field>
<IS><connect nodeField="decis" protoField="myInputRange"></connect>
</IS>
<ShaderPart type="VERTEX"></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="Cobweb" language="GLSL"><field name="decis" accessType="initializeOnly" type="SFVec3f" value="0.95 0.77 0.44"></field>
<ShaderPart type="VERTEX"></ShaderPart>
<ShaderPart DEF="_1" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere radius="1.75"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare23.name = "myPrototype";
ProtoInterface25.getField("myInputRange").setValue("0.95 0.44 0.22");
ProtoInterface24YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface24;

let ProtoBody26 = browser.currentScene.createNode("ProtoBody");
let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "TR";
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new X3D.SFColor([0.5,0.5,0.9]);
material = Material30;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.language = "GLSL";
ComposedShader32.getField("decis")ComposedShader31YYY.field = new X3D.MFNode();

let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "decis";
connect34.protoField = "myInputRange";
IS33YYY.connect = new X3D.MFNode();

IS33ZZZ.connect[0] = connect34;

iS = IS33;

let ShaderPart35 = browser.currentScene.createNode("ShaderPart");
ShaderPart35.type = "VERTEX";
ComposedShader31YYY.parts = new X3D.MFNode();

ComposedShader31ZZZ.parts[0] = ShaderPart35;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.type = "FRAGMENT";
ComposedShader31ZZZ.parts[1] = ShaderPart36;

Appearance29YYY.shaders = new X3D.MFNode();

Appearance29ZZZ.shaders[0] = ComposedShader31;

let ComposedShader37 = browser.currentScene.createNode("ComposedShader");
ComposedShader37.DEF = "Cobweb";
ComposedShader37.language = "GLSL";
ComposedShader38.getField("decis").setValue("0.95 0.77 0.44");
ComposedShader37YYY.field = new X3D.MFNode();

let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.type = "VERTEX";
ComposedShader37YYY.parts = new X3D.MFNode();

ComposedShader37ZZZ.parts[0] = ShaderPart39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.DEF = "_1";
ShaderPart40.type = "FRAGMENT";
ComposedShader37ZZZ.parts[1] = ShaderPart40;

Appearance29ZZZ.shaders[1] = ComposedShader37;

appearance = Appearance29;

let Sphere41 = browser.currentScene.createNode("Sphere");
Sphere41.radius = 1.75;
geometry = Sphere41;

Transform27YYY.child = new X3D.undefined();

Transform27ZZZ.child[0] = Shape28;

ProtoBody26YYY.children = new X3D.MFNode();

ProtoBody26ZZZ.children[0] = Transform27;

protoBody = ProtoBody26;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare23;

let WorldInfo42 = browser.currentScene.createNode("WorldInfo");
WorldInfo42.title = "SimpleShader";
let MetadataSet43 = browser.currentScene.createNode("MetadataSet");
MetadataSet43.name = "Titania";
MetadataSet43.DEF = "Titania";
MetadataSet43.reference = "http://titania.create3000.de";
let MetadataSet44 = browser.currentScene.createNode("MetadataSet");
MetadataSet44.name = "Selection";
MetadataSet44.DEF = "Selection";
MetadataSet44.reference = "http://titania.create3000.de";
let MetadataSet45 = browser.currentScene.createNode("MetadataSet");
MetadataSet45.name = "nodes";
MetadataSet45.DEF = "nodes";
MetadataSet45.reference = "http://titania.create3000.de";
//NULL
MetadataSet44.value = new X3D.MFNode();

MetadataSet44XXX.value[0] = MetadataSet45;

MetadataSet43.value = new X3D.MFNode();

MetadataSet43XXX.value[0] = MetadataSet44;

let MetadataSet46 = browser.currentScene.createNode("MetadataSet");
MetadataSet46.name = "NavigationInfo";
MetadataSet46.DEF = "NavigationInfo";
MetadataSet46.reference = "http://titania.create3000.de";
let MetadataString47 = browser.currentScene.createNode("MetadataString");
MetadataString47.name = "type";
MetadataString47.DEF = "type";
MetadataString47.reference = "http://titania.create3000.de";
MetadataString47.value = new X3D.MFString([new X3D.SFString("EXAMINE")]);
MetadataSet46.value = new X3D.MFNode();

MetadataSet46XXX.value[0] = MetadataString47;

value[1] = MetadataSet46;

let MetadataSet48 = browser.currentScene.createNode("MetadataSet");
MetadataSet48.name = "Viewpoint";
MetadataSet48.DEF = "Viewpoint";
MetadataSet48.reference = "http://titania.create3000.de";
let MetadataDouble49 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble49.name = "position";
MetadataDouble49.DEF = "position";
MetadataDouble49.reference = "http://titania.create3000.de";
MetadataDouble49.value = new X3D.MFDouble([6.24067728185014,0.00250837343276661,2.92117542307615]);
MetadataSet48.value = new X3D.MFNode();

MetadataSet48XXX.value[0] = MetadataDouble49;

let MetadataDouble50 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble50.name = "orientation";
MetadataDouble50.DEF = "orientation";
MetadataDouble50.reference = "http://titania.create3000.de";
MetadataDouble50.value = new X3D.MFDouble([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]);
value[1] = MetadataDouble50;

let MetadataDouble51 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble51.name = "centerOfRotation";
MetadataDouble51.DEF = "centerOfRotation";
MetadataDouble51.reference = "http://titania.create3000.de";
MetadataDouble51.value = new X3D.MFDouble([-0.808320198626341,-0.358072370409949,0.22817191560906]);
value[2] = MetadataDouble51;

value[2] = MetadataSet48;

metadata = MetadataSet43;

browser.currentScene.children[1] = WorldInfo42;

let ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "myPrototype";
browser.currentScene.children[2] = ProtoInstance52;

}
main ();
