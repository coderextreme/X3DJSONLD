#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "rubikFurnace.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d";
head1.meta[3] = meta5;

head = head1;

ProtoDeclare ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "anyShape";
ProtoInterface ProtoInterface8 = createNode("ProtoInterface");
field field9 = createNode("field");
field9.accessType = "inputOutput";
field9.type = "SFVec3f";
field9.name = "xtranslation";
ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

field field10 = createNode("field");
field10.accessType = "inputOutput";
field10.type = "MFNode";
field10.name = "myShape";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.diffuseColor = new SFColor(new float[1,1,1]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

Sphere Sphere14 = createNode("Sphere");
Shape11.geometry = Sphere14;

field10.children = new MFNode();

field10.children[0] = Shape11;

ProtoInterface8.field[1] = field10;

ProtoDeclare7.protoInterface = ProtoInterface8;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Transform Transform16 = createNode("Transform");
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "xtranslation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

connect connect19 = createNode("connect");
connect19.nodeField = "children";
connect19.protoField = "myShape";
IS17.connect[1] = connect19;

Transform16.iS = IS17;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare7.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare7;

ProtoDeclare ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_1"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare20.name = "three";
ProtoInterface ProtoInterface21 = createNode("ProtoInterface");
field field22 = createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.name = "ytranslation";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

field field23 = createNode("field");
field23.accessType = "inputOutput";
field23.type = "MFNode";
field23.name = "myShape";
Shape Shape24 = createNode("Shape");
Shape24.DEF = "_1";
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[1,1,1]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Sphere Sphere27 = createNode("Sphere");
Shape24.geometry = Sphere27;

field23.children = new MFNode();

field23.children[0] = Shape24;

ProtoInterface21.field[1] = field23;

ProtoDeclare20.protoInterface = ProtoInterface21;

ProtoBody ProtoBody28 = createNode("ProtoBody");
Transform Transform29 = createNode("Transform");
ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "anyShape";
IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "myShape";
connect32.protoField = "myShape";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ProtoInstance30.iS = IS31;

Transform29.children = new MFNode();

Transform29.children[0] = ProtoInstance30;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "anyShape";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "xtranslation";
fieldValue34.value = "2 0 0";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "myShape";
connect36.protoField = "myShape";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

ProtoInstance33.iS = IS35;

Transform29.children[1] = ProtoInstance33;

ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "anyShape";
fieldValue fieldValue38 = createNode("fieldValue");
fieldValue38.name = "xtranslation";
fieldValue38.value = "-2 0 0";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "myShape";
connect40.protoField = "myShape";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

ProtoInstance37.iS = IS39;

Transform29.children[2] = ProtoInstance37;

IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "translation";
connect42.protoField = "ytranslation";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

Transform29.iS = IS41;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Transform29;

ProtoDeclare20.protoBody = ProtoBody28;

children[1] = ProtoDeclare20;

ProtoDeclare ProtoDeclare43 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_2"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="three"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare43.name = "nine";
ProtoInterface ProtoInterface44 = createNode("ProtoInterface");
field field45 = createNode("field");
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.name = "ztranslation";
ProtoInterface44.field = new MFNode();

ProtoInterface44.field[0] = field45;

field field46 = createNode("field");
field46.accessType = "inputOutput";
field46.type = "MFNode";
field46.name = "myShape";
Shape Shape47 = createNode("Shape");
Shape47.DEF = "_2";
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.diffuseColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

Sphere Sphere50 = createNode("Sphere");
Shape47.geometry = Sphere50;

field46.children = new MFNode();

field46.children[0] = Shape47;

ProtoInterface44.field[1] = field46;

ProtoDeclare43.protoInterface = ProtoInterface44;

ProtoBody ProtoBody51 = createNode("ProtoBody");
Transform Transform52 = createNode("Transform");
ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "three";
IS IS54 = createNode("IS");
connect connect55 = createNode("connect");
connect55.nodeField = "myShape";
connect55.protoField = "myShape";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

ProtoInstance53.iS = IS54;

Transform52.children = new MFNode();

Transform52.children[0] = ProtoInstance53;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "three";
fieldValue fieldValue57 = createNode("fieldValue");
fieldValue57.name = "ytranslation";
fieldValue57.value = "0 2 0";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

IS IS58 = createNode("IS");
connect connect59 = createNode("connect");
connect59.nodeField = "myShape";
connect59.protoField = "myShape";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

ProtoInstance56.iS = IS58;

Transform52.children[1] = ProtoInstance56;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "three";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "ytranslation";
fieldValue61.value = "0 -2 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

IS IS62 = createNode("IS");
connect connect63 = createNode("connect");
connect63.nodeField = "myShape";
connect63.protoField = "myShape";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

ProtoInstance60.iS = IS62;

Transform52.children[2] = ProtoInstance60;

IS IS64 = createNode("IS");
connect connect65 = createNode("connect");
connect65.nodeField = "translation";
connect65.protoField = "ztranslation";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

Transform52.iS = IS64;

ProtoBody51.children = new MFNode();

ProtoBody51.children[0] = Transform52;

ProtoDeclare43.protoBody = ProtoBody51;

children[2] = ProtoDeclare43;

ProtoDeclare ProtoDeclare66 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_3"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="nine"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare66.name = "twentyseven";
ProtoInterface ProtoInterface67 = createNode("ProtoInterface");
field field68 = createNode("field");
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.name = "ttranslation";
ProtoInterface67.field = new MFNode();

ProtoInterface67.field[0] = field68;

field field69 = createNode("field");
field69.accessType = "inputOutput";
field69.type = "MFNode";
field69.name = "myShape";
Shape Shape70 = createNode("Shape");
Shape70.DEF = "_3";
Appearance Appearance71 = createNode("Appearance");
Material Material72 = createNode("Material");
Material72.diffuseColor = new SFColor(new float[1,1,1]);
Appearance71.material = Material72;

Shape70.appearance = Appearance71;

Sphere Sphere73 = createNode("Sphere");
Shape70.geometry = Sphere73;

field69.children = new MFNode();

field69.children[0] = Shape70;

ProtoInterface67.field[1] = field69;

ProtoDeclare66.protoInterface = ProtoInterface67;

ProtoBody ProtoBody74 = createNode("ProtoBody");
Transform Transform75 = createNode("Transform");
ProtoInstance ProtoInstance76 = createNode("ProtoInstance");
ProtoInstance76.name = "nine";
IS IS77 = createNode("IS");
connect connect78 = createNode("connect");
connect78.nodeField = "myShape";
connect78.protoField = "myShape";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

ProtoInstance76.iS = IS77;

Transform75.children = new MFNode();

Transform75.children[0] = ProtoInstance76;

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

Transform75.children[1] = ProtoInstance79;

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

Transform75.children[2] = ProtoInstance83;

IS IS87 = createNode("IS");
connect connect88 = createNode("connect");
connect88.nodeField = "translation";
connect88.protoField = "ttranslation";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

Transform75.iS = IS87;

ProtoBody74.children = new MFNode();

ProtoBody74.children[0] = Transform75;

ProtoDeclare66.protoBody = ProtoBody74;

children[3] = ProtoDeclare66;

NavigationInfo NavigationInfo89 = createNode("NavigationInfo");
NavigationInfo89.type = new MFString(new java.lang.String["EXAMINE"]);
children[4] = NavigationInfo89;

Viewpoint Viewpoint90 = createNode("Viewpoint");
Viewpoint90.description = "Rubiks Cube on Fire";
Viewpoint90.position = new SFVec3f(new float[0,0,12]);
children[5] = Viewpoint90;

ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "twentyseven";
fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "myShape";
Shape Shape93 = createNode("Shape");
Shape93.DEF = "_4";
Appearance Appearance94 = createNode("Appearance");
Material Material95 = createNode("Material");
Material95.diffuseColor = new SFColor(new float[0,1,0]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

Box Box96 = createNode("Box");
Box96.size = new SFVec3f(new float[1,1,1]);
Shape93.geometry = Box96;

fieldValue92.children = new MFNode();

fieldValue92.children[0] = Shape93;

ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

children[6] = ProtoInstance91;

}
