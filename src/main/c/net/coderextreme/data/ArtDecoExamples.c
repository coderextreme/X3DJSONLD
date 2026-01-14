#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ArtDecoExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "David Roussel";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translator";
meta5.content = "James Harney, Don Brutzman NPS";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "7 April 2002";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "19 January 2025";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "http://vrmlstuff.free.fr/materials";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "subject";
meta9.content = "Universal Media Material Library";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "license";
meta12.content = "../license.html";
head1.meta[10] = meta12;

head = head1;

WorldInfo WorldInfo14 = createNode("WorldInfo");
WorldInfo14.title = "ArtDecoExamples.x3d";
children = new MFNode();

children[0] = WorldInfo14;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "ArtDeco00";
ExternProtoDeclare15.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare15.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare15.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"]);
children[1] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare16 = createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "ArtDeco01";
ExternProtoDeclare16.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare16.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare16.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"]);
children[2] = ExternProtoDeclare16;

ExternProtoDeclare ExternProtoDeclare17 = createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "ArtDeco02";
ExternProtoDeclare17.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare17.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare17.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"]);
children[3] = ExternProtoDeclare17;

ExternProtoDeclare ExternProtoDeclare18 = createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "ArtDeco03";
ExternProtoDeclare18.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare18.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare18.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"]);
children[4] = ExternProtoDeclare18;

ExternProtoDeclare ExternProtoDeclare19 = createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "ArtDeco04";
ExternProtoDeclare19.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare19.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare19.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"]);
children[5] = ExternProtoDeclare19;

ExternProtoDeclare ExternProtoDeclare20 = createNode("ExternProtoDeclare");
ExternProtoDeclare20.name = "ArtDeco05";
ExternProtoDeclare20.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare20.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare20.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"]);
children[6] = ExternProtoDeclare20;

ExternProtoDeclare ExternProtoDeclare21 = createNode("ExternProtoDeclare");
ExternProtoDeclare21.name = "ArtDeco06";
ExternProtoDeclare21.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare21.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare21.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"]);
children[7] = ExternProtoDeclare21;

ExternProtoDeclare ExternProtoDeclare22 = createNode("ExternProtoDeclare");
ExternProtoDeclare22.name = "ArtDeco07";
ExternProtoDeclare22.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare22.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare22.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"]);
children[8] = ExternProtoDeclare22;

ExternProtoDeclare ExternProtoDeclare23 = createNode("ExternProtoDeclare");
ExternProtoDeclare23.name = "ArtDeco08";
ExternProtoDeclare23.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare23.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare23.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"]);
children[9] = ExternProtoDeclare23;

ExternProtoDeclare ExternProtoDeclare24 = createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "ArtDeco09";
ExternProtoDeclare24.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare24.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"]);
children[10] = ExternProtoDeclare24;

ExternProtoDeclare ExternProtoDeclare25 = createNode("ExternProtoDeclare");
ExternProtoDeclare25.name = "ArtDeco10";
ExternProtoDeclare25.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare25.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare25.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"]);
children[11] = ExternProtoDeclare25;

ExternProtoDeclare ExternProtoDeclare26 = createNode("ExternProtoDeclare");
ExternProtoDeclare26.name = "ArtDeco11";
ExternProtoDeclare26.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare26.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare26.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"]);
children[12] = ExternProtoDeclare26;

ExternProtoDeclare ExternProtoDeclare27 = createNode("ExternProtoDeclare");
ExternProtoDeclare27.name = "ArtDeco12";
ExternProtoDeclare27.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare27.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare27.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"]);
children[13] = ExternProtoDeclare27;

ExternProtoDeclare ExternProtoDeclare28 = createNode("ExternProtoDeclare");
ExternProtoDeclare28.name = "ArtDeco13";
ExternProtoDeclare28.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare28.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare28.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"]);
children[14] = ExternProtoDeclare28;

ExternProtoDeclare ExternProtoDeclare29 = createNode("ExternProtoDeclare");
ExternProtoDeclare29.name = "ArtDeco14";
ExternProtoDeclare29.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare29.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare29.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"]);
children[15] = ExternProtoDeclare29;

ExternProtoDeclare ExternProtoDeclare30 = createNode("ExternProtoDeclare");
ExternProtoDeclare30.name = "ArtDeco15";
ExternProtoDeclare30.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare30.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare30.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"]);
children[16] = ExternProtoDeclare30;

ExternProtoDeclare ExternProtoDeclare31 = createNode("ExternProtoDeclare");
ExternProtoDeclare31.name = "ArtDeco16";
ExternProtoDeclare31.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare31.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare31.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"]);
children[17] = ExternProtoDeclare31;

ExternProtoDeclare ExternProtoDeclare32 = createNode("ExternProtoDeclare");
ExternProtoDeclare32.name = "ArtDeco17";
ExternProtoDeclare32.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare32.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare32.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"]);
children[18] = ExternProtoDeclare32;

ExternProtoDeclare ExternProtoDeclare33 = createNode("ExternProtoDeclare");
ExternProtoDeclare33.name = "ArtDeco18";
ExternProtoDeclare33.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare33.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare33.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"]);
children[19] = ExternProtoDeclare33;

ExternProtoDeclare ExternProtoDeclare34 = createNode("ExternProtoDeclare");
ExternProtoDeclare34.name = "ArtDeco19";
ExternProtoDeclare34.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare34.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare34.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"]);
children[20] = ExternProtoDeclare34;

ExternProtoDeclare ExternProtoDeclare35 = createNode("ExternProtoDeclare");
ExternProtoDeclare35.name = "ArtDeco20";
ExternProtoDeclare35.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare35.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare35.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"]);
children[21] = ExternProtoDeclare35;

ExternProtoDeclare ExternProtoDeclare36 = createNode("ExternProtoDeclare");
ExternProtoDeclare36.name = "ArtDeco21";
ExternProtoDeclare36.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare36.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"]);
children[22] = ExternProtoDeclare36;

ExternProtoDeclare ExternProtoDeclare37 = createNode("ExternProtoDeclare");
ExternProtoDeclare37.name = "ArtDeco22";
ExternProtoDeclare37.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare37.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare37.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"]);
children[23] = ExternProtoDeclare37;

ExternProtoDeclare ExternProtoDeclare38 = createNode("ExternProtoDeclare");
ExternProtoDeclare38.name = "ArtDeco23";
ExternProtoDeclare38.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare38.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare38.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"]);
children[24] = ExternProtoDeclare38;

ExternProtoDeclare ExternProtoDeclare39 = createNode("ExternProtoDeclare");
ExternProtoDeclare39.name = "ArtDeco24";
ExternProtoDeclare39.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare39.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare39.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"]);
children[25] = ExternProtoDeclare39;

ExternProtoDeclare ExternProtoDeclare40 = createNode("ExternProtoDeclare");
ExternProtoDeclare40.name = "ArtDeco25";
ExternProtoDeclare40.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare40.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare40.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"]);
children[26] = ExternProtoDeclare40;

ExternProtoDeclare ExternProtoDeclare41 = createNode("ExternProtoDeclare");
ExternProtoDeclare41.name = "ArtDeco26";
ExternProtoDeclare41.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare41.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare41.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"]);
children[27] = ExternProtoDeclare41;

ExternProtoDeclare ExternProtoDeclare42 = createNode("ExternProtoDeclare");
ExternProtoDeclare42.name = "ArtDeco27";
ExternProtoDeclare42.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare42.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare42.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"]);
children[28] = ExternProtoDeclare42;

ExternProtoDeclare ExternProtoDeclare43 = createNode("ExternProtoDeclare");
ExternProtoDeclare43.name = "ArtDeco28";
ExternProtoDeclare43.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare43.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare43.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"]);
children[29] = ExternProtoDeclare43;

ExternProtoDeclare ExternProtoDeclare44 = createNode("ExternProtoDeclare");
ExternProtoDeclare44.name = "ArtDeco29";
ExternProtoDeclare44.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare44.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare44.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"]);
children[30] = ExternProtoDeclare44;

ExternProtoDeclare ExternProtoDeclare45 = createNode("ExternProtoDeclare");
ExternProtoDeclare45.name = "ArtDeco30";
ExternProtoDeclare45.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare45.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare45.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"]);
children[31] = ExternProtoDeclare45;

ExternProtoDeclare ExternProtoDeclare46 = createNode("ExternProtoDeclare");
ExternProtoDeclare46.name = "ArtDeco31";
ExternProtoDeclare46.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare46.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare46.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"]);
children[32] = ExternProtoDeclare46;

ExternProtoDeclare ExternProtoDeclare47 = createNode("ExternProtoDeclare");
ExternProtoDeclare47.name = "ArtDeco32";
ExternProtoDeclare47.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare47.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare47.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"]);
children[33] = ExternProtoDeclare47;

ExternProtoDeclare ExternProtoDeclare48 = createNode("ExternProtoDeclare");
ExternProtoDeclare48.name = "ArtDeco33";
ExternProtoDeclare48.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare48.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare48.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"]);
children[34] = ExternProtoDeclare48;

ExternProtoDeclare ExternProtoDeclare49 = createNode("ExternProtoDeclare");
ExternProtoDeclare49.name = "ArtDeco34";
ExternProtoDeclare49.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare49.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare49.url = new MFString(new java.lang.String["../data/ArtDecoPrototypes.json#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"]);
children[35] = ExternProtoDeclare49;

Group Group50 = createNode("Group");
NavigationInfo NavigationInfo51 = createNode("NavigationInfo");
NavigationInfo51.headlight = False;
Group50.children = new MFNode();

Group50.children[0] = NavigationInfo51;

Viewpoint Viewpoint52 = createNode("Viewpoint");
Viewpoint52.DEF = "Front";
Viewpoint52.description = "Front view";
Viewpoint52.position = new SFVec3f(new float[0,0,12]);
Group50.children[1] = Viewpoint52;

Viewpoint Viewpoint53 = createNode("Viewpoint");
Viewpoint53.DEF = "PersRight";
Viewpoint53.description = "Low Right";
Viewpoint53.orientation = new SFRotation(new float[0.74291,0.30772,0.59447,1.2171]);
Viewpoint53.position = new SFVec3f(new float[6.9282,-6.9282,6.9282]);
Group50.children[2] = Viewpoint53;

Viewpoint Viewpoint54 = createNode("Viewpoint");
Viewpoint54.DEF = "PersLeft";
Viewpoint54.description = "Low Left";
Viewpoint54.orientation = new SFRotation(new float[0.74291,-0.30772,-0.59447,1.2171]);
Viewpoint54.position = new SFVec3f(new float[-6.9282,-6.9282,6.9282]);
Group50.children[3] = Viewpoint54;

