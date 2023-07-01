#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "BoxEm.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/box.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "3 boxes";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.description = "Cubes on Fire";
Viewpoint9.position = new SFVec3f(new float[0,0,12]);
children[1] = Viewpoint9;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
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
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder containerField="geometry"></Cylinder>
<Appearance><Material diffuseColor="1 1 1"></Material>
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
Cylinder Cylinder28 = createNode("Cylinder");
Shape27.geometry = Cylinder28;

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

ProtoInstance ProtoInstance47 = createNode("ProtoInstance");
ProtoInstance47.name = "three";
ProtoInstance47.DEF = "threepi";
fieldValue fieldValue48 = createNode("fieldValue");
fieldValue48.name = "ytranslation";
fieldValue48.value = "0 0 0";
ProtoInstance47.fieldValue = new MFNode();

ProtoInstance47.fieldValue[0] = fieldValue48;

fieldValue fieldValue49 = createNode("fieldValue");
fieldValue49.name = "myShape";
Shape Shape50 = createNode("Shape");
Shape50.DEF = "box";
Box Box51 = createNode("Box");
Box51.size = new SFVec3f(new float[1,1,1]);
Shape50.geometry = Box51;

Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.diffuseColor = new SFColor(new float[0,1,0]);
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

fieldValue49.children = new MFNode();

fieldValue49.children[0] = Shape50;

ProtoInstance47.fieldValue[1] = fieldValue49;

children[4] = ProtoInstance47;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,2,0]);
Shape Shape55 = createNode("Shape");
Shape55.USE = "box";
Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

children[5] = Transform54;

}
