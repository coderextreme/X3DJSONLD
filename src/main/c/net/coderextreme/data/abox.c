#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "abox.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d";
head1.meta[3] = meta5;

head = head1;

ProtoDeclare ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "anyShape";
ProtoInterface ProtoInterface8 = createNode("ProtoInterface");
field field9 = createNode("field");
field9.accessType = "inputOutput";
field9.type = "MFNode";
field9.name = "myShape";
Shape Shape10 = createNode("Shape");
Sphere Sphere11 = createNode("Sphere");
Shape10.geometry = Sphere11;

field9.children = new MFNode();

field9.children[0] = Shape10;

ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

ProtoDeclare7.protoInterface = ProtoInterface8;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Transform Transform13 = createNode("Transform");
IS IS14 = createNode("IS");
connect connect15 = createNode("connect");
connect15.nodeField = "children";
connect15.protoField = "myShape";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Transform13.iS = IS14;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

ProtoDeclare7.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare7;

ProtoDeclare ProtoDeclare16 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare16.name = "one";
ProtoInterface ProtoInterface17 = createNode("ProtoInterface");
field field18 = createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFNode";
field18.name = "myShape";
Shape Shape19 = createNode("Shape");
Cylinder Cylinder20 = createNode("Cylinder");
Shape19.geometry = Cylinder20;

field18.children = new MFNode();

field18.children[0] = Shape19;

ProtoInterface17.field = new MFNode();

ProtoInterface17.field[0] = field18;

ProtoDeclare16.protoInterface = ProtoInterface17;

ProtoBody ProtoBody21 = createNode("ProtoBody");
Transform Transform22 = createNode("Transform");
ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "anyShape";
IS IS24 = createNode("IS");
connect connect25 = createNode("connect");
connect25.nodeField = "myShape";
connect25.protoField = "myShape";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

ProtoInstance23.iS = IS24;

Transform22.children = new MFNode();

Transform22.children[0] = ProtoInstance23;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

ProtoDeclare16.protoBody = ProtoBody21;

children[1] = ProtoDeclare16;

ProtoInstance ProtoInstance26 = createNode("ProtoInstance");
ProtoInstance26.name = "one";
fieldValue fieldValue27 = createNode("fieldValue");
fieldValue27.name = "myShape";
Shape Shape28 = createNode("Shape");
Shape28.DEF = "_1";
Box Box29 = createNode("Box");
Box29.size = new SFVec3f(new float[140,140,140]);
Shape28.geometry = Box29;

fieldValue27.children = new MFNode();

fieldValue27.children[0] = Shape28;

ProtoInstance26.fieldValue = new MFNode();

ProtoInstance26.fieldValue[0] = fieldValue27;

children[2] = ProtoInstance26;

}
