let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Networking";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "Core";
component3.level = 2;
head1.component[1] = component3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "title";
meta4.content = "t3.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "creator";
meta7.content = "Andreas Plesch and John Carlson";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "source";
meta8.content = "t1.wrl";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "description";
meta9.content = "Test Case for Proto Expander";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "license";
meta10.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "translated";
meta11.content = "12 May 2020";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding";
head1.meta[11] = meta13;

head = head1;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo15.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo15.speed = 3;
NavigationInfo15.avatarSize = new MFFloat(new float[200,200,120]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo15;

let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "Arts Mapper";
browser.currentScene.children[1] = WorldInfo16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.description = "looking North";
Viewpoint17.position = new SFVec3f(new float[0,60,110]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint17.fieldOfView = 0.785398125648499;
browser.currentScene.children[2] = Viewpoint17;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[-468,0,315]);
let Anchor19 = browser.currentScene.createNode("Anchor");
Anchor19.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor19.description = "High Peak Community Arts";
let Transform20 = browser.currentScene.createNode("Transform");
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[1,1,1]);
Material23.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

let Sphere24 = browser.currentScene.createNode("Sphere");
Sphere24.radius = 5.10000002384186;
Shape21.geometry = Sphere24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Anchor19.children = new MFNode();

Anchor19.children[0] = Transform20;

Transform18.children = new MFNode();

Transform18.children[0] = Anchor19;

let Anchor25 = browser.currentScene.createNode("Anchor");
Anchor25.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor25.description = "People Express";
let Transform26 = browser.currentScene.createNode("Transform");
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[1,1,1]);
Material29.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Sphere30 = browser.currentScene.createNode("Sphere");
Sphere30.radius = 5.10000002384186;
Shape27.geometry = Sphere30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Anchor25.children = new MFNode();

Anchor25.children[0] = Transform26;

Transform18.children[1] = Anchor25;

let Anchor31 = browser.currentScene.createNode("Anchor");
Anchor31.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor31.description = "QArts/Studios";
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 5.10000002384186;
Shape33.geometry = Sphere36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Anchor31.children = new MFNode();

Anchor31.children[0] = Transform32;

Transform18.children[2] = Anchor31;

let Anchor37 = browser.currentScene.createNode("Anchor");
Anchor37.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor37.description = "First Movement";
let Transform38 = browser.currentScene.createNode("Transform");
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[1,1,1]);
Material41.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let Sphere42 = browser.currentScene.createNode("Sphere");
Sphere42.radius = 5.10000002384186;
Shape39.geometry = Sphere42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Anchor37.children = new MFNode();

Anchor37.children[0] = Transform38;

Transform18.children[3] = Anchor37;

let Anchor43 = browser.currentScene.createNode("Anchor");
Anchor43.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor43.description = "City Arts";
let Transform44 = browser.currentScene.createNode("Transform");
let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new SFColor(new float[1,1,1]);
Material47.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let Sphere48 = browser.currentScene.createNode("Sphere");
Sphere48.radius = 5.10000002384186;
Shape45.geometry = Sphere48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Anchor43.children = new MFNode();

Anchor43.children[0] = Transform44;

Transform18.children[4] = Anchor43;

let Anchor49 = browser.currentScene.createNode("Anchor");
Anchor49.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor49.description = "Indigo Dance Group (Salamanda Tandem)";
let Transform50 = browser.currentScene.createNode("Transform");
let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[1,1,1]);
Material53.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

let Sphere54 = browser.currentScene.createNode("Sphere");
Sphere54.radius = 5.10000002384186;
Shape51.geometry = Sphere54;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Anchor49.children = new MFNode();

Anchor49.children[0] = Transform50;

Transform18.children[5] = Anchor49;

let Anchor55 = browser.currentScene.createNode("Anchor");
Anchor55.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor55.description = "Watering Seeds";
let Transform56 = browser.currentScene.createNode("Transform");
let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,1,1]);
Material59.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

let Sphere60 = browser.currentScene.createNode("Sphere");
Sphere60.radius = 5.10000002384186;
Shape57.geometry = Sphere60;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

Anchor55.children = new MFNode();

Anchor55.children[0] = Transform56;

Transform18.children[6] = Anchor55;

let Anchor61 = browser.currentScene.createNode("Anchor");
Anchor61.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor61.description = "Fased In The Arts";
let Transform62 = browser.currentScene.createNode("Transform");
let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.diffuseColor = new SFColor(new float[1,1,1]);
Material65.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let Sphere66 = browser.currentScene.createNode("Sphere");
Sphere66.radius = 5.10000002384186;
Shape63.geometry = Sphere66;

Transform62.child = new undefined();

Transform62.child[0] = Shape63;

Anchor61.children = new MFNode();

Anchor61.children[0] = Transform62;

Transform18.children[7] = Anchor61;

