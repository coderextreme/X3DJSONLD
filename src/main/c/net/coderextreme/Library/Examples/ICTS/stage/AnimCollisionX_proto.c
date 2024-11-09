#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:06:55 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:06:55 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="AnimCollisionX" ><ProtoInterface><field name="bbox" accessType="initializeOnly" type="SFVec2f" value="-1 1"></field>
<field name="isActive" accessType="inputOnly" type="SFBool"></field>
<field name="collideTime" accessType="outputOnly" type="SFTime"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="animation" accessType="initializeOnly" type="SFNode"><Transform DEF="_1"></Transform>
</field>
</ProtoInterface>
<ProtoBody><Script DEF="_animCollision" directOutput="true"><field name="bbox" accessType="initializeOnly" type="SFVec2f"></field>
<field name="isActive" accessType="inputOnly" type="SFBool"></field>
<field name="collideTime" accessType="outputOnly" type="SFTime"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="animation" accessType="initializeOnly" type="SFNode"></field>
<IS><connect nodeField="bbox" protoField="bbox"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="collideTime" protoField="collideTime"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="animation" protoField="animation"></connect>
</IS>
<![CDATA[vrmlscript:
function isActive(value, time)
{
	if (!value) {
		if (animation.translation.x > bbox.x && animation.translation.x <  bbox.y) {
			collideTime = time;
		} else {
			startTime = time;
		}
	}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "AnimCollisionX";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "bbox";
field10.accessType = "initializeOnly";
field10.type = "SFVec2f";
field10.value = "-1 1";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "isActive";
field11.accessType = "inputOnly";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "collideTime";
field12.accessType = "outputOnly";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "startTime";
field13.accessType = "outputOnly";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "animation";
field14.accessType = "initializeOnly";
field14.type = "SFNode";
Transform Transform15 = createNode("Transform");
Transform15.DEF = "_1";
field14.children = new MFNode();

field14.children[0] = Transform15;

ProtoInterface9.field[4] = field14;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
Script Script17 = createNode("Script");
Script17.DEF = "_animCollision";
Script17.directOutput = True;
field field18 = createNode("field");
field18.name = "bbox";
field18.accessType = "initializeOnly";
field18.type = "SFVec2f";
Script17.field = new MFNode();

Script17.field[0] = field18;

field field19 = createNode("field");
field19.name = "isActive";
field19.accessType = "inputOnly";
field19.type = "SFBool";
Script17.field[1] = field19;

field field20 = createNode("field");
field20.name = "collideTime";
field20.accessType = "outputOnly";
field20.type = "SFTime";
Script17.field[2] = field20;

field field21 = createNode("field");
field21.name = "startTime";
field21.accessType = "outputOnly";
field21.type = "SFTime";
Script17.field[3] = field21;

field field22 = createNode("field");
field22.name = "animation";
field22.accessType = "initializeOnly";
field22.type = "SFNode";
Script17.field[4] = field22;

IS IS23 = createNode("IS");
connect connect24 = createNode("connect");
connect24.nodeField = "bbox";
connect24.protoField = "bbox";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

connect connect25 = createNode("connect");
connect25.nodeField = "isActive";
connect25.protoField = "isActive";
IS23.connect[1] = connect25;

connect connect26 = createNode("connect");
connect26.nodeField = "collideTime";
connect26.protoField = "collideTime";
IS23.connect[2] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "startTime";
connect27.protoField = "startTime";
IS23.connect[3] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "animation";
connect28.protoField = "animation";
IS23.connect[4] = connect28;

Script17.iS = IS23;


Script17.setSourceCode(`vrmlscript:\n"+
"function isActive(value, time)\n"+
"{\n"+
"	if (!value) {\n"+
"		if (animation.translation.x > bbox.x && animation.translation.x <  bbox.y) {\n"+
"			collideTime = time;\n"+
"		} else {\n"+
"			startTime = time;\n"+
"		}\n"+
"	}\n"+
"}`)
ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Script17;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
