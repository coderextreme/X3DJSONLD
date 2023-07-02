let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Core";
component10.level = 1;
head1.component[8] = component10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "title";
meta11.content = "bub.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "description";
meta13.content = "3 prismatic spheres";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "identifier";
meta15.content = "https://coderextreme.net/X3DJSONLD/bub.x3d";
head1.meta[13] = meta15;

head = head1;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.position = new SFVec3f(new float[0,0,20]);
Viewpoint19.description = "Look at the bubbles flying";
browser.currentScene.children[2] = Viewpoint19;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape DEF="myShape"><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
ProtoDeclare20.name = "Bubble";
let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "transform";
let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "myShape";
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.DEF = "x3dom";
ComposedShader33.language = "GLSL";
let field34 = browser.currentScene.createNode("field");
field34.name = "cube";
field34.type = "SFInt32";
field34.accessType = "inputOutput";
field34.value = "0";
ComposedShader33.field = new MFNode();

ComposedShader33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "chromaticDispertion";
field35.type = "SFVec3f";
field35.accessType = "inputOutput";
field35.value = "0.98 1 1.033";
ComposedShader33.field[1] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "bias";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "0.5";
ComposedShader33.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "scale";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "0.5";
ComposedShader33.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "power";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "2";
ComposedShader33.field[4] = field38;

let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart39.type = "VERTEX";
ComposedShader33.parts[5] = ShaderPart39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart40.type = "FRAGMENT";
ComposedShader33.parts[6] = ShaderPart40;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

let ComposedShader41 = browser.currentScene.createNode("ComposedShader");
ComposedShader41.DEF = "x_ite";
ComposedShader41.language = "GLSL";
let field42 = browser.currentScene.createNode("field");
field42.name = "cube";
field42.type = "SFNode";
field42.accessType = "inputOutput";
let ComposedCubeMapTexture43 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture43.USE = "texture";
field42.children = new MFNode();

field42.children[0] = ComposedCubeMapTexture43;

ComposedShader41.field = new MFNode();

ComposedShader41.field[0] = field42;

let field44 = browser.currentScene.createNode("field");
field44.name = "chromaticDispertion";
field44.type = "SFVec3f";
field44.accessType = "inputOutput";
field44.value = "0.98 1 1.033";
ComposedShader41.field[1] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "bias";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "0.5";
ComposedShader41.field[2] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "scale";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "0.5";
ComposedShader41.field[3] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "power";
field47.type = "SFFloat";
field47.accessType = "inputOutput";
field47.value = "2";
ComposedShader41.field[4] = field47;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart48.type = "VERTEX";
ComposedShader41.parts[5] = ShaderPart48;

let ShaderPart49 = browser.currentScene.createNode("ShaderPart");
ShaderPart49.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart49.type = "FRAGMENT";
ComposedShader41.parts[6] = ShaderPart49;

Appearance24.shaders[1] = ComposedShader41;

Shape23.appearance = Appearance24;

let Sphere50 = browser.currentScene.createNode("Sphere");
Shape23.geometry = Sphere50;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

let Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "Bounce";
let field52 = browser.currentScene.createNode("field");
field52.name = "translation";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.value = "0 0 0";
Script51.field = new MFNode();

Script51.field[0] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "velocity";
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
field53.value = "0 0 0";
Script51.field[1] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "set_fraction";
field54.accessType = "inputOnly";
field54.type = "SFTime";
Script51.field[2] = field54;


Script51.setSourceCode(`ecmascript:\n"+
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
ProtoBody21.children[1] = Script51;

let TimeSensor55 = browser.currentScene.createNode("TimeSensor");
TimeSensor55.DEF = "TourTime";
TimeSensor55.cycleInterval = 0.15;
TimeSensor55.loop = True;
ProtoBody21.children[2] = TimeSensor55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "TourTime";
ROUTE56.fromField = "cycleTime";
ROUTE56.toNode = "Bounce";
ROUTE56.toField = "set_fraction";
ProtoBody21.children[3] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "Bounce";
ROUTE57.fromField = "translation_changed";
ROUTE57.toNode = "transform";
ROUTE57.toField = "set_translation";
ProtoBody21.children[4] = ROUTE57;

ProtoDeclare20.protoBody = ProtoBody21;

browser.currentScene.children[3] = ProtoDeclare20;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "Bubble";
browser.currentScene.children[4] = ProtoInstance58;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "Bubble";
browser.currentScene.children[5] = ProtoInstance59;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "Bubble";
browser.currentScene.children[6] = ProtoInstance60;

