let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo2.speed = 3;
NavigationInfo2.avatarSize = new MFFloat(new float[200,200,120]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let WorldInfo3 = browser.currentScene.createNode("WorldInfo");
WorldInfo3.title = "Arts Mapper";
browser.currentScene.children[1] = WorldInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "looking North";
Viewpoint4.position = new SFVec3f(new float[0,60,110]);
Viewpoint4.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint4.fieldOfView = 0.785398125648499;
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.translation = new SFVec3f(new float[-468,0,315]);
Transform5.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Anchor6 = browser.currentScene.createNode("Anchor");
Anchor6.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor6.description = "High Peak Community Arts";
Anchor6.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[1,1,1]);
Material10.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let Sphere11 = browser.currentScene.createNode("Sphere");
Sphere11.radius = 5.10000002384186;
Shape8.geometry = Sphere11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

Anchor6.children = new MFNode();

Anchor6.children[0] = Transform7;

Transform5.children = new MFNode();

Transform5.children[0] = Anchor6;

let Anchor12 = browser.currentScene.createNode("Anchor");
Anchor12.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor12.description = "People Express";
Anchor12.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape14.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new SFColor(new float[1,1,1]);
Material16.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let Sphere17 = browser.currentScene.createNode("Sphere");
Sphere17.radius = 5.10000002384186;
Shape14.geometry = Sphere17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Anchor12.children = new MFNode();

Anchor12.children[0] = Transform13;

Transform5.children[1] = Anchor12;

let Anchor18 = browser.currentScene.createNode("Anchor");
Anchor18.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor18.description = "QArts/Studios";
Anchor18.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor18.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape20.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Material22.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 5.10000002384186;
Shape20.geometry = Sphere23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Anchor18.children = new MFNode();

Anchor18.children[0] = Transform19;

Transform5.children[2] = Anchor18;

let Anchor24 = browser.currentScene.createNode("Anchor");
Anchor24.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor24.description = "First Movement";
Anchor24.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor24.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform25.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape26.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Material28.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 5.10000002384186;
Shape26.geometry = Sphere29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

Anchor24.children = new MFNode();

Anchor24.children[0] = Transform25;

Transform5.children[3] = Anchor24;

let Anchor30 = browser.currentScene.createNode("Anchor");
Anchor30.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor30.description = "City Arts";
Anchor30.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor30.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform31.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape32.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[1,1,1]);
Material34.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 5.10000002384186;
Shape32.geometry = Sphere35;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

Anchor30.children = new MFNode();

Anchor30.children[0] = Transform31;

Transform5.children[4] = Anchor30;

let Anchor36 = browser.currentScene.createNode("Anchor");
Anchor36.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor36.description = "Indigo Dance Group (Salamanda Tandem)";
Anchor36.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform37 = browser.currentScene.createNode("Transform");
Transform37.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform37.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape38.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Sphere41 = browser.currentScene.createNode("Sphere");
Sphere41.radius = 5.10000002384186;
Shape38.geometry = Sphere41;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

Anchor36.children = new MFNode();

Anchor36.children[0] = Transform37;

Transform5.children[5] = Anchor36;

let Anchor42 = browser.currentScene.createNode("Anchor");
Anchor42.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor42.description = "Watering Seeds";
Anchor42.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor42.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform43.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape44.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[1,1,1]);
Material46.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

let Sphere47 = browser.currentScene.createNode("Sphere");
Sphere47.radius = 5.10000002384186;
Shape44.geometry = Sphere47;

Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

Anchor42.children = new MFNode();

Anchor42.children[0] = Transform43;

Transform5.children[6] = Anchor42;

let Anchor48 = browser.currentScene.createNode("Anchor");
Anchor48.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor48.description = "Fased In The Arts";
Anchor48.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor48.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform49.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,1,1]);
Material52.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Sphere53 = browser.currentScene.createNode("Sphere");
Sphere53.radius = 5.10000002384186;
Shape50.geometry = Sphere53;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

Anchor48.children = new MFNode();

Anchor48.children[0] = Transform49;

Transform5.children[7] = Anchor48;

let Anchor54 = browser.currentScene.createNode("Anchor");
Anchor54.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor54.description = "27a Access Artspace";
Anchor54.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor54.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform55.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape56.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Material58.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Sphere59 = browser.currentScene.createNode("Sphere");
Sphere59.radius = 5.10000002384186;
Shape56.geometry = Sphere59;

Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

