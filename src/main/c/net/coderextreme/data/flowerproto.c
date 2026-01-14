#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
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

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOnly" type="MFString" value="&quot;../shaders/gl_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOnly" type="MFString" value="&quot;../shaders/pc_flowers.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="shader" language="GLSL"><!--<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>--><field name="cube" type="SFNode" accessType="inputOnly"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
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
<ShaderPart type="VERTEX"><IS><connect nodeField="url" protoField="vertex"></connect>
</IS>
</ShaderPart>
<ShaderPart type="FRAGMENT"><IS><connect nodeField="url" protoField="fragment"></connect>
</IS>
</ShaderPart>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
<Script DEF="Animate" directOutput="true"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="outputOnly" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="a" type="SFFloat" accessType="outputOnly" value="0.5"></field>
<field name="b" type="SFFloat" accessType="outputOnly" value="0.5"></field>
<field name="c" type="SFFloat" accessType="outputOnly" value="3"></field>
<field name="d" type="SFFloat" accessType="outputOnly" value="3"></field>
<field name="tdelta" type="SFFloat" accessType="outputOnly" value="0.5"></field>
<field name="pdelta" type="SFFloat" accessType="outputOnly" value="0.5"></field>
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
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "vertex";
field19.accessType = "inputOnly";
field19.type = "MFString";
field19.value = "\"../shaders/gl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "fragment";
field20.accessType = "inputOnly";
field20.type = "MFString";
field20.value = "\"../shaders/pc_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"";
ProtoInterface18.field[1] = field20;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody21 = createNode("ProtoBody");
Transform Transform22 = createNode("Transform");
Transform22.DEF = "transform";
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

ComposedCubeMapTexture ComposedCubeMapTexture26 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

ComposedShader ComposedShader33 = createNode("ComposedShader");
ComposedShader33.DEF = "shader";
ComposedShader33.language = "GLSL";
//<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>
field field34 = createNode("field");
field34.name = "cube";
field34.type = "SFNode";
field34.accessType = "inputOnly";
ComposedCubeMapTexture ComposedCubeMapTexture35 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader33.field = new MFNode();

ComposedShader33.field[0] = field34;

field field36 = createNode("field");
field36.name = "chromaticDispertion";
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.value = "0.98 1 1.033";
ComposedShader33.field[1] = field36;

field field37 = createNode("field");
field37.name = "bias";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "0.5";
ComposedShader33.field[2] = field37;

field field38 = createNode("field");
field38.name = "scale";
field38.type = "SFFloat";
field38.accessType = "inputOnly";
field38.value = "0.5";
ComposedShader33.field[3] = field38;

field field39 = createNode("field");
field39.name = "power";
field39.type = "SFFloat";
field39.accessType = "inputOnly";
field39.value = "2";
ComposedShader33.field[4] = field39;

field field40 = createNode("field");
field40.name = "a";
field40.type = "SFFloat";
field40.accessType = "inputOnly";
field40.value = "10";
ComposedShader33.field[5] = field40;

field field41 = createNode("field");
field41.name = "b";
field41.type = "SFFloat";
field41.accessType = "inputOnly";
field41.value = "1";
ComposedShader33.field[6] = field41;

field field42 = createNode("field");
field42.name = "c";
field42.type = "SFFloat";
field42.accessType = "inputOnly";
field42.value = "20";
ComposedShader33.field[7] = field42;

field field43 = createNode("field");
field43.name = "d";
field43.type = "SFFloat";
field43.accessType = "inputOnly";
field43.value = "20";
ComposedShader33.field[8] = field43;

field field44 = createNode("field");
field44.name = "tdelta";
field44.type = "SFFloat";
field44.accessType = "inputOnly";
field44.value = "0";
ComposedShader33.field[9] = field44;

field field45 = createNode("field");
field45.name = "pdelta";
field45.type = "SFFloat";
field45.accessType = "inputOnly";
field45.value = "0";
ComposedShader33.field[10] = field45;

ShaderPart ShaderPart46 = createNode("ShaderPart");
ShaderPart46.type = "VERTEX";
IS IS47 = createNode("IS");
connect connect48 = createNode("connect");
connect48.nodeField = "url";
connect48.protoField = "vertex";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

