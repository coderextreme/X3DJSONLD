#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "freewrlflowers.x3d";
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

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.description = "Tour Views";
Viewpoint9.position = new SFVec3f(new float[0,0,50]);
children[1] = Viewpoint9;

Background Background10 = createNode("Background");
Background10.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background10.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background10.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background10.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background10.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background10.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[2] = Background10;

Group Group11 = createNode("Group");
ExternProtoDeclare ExternProtoDeclare12 = createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "FlowerProto";
ExternProtoDeclare12.url = new MFString(new java.lang.String["../data/flowerprotofreewrl.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto"]);
field field13 = createNode("field");
field13.name = "vertex";
field13.accessType = "inputOutput";
field13.type = "MFString";
ExternProtoDeclare12.field = new MFNode();

ExternProtoDeclare12.field[0] = field13;

field field14 = createNode("field");
field14.name = "fragment";
field14.accessType = "inputOutput";
field14.type = "MFString";
ExternProtoDeclare12.field[1] = field14;

Group11.children = new MFNode();

Group11.children[0] = ExternProtoDeclare12;

ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/freewrl_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/freewrl.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "flower";
ProtoBody ProtoBody16 = createNode("ProtoBody");
Group Group17 = createNode("Group");
ProtoInstance ProtoInstance18 = createNode("ProtoInstance");
ProtoInstance18.name = "FlowerProto";
fieldValue fieldValue19 = createNode("fieldValue");
fieldValue19.name = "vertex";
fieldValue19.value = "\"../shaders/freewrl_flowers_chromatic.vs\"";
ProtoInstance18.fieldValue = new MFNode();

ProtoInstance18.fieldValue[0] = fieldValue19;

fieldValue fieldValue20 = createNode("fieldValue");
fieldValue20.name = "fragment";
fieldValue20.value = "\"../shaders/freewrl.fs\"";
ProtoInstance18.fieldValue[1] = fieldValue20;

Group17.children = new MFNode();

Group17.children[0] = ProtoInstance18;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Group17;

ProtoDeclare15.protoBody = ProtoBody16;

Group11.children[1] = ProtoDeclare15;

ProtoInstance ProtoInstance21 = createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group11.children[2] = ProtoInstance21;

ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group11.children[3] = ProtoInstance22;

ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group11.children[4] = ProtoInstance23;

ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group11.children[5] = ProtoInstance24;

ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group11.children[6] = ProtoInstance25;

ProtoInstance ProtoInstance26 = createNode("ProtoInstance");
ProtoInstance26.name = "flower";
Group11.children[7] = ProtoInstance26;

children[3] = Group11;

}
