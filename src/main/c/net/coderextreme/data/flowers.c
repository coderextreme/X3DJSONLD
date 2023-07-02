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
meta11.content = "flowers.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "description";
meta13.content = "5 or more prismatic flowers";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://coderextreme.net/X3DJSONLD/flowers.x3d";
head1.meta[13] = meta15;

head = head1;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo17;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background18 = createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background18;

ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare19.name = "flower";
ProtoBody ProtoBody20 = createNode("ProtoBody");
Transform Transform21 = createNode("Transform");
Transform21.DEF = "animate_transform";
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

ComposedCubeMapTexture ComposedCubeMapTexture25 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

ComposedShader ComposedShader32 = createNode("ComposedShader");
ComposedShader32.DEF = "x3dom";
ComposedShader32.language = "GLSL";
field field33 = createNode("field");
field33.name = "cube";
field33.type = "SFInt32";
field33.accessType = "inputOutput";
field33.value = "0";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

field field34 = createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader32.field[1] = field34;

field field35 = createNode("field");
field35.name = "bias";
field35.type = "SFFloat";
field35.accessType = "inputOutput";
field35.value = "0.5";
ComposedShader32.field[2] = field35;

field field36 = createNode("field");
field36.name = "scale";
field36.type = "SFFloat";
field36.accessType = "inputOutput";
field36.value = "0.5";
ComposedShader32.field[3] = field36;

field field37 = createNode("field");
field37.name = "power";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "2";
ComposedShader32.field[4] = field37;

field field38 = createNode("field");
field38.name = "a";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "10";
ComposedShader32.field[5] = field38;

field field39 = createNode("field");
field39.name = "b";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "1";
ComposedShader32.field[6] = field39;

field field40 = createNode("field");
field40.name = "c";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "20";
ComposedShader32.field[7] = field40;

field field41 = createNode("field");
field41.name = "d";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "20";
ComposedShader32.field[8] = field41;

field field42 = createNode("field");
field42.name = "tdelta";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "0";
ComposedShader32.field[9] = field42;

field field43 = createNode("field");
field43.name = "pdelta";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "0";
ComposedShader32.field[10] = field43;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart ShaderPart44 = createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart44.type = "VERTEX";
ComposedShader32.parts[11] = ShaderPart44;

ShaderPart ShaderPart45 = createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart45.type = "FRAGMENT";
ComposedShader32.parts[12] = ShaderPart45;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

ComposedShader ComposedShader46 = createNode("ComposedShader");
ComposedShader46.DEF = "x_ite";
ComposedShader46.language = "GLSL";
field field47 = createNode("field");
field47.name = "cube";
field47.type = "SFNode";
field47.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture48 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture48.USE = "texture";
field47.children = new MFNode();

field47.children[0] = ComposedCubeMapTexture48;

ComposedShader46.field = new MFNode();

ComposedShader46.field[0] = field47;

field field49 = createNode("field");
field49.name = "chromaticDispertion";
field49.accessType = "initializeOnly";
field49.type = "SFVec3f";
field49.value = "0.98 1 1.033";
ComposedShader46.field[1] = field49;

field field50 = createNode("field");
field50.name = "bias";
field50.type = "SFFloat";
field50.accessType = "inputOnly";
field50.value = "0.5";
ComposedShader46.field[2] = field50;

field field51 = createNode("field");
field51.name = "scale";
field51.type = "SFFloat";
field51.accessType = "inputOnly";
field51.value = "0.5";
ComposedShader46.field[3] = field51;

field field52 = createNode("field");
field52.name = "power";
field52.type = "SFFloat";
field52.accessType = "inputOnly";
field52.value = "2";
ComposedShader46.field[4] = field52;

field field53 = createNode("field");
field53.name = "a";
field53.type = "SFFloat";
field53.accessType = "inputOnly";
field53.value = "10";
ComposedShader46.field[5] = field53;

field field54 = createNode("field");
field54.name = "b";
field54.type = "SFFloat";
field54.accessType = "inputOnly";
field54.value = "1";
ComposedShader46.field[6] = field54;

field field55 = createNode("field");
field55.name = "c";
field55.type = "SFFloat";
field55.accessType = "inputOnly";
field55.value = "20";
ComposedShader46.field[7] = field55;

field field56 = createNode("field");
field56.name = "d";
field56.type = "SFFloat";
field56.accessType = "inputOnly";
field56.value = "20";
ComposedShader46.field[8] = field56;

field field57 = createNode("field");
field57.name = "tdelta";
field57.type = "SFFloat";
field57.accessType = "inputOnly";
field57.value = "0";
ComposedShader46.field[9] = field57;

field field58 = createNode("field");
field58.name = "pdelta";
field58.type = "SFFloat";
field58.accessType = "inputOnly";
field58.value = "0";
ComposedShader46.field[10] = field58;

ShaderPart ShaderPart59 = createNode("ShaderPart");
ShaderPart59.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart59.type = "VERTEX";
ComposedShader46.parts[11] = ShaderPart59;

ShaderPart ShaderPart60 = createNode("ShaderPart");
ShaderPart60.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart60.type = "FRAGMENT";
ComposedShader46.parts[12] = ShaderPart60;

