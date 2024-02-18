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
meta10.content = "sphereflowers.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "created";
meta12.content = "Jan 17 2022";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "modified";
meta13.content = "Sep 3 2023";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "5 or more prismatic flowers";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "identifier";
meta16.content = "https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d";
head1.meta[14] = meta16;

head = head1;

NavigationInfo NavigationInfo18 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo18;

Background Background19 = createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[1] = Background19;

Group Group20 = createNode("Group");
ExternProtoDeclare ExternProtoDeclare21 = createNode("ExternProtoDeclare");
ExternProtoDeclare21.name = "FlowerProto";
ExternProtoDeclare21.url = new MFString(new java.lang.String["../personal/flowerproto.json#FlowerProto"]);
field field22 = createNode("field");
field22.name = "vertex";
field22.accessType = "inputOutput";
field22.type = "MFString";
ExternProtoDeclare21.field = new MFNode();

ExternProtoDeclare21.field[0] = field22;

field field23 = createNode("field");
field23.name = "fragment";
field23.accessType = "inputOutput";
field23.type = "MFString";
ExternProtoDeclare21.field[1] = field23;

Group20.children = new MFNode();

Group20.children[0] = ExternProtoDeclare21;

ProtoDeclare ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "flower";
ProtoBody ProtoBody25 = createNode("ProtoBody");
Group Group26 = createNode("Group");
ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "FlowerProto";
fieldValue fieldValue28 = createNode("fieldValue");
fieldValue28.name = "vertex";
fieldValue28.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

fieldValue fieldValue29 = createNode("fieldValue");
fieldValue29.name = "fragment";
fieldValue29.value = "\"../shaders/x_ite.fs\"";
ProtoInstance27.fieldValue[1] = fieldValue29;

Group26.children = new MFNode();

Group26.children[0] = ProtoInstance27;

ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Group26;

ProtoDeclare24.protoBody = ProtoBody25;

Group20.children[1] = ProtoDeclare24;

ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group20.children[2] = ProtoInstance30;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group20.children[3] = ProtoInstance31;

ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group20.children[4] = ProtoInstance32;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group20.children[5] = ProtoInstance33;

ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "flower";
Group20.children[6] = ProtoInstance34;

ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "flower";
Group20.children[7] = ProtoInstance35;

TimeSensor TimeSensor36 = createNode("TimeSensor");
TimeSensor36.DEF = "SongTime";
TimeSensor36.loop = True;
Group20.children[8] = TimeSensor36;

Sound Sound37 = createNode("Sound");
Sound37.maxBack = 100;
Sound37.maxFront = 100;
Sound37.minBack = 20;
Sound37.minFront = 20;
Sound37.location = new SFVec3f(new float[0,1,0]);
AudioClip AudioClip38 = createNode("AudioClip");
AudioClip38.DEF = "AudioClip";
AudioClip38.description = "Chandubabamusic #1";
AudioClip38.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
Sound37.source = AudioClip38;

Group20.children[9] = Sound37;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromField = "cycleTime";
ROUTE39.fromNode = "SongTime";
ROUTE39.toField = "startTime";
ROUTE39.toNode = "AudioClip";
Group20.children[10] = ROUTE39;

children[2] = Group20;

}
