#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "sphereflowers.x3d";
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
meta6.content = "https://coderextreme.net/X3DJSONLD/sphereflowers.x3d";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo8;

Background Background9 = createNode("Background");
Background9.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_back.png"]);
Background9.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background9.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_front.png"]);
Background9.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_left.png"]);
Background9.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_right.png"]);
Background9.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background9;

Group Group10 = createNode("Group");
ExternProtoDeclare ExternProtoDeclare11 = createNode("ExternProtoDeclare");
ExternProtoDeclare11.name = "FlowerProto";
ExternProtoDeclare11.url = new MFString(new java.lang.String["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto"]);
field field12 = createNode("field");
field12.name = "vertex";
field12.accessType = "inputOutput";
field12.type = "MFString";
ExternProtoDeclare11.field = new MFNode();

ExternProtoDeclare11.field[0] = field12;

field field13 = createNode("field");
field13.name = "fragment";
field13.accessType = "inputOutput";
field13.type = "MFString";
ExternProtoDeclare11.field[1] = field13;

Group10.children = new MFNode();

Group10.children[0] = ExternProtoDeclare11;

ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "flower";
ProtoBody ProtoBody15 = createNode("ProtoBody");
Group Group16 = createNode("Group");
ProtoInstance ProtoInstance17 = createNode("ProtoInstance");
ProtoInstance17.name = "FlowerProto";
fieldValue fieldValue18 = createNode("fieldValue");
fieldValue18.name = "vertex";
fieldValue18.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance17.fieldValue = new MFNode();

ProtoInstance17.fieldValue[0] = fieldValue18;

fieldValue fieldValue19 = createNode("fieldValue");
fieldValue19.name = "fragment";
fieldValue19.value = "\"../shaders/x_ite.fs\"";
ProtoInstance17.fieldValue[1] = fieldValue19;

Group16.children = new MFNode();

Group16.children[0] = ProtoInstance17;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Group16;

ProtoDeclare14.protoBody = ProtoBody15;

Group10.children[1] = ProtoDeclare14;

ProtoInstance ProtoInstance20 = createNode("ProtoInstance");
ProtoInstance20.name = "flower";
Group10.children[2] = ProtoInstance20;

ProtoInstance ProtoInstance21 = createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group10.children[3] = ProtoInstance21;

ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group10.children[4] = ProtoInstance22;

ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group10.children[5] = ProtoInstance23;

ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group10.children[6] = ProtoInstance24;

ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group10.children[7] = ProtoInstance25;

TimeSensor TimeSensor26 = createNode("TimeSensor");
TimeSensor26.DEF = "SongTime";
TimeSensor26.loop = True;
Group10.children[8] = TimeSensor26;

Sound Sound27 = createNode("Sound");
Sound27.maxBack = 100;
Sound27.maxFront = 100;
Sound27.minBack = 20;
Sound27.minFront = 20;
AudioClip AudioClip28 = createNode("AudioClip");
AudioClip28.DEF = "AudioClip";
AudioClip28.description = "Chandubabamusic #1";
AudioClip28.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
Sound27.source = AudioClip28;

Group10.children[9] = Sound27;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromField = "cycleTime";
ROUTE29.fromNode = "SongTime";
ROUTE29.toField = "startTime";
ROUTE29.toNode = "AudioClip";
Group10.children[10] = ROUTE29;

children[2] = Group10;

}
