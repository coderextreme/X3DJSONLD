let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
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

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "looking East";
Viewpoint5.position = new SFVec3f(new float[-140,30,0]);
Viewpoint5.orientation = new SFRotation(new float[0,0.400000005960464,0,-1.39999997615814]);
Viewpoint5.fieldOfView = 0.785398125648499;
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.description = "Overhead";
Viewpoint6.position = new SFVec3f(new float[0,150,0]);
Viewpoint6.orientation = new SFRotation(new float[1,0,0,-1.57000005245209]);
Viewpoint6.fieldOfView = 0.785398125648499;
browser.currentScene.children[4] = Viewpoint6;

let ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.400000005960464"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.10000002384186"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "org";
let ProtoInterface8 = browser.currentScene.createNode("ProtoInterface");
let field9 = browser.currentScene.createNode("field");
field9.name = "posi";
field9.accessType = "initializeOnly";
field9.type = "SFVec3f";
field9.value = "0 0 0";
ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "col";
field10.accessType = "initializeOnly";
field10.type = "SFColor";
field10.value = "0 0 0";
ProtoInterface8.field[1] = field10;

ProtoDeclare7.protoInterface = ProtoInterface8;

let ProtoBody11 = browser.currentScene.createNode("ProtoBody");
let Transform12 = browser.currentScene.createNode("Transform");
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.transparency = 0.400000005960464;
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
Sphere18.radius = 1.10000002384186;
Shape13.geometry = Sphere18;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

let IS19 = browser.currentScene.createNode("IS");
let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "translation";
connect20.protoField = "posi";
IS19.connect = new MFNode();

IS19.connect[0] = connect20;

Transform12.iS = IS19;

ProtoBody11.children = new MFNode();

ProtoBody11.children[0] = Transform12;

ProtoDeclare7.protoBody = ProtoBody11;

browser.currentScene.children[5] = ProtoDeclare7;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<fieldValue name="posi"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "r";
let ProtoInterface22 = browser.currentScene.createNode("ProtoInterface");
let field23 = browser.currentScene.createNode("field");
field23.name = "pos";
field23.accessType = "initializeOnly";
field23.type = "SFVec3f";
field23.value = "0 0 0";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

ProtoDeclare21.protoInterface = ProtoInterface22;

let ProtoBody24 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "org";
let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "col";
fieldValue26.value = "0 0.300000011920929 1";
ProtoInstance25.fieldValue = new MFNode();

ProtoInstance25.fieldValue[0] = fieldValue26;

let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "posi";
ProtoInstance25.fieldValue[1] = fieldValue27;

let IS28 = browser.currentScene.createNode("IS");
let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "posi";
connect29.protoField = "pos";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

ProtoInstance25.iS = IS28;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = ProtoInstance25;

ProtoDeclare21.protoBody = ProtoBody24;

browser.currentScene.children[6] = ProtoDeclare21;

let Anchor30 = browser.currentScene.createNode("Anchor");
Anchor30.url = new MFString(new java.lang.String["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor30.description = "High Peak Community Arts";
let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "r";
let fieldValue32 = browser.currentScene.createNode("fieldValue");
fieldValue32.name = "pos";
fieldValue32.value = "400 0.100000001490116 -385";
ProtoInstance31.fieldValue = new MFNode();

ProtoInstance31.fieldValue[0] = fieldValue32;

Anchor30.children = new MFNode();

Anchor30.children[0] = ProtoInstance31;

browser.currentScene.children[7] = Anchor30;