Viewpoint Viewpoint55 = createNode("Viewpoint");
Viewpoint55.DEF = "Back";
Viewpoint55.description = "Back view";
Viewpoint55.orientation = new SFRotation(new float[0,1,0,3.1416]);
Viewpoint55.position = new SFVec3f(new float[0,0,-12]);
Group50.children[4] = Viewpoint55;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "Close_travel";
PositionInterpolator PositionInterpolator57 = createNode("PositionInterpolator");
PositionInterpolator57.DEF = "Close_Mover";
PositionInterpolator57.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator57.keyValue = new MFVec3f(new float[0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0]);
Transform56.children = new MFNode();

Transform56.children[0] = PositionInterpolator57;

TimeSensor TimeSensor58 = createNode("TimeSensor");
TimeSensor58.DEF = "Close_Time";
TimeSensor58.cycleInterval = 12;
TimeSensor58.loop = True;
Transform56.children[1] = TimeSensor58;

Viewpoint Viewpoint59 = createNode("Viewpoint");
Viewpoint59.DEF = "Close";
Viewpoint59.description = "Close Front";
Viewpoint59.position = new SFVec3f(new float[0,0,6]);
Transform56.children[2] = Viewpoint59;

Group50.children[5] = Transform56;

DirectionalLight DirectionalLight60 = createNode("DirectionalLight");
DirectionalLight60.direction = new SFVec3f(new float[1,-1,-1]);
Group50.children[6] = DirectionalLight60;

DirectionalLight DirectionalLight61 = createNode("DirectionalLight");
DirectionalLight61.direction = new SFVec3f(new float[0,1,-0.5]);
DirectionalLight61.intensity = 0.5;
Group50.children[7] = DirectionalLight61;

Anchor Anchor62 = createNode("Anchor");
Anchor62.description = "Return to front view";
Anchor62.url = new MFString(new java.lang.String["#Front"]);
Transform Transform63 = createNode("Transform");
Transform63.translation = new SFVec3f(new float[0,0,-0.5]);
Inline Inline64 = createNode("Inline");
Inline64.url = new MFString(new java.lang.String["../data/gridBack.json","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"]);
Transform63.children = new MFNode();

Transform63.children[0] = Inline64;

Anchor62.children = new MFNode();

Anchor62.children[0] = Transform63;

Group50.children[8] = Anchor62;

Viewpoint Viewpoint65 = createNode("Viewpoint");
Viewpoint65.DEF = "View00";
Viewpoint65.description = "ArtDeco00";
Viewpoint65.position = new SFVec3f(new float[-3.75,3.75,3]);
Group50.children[9] = Viewpoint65;

Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[-3.75,3.75,0]);
Anchor Anchor67 = createNode("Anchor");
Anchor67.description = "ArtDeco00 view";
Anchor67.url = new MFString(new java.lang.String["#View00"]);
Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "ArtDeco00";
Appearance69.shaders = new MFNode();

Appearance69.shaders[0] = ProtoInstance70;

Shape68.appearance = Appearance69;

Sphere Sphere71 = createNode("Sphere");
Sphere71.DEF = "Ball";
Sphere71.radius = 0.5;
Shape68.geometry = Sphere71;

Anchor67.children = new MFNode();

Anchor67.children[0] = Shape68;

Transform66.children = new MFNode();

Transform66.children[0] = Anchor67;

Transform Transform72 = createNode("Transform");
Transform72.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor73 = createNode("Anchor");
Anchor73.description = "ArtDeco00 view source documentation";
Anchor73.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor73.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"]);
Shape Shape74 = createNode("Shape");
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.DEF = "TextMat";
Material76.diffuseColor = new SFColor(new float[1,1,1]);
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

Text Text77 = createNode("Text");
Text77.string = new MFString(new java.lang.String["ArtDeco00"]);
FontStyle FontStyle78 = createNode("FontStyle");
FontStyle78.DEF = "Style";
FontStyle78.family = new MFString(new java.lang.String["SANS"]);
FontStyle78.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle78.size = 0.3;
FontStyle78.style = "BOLD";
Text77.fontStyle = FontStyle78;

Shape74.geometry = Text77;

Anchor73.children = new MFNode();

Anchor73.children[0] = Shape74;

Transform72.children = new MFNode();

Transform72.children[0] = Anchor73;

Transform66.children[1] = Transform72;

Group50.children[10] = Transform66;

Viewpoint Viewpoint79 = createNode("Viewpoint");
Viewpoint79.DEF = "View01";
Viewpoint79.description = "ArtDeco01";
Viewpoint79.position = new SFVec3f(new float[-2.25,3.75,3]);
Group50.children[11] = Viewpoint79;

Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[-2.25,3.75,0]);
Anchor Anchor81 = createNode("Anchor");
Anchor81.description = "ArtDeco01 view";
Anchor81.url = new MFString(new java.lang.String["#View01"]);
Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
ProtoInstance ProtoInstance84 = createNode("ProtoInstance");
ProtoInstance84.name = "ArtDeco01";
Appearance83.shaders = new MFNode();

Appearance83.shaders[0] = ProtoInstance84;

Shape82.appearance = Appearance83;

Sphere Sphere85 = createNode("Sphere");
Sphere85.USE = "Ball";
Shape82.geometry = Sphere85;

Anchor81.children = new MFNode();

Anchor81.children[0] = Shape82;

Transform80.children = new MFNode();

Transform80.children[0] = Anchor81;

Transform Transform86 = createNode("Transform");
Transform86.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor87 = createNode("Anchor");
Anchor87.description = "ArtDeco01 view source documentation";
Anchor87.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor87.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"]);
Shape Shape88 = createNode("Shape");
Appearance Appearance89 = createNode("Appearance");
Material Material90 = createNode("Material");
Material90.USE = "TextMat";
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

Text Text91 = createNode("Text");
Text91.string = new MFString(new java.lang.String["ArtDeco01"]);
FontStyle FontStyle92 = createNode("FontStyle");
FontStyle92.USE = "Style";
Text91.fontStyle = FontStyle92;

Shape88.geometry = Text91;

Anchor87.children = new MFNode();

Anchor87.children[0] = Shape88;

Transform86.children = new MFNode();

Transform86.children[0] = Anchor87;

Transform80.children[1] = Transform86;

Group50.children[12] = Transform80;

Viewpoint Viewpoint93 = createNode("Viewpoint");
Viewpoint93.DEF = "View02";
Viewpoint93.description = "ArtDeco02";
Viewpoint93.position = new SFVec3f(new float[-0.75,3.75,3]);
Group50.children[13] = Viewpoint93;

Transform Transform94 = createNode("Transform");
Transform94.translation = new SFVec3f(new float[-0.75,3.75,0]);
Anchor Anchor95 = createNode("Anchor");
Anchor95.description = "ArtDeco02 view";
Anchor95.url = new MFString(new java.lang.String["#View02"]);
Shape Shape96 = createNode("Shape");
Appearance Appearance97 = createNode("Appearance");
ProtoInstance ProtoInstance98 = createNode("ProtoInstance");
ProtoInstance98.name = "ArtDeco02";
Appearance97.shaders = new MFNode();

Appearance97.shaders[0] = ProtoInstance98;

Shape96.appearance = Appearance97;

Sphere Sphere99 = createNode("Sphere");
Sphere99.USE = "Ball";
Shape96.geometry = Sphere99;

Anchor95.children = new MFNode();

Anchor95.children[0] = Shape96;

Transform94.children = new MFNode();

Transform94.children[0] = Anchor95;

Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor101 = createNode("Anchor");
Anchor101.description = "ArtDeco02 view source documentation";
Anchor101.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor101.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"]);
Shape Shape102 = createNode("Shape");
Appearance Appearance103 = createNode("Appearance");
Material Material104 = createNode("Material");
Material104.USE = "TextMat";
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

Text Text105 = createNode("Text");
Text105.string = new MFString(new java.lang.String["ArtDeco02"]);
FontStyle FontStyle106 = createNode("FontStyle");
FontStyle106.USE = "Style";
Text105.fontStyle = FontStyle106;

Shape102.geometry = Text105;

Anchor101.children = new MFNode();

Anchor101.children[0] = Shape102;

Transform100.children = new MFNode();

Transform100.children[0] = Anchor101;

Transform94.children[1] = Transform100;

Group50.children[14] = Transform94;

Viewpoint Viewpoint107 = createNode("Viewpoint");
Viewpoint107.DEF = "View03";
Viewpoint107.description = "ArtDeco03";
Viewpoint107.position = new SFVec3f(new float[0.75,3.75,3]);
Group50.children[15] = Viewpoint107;

Transform Transform108 = createNode("Transform");
Transform108.translation = new SFVec3f(new float[0.75,3.75,0]);
Anchor Anchor109 = createNode("Anchor");
Anchor109.description = "ArtDeco03 view";
Anchor109.url = new MFString(new java.lang.String["#View03"]);
Shape Shape110 = createNode("Shape");
Appearance Appearance111 = createNode("Appearance");
ProtoInstance ProtoInstance112 = createNode("ProtoInstance");
ProtoInstance112.name = "ArtDeco03";
Appearance111.shaders = new MFNode();

Appearance111.shaders[0] = ProtoInstance112;

Shape110.appearance = Appearance111;

Sphere Sphere113 = createNode("Sphere");
Sphere113.USE = "Ball";
Shape110.geometry = Sphere113;

Anchor109.children = new MFNode();

Anchor109.children[0] = Shape110;

Transform108.children = new MFNode();

Transform108.children[0] = Anchor109;

Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor115 = createNode("Anchor");
Anchor115.description = "ArtDeco03 view source documentation";
Anchor115.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor115.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"]);
Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.USE = "TextMat";
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

Text Text119 = createNode("Text");
Text119.string = new MFString(new java.lang.String["ArtDeco03"]);
FontStyle FontStyle120 = createNode("FontStyle");
FontStyle120.USE = "Style";
Text119.fontStyle = FontStyle120;

Shape116.geometry = Text119;

Anchor115.children = new MFNode();

Anchor115.children[0] = Shape116;

Transform114.children = new MFNode();

Transform114.children[0] = Anchor115;

Transform108.children[1] = Transform114;

Group50.children[16] = Transform108;

Viewpoint Viewpoint121 = createNode("Viewpoint");
Viewpoint121.DEF = "View04";
Viewpoint121.description = "ArtDeco04";
Viewpoint121.position = new SFVec3f(new float[2.25,3.75,3]);
Group50.children[17] = Viewpoint121;

Transform Transform122 = createNode("Transform");
Transform122.translation = new SFVec3f(new float[2.25,3.75,0]);
Anchor Anchor123 = createNode("Anchor");
Anchor123.description = "ArtDeco04 view";
Anchor123.url = new MFString(new java.lang.String["#View04"]);
Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
ProtoInstance ProtoInstance126 = createNode("ProtoInstance");
ProtoInstance126.name = "ArtDeco04";
Appearance125.shaders = new MFNode();

Appearance125.shaders[0] = ProtoInstance126;

Shape124.appearance = Appearance125;

Sphere Sphere127 = createNode("Sphere");
Sphere127.USE = "Ball";
Shape124.geometry = Sphere127;

