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
meta3.content = "Thu, 23 Apr 2015 06:07:12 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:12 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Matrix" ><ProtoInterface><field name="size" accessType="inputOutput" type="SFVec2f"></field>
<field name="matrix" accessType="inputOutput" type="MFInt32" value="0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="size" accessType="inputOutput" type="SFVec2f"></field>
<field name="matrix" accessType="inputOutput" type="MFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_matrix" directOutput="true"><field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data"><IS><connect nodeField="size" protoField="size"></connect>
<connect nodeField="matrix" protoField="matrix"></connect>
</IS>
</ProtoInstance>
</field>
<![CDATA[vrmlscript:
function initialize()
{
	matrix = new MFInt32();
	for (i=0; i< data.size.x * data.size.y; i++) {
		n = 0;
		if (data.matrix[i]) {
			if (data.matrix[i + 1]) n++;
			if (data.matrix[i - 1]) n++;
			if (data.matrix[i + data.size.x]) n++;
			if (data.matrix[i - data.size.x]) n++;
			matrix[i] = n;
		} else {
			matrix[i] = 0;
		}
	}
	data.matrix = matrix;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Matrix";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "size";
field10.accessType = "inputOutput";
field10.type = "SFVec2f";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "matrix";
field11.accessType = "inputOutput";
field11.type = "MFInt32";
field11.value = "0 0";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="size" accessType="inputOutput" type="SFVec2f"></field>
<field name="matrix" accessType="inputOutput" type="MFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "Data";
ProtoInterface ProtoInterface14 = createNode("ProtoInterface");
field field15 = createNode("field");
field15.name = "size";
field15.accessType = "inputOutput";
field15.type = "SFVec2f";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

field field16 = createNode("field");
field16.name = "matrix";
field16.accessType = "inputOutput";
field16.type = "MFInt32";
ProtoInterface14.field[1] = field16;

ProtoDeclare13.protoInterface = ProtoInterface14;

ProtoBody ProtoBody17 = createNode("ProtoBody");
Group Group18 = createNode("Group");
ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = Group18;

ProtoDeclare13.protoBody = ProtoBody17;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = ProtoDeclare13;

Script Script19 = createNode("Script");
Script19.DEF = "_matrix";
Script19.directOutput = True;
field field20 = createNode("field");
field20.name = "data";
field20.accessType = "initializeOnly";
field20.type = "SFNode";
ProtoInstance ProtoInstance21 = createNode("ProtoInstance");
ProtoInstance21.name = "Data";
IS IS22 = createNode("IS");
connect connect23 = createNode("connect");
connect23.nodeField = "size";
connect23.protoField = "size";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

connect connect24 = createNode("connect");
connect24.nodeField = "matrix";
connect24.protoField = "matrix";
IS22.connect[1] = connect24;

ProtoInstance21.iS = IS22;

field20.children = new MFNode();

field20.children[0] = ProtoInstance21;

Script19.field = new MFNode();

Script19.field[0] = field20;


Script19.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	matrix = new MFInt32();\n"+
"	for (i=0; i< data.size.x * data.size.y; i++) {\n"+
"		n = 0;\n"+
"		if (data.matrix[i]) {\n"+
"			if (data.matrix[i + 1]) n++;\n"+
"			if (data.matrix[i - 1]) n++;\n"+
"			if (data.matrix[i + data.size.x]) n++;\n"+
"			if (data.matrix[i - data.size.x]) n++;\n"+
"			matrix[i] = n;\n"+
"		} else {\n"+
"			matrix[i] = 0;\n"+
"		}\n"+
"	}\n"+
"	data.matrix = matrix;\n"+
"}`)
ProtoBody12.children[1] = Script19;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
