#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a green rubik cube";
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
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
</IS>
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
field13.type = "MFNode";
Shape Shape14 = createNode("Shape");
Sphere Sphere15 = createNode("Sphere");
Shape14.geometry = Sphere15;

Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.diffuseColor = new SFColor(new float[1,1,1]);
Appearance16.material = Material17;

Shape14.appearance = Appearance16;

field13.children = new MFNode();

field13.children[0] = Shape14;

ProtoInterface11.field[1] = field13;

ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody18 = createNode("ProtoBody");
Transform Transform19 = createNode("Transform");
IS IS20 = createNode("IS");
connect connect21 = createNode("connect");
connect21.nodeField = "translation";
connect21.protoField = "xtranslation";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

connect connect22 = createNode("connect");
connect22.nodeField = "children";
connect22.protoField = "myShape";
IS20.connect[1] = connect22;

Transform19.iS = IS20;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Transform19;

ProtoDeclare10.protoBody = ProtoBody18;

children[2] = ProtoDeclare10;

ProtoDeclare ProtoDeclare23 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare23.name = "three";
ProtoInterface ProtoInterface24 = createNode("ProtoInterface");
field field25 = createNode("field");
field25.name = "ytranslation";
field25.accessType = "inputOutput";
field25.type = "SFVec3f";
field25.value = "0 0 0";
ProtoInterface24.field = new MFNode();

ProtoInterface24.field[0] = field25;

field field26 = createNode("field");
field26.name = "myShape";
field26.accessType = "inputOutput";
field26.type = "MFNode";
Shape Shape27 = createNode("Shape");
Sphere Sphere28 = createNode("Sphere");
Shape27.geometry = Sphere28;

Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,1,1]);
Appearance29.material = Material30;

Shape27.appearance = Appearance29;

field26.children = new MFNode();

field26.children[0] = Shape27;

ProtoInterface24.field[1] = field26;

ProtoDeclare23.protoInterface = ProtoInterface24;

ProtoBody ProtoBody31 = createNode("ProtoBody");
Transform Transform32 = createNode("Transform");
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "ytranslation";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

Transform32.iS = IS33;

ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "anyShape";
fieldValue fieldValue36 = createNode("fieldValue");
fieldValue36.name = "xtranslation";
fieldValue36.value = "0 0 0";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

IS IS37 = createNode("IS");
connect connect38 = createNode("connect");
connect38.nodeField = "myShape";
connect38.protoField = "myShape";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

ProtoInstance35.iS = IS37;

Transform32.children = new MFNode();

Transform32.children[0] = ProtoInstance35;

ProtoInstance ProtoInstance39 = createNode("ProtoInstance");
ProtoInstance39.name = "anyShape";
fieldValue fieldValue40 = createNode("fieldValue");
fieldValue40.name = "xtranslation";
fieldValue40.value = "2 0 0";
ProtoInstance39.fieldValue = new MFNode();

ProtoInstance39.fieldValue[0] = fieldValue40;

IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "myShape";
connect42.protoField = "myShape";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

ProtoInstance39.iS = IS41;

Transform32.children[1] = ProtoInstance39;

ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "anyShape";
fieldValue fieldValue44 = createNode("fieldValue");
fieldValue44.name = "xtranslation";
fieldValue44.value = "-2 0 0";
ProtoInstance43.fieldValue = new MFNode();

ProtoInstance43.fieldValue[0] = fieldValue44;

IS IS45 = createNode("IS");
connect connect46 = createNode("connect");
connect46.nodeField = "myShape";
connect46.protoField = "myShape";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

ProtoInstance43.iS = IS45;

Transform32.children[2] = ProtoInstance43;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Transform32;

ProtoDeclare23.protoBody = ProtoBody31;

children[3] = ProtoDeclare23;

ProtoDeclare ProtoDeclare47 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare47.name = "nine";
ProtoInterface ProtoInterface48 = createNode("ProtoInterface");
field field49 = createNode("field");
field49.name = "ztranslation";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
ProtoInterface48.field = new MFNode();

ProtoInterface48.field[0] = field49;

field field50 = createNode("field");
field50.name = "myShape";
field50.accessType = "inputOutput";
field50.type = "MFNode";
Shape Shape51 = createNode("Shape");
Sphere Sphere52 = createNode("Sphere");
Shape51.geometry = Sphere52;

Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,1,1]);
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

field50.children = new MFNode();

field50.children[0] = Shape51;

ProtoInterface48.field[1] = field50;

ProtoDeclare47.protoInterface = ProtoInterface48;

ProtoBody ProtoBody55 = createNode("ProtoBody");
Transform Transform56 = createNode("Transform");
IS IS57 = createNode("IS");
connect connect58 = createNode("connect");
connect58.nodeField = "translation";
connect58.protoField = "ztranslation";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

