let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Networking";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "generator";
meta3.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "source";
meta4.content = "t1.wrl";
head1.meta[2] = meta4;

head = head1;

let NavigationInfo6 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo6.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo6.speed = 3;
NavigationInfo6.avatarSize = new MFFloat(new float[200,200,120]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo6;

let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.title = "Arts Mapper";
browser.currentScene.children[1] = WorldInfo7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.description = "looking North";
Viewpoint8.position = new SFVec3f(new float[0,60,110]);
Viewpoint8.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint8.fieldOfView = 0.785398125648499;
browser.currentScene.children[2] = Viewpoint8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "looking East";
Viewpoint9.position = new SFVec3f(new float[-140,30,0]);
Viewpoint9.orientation = new SFRotation(new float[0,0.400000005960464,0,-1.39999997615814]);
Viewpoint9.fieldOfView = 0.785398125648499;
browser.currentScene.children[3] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Overhead";
Viewpoint10.position = new SFVec3f(new float[0,150,0]);
Viewpoint10.orientation = new SFRotation(new float[1,0,0,-1.57000005245209]);
Viewpoint10.fieldOfView = 0.785398125648499;
browser.currentScene.children[4] = Viewpoint10;

let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.400000005960464"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="1.10000002384186"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "org";
let ProtoInterface12 = browser.currentScene.createNode("ProtoInterface");
let field13 = browser.currentScene.createNode("field");
field13.name = "posi";
field13.accessType = "initializeOnly";
field13.type = "SFVec3f";
field13.value = "0 0 0";
ProtoInterface12.field = new MFNode();

ProtoInterface12.field[0] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "col";
field14.accessType = "initializeOnly";
field14.type = "SFColor";
field14.value = "0 0 0";
ProtoInterface12.field[1] = field14;

ProtoDeclare11.protoInterface = ProtoInterface12;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Transform16 = browser.currentScene.createNode("Transform");
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.transparency = 0.400000005960464;
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
Sphere22.radius = 1.10000002384186;
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

browser.currentScene.children[5] = ProtoDeclare11;

let ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<fieldValue name="posi"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "r";
let ProtoInterface26 = browser.currentScene.createNode("ProtoInterface");
let field27 = browser.currentScene.createNode("field");
field27.name = "pos";
field27.accessType = "initializeOnly";
field27.type = "SFVec3f";
field27.value = "0 0 0";
ProtoInterface26.field = new MFNode();

ProtoInterface26.field[0] = field27;

ProtoDeclare25.protoInterface = ProtoInterface26;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "org";
let fieldValue30 = browser.currentScene.createNode("fieldValue");
fieldValue30.name = "col";
fieldValue30.value = "0 0.300000011920929 1";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

let fieldValue31 = browser.currentScene.createNode("fieldValue");
fieldValue31.name = "posi";
ProtoInstance29.fieldValue[1] = fieldValue31;

let IS32 = browser.currentScene.createNode("IS");
let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "posi";
connect33.protoField = "pos";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

ProtoInstance29.iS = IS32;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = ProtoInstance29;

ProtoDeclare25.protoBody = ProtoBody28;

browser.currentScene.children[6] = ProtoDeclare25;

let Anchor34 = browser.currentScene.createNode("Anchor");
Anchor34.url = new MFString(new java.lang.String["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor34.description = "High Peak Community Arts";
let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "r";
let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "pos";
fieldValue36.value = "400 0.100000001490116 -385";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

Anchor34.children = new MFNode();

Anchor34.children[0] = ProtoInstance35;

browser.currentScene.children[7] = Anchor34;

