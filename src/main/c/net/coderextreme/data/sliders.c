#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
//<component name='Shape' level='4'></component>
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
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Grouping";
component6.level = 3;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Core";
component7.level = 1;
head1.component[5] = component7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "sliders.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "8 August 2025";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "description";
meta10.content = "*Bumpy flower with prototype sliders*";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "Doug Sanden, Christoph Valentin, John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "license.html";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "Vim, VI Improved";
head1.meta[12] = meta14;

head = head1;

LayerSet LayerSet16 = createNode("LayerSet");
LayerSet16.activeLayer = 1;
LayerSet16.order = new MFInt32(new int[1,2,3]);
Layer Layer17 = createNode("Layer");
Layer17.pickable = True;
Layer17.objectType = new MFString(new java.lang.String["ALL"]);
NavigationInfo NavigationInfo18 = createNode("NavigationInfo");
NavigationInfo18.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo18.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
Layer17.children = new MFNode();

Layer17.children[0] = NavigationInfo18;

DirectionalLight DirectionalLight19 = createNode("DirectionalLight");
DirectionalLight19.ambientIntensity = 0.2;
DirectionalLight19.direction = new SFVec3f(new float[0,-1,0]);
Layer17.children[1] = DirectionalLight19;

DirectionalLight DirectionalLight20 = createNode("DirectionalLight");
DirectionalLight20.ambientIntensity = 0.2;
DirectionalLight20.direction = new SFVec3f(new float[-1,-0.1,-1]);
Layer17.children[2] = DirectionalLight20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.description = "My Overview";
Viewpoint21.fieldOfView = 1.570796;
Viewpoint21.position = new SFVec3f(new float[0,1.75,60]);
Layer17.children[3] = Viewpoint21;

Group Group22 = createNode("Group");
//Arrow X
Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[25,0,0]);
Transform23.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape24 = createNode("Shape");
Cylinder Cylinder25 = createNode("Cylinder");
Cylinder25.DEF = "Shaft";
Cylinder25.radius = 0.35;
Cylinder25.height = 50;
Shape24.geometry = Cylinder25;

Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.DEF = "RED";
Material27.diffuseColor = new SFColor(new float[1,0,0]);
Material27.emissiveColor = new SFColor(new float[1,0,0]);
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Group22.children = new MFNode();

Group22.children[0] = Transform23;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[50,0,0]);
Transform28.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape29 = createNode("Shape");
Cone Cone30 = createNode("Cone");
Cone30.DEF = "Tip";
Cone30.bottomRadius = 0.8;
Cone30.height = 3;
Shape29.geometry = Cone30;

Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.USE = "RED";
Appearance31.material = Material32;

Shape29.appearance = Appearance31;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Group22.children[1] = Transform28;

//Arrow Y
Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,25,0]);
Shape Shape34 = createNode("Shape");
Cylinder Cylinder35 = createNode("Cylinder");
Cylinder35.USE = "Shaft";
Shape34.geometry = Cylinder35;

Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Material37.DEF = "GREEN";
Material37.diffuseColor = new SFColor(new float[0,1,0]);
Material37.emissiveColor = new SFColor(new float[0,1,0]);
Appearance36.material = Material37;

Shape34.appearance = Appearance36;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Group22.children[2] = Transform33;

Transform Transform38 = createNode("Transform");
Transform38.translation = new SFVec3f(new float[0,50,0]);
Shape Shape39 = createNode("Shape");
Cone Cone40 = createNode("Cone");
Cone40.USE = "Tip";
Shape39.geometry = Cone40;

Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.USE = "GREEN";
Appearance41.material = Material42;

Shape39.appearance = Appearance41;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Group22.children[3] = Transform38;

