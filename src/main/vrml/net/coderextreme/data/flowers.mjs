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
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Shape";
component7.level = 4;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "title";
meta9.content = "flowers.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "creator";
meta10.content = "John Carlson";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "description";
meta11.content = "5 or more prismatic flowers";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/flowers.x3d";
head1.meta[11] = meta13;

head = head1;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo15;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background16 = browser.currentScene.createNode("Background");
Background16.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background16.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background16.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background16.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background16.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background16.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background16;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Transform DEF="animate_transform"><Shape><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
<Sphere containerField="geometry"></Sphere>
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
ProtoDeclare17.name = "flower";
let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "animate_transform";
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
ComposedShader30.DEF = "x3dom";
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
ShaderPart42.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart42.type = "VERTEX";
ComposedShader30.parts[11] = ShaderPart42;

let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart43.type = "FRAGMENT";
ComposedShader30.parts[12] = ShaderPart43;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

let ComposedShader44 = browser.currentScene.createNode("ComposedShader");
ComposedShader44.DEF = "x_ite";
ComposedShader44.language = "GLSL";
let field45 = browser.currentScene.createNode("field");
field45.name = "cube";
field45.type = "SFNode";
field45.accessType = "inputOutput";
let ComposedCubeMapTexture46 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture46.USE = "texture";
field45.children = new MFNode();

field45.children[0] = ComposedCubeMapTexture46;

ComposedShader44.field = new MFNode();

ComposedShader44.field[0] = field45;

let field47 = browser.currentScene.createNode("field");
field47.name = "chromaticDispertion";
field47.accessType = "initializeOnly";
field47.type = "SFVec3f";
field47.value = "0.98 1 1.033";
ComposedShader44.field[1] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "bias";
field48.type = "SFFloat";
field48.accessType = "inputOnly";
field48.value = "0.5";
ComposedShader44.field[2] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "scale";
field49.type = "SFFloat";
field49.accessType = "inputOnly";
field49.value = "0.5";
ComposedShader44.field[3] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "power";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "2";
ComposedShader44.field[4] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "a";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "10";
ComposedShader44.field[5] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "b";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "1";
ComposedShader44.field[6] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "c";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "20";
ComposedShader44.field[7] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "d";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "20";
ComposedShader44.field[8] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "tdelta";
field55.type = "SFFloat";
field55.accessType = "inputOnly";
field55.value = "0";
ComposedShader44.field[9] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "pdelta";
field56.type = "SFFloat";
field56.accessType = "inputOnly";
field56.value = "0";
ComposedShader44.field[10] = field56;

let ShaderPart57 = browser.currentScene.createNode("ShaderPart");
ShaderPart57.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart57.type = "VERTEX";
ComposedShader44.parts[11] = ShaderPart57;

let ShaderPart58 = browser.currentScene.createNode("ShaderPart");
ShaderPart58.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart58.type = "FRAGMENT";
ComposedShader44.parts[12] = ShaderPart58;

Appearance21.shaders[1] = ComposedShader44;

Shape20.appearance = Appearance21;

let Sphere59 = browser.currentScene.createNode("Sphere");
Shape20.geometry = Sphere59;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Transform19;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "Animate";
let field61 = browser.currentScene.createNode("field");
field61.name = "translation";
field61.accessType = "inputOutput";
field61.type = "SFVec3f";
field61.value = "0 0 0";
Script60.field = new MFNode();

Script60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "velocity";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
Script60.field[1] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "set_fraction";
field63.accessType = "inputOnly";
field63.type = "SFFloat";
Script60.field[2] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "a";
field64.type = "SFFloat";
field64.accessType = "inputOutput";
field64.value = "0.5";
Script60.field[3] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "b";
field65.type = "SFFloat";
field65.accessType = "inputOutput";
field65.value = "0.5";
Script60.field[4] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "c";
field66.type = "SFFloat";
field66.accessType = "inputOutput";
field66.value = "3";
Script60.field[5] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "d";
field67.type = "SFFloat";
field67.accessType = "inputOutput";
field67.value = "3";
Script60.field[6] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "tdelta";
field68.type = "SFFloat";
field68.accessType = "inputOutput";
field68.value = "0.5";
Script60.field[7] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "pdelta";
field69.type = "SFFloat";
field69.accessType = "inputOutput";
field69.value = "0.5";
Script60.field[8] = field69;


Script60.setSourceCode(`ecmascript:\n"+
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
ProtoBody18.children[1] = Script60;

let TimeSensor70 = browser.currentScene.createNode("TimeSensor");
TimeSensor70.DEF = "TourTime";
TimeSensor70.cycleInterval = 5;
TimeSensor70.loop = True;
ProtoBody18.children[2] = TimeSensor70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "TourTime";
ROUTE71.fromField = "fraction_changed";
ROUTE71.toNode = "Animate";
ROUTE71.toField = "set_fraction";
ProtoBody18.children[3] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "Animate";
ROUTE72.fromField = "translation_changed";
ROUTE72.toNode = "animate_transform";
ROUTE72.toField = "set_translation";
ProtoBody18.children[4] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "Animate";
ROUTE73.fromField = "a";
ROUTE73.toNode = "x_ite";
ROUTE73.toField = "a";
ProtoBody18.children[5] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "Animate";
ROUTE74.fromField = "b";
ROUTE74.toNode = "x_ite";
ROUTE74.toField = "b";
ProtoBody18.children[6] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "Animate";
ROUTE75.fromField = "c";
ROUTE75.toNode = "x_ite";
ROUTE75.toField = "c";
ProtoBody18.children[7] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "Animate";
ROUTE76.fromField = "d";
ROUTE76.toNode = "x_ite";
ROUTE76.toField = "d";
ProtoBody18.children[8] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "Animate";
ROUTE77.fromField = "pdelta";
ROUTE77.toNode = "x_ite";
ROUTE77.toField = "pdelta";
ProtoBody18.children[9] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "Animate";
ROUTE78.fromField = "tdelta";
ROUTE78.toNode = "x_ite";
ROUTE78.toField = "tdelta";
ProtoBody18.children[10] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "Animate";
ROUTE79.fromField = "a";
ROUTE79.toNode = "x3dom";
ROUTE79.toField = "a";
ProtoBody18.children[11] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "Animate";
ROUTE80.fromField = "b";
ROUTE80.toNode = "x3dom";
ROUTE80.toField = "b";
ProtoBody18.children[12] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "Animate";
ROUTE81.fromField = "c";
ROUTE81.toNode = "x3dom";
ROUTE81.toField = "c";
ProtoBody18.children[13] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "Animate";
ROUTE82.fromField = "d";
ROUTE82.toNode = "x3dom";
ROUTE82.toField = "d";
ProtoBody18.children[14] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "pdelta";
ROUTE83.toNode = "x3dom";
ROUTE83.toField = "pdelta";
ProtoBody18.children[15] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "Animate";
ROUTE84.fromField = "tdelta";
ROUTE84.toNode = "x3dom";
ROUTE84.toField = "tdelta";
ProtoBody18.children[16] = ROUTE84;

ProtoDeclare17.protoBody = ProtoBody18;

browser.currentScene.children[2] = ProtoDeclare17;

let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "flower";
browser.currentScene.children[3] = ProtoInstance85;

let ProtoInstance86 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance86.name = "flower";
browser.currentScene.children[4] = ProtoInstance86;

let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "flower";
browser.currentScene.children[5] = ProtoInstance87;

