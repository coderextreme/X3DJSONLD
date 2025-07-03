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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "DIS";
component10.level = 2;
head1.component[8] = component10;

//<component name='Shape' level='4'></component>
//Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
meta meta11 = createNode("meta");
meta11.name = "title";
meta11.content = "bumpyx_itesliders.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "*enter description here, short-sentence summaries preferred*";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "creator";
meta13.content = "Doug Sanden, Christoph Valentin, John Carlson";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "translator";
meta14.content = "*if manually translating VRML-to-X3D, enter name of person translating here*";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "created";
meta15.content = "*enter date of initial version here*";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "translated";
meta16.content = "*enter date of translation here*";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "modified";
meta17.content = "*enter date of latest revision here*";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "version";
meta18.content = "*enter version here, if any*";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "*enter reference citation or relative/online url here*";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "*enter additional url/bibliographic reference information here*";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "requires";
meta21.content = "*enter reference resource here if required to support function, delivery, or coherence of content*";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "rights";
meta22.content = "*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "drawing";
meta23.content = "*enter drawing filename/url here*";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "MovingImage";
meta24.content = "*enter movie filename/url here*";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "photo";
meta25.content = "*enter photo filename/url here*";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "subject";
meta26.content = "*enter subject keywords here*";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "accessRights";
meta27.content = "*enter permission statements or url here*";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "identifier";
meta28.content = "*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "generator";
meta29.content = "PSPad, http://www.pspad.com/";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "license";
meta30.content = "license.html";
head1.meta[28] = meta30;

head = head1;

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
//LayerSet with two layers, navigation happens in layer 1
LayerSet LayerSet32 = createNode("LayerSet");
LayerSet32.activeLayer = 1;
LayerSet32.order = new MFInt32(new int[1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer Layer33 = createNode("Layer");
Layer33.pickable = True;
Layer33.objectType = new MFString(new java.lang.String["ALL"]);
//basic nodes, which might be present in any scene
NavigationInfo NavigationInfo34 = createNode("NavigationInfo");
NavigationInfo34.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo34.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
Layer33.children = new MFNode();

Layer33.children[0] = NavigationInfo34;

DirectionalLight DirectionalLight35 = createNode("DirectionalLight");
DirectionalLight35.ambientIntensity = 0.2;
DirectionalLight35.direction = new SFVec3f(new float[0,-1,0]);
Layer33.children[1] = DirectionalLight35;

DirectionalLight DirectionalLight36 = createNode("DirectionalLight");
DirectionalLight36.ambientIntensity = 0.2;
DirectionalLight36.direction = new SFVec3f(new float[-1,-0.1,-1]);
Layer33.children[2] = DirectionalLight36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "My Overview";
Viewpoint37.fieldOfView = 1.570796;
Viewpoint37.position = new SFVec3f(new float[0,1.75,60]);
Layer33.children[3] = Viewpoint37;

//this group contains the red/green/blue 3D crosshair
Group Group38 = createNode("Group");
//Arrow X
Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[25,0,0]);
Transform39.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape40 = createNode("Shape");
Cylinder Cylinder41 = createNode("Cylinder");
Cylinder41.DEF = "Shaft";
Cylinder41.radius = 0.35;
Cylinder41.height = 50;
Shape40.geometry = Cylinder41;

Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.DEF = "RED";
Material43.diffuseColor = new SFColor(new float[1,0,0]);
Material43.emissiveColor = new SFColor(new float[1,0,0]);
Appearance42.material = Material43;

Shape40.appearance = Appearance42;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Group38.children = new MFNode();

Group38.children[0] = Transform39;

Transform Transform44 = createNode("Transform");
Transform44.translation = new SFVec3f(new float[50,0,0]);
Transform44.rotation = new SFRotation(new float[0,0,-1,1.57]);
Shape Shape45 = createNode("Shape");
Cone Cone46 = createNode("Cone");
Cone46.DEF = "Tip";
Cone46.bottomRadius = 0.8;
Cone46.height = 3;
Shape45.geometry = Cone46;

Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.USE = "RED";
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Group38.children[1] = Transform44;

//Arrow Y
Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,25,0]);
Shape Shape50 = createNode("Shape");
Cylinder Cylinder51 = createNode("Cylinder");
Cylinder51.USE = "Shaft";
Shape50.geometry = Cylinder51;

Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.DEF = "GREEN";
Material53.diffuseColor = new SFColor(new float[0,1,0]);
Material53.emissiveColor = new SFColor(new float[0,1,0]);
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Group38.children[2] = Transform49;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,50,0]);
Shape Shape55 = createNode("Shape");
Cone Cone56 = createNode("Cone");
Cone56.USE = "Tip";
Shape55.geometry = Cone56;

Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.USE = "GREEN";
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Group38.children[3] = Transform54;

