const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Shape", 4));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "flowerproto.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "A flower proto with configurable shaders");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d");
await browser .loadComponents (scene);
let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Tour Views";
Viewpoint18.position = new X3D.SFVec3f([0,0,50]);
browser.currentScene.children[1] = Viewpoint18;

let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background19.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background19.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background19.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background19.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background19.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[2] = Background19;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOnly" type="MFString" value="&quot;../shaders/freewrl_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOnly" type="MFString" value="&quot;../shaders/freewrl.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="shader" language="GLSL"><field name="fw_textureCoordGenType" accessType="inputOutput" type="SFInt32" value="0"></field>
<field name="chromaticDispertion" accessType="initializeOnly" type="SFVec3f" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<field name="a" type="SFFloat" accessType="inputOutput" value="5"></field>
<field name="b" type="SFFloat" accessType="inputOutput" value="5"></field>
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
<Sphere radius="5"></Sphere>
</Shape>
<Script DEF="Animate" directOutput="true"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOutput" type="SFFloat"></field>
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
ProtoDeclare20.name = "FlowerProto";
ProtoInterface22.getField("vertex").setValue("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface23.getField("fragment").setValue("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"");
ProtoInterface21YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface21;

let ProtoBody24 = browser.currentScene.createNode("ProtoBody");
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "transform";
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material28.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material28;

let ComposedCubeMapTexture29 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture29.DEF = "texture";
let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture33;

let ImageTexture34 = browser.currentScene.createNode("ImageTexture");
ImageTexture34.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture34;

let ImageTexture35 = browser.currentScene.createNode("ImageTexture");
ImageTexture35.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture35;

texture = ComposedCubeMapTexture29;

let ComposedShader36 = browser.currentScene.createNode("ComposedShader");
ComposedShader36.DEF = "shader";
ComposedShader36.language = "GLSL";
ComposedShader37.getField("fw_textureCoordGenType").setValue("0");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader38.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader39.getField("bias").setValue("0.5");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader40.getField("scale").setValue("0.5");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader41.getField("power").setValue("2");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader42.getField("a").setValue("5");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader43.getField("b").setValue("5");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader44.getField("c").setValue("20");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader45.getField("d").setValue("20");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader46.getField("tdelta").setValue("0");
ComposedShader36YYY.field = new X3D.MFNode();

ComposedShader47.getField("pdelta").setValue("0");
ComposedShader36YYY.field = new X3D.MFNode();

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.type = "VERTEX";
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "url";
connect50.protoField = "vertex";
IS49YYY.connect = new X3D.MFNode();

IS49ZZZ.connect[0] = connect50;

iS = IS49;

ComposedShader36YYY.parts = new X3D.MFNode();

ComposedShader36ZZZ.parts[0] = ShaderPart48;

let ShaderPart51 = browser.currentScene.createNode("ShaderPart");
ShaderPart51.type = "FRAGMENT";
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "url";
connect53.protoField = "fragment";
IS52YYY.connect = new X3D.MFNode();

IS52ZZZ.connect[0] = connect53;

iS = IS52;

ComposedShader36ZZZ.parts[1] = ShaderPart51;

Appearance27YYY.shaders = new X3D.MFNode();

Appearance27ZZZ.shaders[0] = ComposedShader36;

appearance = Appearance27;

let Sphere54 = browser.currentScene.createNode("Sphere");
Sphere54.radius = 5;
geometry = Sphere54;

Transform25YYY.child = new X3D.undefined();

Transform25ZZZ.child[0] = Shape26;

let Script55 = browser.currentScene.createNode("Script");
Script55.DEF = "Animate";
Script55.directOutput = True;
Script56.getField("translation").setValue("0 0 0");
Script55YYY.field = new X3D.MFNode();

Script57.getField("velocity").setValue("0 0 0");
Script55YYY.field = new X3D.MFNode();

Script58.getField("set_fraction")Script55YYY.field = new X3D.MFNode();

Script59.getField("a").setValue("0.5");
Script55YYY.field = new X3D.MFNode();

Script60.getField("b").setValue("0.5");
Script55YYY.field = new X3D.MFNode();

Script61.getField("c").setValue("3");
Script55YYY.field = new X3D.MFNode();

Script62.getField("d").setValue("3");
Script55YYY.field = new X3D.MFNode();

Script63.getField("tdelta").setValue("0.5");
Script55YYY.field = new X3D.MFNode();

Script64.getField("pdelta").setValue("0.5");
Script55YYY.field = new X3D.MFNode();


Script55.setSourceCode(`ecmascript:\n"+
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
Transform25ZZZ.children[1] = Script55;

let TimeSensor65 = browser.currentScene.createNode("TimeSensor");
TimeSensor65.DEF = "TourTime";
TimeSensor65.cycleInterval = 5;
TimeSensor65.loop = True;
Transform25ZZZ.children[2] = TimeSensor65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "TourTime";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "Animate";
ROUTE66.toField = "set_fraction";
Transform25ZZZ.children[3] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "translation_changed";
ROUTE67.toNode = "transform";
ROUTE67.toField = "set_translation";
Transform25ZZZ.children[4] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "a";
ROUTE68.toNode = "shader";
ROUTE68.toField = "a";
Transform25ZZZ.children[5] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "b";
ROUTE69.toNode = "shader";
ROUTE69.toField = "b";
Transform25ZZZ.children[6] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "Animate";
ROUTE70.fromField = "c";
ROUTE70.toNode = "shader";
ROUTE70.toField = "c";
Transform25ZZZ.children[7] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "Animate";
ROUTE71.fromField = "d";
ROUTE71.toNode = "shader";
ROUTE71.toField = "d";
Transform25ZZZ.children[8] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "Animate";
ROUTE72.fromField = "tdelta";
ROUTE72.toNode = "shader";
ROUTE72.toField = "tdelta";
Transform25ZZZ.children[9] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "Animate";
ROUTE73.fromField = "pdelta";
ROUTE73.toNode = "shader";
ROUTE73.toField = "pdelta";
Transform25ZZZ.children[10] = ROUTE73;

ProtoBody24YYY.children = new X3D.MFNode();

ProtoBody24ZZZ.children[0] = Transform25;

protoBody = ProtoBody24;

browser.currentScene.children[3] = ProtoDeclare20;

let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "FlowerProto";
let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "vertex";
fieldValue75.value = "\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"";
ProtoInstance74YYY.fieldValue = new X3D.MFNode();

ProtoInstance74ZZZ.fieldValue[0] = fieldValue75;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "fragment";
fieldValue76.value = "\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"";
ProtoInstance74ZZZ.fieldValue[1] = fieldValue76;

browser.currentScene.children[4] = ProtoInstance74;

}
main ();
