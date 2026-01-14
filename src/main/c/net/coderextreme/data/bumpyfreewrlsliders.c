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

component component11 = createNode("component");
component11.name = "DIS";
component11.level = 2;
head1.component[9] = component11;

meta meta12 = createNode("meta");
meta12.name = "title";
meta12.content = "bumpyfreewrlsliders.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "description";
meta13.content = "Bumpy Orbitals with Sliders for FreeWRL";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "creator";
meta14.content = "Doug Sanden, Christoph Valentin, John Carlson";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "license.html";
head1.meta[14] = meta16;

head = head1;

//LayerSet with two layers, navigation happens in layer 1
LayerSet LayerSet18 = createNode("LayerSet");
LayerSet18.activeLayer = 1;
LayerSet18.order = new MFInt32(new int[1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer Layer19 = createNode("Layer");
Layer19.pickable = True;
Layer19.objectType = new MFString(new java.lang.String["ALL"]);
//basic nodes, which might be present in any scene
NavigationInfo NavigationInfo20 = createNode("NavigationInfo");
NavigationInfo20.type = new MFString(new java.lang.String["EXAMINE","FLY","LOOKAT","ANY"]);
NavigationInfo20.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
Layer19.children = new MFNode();

Layer19.children[0] = NavigationInfo20;

DirectionalLight DirectionalLight21 = createNode("DirectionalLight");
DirectionalLight21.ambientIntensity = 0.2;
DirectionalLight21.direction = new SFVec3f(new float[0,-1,0]);
Layer19.children[1] = DirectionalLight21;

DirectionalLight DirectionalLight22 = createNode("DirectionalLight");
DirectionalLight22.ambientIntensity = 0.2;
DirectionalLight22.direction = new SFVec3f(new float[-1,-0.1,-1]);
Layer19.children[2] = DirectionalLight22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.description = "My Overview";
Viewpoint23.fieldOfView = 1.570796;
Viewpoint23.position = new SFVec3f(new float[0,1.75,60]);
Layer19.children[3] = Viewpoint23;

//this group contains the red/green/blue 3D crosshair
Group Group24 = createNode("Group");
//Arrow X
Transform Transform25 = createNode("Transform");
Transform25.translation = new SFVec3f(new float[25,0,0]);
Transform25.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape26 = createNode("Shape");
Cylinder Cylinder27 = createNode("Cylinder");
Cylinder27.DEF = "Shaft";
Cylinder27.radius = 0.35;
Cylinder27.height = 50;
Shape26.geometry = Cylinder27;

Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.DEF = "RED";
Material29.diffuseColor = new SFColor(new float[1,0,0]);
Material29.emissiveColor = new SFColor(new float[1,0,0]);
Appearance28.material = Material29;

Shape26.appearance = Appearance28;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Group24.children = new MFNode();

Group24.children[0] = Transform25;

Transform Transform30 = createNode("Transform");
Transform30.translation = new SFVec3f(new float[50,0,0]);
Transform30.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape31 = createNode("Shape");
Cone Cone32 = createNode("Cone");
Cone32.DEF = "Tip";
Cone32.bottomRadius = 0.8;
Cone32.height = 3;
Shape31.geometry = Cone32;

Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.USE = "RED";
Appearance33.material = Material34;

Shape31.appearance = Appearance33;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Group24.children[1] = Transform30;

//Arrow Y
Transform Transform35 = createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,25,0]);
Shape Shape36 = createNode("Shape");
Cylinder Cylinder37 = createNode("Cylinder");
Cylinder37.USE = "Shaft";
Shape36.geometry = Cylinder37;

Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.DEF = "GREEN";
Material39.diffuseColor = new SFColor(new float[0,1,0]);
Material39.emissiveColor = new SFColor(new float[0,1,0]);
Appearance38.material = Material39;

Shape36.appearance = Appearance38;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Group24.children[2] = Transform35;

Transform Transform40 = createNode("Transform");
Transform40.translation = new SFVec3f(new float[0,50,0]);
Shape Shape41 = createNode("Shape");
Cone Cone42 = createNode("Cone");
Cone42.USE = "Tip";
Shape41.geometry = Cone42;

Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.USE = "GREEN";
Appearance43.material = Material44;

Shape41.appearance = Appearance43;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

Group24.children[3] = Transform40;