//Arrow Z
Transform Transform43 = createNode("Transform");
Transform43.translation = new SFVec3f(new float[0,0,25]);
Transform43.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape44 = createNode("Shape");
Cylinder Cylinder45 = createNode("Cylinder");
Cylinder45.USE = "Shaft";
Shape44.geometry = Cylinder45;

Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.DEF = "BLUE";
Material47.diffuseColor = new SFColor(new float[0,0,1]);
Material47.emissiveColor = new SFColor(new float[0,0,1]);
Appearance46.material = Material47;

Shape44.appearance = Appearance46;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Group22.children[4] = Transform43;

Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[0,0,50]);
Transform48.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape49 = createNode("Shape");
Cone Cone50 = createNode("Cone");
Cone50.USE = "Tip";
Shape49.geometry = Cone50;

Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.USE = "BLUE";
Appearance51.material = Material52;

Shape49.appearance = Appearance51;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Group22.children[5] = Transform48;

Layer17.children[4] = Group22;

//the model that is being reviewed by the users of this scene
Transform Transform53 = createNode("Transform");
Transform53.DEF = "FlowerTransform";
Transform Transform54 = createNode("Transform");
Shape Shape55 = createNode("Shape");
IndexedFaceSet IndexedFaceSet56 = createNode("IndexedFaceSet");
IndexedFaceSet56.convex = False;
IndexedFaceSet56.DEF = "Orbit";
Coordinate Coordinate57 = createNode("Coordinate");
Coordinate57.DEF = "OrbitCoordinates";
IndexedFaceSet56.coord = Coordinate57;

Shape55.geometry = IndexedFaceSet56;

Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material59.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance58.material = Material59;

Shape55.appearance = Appearance58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform53.children = new MFNode();

Transform53.children[0] = Transform54;

Layer17.children[5] = Transform53;

Script Script60 = createNode("Script");
Script60.DEF = "OrbitScript";
field field61 = createNode("field");
field61.name = "coordinates";
field61.type = "MFVec3f";
field61.accessType = "inputOutput";
Script60.field = new MFNode();

Script60.field[0] = field61;

field field62 = createNode("field");
field62.name = "coordIndexes";
field62.type = "MFInt32";
field62.accessType = "inputOutput";
Script60.field[1] = field62;

field field63 = createNode("field");
field63.name = "a";
field63.type = "SFFloat";
field63.accessType = "inputOutput";
field63.value = "5";
Script60.field[2] = field63;

field field64 = createNode("field");
field64.name = "b";
field64.type = "SFFloat";
field64.accessType = "inputOutput";
field64.value = "5";
Script60.field[3] = field64;

field field65 = createNode("field");
field65.name = "c";
field65.type = "SFFloat";
field65.accessType = "inputOutput";
field65.value = "5";
Script60.field[4] = field65;

field field66 = createNode("field");
field66.name = "d";
field66.type = "SFFloat";
field66.accessType = "inputOutput";
field66.value = "5";
Script60.field[5] = field66;

field field67 = createNode("field");
field67.name = "pdelta";
field67.type = "SFFloat";
field67.accessType = "inputOutput";
field67.value = "0";
Script60.field[6] = field67;

field field68 = createNode("field");
field68.name = "tdelta";
field68.type = "SFFloat";
field68.accessType = "inputOutput";
field68.value = "0";
Script60.field[7] = field68;

field field69 = createNode("field");
field69.name = "resolution";
field69.type = "SFInt32";
field69.accessType = "inputOutput";
field69.value = "50";
Script60.field[8] = field69;


Script60.setSourceCode(`ecmascript:\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"			function set_a(value) {\n"+
"				a = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_b(value) {\n"+
"				b = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_c(value) {\n"+
"				c = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_d(value) {\n"+
"				d = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_pdelta(value) {\n"+
"				pdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_tdelta(value) {\n"+
"				tdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function resolution(value) {\n"+
"				resolution = value;\n"+
"				initialize();\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}`)
Layer17.children[6] = Script60;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromField = "coordIndexes";
ROUTE70.fromNode = "OrbitScript";
ROUTE70.toField = "set_coordIndex";
ROUTE70.toNode = "Orbit";
Layer17.children[7] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromField = "coordinates";
ROUTE71.fromNode = "OrbitScript";
ROUTE71.toField = "set_point";
ROUTE71.toNode = "OrbitCoordinates";
Layer17.children[8] = ROUTE71;

