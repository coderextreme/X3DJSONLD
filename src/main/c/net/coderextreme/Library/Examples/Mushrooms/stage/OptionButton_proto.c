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
meta3.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="OptionButton" ><ProtoInterface><field name="touchTime" accessType="inputOnly" type="SFTime"></field>
<field name="whichChoice" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="selected" accessType="outputOnly" type="SFInt32"></field>
<field name="choice" accessType="inputOutput" type="MFNode"><Transform DEF="_1"></Transform>
</field>
</ProtoInterface>
<ProtoBody><Transform><Switch DEF="Option_1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="children" protoField="choice"></connect>
</IS>
</Switch>
<Transform><Script DEF="_optionButton" directOutput="true"><field name="selected" accessType="outputOnly" type="SFInt32"></field>
<field name="touchTime" accessType="inputOnly" type="SFTime"></field>
<field name="option" accessType="initializeOnly" type="SFNode"><Switch USE="Option_1"></Switch>
</field>
<IS><connect nodeField="selected" protoField="selected"></connect>
<connect nodeField="touchTime" protoField="touchTime"></connect>
</IS>
<![CDATA[vrmlscript:
function touchTime(value, time)
{
	i = 0;
	while(i < option.choice.length){
		if (option.choice[i++].touchTime == value){
			if (i == option.choice.length) option.whichChoice = 0;
			else option.whichChoice = i;
			selected = option.whichChoice;
			break;
		}
	}
}]]></Script>
</Transform>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "OptionButton";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "touchTime";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "whichChoice";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
field11.value = "-1";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "selected";
field12.accessType = "outputOnly";
field12.type = "SFInt32";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "choice";
field13.accessType = "inputOutput";
field13.type = "MFNode";
Transform Transform14 = createNode("Transform");
Transform14.DEF = "_1";
field13.children = new MFNode();

field13.children[0] = Transform14;

ProtoInterface9.field[3] = field13;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Transform Transform16 = createNode("Transform");
Switch Switch17 = createNode("Switch");
Switch17.DEF = "Option_1";
Switch17.whichChoice = -1;
IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "whichChoice";
connect19.protoField = "whichChoice";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

connect connect20 = createNode("connect");
connect20.nodeField = "children";
connect20.protoField = "choice";
IS18.connect[1] = connect20;

Switch17.iS = IS18;

Transform16.children = new MFNode();

Transform16.children[0] = Switch17;

Transform Transform21 = createNode("Transform");
Script Script22 = createNode("Script");
Script22.DEF = "_optionButton";
Script22.directOutput = True;
field field23 = createNode("field");
field23.name = "selected";
field23.accessType = "outputOnly";
field23.type = "SFInt32";
Script22.field = new MFNode();

Script22.field[0] = field23;

field field24 = createNode("field");
field24.name = "touchTime";
field24.accessType = "inputOnly";
field24.type = "SFTime";
Script22.field[1] = field24;

field field25 = createNode("field");
field25.name = "option";
field25.accessType = "initializeOnly";
field25.type = "SFNode";
Switch Switch26 = createNode("Switch");
Switch26.USE = "Option_1";
field25.children = new MFNode();

field25.children[0] = Switch26;

Script22.field[2] = field25;

IS IS27 = createNode("IS");
connect connect28 = createNode("connect");
connect28.nodeField = "selected";
connect28.protoField = "selected";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

connect connect29 = createNode("connect");
connect29.nodeField = "touchTime";
connect29.protoField = "touchTime";
IS27.connect[1] = connect29;

Script22.iS = IS27;


Script22.setSourceCode(`vrmlscript:\n"+
"function touchTime(value, time)\n"+
"{\n"+
"	i = 0;\n"+
"	while(i < option.choice.length){\n"+
"		if (option.choice[i++].touchTime == value){\n"+
"			if (i == option.choice.length) option.whichChoice = 0;\n"+
"			else option.whichChoice = i;\n"+
"			selected = option.whichChoice;\n"+
"			break;\n"+
"		}\n"+
"	}\n"+
"}`)
Transform21.children = new MFNode();

Transform21.children[0] = Script22;

Transform16.children[1] = Transform21;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare8.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare8;

WorldInfo WorldInfo30 = createNode("WorldInfo");
WorldInfo30.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
children[1] = WorldInfo30;

}
