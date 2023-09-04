let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "t3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "creator";
meta6.content = "Andreas Plesch and John Carlson";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "source";
meta7.content = "t1.wrl";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "description";
meta8.content = "Test Case for Proto Expander";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "translated";
meta10.content = "12 May 2020";
head1.meta[8] = meta10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Networking";
component11.level = 2;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Core";
component12.level = 2;
head1.component[10] = component12;

head = head1;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo14.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo14.avatarSize = new MFFloat(new float[200,200,120]);
NavigationInfo14.speed = 3;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo14;

let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "Arts Mapper";
browser.currentScene.children[1] = WorldInfo15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "looking North";
Viewpoint16.position = new SFVec3f(new float[0,60,110]);
Viewpoint16.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint16.fieldOfView = 0.7853981;
browser.currentScene.children[2] = Viewpoint16;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new SFVec3f(new float[-468,0,315]);
let Anchor18 = browser.currentScene.createNode("Anchor");
Anchor18.description = "High Peak Community Arts";
Anchor18.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform19 = browser.currentScene.createNode("Transform");
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Material22.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 5.1;
Shape20.geometry = Sphere23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Anchor18.children = new MFNode();

Anchor18.children[0] = Transform19;

Transform17.children = new MFNode();

Transform17.children[0] = Anchor18;

let Anchor24 = browser.currentScene.createNode("Anchor");
Anchor24.description = "People Express";
Anchor24.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform25 = browser.currentScene.createNode("Transform");
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Material28.emissiveColor = new SFColor(new float[0.6,0,0.6]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 5.1;
Shape26.geometry = Sphere29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Anchor24.children = new MFNode();

Anchor24.children[0] = Transform25;

Transform17.children[1] = Anchor24;

let Anchor30 = browser.currentScene.createNode("Anchor");
Anchor30.description = "QArts/Studios";
Anchor30.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform31 = browser.currentScene.createNode("Transform");
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[1,1,1]);
Material34.emissiveColor = new SFColor(new float[0.6,0,0.6]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 5.1;
Shape32.geometry = Sphere35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Anchor30.children = new MFNode();

Anchor30.children[0] = Transform31;

Transform17.children[2] = Anchor30;

let Anchor36 = browser.currentScene.createNode("Anchor");
Anchor36.description = "First Movement";
Anchor36.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform37 = browser.currentScene.createNode("Transform");
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.emissiveColor = new SFColor(new float[1,0,0.2]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Sphere41 = browser.currentScene.createNode("Sphere");
Sphere41.radius = 5.1;
Shape38.geometry = Sphere41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Anchor36.children = new MFNode();

Anchor36.children[0] = Transform37;

Transform17.children[3] = Anchor36;

let Anchor42 = browser.currentScene.createNode("Anchor");
Anchor42.description = "City Arts";
Anchor42.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform43 = browser.currentScene.createNode("Transform");
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[1,1,1]);
Material46.emissiveColor = new SFColor(new float[0.6,0,0.6]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

let Sphere47 = browser.currentScene.createNode("Sphere");
Sphere47.radius = 5.1;
Shape44.geometry = Sphere47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Anchor42.children = new MFNode();

Anchor42.children[0] = Transform43;

Transform17.children[4] = Anchor42;

let Anchor48 = browser.currentScene.createNode("Anchor");
Anchor48.description = "Indigo Dance Group (Salamanda Tandem)";
Anchor48.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform49 = browser.currentScene.createNode("Transform");
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,1,1]);
Material52.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Sphere53 = browser.currentScene.createNode("Sphere");
Sphere53.radius = 5.1;
Shape50.geometry = Sphere53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Anchor48.children = new MFNode();

Anchor48.children[0] = Transform49;

Transform17.children[5] = Anchor48;

let Anchor54 = browser.currentScene.createNode("Anchor");
Anchor54.description = "Watering Seeds";
Anchor54.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform55 = browser.currentScene.createNode("Transform");
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Material58.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Sphere59 = browser.currentScene.createNode("Sphere");
Sphere59.radius = 5.1;
Shape56.geometry = Sphere59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Anchor54.children = new MFNode();

Anchor54.children[0] = Transform55;

Transform17.children[6] = Anchor54;

let Anchor60 = browser.currentScene.createNode("Anchor");
Anchor60.description = "Fased In The Arts";
Anchor60.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform61 = browser.currentScene.createNode("Transform");
let Shape62 = browser.currentScene.createNode("Shape");
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Material64.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

let Sphere65 = browser.currentScene.createNode("Sphere");
Sphere65.radius = 5.1;
Shape62.geometry = Sphere65;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Anchor60.children = new MFNode();

Anchor60.children[0] = Transform61;

Transform17.children[7] = Anchor60;