LayerSet16.layers = new MFNode();

LayerSet16.layers[0] = Layer17;

LayoutLayer LayoutLayer72 = createNode("LayoutLayer");
LayoutLayer72.pickable = True;
LayoutLayer72.objectType = new MFString(new java.lang.String["ALL"]);
Layout Layout73 = createNode("Layout");
Layout73.align = new MFString(new java.lang.String["LEFT","BOTTOM"]);
Layout73.offset = new MFFloat(new float[-0.2,0.19]);
Layout73.size = new MFFloat(new float[0.4,0.6]);
LayoutLayer72.layout = Layout73;

Viewport Viewport74 = createNode("Viewport");
Viewport74.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer72.viewport = Viewport74;

Transform Transform75 = createNode("Transform");
Transform75.translation = new SFVec3f(new float[0,0,-3]);
Shape Shape76 = createNode("Shape");
Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.diffuseColor = new SFColor(new float[0,0,0]);
Material78.transparency = 0.7;
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

Box Box79 = createNode("Box");
Box79.size = new SFVec3f(new float[100,100,0.02]);
Shape76.geometry = Box79;

Transform75.child = new undefined();

Transform75.child[0] = Shape76;

LayoutLayer72.children = new MFNode();

LayoutLayer72.children[0] = Transform75;

Transform Transform80 = createNode("Transform");
Transform80.DEF = "equationTransform";
Transform Transform81 = createNode("Transform");
Transform81.translation = new SFVec3f(new float[0,0,-20]);
Shape Shape82 = createNode("Shape");
Text Text83 = createNode("Text");
Text83.DEF = "equation";
Text83.string = new MFString(new java.lang.String["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]);
FontStyle FontStyle84 = createNode("FontStyle");
FontStyle84.size = 0.09;
Text83.fontStyle = FontStyle84;

Shape82.geometry = Text83;

Appearance Appearance85 = createNode("Appearance");
Material Material86 = createNode("Material");
Material86.diffuseColor = new SFColor(new float[1,1,0]);
Appearance85.material = Material86;

Shape82.appearance = Appearance85;

Transform81.child = new undefined();

Transform81.child[0] = Shape82;

Transform80.children = new MFNode();

Transform80.children[0] = Transform81;

LayoutLayer72.children[1] = Transform80;

//The slider parameters
ProtoDeclare ProtoDeclare87 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;x=&quot;"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="15"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="x"></field>
<field name="orbScript" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><PlaneSensor DEF="protoSensor" description="Grab with mouse to adjust slider" maxPosition="1 0"></PlaneSensor>
<Transform translation="0 0 0"><TouchSensor description="Maybe start dragging this?" DEF="protoTS"></TouchSensor>
</Transform>
<Transform><Shape><Text DEF="protoText" string="&quot;a=&quot;"><IS><connect nodeField="string" protoField="textString"></connect>
</IS>
<FontStyle containerField="fontStyle" style="BOLD" size="0.23"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
</Transform>
<Script DEF="protoValueTransformerScript"><field name="protoScale" accessType="inputOutput" type="SFFloat"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString"></field>
<field name="newTranslation" accessType="inputOnly" type="SFVec3f" value="1 1 1"></field>
<field name="protoScript" accessType="inputOutput" type="SFNode"></field>
<field name="protoValue" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="protoText" accessType="inputOutput" type="MFString" value="&quot;1.0&quot;"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="protoScript" protoField="orbScript"></connect>
</IS>
<![CDATA[ecmascript:
function set_protoScale(value) {
	protoScale = value;
}

function set_protoParameterName(value) {
	protoParameterName = value;
}

function set_protoScript(value) {
	protoScript = value;
}

function set_protoValue(value) {
	protoValue = value;
}

function set_protoText(value) {
	protoText = value;
}

function newTranslation(value) {
       	set_protoValue(value.x * protoScale);
       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));
	protoScript[protoParameterName] = protoValue;
};]]></Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoText" fromNode="protoValueTransformerScript" toField="string" toNode="protoText"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare87.name = "SliderProto";
ProtoInterface ProtoInterface88 = createNode("ProtoInterface");
field field89 = createNode("field");
field89.name = "sliderTranslation";
field89.accessType = "inputOutput";
field89.type = "SFVec3f";
field89.value = "0 0 0";
ProtoInterface88.field = new MFNode();

