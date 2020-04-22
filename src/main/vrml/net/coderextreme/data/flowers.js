var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background3;

ProtoDeclare4 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare4.name = "flower";
ProtoBody5 = browser.currentScene.createNode("ProtoBody");
Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "animate_transform";
Shape7 = browser.currentScene.createNode("Shape");
Appearance8 = browser.currentScene.createNode("Appearance");
Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material9.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance8.material = Material9;

ComposedCubeMapTexture10 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture10.DEF = "texture";
ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture10.top = ImageTexture11;

ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture10.top = ImageTexture12;

ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture10.top = ImageTexture13;

ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture10.top = ImageTexture14;

ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture10.top = ImageTexture15;

ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture10.top = ImageTexture16;

Appearance8.texture = ComposedCubeMapTexture10;

ComposedShader17 = browser.currentScene.createNode("ComposedShader");
ComposedShader17.DEF = "x3dom";
ComposedShader17.language = "GLSL";
field18 = browser.currentScene.createNode("field");
field18.name = "cube";
field18.type = "SFInt32";
field18.accessType = "inputOutput";
field18.value = "0";
ComposedShader17.field = new MFNode();

ComposedShader17.field[0] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "chromaticDispertion";
field19.accessType = "initializeOnly";
field19.type = "SFVec3f";
field19.value = "0.98 1 1.033";
ComposedShader17.field[1] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "bias";
field20.type = "SFFloat";
field20.accessType = "inputOutput";
field20.value = "0.5";
ComposedShader17.field[2] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "scale";
field21.type = "SFFloat";
field21.accessType = "inputOutput";
field21.value = "0.5";
ComposedShader17.field[3] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "power";
field22.type = "SFFloat";
field22.accessType = "inputOutput";
field22.value = "2";
ComposedShader17.field[4] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "a";
field23.type = "SFFloat";
field23.accessType = "inputOutput";
field23.value = "10";
ComposedShader17.field[5] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "b";
field24.type = "SFFloat";
field24.accessType = "inputOutput";
field24.value = "1";
ComposedShader17.field[6] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "c";
field25.type = "SFFloat";
field25.accessType = "inputOutput";
field25.value = "20";
ComposedShader17.field[7] = field25;

field26 = browser.currentScene.createNode("field");
field26.name = "d";
field26.type = "SFFloat";
field26.accessType = "inputOutput";
field26.value = "20";
ComposedShader17.field[8] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "tdelta";
field27.type = "SFFloat";
field27.accessType = "inputOutput";
field27.value = "0";
ComposedShader17.field[9] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "pdelta";
field28.type = "SFFloat";
field28.accessType = "inputOutput";
field28.value = "0";
ComposedShader17.field[10] = field28;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart29 = browser.currentScene.createNode("ShaderPart");
ShaderPart29.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart29.type = "VERTEX";
ComposedShader17.parts[11] = ShaderPart29;

ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ShaderPart30.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart30.type = "FRAGMENT";
ComposedShader17.parts[12] = ShaderPart30;

Appearance8.shaders = new MFNode();

Appearance8.shaders[0] = ComposedShader17;

ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x_ite";
ComposedShader31.language = "GLSL";
field32 = browser.currentScene.createNode("field");
field32.name = "cube";
field32.type = "SFNode";
field32.accessType = "inputOutput";
ComposedCubeMapTexture33 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture33.USE = "texture";
field32.children = new MFNode();

field32.children[0] = ComposedCubeMapTexture33;

ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

field34 = browser.currentScene.createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader31.field[1] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "bias";
field35.type = "SFFloat";
field35.accessType = "inputOnly";
field35.value = "0.5";
ComposedShader31.field[2] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "scale";
field36.type = "SFFloat";
field36.accessType = "inputOnly";
field36.value = "0.5";
ComposedShader31.field[3] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "power";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "2";
ComposedShader31.field[4] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "a";
field38.type = "SFFloat";
field38.accessType = "inputOnly";
field38.value = "10";
ComposedShader31.field[5] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "b";
field39.type = "SFFloat";
field39.accessType = "inputOnly";
field39.value = "1";
ComposedShader31.field[6] = field39;

field40 = browser.currentScene.createNode("field");
field40.name = "c";
field40.type = "SFFloat";
field40.accessType = "inputOnly";
field40.value = "20";
ComposedShader31.field[7] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "d";
field41.type = "SFFloat";
field41.accessType = "inputOnly";
field41.value = "20";
ComposedShader31.field[8] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "tdelta";
field42.type = "SFFloat";
field42.accessType = "inputOnly";
field42.value = "0";
ComposedShader31.field[9] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "pdelta";
field43.type = "SFFloat";
field43.accessType = "inputOnly";
field43.value = "0";
ComposedShader31.field[10] = field43;

ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart44.type = "VERTEX";
ComposedShader31.parts[11] = ShaderPart44;

ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart45.type = "FRAGMENT";
ComposedShader31.parts[12] = ShaderPart45;

