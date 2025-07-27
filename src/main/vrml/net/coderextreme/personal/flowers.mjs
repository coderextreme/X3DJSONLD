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
scene.addMetaData("title", "flowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "5 or more prismatic flowers");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers.x3d");
await browser .loadComponents (scene);
let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo17;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[1] = Background18;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Transform DEF="animate_transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<!--<ComposedShader DEF='x3dom' language="GLSL"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>--><ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
</field>
<field name="chromaticDispertion" accessType="initializeOnly" type="SFVec3f" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOnly" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOnly" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOnly" value="2"></field>
<field name="a" type="SFFloat" accessType="inputOnly" value="10"></field>
<field name="b" type="SFFloat" accessType="inputOnly" value="1"></field>
<field name="c" type="SFFloat" accessType="inputOnly" value="20"></field>
<field name="d" type="SFFloat" accessType="inputOnly" value="20"></field>
<field name="tdelta" type="SFFloat" accessType="inputOnly" value="0"></field>
<field name="pdelta" type="SFFloat" accessType="inputOnly" value="0"></field>
<ShaderPart url="&quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
</Transform>
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
				tdelta = tdelta + 0.5;
				pdelta = pdelta + 0.5;
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
<ROUTE fromNode="Animate" fromField="translation_changed" toNode="animate_transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="x_ite" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="x_ite" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="x_ite" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="x_ite" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="x_ite" toField="pdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="x_ite" toField="tdelta"></ROUTE>
<!--<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'></ROUTE> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'></ROUTE> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'></ROUTE> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'></ROUTE> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'></ROUTE> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'></ROUTE>--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "flower";
let ProtoBody20 = browser.currentScene.createNode("ProtoBody");
let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "animate_transform";
let Shape22 = browser.currentScene.createNode("Shape");
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material24.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material24;

let ComposedCubeMapTexture25 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture31;

texture = ComposedCubeMapTexture25;

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
let ComposedShader32 = browser.currentScene.createNode("ComposedShader");
ComposedShader32.DEF = "x_ite";
ComposedShader32.language = "GLSL";
ComposedShader33.getField("cube")let ComposedCubeMapTexture34 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture34.USE = "texture";
field33YYY.children = new X3D.MFNode();

field33ZZZ.children[0] = ComposedCubeMapTexture34;

ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader35.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader36.getField("bias").setValue("0.5");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader37.getField("scale").setValue("0.5");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader38.getField("power").setValue("2");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader39.getField("a").setValue("10");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader40.getField("b").setValue("1");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader41.getField("c").setValue("20");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader42.getField("d").setValue("20");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader43.getField("tdelta").setValue("0");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader44.getField("pdelta").setValue("0");
ComposedShader32YYY.field = new X3D.MFNode();

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")]);
ShaderPart45.type = "VERTEX";
ComposedShader32YYY.parts = new X3D.MFNode();

ComposedShader32ZZZ.parts[0] = ShaderPart45;

let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]);
ShaderPart46.type = "FRAGMENT";
ComposedShader32ZZZ.parts[1] = ShaderPart46;

Appearance23YYY.shaders = new X3D.MFNode();

Appearance23ZZZ.shaders[0] = ComposedShader32;

appearance = Appearance23;

let Sphere47 = browser.currentScene.createNode("Sphere");
geometry = Sphere47;

Transform21YYY.child = new X3D.undefined();

Transform21ZZZ.child[0] = Shape22;

ProtoBody20YYY.children = new X3D.MFNode();

ProtoBody20ZZZ.children[0] = Transform21;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "Animate";
Script49.getField("translation").setValue("0 0 0");
Script48YYY.field = new X3D.MFNode();

Script50.getField("velocity").setValue("0 0 0");
Script48YYY.field = new X3D.MFNode();

Script51.getField("set_fraction")Script48YYY.field = new X3D.MFNode();

Script52.getField("a").setValue("0.5");
Script48YYY.field = new X3D.MFNode();

Script53.getField("b").setValue("0.5");
Script48YYY.field = new X3D.MFNode();

Script54.getField("c").setValue("3");
Script48YYY.field = new X3D.MFNode();

Script55.getField("d").setValue("3");
Script48YYY.field = new X3D.MFNode();

Script56.getField("tdelta").setValue("0.5");
Script48YYY.field = new X3D.MFNode();

Script57.getField("pdelta").setValue("0.5");
Script48YYY.field = new X3D.MFNode();


Script48.setSourceCode(`ecmascript:\n"+
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
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
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
ProtoBody20ZZZ.children[1] = Script48;

let TimeSensor58 = browser.currentScene.createNode("TimeSensor");
TimeSensor58.DEF = "TourTime";
TimeSensor58.cycleInterval = 5;
TimeSensor58.loop = True;
ProtoBody20ZZZ.children[2] = TimeSensor58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "TourTime";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "Animate";
ROUTE59.toField = "set_fraction";
ProtoBody20ZZZ.children[3] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "translation_changed";
ROUTE60.toNode = "animate_transform";
ROUTE60.toField = "set_translation";
ProtoBody20ZZZ.children[4] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "a";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "a";
ProtoBody20ZZZ.children[5] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "b";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "b";
ProtoBody20ZZZ.children[6] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "c";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "c";
ProtoBody20ZZZ.children[7] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "d";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "d";
ProtoBody20ZZZ.children[8] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "pdelta";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "pdelta";
ProtoBody20ZZZ.children[9] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "tdelta";
ROUTE66.toNode = "x_ite";
ROUTE66.toField = "tdelta";
ProtoBody20ZZZ.children[10] = ROUTE66;

//<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>
protoBody = ProtoBody20;

browser.currentScene.children[2] = ProtoDeclare19;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "flower";
browser.currentScene.children[3] = ProtoInstance67;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "flower";
browser.currentScene.children[4] = ProtoInstance68;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "flower";
browser.currentScene.children[5] = ProtoInstance69;

}
main ();
