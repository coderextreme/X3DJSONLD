let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "t4.x3d";
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
meta5.name = "creator";
meta5.content = "Andreas Plesch and John Carlson";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "source";
meta6.content = "t1.wrl";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "Test Case for Proto Expander";
head1.meta[5] = meta7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Networking";
component8.level = 2;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Core";
component9.level = 2;
head1.component[7] = component9;

head = head1;

let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="posi"></field>
<field accessType="initializeOnly" type="SFColor" name="col"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="5.1"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "org";
let ProtoInterface12 = browser.currentScene.createNode("ProtoInterface");
let field13 = browser.currentScene.createNode("field");
field13.accessType = "initializeOnly";
field13.type = "SFVec3f";
field13.name = "posi";
ProtoInterface12.field = new MFNode();

ProtoInterface12.field[0] = field13;

let field14 = browser.currentScene.createNode("field");
field14.accessType = "initializeOnly";
field14.type = "SFColor";
field14.name = "col";
ProtoInterface12.field[1] = field14;

ProtoDeclare11.protoInterface = ProtoInterface12;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Transform16 = browser.currentScene.createNode("Transform");
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,1,1]);
let IS20 = browser.currentScene.createNode("IS");
let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "emissiveColor";
connect21.protoField = "col";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

Material19.iS = IS20;

Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 5.1;
Shape17.geometry = Sphere22;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

let IS23 = browser.currentScene.createNode("IS");
let connect24 = browser.currentScene.createNode("connect");
connect24.nodeField = "translation";
connect24.protoField = "posi";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

Transform16.iS = IS23;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare11.protoBody = ProtoBody15;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.3 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "r";
let ProtoInterface26 = browser.currentScene.createNode("ProtoInterface");
let field27 = browser.currentScene.createNode("field");
field27.accessType = "initializeOnly";
field27.type = "SFVec3f";
field27.name = "pos";
ProtoInterface26.field = new MFNode();

ProtoInterface26.field[0] = field27;

ProtoDeclare25.protoInterface = ProtoInterface26;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "org";
let fieldValue30 = browser.currentScene.createNode("fieldValue");
fieldValue30.name = "col";
fieldValue30.value = "0 0.3 1";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

let IS31 = browser.currentScene.createNode("IS");
let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "posi";
connect32.protoField = "pos";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ProtoInstance29.iS = IS31;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = ProtoInstance29;

ProtoDeclare25.protoBody = ProtoBody28;

browser.currentScene.children[1] = ProtoDeclare25;

let ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.2"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "n";
let ProtoInterface34 = browser.currentScene.createNode("ProtoInterface");
let field35 = browser.currentScene.createNode("field");
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.name = "pos";
ProtoInterface34.field = new MFNode();

ProtoInterface34.field[0] = field35;

ProtoDeclare33.protoInterface = ProtoInterface34;

let ProtoBody36 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "org";
let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "col";
fieldValue38.value = "1 0 0.2";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "posi";
connect40.protoField = "pos";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

ProtoInstance37.iS = IS39;

ProtoBody36.children = new MFNode();

ProtoBody36.children[0] = ProtoInstance37;

ProtoDeclare33.protoBody = ProtoBody36;

browser.currentScene.children[2] = ProtoDeclare33;

let ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.6 0 0.6"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "i";
let ProtoInterface42 = browser.currentScene.createNode("ProtoInterface");
let field43 = browser.currentScene.createNode("field");
field43.accessType = "initializeOnly";
field43.type = "SFVec3f";
field43.name = "pos";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

ProtoDeclare41.protoInterface = ProtoInterface42;

let ProtoBody44 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "org";
let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "col";
fieldValue46.value = "0.6 0 0.6";
ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

let IS47 = browser.currentScene.createNode("IS");
let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "posi";
connect48.protoField = "pos";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

ProtoInstance45.iS = IS47;

ProtoBody44.children = new MFNode();

ProtoBody44.children[0] = ProtoInstance45;

ProtoDeclare41.protoBody = ProtoBody44;

browser.currentScene.children[3] = ProtoDeclare41;

let NavigationInfo49 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo49.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo49.avatarSize = new MFFloat(new float[200,200,120]);
NavigationInfo49.speed = 3;
browser.currentScene.children[4] = NavigationInfo49;

let WorldInfo50 = browser.currentScene.createNode("WorldInfo");
WorldInfo50.title = "Arts Mapper";
browser.currentScene.children[5] = WorldInfo50;

let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.description = "looking North";
Viewpoint51.position = new SFVec3f(new float[0,60,110]);
Viewpoint51.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint51.fieldOfView = 0.7853981;
browser.currentScene.children[6] = Viewpoint51;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[-468,0,315]);
let Anchor53 = browser.currentScene.createNode("Anchor");
Anchor53.description = "High Peak Community Arts";
Anchor53.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "r";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "pos";
fieldValue55.value = "400 0.1 -385";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Anchor53.children = new MFNode();

Anchor53.children[0] = ProtoInstance54;

Transform52.children = new MFNode();

Transform52.children[0] = Anchor53;

let Anchor56 = browser.currentScene.createNode("Anchor");
Anchor56.description = "People Express";
Anchor56.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "i";
let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "pos";
fieldValue58.value = "429.9 0.1 -319.6";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

Anchor56.children = new MFNode();

