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
meta3.content = "Thu, 23 Apr 2015 06:07:00 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:00 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Digit" ><ProtoInterface><field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="children" accessType="initializeOnly" type="MFNode"><Switch DEF="_1" whichChoice="-1"></Switch>
<Switch DEF="_2" whichChoice="-1"></Switch>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_digit" directOutput="true" mustEvaluate="true"><field name="set_whichChoice" accessType="inputOnly" type="SFInt32"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_3"><IS><connect nodeField="whichChoice" protoField="whichChoice"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="children" protoField="children"></connect>
</IS>
<![CDATA[vrmlscript:
function  set_whichChoice(value, time)
{
    d = value;
    for (i = 0; i < children.length; i++) {
		children[i].whichChoice = d % 10;
        d /= 10;
    }
}
function  initialize()
{
    set_whichChoice(data.whichChoice, 0);
}]]></Script>
<ROUTE fromNode="_3" fromField="whichChoice_changed" toNode="_digit" toField="set_whichChoice"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Digit";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "whichChoice";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "children";
field11.accessType = "initializeOnly";
field11.type = "MFNode";
Switch Switch12 = createNode("Switch");
Switch12.DEF = "_1";
Switch12.whichChoice = -1;
field11.children = new MFNode();

field11.children[0] = Switch12;

Switch Switch13 = createNode("Switch");
Switch13.DEF = "_2";
Switch13.whichChoice = -1;
field11.children[1] = Switch13;

ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Data";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "whichChoice";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody18 = createNode("ProtoBody");
Group Group19 = createNode("Group");
ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Group19;

ProtoDeclare15.protoBody = ProtoBody18;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = ProtoDeclare15;

Script Script20 = createNode("Script");
Script20.DEF = "_digit";
Script20.directOutput = True;
Script20.mustEvaluate = True;
field field21 = createNode("field");
field21.name = "set_whichChoice";
field21.accessType = "inputOnly";
field21.type = "SFInt32";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "children";
field22.accessType = "initializeOnly";
field22.type = "MFNode";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "data";
field23.accessType = "initializeOnly";
field23.type = "SFNode";
ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "Data";
ProtoInstance24.DEF = "_3";
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "whichChoice";
connect26.protoField = "whichChoice";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

ProtoInstance24.iS = IS25;

field23.children = new MFNode();

field23.children[0] = ProtoInstance24;

Script20.field[2] = field23;

IS IS27 = createNode("IS");
connect connect28 = createNode("connect");
connect28.nodeField = "children";
connect28.protoField = "children";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

Script20.iS = IS27;


Script20.setSourceCode(`vrmlscript:\n"+
"function  set_whichChoice(value, time)\n"+
"{\n"+
"    d = value;\n"+
"    for (i = 0; i < children.length; i++) {\n"+
"		children[i].whichChoice = d % 10;\n"+
"        d /= 10;\n"+
"    }\n"+
"}\n"+
"function  initialize()\n"+
"{\n"+
"    set_whichChoice(data.whichChoice, 0);\n"+
"}`)
ProtoBody14.children[1] = Script20;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromNode = "_3";
ROUTE29.fromField = "whichChoice_changed";
ROUTE29.toNode = "_digit";
ROUTE29.toField = "set_whichChoice";
ProtoBody14.children[2] = ROUTE29;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
