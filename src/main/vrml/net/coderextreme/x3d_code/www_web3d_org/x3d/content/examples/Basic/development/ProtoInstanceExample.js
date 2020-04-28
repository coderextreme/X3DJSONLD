let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ProtoInstanceExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewShape" ><ProtoInterface><field name="InitialAppearance" accessType="initializeOnly" type="SFNode"><Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</field>
<field name="newHeight" accessType="initializeOnly" type="SFFloat" value="3"></field>
<field name="newRadius" accessType="initializeOnly" type="SFFloat" value="0.5"></field>
</ProtoInterface>
<ProtoBody><Shape DEF="ContainedShape"><IS><connect nodeField="appearance" protoField="InitialAppearance"></connect>
</IS>
<Cylinder containerField="geometry" DEF="ContainedCylinder"><IS><connect nodeField="height" protoField="newHeight"></connect>
<connect nodeField="radius" protoField="newRadius"></connect>
</IS>
</Cylinder>
</Shape>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "NewShape";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "InitialAppearance";
field5.accessType = "initializeOnly";
field5.type = "SFNode";
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[1,0,0]);
Appearance6.material = Material7;

field5.children = new MFNode();

field5.children[0] = Appearance6;

ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field8 = browser.currentScene.createNode("field");
field8.name = "newHeight";
field8.accessType = "initializeOnly";
field8.type = "SFFloat";
field8.value = "3";
ProtoInterface4.field[1] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "newRadius";
field9.accessType = "initializeOnly";
field9.type = "SFFloat";
field9.value = "0.5";
ProtoInterface4.field[2] = field9;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "ContainedShape";
let IS12 = browser.currentScene.createNode("IS");
let connect13 = browser.currentScene.createNode("connect");
connect13.nodeField = "appearance";
connect13.protoField = "InitialAppearance";
IS12.connect = new MFNode();

IS12.connect[0] = connect13;

Shape11.iS = IS12;

let Cylinder14 = browser.currentScene.createNode("Cylinder");
Cylinder14.DEF = "ContainedCylinder";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "height";
connect16.protoField = "newHeight";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "radius";
connect17.protoField = "newRadius";
IS15.connect[1] = connect17;

Cylinder14.iS = IS15;

Shape11.geometry = Cylinder14;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = Shape11;

ProtoDeclare3.protoBody = ProtoBody10;

browser.currentScene.children[1] = ProtoDeclare3;

let Billboard18 = browser.currentScene.createNode("Billboard");
let ProtoInstance19 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance19.name = "NewShape";
let fieldValue20 = browser.currentScene.createNode("fieldValue");
fieldValue20.name = "newHeight";
fieldValue20.value = "3";
ProtoInstance19.fieldValue = new MFNode();

ProtoInstance19.fieldValue[0] = fieldValue20;

let fieldValue21 = browser.currentScene.createNode("fieldValue");
fieldValue21.name = "newRadius";
fieldValue21.value = "4";
ProtoInstance19.fieldValue[1] = fieldValue21;

let fieldValue22 = browser.currentScene.createNode("fieldValue");
fieldValue22.name = "InitialAppearance";
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.DEF = "CylinderMaterial";
Material24.diffuseColor = new SFColor(new float[0,1,0]);
Appearance23.material = Material24;

fieldValue22.children = new MFNode();

fieldValue22.children[0] = Appearance23;

ProtoInstance19.fieldValue[2] = fieldValue22;

Billboard18.children = new MFNode();

Billboard18.children[0] = ProtoInstance19;

browser.currentScene.children[2] = Billboard18;

