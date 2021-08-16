#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "bubs2.x3d";
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
meta6.content = "https://coderextreme.net/X3DJSONLD/geo.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translated";
meta7.content = "13 March 2016";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[6] = meta8;

head = head1;

NavigationInfo NavigationInfo10 = createNode("NavigationInfo");
NavigationInfo10.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo10;

Viewpoint Viewpoint11 = createNode("Viewpoint");
Viewpoint11.position = new SFVec3f(new float[0,0,4]);
Viewpoint11.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint11.description = "Bubbles in action";
children[1] = Viewpoint11;

Background Background12 = createNode("Background");
Background12.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background12.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background12.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background12.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background12.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background12.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
children[2] = Background12;

ProtoDeclare ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere containerField="geometry" radius="0.25"></Sphere>
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
    if (typeof translation === 'undefined') {
		translation = new SFVec3f(0, 0, 0);
    }
    if (typeof velocity === 'undefined') {
		velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof scalvel === 'undefined') {
		scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof scale === 'undefined') {
		scale = new SFVec3f(1, 1, 1);
    }
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
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
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}]]></Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "Bubble";
ProtoBody ProtoBody14 = createNode("ProtoBody");
Transform Transform15 = createNode("Transform");
Transform15.DEF = "body_trans";
Shape Shape16 = createNode("Shape");
Sphere Sphere17 = createNode("Sphere");
Sphere17.radius = 0.25;
Shape16.geometry = Sphere17;

Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,0,0]);
Material19.transparency = 0.2;
Appearance18.material = Material19;

Shape16.appearance = Appearance18;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

Script Script20 = createNode("Script");
Script20.DEF = "bounce";
field field21 = createNode("field");
field21.name = "scale";
field21.accessType = "inputOutput";
field21.type = "SFVec3f";
field21.value = "1 1 1";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "translation";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "0 0 0";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "velocity";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
Script20.field[2] = field23;

field field24 = createNode("field");
field24.name = "scalvel";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0 0 0";
Script20.field[3] = field24;

field field25 = createNode("field");
field25.name = "set_fraction";
field25.accessType = "inputOnly";
field25.type = "SFFloat";
Script20.field[4] = field25;


Script20.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform15.children[1] = Script20;

TimeSensor TimeSensor26 = createNode("TimeSensor");
TimeSensor26.DEF = "bubbleClock";
TimeSensor26.cycleInterval = 10;
TimeSensor26.loop = True;
Transform15.children[2] = TimeSensor26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "bounce";
ROUTE27.fromField = "translation_changed";
ROUTE27.toNode = "body_trans";
ROUTE27.toField = "set_translation";
Transform15.children[3] = ROUTE27;

ROUTE ROUTE28 = createNode("ROUTE");
ROUTE28.fromNode = "bounce";
ROUTE28.fromField = "scale_changed";
ROUTE28.toNode = "body_trans";
ROUTE28.toField = "set_scale";
Transform15.children[4] = ROUTE28;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromNode = "bubbleClock";
ROUTE29.fromField = "fraction_changed";
ROUTE29.toNode = "bounce";
ROUTE29.toField = "set_fraction";
Transform15.children[5] = ROUTE29;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Transform15;

ProtoDeclare13.protoBody = ProtoBody14;

children[3] = ProtoDeclare13;

ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "Bubble";
ProtoInstance30.DEF = "bubbleA";
children[4] = ProtoInstance30;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "Bubble";
ProtoInstance31.DEF = "bubbleB";
children[5] = ProtoInstance31;

ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "Bubble";
ProtoInstance32.DEF = "bubbleC";
children[6] = ProtoInstance32;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "Bubble";
ProtoInstance33.DEF = "bubbleD";
children[7] = ProtoInstance33;

}
