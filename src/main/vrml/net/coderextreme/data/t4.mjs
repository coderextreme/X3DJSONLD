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
meta4.content = "t4.x3d";
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

head = head1;

let NavigationInfo12 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo12.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo12.speed = 3;
NavigationInfo12.avatarSize = new MFFloat(new float[200,200,120]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo12;

let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "Arts Mapper";
browser.currentScene.children[1] = WorldInfo13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.description = "looking North";
Viewpoint14.position = new SFVec3f(new float[0,60,110]);
Viewpoint14.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint14.fieldOfView = 0.785398125648499;
browser.currentScene.children[2] = Viewpoint14;

let ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
<Shape><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="5.10000002384186"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "org";
let ProtoInterface16 = browser.currentScene.createNode("ProtoInterface");
let field17 = browser.currentScene.createNode("field");
field17.name = "posi";
field17.accessType = "initializeOnly";
field17.type = "SFVec3f";
field17.value = "0 0 0";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "col";
field18.accessType = "initializeOnly";
field18.type = "SFColor";
field18.value = "0 0 0";
ProtoInterface16.field[1] = field18;

ProtoDeclare15.protoInterface = ProtoInterface16;

let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
let Transform20 = browser.currentScene.createNode("Transform");
let IS21 = browser.currentScene.createNode("IS");
let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "translation";
connect22.protoField = "posi";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

Transform20.iS = IS21;

let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[1,1,1]);
let IS26 = browser.currentScene.createNode("IS");
let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "emissiveColor";
connect27.protoField = "col";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Material25.iS = IS26;

Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Sphere28 = browser.currentScene.createNode("Sphere");
Sphere28.radius = 5.10000002384186;
Shape23.geometry = Sphere28;

Transform20.children = new MFNode();

Transform20.children[0] = Shape23;

ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Transform20;

ProtoDeclare15.protoBody = ProtoBody19;

browser.currentScene.children[3] = ProtoDeclare15;

let ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare29.name = "r";
let ProtoInterface30 = browser.currentScene.createNode("ProtoInterface");
let field31 = browser.currentScene.createNode("field");
field31.name = "pos";
field31.accessType = "initializeOnly";
field31.type = "SFVec3f";
field31.value = "0 0 0";
ProtoInterface30.field = new MFNode();

ProtoInterface30.field[0] = field31;

ProtoDeclare29.protoInterface = ProtoInterface30;

let ProtoBody32 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "org";
let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "col";
fieldValue34.value = "0 0.300000011920929 1";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

let IS35 = browser.currentScene.createNode("IS");
let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "posi";
connect36.protoField = "pos";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

ProtoInstance33.iS = IS35;

ProtoBody32.children = new MFNode();

ProtoBody32.children[0] = ProtoInstance33;

ProtoDeclare29.protoBody = ProtoBody32;

browser.currentScene.children[4] = ProtoDeclare29;

let ProtoDeclare37 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.200000002980232"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare37.name = "n";
let ProtoInterface38 = browser.currentScene.createNode("ProtoInterface");
let field39 = browser.currentScene.createNode("field");
field39.name = "pos";
field39.accessType = "initializeOnly";
field39.type = "SFVec3f";
field39.value = "0 0 0";
ProtoInterface38.field = new MFNode();

ProtoInterface38.field[0] = field39;

ProtoDeclare37.protoInterface = ProtoInterface38;

let ProtoBody40 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance41 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance41.name = "org";
let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "col";
fieldValue42.value = "1 0 0.200000002980232";
ProtoInstance41.fieldValue = new MFNode();

ProtoInstance41.fieldValue[0] = fieldValue42;

let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "posi";
connect44.protoField = "pos";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

ProtoInstance41.iS = IS43;

ProtoBody40.children = new MFNode();

ProtoBody40.children[0] = ProtoInstance41;

ProtoDeclare37.protoBody = ProtoBody40;

browser.currentScene.children[5] = ProtoDeclare37;

let ProtoDeclare45 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.600000023841858 0 0.600000023841858"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare45.name = "i";
let ProtoInterface46 = browser.currentScene.createNode("ProtoInterface");
let field47 = browser.currentScene.createNode("field");
field47.name = "pos";
field47.accessType = "initializeOnly";
field47.type = "SFVec3f";
field47.value = "0 0 0";
ProtoInterface46.field = new MFNode();

ProtoInterface46.field[0] = field47;

ProtoDeclare45.protoInterface = ProtoInterface46;

let ProtoBody48 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance49 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance49.name = "org";
let fieldValue50 = browser.currentScene.createNode("fieldValue");
fieldValue50.name = "col";
fieldValue50.value = "0.600000023841858 0 0.600000023841858";
ProtoInstance49.fieldValue = new MFNode();

ProtoInstance49.fieldValue[0] = fieldValue50;

let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "posi";
connect52.protoField = "pos";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

ProtoInstance49.iS = IS51;

ProtoBody48.children = new MFNode();

ProtoBody48.children[0] = ProtoInstance49;

ProtoDeclare45.protoBody = ProtoBody48;

browser.currentScene.children[6] = ProtoDeclare45;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new SFVec3f(new float[-468,0,315]);
let Anchor54 = browser.currentScene.createNode("Anchor");
Anchor54.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor54.description = "High Peak Community Arts";
let ProtoInstance55 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance55.name = "r";
let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "pos";
fieldValue56.value = "400 0.100000001490116 -385";
ProtoInstance55.fieldValue = new MFNode();

ProtoInstance55.fieldValue[0] = fieldValue56;

Anchor54.children = new MFNode();

Anchor54.children[0] = ProtoInstance55;

Transform53.children = new MFNode();

Transform53.children[0] = Anchor54;