Anchor123.children = new MFNode();

Anchor123.children[0] = Shape124;

Transform122.children = new MFNode();

Transform122.children[0] = Anchor123;

Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor129 = createNode("Anchor");
Anchor129.description = "ArtDeco04 view source documentation";
Anchor129.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor129.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"]);
Shape Shape130 = createNode("Shape");
Appearance Appearance131 = createNode("Appearance");
Material Material132 = createNode("Material");
Material132.USE = "TextMat";
Appearance131.material = Material132;

Shape130.appearance = Appearance131;

Text Text133 = createNode("Text");
Text133.string = new MFString(new java.lang.String["ArtDeco04"]);
FontStyle FontStyle134 = createNode("FontStyle");
FontStyle134.USE = "Style";
Text133.fontStyle = FontStyle134;

Shape130.geometry = Text133;

Anchor129.children = new MFNode();

Anchor129.children[0] = Shape130;

Transform128.children = new MFNode();

Transform128.children[0] = Anchor129;

Transform122.children[1] = Transform128;

Group50.children[18] = Transform122;

Viewpoint Viewpoint135 = createNode("Viewpoint");
Viewpoint135.DEF = "View05";
Viewpoint135.description = "ArtDeco05";
Viewpoint135.position = new SFVec3f(new float[3.75,3.75,3]);
Group50.children[19] = Viewpoint135;

Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[3.75,3.75,0]);
Anchor Anchor137 = createNode("Anchor");
Anchor137.description = "ArtDeco05 view";
Anchor137.url = new MFString(new java.lang.String["#View05"]);
Shape Shape138 = createNode("Shape");
Appearance Appearance139 = createNode("Appearance");
ProtoInstance ProtoInstance140 = createNode("ProtoInstance");
ProtoInstance140.name = "ArtDeco05";
Appearance139.shaders = new MFNode();

Appearance139.shaders[0] = ProtoInstance140;

Shape138.appearance = Appearance139;

Sphere Sphere141 = createNode("Sphere");
Sphere141.USE = "Ball";
Shape138.geometry = Sphere141;

Anchor137.children = new MFNode();

Anchor137.children[0] = Shape138;

Transform136.children = new MFNode();

Transform136.children[0] = Anchor137;

Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor143 = createNode("Anchor");
Anchor143.description = "ArtDeco05 view source documentation";
Anchor143.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor143.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"]);
Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Material Material146 = createNode("Material");
Material146.USE = "TextMat";
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

Text Text147 = createNode("Text");
Text147.string = new MFString(new java.lang.String["ArtDeco05"]);
FontStyle FontStyle148 = createNode("FontStyle");
FontStyle148.USE = "Style";
Text147.fontStyle = FontStyle148;

Shape144.geometry = Text147;

Anchor143.children = new MFNode();

Anchor143.children[0] = Shape144;

Transform142.children = new MFNode();

Transform142.children[0] = Anchor143;

Transform136.children[1] = Transform142;

Group50.children[20] = Transform136;

Viewpoint Viewpoint149 = createNode("Viewpoint");
Viewpoint149.DEF = "View06";
Viewpoint149.description = "ArtDeco06";
Viewpoint149.position = new SFVec3f(new float[-3.75,2.25,3]);
Group50.children[21] = Viewpoint149;

Transform Transform150 = createNode("Transform");
Transform150.translation = new SFVec3f(new float[-3.75,2.25,0]);
Anchor Anchor151 = createNode("Anchor");
Anchor151.description = "ArtDeco06 view";
Anchor151.url = new MFString(new java.lang.String["#View06"]);
Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
ProtoInstance ProtoInstance154 = createNode("ProtoInstance");
ProtoInstance154.name = "ArtDeco06";
Appearance153.shaders = new MFNode();

Appearance153.shaders[0] = ProtoInstance154;

Shape152.appearance = Appearance153;

Sphere Sphere155 = createNode("Sphere");
Sphere155.USE = "Ball";
Shape152.geometry = Sphere155;

Anchor151.children = new MFNode();

Anchor151.children[0] = Shape152;

Transform150.children = new MFNode();

Transform150.children[0] = Anchor151;

Transform Transform156 = createNode("Transform");
Transform156.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor157 = createNode("Anchor");
Anchor157.description = "ArtDeco06 view source documentation";
Anchor157.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor157.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"]);
Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.USE = "TextMat";
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

Text Text161 = createNode("Text");
Text161.string = new MFString(new java.lang.String["ArtDeco06"]);
FontStyle FontStyle162 = createNode("FontStyle");
FontStyle162.USE = "Style";
Text161.fontStyle = FontStyle162;

Shape158.geometry = Text161;

Anchor157.children = new MFNode();

Anchor157.children[0] = Shape158;

Transform156.children = new MFNode();

Transform156.children[0] = Anchor157;

Transform150.children[1] = Transform156;

Group50.children[22] = Transform150;

Viewpoint Viewpoint163 = createNode("Viewpoint");
Viewpoint163.DEF = "View07";
Viewpoint163.description = "ArtDeco07";
Viewpoint163.position = new SFVec3f(new float[-2.25,2.25,3]);
Group50.children[23] = Viewpoint163;

Transform Transform164 = createNode("Transform");
Transform164.translation = new SFVec3f(new float[-2.25,2.25,0]);
Anchor Anchor165 = createNode("Anchor");
Anchor165.description = "ArtDeco07 view";
Anchor165.url = new MFString(new java.lang.String["#View07"]);
Shape Shape166 = createNode("Shape");
Appearance Appearance167 = createNode("Appearance");
ProtoInstance ProtoInstance168 = createNode("ProtoInstance");
ProtoInstance168.name = "ArtDeco07";
Appearance167.shaders = new MFNode();

Appearance167.shaders[0] = ProtoInstance168;

Shape166.appearance = Appearance167;

Sphere Sphere169 = createNode("Sphere");
Sphere169.USE = "Ball";
Shape166.geometry = Sphere169;

Anchor165.children = new MFNode();

Anchor165.children[0] = Shape166;

Transform164.children = new MFNode();

Transform164.children[0] = Anchor165;

Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor171 = createNode("Anchor");
Anchor171.description = "ArtDeco07 view source documentation";
Anchor171.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor171.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"]);
Shape Shape172 = createNode("Shape");
Appearance Appearance173 = createNode("Appearance");
Material Material174 = createNode("Material");
Material174.USE = "TextMat";
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

Text Text175 = createNode("Text");
Text175.string = new MFString(new java.lang.String["ArtDeco07"]);
FontStyle FontStyle176 = createNode("FontStyle");
FontStyle176.USE = "Style";
Text175.fontStyle = FontStyle176;

Shape172.geometry = Text175;

Anchor171.children = new MFNode();

Anchor171.children[0] = Shape172;

Transform170.children = new MFNode();

Transform170.children[0] = Anchor171;

Transform164.children[1] = Transform170;

Group50.children[24] = Transform164;

Viewpoint Viewpoint177 = createNode("Viewpoint");
Viewpoint177.DEF = "View08";
Viewpoint177.description = "ArtDeco08";
Viewpoint177.position = new SFVec3f(new float[-0.75,2.25,3]);
Group50.children[25] = Viewpoint177;

Transform Transform178 = createNode("Transform");
Transform178.translation = new SFVec3f(new float[-0.75,2.25,0]);
Anchor Anchor179 = createNode("Anchor");
Anchor179.description = "ArtDeco08 view";
Anchor179.url = new MFString(new java.lang.String["#View08"]);
Shape Shape180 = createNode("Shape");
Appearance Appearance181 = createNode("Appearance");
ProtoInstance ProtoInstance182 = createNode("ProtoInstance");
ProtoInstance182.name = "ArtDeco08";
Appearance181.shaders = new MFNode();

Appearance181.shaders[0] = ProtoInstance182;

Shape180.appearance = Appearance181;

Sphere Sphere183 = createNode("Sphere");
Sphere183.USE = "Ball";
Shape180.geometry = Sphere183;

Anchor179.children = new MFNode();

Anchor179.children[0] = Shape180;

Transform178.children = new MFNode();

Transform178.children[0] = Anchor179;

Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor185 = createNode("Anchor");
Anchor185.description = "ArtDeco08 view source documentation";
Anchor185.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor185.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"]);
Shape Shape186 = createNode("Shape");
Appearance Appearance187 = createNode("Appearance");
Material Material188 = createNode("Material");
Material188.USE = "TextMat";
Appearance187.material = Material188;

Shape186.appearance = Appearance187;

Text Text189 = createNode("Text");
Text189.string = new MFString(new java.lang.String["ArtDeco08"]);
FontStyle FontStyle190 = createNode("FontStyle");
FontStyle190.USE = "Style";
Text189.fontStyle = FontStyle190;

Shape186.geometry = Text189;

Anchor185.children = new MFNode();

Anchor185.children[0] = Shape186;

Transform184.children = new MFNode();

Transform184.children[0] = Anchor185;

Transform178.children[1] = Transform184;

Group50.children[26] = Transform178;

Viewpoint Viewpoint191 = createNode("Viewpoint");
Viewpoint191.DEF = "View09";
Viewpoint191.description = "ArtDeco09";
Viewpoint191.position = new SFVec3f(new float[0.75,2.25,3]);
Group50.children[27] = Viewpoint191;

Transform Transform192 = createNode("Transform");
Transform192.translation = new SFVec3f(new float[0.75,2.25,0]);
Anchor Anchor193 = createNode("Anchor");
Anchor193.description = "ArtDeco09 view";
Anchor193.url = new MFString(new java.lang.String["#View09"]);
Shape Shape194 = createNode("Shape");
Appearance Appearance195 = createNode("Appearance");
ProtoInstance ProtoInstance196 = createNode("ProtoInstance");
ProtoInstance196.name = "ArtDeco09";
Appearance195.shaders = new MFNode();

Appearance195.shaders[0] = ProtoInstance196;

Shape194.appearance = Appearance195;

Sphere Sphere197 = createNode("Sphere");
Sphere197.USE = "Ball";
Shape194.geometry = Sphere197;

Anchor193.children = new MFNode();

Anchor193.children[0] = Shape194;

Transform192.children = new MFNode();

Transform192.children[0] = Anchor193;

Transform Transform198 = createNode("Transform");
Transform198.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor199 = createNode("Anchor");
Anchor199.description = "ArtDeco09 view source documentation";
Anchor199.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor199.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"]);
Shape Shape200 = createNode("Shape");
Appearance Appearance201 = createNode("Appearance");
Material Material202 = createNode("Material");
Material202.USE = "TextMat";
Appearance201.material = Material202;

Shape200.appearance = Appearance201;

Text Text203 = createNode("Text");
Text203.string = new MFString(new java.lang.String["ArtDeco09"]);
FontStyle FontStyle204 = createNode("FontStyle");
FontStyle204.USE = "Style";
Text203.fontStyle = FontStyle204;

Shape200.geometry = Text203;

Anchor199.children = new MFNode();

