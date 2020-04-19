var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "FlowerProto";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
field4 = browser.currentScene.createNode("field");
field4.name = "vertex";
field4.accessType = "inputOutput";
field4.type = "MFString";
field4.value = "\"../shaders/gl_flowers_chromatic.vs\"";
ProtoInterface3.field = [];

ProtoInterface3.field[0] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "fragment";
field5.accessType = "inputOutput";
field5.type = "MFString";
field5.value = "\"../shaders/pc_flowers.fs\"";
ProtoInterface3.field[1] = field5;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody6 = browser.currentScene.createNode("ProtoBody");
Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
Shape8 = browser.currentScene.createNode("Shape");
Appearance9 = browser.currentScene.createNode("Appearance");
Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = [0.7,0.7,0.7];
Material10.specularColor = [0.5,0.5,0.5];
Appearance9.material = Material10;

ComposedCubeMapTexture11 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture11.DEF = "texture";
ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"];
ComposedCubeMapTexture11.top = ImageTexture12;

ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"];
ComposedCubeMapTexture11.top = ImageTexture13;

ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"];
ComposedCubeMapTexture11.top = ImageTexture14;

ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"];
ComposedCubeMapTexture11.top = ImageTexture15;

ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"];
ComposedCubeMapTexture11.top = ImageTexture16;

ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"];
ComposedCubeMapTexture11.top = ImageTexture17;

Appearance9.texture = ComposedCubeMapTexture11;

ComposedShader18 = browser.currentScene.createNode("ComposedShader");
ComposedShader18.DEF = "shader";
ComposedShader18.language = "GLSL";
field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.type = "SFInt32";
field19.accessType = "inputOutput";
field19.value = "0";
ComposedShader18.field = [];

ComposedShader18.field[0] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "chromaticDispertion";
field20.accessType = "initializeOnly";
field20.type = "SFVec3f";
field20.value = "0.98 1 1.033";
ComposedShader18.field[1] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "bias";
field21.type = "SFFloat";
field21.accessType = "inputOutput";
field21.value = "0.5";
ComposedShader18.field[2] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "scale";
field22.type = "SFFloat";
field22.accessType = "inputOutput";
field22.value = "0.5";
ComposedShader18.field[3] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "power";
field23.type = "SFFloat";
field23.accessType = "inputOutput";
field23.value = "2";
ComposedShader18.field[4] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "a";
field24.type = "SFFloat";
field24.accessType = "inputOutput";
field24.value = "10";
ComposedShader18.field[5] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "b";
field25.type = "SFFloat";
field25.accessType = "inputOutput";
field25.value = "1";
ComposedShader18.field[6] = field25;

field26 = browser.currentScene.createNode("field");
field26.name = "c";
field26.type = "SFFloat";
field26.accessType = "inputOutput";
field26.value = "20";
ComposedShader18.field[7] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "d";
field27.type = "SFFloat";
field27.accessType = "inputOutput";
field27.value = "20";
ComposedShader18.field[8] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "tdelta";
field28.type = "SFFloat";
field28.accessType = "inputOutput";
field28.value = "0";
ComposedShader18.field[9] = field28;

field29 = browser.currentScene.createNode("field");
field29.name = "pdelta";
field29.type = "SFFloat";
field29.accessType = "inputOutput";
field29.value = "0";
ComposedShader18.field[10] = field29;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ShaderPart30.type = "VERTEX";
IS31 = browser.currentScene.createNode("IS");
connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "url";
connect32.protoField = "vertex";
IS31.connect = [];

IS31.connect[0] = connect32;

ShaderPart30.iS = IS31;

ComposedShader18.parts[11] = ShaderPart30;

ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.type = "FRAGMENT";
IS34 = browser.currentScene.createNode("IS");
connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "url";
connect35.protoField = "fragment";
IS34.connect = [];

IS34.connect[0] = connect35;

ShaderPart33.iS = IS34;

ComposedShader18.parts[12] = ShaderPart33;

Appearance9.shaders = [];

Appearance9.shaders[0] = ComposedShader18;

Shape8.appearance = Appearance9;

Sphere36 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere36;

Transform7.children = [];

Transform7.children[0] = Shape8;

Script37 = browser.currentScene.createNode("Script");
Script37.DEF = "Animate";
field38 = browser.currentScene.createNode("field");
field38.name = "translation";
field38.accessType = "inputOutput";
field38.type = "SFVec3f";
field38.value = "0 0 0";
Script37.field = [];

Script37.field[0] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "velocity";
field39.accessType = "inputOutput";
field39.type = "SFVec3f";
field39.value = "0 0 0";
Script37.field[1] = field39;

field40 = browser.currentScene.createNode("field");
field40.name = "set_fraction";
field40.accessType = "inputOnly";
field40.type = "SFFloat";
Script37.field[2] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "a";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "0.5";
Script37.field[3] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "b";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "0.5";
Script37.field[4] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "c";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "3";
Script37.field[5] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "d";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "3";
Script37.field[6] = field44;

field45 = browser.currentScene.createNode("field");
field45.name = "tdelta";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "0.5";
Script37.field[7] = field45;

field46 = browser.currentScene.createNode("field");
field46.name = "pdelta";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "0.5";
Script37.field[8] = field46;


Script37.setSourceCode(`ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}`)
Transform7.children[1] = Script37;

TimeSensor47 = browser.currentScene.createNode("TimeSensor");
TimeSensor47.DEF = "TourTime";
TimeSensor47.cycleInterval = 5;
TimeSensor47.loop = True;
Transform7.children[2] = TimeSensor47;

ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "TourTime";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "Animate";
ROUTE48.toField = "set_fraction";
Transform7.children[3] = ROUTE48;

ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "Animate";
ROUTE49.fromField = "translation_changed";
ROUTE49.toNode = "transform";
ROUTE49.toField = "set_translation";
Transform7.children[4] = ROUTE49;

ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "Animate";
ROUTE50.fromField = "a";
ROUTE50.toNode = "shader";
ROUTE50.toField = "a";
Transform7.children[5] = ROUTE50;

ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "Animate";
ROUTE51.fromField = "b";
ROUTE51.toNode = "shader";
ROUTE51.toField = "b";
Transform7.children[6] = ROUTE51;

ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "Animate";
ROUTE52.fromField = "c";
ROUTE52.toNode = "shader";
ROUTE52.toField = "c";
Transform7.children[7] = ROUTE52;

ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "Animate";
ROUTE53.fromField = "d";
ROUTE53.toNode = "shader";
ROUTE53.toField = "d";
Transform7.children[8] = ROUTE53;

ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "Animate";
ROUTE54.fromField = "tdelta";
ROUTE54.toNode = "shader";
ROUTE54.toField = "tdelta";
Transform7.children[9] = ROUTE54;

ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "Animate";
ROUTE55.fromField = "pdelta";
ROUTE55.toNode = "shader";
ROUTE55.toField = "pdelta";
Transform7.children[10] = ROUTE55;

ProtoBody6.children = [];

ProtoBody6.children[0] = Transform7;

ProtoDeclare2.protoBody = ProtoBody6;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