//Arrow Z
Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,0,25]);
Transform45.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape46 = createNode("Shape");
Cylinder Cylinder47 = createNode("Cylinder");
Cylinder47.USE = "Shaft";
Shape46.geometry = Cylinder47;

Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.DEF = "BLUE";
Material49.diffuseColor = new SFColor(new float[0,0,1]);
Material49.emissiveColor = new SFColor(new float[0,0,1]);
Appearance48.material = Material49;

Shape46.appearance = Appearance48;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Group24.children[4] = Transform45;

Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,0,50]);
Transform50.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape51 = createNode("Shape");
Cone Cone52 = createNode("Cone");
Cone52.USE = "Tip";
Shape51.geometry = Cone52;

Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.USE = "BLUE";
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Group24.children[5] = Transform50;

Layer19.children[4] = Group24;

//the model that is being reviewed by the users of this scene
Transform Transform55 = createNode("Transform");
Transform55.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background56 = createNode("Background");
Background56.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background56.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background56.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background56.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background56.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background56.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Transform55.children = new MFNode();

Transform55.children[0] = Background56;

Transform Transform57 = createNode("Transform");
Shape Shape58 = createNode("Shape");
Sphere Sphere59 = createNode("Sphere");
Sphere59.radius = 5;
Shape58.geometry = Sphere59;

//<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
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
ComposedShader69.DEF = "freewrlShader";
ComposedShader69.language = "GLSL";
field field70 = createNode("field");
field70.name = "fw_textureCoordGenType";
field70.accessType = "inputOutput";
field70.type = "SFInt32";
field70.value = "0";
ComposedShader69.field = new MFNode();

ComposedShader69.field[0] = field70;

field field71 = createNode("field");
field71.name = "chromaticDispertion";
field71.accessType = "initializeOnly";
field71.type = "SFVec3f";
field71.value = "0.98 1 1.033";
ComposedShader69.field[1] = field71;

field field72 = createNode("field");
field72.name = "bias";
field72.type = "SFFloat";
field72.accessType = "inputOutput";
field72.value = "0.5";
ComposedShader69.field[2] = field72;

field field73 = createNode("field");
field73.name = "scale";
field73.type = "SFFloat";
field73.accessType = "inputOutput";
field73.value = "0.5";
ComposedShader69.field[3] = field73;

field field74 = createNode("field");
field74.name = "power";
field74.type = "SFFloat";
field74.accessType = "inputOutput";
field74.value = "2";
ComposedShader69.field[4] = field74;

field field75 = createNode("field");
field75.name = "a";
field75.type = "SFFloat";
field75.accessType = "inputOutput";
field75.value = "15";
ComposedShader69.field[5] = field75;

field field76 = createNode("field");
field76.name = "b";
field76.type = "SFFloat";
field76.accessType = "inputOutput";
field76.value = "5";
ComposedShader69.field[6] = field76;

field field77 = createNode("field");
field77.name = "c";
field77.type = "SFFloat";
field77.accessType = "inputOutput";
field77.value = "20";
ComposedShader69.field[7] = field77;

field field78 = createNode("field");
field78.name = "d";
field78.type = "SFFloat";
field78.accessType = "inputOutput";
field78.value = "20";
ComposedShader69.field[8] = field78;

field field79 = createNode("field");
field79.name = "tdelta";
field79.type = "SFFloat";
field79.accessType = "inputOutput";
field79.value = "0";
ComposedShader69.field[9] = field79;

field field80 = createNode("field");
field80.name = "pdelta";
field80.type = "SFFloat";
field80.accessType = "inputOutput";
field80.value = "0";
ComposedShader69.field[10] = field80;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart ShaderPart81 = createNode("ShaderPart");
ShaderPart81.type = "VERTEX";
IS IS82 = createNode("IS");
connect connect83 = createNode("connect");
connect83.nodeField = "url";
connect83.protoField = "vertex";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

ShaderPart81.iS = IS82;

ComposedShader69.parts[11] = ShaderPart81;

ShaderPart ShaderPart84 = createNode("ShaderPart");
ShaderPart84.type = "FRAGMENT";
IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "url";
connect86.protoField = "fragment";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

ShaderPart84.iS = IS85;

ComposedShader69.parts[12] = ShaderPart84;

Appearance60.shaders = new MFNode();

Appearance60.shaders[0] = ComposedShader69;