ProtoInterface88.field[0] = field89;

field field90 = createNode("field");
field90.name = "textString";
field90.accessType = "inputOutput";
field90.type = "MFString";
field90.value = "\"x=\"";
ProtoInterface88.field[1] = field90;

field field91 = createNode("field");
field91.name = "parameterScale";
field91.accessType = "inputOutput";
field91.type = "SFFloat";
field91.value = "15";
ProtoInterface88.field[2] = field91;

field field92 = createNode("field");
field92.name = "parameterName";
field92.accessType = "inputOutput";
field92.type = "SFString";
field92.value = "x";
ProtoInterface88.field[3] = field92;

field field93 = createNode("field");
field93.name = "orbScript";
field93.accessType = "inputOutput";
field93.type = "SFNode";
ProtoInterface88.field[4] = field93;

ProtoDeclare87.protoInterface = ProtoInterface88;

ProtoBody ProtoBody94 = createNode("ProtoBody");
Group Group95 = createNode("Group");
Transform Transform96 = createNode("Transform");
Transform96.DEF = "protoSlider";
Transform96.translation = new SFVec3f(new float[0,0.7,0]);
IS IS97 = createNode("IS");
connect connect98 = createNode("connect");
connect98.nodeField = "translation";
connect98.protoField = "sliderTranslation";
IS97.connect = new MFNode();

IS97.connect[0] = connect98;

Transform96.iS = IS97;

Transform Transform99 = createNode("Transform");
Transform99.DEF = "protoTransform";
Transform99.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor100 = createNode("PlaneSensor");
PlaneSensor100.DEF = "protoSensor";
PlaneSensor100.description = "Grab with mouse to adjust slider";
PlaneSensor100.maxPosition = new SFVec2f(new float[1,0]);
Transform99.children = new MFNode();

Transform99.children[0] = PlaneSensor100;

Transform Transform101 = createNode("Transform");
Transform101.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "Maybe start dragging this?";
TouchSensor102.DEF = "protoTS";
Transform101.children = new MFNode();

Transform101.children[0] = TouchSensor102;

Transform99.children[1] = Transform101;

Transform Transform103 = createNode("Transform");
Shape Shape104 = createNode("Shape");
Text Text105 = createNode("Text");
Text105.DEF = "protoText";
Text105.string = new MFString(new java.lang.String["a="]);
IS IS106 = createNode("IS");
connect connect107 = createNode("connect");
connect107.nodeField = "string";
connect107.protoField = "textString";
IS106.connect = new MFNode();

IS106.connect[0] = connect107;

Text105.iS = IS106;

FontStyle FontStyle108 = createNode("FontStyle");
FontStyle108.style = "BOLD";
FontStyle108.size = 0.23;
Text105.fontStyle = FontStyle108;

Shape104.geometry = Text105;

Appearance Appearance109 = createNode("Appearance");
Material Material110 = createNode("Material");
Appearance109.material = Material110;

Shape104.appearance = Appearance109;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

Transform99.children[2] = Transform103;

Transform96.children = new MFNode();

Transform96.children[0] = Transform99;

Group95.children = new MFNode();

