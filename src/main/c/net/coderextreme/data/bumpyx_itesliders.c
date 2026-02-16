#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.1";
head head1 = createNode("head");
//<component name='Shape' level='4'></component>
//<component name='DIS' level='2'></component>
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

meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "bumpyx_itesliders.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "description";
meta11.content = "*Bumpy flower with prototype sliders*";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "creator";
meta12.content = "Doug Sanden, Christoph Valentin, John Carlson";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "PSPad, http://www.pspad.com/";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "license";
meta15.content = "license.html";
head1.meta[13] = meta15;

head = head1;

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,
//It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
//open for their \"discussion about the teapot\"
//LayerSet with two layers, navigation happens in layer 1
LayerSet LayerSet17 = createNode("LayerSet");
LayerSet17.activeLayer = 1;
LayerSet17.order = new MFInt32(new int[1,2,3]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
Layer Layer18 = createNode("Layer");
Layer18.pickable = True;
Layer18.objectType = new MFString(new java.lang.String["ALL"]);
//basic nodes, which might be present in any scene
NavigationInfo NavigationInfo19 = createNode("NavigationInfo");
NavigationInfo19.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo19.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
Layer18.children = new MFNode();

Layer18.children[0] = NavigationInfo19;

DirectionalLight DirectionalLight20 = createNode("DirectionalLight");
DirectionalLight20.ambientIntensity = 0.2;
DirectionalLight20.direction = new SFVec3f(new float[0,-1,0]);
Layer18.children[1] = DirectionalLight20;

DirectionalLight DirectionalLight21 = createNode("DirectionalLight");
DirectionalLight21.ambientIntensity = 0.2;
DirectionalLight21.direction = new SFVec3f(new float[-1,-0.1,-1]);
Layer18.children[2] = DirectionalLight21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.description = "My Overview";
Viewpoint22.fieldOfView = 1.570796;
Viewpoint22.position = new SFVec3f(new float[0,1.75,60]);
Layer18.children[3] = Viewpoint22;

//this group contains the red/green/blue 3D crosshair
Group Group23 = createNode("Group");
//Arrow X
Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[25,0,0]);
Transform24.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape25 = createNode("Shape");
Cylinder Cylinder26 = createNode("Cylinder");
Cylinder26.DEF = "Shaft";
Cylinder26.radius = 0.35;
Cylinder26.height = 50;
Shape25.geometry = Cylinder26;

Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.DEF = "RED";
Material28.diffuseColor = new SFColor(new float[1,0,0]);
Material28.emissiveColor = new SFColor(new float[1,0,0]);
Appearance27.material = Material28;

Shape25.appearance = Appearance27;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Group23.children = new MFNode();

Group23.children[0] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[50,0,0]);
Transform29.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape30 = createNode("Shape");
Cone Cone31 = createNode("Cone");
Cone31.DEF = "Tip";
Cone31.bottomRadius = 0.8;
Cone31.height = 3;
Shape30.geometry = Cone31;

Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.USE = "RED";
Appearance32.material = Material33;

Shape30.appearance = Appearance32;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Group23.children[1] = Transform29;

//Arrow Y
Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,25,0]);
Shape Shape35 = createNode("Shape");
Cylinder Cylinder36 = createNode("Cylinder");
Cylinder36.USE = "Shaft";
Shape35.geometry = Cylinder36;

Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.DEF = "GREEN";
Material38.diffuseColor = new SFColor(new float[0,1,0]);
Material38.emissiveColor = new SFColor(new float[0,1,0]);
Appearance37.material = Material38;

Shape35.appearance = Appearance37;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Group23.children[2] = Transform34;

Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[0,50,0]);
Shape Shape40 = createNode("Shape");
Cone Cone41 = createNode("Cone");
Cone41.USE = "Tip";
Shape40.geometry = Cone41;

Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.USE = "GREEN";
Appearance42.material = Material43;

Shape40.appearance = Appearance42;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Group23.children[3] = Transform39;

//Arrow Z
Transform Transform44 = createNode("Transform");
Transform44.translation = new SFVec3f(new float[0,0,25]);
Transform44.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape45 = createNode("Shape");
Cylinder Cylinder46 = createNode("Cylinder");
Cylinder46.USE = "Shaft";
Shape45.geometry = Cylinder46;

Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.DEF = "BLUE";
Material48.diffuseColor = new SFColor(new float[0,0,1]);
Material48.emissiveColor = new SFColor(new float[0,0,1]);
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Group23.children[4] = Transform44;

Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,0,50]);
Transform49.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape50 = createNode("Shape");
Cone Cone51 = createNode("Cone");
Cone51.USE = "Tip";
Shape50.geometry = Cone51;

Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.USE = "BLUE";
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Group23.children[5] = Transform49;

