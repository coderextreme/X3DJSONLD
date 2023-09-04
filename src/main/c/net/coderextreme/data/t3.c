#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "t3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Andreas Plesch and John Carlson";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "source";
meta7.content = "t1.wrl";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "Test Case for Proto Expander";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "license";
meta9.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "translated";
meta10.content = "12 May 2020";
head1.meta[8] = meta10;

component component11 = createNode("component");
component11.name = "Networking";
component11.level = 2;
head1.component[9] = component11;

component component12 = createNode("component");
component12.name = "Core";
component12.level = 2;
head1.component[10] = component12;

head = head1;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
NavigationInfo14.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo14.avatarSize = new MFFloat(new float[200,200,120]);
NavigationInfo14.speed = 3;
children = new MFNode();

children[0] = NavigationInfo14;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "Arts Mapper";
children[1] = WorldInfo15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.description = "looking North";
Viewpoint16.position = new SFVec3f(new float[0,60,110]);
Viewpoint16.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint16.fieldOfView = 0.7853981;
children[2] = Viewpoint16;

Transform Transform17 = createNode("Transform");
Transform17.translation = new SFVec3f(new float[-468,0,315]);
Anchor Anchor18 = createNode("Anchor");
Anchor18.description = "High Peak Community Arts";
Anchor18.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform19 = createNode("Transform");
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Material22.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Sphere Sphere23 = createNode("Sphere");
Sphere23.radius = 5.1;
Shape20.geometry = Sphere23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Anchor18.children = new MFNode();

Anchor18.children[0] = Transform19;

Transform17.children = new MFNode();

Transform17.children[0] = Anchor18;

