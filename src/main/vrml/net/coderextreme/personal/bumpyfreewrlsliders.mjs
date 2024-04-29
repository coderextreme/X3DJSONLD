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
DISEntityTypeMapping97.url = new MFString(new java.lang.String["../data/Leif8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv"]);
DISEntityManager96.children = new MFNode();

DISEntityManager96.children[0] = DISEntityTypeMapping97;

let DISEntityTypeMapping98 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping98.category = 77;
DISEntityTypeMapping98.specific = 2;
DISEntityTypeMapping98.url = new MFString(new java.lang.String["../data/Lily8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv"]);
DISEntityManager96.children[1] = DISEntityTypeMapping98;

let DISEntityTypeMapping99 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping99.category = 77;
DISEntityTypeMapping99.specific = 3;
DISEntityTypeMapping99.url = new MFString(new java.lang.String["../data/Tufani8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv"]);
DISEntityManager96.children[2] = DISEntityTypeMapping99;

let DISEntityTypeMapping100 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping100.category = 77;
DISEntityTypeMapping100.specific = 4;
DISEntityTypeMapping100.url = new MFString(new java.lang.String["../data/Gramps8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv"]);
DISEntityManager96.children[3] = DISEntityTypeMapping100;

Layer33.children[6] = DISEntityManager96;

let Collision101 = browser.currentScene.createNode("Collision");
Collision101.enabled = False;
let Group102 = browser.currentScene.createNode("Group");
Group102.DEF = "AvatarHolder";
Collision101.proxy = Group102;

Layer33.children[7] = Collision101;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromField = "addedEntities";
ROUTE103.fromNode = "EntityManager";
ROUTE103.toField = "addChildren";
ROUTE103.toNode = "AvatarHolder";
Layer33.children[8] = ROUTE103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "removedEntities";
ROUTE104.fromNode = "EntityManager";
ROUTE104.toField = "removeChildren";
ROUTE104.toNode = "AvatarHolder";
Layer33.children[9] = ROUTE104;

LayerSet32.layers = new MFNode();

LayerSet32.layers[0] = Layer33;

let LayoutLayer105 = browser.currentScene.createNode("LayoutLayer");
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,0,-3]);
let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.diffuseColor = new SFColor(new float[0,0,0]);
Material109.transparency = 0.7;
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

let Box110 = browser.currentScene.createNode("Box");
Box110.size = new SFVec3f(new float[100,100,0.02]);
Shape107.geometry = Box110;

Transform106.child = new undefined();

Transform106.child[0] = Shape107;

LayoutLayer105.children = new MFNode();

LayoutLayer105.children[0] = Transform106;

//the plane sensors
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.DEF = "aSlider";
Transform111.translation = new SFVec3f(new float[0,0.7,0]);
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

let Cylinder116 = browser.currentScene.createNode("Cylinder");
Cylinder116.radius = 0.05;
Cylinder116.height = 2.5;
Shape113.geometry = Cylinder116;

Transform112.child = new undefined();

Transform112.child[0] = Shape113;

Transform111.children = new MFNode();

Transform111.children[0] = Transform112;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.DEF = "aTransform";
Transform117.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor118 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor118.DEF = "aSensor";
PlaneSensor118.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor118.maxPosition = new SFVec2f(new float[20,0]);
Transform117.children = new MFNode();

Transform117.children[0] = PlaneSensor118;

let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor120 = browser.currentScene.createNode("TouchSensor");
TouchSensor120.DEF = "aTS";
Transform119.children = new MFNode();

Transform119.children[0] = TouchSensor120;

let Shape121 = browser.currentScene.createNode("Shape");
let Sphere122 = browser.currentScene.createNode("Sphere");
Sphere122.radius = 0.08;
Shape121.geometry = Sphere122;

let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.diffuseColor = new SFColor(new float[1,0,0]);
Appearance123.material = Material124;

Shape121.appearance = Appearance123;

Transform119.child[1] = Shape121;

Transform117.children[1] = Transform119;

let Shape125 = browser.currentScene.createNode("Shape");
let Cylinder126 = browser.currentScene.createNode("Cylinder");
Cylinder126.radius = 0.05;
Cylinder126.height = 0.3;
Shape125.geometry = Cylinder126;

let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
Appearance127.material = Material128;

Shape125.appearance = Appearance127;

Transform117.child[2] = Shape125;

Transform111.children[1] = Transform117;