Anchor199.children[0] = Shape200;

Transform198.children = new MFNode();

Transform198.children[0] = Anchor199;

Transform192.children[1] = Transform198;

Group50.children[28] = Transform192;

Viewpoint Viewpoint205 = createNode("Viewpoint");
Viewpoint205.DEF = "View10";
Viewpoint205.description = "ArtDeco10";
Viewpoint205.position = new SFVec3f(new float[2.25,2.25,3]);
Group50.children[29] = Viewpoint205;

Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[2.25,2.25,0]);
Anchor Anchor207 = createNode("Anchor");
Anchor207.description = "ArtDeco10 view";
Anchor207.url = new MFString(new java.lang.String["#View10"]);
Shape Shape208 = createNode("Shape");
Appearance Appearance209 = createNode("Appearance");
ProtoInstance ProtoInstance210 = createNode("ProtoInstance");
ProtoInstance210.name = "ArtDeco10";
Appearance209.shaders = new MFNode();

Appearance209.shaders[0] = ProtoInstance210;

Shape208.appearance = Appearance209;

Sphere Sphere211 = createNode("Sphere");
Sphere211.USE = "Ball";
Shape208.geometry = Sphere211;

Anchor207.children = new MFNode();

Anchor207.children[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Anchor207;

Transform Transform212 = createNode("Transform");
Transform212.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor213 = createNode("Anchor");
Anchor213.description = "ArtDeco10 view source documentation";
Anchor213.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor213.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"]);
Shape Shape214 = createNode("Shape");
Appearance Appearance215 = createNode("Appearance");
Material Material216 = createNode("Material");
Material216.USE = "TextMat";
Appearance215.material = Material216;

Shape214.appearance = Appearance215;

Text Text217 = createNode("Text");
Text217.string = new MFString(new java.lang.String["ArtDeco10"]);
FontStyle FontStyle218 = createNode("FontStyle");
FontStyle218.USE = "Style";
Text217.fontStyle = FontStyle218;

Shape214.geometry = Text217;

Anchor213.children = new MFNode();

Anchor213.children[0] = Shape214;

Transform212.children = new MFNode();

Transform212.children[0] = Anchor213;

Transform206.children[1] = Transform212;

Group50.children[30] = Transform206;

Viewpoint Viewpoint219 = createNode("Viewpoint");
Viewpoint219.DEF = "View11";
Viewpoint219.description = "ArtDeco11";
Viewpoint219.position = new SFVec3f(new float[3.75,2.25,3]);
Group50.children[31] = Viewpoint219;

Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[3.75,2.25,0]);
Anchor Anchor221 = createNode("Anchor");
Anchor221.description = "ArtDeco11 view";
Anchor221.url = new MFString(new java.lang.String["#View11"]);
Shape Shape222 = createNode("Shape");
Appearance Appearance223 = createNode("Appearance");
ProtoInstance ProtoInstance224 = createNode("ProtoInstance");
ProtoInstance224.name = "ArtDeco11";
Appearance223.shaders = new MFNode();

Appearance223.shaders[0] = ProtoInstance224;

Shape222.appearance = Appearance223;

Sphere Sphere225 = createNode("Sphere");
Sphere225.USE = "Ball";
Shape222.geometry = Sphere225;

Anchor221.children = new MFNode();

Anchor221.children[0] = Shape222;

Transform220.children = new MFNode();

Transform220.children[0] = Anchor221;

Transform Transform226 = createNode("Transform");
Transform226.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor227 = createNode("Anchor");
Anchor227.description = "ArtDeco11 view source documentation";
Anchor227.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor227.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"]);
Shape Shape228 = createNode("Shape");
Appearance Appearance229 = createNode("Appearance");
Material Material230 = createNode("Material");
Material230.USE = "TextMat";
Appearance229.material = Material230;

Shape228.appearance = Appearance229;

Text Text231 = createNode("Text");
Text231.string = new MFString(new java.lang.String["ArtDeco11"]);
FontStyle FontStyle232 = createNode("FontStyle");
FontStyle232.USE = "Style";
Text231.fontStyle = FontStyle232;

Shape228.geometry = Text231;

Anchor227.children = new MFNode();

Anchor227.children[0] = Shape228;

Transform226.children = new MFNode();

Transform226.children[0] = Anchor227;

Transform220.children[1] = Transform226;

Group50.children[32] = Transform220;

Viewpoint Viewpoint233 = createNode("Viewpoint");
Viewpoint233.DEF = "View12";
Viewpoint233.description = "ArtDeco12";
Viewpoint233.position = new SFVec3f(new float[-3.75,0.75,3]);
Group50.children[33] = Viewpoint233;

Transform Transform234 = createNode("Transform");
Transform234.translation = new SFVec3f(new float[-3.75,0.75,0]);
Anchor Anchor235 = createNode("Anchor");
Anchor235.description = "ArtDeco12 view";
Anchor235.url = new MFString(new java.lang.String["#View12"]);
Shape Shape236 = createNode("Shape");
Appearance Appearance237 = createNode("Appearance");
ProtoInstance ProtoInstance238 = createNode("ProtoInstance");
ProtoInstance238.name = "ArtDeco12";
Appearance237.shaders = new MFNode();

Appearance237.shaders[0] = ProtoInstance238;

Shape236.appearance = Appearance237;

Sphere Sphere239 = createNode("Sphere");
Sphere239.USE = "Ball";
Shape236.geometry = Sphere239;

Anchor235.children = new MFNode();

Anchor235.children[0] = Shape236;

Transform234.children = new MFNode();

Transform234.children[0] = Anchor235;

Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor241 = createNode("Anchor");
Anchor241.description = "ArtDeco12 view source documentation";
Anchor241.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor241.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"]);
Shape Shape242 = createNode("Shape");
Appearance Appearance243 = createNode("Appearance");
Material Material244 = createNode("Material");
Material244.USE = "TextMat";
Appearance243.material = Material244;

Shape242.appearance = Appearance243;

Text Text245 = createNode("Text");
Text245.string = new MFString(new java.lang.String["ArtDeco12"]);
FontStyle FontStyle246 = createNode("FontStyle");
FontStyle246.USE = "Style";
Text245.fontStyle = FontStyle246;

Shape242.geometry = Text245;

Anchor241.children = new MFNode();

Anchor241.children[0] = Shape242;

Transform240.children = new MFNode();

Transform240.children[0] = Anchor241;

Transform234.children[1] = Transform240;

Group50.children[34] = Transform234;

Viewpoint Viewpoint247 = createNode("Viewpoint");
Viewpoint247.DEF = "View13";
Viewpoint247.description = "ArtDeco13";
Viewpoint247.position = new SFVec3f(new float[-2.25,0.75,3]);
Group50.children[35] = Viewpoint247;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[-2.25,0.75,0]);
Anchor Anchor249 = createNode("Anchor");
Anchor249.description = "ArtDeco13 view";
Anchor249.url = new MFString(new java.lang.String["#View13"]);
Shape Shape250 = createNode("Shape");
Appearance Appearance251 = createNode("Appearance");
ProtoInstance ProtoInstance252 = createNode("ProtoInstance");
ProtoInstance252.name = "ArtDeco13";
Appearance251.shaders = new MFNode();

Appearance251.shaders[0] = ProtoInstance252;

Shape250.appearance = Appearance251;

Sphere Sphere253 = createNode("Sphere");
Sphere253.USE = "Ball";
Shape250.geometry = Sphere253;

Anchor249.children = new MFNode();

Anchor249.children[0] = Shape250;

Transform248.children = new MFNode();

Transform248.children[0] = Anchor249;

Transform Transform254 = createNode("Transform");
Transform254.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor255 = createNode("Anchor");
Anchor255.description = "ArtDeco13 view source documentation";
Anchor255.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor255.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"]);
Shape Shape256 = createNode("Shape");
Appearance Appearance257 = createNode("Appearance");
Material Material258 = createNode("Material");
Material258.USE = "TextMat";
Appearance257.material = Material258;

Shape256.appearance = Appearance257;

Text Text259 = createNode("Text");
Text259.string = new MFString(new java.lang.String["ArtDeco13"]);
FontStyle FontStyle260 = createNode("FontStyle");
FontStyle260.USE = "Style";
Text259.fontStyle = FontStyle260;

Shape256.geometry = Text259;

Anchor255.children = new MFNode();

Anchor255.children[0] = Shape256;

Transform254.children = new MFNode();

Transform254.children[0] = Anchor255;

Transform248.children[1] = Transform254;

Group50.children[36] = Transform248;

Viewpoint Viewpoint261 = createNode("Viewpoint");
Viewpoint261.DEF = "View14";
Viewpoint261.description = "ArtDeco14";
Viewpoint261.position = new SFVec3f(new float[-0.75,0.75,3]);
Group50.children[37] = Viewpoint261;

Transform Transform262 = createNode("Transform");
Transform262.translation = new SFVec3f(new float[-0.75,0.75,0]);
Anchor Anchor263 = createNode("Anchor");
Anchor263.description = "ArtDeco14 view";
Anchor263.url = new MFString(new java.lang.String["#View14"]);
Shape Shape264 = createNode("Shape");
Appearance Appearance265 = createNode("Appearance");
ProtoInstance ProtoInstance266 = createNode("ProtoInstance");
ProtoInstance266.name = "ArtDeco14";
Appearance265.shaders = new MFNode();

Appearance265.shaders[0] = ProtoInstance266;

Shape264.appearance = Appearance265;

Sphere Sphere267 = createNode("Sphere");
Sphere267.USE = "Ball";
Shape264.geometry = Sphere267;

Anchor263.children = new MFNode();

Anchor263.children[0] = Shape264;

Transform262.children = new MFNode();

Transform262.children[0] = Anchor263;

Transform Transform268 = createNode("Transform");
Transform268.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor269 = createNode("Anchor");
Anchor269.description = "ArtDeco14 view source documentation";
Anchor269.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor269.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"]);
Shape Shape270 = createNode("Shape");
Appearance Appearance271 = createNode("Appearance");
Material Material272 = createNode("Material");
Material272.USE = "TextMat";
Appearance271.material = Material272;

Shape270.appearance = Appearance271;

Text Text273 = createNode("Text");
Text273.string = new MFString(new java.lang.String["ArtDeco14"]);
FontStyle FontStyle274 = createNode("FontStyle");
FontStyle274.USE = "Style";
Text273.fontStyle = FontStyle274;

Shape270.geometry = Text273;

Anchor269.children = new MFNode();

Anchor269.children[0] = Shape270;

Transform268.children = new MFNode();

Transform268.children[0] = Anchor269;

Transform262.children[1] = Transform268;

Group50.children[38] = Transform262;

Viewpoint Viewpoint275 = createNode("Viewpoint");
Viewpoint275.DEF = "View15";
Viewpoint275.description = "ArtDeco15";
Viewpoint275.position = new SFVec3f(new float[0.75,0.75,3]);
Group50.children[39] = Viewpoint275;

