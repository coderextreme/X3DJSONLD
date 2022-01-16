#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Networking";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Core";
component3.level = 2;
head1.component[1] = component3;

meta meta4 = createNode("meta");
meta4.name = "title";
meta4.content = "t3.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Andreas Plesch and John Carlson";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "source";
meta8.content = "t1.wrl";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "description";
meta9.content = "Test Case for Proto Expander";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "translated";
meta11.content = "12 May 2020";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding";
head1.meta[11] = meta13;

head = head1;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
NavigationInfo15.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo15.speed = 3;
NavigationInfo15.avatarSize = new MFFloat(new float[200,200,120]);
children = new MFNode();

children[0] = NavigationInfo15;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "Arts Mapper";
children[1] = WorldInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "looking North";
Viewpoint17.position = new SFVec3f(new float[0,60,110]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint17.fieldOfView = 0.785398125648499;
children[2] = Viewpoint17;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[-468,0,315]);
Anchor Anchor19 = createNode("Anchor");
Anchor19.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor19.description = "High Peak Community Arts";
Transform Transform20 = createNode("Transform");
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[1,1,1]);
Material23.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

Sphere Sphere24 = createNode("Sphere");
Sphere24.radius = 5.10000002384186;
Shape21.geometry = Sphere24;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Anchor19.children = new MFNode();

Anchor19.children[0] = Transform20;

Transform18.children = new MFNode();

Transform18.children[0] = Anchor19;

Anchor Anchor25 = createNode("Anchor");
Anchor25.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor25.description = "People Express";
Transform Transform26 = createNode("Transform");
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[1,1,1]);
Material29.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Sphere Sphere30 = createNode("Sphere");
Sphere30.radius = 5.10000002384186;
Shape27.geometry = Sphere30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

Anchor25.children = new MFNode();

Anchor25.children[0] = Transform26;

Transform18.children[1] = Anchor25;

Anchor Anchor31 = createNode("Anchor");
Anchor31.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor31.description = "QArts/Studios";
Transform Transform32 = createNode("Transform");
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Sphere Sphere36 = createNode("Sphere");
Sphere36.radius = 5.10000002384186;
Shape33.geometry = Sphere36;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

Anchor31.children = new MFNode();

Anchor31.children[0] = Transform32;

Transform18.children[2] = Anchor31;

Anchor Anchor37 = createNode("Anchor");
Anchor37.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor37.description = "First Movement";
Transform Transform38 = createNode("Transform");
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.diffuseColor = new SFColor(new float[1,1,1]);
Material41.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Sphere Sphere42 = createNode("Sphere");
Sphere42.radius = 5.10000002384186;
Shape39.geometry = Sphere42;

Transform38.children = new MFNode();

Transform38.children[0] = Shape39;

Anchor37.children = new MFNode();

Anchor37.children[0] = Transform38;

Transform18.children[3] = Anchor37;

Anchor Anchor43 = createNode("Anchor");
Anchor43.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor43.description = "City Arts";
Transform Transform44 = createNode("Transform");
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[1,1,1]);
Material47.emissiveColor = new SFColor(new float[0.600000023841858,0,0.600000023841858]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

Sphere Sphere48 = createNode("Sphere");
Sphere48.radius = 5.10000002384186;
Shape45.geometry = Sphere48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

Anchor43.children = new MFNode();

Anchor43.children[0] = Transform44;

Transform18.children[4] = Anchor43;

Anchor Anchor49 = createNode("Anchor");
Anchor49.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor49.description = "Indigo Dance Group (Salamanda Tandem)";
Transform Transform50 = createNode("Transform");
Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.diffuseColor = new SFColor(new float[1,1,1]);
Material53.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

Sphere Sphere54 = createNode("Sphere");
Sphere54.radius = 5.10000002384186;
Shape51.geometry = Sphere54;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Anchor49.children = new MFNode();

Anchor49.children[0] = Transform50;

Transform18.children[5] = Anchor49;

Anchor Anchor55 = createNode("Anchor");
Anchor55.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor55.description = "Watering Seeds";
Transform Transform56 = createNode("Transform");
Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,1,1]);
Material59.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

Sphere Sphere60 = createNode("Sphere");
Sphere60.radius = 5.10000002384186;
Shape57.geometry = Sphere60;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

Anchor55.children = new MFNode();

Anchor55.children[0] = Transform56;

Transform18.children[6] = Anchor55;

Anchor Anchor61 = createNode("Anchor");
Anchor61.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor61.description = "Fased In The Arts";
Transform Transform62 = createNode("Transform");
Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Material65.diffuseColor = new SFColor(new float[1,1,1]);
Material65.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

Sphere Sphere66 = createNode("Sphere");
Sphere66.radius = 5.10000002384186;
Shape63.geometry = Sphere66;

Transform62.children = new MFNode();

Transform62.children[0] = Shape63;

Anchor61.children = new MFNode();

Anchor61.children[0] = Transform62;