Transform56.iS = IS57;

ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "three";
fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "ytranslation";
fieldValue60.value = "0 0 0";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

IS IS61 = createNode("IS");
connect connect62 = createNode("connect");
connect62.nodeField = "myShape";
connect62.protoField = "myShape";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

ProtoInstance59.iS = IS61;

Transform56.children = new MFNode();

Transform56.children[0] = ProtoInstance59;

ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "three";
fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "ytranslation";
fieldValue64.value = "0 2 0";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

IS IS65 = createNode("IS");
connect connect66 = createNode("connect");
connect66.nodeField = "myShape";
connect66.protoField = "myShape";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

ProtoInstance63.iS = IS65;

Transform56.children[1] = ProtoInstance63;

ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "three";
fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "ytranslation";
fieldValue68.value = "0 -2 0";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

IS IS69 = createNode("IS");
connect connect70 = createNode("connect");
connect70.nodeField = "myShape";
connect70.protoField = "myShape";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

ProtoInstance67.iS = IS69;

Transform56.children[2] = ProtoInstance67;

ProtoBody55.children = new MFNode();

ProtoBody55.children[0] = Transform56;

ProtoDeclare47.protoBody = ProtoBody55;

children[4] = ProtoDeclare47;

ProtoDeclare ProtoDeclare71 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare71.name = "twentyseven";
ProtoInterface ProtoInterface72 = createNode("ProtoInterface");
field field73 = createNode("field");
field73.name = "ttranslation";
field73.accessType = "inputOutput";
field73.type = "SFVec3f";
field73.value = "0 0 0";
ProtoInterface72.field = new MFNode();

ProtoInterface72.field[0] = field73;

field field74 = createNode("field");
field74.name = "myShape";
field74.accessType = "inputOutput";
field74.type = "MFNode";
Shape Shape75 = createNode("Shape");
Sphere Sphere76 = createNode("Sphere");
Shape75.geometry = Sphere76;

Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.diffuseColor = new SFColor(new float[1,1,1]);
Appearance77.material = Material78;

Shape75.appearance = Appearance77;

field74.children = new MFNode();

field74.children[0] = Shape75;

ProtoInterface72.field[1] = field74;

ProtoDeclare71.protoInterface = ProtoInterface72;

ProtoBody ProtoBody79 = createNode("ProtoBody");
Transform Transform80 = createNode("Transform");
IS IS81 = createNode("IS");
connect connect82 = createNode("connect");
connect82.nodeField = "translation";
connect82.protoField = "ttranslation";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

Transform80.iS = IS81;

ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "nine";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "ztranslation";
fieldValue84.value = "0 0 0";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "myShape";
connect86.protoField = "myShape";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

ProtoInstance83.iS = IS85;

Transform80.children = new MFNode();

Transform80.children[0] = ProtoInstance83;

ProtoInstance ProtoInstance87 = createNode("ProtoInstance");
ProtoInstance87.name = "nine";
fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "ztranslation";
fieldValue88.value = "0 0 2";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

IS IS89 = createNode("IS");
connect connect90 = createNode("connect");
connect90.nodeField = "myShape";
connect90.protoField = "myShape";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

ProtoInstance87.iS = IS89;

Transform80.children[1] = ProtoInstance87;

ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "nine";
fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "ztranslation";
fieldValue92.value = "0 0 -2";
ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

IS IS93 = createNode("IS");
connect connect94 = createNode("connect");
connect94.nodeField = "myShape";
connect94.protoField = "myShape";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

ProtoInstance91.iS = IS93;

Transform80.children[2] = ProtoInstance91;

ProtoBody79.children = new MFNode();

ProtoBody79.children[0] = Transform80;

ProtoDeclare71.protoBody = ProtoBody79;

children[5] = ProtoDeclare71;

ProtoInstance ProtoInstance95 = createNode("ProtoInstance");
ProtoInstance95.name = "twentyseven";
fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "ttranslation";
fieldValue96.value = "0 0 0";
ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

fieldValue fieldValue97 = createNode("fieldValue");
fieldValue97.name = "myShape";
Shape Shape98 = createNode("Shape");
Box Box99 = createNode("Box");
Box99.size = new SFVec3f(new float[1,1,1]);
Shape98.geometry = Box99;

Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.diffuseColor = new SFColor(new float[0,1,0]);
Appearance100.material = Material101;

Shape98.appearance = Appearance100;

fieldValue97.children = new MFNode();

fieldValue97.children[0] = Shape98;

ProtoInstance95.fieldValue[1] = fieldValue97;

children[6] = ProtoInstance95;

}