Layer18.children[4] = Group23;

//the model that is being reviewed by the users of this scene
Transform Transform54 = createNode("Transform");
Transform54.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background55 = createNode("Background");
Background55.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background55.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background55.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background55.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background55.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background55.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Transform54.children = new MFNode();

Transform54.children[0] = Background55;

Transform Transform56 = createNode("Transform");
Shape Shape57 = createNode("Shape");
//<Sphere radius='40'></Sphere>
IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.convex = False;
IndexedFaceSet58.DEF = "Orbit";
Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.DEF = "OrbitCoordinates";
IndexedFaceSet58.coord = Coordinate59;

Shape57.geometry = IndexedFaceSet58;

Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material61.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance60.material = Material61;

ComposedCubeMapTexture ComposedCubeMapTexture62 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture62.DEF = "texture";
ImageTexture ImageTexture63 = createNode("ImageTexture");
ImageTexture63.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture62.topTexture = ImageTexture63;

ImageTexture ImageTexture64 = createNode("ImageTexture");
ImageTexture64.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture62.topTexture = ImageTexture64;

ImageTexture ImageTexture65 = createNode("ImageTexture");
ImageTexture65.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture62.topTexture = ImageTexture65;

ImageTexture ImageTexture66 = createNode("ImageTexture");
ImageTexture66.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture62.topTexture = ImageTexture66;

ImageTexture ImageTexture67 = createNode("ImageTexture");
ImageTexture67.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture62.topTexture = ImageTexture67;

ImageTexture ImageTexture68 = createNode("ImageTexture");
ImageTexture68.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture62.topTexture = ImageTexture68;

Appearance60.texture = ComposedCubeMapTexture62;

ComposedShader ComposedShader69 = createNode("ComposedShader");
ComposedShader69.DEF = "x_iteShader";
ComposedShader69.language = "GLSL";
field field70 = createNode("field");
field70.name = "chromaticDispertion";
field70.accessType = "inputOnly";
field70.type = "SFVec3f";
field70.value = "0.98 1 1.033";
ComposedShader69.field = new MFNode();

ComposedShader69.field[0] = field70;

field field71 = createNode("field");
field71.name = "cube";
field71.type = "SFNode";
field71.accessType = "inputOnly";
ComposedCubeMapTexture ComposedCubeMapTexture72 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture72.USE = "texture";
field71.children = new MFNode();

field71.children[0] = ComposedCubeMapTexture72;

ComposedShader69.field[1] = field71;

field field73 = createNode("field");
field73.name = "bias";
field73.type = "SFFloat";
field73.accessType = "inputOnly";
field73.value = "0.5";
ComposedShader69.field[2] = field73;

field field74 = createNode("field");
field74.name = "scale";
field74.type = "SFFloat";
field74.accessType = "inputOnly";
field74.value = "0.5";
ComposedShader69.field[3] = field74;

field field75 = createNode("field");
field75.name = "power";
field75.type = "SFFloat";
field75.accessType = "inputOnly";
field75.value = "2";
ComposedShader69.field[4] = field75;

field field76 = createNode("field");
field76.name = "a";
field76.type = "SFFloat";
field76.accessType = "inputOutput";
field76.value = "15";
ComposedShader69.field[5] = field76;

field field77 = createNode("field");
field77.name = "b";
field77.type = "SFFloat";
field77.accessType = "inputOutput";
field77.value = "5";
ComposedShader69.field[6] = field77;

field field78 = createNode("field");
field78.name = "c";
field78.type = "SFFloat";
field78.accessType = "inputOutput";
field78.value = "5";
ComposedShader69.field[7] = field78;

field field79 = createNode("field");
field79.name = "d";
field79.type = "SFFloat";
field79.accessType = "inputOutput";
field79.value = "5";
ComposedShader69.field[8] = field79;

field field80 = createNode("field");
field80.name = "tdelta";
field80.type = "SFFloat";
field80.accessType = "inputOutput";
field80.value = "0";
ComposedShader69.field[9] = field80;

