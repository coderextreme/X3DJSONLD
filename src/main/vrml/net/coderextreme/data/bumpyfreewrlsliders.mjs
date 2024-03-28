let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "DIS";
component10.level = 2;
head1.component[8] = component10;

//<component name='Shape' level='4'></component>
//Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
let meta11 = browser.currentScene.createNode("meta");
meta11.name = "title";
meta11.content = "bumpfreewrlsliders.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "*enter description here, short-sentence summaries preferred*";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "creator";
meta13.content = "Doug Sanden, Christoph Valentin, John Carlson";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "translator";
meta14.content = "*if manually translating VRML-to-X3D, enter name of person translating here*";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "created";
meta15.content = "*enter date of initial version here*";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "translated";
meta16.content = "*enter date of translation here*";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "modified";
meta17.content = "*enter date of latest revision here*";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "version";
meta18.content = "*enter version here, if any*";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "*enter reference citation or relative/online url here*";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "*enter additional url/bibliographic reference information here*";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "requires";
meta21.content = "*enter reference resource here if required to support function, delivery, or coherence of content*";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "rights";
meta22.content = "*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "drawing";
meta23.content = "*enter drawing filename/url here*";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "MovingImage";
meta24.content = "*enter movie filename/url here*";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "photo";
meta25.content = "*enter photo filename/url here*";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "subject";
meta26.content = "*enter subject keywords here*";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "accessRights";
meta27.content = "*enter permission statements or url here*";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "identifier";
meta28.content = "*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "generator";
meta29.content = "PSPad, http://www.pspad.com/";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "license";
meta30.content = "license.html";
head1.meta[28] = meta30;

head = head1;

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
//LayerSet with two layers, navigation happens in layer 1
let LayerSet32 = browser.currentScene.createNode("LayerSet");
LayerSet32.activeLayer = 1;
LayerSet32.order = new MFInt32(new int[1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
let Layer33 = browser.currentScene.createNode("Layer");
//basic nodes, which might be present in any scene
let NavigationInfo34 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo34.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo34.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
Layer33.children = new MFNode();

Layer33.children[0] = NavigationInfo34;

let DirectionalLight35 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight35.ambientIntensity = 0.2;
DirectionalLight35.direction = new SFVec3f(new float[0,-1,0]);
Layer33.children[1] = DirectionalLight35;

let DirectionalLight36 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight36.ambientIntensity = 0.2;
DirectionalLight36.direction = new SFVec3f(new float[-1,-0.1,-1]);
Layer33.children[2] = DirectionalLight36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "My Overview";
Viewpoint37.fieldOfView = 1.570796;
Viewpoint37.position = new SFVec3f(new float[0,1.75,60]);
Layer33.children[3] = Viewpoint37;

//this group contains the red/green/blue 3D crosshair
let Group38 = browser.currentScene.createNode("Group");
//Arrow X
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new SFVec3f(new float[25,0,0]);
Transform39.rotation = new SFRotation(new float[0,0,-1,1.57]);
let Shape40 = browser.currentScene.createNode("Shape");
let Cylinder41 = browser.currentScene.createNode("Cylinder");
Cylinder41.DEF = "Shaft";
Cylinder41.radius = 0.35;
Cylinder41.height = 50;
Shape40.geometry = Cylinder41;

let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.DEF = "RED";
Material43.diffuseColor = new SFColor(new float[1,0,0]);
Material43.emissiveColor = new SFColor(new float[1,0,0]);
Appearance42.material = Material43;

Shape40.appearance = Appearance42;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Group38.children = new MFNode();

Group38.children[0] = Transform39;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new SFVec3f(new float[50,0,0]);
Transform44.rotation = new SFRotation(new float[0,0,-1,1.57]);
let Shape45 = browser.currentScene.createNode("Shape");
let Cone46 = browser.currentScene.createNode("Cone");
Cone46.DEF = "Tip";
Cone46.bottomRadius = 0.8;
Cone46.height = 3;
Shape45.geometry = Cone46;

let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.USE = "RED";
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Group38.children[1] = Transform44;

//Arrow Y
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,25,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Cylinder51 = browser.currentScene.createNode("Cylinder");
Cylinder51.USE = "Shaft";
Shape50.geometry = Cylinder51;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.DEF = "GREEN";
Material53.diffuseColor = new SFColor(new float[0,1,0]);
Material53.emissiveColor = new SFColor(new float[0,1,0]);
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Group38.children[2] = Transform49;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,50,0]);
let Shape55 = browser.currentScene.createNode("Shape");
let Cone56 = browser.currentScene.createNode("Cone");
Cone56.USE = "Tip";
Shape55.geometry = Cone56;

let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.USE = "GREEN";
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Group38.children[3] = Transform54;

