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
meta11.content = "bumpyfreewrljsonverse.x3d";
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
//basic nodes, which might be present in any scene
let NavigationInfo32 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo32.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo32.avatarSize = new MFFloat(new float[0.25,1.75,0.75]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo32;

let DirectionalLight33 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight33.ambientIntensity = 0.2;
DirectionalLight33.direction = new SFVec3f(new float[0,-1,0]);
browser.currentScene.children[1] = DirectionalLight33;

let DirectionalLight34 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight34.ambientIntensity = 0.2;
DirectionalLight34.direction = new SFVec3f(new float[-1,-0.1,-1]);
browser.currentScene.children[2] = DirectionalLight34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "My Overview";
Viewpoint35.fieldOfView = 1.570796;
Viewpoint35.position = new SFVec3f(new float[0,1.75,60]);
browser.currentScene.children[3] = Viewpoint35;

//LayerSet with two layers, navigation happens in layer 1
let LayerSet36 = browser.currentScene.createNode("LayerSet");
LayerSet36.activeLayer = 1;
LayerSet36.order = new MFInt32(new int[1,2]);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
let Layer37 = browser.currentScene.createNode("Layer");
Layer37.pickable = True;
Layer37.objectType = new MFString(new java.lang.String["ALL"]);
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

Layer37.children = new MFNode();

Layer37.children[0] = Group38;

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

let Transform71 = browser.currentScene.createNode("Transform");
let Shape72 = browser.currentScene.createNode("Shape");
//<Sphere radius='40'></Sphere>
let IndexedFaceSet73 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet73.convex = False;
IndexedFaceSet73.DEF = "Orbit";
let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.DEF = "OrbitCoordinates";
IndexedFaceSet73.coord = Coordinate74;

Shape72.geometry = IndexedFaceSet73;

let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material76.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance75.material = Material76;

let ComposedCubeMapTexture77 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture77.DEF = "texture";
let ImageTexture78 = browser.currentScene.createNode("ImageTexture");
ImageTexture78.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture78;

let ImageTexture79 = browser.currentScene.createNode("ImageTexture");
ImageTexture79.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture79;

let ImageTexture80 = browser.currentScene.createNode("ImageTexture");
ImageTexture80.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture80;

let ImageTexture81 = browser.currentScene.createNode("ImageTexture");
ImageTexture81.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture81;

let ImageTexture82 = browser.currentScene.createNode("ImageTexture");
ImageTexture82.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture82;

let ImageTexture83 = browser.currentScene.createNode("ImageTexture");
ImageTexture83.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture77.topTexture = ImageTexture83;

Appearance75.texture = ComposedCubeMapTexture77;

let ComposedShader84 = browser.currentScene.createNode("ComposedShader");
ComposedShader84.DEF = "freewrlShader";
ComposedShader84.language = "GLSL";
let field85 = browser.currentScene.createNode("field");
field85.name = "chromaticDispertion";
field85.accessType = "inputOnly";
field85.type = "SFVec3f";
field85.value = "0.98 1 1.033";
ComposedShader84.field = new MFNode();

ComposedShader84.field[0] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "fw_textureCoordGenType";
field86.accessType = "inputOnly";
field86.type = "SFInt32";
field86.value = "0";
ComposedShader84.field[1] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "bias";
field87.type = "SFFloat";
field87.accessType = "inputOnly";
field87.value = "0.5";
ComposedShader84.field[2] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "scale";
field88.type = "SFFloat";
field88.accessType = "inputOnly";
field88.value = "0.5";
ComposedShader84.field[3] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "power";
field89.type = "SFFloat";
field89.accessType = "inputOnly";
field89.value = "2";
ComposedShader84.field[4] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "a";
field90.type = "SFFloat";
field90.accessType = "inputOutput";
field90.value = "15";
ComposedShader84.field[5] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "b";
field91.type = "SFFloat";
field91.accessType = "inputOutput";
field91.value = "5";
ComposedShader84.field[6] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "c";
field92.type = "SFFloat";
field92.accessType = "inputOutput";
field92.value = "5";
ComposedShader84.field[7] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "d";
field93.type = "SFFloat";
field93.accessType = "inputOutput";
field93.value = "5";
ComposedShader84.field[8] = field93;

let field94 = browser.currentScene.createNode("field");
field94.name = "tdelta";
field94.type = "SFFloat";
field94.accessType = "inputOutput";
field94.value = "0";
ComposedShader84.field[9] = field94;

let field95 = browser.currentScene.createNode("field");
field95.name = "pdelta";
field95.type = "SFFloat";
field95.accessType = "inputOutput";
field95.value = "0";
ComposedShader84.field[10] = field95;

let ShaderPart96 = browser.currentScene.createNode("ShaderPart");
ShaderPart96.url = new MFString(new java.lang.String["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]);
ShaderPart96.type = "VERTEX";
ComposedShader84.parts[11] = ShaderPart96;

let ShaderPart97 = browser.currentScene.createNode("ShaderPart");
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

let Script98 = browser.currentScene.createNode("Script");
Script98.DEF = "OrbitScript";
let field99 = browser.currentScene.createNode("field");
field99.name = "coordinates";
field99.accessType = "inputOutput";
field99.type = "MFVec3f";
Script98.field = new MFNode();

Script98.field[0] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "coordIndexes";
field100.accessType = "outputOnly";
field100.type = "MFInt32";
Script98.field[1] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "a";
field101.type = "SFFloat";
field101.accessType = "inputOutput";
field101.value = "10";
Script98.field[2] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "b";
field102.type = "SFFloat";
field102.accessType = "inputOutput";
field102.value = "10";
Script98.field[3] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "c";
field103.type = "SFFloat";
field103.accessType = "inputOutput";
field103.value = "2";
Script98.field[4] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "d";
field104.type = "SFFloat";
field104.accessType = "inputOutput";
field104.value = "2";
Script98.field[5] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "pdelta";
field105.type = "SFFloat";
field105.accessType = "inputOutput";
field105.value = "0";
Script98.field[6] = field105;

let field106 = browser.currentScene.createNode("field");
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

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromField = "coordIndexes";
ROUTE107.fromNode = "OrbitScript";
ROUTE107.toField = "set_coordIndex";
ROUTE107.toNode = "Orbit";
Layer37.children[3] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromField = "coordinates";
ROUTE108.fromNode = "OrbitScript";
ROUTE108.toField = "set_point";
ROUTE108.toNode = "OrbitCoordinates";
Layer37.children[4] = ROUTE108;

//DIS multiuser facilities
let DISEntityManager109 = browser.currentScene.createNode("DISEntityManager");
DISEntityManager109.DEF = "EntityManager";
DISEntityManager109.networkMode = "networkReader";
let DISEntityTypeMapping110 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping110.readInterval = "3";
DISEntityTypeMapping110.category = 77;
DISEntityTypeMapping110.specific = 1;
DISEntityTypeMapping110.url = new MFString(new java.lang.String["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]);
DISEntityManager109.children = new MFNode();

DISEntityManager109.children[0] = DISEntityTypeMapping110;

let DISEntityTypeMapping111 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping111.readInterval = "3";
DISEntityTypeMapping111.category = 77;
DISEntityTypeMapping111.specific = 2;
DISEntityTypeMapping111.url = new MFString(new java.lang.String["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]);
DISEntityManager109.children[1] = DISEntityTypeMapping111;

let DISEntityTypeMapping112 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping112.readInterval = "3";
DISEntityTypeMapping112.category = 77;
DISEntityTypeMapping112.specific = 3;
DISEntityTypeMapping112.url = new MFString(new java.lang.String["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]);
DISEntityManager109.children[2] = DISEntityTypeMapping112;

let DISEntityTypeMapping113 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityTypeMapping113.readInterval = "3";
DISEntityTypeMapping113.category = 77;
DISEntityTypeMapping113.specific = 4;
DISEntityTypeMapping113.url = new MFString(new java.lang.String["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"]);
DISEntityManager109.children[3] = DISEntityTypeMapping113;

Layer37.children[5] = DISEntityManager109;

let Collision114 = browser.currentScene.createNode("Collision");
Collision114.enabled = False;
let Group115 = browser.currentScene.createNode("Group");
Group115.DEF = "AvatarHolder";
Collision114.proxy = Group115;

Layer37.children[6] = Collision114;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "addedEntities";
ROUTE116.fromNode = "EntityManager";
ROUTE116.toField = "addChildren";
ROUTE116.toNode = "AvatarHolder";
Layer37.children[7] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "removedEntities";
ROUTE117.fromNode = "EntityManager";
ROUTE117.toField = "removeChildren";
ROUTE117.toNode = "AvatarHolder";
Layer37.children[8] = ROUTE117;

LayerSet36.layers = new MFNode();

LayerSet36.layers[0] = Layer37;

let LayoutLayer118 = browser.currentScene.createNode("LayoutLayer");
LayoutLayer118.pickable = True;
LayoutLayer118.objectType = new MFString(new java.lang.String["ALL"]);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new SFVec3f(new float[0,0,-3]);
let Shape120 = browser.currentScene.createNode("Shape");
let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.diffuseColor = new SFColor(new float[0,0,0]);
Material122.transparency = 0.7;
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

let Box123 = browser.currentScene.createNode("Box");
Box123.size = new SFVec3f(new float[100,100,0.02]);
Shape120.geometry = Box123;

Transform119.child = new undefined();

Transform119.child[0] = Shape120;

LayoutLayer118.children = new MFNode();

LayoutLayer118.children[0] = Transform119;

let Transform124 = browser.currentScene.createNode("Transform");
Transform124.DEF = "equationTransform";
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new SFVec3f(new float[0,0,-20]);
let Shape126 = browser.currentScene.createNode("Shape");
let Text127 = browser.currentScene.createNode("Text");
Text127.DEF = "equation";
Text127.string = new MFString(new java.lang.String["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]);
let FontStyle128 = browser.currentScene.createNode("FontStyle");
FontStyle128.size = 0.09;
Text127.fontStyle = FontStyle128;

Shape126.geometry = Text127;

let Appearance129 = browser.currentScene.createNode("Appearance");
let Material130 = browser.currentScene.createNode("Material");
Material130.diffuseColor = new SFColor(new float[1,1,0]);
Appearance129.material = Material130;

Shape126.appearance = Appearance129;

Transform125.child = new undefined();

Transform125.child[0] = Shape126;

Transform124.children = new MFNode();

Transform124.children[0] = Transform125;

LayoutLayer118.children[1] = Transform124;

let ProtoDeclare131 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
            shader.getField(protoParameterName).setValue(orientation * protoScale);
        }
        if (txt) {
            var stringField = txt.getField("string");
            var label = protoParameterName;
            stringField.setValue(new MFString(label+"="+(orientation * protoScale).toFixed(2)));
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
        }
        if (t) {
            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
        }
}]]></Script>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="set_translation" toNode="protoTransform"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="protoSensor" toField="newTranslation" toNode="protoValueTransformerScript"></ROUTE>
<ROUTE fromField="protoText_changed" fromNode="protoValueTransformerScript" toField="string" toNode="protoText"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare131.name = "SliderProto";
let ProtoInterface132 = browser.currentScene.createNode("ProtoInterface");
let field133 = browser.currentScene.createNode("field");
field133.name = "sliderTranslation";
field133.accessType = "inputOutput";
field133.type = "SFVec3f";
field133.value = "0 0.7 0";
ProtoInterface132.field = new MFNode();

ProtoInterface132.field[0] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "transformTranslation";
field134.accessType = "inputOutput";
field134.type = "SFVec3f";
field134.value = "0 0 0.1";
ProtoInterface132.field[1] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "sensorTranslation";
field135.accessType = "inputOutput";
field135.type = "SFVec3f";
field135.value = "0 0 0";
ProtoInterface132.field[2] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "textString";
field136.accessType = "inputOutput";
field136.type = "MFString";
field136.value = "\"a=\"";
ProtoInterface132.field[3] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "parameterScale";
field137.accessType = "inputOutput";
field137.type = "SFFloat";
field137.value = "30";
ProtoInterface132.field[4] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "parameterName";
field138.accessType = "inputOutput";
field138.type = "SFString";
field138.value = "a";
ProtoInterface132.field[5] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "shaderNode";
field139.accessType = "inputOutput";
field139.type = "SFNode";
ProtoInterface132.field[6] = field139;

ProtoDeclare131.protoInterface = ProtoInterface132;

let ProtoBody140 = browser.currentScene.createNode("ProtoBody");
let Group141 = browser.currentScene.createNode("Group");
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.DEF = "protoSlider";
Transform142.translation = new SFVec3f(new float[0,0.7,0]);
let IS143 = browser.currentScene.createNode("IS");
let connect144 = browser.currentScene.createNode("connect");
connect144.nodeField = "translation";
connect144.protoField = "sliderTranslation";
IS143.connect = new MFNode();

IS143.connect[0] = connect144;

Transform142.iS = IS143;

let Transform145 = browser.currentScene.createNode("Transform");
Transform145.DEF = "protoTransform";
Transform145.translation = new SFVec3f(new float[0,0,0.1]);
let IS146 = browser.currentScene.createNode("IS");
let connect147 = browser.currentScene.createNode("connect");
connect147.nodeField = "translation";
connect147.protoField = "sensorTranslation";
IS146.connect = new MFNode();

IS146.connect[0] = connect147;

Transform145.iS = IS146;

let PlaneSensor148 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor148.DEF = "protoSensor";
PlaneSensor148.maxPosition = new SFVec2f(new float[1,0]);
Transform145.children = new MFNode();

Transform145.children[0] = PlaneSensor148;

let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new SFVec3f(new float[0,0,0]);
let TouchSensor150 = browser.currentScene.createNode("TouchSensor");
TouchSensor150.DEF = "protoTS";
Transform149.children = new MFNode();

Transform149.children[0] = TouchSensor150;

Transform145.children[1] = Transform149;

let Transform151 = browser.currentScene.createNode("Transform");
let Shape152 = browser.currentScene.createNode("Shape");
let Text153 = browser.currentScene.createNode("Text");
Text153.DEF = "protoText";
Text153.string = new MFString(new java.lang.String["a="]);
let IS154 = browser.currentScene.createNode("IS");
let connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "string";
connect155.protoField = "textString";
IS154.connect = new MFNode();

IS154.connect[0] = connect155;

Text153.iS = IS154;

let FontStyle156 = browser.currentScene.createNode("FontStyle");
FontStyle156.size = 0.23;
Text153.fontStyle = FontStyle156;

Shape152.geometry = Text153;

let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
Appearance157.material = Material158;

Shape152.appearance = Appearance157;

Transform151.child = new undefined();

Transform151.child[0] = Shape152;

Transform145.children[2] = Transform151;

Transform142.children = new MFNode();

Transform142.children[0] = Transform145;

Group141.children = new MFNode();

Group141.children[0] = Transform142;

let Script159 = browser.currentScene.createNode("Script");
Script159.DEF = "protoValueTransformerScript";
Script159.directOutput = True;
Script159.mustEvaluate = True;
let field160 = browser.currentScene.createNode("field");
field160.name = "protoScale";
field160.accessType = "inputOutput";
field160.type = "SFFloat";
field160.value = "30";
Script159.field = new MFNode();

Script159.field[0] = field160;

let field161 = browser.currentScene.createNode("field");
field161.name = "protoParameterName";
field161.accessType = "inputOutput";
field161.type = "SFString";
field161.value = "a";
Script159.field[1] = field161;

let field162 = browser.currentScene.createNode("field");
field162.name = "shader";
field162.accessType = "inputOutput";
field162.type = "SFNode";
Script159.field[2] = field162;

let field163 = browser.currentScene.createNode("field");
field163.name = "newTranslation";
field163.accessType = "inputOnly";
field163.type = "SFVec3f";
field163.value = "1 1 1";
Script159.field[3] = field163;

let field164 = browser.currentScene.createNode("field");
field164.name = "protoValue_changed";
field164.accessType = "outputOnly";
field164.type = "SFFloat";
field164.value = "1";
Script159.field[4] = field164;

let field165 = browser.currentScene.createNode("field");
field165.name = "protoText_changed";
field165.accessType = "outputOnly";
field165.type = "MFString";
field165.value = "\"1.0\"";
Script159.field[5] = field165;

let IS166 = browser.currentScene.createNode("IS");
let connect167 = browser.currentScene.createNode("connect");
connect167.nodeField = "protoScale";
connect167.protoField = "parameterScale";
IS166.connect = new MFNode();

IS166.connect[0] = connect167;

let connect168 = browser.currentScene.createNode("connect");
connect168.nodeField = "protoParameterName";
connect168.protoField = "parameterName";
IS166.connect[1] = connect168;

let connect169 = browser.currentScene.createNode("connect");
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
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}`)
Group141.children[1] = Script159;

let ROUTE170 = browser.currentScene.createNode("ROUTE");
ROUTE170.fromField = "translation_changed";
ROUTE170.fromNode = "protoSensor";
ROUTE170.toField = "set_translation";
ROUTE170.toNode = "protoTransform";
Group141.children[2] = ROUTE170;

let ROUTE171 = browser.currentScene.createNode("ROUTE");
ROUTE171.fromField = "translation_changed";
ROUTE171.fromNode = "protoSensor";
ROUTE171.toField = "newTranslation";
ROUTE171.toNode = "protoValueTransformerScript";
Group141.children[3] = ROUTE171;

let ROUTE172 = browser.currentScene.createNode("ROUTE");
ROUTE172.fromField = "protoText_changed";
ROUTE172.fromNode = "protoValueTransformerScript";
ROUTE172.toField = "string";
ROUTE172.toNode = "protoText";
Group141.children[4] = ROUTE172;

ProtoBody140.children = new MFNode();

ProtoBody140.children[0] = Group141;

ProtoDeclare131.protoBody = ProtoBody140;

LayoutLayer118.children[2] = ProtoDeclare131;

let ProtoInstance173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance173.name = "SliderProto";
ProtoInstance173.DEF = "aPI";
let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "sliderTranslation";
fieldValue174.value = "0 0.7 0";
ProtoInstance173.fieldValue = new MFNode();

ProtoInstance173.fieldValue[0] = fieldValue174;

let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "transformTranslation";
fieldValue175.value = "0 0 0.1";
ProtoInstance173.fieldValue[1] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "sensorTranslation";
fieldValue176.value = "0 0 0";
ProtoInstance173.fieldValue[2] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "textString";
fieldValue177.value = "\"a=\"";
ProtoInstance173.fieldValue[3] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "parameterScale";
fieldValue178.value = "30";
ProtoInstance173.fieldValue[4] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "parameterName";
fieldValue179.value = "a";
ProtoInstance173.fieldValue[5] = fieldValue179;

let fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "shaderNode";
let ComposedShader181 = browser.currentScene.createNode("ComposedShader");
ComposedShader181.USE = "freewrlShader";
fieldValue180.children = new MFNode();

fieldValue180.children[0] = ComposedShader181;

ProtoInstance173.fieldValue[6] = fieldValue180;

LayoutLayer118.children[3] = ProtoInstance173;

let ProtoInstance182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance182.name = "SliderProto";
ProtoInstance182.DEF = "bPI";
let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "sliderTranslation";
fieldValue183.value = "0 0.4 0";
ProtoInstance182.fieldValue = new MFNode();

ProtoInstance182.fieldValue[0] = fieldValue183;

let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "transformTranslation";
fieldValue184.value = "0 0 0.1";
ProtoInstance182.fieldValue[1] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "sensorTranslation";
fieldValue185.value = "0 0 0";
ProtoInstance182.fieldValue[2] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "textString";
fieldValue186.value = "\"b=\"";
ProtoInstance182.fieldValue[3] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "parameterScale";
fieldValue187.value = "30";
ProtoInstance182.fieldValue[4] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "parameterName";
fieldValue188.value = "b";
ProtoInstance182.fieldValue[5] = fieldValue188;

let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "shaderNode";
let ComposedShader190 = browser.currentScene.createNode("ComposedShader");
ComposedShader190.USE = "freewrlShader";
fieldValue189.children = new MFNode();

fieldValue189.children[0] = ComposedShader190;

ProtoInstance182.fieldValue[6] = fieldValue189;

LayoutLayer118.children[4] = ProtoInstance182;

let ProtoInstance191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance191.name = "SliderProto";
ProtoInstance191.DEF = "cPI";
let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "sliderTranslation";
fieldValue192.value = "0 0.1 0";
ProtoInstance191.fieldValue = new MFNode();

ProtoInstance191.fieldValue[0] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "transformTranslation";
fieldValue193.value = "0 0 0.1";
ProtoInstance191.fieldValue[1] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "sensorTranslation";
fieldValue194.value = "0 0 0";
ProtoInstance191.fieldValue[2] = fieldValue194;

let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "textString";
fieldValue195.value = "\"c=\"";
ProtoInstance191.fieldValue[3] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "parameterScale";
fieldValue196.value = "20";
ProtoInstance191.fieldValue[4] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "parameterName";
fieldValue197.value = "c";
ProtoInstance191.fieldValue[5] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "shaderNode";
let ComposedShader199 = browser.currentScene.createNode("ComposedShader");
ComposedShader199.USE = "freewrlShader";
fieldValue198.children = new MFNode();

fieldValue198.children[0] = ComposedShader199;

ProtoInstance191.fieldValue[6] = fieldValue198;

LayoutLayer118.children[5] = ProtoInstance191;

let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.name = "SliderProto";
ProtoInstance200.DEF = "dPI";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "sliderTranslation";
fieldValue201.value = "0 -0.2 0";
ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "transformTranslation";
fieldValue202.value = "0 0 0.1";
ProtoInstance200.fieldValue[1] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "sensorTranslation";
fieldValue203.value = "0 0 0";
ProtoInstance200.fieldValue[2] = fieldValue203;

let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "textString";
fieldValue204.value = "\"d=\"";
ProtoInstance200.fieldValue[3] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "parameterScale";
fieldValue205.value = "20";
ProtoInstance200.fieldValue[4] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "parameterName";
fieldValue206.value = "d";
ProtoInstance200.fieldValue[5] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "shaderNode";
let ComposedShader208 = browser.currentScene.createNode("ComposedShader");
ComposedShader208.USE = "freewrlShader";
fieldValue207.children = new MFNode();

fieldValue207.children[0] = ComposedShader208;

ProtoInstance200.fieldValue[6] = fieldValue207;

LayoutLayer118.children[6] = ProtoInstance200;

let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "SliderProto";
ProtoInstance209.DEF = "tdeltaPI";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "sliderTranslation";
fieldValue210.value = "0 -0.5 0";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "transformTranslation";
fieldValue211.value = "0 0 0.1";
ProtoInstance209.fieldValue[1] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "sensorTranslation";
fieldValue212.value = "0 0 0";
ProtoInstance209.fieldValue[2] = fieldValue212;

let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "textString";
fieldValue213.value = "\"tdelta=\"";
ProtoInstance209.fieldValue[3] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "parameterScale";
fieldValue214.value = "6.28";
ProtoInstance209.fieldValue[4] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "parameterName";
fieldValue215.value = "tdelta";
ProtoInstance209.fieldValue[5] = fieldValue215;

let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "shaderNode";
let ComposedShader217 = browser.currentScene.createNode("ComposedShader");
ComposedShader217.USE = "freewrlShader";
fieldValue216.children = new MFNode();

fieldValue216.children[0] = ComposedShader217;

ProtoInstance209.fieldValue[6] = fieldValue216;

LayoutLayer118.children[7] = ProtoInstance209;

let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.name = "SliderProto";
ProtoInstance218.DEF = "pdeltaPI";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "sliderTranslation";
fieldValue219.value = "0 -0.8 0";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "transformTranslation";
fieldValue220.value = "0 0 0.1";
ProtoInstance218.fieldValue[1] = fieldValue220;

let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "sensorTranslation";
fieldValue221.value = "0 0 0";
ProtoInstance218.fieldValue[2] = fieldValue221;

let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "textString";
fieldValue222.value = "\"pdelta=\"";
ProtoInstance218.fieldValue[3] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "parameterScale";
fieldValue223.value = "6.28";
ProtoInstance218.fieldValue[4] = fieldValue223;

let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "parameterName";
fieldValue224.value = "pdelta";
ProtoInstance218.fieldValue[5] = fieldValue224;

let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "shaderNode";
let ComposedShader226 = browser.currentScene.createNode("ComposedShader");
ComposedShader226.USE = "freewrlShader";
fieldValue225.children = new MFNode();

fieldValue225.children[0] = ComposedShader226;

ProtoInstance218.fieldValue[6] = fieldValue225;

LayoutLayer118.children[8] = ProtoInstance218;

let Layout227 = browser.currentScene.createNode("Layout");
Layout227.align = new MFString(new java.lang.String["LEFT","BOTTOM"]);
Layout227.offset = new MFFloat(new float[-0.2,0.19]);
Layout227.offsetUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
Layout227.scaleMode = new MFString(new java.lang.String["NONE","NONE"]);
Layout227.size = new MFFloat(new float[0.4,0.6]);
Layout227.sizeUnits = new MFString(new java.lang.String["WORLD","WORLD"]);
LayoutLayer118.layout = Layout227;

let Viewport228 = browser.currentScene.createNode("Viewport");
Viewport228.clipBoundary = new MFFloat(new float[0,1,0,1]);
LayoutLayer118.viewport = Viewport228;

LayerSet36.layers[1] = LayoutLayer118;

browser.currentScene.layerSet[4] = LayerSet36;

