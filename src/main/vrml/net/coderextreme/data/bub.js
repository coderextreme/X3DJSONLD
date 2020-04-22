var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background3;

Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.position = new SFVec3f(new float[0,0,20]);
Viewpoint4.description = "Look at the bubbles flying";
browser.currentScene.children[2] = Viewpoint4;

ProtoDeclare5 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare5.name = "Bubble";
ProtoBody6 = browser.currentScene.createNode("ProtoBody");
Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "myShape";
Appearance9 = browser.currentScene.createNode("Appearance");
Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material10.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance9.material = Material10;

ComposedCubeMapTexture11 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture11.DEF = "texture";
ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture11.top = ImageTexture12;

ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture11.top = ImageTexture13;

ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture11.top = ImageTexture14;

ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture11.top = ImageTexture15;

ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture11.top = ImageTexture16;

ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture11.top = ImageTexture17;

Appearance9.texture = ComposedCubeMapTexture11;

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader18 = browser.currentScene.createNode("ComposedShader");
ComposedShader18.DEF = "x3dom";
ComposedShader18.language = "GLSL";
field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.type = "SFInt32";
field19.accessType = "inputOutput";
field19.value = "0";
ComposedShader18.field = new MFNode();

ComposedShader18.field[0] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "chromaticDispertion";
field20.type = "SFVec3f";
field20.accessType = "inputOutput";
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

ShaderPart24 = browser.currentScene.createNode("ShaderPart");
ShaderPart24.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart24.type = "VERTEX";
ComposedShader18.parts[5] = ShaderPart24;

ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart25.type = "FRAGMENT";
ComposedShader18.parts[6] = ShaderPart25;

Appearance9.shaders = new MFNode();

Appearance9.shaders[0] = ComposedShader18;

ComposedShader26 = browser.currentScene.createNode("ComposedShader");
ComposedShader26.DEF = "x_ite";
ComposedShader26.language = "GLSL";
field27 = browser.currentScene.createNode("field");
field27.name = "cube";
field27.type = "SFNode";
field27.accessType = "inputOutput";
ComposedCubeMapTexture28 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture28.USE = "texture";
field27.children = new MFNode();

field27.children[0] = ComposedCubeMapTexture28;

ComposedShader26.field = new MFNode();

ComposedShader26.field[0] = field27;

field29 = browser.currentScene.createNode("field");
field29.name = "chromaticDispertion";
field29.type = "SFVec3f";
field29.accessType = "inputOutput";
field29.value = "0.98 1 1.033";
ComposedShader26.field[1] = field29;

field30 = browser.currentScene.createNode("field");
field30.name = "bias";
field30.type = "SFFloat";
field30.accessType = "inputOutput";
field30.value = "0.5";
ComposedShader26.field[2] = field30;

field31 = browser.currentScene.createNode("field");
field31.name = "scale";
field31.type = "SFFloat";
field31.accessType = "inputOutput";
field31.value = "0.5";
ComposedShader26.field[3] = field31;

field32 = browser.currentScene.createNode("field");
field32.name = "power";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "2";
ComposedShader26.field[4] = field32;

ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"]);
ShaderPart33.type = "VERTEX";
ComposedShader26.parts[5] = ShaderPart33;

ShaderPart34 = browser.currentScene.createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart34.type = "FRAGMENT";
ComposedShader26.parts[6] = ShaderPart34;

Appearance9.shaders[1] = ComposedShader26;

Shape8.appearance = Appearance9;

Sphere35 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere35;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

ProtoBody6.children = new MFNode();

ProtoBody6.children[0] = Transform7;

Script36 = browser.currentScene.createNode("Script");
Script36.DEF = "Bounce";
field37 = browser.currentScene.createNode("field");
field37.name = "translation";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0 0 0";
Script36.field = new MFNode();

Script36.field[0] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "velocity";
field38.accessType = "inputOutput";
field38.type = "SFVec3f";
field38.value = "0 0 0";
Script36.field[1] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "set_fraction";
field39.accessType = "inputOnly";
field39.type = "SFTime";
Script36.field[2] = field39;


Script36.setSourceCode(`ecmascript:\n"+
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
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}`)
ProtoBody6.children[1] = Script36;

TimeSensor40 = browser.currentScene.createNode("TimeSensor");
TimeSensor40.DEF = "TourTime";
TimeSensor40.cycleInterval = 0.15;
TimeSensor40.loop = True;
ProtoBody6.children[2] = TimeSensor40;

ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "TourTime";
ROUTE41.fromField = "cycleTime";
ROUTE41.toNode = "Bounce";
ROUTE41.toField = "set_fraction";
ProtoBody6.children[3] = ROUTE41;

ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "Bounce";
ROUTE42.fromField = "translation_changed";
ROUTE42.toNode = "transform";
ROUTE42.toField = "set_translation";
ProtoBody6.children[4] = ROUTE42;

ProtoDeclare5.protoBody = ProtoBody6;

browser.currentScene.children[3] = ProtoDeclare5;

ProtoInstance43 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance43.name = "Bubble";
browser.currentScene.children[4] = ProtoInstance43;

ProtoInstance44 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance44.name = "Bubble";
browser.currentScene.children[5] = ProtoInstance44;

ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "Bubble";
browser.currentScene.children[6] = ProtoInstance45;