let Transform129 = browser.currentScene.createNode("Transform");
Transform129.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape130 = browser.currentScene.createNode("Shape");
let Appearance131 = browser.currentScene.createNode("Appearance");
let Material132 = browser.currentScene.createNode("Material");
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

let Cylinder133 = browser.currentScene.createNode("Cylinder");
Cylinder133.radius = 0.05;
Cylinder133.height = 2.5;
Shape130.geometry = Cylinder133;

Transform129.child = new undefined();

Transform129.child[0] = Shape130;

Transform111.children[2] = Transform129;

LayoutLayer105.children[1] = Transform111;

let Transform134 = browser.currentScene.createNode("Transform");
Transform134.DEF = "bSlider";
Transform134.translation = new SFVec3f(new float[0,0.4,0]);
let Transform135 = browser.currentScene.createNode("Transform");
Transform135.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape136 = browser.currentScene.createNode("Shape");
let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

let Cylinder139 = browser.currentScene.createNode("Cylinder");
Cylinder139.radius = 0.05;
Cylinder139.height = 2.5;
Shape136.geometry = Cylinder139;

Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Transform134.children = new MFNode();

Transform134.children[0] = Transform135;

let Transform140 = browser.currentScene.createNode("Transform");
Transform140.DEF = "bTransform";
Transform140.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor141 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor141.DEF = "bSensor";
PlaneSensor141.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor141.maxPosition = new SFVec2f(new float[20,0]);
Transform140.children = new MFNode();

Transform140.children[0] = PlaneSensor141;

let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor143 = browser.currentScene.createNode("TouchSensor");
TouchSensor143.DEF = "bTS";
Transform142.children = new MFNode();

Transform142.children[0] = TouchSensor143;

let Shape144 = browser.currentScene.createNode("Shape");
let Sphere145 = browser.currentScene.createNode("Sphere");
Sphere145.radius = 0.08;
Shape144.geometry = Sphere145;

let Appearance146 = browser.currentScene.createNode("Appearance");
let Material147 = browser.currentScene.createNode("Material");
Material147.diffuseColor = new SFColor(new float[1,0,0]);
Appearance146.material = Material147;

Shape144.appearance = Appearance146;

Transform142.child[1] = Shape144;

Transform140.children[1] = Transform142;

let Shape148 = browser.currentScene.createNode("Shape");
let Cylinder149 = browser.currentScene.createNode("Cylinder");
Cylinder149.radius = 0.05;
Cylinder149.height = 0.3;
Shape148.geometry = Cylinder149;

let Appearance150 = browser.currentScene.createNode("Appearance");
let Material151 = browser.currentScene.createNode("Material");
Appearance150.material = Material151;

Shape148.appearance = Appearance150;

Transform140.child[2] = Shape148;

Transform134.children[1] = Transform140;

LayoutLayer105.children[2] = Transform134;

let Transform152 = browser.currentScene.createNode("Transform");
Transform152.DEF = "cSlider";
Transform152.translation = new SFVec3f(new float[0,0.1,0]);
let Transform153 = browser.currentScene.createNode("Transform");
Transform153.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape154 = browser.currentScene.createNode("Shape");
let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
Appearance155.material = Material156;

Shape154.appearance = Appearance155;

let Cylinder157 = browser.currentScene.createNode("Cylinder");
Cylinder157.radius = 0.05;
Cylinder157.height = 2.5;
Shape154.geometry = Cylinder157;

Transform153.child = new undefined();

Transform153.child[0] = Shape154;

Transform152.children = new MFNode();

Transform152.children[0] = Transform153;

let Transform158 = browser.currentScene.createNode("Transform");
Transform158.DEF = "cTransform";
Transform158.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor159 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor159.DEF = "cSensor";
PlaneSensor159.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor159.maxPosition = new SFVec2f(new float[20,0]);
Transform158.children = new MFNode();

Transform158.children[0] = PlaneSensor159;

let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor161 = browser.currentScene.createNode("TouchSensor");
TouchSensor161.DEF = "cTS";
Transform160.children = new MFNode();

Transform160.children[0] = TouchSensor161;

let Shape162 = browser.currentScene.createNode("Shape");
let Sphere163 = browser.currentScene.createNode("Sphere");
Sphere163.radius = 0.08;
Shape162.geometry = Sphere163;