Appearance8.shaders[1] = ComposedShader31;

Shape7.appearance = Appearance8;

Sphere46 = browser.currentScene.createNode("Sphere");
Shape7.geometry = Sphere46;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Transform6;

Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "Animate";
field48 = browser.currentScene.createNode("field");
field48.name = "translation";
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.value = "0 0 0";
Script47.field = new MFNode();

Script47.field[0] = field48;

field49 = browser.currentScene.createNode("field");
field49.name = "velocity";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
Script47.field[1] = field49;

field50 = browser.currentScene.createNode("field");
field50.name = "set_fraction";
field50.accessType = "inputOnly";
field50.type = "SFFloat";
Script47.field[2] = field50;

field51 = browser.currentScene.createNode("field");
field51.name = "a";
field51.type = "SFFloat";
field51.accessType = "inputOutput";
field51.value = "0.5";
Script47.field[3] = field51;

field52 = browser.currentScene.createNode("field");
field52.name = "b";
field52.type = "SFFloat";
field52.accessType = "inputOutput";
field52.value = "0.5";
Script47.field[4] = field52;

field53 = browser.currentScene.createNode("field");
field53.name = "c";
field53.type = "SFFloat";
field53.accessType = "inputOutput";
field53.value = "3";
Script47.field[5] = field53;

field54 = browser.currentScene.createNode("field");
field54.name = "d";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "3";
Script47.field[6] = field54;

field55 = browser.currentScene.createNode("field");
field55.name = "tdelta";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "0.5";
Script47.field[7] = field55;

field56 = browser.currentScene.createNode("field");
field56.name = "pdelta";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "0.5";
Script47.field[8] = field56;


Script47.setSourceCode(`ecmascript:\n"+
"\n"+
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
ProtoBody5.children[1] = Script47;

TimeSensor57 = browser.currentScene.createNode("TimeSensor");
TimeSensor57.DEF = "TourTime";
TimeSensor57.cycleInterval = 5;
TimeSensor57.loop = True;
ProtoBody5.children[2] = TimeSensor57;

ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "TourTime";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Animate";
ROUTE58.toField = "set_fraction";
ProtoBody5.children[3] = ROUTE58;

ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "Animate";
ROUTE59.fromField = "translation_changed";
ROUTE59.toNode = "animate_transform";
ROUTE59.toField = "set_translation";
ProtoBody5.children[4] = ROUTE59;

ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "a";
ROUTE60.toNode = "x_ite";
ROUTE60.toField = "a";
ProtoBody5.children[5] = ROUTE60;

ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "b";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "b";
ProtoBody5.children[6] = ROUTE61;

ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "c";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "c";
ProtoBody5.children[7] = ROUTE62;

ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "d";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "d";
ProtoBody5.children[8] = ROUTE63;

ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "pdelta";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "pdelta";
ProtoBody5.children[9] = ROUTE64;

ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "tdelta";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "tdelta";
ProtoBody5.children[10] = ROUTE65;

ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "a";
ROUTE66.toNode = "x3dom";
ROUTE66.toField = "a";
ProtoBody5.children[11] = ROUTE66;

ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "b";
ROUTE67.toNode = "x3dom";
ROUTE67.toField = "b";
ProtoBody5.children[12] = ROUTE67;

ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "c";
ROUTE68.toNode = "x3dom";
ROUTE68.toField = "c";
ProtoBody5.children[13] = ROUTE68;

ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "d";
ROUTE69.toNode = "x3dom";
ROUTE69.toField = "d";
ProtoBody5.children[14] = ROUTE69;

ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "Animate";
ROUTE70.fromField = "pdelta";
ROUTE70.toNode = "x3dom";
ROUTE70.toField = "pdelta";
ProtoBody5.children[15] = ROUTE70;

ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "Animate";
ROUTE71.fromField = "tdelta";
ROUTE71.toNode = "x3dom";
ROUTE71.toField = "tdelta";
ProtoBody5.children[16] = ROUTE71;

ProtoDeclare4.protoBody = ProtoBody5;

browser.currentScene.children[2] = ProtoDeclare4;

ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "flower";
browser.currentScene.children[3] = ProtoInstance72;

ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "flower";
browser.currentScene.children[4] = ProtoInstance73;

ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "flower";
browser.currentScene.children[5] = ProtoInstance74;