Transform18.children[7] = Anchor61;

Anchor Anchor67 = createNode("Anchor");
Anchor67.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor67.description = "27a Access Artspace";
Transform Transform68 = createNode("Transform");
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.diffuseColor = new SFColor(new float[1,1,1]);
Material71.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

Sphere Sphere72 = createNode("Sphere");
Sphere72.radius = 5.10000002384186;
Shape69.geometry = Sphere72;

Transform68.children = new MFNode();

Transform68.children[0] = Shape69;

Anchor67.children = new MFNode();

Anchor67.children[0] = Transform68;

Transform18.children[8] = Anchor67;

Anchor Anchor73 = createNode("Anchor");
Anchor73.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor73.description = "Bamboozle Theatre Company";
Transform Transform74 = createNode("Transform");
Shape Shape75 = createNode("Shape");
Appearance Appearance76 = createNode("Appearance");
Material Material77 = createNode("Material");
Material77.diffuseColor = new SFColor(new float[1,1,1]);
Material77.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

Sphere Sphere78 = createNode("Sphere");
Sphere78.radius = 5.10000002384186;
Shape75.geometry = Sphere78;

Transform74.children = new MFNode();

Transform74.children[0] = Shape75;

Anchor73.children = new MFNode();

Anchor73.children[0] = Transform74;

Transform18.children[9] = Anchor73;

Anchor Anchor79 = createNode("Anchor");
Anchor79.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor79.description = "Mantle Community Arts";
Transform Transform80 = createNode("Transform");
Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.diffuseColor = new SFColor(new float[1,1,1]);
Material83.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

Sphere Sphere84 = createNode("Sphere");
Sphere84.radius = 5.10000002384186;
Shape81.geometry = Sphere84;

Transform80.children = new MFNode();

Transform80.children[0] = Shape81;

Anchor79.children = new MFNode();

Anchor79.children[0] = Transform80;

Transform18.children[10] = Anchor79;

Anchor Anchor85 = createNode("Anchor");
Anchor85.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor85.description = "Artlink East";
Transform Transform86 = createNode("Transform");
Shape Shape87 = createNode("Shape");
Appearance Appearance88 = createNode("Appearance");
Material Material89 = createNode("Material");
Material89.diffuseColor = new SFColor(new float[1,1,1]);
Material89.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance88.material = Material89;

Shape87.appearance = Appearance88;

Sphere Sphere90 = createNode("Sphere");
Sphere90.radius = 5.10000002384186;
Shape87.geometry = Sphere90;

Transform86.children = new MFNode();

Transform86.children[0] = Shape87;

Anchor85.children = new MFNode();

Anchor85.children[0] = Transform86;

Transform18.children[11] = Anchor85;

Anchor Anchor91 = createNode("Anchor");
Anchor91.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor91.description = "Creations";
Transform Transform92 = createNode("Transform");
Shape Shape93 = createNode("Shape");
Appearance Appearance94 = createNode("Appearance");
Material Material95 = createNode("Material");
Material95.diffuseColor = new SFColor(new float[1,1,1]);
Material95.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

Sphere Sphere96 = createNode("Sphere");
Sphere96.radius = 5.10000002384186;
Shape93.geometry = Sphere96;

Transform92.children = new MFNode();

Transform92.children[0] = Shape93;

Anchor91.children = new MFNode();

Anchor91.children[0] = Transform92;

Transform18.children[12] = Anchor91;

Anchor Anchor97 = createNode("Anchor");
Anchor97.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor97.description = "New Perspectives";
Transform Transform98 = createNode("Transform");
Shape Shape99 = createNode("Shape");
Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.diffuseColor = new SFColor(new float[1,1,1]);
Material101.emissiveColor = new SFColor(new float[1,0,0.200000002980232]);
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

Sphere Sphere102 = createNode("Sphere");
Sphere102.radius = 5.10000002384186;
Shape99.geometry = Sphere102;

Transform98.children = new MFNode();

Transform98.children[0] = Shape99;

Anchor97.children = new MFNode();

Anchor97.children[0] = Transform98;

Transform18.children[13] = Anchor97;

Anchor Anchor103 = createNode("Anchor");
Anchor103.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor103.description = "UKan2";
Transform Transform104 = createNode("Transform");
Shape Shape105 = createNode("Shape");
Appearance Appearance106 = createNode("Appearance");
Material Material107 = createNode("Material");
Material107.diffuseColor = new SFColor(new float[1,1,1]);
Material107.emissiveColor = new SFColor(new float[0,0.300000011920929,1]);
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

Sphere Sphere108 = createNode("Sphere");
Sphere108.radius = 5.10000002384186;
Shape105.geometry = Sphere108;

Transform104.children = new MFNode();

Transform104.children[0] = Shape105;

Anchor103.children = new MFNode();

Anchor103.children[0] = Transform104;

Transform18.children[14] = Anchor103;

children[3] = Transform18;

}