let Appearance164 = browser.currentScene.createNode("Appearance");
let Material165 = browser.currentScene.createNode("Material");
Material165.diffuseColor = new SFColor(new float[1,0,0]);
Appearance164.material = Material165;

Shape162.appearance = Appearance164;

Transform160.child[1] = Shape162;

Transform158.children[1] = Transform160;

let Shape166 = browser.currentScene.createNode("Shape");
let Cylinder167 = browser.currentScene.createNode("Cylinder");
Cylinder167.radius = 0.05;
Cylinder167.height = 0.3;
Shape166.geometry = Cylinder167;

let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Appearance168.material = Material169;

Shape166.appearance = Appearance168;

Transform158.child[2] = Shape166;

Transform152.children[1] = Transform158;

LayoutLayer105.children[3] = Transform152;

let Transform170 = browser.currentScene.createNode("Transform");
Transform170.DEF = "dSlider";
Transform170.translation = new SFVec3f(new float[0,-0.2,0]);
let Transform171 = browser.currentScene.createNode("Transform");
Transform171.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

let Cylinder175 = browser.currentScene.createNode("Cylinder");
Cylinder175.radius = 0.05;
Cylinder175.height = 2.5;
Shape172.geometry = Cylinder175;

Transform171.child = new undefined();

Transform171.child[0] = Shape172;

Transform170.children = new MFNode();

Transform170.children[0] = Transform171;

let Transform176 = browser.currentScene.createNode("Transform");
Transform176.DEF = "dTransform";
Transform176.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor177 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor177.DEF = "dSensor";
PlaneSensor177.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor177.maxPosition = new SFVec2f(new float[20,0]);
Transform176.children = new MFNode();

Transform176.children[0] = PlaneSensor177;

let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor179 = browser.currentScene.createNode("TouchSensor");
TouchSensor179.DEF = "dTS";
Transform178.children = new MFNode();

Transform178.children[0] = TouchSensor179;

let Shape180 = browser.currentScene.createNode("Shape");
let Sphere181 = browser.currentScene.createNode("Sphere");
Sphere181.radius = 0.08;
Shape180.geometry = Sphere181;

let Appearance182 = browser.currentScene.createNode("Appearance");
let Material183 = browser.currentScene.createNode("Material");
Material183.diffuseColor = new SFColor(new float[1,0,0]);
Appearance182.material = Material183;

Shape180.appearance = Appearance182;

Transform178.child[1] = Shape180;

Transform176.children[1] = Transform178;

let Shape184 = browser.currentScene.createNode("Shape");
let Cylinder185 = browser.currentScene.createNode("Cylinder");
Cylinder185.radius = 0.05;
Cylinder185.height = 0.3;
Shape184.geometry = Cylinder185;

let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Appearance186.material = Material187;

Shape184.appearance = Appearance186;

Transform176.child[2] = Shape184;

Transform170.children[1] = Transform176;

LayoutLayer105.children[4] = Transform170;

let Transform188 = browser.currentScene.createNode("Transform");
Transform188.DEF = "pdeltaSlider";
Transform188.translation = new SFVec3f(new float[0,-0.5,0]);
let Transform189 = browser.currentScene.createNode("Transform");
Transform189.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

let Cylinder193 = browser.currentScene.createNode("Cylinder");
Cylinder193.radius = 0.05;
Cylinder193.height = 2.5;
Shape190.geometry = Cylinder193;

Transform189.child = new undefined();

Transform189.child[0] = Shape190;

Transform188.children = new MFNode();

Transform188.children[0] = Transform189;

let Transform194 = browser.currentScene.createNode("Transform");
Transform194.DEF = "pdeltaTransform";
Transform194.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor195 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor195.DEF = "pdeltaSensor";
PlaneSensor195.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor195.maxPosition = new SFVec2f(new float[20,0]);
Transform194.children = new MFNode();

Transform194.children[0] = PlaneSensor195;

let Transform196 = browser.currentScene.createNode("Transform");
Transform196.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor197 = browser.currentScene.createNode("TouchSensor");
TouchSensor197.DEF = "pdeltaTS";
Transform196.children = new MFNode();

Transform196.children[0] = TouchSensor197;

let Shape198 = browser.currentScene.createNode("Shape");
let Sphere199 = browser.currentScene.createNode("Sphere");
Sphere199.radius = 0.08;
Shape198.geometry = Sphere199;

let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.diffuseColor = new SFColor(new float[1,0,0]);
Appearance200.material = Material201;