//Arrow Z
Transform Transform59 = createNode("Transform");
Transform59.translation = new SFVec3f(new float[0,0,25]);
Transform59.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape60 = createNode("Shape");
Cylinder Cylinder61 = createNode("Cylinder");
Cylinder61.USE = "Shaft";
Shape60.geometry = Cylinder61;

Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.DEF = "BLUE";
Material63.diffuseColor = new SFColor(new float[0,0,1]);
Material63.emissiveColor = new SFColor(new float[0,0,1]);
Appearance62.material = Material63;

Shape60.appearance = Appearance62;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Group38.children[4] = Transform59;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,0,50]);
Transform64.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape65 = createNode("Shape");
Cone Cone66 = createNode("Cone");
Cone66.USE = "Tip";
Shape65.geometry = Cone66;

Appearance Appearance67 = createNode("Appearance");
Material Material68 = createNode("Material");
Material68.USE = "BLUE";
Appearance67.material = Material68;

Shape65.appearance = Appearance67;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

Group38.children[5] = Transform64;

Layer33.children[4] = Group38;

//the model that is being reviewed by the users of this scene
Transform Transform69 = createNode("Transform");
Transform69.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background70 = createNode("Background");
Background70.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background70.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background70.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background70.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background70.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background70.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Transform69.children = new MFNode();

Transform69.children[0] = Background70;

Transform Transform71 = createNode("Transform");
Shape Shape72 = createNode("Shape");
Sphere Sphere73 = createNode("Sphere");
Sphere73.radius = 40;
Shape72.geometry = Sphere73;

Appearance Appearance74 = createNode("Appearance");
Material Material75 = createNode("Material");
Material75.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material75.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance74.material = Material75;

ComposedCubeMapTexture ComposedCubeMapTexture76 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture76.DEF = "texture";
ImageTexture ImageTexture77 = createNode("ImageTexture");
ImageTexture77.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture76.topTexture = ImageTexture77;

ImageTexture ImageTexture78 = createNode("ImageTexture");
ImageTexture78.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture76.topTexture = ImageTexture78;

ImageTexture ImageTexture79 = createNode("ImageTexture");
ImageTexture79.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture76.topTexture = ImageTexture79;

ImageTexture ImageTexture80 = createNode("ImageTexture");
ImageTexture80.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture76.topTexture = ImageTexture80;

ImageTexture ImageTexture81 = createNode("ImageTexture");
ImageTexture81.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture76.topTexture = ImageTexture81;

ImageTexture ImageTexture82 = createNode("ImageTexture");
ImageTexture82.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture76.topTexture = ImageTexture82;

Appearance74.texture = ComposedCubeMapTexture76;

ComposedShader ComposedShader83 = createNode("ComposedShader");
ComposedShader83.DEF = "x_iteShader";
ComposedShader83.language = "GLSL";
field field84 = createNode("field");
field84.name = "chromaticDispertion";
field84.accessType = "inputOnly";
field84.type = "SFVec3f";
field84.value = "0.98 1 1.033";
ComposedShader83.field = new MFNode();

ComposedShader83.field[0] = field84;

field field85 = createNode("field");
field85.name = "cube";
field85.type = "SFNode";
field85.accessType = "inputOnly";
ComposedCubeMapTexture ComposedCubeMapTexture86 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture86.USE = "texture";
field85.children = new MFNode();

field85.children[0] = ComposedCubeMapTexture86;

ComposedShader83.field[1] = field85;

field field87 = createNode("field");
field87.name = "bias";
field87.type = "SFFloat";
field87.accessType = "inputOnly";
field87.value = "0.5";
ComposedShader83.field[2] = field87;

field field88 = createNode("field");
field88.name = "scale";
field88.type = "SFFloat";
field88.accessType = "inputOnly";
field88.value = "0.5";
ComposedShader83.field[3] = field88;

field field89 = createNode("field");
field89.name = "power";
field89.type = "SFFloat";
field89.accessType = "inputOnly";
field89.value = "2";
ComposedShader83.field[4] = field89;

field field90 = createNode("field");
field90.name = "a";
field90.type = "SFFloat";
field90.accessType = "inputOutput";
field90.value = "15";
ComposedShader83.field[5] = field90;

field field91 = createNode("field");
field91.name = "b";
field91.type = "SFFloat";
field91.accessType = "inputOutput";
field91.value = "5";
ComposedShader83.field[6] = field91;

field field92 = createNode("field");
field92.name = "c";
field92.type = "SFFloat";
field92.accessType = "inputOutput";
field92.value = "5";
ComposedShader83.field[7] = field92;

