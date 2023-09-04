#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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

head = head1;

ProtoDeclare ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
</Shape>
<IS><connect nodeField="translation" protoField="xtranslation"></connect>
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
field10.type = "SFNode";
field10.name = "myShape";
Sphere Sphere11 = createNode("Sphere");
field10.children = new MFNode();

field10.children[0] = Sphere11;

ProtoInterface8.field[1] = field10;

ProtoDeclare7.protoInterface = ProtoInterface8;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Transform Transform13 = createNode("Transform");
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.diffuseColor = new SFColor(new float[1,1,1]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "geometry";
connect18.protoField = "myShape";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Shape14.iS = IS17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

IS IS19 = createNode("IS");
connect connect20 = createNode("connect");
connect20.nodeField = "translation";
connect20.protoField = "xtranslation";
IS19.connect = new MFNode();

IS19.connect[0] = connect20;

Transform13.iS = IS19;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

ProtoDeclare7.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare7;

ProtoDeclare ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_1"></Sphere>
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
ProtoDeclare21.name = "three";
ProtoInterface ProtoInterface22 = createNode("ProtoInterface");
field field23 = createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.name = "ytranslation";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

field field24 = createNode("field");
field24.accessType = "inputOutput";
field24.type = "SFNode";
field24.name = "myShape";
Sphere Sphere25 = createNode("Sphere");
Sphere25.DEF = "_1";
field24.children = new MFNode();

field24.children[0] = Sphere25;

ProtoInterface22.field[1] = field24;

ProtoDeclare21.protoInterface = ProtoInterface22;

ProtoBody ProtoBody26 = createNode("ProtoBody");
Transform Transform27 = createNode("Transform");
ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "anyShape";
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "myShape";
connect30.protoField = "myShape";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

ProtoInstance28.iS = IS29;

Transform27.children = new MFNode();

Transform27.children[0] = ProtoInstance28;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "anyShape";
fieldValue fieldValue32 = createNode("fieldValue");
fieldValue32.name = "xtranslation";
fieldValue32.value = "2 0 0";
ProtoInstance31.fieldValue = new MFNode();

ProtoInstance31.fieldValue[0] = fieldValue32;

IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "myShape";
connect34.protoField = "myShape";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

ProtoInstance31.iS = IS33;

Transform27.children[1] = ProtoInstance31;

ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "anyShape";
fieldValue fieldValue36 = createNode("fieldValue");
fieldValue36.name = "xtranslation";
fieldValue36.value = "-2 0 0";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

IS IS37 = createNode("IS");
connect connect38 = createNode("connect");
connect38.nodeField = "myShape";
connect38.protoField = "myShape";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

ProtoInstance35.iS = IS37;

Transform27.children[2] = ProtoInstance35;

IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "translation";
connect40.protoField = "ytranslation";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

Transform27.iS = IS39;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Transform27;

ProtoDeclare21.protoBody = ProtoBody26;

children[1] = ProtoDeclare21;

ProtoDeclare ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_2"></Sphere>
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
ProtoDeclare41.name = "nine";
ProtoInterface ProtoInterface42 = createNode("ProtoInterface");
field field43 = createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.name = "ztranslation";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

field field44 = createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFNode";
field44.name = "myShape";
Sphere Sphere45 = createNode("Sphere");
Sphere45.DEF = "_2";
field44.children = new MFNode();

field44.children[0] = Sphere45;

ProtoInterface42.field[1] = field44;

ProtoDeclare41.protoInterface = ProtoInterface42;

ProtoBody ProtoBody46 = createNode("ProtoBody");
Transform Transform47 = createNode("Transform");
ProtoInstance ProtoInstance48 = createNode("ProtoInstance");
ProtoInstance48.name = "three";
IS IS49 = createNode("IS");
connect connect50 = createNode("connect");
connect50.nodeField = "myShape";
connect50.protoField = "myShape";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

ProtoInstance48.iS = IS49;

Transform47.children = new MFNode();

Transform47.children[0] = ProtoInstance48;

ProtoInstance ProtoInstance51 = createNode("ProtoInstance");
ProtoInstance51.name = "three";
fieldValue fieldValue52 = createNode("fieldValue");
fieldValue52.name = "ytranslation";
fieldValue52.value = "0 2 0";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

IS IS53 = createNode("IS");
connect connect54 = createNode("connect");
connect54.nodeField = "myShape";
connect54.protoField = "myShape";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

ProtoInstance51.iS = IS53;

Transform47.children[1] = ProtoInstance51;

ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.name = "three";
fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "ytranslation";
fieldValue56.value = "0 -2 0";
ProtoInstance55.fieldValue = new MFNode();

ProtoInstance55.fieldValue[0] = fieldValue56;

IS IS57 = createNode("IS");
connect connect58 = createNode("connect");
connect58.nodeField = "myShape";
connect58.protoField = "myShape";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

ProtoInstance55.iS = IS57;

Transform47.children[2] = ProtoInstance55;

IS IS59 = createNode("IS");
connect connect60 = createNode("connect");
connect60.nodeField = "translation";
connect60.protoField = "ztranslation";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

Transform47.iS = IS59;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Transform47;

ProtoDeclare41.protoBody = ProtoBody46;

children[2] = ProtoDeclare41;

ProtoDeclare ProtoDeclare61 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_3"></Sphere>
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
ProtoDeclare61.name = "twentyseven";
ProtoInterface ProtoInterface62 = createNode("ProtoInterface");
field field63 = createNode("field");
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.name = "ttranslation";
ProtoInterface62.field = new MFNode();

ProtoInterface62.field[0] = field63;

field field64 = createNode("field");
field64.accessType = "inputOutput";
field64.type = "SFNode";
field64.name = "myShape";
Sphere Sphere65 = createNode("Sphere");
Sphere65.DEF = "_3";
field64.children = new MFNode();

field64.children[0] = Sphere65;

ProtoInterface62.field[1] = field64;

ProtoDeclare61.protoInterface = ProtoInterface62;

ProtoBody ProtoBody66 = createNode("ProtoBody");
Transform Transform67 = createNode("Transform");
ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "nine";
IS IS69 = createNode("IS");
connect connect70 = createNode("connect");
connect70.nodeField = "myShape";
connect70.protoField = "myShape";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

ProtoInstance68.iS = IS69;

Transform67.children = new MFNode();

Transform67.children[0] = ProtoInstance68;

ProtoInstance ProtoInstance71 = createNode("ProtoInstance");
ProtoInstance71.name = "nine";
fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "ztranslation";
fieldValue72.value = "0 0 2";
ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

IS IS73 = createNode("IS");
connect connect74 = createNode("connect");
connect74.nodeField = "myShape";
connect74.protoField = "myShape";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

ProtoInstance71.iS = IS73;

Transform67.children[1] = ProtoInstance71;

ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "nine";
fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "ztranslation";
fieldValue76.value = "0 0 -2";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

IS IS77 = createNode("IS");
connect connect78 = createNode("connect");
connect78.nodeField = "myShape";
connect78.protoField = "myShape";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

ProtoInstance75.iS = IS77;

Transform67.children[2] = ProtoInstance75;

IS IS79 = createNode("IS");
connect connect80 = createNode("connect");
connect80.nodeField = "translation";
connect80.protoField = "ttranslation";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

Transform67.iS = IS79;

ProtoBody66.children = new MFNode();

ProtoBody66.children[0] = Transform67;

ProtoDeclare61.protoBody = ProtoBody66;

children[3] = ProtoDeclare61;

NavigationInfo NavigationInfo81 = createNode("NavigationInfo");
NavigationInfo81.type = new MFString(new java.lang.String["EXAMINE"]);
children[4] = NavigationInfo81;

Viewpoint Viewpoint82 = createNode("Viewpoint");
Viewpoint82.description = "Rubiks Cube on Fire";
Viewpoint82.position = new SFVec3f(new float[0,0,12]);
children[5] = Viewpoint82;

ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "twentyseven";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "myShape";
Box Box85 = createNode("Box");
Box85.DEF = "_4";
Box85.size = new SFVec3f(new float[1,1,1]);
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Box85;

ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

children[6] = ProtoInstance83;

}
