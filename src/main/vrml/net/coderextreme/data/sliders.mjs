const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
//<component name='Shape' level='4'></component>
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "sliders.x3d");
scene.addMetaData("created", "8 August 2025");
scene.addMetaData("description", "*Bumpy flower with prototype sliders*");
scene.addMetaData("creator", "Doug Sanden, Christoph Valentin, John Carlson");
scene.addMetaData("identifier", "https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d");
scene.addMetaData("license", "license.html");
scene.addMetaData("generator", "Vim, VI Improved");
await browser .loadComponents (scene);
let LayerSet16 = browser.currentScene.createNode("LayerSet");
LayerSet16.activeLayer = 1;
LayerSet16.order = new X3D.MFInt32([1,2,3]);
let Layer17 = browser.currentScene.createNode("Layer");
Layer17.pickable = True;
Layer17.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo18.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
NavigationInfo18.avatarSize = new X3D.MFFloat([0.25,1.75,0.75]);
Layer17YYY.children = new X3D.MFNode();

Layer17ZZZ.children[0] = NavigationInfo18;

let DirectionalLight19 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight19.ambientIntensity = 0.2;
DirectionalLight19.direction = new X3D.SFVec3f([0,-1,0]);
Layer17ZZZ.children[1] = DirectionalLight19;

let DirectionalLight20 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight20.ambientIntensity = 0.2;
DirectionalLight20.direction = new X3D.SFVec3f([-1,-0.1,-1]);
Layer17ZZZ.children[2] = DirectionalLight20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "My Overview";
Viewpoint21.fieldOfView = 1.570796;
Viewpoint21.position = new X3D.SFVec3f([0,1.75,60]);
Layer17ZZZ.children[3] = Viewpoint21;

let Group22 = browser.currentScene.createNode("Group");
//Arrow X
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([25,0,0]);
Transform23.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape24 = browser.currentScene.createNode("Shape");
let Cylinder25 = browser.currentScene.createNode("Cylinder");
Cylinder25.DEF = "Shaft";
Cylinder25.radius = 0.35;
Cylinder25.height = 50;
geometry = Cylinder25;

let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.DEF = "RED";
Material27.diffuseColor = new X3D.SFColor([1,0,0]);
Material27.emissiveColor = new X3D.SFColor([1,0,0]);
material = Material27;

appearance = Appearance26;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Group22YYY.children = new X3D.MFNode();

Group22ZZZ.children[0] = Transform23;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new X3D.SFVec3f([50,0,0]);
Transform28.rotation = new X3D.SFRotation([0,0,-1,1.57]);
let Shape29 = browser.currentScene.createNode("Shape");
let Cone30 = browser.currentScene.createNode("Cone");
Cone30.DEF = "Tip";
Cone30.bottomRadius = 0.8;
Cone30.height = 3;
geometry = Cone30;

let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.USE = "RED";
material = Material32;

appearance = Appearance31;

Transform28YYY.child = new X3D.undefined();

Transform28ZZZ.child[0] = Shape29;

Group22ZZZ.children[1] = Transform28;

//Arrow Y
let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new X3D.SFVec3f([0,25,0]);
let Shape34 = browser.currentScene.createNode("Shape");
let Cylinder35 = browser.currentScene.createNode("Cylinder");
Cylinder35.USE = "Shaft";
geometry = Cylinder35;

let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.DEF = "GREEN";
Material37.diffuseColor = new X3D.SFColor([0,1,0]);
Material37.emissiveColor = new X3D.SFColor([0,1,0]);
material = Material37;

appearance = Appearance36;

Transform33YYY.child = new X3D.undefined();

Transform33ZZZ.child[0] = Shape34;

Group22ZZZ.children[2] = Transform33;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.translation = new X3D.SFVec3f([0,50,0]);
let Shape39 = browser.currentScene.createNode("Shape");
let Cone40 = browser.currentScene.createNode("Cone");
Cone40.USE = "Tip";
geometry = Cone40;

let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.USE = "GREEN";
material = Material42;

appearance = Appearance41;

Transform38YYY.child = new X3D.undefined();

Transform38ZZZ.child[0] = Shape39;

Group22ZZZ.children[3] = Transform38;

//Arrow Z
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new X3D.SFVec3f([0,0,25]);
Transform43.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape44 = browser.currentScene.createNode("Shape");
let Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.USE = "Shaft";
geometry = Cylinder45;

let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.DEF = "BLUE";
Material47.diffuseColor = new X3D.SFColor([0,0,1]);
Material47.emissiveColor = new X3D.SFColor([0,0,1]);
material = Material47;