Group95.children[0] = Transform96;

Script Script111 = createNode("Script");
Script111.DEF = "protoValueTransformerScript";
field field112 = createNode("field");
field112.name = "protoScale";
field112.accessType = "inputOutput";
field112.type = "SFFloat";
Script111.field = new MFNode();

Script111.field[0] = field112;

field field113 = createNode("field");
field113.name = "protoParameterName";
field113.accessType = "inputOutput";
field113.type = "SFString";
Script111.field[1] = field113;

field field114 = createNode("field");
field114.name = "newTranslation";
field114.accessType = "inputOnly";
field114.type = "SFVec3f";
field114.value = "1 1 1";
Script111.field[2] = field114;

field field115 = createNode("field");
field115.name = "protoScript";
field115.accessType = "inputOutput";
field115.type = "SFNode";
Script111.field[3] = field115;

field field116 = createNode("field");
field116.name = "protoValue";
field116.accessType = "inputOutput";
field116.type = "SFFloat";
field116.value = "1";
Script111.field[4] = field116;

field field117 = createNode("field");
field117.name = "protoText";
field117.accessType = "inputOutput";
field117.type = "MFString";
field117.value = "\"1.0\"";
Script111.field[5] = field117;

IS IS118 = createNode("IS");
connect connect119 = createNode("connect");
connect119.nodeField = "protoScale";
connect119.protoField = "parameterScale";
IS118.connect = new MFNode();

IS118.connect[0] = connect119;

connect connect120 = createNode("connect");
connect120.nodeField = "protoParameterName";
connect120.protoField = "parameterName";
IS118.connect[1] = connect120;

connect connect121 = createNode("connect");
connect121.nodeField = "protoScript";
connect121.protoField = "orbScript";
IS118.connect[2] = connect121;

Script111.iS = IS118;


Script111.setSourceCode(`ecmascript:\n"+
"function set_protoScale(value) {\n"+
"	protoScale = value;\n"+
"}\n"+
"\n"+
"function set_protoParameterName(value) {\n"+
"	protoParameterName = value;\n"+
"}\n"+
"\n"+
"function set_protoScript(value) {\n"+
"	protoScript = value;\n"+
"}\n"+
"\n"+
"function set_protoValue(value) {\n"+
"	protoValue = value;\n"+
"}\n"+
"\n"+
"function set_protoText(value) {\n"+
"	protoText = value;\n"+
"}\n"+
"\n"+
"function newTranslation(value) {\n"+
"       	set_protoValue(value.x * protoScale);\n"+
"       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));\n"+
"	protoScript[protoParameterName] = protoValue;\n"+
"};`)
Group95.children[1] = Script111;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromField = "translation_changed";
ROUTE122.fromNode = "protoSensor";
ROUTE122.toField = "set_translation";
ROUTE122.toNode = "protoTransform";
Group95.children[2] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromField = "translation_changed";
ROUTE123.fromNode = "protoSensor";
ROUTE123.toField = "newTranslation";
ROUTE123.toNode = "protoValueTransformerScript";
Group95.children[3] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromField = "protoText";
ROUTE124.fromNode = "protoValueTransformerScript";
ROUTE124.toField = "string";
ROUTE124.toNode = "protoText";
Group95.children[4] = ROUTE124;

ProtoBody94.children = new MFNode();

ProtoBody94.children[0] = Group95;

ProtoDeclare87.protoBody = ProtoBody94;

LayoutLayer72.children[2] = ProtoDeclare87;

ProtoInstance ProtoInstance125 = createNode("ProtoInstance");
ProtoInstance125.name = "SliderProto";
ProtoInstance125.DEF = "aPI";
fieldValue fieldValue126 = createNode("fieldValue");
fieldValue126.name = "sliderTranslation";
fieldValue126.value = "0 0.7 0";
ProtoInstance125.fieldValue = new MFNode();

ProtoInstance125.fieldValue[0] = fieldValue126;

fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "textString";
fieldValue127.value = "\"a=\"";
ProtoInstance125.fieldValue[1] = fieldValue127;

fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "parameterScale";
fieldValue128.value = "30";
ProtoInstance125.fieldValue[2] = fieldValue128;

fieldValue fieldValue129 = createNode("fieldValue");
fieldValue129.name = "parameterName";
fieldValue129.value = "a";
ProtoInstance125.fieldValue[3] = fieldValue129;

fieldValue fieldValue130 = createNode("fieldValue");
fieldValue130.name = "orbScript";
Script Script131 = createNode("Script");
Script131.USE = "OrbitScript";
fieldValue130.children = new MFNode();

fieldValue130.children[0] = Script131;

ProtoInstance125.fieldValue[4] = fieldValue130;

LayoutLayer72.children[3] = ProtoInstance125;

ProtoInstance ProtoInstance132 = createNode("ProtoInstance");
ProtoInstance132.name = "SliderProto";
ProtoInstance132.DEF = "bPI";
fieldValue fieldValue133 = createNode("fieldValue");
fieldValue133.name = "sliderTranslation";
fieldValue133.value = "0 0.4 0";
ProtoInstance132.fieldValue = new MFNode();

ProtoInstance132.fieldValue[0] = fieldValue133;

fieldValue fieldValue134 = createNode("fieldValue");
fieldValue134.name = "textString";
fieldValue134.value = "\"b=\"";
ProtoInstance132.fieldValue[1] = fieldValue134;

fieldValue fieldValue135 = createNode("fieldValue");
fieldValue135.name = "parameterScale";
fieldValue135.value = "30";
ProtoInstance132.fieldValue[2] = fieldValue135;

fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "parameterName";
fieldValue136.value = "b";
ProtoInstance132.fieldValue[3] = fieldValue136;

fieldValue fieldValue137 = createNode("fieldValue");
fieldValue137.name = "orbScript";
Script Script138 = createNode("Script");
Script138.USE = "OrbitScript";
fieldValue137.children = new MFNode();

fieldValue137.children[0] = Script138;

ProtoInstance132.fieldValue[4] = fieldValue137;

LayoutLayer72.children[4] = ProtoInstance132;

ProtoInstance ProtoInstance139 = createNode("ProtoInstance");
ProtoInstance139.name = "SliderProto";
ProtoInstance139.DEF = "cPI";
fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "sliderTranslation";
fieldValue140.value = "0 0.1 0";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

fieldValue fieldValue141 = createNode("fieldValue");
fieldValue141.name = "textString";
fieldValue141.value = "\"c=\"";
ProtoInstance139.fieldValue[1] = fieldValue141;

fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "parameterScale";
fieldValue142.value = "20";
ProtoInstance139.fieldValue[2] = fieldValue142;

fieldValue fieldValue143 = createNode("fieldValue");
fieldValue143.name = "parameterName";
fieldValue143.value = "c";
ProtoInstance139.fieldValue[3] = fieldValue143;

fieldValue fieldValue144 = createNode("fieldValue");
fieldValue144.name = "orbScript";
Script Script145 = createNode("Script");
Script145.USE = "OrbitScript";
fieldValue144.children = new MFNode();

fieldValue144.children[0] = Script145;

ProtoInstance139.fieldValue[4] = fieldValue144;

LayoutLayer72.children[5] = ProtoInstance139;

ProtoInstance ProtoInstance146 = createNode("ProtoInstance");
ProtoInstance146.name = "SliderProto";
ProtoInstance146.DEF = "dPI";
fieldValue fieldValue147 = createNode("fieldValue");
fieldValue147.name = "sliderTranslation";
fieldValue147.value = "0 -0.2 0";
ProtoInstance146.fieldValue = new MFNode();

ProtoInstance146.fieldValue[0] = fieldValue147;

fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "textString";
fieldValue148.value = "\"d=\"";
ProtoInstance146.fieldValue[1] = fieldValue148;

fieldValue fieldValue149 = createNode("fieldValue");
fieldValue149.name = "parameterScale";
fieldValue149.value = "20";
ProtoInstance146.fieldValue[2] = fieldValue149;

fieldValue fieldValue150 = createNode("fieldValue");
fieldValue150.name = "parameterName";
fieldValue150.value = "d";
ProtoInstance146.fieldValue[3] = fieldValue150;

fieldValue fieldValue151 = createNode("fieldValue");
fieldValue151.name = "orbScript";
Script Script152 = createNode("Script");
Script152.USE = "OrbitScript";
fieldValue151.children = new MFNode();

fieldValue151.children[0] = Script152;

ProtoInstance146.fieldValue[4] = fieldValue151;

LayoutLayer72.children[6] = ProtoInstance146;

ProtoInstance ProtoInstance153 = createNode("ProtoInstance");
ProtoInstance153.name = "SliderProto";
ProtoInstance153.DEF = "tdeltaPI";
fieldValue fieldValue154 = createNode("fieldValue");
fieldValue154.name = "sliderTranslation";
fieldValue154.value = "0 -0.5 0";
ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

fieldValue fieldValue155 = createNode("fieldValue");
fieldValue155.name = "textString";
fieldValue155.value = "\"tdelta=\"";
ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "parameterScale";
fieldValue156.value = "6.28";
ProtoInstance153.fieldValue[2] = fieldValue156;

fieldValue fieldValue157 = createNode("fieldValue");
fieldValue157.name = "parameterName";
fieldValue157.value = "tdelta";
ProtoInstance153.fieldValue[3] = fieldValue157;

fieldValue fieldValue158 = createNode("fieldValue");
fieldValue158.name = "orbScript";
Script Script159 = createNode("Script");
Script159.USE = "OrbitScript";
fieldValue158.children = new MFNode();

fieldValue158.children[0] = Script159;

ProtoInstance153.fieldValue[4] = fieldValue158;

LayoutLayer72.children[7] = ProtoInstance153;

ProtoInstance ProtoInstance160 = createNode("ProtoInstance");
ProtoInstance160.name = "SliderProto";
ProtoInstance160.DEF = "pdeltaPI";
fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "sliderTranslation";
fieldValue161.value = "0 -0.8 0";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

fieldValue fieldValue162 = createNode("fieldValue");
fieldValue162.name = "textString";
fieldValue162.value = "\"pdelta=\"";
ProtoInstance160.fieldValue[1] = fieldValue162;

fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "parameterScale";
fieldValue163.value = "6.28";
ProtoInstance160.fieldValue[2] = fieldValue163;

fieldValue fieldValue164 = createNode("fieldValue");
fieldValue164.name = "parameterName";
fieldValue164.value = "pdelta";
ProtoInstance160.fieldValue[3] = fieldValue164;

fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "orbScript";
Script Script166 = createNode("Script");
Script166.USE = "OrbitScript";
fieldValue165.children = new MFNode();

fieldValue165.children[0] = Script166;

ProtoInstance160.fieldValue[4] = fieldValue165;

LayoutLayer72.children[8] = ProtoInstance160;

LayerSet16.layers[1] = LayoutLayer72;

Layer Layer167 = createNode("Layer");
Layer167.pickable = True;
Layer167.objectType = new MFString(new java.lang.String["ALL"]);
Viewpoint Viewpoint168 = createNode("Viewpoint");
Viewpoint168.description = "My Humanoids";
Viewpoint168.fieldOfView = 1.570796;
Viewpoint168.position = new SFVec3f(new float[0,1.75,80]);
Layer167.children = new MFNode();

Layer167.children[0] = Viewpoint168;

LayerSet16.layers[2] = Layer167;

layerSet = new undefined();

layerSet[0] = LayerSet16;

}