let Anchor57 = browser.currentScene.createNode("Anchor");
Anchor57.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor57.description = "People Express";
let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "i";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "pos";
fieldValue59.value = "429.899993896484 0.100000001490116 -319.600006103516";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Anchor57.children = new MFNode();

Anchor57.children[0] = ProtoInstance58;

Transform53.children[1] = Anchor57;

let Anchor60 = browser.currentScene.createNode("Anchor");
Anchor60.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor60.description = "QArts/Studios";
let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "i";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "pos";
fieldValue62.value = "430 0.100000001490116 -335";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

Anchor60.children = new MFNode();

Anchor60.children[0] = ProtoInstance61;

Transform53.children[2] = Anchor60;

let Anchor63 = browser.currentScene.createNode("Anchor");
Anchor63.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor63.description = "First Movement";
let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "n";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "pos";
fieldValue65.value = "429.899993896484 0.100000001490116 -360.299987792969";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Anchor63.children = new MFNode();

Anchor63.children[0] = ProtoInstance64;

Transform53.children[3] = Anchor63;

let Anchor66 = browser.currentScene.createNode("Anchor");
Anchor66.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor66.description = "City Arts";
let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "i";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "pos";
fieldValue68.value = "455.899993896484 0.100000001490116 -341.299987792969";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

Anchor66.children = new MFNode();

Anchor66.children[0] = ProtoInstance67;

Transform53.children[4] = Anchor66;

let Anchor69 = browser.currentScene.createNode("Anchor");
Anchor69.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor69.description = "Indigo Dance Group (Salamanda Tandem)";
let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "r";
let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "pos";
fieldValue71.value = "456.100006103516 0.100000001490116 -341.5";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

Anchor69.children = new MFNode();

Anchor69.children[0] = ProtoInstance70;

Transform53.children[5] = Anchor69;

let Anchor72 = browser.currentScene.createNode("Anchor");
Anchor72.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor72.description = "Watering Seeds";
let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "r";
let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "pos";
fieldValue74.value = "454 0.100000001490116 -361.299987792969";
ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

Anchor72.children = new MFNode();

Anchor72.children[0] = ProtoInstance73;

Transform53.children[6] = Anchor72;

let Anchor75 = browser.currentScene.createNode("Anchor");
Anchor75.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor75.description = "Fased In The Arts";
let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.name = "r";
let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "pos";
fieldValue77.value = "440 0.100000001490116 -350";
ProtoInstance76.fieldValue = new MFNode();

ProtoInstance76.fieldValue[0] = fieldValue77;

Anchor75.children = new MFNode();

Anchor75.children[0] = ProtoInstance76;

Transform53.children[7] = Anchor75;

let Anchor78 = browser.currentScene.createNode("Anchor");
Anchor78.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor78.description = "27a Access Artspace";
let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "n";
let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "pos";
fieldValue80.value = "458.899993896484 0.100000001490116 -304.299987792969";
ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

Anchor78.children = new MFNode();

Anchor78.children[0] = ProtoInstance79;

Transform53.children[8] = Anchor78;

let Anchor81 = browser.currentScene.createNode("Anchor");
Anchor81.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor81.description = "Bamboozle Theatre Company";
let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.name = "r";
let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "pos";
fieldValue83.value = "457.100006103516 0.100000001490116 -300.799987792969";
ProtoInstance82.fieldValue = new MFNode();

ProtoInstance82.fieldValue[0] = fieldValue83;

Anchor81.children = new MFNode();

Anchor81.children[0] = ProtoInstance82;

Transform53.children[9] = Anchor81;

let Anchor84 = browser.currentScene.createNode("Anchor");
Anchor84.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor84.description = "Mantle Community Arts";
let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "r";
let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "pos";
fieldValue86.value = "442.399993896484 0.100000001490116 -314.5";
ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

Anchor84.children = new MFNode();

Anchor84.children[0] = ProtoInstance85;

Transform53.children[10] = Anchor84;

let Anchor87 = browser.currentScene.createNode("Anchor");
Anchor87.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor87.description = "Artlink East";
let ProtoInstance88 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance88.name = "r";
let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "pos";
fieldValue89.value = "491.600006103516 0.100000001490116 -335.700012207031";
ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

Anchor87.children = new MFNode();

Anchor87.children[0] = ProtoInstance88;

Transform53.children[11] = Anchor87;

let Anchor90 = browser.currentScene.createNode("Anchor");
Anchor90.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor90.description = "Creations";
let ProtoInstance91 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance91.name = "r";
let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "pos";
fieldValue92.value = "467 0.100000001490116 -243.899993896484";
ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

Anchor90.children = new MFNode();

Anchor90.children[0] = ProtoInstance91;

Transform53.children[12] = Anchor90;

let Anchor93 = browser.currentScene.createNode("Anchor");
Anchor93.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor93.description = "New Perspectives";
let ProtoInstance94 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance94.name = "n";
let fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "pos";
fieldValue95.value = "457.399993896484 0.100000001490116 -262.700012207031";
ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

Anchor93.children = new MFNode();

Anchor93.children[0] = ProtoInstance94;

Transform53.children[13] = Anchor93;

let Anchor96 = browser.currentScene.createNode("Anchor");
Anchor96.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor96.description = "UKan2";
let ProtoInstance97 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance97.name = "r";
let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "pos";
fieldValue98.value = "458.700012207031 0.100000001490116 -262.700012207031";
ProtoInstance97.fieldValue = new MFNode();

ProtoInstance97.fieldValue[0] = fieldValue98;

Anchor96.children = new MFNode();

Anchor96.children[0] = ProtoInstance97;

Transform53.children[14] = Anchor96;

browser.currentScene.children[7] = Transform53;

