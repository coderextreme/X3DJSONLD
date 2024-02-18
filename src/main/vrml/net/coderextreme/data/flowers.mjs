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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

//<component name='Shape' level='4'></component>
let meta10 = browser.currentScene.createNode("meta");
meta10.name = "title";
meta10.content = "flowers.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "5 or more prismatic flowers";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d";
head1.meta[12] = meta14;

head = head1;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo16;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background17;

let ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Transform DEF="animate_transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="x3dom" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
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
<!--<field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field>--><ShaderPart url="&quot;../shaders/x3dom_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/common.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
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
<ShaderPart url="&quot;../shaders/x_ite_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/x_ite.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs&quot;" type="FRAGMENT"></ShaderPart>
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
<ROUTE fromNode="Animate" fromField="a" toNode="x3dom" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="x3dom" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="x3dom" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="x3dom" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="x3dom" toField="pdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="x3dom" toField="tdelta"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "flower";
let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "animate_transform";
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

let ComposedCubeMapTexture24 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x3dom";
ComposedShader31.language = "GLSL";
let field32 = browser.currentScene.createNode("field");
field32.name = "cube";
field32.type = "SFInt32";
field32.accessType = "inputOutput";
field32.value = "0";
ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader31.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "bias";
field34.type = "SFFloat";
field34.accessType = "inputOutput";
field34.value = "0.5";
ComposedShader31.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "scale";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "0.5";
ComposedShader31.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "power";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "2";
ComposedShader31.field[4] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "a";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "10";
ComposedShader31.field[5] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "b";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "1";
ComposedShader31.field[6] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "c";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "20";
ComposedShader31.field[7] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "d";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "20";
ComposedShader31.field[8] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "tdelta";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "0";
ComposedShader31.field[9] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "pdelta";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "0";
ComposedShader31.field[10] = field42;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart43.type = "VERTEX";
ComposedShader31.parts[11] = ShaderPart43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart44.type = "FRAGMENT";
ComposedShader31.parts[12] = ShaderPart44;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

let ComposedShader45 = browser.currentScene.createNode("ComposedShader");
ComposedShader45.DEF = "x_ite";
ComposedShader45.language = "GLSL";
let field46 = browser.currentScene.createNode("field");
field46.name = "cube";
field46.type = "SFNode";
field46.accessType = "inputOutput";
let ComposedCubeMapTexture47 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture47.USE = "texture";
field46.children = new MFNode();

field46.children[0] = ComposedCubeMapTexture47;

ComposedShader45.field = new MFNode();

ComposedShader45.field[0] = field46;

let field48 = browser.currentScene.createNode("field");
field48.name = "chromaticDispertion";
field48.accessType = "initializeOnly";
field48.type = "SFVec3f";
field48.value = "0.98 1 1.033";
ComposedShader45.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "bias";
field49.type = "SFFloat";
field49.accessType = "inputOnly";
field49.value = "0.5";
ComposedShader45.field[2] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "scale";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "0.5";
ComposedShader45.field[3] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "power";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "2";
ComposedShader45.field[4] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "a";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "10";
ComposedShader45.field[5] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "b";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "1";
ComposedShader45.field[6] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "c";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "20";
ComposedShader45.field[7] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "d";
field55.type = "SFFloat";
field55.accessType = "inputOnly";
field55.value = "20";
ComposedShader45.field[8] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "tdelta";
field56.type = "SFFloat";
field56.accessType = "inputOnly";
field56.value = "0";
ComposedShader45.field[9] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "pdelta";
field57.type = "SFFloat";
field57.accessType = "inputOnly";
field57.value = "0";
ComposedShader45.field[10] = field57;

let ShaderPart58 = browser.currentScene.createNode("ShaderPart");
ShaderPart58.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart58.type = "VERTEX";
ComposedShader45.parts[11] = ShaderPart58;

let ShaderPart59 = browser.currentScene.createNode("ShaderPart");
ShaderPart59.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart59.type = "FRAGMENT";
ComposedShader45.parts[12] = ShaderPart59;

Appearance22.shaders[1] = ComposedShader45;

Shape21.appearance = Appearance22;

let Sphere60 = browser.currentScene.createNode("Sphere");
Shape21.geometry = Sphere60;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Transform20;