field field93 = createNode("field");
field93.name = "d";
field93.type = "SFFloat";
field93.accessType = "inputOutput";
field93.value = "5";
ComposedShader83.field[8] = field93;

field field94 = createNode("field");
field94.name = "tdelta";
field94.type = "SFFloat";
field94.accessType = "inputOutput";
field94.value = "0";
ComposedShader83.field[9] = field94;

field field95 = createNode("field");
field95.name = "pdelta";
field95.type = "SFFloat";
field95.accessType = "inputOutput";
field95.value = "0";
ComposedShader83.field[10] = field95;

ShaderPart ShaderPart96 = createNode("ShaderPart");
ShaderPart96.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart96.type = "VERTEX";
ComposedShader83.parts[11] = ShaderPart96;

ShaderPart ShaderPart97 = createNode("ShaderPart");
ShaderPart97.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart97.type = "FRAGMENT";
ComposedShader83.parts[12] = ShaderPart97;

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance74.shaders = new MFNode();

Appearance74.shaders[0] = ComposedShader83;

Shape72.appearance = Appearance74;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Transform69.children[1] = Transform71;

Layer33.children[5] = Transform69;

//DIS multiuser facilities
DISEntityManager DISEntityManager98 = createNode("DISEntityManager");
DISEntityManager98.DEF = "EntityManager";
DISEntityTypeMapping DISEntityTypeMapping99 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping99.category = 77;
DISEntityTypeMapping99.specific = 1;
DISEntityTypeMapping99.url = new MFString(new java.lang.String["Leif8Final.x3d"]);
DISEntityManager98.children = new MFNode();

DISEntityManager98.children[0] = DISEntityTypeMapping99;

DISEntityTypeMapping DISEntityTypeMapping100 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping100.category = 77;
DISEntityTypeMapping100.specific = 2;
DISEntityTypeMapping100.url = new MFString(new java.lang.String["Lily8Final.x3d"]);
DISEntityManager98.children[1] = DISEntityTypeMapping100;

Layer33.children[6] = DISEntityManager98;

Collision Collision101 = createNode("Collision");
Collision101.enabled = False;
Group Group102 = createNode("Group");
Group102.DEF = "AvatarHolder";
Collision101.proxy = Group102;

Layer33.children[7] = Collision101;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromField = "addedEntities";
ROUTE103.fromNode = "EntityManager";
ROUTE103.toField = "addChildren";
ROUTE103.toNode = "AvatarHolder";
Layer33.children[8] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromField = "removedEntities";
ROUTE104.fromNode = "EntityManager";
ROUTE104.toField = "removeChildren";
ROUTE104.toNode = "AvatarHolder";
Layer33.children[9] = ROUTE104;

LayerSet32.layers = new MFNode();

LayerSet32.layers[0] = Layer33;

LayoutLayer LayoutLayer105 = createNode("LayoutLayer");
LayoutLayer105.pickable = True;
LayoutLayer105.objectType = new MFString(new java.lang.String["ALL"]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,0,-3]);
Shape Shape107 = createNode("Shape");
Appearance Appearance108 = createNode("Appearance");
Material Material109 = createNode("Material");
Material109.diffuseColor = new SFColor(new float[0,0,0]);
Material109.transparency = 0.7;
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

Box Box110 = createNode("Box");
Box110.size = new SFVec3f(new float[100,100,0.02]);
Shape107.geometry = Box110;

Transform106.child = new undefined();

Transform106.child[0] = Shape107;

LayoutLayer105.children = new MFNode();

LayoutLayer105.children[0] = Transform106;

//the plane sensors
Transform Transform111 = createNode("Transform");
Transform111.DEF = "aSlider";
Transform111.translation = new SFVec3f(new float[0,0.7,0]);
Transform Transform112 = createNode("Transform");
Transform112.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape113 = createNode("Shape");
Appearance Appearance114 = createNode("Appearance");
Material Material115 = createNode("Material");
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

Cylinder Cylinder116 = createNode("Cylinder");
Cylinder116.radius = 0.05;
Cylinder116.height = 2.5;
Shape113.geometry = Cylinder116;

Transform112.child = new undefined();

Transform112.child[0] = Shape113;

Transform111.children = new MFNode();

Transform111.children[0] = Transform112;

Transform Transform117 = createNode("Transform");
Transform117.DEF = "aTransform";
Transform117.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor118 = createNode("PlaneSensor");
PlaneSensor118.DEF = "aSensor";
PlaneSensor118.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor118.maxPosition = new SFVec2f(new float[20,0]);
Transform117.children = new MFNode();

Transform117.children[0] = PlaneSensor118;