appearance = Appearance46;

Transform43YYY.child = new X3D.undefined();

Transform43ZZZ.child[0] = Shape44;

Group22ZZZ.children[4] = Transform43;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new X3D.SFVec3f([0,0,50]);
Transform48.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape49 = browser.currentScene.createNode("Shape");
let Cone50 = browser.currentScene.createNode("Cone");
Cone50.USE = "Tip";
geometry = Cone50;

let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.USE = "BLUE";
material = Material52;

appearance = Appearance51;

Transform48YYY.child = new X3D.undefined();

Transform48ZZZ.child[0] = Shape49;

Group22ZZZ.children[5] = Transform48;

Layer17ZZZ.children[4] = Group22;

//the model that is being reviewed by the users of this scene
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.DEF = "FlowerTransform";
let Transform54 = browser.currentScene.createNode("Transform");
let Shape55 = browser.currentScene.createNode("Shape");
let IndexedFaceSet56 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet56.convex = False;
IndexedFaceSet56.DEF = "Orbit";
let Coordinate57 = browser.currentScene.createNode("Coordinate");
Coordinate57.DEF = "OrbitCoordinates";
coord = Coordinate57;

geometry = IndexedFaceSet56;

let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material59.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material59;

appearance = Appearance58;

Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

Transform53YYY.children = new X3D.MFNode();

Transform53ZZZ.children[0] = Transform54;

Layer17ZZZ.children[5] = Transform53;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "OrbitScript";
Script61.getField("coordinates")Script60YYY.field = new X3D.MFNode();

Script62.getField("coordIndexes")Script60YYY.field = new X3D.MFNode();

Script63.getField("a").setValue("5");
Script60YYY.field = new X3D.MFNode();

Script64.getField("b").setValue("5");
Script60YYY.field = new X3D.MFNode();

Script65.getField("c").setValue("5");
Script60YYY.field = new X3D.MFNode();

Script66.getField("d").setValue("5");
Script60YYY.field = new X3D.MFNode();

Script67.getField("pdelta").setValue("0");
Script60YYY.field = new X3D.MFNode();

Script68.getField("tdelta").setValue("0");
Script60YYY.field = new X3D.MFNode();

Script69.getField("resolution").setValue("50");
Script60YYY.field = new X3D.MFNode();


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
Layer17ZZZ.children[6] = Script60;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "coordIndexes";
ROUTE70.fromNode = "OrbitScript";
ROUTE70.toField = "set_coordIndex";
ROUTE70.toNode = "Orbit";
Layer17ZZZ.children[7] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "coordinates";
ROUTE71.fromNode = "OrbitScript";
ROUTE71.toField = "set_point";
ROUTE71.toNode = "OrbitCoordinates";
Layer17ZZZ.children[8] = ROUTE71;

LayerSet16YYY.layers = new X3D.MFNode();

LayerSet16ZZZ.layers[0] = Layer17;

let LayoutLayer72 = browser.currentScene.createNode("LayoutLayer");
LayoutLayer72.pickable = True;
LayoutLayer72.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
let Layout73 = browser.currentScene.createNode("Layout");
Layout73.align = new X3D.MFString([new X3D.SFString("LEFT"), new X3D.SFString("BOTTOM")]);
Layout73.offset = new X3D.MFFloat([-0.2,0.19]);
Layout73.size = new X3D.MFFloat([0.4,0.6]);
layout = Layout73;

let Viewport74 = browser.currentScene.createNode("Viewport");
Viewport74.clipBoundary = new X3D.MFFloat([0,1,0,1]);
viewport = Viewport74;

let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new X3D.SFVec3f([0,0,-3]);
let Shape76 = browser.currentScene.createNode("Shape");
let Appearance77 = browser.currentScene.createNode("Appearance");
let Material78 = browser.currentScene.createNode("Material");
Material78.diffuseColor = new X3D.SFColor([0,0,0]);
Material78.transparency = 0.7;
material = Material78;

appearance = Appearance77;

let Box79 = browser.currentScene.createNode("Box");
Box79.size = new X3D.SFVec3f([100,100,0.02]);
geometry = Box79;

Transform75YYY.child = new X3D.undefined();

Transform75ZZZ.child[0] = Shape76;

LayoutLayer72YYY.children = new X3D.MFNode();

LayoutLayer72ZZZ.children[0] = Transform75;

