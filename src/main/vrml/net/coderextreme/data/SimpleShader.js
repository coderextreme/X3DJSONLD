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
ComposedShader10.DEF = "Cobweb";
ComposedShader10.language = "GLSL";
field11 = browser.currentScene.createNode("field");
field11.name = "decis";
field11.accessType = "initializeOnly";
field11.type = "SFVec3f";
field11.value = "0.95 0.77 0.44";
ComposedShader10.field = [];

ComposedShader10.field[0] = field11;

ShaderPart12 = browser.currentScene.createNode("ShaderPart");
ShaderPart12.type = "VERTEX";

ShaderPart12.setSourceCode(`data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform mat4 x3d_ProjectionMatrix;\n"+
"uniform mat4 x3d_ModelViewMatrix;\n"+
"uniform mat3 x3d_NormalMatrix;\n"+
"\n"+
"attribute vec4 x3d_Vertex;\n"+
"attribute vec3 x3d_Normal;\n"+
"\n"+
"varying vec3 normal;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	normal = x3d_NormalMatrix * x3d_Normal;\n"+
"	\n"+
"	gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;\n"+
"}`)
ComposedShader10.parts[1] = ShaderPart12;

ShaderPart13 = browser.currentScene.createNode("ShaderPart");
ShaderPart13.DEF = "_1";
ShaderPart13.type = "FRAGMENT";

ShaderPart13.setSourceCode(`data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform vec3 x3d_LightDirection [x3d_MaxLights];\n"+
"\n"+
"varying vec3 normal;\n"+
"uniform vec3 decis;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	float intensity;\n"+
"	vec4 color;\n"+
"	vec3 n = normalize (normal);\n"+
"\n"+
"	intensity = abs (dot (x3d_LightDirection [0], n));\n"+
"\n"+
"	if (intensity > decis[0])\n"+
"		color = vec4(0.0,0.5,0.5,1.0);\n"+
"	else if (intensity > decis[1])\n"+
"		color = vec4(0.6,0.3,0.3,1.0);\n"+
"	else if (intensity > decis[2])\n"+
"		color = vec4(1.0,0.2,0.2,1.0);\n"+
"	else\n"+
"		color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"	gl_FragColor = color;\n"+
"}`)
ComposedShader10.parts[2] = ShaderPart13;

Appearance8.shaders = [];

Appearance8.shaders[0] = ComposedShader10;

Shape7.appearance = Appearance8;

Sphere14 = browser.currentScene.createNode("Sphere");
Sphere14.radius = 1.75;
Shape7.geometry = Sphere14;

Transform6.children = [];

Transform6.children[0] = Shape7;

ProtoBody5.children = [];

ProtoBody5.children[0] = Transform6;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "SimpleShader";
MetadataSet16 = browser.currentScene.createNode("MetadataSet");
MetadataSet16.name = "Titania";
MetadataSet16.DEF = "Titania";
MetadataSet16.reference = "http://titania.create3000.de";
MetadataSet17 = browser.currentScene.createNode("MetadataSet");
MetadataSet17.name = "Selection";
MetadataSet17.DEF = "Selection";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet18 = browser.currentScene.createNode("MetadataSet");
MetadataSet18.name = "nodes";
MetadataSet18.DEF = "nodes";
MetadataSet18.reference = "http://titania.create3000.de";
//NULL
MetadataSet17.value = [];

MetadataSet17.value[0] = MetadataSet18;

MetadataSet16.value = [];

MetadataSet16.value[0] = MetadataSet17;

MetadataSet19 = browser.currentScene.createNode("MetadataSet");
MetadataSet19.name = "NavigationInfo";
MetadataSet19.DEF = "NavigationInfo";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataString20 = browser.currentScene.createNode("MetadataString");
MetadataString20.name = "type";
MetadataString20.DEF = "type";
MetadataString20.reference = "http://titania.create3000.de";
MetadataString20.value = ["EXAMINE"];
MetadataSet19.value = [];

MetadataSet19.value[0] = MetadataString20;

MetadataSet16.value[1] = MetadataSet19;

MetadataSet21 = browser.currentScene.createNode("MetadataSet");
MetadataSet21.name = "Viewpoint";
MetadataSet21.DEF = "Viewpoint";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataDouble22 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble22.name = "position";
MetadataDouble22.DEF = "position";
MetadataDouble22.reference = "http://titania.create3000.de";
MetadataDouble22.value = [6.24067728185014,0.00250837343276661,2.92117542307615];
MetadataSet21.value = [];

MetadataSet21.value[0] = MetadataDouble22;

MetadataDouble23 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble23.name = "orientation";
MetadataDouble23.DEF = "orientation";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191];
MetadataSet21.value[1] = MetadataDouble23;

MetadataDouble24 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble24.name = "centerOfRotation";
MetadataDouble24.DEF = "centerOfRotation";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = [-0.808320198626341,-0.358072370409949,0.22817191560906];
MetadataSet21.value[2] = MetadataDouble24;

MetadataSet16.value[2] = MetadataSet21;

WorldInfo15.metadata = MetadataSet16;

browser.currentScene.children[1] = WorldInfo15;

ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "myPrototype";
browser.currentScene.children[2] = ProtoInstance25;

