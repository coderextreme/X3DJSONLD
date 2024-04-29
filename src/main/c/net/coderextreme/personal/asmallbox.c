#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "asmallbox.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/abox.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a box";
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

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "one";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "myShape";
field19.accessType = "inputOutput";
field19.type = "MFNode";
Shape Shape20 = createNode("Shape");
Cylinder Cylinder21 = createNode("Cylinder");
Shape20.geometry = Cylinder21;

field19.children = new MFNode();

field19.children[0] = Shape20;

ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Transform Transform23 = createNode("Transform");
ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "anyShape";
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "myShape";
connect26.protoField = "myShape";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

ProtoInstance24.iS = IS25;

Transform23.children = new MFNode();

Transform23.children[0] = ProtoInstance24;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Transform23;

ProtoDeclare17.protoBody = ProtoBody22;

children[1] = ProtoDeclare17;

ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "one";
fieldValue fieldValue28 = createNode("fieldValue");
fieldValue28.name = "myShape";
Shape Shape29 = createNode("Shape");
Box Box30 = createNode("Box");
Shape29.geometry = Box30;

fieldValue28.children = new MFNode();

fieldValue28.children[0] = Shape29;

ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

children[2] = ProtoInstance27;

}