Transform Transform276 = createNode("Transform");
Transform276.translation = new SFVec3f(new float[0.75,0.75,0]);
Anchor Anchor277 = createNode("Anchor");
Anchor277.description = "ArtDeco15 view";
Anchor277.url = new MFString(new java.lang.String["#View15"]);
Shape Shape278 = createNode("Shape");
Appearance Appearance279 = createNode("Appearance");
ProtoInstance ProtoInstance280 = createNode("ProtoInstance");
ProtoInstance280.name = "ArtDeco15";
Appearance279.shaders = new MFNode();

Appearance279.shaders[0] = ProtoInstance280;

Shape278.appearance = Appearance279;

Sphere Sphere281 = createNode("Sphere");
Sphere281.USE = "Ball";
Shape278.geometry = Sphere281;

Anchor277.children = new MFNode();

Anchor277.children[0] = Shape278;

Transform276.children = new MFNode();

Transform276.children[0] = Anchor277;

Transform Transform282 = createNode("Transform");
Transform282.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor283 = createNode("Anchor");
Anchor283.description = "ArtDeco15 view source documentation";
Anchor283.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor283.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"]);
Shape Shape284 = createNode("Shape");
Appearance Appearance285 = createNode("Appearance");
Material Material286 = createNode("Material");
Material286.USE = "TextMat";
Appearance285.material = Material286;

Shape284.appearance = Appearance285;

Text Text287 = createNode("Text");
Text287.string = new MFString(new java.lang.String["ArtDeco15"]);
FontStyle FontStyle288 = createNode("FontStyle");
FontStyle288.USE = "Style";
Text287.fontStyle = FontStyle288;

Shape284.geometry = Text287;

Anchor283.children = new MFNode();

Anchor283.children[0] = Shape284;

Transform282.children = new MFNode();

Transform282.children[0] = Anchor283;

Transform276.children[1] = Transform282;

Group50.children[40] = Transform276;

Viewpoint Viewpoint289 = createNode("Viewpoint");
Viewpoint289.DEF = "View16";
Viewpoint289.description = "ArtDeco16";
Viewpoint289.position = new SFVec3f(new float[2.25,0.75,3]);
Group50.children[41] = Viewpoint289;

Transform Transform290 = createNode("Transform");
Transform290.translation = new SFVec3f(new float[2.25,0.75,0]);
Anchor Anchor291 = createNode("Anchor");
Anchor291.description = "ArtDeco16 view";
Anchor291.url = new MFString(new java.lang.String["#View16"]);
Shape Shape292 = createNode("Shape");
Appearance Appearance293 = createNode("Appearance");
ProtoInstance ProtoInstance294 = createNode("ProtoInstance");
ProtoInstance294.name = "ArtDeco16";
Appearance293.shaders = new MFNode();

Appearance293.shaders[0] = ProtoInstance294;

Shape292.appearance = Appearance293;

Sphere Sphere295 = createNode("Sphere");
Sphere295.USE = "Ball";
Shape292.geometry = Sphere295;

Anchor291.children = new MFNode();

Anchor291.children[0] = Shape292;

Transform290.children = new MFNode();

Transform290.children[0] = Anchor291;

Transform Transform296 = createNode("Transform");
Transform296.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor297 = createNode("Anchor");
Anchor297.description = "ArtDeco16 view source documentation";
Anchor297.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor297.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"]);
Shape Shape298 = createNode("Shape");
Appearance Appearance299 = createNode("Appearance");
Material Material300 = createNode("Material");
Material300.USE = "TextMat";
Appearance299.material = Material300;

Shape298.appearance = Appearance299;

Text Text301 = createNode("Text");
Text301.string = new MFString(new java.lang.String["ArtDeco16"]);
FontStyle FontStyle302 = createNode("FontStyle");
FontStyle302.USE = "Style";
Text301.fontStyle = FontStyle302;

Shape298.geometry = Text301;

Anchor297.children = new MFNode();

Anchor297.children[0] = Shape298;

Transform296.children = new MFNode();

Transform296.children[0] = Anchor297;

Transform290.children[1] = Transform296;

Group50.children[42] = Transform290;

Viewpoint Viewpoint303 = createNode("Viewpoint");
Viewpoint303.DEF = "View17";
Viewpoint303.description = "ArtDeco17";
Viewpoint303.position = new SFVec3f(new float[3.75,0.75,3]);
Group50.children[43] = Viewpoint303;

Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[3.75,0.75,0]);
Anchor Anchor305 = createNode("Anchor");
Anchor305.description = "ArtDeco17 view";
Anchor305.url = new MFString(new java.lang.String["#View17"]);
Shape Shape306 = createNode("Shape");
Appearance Appearance307 = createNode("Appearance");
ProtoInstance ProtoInstance308 = createNode("ProtoInstance");
ProtoInstance308.name = "ArtDeco17";
Appearance307.shaders = new MFNode();

Appearance307.shaders[0] = ProtoInstance308;

Shape306.appearance = Appearance307;

Sphere Sphere309 = createNode("Sphere");
Sphere309.USE = "Ball";
Shape306.geometry = Sphere309;

Anchor305.children = new MFNode();

Anchor305.children[0] = Shape306;

Transform304.children = new MFNode();

Transform304.children[0] = Anchor305;

Transform Transform310 = createNode("Transform");
Transform310.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor311 = createNode("Anchor");
Anchor311.description = "ArtDeco17 view source documentation";
Anchor311.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor311.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"]);
Shape Shape312 = createNode("Shape");
Appearance Appearance313 = createNode("Appearance");
Material Material314 = createNode("Material");
Material314.USE = "TextMat";
Appearance313.material = Material314;

Shape312.appearance = Appearance313;

Text Text315 = createNode("Text");
Text315.string = new MFString(new java.lang.String["ArtDeco17"]);
FontStyle FontStyle316 = createNode("FontStyle");
FontStyle316.USE = "Style";
Text315.fontStyle = FontStyle316;

Shape312.geometry = Text315;

Anchor311.children = new MFNode();

Anchor311.children[0] = Shape312;

Transform310.children = new MFNode();

Transform310.children[0] = Anchor311;

Transform304.children[1] = Transform310;

Group50.children[44] = Transform304;

Viewpoint Viewpoint317 = createNode("Viewpoint");
Viewpoint317.DEF = "View18";
Viewpoint317.description = "ArtDeco18";
Viewpoint317.position = new SFVec3f(new float[-3.75,-0.75,3]);
Group50.children[45] = Viewpoint317;

Transform Transform318 = createNode("Transform");
Transform318.translation = new SFVec3f(new float[-3.75,-0.75,0]);
Anchor Anchor319 = createNode("Anchor");
Anchor319.description = "ArtDeco18 view";
Anchor319.url = new MFString(new java.lang.String["#View18"]);
Shape Shape320 = createNode("Shape");
Appearance Appearance321 = createNode("Appearance");
ProtoInstance ProtoInstance322 = createNode("ProtoInstance");
ProtoInstance322.name = "ArtDeco18";
Appearance321.shaders = new MFNode();

Appearance321.shaders[0] = ProtoInstance322;

Shape320.appearance = Appearance321;

Sphere Sphere323 = createNode("Sphere");
Sphere323.USE = "Ball";
Shape320.geometry = Sphere323;

Anchor319.children = new MFNode();

Anchor319.children[0] = Shape320;

Transform318.children = new MFNode();

Transform318.children[0] = Anchor319;

Transform Transform324 = createNode("Transform");
Transform324.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor325 = createNode("Anchor");
Anchor325.description = "ArtDeco18 view source documentation";
Anchor325.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor325.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"]);
Shape Shape326 = createNode("Shape");
Appearance Appearance327 = createNode("Appearance");
Material Material328 = createNode("Material");
Material328.USE = "TextMat";
Appearance327.material = Material328;

Shape326.appearance = Appearance327;

Text Text329 = createNode("Text");
Text329.string = new MFString(new java.lang.String["ArtDeco18"]);
FontStyle FontStyle330 = createNode("FontStyle");
FontStyle330.USE = "Style";
Text329.fontStyle = FontStyle330;

Shape326.geometry = Text329;

Anchor325.children = new MFNode();

Anchor325.children[0] = Shape326;

Transform324.children = new MFNode();

Transform324.children[0] = Anchor325;

Transform318.children[1] = Transform324;

Group50.children[46] = Transform318;

Viewpoint Viewpoint331 = createNode("Viewpoint");
Viewpoint331.DEF = "View19";
Viewpoint331.description = "ArtDeco19";
Viewpoint331.position = new SFVec3f(new float[-2.25,-0.75,3]);
Group50.children[47] = Viewpoint331;

Transform Transform332 = createNode("Transform");
Transform332.translation = new SFVec3f(new float[-2.25,-0.75,0]);
Anchor Anchor333 = createNode("Anchor");
Anchor333.description = "ArtDeco19 view";
Anchor333.url = new MFString(new java.lang.String["#View19"]);
Shape Shape334 = createNode("Shape");
Appearance Appearance335 = createNode("Appearance");
ProtoInstance ProtoInstance336 = createNode("ProtoInstance");
ProtoInstance336.name = "ArtDeco19";
Appearance335.shaders = new MFNode();

Appearance335.shaders[0] = ProtoInstance336;

Shape334.appearance = Appearance335;

Sphere Sphere337 = createNode("Sphere");
Sphere337.USE = "Ball";
Shape334.geometry = Sphere337;

Anchor333.children = new MFNode();

Anchor333.children[0] = Shape334;

Transform332.children = new MFNode();

Transform332.children[0] = Anchor333;

Transform Transform338 = createNode("Transform");
Transform338.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor339 = createNode("Anchor");
Anchor339.description = "ArtDeco19 view source documentation";
Anchor339.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor339.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"]);
Shape Shape340 = createNode("Shape");
Appearance Appearance341 = createNode("Appearance");
Material Material342 = createNode("Material");
Material342.USE = "TextMat";
Appearance341.material = Material342;

Shape340.appearance = Appearance341;

Text Text343 = createNode("Text");
Text343.string = new MFString(new java.lang.String["ArtDeco19"]);
FontStyle FontStyle344 = createNode("FontStyle");
FontStyle344.USE = "Style";
Text343.fontStyle = FontStyle344;

Shape340.geometry = Text343;

Anchor339.children = new MFNode();

Anchor339.children[0] = Shape340;

Transform338.children = new MFNode();

Transform338.children[0] = Anchor339;

Transform332.children[1] = Transform338;

Group50.children[48] = Transform332;

Viewpoint Viewpoint345 = createNode("Viewpoint");
Viewpoint345.DEF = "View20";
Viewpoint345.description = "ArtDeco20";
Viewpoint345.position = new SFVec3f(new float[-0.75,-0.75,3]);
Group50.children[49] = Viewpoint345;

