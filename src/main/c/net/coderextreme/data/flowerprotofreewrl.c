#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Core";
component10.level = 1;
head1.component[8] = component10;

meta meta11 = createNode("meta");
meta11.name = "title";
meta11.content = "flowerproto.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "description";
meta13.content = "A flower proto with configurable shaders";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d";
head1.meta[13] = meta15;

head = head1;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.description = "Tour Views";
Viewpoint18.position = new SFVec3f(new float[0,0,50]);
children[1] = Viewpoint18;

Background Background19 = createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[2] = Background19;

ProtoDeclare ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOnly" type="MFString" value="&quot;../shaders/freewrl_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOnly" type="MFString" value="&quot;../shaders/freewrl.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
<!--<field name='cube' type='SFNode' accessType="inputOutput">--><!--<ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>--><!--</field>--><ShaderPart type="VERTEX"><IS><connect nodeField="url" protoField="vertex"></connect>
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
ProtoInterface ProtoInterface21 = createNode("ProtoInterface");
field field22 = createNode("field");
field22.name = "vertex";
field22.accessType = "inputOnly";
field22.type = "MFString";
field22.value = "\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

field field23 = createNode("field");
field23.name = "fragment";
field23.accessType = "inputOnly";
field23.type = "MFString";
field23.value = "\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"";
ProtoInterface21.field[1] = field23;

ProtoDeclare20.protoInterface = ProtoInterface21;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Transform Transform25 = createNode("Transform");
Transform25.DEF = "transform";
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material28.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance27.material = Material28;

ComposedCubeMapTexture ComposedCubeMapTexture29 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture29.DEF = "texture";
ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture33;

ImageTexture ImageTexture34 = createNode("ImageTexture");
ImageTexture34.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture34;

ImageTexture ImageTexture35 = createNode("ImageTexture");
ImageTexture35.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture29.topTexture = ImageTexture35;

Appearance27.texture = ComposedCubeMapTexture29;

ComposedShader ComposedShader36 = createNode("ComposedShader");
ComposedShader36.DEF = "shader";
ComposedShader36.language = "GLSL";
field field37 = createNode("field");
field37.name = "fw_textureCoordGenType";
field37.accessType = "inputOutput";
field37.type = "SFInt32";
field37.value = "0";
ComposedShader36.field = new MFNode();

ComposedShader36.field[0] = field37;

field field38 = createNode("field");
field38.name = "chromaticDispertion";
field38.accessType = "initializeOnly";
field38.type = "SFVec3f";
field38.value = "0.98 1 1.033";
ComposedShader36.field[1] = field38;

field field39 = createNode("field");
field39.name = "bias";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "0.5";
ComposedShader36.field[2] = field39;

field field40 = createNode("field");
field40.name = "scale";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "0.5";
ComposedShader36.field[3] = field40;

field field41 = createNode("field");
field41.name = "power";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "2";
ComposedShader36.field[4] = field41;

field field42 = createNode("field");
field42.name = "a";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "5";
ComposedShader36.field[5] = field42;

field field43 = createNode("field");
field43.name = "b";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "5";
ComposedShader36.field[6] = field43;

field field44 = createNode("field");
field44.name = "c";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "20";
ComposedShader36.field[7] = field44;

field field45 = createNode("field");
field45.name = "d";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "20";
ComposedShader36.field[8] = field45;

field field46 = createNode("field");
field46.name = "tdelta";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "0";
ComposedShader36.field[9] = field46;

field field47 = createNode("field");
field47.name = "pdelta";
field47.type = "SFFloat";
field47.accessType = "inputOutput";
field47.value = "0";
ComposedShader36.field[10] = field47;

//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"/>
//</field>
ShaderPart ShaderPart48 = createNode("ShaderPart");
ShaderPart48.type = "VERTEX";
IS IS49 = createNode("IS");
connect connect50 = createNode("connect");
connect50.nodeField = "url";
connect50.protoField = "vertex";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

ShaderPart48.iS = IS49;

ComposedShader36.parts[11] = ShaderPart48;