ShaderPart46.iS = IS47;

ComposedShader33.parts[11] = ShaderPart46;

ShaderPart ShaderPart49 = createNode("ShaderPart");
ShaderPart49.type = "FRAGMENT";
IS IS50 = createNode("IS");
connect connect51 = createNode("connect");
connect51.nodeField = "url";
connect51.protoField = "fragment";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

ShaderPart49.iS = IS50;

ComposedShader33.parts[12] = ShaderPart49;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

Shape23.appearance = Appearance24;

Sphere Sphere52 = createNode("Sphere");
Shape23.geometry = Sphere52;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Script Script53 = createNode("Script");
Script53.DEF = "Animate";
Script53.directOutput = True;
field field54 = createNode("field");
field54.name = "translation";
field54.accessType = "inputOutput";
field54.type = "SFVec3f";
field54.value = "0 0 0";
Script53.field = new MFNode();

Script53.field[0] = field54;

field field55 = createNode("field");
field55.name = "velocity";
field55.accessType = "outputOnly";
field55.type = "SFVec3f";
field55.value = "0 0 0";
Script53.field[1] = field55;

field field56 = createNode("field");
field56.name = "set_fraction";
field56.accessType = "inputOnly";
field56.type = "SFFloat";
Script53.field[2] = field56;

field field57 = createNode("field");
field57.name = "a";
field57.type = "SFFloat";
field57.accessType = "outputOnly";
field57.value = "0.5";
Script53.field[3] = field57;

field field58 = createNode("field");
field58.name = "b";
field58.type = "SFFloat";
field58.accessType = "outputOnly";
field58.value = "0.5";
Script53.field[4] = field58;

field field59 = createNode("field");
field59.name = "c";
field59.type = "SFFloat";
field59.accessType = "outputOnly";
field59.value = "3";
Script53.field[5] = field59;

field field60 = createNode("field");
field60.name = "d";
field60.type = "SFFloat";
field60.accessType = "outputOnly";
field60.value = "3";
Script53.field[6] = field60;

field field61 = createNode("field");
field61.name = "tdelta";
field61.type = "SFFloat";
field61.accessType = "outputOnly";
field61.value = "0.5";
Script53.field[7] = field61;

field field62 = createNode("field");
field62.name = "pdelta";
field62.type = "SFFloat";
field62.accessType = "outputOnly";
field62.value = "0.5";
Script53.field[8] = field62;


Script53.setSourceCode(`ecmascript:\n"+
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
Transform22.children[1] = Script53;

TimeSensor TimeSensor63 = createNode("TimeSensor");
TimeSensor63.DEF = "TourTime";
TimeSensor63.cycleInterval = 5;
TimeSensor63.loop = True;
Transform22.children[2] = TimeSensor63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "TourTime";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "Animate";
ROUTE64.toField = "set_fraction";
Transform22.children[3] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "translation_changed";
ROUTE65.toNode = "transform";
ROUTE65.toField = "set_translation";
Transform22.children[4] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "a";
ROUTE66.toNode = "shader";
ROUTE66.toField = "a";
Transform22.children[5] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "b";
ROUTE67.toNode = "shader";
ROUTE67.toField = "b";
Transform22.children[6] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "Animate";
ROUTE68.fromField = "c";
ROUTE68.toNode = "shader";
ROUTE68.toField = "c";
Transform22.children[7] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "Animate";
ROUTE69.fromField = "d";
ROUTE69.toNode = "shader";
ROUTE69.toField = "d";
Transform22.children[8] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "Animate";
ROUTE70.fromField = "tdelta";
ROUTE70.toNode = "shader";
ROUTE70.toField = "tdelta";
Transform22.children[9] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "Animate";
ROUTE71.fromField = "pdelta";
ROUTE71.toNode = "shader";
ROUTE71.toField = "pdelta";
Transform22.children[10] = ROUTE71;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

ProtoDeclare17.protoBody = ProtoBody21;

children = new MFNode();

children[0] = ProtoDeclare17;

}