Transform Transform346 = createNode("Transform");
Transform346.translation = new SFVec3f(new float[-0.75,-0.75,0]);
Anchor Anchor347 = createNode("Anchor");
Anchor347.description = "ArtDeco20 view";
Anchor347.url = new MFString(new java.lang.String["#View20"]);
Shape Shape348 = createNode("Shape");
Appearance Appearance349 = createNode("Appearance");
ProtoInstance ProtoInstance350 = createNode("ProtoInstance");
ProtoInstance350.name = "ArtDeco20";
Appearance349.shaders = new MFNode();

Appearance349.shaders[0] = ProtoInstance350;

Shape348.appearance = Appearance349;

Sphere Sphere351 = createNode("Sphere");
Sphere351.USE = "Ball";
Shape348.geometry = Sphere351;

Anchor347.children = new MFNode();

Anchor347.children[0] = Shape348;

Transform346.children = new MFNode();

Transform346.children[0] = Anchor347;

Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor353 = createNode("Anchor");
Anchor353.description = "ArtDeco20 view source documentation";
Anchor353.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor353.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"]);
Shape Shape354 = createNode("Shape");
Appearance Appearance355 = createNode("Appearance");
Material Material356 = createNode("Material");
Material356.USE = "TextMat";
Appearance355.material = Material356;

Shape354.appearance = Appearance355;

Text Text357 = createNode("Text");
Text357.string = new MFString(new java.lang.String["ArtDeco20"]);
FontStyle FontStyle358 = createNode("FontStyle");
FontStyle358.USE = "Style";
Text357.fontStyle = FontStyle358;

Shape354.geometry = Text357;

Anchor353.children = new MFNode();

Anchor353.children[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Anchor353;

Transform346.children[1] = Transform352;

Group50.children[50] = Transform346;

Viewpoint Viewpoint359 = createNode("Viewpoint");
Viewpoint359.DEF = "View21";
Viewpoint359.description = "ArtDeco21";
Viewpoint359.position = new SFVec3f(new float[0.75,-0.75,3]);
Group50.children[51] = Viewpoint359;

Transform Transform360 = createNode("Transform");
Transform360.translation = new SFVec3f(new float[0.75,-0.75,0]);
Anchor Anchor361 = createNode("Anchor");
Anchor361.description = "ArtDeco21 view";
Anchor361.url = new MFString(new java.lang.String["#View21"]);
Shape Shape362 = createNode("Shape");
Appearance Appearance363 = createNode("Appearance");
ProtoInstance ProtoInstance364 = createNode("ProtoInstance");
ProtoInstance364.name = "ArtDeco21";
Appearance363.shaders = new MFNode();

Appearance363.shaders[0] = ProtoInstance364;

Shape362.appearance = Appearance363;

Sphere Sphere365 = createNode("Sphere");
Sphere365.USE = "Ball";
Shape362.geometry = Sphere365;

Anchor361.children = new MFNode();

Anchor361.children[0] = Shape362;

Transform360.children = new MFNode();

Transform360.children[0] = Anchor361;

Transform Transform366 = createNode("Transform");
Transform366.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor367 = createNode("Anchor");
Anchor367.description = "ArtDeco21 view source documentation";
Anchor367.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor367.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"]);
Shape Shape368 = createNode("Shape");
Appearance Appearance369 = createNode("Appearance");
Material Material370 = createNode("Material");
Material370.USE = "TextMat";
Appearance369.material = Material370;

Shape368.appearance = Appearance369;

Text Text371 = createNode("Text");
Text371.string = new MFString(new java.lang.String["ArtDeco21"]);
FontStyle FontStyle372 = createNode("FontStyle");
FontStyle372.USE = "Style";
Text371.fontStyle = FontStyle372;

Shape368.geometry = Text371;

Anchor367.children = new MFNode();

Anchor367.children[0] = Shape368;

Transform366.children = new MFNode();

Transform366.children[0] = Anchor367;

Transform360.children[1] = Transform366;

Group50.children[52] = Transform360;

Viewpoint Viewpoint373 = createNode("Viewpoint");
Viewpoint373.DEF = "View22";
Viewpoint373.description = "ArtDeco22";
Viewpoint373.position = new SFVec3f(new float[2.25,-0.75,3]);
Group50.children[53] = Viewpoint373;

Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[2.25,-0.75,0]);
Anchor Anchor375 = createNode("Anchor");
Anchor375.description = "ArtDeco22 view";
Anchor375.url = new MFString(new java.lang.String["#View22"]);
Shape Shape376 = createNode("Shape");
Appearance Appearance377 = createNode("Appearance");
ProtoInstance ProtoInstance378 = createNode("ProtoInstance");
ProtoInstance378.name = "ArtDeco22";
Appearance377.shaders = new MFNode();

Appearance377.shaders[0] = ProtoInstance378;

Shape376.appearance = Appearance377;

Sphere Sphere379 = createNode("Sphere");
Sphere379.USE = "Ball";
Shape376.geometry = Sphere379;

Anchor375.children = new MFNode();

Anchor375.children[0] = Shape376;

Transform374.children = new MFNode();

Transform374.children[0] = Anchor375;

Transform Transform380 = createNode("Transform");
Transform380.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor381 = createNode("Anchor");
Anchor381.description = "ArtDeco22 view source documentation";
Anchor381.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor381.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"]);
Shape Shape382 = createNode("Shape");
Appearance Appearance383 = createNode("Appearance");
Material Material384 = createNode("Material");
Material384.USE = "TextMat";
Appearance383.material = Material384;

Shape382.appearance = Appearance383;

Text Text385 = createNode("Text");
Text385.string = new MFString(new java.lang.String["ArtDeco22"]);
FontStyle FontStyle386 = createNode("FontStyle");
FontStyle386.USE = "Style";
Text385.fontStyle = FontStyle386;

Shape382.geometry = Text385;

Anchor381.children = new MFNode();

Anchor381.children[0] = Shape382;

Transform380.children = new MFNode();

Transform380.children[0] = Anchor381;

Transform374.children[1] = Transform380;

Group50.children[54] = Transform374;

Viewpoint Viewpoint387 = createNode("Viewpoint");
Viewpoint387.DEF = "View23";
Viewpoint387.description = "ArtDeco23";
Viewpoint387.position = new SFVec3f(new float[3.75,-0.75,3]);
Group50.children[55] = Viewpoint387;

Transform Transform388 = createNode("Transform");
Transform388.translation = new SFVec3f(new float[3.75,-0.75,0]);
Anchor Anchor389 = createNode("Anchor");
Anchor389.description = "ArtDeco23 view";
Anchor389.url = new MFString(new java.lang.String["#View23"]);
Shape Shape390 = createNode("Shape");
Appearance Appearance391 = createNode("Appearance");
ProtoInstance ProtoInstance392 = createNode("ProtoInstance");
ProtoInstance392.name = "ArtDeco23";
Appearance391.shaders = new MFNode();

Appearance391.shaders[0] = ProtoInstance392;

Shape390.appearance = Appearance391;

Sphere Sphere393 = createNode("Sphere");
Sphere393.USE = "Ball";
Shape390.geometry = Sphere393;

Anchor389.children = new MFNode();

Anchor389.children[0] = Shape390;

Transform388.children = new MFNode();

Transform388.children[0] = Anchor389;

Transform Transform394 = createNode("Transform");
Transform394.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor395 = createNode("Anchor");
Anchor395.description = "ArtDeco23 view source documentation";
Anchor395.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor395.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"]);
Shape Shape396 = createNode("Shape");
Appearance Appearance397 = createNode("Appearance");
Material Material398 = createNode("Material");
Material398.USE = "TextMat";
Appearance397.material = Material398;

Shape396.appearance = Appearance397;

Text Text399 = createNode("Text");
Text399.string = new MFString(new java.lang.String["ArtDeco23"]);
FontStyle FontStyle400 = createNode("FontStyle");
FontStyle400.USE = "Style";
Text399.fontStyle = FontStyle400;

Shape396.geometry = Text399;

Anchor395.children = new MFNode();

Anchor395.children[0] = Shape396;

Transform394.children = new MFNode();

Transform394.children[0] = Anchor395;

Transform388.children[1] = Transform394;

Group50.children[56] = Transform388;

Viewpoint Viewpoint401 = createNode("Viewpoint");
Viewpoint401.DEF = "View24";
Viewpoint401.description = "ArtDeco24";
Viewpoint401.position = new SFVec3f(new float[-3.75,-2.25,3]);
Group50.children[57] = Viewpoint401;

Transform Transform402 = createNode("Transform");
Transform402.translation = new SFVec3f(new float[-3.75,-2.25,0]);
Anchor Anchor403 = createNode("Anchor");
Anchor403.description = "ArtDeco24 view";
Anchor403.url = new MFString(new java.lang.String["#View24"]);
Shape Shape404 = createNode("Shape");
Appearance Appearance405 = createNode("Appearance");
ProtoInstance ProtoInstance406 = createNode("ProtoInstance");
ProtoInstance406.name = "ArtDeco24";
Appearance405.shaders = new MFNode();

Appearance405.shaders[0] = ProtoInstance406;

Shape404.appearance = Appearance405;

Sphere Sphere407 = createNode("Sphere");
Sphere407.USE = "Ball";
Shape404.geometry = Sphere407;

Anchor403.children = new MFNode();

Anchor403.children[0] = Shape404;

Transform402.children = new MFNode();

Transform402.children[0] = Anchor403;

Transform Transform408 = createNode("Transform");
Transform408.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor409 = createNode("Anchor");
Anchor409.description = "ArtDeco24 view source documentation";
Anchor409.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor409.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"]);
Shape Shape410 = createNode("Shape");
Appearance Appearance411 = createNode("Appearance");
Material Material412 = createNode("Material");
Material412.USE = "TextMat";
Appearance411.material = Material412;

Shape410.appearance = Appearance411;

Text Text413 = createNode("Text");
Text413.string = new MFString(new java.lang.String["ArtDeco24"]);
FontStyle FontStyle414 = createNode("FontStyle");
FontStyle414.USE = "Style";
Text413.fontStyle = FontStyle414;

Shape410.geometry = Text413;

Anchor409.children = new MFNode();

Anchor409.children[0] = Shape410;

Transform408.children = new MFNode();

Transform408.children[0] = Anchor409;

Transform402.children[1] = Transform408;

Group50.children[58] = Transform402;

Viewpoint Viewpoint415 = createNode("Viewpoint");
Viewpoint415.DEF = "View25";
Viewpoint415.description = "ArtDeco25";
Viewpoint415.position = new SFVec3f(new float[-2.25,-2.25,3]);
Group50.children[59] = Viewpoint415;

Transform Transform416 = createNode("Transform");
Transform416.translation = new SFVec3f(new float[-2.25,-2.25,0]);
Anchor Anchor417 = createNode("Anchor");
Anchor417.description = "ArtDeco25 view";
Anchor417.url = new MFString(new java.lang.String["#View25"]);
Shape Shape418 = createNode("Shape");
Appearance Appearance419 = createNode("Appearance");
ProtoInstance ProtoInstance420 = createNode("ProtoInstance");
ProtoInstance420.name = "ArtDeco25";
Appearance419.shaders = new MFNode();

