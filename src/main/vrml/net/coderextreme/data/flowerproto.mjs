const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
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
ProtoInterface19.getField("vertex").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface20.getField("fragment").setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"");
ProtoInterface18YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface18;

let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "transform";
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material25.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture32;

texture = ComposedCubeMapTexture26;

let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.DEF = "shader";
ComposedShader33.language = "GLSL";
ComposedShader34.getField("cube").setValue("0");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader35.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader36.getField("bias").setValue("0.5");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader37.getField("scale").setValue("0.5");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader38.getField("power").setValue("2");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader39.getField("a").setValue("10");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader40.getField("b").setValue("1");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader41.getField("c").setValue("20");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader42.getField("d").setValue("20");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader43.getField("tdelta").setValue("0");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader44.getField("pdelta").setValue("0");
ComposedShader33YYY.field = new X3D.MFNode();

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.type = "VERTEX";
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "url";
connect47.protoField = "vertex";
IS46YYY.connect = new X3D.MFNode();

IS46ZZZ.connect[0] = connect47;

iS = IS46;

ComposedShader33YYY.parts = new X3D.MFNode();

ComposedShader33ZZZ.parts[0] = ShaderPart45;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.type = "FRAGMENT";
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "url";
connect50.protoField = "fragment";
IS49YYY.connect = new X3D.MFNode();

IS49ZZZ.connect[0] = connect50;

iS = IS49;

ComposedShader33ZZZ.parts[1] = ShaderPart48;

Appearance24YYY.shaders = new X3D.MFNode();

Appearance24ZZZ.shaders[0] = ComposedShader33;

appearance = Appearance24;

let Sphere51 = browser.currentScene.createNode("Sphere");
geometry = Sphere51;

Transform22YYY.child = new X3D.undefined();

Transform22ZZZ.child[0] = Shape23;

let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "Animate";
Script53.getField("translation").setValue("0 0 0");
Script52YYY.field = new X3D.MFNode();

Script54.getField("velocity").setValue("0 0 0");
Script52YYY.field = new X3D.MFNode();

Script55.getField("set_fraction")Script52YYY.field = new X3D.MFNode();

Script56.getField("a").setValue("0.5");
Script52YYY.field = new X3D.MFNode();

Script57.getField("b").setValue("0.5");
Script52YYY.field = new X3D.MFNode();

Script58.getField("c").setValue("3");
Script52YYY.field = new X3D.MFNode();

Script59.getField("d").setValue("3");
Script52YYY.field = new X3D.MFNode();

Script60.getField("tdelta").setValue("0.5");
Script52YYY.field = new X3D.MFNode();

Script61.getField("pdelta").setValue("0.5");
Script52YYY.field = new X3D.MFNode();


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
Transform22ZZZ.children[1] = Script52;

let TimeSensor62 = browser.currentScene.createNode("TimeSensor");
TimeSensor62.DEF = "TourTime";
TimeSensor62.cycleInterval = 5;
TimeSensor62.loop = True;
Transform22ZZZ.children[2] = TimeSensor62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "TourTime";
ROUTE63.fromField = "fraction_changed";
ROUTE63.toNode = "Animate";
ROUTE63.toField = "set_fraction";
Transform22ZZZ.children[3] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "translation_changed";
ROUTE64.toNode = "transform";
ROUTE64.toField = "set_translation";
Transform22ZZZ.children[4] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "a";
ROUTE65.toNode = "shader";
ROUTE65.toField = "a";
Transform22ZZZ.children[5] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "b";
ROUTE66.toNode = "shader";
ROUTE66.toField = "b";
Transform22ZZZ.children[6] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "c";
ROUTE67.toNode = "shader";
ROUTE67.toField = "c";
Transform22ZZZ.children[7] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "d";
ROUTE68.toNode = "shader";
ROUTE68.toField = "d";
Transform22ZZZ.children[8] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "tdelta";
ROUTE69.toNode = "shader";
ROUTE69.toField = "tdelta";
Transform22ZZZ.children[9] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "Animate";
ROUTE70.fromField = "pdelta";
ROUTE70.toNode = "shader";
ROUTE70.toField = "pdelta";
Transform22ZZZ.children[10] = ROUTE70;

ProtoBody21YYY.children = new X3D.MFNode();

ProtoBody21ZZZ.children[0] = Transform22;

protoBody = ProtoBody21;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare17;

}
main ();
