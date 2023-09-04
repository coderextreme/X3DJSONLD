let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "SimpleShader.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Simple shader example";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "John Stewart";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "26 May 2009";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "translated";
meta7.content = "15 October 2009";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "20 October 2019";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.opengl.org/wiki/Fragment_Shader";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "originals/simpleShader.x3dv";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "ShaderTutorialInstantReality.pdf";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "subject";
meta14.content = "X3D shader example";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "Titania V3.0.3, http://titania.create3000.de";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "generator";
meta16.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "info";
meta17.content = "World of Titania";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "outputStyle";
meta18.content = "nicest";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "identifier";
meta19.content = "https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d";
head1.meta[17] = meta19;

let component20 = browser.currentScene.createNode("component");
component20.name = "Shaders";
component20.level = 1;
head1.component[18] = component20;

head = head1;

let ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="myPrototype" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="myInputRange" value="0.95 0.44 0.22"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="TR"><Shape><Appearance><Material diffuseColor="0.5 0.5 0.9"></Material>
<ComposedShader language="GLSL"><ShaderPart></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
<field accessType="initializeOnly" type="SFVec3f" name="decis"></field>
<IS><connect nodeField="decis" protoField="myInputRange"></connect>
</IS>
</ComposedShader>
<ComposedShader DEF="Cobweb" language="GLSL"><ShaderPart></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
<field accessType="initializeOnly" type="SFVec3f" name="decis" value="0.95 0.77 0.44"></field>
</ComposedShader>
</Appearance>
<Sphere radius="1.75"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare22.name = "myPrototype";
let ProtoInterface23 = browser.currentScene.createNode("ProtoInterface");
let field24 = browser.currentScene.createNode("field");
field24.accessType = "initializeOnly";
field24.type = "SFVec3f";
field24.name = "myInputRange";
field24.value = "0.95 0.44 0.22";
ProtoInterface23.field = new MFNode();

ProtoInterface23.field[0] = field24;

ProtoDeclare22.protoInterface = ProtoInterface23;

let ProtoBody25 = browser.currentScene.createNode("ProtoBody");
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "TR";
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.5,0.5,0.9]);
Appearance28.material = Material29;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.language = "GLSL";
let ShaderPart31 = browser.currentScene.createNode("ShaderPart");
ComposedShader30.parts = new MFNode();

ComposedShader30.parts[0] = ShaderPart31;

let ShaderPart32 = browser.currentScene.createNode("ShaderPart");
ShaderPart32.type = "FRAGMENT";
ComposedShader30.parts[1] = ShaderPart32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.name = "decis";
ComposedShader30.field[2] = field33;

let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "decis";
connect35.protoField = "myInputRange";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

ComposedShader30.iS = IS34;

Appearance28.shaders = new MFNode();

Appearance28.shaders[0] = ComposedShader30;

let ComposedShader36 = browser.currentScene.createNode("ComposedShader");
ComposedShader36.DEF = "Cobweb";
ComposedShader36.language = "GLSL";
let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ComposedShader36.parts = new MFNode();

ComposedShader36.parts[0] = ShaderPart37;

let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.type = "FRAGMENT";
ComposedShader36.parts[1] = ShaderPart38;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "initializeOnly";
field39.type = "SFVec3f";
field39.name = "decis";
field39.value = "0.95 0.77 0.44";
ComposedShader36.field[2] = field39;

Appearance28.shaders[1] = ComposedShader36;

Shape27.appearance = Appearance28;

let Sphere40 = browser.currentScene.createNode("Sphere");
Sphere40.radius = 1.75;
Shape27.geometry = Sphere40;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Transform26;

ProtoDeclare22.protoBody = ProtoBody25;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare22;

let WorldInfo41 = browser.currentScene.createNode("WorldInfo");
WorldInfo41.title = "SimpleShader";
let MetadataSet42 = browser.currentScene.createNode("MetadataSet");
MetadataSet42.DEF = "Titania";
MetadataSet42.name = "Titania";
MetadataSet42.reference = "http://titania.create3000.de";
let MetadataSet43 = browser.currentScene.createNode("MetadataSet");
MetadataSet43.DEF = "Selection";
MetadataSet43.name = "Selection";
MetadataSet43.reference = "http://titania.create3000.de";
let MetadataSet44 = browser.currentScene.createNode("MetadataSet");
MetadataSet44.DEF = "nodes";
MetadataSet44.name = "nodes";
MetadataSet44.reference = "http://titania.create3000.de";
MetadataSet43.value = new MFNode();

MetadataSet43.value[0] = MetadataSet44;

MetadataSet42.value = new MFNode();

MetadataSet42.value[0] = MetadataSet43;

let MetadataSet45 = browser.currentScene.createNode("MetadataSet");
MetadataSet45.DEF = "NavigationInfo";
MetadataSet45.name = "NavigationInfo";
MetadataSet45.reference = "http://titania.create3000.de";
let MetadataString46 = browser.currentScene.createNode("MetadataString");
MetadataString46.DEF = "type";
MetadataString46.name = "type";
MetadataString46.reference = "http://titania.create3000.de";
MetadataString46.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet45.value = new MFNode();

MetadataSet45.value[0] = MetadataString46;

MetadataSet42.value[1] = MetadataSet45;

let MetadataSet47 = browser.currentScene.createNode("MetadataSet");
MetadataSet47.DEF = "Viewpoint";
MetadataSet47.name = "Viewpoint";
MetadataSet47.reference = "http://titania.create3000.de";
let MetadataDouble48 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble48.DEF = "position";
MetadataDouble48.name = "position";
MetadataDouble48.reference = "http://titania.create3000.de";
MetadataDouble48.value = new MFDouble(new double[6.24067728185014,0.00250837343276661,2.92117542307615]);
MetadataSet47.value = new MFNode();

MetadataSet47.value[0] = MetadataDouble48;

let MetadataDouble49 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble49.DEF = "orientation";
MetadataDouble49.name = "orientation";
MetadataDouble49.reference = "http://titania.create3000.de";
MetadataDouble49.value = new MFDouble(new double[-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]);
MetadataSet47.value[1] = MetadataDouble49;

let MetadataDouble50 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble50.DEF = "centerOfRotation";
MetadataDouble50.name = "centerOfRotation";
MetadataDouble50.reference = "http://titania.create3000.de";
MetadataDouble50.value = new MFDouble(new double[-0.808320198626341,-0.358072370409949,0.22817191560906]);
MetadataSet47.value[2] = MetadataDouble50;

MetadataSet42.value[2] = MetadataSet47;

WorldInfo41.metadata = MetadataSet42;

browser.currentScene.children[1] = WorldInfo41;

let ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "myPrototype";
browser.currentScene.children[2] = ProtoInstance51;

