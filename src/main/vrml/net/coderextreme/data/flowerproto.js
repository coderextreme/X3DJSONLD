let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "CubeMapTexturing";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Shape";
component6.level = 4;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "title";
meta8.content = "flowerproto.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "creator";
meta9.content = "John Carlson";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "description";
meta10.content = "A flower proto with configurable shaders";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "generator";
meta11.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "https://coderextreme.net/X3DJSONLD/flowerproto.x3d";
head1.meta[10] = meta12;

head = head1;

let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOutput" type="MFString" value="&quot;../shaders/gl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOutput" type="MFString" value="&quot;../shaders/pc_flowers.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
<Sphere containerField="geometry"></Sphere>
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
ProtoDeclare14.name = "FlowerProto";
let ProtoInterface15 = browser.currentScene.createNode("ProtoInterface");
let field16 = browser.currentScene.createNode("field");
field16.name = "vertex";
field16.accessType = "inputOutput";
field16.type = "MFString";
field16.value = "\"../shaders/gl_flowers_chromatic.vs\"";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "fragment";
field17.accessType = "inputOutput";
field17.type = "MFString";
field17.value = "\"../shaders/pc_flowers.fs\"";
ProtoInterface15.field[1] = field17;

ProtoDeclare14.protoInterface = ProtoInterface15;

let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "transform";
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "shader";
ComposedShader30.language = "GLSL";
let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.type = "SFInt32";
field31.accessType = "inputOutput";
field31.value = "0";
ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "chromaticDispertion";
field32.accessType = "initializeOnly";
field32.type = "SFVec3f";
field32.value = "0.98 1 1.033";
ComposedShader30.field[1] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "bias";
field33.type = "SFFloat";
field33.accessType = "inputOutput";
field33.value = "0.5";
ComposedShader30.field[2] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "scale";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "0.5";
ComposedShader30.field[3] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "power";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "2";
ComposedShader30.field[4] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "a";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "10";
ComposedShader30.field[5] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "b";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "1";
ComposedShader30.field[6] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "c";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "20";
ComposedShader30.field[7] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "d";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "20";
ComposedShader30.field[8] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "tdelta";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "0";
ComposedShader30.field[9] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "pdelta";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "0";
ComposedShader30.field[10] = field41;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.type = "VERTEX";
let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "url";
connect44.protoField = "vertex";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

ShaderPart42.iS = IS43;

ComposedShader30.parts[11] = ShaderPart42;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.type = "FRAGMENT";
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "url";
connect47.protoField = "fragment";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

ShaderPart45.iS = IS46;

ComposedShader30.parts[12] = ShaderPart45;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

Shape20.appearance = Appearance21;

let Sphere48 = browser.currentScene.createNode("Sphere");
Shape20.geometry = Sphere48;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "Animate";
let field50 = browser.currentScene.createNode("field");
field50.name = "translation";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script49.field = new MFNode();

Script49.field[0] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "velocity";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
Script49.field[1] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_fraction";
field52.accessType = "inputOnly";
field52.type = "SFFloat";
Script49.field[2] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "a";
field53.type = "SFFloat";
field53.accessType = "inputOutput";
field53.value = "0.5";
Script49.field[3] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "b";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "0.5";
Script49.field[4] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "c";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "3";
Script49.field[5] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "d";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "3";
Script49.field[6] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "tdelta";
field57.type = "SFFloat";
field57.accessType = "inputOutput";
field57.value = "0.5";
Script49.field[7] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "pdelta";
field58.type = "SFFloat";
field58.accessType = "inputOutput";
field58.value = "0.5";
Script49.field[8] = field58;


Script49.setSourceCode(`ecmascript:\n"+
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
Transform19.children[1] = Script49;

let TimeSensor59 = browser.currentScene.createNode("TimeSensor");
TimeSensor59.DEF = "TourTime";
TimeSensor59.cycleInterval = 5;
TimeSensor59.loop = True;
Transform19.children[2] = TimeSensor59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "TourTime";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Animate";
ROUTE60.toField = "set_fraction";
Transform19.children[3] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "translation_changed";
ROUTE61.toNode = "transform";
ROUTE61.toField = "set_translation";
Transform19.children[4] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "a";
ROUTE62.toNode = "shader";
ROUTE62.toField = "a";
Transform19.children[5] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "b";
ROUTE63.toNode = "shader";
ROUTE63.toField = "b";
Transform19.children[6] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "c";
ROUTE64.toNode = "shader";
ROUTE64.toField = "c";
Transform19.children[7] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "d";
ROUTE65.toNode = "shader";
ROUTE65.toField = "d";
Transform19.children[8] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "tdelta";
ROUTE66.toNode = "shader";
ROUTE66.toField = "tdelta";
Transform19.children[9] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "pdelta";
ROUTE67.toNode = "shader";
ROUTE67.toField = "pdelta";
Transform19.children[10] = ROUTE67;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Transform19;

ProtoDeclare14.protoBody = ProtoBody18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare14;

