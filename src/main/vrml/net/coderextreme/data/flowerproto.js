let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOutput" type="MFString" value="&quot;../shaders/gl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOutput" type="MFString" value="&quot;../shaders/pc_flowers.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
<Sphere containerField="geometry"></Sphere>
</Shape>
<TimeSensor DEF="TourTime" cycleInterval="5" loop="true"></TimeSensor>
<ROUTE fromNode="TourTime" fromField="fraction_changed" toNode="Animate" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Animate" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="shader" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="shader" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="shader" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="shader" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="shader" toField="tdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="shader" toField="pdelta"></ROUTE>
<X3DScript DEF="Animate"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="a" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="b" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="c" type="SFFloat" accessType="inputOutput" value="3"></field>
<field name="d" type="SFFloat" accessType="inputOutput" value="3"></field>
<field name="tdelta" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="pdelta" type="SFFloat" accessType="inputOutput" value="0.5"></field>
</X3DScript>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "FlowerProto";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "vertex";
field4.accessType = "inputOutput";
field4.type = "MFString";
field4.value = "\"../shaders/gl_flowers_chromatic.vs\"";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "fragment";
field5.accessType = "inputOutput";
field5.type = "MFString";
field5.value = "\"../shaders/pc_flowers.fs\"";
ProtoInterface3.field[1] = field5;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody6 = browser.currentScene.createNode("ProtoBody");
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material10.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance9.material = Material10;

let ComposedCubeMapTexture11 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture11.DEF = "texture";
let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture11.top = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture11.top = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture11.top = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture11.top = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture11.top = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture11.top = ImageTexture17;

Appearance9.texture = ComposedCubeMapTexture11;

let ComposedShader18 = browser.currentScene.createNode("ComposedShader");
ComposedShader18.DEF = "shader";
ComposedShader18.language = "GLSL";
let field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.type = "SFInt32";
field19.accessType = "inputOutput";
field19.value = "0";
ComposedShader18.field = new MFNode();

ComposedShader18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "chromaticDispertion";
field20.accessType = "initializeOnly";
field20.type = "SFVec3f";
field20.value = "0.98 1 1.033";
ComposedShader18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "bias";
field21.type = "SFFloat";
field21.accessType = "inputOutput";
field21.value = "0.5";
ComposedShader18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "scale";
field22.type = "SFFloat";
field22.accessType = "inputOutput";
field22.value = "0.5";
ComposedShader18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "power";
field23.type = "SFFloat";
field23.accessType = "inputOutput";
field23.value = "2";
ComposedShader18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "a";
field24.type = "SFFloat";
field24.accessType = "inputOutput";
field24.value = "10";
ComposedShader18.field[5] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "b";
field25.type = "SFFloat";
field25.accessType = "inputOutput";
field25.value = "1";
ComposedShader18.field[6] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "c";
field26.type = "SFFloat";
field26.accessType = "inputOutput";
field26.value = "20";
ComposedShader18.field[7] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "d";
field27.type = "SFFloat";
field27.accessType = "inputOutput";
field27.value = "20";
ComposedShader18.field[8] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "tdelta";
field28.type = "SFFloat";
field28.accessType = "inputOutput";
field28.value = "0";
ComposedShader18.field[9] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "pdelta";
field29.type = "SFFloat";
field29.accessType = "inputOutput";
field29.value = "0";
ComposedShader18.field[10] = field29;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ShaderPart30.type = "VERTEX";
let IS31 = browser.currentScene.createNode("IS");
let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "url";
connect32.protoField = "vertex";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ShaderPart30.iS = IS31;

ComposedShader18.parts[11] = ShaderPart30;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.type = "FRAGMENT";
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "url";
connect35.protoField = "fragment";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

ShaderPart33.iS = IS34;

ComposedShader18.parts[12] = ShaderPart33;

Appearance9.shaders = new MFNode();

Appearance9.shaders[0] = ComposedShader18;

Shape8.appearance = Appearance9;

let Sphere36 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere36;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "TourTime";
TimeSensor37.cycleInterval = 5;
TimeSensor37.loop = True;
Transform7.children[1] = TimeSensor37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "TourTime";
ROUTE38.fromField = "fraction_changed";
ROUTE38.toNode = "Animate";
ROUTE38.toField = "set_fraction";
Transform7.children[2] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "Animate";
ROUTE39.fromField = "translation_changed";
ROUTE39.toNode = "transform";
ROUTE39.toField = "set_translation";
Transform7.children[3] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "Animate";
ROUTE40.fromField = "a";
ROUTE40.toNode = "shader";
ROUTE40.toField = "a";
Transform7.children[4] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "Animate";
ROUTE41.fromField = "b";
ROUTE41.toNode = "shader";
ROUTE41.toField = "b";
Transform7.children[5] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "Animate";
ROUTE42.fromField = "c";
ROUTE42.toNode = "shader";
ROUTE42.toField = "c";
Transform7.children[6] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "Animate";
ROUTE43.fromField = "d";
ROUTE43.toNode = "shader";
ROUTE43.toField = "d";
Transform7.children[7] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "Animate";
ROUTE44.fromField = "tdelta";
ROUTE44.toNode = "shader";
ROUTE44.toField = "tdelta";
Transform7.children[8] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "Animate";
ROUTE45.fromField = "pdelta";
ROUTE45.toNode = "shader";
ROUTE45.toField = "pdelta";
Transform7.children[9] = ROUTE45;

let X3DScript46 = browser.currentScene.createNode("X3DScript");
X3DScript46.DEF = "Animate";
let field47 = browser.currentScene.createNode("field");
field47.name = "translation";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "0 0 0";
X3DScript46.field = new MFNode();

X3DScript46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "velocity";
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.value = "0 0 0";
X3DScript46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "set_fraction";
field49.accessType = "inputOnly";
field49.type = "SFFloat";
X3DScript46.field[2] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "a";
field50.type = "SFFloat";
field50.accessType = "inputOutput";
field50.value = "0.5";
X3DScript46.field[3] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "b";
field51.type = "SFFloat";
field51.accessType = "inputOutput";
field51.value = "0.5";
X3DScript46.field[4] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "c";
field52.type = "SFFloat";
field52.accessType = "inputOutput";
field52.value = "3";
X3DScript46.field[5] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "d";
field53.type = "SFFloat";
field53.accessType = "inputOutput";
field53.value = "3";
X3DScript46.field[6] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "tdelta";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "0.5";
X3DScript46.field[7] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "pdelta";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "0.5";
X3DScript46.field[8] = field55;

Transform7.x3DScript[10] = X3DScript46;

ProtoBody6.children = new MFNode();

ProtoBody6.children[0] = Transform7;

ProtoDeclare2.protoBody = ProtoBody6;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

