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
meta11.content = "bumpyfreewrljsonverse.x3d";
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
//basic nodes, which might be present in any scene
NavigationInfo NavigationInfo32 = createNode("NavigationInfo");
NavigationInfo32.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo32.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
children = new MFNode();

children[0] = NavigationInfo32;

DirectionalLight DirectionalLight33 = createNode("DirectionalLight");
DirectionalLight33.ambientIntensity = 0.2;
DirectionalLight33.direction = new SFVec3f(new float[0,-1,0]);
children[1] = DirectionalLight33;

DirectionalLight DirectionalLight34 = createNode("DirectionalLight");
DirectionalLight34.ambientIntensity = 0.2;
DirectionalLight34.direction = new SFVec3f(new float[-1,-0.1,-1]);
children[2] = DirectionalLight34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "My Overview";
Viewpoint35.fieldOfView = 1.570796;
Viewpoint35.position = new SFVec3f(new float[0,1.75,60]);
children[3] = Viewpoint35;

//LayerSet with two layers, navigation happens in layer 1
LayerSet LayerSet36 = createNode("LayerSet");
LayerSet36.activeLayer = 1;
LayerSet36.order = new MFInt32(new int[1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer Layer37 = createNode("Layer");
Layer37.pickable = True;
Layer37.objectType = new MFString(new java.lang.String["ALL"]);
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

Layer37.children = new MFNode();

Layer37.children[0] = Group38;

//the model that is being reviewed by the users of this scene
Transform Transform69 = createNode("Transform");
Transform69.DEF = "FlowerTransform";
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
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
//<Sphere radius='40'></Sphere>
IndexedFaceSet IndexedFaceSet73 = createNode("IndexedFaceSet");
IndexedFaceSet73.convex = False;
IndexedFaceSet73.DEF = "Orbit";
Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.DEF = "OrbitCoordinates";
IndexedFaceSet73.coord = Coordinate74;

Shape72.geometry = IndexedFaceSet73;

Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material76.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance75.material = Material76;

ComposedCubeMapTexture ComposedCubeMapTexture77 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture77.DEF = "texture";
ImageTexture ImageTexture78 = createNode("ImageTexture");
ImageTexture78.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture78;

ImageTexture ImageTexture79 = createNode("ImageTexture");
ImageTexture79.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture79;

ImageTexture ImageTexture80 = createNode("ImageTexture");
ImageTexture80.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture80;

ImageTexture ImageTexture81 = createNode("ImageTexture");
ImageTexture81.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture81;

ImageTexture ImageTexture82 = createNode("ImageTexture");
ImageTexture82.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture82;

ImageTexture ImageTexture83 = createNode("ImageTexture");
ImageTexture83.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture83;

Appearance75.texture = ComposedCubeMapTexture77;

ComposedShader ComposedShader84 = createNode("ComposedShader");
ComposedShader84.DEF = "freewrlShader";
ComposedShader84.language = "GLSL";
field field85 = createNode("field");
field85.name = "chromaticDispertion";
field85.accessType = "inputOnly";
field85.type = "SFVec3f";
field85.value = "0.98 1 1.033";
ComposedShader84.field = new MFNode();

ComposedShader84.field[0] = field85;

field field86 = createNode("field");
field86.name = "fw_textureCoordGenType";
field86.accessType = "inputOnly";
field86.type = "SFInt32";
field86.value = "0";
ComposedShader84.field[1] = field86;

field field87 = createNode("field");
field87.name = "bias";
field87.type = "SFFloat";
field87.accessType = "inputOnly";
field87.value = "0.5";
ComposedShader84.field[2] = field87;

field field88 = createNode("field");
field88.name = "scale";
field88.type = "SFFloat";
field88.accessType = "inputOnly";
field88.value = "0.5";
ComposedShader84.field[3] = field88;

field field89 = createNode("field");
field89.name = "power";
field89.type = "SFFloat";
field89.accessType = "inputOnly";
field89.value = "2";
ComposedShader84.field[4] = field89;

field field90 = createNode("field");
field90.name = "a";
field90.type = "SFFloat";
field90.accessType = "inputOutput";
field90.value = "15";
ComposedShader84.field[5] = field90;

field field91 = createNode("field");
field91.name = "b";
field91.type = "SFFloat";
field91.accessType = "inputOutput";
field91.value = "5";
ComposedShader84.field[6] = field91;

field field92 = createNode("field");
field92.name = "c";
field92.type = "SFFloat";
field92.accessType = "inputOutput";
field92.value = "5";
ComposedShader84.field[7] = field92;

field field93 = createNode("field");
field93.name = "d";
field93.type = "SFFloat";
field93.accessType = "inputOutput";
field93.value = "5";
ComposedShader84.field[8] = field93;

field field94 = createNode("field");
field94.name = "tdelta";
field94.type = "SFFloat";
field94.accessType = "inputOutput";
field94.value = "0";
ComposedShader84.field[9] = field94;

field field95 = createNode("field");
field95.name = "pdelta";
field95.type = "SFFloat";
field95.accessType = "inputOutput";
field95.value = "0";
ComposedShader84.field[10] = field95;

ShaderPart ShaderPart96 = createNode("ShaderPart");
ShaderPart96.url = new MFString(new java.lang.String["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]);
ShaderPart96.type = "VERTEX";
ComposedShader84.parts[11] = ShaderPart96;

ShaderPart ShaderPart97 = createNode("ShaderPart");
ShaderPart97.url = new MFString(new java.lang.String["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"]);
ShaderPart97.type = "FRAGMENT";
ComposedShader84.parts[12] = ShaderPart97;

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance75.shaders = new MFNode();

Appearance75.shaders[0] = ComposedShader84;

Shape72.appearance = Appearance75;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Transform69.children[1] = Transform71;

Layer37.children[1] = Transform69;

Script Script98 = createNode("Script");
Script98.DEF = "OrbitScript";
field field99 = createNode("field");
field99.name = "coordinates";
field99.accessType = "inputOutput";
field99.type = "MFVec3f";
Script98.field = new MFNode();

Script98.field[0] = field99;

field field100 = createNode("field");
field100.name = "coordIndexes";
field100.accessType = "outputOnly";
field100.type = "MFInt32";
Script98.field[1] = field100;

field field101 = createNode("field");
field101.name = "a";
field101.type = "SFFloat";
field101.accessType = "inputOutput";
field101.value = "10";
Script98.field[2] = field101;

field field102 = createNode("field");
field102.name = "b";
field102.type = "SFFloat";
field102.accessType = "inputOutput";
field102.value = "10";
Script98.field[3] = field102;

field field103 = createNode("field");
field103.name = "c";
field103.type = "SFFloat";
field103.accessType = "inputOutput";
field103.value = "2";
Script98.field[4] = field103;

field field104 = createNode("field");
field104.name = "d";
field104.type = "SFFloat";
field104.accessType = "inputOutput";
field104.value = "2";
Script98.field[5] = field104;

field field105 = createNode("field");
field105.name = "pdelta";
field105.type = "SFFloat";
field105.accessType = "inputOutput";
field105.value = "0";
Script98.field[6] = field105;

field field106 = createNode("field");
field106.name = "tdelta";
field106.type = "SFFloat";
field106.accessType = "inputOutput";
field106.value = "0";
Script98.field[7] = field106;


Script98.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}`)
Layer37.children[2] = Script98;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromField = "coordIndexes";
ROUTE107.fromNode = "OrbitScript";
ROUTE107.toField = "set_coordIndex";
ROUTE107.toNode = "Orbit";
Layer37.children[3] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromField = "coordinates";
ROUTE108.fromNode = "OrbitScript";
ROUTE108.toField = "set_point";
ROUTE108.toNode = "OrbitCoordinates";
Layer37.children[4] = ROUTE108;

//DIS multiuser facilities
DISEntityManager DISEntityManager109 = createNode("DISEntityManager");
DISEntityManager109.readInterval = "3";
DISEntityManager109.DEF = "EntityManager";
DISEntityManager109.networkMode = "networkReader";
DISEntityTypeMapping DISEntityTypeMapping110 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping110.readInterval = "3";
DISEntityTypeMapping110.category = 77;
DISEntityTypeMapping110.specific = 1;
DISEntityTypeMapping110.url = new MFString(new java.lang.String["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]);
DISEntityManager109.children = new MFNode();

DISEntityManager109.children[0] = DISEntityTypeMapping110;

DISEntityTypeMapping DISEntityTypeMapping111 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping111.readInterval = "3";
DISEntityTypeMapping111.category = 77;
DISEntityTypeMapping111.specific = 2;
DISEntityTypeMapping111.url = new MFString(new java.lang.String["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]);
DISEntityManager109.children[1] = DISEntityTypeMapping111;

DISEntityTypeMapping DISEntityTypeMapping112 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping112.readInterval = "3";
DISEntityTypeMapping112.category = 77;
DISEntityTypeMapping112.specific = 3;
DISEntityTypeMapping112.url = new MFString(new java.lang.String["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]);
DISEntityManager109.children[2] = DISEntityTypeMapping112;

DISEntityTypeMapping DISEntityTypeMapping113 = createNode("DISEntityTypeMapping");
DISEntityTypeMapping113.readInterval = "3";
DISEntityTypeMapping113.category = 77;
DISEntityTypeMapping113.specific = 4;
DISEntityTypeMapping113.url = new MFString(new java.lang.String["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]);
DISEntityManager109.children[3] = DISEntityTypeMapping113;

Layer37.children[5] = DISEntityManager109;

Collision Collision114 = createNode("Collision");
Collision114.enabled = False;
Group Group115 = createNode("Group");
Group115.DEF = "AvatarHolder";
Collision114.proxy = Group115;

Layer37.children[6] = Collision114;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromField = "addedEntities";
ROUTE116.fromNode = "EntityManager";
ROUTE116.toField = "addChildren";
ROUTE116.toNode = "AvatarHolder";
Layer37.children[7] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromField = "removedEntities";
ROUTE117.fromNode = "EntityManager";
ROUTE117.toField = "removeChildren";
ROUTE117.toNode = "AvatarHolder";
Layer37.children[8] = ROUTE117;

LayerSet36.layers = new MFNode();

LayerSet36.layers[0] = Layer37;

LayoutLayer LayoutLayer118 = createNode("LayoutLayer");
LayoutLayer118.pickable = True;
LayoutLayer118.objectType = new MFString(new java.lang.String["ALL"]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform Transform119 = createNode("Transform");
Transform119.translation = new SFVec3f(new float[0,0,-3]);
Shape Shape120 = createNode("Shape");
Appearance Appearance121 = createNode("Appearance");
Material Material122 = createNode("Material");
Material122.diffuseColor = new SFColor(new float[0,0,0]);
Material122.transparency = 0.7;
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

Box Box123 = createNode("Box");
Box123.size = new SFVec3f(new float[100,100,0.02]);
Shape120.geometry = Box123;

Transform119.child = new undefined();

Transform119.child[0] = Shape120;

LayoutLayer118.children = new MFNode();

LayoutLayer118.children[0] = Transform119;

Transform Transform124 = createNode("Transform");
Transform124.DEF = "equationTransform";
Transform Transform125 = createNode("Transform");
Transform125.translation = new SFVec3f(new float[0,0,-20]);
Shape Shape126 = createNode("Shape");
Text Text127 = createNode("Text");
Text127.DEF = "equation";
Text127.string = new MFString(new java.lang.String["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]);
FontStyle FontStyle128 = createNode("FontStyle");
FontStyle128.size = 0.09;
Text127.fontStyle = FontStyle128;

Shape126.geometry = Text127;

Appearance Appearance129 = createNode("Appearance");
Material Material130 = createNode("Material");
Material130.diffuseColor = new SFColor(new float[1,1,0]);
Appearance129.material = Material130;

Shape126.appearance = Appearance129;

Transform125.child = new undefined();

Transform125.child[0] = Shape126;

Transform124.children = new MFNode();

Transform124.children[0] = Transform125;

LayoutLayer118.children[1] = Transform124;

ProtoDeclare ProtoDeclare131 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SliderProto" ><ProtoInterface><field name="sliderTranslation" accessType="inputOutput" type="SFVec3f" value="0 0.7 0"></field>
<field name="transformTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0.1"></field>
<field name="sensorTranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="textString" accessType="inputOutput" type="MFString" value="&quot;a=&quot;"></field>
<field name="parameterScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="parameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="shaderNode" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="protoSlider" translation="0 0.7 0"><IS><connect nodeField="translation" protoField="sliderTranslation"></connect>
</IS>
<Transform DEF="protoTransform" translation="0 0 0.1"><IS><connect nodeField="translation" protoField="sensorTranslation"></connect>
</IS>
<PlaneSensor DEF="protoSensor" maxPosition="1 0"></PlaneSensor>
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
<Script DEF="protoValueTransformerScript" directOutput="true" mustEvaluate="true"><field name="protoScale" accessType="inputOutput" type="SFFloat" value="30"></field>
<field name="protoParameterName" accessType="inputOutput" type="SFString" value="a"></field>
<field name="shader" accessType="inputOutput" type="SFNode"></field>
<field name="newTranslation" accessType="inputOnly" type="SFVec3f" value="1 1 1"></field>
<field name="protoValue_changed" accessType="outputOnly" type="SFFloat" value="1"></field>
<field name="protoText_changed" accessType="outputOnly" type="MFString" value="&quot;1.0&quot;"></field>
<IS><connect nodeField="protoScale" protoField="parameterScale"></connect>
<connect nodeField="protoParameterName" protoField="parameterName"></connect>
<connect nodeField="shader" protoField="shaderNode"></connect>
</IS>
<![CDATA[ecmascript:
const newTranslation = function(Value) {
	'use strict';
	protoValue_changed = Value.x * protoScale;
	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));

        var orientation = Value.x;

        var ps = Browser.currentScene.getNamedNode("protoSensor");
        var t = Browser.currentScene.getNamedNode("protoTransform");
        var txt = Browser.currentScene.getNamedNode("protoText");
        if (shader) {
            X3DUser.LOG("old", shader.getField(protoParameterName).getValue());
            shader.getField(protoParameterName).setValue(orientation * protoScale);
            X3DUser.LOG("new", shader.getField(protoParameterName).getValue());
        } else {
            X3DUser.LOG('ComposedShader not found');
        }
        if (txt) {
            var stringField = txt.getField("string");
            X3DUser.LOG("old", stringField.getValue());
            var label = protoParameterName;
            stringField.setValue(new MFString(label+"="+(orientation * protoScale).toFixed(2)));
            X3DUser.LOG("new", stringField.getValue());
        } else {
            X3DUser.LOG('ComposedShader not found');
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
        } else {
            X3DUser.LOG("Not found protoSensor");
        }
        if (t) {
            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
        } else {
            X3DUser.LOG("Not found protoTransform");
        }
}]]></Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoText_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoText"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare131.name = "SliderProto";
ProtoInterface ProtoInterface132 = createNode("ProtoInterface");
field field133 = createNode("field");
field133.name = "sliderTranslation";
field133.accessType = "inputOutput";
field133.type = "SFVec3f";
field133.value = "0 0.7 0";
ProtoInterface132.field = new MFNode();

ProtoInterface132.field[0] = field133;

field field134 = createNode("field");
field134.name = "transformTranslation";
field134.accessType = "inputOutput";
field134.type = "SFVec3f";
field134.value = "0 0 0.1";
ProtoInterface132.field[1] = field134;

field field135 = createNode("field");
field135.name = "sensorTranslation";
field135.accessType = "inputOutput";
field135.type = "SFVec3f";
field135.value = "0 0 0";
ProtoInterface132.field[2] = field135;

field field136 = createNode("field");
field136.name = "textString";
field136.accessType = "inputOutput";
field136.type = "MFString";
field136.value = "\"a=\"";
ProtoInterface132.field[3] = field136;

field field137 = createNode("field");
field137.name = "parameterScale";
field137.accessType = "inputOutput";
field137.type = "SFFloat";
field137.value = "30";
ProtoInterface132.field[4] = field137;

field field138 = createNode("field");
field138.name = "parameterName";
field138.accessType = "inputOutput";
field138.type = "SFString";
field138.value = "a";
ProtoInterface132.field[5] = field138;

field field139 = createNode("field");
field139.name = "shaderNode";
field139.accessType = "inputOutput";
field139.type = "SFNode";
ProtoInterface132.field[6] = field139;

ProtoDeclare131.protoInterface = ProtoInterface132;

ProtoBody ProtoBody140 = createNode("ProtoBody");
Group Group141 = createNode("Group");
Transform Transform142 = createNode("Transform");
Transform142.DEF = "protoSlider";
Transform142.translation = new SFVec3f(new float[0,0.7,0]);
IS IS143 = createNode("IS");
connect connect144 = createNode("connect");
connect144.nodeField = "translation";
connect144.protoField = "sliderTranslation";
IS143.connect = new MFNode();

IS143.connect[0] = connect144;

Transform142.iS = IS143;

Transform Transform145 = createNode("Transform");
Transform145.DEF = "protoTransform";
Transform145.translation = new SFVec3f(new float[0,0,0.1]);
IS IS146 = createNode("IS");
connect connect147 = createNode("connect");
connect147.nodeField = "translation";
connect147.protoField = "sensorTranslation";
IS146.connect = new MFNode();

IS146.connect[0] = connect147;

Transform145.iS = IS146;

PlaneSensor PlaneSensor148 = createNode("PlaneSensor");
PlaneSensor148.DEF = "protoSensor";
PlaneSensor148.maxPosition = new SFVec2f(new float[1,0]);
Transform145.children = new MFNode();

Transform145.children[0] = PlaneSensor148;

Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[0,0,0]);
TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.DEF = "protoTS";
Transform149.children = new MFNode();

Transform149.children[0] = TouchSensor150;

Transform145.children[1] = Transform149;

Transform Transform151 = createNode("Transform");
Shape Shape152 = createNode("Shape");
Text Text153 = createNode("Text");
Text153.DEF = "protoText";
Text153.string = new MFString(new java.lang.String["a="]);
IS IS154 = createNode("IS");
connect connect155 = createNode("connect");
connect155.nodeField = "string";
connect155.protoField = "textString";
IS154.connect = new MFNode();

IS154.connect[0] = connect155;

Text153.iS = IS154;

FontStyle FontStyle156 = createNode("FontStyle");
FontStyle156.size = 0.23;
Text153.fontStyle = FontStyle156;

Shape152.geometry = Text153;

Appearance Appearance157 = createNode("Appearance");
Material Material158 = createNode("Material");
Appearance157.material = Material158;

Shape152.appearance = Appearance157;

Transform151.child = new undefined();

Transform151.child[0] = Shape152;

Transform145.children[2] = Transform151;

Transform142.children = new MFNode();

Transform142.children[0] = Transform145;

Group141.children = new MFNode();

Group141.children[0] = Transform142;

Script Script159 = createNode("Script");
Script159.DEF = "protoValueTransformerScript";
Script159.directOutput = True;
Script159.mustEvaluate = True;
field field160 = createNode("field");
field160.name = "protoScale";
field160.accessType = "inputOutput";
field160.type = "SFFloat";
field160.value = "30";
Script159.field = new MFNode();

Script159.field[0] = field160;

field field161 = createNode("field");
field161.name = "protoParameterName";
field161.accessType = "inputOutput";
field161.type = "SFString";
field161.value = "a";
Script159.field[1] = field161;

field field162 = createNode("field");
field162.name = "shader";
field162.accessType = "inputOutput";
field162.type = "SFNode";
Script159.field[2] = field162;

field field163 = createNode("field");
field163.name = "newTranslation";
field163.accessType = "inputOnly";
field163.type = "SFVec3f";
field163.value = "1 1 1";
Script159.field[3] = field163;

field field164 = createNode("field");
field164.name = "protoValue_changed";
field164.accessType = "outputOnly";
field164.type = "SFFloat";
field164.value = "1";
Script159.field[4] = field164;

field field165 = createNode("field");
field165.name = "protoText_changed";
field165.accessType = "outputOnly";
field165.type = "MFString";
field165.value = "\"1.0\"";
Script159.field[5] = field165;

IS IS166 = createNode("IS");
connect connect167 = createNode("connect");
connect167.nodeField = "protoScale";
connect167.protoField = "parameterScale";
IS166.connect = new MFNode();

IS166.connect[0] = connect167;

connect connect168 = createNode("connect");
connect168.nodeField = "protoParameterName";
connect168.protoField = "parameterName";
IS166.connect[1] = connect168;

connect connect169 = createNode("connect");
connect169.nodeField = "shader";
connect169.protoField = "shaderNode";
IS166.connect[2] = connect169;

Script159.iS = IS166;


Script159.setSourceCode(`ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\n"+
"	protoValue_changed = Value.x * protoScale;\n"+
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            X3DUser.LOG(\"old\", shader.getField(protoParameterName).getValue());\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"            X3DUser.LOG(\"new\", shader.getField(protoParameterName).getValue());\n"+
"        } else {\n"+
"            X3DUser.LOG('ComposedShader not found');\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            X3DUser.LOG(\"old\", stringField.getValue());\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"            X3DUser.LOG(\"new\", stringField.getValue());\n"+
"        } else {\n"+
"            X3DUser.LOG('ComposedShader not found');\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        } else {\n"+
"            X3DUser.LOG(\"Not found protoSensor\");\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        } else {\n"+
"            X3DUser.LOG(\"Not found protoTransform\");\n"+
"        }\n"+
"}`)
Group141.children[1] = Script159;

ROUTE ROUTE170 = createNode("ROUTE");
ROUTE170.fromField = "translation_changed";
ROUTE170.fromNode = "protoSensor";
ROUTE170.toField = "set_translation";
ROUTE170.toNode = "protoTransform";
Group141.children[2] = ROUTE170;

ROUTE ROUTE171 = createNode("ROUTE");
ROUTE171.fromField = "translation_changed";
ROUTE171.fromNode = "protoSensor";
ROUTE171.toField = "newTranslation";
ROUTE171.toNode = "protoValueTransformerScript";
Group141.children[3] = ROUTE171;

ROUTE ROUTE172 = createNode("ROUTE");
ROUTE172.fromField = "protoText_changed";
ROUTE172.fromNode = "protoValueTransformerScript";
ROUTE172.toField = "string";
ROUTE172.toNode = "protoText";
Group141.children[4] = ROUTE172;

ProtoBody140.children = new MFNode();

ProtoBody140.children[0] = Group141;

ProtoDeclare131.protoBody = ProtoBody140;

LayoutLayer118.children[2] = ProtoDeclare131;

ProtoInstance ProtoInstance173 = createNode("ProtoInstance");
ProtoInstance173.name = "SliderProto";
ProtoInstance173.DEF = "aPI";
fieldValue fieldValue174 = createNode("fieldValue");
fieldValue174.name = "sliderTranslation";
fieldValue174.value = "0 0.7 0";
ProtoInstance173.fieldValue = new MFNode();

ProtoInstance173.fieldValue[0] = fieldValue174;

fieldValue fieldValue175 = createNode("fieldValue");
fieldValue175.name = "transformTranslation";
fieldValue175.value = "0 0 0.1";
ProtoInstance173.fieldValue[1] = fieldValue175;

fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "sensorTranslation";
fieldValue176.value = "0 0 0";
ProtoInstance173.fieldValue[2] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "textString";
fieldValue177.value = "\"a=\"";
ProtoInstance173.fieldValue[3] = fieldValue177;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "parameterScale";
fieldValue178.value = "30";
ProtoInstance173.fieldValue[4] = fieldValue178;

fieldValue fieldValue179 = createNode("fieldValue");
fieldValue179.name = "parameterName";
fieldValue179.value = "a";
ProtoInstance173.fieldValue[5] = fieldValue179;

fieldValue fieldValue180 = createNode("fieldValue");
fieldValue180.name = "shaderNode";
ComposedShader ComposedShader181 = createNode("ComposedShader");
ComposedShader181.USE = "freewrlShader";
fieldValue180.children = new MFNode();

fieldValue180.children[0] = ComposedShader181;

ProtoInstance173.fieldValue[6] = fieldValue180;

LayoutLayer118.children[3] = ProtoInstance173;

ProtoInstance ProtoInstance182 = createNode("ProtoInstance");
ProtoInstance182.name = "SliderProto";
ProtoInstance182.DEF = "bPI";
fieldValue fieldValue183 = createNode("fieldValue");
fieldValue183.name = "sliderTranslation";
fieldValue183.value = "0 0.4 0";
ProtoInstance182.fieldValue = new MFNode();

ProtoInstance182.fieldValue[0] = fieldValue183;

fieldValue fieldValue184 = createNode("fieldValue");
fieldValue184.name = "transformTranslation";
fieldValue184.value = "0 0 0.1";
ProtoInstance182.fieldValue[1] = fieldValue184;

fieldValue fieldValue185 = createNode("fieldValue");
fieldValue185.name = "sensorTranslation";
fieldValue185.value = "0 0 0";
ProtoInstance182.fieldValue[2] = fieldValue185;

fieldValue fieldValue186 = createNode("fieldValue");
fieldValue186.name = "textString";
fieldValue186.value = "\"b=\"";
ProtoInstance182.fieldValue[3] = fieldValue186;

fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "parameterScale";
fieldValue187.value = "30";
ProtoInstance182.fieldValue[4] = fieldValue187;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "parameterName";
fieldValue188.value = "b";
ProtoInstance182.fieldValue[5] = fieldValue188;

fieldValue fieldValue189 = createNode("fieldValue");
fieldValue189.name = "shaderNode";
ComposedShader ComposedShader190 = createNode("ComposedShader");
ComposedShader190.USE = "freewrlShader";
fieldValue189.children = new MFNode();

fieldValue189.children[0] = ComposedShader190;

ProtoInstance182.fieldValue[6] = fieldValue189;

LayoutLayer118.children[4] = ProtoInstance182;

ProtoInstance ProtoInstance191 = createNode("ProtoInstance");
ProtoInstance191.name = "SliderProto";
ProtoInstance191.DEF = "cPI";
fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "sliderTranslation";
fieldValue192.value = "0 0.1 0";
ProtoInstance191.fieldValue = new MFNode();

ProtoInstance191.fieldValue[0] = fieldValue192;

fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "transformTranslation";
fieldValue193.value = "0 0 0.1";
ProtoInstance191.fieldValue[1] = fieldValue193;

fieldValue fieldValue194 = createNode("fieldValue");
fieldValue194.name = "sensorTranslation";
fieldValue194.value = "0 0 0";
ProtoInstance191.fieldValue[2] = fieldValue194;

fieldValue fieldValue195 = createNode("fieldValue");
fieldValue195.name = "textString";
fieldValue195.value = "\"c=\"";
ProtoInstance191.fieldValue[3] = fieldValue195;

fieldValue fieldValue196 = createNode("fieldValue");
fieldValue196.name = "parameterScale";
fieldValue196.value = "20";
ProtoInstance191.fieldValue[4] = fieldValue196;

fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "parameterName";
fieldValue197.value = "c";
ProtoInstance191.fieldValue[5] = fieldValue197;

fieldValue fieldValue198 = createNode("fieldValue");
fieldValue198.name = "shaderNode";
ComposedShader ComposedShader199 = createNode("ComposedShader");
ComposedShader199.USE = "freewrlShader";
fieldValue198.children = new MFNode();

fieldValue198.children[0] = ComposedShader199;

ProtoInstance191.fieldValue[6] = fieldValue198;

LayoutLayer118.children[5] = ProtoInstance191;

ProtoInstance ProtoInstance200 = createNode("ProtoInstance");
ProtoInstance200.name = "SliderProto";
ProtoInstance200.DEF = "dPI";
fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "sliderTranslation";
fieldValue201.value = "0 -0.2 0";
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
fieldValue204.name = "textString";
fieldValue204.value = "\"d=\"";
ProtoInstance200.fieldValue[3] = fieldValue204;

fieldValue fieldValue205 = createNode("fieldValue");
fieldValue205.name = "parameterScale";
fieldValue205.value = "20";
ProtoInstance200.fieldValue[4] = fieldValue205;

fieldValue fieldValue206 = createNode("fieldValue");
fieldValue206.name = "parameterName";
fieldValue206.value = "d";
ProtoInstance200.fieldValue[5] = fieldValue206;

fieldValue fieldValue207 = createNode("fieldValue");
fieldValue207.name = "shaderNode";
ComposedShader ComposedShader208 = createNode("ComposedShader");
ComposedShader208.USE = "freewrlShader";
fieldValue207.children = new MFNode();

fieldValue207.children[0] = ComposedShader208;

ProtoInstance200.fieldValue[6] = fieldValue207;

LayoutLayer118.children[6] = ProtoInstance200;

ProtoInstance ProtoInstance209 = createNode("ProtoInstance");
ProtoInstance209.name = "SliderProto";
ProtoInstance209.DEF = "tdeltaPI";
fieldValue fieldValue210 = createNode("fieldValue");
fieldValue210.name = "sliderTranslation";
fieldValue210.value = "0 -0.5 0";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "transformTranslation";
fieldValue211.value = "0 0 0.1";
ProtoInstance209.fieldValue[1] = fieldValue211;

fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "sensorTranslation";
fieldValue212.value = "0 0 0";
ProtoInstance209.fieldValue[2] = fieldValue212;

fieldValue fieldValue213 = createNode("fieldValue");
fieldValue213.name = "textString";
fieldValue213.value = "\"tdelta=\"";
ProtoInstance209.fieldValue[3] = fieldValue213;

fieldValue fieldValue214 = createNode("fieldValue");
fieldValue214.name = "parameterScale";
fieldValue214.value = "6.28";
ProtoInstance209.fieldValue[4] = fieldValue214;

fieldValue fieldValue215 = createNode("fieldValue");
fieldValue215.name = "parameterName";
fieldValue215.value = "tdelta";
ProtoInstance209.fieldValue[5] = fieldValue215;

fieldValue fieldValue216 = createNode("fieldValue");
fieldValue216.name = "shaderNode";
ComposedShader ComposedShader217 = createNode("ComposedShader");
ComposedShader217.USE = "freewrlShader";
fieldValue216.children = new MFNode();

fieldValue216.children[0] = ComposedShader217;

ProtoInstance209.fieldValue[6] = fieldValue216;

LayoutLayer118.children[7] = ProtoInstance209;

ProtoInstance ProtoInstance218 = createNode("ProtoInstance");
ProtoInstance218.name = "SliderProto";
ProtoInstance218.DEF = "pdeltaPI";
fieldValue fieldValue219 = createNode("fieldValue");
fieldValue219.name = "sliderTranslation";
fieldValue219.value = "0 -0.8 0";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

fieldValue fieldValue220 = createNode("fieldValue");
fieldValue220.name = "transformTranslation";
fieldValue220.value = "0 0 0.1";
ProtoInstance218.fieldValue[1] = fieldValue220;

fieldValue fieldValue221 = createNode("fieldValue");
fieldValue221.name = "sensorTranslation";
fieldValue221.value = "0 0 0";
ProtoInstance218.fieldValue[2] = fieldValue221;

fieldValue fieldValue222 = createNode("fieldValue");
fieldValue222.name = "textString";
fieldValue222.value = "\"pdelta=\"";
ProtoInstance218.fieldValue[3] = fieldValue222;

fieldValue fieldValue223 = createNode("fieldValue");
fieldValue223.name = "parameterScale";
fieldValue223.value = "6.28";
ProtoInstance218.fieldValue[4] = fieldValue223;

fieldValue fieldValue224 = createNode("fieldValue");
fieldValue224.name = "parameterName";
fieldValue224.value = "pdelta";
ProtoInstance218.fieldValue[5] = fieldValue224;

fieldValue fieldValue225 = createNode("fieldValue");
fieldValue225.name = "shaderNode";
ComposedShader ComposedShader226 = createNode("ComposedShader");
ComposedShader226.USE = "freewrlShader";
fieldValue225.children = new MFNode();

fieldValue225.children[0] = ComposedShader226;

ProtoInstance218.fieldValue[6] = fieldValue225;

LayoutLayer118.children[8] = ProtoInstance218;

Layout Layout227 = createNode("Layout");
Layout227.align = new MFString(new java.lang.String["LEFT","BOTTOM"]);
Layout227.offset = new MFFloat(new float[-0.2,0.19]);
Layout227.offsetUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
Layout227.scaleMode = new MFString(new java.lang.String["NONE","NONE"]);
Layout227.size = new MFFloat(new float[0.4,0.6]);
Layout227.sizeUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
LayoutLayer118.layout = Layout227;

Viewport Viewport228 = createNode("Viewport");
Viewport228.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer118.viewport = Viewport228;

LayerSet36.layers[1] = LayoutLayer118;

layerSet[4] = LayerSet36;

}