//<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\"> <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart type='VERTEX'> <IS> <connect nodeField=\"url\" protoField=\"vertex\"/> </IS> </ShaderPart> <ShaderPart type='FRAGMENT'> <IS> <connect nodeField=\"url\" protoField=\"fragment\"/> </IS> </ShaderPart> </ComposedShader>
Shape58.appearance = Appearance60;

Transform57.child = new undefined();

Transform57.child[0] = Shape58;

Transform55.children[1] = Transform57;

Layer19.children[5] = Transform55;

//<Script DEF=\"OrbitScript\"> <field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/> <field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script> <ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/> <ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>
//DIS multiuser facilities
DISEntityManager DISEntityManager87 = createNode("DISEntityManager");
DISEntityManager87.DEF = "EntityManager";
DISEntityTypeMapping DISEntityTypeMapping88 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping88.category = 77;
DISEntityTypeMapping88.specific = 1;
DISEntityTypeMapping88.url = new MFString(new java.lang.String["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]);
DISEntityManager87.children = new MFNode();

DISEntityManager87.children[0] = DISEntityTypeMapping88;

DISEntityTypeMapping DISEntityTypeMapping89 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping89.category = 77;
DISEntityTypeMapping89.specific = 2;
DISEntityTypeMapping89.url = new MFString(new java.lang.String["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]);
DISEntityManager87.children[1] = DISEntityTypeMapping89;

DISEntityTypeMapping DISEntityTypeMapping90 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping90.category = 77;
DISEntityTypeMapping90.specific = 3;
DISEntityTypeMapping90.url = new MFString(new java.lang.String["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]);
DISEntityManager87.children[2] = DISEntityTypeMapping90;

DISEntityTypeMapping DISEntityTypeMapping91 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping91.category = 77;
DISEntityTypeMapping91.specific = 4;
DISEntityTypeMapping91.url = new MFString(new java.lang.String["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]);
DISEntityManager87.children[3] = DISEntityTypeMapping91;

Layer19.children[6] = DISEntityManager87;

Collision Collision92 = createNode("Collision");
Group Group93 = createNode("Group");
Group93.DEF = "AvatarHolder";
Collision92.proxy = Group93;

Layer19.children[7] = Collision92;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromField = "addedEntities";
ROUTE94.fromNode = "EntityManager";
ROUTE94.toField = "addChildren";
ROUTE94.toNode = "AvatarHolder";
Layer19.children[8] = ROUTE94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromField = "removedEntities";
ROUTE95.fromNode = "EntityManager";
ROUTE95.toField = "removeChildren";
ROUTE95.toNode = "AvatarHolder";
Layer19.children[9] = ROUTE95;

LayerSet18.layers = new MFNode();

LayerSet18.layers[0] = Layer19;

LayoutLayer LayoutLayer96 = createNode("LayoutLayer");
LayoutLayer96.pickable = True;
LayoutLayer96.objectType = new MFString(new java.lang.String["ALL"]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform Transform97 = createNode("Transform");
Transform97.translation = new SFVec3f(new float[0,0,-3]);
Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Material Material100 = createNode("Material");
Material100.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material100.transparency = 1;
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

Box Box101 = createNode("Box");
Box101.size = new SFVec3f(new float[100,100,0.02]);
Shape98.geometry = Box101;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

LayoutLayer96.children = new MFNode();

LayoutLayer96.children[0] = Transform97;

Transform Transform102 = createNode("Transform");
Transform102.DEF = "equationTransform";
Transform Transform103 = createNode("Transform");
Transform103.translation = new SFVec3f(new float[0,0,-20]);
Shape Shape104 = createNode("Shape");
Text Text105 = createNode("Text");
Text105.DEF = "equation";
Text105.string = new MFString(new java.lang.String["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]);
FontStyle FontStyle106 = createNode("FontStyle");
FontStyle106.size = 0.09;
Text105.fontStyle = FontStyle106;

Shape104.geometry = Text105;

Appearance Appearance107 = createNode("Appearance");
Material Material108 = createNode("Material");
Material108.diffuseColor = new SFColor(new float[0,1,1]);
Appearance107.material = Material108;

Shape104.appearance = Appearance107;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

Transform102.children = new MFNode();

Transform102.children[0] = Transform103;

LayoutLayer96.children[1] = Transform102;

ProtoDeclare ProtoDeclare109 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0.7 0"></field>
<field name="transformTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0.1"></field>
<field name="sensorTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="numberTranslation" accessType="inputOutput" type="SFVec3f" value="0.2 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;a=&quot;"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="shaderNode" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><IS><connect nodeField="translation" protoField="sensorTranslation"></connect>
</IS>
<PlaneSensor DEF="protoSensor" maxPosition="2 0"></PlaneSensor>
<Transform translation="0 0 0"><TouchSensor DEF="protoTS"></TouchSensor>
</Transform>
<Transform><Shape><Text DEF="protoText" string="&quot;a=&quot;"><IS><connect nodeField="string" protoField="textString"></connect>
</IS>
<FontStyle containerField="fontStyle" size="0.2"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
<Transform><IS><connect nodeField="translation" protoField="numberTranslation"></connect>
</IS>
<Shape><Text DEF="protoNumber" string="&quot;0&quot;"><FontStyle containerField="fontStyle" size="0.2"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
</Transform>
</Transform>
<Script DEF="protoValueTransformerScript" directOutput="true" mustEvaluate="true"><field name="protoScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="shader" accessType="inputOutput" type="SFNode"></field>
<field name="newTranslation" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="protoValue_changed" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="protoNumber_changed" accessType="inputOutput" type="MFString" value="&quot;0.0&quot;"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString" value="a"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="shader" protoField="shaderNode"></connect>
</IS>
<![CDATA[ecmascript:
	const newTranslation = function(Value) {
	    protoValue_changed = Value[0] * protoScale;
	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());
	    Browser.println("In newTranslation:");
	    Browser.println(shader);
	    Browser.println(Value[0]);
	    Browser.println(Value.x);
	    Browser.println(protoScale);
	    Browser.println(Value[0] * protoScale);
	    Browser.println(protoParameterName);
					// shader[protoParameterName] = Value[0] * protoScale;
	};]]></Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoNumber_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoNumber"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare109.name = "SliderProto";
ProtoInterface ProtoInterface110 = createNode("ProtoInterface");
field field111 = createNode("field");
field111.name = "sliderTranslation";
field111.accessType = "inputOutput";
field111.type = "SFVec3f";
field111.value = "0 0.7 0";
ProtoInterface110.field = new MFNode();

ProtoInterface110.field[0] = field111;

field field112 = createNode("field");
field112.name = "transformTranslation";
field112.accessType = "inputOutput";
field112.type = "SFVec3f";
field112.value = "0 0 0.1";
ProtoInterface110.field[1] = field112;

field field113 = createNode("field");
field113.name = "sensorTranslation";
field113.accessType = "inputOutput";
field113.type = "SFVec3f";
field113.value = "0 0 0";
ProtoInterface110.field[2] = field113;

field field114 = createNode("field");
field114.name = "numberTranslation";
field114.accessType = "inputOutput";
field114.type = "SFVec3f";
field114.value = "0.2 0 0";
ProtoInterface110.field[3] = field114;

field field115 = createNode("field");
field115.name = "textString";
field115.accessType = "inputOutput";
field115.type = "MFString";
field115.value = "\"a=\"";
ProtoInterface110.field[4] = field115;

field field116 = createNode("field");
field116.name = "parameterName";
field116.accessType = "inputOutput";
field116.type = "SFString";
field116.value = "a";
ProtoInterface110.field[5] = field116;

field field117 = createNode("field");
field117.name = "parameterScale";
field117.accessType = "inputOutput";
field117.type = "SFFloat";
field117.value = "30";
ProtoInterface110.field[6] = field117;

field field118 = createNode("field");
field118.name = "shaderNode";
field118.accessType = "inputOutput";
field118.type = "SFNode";
ProtoInterface110.field[7] = field118;

ProtoDeclare109.protoInterface = ProtoInterface110;

ProtoBody ProtoBody119 = createNode("ProtoBody");
Group Group120 = createNode("Group");
Transform Transform121 = createNode("Transform");
Transform121.DEF = "protoSlider";
Transform121.translation = new SFVec3f(new float[0,0.7,0]);
IS IS122 = createNode("IS");
connect connect123 = createNode("connect");
connect123.nodeField = "translation";
connect123.protoField = "sliderTranslation";
IS122.connect = new MFNode();

IS122.connect[0] = connect123;

Transform121.iS = IS122;

Transform Transform124 = createNode("Transform");
Transform124.DEF = "protoTransform";
Transform124.translation = new SFVec3f(new float[0,0,0.1]);
IS IS125 = createNode("IS");
connect connect126 = createNode("connect");
connect126.nodeField = "translation";
connect126.protoField = "sensorTranslation";
IS125.connect = new MFNode();

IS125.connect[0] = connect126;

Transform124.iS = IS125;

PlaneSensor PlaneSensor127 = createNode("PlaneSensor");
PlaneSensor127.DEF = "protoSensor";
PlaneSensor127.maxPosition = new SFVec2f(new float[2,0]);
Transform124.children = new MFNode();

Transform124.children[0] = PlaneSensor127;

Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.DEF = "protoTS";
Transform128.children = new MFNode();

Transform128.children[0] = TouchSensor129;

Transform124.children[1] = Transform128;

Transform Transform130 = createNode("Transform");
Shape Shape131 = createNode("Shape");
Text Text132 = createNode("Text");
Text132.DEF = "protoText";
Text132.string = new MFString(new java.lang.String["a="]);
IS IS133 = createNode("IS");
connect connect134 = createNode("connect");
connect134.nodeField = "string";
connect134.protoField = "textString";
IS133.connect = new MFNode();

IS133.connect[0] = connect134;

Text132.iS = IS133;

FontStyle FontStyle135 = createNode("FontStyle");
FontStyle135.size = 0.2;
Text132.fontStyle = FontStyle135;

Shape131.geometry = Text132;

Appearance Appearance136 = createNode("Appearance");
Material Material137 = createNode("Material");
Material137.diffuseColor = new SFColor(new float[1,1,1]);
Appearance136.material = Material137;

Shape131.appearance = Appearance136;

Transform130.child = new undefined();

Transform130.child[0] = Shape131;

Transform Transform138 = createNode("Transform");
IS IS139 = createNode("IS");
connect connect140 = createNode("connect");
connect140.nodeField = "translation";
connect140.protoField = "numberTranslation";
IS139.connect = new MFNode();

IS139.connect[0] = connect140;

Transform138.iS = IS139;

Shape Shape141 = createNode("Shape");
Text Text142 = createNode("Text");
Text142.DEF = "protoNumber";
Text142.string = new MFString(new java.lang.String["0"]);
FontStyle FontStyle143 = createNode("FontStyle");
FontStyle143.size = 0.2;
Text142.fontStyle = FontStyle143;

Shape141.geometry = Text142;

Appearance Appearance144 = createNode("Appearance");
Material Material145 = createNode("Material");
Material145.diffuseColor = new SFColor(new float[1,1,1]);
Appearance144.material = Material145;

Shape141.appearance = Appearance144;

Transform138.child = new undefined();

Transform138.child[0] = Shape141;

Transform130.children[1] = Transform138;

Transform124.children[2] = Transform130;

Transform121.children = new MFNode();

Transform121.children[0] = Transform124;

Group120.children = new MFNode();

Group120.children[0] = Transform121;

Script Script146 = createNode("Script");
Script146.DEF = "protoValueTransformerScript";
Script146.directOutput = True;
Script146.mustEvaluate = True;
field field147 = createNode("field");
field147.name = "protoScale";
field147.accessType = "inputOutput";
field147.type = "SFFloat";
field147.value = "30";
Script146.field = new MFNode();

Script146.field[0] = field147;

field field148 = createNode("field");
field148.name = "shader";
field148.accessType = "inputOutput";
field148.type = "SFNode";
Script146.field[1] = field148;

field field149 = createNode("field");
field149.name = "newTranslation";
field149.accessType = "inputOutput";
field149.type = "SFVec3f";
field149.value = "1 1 1";
Script146.field[2] = field149;

field field150 = createNode("field");
field150.name = "protoValue_changed";
field150.accessType = "inputOutput";
field150.type = "SFFloat";
field150.value = "1";
Script146.field[3] = field150;

field field151 = createNode("field");
field151.name = "protoNumber_changed";
field151.accessType = "inputOutput";
field151.type = "MFString";
field151.value = "\"0.0\"";
Script146.field[4] = field151;

field field152 = createNode("field");
field152.name = "protoParameterName";
field152.accessType = "inputOutput";
field152.type = "SFString";
field152.value = "a";
Script146.field[5] = field152;

IS IS153 = createNode("IS");
connect connect154 = createNode("connect");
connect154.nodeField = "protoScale";
connect154.protoField = "parameterScale";
IS153.connect = new MFNode();

IS153.connect[0] = connect154;

connect connect155 = createNode("connect");
connect155.nodeField = "protoParameterName";
connect155.protoField = "parameterName";
IS153.connect[1] = connect155;

connect connect156 = createNode("connect");
connect156.nodeField = "shader";
connect156.protoField = "shaderNode";
IS153.connect[2] = connect156;

Script146.iS = IS153;


Script146.setSourceCode(`ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};`)
Group120.children[1] = Script146;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromField = "translation_changed";
ROUTE157.fromNode = "protoSensor";
ROUTE157.toField = "set_translation";
ROUTE157.toNode = "protoTransform";
Group120.children[2] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromField = "translation_changed";
ROUTE158.fromNode = "protoSensor";
ROUTE158.toField = "newTranslation";
ROUTE158.toNode = "protoValueTransformerScript";
Group120.children[3] = ROUTE158;

ROUTE ROUTE159 = createNode("ROUTE");
ROUTE159.fromField = "protoNumber_changed";
ROUTE159.fromNode = "protoValueTransformerScript";
ROUTE159.toField = "string";
ROUTE159.toNode = "protoNumber";
Group120.children[4] = ROUTE159;

ProtoBody119.children = new MFNode();

ProtoBody119.children[0] = Group120;

ProtoDeclare109.protoBody = ProtoBody119;

LayoutLayer96.children[2] = ProtoDeclare109;

ProtoInstance ProtoInstance160 = createNode("ProtoInstance");
ProtoInstance160.name = "SliderProto";
ProtoInstance160.DEF = "aPI";
fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "sliderTranslation";
fieldValue161.value = "0 0.7 0";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

fieldValue fieldValue162 = createNode("fieldValue");
fieldValue162.name = "transformTranslation";
fieldValue162.value = "0 0 0.1";
ProtoInstance160.fieldValue[1] = fieldValue162;

fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "sensorTranslation";
fieldValue163.value = "0 0 0";
ProtoInstance160.fieldValue[2] = fieldValue163;

fieldValue fieldValue164 = createNode("fieldValue");
fieldValue164.name = "numberTranslation";
fieldValue164.value = "0.3 0 0";
ProtoInstance160.fieldValue[3] = fieldValue164;

fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "textString";
fieldValue165.value = "\"a=\"";
ProtoInstance160.fieldValue[4] = fieldValue165;

fieldValue fieldValue166 = createNode("fieldValue");
fieldValue166.name = "parameterName";
fieldValue166.value = "a";
ProtoInstance160.fieldValue[5] = fieldValue166;

fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "parameterScale";
fieldValue167.value = "30";
ProtoInstance160.fieldValue[6] = fieldValue167;

fieldValue fieldValue168 = createNode("fieldValue");
fieldValue168.name = "shaderNode";
ComposedShader ComposedShader169 = createNode("ComposedShader");
ComposedShader169.USE = "freewrlShader";
fieldValue168.children = new MFNode();

fieldValue168.children[0] = ComposedShader169;

ProtoInstance160.fieldValue[7] = fieldValue168;

LayoutLayer96.children[3] = ProtoInstance160;

ProtoInstance ProtoInstance170 = createNode("ProtoInstance");
ProtoInstance170.name = "SliderProto";
ProtoInstance170.DEF = "bPI";
fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "sliderTranslation";
fieldValue171.value = "0 0.4 0";
ProtoInstance170.fieldValue = new MFNode();

ProtoInstance170.fieldValue[0] = fieldValue171;

fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "transformTranslation";
fieldValue172.value = "0 0 0.1";
ProtoInstance170.fieldValue[1] = fieldValue172;

fieldValue fieldValue173 = createNode("fieldValue");
fieldValue173.name = "sensorTranslation";
fieldValue173.value = "0 0 0";
ProtoInstance170.fieldValue[2] = fieldValue173;

fieldValue fieldValue174 = createNode("fieldValue");
fieldValue174.name = "numberTranslation";
fieldValue174.value = "0.3 0 0";
ProtoInstance170.fieldValue[3] = fieldValue174;

fieldValue fieldValue175 = createNode("fieldValue");
fieldValue175.name = "textString";
fieldValue175.value = "\"b=\"";
ProtoInstance170.fieldValue[4] = fieldValue175;

fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "parameterName";
fieldValue176.value = "b";
ProtoInstance170.fieldValue[5] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "parameterScale";
fieldValue177.value = "30";
ProtoInstance170.fieldValue[6] = fieldValue177;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "shaderNode";
ComposedShader ComposedShader179 = createNode("ComposedShader");
ComposedShader179.USE = "freewrlShader";
fieldValue178.children = new MFNode();

fieldValue178.children[0] = ComposedShader179;

ProtoInstance170.fieldValue[7] = fieldValue178;

LayoutLayer96.children[4] = ProtoInstance170;

ProtoInstance ProtoInstance180 = createNode("ProtoInstance");
ProtoInstance180.name = "SliderProto";
ProtoInstance180.DEF = "cPI";
fieldValue fieldValue181 = createNode("fieldValue");
fieldValue181.name = "sliderTranslation";
fieldValue181.value = "0 0.1 0";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

fieldValue fieldValue182 = createNode("fieldValue");
fieldValue182.name = "transformTranslation";
fieldValue182.value = "0 0 0.1";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue fieldValue183 = createNode("fieldValue");
fieldValue183.name = "sensorTranslation";
fieldValue183.value = "0 0 0";
ProtoInstance180.fieldValue[2] = fieldValue183;

fieldValue fieldValue184 = createNode("fieldValue");
fieldValue184.name = "numberTranslation";
fieldValue184.value = "0.3 0 0";
ProtoInstance180.fieldValue[3] = fieldValue184;

fieldValue fieldValue185 = createNode("fieldValue");
fieldValue185.name = "textString";
fieldValue185.value = "\"c=\"";
ProtoInstance180.fieldValue[4] = fieldValue185;

fieldValue fieldValue186 = createNode("fieldValue");
fieldValue186.name = "parameterName";
fieldValue186.value = "c";
ProtoInstance180.fieldValue[5] = fieldValue186;

fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "parameterScale";
fieldValue187.value = "20";
ProtoInstance180.fieldValue[6] = fieldValue187;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "shaderNode";
ComposedShader ComposedShader189 = createNode("ComposedShader");
ComposedShader189.USE = "freewrlShader";
fieldValue188.children = new MFNode();

fieldValue188.children[0] = ComposedShader189;

ProtoInstance180.fieldValue[7] = fieldValue188;

LayoutLayer96.children[5] = ProtoInstance180;

ProtoInstance ProtoInstance190 = createNode("ProtoInstance");
ProtoInstance190.name = "SliderProto";
ProtoInstance190.DEF = "dPI";
fieldValue fieldValue191 = createNode("fieldValue");
fieldValue191.name = "sliderTranslation";
fieldValue191.value = "0 -0.2 0";
ProtoInstance190.fieldValue = new MFNode();

ProtoInstance190.fieldValue[0] = fieldValue191;

fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "transformTranslation";
fieldValue192.value = "0 0 0.1";
ProtoInstance190.fieldValue[1] = fieldValue192;

fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "sensorTranslation";
fieldValue193.value = "0 0 0";
ProtoInstance190.fieldValue[2] = fieldValue193;

fieldValue fieldValue194 = createNode("fieldValue");
fieldValue194.name = "numberTranslation";
fieldValue194.value = "0.3 0 0";
ProtoInstance190.fieldValue[3] = fieldValue194;

fieldValue fieldValue195 = createNode("fieldValue");
fieldValue195.name = "textString";
fieldValue195.value = "\"d=\"";
ProtoInstance190.fieldValue[4] = fieldValue195;

fieldValue fieldValue196 = createNode("fieldValue");
fieldValue196.name = "parameterName";
fieldValue196.value = "d";
ProtoInstance190.fieldValue[5] = fieldValue196;

fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "parameterScale";
fieldValue197.value = "20";
ProtoInstance190.fieldValue[6] = fieldValue197;

fieldValue fieldValue198 = createNode("fieldValue");
fieldValue198.name = "shaderNode";
ComposedShader ComposedShader199 = createNode("ComposedShader");
ComposedShader199.USE = "freewrlShader";
fieldValue198.children = new MFNode();

fieldValue198.children[0] = ComposedShader199;

ProtoInstance190.fieldValue[7] = fieldValue198;

LayoutLayer96.children[6] = ProtoInstance190;

ProtoInstance ProtoInstance200 = createNode("ProtoInstance");
ProtoInstance200.name = "SliderProto";
ProtoInstance200.DEF = "tdeltaPI";
fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "sliderTranslation";
fieldValue201.value = "0 -0.5 0";
ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

fieldValue fieldValue202 = createNode("fieldValue");
fieldValue202.name = "transformTranslation";
fieldValue202.value = "0 0 0.1";
ProtoInstance200.fieldValue[1] = fieldValue202;

fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "sensorTranslation";
fieldValue203.value = "0 0 0";
ProtoInstance200.fieldValue[2] = fieldValue203;

fieldValue fieldValue204 = createNode("fieldValue");
fieldValue204.name = "numberTranslation";
fieldValue204.value = "0.8 0 0";
ProtoInstance200.fieldValue[3] = fieldValue204;

fieldValue fieldValue205 = createNode("fieldValue");
fieldValue205.name = "textString";
fieldValue205.value = "\"tdelta=\"";
ProtoInstance200.fieldValue[4] = fieldValue205;

fieldValue fieldValue206 = createNode("fieldValue");
fieldValue206.name = "parameterName";
fieldValue206.value = "tdelta";
ProtoInstance200.fieldValue[5] = fieldValue206;

fieldValue fieldValue207 = createNode("fieldValue");
fieldValue207.name = "parameterScale";
fieldValue207.value = "6.28";
ProtoInstance200.fieldValue[6] = fieldValue207;

fieldValue fieldValue208 = createNode("fieldValue");
fieldValue208.name = "shaderNode";
ComposedShader ComposedShader209 = createNode("ComposedShader");
ComposedShader209.USE = "freewrlShader";
fieldValue208.children = new MFNode();

fieldValue208.children[0] = ComposedShader209;

ProtoInstance200.fieldValue[7] = fieldValue208;

LayoutLayer96.children[7] = ProtoInstance200;

ProtoInstance ProtoInstance210 = createNode("ProtoInstance");
ProtoInstance210.name = "SliderProto";
ProtoInstance210.DEF = "pdeltaPI";
fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "sliderTranslation";
fieldValue211.value = "0 -0.8 0";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "transformTranslation";
fieldValue212.value = "0 0 0.1";
ProtoInstance210.fieldValue[1] = fieldValue212;

fieldValue fieldValue213 = createNode("fieldValue");
fieldValue213.name = "sensorTranslation";
fieldValue213.value = "0 0 0";
ProtoInstance210.fieldValue[2] = fieldValue213;

fieldValue fieldValue214 = createNode("fieldValue");
fieldValue214.name = "numberTranslation";
fieldValue214.value = "0.8 0 0";
ProtoInstance210.fieldValue[3] = fieldValue214;

fieldValue fieldValue215 = createNode("fieldValue");
fieldValue215.name = "textString";
fieldValue215.value = "\"pdelta=\"";
ProtoInstance210.fieldValue[4] = fieldValue215;

fieldValue fieldValue216 = createNode("fieldValue");
fieldValue216.name = "parameterName";
fieldValue216.value = "pdelta";
ProtoInstance210.fieldValue[5] = fieldValue216;

fieldValue fieldValue217 = createNode("fieldValue");
fieldValue217.name = "parameterScale";
fieldValue217.value = "6.28";
ProtoInstance210.fieldValue[6] = fieldValue217;

fieldValue fieldValue218 = createNode("fieldValue");
fieldValue218.name = "shaderNode";
ComposedShader ComposedShader219 = createNode("ComposedShader");
ComposedShader219.USE = "freewrlShader";
fieldValue218.children = new MFNode();

fieldValue218.children[0] = ComposedShader219;

ProtoInstance210.fieldValue[7] = fieldValue218;

LayoutLayer96.children[8] = ProtoInstance210;

Layout Layout220 = createNode("Layout");
Layout220.align = new MFString(new java.lang.String["LEFT","BOTTOM"]);
Layout220.offset = new MFFloat(new float[-0.5,0]);
LayoutLayer96.layout = Layout220;

Viewport Viewport221 = createNode("Viewport");
LayoutLayer96.viewport = Viewport221;

LayerSet18.layers[1] = LayoutLayer96;

layerSet = new undefined();

layerSet[0] = LayerSet18;

}
