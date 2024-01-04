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
meta8.content = "Sat, 30 Dec 2023 07:57:57 GMT";
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
meta17.name = "generator";
meta17.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "info";
meta18.content = "World of Titania";
head1.meta[16] = meta18;

let component19 = browser.currentScene.createNode("component");
component19.name = "Shaders";
component19.level = 1;
head1.component[17] = component19;

head = head1;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare21.name = "myPrototype";
let ProtoInterface22 = browser.currentScene.createNode("ProtoInterface");
let field23 = browser.currentScene.createNode("field");
field23.accessType = "initializeOnly";
field23.type = "SFVec3f";
field23.name = "myInputRange";
field23.value = "0.95 0.44 0.22";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

ProtoDeclare21.protoInterface = ProtoInterface22;

let ProtoBody24 = browser.currentScene.createNode("ProtoBody");
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "TR";
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.5,0.5,0.9]);
Appearance27.material = Material28;

let ComposedShader29 = browser.currentScene.createNode("ComposedShader");
ComposedShader29.language = "GLSL";
let ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ComposedShader29.parts = new MFNode();

ComposedShader29.parts[0] = ShaderPart30;

let ShaderPart31 = browser.currentScene.createNode("ShaderPart");
ShaderPart31.type = "FRAGMENT";
ComposedShader29.parts[1] = ShaderPart31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "initializeOnly";
field32.type = "SFVec3f";
field32.name = "decis";
ComposedShader29.field[2] = field32;

let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "decis";
connect34.protoField = "myInputRange";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

ComposedShader29.iS = IS33;

Appearance27.shaders = new MFNode();

Appearance27.shaders[0] = ComposedShader29;

let ComposedShader35 = browser.currentScene.createNode("ComposedShader");
ComposedShader35.DEF = "Cobweb";
ComposedShader35.language = "GLSL";
let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ComposedShader35.parts = new MFNode();

ComposedShader35.parts[0] = ShaderPart36;

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.type = "FRAGMENT";
ComposedShader35.parts[1] = ShaderPart37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "initializeOnly";
field38.type = "SFVec3f";
field38.name = "decis";
field38.value = "0.95 0.77 0.44";
ComposedShader35.field[2] = field38;

Appearance27.shaders[1] = ComposedShader35;

Shape26.appearance = Appearance27;

let Sphere39 = browser.currentScene.createNode("Sphere");
Sphere39.radius = 1.75;
Shape26.geometry = Sphere39;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Transform25;

ProtoDeclare21.protoBody = ProtoBody24;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare21;

let WorldInfo40 = browser.currentScene.createNode("WorldInfo");
WorldInfo40.title = "SimpleShader";
let MetadataSet41 = browser.currentScene.createNode("MetadataSet");
MetadataSet41.DEF = "Titania";
MetadataSet41.name = "Titania";
MetadataSet41.reference = "http://titania.create3000.de";
let MetadataSet42 = browser.currentScene.createNode("MetadataSet");
MetadataSet42.DEF = "Selection";
MetadataSet42.name = "Selection";
MetadataSet42.reference = "http://titania.create3000.de";
let MetadataSet43 = browser.currentScene.createNode("MetadataSet");
MetadataSet43.DEF = "nodes";
MetadataSet43.name = "nodes";
MetadataSet43.reference = "http://titania.create3000.de";
MetadataSet42.value = new MFNode();

MetadataSet42.value[0] = MetadataSet43;

MetadataSet41.value = new MFNode();

MetadataSet41.value[0] = MetadataSet42;

let MetadataSet44 = browser.currentScene.createNode("MetadataSet");
MetadataSet44.DEF = "NavigationInfo";
MetadataSet44.name = "NavigationInfo";
MetadataSet44.reference = "http://titania.create3000.de";
let MetadataString45 = browser.currentScene.createNode("MetadataString");
MetadataString45.DEF = "type";
MetadataString45.name = "type";
MetadataString45.reference = "http://titania.create3000.de";
MetadataString45.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataString45;

MetadataSet41.value[1] = MetadataSet44;

let MetadataSet46 = browser.currentScene.createNode("MetadataSet");
MetadataSet46.DEF = "Viewpoint";
MetadataSet46.name = "Viewpoint";
MetadataSet46.reference = "http://titania.create3000.de";
let MetadataDouble47 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble47.DEF = "position";
MetadataDouble47.name = "position";
MetadataDouble47.reference = "http://titania.create3000.de";
MetadataDouble47.value = new MFDouble(new double[6.24067728185014,0.00250837343276661,2.92117542307615]);
MetadataSet46.value = new MFNode();

MetadataSet46.value[0] = MetadataDouble47;

let MetadataDouble48 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble48.DEF = "orientation";
MetadataDouble48.name = "orientation";
MetadataDouble48.reference = "http://titania.create3000.de";
MetadataDouble48.value = new MFDouble(new double[-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]);
MetadataSet46.value[1] = MetadataDouble48;

let MetadataDouble49 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble49.DEF = "centerOfRotation";
MetadataDouble49.name = "centerOfRotation";
MetadataDouble49.reference = "http://titania.create3000.de";
MetadataDouble49.value = new MFDouble(new double[-0.808320198626341,-0.358072370409949,0.22817191560906]);
MetadataSet46.value[2] = MetadataDouble49;

MetadataSet41.value[2] = MetadataSet46;

WorldInfo40.metadata = MetadataSet41;

browser.currentScene.children[1] = WorldInfo40;

let ProtoInstance50 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance50.name = "myPrototype";
browser.currentScene.children[2] = ProtoInstance50;