Anchor54.children = new MFNode();

Anchor54.children[0] = Transform55;

Transform5.children[8] = Anchor54;

let Anchor60 = browser.currentScene.createNode("Anchor");
Anchor60.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor60.description = "Bamboozle Theatre Company";
Anchor60.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor60.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform61 = browser.currentScene.createNode("Transform");
Transform61.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform61.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape62.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Material64.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

let Sphere65 = browser.currentScene.createNode("Sphere");
Sphere65.radius = 5.10000002384186;
Shape62.geometry = Sphere65;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

Anchor60.children = new MFNode();

Anchor60.children[0] = Transform61;

Transform5.children[9] = Anchor60;

let Anchor66 = browser.currentScene.createNode("Anchor");
Anchor66.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor66.description = "Mantle Community Arts";
Anchor66.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor66.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform67 = browser.currentScene.createNode("Transform");
Transform67.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform67.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape68.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.diffuseColor = new SFColor(new float[1,1,1]);
Material70.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

let Sphere71 = browser.currentScene.createNode("Sphere");
Sphere71.radius = 5.10000002384186;
Shape68.geometry = Sphere71;

Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

Anchor66.children = new MFNode();

Anchor66.children[0] = Transform67;

Transform5.children[10] = Anchor66;

let Anchor72 = browser.currentScene.createNode("Anchor");
Anchor72.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor72.description = "Artlink East";
Anchor72.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor72.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform73 = browser.currentScene.createNode("Transform");
Transform73.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform73.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape74.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.diffuseColor = new SFColor(new float[1,1,1]);
Material76.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

let Sphere77 = browser.currentScene.createNode("Sphere");
Sphere77.radius = 5.10000002384186;
Shape74.geometry = Sphere77;

Transform73.children = new MFNode();

Transform73.children[0] = Shape74;

Anchor72.children = new MFNode();

Anchor72.children[0] = Transform73;

Transform5.children[11] = Anchor72;

let Anchor78 = browser.currentScene.createNode("Anchor");
Anchor78.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor78.description = "Creations";
Anchor78.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor78.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform79.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape80.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance81 = browser.currentScene.createNode("Appearance");
let Material82 = browser.currentScene.createNode("Material");
Material82.diffuseColor = new SFColor(new float[1,1,1]);
Material82.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

let Sphere83 = browser.currentScene.createNode("Sphere");
Sphere83.radius = 5.10000002384186;
Shape80.geometry = Sphere83;

Transform79.children = new MFNode();

Transform79.children[0] = Shape80;

Anchor78.children = new MFNode();

Anchor78.children[0] = Transform79;

Transform5.children[12] = Anchor78;

let Anchor84 = browser.currentScene.createNode("Anchor");
Anchor84.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor84.description = "New Perspectives";
Anchor84.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor84.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform85.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape86.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance87 = browser.currentScene.createNode("Appearance");
let Material88 = browser.currentScene.createNode("Material");
Material88.diffuseColor = new SFColor(new float[1,1,1]);
Material88.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

let Sphere89 = browser.currentScene.createNode("Sphere");
Sphere89.radius = 5.10000002384186;
Shape86.geometry = Sphere89;

Transform85.children = new MFNode();

Transform85.children[0] = Shape86;

Anchor84.children = new MFNode();

Anchor84.children[0] = Transform85;

Transform5.children[13] = Anchor84;

let Anchor90 = browser.currentScene.createNode("Anchor");
Anchor90.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor90.description = "UKan2";
Anchor90.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor90.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform91.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape92.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance93 = browser.currentScene.createNode("Appearance");
let Material94 = browser.currentScene.createNode("Material");
Material94.diffuseColor = new SFColor(new float[1,1,1]);
Material94.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance93.material = Material94;

Shape92.appearance = Appearance93;

let Sphere95 = browser.currentScene.createNode("Sphere");
Sphere95.radius = 5.10000002384186;
Shape92.geometry = Sphere95;

Transform91.children = new MFNode();

Transform91.children[0] = Shape92;

Anchor90.children = new MFNode();

Anchor90.children[0] = Transform91;

Transform5.children[14] = Anchor90;

browser.currentScene.children[3] = Transform5;