field field81 = createNode("field");
field81.name = "pdelta";
field81.type = "SFFloat";
field81.accessType = "inputOutput";
field81.value = "0";
ComposedShader69.field[10] = field81;

ShaderPart ShaderPart82 = createNode("ShaderPart");
ShaderPart82.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart82.type = "VERTEX";
ComposedShader69.parts[11] = ShaderPart82;

ShaderPart ShaderPart83 = createNode("ShaderPart");
ShaderPart83.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart83.type = "FRAGMENT";
ComposedShader69.parts[12] = ShaderPart83;

//TO CONVERT TO A SPHERE
//<ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>
//<ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance60.shaders = new MFNode();

Appearance60.shaders[0] = ComposedShader69;

Shape57.appearance = Appearance60;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

Transform54.children[1] = Transform56;

Layer18.children[5] = Transform54;

Script Script84 = createNode("Script");
Script84.DEF = "OrbitScript";
field field85 = createNode("field");
field85.name = "coordinates";
field85.accessType = "inputOutput";
field85.type = "MFVec3f";
Script84.field = new MFNode();

Script84.field[0] = field85;

field field86 = createNode("field");
field86.name = "coordIndexes";
field86.accessType = "outputOnly";
field86.type = "MFInt32";
Script84.field[1] = field86;

field field87 = createNode("field");
field87.name = "a";
field87.type = "SFFloat";
field87.accessType = "inputOutput";
field87.value = "10";
Script84.field[2] = field87;

field field88 = createNode("field");
field88.name = "b";
field88.type = "SFFloat";
field88.accessType = "inputOutput";
field88.value = "10";
Script84.field[3] = field88;

field field89 = createNode("field");
field89.name = "c";
field89.type = "SFFloat";
field89.accessType = "inputOutput";
field89.value = "2";
Script84.field[4] = field89;

field field90 = createNode("field");
field90.name = "d";
field90.type = "SFFloat";
field90.accessType = "inputOutput";
field90.value = "2";
Script84.field[5] = field90;

field field91 = createNode("field");
field91.name = "pdelta";
field91.type = "SFFloat";
field91.accessType = "inputOutput";
field91.value = "0";
Script84.field[6] = field91;

field field92 = createNode("field");
field92.name = "tdelta";
field92.type = "SFFloat";
field92.accessType = "inputOutput";
field92.value = "0";
Script84.field[7] = field92;