Transform Transform119 = createNode("Transform");
Transform119.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor120 = createNode("TouchSensor");
TouchSensor120.DEF = "aTS";
Transform119.children = new MFNode();

Transform119.children[0] = TouchSensor120;

Shape Shape121 = createNode("Shape");
Sphere Sphere122 = createNode("Sphere");
Sphere122.radius = 0.08;
Shape121.geometry = Sphere122;

Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.diffuseColor = new SFColor(new float[1,0,0]);
Appearance123.material = Material124;

Shape121.appearance = Appearance123;

Transform119.child[1] = Shape121;

Transform117.children[1] = Transform119;

Shape Shape125 = createNode("Shape");
Cylinder Cylinder126 = createNode("Cylinder");
Cylinder126.radius = 0.05;
Cylinder126.height = 0.3;
Shape125.geometry = Cylinder126;

Appearance Appearance127 = createNode("Appearance");
Material Material128 = createNode("Material");
Appearance127.material = Material128;

Shape125.appearance = Appearance127;

Transform117.child[2] = Shape125;

Transform111.children[1] = Transform117;

Transform Transform129 = createNode("Transform");
Transform129.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape130 = createNode("Shape");
Appearance Appearance131 = createNode("Appearance");
Material Material132 = createNode("Material");
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

Cylinder Cylinder133 = createNode("Cylinder");
Cylinder133.radius = 0.05;
Cylinder133.height = 2.5;
Shape130.geometry = Cylinder133;

Transform129.child = new undefined();

Transform129.child[0] = Shape130;

Transform111.children[2] = Transform129;

LayoutLayer105.children[1] = Transform111;

Transform Transform134 = createNode("Transform");
Transform134.DEF = "bSlider";
Transform134.translation = new SFVec3f(new float[0,0.4,0]);
Transform Transform135 = createNode("Transform");
Transform135.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

Cylinder Cylinder139 = createNode("Cylinder");
Cylinder139.radius = 0.05;
Cylinder139.height = 2.5;
Shape136.geometry = Cylinder139;

Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Transform134.children = new MFNode();

Transform134.children[0] = Transform135;

Transform Transform140 = createNode("Transform");
Transform140.DEF = "bTransform";
Transform140.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor141 = createNode("PlaneSensor");
PlaneSensor141.DEF = "bSensor";
PlaneSensor141.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor141.maxPosition = new SFVec2f(new float[20,0]);
Transform140.children = new MFNode();

Transform140.children[0] = PlaneSensor141;

Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor143 = createNode("TouchSensor");
TouchSensor143.DEF = "bTS";
Transform142.children = new MFNode();

Transform142.children[0] = TouchSensor143;

Shape Shape144 = createNode("Shape");
Sphere Sphere145 = createNode("Sphere");
Sphere145.radius = 0.08;
Shape144.geometry = Sphere145;

Appearance Appearance146 = createNode("Appearance");
Material Material147 = createNode("Material");
Material147.diffuseColor = new SFColor(new float[1,0,0]);
Appearance146.material = Material147;

Shape144.appearance = Appearance146;

Transform142.child[1] = Shape144;

Transform140.children[1] = Transform142;

Shape Shape148 = createNode("Shape");
Cylinder Cylinder149 = createNode("Cylinder");
Cylinder149.radius = 0.05;
Cylinder149.height = 0.3;
Shape148.geometry = Cylinder149;

Appearance Appearance150 = createNode("Appearance");
Material Material151 = createNode("Material");
Appearance150.material = Material151;

Shape148.appearance = Appearance150;

Transform140.child[2] = Shape148;

Transform134.children[1] = Transform140;

LayoutLayer105.children[2] = Transform134;

Transform Transform152 = createNode("Transform");
Transform152.DEF = "cSlider";
Transform152.translation = new SFVec3f(new float[0,0.1,0]);
Transform Transform153 = createNode("Transform");
Transform153.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape154 = createNode("Shape");
Appearance Appearance155 = createNode("Appearance");
Material Material156 = createNode("Material");
Appearance155.material = Material156;

Shape154.appearance = Appearance155;

Cylinder Cylinder157 = createNode("Cylinder");
Cylinder157.radius = 0.05;
Cylinder157.height = 2.5;
Shape154.geometry = Cylinder157;

Transform153.child = new undefined();

Transform153.child[0] = Shape154;

Transform152.children = new MFNode();

Transform152.children[0] = Transform153;

Transform Transform158 = createNode("Transform");
Transform158.DEF = "cTransform";
Transform158.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor159 = createNode("PlaneSensor");
PlaneSensor159.DEF = "cSensor";
PlaneSensor159.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor159.maxPosition = new SFVec2f(new float[20,0]);
Transform158.children = new MFNode();

Transform158.children[0] = PlaneSensor159;

