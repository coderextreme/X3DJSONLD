let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "flowerproto.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "A flower proto with configurable shaders";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[3] = meta5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Shape";
component12.level = 4;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Grouping";
component13.level = 3;
head1.component[11] = component13;

let component14 = browser.currentScene.createNode("component");
component14.name = "Core";
component14.level = 1;
head1.component[12] = component14;

head = head1;

let ProtoDeclare16 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field accessType="inputOutput" type="MFString" name="vertex" value="&quot;../shaders/gl_flowers_chromatic.vs&quot;"></field>
<field accessType="inputOutput" type="MFString" name="fragment" value="&quot;../shaders/pc_flowers.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="shader" language="GLSL"><ShaderPart><![CDATA[../shaders/gl_flowers_chromatic.vs]]><IS><connect nodeField="url" protoField="vertex"></connect>
</IS>
</ShaderPart>
<ShaderPart type="FRAGMENT"><![CDATA[../shaders/pc_flowers.fs]]><IS><connect nodeField="url" protoField="fragment"></connect>
</IS>
</ShaderPart>
<field accessType="inputOutput" type="SFInt32" name="cube"></field>
<field accessType="initializeOnly" type="SFVec3f" name="chromaticDispertion" value="0.98 1 1.033"></field>
<field accessType="inputOutput" type="SFFloat" name="bias" value="0.5"></field>
<field accessType="inputOutput" type="SFFloat" name="scale" value="0.5"></field>
<field accessType="inputOutput" type="SFFloat" name="power" value="2"></field>
<field accessType="inputOutput" type="SFFloat" name="a" value="10"></field>
<field accessType="inputOutput" type="SFFloat" name="b" value="1"></field>
<field accessType="inputOutput" type="SFFloat" name="c" value="20"></field>
<field accessType="inputOutput" type="SFFloat" name="d" value="20"></field>
<field accessType="inputOutput" type="SFFloat" name="tdelta"></field>
<field accessType="inputOutput" type="SFFloat" name="pdelta"></field>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
<Script DEF="Animate"><field accessType="inputOutput" type="SFVec3f" name="translation"></field>
<field accessType="inputOutput" type="SFVec3f" name="velocity"></field>
<field accessType="inputOnly" type="SFFloat" name="set_fraction"></field>
<field accessType="inputOutput" type="SFFloat" name="a" value="0.5"></field>
<field accessType="inputOutput" type="SFFloat" name="b" value="0.5"></field>
<field accessType="inputOutput" type="SFFloat" name="c" value="3"></field>
<field accessType="inputOutput" type="SFFloat" name="d" value="3"></field>
<field accessType="inputOutput" type="SFFloat" name="tdelta" value="0.5"></field>
<field accessType="inputOutput" type="SFFloat" name="pdelta" value="0.5"></field>
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
</Transform>
<ROUTE fromNode="TourTime" fromField="fraction_changed" toNode="Animate" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Animate" fromField="translation" toNode="transform" toField="translation"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="shader" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="shader" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="shader" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="shader" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="shader" toField="tdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="shader" toField="pdelta"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare16.name = "FlowerProto";
let ProtoInterface17 = browser.currentScene.createNode("ProtoInterface");
let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFString";
field18.name = "vertex";
field18.value = "\"../shaders/gl_flowers_chromatic.vs\"";
ProtoInterface17.field = new MFNode();

ProtoInterface17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "MFString";
field19.name = "fragment";
field19.value = "\"../shaders/pc_flowers.fs\"";
ProtoInterface17.field[1] = field19;

ProtoDeclare16.protoInterface = ProtoInterface17;

let ProtoBody20 = browser.currentScene.createNode("ProtoBody");
let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "transform";
let Shape22 = browser.currentScene.createNode("Shape");
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

let ComposedCubeMapTexture25 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

let ComposedShader32 = browser.currentScene.createNode("ComposedShader");
ComposedShader32.DEF = "shader";
ComposedShader32.language = "GLSL";
let ShaderPart33 = browser.currentScene.createNode("ShaderPart");

ShaderPart33.setSourceCode(`../shaders/gl_flowers_chromatic.vs`)
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "url";
connect35.protoField = "vertex";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

ShaderPart33.iS = IS34;

ComposedShader32.parts = new MFNode();

ComposedShader32.parts[0] = ShaderPart33;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.type = "FRAGMENT";

ShaderPart36.setSourceCode(`../shaders/pc_flowers.fs`)
let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "url";
connect38.protoField = "fragment";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

ShaderPart36.iS = IS37;