Shape198.appearance = Appearance200;

Transform196.child[1] = Shape198;

Transform194.children[1] = Transform196;

let Shape202 = browser.currentScene.createNode("Shape");
let Cylinder203 = browser.currentScene.createNode("Cylinder");
Cylinder203.radius = 0.05;
Cylinder203.height = 0.3;
Shape202.geometry = Cylinder203;

let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Appearance204.material = Material205;

Shape202.appearance = Appearance204;

Transform194.child[2] = Shape202;

Transform188.children[1] = Transform194;

LayoutLayer105.children[5] = Transform188;

let Transform206 = browser.currentScene.createNode("Transform");
Transform206.DEF = "tdeltaSlider";
Transform206.translation = new SFVec3f(new float[0,-0.8,0]);
let Transform207 = browser.currentScene.createNode("Transform");
Transform207.rotation = new SFRotation(new float[0,0,1,1.57]);
let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

let Cylinder211 = browser.currentScene.createNode("Cylinder");
Cylinder211.radius = 0.05;
Cylinder211.height = 2.5;
Shape208.geometry = Cylinder211;

Transform207.child = new undefined();

Transform207.child[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Transform207;

let Transform212 = browser.currentScene.createNode("Transform");
Transform212.DEF = "tdeltaTransform";
Transform212.translation = new SFVec3f(new float[0,0,0.1]);
let PlaneSensor213 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor213.DEF = "tdeltaSensor";
PlaneSensor213.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor213.maxPosition = new SFVec2f(new float[20,0]);
Transform212.children = new MFNode();

Transform212.children[0] = PlaneSensor213;

let Transform214 = browser.currentScene.createNode("Transform");
Transform214.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.DEF = "tdeltaTS";
Transform214.children = new MFNode();

Transform214.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
let Sphere217 = browser.currentScene.createNode("Sphere");
Sphere217.radius = 0.08;
Shape216.geometry = Sphere217;

let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.diffuseColor = new SFColor(new float[1,0,0]);
Appearance218.material = Material219;

Shape216.appearance = Appearance218;

Transform214.child[1] = Shape216;

Transform212.children[1] = Transform214;

let Shape220 = browser.currentScene.createNode("Shape");
let Cylinder221 = browser.currentScene.createNode("Cylinder");
Cylinder221.radius = 0.05;
Cylinder221.height = 0.3;
Shape220.geometry = Cylinder221;

let Appearance222 = browser.currentScene.createNode("Appearance");
let Material223 = browser.currentScene.createNode("Material");
Appearance222.material = Material223;

Shape220.appearance = Appearance222;

Transform212.child[2] = Shape220;

Transform206.children[1] = Transform212;

LayoutLayer105.children[6] = Transform206;

let Script224 = browser.currentScene.createNode("Script");
Script224.DEF = "aValueTransformerScript";
Script224.directOutput = True;
Script224.mustEvaluate = True;
let field225 = browser.currentScene.createNode("field");
field225.name = "newTranslation";
field225.accessType = "inputOnly";
field225.type = "SFVec3f";
field225.value = "1 1 1";
Script224.field = new MFNode();

Script224.field[0] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "aValue";
field226.accessType = "outputOnly";
field226.type = "SFFloat";
field226.value = "1";
Script224.field[1] = field226;


Script224.setSourceCode(`ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }`)
LayoutLayer105.children[7] = Script224;

let Script227 = browser.currentScene.createNode("Script");
Script227.DEF = "bValueTransformerScript";
Script227.directOutput = True;
Script227.mustEvaluate = True;
let field228 = browser.currentScene.createNode("field");
field228.name = "newTranslation";
field228.accessType = "inputOnly";
field228.type = "SFVec3f";
field228.value = "1 1 1";
Script227.field = new MFNode();

Script227.field[0] = field228;

let field229 = browser.currentScene.createNode("field");
field229.name = "bValue";
field229.accessType = "outputOnly";
field229.type = "SFFloat";
field229.value = "1";
Script227.field[1] = field229;


Script227.setSourceCode(`ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }`)
LayoutLayer105.children[8] = Script227;

let Script230 = browser.currentScene.createNode("Script");
Script230.DEF = "cValueTransformerScript";
Script230.directOutput = True;
Script230.mustEvaluate = True;
let field231 = browser.currentScene.createNode("field");
field231.name = "newTranslation";
field231.accessType = "inputOnly";
field231.type = "SFVec3f";
field231.value = "1 1 1";
Script230.field = new MFNode();

Script230.field[0] = field231;

let field232 = browser.currentScene.createNode("field");
field232.name = "cValue";
field232.accessType = "outputOnly";
field232.type = "SFFloat";
field232.value = "1";
Script230.field[1] = field232;


Script230.setSourceCode(`ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }`)
LayoutLayer105.children[9] = Script230;

let Script233 = browser.currentScene.createNode("Script");
Script233.DEF = "dValueTransformerScript";
Script233.directOutput = True;
Script233.mustEvaluate = True;
let field234 = browser.currentScene.createNode("field");
field234.name = "newTranslation";
field234.accessType = "inputOnly";
field234.type = "SFVec3f";
field234.value = "1 1 1";
Script233.field = new MFNode();

Script233.field[0] = field234;

let field235 = browser.currentScene.createNode("field");
field235.name = "dValue";
field235.accessType = "outputOnly";
field235.type = "SFFloat";
field235.value = "1";
Script233.field[1] = field235;


Script233.setSourceCode(`ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }`)
LayoutLayer105.children[10] = Script233;

let Script236 = browser.currentScene.createNode("Script");
Script236.DEF = "pdeltaValueTransformerScript";
Script236.directOutput = True;
Script236.mustEvaluate = True;
let field237 = browser.currentScene.createNode("field");
field237.name = "newTranslation";
field237.accessType = "inputOnly";
field237.type = "SFVec3f";
field237.value = "1 1 1";
Script236.field = new MFNode();

Script236.field[0] = field237;

let field238 = browser.currentScene.createNode("field");
field238.name = "pdeltaValue";
field238.accessType = "outputOnly";
field238.type = "SFFloat";
field238.value = "1";
Script236.field[1] = field238;


Script236.setSourceCode(`ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }`)
LayoutLayer105.children[11] = Script236;

let Script239 = browser.currentScene.createNode("Script");
Script239.DEF = "tdeltaValueTransformerScript";
Script239.directOutput = True;
Script239.mustEvaluate = True;
let field240 = browser.currentScene.createNode("field");
field240.name = "newTranslation";
field240.accessType = "inputOnly";
field240.type = "SFVec3f";
field240.value = "1 1 1";
Script239.field = new MFNode();

Script239.field[0] = field240;

let field241 = browser.currentScene.createNode("field");
field241.name = "tdeltaValue";
field241.accessType = "outputOnly";
field241.type = "SFFloat";
field241.value = "1";
Script239.field[1] = field241;


Script239.setSourceCode(`ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }`)
LayoutLayer105.children[12] = Script239;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromField = "translation_changed";
ROUTE242.fromNode = "aSensor";
ROUTE242.toField = "set_translation";
ROUTE242.toNode = "aTransform";
LayoutLayer105.children[13] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromField = "translation_changed";
ROUTE243.fromNode = "bSensor";
ROUTE243.toField = "set_translation";
ROUTE243.toNode = "bTransform";
LayoutLayer105.children[14] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromField = "translation_changed";
ROUTE244.fromNode = "cSensor";
ROUTE244.toField = "set_translation";
ROUTE244.toNode = "cTransform";
LayoutLayer105.children[15] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromField = "translation_changed";
ROUTE245.fromNode = "dSensor";
ROUTE245.toField = "set_translation";
ROUTE245.toNode = "dTransform";
LayoutLayer105.children[16] = ROUTE245;

let ROUTE246 = browser.currentScene.createNode("ROUTE");
ROUTE246.fromField = "translation_changed";
ROUTE246.fromNode = "pdeltaSensor";
ROUTE246.toField = "set_translation";
ROUTE246.toNode = "pdeltaTransform";
LayoutLayer105.children[17] = ROUTE246;

let ROUTE247 = browser.currentScene.createNode("ROUTE");
ROUTE247.fromField = "translation_changed";
ROUTE247.fromNode = "tdeltaSensor";
ROUTE247.toField = "set_translation";
ROUTE247.toNode = "tdeltaTransform";
LayoutLayer105.children[18] = ROUTE247;

let ROUTE248 = browser.currentScene.createNode("ROUTE");
ROUTE248.fromField = "translation_changed";
ROUTE248.fromNode = "aSensor";
ROUTE248.toField = "newTranslation";
ROUTE248.toNode = "aValueTransformerScript";
LayoutLayer105.children[19] = ROUTE248;

let ROUTE249 = browser.currentScene.createNode("ROUTE");
ROUTE249.fromField = "translation_changed";
ROUTE249.fromNode = "bSensor";
ROUTE249.toField = "newTranslation";
ROUTE249.toNode = "bValueTransformerScript";
LayoutLayer105.children[20] = ROUTE249;

let ROUTE250 = browser.currentScene.createNode("ROUTE");
ROUTE250.fromField = "translation_changed";
ROUTE250.fromNode = "cSensor";
ROUTE250.toField = "newTranslation";
ROUTE250.toNode = "cValueTransformerScript";
LayoutLayer105.children[21] = ROUTE250;

let ROUTE251 = browser.currentScene.createNode("ROUTE");
ROUTE251.fromField = "translation_changed";
ROUTE251.fromNode = "dSensor";
ROUTE251.toField = "newTranslation";
ROUTE251.toNode = "dValueTransformerScript";
LayoutLayer105.children[22] = ROUTE251;

let ROUTE252 = browser.currentScene.createNode("ROUTE");
ROUTE252.fromField = "translation_changed";
ROUTE252.fromNode = "pdeltaSensor";
ROUTE252.toField = "newTranslation";
ROUTE252.toNode = "pdeltaValueTransformerScript";
LayoutLayer105.children[23] = ROUTE252;

let ROUTE253 = browser.currentScene.createNode("ROUTE");
ROUTE253.fromField = "translation_changed";
ROUTE253.fromNode = "tdeltaSensor";
ROUTE253.toField = "newTranslation";
ROUTE253.toNode = "tdeltaValueTransformerScript";
LayoutLayer105.children[24] = ROUTE253;

let ROUTE254 = browser.currentScene.createNode("ROUTE");
ROUTE254.fromField = "aValue";
ROUTE254.fromNode = "aValueTransformerScript";
ROUTE254.toField = "a";
ROUTE254.toNode = "freewrlShader";
LayoutLayer105.children[25] = ROUTE254;

let ROUTE255 = browser.currentScene.createNode("ROUTE");
ROUTE255.fromField = "bValue";
ROUTE255.fromNode = "bValueTransformerScript";
ROUTE255.toField = "b";
ROUTE255.toNode = "freewrlShader";
LayoutLayer105.children[26] = ROUTE255;

let ROUTE256 = browser.currentScene.createNode("ROUTE");
ROUTE256.fromField = "cValue";
ROUTE256.fromNode = "cValueTransformerScript";
ROUTE256.toField = "c";
ROUTE256.toNode = "freewrlShader";
LayoutLayer105.children[27] = ROUTE256;

let ROUTE257 = browser.currentScene.createNode("ROUTE");
ROUTE257.fromField = "dValue";
ROUTE257.fromNode = "dValueTransformerScript";
ROUTE257.toField = "d";
ROUTE257.toNode = "freewrlShader";
LayoutLayer105.children[28] = ROUTE257;

let ROUTE258 = browser.currentScene.createNode("ROUTE");
ROUTE258.fromField = "pdeltaValue";
ROUTE258.fromNode = "pdeltaValueTransformerScript";
ROUTE258.toField = "pdelta";
ROUTE258.toNode = "freewrlShader";
LayoutLayer105.children[29] = ROUTE258;

let ROUTE259 = browser.currentScene.createNode("ROUTE");
ROUTE259.fromField = "tdeltaValue";
ROUTE259.fromNode = "tdeltaValueTransformerScript";
ROUTE259.toField = "tdelta";
ROUTE259.toNode = "freewrlShader";
LayoutLayer105.children[30] = ROUTE259;

let Layout260 = browser.currentScene.createNode("Layout");
Layout260.align = new MFString(new java.lang.String["RIGHT","BOTTOM"]);
Layout260.offset = new MFFloat(new float[0,0]);
Layout260.offsetUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
Layout260.scaleMode = new MFString(new java.lang.String["NONE","NONE"]);
Layout260.size = new MFFloat(new float[0.4,1]);
Layout260.sizeUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
LayoutLayer105.layout = Layout260;

let Viewport261 = browser.currentScene.createNode("Viewport");
Viewport261.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer105.viewport = Viewport261;

LayerSet32.layers[1] = LayoutLayer105;

browser.currentScene.layerSet = new undefined();

browser.currentScene.layerSet[0] = LayerSet32;

