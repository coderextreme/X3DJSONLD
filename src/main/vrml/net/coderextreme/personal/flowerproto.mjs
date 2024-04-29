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
meta11.content = "flowerproto.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "description";
meta13.content = "A flower proto with configurable shaders";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "identifier";
meta15.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.x3d";
head1.meta[13] = meta15;

head = head1;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOutput" type="MFString" value="&quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOutput" type="MFString" value="&quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="shader" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
<field name="chromaticDispertion" accessType="initializeOnly" type="SFVec3f" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<field name="a" type="SFFloat" accessType="inputOutput" value="10"></field>
<field name="b" type="SFFloat" accessType="inputOutput" value="1"></field>
<field name="c" type="SFFloat" accessType="inputOutput" value="20"></field>
<field name="d" type="SFFloat" accessType="inputOutput" value="20"></field>
<field name="tdelta" type="SFFloat" accessType="inputOutput" value="0"></field>
<field name="pdelta" type="SFFloat" accessType="inputOutput" value="0"></field>
<!--<field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field>--><ShaderPart type="VERTEX"><IS><connect nodeField="url" protoField="vertex"></connect>
</IS>
</ShaderPart>
<ShaderPart type="FRAGMENT"><IS><connect nodeField="url" protoField="fragment"></connect>
</IS>
</ShaderPart>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
<Script DEF="Animate"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="a" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="b" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="c" type="SFFloat" accessType="inputOutput" value="3"></field>
<field name="d" type="SFFloat" accessType="inputOutput" value="3"></field>
<field name="tdelta" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="pdelta" type="SFFloat" accessType="inputOutput" value="0.5"></field>
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
			    for (var j = 0; j <= 2; j++) {
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
			    }
			    animate_flowers();
			}

			function animate_flowers(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					c += Math.random() * 2 - 1;
					break;
				case 3:
					d += Math.random() * 2 - 1;
					break;
				}
				tdelta += 0.5;
				pdelta += 0.5;
				if (a > 1) {
					a =  0.5;
				}
				if (b > 1) {
					b =  0.5;
				}
				if (c < 1) {
					c =  4;
				}
				if (d < 1) {
					d =  4;
				}
				if (c > 10) {
					c = 4;
				}
				if (d > 10) {
					d = 4;
				}
			}]]></Script>
<TimeSensor DEF="TourTime" cycleInterval="5" loop="true"></TimeSensor>
<ROUTE fromNode="TourTime" fromField="fraction_changed" toNode="Animate" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Animate" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="shader" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="shader" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="shader" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="shader" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="shader" toField="tdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="shader" toField="pdelta"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "FlowerProto";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
let field19 = browser.currentScene.createNode("field");
field19.name = "vertex";
field19.accessType = "inputOutput";
field19.type = "MFString";
field19.value = "\"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "fragment";
field20.accessType = "inputOutput";
field20.type = "MFString";
field20.value = "\"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"";
ProtoInterface18.field[1] = field20;

ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "transform";
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.DEF = "shader";
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
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
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

let field39 = browser.currentScene.createNode("field");
field39.name = "a";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "10";
ComposedShader33.field[5] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "b";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "1";
ComposedShader33.field[6] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "c";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "20";
ComposedShader33.field[7] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "d";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "20";
ComposedShader33.field[8] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "tdelta";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "0";
ComposedShader33.field[9] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "pdelta";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "0";
ComposedShader33.field[10] = field44;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.type = "VERTEX";
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "url";
connect47.protoField = "vertex";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

ShaderPart45.iS = IS46;

ComposedShader33.parts[11] = ShaderPart45;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.type = "FRAGMENT";
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "url";
connect50.protoField = "fragment";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

ShaderPart48.iS = IS49;

ComposedShader33.parts[12] = ShaderPart48;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

Shape23.appearance = Appearance24;

let Sphere51 = browser.currentScene.createNode("Sphere");
Shape23.geometry = Sphere51;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "Animate";
let field53 = browser.currentScene.createNode("field");
field53.name = "translation";
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
field53.value = "0 0 0";
Script52.field = new MFNode();

Script52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "velocity";
field54.accessType = "inputOutput";
field54.type = "SFVec3f";
field54.value = "0 0 0";
Script52.field[1] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "set_fraction";
field55.accessType = "inputOnly";
field55.type = "SFFloat";
Script52.field[2] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "a";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "0.5";
Script52.field[3] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "b";
field57.type = "SFFloat";
field57.accessType = "inputOutput";
field57.value = "0.5";
Script52.field[4] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "c";
field58.type = "SFFloat";
field58.accessType = "inputOutput";
field58.value = "3";
Script52.field[5] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "d";
field59.type = "SFFloat";
field59.accessType = "inputOutput";
field59.value = "3";
Script52.field[6] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "tdelta";
field60.type = "SFFloat";
field60.accessType = "inputOutput";
field60.value = "0.5";
Script52.field[7] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "pdelta";
field61.type = "SFFloat";
field61.accessType = "inputOutput";
field61.value = "0.5";
Script52.field[8] = field61;


Script52.setSourceCode(`ecmascript:\n"+
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
Transform22.children[1] = Script52;

let TimeSensor62 = browser.currentScene.createNode("TimeSensor");
TimeSensor62.DEF = "TourTime";
TimeSensor62.cycleInterval = 5;
TimeSensor62.loop = True;
Transform22.children[2] = TimeSensor62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "TourTime";
ROUTE63.fromField = "fraction_changed";
ROUTE63.toNode = "Animate";
ROUTE63.toField = "set_fraction";
Transform22.children[3] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "translation_changed";
ROUTE64.toNode = "transform";
ROUTE64.toField = "set_translation";
Transform22.children[4] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "a";
ROUTE65.toNode = "shader";
ROUTE65.toField = "a";
Transform22.children[5] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "b";
ROUTE66.toNode = "shader";
ROUTE66.toField = "b";
Transform22.children[6] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "c";
ROUTE67.toNode = "shader";
ROUTE67.toField = "c";
Transform22.children[7] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "d";
ROUTE68.toNode = "shader";
ROUTE68.toField = "d";
Transform22.children[8] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "tdelta";
ROUTE69.toNode = "shader";
ROUTE69.toField = "tdelta";
Transform22.children[9] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "Animate";
ROUTE70.fromField = "pdelta";
ROUTE70.toNode = "shader";
ROUTE70.toField = "pdelta";
Transform22.children[10] = ROUTE70;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

ProtoDeclare17.protoBody = ProtoBody21;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare17;

