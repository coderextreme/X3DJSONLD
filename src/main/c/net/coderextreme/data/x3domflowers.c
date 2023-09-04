#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "x3domflowers.x3d";
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

component component6 = createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

component component11 = createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

component component12 = createNode("component");
component12.name = "Grouping";
component12.level = 3;
head1.component[10] = component12;

component component13 = createNode("component");
component13.name = "Core";
component13.level = 1;
head1.component[11] = component13;

head = head1;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "FlowerProto";
ExternProtoDeclare15.url = new MFString(new java.lang.String["../data/flowerproto.json#FlowerProto"]);
field field16 = createNode("field");
field16.accessType = "inputOutput";
field16.type = "MFString";
field16.name = "vertex";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.accessType = "inputOutput";
field17.type = "MFString";
field17.name = "fragment";
ExternProtoDeclare15.field[1] = field17;

children = new MFNode();

children[0] = ExternProtoDeclare15;

ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x3dom_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "flower";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody20 = createNode("ProtoBody");
Group Group21 = createNode("Group");
ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "FlowerProto";
fieldValue fieldValue23 = createNode("fieldValue");
fieldValue23.name = "vertex";
fieldValue23.value = "\"../shaders/x3dom_flowers_chromatic.vs\"";
ProtoInstance22.fieldValue = new MFNode();

ProtoInstance22.fieldValue[0] = fieldValue23;

fieldValue fieldValue24 = createNode("fieldValue");
fieldValue24.name = "fragment";
fieldValue24.value = "\"../shaders/common.fs\"";
ProtoInstance22.fieldValue[1] = fieldValue24;

Group21.children = new MFNode();

Group21.children[0] = ProtoInstance22;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Group21;

ProtoDeclare18.protoBody = ProtoBody20;

children[1] = ProtoDeclare18;

NavigationInfo NavigationInfo25 = createNode("NavigationInfo");
children[2] = NavigationInfo25;

Background Background26 = createNode("Background");
Background26.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background26.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background26.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background26.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background26.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background26.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background26;

Group Group27 = createNode("Group");
ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "flower";
Group27.children = new MFNode();

Group27.children[0] = ProtoInstance28;

ProtoInstance ProtoInstance29 = createNode("ProtoInstance");
ProtoInstance29.name = "flower";
Group27.children[1] = ProtoInstance29;

ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group27.children[2] = ProtoInstance30;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group27.children[3] = ProtoInstance31;

ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group27.children[4] = ProtoInstance32;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group27.children[5] = ProtoInstance33;

children[4] = Group27;

}
