var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "myPrototype";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
field4 = browser.currentScene.createNode("field");
field4.name = "myInputRange";
field4.accessType = "initializeOnly";
field4.type = "SFVec3f";
field4.value = "0.95 0.44 0.22";
ProtoInterface3.field = [];

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody5 = browser.currentScene.createNode("ProtoBody");
Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "TR";
Shape7 = browser.currentScene.createNode("Shape");
Appearance8 = browser.currentScene.createNode("Appearance");
Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = [0.5,0.5,0.9];
Appearance8.material = Material9;

ComposedShader10 = browser.currentScene.createNode("ComposedShader");
ComposedShader10.language = "GLSL";
field11 = browser.currentScene.createNode("field");
field11.name = "decis";
field11.accessType = "initializeOnly";
field11.type = "SFVec3f";
ComposedShader10.field = [];

ComposedShader10.field[0] = field11;

IS12 = browser.currentScene.createNode("IS");
connect13 = browser.currentScene.createNode("connect");
connect13.nodeField = "decis";
connect13.protoField = "myInputRange";
IS12.connect = [];

IS12.connect[0] = connect13;

ComposedShader10.iS = IS12;

ShaderPart14 = browser.currentScene.createNode("ShaderPart");
ShaderPart14.type = "VERTEX";
ComposedShader10.parts[1] = ShaderPart14;

ShaderPart15 = browser.currentScene.createNode("ShaderPart");
ShaderPart15.type = "FRAGMENT";
ComposedShader10.parts[2] = ShaderPart15;

Appearance8.shaders = [];

Appearance8.shaders[0] = ComposedShader10;

ComposedShader16 = browser.currentScene.createNode("ComposedShader");
ComposedShader16.DEF = "Cobweb";
ComposedShader16.language = "GLSL";
field17 = browser.currentScene.createNode("field");
field17.name = "decis";
field17.accessType = "initializeOnly";
field17.type = "SFVec3f";
field17.value = "0.95 0.77 0.44";
ComposedShader16.field = [];

ComposedShader16.field[0] = field17;

ShaderPart18 = browser.currentScene.createNode("ShaderPart");
ShaderPart18.type = "VERTEX";
ComposedShader16.parts[1] = ShaderPart18;

ShaderPart19 = browser.currentScene.createNode("ShaderPart");
ShaderPart19.DEF = "_1";
ShaderPart19.type = "FRAGMENT";
ComposedShader16.parts[2] = ShaderPart19;

Appearance8.shaders[1] = ComposedShader16;

Shape7.appearance = Appearance8;

Sphere20 = browser.currentScene.createNode("Sphere");
Sphere20.radius = 1.75;
Shape7.geometry = Sphere20;

Transform6.children = [];

Transform6.children[0] = Shape7;

ProtoBody5.children = [];

ProtoBody5.children[0] = Transform6;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

WorldInfo21 = browser.currentScene.createNode("WorldInfo");
WorldInfo21.title = "SimpleShader";
MetadataSet22 = browser.currentScene.createNode("MetadataSet");
MetadataSet22.name = "Titania";
MetadataSet22.DEF = "Titania";
MetadataSet22.reference = "http://titania.create3000.de";
MetadataSet23 = browser.currentScene.createNode("MetadataSet");
MetadataSet23.name = "Selection";
MetadataSet23.DEF = "Selection";
MetadataSet23.reference = "http://titania.create3000.de";
MetadataSet24 = browser.currentScene.createNode("MetadataSet");
MetadataSet24.name = "nodes";
MetadataSet24.DEF = "nodes";
MetadataSet24.reference = "http://titania.create3000.de";
//NULL
MetadataSet23.value = [];

MetadataSet23.value[0] = MetadataSet24;

MetadataSet22.value = [];

MetadataSet22.value[0] = MetadataSet23;

MetadataSet25 = browser.currentScene.createNode("MetadataSet");
MetadataSet25.name = "NavigationInfo";
MetadataSet25.DEF = "NavigationInfo";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataString26 = browser.currentScene.createNode("MetadataString");
MetadataString26.name = "type";
MetadataString26.DEF = "type";
MetadataString26.reference = "http://titania.create3000.de";
MetadataString26.value = ["EXAMINE"];
MetadataSet25.value = [];

MetadataSet25.value[0] = MetadataString26;

MetadataSet22.value[1] = MetadataSet25;

MetadataSet27 = browser.currentScene.createNode("MetadataSet");
MetadataSet27.name = "Viewpoint";
MetadataSet27.DEF = "Viewpoint";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataDouble28 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble28.name = "position";
MetadataDouble28.DEF = "position";
MetadataDouble28.reference = "http://titania.create3000.de";
MetadataDouble28.value = [6.24067728185014,0.00250837343276661,2.92117542307615];
MetadataSet27.value = [];

MetadataSet27.value[0] = MetadataDouble28;

MetadataDouble29 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble29.name = "orientation";
MetadataDouble29.DEF = "orientation";
MetadataDouble29.reference = "http://titania.create3000.de";
MetadataDouble29.value = [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191];
MetadataSet27.value[1] = MetadataDouble29;

MetadataDouble30 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble30.name = "centerOfRotation";
MetadataDouble30.DEF = "centerOfRotation";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = [-0.808320198626341,-0.358072370409949,0.22817191560906];
MetadataSet27.value[2] = MetadataDouble30;

MetadataSet22.value[2] = MetadataSet27;

WorldInfo21.metadata = MetadataSet22;

browser.currentScene.children[1] = WorldInfo21;

ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "myPrototype";
browser.currentScene.children[2] = ProtoInstance31;

