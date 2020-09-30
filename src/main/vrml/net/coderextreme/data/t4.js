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

let ProtoDeclare5 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
<Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="5.10000002384186"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare5.name = "org";
let ProtoInterface6 = browser.currentScene.createNode("ProtoInterface");
let field7 = browser.currentScene.createNode("field");
field7.name = "posi";
field7.accessType = "initializeOnly";
field7.type = "SFVec3f";
field7.value = "0 0 0";
ProtoInterface6.field = new MFNode();

ProtoInterface6.field[0] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "col";
field8.accessType = "initializeOnly";
field8.type = "SFColor";
field8.value = "0 0 0";
ProtoInterface6.field[1] = field8;

ProtoDeclare5.protoInterface = ProtoInterface6;

let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
let Transform10 = browser.currentScene.createNode("Transform");
Transform10.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform10.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS11 = browser.currentScene.createNode("IS");
let connect12 = browser.currentScene.createNode("connect");
connect12.nodeField = "translation";
connect12.protoField = "posi";
IS11.connect = new MFNode();

IS11.connect[0] = connect12;

Transform10.iS = IS11;

let Shape13 = browser.currentScene.createNode("Shape");
Shape13.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,1,1]);
let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "emissiveColor";
connect17.protoField = "col";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Material15.iS = IS16;

Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Sphere18 = browser.currentScene.createNode("Sphere");
Sphere18.radius = 5.10000002384186;
Shape13.geometry = Sphere18;

Transform10.children = new MFNode();

Transform10.children[0] = Shape13;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Transform10;

ProtoDeclare5.protoBody = ProtoBody9;

browser.currentScene.children[3] = ProtoDeclare5;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "r";
let ProtoInterface20 = browser.currentScene.createNode("ProtoInterface");
let field21 = browser.currentScene.createNode("field");
field21.name = "pos";
field21.accessType = "initializeOnly";
field21.type = "SFVec3f";
field21.value = "0 0 0";
ProtoInterface20.field = new MFNode();

ProtoInterface20.field[0] = field21;

ProtoDeclare19.protoInterface = ProtoInterface20;

let ProtoBody22 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "org";
let fieldValue24 = browser.currentScene.createNode("fieldValue");
fieldValue24.name = "col";
fieldValue24.value = "0 0.300000011920929 1";
ProtoInstance23.fieldValue = new MFNode();

ProtoInstance23.fieldValue[0] = fieldValue24;

let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "posi";
connect26.protoField = "pos";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

ProtoInstance23.iS = IS25;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = ProtoInstance23;

ProtoDeclare19.protoBody = ProtoBody22;

browser.currentScene.children[4] = ProtoDeclare19;

let ProtoDeclare27 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.200000002980232"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare27.name = "n";
let ProtoInterface28 = browser.currentScene.createNode("ProtoInterface");
let field29 = browser.currentScene.createNode("field");
field29.name = "pos";
field29.accessType = "initializeOnly";
field29.type = "SFVec3f";
field29.value = "0 0 0";
ProtoInterface28.field = new MFNode();

ProtoInterface28.field[0] = field29;

ProtoDeclare27.protoInterface = ProtoInterface28;

let ProtoBody30 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "org";
let fieldValue32 = browser.currentScene.createNode("fieldValue");
fieldValue32.name = "col";
fieldValue32.value = "1 0 0.200000002980232";
ProtoInstance31.fieldValue = new MFNode();

ProtoInstance31.fieldValue[0] = fieldValue32;

let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "posi";
connect34.protoField = "pos";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

ProtoInstance31.iS = IS33;

ProtoBody30.children = new MFNode();

ProtoBody30.children[0] = ProtoInstance31;

ProtoDeclare27.protoBody = ProtoBody30;

browser.currentScene.children[5] = ProtoDeclare27;

let ProtoDeclare35 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.600000023841858 0 0.600000023841858"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare35.name = "i";
let ProtoInterface36 = browser.currentScene.createNode("ProtoInterface");
let field37 = browser.currentScene.createNode("field");
field37.name = "pos";
field37.accessType = "initializeOnly";
field37.type = "SFVec3f";
field37.value = "0 0 0";
ProtoInterface36.field = new MFNode();

ProtoInterface36.field[0] = field37;

ProtoDeclare35.protoInterface = ProtoInterface36;

let ProtoBody38 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance39 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance39.name = "org";
let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "col";
fieldValue40.value = "0.600000023841858 0 0.600000023841858";
ProtoInstance39.fieldValue = new MFNode();

ProtoInstance39.fieldValue[0] = fieldValue40;

let IS41 = browser.currentScene.createNode("IS");
let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "posi";
connect42.protoField = "pos";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

ProtoInstance39.iS = IS41;

ProtoBody38.children = new MFNode();

ProtoBody38.children[0] = ProtoInstance39;

ProtoDeclare35.protoBody = ProtoBody38;

browser.currentScene.children[6] = ProtoDeclare35;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[-468,0,315]);
Transform43.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform43.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Anchor44 = browser.currentScene.createNode("Anchor");
Anchor44.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor44.description = "High Peak Community Arts";
Anchor44.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor44.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "r";
let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "pos";
fieldValue46.value = "400 0.100000001490116 -385";
ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

Anchor44.children = new MFNode();

Anchor44.children[0] = ProtoInstance45;

Transform43.children = new MFNode();

Transform43.children[0] = Anchor44;

let Anchor47 = browser.currentScene.createNode("Anchor");
Anchor47.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor47.description = "People Express";
Anchor47.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor47.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance48 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance48.name = "i";
let fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "pos";
fieldValue49.value = "429.899993896484 0.100000001490116 -319.600006103516";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