Transform Transform160 = createNode("Transform");
Transform160.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor161 = createNode("TouchSensor");
TouchSensor161.DEF = "cTS";
Transform160.children = new MFNode();

Transform160.children[0] = TouchSensor161;

Shape Shape162 = createNode("Shape");
Sphere Sphere163 = createNode("Sphere");
Sphere163.radius = 0.08;
Shape162.geometry = Sphere163;

Appearance Appearance164 = createNode("Appearance");
Material Material165 = createNode("Material");
Material165.diffuseColor = new SFColor(new float[1,0,0]);
Appearance164.material = Material165;

Shape162.appearance = Appearance164;

Transform160.child[1] = Shape162;

Transform158.children[1] = Transform160;

Shape Shape166 = createNode("Shape");
Cylinder Cylinder167 = createNode("Cylinder");
Cylinder167.radius = 0.05;
Cylinder167.height = 0.3;
Shape166.geometry = Cylinder167;

Appearance Appearance168 = createNode("Appearance");
Material Material169 = createNode("Material");
Appearance168.material = Material169;

Shape166.appearance = Appearance168;

Transform158.child[2] = Shape166;

Transform152.children[1] = Transform158;

LayoutLayer105.children[3] = Transform152;

Transform Transform170 = createNode("Transform");
Transform170.DEF = "dSlider";
Transform170.translation = new SFVec3f(new float[0,-0.2,0]);
Transform Transform171 = createNode("Transform");
Transform171.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape172 = createNode("Shape");
Appearance Appearance173 = createNode("Appearance");
Material Material174 = createNode("Material");
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

Cylinder Cylinder175 = createNode("Cylinder");
Cylinder175.radius = 0.05;
Cylinder175.height = 2.5;
Shape172.geometry = Cylinder175;

Transform171.child = new undefined();

Transform171.child[0] = Shape172;

Transform170.children = new MFNode();

Transform170.children[0] = Transform171;

Transform Transform176 = createNode("Transform");
Transform176.DEF = "dTransform";
Transform176.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor177 = createNode("PlaneSensor");
PlaneSensor177.DEF = "dSensor";
PlaneSensor177.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor177.maxPosition = new SFVec2f(new float[20,0]);
Transform176.children = new MFNode();

Transform176.children[0] = PlaneSensor177;

Transform Transform178 = createNode("Transform");
Transform178.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor179 = createNode("TouchSensor");
TouchSensor179.DEF = "dTS";
Transform178.children = new MFNode();

Transform178.children[0] = TouchSensor179;

Shape Shape180 = createNode("Shape");
Sphere Sphere181 = createNode("Sphere");
Sphere181.radius = 0.08;
Shape180.geometry = Sphere181;

Appearance Appearance182 = createNode("Appearance");
Material Material183 = createNode("Material");
Material183.diffuseColor = new SFColor(new float[1,0,0]);
Appearance182.material = Material183;

Shape180.appearance = Appearance182;

Transform178.child[1] = Shape180;

Transform176.children[1] = Transform178;

Shape Shape184 = createNode("Shape");
Cylinder Cylinder185 = createNode("Cylinder");
Cylinder185.radius = 0.05;
Cylinder185.height = 0.3;
Shape184.geometry = Cylinder185;

Appearance Appearance186 = createNode("Appearance");
Material Material187 = createNode("Material");
Appearance186.material = Material187;

Shape184.appearance = Appearance186;

Transform176.child[2] = Shape184;

Transform170.children[1] = Transform176;

LayoutLayer105.children[4] = Transform170;

Transform Transform188 = createNode("Transform");
Transform188.DEF = "pdeltaSlider";
Transform188.translation = new SFVec3f(new float[0,-0.5,0]);
Transform Transform189 = createNode("Transform");
Transform189.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape190 = createNode("Shape");
Appearance Appearance191 = createNode("Appearance");
Material Material192 = createNode("Material");
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

Cylinder Cylinder193 = createNode("Cylinder");
Cylinder193.radius = 0.05;
Cylinder193.height = 2.5;
Shape190.geometry = Cylinder193;

Transform189.child = new undefined();

Transform189.child[0] = Shape190;

Transform188.children = new MFNode();

Transform188.children[0] = Transform189;

Transform Transform194 = createNode("Transform");
Transform194.DEF = "pdeltaTransform";
Transform194.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor195 = createNode("PlaneSensor");
PlaneSensor195.DEF = "pdeltaSensor";
PlaneSensor195.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor195.maxPosition = new SFVec2f(new float[20,0]);
Transform194.children = new MFNode();

Transform194.children[0] = PlaneSensor195;