Appearance23.shaders[1] = ComposedShader46;

Shape22.appearance = Appearance23;

Sphere Sphere61 = createNode("Sphere");
Shape22.geometry = Sphere61;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Transform21;

Script Script62 = createNode("Script");
Script62.DEF = "Animate";
field field63 = createNode("field");
field63.name = "translation";
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.value = "0 0 0";
Script62.field = new MFNode();

Script62.field[0] = field63;

field field64 = createNode("field");
field64.name = "velocity";
field64.accessType = "inputOutput";
field64.type = "SFVec3f";
field64.value = "0 0 0";
Script62.field[1] = field64;

field field65 = createNode("field");
field65.name = "set_fraction";
field65.accessType = "inputOnly";
field65.type = "SFFloat";
Script62.field[2] = field65;

field field66 = createNode("field");
field66.name = "a";
field66.type = "SFFloat";
field66.accessType = "inputOutput";
field66.value = "0.5";
Script62.field[3] = field66;

field field67 = createNode("field");
field67.name = "b";
field67.type = "SFFloat";
field67.accessType = "inputOutput";
field67.value = "0.5";
Script62.field[4] = field67;

field field68 = createNode("field");
field68.name = "c";
field68.type = "SFFloat";
field68.accessType = "inputOutput";
field68.value = "3";
Script62.field[5] = field68;

field field69 = createNode("field");
field69.name = "d";
field69.type = "SFFloat";
field69.accessType = "inputOutput";
field69.value = "3";
Script62.field[6] = field69;

field field70 = createNode("field");
field70.name = "tdelta";
field70.type = "SFFloat";
field70.accessType = "inputOutput";
field70.value = "0.5";
Script62.field[7] = field70;

field field71 = createNode("field");
field71.name = "pdelta";
field71.type = "SFFloat";
field71.accessType = "inputOutput";
field71.value = "0.5";
Script62.field[8] = field71;


Script62.setSourceCode(`ecmascript:\n"+
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
ProtoBody20.children[1] = Script62;

TimeSensor TimeSensor72 = createNode("TimeSensor");
TimeSensor72.DEF = "TourTime";
TimeSensor72.cycleInterval = 5;
TimeSensor72.loop = True;
ProtoBody20.children[2] = TimeSensor72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "TourTime";
ROUTE73.fromField = "fraction_changed";
ROUTE73.toNode = "Animate";
ROUTE73.toField = "set_fraction";
ProtoBody20.children[3] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "Animate";
ROUTE74.fromField = "translation_changed";
ROUTE74.toNode = "animate_transform";
ROUTE74.toField = "set_translation";
ProtoBody20.children[4] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "Animate";
ROUTE75.fromField = "a";
ROUTE75.toNode = "x_ite";
ROUTE75.toField = "a";
ProtoBody20.children[5] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "Animate";
ROUTE76.fromField = "b";
ROUTE76.toNode = "x_ite";
ROUTE76.toField = "b";
ProtoBody20.children[6] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "Animate";
ROUTE77.fromField = "c";
ROUTE77.toNode = "x_ite";
ROUTE77.toField = "c";
ProtoBody20.children[7] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "Animate";
ROUTE78.fromField = "d";
ROUTE78.toNode = "x_ite";
ROUTE78.toField = "d";
ProtoBody20.children[8] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "Animate";
ROUTE79.fromField = "pdelta";
ROUTE79.toNode = "x_ite";
ROUTE79.toField = "pdelta";
ProtoBody20.children[9] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "Animate";
ROUTE80.fromField = "tdelta";
ROUTE80.toNode = "x_ite";
ROUTE80.toField = "tdelta";
ProtoBody20.children[10] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromNode = "Animate";
ROUTE81.fromField = "a";
ROUTE81.toNode = "x3dom";
ROUTE81.toField = "a";
ProtoBody20.children[11] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromNode = "Animate";
ROUTE82.fromField = "b";
ROUTE82.toNode = "x3dom";
ROUTE82.toField = "b";
ProtoBody20.children[12] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromNode = "Animate";
ROUTE83.fromField = "c";
ROUTE83.toNode = "x3dom";
ROUTE83.toField = "c";
ProtoBody20.children[13] = ROUTE83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromNode = "Animate";
ROUTE84.fromField = "d";
ROUTE84.toNode = "x3dom";
ROUTE84.toField = "d";
ProtoBody20.children[14] = ROUTE84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "Animate";
ROUTE85.fromField = "pdelta";
ROUTE85.toNode = "x3dom";
ROUTE85.toField = "pdelta";
ProtoBody20.children[15] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "Animate";
ROUTE86.fromField = "tdelta";
ROUTE86.toNode = "x3dom";
ROUTE86.toField = "tdelta";
ProtoBody20.children[16] = ROUTE86;

ProtoDeclare19.protoBody = ProtoBody20;

children[2] = ProtoDeclare19;

ProtoInstance ProtoInstance87 = createNode("ProtoInstance");
ProtoInstance87.name = "flower";
children[3] = ProtoInstance87;

ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "flower";
children[4] = ProtoInstance88;

ProtoInstance ProtoInstance89 = createNode("ProtoInstance");
ProtoInstance89.name = "flower";
children[5] = ProtoInstance89;

}
