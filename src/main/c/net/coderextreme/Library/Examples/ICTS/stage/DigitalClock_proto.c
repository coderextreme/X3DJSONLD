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
meta3.content = "Thu, 23 Apr 2015 06:07:01 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:01 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="DigitalClock" ><ProtoInterface><field name="time" accessType="inputOutput" type="SFTime"></field>
<field name="children" accessType="initializeOnly" type="MFNode"><Switch DEF="_1" whichChoice="-1"></Switch>
<Switch DEF="_2" whichChoice="-1"></Switch>
</field>
<field name="fraction" accessType="initializeOnly" type="MFNode"><Switch DEF="_3" whichChoice="-1"></Switch>
<Switch DEF="_4" whichChoice="-1"></Switch>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="time" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_digitalClock" directOutput="true"><field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="sec" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="min" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="hour" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="l" accessType="initializeOnly" type="SFInt32"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="fraction" accessType="initializeOnly" type="MFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_5"><IS><connect nodeField="time" protoField="time"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="fraction" protoField="fraction"></connect>
</IS>
<![CDATA[vrmlscript:
function  set_time(value, time)
{
    t = Math.floor(value);
        f = (value - t);
   for (i = 0; i < fraction.length; i++) {
                f *= 10;
                whichChoice = Math.floor(f);
                fraction[i].whichChoice = whichChoice;
        f -= whichChoice;
    }
    if (l > 0) {
        if (t != sec && l) {
                sec = t;
                s = sec % 60; t =  sec / 60;
                e = s % 10;
                children[0].whichChoice = e;
                if (l > 1) {
                        z = s / 10;
                        children[1].whichChoice = z;
                        if (t != min && l > 2) {
                                min = t;
                                m = min % 60; t = min / 60;
                                e = m % 10;
                                children[2].whichChoice = e;
                                if (l > 2) {
                                        z = m / 10;
                                        children[3].whichChoice = z;
                                        if (t != hour && l > 4) {
                                                hour = t;
                                                h = hour % 24; t = hour / 24;
                                                e = h  % 10;
                                                children[4].whichChoice = e;
                                                if (l > 5) {
                                                        z = h  / 10;
                                                        children[5].whichChoice = z;
                                                }
                                        }
                                }
                        }
                }
        }
    }
}
function  initialize()
{
    set_time(data.time, 0);
        l = children.length;
}]]></Script>
<ROUTE fromNode="_5" fromField="time_changed" toNode="_digitalClock" toField="set_time"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "DigitalClock";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "time";
field10.accessType = "inputOutput";
field10.type = "SFTime";
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

field field14 = createNode("field");
field14.name = "fraction";
field14.accessType = "initializeOnly";
field14.type = "MFNode";
Switch Switch15 = createNode("Switch");
Switch15.DEF = "_3";
Switch15.whichChoice = -1;
field14.children = new MFNode();

field14.children[0] = Switch15;

Switch Switch16 = createNode("Switch");
Switch16.DEF = "_4";
Switch16.whichChoice = -1;
field14.children[1] = Switch16;

ProtoInterface9.field[2] = field14;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="time" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "Data";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.name = "time";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody21 = createNode("ProtoBody");
Group Group22 = createNode("Group");
ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Group22;

ProtoDeclare18.protoBody = ProtoBody21;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = ProtoDeclare18;

Script Script23 = createNode("Script");
Script23.DEF = "_digitalClock";
Script23.directOutput = True;
field field24 = createNode("field");
field24.name = "set_time";
field24.accessType = "inputOnly";
field24.type = "SFTime";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "sec";
field25.accessType = "initializeOnly";
field25.type = "SFInt32";
field25.value = "-1";
Script23.field[1] = field25;

field field26 = createNode("field");
field26.name = "min";
field26.accessType = "initializeOnly";
field26.type = "SFInt32";
field26.value = "-1";
Script23.field[2] = field26;

field field27 = createNode("field");
field27.name = "hour";
field27.accessType = "initializeOnly";
field27.type = "SFInt32";
field27.value = "-1";
Script23.field[3] = field27;

field field28 = createNode("field");
field28.name = "l";
field28.accessType = "initializeOnly";
field28.type = "SFInt32";
Script23.field[4] = field28;

field field29 = createNode("field");
field29.name = "children";
field29.accessType = "initializeOnly";
field29.type = "MFNode";
Script23.field[5] = field29;

field field30 = createNode("field");
field30.name = "fraction";
field30.accessType = "initializeOnly";
field30.type = "MFNode";
Script23.field[6] = field30;

field field31 = createNode("field");
field31.name = "data";
field31.accessType = "initializeOnly";
field31.type = "SFNode";
ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "Data";
ProtoInstance32.DEF = "_5";
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "time";
connect34.protoField = "time";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

ProtoInstance32.iS = IS33;

field31.children = new MFNode();

field31.children[0] = ProtoInstance32;

Script23.field[7] = field31;

IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "children";
connect36.protoField = "children";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "fraction";
connect37.protoField = "fraction";
IS35.connect[1] = connect37;

Script23.iS = IS35;


Script23.setSourceCode(`vrmlscript:\n"+
"function  set_time(value, time)\n"+
"{\n"+
"    t = Math.floor(value);\n"+
"        f = (value - t);\n"+
"   for (i = 0; i < fraction.length; i++) {\n"+
"                f *= 10;\n"+
"                whichChoice = Math.floor(f);\n"+
"                fraction[i].whichChoice = whichChoice;\n"+
"        f -= whichChoice;\n"+
"    }\n"+
"    if (l > 0) {\n"+
"        if (t != sec && l) {\n"+
"                sec = t;\n"+
"                s = sec % 60; t =  sec / 60;\n"+
"                e = s % 10;\n"+
"                children[0].whichChoice = e;\n"+
"                if (l > 1) {\n"+
"                        z = s / 10;\n"+
"                        children[1].whichChoice = z;\n"+
"                        if (t != min && l > 2) {\n"+
"                                min = t;\n"+
"                                m = min % 60; t = min / 60;\n"+
"                                e = m % 10;\n"+
"                                children[2].whichChoice = e;\n"+
"                                if (l > 2) {\n"+
"                                        z = m / 10;\n"+
"                                        children[3].whichChoice = z;\n"+
"                                        if (t != hour && l > 4) {\n"+
"                                                hour = t;\n"+
"                                                h = hour % 24; t = hour / 24;\n"+
"                                                e = h  % 10;\n"+
"                                                children[4].whichChoice = e;\n"+
"                                                if (l > 5) {\n"+
"                                                        z = h  / 10;\n"+
"                                                        children[5].whichChoice = z;\n"+
"                                                }\n"+
"                                        }\n"+
"                                }\n"+
"                        }\n"+
"                }\n"+
"        }\n"+
"    }\n"+
"}\n"+
"function  initialize()\n"+
"{\n"+
"    set_time(data.time, 0);\n"+
"        l = children.length;\n"+
"}`)
ProtoBody17.children[1] = Script23;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "_5";
ROUTE38.fromField = "time_changed";
ROUTE38.toNode = "_digitalClock";
ROUTE38.toField = "set_time";
ProtoBody17.children[2] = ROUTE38;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