//Arrow Z
let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new SFVec3f(new float[0,0,25]);
Transform59.rotation = new SFRotation(new float[1,0,0,1.57]);
let Shape60 = browser.currentScene.createNode("Shape");
let Cylinder61 = browser.currentScene.createNode("Cylinder");
Cylinder61.USE = "Shaft";
Shape60.geometry = Cylinder61;

let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.DEF = "BLUE";
Material63.diffuseColor = new SFColor(new float[0,0,1]);
Material63.emissiveColor = new SFColor(new float[0,0,1]);
Appearance62.material = Material63;

Shape60.appearance = Appearance62;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Group38.children[4] = Transform59;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,0,50]);
Transform64.rotation = new SFRotation(new float[1,0,0,1.57]);
let Shape65 = browser.currentScene.createNode("Shape");
let Cone66 = browser.currentScene.createNode("Cone");
Cone66.USE = "Tip";
Shape65.geometry = Cone66;

let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.USE = "BLUE";
Appearance67.material = Material68;

Shape65.appearance = Appearance67;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

Group38.children[5] = Transform64;

Layer33.children[4] = Group38;

//the model that is being reviewed by the users of this scene
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background70 = browser.currentScene.createNode("Background");
Background70.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background70.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background70.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background70.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background70.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background70.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Transform69.children = new MFNode();

Transform69.children[0] = Background70;

let Shape71 = browser.currentScene.createNode("Shape");
let Sphere72 = browser.currentScene.createNode("Sphere");
Sphere72.radius = 40;
Shape71.geometry = Sphere72;

let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material74.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance73.material = Material74;

let ComposedCubeMapTexture75 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture75.DEF = "texture";
let ImageTexture76 = browser.currentScene.createNode("ImageTexture");
ImageTexture76.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture75.topTexture = ImageTexture76;

let ImageTexture77 = browser.currentScene.createNode("ImageTexture");
ImageTexture77.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture75.topTexture = ImageTexture77;

let ImageTexture78 = browser.currentScene.createNode("ImageTexture");
ImageTexture78.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture75.topTexture = ImageTexture78;

let ImageTexture79 = browser.currentScene.createNode("ImageTexture");
ImageTexture79.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture75.topTexture = ImageTexture79;

let ImageTexture80 = browser.currentScene.createNode("ImageTexture");
ImageTexture80.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture75.topTexture = ImageTexture80;

let ImageTexture81 = browser.currentScene.createNode("ImageTexture");
ImageTexture81.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture75.topTexture = ImageTexture81;

Appearance73.texture = ComposedCubeMapTexture75;

let ComposedShader82 = browser.currentScene.createNode("ComposedShader");
ComposedShader82.DEF = "freewrlShader";
ComposedShader82.language = "GLSL";
let field83 = browser.currentScene.createNode("field");
field83.name = "chromaticDispertion";
field83.accessType = "inputOnly";
field83.type = "SFVec3f";
field83.value = "0.98 1 1.033";
ComposedShader82.field = new MFNode();

ComposedShader82.field[0] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "fw_textureCoordGenType";
field84.accessType = "inputOnly";
field84.type = "SFInt32";
field84.value = "0";
ComposedShader82.field[1] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "bias";
field85.type = "SFFloat";
field85.accessType = "inputOnly";
field85.value = "0.5";
ComposedShader82.field[2] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "scale";
field86.type = "SFFloat";
field86.accessType = "inputOnly";
field86.value = "0.5";
ComposedShader82.field[3] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "power";
field87.type = "SFFloat";
field87.accessType = "inputOnly";
field87.value = "2";
ComposedShader82.field[4] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "a";
field88.type = "SFFloat";
field88.accessType = "inputOutput";
field88.value = "15";
ComposedShader82.field[5] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "b";
field89.type = "SFFloat";
field89.accessType = "inputOutput";
field89.value = "5";
ComposedShader82.field[6] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "c";
field90.type = "SFFloat";
field90.accessType = "inputOutput";
field90.value = "5";
ComposedShader82.field[7] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "d";
field91.type = "SFFloat";
field91.accessType = "inputOutput";
field91.value = "5";
ComposedShader82.field[8] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "tdelta";
field92.type = "SFFloat";
field92.accessType = "inputOutput";
field92.value = "0";
ComposedShader82.field[9] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "pdelta";
field93.type = "SFFloat";
field93.accessType = "inputOutput";
field93.value = "0";
ComposedShader82.field[10] = field93;

