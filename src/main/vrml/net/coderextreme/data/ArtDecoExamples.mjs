const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ArtDecoExamples.x3d");
scene.addMetaData("description", "Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.");
scene.addMetaData("creator", "David Roussel");
scene.addMetaData("translator", "James Harney, Don Brutzman NPS");
scene.addMetaData("created", "7 April 2002");
scene.addMetaData("modified", "19 January 2025");
scene.addMetaData("reference", "http://vrmlstuff.free.fr/materials");
scene.addMetaData("subject", "Universal Media Material Library");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d");
scene.addMetaData("generator", "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "ArtDecoExamples.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo14;

let ExternProtoDeclare15 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "ArtDeco00";
ExternProtoDeclare15.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare15.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare15.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco00"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco00"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00")]);
browser.currentScene.children[1] = ExternProtoDeclare15;

let ExternProtoDeclare16 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "ArtDeco01";
ExternProtoDeclare16.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare16.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare16.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco01"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco01"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01")]);
browser.currentScene.children[2] = ExternProtoDeclare16;

let ExternProtoDeclare17 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "ArtDeco02";
ExternProtoDeclare17.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare17.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare17.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco02"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco02"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02")]);
browser.currentScene.children[3] = ExternProtoDeclare17;

let ExternProtoDeclare18 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "ArtDeco03";
ExternProtoDeclare18.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare18.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare18.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco03"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco03"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03")]);
browser.currentScene.children[4] = ExternProtoDeclare18;

let ExternProtoDeclare19 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "ArtDeco04";
ExternProtoDeclare19.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare19.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare19.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco04"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco04"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04")]);
browser.currentScene.children[5] = ExternProtoDeclare19;

let ExternProtoDeclare20 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare20.name = "ArtDeco05";
ExternProtoDeclare20.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare20.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare20.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco05"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco05"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05")]);
browser.currentScene.children[6] = ExternProtoDeclare20;

let ExternProtoDeclare21 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare21.name = "ArtDeco06";
ExternProtoDeclare21.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare21.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare21.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco06"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco06"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06")]);
browser.currentScene.children[7] = ExternProtoDeclare21;

let ExternProtoDeclare22 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare22.name = "ArtDeco07";
ExternProtoDeclare22.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare22.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare22.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco07"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco07"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07")]);
browser.currentScene.children[8] = ExternProtoDeclare22;

let ExternProtoDeclare23 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare23.name = "ArtDeco08";
ExternProtoDeclare23.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare23.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare23.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco08"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco08"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08")]);
browser.currentScene.children[9] = ExternProtoDeclare23;

let ExternProtoDeclare24 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "ArtDeco09";
ExternProtoDeclare24.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare24.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco09"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco09"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09")]);
browser.currentScene.children[10] = ExternProtoDeclare24;

let ExternProtoDeclare25 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare25.name = "ArtDeco10";
ExternProtoDeclare25.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare25.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare25.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco10"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco10"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10")]);
browser.currentScene.children[11] = ExternProtoDeclare25;

let ExternProtoDeclare26 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare26.name = "ArtDeco11";
ExternProtoDeclare26.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare26.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare26.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco11"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco11"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11")]);
browser.currentScene.children[12] = ExternProtoDeclare26;

let ExternProtoDeclare27 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare27.name = "ArtDeco12";
ExternProtoDeclare27.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare27.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare27.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco12"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco12"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12")]);
browser.currentScene.children[13] = ExternProtoDeclare27;

let ExternProtoDeclare28 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare28.name = "ArtDeco13";
ExternProtoDeclare28.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare28.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare28.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco13"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco13"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13")]);
browser.currentScene.children[14] = ExternProtoDeclare28;

let ExternProtoDeclare29 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare29.name = "ArtDeco14";
ExternProtoDeclare29.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare29.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare29.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco14"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco14"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14")]);
browser.currentScene.children[15] = ExternProtoDeclare29;

let ExternProtoDeclare30 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare30.name = "ArtDeco15";
ExternProtoDeclare30.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare30.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare30.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco15"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco15"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15")]);
browser.currentScene.children[16] = ExternProtoDeclare30;

let ExternProtoDeclare31 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare31.name = "ArtDeco16";
ExternProtoDeclare31.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare31.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare31.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco16"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco16"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16")]);
browser.currentScene.children[17] = ExternProtoDeclare31;

let ExternProtoDeclare32 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare32.name = "ArtDeco17";
ExternProtoDeclare32.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare32.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare32.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco17"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco17"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17")]);
browser.currentScene.children[18] = ExternProtoDeclare32;

let ExternProtoDeclare33 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare33.name = "ArtDeco18";
ExternProtoDeclare33.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare33.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare33.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco18"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco18"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18")]);
browser.currentScene.children[19] = ExternProtoDeclare33;

let ExternProtoDeclare34 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare34.name = "ArtDeco19";
ExternProtoDeclare34.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare34.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare34.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco19"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco19"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19")]);
browser.currentScene.children[20] = ExternProtoDeclare34;

let ExternProtoDeclare35 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare35.name = "ArtDeco20";
ExternProtoDeclare35.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare35.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare35.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco20"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco20"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20")]);
browser.currentScene.children[21] = ExternProtoDeclare35;

let ExternProtoDeclare36 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare36.name = "ArtDeco21";
ExternProtoDeclare36.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare36.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco21"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco21"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21")]);
browser.currentScene.children[22] = ExternProtoDeclare36;

let ExternProtoDeclare37 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare37.name = "ArtDeco22";
ExternProtoDeclare37.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare37.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare37.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco22"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco22"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22")]);
browser.currentScene.children[23] = ExternProtoDeclare37;

let ExternProtoDeclare38 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare38.name = "ArtDeco23";
ExternProtoDeclare38.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare38.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare38.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco23"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco23"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23")]);
browser.currentScene.children[24] = ExternProtoDeclare38;

let ExternProtoDeclare39 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare39.name = "ArtDeco24";
ExternProtoDeclare39.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare39.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare39.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco24"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco24"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24")]);
browser.currentScene.children[25] = ExternProtoDeclare39;

let ExternProtoDeclare40 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare40.name = "ArtDeco25";
ExternProtoDeclare40.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare40.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare40.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco25"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco25"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25")]);
browser.currentScene.children[26] = ExternProtoDeclare40;

let ExternProtoDeclare41 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare41.name = "ArtDeco26";
ExternProtoDeclare41.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare41.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare41.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco26"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco26"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26")]);
browser.currentScene.children[27] = ExternProtoDeclare41;

let ExternProtoDeclare42 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare42.name = "ArtDeco27";
ExternProtoDeclare42.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare42.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare42.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco27"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco27"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27")]);
browser.currentScene.children[28] = ExternProtoDeclare42;

let ExternProtoDeclare43 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare43.name = "ArtDeco28";
ExternProtoDeclare43.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare43.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare43.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco28"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco28"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28")]);
browser.currentScene.children[29] = ExternProtoDeclare43;

let ExternProtoDeclare44 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare44.name = "ArtDeco29";
ExternProtoDeclare44.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare44.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare44.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco29"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco29"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29")]);
browser.currentScene.children[30] = ExternProtoDeclare44;

let ExternProtoDeclare45 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare45.name = "ArtDeco30";
ExternProtoDeclare45.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare45.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare45.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco30"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco30"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30")]);
browser.currentScene.children[31] = ExternProtoDeclare45;

let ExternProtoDeclare46 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare46.name = "ArtDeco31";
ExternProtoDeclare46.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare46.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare46.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco31"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco31"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31")]);
browser.currentScene.children[32] = ExternProtoDeclare46;

let ExternProtoDeclare47 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare47.name = "ArtDeco32";
ExternProtoDeclare47.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare47.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare47.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco32"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco32"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32")]);
browser.currentScene.children[33] = ExternProtoDeclare47;

let ExternProtoDeclare48 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare48.name = "ArtDeco33";
ExternProtoDeclare48.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare48.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare48.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco33"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco33"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33")]);
browser.currentScene.children[34] = ExternProtoDeclare48;

let ExternProtoDeclare49 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare49.name = "ArtDeco34";
ExternProtoDeclare49.appinfo = "UniversalMediaMaterials prototype";
ExternProtoDeclare49.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
ExternProtoDeclare49.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.x3d#ArtDeco34"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34"), new X3D.SFString("ArtDecoPrototypes.wrl#ArtDeco34"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34")]);
browser.currentScene.children[35] = ExternProtoDeclare49;

let Group50 = browser.currentScene.createNode("Group");
let NavigationInfo51 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo51.headlight = False;
Group50YYY.children = new X3D.MFNode();

Group50ZZZ.children[0] = NavigationInfo51;

let Viewpoint52 = browser.currentScene.createNode("Viewpoint");
Viewpoint52.DEF = "Front";
Viewpoint52.description = "Front view";
Viewpoint52.position = new X3D.SFVec3f([0,0,12]);
Group50ZZZ.children[1] = Viewpoint52;

let Viewpoint53 = browser.currentScene.createNode("Viewpoint");
Viewpoint53.DEF = "PersRight";
Viewpoint53.description = "Low Right";
Viewpoint53.orientation = new X3D.SFRotation([0.74291,0.30772,0.59447,1.2171]);
Viewpoint53.position = new X3D.SFVec3f([6.9282,-6.9282,6.9282]);
Group50ZZZ.children[2] = Viewpoint53;

let Viewpoint54 = browser.currentScene.createNode("Viewpoint");
Viewpoint54.DEF = "PersLeft";
Viewpoint54.description = "Low Left";
Viewpoint54.orientation = new X3D.SFRotation([0.74291,-0.30772,-0.59447,1.2171]);
Viewpoint54.position = new X3D.SFVec3f([-6.9282,-6.9282,6.9282]);
Group50ZZZ.children[3] = Viewpoint54;

let Viewpoint55 = browser.currentScene.createNode("Viewpoint");
Viewpoint55.DEF = "Back";
Viewpoint55.description = "Back view";
Viewpoint55.orientation = new X3D.SFRotation([0,1,0,3.1416]);
Viewpoint55.position = new X3D.SFVec3f([0,0,-12]);
Group50ZZZ.children[4] = Viewpoint55;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.DEF = "Close_travel";
let PositionInterpolator57 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator57.DEF = "Close_Mover";
PositionInterpolator57.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
PositionInterpolator57.keyValue = new X3D.MFVec3f([0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0]);
Transform56YYY.children = new X3D.MFNode();

Transform56ZZZ.children[0] = PositionInterpolator57;

let TimeSensor58 = browser.currentScene.createNode("TimeSensor");
TimeSensor58.DEF = "Close_Time";
TimeSensor58.cycleInterval = 12;
TimeSensor58.loop = True;
Transform56ZZZ.children[1] = TimeSensor58;

let Viewpoint59 = browser.currentScene.createNode("Viewpoint");
Viewpoint59.DEF = "Close";
Viewpoint59.description = "Close Front";
Viewpoint59.position = new X3D.SFVec3f([0,0,6]);
Transform56ZZZ.children[2] = Viewpoint59;

Group50ZZZ.children[5] = Transform56;

let DirectionalLight60 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight60.direction = new X3D.SFVec3f([1,-1,-1]);
Group50ZZZ.children[6] = DirectionalLight60;

let DirectionalLight61 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight61.direction = new X3D.SFVec3f([0,1,-0.5]);
DirectionalLight61.intensity = 0.5;
Group50ZZZ.children[7] = DirectionalLight61;

let Anchor62 = browser.currentScene.createNode("Anchor");
Anchor62.description = "Return to front view";
Anchor62.url = new X3D.MFString([new X3D.SFString("#Front")]);
let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new X3D.SFVec3f([0,0,-0.5]);
let Inline64 = browser.currentScene.createNode("Inline");
Inline64.url = new X3D.MFString([new X3D.SFString("gridBack.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"), new X3D.SFString("gridBack.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl")]);
Transform63YYY.children = new X3D.MFNode();

Transform63ZZZ.children[0] = Inline64;

Anchor62YYY.children = new X3D.MFNode();

Anchor62ZZZ.children[0] = Transform63;

Group50ZZZ.children[8] = Anchor62;

let Viewpoint65 = browser.currentScene.createNode("Viewpoint");
Viewpoint65.DEF = "View00";
Viewpoint65.description = "ArtDeco00";
Viewpoint65.position = new X3D.SFVec3f([-3.75,3.75,3]);
Group50ZZZ.children[9] = Viewpoint65;

let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new X3D.SFVec3f([-3.75,3.75,0]);
let Anchor67 = browser.currentScene.createNode("Anchor");
Anchor67.description = "ArtDeco00 view";
Anchor67.url = new X3D.MFString([new X3D.SFString("#View00")]);
let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "ArtDeco00";
Appearance69.shaders = new X3D.MFNode();

Appearance69XXX.shaders[0] = ProtoInstance70;

appearance = Appearance69;

let Sphere71 = browser.currentScene.createNode("Sphere");
Sphere71.DEF = "Ball";
Sphere71.radius = 0.5;
geometry = Sphere71;

Anchor67YYY.children = new X3D.MFNode();

Anchor67ZZZ.children[0] = Shape68;

Transform66YYY.children = new X3D.MFNode();

Transform66ZZZ.children[0] = Anchor67;

let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor73 = browser.currentScene.createNode("Anchor");
Anchor73.description = "ArtDeco00 view source documentation";
Anchor73.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor73.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00")]);
let Shape74 = browser.currentScene.createNode("Shape");
let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.DEF = "TextMat";
Material76.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material76;

appearance = Appearance75;

let Text77 = browser.currentScene.createNode("Text");
Text77.string = new X3D.MFString([new X3D.SFString("ArtDeco00")]);
let FontStyle78 = browser.currentScene.createNode("FontStyle");
FontStyle78.DEF = "Style";
FontStyle78.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle78.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle78.size = 0.3;
FontStyle78.style = "BOLD";
fontStyle = FontStyle78;

geometry = Text77;

Anchor73YYY.children = new X3D.MFNode();

Anchor73ZZZ.children[0] = Shape74;

Transform72YYY.children = new X3D.MFNode();

Transform72ZZZ.children[0] = Anchor73;

Transform66ZZZ.children[1] = Transform72;

Group50ZZZ.children[10] = Transform66;

let Viewpoint79 = browser.currentScene.createNode("Viewpoint");
Viewpoint79.DEF = "View01";
Viewpoint79.description = "ArtDeco01";
Viewpoint79.position = new X3D.SFVec3f([-2.25,3.75,3]);
Group50ZZZ.children[11] = Viewpoint79;

let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new X3D.SFVec3f([-2.25,3.75,0]);
let Anchor81 = browser.currentScene.createNode("Anchor");
Anchor81.description = "ArtDeco01 view";
Anchor81.url = new X3D.MFString([new X3D.SFString("#View01")]);
let Shape82 = browser.currentScene.createNode("Shape");
let Appearance83 = browser.currentScene.createNode("Appearance");
let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.name = "ArtDeco01";
Appearance83.shaders = new X3D.MFNode();

Appearance83XXX.shaders[0] = ProtoInstance84;

appearance = Appearance83;

let Sphere85 = browser.currentScene.createNode("Sphere");
Sphere85.USE = "Ball";
geometry = Sphere85;

Anchor81YYY.children = new X3D.MFNode();

Anchor81ZZZ.children[0] = Shape82;

Transform80YYY.children = new X3D.MFNode();

Transform80ZZZ.children[0] = Anchor81;

let Transform86 = browser.currentScene.createNode("Transform");
Transform86.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor87 = browser.currentScene.createNode("Anchor");
Anchor87.description = "ArtDeco01 view source documentation";
Anchor87.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor87.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01")]);
let Shape88 = browser.currentScene.createNode("Shape");
let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.USE = "TextMat";
material = Material90;

appearance = Appearance89;

let Text91 = browser.currentScene.createNode("Text");
Text91.string = new X3D.MFString([new X3D.SFString("ArtDeco01")]);
let FontStyle92 = browser.currentScene.createNode("FontStyle");
FontStyle92.USE = "Style";
fontStyle = FontStyle92;

geometry = Text91;

Anchor87YYY.children = new X3D.MFNode();

Anchor87ZZZ.children[0] = Shape88;

Transform86YYY.children = new X3D.MFNode();

Transform86ZZZ.children[0] = Anchor87;

Transform80ZZZ.children[1] = Transform86;

Group50ZZZ.children[12] = Transform80;

let Viewpoint93 = browser.currentScene.createNode("Viewpoint");
Viewpoint93.DEF = "View02";
Viewpoint93.description = "ArtDeco02";
Viewpoint93.position = new X3D.SFVec3f([-0.75,3.75,3]);
Group50ZZZ.children[13] = Viewpoint93;

let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new X3D.SFVec3f([-0.75,3.75,0]);
let Anchor95 = browser.currentScene.createNode("Anchor");
Anchor95.description = "ArtDeco02 view";
Anchor95.url = new X3D.MFString([new X3D.SFString("#View02")]);
let Shape96 = browser.currentScene.createNode("Shape");
let Appearance97 = browser.currentScene.createNode("Appearance");
let ProtoInstance98 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance98.name = "ArtDeco02";
Appearance97.shaders = new X3D.MFNode();

Appearance97XXX.shaders[0] = ProtoInstance98;

appearance = Appearance97;

let Sphere99 = browser.currentScene.createNode("Sphere");
Sphere99.USE = "Ball";
geometry = Sphere99;

Anchor95YYY.children = new X3D.MFNode();

Anchor95ZZZ.children[0] = Shape96;

Transform94YYY.children = new X3D.MFNode();

Transform94ZZZ.children[0] = Anchor95;

let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor101 = browser.currentScene.createNode("Anchor");
Anchor101.description = "ArtDeco02 view source documentation";
Anchor101.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor101.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02")]);
let Shape102 = browser.currentScene.createNode("Shape");
let Appearance103 = browser.currentScene.createNode("Appearance");
let Material104 = browser.currentScene.createNode("Material");
Material104.USE = "TextMat";
material = Material104;

appearance = Appearance103;

let Text105 = browser.currentScene.createNode("Text");
Text105.string = new X3D.MFString([new X3D.SFString("ArtDeco02")]);
let FontStyle106 = browser.currentScene.createNode("FontStyle");
FontStyle106.USE = "Style";
fontStyle = FontStyle106;

geometry = Text105;

Anchor101YYY.children = new X3D.MFNode();

Anchor101ZZZ.children[0] = Shape102;

Transform100YYY.children = new X3D.MFNode();

Transform100ZZZ.children[0] = Anchor101;

Transform94ZZZ.children[1] = Transform100;

Group50ZZZ.children[14] = Transform94;

let Viewpoint107 = browser.currentScene.createNode("Viewpoint");
Viewpoint107.DEF = "View03";
Viewpoint107.description = "ArtDeco03";
Viewpoint107.position = new X3D.SFVec3f([0.75,3.75,3]);
Group50ZZZ.children[15] = Viewpoint107;

let Transform108 = browser.currentScene.createNode("Transform");
Transform108.translation = new X3D.SFVec3f([0.75,3.75,0]);
let Anchor109 = browser.currentScene.createNode("Anchor");
Anchor109.description = "ArtDeco03 view";
Anchor109.url = new X3D.MFString([new X3D.SFString("#View03")]);
let Shape110 = browser.currentScene.createNode("Shape");
let Appearance111 = browser.currentScene.createNode("Appearance");
let ProtoInstance112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance112.name = "ArtDeco03";
Appearance111.shaders = new X3D.MFNode();

Appearance111XXX.shaders[0] = ProtoInstance112;

appearance = Appearance111;

let Sphere113 = browser.currentScene.createNode("Sphere");
Sphere113.USE = "Ball";
geometry = Sphere113;

Anchor109YYY.children = new X3D.MFNode();

Anchor109ZZZ.children[0] = Shape110;

Transform108YYY.children = new X3D.MFNode();

Transform108ZZZ.children[0] = Anchor109;

let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor115 = browser.currentScene.createNode("Anchor");
Anchor115.description = "ArtDeco03 view source documentation";
Anchor115.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor115.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03")]);
let Shape116 = browser.currentScene.createNode("Shape");
let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.USE = "TextMat";
material = Material118;

appearance = Appearance117;

let Text119 = browser.currentScene.createNode("Text");
Text119.string = new X3D.MFString([new X3D.SFString("ArtDeco03")]);
let FontStyle120 = browser.currentScene.createNode("FontStyle");
FontStyle120.USE = "Style";
fontStyle = FontStyle120;

geometry = Text119;

Anchor115YYY.children = new X3D.MFNode();

Anchor115ZZZ.children[0] = Shape116;

Transform114YYY.children = new X3D.MFNode();

Transform114ZZZ.children[0] = Anchor115;

Transform108ZZZ.children[1] = Transform114;

Group50ZZZ.children[16] = Transform108;

let Viewpoint121 = browser.currentScene.createNode("Viewpoint");
Viewpoint121.DEF = "View04";
Viewpoint121.description = "ArtDeco04";
Viewpoint121.position = new X3D.SFVec3f([2.25,3.75,3]);
Group50ZZZ.children[17] = Viewpoint121;

let Transform122 = browser.currentScene.createNode("Transform");
Transform122.translation = new X3D.SFVec3f([2.25,3.75,0]);
let Anchor123 = browser.currentScene.createNode("Anchor");
Anchor123.description = "ArtDeco04 view";
Anchor123.url = new X3D.MFString([new X3D.SFString("#View04")]);
let Shape124 = browser.currentScene.createNode("Shape");
let Appearance125 = browser.currentScene.createNode("Appearance");
let ProtoInstance126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance126.name = "ArtDeco04";
Appearance125.shaders = new X3D.MFNode();

Appearance125XXX.shaders[0] = ProtoInstance126;

appearance = Appearance125;

let Sphere127 = browser.currentScene.createNode("Sphere");
Sphere127.USE = "Ball";
geometry = Sphere127;

Anchor123YYY.children = new X3D.MFNode();

Anchor123ZZZ.children[0] = Shape124;

Transform122YYY.children = new X3D.MFNode();

Transform122ZZZ.children[0] = Anchor123;

let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor129 = browser.currentScene.createNode("Anchor");
Anchor129.description = "ArtDeco04 view source documentation";
Anchor129.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor129.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04")]);
let Shape130 = browser.currentScene.createNode("Shape");
let Appearance131 = browser.currentScene.createNode("Appearance");
let Material132 = browser.currentScene.createNode("Material");
Material132.USE = "TextMat";
material = Material132;

appearance = Appearance131;

let Text133 = browser.currentScene.createNode("Text");
Text133.string = new X3D.MFString([new X3D.SFString("ArtDeco04")]);
let FontStyle134 = browser.currentScene.createNode("FontStyle");
FontStyle134.USE = "Style";
fontStyle = FontStyle134;

geometry = Text133;

Anchor129YYY.children = new X3D.MFNode();

Anchor129ZZZ.children[0] = Shape130;

Transform128YYY.children = new X3D.MFNode();

Transform128ZZZ.children[0] = Anchor129;

Transform122ZZZ.children[1] = Transform128;

Group50ZZZ.children[18] = Transform122;

let Viewpoint135 = browser.currentScene.createNode("Viewpoint");
Viewpoint135.DEF = "View05";
Viewpoint135.description = "ArtDeco05";
Viewpoint135.position = new X3D.SFVec3f([3.75,3.75,3]);
Group50ZZZ.children[19] = Viewpoint135;

let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new X3D.SFVec3f([3.75,3.75,0]);
let Anchor137 = browser.currentScene.createNode("Anchor");
Anchor137.description = "ArtDeco05 view";
Anchor137.url = new X3D.MFString([new X3D.SFString("#View05")]);
let Shape138 = browser.currentScene.createNode("Shape");
let Appearance139 = browser.currentScene.createNode("Appearance");
let ProtoInstance140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance140.name = "ArtDeco05";
Appearance139.shaders = new X3D.MFNode();

Appearance139XXX.shaders[0] = ProtoInstance140;

appearance = Appearance139;

let Sphere141 = browser.currentScene.createNode("Sphere");
Sphere141.USE = "Ball";
geometry = Sphere141;

Anchor137YYY.children = new X3D.MFNode();

Anchor137ZZZ.children[0] = Shape138;

Transform136YYY.children = new X3D.MFNode();

Transform136ZZZ.children[0] = Anchor137;

let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor143 = browser.currentScene.createNode("Anchor");
Anchor143.description = "ArtDeco05 view source documentation";
Anchor143.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor143.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05")]);
let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.USE = "TextMat";
material = Material146;

appearance = Appearance145;

let Text147 = browser.currentScene.createNode("Text");
Text147.string = new X3D.MFString([new X3D.SFString("ArtDeco05")]);
let FontStyle148 = browser.currentScene.createNode("FontStyle");
FontStyle148.USE = "Style";
fontStyle = FontStyle148;

geometry = Text147;

Anchor143YYY.children = new X3D.MFNode();

Anchor143ZZZ.children[0] = Shape144;

Transform142YYY.children = new X3D.MFNode();

Transform142ZZZ.children[0] = Anchor143;

Transform136ZZZ.children[1] = Transform142;

Group50ZZZ.children[20] = Transform136;

let Viewpoint149 = browser.currentScene.createNode("Viewpoint");
Viewpoint149.DEF = "View06";
Viewpoint149.description = "ArtDeco06";
Viewpoint149.position = new X3D.SFVec3f([-3.75,2.25,3]);
Group50ZZZ.children[21] = Viewpoint149;

let Transform150 = browser.currentScene.createNode("Transform");
Transform150.translation = new X3D.SFVec3f([-3.75,2.25,0]);
let Anchor151 = browser.currentScene.createNode("Anchor");
Anchor151.description = "ArtDeco06 view";
Anchor151.url = new X3D.MFString([new X3D.SFString("#View06")]);
let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
let ProtoInstance154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance154.name = "ArtDeco06";
Appearance153.shaders = new X3D.MFNode();

Appearance153XXX.shaders[0] = ProtoInstance154;

appearance = Appearance153;

let Sphere155 = browser.currentScene.createNode("Sphere");
Sphere155.USE = "Ball";
geometry = Sphere155;

Anchor151YYY.children = new X3D.MFNode();

Anchor151ZZZ.children[0] = Shape152;

Transform150YYY.children = new X3D.MFNode();

Transform150ZZZ.children[0] = Anchor151;

let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor157 = browser.currentScene.createNode("Anchor");
Anchor157.description = "ArtDeco06 view source documentation";
Anchor157.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor157.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06")]);
let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.USE = "TextMat";
material = Material160;

appearance = Appearance159;

let Text161 = browser.currentScene.createNode("Text");
Text161.string = new X3D.MFString([new X3D.SFString("ArtDeco06")]);
let FontStyle162 = browser.currentScene.createNode("FontStyle");
FontStyle162.USE = "Style";
fontStyle = FontStyle162;

geometry = Text161;

Anchor157YYY.children = new X3D.MFNode();

Anchor157ZZZ.children[0] = Shape158;

Transform156YYY.children = new X3D.MFNode();

Transform156ZZZ.children[0] = Anchor157;

Transform150ZZZ.children[1] = Transform156;

Group50ZZZ.children[22] = Transform150;

let Viewpoint163 = browser.currentScene.createNode("Viewpoint");
Viewpoint163.DEF = "View07";
Viewpoint163.description = "ArtDeco07";
Viewpoint163.position = new X3D.SFVec3f([-2.25,2.25,3]);
Group50ZZZ.children[23] = Viewpoint163;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.translation = new X3D.SFVec3f([-2.25,2.25,0]);
let Anchor165 = browser.currentScene.createNode("Anchor");
Anchor165.description = "ArtDeco07 view";
Anchor165.url = new X3D.MFString([new X3D.SFString("#View07")]);
let Shape166 = browser.currentScene.createNode("Shape");
let Appearance167 = browser.currentScene.createNode("Appearance");
let ProtoInstance168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance168.name = "ArtDeco07";
Appearance167.shaders = new X3D.MFNode();

Appearance167XXX.shaders[0] = ProtoInstance168;

appearance = Appearance167;

let Sphere169 = browser.currentScene.createNode("Sphere");
Sphere169.USE = "Ball";
geometry = Sphere169;

Anchor165YYY.children = new X3D.MFNode();

Anchor165ZZZ.children[0] = Shape166;

Transform164YYY.children = new X3D.MFNode();

Transform164ZZZ.children[0] = Anchor165;

let Transform170 = browser.currentScene.createNode("Transform");
Transform170.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor171 = browser.currentScene.createNode("Anchor");
Anchor171.description = "ArtDeco07 view source documentation";
Anchor171.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor171.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07")]);
let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.USE = "TextMat";
material = Material174;

appearance = Appearance173;

let Text175 = browser.currentScene.createNode("Text");
Text175.string = new X3D.MFString([new X3D.SFString("ArtDeco07")]);
let FontStyle176 = browser.currentScene.createNode("FontStyle");
FontStyle176.USE = "Style";
fontStyle = FontStyle176;

geometry = Text175;

Anchor171YYY.children = new X3D.MFNode();

Anchor171ZZZ.children[0] = Shape172;

Transform170YYY.children = new X3D.MFNode();

Transform170ZZZ.children[0] = Anchor171;

Transform164ZZZ.children[1] = Transform170;

Group50ZZZ.children[24] = Transform164;

let Viewpoint177 = browser.currentScene.createNode("Viewpoint");
Viewpoint177.DEF = "View08";
Viewpoint177.description = "ArtDeco08";
Viewpoint177.position = new X3D.SFVec3f([-0.75,2.25,3]);
Group50ZZZ.children[25] = Viewpoint177;

let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new X3D.SFVec3f([-0.75,2.25,0]);
let Anchor179 = browser.currentScene.createNode("Anchor");
Anchor179.description = "ArtDeco08 view";
Anchor179.url = new X3D.MFString([new X3D.SFString("#View08")]);
let Shape180 = browser.currentScene.createNode("Shape");
let Appearance181 = browser.currentScene.createNode("Appearance");
let ProtoInstance182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance182.name = "ArtDeco08";
Appearance181.shaders = new X3D.MFNode();

Appearance181XXX.shaders[0] = ProtoInstance182;

appearance = Appearance181;

let Sphere183 = browser.currentScene.createNode("Sphere");
Sphere183.USE = "Ball";
geometry = Sphere183;

Anchor179YYY.children = new X3D.MFNode();

Anchor179ZZZ.children[0] = Shape180;

Transform178YYY.children = new X3D.MFNode();

Transform178ZZZ.children[0] = Anchor179;

let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor185 = browser.currentScene.createNode("Anchor");
Anchor185.description = "ArtDeco08 view source documentation";
Anchor185.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor185.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08")]);
let Shape186 = browser.currentScene.createNode("Shape");
let Appearance187 = browser.currentScene.createNode("Appearance");
let Material188 = browser.currentScene.createNode("Material");
Material188.USE = "TextMat";
material = Material188;

appearance = Appearance187;

let Text189 = browser.currentScene.createNode("Text");
Text189.string = new X3D.MFString([new X3D.SFString("ArtDeco08")]);
let FontStyle190 = browser.currentScene.createNode("FontStyle");
FontStyle190.USE = "Style";
fontStyle = FontStyle190;

geometry = Text189;

Anchor185YYY.children = new X3D.MFNode();

Anchor185ZZZ.children[0] = Shape186;

Transform184YYY.children = new X3D.MFNode();

Transform184ZZZ.children[0] = Anchor185;

Transform178ZZZ.children[1] = Transform184;

Group50ZZZ.children[26] = Transform178;

let Viewpoint191 = browser.currentScene.createNode("Viewpoint");
Viewpoint191.DEF = "View09";
Viewpoint191.description = "ArtDeco09";
Viewpoint191.position = new X3D.SFVec3f([0.75,2.25,3]);
Group50ZZZ.children[27] = Viewpoint191;

let Transform192 = browser.currentScene.createNode("Transform");
Transform192.translation = new X3D.SFVec3f([0.75,2.25,0]);
let Anchor193 = browser.currentScene.createNode("Anchor");
Anchor193.description = "ArtDeco09 view";
Anchor193.url = new X3D.MFString([new X3D.SFString("#View09")]);
let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let ProtoInstance196 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance196.name = "ArtDeco09";
Appearance195.shaders = new X3D.MFNode();

Appearance195XXX.shaders[0] = ProtoInstance196;

appearance = Appearance195;

let Sphere197 = browser.currentScene.createNode("Sphere");
Sphere197.USE = "Ball";
geometry = Sphere197;

Anchor193YYY.children = new X3D.MFNode();

Anchor193ZZZ.children[0] = Shape194;

Transform192YYY.children = new X3D.MFNode();

Transform192ZZZ.children[0] = Anchor193;

let Transform198 = browser.currentScene.createNode("Transform");
Transform198.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor199 = browser.currentScene.createNode("Anchor");
Anchor199.description = "ArtDeco09 view source documentation";
Anchor199.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor199.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09")]);
let Shape200 = browser.currentScene.createNode("Shape");
let Appearance201 = browser.currentScene.createNode("Appearance");
let Material202 = browser.currentScene.createNode("Material");
Material202.USE = "TextMat";
material = Material202;

appearance = Appearance201;

let Text203 = browser.currentScene.createNode("Text");
Text203.string = new X3D.MFString([new X3D.SFString("ArtDeco09")]);
let FontStyle204 = browser.currentScene.createNode("FontStyle");
FontStyle204.USE = "Style";
fontStyle = FontStyle204;

geometry = Text203;

Anchor199YYY.children = new X3D.MFNode();

Anchor199ZZZ.children[0] = Shape200;

Transform198YYY.children = new X3D.MFNode();

Transform198ZZZ.children[0] = Anchor199;

Transform192ZZZ.children[1] = Transform198;

Group50ZZZ.children[28] = Transform192;

let Viewpoint205 = browser.currentScene.createNode("Viewpoint");
Viewpoint205.DEF = "View10";
Viewpoint205.description = "ArtDeco10";
Viewpoint205.position = new X3D.SFVec3f([2.25,2.25,3]);
Group50ZZZ.children[29] = Viewpoint205;

let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new X3D.SFVec3f([2.25,2.25,0]);
let Anchor207 = browser.currentScene.createNode("Anchor");
Anchor207.description = "ArtDeco10 view";
Anchor207.url = new X3D.MFString([new X3D.SFString("#View10")]);
let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let ProtoInstance210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance210.name = "ArtDeco10";
Appearance209.shaders = new X3D.MFNode();

Appearance209XXX.shaders[0] = ProtoInstance210;

appearance = Appearance209;

let Sphere211 = browser.currentScene.createNode("Sphere");
Sphere211.USE = "Ball";
geometry = Sphere211;

Anchor207YYY.children = new X3D.MFNode();

Anchor207ZZZ.children[0] = Shape208;

Transform206YYY.children = new X3D.MFNode();

Transform206ZZZ.children[0] = Anchor207;

let Transform212 = browser.currentScene.createNode("Transform");
Transform212.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor213 = browser.currentScene.createNode("Anchor");
Anchor213.description = "ArtDeco10 view source documentation";
Anchor213.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor213.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10")]);
let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
let Material216 = browser.currentScene.createNode("Material");
Material216.USE = "TextMat";
material = Material216;

appearance = Appearance215;

let Text217 = browser.currentScene.createNode("Text");
Text217.string = new X3D.MFString([new X3D.SFString("ArtDeco10")]);
let FontStyle218 = browser.currentScene.createNode("FontStyle");
FontStyle218.USE = "Style";
fontStyle = FontStyle218;

geometry = Text217;

Anchor213YYY.children = new X3D.MFNode();

Anchor213ZZZ.children[0] = Shape214;

Transform212YYY.children = new X3D.MFNode();

Transform212ZZZ.children[0] = Anchor213;

Transform206ZZZ.children[1] = Transform212;

Group50ZZZ.children[30] = Transform206;

let Viewpoint219 = browser.currentScene.createNode("Viewpoint");
Viewpoint219.DEF = "View11";
Viewpoint219.description = "ArtDeco11";
Viewpoint219.position = new X3D.SFVec3f([3.75,2.25,3]);
Group50ZZZ.children[31] = Viewpoint219;

let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new X3D.SFVec3f([3.75,2.25,0]);
let Anchor221 = browser.currentScene.createNode("Anchor");
Anchor221.description = "ArtDeco11 view";
Anchor221.url = new X3D.MFString([new X3D.SFString("#View11")]);
let Shape222 = browser.currentScene.createNode("Shape");
let Appearance223 = browser.currentScene.createNode("Appearance");
let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.name = "ArtDeco11";
Appearance223.shaders = new X3D.MFNode();

Appearance223XXX.shaders[0] = ProtoInstance224;

appearance = Appearance223;

let Sphere225 = browser.currentScene.createNode("Sphere");
Sphere225.USE = "Ball";
geometry = Sphere225;

Anchor221YYY.children = new X3D.MFNode();

Anchor221ZZZ.children[0] = Shape222;

Transform220YYY.children = new X3D.MFNode();

Transform220ZZZ.children[0] = Anchor221;

let Transform226 = browser.currentScene.createNode("Transform");
Transform226.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor227 = browser.currentScene.createNode("Anchor");
Anchor227.description = "ArtDeco11 view source documentation";
Anchor227.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor227.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11")]);
let Shape228 = browser.currentScene.createNode("Shape");
let Appearance229 = browser.currentScene.createNode("Appearance");
let Material230 = browser.currentScene.createNode("Material");
Material230.USE = "TextMat";
material = Material230;

appearance = Appearance229;

let Text231 = browser.currentScene.createNode("Text");
Text231.string = new X3D.MFString([new X3D.SFString("ArtDeco11")]);
let FontStyle232 = browser.currentScene.createNode("FontStyle");
FontStyle232.USE = "Style";
fontStyle = FontStyle232;

geometry = Text231;

Anchor227YYY.children = new X3D.MFNode();

Anchor227ZZZ.children[0] = Shape228;

Transform226YYY.children = new X3D.MFNode();

Transform226ZZZ.children[0] = Anchor227;

Transform220ZZZ.children[1] = Transform226;

Group50ZZZ.children[32] = Transform220;

let Viewpoint233 = browser.currentScene.createNode("Viewpoint");
Viewpoint233.DEF = "View12";
Viewpoint233.description = "ArtDeco12";
Viewpoint233.position = new X3D.SFVec3f([-3.75,0.75,3]);
Group50ZZZ.children[33] = Viewpoint233;

let Transform234 = browser.currentScene.createNode("Transform");
Transform234.translation = new X3D.SFVec3f([-3.75,0.75,0]);
let Anchor235 = browser.currentScene.createNode("Anchor");
Anchor235.description = "ArtDeco12 view";
Anchor235.url = new X3D.MFString([new X3D.SFString("#View12")]);
let Shape236 = browser.currentScene.createNode("Shape");
let Appearance237 = browser.currentScene.createNode("Appearance");
let ProtoInstance238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance238.name = "ArtDeco12";
Appearance237.shaders = new X3D.MFNode();

Appearance237XXX.shaders[0] = ProtoInstance238;

appearance = Appearance237;

let Sphere239 = browser.currentScene.createNode("Sphere");
Sphere239.USE = "Ball";
geometry = Sphere239;

Anchor235YYY.children = new X3D.MFNode();

Anchor235ZZZ.children[0] = Shape236;

Transform234YYY.children = new X3D.MFNode();

Transform234ZZZ.children[0] = Anchor235;

let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor241 = browser.currentScene.createNode("Anchor");
Anchor241.description = "ArtDeco12 view source documentation";
Anchor241.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor241.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12")]);
let Shape242 = browser.currentScene.createNode("Shape");
let Appearance243 = browser.currentScene.createNode("Appearance");
let Material244 = browser.currentScene.createNode("Material");
Material244.USE = "TextMat";
material = Material244;

appearance = Appearance243;

let Text245 = browser.currentScene.createNode("Text");
Text245.string = new X3D.MFString([new X3D.SFString("ArtDeco12")]);
let FontStyle246 = browser.currentScene.createNode("FontStyle");
FontStyle246.USE = "Style";
fontStyle = FontStyle246;

geometry = Text245;

Anchor241YYY.children = new X3D.MFNode();

Anchor241ZZZ.children[0] = Shape242;

Transform240YYY.children = new X3D.MFNode();

Transform240ZZZ.children[0] = Anchor241;

Transform234ZZZ.children[1] = Transform240;

Group50ZZZ.children[34] = Transform234;

let Viewpoint247 = browser.currentScene.createNode("Viewpoint");
Viewpoint247.DEF = "View13";
Viewpoint247.description = "ArtDeco13";
Viewpoint247.position = new X3D.SFVec3f([-2.25,0.75,3]);
Group50ZZZ.children[35] = Viewpoint247;

let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new X3D.SFVec3f([-2.25,0.75,0]);
let Anchor249 = browser.currentScene.createNode("Anchor");
Anchor249.description = "ArtDeco13 view";
Anchor249.url = new X3D.MFString([new X3D.SFString("#View13")]);
let Shape250 = browser.currentScene.createNode("Shape");
let Appearance251 = browser.currentScene.createNode("Appearance");
let ProtoInstance252 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance252.name = "ArtDeco13";
Appearance251.shaders = new X3D.MFNode();

Appearance251XXX.shaders[0] = ProtoInstance252;

appearance = Appearance251;

let Sphere253 = browser.currentScene.createNode("Sphere");
Sphere253.USE = "Ball";
geometry = Sphere253;

Anchor249YYY.children = new X3D.MFNode();

Anchor249ZZZ.children[0] = Shape250;

Transform248YYY.children = new X3D.MFNode();

Transform248ZZZ.children[0] = Anchor249;

let Transform254 = browser.currentScene.createNode("Transform");
Transform254.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor255 = browser.currentScene.createNode("Anchor");
Anchor255.description = "ArtDeco13 view source documentation";
Anchor255.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor255.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13")]);
let Shape256 = browser.currentScene.createNode("Shape");
let Appearance257 = browser.currentScene.createNode("Appearance");
let Material258 = browser.currentScene.createNode("Material");
Material258.USE = "TextMat";
material = Material258;

appearance = Appearance257;

let Text259 = browser.currentScene.createNode("Text");
Text259.string = new X3D.MFString([new X3D.SFString("ArtDeco13")]);
let FontStyle260 = browser.currentScene.createNode("FontStyle");
FontStyle260.USE = "Style";
fontStyle = FontStyle260;

geometry = Text259;

Anchor255YYY.children = new X3D.MFNode();

Anchor255ZZZ.children[0] = Shape256;

Transform254YYY.children = new X3D.MFNode();

Transform254ZZZ.children[0] = Anchor255;

Transform248ZZZ.children[1] = Transform254;

Group50ZZZ.children[36] = Transform248;

let Viewpoint261 = browser.currentScene.createNode("Viewpoint");
Viewpoint261.DEF = "View14";
Viewpoint261.description = "ArtDeco14";
Viewpoint261.position = new X3D.SFVec3f([-0.75,0.75,3]);
Group50ZZZ.children[37] = Viewpoint261;

let Transform262 = browser.currentScene.createNode("Transform");
Transform262.translation = new X3D.SFVec3f([-0.75,0.75,0]);
let Anchor263 = browser.currentScene.createNode("Anchor");
Anchor263.description = "ArtDeco14 view";
Anchor263.url = new X3D.MFString([new X3D.SFString("#View14")]);
let Shape264 = browser.currentScene.createNode("Shape");
let Appearance265 = browser.currentScene.createNode("Appearance");
let ProtoInstance266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance266.name = "ArtDeco14";
Appearance265.shaders = new X3D.MFNode();

Appearance265XXX.shaders[0] = ProtoInstance266;

appearance = Appearance265;

let Sphere267 = browser.currentScene.createNode("Sphere");
Sphere267.USE = "Ball";
geometry = Sphere267;

Anchor263YYY.children = new X3D.MFNode();

Anchor263ZZZ.children[0] = Shape264;

Transform262YYY.children = new X3D.MFNode();

Transform262ZZZ.children[0] = Anchor263;

let Transform268 = browser.currentScene.createNode("Transform");
Transform268.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor269 = browser.currentScene.createNode("Anchor");
Anchor269.description = "ArtDeco14 view source documentation";
Anchor269.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor269.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14")]);
let Shape270 = browser.currentScene.createNode("Shape");
let Appearance271 = browser.currentScene.createNode("Appearance");
let Material272 = browser.currentScene.createNode("Material");
Material272.USE = "TextMat";
material = Material272;

appearance = Appearance271;

let Text273 = browser.currentScene.createNode("Text");
Text273.string = new X3D.MFString([new X3D.SFString("ArtDeco14")]);
let FontStyle274 = browser.currentScene.createNode("FontStyle");
FontStyle274.USE = "Style";
fontStyle = FontStyle274;

geometry = Text273;

Anchor269YYY.children = new X3D.MFNode();

Anchor269ZZZ.children[0] = Shape270;

Transform268YYY.children = new X3D.MFNode();

Transform268ZZZ.children[0] = Anchor269;

Transform262ZZZ.children[1] = Transform268;

Group50ZZZ.children[38] = Transform262;

let Viewpoint275 = browser.currentScene.createNode("Viewpoint");
Viewpoint275.DEF = "View15";
Viewpoint275.description = "ArtDeco15";
Viewpoint275.position = new X3D.SFVec3f([0.75,0.75,3]);
Group50ZZZ.children[39] = Viewpoint275;

let Transform276 = browser.currentScene.createNode("Transform");
Transform276.translation = new X3D.SFVec3f([0.75,0.75,0]);
let Anchor277 = browser.currentScene.createNode("Anchor");
Anchor277.description = "ArtDeco15 view";
Anchor277.url = new X3D.MFString([new X3D.SFString("#View15")]);
let Shape278 = browser.currentScene.createNode("Shape");
let Appearance279 = browser.currentScene.createNode("Appearance");
let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "ArtDeco15";
Appearance279.shaders = new X3D.MFNode();

Appearance279XXX.shaders[0] = ProtoInstance280;

appearance = Appearance279;

let Sphere281 = browser.currentScene.createNode("Sphere");
Sphere281.USE = "Ball";
geometry = Sphere281;

Anchor277YYY.children = new X3D.MFNode();

Anchor277ZZZ.children[0] = Shape278;

Transform276YYY.children = new X3D.MFNode();

Transform276ZZZ.children[0] = Anchor277;

let Transform282 = browser.currentScene.createNode("Transform");
Transform282.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor283 = browser.currentScene.createNode("Anchor");
Anchor283.description = "ArtDeco15 view source documentation";
Anchor283.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor283.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15")]);
let Shape284 = browser.currentScene.createNode("Shape");
let Appearance285 = browser.currentScene.createNode("Appearance");
let Material286 = browser.currentScene.createNode("Material");
Material286.USE = "TextMat";
material = Material286;

appearance = Appearance285;

let Text287 = browser.currentScene.createNode("Text");
Text287.string = new X3D.MFString([new X3D.SFString("ArtDeco15")]);
let FontStyle288 = browser.currentScene.createNode("FontStyle");
FontStyle288.USE = "Style";
fontStyle = FontStyle288;

geometry = Text287;

Anchor283YYY.children = new X3D.MFNode();

Anchor283ZZZ.children[0] = Shape284;

Transform282YYY.children = new X3D.MFNode();

Transform282ZZZ.children[0] = Anchor283;

Transform276ZZZ.children[1] = Transform282;

Group50ZZZ.children[40] = Transform276;

let Viewpoint289 = browser.currentScene.createNode("Viewpoint");
Viewpoint289.DEF = "View16";
Viewpoint289.description = "ArtDeco16";
Viewpoint289.position = new X3D.SFVec3f([2.25,0.75,3]);
Group50ZZZ.children[41] = Viewpoint289;

let Transform290 = browser.currentScene.createNode("Transform");
Transform290.translation = new X3D.SFVec3f([2.25,0.75,0]);
let Anchor291 = browser.currentScene.createNode("Anchor");
Anchor291.description = "ArtDeco16 view";
Anchor291.url = new X3D.MFString([new X3D.SFString("#View16")]);
let Shape292 = browser.currentScene.createNode("Shape");
let Appearance293 = browser.currentScene.createNode("Appearance");
let ProtoInstance294 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance294.name = "ArtDeco16";
Appearance293.shaders = new X3D.MFNode();

Appearance293XXX.shaders[0] = ProtoInstance294;

appearance = Appearance293;

let Sphere295 = browser.currentScene.createNode("Sphere");
Sphere295.USE = "Ball";
geometry = Sphere295;

Anchor291YYY.children = new X3D.MFNode();

Anchor291ZZZ.children[0] = Shape292;

Transform290YYY.children = new X3D.MFNode();

Transform290ZZZ.children[0] = Anchor291;

let Transform296 = browser.currentScene.createNode("Transform");
Transform296.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor297 = browser.currentScene.createNode("Anchor");
Anchor297.description = "ArtDeco16 view source documentation";
Anchor297.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor297.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16")]);
let Shape298 = browser.currentScene.createNode("Shape");
let Appearance299 = browser.currentScene.createNode("Appearance");
let Material300 = browser.currentScene.createNode("Material");
Material300.USE = "TextMat";
material = Material300;

appearance = Appearance299;

let Text301 = browser.currentScene.createNode("Text");
Text301.string = new X3D.MFString([new X3D.SFString("ArtDeco16")]);
let FontStyle302 = browser.currentScene.createNode("FontStyle");
FontStyle302.USE = "Style";
fontStyle = FontStyle302;

geometry = Text301;

Anchor297YYY.children = new X3D.MFNode();

Anchor297ZZZ.children[0] = Shape298;

Transform296YYY.children = new X3D.MFNode();

Transform296ZZZ.children[0] = Anchor297;

Transform290ZZZ.children[1] = Transform296;

Group50ZZZ.children[42] = Transform290;

let Viewpoint303 = browser.currentScene.createNode("Viewpoint");
Viewpoint303.DEF = "View17";
Viewpoint303.description = "ArtDeco17";
Viewpoint303.position = new X3D.SFVec3f([3.75,0.75,3]);
Group50ZZZ.children[43] = Viewpoint303;

let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new X3D.SFVec3f([3.75,0.75,0]);
let Anchor305 = browser.currentScene.createNode("Anchor");
Anchor305.description = "ArtDeco17 view";
Anchor305.url = new X3D.MFString([new X3D.SFString("#View17")]);
let Shape306 = browser.currentScene.createNode("Shape");
let Appearance307 = browser.currentScene.createNode("Appearance");
let ProtoInstance308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance308.name = "ArtDeco17";
Appearance307.shaders = new X3D.MFNode();

Appearance307XXX.shaders[0] = ProtoInstance308;

appearance = Appearance307;

let Sphere309 = browser.currentScene.createNode("Sphere");
Sphere309.USE = "Ball";
geometry = Sphere309;

Anchor305YYY.children = new X3D.MFNode();

Anchor305ZZZ.children[0] = Shape306;

Transform304YYY.children = new X3D.MFNode();

Transform304ZZZ.children[0] = Anchor305;

let Transform310 = browser.currentScene.createNode("Transform");
Transform310.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor311 = browser.currentScene.createNode("Anchor");
Anchor311.description = "ArtDeco17 view source documentation";
Anchor311.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor311.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17")]);
let Shape312 = browser.currentScene.createNode("Shape");
let Appearance313 = browser.currentScene.createNode("Appearance");
let Material314 = browser.currentScene.createNode("Material");
Material314.USE = "TextMat";
material = Material314;

appearance = Appearance313;

let Text315 = browser.currentScene.createNode("Text");
Text315.string = new X3D.MFString([new X3D.SFString("ArtDeco17")]);
let FontStyle316 = browser.currentScene.createNode("FontStyle");
FontStyle316.USE = "Style";
fontStyle = FontStyle316;

geometry = Text315;

Anchor311YYY.children = new X3D.MFNode();

Anchor311ZZZ.children[0] = Shape312;

Transform310YYY.children = new X3D.MFNode();

Transform310ZZZ.children[0] = Anchor311;

Transform304ZZZ.children[1] = Transform310;

Group50ZZZ.children[44] = Transform304;

let Viewpoint317 = browser.currentScene.createNode("Viewpoint");
Viewpoint317.DEF = "View18";
Viewpoint317.description = "ArtDeco18";
Viewpoint317.position = new X3D.SFVec3f([-3.75,-0.75,3]);
Group50ZZZ.children[45] = Viewpoint317;

let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new X3D.SFVec3f([-3.75,-0.75,0]);
let Anchor319 = browser.currentScene.createNode("Anchor");
Anchor319.description = "ArtDeco18 view";
Anchor319.url = new X3D.MFString([new X3D.SFString("#View18")]);
let Shape320 = browser.currentScene.createNode("Shape");
let Appearance321 = browser.currentScene.createNode("Appearance");
let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "ArtDeco18";
Appearance321.shaders = new X3D.MFNode();

Appearance321XXX.shaders[0] = ProtoInstance322;

appearance = Appearance321;

let Sphere323 = browser.currentScene.createNode("Sphere");
Sphere323.USE = "Ball";
geometry = Sphere323;

Anchor319YYY.children = new X3D.MFNode();

Anchor319ZZZ.children[0] = Shape320;

Transform318YYY.children = new X3D.MFNode();

Transform318ZZZ.children[0] = Anchor319;

let Transform324 = browser.currentScene.createNode("Transform");
Transform324.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor325 = browser.currentScene.createNode("Anchor");
Anchor325.description = "ArtDeco18 view source documentation";
Anchor325.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor325.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18")]);
let Shape326 = browser.currentScene.createNode("Shape");
let Appearance327 = browser.currentScene.createNode("Appearance");
let Material328 = browser.currentScene.createNode("Material");
Material328.USE = "TextMat";
material = Material328;

appearance = Appearance327;

let Text329 = browser.currentScene.createNode("Text");
Text329.string = new X3D.MFString([new X3D.SFString("ArtDeco18")]);
let FontStyle330 = browser.currentScene.createNode("FontStyle");
FontStyle330.USE = "Style";
fontStyle = FontStyle330;

geometry = Text329;

Anchor325YYY.children = new X3D.MFNode();

Anchor325ZZZ.children[0] = Shape326;

Transform324YYY.children = new X3D.MFNode();

Transform324ZZZ.children[0] = Anchor325;

Transform318ZZZ.children[1] = Transform324;

Group50ZZZ.children[46] = Transform318;

let Viewpoint331 = browser.currentScene.createNode("Viewpoint");
Viewpoint331.DEF = "View19";
Viewpoint331.description = "ArtDeco19";
Viewpoint331.position = new X3D.SFVec3f([-2.25,-0.75,3]);
Group50ZZZ.children[47] = Viewpoint331;

let Transform332 = browser.currentScene.createNode("Transform");
Transform332.translation = new X3D.SFVec3f([-2.25,-0.75,0]);
let Anchor333 = browser.currentScene.createNode("Anchor");
Anchor333.description = "ArtDeco19 view";
Anchor333.url = new X3D.MFString([new X3D.SFString("#View19")]);
let Shape334 = browser.currentScene.createNode("Shape");
let Appearance335 = browser.currentScene.createNode("Appearance");
let ProtoInstance336 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance336.name = "ArtDeco19";
Appearance335.shaders = new X3D.MFNode();

Appearance335XXX.shaders[0] = ProtoInstance336;

appearance = Appearance335;

let Sphere337 = browser.currentScene.createNode("Sphere");
Sphere337.USE = "Ball";
geometry = Sphere337;

Anchor333YYY.children = new X3D.MFNode();

Anchor333ZZZ.children[0] = Shape334;

Transform332YYY.children = new X3D.MFNode();

Transform332ZZZ.children[0] = Anchor333;

let Transform338 = browser.currentScene.createNode("Transform");
Transform338.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor339 = browser.currentScene.createNode("Anchor");
Anchor339.description = "ArtDeco19 view source documentation";
Anchor339.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor339.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19")]);
let Shape340 = browser.currentScene.createNode("Shape");
let Appearance341 = browser.currentScene.createNode("Appearance");
let Material342 = browser.currentScene.createNode("Material");
Material342.USE = "TextMat";
material = Material342;

appearance = Appearance341;

let Text343 = browser.currentScene.createNode("Text");
Text343.string = new X3D.MFString([new X3D.SFString("ArtDeco19")]);
let FontStyle344 = browser.currentScene.createNode("FontStyle");
FontStyle344.USE = "Style";
fontStyle = FontStyle344;

geometry = Text343;

Anchor339YYY.children = new X3D.MFNode();

Anchor339ZZZ.children[0] = Shape340;

Transform338YYY.children = new X3D.MFNode();

Transform338ZZZ.children[0] = Anchor339;

Transform332ZZZ.children[1] = Transform338;

Group50ZZZ.children[48] = Transform332;

let Viewpoint345 = browser.currentScene.createNode("Viewpoint");
Viewpoint345.DEF = "View20";
Viewpoint345.description = "ArtDeco20";
Viewpoint345.position = new X3D.SFVec3f([-0.75,-0.75,3]);
Group50ZZZ.children[49] = Viewpoint345;

let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new X3D.SFVec3f([-0.75,-0.75,0]);
let Anchor347 = browser.currentScene.createNode("Anchor");
Anchor347.description = "ArtDeco20 view";
Anchor347.url = new X3D.MFString([new X3D.SFString("#View20")]);
let Shape348 = browser.currentScene.createNode("Shape");
let Appearance349 = browser.currentScene.createNode("Appearance");
let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "ArtDeco20";
Appearance349.shaders = new X3D.MFNode();

Appearance349XXX.shaders[0] = ProtoInstance350;

appearance = Appearance349;

let Sphere351 = browser.currentScene.createNode("Sphere");
Sphere351.USE = "Ball";
geometry = Sphere351;

Anchor347YYY.children = new X3D.MFNode();

Anchor347ZZZ.children[0] = Shape348;

Transform346YYY.children = new X3D.MFNode();

Transform346ZZZ.children[0] = Anchor347;

let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor353 = browser.currentScene.createNode("Anchor");
Anchor353.description = "ArtDeco20 view source documentation";
Anchor353.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor353.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20")]);
let Shape354 = browser.currentScene.createNode("Shape");
let Appearance355 = browser.currentScene.createNode("Appearance");
let Material356 = browser.currentScene.createNode("Material");
Material356.USE = "TextMat";
material = Material356;

appearance = Appearance355;

let Text357 = browser.currentScene.createNode("Text");
Text357.string = new X3D.MFString([new X3D.SFString("ArtDeco20")]);
let FontStyle358 = browser.currentScene.createNode("FontStyle");
FontStyle358.USE = "Style";
fontStyle = FontStyle358;

geometry = Text357;

Anchor353YYY.children = new X3D.MFNode();

Anchor353ZZZ.children[0] = Shape354;

Transform352YYY.children = new X3D.MFNode();

Transform352ZZZ.children[0] = Anchor353;

Transform346ZZZ.children[1] = Transform352;

Group50ZZZ.children[50] = Transform346;

let Viewpoint359 = browser.currentScene.createNode("Viewpoint");
Viewpoint359.DEF = "View21";
Viewpoint359.description = "ArtDeco21";
Viewpoint359.position = new X3D.SFVec3f([0.75,-0.75,3]);
Group50ZZZ.children[51] = Viewpoint359;

let Transform360 = browser.currentScene.createNode("Transform");
Transform360.translation = new X3D.SFVec3f([0.75,-0.75,0]);
let Anchor361 = browser.currentScene.createNode("Anchor");
Anchor361.description = "ArtDeco21 view";
Anchor361.url = new X3D.MFString([new X3D.SFString("#View21")]);
let Shape362 = browser.currentScene.createNode("Shape");
let Appearance363 = browser.currentScene.createNode("Appearance");
let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "ArtDeco21";
Appearance363.shaders = new X3D.MFNode();

Appearance363XXX.shaders[0] = ProtoInstance364;

appearance = Appearance363;

let Sphere365 = browser.currentScene.createNode("Sphere");
Sphere365.USE = "Ball";
geometry = Sphere365;

Anchor361YYY.children = new X3D.MFNode();

Anchor361ZZZ.children[0] = Shape362;

Transform360YYY.children = new X3D.MFNode();

Transform360ZZZ.children[0] = Anchor361;

let Transform366 = browser.currentScene.createNode("Transform");
Transform366.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor367 = browser.currentScene.createNode("Anchor");
Anchor367.description = "ArtDeco21 view source documentation";
Anchor367.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor367.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21")]);
let Shape368 = browser.currentScene.createNode("Shape");
let Appearance369 = browser.currentScene.createNode("Appearance");
let Material370 = browser.currentScene.createNode("Material");
Material370.USE = "TextMat";
material = Material370;

appearance = Appearance369;

let Text371 = browser.currentScene.createNode("Text");
Text371.string = new X3D.MFString([new X3D.SFString("ArtDeco21")]);
let FontStyle372 = browser.currentScene.createNode("FontStyle");
FontStyle372.USE = "Style";
fontStyle = FontStyle372;

geometry = Text371;

Anchor367YYY.children = new X3D.MFNode();

Anchor367ZZZ.children[0] = Shape368;

Transform366YYY.children = new X3D.MFNode();

Transform366ZZZ.children[0] = Anchor367;

Transform360ZZZ.children[1] = Transform366;

Group50ZZZ.children[52] = Transform360;

let Viewpoint373 = browser.currentScene.createNode("Viewpoint");
Viewpoint373.DEF = "View22";
Viewpoint373.description = "ArtDeco22";
Viewpoint373.position = new X3D.SFVec3f([2.25,-0.75,3]);
Group50ZZZ.children[53] = Viewpoint373;

let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new X3D.SFVec3f([2.25,-0.75,0]);
let Anchor375 = browser.currentScene.createNode("Anchor");
Anchor375.description = "ArtDeco22 view";
Anchor375.url = new X3D.MFString([new X3D.SFString("#View22")]);
let Shape376 = browser.currentScene.createNode("Shape");
let Appearance377 = browser.currentScene.createNode("Appearance");
let ProtoInstance378 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance378.name = "ArtDeco22";
Appearance377.shaders = new X3D.MFNode();

Appearance377XXX.shaders[0] = ProtoInstance378;

appearance = Appearance377;

let Sphere379 = browser.currentScene.createNode("Sphere");
Sphere379.USE = "Ball";
geometry = Sphere379;

Anchor375YYY.children = new X3D.MFNode();

Anchor375ZZZ.children[0] = Shape376;

Transform374YYY.children = new X3D.MFNode();

Transform374ZZZ.children[0] = Anchor375;

let Transform380 = browser.currentScene.createNode("Transform");
Transform380.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor381 = browser.currentScene.createNode("Anchor");
Anchor381.description = "ArtDeco22 view source documentation";
Anchor381.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor381.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22")]);
let Shape382 = browser.currentScene.createNode("Shape");
let Appearance383 = browser.currentScene.createNode("Appearance");
let Material384 = browser.currentScene.createNode("Material");
Material384.USE = "TextMat";
material = Material384;

appearance = Appearance383;

let Text385 = browser.currentScene.createNode("Text");
Text385.string = new X3D.MFString([new X3D.SFString("ArtDeco22")]);
let FontStyle386 = browser.currentScene.createNode("FontStyle");
FontStyle386.USE = "Style";
fontStyle = FontStyle386;

geometry = Text385;

Anchor381YYY.children = new X3D.MFNode();

Anchor381ZZZ.children[0] = Shape382;

Transform380YYY.children = new X3D.MFNode();

Transform380ZZZ.children[0] = Anchor381;

Transform374ZZZ.children[1] = Transform380;

Group50ZZZ.children[54] = Transform374;

let Viewpoint387 = browser.currentScene.createNode("Viewpoint");
Viewpoint387.DEF = "View23";
Viewpoint387.description = "ArtDeco23";
Viewpoint387.position = new X3D.SFVec3f([3.75,-0.75,3]);
Group50ZZZ.children[55] = Viewpoint387;

let Transform388 = browser.currentScene.createNode("Transform");
Transform388.translation = new X3D.SFVec3f([3.75,-0.75,0]);
let Anchor389 = browser.currentScene.createNode("Anchor");
Anchor389.description = "ArtDeco23 view";
Anchor389.url = new X3D.MFString([new X3D.SFString("#View23")]);
let Shape390 = browser.currentScene.createNode("Shape");
let Appearance391 = browser.currentScene.createNode("Appearance");
let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.name = "ArtDeco23";
Appearance391.shaders = new X3D.MFNode();

Appearance391XXX.shaders[0] = ProtoInstance392;

appearance = Appearance391;

let Sphere393 = browser.currentScene.createNode("Sphere");
Sphere393.USE = "Ball";
geometry = Sphere393;

Anchor389YYY.children = new X3D.MFNode();

Anchor389ZZZ.children[0] = Shape390;

Transform388YYY.children = new X3D.MFNode();

Transform388ZZZ.children[0] = Anchor389;

let Transform394 = browser.currentScene.createNode("Transform");
Transform394.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor395 = browser.currentScene.createNode("Anchor");
Anchor395.description = "ArtDeco23 view source documentation";
Anchor395.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor395.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23")]);
let Shape396 = browser.currentScene.createNode("Shape");
let Appearance397 = browser.currentScene.createNode("Appearance");
let Material398 = browser.currentScene.createNode("Material");
Material398.USE = "TextMat";
material = Material398;

appearance = Appearance397;

let Text399 = browser.currentScene.createNode("Text");
Text399.string = new X3D.MFString([new X3D.SFString("ArtDeco23")]);
let FontStyle400 = browser.currentScene.createNode("FontStyle");
FontStyle400.USE = "Style";
fontStyle = FontStyle400;

geometry = Text399;

Anchor395YYY.children = new X3D.MFNode();

Anchor395ZZZ.children[0] = Shape396;

Transform394YYY.children = new X3D.MFNode();

Transform394ZZZ.children[0] = Anchor395;

Transform388ZZZ.children[1] = Transform394;

Group50ZZZ.children[56] = Transform388;

let Viewpoint401 = browser.currentScene.createNode("Viewpoint");
Viewpoint401.DEF = "View24";
Viewpoint401.description = "ArtDeco24";
Viewpoint401.position = new X3D.SFVec3f([-3.75,-2.25,3]);
Group50ZZZ.children[57] = Viewpoint401;

let Transform402 = browser.currentScene.createNode("Transform");
Transform402.translation = new X3D.SFVec3f([-3.75,-2.25,0]);
let Anchor403 = browser.currentScene.createNode("Anchor");
Anchor403.description = "ArtDeco24 view";
Anchor403.url = new X3D.MFString([new X3D.SFString("#View24")]);
let Shape404 = browser.currentScene.createNode("Shape");
let Appearance405 = browser.currentScene.createNode("Appearance");
let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.name = "ArtDeco24";
Appearance405.shaders = new X3D.MFNode();

Appearance405XXX.shaders[0] = ProtoInstance406;

appearance = Appearance405;

let Sphere407 = browser.currentScene.createNode("Sphere");
Sphere407.USE = "Ball";
geometry = Sphere407;

Anchor403YYY.children = new X3D.MFNode();

Anchor403ZZZ.children[0] = Shape404;

Transform402YYY.children = new X3D.MFNode();

Transform402ZZZ.children[0] = Anchor403;

let Transform408 = browser.currentScene.createNode("Transform");
Transform408.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor409 = browser.currentScene.createNode("Anchor");
Anchor409.description = "ArtDeco24 view source documentation";
Anchor409.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor409.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24")]);
let Shape410 = browser.currentScene.createNode("Shape");
let Appearance411 = browser.currentScene.createNode("Appearance");
let Material412 = browser.currentScene.createNode("Material");
Material412.USE = "TextMat";
material = Material412;

appearance = Appearance411;

let Text413 = browser.currentScene.createNode("Text");
Text413.string = new X3D.MFString([new X3D.SFString("ArtDeco24")]);
let FontStyle414 = browser.currentScene.createNode("FontStyle");
FontStyle414.USE = "Style";
fontStyle = FontStyle414;

geometry = Text413;

Anchor409YYY.children = new X3D.MFNode();

Anchor409ZZZ.children[0] = Shape410;

Transform408YYY.children = new X3D.MFNode();

Transform408ZZZ.children[0] = Anchor409;

Transform402ZZZ.children[1] = Transform408;

Group50ZZZ.children[58] = Transform402;

let Viewpoint415 = browser.currentScene.createNode("Viewpoint");
Viewpoint415.DEF = "View25";
Viewpoint415.description = "ArtDeco25";
Viewpoint415.position = new X3D.SFVec3f([-2.25,-2.25,3]);
Group50ZZZ.children[59] = Viewpoint415;

let Transform416 = browser.currentScene.createNode("Transform");
Transform416.translation = new X3D.SFVec3f([-2.25,-2.25,0]);
let Anchor417 = browser.currentScene.createNode("Anchor");
Anchor417.description = "ArtDeco25 view";
Anchor417.url = new X3D.MFString([new X3D.SFString("#View25")]);
let Shape418 = browser.currentScene.createNode("Shape");
let Appearance419 = browser.currentScene.createNode("Appearance");
let ProtoInstance420 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance420.name = "ArtDeco25";
Appearance419.shaders = new X3D.MFNode();

Appearance419XXX.shaders[0] = ProtoInstance420;

appearance = Appearance419;

let Sphere421 = browser.currentScene.createNode("Sphere");
Sphere421.USE = "Ball";
geometry = Sphere421;

Anchor417YYY.children = new X3D.MFNode();

Anchor417ZZZ.children[0] = Shape418;

Transform416YYY.children = new X3D.MFNode();

Transform416ZZZ.children[0] = Anchor417;

let Transform422 = browser.currentScene.createNode("Transform");
Transform422.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor423 = browser.currentScene.createNode("Anchor");
Anchor423.description = "ArtDeco25 view source documentation";
Anchor423.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor423.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25")]);
let Shape424 = browser.currentScene.createNode("Shape");
let Appearance425 = browser.currentScene.createNode("Appearance");
let Material426 = browser.currentScene.createNode("Material");
Material426.USE = "TextMat";
material = Material426;

appearance = Appearance425;

let Text427 = browser.currentScene.createNode("Text");
Text427.string = new X3D.MFString([new X3D.SFString("ArtDeco25")]);
let FontStyle428 = browser.currentScene.createNode("FontStyle");
FontStyle428.USE = "Style";
fontStyle = FontStyle428;

geometry = Text427;

Anchor423YYY.children = new X3D.MFNode();

Anchor423ZZZ.children[0] = Shape424;

Transform422YYY.children = new X3D.MFNode();

Transform422ZZZ.children[0] = Anchor423;

Transform416ZZZ.children[1] = Transform422;

Group50ZZZ.children[60] = Transform416;

let Viewpoint429 = browser.currentScene.createNode("Viewpoint");
Viewpoint429.DEF = "View26";
Viewpoint429.description = "ArtDeco26";
Viewpoint429.position = new X3D.SFVec3f([-0.75,-2.25,3]);
Group50ZZZ.children[61] = Viewpoint429;

let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new X3D.SFVec3f([-0.75,-2.25,0]);
let Anchor431 = browser.currentScene.createNode("Anchor");
Anchor431.description = "ArtDeco26 view";
Anchor431.url = new X3D.MFString([new X3D.SFString("#View26")]);
let Shape432 = browser.currentScene.createNode("Shape");
let Appearance433 = browser.currentScene.createNode("Appearance");
let ProtoInstance434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance434.name = "ArtDeco26";
Appearance433.shaders = new X3D.MFNode();

Appearance433XXX.shaders[0] = ProtoInstance434;

appearance = Appearance433;

let Sphere435 = browser.currentScene.createNode("Sphere");
Sphere435.USE = "Ball";
geometry = Sphere435;

Anchor431YYY.children = new X3D.MFNode();

Anchor431ZZZ.children[0] = Shape432;

Transform430YYY.children = new X3D.MFNode();

Transform430ZZZ.children[0] = Anchor431;

let Transform436 = browser.currentScene.createNode("Transform");
Transform436.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor437 = browser.currentScene.createNode("Anchor");
Anchor437.description = "ArtDeco26 view source documentation";
Anchor437.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor437.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26")]);
let Shape438 = browser.currentScene.createNode("Shape");
let Appearance439 = browser.currentScene.createNode("Appearance");
let Material440 = browser.currentScene.createNode("Material");
Material440.USE = "TextMat";
material = Material440;

appearance = Appearance439;

let Text441 = browser.currentScene.createNode("Text");
Text441.string = new X3D.MFString([new X3D.SFString("ArtDeco26")]);
let FontStyle442 = browser.currentScene.createNode("FontStyle");
FontStyle442.USE = "Style";
fontStyle = FontStyle442;

geometry = Text441;

Anchor437YYY.children = new X3D.MFNode();

Anchor437ZZZ.children[0] = Shape438;

Transform436YYY.children = new X3D.MFNode();

Transform436ZZZ.children[0] = Anchor437;

Transform430ZZZ.children[1] = Transform436;

Group50ZZZ.children[62] = Transform430;

let Viewpoint443 = browser.currentScene.createNode("Viewpoint");
Viewpoint443.DEF = "View27";
Viewpoint443.description = "ArtDeco27";
Viewpoint443.position = new X3D.SFVec3f([0.75,-2.25,3]);
Group50ZZZ.children[63] = Viewpoint443;

let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new X3D.SFVec3f([0.75,-2.25,0]);
let Anchor445 = browser.currentScene.createNode("Anchor");
Anchor445.description = "ArtDeco27 view";
Anchor445.url = new X3D.MFString([new X3D.SFString("#View27")]);
let Shape446 = browser.currentScene.createNode("Shape");
let Appearance447 = browser.currentScene.createNode("Appearance");
let ProtoInstance448 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance448.name = "ArtDeco27";
Appearance447.shaders = new X3D.MFNode();

Appearance447XXX.shaders[0] = ProtoInstance448;

appearance = Appearance447;

let Sphere449 = browser.currentScene.createNode("Sphere");
Sphere449.USE = "Ball";
geometry = Sphere449;

Anchor445YYY.children = new X3D.MFNode();

Anchor445ZZZ.children[0] = Shape446;

Transform444YYY.children = new X3D.MFNode();

Transform444ZZZ.children[0] = Anchor445;

let Transform450 = browser.currentScene.createNode("Transform");
Transform450.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor451 = browser.currentScene.createNode("Anchor");
Anchor451.description = "ArtDeco27 view source documentation";
Anchor451.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor451.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27")]);
let Shape452 = browser.currentScene.createNode("Shape");
let Appearance453 = browser.currentScene.createNode("Appearance");
let Material454 = browser.currentScene.createNode("Material");
Material454.USE = "TextMat";
material = Material454;

appearance = Appearance453;

let Text455 = browser.currentScene.createNode("Text");
Text455.string = new X3D.MFString([new X3D.SFString("ArtDeco27")]);
let FontStyle456 = browser.currentScene.createNode("FontStyle");
FontStyle456.USE = "Style";
fontStyle = FontStyle456;

geometry = Text455;

Anchor451YYY.children = new X3D.MFNode();

Anchor451ZZZ.children[0] = Shape452;

Transform450YYY.children = new X3D.MFNode();

Transform450ZZZ.children[0] = Anchor451;

Transform444ZZZ.children[1] = Transform450;

Group50ZZZ.children[64] = Transform444;

let Viewpoint457 = browser.currentScene.createNode("Viewpoint");
Viewpoint457.DEF = "View28";
Viewpoint457.description = "ArtDeco28";
Viewpoint457.position = new X3D.SFVec3f([2.25,-2.25,3]);
Group50ZZZ.children[65] = Viewpoint457;

let Transform458 = browser.currentScene.createNode("Transform");
Transform458.translation = new X3D.SFVec3f([2.25,-2.25,0]);
let Anchor459 = browser.currentScene.createNode("Anchor");
Anchor459.description = "ArtDeco28 view";
Anchor459.url = new X3D.MFString([new X3D.SFString("#View28")]);
let Shape460 = browser.currentScene.createNode("Shape");
let Appearance461 = browser.currentScene.createNode("Appearance");
let ProtoInstance462 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance462.name = "ArtDeco28";
Appearance461.shaders = new X3D.MFNode();

Appearance461XXX.shaders[0] = ProtoInstance462;

appearance = Appearance461;

let Sphere463 = browser.currentScene.createNode("Sphere");
Sphere463.USE = "Ball";
geometry = Sphere463;

Anchor459YYY.children = new X3D.MFNode();

Anchor459ZZZ.children[0] = Shape460;

Transform458YYY.children = new X3D.MFNode();

Transform458ZZZ.children[0] = Anchor459;

let Transform464 = browser.currentScene.createNode("Transform");
Transform464.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor465 = browser.currentScene.createNode("Anchor");
Anchor465.description = "ArtDeco28 view source documentation";
Anchor465.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor465.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28")]);
let Shape466 = browser.currentScene.createNode("Shape");
let Appearance467 = browser.currentScene.createNode("Appearance");
let Material468 = browser.currentScene.createNode("Material");
Material468.USE = "TextMat";
material = Material468;

appearance = Appearance467;

let Text469 = browser.currentScene.createNode("Text");
Text469.string = new X3D.MFString([new X3D.SFString("ArtDeco28")]);
let FontStyle470 = browser.currentScene.createNode("FontStyle");
FontStyle470.USE = "Style";
fontStyle = FontStyle470;

geometry = Text469;

Anchor465YYY.children = new X3D.MFNode();

Anchor465ZZZ.children[0] = Shape466;

Transform464YYY.children = new X3D.MFNode();

Transform464ZZZ.children[0] = Anchor465;

Transform458ZZZ.children[1] = Transform464;

Group50ZZZ.children[66] = Transform458;

let Viewpoint471 = browser.currentScene.createNode("Viewpoint");
Viewpoint471.DEF = "View29";
Viewpoint471.description = "ArtDeco29";
Viewpoint471.position = new X3D.SFVec3f([3.75,-2.25,3]);
Group50ZZZ.children[67] = Viewpoint471;

let Transform472 = browser.currentScene.createNode("Transform");
Transform472.translation = new X3D.SFVec3f([3.75,-2.25,0]);
let Anchor473 = browser.currentScene.createNode("Anchor");
Anchor473.description = "ArtDeco29 view";
Anchor473.url = new X3D.MFString([new X3D.SFString("#View29")]);
let Shape474 = browser.currentScene.createNode("Shape");
let Appearance475 = browser.currentScene.createNode("Appearance");
let ProtoInstance476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance476.name = "ArtDeco29";
Appearance475.shaders = new X3D.MFNode();

Appearance475XXX.shaders[0] = ProtoInstance476;

appearance = Appearance475;

let Sphere477 = browser.currentScene.createNode("Sphere");
Sphere477.USE = "Ball";
geometry = Sphere477;

Anchor473YYY.children = new X3D.MFNode();

Anchor473ZZZ.children[0] = Shape474;

Transform472YYY.children = new X3D.MFNode();

Transform472ZZZ.children[0] = Anchor473;

let Transform478 = browser.currentScene.createNode("Transform");
Transform478.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor479 = browser.currentScene.createNode("Anchor");
Anchor479.description = "ArtDeco29 view source documentation";
Anchor479.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor479.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29")]);
let Shape480 = browser.currentScene.createNode("Shape");
let Appearance481 = browser.currentScene.createNode("Appearance");
let Material482 = browser.currentScene.createNode("Material");
Material482.USE = "TextMat";
material = Material482;

appearance = Appearance481;

let Text483 = browser.currentScene.createNode("Text");
Text483.string = new X3D.MFString([new X3D.SFString("ArtDeco29")]);
let FontStyle484 = browser.currentScene.createNode("FontStyle");
FontStyle484.USE = "Style";
fontStyle = FontStyle484;

geometry = Text483;

Anchor479YYY.children = new X3D.MFNode();

Anchor479ZZZ.children[0] = Shape480;

Transform478YYY.children = new X3D.MFNode();

Transform478ZZZ.children[0] = Anchor479;

Transform472ZZZ.children[1] = Transform478;

Group50ZZZ.children[68] = Transform472;

let Viewpoint485 = browser.currentScene.createNode("Viewpoint");
Viewpoint485.DEF = "View30";
Viewpoint485.description = "ArtDeco30";
Viewpoint485.position = new X3D.SFVec3f([-3.75,-3.75,3]);
Group50ZZZ.children[69] = Viewpoint485;

let Transform486 = browser.currentScene.createNode("Transform");
Transform486.translation = new X3D.SFVec3f([-3.75,-3.75,0]);
let Anchor487 = browser.currentScene.createNode("Anchor");
Anchor487.description = "ArtDeco30 view";
Anchor487.url = new X3D.MFString([new X3D.SFString("#View30")]);
let Shape488 = browser.currentScene.createNode("Shape");
let Appearance489 = browser.currentScene.createNode("Appearance");
let ProtoInstance490 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance490.name = "ArtDeco30";
Appearance489.shaders = new X3D.MFNode();

Appearance489XXX.shaders[0] = ProtoInstance490;

appearance = Appearance489;

let Sphere491 = browser.currentScene.createNode("Sphere");
Sphere491.USE = "Ball";
geometry = Sphere491;

Anchor487YYY.children = new X3D.MFNode();

Anchor487ZZZ.children[0] = Shape488;

Transform486YYY.children = new X3D.MFNode();

Transform486ZZZ.children[0] = Anchor487;

let Transform492 = browser.currentScene.createNode("Transform");
Transform492.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor493 = browser.currentScene.createNode("Anchor");
Anchor493.description = "ArtDeco30 view source documentation";
Anchor493.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor493.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30")]);
let Shape494 = browser.currentScene.createNode("Shape");
let Appearance495 = browser.currentScene.createNode("Appearance");
let Material496 = browser.currentScene.createNode("Material");
Material496.USE = "TextMat";
material = Material496;

appearance = Appearance495;

let Text497 = browser.currentScene.createNode("Text");
Text497.string = new X3D.MFString([new X3D.SFString("ArtDeco30")]);
let FontStyle498 = browser.currentScene.createNode("FontStyle");
FontStyle498.USE = "Style";
fontStyle = FontStyle498;

geometry = Text497;

Anchor493YYY.children = new X3D.MFNode();

Anchor493ZZZ.children[0] = Shape494;

Transform492YYY.children = new X3D.MFNode();

Transform492ZZZ.children[0] = Anchor493;

Transform486ZZZ.children[1] = Transform492;

Group50ZZZ.children[70] = Transform486;

let Viewpoint499 = browser.currentScene.createNode("Viewpoint");
Viewpoint499.DEF = "View31";
Viewpoint499.description = "ArtDeco31";
Viewpoint499.position = new X3D.SFVec3f([-2.25,-3.75,3]);
Group50ZZZ.children[71] = Viewpoint499;

let Transform500 = browser.currentScene.createNode("Transform");
Transform500.translation = new X3D.SFVec3f([-2.25,-3.75,0]);
let Anchor501 = browser.currentScene.createNode("Anchor");
Anchor501.description = "ArtDeco31 view";
Anchor501.url = new X3D.MFString([new X3D.SFString("#View31")]);
let Shape502 = browser.currentScene.createNode("Shape");
let Appearance503 = browser.currentScene.createNode("Appearance");
let ProtoInstance504 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance504.name = "ArtDeco31";
Appearance503.shaders = new X3D.MFNode();

Appearance503XXX.shaders[0] = ProtoInstance504;

appearance = Appearance503;

let Sphere505 = browser.currentScene.createNode("Sphere");
Sphere505.USE = "Ball";
geometry = Sphere505;

Anchor501YYY.children = new X3D.MFNode();

Anchor501ZZZ.children[0] = Shape502;

Transform500YYY.children = new X3D.MFNode();

Transform500ZZZ.children[0] = Anchor501;

let Transform506 = browser.currentScene.createNode("Transform");
Transform506.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor507 = browser.currentScene.createNode("Anchor");
Anchor507.description = "ArtDeco31 view source documentation";
Anchor507.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor507.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31")]);
let Shape508 = browser.currentScene.createNode("Shape");
let Appearance509 = browser.currentScene.createNode("Appearance");
let Material510 = browser.currentScene.createNode("Material");
Material510.USE = "TextMat";
material = Material510;

appearance = Appearance509;

let Text511 = browser.currentScene.createNode("Text");
Text511.string = new X3D.MFString([new X3D.SFString("ArtDeco31")]);
let FontStyle512 = browser.currentScene.createNode("FontStyle");
FontStyle512.USE = "Style";
fontStyle = FontStyle512;

geometry = Text511;

Anchor507YYY.children = new X3D.MFNode();

Anchor507ZZZ.children[0] = Shape508;

Transform506YYY.children = new X3D.MFNode();

Transform506ZZZ.children[0] = Anchor507;

Transform500ZZZ.children[1] = Transform506;

Group50ZZZ.children[72] = Transform500;

let Viewpoint513 = browser.currentScene.createNode("Viewpoint");
Viewpoint513.DEF = "View32";
Viewpoint513.description = "ArtDeco32";
Viewpoint513.position = new X3D.SFVec3f([-0.75,-3.75,3]);
Group50ZZZ.children[73] = Viewpoint513;

let Transform514 = browser.currentScene.createNode("Transform");
Transform514.translation = new X3D.SFVec3f([-0.75,-3.75,0]);
let Anchor515 = browser.currentScene.createNode("Anchor");
Anchor515.description = "ArtDeco32 view";
Anchor515.url = new X3D.MFString([new X3D.SFString("#View32")]);
let Shape516 = browser.currentScene.createNode("Shape");
let Appearance517 = browser.currentScene.createNode("Appearance");
let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.name = "ArtDeco32";
Appearance517.shaders = new X3D.MFNode();

Appearance517XXX.shaders[0] = ProtoInstance518;

appearance = Appearance517;

let Sphere519 = browser.currentScene.createNode("Sphere");
Sphere519.USE = "Ball";
geometry = Sphere519;

Anchor515YYY.children = new X3D.MFNode();

Anchor515ZZZ.children[0] = Shape516;

Transform514YYY.children = new X3D.MFNode();

Transform514ZZZ.children[0] = Anchor515;

let Transform520 = browser.currentScene.createNode("Transform");
Transform520.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor521 = browser.currentScene.createNode("Anchor");
Anchor521.description = "ArtDeco32 view source documentation";
Anchor521.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor521.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32")]);
let Shape522 = browser.currentScene.createNode("Shape");
let Appearance523 = browser.currentScene.createNode("Appearance");
let Material524 = browser.currentScene.createNode("Material");
Material524.USE = "TextMat";
material = Material524;

appearance = Appearance523;

let Text525 = browser.currentScene.createNode("Text");
Text525.string = new X3D.MFString([new X3D.SFString("ArtDeco32")]);
let FontStyle526 = browser.currentScene.createNode("FontStyle");
FontStyle526.USE = "Style";
fontStyle = FontStyle526;

geometry = Text525;

Anchor521YYY.children = new X3D.MFNode();

Anchor521ZZZ.children[0] = Shape522;

Transform520YYY.children = new X3D.MFNode();

Transform520ZZZ.children[0] = Anchor521;

Transform514ZZZ.children[1] = Transform520;

Group50ZZZ.children[74] = Transform514;

let Viewpoint527 = browser.currentScene.createNode("Viewpoint");
Viewpoint527.DEF = "View33";
Viewpoint527.description = "ArtDeco33";
Viewpoint527.position = new X3D.SFVec3f([0.75,-3.75,3]);
Group50ZZZ.children[75] = Viewpoint527;

let Transform528 = browser.currentScene.createNode("Transform");
Transform528.translation = new X3D.SFVec3f([0.75,-3.75,0]);
let Anchor529 = browser.currentScene.createNode("Anchor");
Anchor529.description = "ArtDeco33 view";
Anchor529.url = new X3D.MFString([new X3D.SFString("#View33")]);
let Shape530 = browser.currentScene.createNode("Shape");
let Appearance531 = browser.currentScene.createNode("Appearance");
let ProtoInstance532 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance532.name = "ArtDeco33";
Appearance531.shaders = new X3D.MFNode();

Appearance531XXX.shaders[0] = ProtoInstance532;

appearance = Appearance531;

let Sphere533 = browser.currentScene.createNode("Sphere");
Sphere533.USE = "Ball";
geometry = Sphere533;

Anchor529YYY.children = new X3D.MFNode();

Anchor529ZZZ.children[0] = Shape530;

Transform528YYY.children = new X3D.MFNode();

Transform528ZZZ.children[0] = Anchor529;

let Transform534 = browser.currentScene.createNode("Transform");
Transform534.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor535 = browser.currentScene.createNode("Anchor");
Anchor535.description = "ArtDeco33 view source documentation";
Anchor535.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor535.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33")]);
let Shape536 = browser.currentScene.createNode("Shape");
let Appearance537 = browser.currentScene.createNode("Appearance");
let Material538 = browser.currentScene.createNode("Material");
Material538.USE = "TextMat";
material = Material538;

appearance = Appearance537;

let Text539 = browser.currentScene.createNode("Text");
Text539.string = new X3D.MFString([new X3D.SFString("ArtDeco33")]);
let FontStyle540 = browser.currentScene.createNode("FontStyle");
FontStyle540.USE = "Style";
fontStyle = FontStyle540;

geometry = Text539;

Anchor535YYY.children = new X3D.MFNode();

Anchor535ZZZ.children[0] = Shape536;

Transform534YYY.children = new X3D.MFNode();

Transform534ZZZ.children[0] = Anchor535;

Transform528ZZZ.children[1] = Transform534;

Group50ZZZ.children[76] = Transform528;

let Viewpoint541 = browser.currentScene.createNode("Viewpoint");
Viewpoint541.DEF = "View34";
Viewpoint541.description = "ArtDeco34";
Viewpoint541.position = new X3D.SFVec3f([2.25,-3.75,3]);
Group50ZZZ.children[77] = Viewpoint541;

let Transform542 = browser.currentScene.createNode("Transform");
Transform542.translation = new X3D.SFVec3f([2.25,-3.75,0]);
let Anchor543 = browser.currentScene.createNode("Anchor");
Anchor543.description = "ArtDeco34 view";
Anchor543.url = new X3D.MFString([new X3D.SFString("#View34")]);
let Shape544 = browser.currentScene.createNode("Shape");
let Appearance545 = browser.currentScene.createNode("Appearance");
let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.name = "ArtDeco34";
Appearance545.shaders = new X3D.MFNode();

Appearance545XXX.shaders[0] = ProtoInstance546;

appearance = Appearance545;

let Sphere547 = browser.currentScene.createNode("Sphere");
Sphere547.USE = "Ball";
geometry = Sphere547;

Anchor543YYY.children = new X3D.MFNode();

Anchor543ZZZ.children[0] = Shape544;

Transform542YYY.children = new X3D.MFNode();

Transform542ZZZ.children[0] = Anchor543;

let Transform548 = browser.currentScene.createNode("Transform");
Transform548.translation = new X3D.SFVec3f([0,0.3,0.5]);
let Anchor549 = browser.currentScene.createNode("Anchor");
Anchor549.description = "ArtDeco34 view source documentation";
Anchor549.parameter = new X3D.MFString([new X3D.SFString("target=_source")]);
Anchor549.url = new X3D.MFString([new X3D.SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34")]);
let Shape550 = browser.currentScene.createNode("Shape");
let Appearance551 = browser.currentScene.createNode("Appearance");
let Material552 = browser.currentScene.createNode("Material");
Material552.USE = "TextMat";
material = Material552;

appearance = Appearance551;

let Text553 = browser.currentScene.createNode("Text");
Text553.string = new X3D.MFString([new X3D.SFString("ArtDeco34")]);
let FontStyle554 = browser.currentScene.createNode("FontStyle");
FontStyle554.USE = "Style";
fontStyle = FontStyle554;

geometry = Text553;

Anchor549YYY.children = new X3D.MFNode();

Anchor549ZZZ.children[0] = Shape550;

Transform548YYY.children = new X3D.MFNode();

Transform548ZZZ.children[0] = Anchor549;

Transform542ZZZ.children[1] = Transform548;

Group50ZZZ.children[78] = Transform542;

browser.currentScene.children[36] = Group50;

let ROUTE555 = browser.currentScene.createNode("ROUTE");
ROUTE555.fromField = "fraction_changed";
ROUTE555.fromNode = "Close_Time";
ROUTE555.toField = "set_fraction";
ROUTE555.toNode = "Close_Mover";
browser.currentScene.children[37] = ROUTE555;

let ROUTE556 = browser.currentScene.createNode("ROUTE");
ROUTE556.fromField = "value_changed";
ROUTE556.fromNode = "Close_Mover";
ROUTE556.toField = "set_translation";
ROUTE556.toNode = "Close_travel";
browser.currentScene.children[38] = ROUTE556;

}
main ();