ShaderPart ShaderPart51 = createNode("ShaderPart");
ShaderPart51.type = "FRAGMENT";
IS IS52 = createNode("IS");
connect connect53 = createNode("connect");
connect53.nodeField = "url";
connect53.protoField = "fragment";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

ShaderPart51.iS = IS52;

ComposedShader36.parts[12] = ShaderPart51;

Appearance27.shaders = new MFNode();

Appearance27.shaders[0] = ComposedShader36;

Shape26.appearance = Appearance27;

Sphere Sphere54 = createNode("Sphere");
Sphere54.radius = 5;
Shape26.geometry = Sphere54;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Script Script55 = createNode("Script");
Script55.DEF = "Animate";
Script55.directOutput = True;
field field56 = createNode("field");
field56.name = "translation";
field56.accessType = "inputOutput";
field56.type = "SFVec3f";
field56.value = "0 0 0";
Script55.field = new MFNode();

Script55.field[0] = field56;

field field57 = createNode("field");
field57.name = "velocity";
field57.accessType = "inputOutput";
field57.type = "SFVec3f";
field57.value = "0 0 0";
Script55.field[1] = field57;

field field58 = createNode("field");
field58.name = "set_fraction";
field58.accessType = "inputOutput";
field58.type = "SFFloat";
Script55.field[2] = field58;

field field59 = createNode("field");
field59.name = "a";
field59.type = "SFFloat";
field59.accessType = "inputOutput";
field59.value = "0.5";
Script55.field[3] = field59;

field field60 = createNode("field");
field60.name = "b";
field60.type = "SFFloat";
field60.accessType = "inputOutput";
field60.value = "0.5";
Script55.field[4] = field60;

field field61 = createNode("field");
field61.name = "c";
field61.type = "SFFloat";
field61.accessType = "inputOutput";
field61.value = "3";
Script55.field[5] = field61;

field field62 = createNode("field");
field62.name = "d";
field62.type = "SFFloat";
field62.accessType = "inputOutput";
field62.value = "3";
Script55.field[6] = field62;

field field63 = createNode("field");
field63.name = "tdelta";
field63.type = "SFFloat";
field63.accessType = "inputOutput";
field63.value = "0.5";
Script55.field[7] = field63;

field field64 = createNode("field");
field64.name = "pdelta";
field64.type = "SFFloat";
field64.accessType = "inputOutput";
field64.value = "0.5";
Script55.field[8] = field64;


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
Transform25.children[1] = Script55;

TimeSensor TimeSensor65 = createNode("TimeSensor");
TimeSensor65.DEF = "TourTime";
TimeSensor65.cycleInterval = 5;
TimeSensor65.loop = True;
Transform25.children[2] = TimeSensor65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "TourTime";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "Animate";
ROUTE66.toField = "set_fraction";
Transform25.children[3] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "translation_changed";
ROUTE67.toNode = "transform";
ROUTE67.toField = "set_translation";
Transform25.children[4] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "a";
ROUTE68.toNode = "shader";
ROUTE68.toField = "a";
Transform25.children[5] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "b";
ROUTE69.toNode = "shader";
ROUTE69.toField = "b";
Transform25.children[6] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "Animate";
ROUTE70.fromField = "c";
ROUTE70.toNode = "shader";
ROUTE70.toField = "c";
Transform25.children[7] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "Animate";
ROUTE71.fromField = "d";
ROUTE71.toNode = "shader";
ROUTE71.toField = "d";
Transform25.children[8] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "Animate";
ROUTE72.fromField = "tdelta";
ROUTE72.toNode = "shader";
ROUTE72.toField = "tdelta";
Transform25.children[9] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "Animate";
ROUTE73.fromField = "pdelta";
ROUTE73.toNode = "shader";
ROUTE73.toField = "pdelta";
Transform25.children[10] = ROUTE73;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Transform25;

ProtoDeclare20.protoBody = ProtoBody24;

children[3] = ProtoDeclare20;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.name = "FlowerProto";
fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "vertex";
fieldValue75.value = "\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "fragment";
fieldValue76.value = "\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"";
ProtoInstance74.fieldValue[1] = fieldValue76;

children[4] = ProtoInstance74;

}
