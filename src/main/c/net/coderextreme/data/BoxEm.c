#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d";
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
<Cylinder></Cylinder>
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

Cylinder Cylinder27 = createNode("Cylinder");
Shape24.geometry = Cylinder27;

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

NavigationInfo NavigationInfo43 = createNode("NavigationInfo");
NavigationInfo43.type = new MFString(new java.lang.String["EXAMINE"]);
children[2] = NavigationInfo43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "Cubes on Fire";
Viewpoint44.position = new SFVec3f(new float[0,0,12]);
children[3] = Viewpoint44;

ProtoInstance ProtoInstance45 = createNode("ProtoInstance");
ProtoInstance45.DEF = "threepi";
ProtoInstance45.name = "three";
fieldValue fieldValue46 = createNode("fieldValue");
fieldValue46.name = "myShape";
Shape Shape47 = createNode("Shape");
Shape47.DEF = "box";
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

Box Box50 = createNode("Box");
Box50.size = new SFVec3f(new float[1,1,1]);
Shape47.geometry = Box50;

fieldValue46.children = new MFNode();

fieldValue46.children[0] = Shape47;

ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

children[4] = ProtoInstance45;

Transform Transform51 = createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,2,0]);
Shape Shape52 = createNode("Shape");
Shape52.USE = "box";
Transform51.child = new undefined();

Transform51.child[0] = Shape52;

children[5] = Transform51;

}
