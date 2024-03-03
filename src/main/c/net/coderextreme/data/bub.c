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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

//<component name='Shape' level='4'></component>
meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "bub.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "3 prismatic spheres";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d";
head1.meta[12] = meta14;

head = head1;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo16;

Background Background17 = createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.position = new SFVec3f(new float[0,0,20]);
Viewpoint18.description = "Look at the bubbles flying";
children[2] = Viewpoint18;

ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape DEF="myShape"><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<!--<ComposedShader DEF='gl' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language="GLSL"> <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader>--><!--<ComposedShader DEF='instant' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader>--><ComposedShader DEF="x3dom" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
<field name="chromaticDispertion" type="SFVec3f" accessType="inputOutput" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<ShaderPart url="&quot;../shaders/x3dom.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/pc_bubbles.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
</field>
<field name="chromaticDispertion" type="SFVec3f" accessType="inputOutput" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<ShaderPart url="&quot;../shaders/x_ite.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/x_itebubbles.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
</Transform>
<Script DEF="Bounce"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFTime"></field>
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
			}]]></Script>
<TimeSensor DEF="TourTime" cycleInterval="0.15" loop="true"></TimeSensor>
<ROUTE fromNode="TourTime" fromField="cycleTime" toNode="Bounce" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "Bubble";
ProtoBody ProtoBody20 = createNode("ProtoBody");
Transform Transform21 = createNode("Transform");
Transform21.DEF = "transform";
Shape Shape22 = createNode("Shape");
Shape22.DEF = "myShape";
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

ComposedCubeMapTexture ComposedCubeMapTexture25 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
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
field34.type = "SFVec3f";
field34.accessType = "inputOutput";
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

ShaderPart ShaderPart38 = createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart38.type = "VERTEX";
ComposedShader32.parts[5] = ShaderPart38;

ShaderPart ShaderPart39 = createNode("ShaderPart");
ShaderPart39.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart39.type = "FRAGMENT";
ComposedShader32.parts[6] = ShaderPart39;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

ComposedShader ComposedShader40 = createNode("ComposedShader");
ComposedShader40.DEF = "x_ite";
ComposedShader40.language = "GLSL";
field field41 = createNode("field");
field41.name = "cube";
field41.type = "SFNode";
field41.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture42 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture42.USE = "texture";
field41.children = new MFNode();

field41.children[0] = ComposedCubeMapTexture42;

ComposedShader40.field = new MFNode();

ComposedShader40.field[0] = field41;

field field43 = createNode("field");
field43.name = "chromaticDispertion";
field43.type = "SFVec3f";
field43.accessType = "inputOutput";
field43.value = "0.98 1 1.033";
ComposedShader40.field[1] = field43;

field field44 = createNode("field");
field44.name = "bias";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "0.5";
ComposedShader40.field[2] = field44;

field field45 = createNode("field");
field45.name = "scale";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "0.5";
ComposedShader40.field[3] = field45;

field field46 = createNode("field");
field46.name = "power";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "2";
ComposedShader40.field[4] = field46;

ShaderPart ShaderPart47 = createNode("ShaderPart");
ShaderPart47.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart47.type = "VERTEX";
ComposedShader40.parts[5] = ShaderPart47;

ShaderPart ShaderPart48 = createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart48.type = "FRAGMENT";
ComposedShader40.parts[6] = ShaderPart48;

Appearance23.shaders[1] = ComposedShader40;

Shape22.appearance = Appearance23;

Sphere Sphere49 = createNode("Sphere");
Shape22.geometry = Sphere49;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Transform21;

Script Script50 = createNode("Script");
Script50.DEF = "Bounce";
field field51 = createNode("field");
field51.name = "translation";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
Script50.field = new MFNode();

Script50.field[0] = field51;

field field52 = createNode("field");
field52.name = "velocity";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.value = "0 0 0";
Script50.field[1] = field52;

field field53 = createNode("field");
field53.name = "set_fraction";
field53.accessType = "inputOnly";
field53.type = "SFTime";
Script50.field[2] = field53;


Script50.setSourceCode(`ecmascript:\n"+
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
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}`)
ProtoBody20.children[1] = Script50;

TimeSensor TimeSensor54 = createNode("TimeSensor");
TimeSensor54.DEF = "TourTime";
TimeSensor54.cycleInterval = 0.15;
TimeSensor54.loop = True;
ProtoBody20.children[2] = TimeSensor54;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "TourTime";
ROUTE55.fromField = "cycleTime";
ROUTE55.toNode = "Bounce";
ROUTE55.toField = "set_fraction";
ProtoBody20.children[3] = ROUTE55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "Bounce";
ROUTE56.fromField = "translation_changed";
ROUTE56.toNode = "transform";
ROUTE56.toField = "set_translation";
ProtoBody20.children[4] = ROUTE56;

ProtoDeclare19.protoBody = ProtoBody20;

children[3] = ProtoDeclare19;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "Bubble";
children[4] = ProtoInstance57;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "Bubble";
children[5] = ProtoInstance58;

ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "Bubble";
children[6] = ProtoInstance59;

}