Transform Transform196 = createNode("Transform");
Transform196.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor197 = createNode("TouchSensor");
TouchSensor197.DEF = "pdeltaTS";
Transform196.children = new MFNode();

Transform196.children[0] = TouchSensor197;

Shape Shape198 = createNode("Shape");
Sphere Sphere199 = createNode("Sphere");
Sphere199.radius = 0.08;
Shape198.geometry = Sphere199;

Appearance Appearance200 = createNode("Appearance");
Material Material201 = createNode("Material");
Material201.diffuseColor = new SFColor(new float[1,0,0]);
Appearance200.material = Material201;

Shape198.appearance = Appearance200;

Transform196.child[1] = Shape198;

Transform194.children[1] = Transform196;

Shape Shape202 = createNode("Shape");
Cylinder Cylinder203 = createNode("Cylinder");
Cylinder203.radius = 0.05;
Cylinder203.height = 0.3;
Shape202.geometry = Cylinder203;

Appearance Appearance204 = createNode("Appearance");
Material Material205 = createNode("Material");
Appearance204.material = Material205;

Shape202.appearance = Appearance204;

Transform194.child[2] = Shape202;

Transform188.children[1] = Transform194;

LayoutLayer105.children[5] = Transform188;

Transform Transform206 = createNode("Transform");
Transform206.DEF = "tdeltaSlider";
Transform206.translation = new SFVec3f(new float[0,-0.8,0]);
Transform Transform207 = createNode("Transform");
Transform207.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape208 = createNode("Shape");
Appearance Appearance209 = createNode("Appearance");
Material Material210 = createNode("Material");
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

Cylinder Cylinder211 = createNode("Cylinder");
Cylinder211.radius = 0.05;
Cylinder211.height = 2.5;
Shape208.geometry = Cylinder211;

Transform207.child = new undefined();

