#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "asteroids.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "asteroids";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "anyShape";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "myShape";
field10.accessType = "inputOutput";
field10.type = "MFNode";
Shape Shape11 = createNode("Shape");
Sphere Sphere12 = createNode("Sphere");
Shape11.geometry = Sphere12;

field10.children = new MFNode();

field10.children[0] = Shape11;

ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Transform Transform14 = createNode("Transform");
IS IS15 = createNode("IS");
connect connect16 = createNode("connect");
connect16.nodeField = "children";
connect16.protoField = "myShape";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

ProtoInstance ProtoInstance17 = createNode("ProtoInstance");
ProtoInstance17.name = "anyShape";
children[1] = ProtoInstance17;

}