ComposedShader32.parts[1] = ShaderPart36;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "inputOutput";
field39.type = "SFInt32";
field39.name = "cube";
ComposedShader32.field[2] = field39;

let field40 = browser.currentScene.createNode("field");
field40.accessType = "initializeOnly";
field40.type = "SFVec3f";
field40.name = "chromaticDispertion";
field40.value = "0.98 1 1.033";
ComposedShader32.field[3] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.name = "bias";
field41.value = "0.5";
ComposedShader32.field[4] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.name = "scale";
field42.value = "0.5";
ComposedShader32.field[5] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.name = "power";
field43.value = "2";
ComposedShader32.field[6] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.name = "a";
field44.value = "10";
ComposedShader32.field[7] = field44;

let field45 = browser.currentScene.createNode("field");
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.name = "b";
field45.value = "1";
ComposedShader32.field[8] = field45;

let field46 = browser.currentScene.createNode("field");
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.name = "c";
field46.value = "20";
ComposedShader32.field[9] = field46;

let field47 = browser.currentScene.createNode("field");
field47.accessType = "inputOutput";
field47.type = "SFFloat";
field47.name = "d";
field47.value = "20";
ComposedShader32.field[10] = field47;

let field48 = browser.currentScene.createNode("field");
field48.accessType = "inputOutput";
field48.type = "SFFloat";
field48.name = "tdelta";
ComposedShader32.field[11] = field48;

let field49 = browser.currentScene.createNode("field");
field49.accessType = "inputOutput";
field49.type = "SFFloat";
field49.name = "pdelta";
ComposedShader32.field[12] = field49;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

Shape22.appearance = Appearance23;

let Sphere50 = browser.currentScene.createNode("Sphere");
Shape22.geometry = Sphere50;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

let Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "Animate";
let field52 = browser.currentScene.createNode("field");
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.name = "translation";
Script51.field = new MFNode();

Script51.field[0] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
field53.name = "velocity";
Script51.field[1] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "inputOnly";
field54.type = "SFFloat";
field54.name = "set_fraction";
Script51.field[2] = field54;

let field55 = browser.currentScene.createNode("field");
field55.accessType = "inputOutput";
field55.type = "SFFloat";
field55.name = "a";
field55.value = "0.5";
Script51.field[3] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "inputOutput";
field56.type = "SFFloat";
field56.name = "b";
field56.value = "0.5";
Script51.field[4] = field56;

let field57 = browser.currentScene.createNode("field");
field57.accessType = "inputOutput";
field57.type = "SFFloat";
field57.name = "c";
field57.value = "3";
Script51.field[5] = field57;

let field58 = browser.currentScene.createNode("field");
field58.accessType = "inputOutput";
field58.type = "SFFloat";
field58.name = "d";
field58.value = "3";
Script51.field[6] = field58;

let field59 = browser.currentScene.createNode("field");
field59.accessType = "inputOutput";
field59.type = "SFFloat";
field59.name = "tdelta";
field59.value = "0.5";
Script51.field[7] = field59;

let field60 = browser.currentScene.createNode("field");
field60.accessType = "inputOutput";
field60.type = "SFFloat";
field60.name = "pdelta";
field60.value = "0.5";
Script51.field[8] = field60;


Script51.setSourceCode(`ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}`)
Transform21.children[1] = Script51;

let TimeSensor61 = browser.currentScene.createNode("TimeSensor");
TimeSensor61.DEF = "TourTime";
TimeSensor61.cycleInterval = 5;
TimeSensor61.loop = True;
Transform21.children[2] = TimeSensor61;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Transform21;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "TourTime";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "Animate";
ROUTE62.toField = "set_fraction";
ProtoBody20.children[1] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "translation";
ROUTE63.toNode = "transform";
ROUTE63.toField = "translation";
ProtoBody20.children[2] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "a";
ROUTE64.toNode = "shader";
ROUTE64.toField = "a";
ProtoBody20.children[3] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "b";
ROUTE65.toNode = "shader";
ROUTE65.toField = "b";
ProtoBody20.children[4] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "c";
ROUTE66.toNode = "shader";
ROUTE66.toField = "c";
ProtoBody20.children[5] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "d";
ROUTE67.toNode = "shader";
ROUTE67.toField = "d";
ProtoBody20.children[6] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "tdelta";
ROUTE68.toNode = "shader";
ROUTE68.toField = "tdelta";
ProtoBody20.children[7] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "pdelta";
ROUTE69.toNode = "shader";
ROUTE69.toField = "pdelta";
ProtoBody20.children[8] = ROUTE69;

ProtoDeclare16.protoBody = ProtoBody20;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare16;