Script84.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}`)
Layer18.children[6] = Script84;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromField = "coordIndexes";
ROUTE93.fromNode = "OrbitScript";
ROUTE93.toField = "set_coordIndex";
ROUTE93.toNode = "Orbit";
Layer18.children[7] = ROUTE93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromField = "coordinates";
ROUTE94.fromNode = "OrbitScript";
ROUTE94.toField = "set_point";
ROUTE94.toNode = "OrbitCoordinates";
Layer18.children[8] = ROUTE94;

LayerSet17.layers = new MFNode();

LayerSet17.layers[0] = Layer18;

LayoutLayer LayoutLayer95 = createNode("LayoutLayer");
LayoutLayer95.pickable = True;
LayoutLayer95.objectType = new MFString(new java.lang.String["ALL"]);
Layout Layout96 = createNode("Layout");
Layout96.align = new MFString(new java.lang.String["LEFT","BOTTOM"]);
Layout96.offset = new MFFloat(new float[-0.2,0.19]);
Layout96.size = new MFFloat(new float[0.4,0.6]);
LayoutLayer95.layout = Layout96;

Viewport Viewport97 = createNode("Viewport");
Viewport97.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer95.viewport = Viewport97;

Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[0,0,-3]);
Shape Shape99 = createNode("Shape");
Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.diffuseColor = new SFColor(new float[0,0,0]);
Material101.transparency = 0.7;
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

Box Box102 = createNode("Box");
Box102.size = new SFVec3f(new float[100,100,0.02]);
Shape99.geometry = Box102;

Transform98.child = new undefined();

Transform98.child[0] = Shape99;

LayoutLayer95.children = new MFNode();

LayoutLayer95.children[0] = Transform98;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "equationTransform";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,0,-20]);
Shape Shape105 = createNode("Shape");
Text Text106 = createNode("Text");
Text106.DEF = "equation";
Text106.string = new MFString(new java.lang.String["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]);
FontStyle FontStyle107 = createNode("FontStyle");
FontStyle107.size = 0.09;
Text106.fontStyle = FontStyle107;

Shape105.geometry = Text106;

Appearance Appearance108 = createNode("Appearance");
Material Material109 = createNode("Material");
Material109.diffuseColor = new SFColor(new float[1,1,0]);
Appearance108.material = Material109;

Shape105.appearance = Appearance108;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

Transform103.children = new MFNode();

Transform103.children[0] = Transform104;

LayoutLayer95.children[1] = Transform103;

ProtoDeclare ProtoDeclare110 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0.7 0"></field>
<field name="transformTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0.1"></field>
<field name="sensorTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;a=&quot;"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="petNames" accessType="inputOutput" type="MFString"></field>
<field name="shaderNode" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><IS><connect nodeField="translation" protoField="sensorTranslation"></connect>
</IS>
<PlaneSensor DEF="protoSensor" description="Grab with mouse to adjust slider" maxPosition="1 0"></PlaneSensor>
<Transform translation="0 0 0"><TouchSensor DEF="protoTS"></TouchSensor>
</Transform>
<Transform><Shape><Text DEF="protoText" string="&quot;a=&quot;"><IS><connect nodeField="string" protoField="textString"></connect>
</IS>
<FontStyle containerField="fontStyle" size="0.23"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
</Transform>
<Script url="&quot;../javascripts/X3DUser.js&quot; &quot;https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js&quot;" DEF="protoValueTransformerScript" directOutput="true" mustEvaluate="true"><field name="protoScale" accessType="inputOutput" type="SFFloat"></field>
<field name="petNames" accessType="inputOutput" type="MFString"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString"></field>
<field name="shader" accessType="inputOutput" type="SFNode"></field>
<field name="newTranslation" accessType="inputOnly" type="SFVec3f" value="1 1 1"></field>
<field name="protoValue_changed" accessType="outputOnly" type="SFFloat" value="1"></field>
<field name="protoText_changed" accessType="outputOnly" type="MFString" value="&quot;1.0&quot;"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="petNames" protoField="petNames"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="shader" protoField="shaderNode"></connect>
</IS>
</Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoText_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoText"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare110.name = "SliderProto";
ProtoInterface ProtoInterface111 = createNode("ProtoInterface");
field field112 = createNode("field");
field112.name = "sliderTranslation";
field112.accessType = "inputOutput";
field112.type = "SFVec3f";
field112.value = "0 0.7 0";
ProtoInterface111.field = new MFNode();

ProtoInterface111.field[0] = field112;

field field113 = createNode("field");
field113.name = "transformTranslation";
field113.accessType = "inputOutput";
field113.type = "SFVec3f";
field113.value = "0 0 0.1";
ProtoInterface111.field[1] = field113;

field field114 = createNode("field");
field114.name = "sensorTranslation";
field114.accessType = "inputOutput";
field114.type = "SFVec3f";
field114.value = "0 0 0";
ProtoInterface111.field[2] = field114;

field field115 = createNode("field");
field115.name = "textString";
field115.accessType = "inputOutput";
field115.type = "MFString";
field115.value = "\"a=\"";
ProtoInterface111.field[3] = field115;

field field116 = createNode("field");
field116.name = "parameterScale";
field116.accessType = "inputOutput";
field116.type = "SFFloat";
field116.value = "30";
ProtoInterface111.field[4] = field116;

field field117 = createNode("field");
field117.name = "parameterName";
field117.accessType = "inputOutput";
field117.type = "SFString";
field117.value = "a";
ProtoInterface111.field[5] = field117;

field field118 = createNode("field");
field118.name = "petNames";
field118.accessType = "inputOutput";
field118.type = "MFString";
ProtoInterface111.field[6] = field118;

field field119 = createNode("field");
field119.name = "shaderNode";
field119.accessType = "inputOutput";
field119.type = "SFNode";
ProtoInterface111.field[7] = field119;

ProtoDeclare110.protoInterface = ProtoInterface111;

ProtoBody ProtoBody120 = createNode("ProtoBody");
Group Group121 = createNode("Group");
Transform Transform122 = createNode("Transform");
Transform122.DEF = "protoSlider";
Transform122.translation = new SFVec3f(new float[0,0.7,0]);
IS IS123 = createNode("IS");
connect connect124 = createNode("connect");
connect124.nodeField = "translation";
connect124.protoField = "sliderTranslation";
IS123.connect = new MFNode();

IS123.connect[0] = connect124;

Transform122.iS = IS123;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "protoTransform";
Transform125.translation = new SFVec3f(new float[0,0,0.1]);
IS IS126 = createNode("IS");
connect connect127 = createNode("connect");
connect127.nodeField = "translation";
connect127.protoField = "sensorTranslation";
IS126.connect = new MFNode();

IS126.connect[0] = connect127;

Transform125.iS = IS126;

PlaneSensor PlaneSensor128 = createNode("PlaneSensor");
PlaneSensor128.DEF = "protoSensor";
PlaneSensor128.description = "Grab with mouse to adjust slider";
PlaneSensor128.maxPosition = new SFVec2f(new float[1,0]);
Transform125.children = new MFNode();

Transform125.children[0] = PlaneSensor128;

Transform Transform129 = createNode("Transform");
Transform129.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor130 = createNode("TouchSensor");
TouchSensor130.DEF = "protoTS";
Transform129.children = new MFNode();

Transform129.children[0] = TouchSensor130;

Transform125.children[1] = Transform129;

Transform Transform131 = createNode("Transform");
Shape Shape132 = createNode("Shape");
Text Text133 = createNode("Text");
Text133.DEF = "protoText";
Text133.string = new MFString(new java.lang.String["a="]);
IS IS134 = createNode("IS");
connect connect135 = createNode("connect");
connect135.nodeField = "string";
connect135.protoField = "textString";
IS134.connect = new MFNode();

IS134.connect[0] = connect135;

Text133.iS = IS134;

FontStyle FontStyle136 = createNode("FontStyle");
FontStyle136.size = 0.23;
Text133.fontStyle = FontStyle136;

Shape132.geometry = Text133;

Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Appearance137.material = Material138;

Shape132.appearance = Appearance137;

Transform131.child = new undefined();

Transform131.child[0] = Shape132;

Transform125.children[2] = Transform131;

Transform122.children = new MFNode();

Transform122.children[0] = Transform125;

Group121.children = new MFNode();

Group121.children[0] = Transform122;

Script Script139 = createNode("Script");
Script139.url = new MFString(new java.lang.String["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"]);
Script139.DEF = "protoValueTransformerScript";
Script139.directOutput = True;
Script139.mustEvaluate = True;
field field140 = createNode("field");
field140.name = "protoScale";
field140.accessType = "inputOutput";
field140.type = "SFFloat";
Script139.field = new MFNode();

Script139.field[0] = field140;

field field141 = createNode("field");
field141.name = "petNames";
field141.accessType = "inputOutput";
field141.type = "MFString";
Script139.field[1] = field141;

field field142 = createNode("field");
field142.name = "protoParameterName";
field142.accessType = "inputOutput";
field142.type = "SFString";
Script139.field[2] = field142;

field field143 = createNode("field");
field143.name = "shader";
field143.accessType = "inputOutput";
field143.type = "SFNode";
Script139.field[3] = field143;

field field144 = createNode("field");
field144.name = "newTranslation";
field144.accessType = "inputOnly";
field144.type = "SFVec3f";
field144.value = "1 1 1";
Script139.field[4] = field144;

field field145 = createNode("field");
field145.name = "protoValue_changed";
field145.accessType = "outputOnly";
field145.type = "SFFloat";
field145.value = "1";
Script139.field[5] = field145;

field field146 = createNode("field");
field146.name = "protoText_changed";
field146.accessType = "outputOnly";
field146.type = "MFString";
field146.value = "\"1.0\"";
Script139.field[6] = field146;

IS IS147 = createNode("IS");
connect connect148 = createNode("connect");
connect148.nodeField = "protoScale";
connect148.protoField = "parameterScale";
IS147.connect = new MFNode();

IS147.connect[0] = connect148;

connect connect149 = createNode("connect");
connect149.nodeField = "petNames";
connect149.protoField = "petNames";
IS147.connect[1] = connect149;

connect connect150 = createNode("connect");
connect150.nodeField = "protoParameterName";
connect150.protoField = "parameterName";
IS147.connect[2] = connect150;

connect connect151 = createNode("connect");
connect151.nodeField = "shader";
connect151.protoField = "shaderNode";
IS147.connect[3] = connect151;

Script139.iS = IS147;

Group121.children[1] = Script139;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromField = "translation_changed";
ROUTE152.fromNode = "protoSensor";
ROUTE152.toField = "set_translation";
ROUTE152.toNode = "protoTransform";
Group121.children[2] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromField = "translation_changed";
ROUTE153.fromNode = "protoSensor";
ROUTE153.toField = "newTranslation";
ROUTE153.toNode = "protoValueTransformerScript";
Group121.children[3] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromField = "protoText_changed";
ROUTE154.fromNode = "protoValueTransformerScript";
ROUTE154.toField = "string";
ROUTE154.toNode = "protoText";
Group121.children[4] = ROUTE154;

ProtoBody120.children = new MFNode();

ProtoBody120.children[0] = Group121;

ProtoDeclare110.protoBody = ProtoBody120;

LayoutLayer95.children[2] = ProtoDeclare110;

ProtoInstance ProtoInstance155 = createNode("ProtoInstance");
ProtoInstance155.name = "SliderProto";
ProtoInstance155.DEF = "aPI";
fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "sliderTranslation";
fieldValue156.value = "0 0.7 0";
ProtoInstance155.fieldValue = new MFNode();

ProtoInstance155.fieldValue[0] = fieldValue156;

fieldValue fieldValue157 = createNode("fieldValue");
fieldValue157.name = "transformTranslation";
fieldValue157.value = "0 0 0.1";
ProtoInstance155.fieldValue[1] = fieldValue157;

fieldValue fieldValue158 = createNode("fieldValue");
fieldValue158.name = "sensorTranslation";
fieldValue158.value = "0 0 0";
ProtoInstance155.fieldValue[2] = fieldValue158;

fieldValue fieldValue159 = createNode("fieldValue");
fieldValue159.name = "textString";
fieldValue159.value = "\"a=\"";
ProtoInstance155.fieldValue[3] = fieldValue159;

fieldValue fieldValue160 = createNode("fieldValue");
fieldValue160.name = "parameterScale";
fieldValue160.value = "30";
ProtoInstance155.fieldValue[4] = fieldValue160;

fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "parameterName";
fieldValue161.value = "a";
ProtoInstance155.fieldValue[5] = fieldValue161;

fieldValue fieldValue162 = createNode("fieldValue");
fieldValue162.name = "petNames";
fieldValue162.value = "\"yottzumm\" \"group1-petname\"";
ProtoInstance155.fieldValue[6] = fieldValue162;

fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "shaderNode";
ComposedShader ComposedShader164 = createNode("ComposedShader");
ComposedShader164.USE = "x_iteShader";
fieldValue163.children = new MFNode();

fieldValue163.children[0] = ComposedShader164;

ProtoInstance155.fieldValue[7] = fieldValue163;

LayoutLayer95.children[3] = ProtoInstance155;

ProtoInstance ProtoInstance165 = createNode("ProtoInstance");
ProtoInstance165.name = "SliderProto";
ProtoInstance165.DEF = "bPI";
fieldValue fieldValue166 = createNode("fieldValue");
fieldValue166.name = "sliderTranslation";
fieldValue166.value = "0 0.4 0";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "transformTranslation";
fieldValue167.value = "0 0 0.1";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue fieldValue168 = createNode("fieldValue");
fieldValue168.name = "sensorTranslation";
fieldValue168.value = "0 0 0";
ProtoInstance165.fieldValue[2] = fieldValue168;

fieldValue fieldValue169 = createNode("fieldValue");
fieldValue169.name = "textString";
fieldValue169.value = "\"b=\"";
ProtoInstance165.fieldValue[3] = fieldValue169;

fieldValue fieldValue170 = createNode("fieldValue");
fieldValue170.name = "parameterScale";
fieldValue170.value = "30";
ProtoInstance165.fieldValue[4] = fieldValue170;

fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "parameterName";
fieldValue171.value = "b";
ProtoInstance165.fieldValue[5] = fieldValue171;

fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "petNames";
fieldValue172.value = "\"yottzumm\" \"group1-petname\"";
ProtoInstance165.fieldValue[6] = fieldValue172;

fieldValue fieldValue173 = createNode("fieldValue");
fieldValue173.name = "shaderNode";
ComposedShader ComposedShader174 = createNode("ComposedShader");
ComposedShader174.USE = "x_iteShader";
fieldValue173.children = new MFNode();

fieldValue173.children[0] = ComposedShader174;

ProtoInstance165.fieldValue[7] = fieldValue173;

LayoutLayer95.children[4] = ProtoInstance165;

ProtoInstance ProtoInstance175 = createNode("ProtoInstance");
ProtoInstance175.name = "SliderProto";
ProtoInstance175.DEF = "cPI";
fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "sliderTranslation";
fieldValue176.value = "0 0.1 0";
ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "transformTranslation";
fieldValue177.value = "0 0 0.1";
ProtoInstance175.fieldValue[1] = fieldValue177;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "sensorTranslation";
fieldValue178.value = "0 0 0";
ProtoInstance175.fieldValue[2] = fieldValue178;

fieldValue fieldValue179 = createNode("fieldValue");
fieldValue179.name = "textString";
fieldValue179.value = "\"c=\"";
ProtoInstance175.fieldValue[3] = fieldValue179;

fieldValue fieldValue180 = createNode("fieldValue");
fieldValue180.name = "parameterScale";
fieldValue180.value = "20";
ProtoInstance175.fieldValue[4] = fieldValue180;

fieldValue fieldValue181 = createNode("fieldValue");
fieldValue181.name = "parameterName";
fieldValue181.value = "c";
ProtoInstance175.fieldValue[5] = fieldValue181;

fieldValue fieldValue182 = createNode("fieldValue");
fieldValue182.name = "petNames";
fieldValue182.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\"";
ProtoInstance175.fieldValue[6] = fieldValue182;

fieldValue fieldValue183 = createNode("fieldValue");
fieldValue183.name = "shaderNode";
ComposedShader ComposedShader184 = createNode("ComposedShader");
ComposedShader184.USE = "x_iteShader";
fieldValue183.children = new MFNode();

fieldValue183.children[0] = ComposedShader184;

ProtoInstance175.fieldValue[7] = fieldValue183;

LayoutLayer95.children[5] = ProtoInstance175;

ProtoInstance ProtoInstance185 = createNode("ProtoInstance");
ProtoInstance185.name = "SliderProto";
ProtoInstance185.DEF = "dPI";
fieldValue fieldValue186 = createNode("fieldValue");
fieldValue186.name = "sliderTranslation";
fieldValue186.value = "0 -0.2 0";
ProtoInstance185.fieldValue = new MFNode();

ProtoInstance185.fieldValue[0] = fieldValue186;

fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "transformTranslation";
fieldValue187.value = "0 0 0.1";
ProtoInstance185.fieldValue[1] = fieldValue187;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "sensorTranslation";
fieldValue188.value = "0 0 0";
ProtoInstance185.fieldValue[2] = fieldValue188;

fieldValue fieldValue189 = createNode("fieldValue");
fieldValue189.name = "textString";
fieldValue189.value = "\"d=\"";
ProtoInstance185.fieldValue[3] = fieldValue189;

fieldValue fieldValue190 = createNode("fieldValue");
fieldValue190.name = "parameterScale";
fieldValue190.value = "20";
ProtoInstance185.fieldValue[4] = fieldValue190;

fieldValue fieldValue191 = createNode("fieldValue");
fieldValue191.name = "parameterName";
fieldValue191.value = "d";
ProtoInstance185.fieldValue[5] = fieldValue191;

fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "petNames";
fieldValue192.value = "\"yottzumm\" \"yottzumm2\" \"group1-petname\"";
ProtoInstance185.fieldValue[6] = fieldValue192;

fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "shaderNode";
ComposedShader ComposedShader194 = createNode("ComposedShader");
ComposedShader194.USE = "x_iteShader";
fieldValue193.children = new MFNode();

fieldValue193.children[0] = ComposedShader194;

ProtoInstance185.fieldValue[7] = fieldValue193;

LayoutLayer95.children[6] = ProtoInstance185;

ProtoInstance ProtoInstance195 = createNode("ProtoInstance");
ProtoInstance195.name = "SliderProto";
ProtoInstance195.DEF = "tdeltaPI";
fieldValue fieldValue196 = createNode("fieldValue");
fieldValue196.name = "sliderTranslation";
fieldValue196.value = "0 -0.5 0";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "transformTranslation";
fieldValue197.value = "0 0 0.1";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue fieldValue198 = createNode("fieldValue");
fieldValue198.name = "sensorTranslation";
fieldValue198.value = "0 0 0";
ProtoInstance195.fieldValue[2] = fieldValue198;

fieldValue fieldValue199 = createNode("fieldValue");
fieldValue199.name = "textString";
fieldValue199.value = "\"tdelta=\"";
ProtoInstance195.fieldValue[3] = fieldValue199;

fieldValue fieldValue200 = createNode("fieldValue");
fieldValue200.name = "parameterScale";
fieldValue200.value = "6.28";
ProtoInstance195.fieldValue[4] = fieldValue200;

fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "parameterName";
fieldValue201.value = "tdelta";
ProtoInstance195.fieldValue[5] = fieldValue201;

fieldValue fieldValue202 = createNode("fieldValue");
fieldValue202.name = "petNames";
fieldValue202.value = "\"yottzumm2\" \"group1-petname\"";
ProtoInstance195.fieldValue[6] = fieldValue202;

fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "shaderNode";
ComposedShader ComposedShader204 = createNode("ComposedShader");
ComposedShader204.USE = "x_iteShader";
fieldValue203.children = new MFNode();

fieldValue203.children[0] = ComposedShader204;

ProtoInstance195.fieldValue[7] = fieldValue203;

LayoutLayer95.children[7] = ProtoInstance195;

ProtoInstance ProtoInstance205 = createNode("ProtoInstance");
ProtoInstance205.name = "SliderProto";
ProtoInstance205.DEF = "pdeltaPI";
fieldValue fieldValue206 = createNode("fieldValue");
fieldValue206.name = "sliderTranslation";
fieldValue206.value = "0 -0.8 0";
ProtoInstance205.fieldValue = new MFNode();

ProtoInstance205.fieldValue[0] = fieldValue206;

fieldValue fieldValue207 = createNode("fieldValue");
fieldValue207.name = "transformTranslation";
fieldValue207.value = "0 0 0.1";
ProtoInstance205.fieldValue[1] = fieldValue207;

fieldValue fieldValue208 = createNode("fieldValue");
fieldValue208.name = "sensorTranslation";
fieldValue208.value = "0 0 0";
ProtoInstance205.fieldValue[2] = fieldValue208;

fieldValue fieldValue209 = createNode("fieldValue");
fieldValue209.name = "textString";
fieldValue209.value = "\"pdelta=\"";
ProtoInstance205.fieldValue[3] = fieldValue209;

fieldValue fieldValue210 = createNode("fieldValue");
fieldValue210.name = "parameterScale";
fieldValue210.value = "6.28";
ProtoInstance205.fieldValue[4] = fieldValue210;

fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "parameterName";
fieldValue211.value = "pdelta";
ProtoInstance205.fieldValue[5] = fieldValue211;

fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "petNames";
fieldValue212.value = "\"yottzumm2\" \"group1-petname\"";
ProtoInstance205.fieldValue[6] = fieldValue212;

fieldValue fieldValue213 = createNode("fieldValue");
fieldValue213.name = "shaderNode";
ComposedShader ComposedShader214 = createNode("ComposedShader");
ComposedShader214.USE = "x_iteShader";
fieldValue213.children = new MFNode();

fieldValue213.children[0] = ComposedShader214;

ProtoInstance205.fieldValue[7] = fieldValue213;

LayoutLayer95.children[8] = ProtoInstance205;

LayerSet17.layers[1] = LayoutLayer95;

Layer Layer215 = createNode("Layer");
Layer215.pickable = True;
Layer215.objectType = new MFString(new java.lang.String["ALL"]);
Viewpoint Viewpoint216 = createNode("Viewpoint");
Viewpoint216.description = "My Humanoids";
Viewpoint216.fieldOfView = 1.570796;
Viewpoint216.position = new SFVec3f(new float[0,1.75,80]);
Layer215.children = new MFNode();

Layer215.children[0] = Viewpoint216;

Script Script217 = createNode("Script");
Script217.url = new MFString(new java.lang.String["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"]);
Script217.DEF = "HumanoidScript";
Script217.directOutput = True;
Script217.mustEvaluate = True;
Layer215.children[1] = Script217;

Group Group218 = createNode("Group");
Group218.DEF = "humanoidGroup";
Group Group219 = createNode("Group");
Group218.children = new MFNode();

Group218.children[0] = Group219;

Layer215.children[2] = Group218;

LayerSet17.layers[2] = Layer215;

layerSet = new undefined();

layerSet[0] = LayerSet17;

}
