#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "x3domflowers.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "5 or more prismatic flowers";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d";
head1.meta[12] = meta14;

head = head1;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo16;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background Background17 = createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background17;

Group Group18 = createNode("Group");
ExternProtoDeclare ExternProtoDeclare19 = createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "FlowerProto";
ExternProtoDeclare19.url = new MFString(new java.lang.String["../data/flowerproto.json#FlowerProto"]);
field field20 = createNode("field");
field20.name = "vertex";
field20.accessType = "inputOutput";
field20.type = "MFString";
ExternProtoDeclare19.field = new MFNode();

ExternProtoDeclare19.field[0] = field20;

field field21 = createNode("field");
field21.name = "fragment";
field21.accessType = "inputOutput";
field21.type = "MFString";
ExternProtoDeclare19.field[1] = field21;

Group18.children = new MFNode();

Group18.children[0] = ExternProtoDeclare19;

ProtoDeclare ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x3dom_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare22.name = "flower";
ProtoBody ProtoBody23 = createNode("ProtoBody");
Group Group24 = createNode("Group");
ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "FlowerProto";
fieldValue fieldValue26 = createNode("fieldValue");
fieldValue26.name = "vertex";
fieldValue26.value = "\"../shaders/x3dom_flowers_chromatic.vs\"";
ProtoInstance25.fieldValue = new MFNode();

ProtoInstance25.fieldValue[0] = fieldValue26;

fieldValue fieldValue27 = createNode("fieldValue");
fieldValue27.name = "fragment";
fieldValue27.value = "\"../shaders/common.fs\"";
ProtoInstance25.fieldValue[1] = fieldValue27;

Group24.children = new MFNode();

Group24.children[0] = ProtoInstance25;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare22.protoBody = ProtoBody23;

Group18.children[1] = ProtoDeclare22;

ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "flower";
Group18.children[2] = ProtoInstance28;

ProtoInstance ProtoInstance29 = createNode("ProtoInstance");
ProtoInstance29.name = "flower";
Group18.children[3] = ProtoInstance29;

ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group18.children[4] = ProtoInstance30;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group18.children[5] = ProtoInstance31;

ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group18.children[6] = ProtoInstance32;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group18.children[7] = ProtoInstance33;

children[2] = Group18;

}
