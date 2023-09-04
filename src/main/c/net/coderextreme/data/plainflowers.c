#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "plainflowers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "5 or more prismatic flowers";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[3] = meta5;

head = head1;

ExternProtoDeclare ExternProtoDeclare7 = createNode("ExternProtoDeclare");
ExternProtoDeclare7.name = "FlowerProto";
ExternProtoDeclare7.url = new MFString(new java.lang.String["../data/flowerproto.x3d#FlowerProto"]);
field field8 = createNode("field");
field8.accessType = "inputOutput";
field8.type = "MFString";
field8.name = "vertex";
ExternProtoDeclare7.field = new MFNode();

ExternProtoDeclare7.field[0] = field8;

field field9 = createNode("field");
field9.accessType = "inputOutput";
field9.type = "MFString";
field9.name = "fragment";
ExternProtoDeclare7.field[1] = field9;

children = new MFNode();

children[0] = ExternProtoDeclare7;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_plain.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/plain.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "flower";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Group Group13 = createNode("Group");
ProtoInstance ProtoInstance14 = createNode("ProtoInstance");
ProtoInstance14.name = "FlowerProto";
fieldValue fieldValue15 = createNode("fieldValue");
fieldValue15.name = "vertex";
fieldValue15.value = "\"../shaders/x_ite_flowers_plain.vs\"";
ProtoInstance14.fieldValue = new MFNode();

ProtoInstance14.fieldValue[0] = fieldValue15;

fieldValue fieldValue16 = createNode("fieldValue");
fieldValue16.name = "fragment";
fieldValue16.value = "\"../shaders/plain.fs\"";
ProtoInstance14.fieldValue[1] = fieldValue16;

Group13.children = new MFNode();

Group13.children[0] = ProtoInstance14;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare10.protoBody = ProtoBody12;

children[1] = ProtoDeclare10;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
children[2] = NavigationInfo17;

Background Background18 = createNode("Background");
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background18;

Group Group19 = createNode("Group");
ProtoInstance ProtoInstance20 = createNode("ProtoInstance");
ProtoInstance20.name = "flower";
Group19.children = new MFNode();

Group19.children[0] = ProtoInstance20;

ProtoInstance ProtoInstance21 = createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group19.children[1] = ProtoInstance21;

ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group19.children[2] = ProtoInstance22;

ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group19.children[3] = ProtoInstance23;

ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group19.children[4] = ProtoInstance24;

ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group19.children[5] = ProtoInstance25;

children[4] = Group19;

}