let Transform80 = browser.currentScene.createNode("Transform");
Transform80.DEF = "equationTransform";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = new X3D.SFVec3f([0,0,-20]);
let Shape82 = browser.currentScene.createNode("Shape");
let Text83 = browser.currentScene.createNode("Text");
Text83.DEF = "equation";
Text83.string = new X3D.MFString([new X3D.SFString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")]);
let FontStyle84 = browser.currentScene.createNode("FontStyle");
FontStyle84.size = 0.09;
fontStyle = FontStyle84;

geometry = Text83;

let Appearance85 = browser.currentScene.createNode("Appearance");
let Material86 = browser.currentScene.createNode("Material");
Material86.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material86;

appearance = Appearance85;

Transform81YYY.child = new X3D.undefined();

Transform81ZZZ.child[0] = Shape82;

Transform80YYY.children = new X3D.MFNode();

Transform80ZZZ.children[0] = Transform81;

LayoutLayer72ZZZ.children[1] = Transform80;

//The slider parameters
let ProtoDeclare87 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface89.getField("sliderTranslation").setValue("0 0 0");
ProtoInterface88YYY.field = new X3D.MFNode();

ProtoInterface90.getField("textString").setValue("\"x=\"");
ProtoInterface88YYY.field = new X3D.MFNode();

ProtoInterface91.getField("parameterScale").setValue("15");
ProtoInterface88YYY.field = new X3D.MFNode();

ProtoInterface92.getField("parameterName").setValue("x");
ProtoInterface88YYY.field = new X3D.MFNode();

ProtoInterface93.getField("orbScript")ProtoInterface88YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface88;

let ProtoBody94 = browser.currentScene.createNode("ProtoBody");
let Group95 = browser.currentScene.createNode("Group");
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.DEF = "protoSlider";
Transform96.translation = new X3D.SFVec3f([0,0.7,0]);
let IS97 = browser.currentScene.createNode("IS");
let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "translation";
connect98.protoField = "sliderTranslation";
IS97YYY.connect = new X3D.MFNode();

IS97ZZZ.connect[0] = connect98;

iS = IS97;

let Transform99 = browser.currentScene.createNode("Transform");
Transform99.DEF = "protoTransform";
Transform99.translation = new X3D.SFVec3f([0,0,0.1]);
let PlaneSensor100 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor100.DEF = "protoSensor";
PlaneSensor100.description = "Grab with mouse to adjust slider";
PlaneSensor100.maxPosition = new X3D.SFVec2f([1,0]);
Transform99YYY.children = new X3D.MFNode();

Transform99ZZZ.children[0] = PlaneSensor100;

let Transform101 = browser.currentScene.createNode("Transform");
Transform101.translation = new X3D.SFVec3f([0,0,0]);
let TouchSensor102 = browser.currentScene.createNode("TouchSensor");
TouchSensor102.description = "Maybe start dragging this?";
TouchSensor102.DEF = "protoTS";
Transform101YYY.children = new X3D.MFNode();

Transform101ZZZ.children[0] = TouchSensor102;

Transform99ZZZ.children[1] = Transform101;

let Transform103 = browser.currentScene.createNode("Transform");
let Shape104 = browser.currentScene.createNode("Shape");
let Text105 = browser.currentScene.createNode("Text");
Text105.DEF = "protoText";
Text105.string = new X3D.MFString([new X3D.SFString("a=")]);
let IS106 = browser.currentScene.createNode("IS");
let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "string";
connect107.protoField = "textString";
IS106YYY.connect = new X3D.MFNode();

IS106ZZZ.connect[0] = connect107;

iS = IS106;

let FontStyle108 = browser.currentScene.createNode("FontStyle");
FontStyle108.style = "BOLD";
FontStyle108.size = 0.23;
fontStyle = FontStyle108;

geometry = Text105;

let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
material = Material110;

appearance = Appearance109;

Transform103YYY.child = new X3D.undefined();

Transform103ZZZ.child[0] = Shape104;

Transform99ZZZ.children[2] = Transform103;

Transform96YYY.children = new X3D.MFNode();

Transform96ZZZ.children[0] = Transform99;

Group95YYY.children = new X3D.MFNode();

Group95ZZZ.children[0] = Transform96;

let Script111 = browser.currentScene.createNode("Script");
Script111.DEF = "protoValueTransformerScript";
Script112.getField("protoScale")Script111YYY.field = new X3D.MFNode();

Script113.getField("protoParameterName")Script111YYY.field = new X3D.MFNode();

Script114.getField("newTranslation").setValue("1 1 1");
Script111YYY.field = new X3D.MFNode();

Script115.getField("protoScript")Script111YYY.field = new X3D.MFNode();

Script116.getField("protoValue").setValue("1");
Script111YYY.field = new X3D.MFNode();

Script117.getField("protoText").setValue("\"1.0\"");
Script111YYY.field = new X3D.MFNode();

let IS118 = browser.currentScene.createNode("IS");
let connect119 = browser.currentScene.createNode("connect");
connect119.nodeField = "protoScale";
connect119.protoField = "parameterScale";
IS118YYY.connect = new X3D.MFNode();

IS118ZZZ.connect[0] = connect119;

let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "protoParameterName";
connect120.protoField = "parameterName";
IS118ZZZ.connect[1] = connect120;

let connect121 = browser.currentScene.createNode("connect");
connect121.nodeField = "protoScript";
connect121.protoField = "orbScript";
IS118ZZZ.connect[2] = connect121;

iS = IS118;


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
Group95ZZZ.children[1] = Script111;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromField = "translation_changed";
ROUTE122.fromNode = "protoSensor";
ROUTE122.toField = "set_translation";
ROUTE122.toNode = "protoTransform";
Group95ZZZ.children[2] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromField = "translation_changed";
ROUTE123.fromNode = "protoSensor";
ROUTE123.toField = "newTranslation";
ROUTE123.toNode = "protoValueTransformerScript";
Group95ZZZ.children[3] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "protoText";
ROUTE124.fromNode = "protoValueTransformerScript";
ROUTE124.toField = "string";
ROUTE124.toNode = "protoText";
Group95ZZZ.children[4] = ROUTE124;

ProtoBody94YYY.children = new X3D.MFNode();

ProtoBody94ZZZ.children[0] = Group95;

protoBody = ProtoBody94;

LayoutLayer72ZZZ.children[2] = ProtoDeclare87;

let ProtoInstance125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance125.name = "SliderProto";
ProtoInstance125.DEF = "aPI";
let fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "sliderTranslation";
fieldValue126.value = "0 0.7 0";
ProtoInstance125YYY.fieldValue = new X3D.MFNode();

ProtoInstance125ZZZ.fieldValue[0] = fieldValue126;

let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "textString";
fieldValue127.value = "\"a=\"";
ProtoInstance125ZZZ.fieldValue[1] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "parameterScale";
fieldValue128.value = "30";
ProtoInstance125ZZZ.fieldValue[2] = fieldValue128;

let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "parameterName";
fieldValue129.value = "a";
ProtoInstance125ZZZ.fieldValue[3] = fieldValue129;

let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "orbScript";
let Script131 = browser.currentScene.createNode("Script");
Script131.USE = "OrbitScript";
fieldValue130YYY.children = new X3D.MFNode();

fieldValue130ZZZ.children[0] = Script131;

ProtoInstance125ZZZ.fieldValue[4] = fieldValue130;

LayoutLayer72ZZZ.children[3] = ProtoInstance125;

let ProtoInstance132 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance132.name = "SliderProto";
ProtoInstance132.DEF = "bPI";
let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "sliderTranslation";
fieldValue133.value = "0 0.4 0";
ProtoInstance132YYY.fieldValue = new X3D.MFNode();

ProtoInstance132ZZZ.fieldValue[0] = fieldValue133;

let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "textString";
fieldValue134.value = "\"b=\"";
ProtoInstance132ZZZ.fieldValue[1] = fieldValue134;

let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "parameterScale";
fieldValue135.value = "30";
ProtoInstance132ZZZ.fieldValue[2] = fieldValue135;

let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "parameterName";
fieldValue136.value = "b";
ProtoInstance132ZZZ.fieldValue[3] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "orbScript";
let Script138 = browser.currentScene.createNode("Script");
Script138.USE = "OrbitScript";
fieldValue137YYY.children = new X3D.MFNode();

fieldValue137ZZZ.children[0] = Script138;

ProtoInstance132ZZZ.fieldValue[4] = fieldValue137;

LayoutLayer72ZZZ.children[4] = ProtoInstance132;

let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "SliderProto";
ProtoInstance139.DEF = "cPI";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "sliderTranslation";
fieldValue140.value = "0 0.1 0";
ProtoInstance139YYY.fieldValue = new X3D.MFNode();

ProtoInstance139ZZZ.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "textString";
fieldValue141.value = "\"c=\"";
ProtoInstance139ZZZ.fieldValue[1] = fieldValue141;

let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "parameterScale";
fieldValue142.value = "20";
ProtoInstance139ZZZ.fieldValue[2] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "parameterName";
fieldValue143.value = "c";
ProtoInstance139ZZZ.fieldValue[3] = fieldValue143;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "orbScript";
let Script145 = browser.currentScene.createNode("Script");
Script145.USE = "OrbitScript";
fieldValue144YYY.children = new X3D.MFNode();

fieldValue144ZZZ.children[0] = Script145;

ProtoInstance139ZZZ.fieldValue[4] = fieldValue144;

LayoutLayer72ZZZ.children[5] = ProtoInstance139;

let ProtoInstance146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance146.name = "SliderProto";
ProtoInstance146.DEF = "dPI";
let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "sliderTranslation";
fieldValue147.value = "0 -0.2 0";
ProtoInstance146YYY.fieldValue = new X3D.MFNode();

ProtoInstance146ZZZ.fieldValue[0] = fieldValue147;

let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "textString";
fieldValue148.value = "\"d=\"";
ProtoInstance146ZZZ.fieldValue[1] = fieldValue148;

let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "parameterScale";
fieldValue149.value = "20";
ProtoInstance146ZZZ.fieldValue[2] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "parameterName";
fieldValue150.value = "d";
ProtoInstance146ZZZ.fieldValue[3] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "orbScript";
let Script152 = browser.currentScene.createNode("Script");
Script152.USE = "OrbitScript";
fieldValue151YYY.children = new X3D.MFNode();

fieldValue151ZZZ.children[0] = Script152;

ProtoInstance146ZZZ.fieldValue[4] = fieldValue151;

LayoutLayer72ZZZ.children[6] = ProtoInstance146;

let ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "SliderProto";
ProtoInstance153.DEF = "tdeltaPI";
let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "sliderTranslation";
fieldValue154.value = "0 -0.5 0";
ProtoInstance153YYY.fieldValue = new X3D.MFNode();

ProtoInstance153ZZZ.fieldValue[0] = fieldValue154;

let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "textString";
fieldValue155.value = "\"tdelta=\"";
ProtoInstance153ZZZ.fieldValue[1] = fieldValue155;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "parameterScale";
fieldValue156.value = "6.28";
ProtoInstance153ZZZ.fieldValue[2] = fieldValue156;

let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "parameterName";
fieldValue157.value = "tdelta";
ProtoInstance153ZZZ.fieldValue[3] = fieldValue157;

let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "orbScript";
let Script159 = browser.currentScene.createNode("Script");
Script159.USE = "OrbitScript";
fieldValue158YYY.children = new X3D.MFNode();

fieldValue158ZZZ.children[0] = Script159;

ProtoInstance153ZZZ.fieldValue[4] = fieldValue158;

LayoutLayer72ZZZ.children[7] = ProtoInstance153;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "SliderProto";
ProtoInstance160.DEF = "pdeltaPI";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "sliderTranslation";
fieldValue161.value = "0 -0.8 0";
ProtoInstance160YYY.fieldValue = new X3D.MFNode();

ProtoInstance160ZZZ.fieldValue[0] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "textString";
fieldValue162.value = "\"pdelta=\"";
ProtoInstance160ZZZ.fieldValue[1] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "parameterScale";
fieldValue163.value = "6.28";
ProtoInstance160ZZZ.fieldValue[2] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "parameterName";
fieldValue164.value = "pdelta";
ProtoInstance160ZZZ.fieldValue[3] = fieldValue164;

let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "orbScript";
let Script166 = browser.currentScene.createNode("Script");
Script166.USE = "OrbitScript";
fieldValue165YYY.children = new X3D.MFNode();

fieldValue165ZZZ.children[0] = Script166;

ProtoInstance160ZZZ.fieldValue[4] = fieldValue165;

LayoutLayer72ZZZ.children[8] = ProtoInstance160;

LayerSet16ZZZ.layers[1] = LayoutLayer72;

let Layer167 = browser.currentScene.createNode("Layer");
Layer167.pickable = True;
Layer167.objectType = new X3D.MFString([new X3D.SFString("ALL")]);
let Viewpoint168 = browser.currentScene.createNode("Viewpoint");
Viewpoint168.description = "My Humanoids";
Viewpoint168.fieldOfView = 1.570796;
Viewpoint168.position = new X3D.SFVec3f([0,1.75,80]);
Layer167YYY.children = new X3D.MFNode();

Layer167ZZZ.children[0] = Viewpoint168;

LayerSet16ZZZ.layers[2] = Layer167;

browser.currentScene.layerSet = new X3D.undefined();

browser.currentScene.layerSet[0] = LayerSet16;

}
main ();