Appearance419.shaders[0] = ProtoInstance420;

Shape418.appearance = Appearance419;

Sphere Sphere421 = createNode("Sphere");
Sphere421.USE = "Ball";
Shape418.geometry = Sphere421;

Anchor417.children = new MFNode();

Anchor417.children[0] = Shape418;

Transform416.children = new MFNode();

Transform416.children[0] = Anchor417;

Transform Transform422 = createNode("Transform");
Transform422.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor423 = createNode("Anchor");
Anchor423.description = "ArtDeco25 view source documentation";
Anchor423.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor423.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"]);
Shape Shape424 = createNode("Shape");
Appearance Appearance425 = createNode("Appearance");
Material Material426 = createNode("Material");
Material426.USE = "TextMat";
Appearance425.material = Material426;

Shape424.appearance = Appearance425;

Text Text427 = createNode("Text");
Text427.string = new MFString(new java.lang.String["ArtDeco25"]);
FontStyle FontStyle428 = createNode("FontStyle");
FontStyle428.USE = "Style";
Text427.fontStyle = FontStyle428;

Shape424.geometry = Text427;

Anchor423.children = new MFNode();

Anchor423.children[0] = Shape424;

Transform422.children = new MFNode();

Transform422.children[0] = Anchor423;

Transform416.children[1] = Transform422;

Group50.children[60] = Transform416;

Viewpoint Viewpoint429 = createNode("Viewpoint");
Viewpoint429.DEF = "View26";
Viewpoint429.description = "ArtDeco26";
Viewpoint429.position = new SFVec3f(new float[-0.75,-2.25,3]);
Group50.children[61] = Viewpoint429;

Transform Transform430 = createNode("Transform");
Transform430.translation = new SFVec3f(new float[-0.75,-2.25,0]);
Anchor Anchor431 = createNode("Anchor");
Anchor431.description = "ArtDeco26 view";
Anchor431.url = new MFString(new java.lang.String["#View26"]);
Shape Shape432 = createNode("Shape");
Appearance Appearance433 = createNode("Appearance");
ProtoInstance ProtoInstance434 = createNode("ProtoInstance");
ProtoInstance434.name = "ArtDeco26";
Appearance433.shaders = new MFNode();

Appearance433.shaders[0] = ProtoInstance434;

Shape432.appearance = Appearance433;

Sphere Sphere435 = createNode("Sphere");
Sphere435.USE = "Ball";
Shape432.geometry = Sphere435;

Anchor431.children = new MFNode();

Anchor431.children[0] = Shape432;

Transform430.children = new MFNode();

Transform430.children[0] = Anchor431;

Transform Transform436 = createNode("Transform");
Transform436.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor437 = createNode("Anchor");
Anchor437.description = "ArtDeco26 view source documentation";
Anchor437.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor437.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"]);
Shape Shape438 = createNode("Shape");
Appearance Appearance439 = createNode("Appearance");
Material Material440 = createNode("Material");
Material440.USE = "TextMat";
Appearance439.material = Material440;

Shape438.appearance = Appearance439;

Text Text441 = createNode("Text");
Text441.string = new MFString(new java.lang.String["ArtDeco26"]);
FontStyle FontStyle442 = createNode("FontStyle");
FontStyle442.USE = "Style";
Text441.fontStyle = FontStyle442;

Shape438.geometry = Text441;

Anchor437.children = new MFNode();

Anchor437.children[0] = Shape438;

Transform436.children = new MFNode();

Transform436.children[0] = Anchor437;

Transform430.children[1] = Transform436;

Group50.children[62] = Transform430;

Viewpoint Viewpoint443 = createNode("Viewpoint");
Viewpoint443.DEF = "View27";
Viewpoint443.description = "ArtDeco27";
Viewpoint443.position = new SFVec3f(new float[0.75,-2.25,3]);
Group50.children[63] = Viewpoint443;

Transform Transform444 = createNode("Transform");
Transform444.translation = new SFVec3f(new float[0.75,-2.25,0]);
Anchor Anchor445 = createNode("Anchor");
Anchor445.description = "ArtDeco27 view";
Anchor445.url = new MFString(new java.lang.String["#View27"]);
Shape Shape446 = createNode("Shape");
Appearance Appearance447 = createNode("Appearance");
ProtoInstance ProtoInstance448 = createNode("ProtoInstance");
ProtoInstance448.name = "ArtDeco27";
Appearance447.shaders = new MFNode();

Appearance447.shaders[0] = ProtoInstance448;

Shape446.appearance = Appearance447;

Sphere Sphere449 = createNode("Sphere");
Sphere449.USE = "Ball";
Shape446.geometry = Sphere449;

Anchor445.children = new MFNode();

Anchor445.children[0] = Shape446;

Transform444.children = new MFNode();

Transform444.children[0] = Anchor445;

Transform Transform450 = createNode("Transform");
Transform450.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor451 = createNode("Anchor");
Anchor451.description = "ArtDeco27 view source documentation";
Anchor451.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor451.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"]);
Shape Shape452 = createNode("Shape");
Appearance Appearance453 = createNode("Appearance");
Material Material454 = createNode("Material");
Material454.USE = "TextMat";
Appearance453.material = Material454;

Shape452.appearance = Appearance453;

Text Text455 = createNode("Text");
Text455.string = new MFString(new java.lang.String["ArtDeco27"]);
FontStyle FontStyle456 = createNode("FontStyle");
FontStyle456.USE = "Style";
Text455.fontStyle = FontStyle456;

Shape452.geometry = Text455;

Anchor451.children = new MFNode();

Anchor451.children[0] = Shape452;

Transform450.children = new MFNode();

Transform450.children[0] = Anchor451;

Transform444.children[1] = Transform450;

Group50.children[64] = Transform444;

Viewpoint Viewpoint457 = createNode("Viewpoint");
Viewpoint457.DEF = "View28";
Viewpoint457.description = "ArtDeco28";
Viewpoint457.position = new SFVec3f(new float[2.25,-2.25,3]);
Group50.children[65] = Viewpoint457;

Transform Transform458 = createNode("Transform");
Transform458.translation = new SFVec3f(new float[2.25,-2.25,0]);
Anchor Anchor459 = createNode("Anchor");
Anchor459.description = "ArtDeco28 view";
Anchor459.url = new MFString(new java.lang.String["#View28"]);
Shape Shape460 = createNode("Shape");
Appearance Appearance461 = createNode("Appearance");
ProtoInstance ProtoInstance462 = createNode("ProtoInstance");
ProtoInstance462.name = "ArtDeco28";
Appearance461.shaders = new MFNode();

Appearance461.shaders[0] = ProtoInstance462;

Shape460.appearance = Appearance461;

Sphere Sphere463 = createNode("Sphere");
Sphere463.USE = "Ball";
Shape460.geometry = Sphere463;

Anchor459.children = new MFNode();

Anchor459.children[0] = Shape460;

Transform458.children = new MFNode();

Transform458.children[0] = Anchor459;

Transform Transform464 = createNode("Transform");
Transform464.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor465 = createNode("Anchor");
Anchor465.description = "ArtDeco28 view source documentation";
Anchor465.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor465.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"]);
Shape Shape466 = createNode("Shape");
Appearance Appearance467 = createNode("Appearance");
Material Material468 = createNode("Material");
Material468.USE = "TextMat";
Appearance467.material = Material468;

Shape466.appearance = Appearance467;

Text Text469 = createNode("Text");
Text469.string = new MFString(new java.lang.String["ArtDeco28"]);
FontStyle FontStyle470 = createNode("FontStyle");
FontStyle470.USE = "Style";
Text469.fontStyle = FontStyle470;

Shape466.geometry = Text469;

Anchor465.children = new MFNode();

Anchor465.children[0] = Shape466;

Transform464.children = new MFNode();

Transform464.children[0] = Anchor465;

Transform458.children[1] = Transform464;

Group50.children[66] = Transform458;

Viewpoint Viewpoint471 = createNode("Viewpoint");
Viewpoint471.DEF = "View29";
Viewpoint471.description = "ArtDeco29";
Viewpoint471.position = new SFVec3f(new float[3.75,-2.25,3]);
Group50.children[67] = Viewpoint471;

Transform Transform472 = createNode("Transform");
Transform472.translation = new SFVec3f(new float[3.75,-2.25,0]);
Anchor Anchor473 = createNode("Anchor");
Anchor473.description = "ArtDeco29 view";
Anchor473.url = new MFString(new java.lang.String["#View29"]);
Shape Shape474 = createNode("Shape");
Appearance Appearance475 = createNode("Appearance");
ProtoInstance ProtoInstance476 = createNode("ProtoInstance");
ProtoInstance476.name = "ArtDeco29";
Appearance475.shaders = new MFNode();

Appearance475.shaders[0] = ProtoInstance476;

Shape474.appearance = Appearance475;

Sphere Sphere477 = createNode("Sphere");
Sphere477.USE = "Ball";
Shape474.geometry = Sphere477;

Anchor473.children = new MFNode();

Anchor473.children[0] = Shape474;

Transform472.children = new MFNode();

Transform472.children[0] = Anchor473;

Transform Transform478 = createNode("Transform");
Transform478.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor479 = createNode("Anchor");
Anchor479.description = "ArtDeco29 view source documentation";
Anchor479.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor479.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"]);
Shape Shape480 = createNode("Shape");
Appearance Appearance481 = createNode("Appearance");
Material Material482 = createNode("Material");
Material482.USE = "TextMat";
Appearance481.material = Material482;

Shape480.appearance = Appearance481;

Text Text483 = createNode("Text");
Text483.string = new MFString(new java.lang.String["ArtDeco29"]);
FontStyle FontStyle484 = createNode("FontStyle");
FontStyle484.USE = "Style";
Text483.fontStyle = FontStyle484;

Shape480.geometry = Text483;

Anchor479.children = new MFNode();

Anchor479.children[0] = Shape480;

Transform478.children = new MFNode();

Transform478.children[0] = Anchor479;

Transform472.children[1] = Transform478;

Group50.children[68] = Transform472;

Viewpoint Viewpoint485 = createNode("Viewpoint");
Viewpoint485.DEF = "View30";
Viewpoint485.description = "ArtDeco30";
Viewpoint485.position = new SFVec3f(new float[-3.75,-3.75,3]);
Group50.children[69] = Viewpoint485;

Transform Transform486 = createNode("Transform");
Transform486.translation = new SFVec3f(new float[-3.75,-3.75,0]);
Anchor Anchor487 = createNode("Anchor");
Anchor487.description = "ArtDeco30 view";
Anchor487.url = new MFString(new java.lang.String["#View30"]);
Shape Shape488 = createNode("Shape");
Appearance Appearance489 = createNode("Appearance");
ProtoInstance ProtoInstance490 = createNode("ProtoInstance");
ProtoInstance490.name = "ArtDeco30";
Appearance489.shaders = new MFNode();

