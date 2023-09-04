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
meta4.name = "created";
meta4.content = "Jan 17 2022";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "Sep 03 2023";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "5 or more prismatic flowers";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

component component8 = createNode("component");
component8.name = "Scripting";
component8.level = 1;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "EnvironmentalEffects";
component9.level = 3;
head1.component[7] = component9;

component component10 = createNode("component");
component10.name = "Shaders";
component10.level = 1;
head1.component[8] = component10;

component component11 = createNode("component");
component11.name = "CubeMapTexturing";
component11.level = 1;
head1.component[9] = component11;

component component12 = createNode("component");
component12.name = "Texturing";
component12.level = 1;
head1.component[10] = component12;

component component13 = createNode("component");
component13.name = "Rendering";
component13.level = 1;
head1.component[11] = component13;

component component14 = createNode("component");
component14.name = "Grouping";
component14.level = 3;
head1.component[12] = component14;

component component15 = createNode("component");
component15.name = "Core";
component15.level = 1;
head1.component[13] = component15;

head = head1;

ExternProtoDeclare ExternProtoDeclare17 = createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "FlowerProto";
ExternProtoDeclare17.url = new MFString(new java.lang.String["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto"]);
field field18 = createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFString";
field18.name = "vertex";
ExternProtoDeclare17.field = new MFNode();

ExternProtoDeclare17.field[0] = field18;

field field19 = createNode("field");
field19.accessType = "inputOutput";
field19.type = "MFString";
field19.name = "fragment";
ExternProtoDeclare17.field[1] = field19;

children = new MFNode();

children[0] = ExternProtoDeclare17;

ProtoDeclare ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare20.name = "flower";
ProtoInterface ProtoInterface21 = createNode("ProtoInterface");
ProtoDeclare20.protoInterface = ProtoInterface21;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Group Group23 = createNode("Group");
ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "FlowerProto";
fieldValue fieldValue25 = createNode("fieldValue");
fieldValue25.name = "vertex";
fieldValue25.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

fieldValue fieldValue26 = createNode("fieldValue");
fieldValue26.name = "fragment";
fieldValue26.value = "\"../shaders/x_ite.fs\"";
ProtoInstance24.fieldValue[1] = fieldValue26;

Group23.children = new MFNode();

Group23.children[0] = ProtoInstance24;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare20.protoBody = ProtoBody22;

children[1] = ProtoDeclare20;

NavigationInfo NavigationInfo27 = createNode("NavigationInfo");
children[2] = NavigationInfo27;

Background Background28 = createNode("Background");
Background28.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background28.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background28.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background28.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background28.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"]);
Background28.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background28;

Group Group29 = createNode("Group");
ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group29.children = new MFNode();

Group29.children[0] = ProtoInstance30;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group29.children[1] = ProtoInstance31;

ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group29.children[2] = ProtoInstance32;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group29.children[3] = ProtoInstance33;

ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "flower";
Group29.children[4] = ProtoInstance34;

ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "flower";
Group29.children[5] = ProtoInstance35;

TimeSensor TimeSensor36 = createNode("TimeSensor");
TimeSensor36.DEF = "SongTime";
TimeSensor36.loop = True;
Group29.children[6] = TimeSensor36;

Sound Sound37 = createNode("Sound");
Sound37.minBack = 20;
Sound37.minFront = 20;
Sound37.maxBack = 100;
Sound37.maxFront = 100;
AudioClip AudioClip38 = createNode("AudioClip");
AudioClip38.DEF = "AudioClip";
AudioClip38.description = "Chandubabamusic #1";
AudioClip38.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"]);
Sound37.source = AudioClip38;

Group29.children[7] = Sound37;

children[4] = Group29;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "SongTime";
ROUTE39.fromField = "cycleTime";
ROUTE39.toNode = "AudioClip";
ROUTE39.toField = "startTime";
children[5] = ROUTE39;

}
