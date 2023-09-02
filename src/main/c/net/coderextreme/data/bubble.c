#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "bubble.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Tour around a prismatic sphere";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.position = new SFVec3f(new float[0,0,4]);
Viewpoint9.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint9.description = "Bubble in action";
children[1] = Viewpoint9;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape><Sphere radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<Script DEF="bounce"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scalvel" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<![CDATA[ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
	translation = new SFVec3f(
		translation.x + velocity.x,
		translation.y + velocity.y,
		translation.z + velocity.z);
	scale = new SFVec3f(
		scale.x + scalvel.x,
		scale.y + scalvel.y,
		scale.z + scalvel.z);
        // if you get to far away or too big, explode
        if ( Math.abs(translation.x) > 256) {
		translation.x = 0;
		initialize();
	}
        if ( Math.abs(translation.y) > 256) {
		translation.y = 0;
		initialize();
	}
        if ( Math.abs(translation.z) > 256) {
		translation.z = 0;
		initialize();
	}
	if (Math.abs(scale.x) > 20) {
		scale.x = scale.x/2;
		translation.x = 0;
		initialize();
	}
	if (Math.abs(scale.y) > 20) {
		scale.y = scale.y/2;
		translation.y = 0;
		initialize();
	}
	if (Math.abs(scale.z) > 20) {
		scale.z = scale.z/2;
		translation.z = 0;
		initialize();
	}
}]]></Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="transform" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "Bubble";
ProtoBody ProtoBody11 = createNode("ProtoBody");
Transform Transform12 = createNode("Transform");
Transform12.DEF = "transform";
Shape Shape13 = createNode("Shape");
Sphere Sphere14 = createNode("Sphere");
Sphere14.radius = 0.25;
Shape13.geometry = Sphere14;

Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.diffuseColor = new SFColor(new float[1,0,0]);
Material16.transparency = 0.2;
Appearance15.material = Material16;

Shape13.appearance = Appearance15;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Script Script17 = createNode("Script");
Script17.DEF = "bounce";
field field18 = createNode("field");
field18.name = "scale";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "1 1 1";
Script17.field = new MFNode();

Script17.field[0] = field18;

field field19 = createNode("field");
field19.name = "translation";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script17.field[1] = field19;

field field20 = createNode("field");
field20.name = "velocity";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0 0 0";
Script17.field[2] = field20;

field field21 = createNode("field");
field21.name = "scalvel";
field21.accessType = "inputOutput";
field21.type = "SFVec3f";
field21.value = "0 0 0";
Script17.field[3] = field21;

field field22 = createNode("field");
field22.name = "set_fraction";
field22.accessType = "inputOnly";
field22.type = "SFFloat";
Script17.field[4] = field22;


Script17.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}`)
Transform12.children[1] = Script17;

TimeSensor TimeSensor23 = createNode("TimeSensor");
TimeSensor23.DEF = "bubbleClock";
TimeSensor23.cycleInterval = 10;
TimeSensor23.loop = True;
Transform12.children[2] = TimeSensor23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "bounce";
ROUTE24.fromField = "translation_changed";
ROUTE24.toNode = "transform";
ROUTE24.toField = "set_translation";
Transform12.children[3] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "bounce";
ROUTE25.fromField = "scale_changed";
ROUTE25.toNode = "transform";
ROUTE25.toField = "set_scale";
Transform12.children[4] = ROUTE25;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "bubbleClock";
ROUTE26.fromField = "fraction_changed";
ROUTE26.toNode = "bounce";
ROUTE26.toField = "set_fraction";
Transform12.children[5] = ROUTE26;

ProtoBody11.children = new MFNode();

ProtoBody11.children[0] = Transform12;

ProtoDeclare10.protoBody = ProtoBody11;

children[2] = ProtoDeclare10;

ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "Bubble";
ProtoInstance27.DEF = "bubbleA";
children[3] = ProtoInstance27;

}