Appearance489.shaders[0] = ProtoInstance490;

Shape488.appearance = Appearance489;

Sphere Sphere491 = createNode("Sphere");
Sphere491.USE = "Ball";
Shape488.geometry = Sphere491;

Anchor487.children = new MFNode();

Anchor487.children[0] = Shape488;

Transform486.children = new MFNode();

Transform486.children[0] = Anchor487;

Transform Transform492 = createNode("Transform");
Transform492.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor493 = createNode("Anchor");
Anchor493.description = "ArtDeco30 view source documentation";
Anchor493.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor493.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"]);
Shape Shape494 = createNode("Shape");
Appearance Appearance495 = createNode("Appearance");
Material Material496 = createNode("Material");
Material496.USE = "TextMat";
Appearance495.material = Material496;

Shape494.appearance = Appearance495;

Text Text497 = createNode("Text");
Text497.string = new MFString(new java.lang.String["ArtDeco30"]);
FontStyle FontStyle498 = createNode("FontStyle");
FontStyle498.USE = "Style";
Text497.fontStyle = FontStyle498;

Shape494.geometry = Text497;

Anchor493.children = new MFNode();

Anchor493.children[0] = Shape494;

Transform492.children = new MFNode();

Transform492.children[0] = Anchor493;

Transform486.children[1] = Transform492;

Group50.children[70] = Transform486;

Viewpoint Viewpoint499 = createNode("Viewpoint");
Viewpoint499.DEF = "View31";
Viewpoint499.description = "ArtDeco31";
Viewpoint499.position = new SFVec3f(new float[-2.25,-3.75,3]);
Group50.children[71] = Viewpoint499;

Transform Transform500 = createNode("Transform");
Transform500.translation = new SFVec3f(new float[-2.25,-3.75,0]);
Anchor Anchor501 = createNode("Anchor");
Anchor501.description = "ArtDeco31 view";
Anchor501.url = new MFString(new java.lang.String["#View31"]);
Shape Shape502 = createNode("Shape");
Appearance Appearance503 = createNode("Appearance");
ProtoInstance ProtoInstance504 = createNode("ProtoInstance");
ProtoInstance504.name = "ArtDeco31";
Appearance503.shaders = new MFNode();

Appearance503.shaders[0] = ProtoInstance504;

Shape502.appearance = Appearance503;

Sphere Sphere505 = createNode("Sphere");
Sphere505.USE = "Ball";
Shape502.geometry = Sphere505;

Anchor501.children = new MFNode();

Anchor501.children[0] = Shape502;

Transform500.children = new MFNode();

Transform500.children[0] = Anchor501;

Transform Transform506 = createNode("Transform");
Transform506.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor507 = createNode("Anchor");
Anchor507.description = "ArtDeco31 view source documentation";
Anchor507.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor507.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"]);
Shape Shape508 = createNode("Shape");
Appearance Appearance509 = createNode("Appearance");
Material Material510 = createNode("Material");
Material510.USE = "TextMat";
Appearance509.material = Material510;

Shape508.appearance = Appearance509;

Text Text511 = createNode("Text");
Text511.string = new MFString(new java.lang.String["ArtDeco31"]);
FontStyle FontStyle512 = createNode("FontStyle");
FontStyle512.USE = "Style";
Text511.fontStyle = FontStyle512;

Shape508.geometry = Text511;

Anchor507.children = new MFNode();

Anchor507.children[0] = Shape508;

Transform506.children = new MFNode();

Transform506.children[0] = Anchor507;

Transform500.children[1] = Transform506;

Group50.children[72] = Transform500;

Viewpoint Viewpoint513 = createNode("Viewpoint");
Viewpoint513.DEF = "View32";
Viewpoint513.description = "ArtDeco32";
Viewpoint513.position = new SFVec3f(new float[-0.75,-3.75,3]);
Group50.children[73] = Viewpoint513;

Transform Transform514 = createNode("Transform");
Transform514.translation = new SFVec3f(new float[-0.75,-3.75,0]);
Anchor Anchor515 = createNode("Anchor");
Anchor515.description = "ArtDeco32 view";
Anchor515.url = new MFString(new java.lang.String["#View32"]);
Shape Shape516 = createNode("Shape");
Appearance Appearance517 = createNode("Appearance");
ProtoInstance ProtoInstance518 = createNode("ProtoInstance");
ProtoInstance518.name = "ArtDeco32";
Appearance517.shaders = new MFNode();

Appearance517.shaders[0] = ProtoInstance518;

Shape516.appearance = Appearance517;

Sphere Sphere519 = createNode("Sphere");
Sphere519.USE = "Ball";
Shape516.geometry = Sphere519;

Anchor515.children = new MFNode();

Anchor515.children[0] = Shape516;

Transform514.children = new MFNode();

Transform514.children[0] = Anchor515;

Transform Transform520 = createNode("Transform");
Transform520.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor521 = createNode("Anchor");
Anchor521.description = "ArtDeco32 view source documentation";
Anchor521.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor521.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"]);
Shape Shape522 = createNode("Shape");
Appearance Appearance523 = createNode("Appearance");
Material Material524 = createNode("Material");
Material524.USE = "TextMat";
Appearance523.material = Material524;

Shape522.appearance = Appearance523;

Text Text525 = createNode("Text");
Text525.string = new MFString(new java.lang.String["ArtDeco32"]);
FontStyle FontStyle526 = createNode("FontStyle");
FontStyle526.USE = "Style";
Text525.fontStyle = FontStyle526;

Shape522.geometry = Text525;

Anchor521.children = new MFNode();

Anchor521.children[0] = Shape522;

Transform520.children = new MFNode();

Transform520.children[0] = Anchor521;

Transform514.children[1] = Transform520;

Group50.children[74] = Transform514;

Viewpoint Viewpoint527 = createNode("Viewpoint");
Viewpoint527.DEF = "View33";
Viewpoint527.description = "ArtDeco33";
Viewpoint527.position = new SFVec3f(new float[0.75,-3.75,3]);
Group50.children[75] = Viewpoint527;

Transform Transform528 = createNode("Transform");
Transform528.translation = new SFVec3f(new float[0.75,-3.75,0]);
Anchor Anchor529 = createNode("Anchor");
Anchor529.description = "ArtDeco33 view";
Anchor529.url = new MFString(new java.lang.String["#View33"]);
Shape Shape530 = createNode("Shape");
Appearance Appearance531 = createNode("Appearance");
ProtoInstance ProtoInstance532 = createNode("ProtoInstance");
ProtoInstance532.name = "ArtDeco33";
Appearance531.shaders = new MFNode();

Appearance531.shaders[0] = ProtoInstance532;

Shape530.appearance = Appearance531;

Sphere Sphere533 = createNode("Sphere");
Sphere533.USE = "Ball";
Shape530.geometry = Sphere533;

Anchor529.children = new MFNode();

Anchor529.children[0] = Shape530;

Transform528.children = new MFNode();

Transform528.children[0] = Anchor529;

Transform Transform534 = createNode("Transform");
Transform534.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor535 = createNode("Anchor");
Anchor535.description = "ArtDeco33 view source documentation";
Anchor535.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor535.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"]);
Shape Shape536 = createNode("Shape");
Appearance Appearance537 = createNode("Appearance");
Material Material538 = createNode("Material");
Material538.USE = "TextMat";
Appearance537.material = Material538;

Shape536.appearance = Appearance537;

Text Text539 = createNode("Text");
Text539.string = new MFString(new java.lang.String["ArtDeco33"]);
FontStyle FontStyle540 = createNode("FontStyle");
FontStyle540.USE = "Style";
Text539.fontStyle = FontStyle540;

Shape536.geometry = Text539;

Anchor535.children = new MFNode();

Anchor535.children[0] = Shape536;

Transform534.children = new MFNode();

Transform534.children[0] = Anchor535;

Transform528.children[1] = Transform534;

Group50.children[76] = Transform528;

Viewpoint Viewpoint541 = createNode("Viewpoint");
Viewpoint541.DEF = "View34";
Viewpoint541.description = "ArtDeco34";
Viewpoint541.position = new SFVec3f(new float[2.25,-3.75,3]);
Group50.children[77] = Viewpoint541;

Transform Transform542 = createNode("Transform");
Transform542.translation = new SFVec3f(new float[2.25,-3.75,0]);
Anchor Anchor543 = createNode("Anchor");
Anchor543.description = "ArtDeco34 view";
Anchor543.url = new MFString(new java.lang.String["#View34"]);
Shape Shape544 = createNode("Shape");
Appearance Appearance545 = createNode("Appearance");
ProtoInstance ProtoInstance546 = createNode("ProtoInstance");
ProtoInstance546.name = "ArtDeco34";
Appearance545.shaders = new MFNode();

Appearance545.shaders[0] = ProtoInstance546;

Shape544.appearance = Appearance545;

Sphere Sphere547 = createNode("Sphere");
Sphere547.USE = "Ball";
Shape544.geometry = Sphere547;

Anchor543.children = new MFNode();

Anchor543.children[0] = Shape544;

Transform542.children = new MFNode();

Transform542.children[0] = Anchor543;

Transform Transform548 = createNode("Transform");
Transform548.translation = new SFVec3f(new float[0,0.3,0.5]);
Anchor Anchor549 = createNode("Anchor");
Anchor549.description = "ArtDeco34 view source documentation";
Anchor549.parameter = new MFString(new java.lang.String["target=_source"]);
Anchor549.url = new MFString(new java.lang.String["../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"]);
Shape Shape550 = createNode("Shape");
Appearance Appearance551 = createNode("Appearance");
Material Material552 = createNode("Material");
Material552.USE = "TextMat";
Appearance551.material = Material552;

Shape550.appearance = Appearance551;

Text Text553 = createNode("Text");
Text553.string = new MFString(new java.lang.String["ArtDeco34"]);
FontStyle FontStyle554 = createNode("FontStyle");
FontStyle554.USE = "Style";
Text553.fontStyle = FontStyle554;

Shape550.geometry = Text553;

Anchor549.children = new MFNode();

Anchor549.children[0] = Shape550;

Transform548.children = new MFNode();

Transform548.children[0] = Anchor549;

Transform542.children[1] = Transform548;

Group50.children[78] = Transform542;

children[36] = Group50;

ROUTE ROUTE555 = createNode("ROUTE");
ROUTE555.fromField = "fraction_changed";
ROUTE555.fromNode = "Close_Time";
ROUTE555.toField = "set_fraction";
ROUTE555.toNode = "Close_Mover";
children[37] = ROUTE555;

ROUTE ROUTE556 = createNode("ROUTE");
ROUTE556.fromField = "value_changed";
ROUTE556.fromNode = "Close_Mover";
ROUTE556.toField = "set_translation";
ROUTE556.toNode = "Close_travel";
children[38] = ROUTE556;

}