let Anchor66 = browser.currentScene.createNode("Anchor");
Anchor66.description = "27a Access Artspace";
Anchor66.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform67 = browser.currentScene.createNode("Transform");
let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.diffuseColor = new SFColor(new float[1,1,1]);
Material70.emissiveColor = new SFColor(new float[1,0,0.2]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

let Sphere71 = browser.currentScene.createNode("Sphere");
Sphere71.radius = 5.1;
Shape68.geometry = Sphere71;

Transform67.child = new undefined();

Transform67.child[0] = Shape68;

Anchor66.children = new MFNode();

Anchor66.children[0] = Transform67;

Transform17.children[8] = Anchor66;

let Anchor72 = browser.currentScene.createNode("Anchor");
Anchor72.description = "Bamboozle Theatre Company";
Anchor72.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform73 = browser.currentScene.createNode("Transform");
let Shape74 = browser.currentScene.createNode("Shape");
let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.diffuseColor = new SFColor(new float[1,1,1]);
Material76.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

let Sphere77 = browser.currentScene.createNode("Sphere");
Sphere77.radius = 5.1;
Shape74.geometry = Sphere77;

Transform73.child = new undefined();

Transform73.child[0] = Shape74;

Anchor72.children = new MFNode();

Anchor72.children[0] = Transform73;

Transform17.children[9] = Anchor72;

let Anchor78 = browser.currentScene.createNode("Anchor");
Anchor78.description = "Mantle Community Arts";
Anchor78.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform79 = browser.currentScene.createNode("Transform");
let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
let Material82 = browser.currentScene.createNode("Material");
Material82.diffuseColor = new SFColor(new float[1,1,1]);
Material82.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

let Sphere83 = browser.currentScene.createNode("Sphere");
Sphere83.radius = 5.1;
Shape80.geometry = Sphere83;

Transform79.child = new undefined();

Transform79.child[0] = Shape80;

Anchor78.children = new MFNode();

Anchor78.children[0] = Transform79;

Transform17.children[10] = Anchor78;

let Anchor84 = browser.currentScene.createNode("Anchor");
Anchor84.description = "Artlink East";
Anchor84.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform85 = browser.currentScene.createNode("Transform");
let Shape86 = browser.currentScene.createNode("Shape");
let Appearance87 = browser.currentScene.createNode("Appearance");
let Material88 = browser.currentScene.createNode("Material");
Material88.diffuseColor = new SFColor(new float[1,1,1]);
Material88.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

let Sphere89 = browser.currentScene.createNode("Sphere");
Sphere89.radius = 5.1;
Shape86.geometry = Sphere89;

Transform85.child = new undefined();

Transform85.child[0] = Shape86;

Anchor84.children = new MFNode();

Anchor84.children[0] = Transform85;

Transform17.children[11] = Anchor84;

let Anchor90 = browser.currentScene.createNode("Anchor");
Anchor90.description = "Creations";
Anchor90.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform91 = browser.currentScene.createNode("Transform");
let Shape92 = browser.currentScene.createNode("Shape");
let Appearance93 = browser.currentScene.createNode("Appearance");
let Material94 = browser.currentScene.createNode("Material");
Material94.diffuseColor = new SFColor(new float[1,1,1]);
Material94.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance93.material = Material94;

Shape92.appearance = Appearance93;

let Sphere95 = browser.currentScene.createNode("Sphere");
Sphere95.radius = 5.1;
Shape92.geometry = Sphere95;

Transform91.child = new undefined();

Transform91.child[0] = Shape92;

Anchor90.children = new MFNode();

Anchor90.children[0] = Transform91;

Transform17.children[12] = Anchor90;

let Anchor96 = browser.currentScene.createNode("Anchor");
Anchor96.description = "New Perspectives";
Anchor96.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform97 = browser.currentScene.createNode("Transform");
let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new SFColor(new float[1,1,1]);
Material100.emissiveColor = new SFColor(new float[1,0,0.2]);
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

let Sphere101 = browser.currentScene.createNode("Sphere");
Sphere101.radius = 5.1;
Shape98.geometry = Sphere101;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

Anchor96.children = new MFNode();

Anchor96.children[0] = Transform97;

Transform17.children[13] = Anchor96;

let Anchor102 = browser.currentScene.createNode("Anchor");
Anchor102.description = "UKan2";
Anchor102.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let Transform103 = browser.currentScene.createNode("Transform");
let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.diffuseColor = new SFColor(new float[1,1,1]);
Material106.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

let Sphere107 = browser.currentScene.createNode("Sphere");
Sphere107.radius = 5.1;
Shape104.geometry = Sphere107;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

Anchor102.children = new MFNode();

Anchor102.children[0] = Transform103;

Transform17.children[14] = Anchor102;

browser.currentScene.children[3] = Transform17;

