#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "rubikOnFire.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a white rubik cube";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.description = "Rubiks Cube on Fire";
Viewpoint9.position = new SFVec3f(new float[0,0,12]);
children[1] = Viewpoint9;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "anyShape";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
field field12 = createNode("field");
field12.name = "xtranslation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

field field13 = createNode("field");
field13.name = "myShape";
field13.accessType = "inputOutput";
field13.type = "SFNode";
Sphere Sphere14 = createNode("Sphere");
field13.children = new MFNode();

field13.children[0] = Sphere14;

ProtoInterface11.field[1] = field13;

ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Transform Transform16 = createNode("Transform");
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "xtranslation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Transform16.iS = IS17;

Shape Shape19 = createNode("Shape");
IS IS20 = createNode("IS");
connect connect21 = createNode("connect");
connect21.nodeField = "geometry";
connect21.protoField = "myShape";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

Shape19.iS = IS20;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[1,1,1]);
Appearance22.material = Material23;

Shape19.appearance = Appearance22;

Transform16.child = new undefined();

Transform16.child[0] = Shape19;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare10.protoBody = ProtoBody15;

children[2] = ProtoDeclare10;

ProtoDeclare ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "three";
ProtoInterface ProtoInterface25 = createNode("ProtoInterface");
field field26 = createNode("field");
field26.name = "ytranslation";
field26.accessType = "inputOutput";
field26.type = "SFVec3f";
field26.value = "0 0 0";
ProtoInterface25.field = new MFNode();

ProtoInterface25.field[0] = field26;

field field27 = createNode("field");
field27.name = "myShape";
field27.accessType = "inputOutput";
field27.type = "SFNode";
Sphere Sphere28 = createNode("Sphere");
field27.children = new MFNode();

field27.children[0] = Sphere28;

ProtoInterface25.field[1] = field27;

ProtoDeclare24.protoInterface = ProtoInterface25;

ProtoBody ProtoBody29 = createNode("ProtoBody");
Transform Transform30 = createNode("Transform");
IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "translation";
connect32.protoField = "ytranslation";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

Transform30.iS = IS31;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "anyShape";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "xtranslation";
fieldValue34.value = "0 0 0";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "myShape";
connect36.protoField = "myShape";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

ProtoInstance33.iS = IS35;

Transform30.children = new MFNode();

Transform30.children[0] = ProtoInstance33;

ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "anyShape";
fieldValue fieldValue38 = createNode("fieldValue");
fieldValue38.name = "xtranslation";
fieldValue38.value = "2 0 0";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "myShape";
connect40.protoField = "myShape";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

ProtoInstance37.iS = IS39;

Transform30.children[1] = ProtoInstance37;

ProtoInstance ProtoInstance41 = createNode("ProtoInstance");
ProtoInstance41.name = "anyShape";
fieldValue fieldValue42 = createNode("fieldValue");
fieldValue42.name = "xtranslation";
fieldValue42.value = "-2 0 0";
ProtoInstance41.fieldValue = new MFNode();

ProtoInstance41.fieldValue[0] = fieldValue42;

IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "myShape";
connect44.protoField = "myShape";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

ProtoInstance41.iS = IS43;

Transform30.children[2] = ProtoInstance41;

ProtoBody29.children = new MFNode();

ProtoBody29.children[0] = Transform30;

ProtoDeclare24.protoBody = ProtoBody29;

children[3] = ProtoDeclare24;

ProtoDeclare ProtoDeclare45 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare45.name = "nine";
ProtoInterface ProtoInterface46 = createNode("ProtoInterface");
field field47 = createNode("field");
field47.name = "ztranslation";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "0 0 0";
ProtoInterface46.field = new MFNode();

ProtoInterface46.field[0] = field47;

field field48 = createNode("field");
field48.name = "myShape";
field48.accessType = "inputOutput";
field48.type = "SFNode";
Sphere Sphere49 = createNode("Sphere");
field48.children = new MFNode();

field48.children[0] = Sphere49;

ProtoInterface46.field[1] = field48;

ProtoDeclare45.protoInterface = ProtoInterface46;