Anchor Anchor24 = createNode("Anchor");
Anchor24.description = "People Express";
Anchor24.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform25 = createNode("Transform");
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Material28.emissiveColor = new SFColor(new float[0.6,0,0.6]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

Sphere Sphere29 = createNode("Sphere");
Sphere29.radius = 5.1;
Shape26.geometry = Sphere29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Anchor24.children = new MFNode();

Anchor24.children[0] = Transform25;

Transform17.children[1] = Anchor24;

Anchor Anchor30 = createNode("Anchor");
Anchor30.description = "QArts/Studios";
Anchor30.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform31 = createNode("Transform");
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[1,1,1]);
Material34.emissiveColor = new SFColor(new float[0.6,0,0.6]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Sphere Sphere35 = createNode("Sphere");
Sphere35.radius = 5.1;
Shape32.geometry = Sphere35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Anchor30.children = new MFNode();

Anchor30.children[0] = Transform31;

Transform17.children[2] = Anchor30;

Anchor Anchor36 = createNode("Anchor");
Anchor36.description = "First Movement";
Anchor36.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform37 = createNode("Transform");
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.emissiveColor = new SFColor(new float[1,0,0.2]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

Sphere Sphere41 = createNode("Sphere");
Sphere41.radius = 5.1;
Shape38.geometry = Sphere41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Anchor36.children = new MFNode();

Anchor36.children[0] = Transform37;

Transform17.children[3] = Anchor36;

Anchor Anchor42 = createNode("Anchor");
Anchor42.description = "City Arts";
Anchor42.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform43 = createNode("Transform");
Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.diffuseColor = new SFColor(new float[1,1,1]);
Material46.emissiveColor = new SFColor(new float[0.6,0,0.6]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

Sphere Sphere47 = createNode("Sphere");
Sphere47.radius = 5.1;
Shape44.geometry = Sphere47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Anchor42.children = new MFNode();

Anchor42.children[0] = Transform43;

Transform17.children[4] = Anchor42;

Anchor Anchor48 = createNode("Anchor");
Anchor48.description = "Indigo Dance Group (Salamanda Tandem)";
Anchor48.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform49 = createNode("Transform");
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,1,1]);
Material52.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

Sphere Sphere53 = createNode("Sphere");
Sphere53.radius = 5.1;
Shape50.geometry = Sphere53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Anchor48.children = new MFNode();

Anchor48.children[0] = Transform49;

Transform17.children[5] = Anchor48;

Anchor Anchor54 = createNode("Anchor");
Anchor54.description = "Watering Seeds";
Anchor54.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform55 = createNode("Transform");
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Material58.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

Sphere Sphere59 = createNode("Sphere");
Sphere59.radius = 5.1;
Shape56.geometry = Sphere59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Anchor54.children = new MFNode();

Anchor54.children[0] = Transform55;

Transform17.children[6] = Anchor54;

Anchor Anchor60 = createNode("Anchor");
Anchor60.description = "Fased In The Arts";
Anchor60.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform61 = createNode("Transform");
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Material64.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

Sphere Sphere65 = createNode("Sphere");
Sphere65.radius = 5.1;
Shape62.geometry = Sphere65;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Anchor60.children = new MFNode();

Anchor60.children[0] = Transform61;

Transform17.children[7] = Anchor60;

Anchor Anchor66 = createNode("Anchor");
Anchor66.description = "27a Access Artspace";
Anchor66.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform67 = createNode("Transform");
Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.diffuseColor = new SFColor(new float[1,1,1]);
Material70.emissiveColor = new SFColor(new float[1,0,0.2]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

Sphere Sphere71 = createNode("Sphere");
Sphere71.radius = 5.1;
Shape68.geometry = Sphere71;

Transform67.child = new undefined();

Transform67.child[0] = Shape68;

Anchor66.children = new MFNode();

Anchor66.children[0] = Transform67;

Transform17.children[8] = Anchor66;

Anchor Anchor72 = createNode("Anchor");
Anchor72.description = "Bamboozle Theatre Company";
Anchor72.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform73 = createNode("Transform");
Shape Shape74 = createNode("Shape");
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.diffuseColor = new SFColor(new float[1,1,1]);
Material76.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

Sphere Sphere77 = createNode("Sphere");
Sphere77.radius = 5.1;
Shape74.geometry = Sphere77;

Transform73.child = new undefined();

Transform73.child[0] = Shape74;

Anchor72.children = new MFNode();

Anchor72.children[0] = Transform73;

Transform17.children[9] = Anchor72;

Anchor Anchor78 = createNode("Anchor");
Anchor78.description = "Mantle Community Arts";
Anchor78.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform79 = createNode("Transform");
Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Material82.diffuseColor = new SFColor(new float[1,1,1]);
Material82.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

Sphere Sphere83 = createNode("Sphere");
Sphere83.radius = 5.1;
Shape80.geometry = Sphere83;

Transform79.child = new undefined();

Transform79.child[0] = Shape80;

Anchor78.children = new MFNode();

Anchor78.children[0] = Transform79;

Transform17.children[10] = Anchor78;

Anchor Anchor84 = createNode("Anchor");
Anchor84.description = "Artlink East";
Anchor84.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform85 = createNode("Transform");
Shape Shape86 = createNode("Shape");
Appearance Appearance87 = createNode("Appearance");
Material Material88 = createNode("Material");
Material88.diffuseColor = new SFColor(new float[1,1,1]);
Material88.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

Sphere Sphere89 = createNode("Sphere");
Sphere89.radius = 5.1;
Shape86.geometry = Sphere89;

Transform85.child = new undefined();

Transform85.child[0] = Shape86;

Anchor84.children = new MFNode();

Anchor84.children[0] = Transform85;

Transform17.children[11] = Anchor84;

Anchor Anchor90 = createNode("Anchor");
Anchor90.description = "Creations";
Anchor90.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform91 = createNode("Transform");
Shape Shape92 = createNode("Shape");
Appearance Appearance93 = createNode("Appearance");
Material Material94 = createNode("Material");
Material94.diffuseColor = new SFColor(new float[1,1,1]);
Material94.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance93.material = Material94;

Shape92.appearance = Appearance93;

Sphere Sphere95 = createNode("Sphere");
Sphere95.radius = 5.1;
Shape92.geometry = Sphere95;

Transform91.child = new undefined();

Transform91.child[0] = Shape92;

Anchor90.children = new MFNode();

Anchor90.children[0] = Transform91;

Transform17.children[12] = Anchor90;

Anchor Anchor96 = createNode("Anchor");
Anchor96.description = "New Perspectives";
Anchor96.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform97 = createNode("Transform");
Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Material Material100 = createNode("Material");
Material100.diffuseColor = new SFColor(new float[1,1,1]);
Material100.emissiveColor = new SFColor(new float[1,0,0.2]);
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

Sphere Sphere101 = createNode("Sphere");
Sphere101.radius = 5.1;
Shape98.geometry = Sphere101;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

Anchor96.children = new MFNode();

Anchor96.children[0] = Transform97;

Transform17.children[13] = Anchor96;

Anchor Anchor102 = createNode("Anchor");
Anchor102.description = "UKan2";
Anchor102.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Transform Transform103 = createNode("Transform");
Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.diffuseColor = new SFColor(new float[1,1,1]);
Material106.emissiveColor = new SFColor(new float[0,0.3,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

Sphere Sphere107 = createNode("Sphere");
Sphere107.radius = 5.1;
Shape104.geometry = Sphere107;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

Anchor102.children = new MFNode();

Anchor102.children[0] = Transform103;

Transform17.children[14] = Anchor102;

children[3] = Transform17;

}