Transform207.child[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Transform207;

Transform Transform212 = createNode("Transform");
Transform212.DEF = "tdeltaTransform";
Transform212.translation = new SFVec3f(new float[0,0,0.1]);
PlaneSensor PlaneSensor213 = createNode("PlaneSensor");
PlaneSensor213.DEF = "tdeltaSensor";
PlaneSensor213.minPosition = new SFVec2f(new float[-20,0]);
PlaneSensor213.maxPosition = new SFVec2f(new float[20,0]);
Transform212.children = new MFNode();

Transform212.children[0] = PlaneSensor213;

Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.DEF = "tdeltaTS";
Transform214.children = new MFNode();

Transform214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Sphere Sphere217 = createNode("Sphere");
Sphere217.radius = 0.08;
Shape216.geometry = Sphere217;

Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.diffuseColor = new SFColor(new float[1,0,0]);
Appearance218.material = Material219;

Shape216.appearance = Appearance218;

Transform214.child[1] = Shape216;

Transform212.children[1] = Transform214;

Shape Shape220 = createNode("Shape");
Cylinder Cylinder221 = createNode("Cylinder");
Cylinder221.radius = 0.05;
Cylinder221.height = 0.3;
Shape220.geometry = Cylinder221;

Appearance Appearance222 = createNode("Appearance");
Material Material223 = createNode("Material");
Appearance222.material = Material223;

Shape220.appearance = Appearance222;

Transform212.child[2] = Shape220;

Transform206.children[1] = Transform212;

LayoutLayer105.children[6] = Transform206;

Script Script224 = createNode("Script");
Script224.DEF = "aValueTransformerScript";
Script224.directOutput = True;
Script224.mustEvaluate = True;
field field225 = createNode("field");
field225.name = "newTranslation";
field225.accessType = "inputOnly";
field225.type = "SFVec3f";
field225.value = "1 1 1";
Script224.field = new MFNode();

Script224.field[0] = field225;

field field226 = createNode("field");
field226.name = "aValue_changed";
field226.accessType = "outputOnly";
field226.type = "SFFloat";
field226.value = "1";
Script224.field[1] = field226;


Script224.setSourceCode(`ecmascript: function newTranslation(Value) { aValue_changed = Value.x * 30; }`)
LayoutLayer105.children[7] = Script224;

Script Script227 = createNode("Script");
Script227.DEF = "bValueTransformerScript";
Script227.directOutput = True;
Script227.mustEvaluate = True;
field field228 = createNode("field");
field228.name = "newTranslation";
field228.accessType = "inputOnly";
field228.type = "SFVec3f";
field228.value = "1 1 1";
Script227.field = new MFNode();

Script227.field[0] = field228;

field field229 = createNode("field");
field229.name = "bValue_changed";
field229.accessType = "outputOnly";
field229.type = "SFFloat";
field229.value = "1";
Script227.field[1] = field229;


Script227.setSourceCode(`ecmascript: function newTranslation(Value) { bValue_changed = Value.x * 30; }`)
LayoutLayer105.children[8] = Script227;

Script Script230 = createNode("Script");
Script230.DEF = "cValueTransformerScript";
Script230.directOutput = True;
Script230.mustEvaluate = True;
field field231 = createNode("field");
field231.name = "newTranslation";
field231.accessType = "inputOnly";
field231.type = "SFVec3f";
field231.value = "1 1 1";
Script230.field = new MFNode();

Script230.field[0] = field231;

field field232 = createNode("field");
field232.name = "cValue_changed";
field232.accessType = "outputOnly";
field232.type = "SFFloat";
field232.value = "1";
Script230.field[1] = field232;


Script230.setSourceCode(`ecmascript: function newTranslation(Value) { cValue_changed = Value.x * 5; }`)
LayoutLayer105.children[9] = Script230;

Script Script233 = createNode("Script");
Script233.DEF = "dValueTransformerScript";
Script233.directOutput = True;
Script233.mustEvaluate = True;
field field234 = createNode("field");
field234.name = "newTranslation";
field234.accessType = "inputOnly";
field234.type = "SFVec3f";
field234.value = "1 1 1";
Script233.field = new MFNode();

Script233.field[0] = field234;

field field235 = createNode("field");
field235.name = "dValue_changed";
field235.accessType = "outputOnly";
field235.type = "SFFloat";
field235.value = "1";
Script233.field[1] = field235;


Script233.setSourceCode(`ecmascript: function newTranslation(Value) { dValue_changed = Value.x * 5; }`)
LayoutLayer105.children[10] = Script233;

Script Script236 = createNode("Script");
Script236.DEF = "pdeltaValueTransformerScript";
Script236.directOutput = True;
Script236.mustEvaluate = True;
field field237 = createNode("field");
field237.name = "newTranslation";
field237.accessType = "inputOnly";
field237.type = "SFVec3f";
field237.value = "1 1 1";
Script236.field = new MFNode();

Script236.field[0] = field237;

field field238 = createNode("field");
field238.name = "pdeltaValue_changed";
field238.accessType = "outputOnly";
field238.type = "SFFloat";
field238.value = "1";
Script236.field[1] = field238;


Script236.setSourceCode(`ecmascript: function newTranslation(Value) { pdeltaValue_changed = Value.x; }`)
LayoutLayer105.children[11] = Script236;

Script Script239 = createNode("Script");
Script239.DEF = "tdeltaValueTransformerScript";
Script239.directOutput = True;
Script239.mustEvaluate = True;
field field240 = createNode("field");
field240.name = "newTranslation";
field240.accessType = "inputOnly";
field240.type = "SFVec3f";
field240.value = "1 1 1";
Script239.field = new MFNode();

Script239.field[0] = field240;

field field241 = createNode("field");
field241.name = "tdeltaValue_changed";
field241.accessType = "outputOnly";
field241.type = "SFFloat";
field241.value = "1";
Script239.field[1] = field241;


Script239.setSourceCode(`ecmascript: function newTranslation(Value) { tdeltaValue_changed = Value.x; }`)
LayoutLayer105.children[12] = Script239;

ROUTE ROUTE242 = createNode("ROUTE");
ROUTE242.fromField = "translation_changed";
ROUTE242.fromNode = "aSensor";
ROUTE242.toField = "set_translation";
ROUTE242.toNode = "aTransform";
LayoutLayer105.children[13] = ROUTE242;

ROUTE ROUTE243 = createNode("ROUTE");
ROUTE243.fromField = "translation_changed";
ROUTE243.fromNode = "bSensor";
ROUTE243.toField = "set_translation";
ROUTE243.toNode = "bTransform";
LayoutLayer105.children[14] = ROUTE243;

ROUTE ROUTE244 = createNode("ROUTE");
ROUTE244.fromField = "translation_changed";
ROUTE244.fromNode = "cSensor";
ROUTE244.toField = "set_translation";
ROUTE244.toNode = "cTransform";
LayoutLayer105.children[15] = ROUTE244;

ROUTE ROUTE245 = createNode("ROUTE");
ROUTE245.fromField = "translation_changed";
ROUTE245.fromNode = "dSensor";
ROUTE245.toField = "set_translation";
ROUTE245.toNode = "dTransform";
LayoutLayer105.children[16] = ROUTE245;

ROUTE ROUTE246 = createNode("ROUTE");
ROUTE246.fromField = "translation_changed";
ROUTE246.fromNode = "pdeltaSensor";
ROUTE246.toField = "set_translation";
ROUTE246.toNode = "pdeltaTransform";
LayoutLayer105.children[17] = ROUTE246;

ROUTE ROUTE247 = createNode("ROUTE");
ROUTE247.fromField = "translation_changed";
ROUTE247.fromNode = "tdeltaSensor";
ROUTE247.toField = "set_translation";
ROUTE247.toNode = "tdeltaTransform";
LayoutLayer105.children[18] = ROUTE247;

ROUTE ROUTE248 = createNode("ROUTE");
ROUTE248.fromField = "translation_changed";
ROUTE248.fromNode = "aSensor";
ROUTE248.toField = "newTranslation";
ROUTE248.toNode = "aValueTransformerScript";
LayoutLayer105.children[19] = ROUTE248;

ROUTE ROUTE249 = createNode("ROUTE");
ROUTE249.fromField = "translation_changed";
ROUTE249.fromNode = "bSensor";
ROUTE249.toField = "newTranslation";
ROUTE249.toNode = "bValueTransformerScript";
LayoutLayer105.children[20] = ROUTE249;

ROUTE ROUTE250 = createNode("ROUTE");
ROUTE250.fromField = "translation_changed";
ROUTE250.fromNode = "cSensor";
ROUTE250.toField = "newTranslation";
ROUTE250.toNode = "cValueTransformerScript";
LayoutLayer105.children[21] = ROUTE250;

ROUTE ROUTE251 = createNode("ROUTE");
ROUTE251.fromField = "translation_changed";
ROUTE251.fromNode = "dSensor";
ROUTE251.toField = "newTranslation";
ROUTE251.toNode = "dValueTransformerScript";
LayoutLayer105.children[22] = ROUTE251;

ROUTE ROUTE252 = createNode("ROUTE");
ROUTE252.fromField = "translation_changed";
ROUTE252.fromNode = "pdeltaSensor";
ROUTE252.toField = "newTranslation";
ROUTE252.toNode = "pdeltaValueTransformerScript";
LayoutLayer105.children[23] = ROUTE252;

ROUTE ROUTE253 = createNode("ROUTE");
ROUTE253.fromField = "translation_changed";
ROUTE253.fromNode = "tdeltaSensor";
ROUTE253.toField = "newTranslation";
ROUTE253.toNode = "tdeltaValueTransformerScript";
LayoutLayer105.children[24] = ROUTE253;

ROUTE ROUTE254 = createNode("ROUTE");
ROUTE254.fromField = "aValue_changed";
ROUTE254.fromNode = "aValueTransformerScript";
ROUTE254.toField = "a";
ROUTE254.toNode = "x_iteShader";
LayoutLayer105.children[25] = ROUTE254;

ROUTE ROUTE255 = createNode("ROUTE");
ROUTE255.fromField = "bValue_changed";
ROUTE255.fromNode = "bValueTransformerScript";
ROUTE255.toField = "b";
ROUTE255.toNode = "x_iteShader";
LayoutLayer105.children[26] = ROUTE255;

ROUTE ROUTE256 = createNode("ROUTE");
ROUTE256.fromField = "cValue_changed";
ROUTE256.fromNode = "cValueTransformerScript";
ROUTE256.toField = "c";
ROUTE256.toNode = "x_iteShader";
LayoutLayer105.children[27] = ROUTE256;

ROUTE ROUTE257 = createNode("ROUTE");
ROUTE257.fromField = "dValue_changed";
ROUTE257.fromNode = "dValueTransformerScript";
ROUTE257.toField = "d";
ROUTE257.toNode = "x_iteShader";
LayoutLayer105.children[28] = ROUTE257;

ROUTE ROUTE258 = createNode("ROUTE");
ROUTE258.fromField = "pdeltaValue_changed";
ROUTE258.fromNode = "pdeltaValueTransformerScript";
ROUTE258.toField = "pdelta";
ROUTE258.toNode = "x_iteShader";
LayoutLayer105.children[29] = ROUTE258;

ROUTE ROUTE259 = createNode("ROUTE");
ROUTE259.fromField = "tdeltaValue_changed";
ROUTE259.fromNode = "tdeltaValueTransformerScript";
ROUTE259.toField = "tdelta";
ROUTE259.toNode = "x_iteShader";
LayoutLayer105.children[30] = ROUTE259;

Layout Layout260 = createNode("Layout");
Layout260.align = new MFString(new java.lang.String["RIGHT","BOTTOM"]);
Layout260.offset = new MFFloat(new float[0,0.2]);
Layout260.size = new MFFloat(new float[0.4,0.6]);
LayoutLayer105.layout = Layout260;

Viewport Viewport261 = createNode("Viewport");
Viewport261.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer105.viewport = Viewport261;

LayerSet32.layers[1] = LayoutLayer105;

layerSet = new undefined();

layerSet[0] = LayerSet32;

}