let ShaderPart94 = browser.currentScene.createNode("ShaderPart");
ShaderPart94.url = new MFString(new java.lang.String["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]);
ShaderPart94.type = "VERTEX";
ComposedShader82.parts[11] = ShaderPart94;

let ShaderPart95 = browser.currentScene.createNode("ShaderPart");
ShaderPart95.url = new MFString(new java.lang.String["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"]);
ShaderPart95.type = "FRAGMENT";
ComposedShader82.parts[12] = ShaderPart95;

Appearance73.shaders = new MFNode();

Appearance73.shaders[0] = ComposedShader82;

Shape71.appearance = Appearance73;

Transform69.child[1] = Shape71;

Layer33.children[5] = Transform69;

//DIS multiuser facilities
let DISEntityManager96 = browser.currentScene.createNode("DISEntityManager");
DISEntityManager96.DEF = "EntityManager";
DISEntityManager96.networkMode = "networkReader";
let DISEntityTypeMapping97 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping97.category = 77;
DISEntityTypeMapping97.specific = 1;
DISEntityTypeMapping97.url = new MFString(new java.lang.String["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]);
DISEntityManager96.children = new MFNode();

DISEntityManager96.children[0] = DISEntityTypeMapping97;

let DISEntityTypeMapping98 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping98.category = 77;
DISEntityTypeMapping98.specific = 2;
DISEntityTypeMapping98.url = new MFString(new java.lang.String["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]);
DISEntityManager96.children[1] = DISEntityTypeMapping98;

Layer33.children[6] = DISEntityManager96;

let Collision99 = browser.currentScene.createNode("Collision");
Collision99.enabled = False;
let Group100 = browser.currentScene.createNode("Group");
Group100.DEF = "AvatarHolder";
Collision99.proxy = Group100;

Layer33.children[7] = Collision99;

let ROUTE101 = browser.currentScene.createNode("ROUTE");
ROUTE101.fromField = "addedEntities";
ROUTE101.fromNode = "EntityManager";
ROUTE101.toField = "addChildren";
ROUTE101.toNode = "AvatarHolder";
Layer33.children[8] = ROUTE101;

let ROUTE102 = browser.currentScene.createNode("ROUTE");
ROUTE102.fromField = "removedEntities";
ROUTE102.fromNode = "EntityManager";
ROUTE102.toField = "removeChildren";
ROUTE102.toNode = "AvatarHolder";
Layer33.children[9] = ROUTE102;

LayerSet32.layers = new MFNode();

LayerSet32.layers[0] = Layer33;

let LayoutLayer103 = browser.currentScene.createNode("LayoutLayer");
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,0,-3]);
let Shape105 = browser.currentScene.createNode("Shape");
let Appearance106 = browser.currentScene.createNode("Appearance");
let Material107 = browser.currentScene.createNode("Material");
Material107.diffuseColor = new SFColor(new float[0,0,0]);
Material107.transparency = 0.7;
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

let Box108 = browser.currentScene.createNode("Box");
Box108.size = new SFVec3f(new float[100,100,0.02]);
Shape105.geometry = Box108;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

LayoutLayer103.children = new MFNode();

LayoutLayer103.children[0] = Transform104;

//the plane sensors
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.DEF = "aSlider";
Transform109.translation = new SFVec3f(new float[0,0.7,0]);
let Transform110 = browser.currentScene.createNode("Transform");
Transform110.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape111 = browser.currentScene.createNode("Shape");
let Appearance112 = browser.currentScene.createNode("Appearance");
let Material113 = browser.currentScene.createNode("Material");
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

let Cylinder114 = browser.currentScene.createNode("Cylinder");
Cylinder114.radius = 0.05;
Cylinder114.height = 2.5;
Shape111.geometry = Cylinder114;

Transform110.child = new undefined();

Transform110.child[0] = Shape111;

Transform109.children = new MFNode();

Transform109.children[0] = Transform110;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.DEF = "aTransform";
Transform115.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor116 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor116.DEF = "aSensor";
PlaneSensor116.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor116.maxPosition = new SFVec2f(new float[20,0]);
Transform115.children = new MFNode();

Transform115.children[0] = PlaneSensor116;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor118 = browser.currentScene.createNode("TouchSensor");
TouchSensor118.DEF = "aTS";
Transform117.children = new MFNode();

Transform117.children[0] = TouchSensor118;

let Shape119 = browser.currentScene.createNode("Shape");
let Sphere120 = browser.currentScene.createNode("Sphere");
Sphere120.radius = 0.08;
Shape119.geometry = Sphere120;

let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.diffuseColor = new SFColor(new float[1,0,0]);
Appearance121.material = Material122;

Shape119.appearance = Appearance121;

Transform117.child[1] = Shape119;

Transform115.children[1] = Transform117;

let Shape123 = browser.currentScene.createNode("Shape");
let Cylinder124 = browser.currentScene.createNode("Cylinder");
Cylinder124.radius = 0.05;
Cylinder124.height = 0.3;
Shape123.geometry = Cylinder124;

let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Appearance125.material = Material126;

Shape123.appearance = Appearance125;

Transform115.child[2] = Shape123;

Transform109.children[1] = Transform115;

let Transform127 = browser.currentScene.createNode("Transform");
Transform127.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape128 = browser.currentScene.createNode("Shape");
let Appearance129 = browser.currentScene.createNode("Appearance");
let Material130 = browser.currentScene.createNode("Material");
Appearance129.material = Material130;

Shape128.appearance = Appearance129;

let Cylinder131 = browser.currentScene.createNode("Cylinder");
Cylinder131.radius = 0.05;
Cylinder131.height = 2.5;
Shape128.geometry = Cylinder131;

Transform127.child = new undefined();

Transform127.child[0] = Shape128;

Transform109.children[2] = Transform127;

LayoutLayer103.children[1] = Transform109;

let Transform132 = browser.currentScene.createNode("Transform");
Transform132.DEF = "bSlider";
Transform132.translation = new SFVec3f(new float[0,0.4,0]);
let Transform133 = browser.currentScene.createNode("Transform");
Transform133.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

let Cylinder137 = browser.currentScene.createNode("Cylinder");
Cylinder137.radius = 0.05;
Cylinder137.height = 2.5;
Shape134.geometry = Cylinder137;

Transform133.child = new undefined();

Transform133.child[0] = Shape134;

Transform132.children = new MFNode();

Transform132.children[0] = Transform133;

let Transform138 = browser.currentScene.createNode("Transform");
Transform138.DEF = "bTransform";
Transform138.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor139 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor139.DEF = "bSensor";
PlaneSensor139.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor139.maxPosition = new SFVec2f(new float[20,0]);
Transform138.children = new MFNode();

Transform138.children[0] = PlaneSensor139;

let Transform140 = browser.currentScene.createNode("Transform");
Transform140.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor141 = browser.currentScene.createNode("TouchSensor");
TouchSensor141.DEF = "bTS";
Transform140.children = new MFNode();

Transform140.children[0] = TouchSensor141;

let Shape142 = browser.currentScene.createNode("Shape");
let Sphere143 = browser.currentScene.createNode("Sphere");
Sphere143.radius = 0.08;
Shape142.geometry = Sphere143;

let Appearance144 = browser.currentScene.createNode("Appearance");
let Material145 = browser.currentScene.createNode("Material");
Material145.diffuseColor = new SFColor(new float[1,0,0]);
Appearance144.material = Material145;

Shape142.appearance = Appearance144;

Transform140.child[1] = Shape142;

Transform138.children[1] = Transform140;

let Shape146 = browser.currentScene.createNode("Shape");
let Cylinder147 = browser.currentScene.createNode("Cylinder");
Cylinder147.radius = 0.05;
Cylinder147.height = 0.3;
Shape146.geometry = Cylinder147;

let Appearance148 = browser.currentScene.createNode("Appearance");
let Material149 = browser.currentScene.createNode("Material");
Appearance148.material = Material149;

Shape146.appearance = Appearance148;

Transform138.child[2] = Shape146;

Transform132.children[1] = Transform138;

LayoutLayer103.children[2] = Transform132;

let Transform150 = browser.currentScene.createNode("Transform");
Transform150.DEF = "cSlider";
Transform150.translation = new SFVec3f(new float[0,0.1,0]);
let Transform151 = browser.currentScene.createNode("Transform");
Transform151.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
let Material154 = browser.currentScene.createNode("Material");
Appearance153.material = Material154;

Shape152.appearance = Appearance153;

let Cylinder155 = browser.currentScene.createNode("Cylinder");
Cylinder155.radius = 0.05;
Cylinder155.height = 2.5;
Shape152.geometry = Cylinder155;

Transform151.child = new undefined();

Transform151.child[0] = Shape152;

Transform150.children = new MFNode();

Transform150.children[0] = Transform151;

let Transform156 = browser.currentScene.createNode("Transform");
Transform156.DEF = "cTransform";
Transform156.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor157 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor157.DEF = "cSensor";
PlaneSensor157.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor157.maxPosition = new SFVec2f(new float[20,0]);
Transform156.children = new MFNode();

Transform156.children[0] = PlaneSensor157;

let Transform158 = browser.currentScene.createNode("Transform");
Transform158.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor159 = browser.currentScene.createNode("TouchSensor");
TouchSensor159.DEF = "cTS";
Transform158.children = new MFNode();

Transform158.children[0] = TouchSensor159;

let Shape160 = browser.currentScene.createNode("Shape");
let Sphere161 = browser.currentScene.createNode("Sphere");
Sphere161.radius = 0.08;
Shape160.geometry = Sphere161;

let Appearance162 = browser.currentScene.createNode("Appearance");
let Material163 = browser.currentScene.createNode("Material");
Material163.diffuseColor = new SFColor(new float[1,0,0]);
Appearance162.material = Material163;

Shape160.appearance = Appearance162;

Transform158.child[1] = Shape160;

Transform156.children[1] = Transform158;

let Shape164 = browser.currentScene.createNode("Shape");
let Cylinder165 = browser.currentScene.createNode("Cylinder");
Cylinder165.radius = 0.05;
Cylinder165.height = 0.3;
Shape164.geometry = Cylinder165;

let Appearance166 = browser.currentScene.createNode("Appearance");
let Material167 = browser.currentScene.createNode("Material");
Appearance166.material = Material167;

Shape164.appearance = Appearance166;

Transform156.child[2] = Shape164;

Transform150.children[1] = Transform156;

LayoutLayer103.children[3] = Transform150;

let Transform168 = browser.currentScene.createNode("Transform");
Transform168.DEF = "dSlider";
Transform168.translation = new SFVec3f(new float[0,-0.2,0]);
let Transform169 = browser.currentScene.createNode("Transform");
Transform169.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape170 = browser.currentScene.createNode("Shape");
let Appearance171 = browser.currentScene.createNode("Appearance");
let Material172 = browser.currentScene.createNode("Material");
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

let Cylinder173 = browser.currentScene.createNode("Cylinder");
Cylinder173.radius = 0.05;
Cylinder173.height = 2.5;
Shape170.geometry = Cylinder173;

Transform169.child = new undefined();

Transform169.child[0] = Shape170;

Transform168.children = new MFNode();

Transform168.children[0] = Transform169;

let Transform174 = browser.currentScene.createNode("Transform");
Transform174.DEF = "dTransform";
Transform174.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor175 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor175.DEF = "dSensor";
PlaneSensor175.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor175.maxPosition = new SFVec2f(new float[20,0]);
Transform174.children = new MFNode();

Transform174.children[0] = PlaneSensor175;

let Transform176 = browser.currentScene.createNode("Transform");
Transform176.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor177 = browser.currentScene.createNode("TouchSensor");
TouchSensor177.DEF = "dTS";
Transform176.children = new MFNode();

Transform176.children[0] = TouchSensor177;

let Shape178 = browser.currentScene.createNode("Shape");
let Sphere179 = browser.currentScene.createNode("Sphere");
Sphere179.radius = 0.08;
Shape178.geometry = Sphere179;

let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.diffuseColor = new SFColor(new float[1,0,0]);
Appearance180.material = Material181;

Shape178.appearance = Appearance180;

Transform176.child[1] = Shape178;

Transform174.children[1] = Transform176;

let Shape182 = browser.currentScene.createNode("Shape");
let Cylinder183 = browser.currentScene.createNode("Cylinder");
Cylinder183.radius = 0.05;
Cylinder183.height = 0.3;
Shape182.geometry = Cylinder183;

let Appearance184 = browser.currentScene.createNode("Appearance");
let Material185 = browser.currentScene.createNode("Material");
Appearance184.material = Material185;

Shape182.appearance = Appearance184;

Transform174.child[2] = Shape182;

Transform168.children[1] = Transform174;

LayoutLayer103.children[4] = Transform168;

let Transform186 = browser.currentScene.createNode("Transform");
Transform186.DEF = "pdeltaSlider";
Transform186.translation = new SFVec3f(new float[0,-0.5,0]);
let Transform187 = browser.currentScene.createNode("Transform");
Transform187.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape188 = browser.currentScene.createNode("Shape");
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

let Cylinder191 = browser.currentScene.createNode("Cylinder");
Cylinder191.radius = 0.05;
Cylinder191.height = 2.5;
Shape188.geometry = Cylinder191;

Transform187.child = new undefined();

Transform187.child[0] = Shape188;

Transform186.children = new MFNode();

Transform186.children[0] = Transform187;

let Transform192 = browser.currentScene.createNode("Transform");
Transform192.DEF = "pdeltaTransform";
Transform192.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor193 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor193.DEF = "pdeltaSensor";
PlaneSensor193.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor193.maxPosition = new SFVec2f(new float[20,0]);
Transform192.children = new MFNode();

Transform192.children[0] = PlaneSensor193;

let Transform194 = browser.currentScene.createNode("Transform");
Transform194.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor195 = browser.currentScene.createNode("TouchSensor");
TouchSensor195.DEF = "pdeltaTS";
Transform194.children = new MFNode();

Transform194.children[0] = TouchSensor195;

let Shape196 = browser.currentScene.createNode("Shape");
let Sphere197 = browser.currentScene.createNode("Sphere");
Sphere197.radius = 0.08;
Shape196.geometry = Sphere197;

let Appearance198 = browser.currentScene.createNode("Appearance");
let Material199 = browser.currentScene.createNode("Material");
Material199.diffuseColor = new SFColor(new float[1,0,0]);
Appearance198.material = Material199;

Shape196.appearance = Appearance198;

Transform194.child[1] = Shape196;

Transform192.children[1] = Transform194;

let Shape200 = browser.currentScene.createNode("Shape");
let Cylinder201 = browser.currentScene.createNode("Cylinder");
Cylinder201.radius = 0.05;
Cylinder201.height = 0.3;
Shape200.geometry = Cylinder201;

let Appearance202 = browser.currentScene.createNode("Appearance");
let Material203 = browser.currentScene.createNode("Material");
Appearance202.material = Material203;

Shape200.appearance = Appearance202;

Transform192.child[2] = Shape200;

Transform186.children[1] = Transform192;

LayoutLayer103.children[5] = Transform186;

let Transform204 = browser.currentScene.createNode("Transform");
Transform204.DEF = "tdeltaSlider";
Transform204.translation = new SFVec3f(new float[0,-0.8,0]);
let Transform205 = browser.currentScene.createNode("Transform");
Transform205.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape206 = browser.currentScene.createNode("Shape");
let Appearance207 = browser.currentScene.createNode("Appearance");
let Material208 = browser.currentScene.createNode("Material");
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

let Cylinder209 = browser.currentScene.createNode("Cylinder");
Cylinder209.radius = 0.05;
Cylinder209.height = 2.5;
Shape206.geometry = Cylinder209;

Transform205.child = new undefined();

Transform205.child[0] = Shape206;

Transform204.children = new MFNode();

Transform204.children[0] = Transform205;

let Transform210 = browser.currentScene.createNode("Transform");
Transform210.DEF = "tdeltaTransform";
Transform210.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor211 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor211.DEF = "tdeltaSensor";
PlaneSensor211.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor211.maxPosition = new SFVec2f(new float[20,0]);
Transform210.children = new MFNode();

Transform210.children[0] = PlaneSensor211;

let Transform212 = browser.currentScene.createNode("Transform");
Transform212.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor213 = browser.currentScene.createNode("TouchSensor");
TouchSensor213.DEF = "tdeltaTS";
Transform212.children = new MFNode();

Transform212.children[0] = TouchSensor213;

let Shape214 = browser.currentScene.createNode("Shape");
let Sphere215 = browser.currentScene.createNode("Sphere");
Sphere215.radius = 0.08;
Shape214.geometry = Sphere215;

let Appearance216 = browser.currentScene.createNode("Appearance");
let Material217 = browser.currentScene.createNode("Material");
Material217.diffuseColor = new SFColor(new float[1,0,0]);
Appearance216.material = Material217;

Shape214.appearance = Appearance216;

Transform212.child[1] = Shape214;

Transform210.children[1] = Transform212;

let Shape218 = browser.currentScene.createNode("Shape");
let Cylinder219 = browser.currentScene.createNode("Cylinder");
Cylinder219.radius = 0.05;
Cylinder219.height = 0.3;
Shape218.geometry = Cylinder219;

let Appearance220 = browser.currentScene.createNode("Appearance");
let Material221 = browser.currentScene.createNode("Material");
Appearance220.material = Material221;

Shape218.appearance = Appearance220;

Transform210.child[2] = Shape218;

Transform204.children[1] = Transform210;

LayoutLayer103.children[6] = Transform204;

let Script222 = browser.currentScene.createNode("Script");
Script222.DEF = "aValueTransformerScript";
Script222.directOutput = True;
Script222.mustEvaluate = True;
let field223 = browser.currentScene.createNode("field");
field223.name = "newTranslation";
field223.accessType = "inputOnly";
field223.type = "SFVec3f";
field223.value = "1 1 1";
Script222.field = new MFNode();

Script222.field[0] = field223;

let field224 = browser.currentScene.createNode("field");
field224.name = "aValue";
field224.accessType = "outputOnly";
field224.type = "SFFloat";
field224.value = "1";
Script222.field[1] = field224;


Script222.setSourceCode(`ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }`)
LayoutLayer103.children[7] = Script222;

let Script225 = browser.currentScene.createNode("Script");
Script225.DEF = "bValueTransformerScript";
Script225.directOutput = True;
Script225.mustEvaluate = True;
let field226 = browser.currentScene.createNode("field");
field226.name = "newTranslation";
field226.accessType = "inputOnly";
field226.type = "SFVec3f";
field226.value = "1 1 1";
Script225.field = new MFNode();

Script225.field[0] = field226;

let field227 = browser.currentScene.createNode("field");
field227.name = "bValue";
field227.accessType = "outputOnly";
field227.type = "SFFloat";
field227.value = "1";
Script225.field[1] = field227;


Script225.setSourceCode(`ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }`)
LayoutLayer103.children[8] = Script225;

let Script228 = browser.currentScene.createNode("Script");
Script228.DEF = "cValueTransformerScript";
Script228.directOutput = True;
Script228.mustEvaluate = True;
let field229 = browser.currentScene.createNode("field");
field229.name = "newTranslation";
field229.accessType = "inputOnly";
field229.type = "SFVec3f";
field229.value = "1 1 1";
Script228.field = new MFNode();

Script228.field[0] = field229;

let field230 = browser.currentScene.createNode("field");
field230.name = "cValue";
field230.accessType = "outputOnly";
field230.type = "SFFloat";
field230.value = "1";
Script228.field[1] = field230;


Script228.setSourceCode(`ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }`)
LayoutLayer103.children[9] = Script228;

let Script231 = browser.currentScene.createNode("Script");
Script231.DEF = "dValueTransformerScript";
Script231.directOutput = True;
Script231.mustEvaluate = True;
let field232 = browser.currentScene.createNode("field");
field232.name = "newTranslation";
field232.accessType = "inputOnly";
field232.type = "SFVec3f";
field232.value = "1 1 1";
Script231.field = new MFNode();

Script231.field[0] = field232;

let field233 = browser.currentScene.createNode("field");
field233.name = "dValue";
field233.accessType = "outputOnly";
field233.type = "SFFloat";
field233.value = "1";
Script231.field[1] = field233;


Script231.setSourceCode(`ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }`)
LayoutLayer103.children[10] = Script231;

let Script234 = browser.currentScene.createNode("Script");
Script234.DEF = "pdeltaValueTransformerScript";
Script234.directOutput = True;
Script234.mustEvaluate = True;
let field235 = browser.currentScene.createNode("field");
field235.name = "newTranslation";
field235.accessType = "inputOnly";
field235.type = "SFVec3f";
field235.value = "1 1 1";
Script234.field = new MFNode();

Script234.field[0] = field235;

let field236 = browser.currentScene.createNode("field");
field236.name = "pdeltaValue";
field236.accessType = "outputOnly";
field236.type = "SFFloat";
field236.value = "1";
Script234.field[1] = field236;


Script234.setSourceCode(`ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }`)
LayoutLayer103.children[11] = Script234;

let Script237 = browser.currentScene.createNode("Script");
Script237.DEF = "tdeltaValueTransformerScript";
Script237.directOutput = True;
Script237.mustEvaluate = True;
let field238 = browser.currentScene.createNode("field");
field238.name = "newTranslation";
field238.accessType = "inputOnly";
field238.type = "SFVec3f";
field238.value = "1 1 1";
Script237.field = new MFNode();

Script237.field[0] = field238;

let field239 = browser.currentScene.createNode("field");
field239.name = "tdeltaValue";
field239.accessType = "outputOnly";
field239.type = "SFFloat";
field239.value = "1";
Script237.field[1] = field239;


Script237.setSourceCode(`ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }`)
LayoutLayer103.children[12] = Script237;

let ROUTE240 = browser.currentScene.createNode("ROUTE");
ROUTE240.fromField = "translation_changed";
ROUTE240.fromNode = "aSensor";
ROUTE240.toField = "set_translation";
ROUTE240.toNode = "aTransform";
LayoutLayer103.children[13] = ROUTE240;

let ROUTE241 = browser.currentScene.createNode("ROUTE");
ROUTE241.fromField = "translation_changed";
ROUTE241.fromNode = "bSensor";
ROUTE241.toField = "set_translation";
ROUTE241.toNode = "bTransform";
LayoutLayer103.children[14] = ROUTE241;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromField = "translation_changed";
ROUTE242.fromNode = "cSensor";
ROUTE242.toField = "set_translation";
ROUTE242.toNode = "cTransform";
LayoutLayer103.children[15] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromField = "translation_changed";
ROUTE243.fromNode = "dSensor";
ROUTE243.toField = "set_translation";
ROUTE243.toNode = "dTransform";
LayoutLayer103.children[16] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromField = "translation_changed";
ROUTE244.fromNode = "pdeltaSensor";
ROUTE244.toField = "set_translation";
ROUTE244.toNode = "pdeltaTransform";
LayoutLayer103.children[17] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromField = "translation_changed";
ROUTE245.fromNode = "tdeltaSensor";
ROUTE245.toField = "set_translation";
ROUTE245.toNode = "tdeltaTransform";
LayoutLayer103.children[18] = ROUTE245;

let ROUTE246 = browser.currentScene.createNode("ROUTE");
ROUTE246.fromField = "translation_changed";
ROUTE246.fromNode = "aSensor";
ROUTE246.toField = "newTranslation";
ROUTE246.toNode = "aValueTransformerScript";
LayoutLayer103.children[19] = ROUTE246;

let ROUTE247 = browser.currentScene.createNode("ROUTE");
ROUTE247.fromField = "translation_changed";
ROUTE247.fromNode = "bSensor";
ROUTE247.toField = "newTranslation";
ROUTE247.toNode = "bValueTransformerScript";
LayoutLayer103.children[20] = ROUTE247;

let ROUTE248 = browser.currentScene.createNode("ROUTE");
ROUTE248.fromField = "translation_changed";
ROUTE248.fromNode = "cSensor";
ROUTE248.toField = "newTranslation";
ROUTE248.toNode = "cValueTransformerScript";
LayoutLayer103.children[21] = ROUTE248;

let ROUTE249 = browser.currentScene.createNode("ROUTE");
ROUTE249.fromField = "translation_changed";
ROUTE249.fromNode = "dSensor";
ROUTE249.toField = "newTranslation";
ROUTE249.toNode = "dValueTransformerScript";
LayoutLayer103.children[22] = ROUTE249;

let ROUTE250 = browser.currentScene.createNode("ROUTE");
ROUTE250.fromField = "translation_changed";
ROUTE250.fromNode = "pdeltaSensor";
ROUTE250.toField = "newTranslation";
ROUTE250.toNode = "pdeltaValueTransformerScript";
LayoutLayer103.children[23] = ROUTE250;

let ROUTE251 = browser.currentScene.createNode("ROUTE");
ROUTE251.fromField = "translation_changed";
ROUTE251.fromNode = "tdeltaSensor";
ROUTE251.toField = "newTranslation";
ROUTE251.toNode = "tdeltaValueTransformerScript";
LayoutLayer103.children[24] = ROUTE251;

let ROUTE252 = browser.currentScene.createNode("ROUTE");
ROUTE252.fromField = "aValue";
ROUTE252.fromNode = "aValueTransformerScript";
ROUTE252.toField = "a";
ROUTE252.toNode = "freewrlShader";
LayoutLayer103.children[25] = ROUTE252;

let ROUTE253 = browser.currentScene.createNode("ROUTE");
ROUTE253.fromField = "bValue";
ROUTE253.fromNode = "bValueTransformerScript";
ROUTE253.toField = "b";
ROUTE253.toNode = "freewrlShader";
LayoutLayer103.children[26] = ROUTE253;

let ROUTE254 = browser.currentScene.createNode("ROUTE");
ROUTE254.fromField = "cValue";
ROUTE254.fromNode = "cValueTransformerScript";
ROUTE254.toField = "c";
ROUTE254.toNode = "freewrlShader";
LayoutLayer103.children[27] = ROUTE254;

let ROUTE255 = browser.currentScene.createNode("ROUTE");
ROUTE255.fromField = "dValue";
ROUTE255.fromNode = "dValueTransformerScript";
ROUTE255.toField = "d";
ROUTE255.toNode = "freewrlShader";
LayoutLayer103.children[28] = ROUTE255;

let ROUTE256 = browser.currentScene.createNode("ROUTE");
ROUTE256.fromField = "pdeltaValue";
ROUTE256.fromNode = "pdeltaValueTransformerScript";
ROUTE256.toField = "pdelta";
ROUTE256.toNode = "freewrlShader";
LayoutLayer103.children[29] = ROUTE256;

let ROUTE257 = browser.currentScene.createNode("ROUTE");
ROUTE257.fromField = "tdeltaValue";
ROUTE257.fromNode = "tdeltaValueTransformerScript";
ROUTE257.toField = "tdelta";
ROUTE257.toNode = "freewrlShader";
LayoutLayer103.children[30] = ROUTE257;

let Layout258 = browser.currentScene.createNode("Layout");
Layout258.align = new MFString(new java.lang.String["RIGHT","BOTTOM"]);
Layout258.offset = new MFFloat(new float[0,0]);
Layout258.offsetUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
Layout258.scaleMode = new MFString(new java.lang.String["NONE","NONE"]);
Layout258.size = new MFFloat(new float[0.4,1]);
Layout258.sizeUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
LayoutLayer103.layout = Layout258;

let Viewport259 = browser.currentScene.createNode("Viewport");
Viewport259.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer103.viewport = Viewport259;

LayerSet32.layers[1] = LayoutLayer103;

browser.currentScene.layerSet = new undefined();

browser.currentScene.layerSet[0] = LayerSet32;