ProtoBody ProtoBody50 = createNode("ProtoBody");
Transform Transform51 = createNode("Transform");
IS IS52 = createNode("IS");
connect connect53 = createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ztranslation";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Transform51.iS = IS52;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "three";
fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "ytranslation";
fieldValue55.value = "0 0 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

IS IS56 = createNode("IS");
connect connect57 = createNode("connect");
connect57.nodeField = "myShape";
connect57.protoField = "myShape";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

ProtoInstance54.iS = IS56;

Transform51.children = new MFNode();

Transform51.children[0] = ProtoInstance54;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "three";
fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "ytranslation";
fieldValue59.value = "0 2 0";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

IS IS60 = createNode("IS");
connect connect61 = createNode("connect");
connect61.nodeField = "myShape";
connect61.protoField = "myShape";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

ProtoInstance58.iS = IS60;

Transform51.children[1] = ProtoInstance58;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "three";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "ytranslation";
fieldValue63.value = "0 -2 0";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

IS IS64 = createNode("IS");
connect connect65 = createNode("connect");
connect65.nodeField = "myShape";
connect65.protoField = "myShape";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

ProtoInstance62.iS = IS64;

Transform51.children[2] = ProtoInstance62;

ProtoBody50.children = new MFNode();

ProtoBody50.children[0] = Transform51;

ProtoDeclare45.protoBody = ProtoBody50;

children[4] = ProtoDeclare45;

ProtoDeclare ProtoDeclare66 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare66.name = "twentyseven";
ProtoInterface ProtoInterface67 = createNode("ProtoInterface");
field field68 = createNode("field");
field68.name = "ttranslation";
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.value = "0 0 0";
ProtoInterface67.field = new MFNode();

ProtoInterface67.field[0] = field68;

field field69 = createNode("field");
field69.name = "myShape";
field69.accessType = "inputOutput";
field69.type = "SFNode";
Sphere Sphere70 = createNode("Sphere");
field69.children = new MFNode();

field69.children[0] = Sphere70;

ProtoInterface67.field[1] = field69;

ProtoDeclare66.protoInterface = ProtoInterface67;

ProtoBody ProtoBody71 = createNode("ProtoBody");
Transform Transform72 = createNode("Transform");
IS IS73 = createNode("IS");
connect connect74 = createNode("connect");
connect74.nodeField = "translation";
connect74.protoField = "ttranslation";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

Transform72.iS = IS73;

ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "nine";
fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "ztranslation";
fieldValue76.value = "0 0 0";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

IS IS77 = createNode("IS");
connect connect78 = createNode("connect");
connect78.nodeField = "myShape";
connect78.protoField = "myShape";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

ProtoInstance75.iS = IS77;

Transform72.children = new MFNode();

Transform72.children[0] = ProtoInstance75;

ProtoInstance ProtoInstance79 = createNode("ProtoInstance");
ProtoInstance79.name = "nine";
fieldValue fieldValue80 = createNode("fieldValue");
fieldValue80.name = "ztranslation";
fieldValue80.value = "0 0 2";
ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

IS IS81 = createNode("IS");
connect connect82 = createNode("connect");
connect82.nodeField = "myShape";
connect82.protoField = "myShape";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

ProtoInstance79.iS = IS81;

Transform72.children[1] = ProtoInstance79;

ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "nine";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "ztranslation";
fieldValue84.value = "0 0 -2";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "myShape";
connect86.protoField = "myShape";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

ProtoInstance83.iS = IS85;

Transform72.children[2] = ProtoInstance83;

ProtoBody71.children = new MFNode();

ProtoBody71.children[0] = Transform72;

ProtoDeclare66.protoBody = ProtoBody71;

children[5] = ProtoDeclare66;

ProtoInstance ProtoInstance87 = createNode("ProtoInstance");
ProtoInstance87.name = "twentyseven";
fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "ttranslation";
fieldValue88.value = "0 0 0";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "myShape";
Box Box90 = createNode("Box");
Box90.size = new SFVec3f(new float[1,1,1]);
fieldValue89.children = new MFNode();

fieldValue89.children[0] = Box90;

ProtoInstance87.fieldValue[1] = fieldValue89;

children[6] = ProtoInstance87;

}