let Script61 = browser.currentScene.createNode("Script");
Script61.DEF = "Animate";
let field62 = browser.currentScene.createNode("field");
field62.name = "translation";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
Script61.field = new MFNode();

Script61.field[0] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "velocity";
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.value = "0 0 0";
Script61.field[1] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "set_fraction";
field64.accessType = "inputOnly";
field64.type = "SFFloat";
Script61.field[2] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "a";
field65.type = "SFFloat";
field65.accessType = "inputOutput";
field65.value = "0.5";
Script61.field[3] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "b";
field66.type = "SFFloat";
field66.accessType = "inputOutput";
field66.value = "0.5";
Script61.field[4] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "c";
field67.type = "SFFloat";
field67.accessType = "inputOutput";
field67.value = "3";
Script61.field[5] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "d";
field68.type = "SFFloat";
field68.accessType = "inputOutput";
field68.value = "3";
Script61.field[6] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "tdelta";
field69.type = "SFFloat";
field69.accessType = "inputOutput";
field69.value = "0.5";
Script61.field[7] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "pdelta";
field70.type = "SFFloat";
field70.accessType = "inputOutput";
field70.value = "0.5";
Script61.field[8] = field70;


Script61.setSourceCode(`ecmascript:\n"+
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
ProtoBody19.children[1] = Script61;

let TimeSensor71 = browser.currentScene.createNode("TimeSensor");
TimeSensor71.DEF = "TourTime";
TimeSensor71.cycleInterval = 5;
TimeSensor71.loop = True;
ProtoBody19.children[2] = TimeSensor71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "TourTime";
ROUTE72.fromField = "fraction_changed";
ROUTE72.toNode = "Animate";
ROUTE72.toField = "set_fraction";
ProtoBody19.children[3] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "Animate";
ROUTE73.fromField = "translation_changed";
ROUTE73.toNode = "animate_transform";
ROUTE73.toField = "set_translation";
ProtoBody19.children[4] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "Animate";
ROUTE74.fromField = "a";
ROUTE74.toNode = "x_ite";
ROUTE74.toField = "a";
ProtoBody19.children[5] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "Animate";
ROUTE75.fromField = "b";
ROUTE75.toNode = "x_ite";
ROUTE75.toField = "b";
ProtoBody19.children[6] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "Animate";
ROUTE76.fromField = "c";
ROUTE76.toNode = "x_ite";
ROUTE76.toField = "c";
ProtoBody19.children[7] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "Animate";
ROUTE77.fromField = "d";
ROUTE77.toNode = "x_ite";
ROUTE77.toField = "d";
ProtoBody19.children[8] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "Animate";
ROUTE78.fromField = "pdelta";
ROUTE78.toNode = "x_ite";
ROUTE78.toField = "pdelta";
ProtoBody19.children[9] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "Animate";
ROUTE79.fromField = "tdelta";
ROUTE79.toNode = "x_ite";
ROUTE79.toField = "tdelta";
ProtoBody19.children[10] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "Animate";
ROUTE80.fromField = "a";
ROUTE80.toNode = "x3dom";
ROUTE80.toField = "a";
ProtoBody19.children[11] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "Animate";
ROUTE81.fromField = "b";
ROUTE81.toNode = "x3dom";
ROUTE81.toField = "b";
ProtoBody19.children[12] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "Animate";
ROUTE82.fromField = "c";
ROUTE82.toNode = "x3dom";
ROUTE82.toField = "c";
ProtoBody19.children[13] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "d";
ROUTE83.toNode = "x3dom";
ROUTE83.toField = "d";
ProtoBody19.children[14] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "Animate";
ROUTE84.fromField = "pdelta";
ROUTE84.toNode = "x3dom";
ROUTE84.toField = "pdelta";
ProtoBody19.children[15] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "Animate";
ROUTE85.fromField = "tdelta";
ROUTE85.toNode = "x3dom";
ROUTE85.toField = "tdelta";
ProtoBody19.children[16] = ROUTE85;

ProtoDeclare18.protoBody = ProtoBody19;

browser.currentScene.children[2] = ProtoDeclare18;

let ProtoInstance86 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance86.name = "flower";
browser.currentScene.children[3] = ProtoInstance86;

let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "flower";
browser.currentScene.children[4] = ProtoInstance87;

let ProtoInstance88 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance88.name = "flower";
browser.currentScene.children[5] = ProtoInstance88;