let Anchor67 = browser.currentScene.createNode("Anchor");
Anchor67.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor67.description = "27a Access Artspace";
let Transform68 = browser.currentScene.createNode("Transform");
let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.diffuseColor = new SFColor(new float[1,1,1]);
Material71.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

let Sphere72 = browser.currentScene.createNode("Sphere");
Sphere72.radius = 5.10000002384186;
Shape69.geometry = Sphere72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Anchor67.children = new MFNode();

Anchor67.children[0] = Transform68;

Transform18.children[8] = Anchor67;

let Anchor73 = browser.currentScene.createNode("Anchor");
Anchor73.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor73.description = "Bamboozle Theatre Company";
let Transform74 = browser.currentScene.createNode("Transform");
let Shape75 = browser.currentScene.createNode("Shape");
let Appearance76 = browser.currentScene.createNode("Appearance");
let Material77 = browser.currentScene.createNode("Material");
Material77.diffuseColor = new SFColor(new float[1,1,1]);
Material77.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

let Sphere78 = browser.currentScene.createNode("Sphere");
Sphere78.radius = 5.10000002384186;
Shape75.geometry = Sphere78;

Transform74.child = new undefined();

Transform74.child[0] = Shape75;

Anchor73.children = new MFNode();

Anchor73.children[0] = Transform74;

Transform18.children[9] = Anchor73;

let Anchor79 = browser.currentScene.createNode("Anchor");
Anchor79.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor79.description = "Mantle Community Arts";
let Transform80 = browser.currentScene.createNode("Transform");
let Shape81 = browser.currentScene.createNode("Shape");
let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.diffuseColor = new SFColor(new float[1,1,1]);
Material83.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

let Sphere84 = browser.currentScene.createNode("Sphere");
Sphere84.radius = 5.10000002384186;
Shape81.geometry = Sphere84;

Transform80.child = new undefined();

Transform80.child[0] = Shape81;

Anchor79.children = new MFNode();

Anchor79.children[0] = Transform80;

Transform18.children[10] = Anchor79;

let Anchor85 = browser.currentScene.createNode("Anchor");
Anchor85.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor85.description = "Artlink East";
let Transform86 = browser.currentScene.createNode("Transform");
let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
let Material89 = browser.currentScene.createNode("Material");
Material89.diffuseColor = new SFColor(new float[1,1,1]);
Material89.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance88.material = Material89;

Shape87.appearance = Appearance88;

let Sphere90 = browser.currentScene.createNode("Sphere");
Sphere90.radius = 5.10000002384186;
Shape87.geometry = Sphere90;

Transform86.child = new undefined();

Transform86.child[0] = Shape87;

Anchor85.children = new MFNode();

Anchor85.children[0] = Transform86;

Transform18.children[11] = Anchor85;

let Anchor91 = browser.currentScene.createNode("Anchor");
Anchor91.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor91.description = "Creations";
let Transform92 = browser.currentScene.createNode("Transform");
let Shape93 = browser.currentScene.createNode("Shape");
let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.diffuseColor = new SFColor(new float[1,1,1]);
Material95.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

let Sphere96 = browser.currentScene.createNode("Sphere");
Sphere96.radius = 5.10000002384186;
Shape93.geometry = Sphere96;

Transform92.child = new undefined();

Transform92.child[0] = Shape93;

Anchor91.children = new MFNode();

Anchor91.children[0] = Transform92;

Transform18.children[12] = Anchor91;

let Anchor97 = browser.currentScene.createNode("Anchor");
Anchor97.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor97.description = "New Perspectives";
let Transform98 = browser.currentScene.createNode("Transform");
let Shape99 = browser.currentScene.createNode("Shape");
let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.diffuseColor = new SFColor(new float[1,1,1]);
Material101.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

let Sphere102 = browser.currentScene.createNode("Sphere");
Sphere102.radius = 5.10000002384186;
Shape99.geometry = Sphere102;

Transform98.child = new undefined();

Transform98.child[0] = Shape99;

Anchor97.children = new MFNode();

Anchor97.children[0] = Transform98;

Transform18.children[13] = Anchor97;

let Anchor103 = browser.currentScene.createNode("Anchor");
Anchor103.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor103.description = "UKan2";
let Transform104 = browser.currentScene.createNode("Transform");
let Shape105 = browser.currentScene.createNode("Shape");
let Appearance106 = browser.currentScene.createNode("Appearance");
let Material107 = browser.currentScene.createNode("Material");
Material107.diffuseColor = new SFColor(new float[1,1,1]);
Material107.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

let Sphere108 = browser.currentScene.createNode("Sphere");
Sphere108.radius = 5.10000002384186;
Shape105.geometry = Sphere108;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

Anchor103.children = new MFNode();

Anchor103.children[0] = Transform104;

Transform18.children[14] = Anchor103;

browser.currentScene.children[3] = Transform18;