Anchor47.children = new MFNode();

Anchor47.children[0] = ProtoInstance48;

Transform43.children[1] = Anchor47;

let Anchor50 = browser.currentScene.createNode("Anchor");
Anchor50.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor50.description = "QArts/Studios";
Anchor50.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "i";
let fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "pos";
fieldValue52.value = "430 0.100000001490116 -335";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

Anchor50.children = new MFNode();

Anchor50.children[0] = ProtoInstance51;

Transform43.children[2] = Anchor50;

let Anchor53 = browser.currentScene.createNode("Anchor");
Anchor53.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor53.description = "First Movement";
Anchor53.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor53.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "n";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "pos";
fieldValue55.value = "429.899993896484 0.100000001490116 -360.299987792969";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Anchor53.children = new MFNode();

Anchor53.children[0] = ProtoInstance54;

Transform43.children[3] = Anchor53;

let Anchor56 = browser.currentScene.createNode("Anchor");
Anchor56.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor56.description = "City Arts";
Anchor56.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor56.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "i";
let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "pos";
fieldValue58.value = "455.899993896484 0.100000001490116 -341.299987792969";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

Anchor56.children = new MFNode();

Anchor56.children[0] = ProtoInstance57;

Transform43.children[4] = Anchor56;

let Anchor59 = browser.currentScene.createNode("Anchor");
Anchor59.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor59.description = "Indigo Dance Group (Salamanda Tandem)";
Anchor59.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor59.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "r";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "pos";
fieldValue61.value = "456.100006103516 0.100000001490116 -341.5";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Anchor59.children = new MFNode();

Anchor59.children[0] = ProtoInstance60;

Transform43.children[5] = Anchor59;

let Anchor62 = browser.currentScene.createNode("Anchor");
Anchor62.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor62.description = "Watering Seeds";
Anchor62.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor62.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "r";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "pos";
fieldValue64.value = "454 0.100000001490116 -361.299987792969";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Anchor62.children = new MFNode();

Anchor62.children[0] = ProtoInstance63;

Transform43.children[6] = Anchor62;

let Anchor65 = browser.currentScene.createNode("Anchor");
Anchor65.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor65.description = "Fased In The Arts";
Anchor65.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor65.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "r";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "pos";
fieldValue67.value = "440 0.100000001490116 -350";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

Anchor65.children = new MFNode();

Anchor65.children[0] = ProtoInstance66;

Transform43.children[7] = Anchor65;

let Anchor68 = browser.currentScene.createNode("Anchor");
Anchor68.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor68.description = "27a Access Artspace";
Anchor68.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor68.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "n";
let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "pos";
fieldValue70.value = "458.899993896484 0.100000001490116 -304.299987792969";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

Anchor68.children = new MFNode();

Anchor68.children[0] = ProtoInstance69;

Transform43.children[8] = Anchor68;

let Anchor71 = browser.currentScene.createNode("Anchor");
Anchor71.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor71.description = "Bamboozle Theatre Company";
Anchor71.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor71.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "r";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "pos";
fieldValue73.value = "457.100006103516 0.100000001490116 -300.799987792969";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

Anchor71.children = new MFNode();

Anchor71.children[0] = ProtoInstance72;

Transform43.children[9] = Anchor71;

let Anchor74 = browser.currentScene.createNode("Anchor");
Anchor74.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor74.description = "Mantle Community Arts";
Anchor74.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor74.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "r";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "pos";
fieldValue76.value = "442.399993896484 0.100000001490116 -314.5";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

Anchor74.children = new MFNode();

Anchor74.children[0] = ProtoInstance75;

Transform43.children[10] = Anchor74;

let Anchor77 = browser.currentScene.createNode("Anchor");
Anchor77.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor77.description = "Artlink East";
Anchor77.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor77.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance78 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance78.name = "r";
let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "pos";
fieldValue79.value = "491.600006103516 0.100000001490116 -335.700012207031";
ProtoInstance78.fieldValue = new MFNode();

ProtoInstance78.fieldValue[0] = fieldValue79;

Anchor77.children = new MFNode();

Anchor77.children[0] = ProtoInstance78;

Transform43.children[11] = Anchor77;

let Anchor80 = browser.currentScene.createNode("Anchor");
Anchor80.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor80.description = "Creations";
Anchor80.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor80.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "r";
let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "pos";
fieldValue82.value = "467 0.100000001490116 -243.899993896484";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

Anchor80.children = new MFNode();

Anchor80.children[0] = ProtoInstance81;

Transform43.children[12] = Anchor80;

let Anchor83 = browser.currentScene.createNode("Anchor");
Anchor83.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor83.description = "New Perspectives";
Anchor83.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor83.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.name = "n";
let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "pos";
fieldValue85.value = "457.399993896484 0.100000001490116 -262.700012207031";
ProtoInstance84.fieldValue = new MFNode();

ProtoInstance84.fieldValue[0] = fieldValue85;

Anchor83.children = new MFNode();

Anchor83.children[0] = ProtoInstance84;

Transform43.children[13] = Anchor83;

let Anchor86 = browser.currentScene.createNode("Anchor");
Anchor86.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor86.description = "UKan2";
Anchor86.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor86.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "r";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "pos";
fieldValue88.value = "458.700012207031 0.100000001490116 -262.700012207031";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

Anchor86.children = new MFNode();

Anchor86.children[0] = ProtoInstance87;

Transform43.children[14] = Anchor86;

browser.currentScene.children[7] = Transform43;