Anchor56.children[0] = ProtoInstance57;

Transform52.children[1] = Anchor56;

let Anchor59 = browser.currentScene.createNode("Anchor");
Anchor59.description = "QArts/Studios";
Anchor59.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "i";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "pos";
fieldValue61.value = "430 0.1 -335";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Anchor59.children = new MFNode();

Anchor59.children[0] = ProtoInstance60;

Transform52.children[2] = Anchor59;

let Anchor62 = browser.currentScene.createNode("Anchor");
Anchor62.description = "First Movement";
Anchor62.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "n";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "pos";
fieldValue64.value = "429.9 0.1 -360.3";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Anchor62.children = new MFNode();

Anchor62.children[0] = ProtoInstance63;

Transform52.children[3] = Anchor62;

let Anchor65 = browser.currentScene.createNode("Anchor");
Anchor65.description = "City Arts";
Anchor65.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "i";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "pos";
fieldValue67.value = "455.9 0.1 -341.3";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

Anchor65.children = new MFNode();

Anchor65.children[0] = ProtoInstance66;

Transform52.children[4] = Anchor65;

let Anchor68 = browser.currentScene.createNode("Anchor");
Anchor68.description = "Indigo Dance Group (Salamanda Tandem)";
Anchor68.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "r";
let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "pos";
fieldValue70.value = "456.1 0.1 -341.5";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

Anchor68.children = new MFNode();

Anchor68.children[0] = ProtoInstance69;

Transform52.children[5] = Anchor68;

let Anchor71 = browser.currentScene.createNode("Anchor");
Anchor71.description = "Watering Seeds";
Anchor71.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "r";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "pos";
fieldValue73.value = "454 0.1 -361.3";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

Anchor71.children = new MFNode();

Anchor71.children[0] = ProtoInstance72;

Transform52.children[6] = Anchor71;

let Anchor74 = browser.currentScene.createNode("Anchor");
Anchor74.description = "Fased In The Arts";
Anchor74.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "r";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "pos";
fieldValue76.value = "440 0.1 -350";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

Anchor74.children = new MFNode();

Anchor74.children[0] = ProtoInstance75;

Transform52.children[7] = Anchor74;

let Anchor77 = browser.currentScene.createNode("Anchor");
Anchor77.description = "27a Access Artspace";
Anchor77.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance78 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance78.name = "n";
let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "pos";
fieldValue79.value = "458.9 0.1 -304.3";
ProtoInstance78.fieldValue = new MFNode();

ProtoInstance78.fieldValue[0] = fieldValue79;

Anchor77.children = new MFNode();

Anchor77.children[0] = ProtoInstance78;

Transform52.children[8] = Anchor77;

let Anchor80 = browser.currentScene.createNode("Anchor");
Anchor80.description = "Bamboozle Theatre Company";
Anchor80.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "r";
let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "pos";
fieldValue82.value = "457.1 0.1 -300.8";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

Anchor80.children = new MFNode();

Anchor80.children[0] = ProtoInstance81;

Transform52.children[9] = Anchor80;

let Anchor83 = browser.currentScene.createNode("Anchor");
Anchor83.description = "Mantle Community Arts";
Anchor83.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.name = "r";
let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "pos";
fieldValue85.value = "442.4 0.1 -314.5";
ProtoInstance84.fieldValue = new MFNode();

ProtoInstance84.fieldValue[0] = fieldValue85;

Anchor83.children = new MFNode();

Anchor83.children[0] = ProtoInstance84;

Transform52.children[10] = Anchor83;

let Anchor86 = browser.currentScene.createNode("Anchor");
Anchor86.description = "Artlink East";
Anchor86.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "r";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "pos";
fieldValue88.value = "491.6 0.1 -335.7";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

Anchor86.children = new MFNode();

Anchor86.children[0] = ProtoInstance87;

Transform52.children[11] = Anchor86;

let Anchor89 = browser.currentScene.createNode("Anchor");
Anchor89.description = "Creations";
Anchor89.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance90 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance90.name = "r";
let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "pos";
fieldValue91.value = "467 0.1 -243.9";
ProtoInstance90.fieldValue = new MFNode();

ProtoInstance90.fieldValue[0] = fieldValue91;

Anchor89.children = new MFNode();

Anchor89.children[0] = ProtoInstance90;

Transform52.children[12] = Anchor89;

let Anchor92 = browser.currentScene.createNode("Anchor");
Anchor92.description = "New Perspectives";
Anchor92.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance93 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance93.name = "n";
let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "pos";
fieldValue94.value = "457.4 0.1 -262.7";
ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

Anchor92.children = new MFNode();

Anchor92.children[0] = ProtoInstance93;

Transform52.children[13] = Anchor92;

let Anchor95 = browser.currentScene.createNode("Anchor");
Anchor95.description = "UKan2";
Anchor95.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
let ProtoInstance96 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance96.name = "r";
let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "pos";
fieldValue97.value = "458.7 0.1 -262.7";
ProtoInstance96.fieldValue = new MFNode();

ProtoInstance96.fieldValue[0] = fieldValue97;

Anchor95.children = new MFNode();

Anchor95.children[0] = ProtoInstance96;

Transform52.children[14] = Anchor95;

browser.currentScene.children[7] = Transform52;

