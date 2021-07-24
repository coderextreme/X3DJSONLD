let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.position = new SFVec3f(new float[0,0,20]);
Viewpoint4.description = "Look at the bubbles flying";
browser.currentScene.children[2] = Viewpoint4;

let ProtoDeclare5 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape DEF="myShape"><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<!--<ComposedShader DEF='gl' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language="GLSL"> <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader>--><!--<ComposedShader DEF='instant' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader>--><ComposedShader DEF="x3dom" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
<field name="chromaticDispertion" type="SFVec3f" accessType="inputOutput" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<ShaderPart url="&quot;../shaders/x3dom.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/pc_bubbles.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
</field>
<field name="chromaticDispertion" type="SFVec3f" accessType="inputOutput" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<ShaderPart url="&quot;../shaders/x_ite.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/x_itebubbles.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere containerField="geometry"></Sphere>
</Shape>
</Transform>
<Script DEF="Bounce"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFTime"></field>
<![CDATA[ecmascript:
			function initialize() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
			    if (Math.abs(translation.x) > 10) {
				initialize();
			    } else if (Math.abs(translation.y) > 10) {
				initialize();
			    } else if (Math.abs(translation.z) > 10) {
				initialize();
			    } else {
				velocity.x += Math.random() * 0.2 - 0.1;
				velocity.y += Math.random() * 0.2 - 0.1;
				velocity.z += Math.random() * 0.2 - 0.1;
			    }
			}]]></Script>
<TimeSensor DEF="TourTime" cycleInterval="0.15" loop="true"></TimeSensor>
<ROUTE fromNode="TourTime" fromField="cycleTime" toNode="Bounce" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare5.name = "Bubble";
let ProtoBody6 = browser.currentScene.createNode("ProtoBody");
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "myShape";
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material10.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance9.material = Material10;

let ComposedCubeMapTexture11 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture11.DEF = "texture";
let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture11.topTexture = ImageTexture17;

Appearance9.texture = ComposedCubeMapTexture11;

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
let ComposedShader18 = browser.currentScene.createNode("ComposedShader");
ComposedShader18.DEF = "x3dom";
ComposedShader18.language = "GLSL";
let field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.type = "SFInt32";
field19.accessType = "inputOutput";
field19.value = "0";
ComposedShader18.field = new MFNode();

ComposedShader18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "chromaticDispertion";
field20.type = "SFVec3f";
field20.accessType = "inputOutput";
field20.value = "0.98 1 1.033";
ComposedShader18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "bias";
field21.type = "SFFloat";
field21.accessType = "inputOutput";
field21.value = "0.5";
ComposedShader18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "scale";
field22.type = "SFFloat";
field22.accessType = "inputOutput";
field22.value = "0.5";
ComposedShader18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "power";
field23.type = "SFFloat";
field23.accessType = "inputOutput";
field23.value = "2";
ComposedShader18.field[4] = field23;

let ShaderPart24 = browser.currentScene.createNode("ShaderPart");
ShaderPart24.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart24.type = "VERTEX";
ComposedShader18.parts[5] = ShaderPart24;

let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart25.type = "FRAGMENT";
ComposedShader18.parts[6] = ShaderPart25;

Appearance9.shaders = new MFNode();

Appearance9.shaders[0] = ComposedShader18;

let ComposedShader26 = browser.currentScene.createNode("ComposedShader");
ComposedShader26.DEF = "x_ite";
ComposedShader26.language = "GLSL";
let field27 = browser.currentScene.createNode("field");
field27.name = "cube";
field27.type = "SFNode";
field27.accessType = "inputOutput";
let ComposedCubeMapTexture28 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture28.USE = "texture";
field27.children = new MFNode();

field27.children[0] = ComposedCubeMapTexture28;

ComposedShader26.field = new MFNode();

ComposedShader26.field[0] = field27;

let field29 = browser.currentScene.createNode("field");
field29.name = "chromaticDispertion";
field29.type = "SFVec3f";
field29.accessType = "inputOutput";
field29.value = "0.98 1 1.033";
ComposedShader26.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "bias";
field30.type = "SFFloat";
field30.accessType = "inputOutput";
field30.value = "0.5";
ComposedShader26.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "scale";
field31.type = "SFFloat";
field31.accessType = "inputOutput";
field31.value = "0.5";
ComposedShader26.field[3] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "power";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "2";
ComposedShader26.field[4] = field32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart33.type = "VERTEX";
ComposedShader26.parts[5] = ShaderPart33;

let ShaderPart34 = browser.currentScene.createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart34.type = "FRAGMENT";
ComposedShader26.parts[6] = ShaderPart34;

Appearance9.shaders[1] = ComposedShader26;

Shape8.appearance = Appearance9;

let Sphere35 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere35;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

ProtoBody6.children = new MFNode();

ProtoBody6.children[0] = Transform7;

let Script36 = browser.currentScene.createNode("Script");
Script36.DEF = "Bounce";
let field37 = browser.currentScene.createNode("field");
field37.name = "translation";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0 0 0";
Script36.field = new MFNode();

Script36.field[0] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "velocity";
field38.accessType = "inputOutput";
field38.type = "SFVec3f";
field38.value = "0 0 0";
Script36.field[1] = field38;

let field39 = browser.currentScene.createNode("field");
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

let TimeSensor40 = browser.currentScene.createNode("TimeSensor");
TimeSensor40.DEF = "TourTime";
TimeSensor40.cycleInterval = 0.15;
TimeSensor40.loop = True;
ProtoBody6.children[2] = TimeSensor40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "TourTime";
ROUTE41.fromField = "cycleTime";
ROUTE41.toNode = "Bounce";
ROUTE41.toField = "set_fraction";
ProtoBody6.children[3] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "Bounce";
ROUTE42.fromField = "translation_changed";
ROUTE42.toNode = "transform";
ROUTE42.toField = "set_translation";
ProtoBody6.children[4] = ROUTE42;

ProtoDeclare5.protoBody = ProtoBody6;

browser.currentScene.children[3] = ProtoDeclare5;

let ProtoInstance43 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance43.name = "Bubble";
browser.currentScene.children[4] = ProtoInstance43;

let ProtoInstance44 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance44.name = "Bubble";
browser.currentScene.children[5] = ProtoInstance44;

let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "Bubble";
browser.currentScene.children[6] = ProtoInstance45;

