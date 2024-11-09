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
meta3.content = "Sun, 01 Nov 2015 04:01:17 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sun, 01 Nov 2015 04:01:17 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="f" ><ProtoInterface><field name="h" accessType="inputOnly" type="SFTime"></field>
<field name="i" accessType="outputOnly" type="SFTime"></field>
<field name="j" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Script DEF="k_1" directOutput="true"><field name="l" accessType="inputOnly" type="SFTime"></field>
<field name="h" accessType="inputOnly" type="SFTime"></field>
<field name="i" accessType="outputOnly" type="SFTime"></field>
<field name="m" accessType="outputOnly" type="SFTime"></field>
<field name="j" accessType="outputOnly" type="SFTime"></field>
<IS><connect nodeField="h" protoField="h"></connect>
<connect nodeField="i" protoField="i"></connect>
<connect nodeField="j" protoField="j"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
m=0;
}
function l(n,time){
j=time;
}
function h(n,time){
i=time;
}]]></Script>
<ROUTE fromNode="k_1" fromField="m" toNode="k_1" toField="l"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "f";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "h";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "i";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "j";
field12.accessType = "outputOnly";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Script Script14 = createNode("Script");
Script14.DEF = "k_1";
Script14.directOutput = True;
field field15 = createNode("field");
field15.name = "l";
field15.accessType = "inputOnly";
field15.type = "SFTime";
Script14.field = new MFNode();

Script14.field[0] = field15;

field field16 = createNode("field");
field16.name = "h";
field16.accessType = "inputOnly";
field16.type = "SFTime";
Script14.field[1] = field16;

field field17 = createNode("field");
field17.name = "i";
field17.accessType = "outputOnly";
field17.type = "SFTime";
Script14.field[2] = field17;

field field18 = createNode("field");
field18.name = "m";
field18.accessType = "outputOnly";
field18.type = "SFTime";
Script14.field[3] = field18;

field field19 = createNode("field");
field19.name = "j";
field19.accessType = "outputOnly";
field19.type = "SFTime";
Script14.field[4] = field19;

IS IS20 = createNode("IS");
connect connect21 = createNode("connect");
connect21.nodeField = "h";
connect21.protoField = "h";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

connect connect22 = createNode("connect");
connect22.nodeField = "i";
connect22.protoField = "i";
IS20.connect[1] = connect22;

connect connect23 = createNode("connect");
connect23.nodeField = "j";
connect23.protoField = "j";
IS20.connect[2] = connect23;

Script14.iS = IS20;


Script14.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"m=0;\n"+
"}\n"+
"function l(n,time){\n"+
"j=time;\n"+
"}\n"+
"function h(n,time){\n"+
"i=time;\n"+
"}`)
ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Script14;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "k_1";
ROUTE24.fromField = "m";
ROUTE24.toNode = "k_1";
ROUTE24.toField = "l";
ProtoBody13.children[1] = ROUTE24;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

ProtoDeclare ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="o" ><ProtoInterface><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="set_transparency" accessType="inputOnly" type="SFFloat"></field>
<field name="set_diffuseColor" accessType="inputOnly" type="SFColor"></field>
<field name="set_emissiveColor" accessType="inputOnly" type="SFColor"></field>
<field name="set_specularColor" accessType="inputOnly" type="SFColor"></field>
<field name="set_shininess" accessType="inputOnly" type="SFFloat"></field>
<field name="set_q" accessType="inputOnly" type="SFVec2f"></field>
<field name="set_s" accessType="inputOnly" type="SFFloat"></field>
<field name="set_t" accessType="inputOnly" type="SFVec2f"></field>
<field name="set_u" accessType="inputOnly" type="SFVec2f"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="transparency_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="diffuseColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="emissiveColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="specularColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="shininess_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="q_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="s_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="t_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="u_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="url_changed" accessType="outputOnly" type="MFString"></field>
<field name="A_changed" accessType="outputOnly" type="MFNode"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="D" accessType="inputOutput" type="SFNode"></field>
<field name="F" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="G" accessType="inputOutput" type="SFBool"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="H" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="p" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="A" accessType="initializeOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
<Script DEF="I" directOutput="true"><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="set_transparency" accessType="inputOnly" type="SFFloat"></field>
<field name="set_diffuseColor" accessType="inputOnly" type="SFColor"></field>
<field name="set_emissiveColor" accessType="inputOnly" type="SFColor"></field>
<field name="set_specularColor" accessType="inputOnly" type="SFColor"></field>
<field name="set_shininess" accessType="inputOnly" type="SFFloat"></field>
<field name="set_q" accessType="inputOnly" type="SFVec2f"></field>
<field name="set_s" accessType="inputOnly" type="SFFloat"></field>
<field name="set_t" accessType="inputOnly" type="SFVec2f"></field>
<field name="set_u" accessType="inputOnly" type="SFVec2f"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="transparency_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="diffuseColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="emissiveColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="specularColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="shininess_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="q_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="s_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="t_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="u_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="url_changed" accessType="outputOnly" type="MFString"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="A_changed" accessType="outputOnly" type="MFNode"></field>
<field name="p" accessType="initializeOnly" type="SFBool"></field>
<field name="A" accessType="initializeOnly" type="MFNode"></field>
<IS><connect nodeField="set_p" protoField="set_p"></connect>
<connect nodeField="set_transparency" protoField="set_transparency"></connect>
<connect nodeField="set_diffuseColor" protoField="set_diffuseColor"></connect>
<connect nodeField="set_emissiveColor" protoField="set_emissiveColor"></connect>
<connect nodeField="set_specularColor" protoField="set_specularColor"></connect>
<connect nodeField="set_shininess" protoField="set_shininess"></connect>
<connect nodeField="set_q" protoField="set_q"></connect>
<connect nodeField="set_s" protoField="set_s"></connect>
<connect nodeField="set_t" protoField="set_t"></connect>
<connect nodeField="set_u" protoField="set_u"></connect>
<connect nodeField="set_url" protoField="set_url"></connect>
<connect nodeField="set_v" protoField="set_v"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="p_changed" protoField="p_changed"></connect>
<connect nodeField="transparency_changed" protoField="transparency_changed"></connect>
<connect nodeField="diffuseColor_changed" protoField="diffuseColor_changed"></connect>
<connect nodeField="emissiveColor_changed" protoField="emissiveColor_changed"></connect>
<connect nodeField="specularColor_changed" protoField="specularColor_changed"></connect>
<connect nodeField="shininess_changed" protoField="shininess_changed"></connect>
<connect nodeField="q_changed" protoField="q_changed"></connect>
<connect nodeField="s_changed" protoField="s_changed"></connect>
<connect nodeField="t_changed" protoField="t_changed"></connect>
<connect nodeField="u_changed" protoField="u_changed"></connect>
<connect nodeField="url_changed" protoField="url_changed"></connect>
<connect nodeField="v_changed" protoField="v_changed"></connect>
<connect nodeField="A_changed" protoField="A_changed"></connect>
<connect nodeField="p" protoField="p"></connect>
<connect nodeField="A" protoField="A"></connect>
</IS>
<![CDATA[javascript:
function set_p(n){
for(J=0;J<A.length;J++){
A[J].set_p=n;
}
p=n;
p_changed=n;
}
function initialize(){
p_changed=p;
A_changed=A;
}
function set_diffuseColor(n){
for(J=0;J<A.length;J++){
A[J].set_diffuseColor=n;
}
diffuseColor_changed=n;
}
function set_specularColor(n){
for(J=0;J<A.length;J++){
A[J].set_specularColor=n;
}
specularColor_changed=n;
}
function set_emissiveColor(n){
for(J=0;J<A.length;J++){
A[J].set_emissiveColor=n;
}
emissiveColor_changed=n;
}
function set_transparency(n){
for(J=0;J<A.length;J++){
A[J].set_transparency=n;
}
transparency_changed=n;
}
function set_shininess(n){
for(J=0;J<A.length;J++){
A[J].set_shininess=n;
}
shininess_changed=n;
}
function set_q(n){
for(J=0;J<A.length;J++){
A[J].set_q=n;
}
q_changed=n;
}
function set_u(n){
for(J=0;J<A.length;J++){
A[J].set_u=n;
}
u_changed=n;
}
function set_t(n){
for(J=0;J<A.length;J++){
A[J].set_t=n;
}
t_changed=n;
}
function set_s(n){
for(J=0;J<A.length;J++){
A[J].set_s=n;
}
s_changed=n;
}
function set_url(n){
for(J=0;J<A.length;J++){
A[J].set_url=n;
}
url_changed=n;
}
function set_v(n){
for(J=0;J<A.length;J++){
A[J].set_v=n;
}
v_changed=n;
}
function w(){
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "o";
ProtoInterface ProtoInterface26 = createNode("ProtoInterface");
field field27 = createNode("field");
field27.name = "set_p";
field27.accessType = "inputOnly";
field27.type = "SFBool";
ProtoInterface26.field = new MFNode();

ProtoInterface26.field[0] = field27;

field field28 = createNode("field");
field28.name = "set_transparency";
field28.accessType = "inputOnly";
field28.type = "SFFloat";
ProtoInterface26.field[1] = field28;

field field29 = createNode("field");
field29.name = "set_diffuseColor";
field29.accessType = "inputOnly";
field29.type = "SFColor";
ProtoInterface26.field[2] = field29;

field field30 = createNode("field");
field30.name = "set_emissiveColor";
field30.accessType = "inputOnly";
field30.type = "SFColor";
ProtoInterface26.field[3] = field30;

field field31 = createNode("field");
field31.name = "set_specularColor";
field31.accessType = "inputOnly";
field31.type = "SFColor";
ProtoInterface26.field[4] = field31;

field field32 = createNode("field");
field32.name = "set_shininess";
field32.accessType = "inputOnly";
field32.type = "SFFloat";
ProtoInterface26.field[5] = field32;

field field33 = createNode("field");
field33.name = "set_q";
field33.accessType = "inputOnly";
field33.type = "SFVec2f";
ProtoInterface26.field[6] = field33;

field field34 = createNode("field");
field34.name = "set_s";
field34.accessType = "inputOnly";
field34.type = "SFFloat";
ProtoInterface26.field[7] = field34;

field field35 = createNode("field");
field35.name = "set_t";
field35.accessType = "inputOnly";
field35.type = "SFVec2f";
ProtoInterface26.field[8] = field35;

field field36 = createNode("field");
field36.name = "set_u";
field36.accessType = "inputOnly";
field36.type = "SFVec2f";
ProtoInterface26.field[9] = field36;

field field37 = createNode("field");
field37.name = "set_v";
field37.accessType = "inputOnly";
field37.type = "SFNode";
ProtoInterface26.field[10] = field37;

field field38 = createNode("field");
field38.name = "set_url";
field38.accessType = "inputOnly";
field38.type = "MFString";
ProtoInterface26.field[11] = field38;

field field39 = createNode("field");
field39.name = "w";
field39.accessType = "inputOnly";
field39.type = "SFBool";
ProtoInterface26.field[12] = field39;

field field40 = createNode("field");
field40.name = "p_changed";
field40.accessType = "outputOnly";
field40.type = "SFBool";
ProtoInterface26.field[13] = field40;

field field41 = createNode("field");
field41.name = "transparency_changed";
field41.accessType = "outputOnly";
field41.type = "SFFloat";
ProtoInterface26.field[14] = field41;

field field42 = createNode("field");
field42.name = "diffuseColor_changed";
field42.accessType = "outputOnly";
field42.type = "SFColor";
ProtoInterface26.field[15] = field42;

field field43 = createNode("field");
field43.name = "emissiveColor_changed";
field43.accessType = "outputOnly";
field43.type = "SFColor";
ProtoInterface26.field[16] = field43;

field field44 = createNode("field");
field44.name = "specularColor_changed";
field44.accessType = "outputOnly";
field44.type = "SFColor";
ProtoInterface26.field[17] = field44;

field field45 = createNode("field");
field45.name = "shininess_changed";
field45.accessType = "outputOnly";
field45.type = "SFFloat";
ProtoInterface26.field[18] = field45;

field field46 = createNode("field");
field46.name = "q_changed";
field46.accessType = "outputOnly";
field46.type = "SFVec2f";
ProtoInterface26.field[19] = field46;

field field47 = createNode("field");
field47.name = "s_changed";
field47.accessType = "outputOnly";
field47.type = "SFFloat";
ProtoInterface26.field[20] = field47;

field field48 = createNode("field");
field48.name = "t_changed";
field48.accessType = "outputOnly";
field48.type = "SFVec2f";
ProtoInterface26.field[21] = field48;

field field49 = createNode("field");
field49.name = "u_changed";
field49.accessType = "outputOnly";
field49.type = "SFVec2f";
ProtoInterface26.field[22] = field49;

field field50 = createNode("field");
field50.name = "v_changed";
field50.accessType = "outputOnly";
field50.type = "SFNode";
ProtoInterface26.field[23] = field50;

field field51 = createNode("field");
field51.name = "url_changed";
field51.accessType = "outputOnly";
field51.type = "MFString";
ProtoInterface26.field[24] = field51;

field field52 = createNode("field");
field52.name = "A_changed";
field52.accessType = "outputOnly";
field52.type = "MFNode";
ProtoInterface26.field[25] = field52;

field field53 = createNode("field");
field53.name = "B";
field53.accessType = "inputOutput";
field53.type = "SFNode";
ProtoInterface26.field[26] = field53;

field field54 = createNode("field");
field54.name = "C";
field54.accessType = "inputOutput";
field54.type = "MFNode";
ProtoInterface26.field[27] = field54;

field field55 = createNode("field");
field55.name = "D";
field55.accessType = "inputOutput";
field55.type = "SFNode";
ProtoInterface26.field[28] = field55;

field field56 = createNode("field");
field56.name = "F";
field56.accessType = "inputOutput";
field56.type = "SFInt32";
field56.value = "-1";
ProtoInterface26.field[29] = field56;

field field57 = createNode("field");
field57.name = "G";
field57.accessType = "inputOutput";
field57.type = "SFBool";
ProtoInterface26.field[30] = field57;

field field58 = createNode("field");
field58.name = "children";
field58.accessType = "initializeOnly";
field58.type = "MFNode";
ProtoInterface26.field[31] = field58;

field field59 = createNode("field");
field59.name = "H";
field59.accessType = "initializeOnly";
field59.type = "SFBool";
field59.value = "true";
ProtoInterface26.field[32] = field59;

field field60 = createNode("field");
field60.name = "p";
field60.accessType = "initializeOnly";
field60.type = "SFBool";
field60.value = "true";
ProtoInterface26.field[33] = field60;

field field61 = createNode("field");
field61.name = "A";
field61.accessType = "initializeOnly";
field61.type = "MFNode";
ProtoInterface26.field[34] = field61;

ProtoDeclare25.protoInterface = ProtoInterface26;

ProtoBody ProtoBody62 = createNode("ProtoBody");
Group Group63 = createNode("Group");
IS IS64 = createNode("IS");
connect connect65 = createNode("connect");
connect65.nodeField = "children";
connect65.protoField = "children";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

Group63.iS = IS64;

ProtoBody62.children = new MFNode();

ProtoBody62.children[0] = Group63;

Script Script66 = createNode("Script");
Script66.DEF = "I";
Script66.directOutput = True;
field field67 = createNode("field");
field67.name = "set_p";
field67.accessType = "inputOnly";
field67.type = "SFBool";
Script66.field = new MFNode();

Script66.field[0] = field67;

field field68 = createNode("field");
field68.name = "set_transparency";
field68.accessType = "inputOnly";
field68.type = "SFFloat";
Script66.field[1] = field68;

field field69 = createNode("field");
field69.name = "set_diffuseColor";
field69.accessType = "inputOnly";
field69.type = "SFColor";
Script66.field[2] = field69;

field field70 = createNode("field");
field70.name = "set_emissiveColor";
field70.accessType = "inputOnly";
field70.type = "SFColor";
Script66.field[3] = field70;

field field71 = createNode("field");
field71.name = "set_specularColor";
field71.accessType = "inputOnly";
field71.type = "SFColor";
Script66.field[4] = field71;

field field72 = createNode("field");
field72.name = "set_shininess";
field72.accessType = "inputOnly";
field72.type = "SFFloat";
Script66.field[5] = field72;

field field73 = createNode("field");
field73.name = "set_q";
field73.accessType = "inputOnly";
field73.type = "SFVec2f";
Script66.field[6] = field73;

field field74 = createNode("field");
field74.name = "set_s";
field74.accessType = "inputOnly";
field74.type = "SFFloat";
Script66.field[7] = field74;

field field75 = createNode("field");
field75.name = "set_t";
field75.accessType = "inputOnly";
field75.type = "SFVec2f";
Script66.field[8] = field75;

field field76 = createNode("field");
field76.name = "set_u";
field76.accessType = "inputOnly";
field76.type = "SFVec2f";
Script66.field[9] = field76;

field field77 = createNode("field");
field77.name = "set_url";
field77.accessType = "inputOnly";
field77.type = "MFString";
Script66.field[10] = field77;

field field78 = createNode("field");
field78.name = "set_v";
field78.accessType = "inputOnly";
field78.type = "SFNode";
Script66.field[11] = field78;

field field79 = createNode("field");
field79.name = "w";
field79.accessType = "inputOnly";
field79.type = "SFBool";
Script66.field[12] = field79;

field field80 = createNode("field");
field80.name = "p_changed";
field80.accessType = "outputOnly";
field80.type = "SFBool";
Script66.field[13] = field80;

field field81 = createNode("field");
field81.name = "transparency_changed";
field81.accessType = "outputOnly";
field81.type = "SFFloat";
Script66.field[14] = field81;

field field82 = createNode("field");
field82.name = "diffuseColor_changed";
field82.accessType = "outputOnly";
field82.type = "SFColor";
Script66.field[15] = field82;

field field83 = createNode("field");
field83.name = "emissiveColor_changed";
field83.accessType = "outputOnly";
field83.type = "SFColor";
Script66.field[16] = field83;

field field84 = createNode("field");
field84.name = "specularColor_changed";
field84.accessType = "outputOnly";
field84.type = "SFColor";
Script66.field[17] = field84;

field field85 = createNode("field");
field85.name = "shininess_changed";
field85.accessType = "outputOnly";
field85.type = "SFFloat";
Script66.field[18] = field85;

field field86 = createNode("field");
field86.name = "q_changed";
field86.accessType = "outputOnly";
field86.type = "SFVec2f";
Script66.field[19] = field86;

field field87 = createNode("field");
field87.name = "s_changed";
field87.accessType = "outputOnly";
field87.type = "SFFloat";
Script66.field[20] = field87;

field field88 = createNode("field");
field88.name = "t_changed";
field88.accessType = "outputOnly";
field88.type = "SFVec2f";
Script66.field[21] = field88;

field field89 = createNode("field");
field89.name = "u_changed";
field89.accessType = "outputOnly";
field89.type = "SFVec2f";
Script66.field[22] = field89;

field field90 = createNode("field");
field90.name = "url_changed";
field90.accessType = "outputOnly";
field90.type = "MFString";
Script66.field[23] = field90;

field field91 = createNode("field");
field91.name = "v_changed";
field91.accessType = "outputOnly";
field91.type = "SFNode";
Script66.field[24] = field91;

field field92 = createNode("field");
field92.name = "A_changed";
field92.accessType = "outputOnly";
field92.type = "MFNode";
Script66.field[25] = field92;

field field93 = createNode("field");
field93.name = "p";
field93.accessType = "initializeOnly";
field93.type = "SFBool";
Script66.field[26] = field93;

field field94 = createNode("field");
field94.name = "A";
field94.accessType = "initializeOnly";
field94.type = "MFNode";
Script66.field[27] = field94;

IS IS95 = createNode("IS");
connect connect96 = createNode("connect");
connect96.nodeField = "set_p";
connect96.protoField = "set_p";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

connect connect97 = createNode("connect");
connect97.nodeField = "set_transparency";
connect97.protoField = "set_transparency";
IS95.connect[1] = connect97;

connect connect98 = createNode("connect");
connect98.nodeField = "set_diffuseColor";
connect98.protoField = "set_diffuseColor";
IS95.connect[2] = connect98;

connect connect99 = createNode("connect");
connect99.nodeField = "set_emissiveColor";
connect99.protoField = "set_emissiveColor";
IS95.connect[3] = connect99;

connect connect100 = createNode("connect");
connect100.nodeField = "set_specularColor";
connect100.protoField = "set_specularColor";
IS95.connect[4] = connect100;

connect connect101 = createNode("connect");
connect101.nodeField = "set_shininess";
connect101.protoField = "set_shininess";
IS95.connect[5] = connect101;

connect connect102 = createNode("connect");
connect102.nodeField = "set_q";
connect102.protoField = "set_q";
IS95.connect[6] = connect102;

connect connect103 = createNode("connect");
connect103.nodeField = "set_s";
connect103.protoField = "set_s";
IS95.connect[7] = connect103;

connect connect104 = createNode("connect");
connect104.nodeField = "set_t";
connect104.protoField = "set_t";
IS95.connect[8] = connect104;

connect connect105 = createNode("connect");
connect105.nodeField = "set_u";
connect105.protoField = "set_u";
IS95.connect[9] = connect105;

connect connect106 = createNode("connect");
connect106.nodeField = "set_url";
connect106.protoField = "set_url";
IS95.connect[10] = connect106;

connect connect107 = createNode("connect");
connect107.nodeField = "set_v";
connect107.protoField = "set_v";
IS95.connect[11] = connect107;

connect connect108 = createNode("connect");
connect108.nodeField = "w";
connect108.protoField = "w";
IS95.connect[12] = connect108;

connect connect109 = createNode("connect");
connect109.nodeField = "p_changed";
connect109.protoField = "p_changed";
IS95.connect[13] = connect109;

connect connect110 = createNode("connect");
connect110.nodeField = "transparency_changed";
connect110.protoField = "transparency_changed";
IS95.connect[14] = connect110;

connect connect111 = createNode("connect");
connect111.nodeField = "diffuseColor_changed";
connect111.protoField = "diffuseColor_changed";
IS95.connect[15] = connect111;

connect connect112 = createNode("connect");
connect112.nodeField = "emissiveColor_changed";
connect112.protoField = "emissiveColor_changed";
IS95.connect[16] = connect112;

connect connect113 = createNode("connect");
connect113.nodeField = "specularColor_changed";
connect113.protoField = "specularColor_changed";
IS95.connect[17] = connect113;

connect connect114 = createNode("connect");
connect114.nodeField = "shininess_changed";
connect114.protoField = "shininess_changed";
IS95.connect[18] = connect114;

connect connect115 = createNode("connect");
connect115.nodeField = "q_changed";
connect115.protoField = "q_changed";
IS95.connect[19] = connect115;

connect connect116 = createNode("connect");
connect116.nodeField = "s_changed";
connect116.protoField = "s_changed";
IS95.connect[20] = connect116;

connect connect117 = createNode("connect");
connect117.nodeField = "t_changed";
connect117.protoField = "t_changed";
IS95.connect[21] = connect117;

connect connect118 = createNode("connect");
connect118.nodeField = "u_changed";
connect118.protoField = "u_changed";
IS95.connect[22] = connect118;

connect connect119 = createNode("connect");
connect119.nodeField = "url_changed";
connect119.protoField = "url_changed";
IS95.connect[23] = connect119;

connect connect120 = createNode("connect");
connect120.nodeField = "v_changed";
connect120.protoField = "v_changed";
IS95.connect[24] = connect120;

connect connect121 = createNode("connect");
connect121.nodeField = "A_changed";
connect121.protoField = "A_changed";
IS95.connect[25] = connect121;

connect connect122 = createNode("connect");
connect122.nodeField = "p";
connect122.protoField = "p";
IS95.connect[26] = connect122;

connect connect123 = createNode("connect");
connect123.nodeField = "A";
connect123.protoField = "A";
IS95.connect[27] = connect123;

Script66.iS = IS95;


Script66.setSourceCode(`javascript:\n"+
"function set_p(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_p=n;\n"+
"}\n"+
"p=n;\n"+
"p_changed=n;\n"+
"}\n"+
"function initialize(){\n"+
"p_changed=p;\n"+
"A_changed=A;\n"+
"}\n"+
"function set_diffuseColor(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_diffuseColor=n;\n"+
"}\n"+
"diffuseColor_changed=n;\n"+
"}\n"+
"function set_specularColor(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_specularColor=n;\n"+
"}\n"+
"specularColor_changed=n;\n"+
"}\n"+
"function set_emissiveColor(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_emissiveColor=n;\n"+
"}\n"+
"emissiveColor_changed=n;\n"+
"}\n"+
"function set_transparency(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_transparency=n;\n"+
"}\n"+
"transparency_changed=n;\n"+
"}\n"+
"function set_shininess(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_shininess=n;\n"+
"}\n"+
"shininess_changed=n;\n"+
"}\n"+
"function set_q(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_q=n;\n"+
"}\n"+
"q_changed=n;\n"+
"}\n"+
"function set_u(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_u=n;\n"+
"}\n"+
"u_changed=n;\n"+
"}\n"+
"function set_t(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_t=n;\n"+
"}\n"+
"t_changed=n;\n"+
"}\n"+
"function set_s(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_s=n;\n"+
"}\n"+
"s_changed=n;\n"+
"}\n"+
"function set_url(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_url=n;\n"+
"}\n"+
"url_changed=n;\n"+
"}\n"+
"function set_v(n){\n"+
"for(J=0;J<A.length;J++){\n"+
"A[J].set_v=n;\n"+
"}\n"+
"v_changed=n;\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody62.children[1] = Script66;

ProtoDeclare25.protoBody = ProtoBody62;

children[1] = ProtoDeclare25;

ProtoDeclare ProtoDeclare124 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="K" ><ProtoInterface><field name="set_transparency" accessType="inputOnly" type="SFFloat"></field>
<field name="set_intensity" accessType="inputOnly" type="SFFloat"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="transparency_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="intensity_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="p" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="D" accessType="inputOutput" type="SFNode"></field>
<field name="F" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="type" accessType="initializeOnly" type="SFInt32"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat" value="1000"></field>
<field name="L" accessType="initializeOnly" type="SFFloat"></field>
<field name="attenuation" accessType="initializeOnly" type="SFVec3f" value="1 0 0"></field>
<field name="direction" accessType="initializeOnly" type="SFVec3f" value="0 0 -1"></field>
<field name="beamWidth" accessType="initializeOnly" type="SFFloat" value="0.131"></field>
<field name="cutOffAngle" accessType="initializeOnly" type="SFFloat" value="1.57"></field>
<field name="intensity" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="M" accessType="initializeOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Switch whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="type"></connect>
</IS>
<PointLight DEF="N_1"><IS><connect nodeField="on" protoField="p"></connect>
<connect nodeField="color" protoField="diffuseColor"></connect>
<connect nodeField="intensity" protoField="intensity"></connect>
<connect nodeField="attenuation" protoField="attenuation"></connect>
<connect nodeField="radius" protoField="radius"></connect>
</IS>
</PointLight>
<SpotLight DEF="O_1"><IS><connect nodeField="on" protoField="p"></connect>
<connect nodeField="color" protoField="diffuseColor"></connect>
<connect nodeField="intensity" protoField="intensity"></connect>
<connect nodeField="attenuation" protoField="attenuation"></connect>
<connect nodeField="direction" protoField="direction"></connect>
<connect nodeField="beamWidth" protoField="beamWidth"></connect>
<connect nodeField="cutOffAngle" protoField="cutOffAngle"></connect>
</IS>
</SpotLight>
</Switch>
<Group><IS><connect nodeField="children" protoField="M"></connect>
</IS>
</Group>
</Group>
<Script DEF="P_1" directOutput="true"><field name="set_transparency" accessType="inputOnly" type="SFFloat"></field>
<field name="set_intensity" accessType="inputOnly" type="SFFloat"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="intensity_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="transparency_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="intensity" accessType="initializeOnly" type="SFFloat"></field>
<IS><connect nodeField="set_transparency" protoField="set_transparency"></connect>
<connect nodeField="set_intensity" protoField="set_intensity"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="intensity_changed" protoField="intensity_changed"></connect>
<connect nodeField="transparency_changed" protoField="transparency_changed"></connect>
<connect nodeField="intensity" protoField="intensity"></connect>
</IS>
<![CDATA[javascript:
function set_transparency(n){
intensity=1-n;
intensity_changed=intensity;
transparency_changed=n;
}
function set_intensity(n){
intensity=n;
intensity_changed=n;
transparency_changed=1-n;
}
function w(){
}]]></Script>
<ROUTE fromNode="P_1" fromField="intensity_changed" toNode="N_1" toField="set_intensity"></ROUTE>
<ROUTE fromNode="P_1" fromField="intensity_changed" toNode="O_1" toField="set_intensity"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare124.name = "K";
ProtoInterface ProtoInterface125 = createNode("ProtoInterface");
field field126 = createNode("field");
field126.name = "set_transparency";
field126.accessType = "inputOnly";
field126.type = "SFFloat";
ProtoInterface125.field = new MFNode();

ProtoInterface125.field[0] = field126;

field field127 = createNode("field");
field127.name = "set_intensity";
field127.accessType = "inputOnly";
field127.type = "SFFloat";
ProtoInterface125.field[1] = field127;

field field128 = createNode("field");
field128.name = "w";
field128.accessType = "inputOnly";
field128.type = "SFBool";
ProtoInterface125.field[2] = field128;

field field129 = createNode("field");
field129.name = "transparency_changed";
field129.accessType = "outputOnly";
field129.type = "SFFloat";
ProtoInterface125.field[3] = field129;

field field130 = createNode("field");
field130.name = "intensity_changed";
field130.accessType = "outputOnly";
field130.type = "SFFloat";
ProtoInterface125.field[4] = field130;

field field131 = createNode("field");
field131.name = "p";
field131.accessType = "inputOutput";
field131.type = "SFBool";
field131.value = "true";
ProtoInterface125.field[5] = field131;

field field132 = createNode("field");
field132.name = "diffuseColor";
field132.accessType = "inputOutput";
field132.type = "SFColor";
field132.value = "1 1 1";
ProtoInterface125.field[6] = field132;

field field133 = createNode("field");
field133.name = "B";
field133.accessType = "inputOutput";
field133.type = "SFNode";
ProtoInterface125.field[7] = field133;

field field134 = createNode("field");
field134.name = "C";
field134.accessType = "inputOutput";
field134.type = "MFNode";
ProtoInterface125.field[8] = field134;

field field135 = createNode("field");
field135.name = "D";
field135.accessType = "inputOutput";
field135.type = "SFNode";
ProtoInterface125.field[9] = field135;

field field136 = createNode("field");
field136.name = "F";
field136.accessType = "inputOutput";
field136.type = "SFInt32";
field136.value = "-1";
ProtoInterface125.field[10] = field136;

field field137 = createNode("field");
field137.name = "type";
field137.accessType = "initializeOnly";
field137.type = "SFInt32";
ProtoInterface125.field[11] = field137;

field field138 = createNode("field");
field138.name = "radius";
field138.accessType = "initializeOnly";
field138.type = "SFFloat";
field138.value = "1000";
ProtoInterface125.field[12] = field138;

field field139 = createNode("field");
field139.name = "L";
field139.accessType = "initializeOnly";
field139.type = "SFFloat";
ProtoInterface125.field[13] = field139;

field field140 = createNode("field");
field140.name = "attenuation";
field140.accessType = "initializeOnly";
field140.type = "SFVec3f";
field140.value = "1 0 0";
ProtoInterface125.field[14] = field140;

field field141 = createNode("field");
field141.name = "direction";
field141.accessType = "initializeOnly";
field141.type = "SFVec3f";
field141.value = "0 0 -1";
ProtoInterface125.field[15] = field141;

field field142 = createNode("field");
field142.name = "beamWidth";
field142.accessType = "initializeOnly";
field142.type = "SFFloat";
field142.value = "0.131";
ProtoInterface125.field[16] = field142;

field field143 = createNode("field");
field143.name = "cutOffAngle";
field143.accessType = "initializeOnly";
field143.type = "SFFloat";
field143.value = "1.57";
ProtoInterface125.field[17] = field143;

field field144 = createNode("field");
field144.name = "intensity";
field144.accessType = "initializeOnly";
field144.type = "SFFloat";
field144.value = "1";
ProtoInterface125.field[18] = field144;

field field145 = createNode("field");
field145.name = "M";
field145.accessType = "initializeOnly";
field145.type = "MFNode";
ProtoInterface125.field[19] = field145;

ProtoDeclare124.protoInterface = ProtoInterface125;

ProtoBody ProtoBody146 = createNode("ProtoBody");
Group Group147 = createNode("Group");
Switch Switch148 = createNode("Switch");
Switch148.whichChoice = -1;
IS IS149 = createNode("IS");
connect connect150 = createNode("connect");
connect150.nodeField = "whichChoice";
connect150.protoField = "type";
IS149.connect = new MFNode();

IS149.connect[0] = connect150;

Switch148.iS = IS149;

PointLight PointLight151 = createNode("PointLight");
PointLight151.DEF = "N_1";
IS IS152 = createNode("IS");
connect connect153 = createNode("connect");
connect153.nodeField = "on";
connect153.protoField = "p";
IS152.connect = new MFNode();

IS152.connect[0] = connect153;

connect connect154 = createNode("connect");
connect154.nodeField = "color";
connect154.protoField = "diffuseColor";
IS152.connect[1] = connect154;

connect connect155 = createNode("connect");
connect155.nodeField = "intensity";
connect155.protoField = "intensity";
IS152.connect[2] = connect155;

connect connect156 = createNode("connect");
connect156.nodeField = "attenuation";
connect156.protoField = "attenuation";
IS152.connect[3] = connect156;

connect connect157 = createNode("connect");
connect157.nodeField = "radius";
connect157.protoField = "radius";
IS152.connect[4] = connect157;

PointLight151.iS = IS152;

Switch148.children = new MFNode();

Switch148.children[0] = PointLight151;

SpotLight SpotLight158 = createNode("SpotLight");
SpotLight158.DEF = "O_1";
IS IS159 = createNode("IS");
connect connect160 = createNode("connect");
connect160.nodeField = "on";
connect160.protoField = "p";
IS159.connect = new MFNode();

IS159.connect[0] = connect160;

connect connect161 = createNode("connect");
connect161.nodeField = "color";
connect161.protoField = "diffuseColor";
IS159.connect[1] = connect161;

connect connect162 = createNode("connect");
connect162.nodeField = "intensity";
connect162.protoField = "intensity";
IS159.connect[2] = connect162;

connect connect163 = createNode("connect");
connect163.nodeField = "attenuation";
connect163.protoField = "attenuation";
IS159.connect[3] = connect163;

connect connect164 = createNode("connect");
connect164.nodeField = "direction";
connect164.protoField = "direction";
IS159.connect[4] = connect164;

connect connect165 = createNode("connect");
connect165.nodeField = "beamWidth";
connect165.protoField = "beamWidth";
IS159.connect[5] = connect165;

connect connect166 = createNode("connect");
connect166.nodeField = "cutOffAngle";
connect166.protoField = "cutOffAngle";
IS159.connect[6] = connect166;

SpotLight158.iS = IS159;

Switch148.children[1] = SpotLight158;

Group147.children = new MFNode();

Group147.children[0] = Switch148;

Group Group167 = createNode("Group");
IS IS168 = createNode("IS");
connect connect169 = createNode("connect");
connect169.nodeField = "children";
connect169.protoField = "M";
IS168.connect = new MFNode();

IS168.connect[0] = connect169;

Group167.iS = IS168;

Group147.children[1] = Group167;

ProtoBody146.children = new MFNode();

ProtoBody146.children[0] = Group147;

Script Script170 = createNode("Script");
Script170.DEF = "P_1";
Script170.directOutput = True;
field field171 = createNode("field");
field171.name = "set_transparency";
field171.accessType = "inputOnly";
field171.type = "SFFloat";
Script170.field = new MFNode();

Script170.field[0] = field171;

field field172 = createNode("field");
field172.name = "set_intensity";
field172.accessType = "inputOnly";
field172.type = "SFFloat";
Script170.field[1] = field172;

field field173 = createNode("field");
field173.name = "w";
field173.accessType = "inputOnly";
field173.type = "SFBool";
Script170.field[2] = field173;

field field174 = createNode("field");
field174.name = "intensity_changed";
field174.accessType = "outputOnly";
field174.type = "SFFloat";
Script170.field[3] = field174;

field field175 = createNode("field");
field175.name = "transparency_changed";
field175.accessType = "outputOnly";
field175.type = "SFFloat";
Script170.field[4] = field175;

field field176 = createNode("field");
field176.name = "intensity";
field176.accessType = "initializeOnly";
field176.type = "SFFloat";
Script170.field[5] = field176;

IS IS177 = createNode("IS");
connect connect178 = createNode("connect");
connect178.nodeField = "set_transparency";
connect178.protoField = "set_transparency";
IS177.connect = new MFNode();

IS177.connect[0] = connect178;

connect connect179 = createNode("connect");
connect179.nodeField = "set_intensity";
connect179.protoField = "set_intensity";
IS177.connect[1] = connect179;

connect connect180 = createNode("connect");
connect180.nodeField = "w";
connect180.protoField = "w";
IS177.connect[2] = connect180;

connect connect181 = createNode("connect");
connect181.nodeField = "intensity_changed";
connect181.protoField = "intensity_changed";
IS177.connect[3] = connect181;

connect connect182 = createNode("connect");
connect182.nodeField = "transparency_changed";
connect182.protoField = "transparency_changed";
IS177.connect[4] = connect182;

connect connect183 = createNode("connect");
connect183.nodeField = "intensity";
connect183.protoField = "intensity";
IS177.connect[5] = connect183;

Script170.iS = IS177;


Script170.setSourceCode(`javascript:\n"+
"function set_transparency(n){\n"+
"intensity=1-n;\n"+
"intensity_changed=intensity;\n"+
"transparency_changed=n;\n"+
"}\n"+
"function set_intensity(n){\n"+
"intensity=n;\n"+
"intensity_changed=n;\n"+
"transparency_changed=1-n;\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody146.children[1] = Script170;

ROUTE ROUTE184 = createNode("ROUTE");
ROUTE184.fromNode = "P_1";
ROUTE184.fromField = "intensity_changed";
ROUTE184.toNode = "N_1";
ROUTE184.toField = "set_intensity";
ProtoBody146.children[2] = ROUTE184;

ROUTE ROUTE185 = createNode("ROUTE");
ROUTE185.fromNode = "P_1";
ROUTE185.fromField = "intensity_changed";
ROUTE185.toNode = "O_1";
ROUTE185.toField = "set_intensity";
ProtoBody146.children[3] = ROUTE185;

ProtoDeclare124.protoBody = ProtoBody146;

children[2] = ProtoDeclare124;

ProtoDeclare ProtoDeclare186 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Q" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="center" accessType="inputOutput" type="SFVec3f"></field>
<field name="T" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="V" accessType="initializeOnly" type="SFBool"></field>
<field name="W" accessType="initializeOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="X_1"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
<Script DEF="Y_1" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="Z_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="V" accessType="initializeOnly" type="SFBool"></field>
<field name="W" accessType="initializeOnly" type="SFInt32"></field>
<field name="aa" accessType="initializeOnly" type="SFBool"></field>
<field name="Z" accessType="initializeOnly" type="SFRotation"></field>
<field name="ba" accessType="initializeOnly" type="SFFloat"></field>
<field name="ca" accessType="initializeOnly" type="SFFloat"></field>
<field name="da" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="fa" accessType="initializeOnly" type="SFTime"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="R_changed" protoField="R_changed"></connect>
<connect nodeField="U" protoField="U"></connect>
<connect nodeField="V" protoField="V"></connect>
<connect nodeField="W" protoField="W"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
aa=FALSE;
if(W==0){
Z[0]=1.;
Z[1]=0.;
Z[2]=0.;
return;
}
if(W==1){
Z[0]=0.;
Z[1]=1.;
Z[2]=0.;
return;
}
if(W==2){
Z[0]=0.;
Z[1]=0.;
Z[2]=1.;
return;
}
}
function R(n){
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
da=TRUE;
R_changed=n;
fa=n;
}
function S(n){
aa=FALSE;
if(ea==n){
R(n);
}
}
function set_fraction(n){
if(da){
ba=n;
da=FALSE;
}else if(n<ca){
ba=(1.0-ca)+n;
}else{
ba=n-ca;
}
ca=n;
if(V==TRUE)Z[3]-=2.*Math.PI*ba;
else Z[3]+=2.*Math.PI*ba;
Z_changed=Z;
}]]></Script>
<ROUTE fromNode="Y_1" fromField="Z_changed" toNode="X_1" toField="set_rotation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare186.name = "Q";
ProtoInterface ProtoInterface187 = createNode("ProtoInterface");
field field188 = createNode("field");
field188.name = "R";
field188.accessType = "inputOnly";
field188.type = "SFTime";
ProtoInterface187.field = new MFNode();

ProtoInterface187.field[0] = field188;

field field189 = createNode("field");
field189.name = "S";
field189.accessType = "inputOnly";
field189.type = "SFTime";
ProtoInterface187.field[1] = field189;

field field190 = createNode("field");
field190.name = "set_fraction";
field190.accessType = "inputOnly";
field190.type = "SFFloat";
ProtoInterface187.field[2] = field190;

field field191 = createNode("field");
field191.name = "R_changed";
field191.accessType = "outputOnly";
field191.type = "SFTime";
ProtoInterface187.field[3] = field191;

field field192 = createNode("field");
field192.name = "translation";
field192.accessType = "inputOutput";
field192.type = "SFVec3f";
ProtoInterface187.field[4] = field192;

field field193 = createNode("field");
field193.name = "scale";
field193.accessType = "inputOutput";
field193.type = "SFVec3f";
field193.value = "1 1 1";
ProtoInterface187.field[5] = field193;

field field194 = createNode("field");
field194.name = "center";
field194.accessType = "inputOutput";
field194.type = "SFVec3f";
ProtoInterface187.field[6] = field194;

field field195 = createNode("field");
field195.name = "T";
field195.accessType = "inputOutput";
field195.type = "SFBool";
field195.value = "true";
ProtoInterface187.field[7] = field195;

field field196 = createNode("field");
field196.name = "rotation";
field196.accessType = "inputOutput";
field196.type = "SFRotation";
ProtoInterface187.field[8] = field196;

field field197 = createNode("field");
field197.name = "scaleOrientation";
field197.accessType = "inputOutput";
field197.type = "SFRotation";
ProtoInterface187.field[9] = field197;

field field198 = createNode("field");
field198.name = "U";
field198.accessType = "initializeOnly";
field198.type = "SFNode";
ProtoInterface187.field[10] = field198;

field field199 = createNode("field");
field199.name = "children";
field199.accessType = "initializeOnly";
field199.type = "MFNode";
ProtoInterface187.field[11] = field199;

field field200 = createNode("field");
field200.name = "V";
field200.accessType = "initializeOnly";
field200.type = "SFBool";
ProtoInterface187.field[12] = field200;

field field201 = createNode("field");
field201.name = "W";
field201.accessType = "initializeOnly";
field201.type = "SFInt32";
ProtoInterface187.field[13] = field201;

ProtoDeclare186.protoInterface = ProtoInterface187;

ProtoBody ProtoBody202 = createNode("ProtoBody");
Transform Transform203 = createNode("Transform");
Transform203.DEF = "X_1";
IS IS204 = createNode("IS");
connect connect205 = createNode("connect");
connect205.nodeField = "translation";
connect205.protoField = "translation";
IS204.connect = new MFNode();

IS204.connect[0] = connect205;

connect connect206 = createNode("connect");
connect206.nodeField = "rotation";
connect206.protoField = "rotation";
IS204.connect[1] = connect206;

connect connect207 = createNode("connect");
connect207.nodeField = "scale";
connect207.protoField = "scale";
IS204.connect[2] = connect207;

connect connect208 = createNode("connect");
connect208.nodeField = "scaleOrientation";
connect208.protoField = "scaleOrientation";
IS204.connect[3] = connect208;

connect connect209 = createNode("connect");
connect209.nodeField = "center";
connect209.protoField = "center";
IS204.connect[4] = connect209;

connect connect210 = createNode("connect");
connect210.nodeField = "children";
connect210.protoField = "children";
IS204.connect[5] = connect210;

Transform203.iS = IS204;

ProtoBody202.children = new MFNode();

ProtoBody202.children[0] = Transform203;

Script Script211 = createNode("Script");
Script211.DEF = "Y_1";
Script211.directOutput = True;
field field212 = createNode("field");
field212.name = "R";
field212.accessType = "inputOnly";
field212.type = "SFTime";
Script211.field = new MFNode();

Script211.field[0] = field212;

field field213 = createNode("field");
field213.name = "S";
field213.accessType = "inputOnly";
field213.type = "SFTime";
Script211.field[1] = field213;

field field214 = createNode("field");
field214.name = "set_fraction";
field214.accessType = "inputOnly";
field214.type = "SFFloat";
Script211.field[2] = field214;

field field215 = createNode("field");
field215.name = "R_changed";
field215.accessType = "outputOnly";
field215.type = "SFTime";
Script211.field[3] = field215;

field field216 = createNode("field");
field216.name = "Z_changed";
field216.accessType = "outputOnly";
field216.type = "SFRotation";
Script211.field[4] = field216;

field field217 = createNode("field");
field217.name = "U";
field217.accessType = "initializeOnly";
field217.type = "SFNode";
Script211.field[5] = field217;

field field218 = createNode("field");
field218.name = "V";
field218.accessType = "initializeOnly";
field218.type = "SFBool";
Script211.field[6] = field218;

field field219 = createNode("field");
field219.name = "W";
field219.accessType = "initializeOnly";
field219.type = "SFInt32";
Script211.field[7] = field219;

field field220 = createNode("field");
field220.name = "aa";
field220.accessType = "initializeOnly";
field220.type = "SFBool";
Script211.field[8] = field220;

field field221 = createNode("field");
field221.name = "Z";
field221.accessType = "initializeOnly";
field221.type = "SFRotation";
Script211.field[9] = field221;

field field222 = createNode("field");
field222.name = "ba";
field222.accessType = "initializeOnly";
field222.type = "SFFloat";
Script211.field[10] = field222;

field field223 = createNode("field");
field223.name = "ca";
field223.accessType = "initializeOnly";
field223.type = "SFFloat";
Script211.field[11] = field223;

field field224 = createNode("field");
field224.name = "da";
field224.accessType = "initializeOnly";
field224.type = "SFBool";
field224.value = "true";
Script211.field[12] = field224;

field field225 = createNode("field");
field225.name = "ea";
field225.accessType = "initializeOnly";
field225.type = "SFTime";
Script211.field[13] = field225;

field field226 = createNode("field");
field226.name = "fa";
field226.accessType = "initializeOnly";
field226.type = "SFTime";
Script211.field[14] = field226;

IS IS227 = createNode("IS");
connect connect228 = createNode("connect");
connect228.nodeField = "R";
connect228.protoField = "R";
IS227.connect = new MFNode();

IS227.connect[0] = connect228;

connect connect229 = createNode("connect");
connect229.nodeField = "S";
connect229.protoField = "S";
IS227.connect[1] = connect229;

connect connect230 = createNode("connect");
connect230.nodeField = "set_fraction";
connect230.protoField = "set_fraction";
IS227.connect[2] = connect230;

connect connect231 = createNode("connect");
connect231.nodeField = "R_changed";
connect231.protoField = "R_changed";
IS227.connect[3] = connect231;

connect connect232 = createNode("connect");
connect232.nodeField = "U";
connect232.protoField = "U";
IS227.connect[4] = connect232;

connect connect233 = createNode("connect");
connect233.nodeField = "V";
connect233.protoField = "V";
IS227.connect[5] = connect233;

connect connect234 = createNode("connect");
connect234.nodeField = "W";
connect234.protoField = "W";
IS227.connect[6] = connect234;

Script211.iS = IS227;


Script211.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"aa=FALSE;\n"+
"if(W==0){\n"+
"Z[0]=1.;\n"+
"Z[1]=0.;\n"+
"Z[2]=0.;\n"+
"return;\n"+
"}\n"+
"if(W==1){\n"+
"Z[0]=0.;\n"+
"Z[1]=1.;\n"+
"Z[2]=0.;\n"+
"return;\n"+
"}\n"+
"if(W==2){\n"+
"Z[0]=0.;\n"+
"Z[1]=0.;\n"+
"Z[2]=1.;\n"+
"return;\n"+
"}\n"+
"}\n"+
"function R(n){\n"+
"if(fa==n){\n"+
"return;\n"+
"}\n"+
"if(aa==TRUE){\n"+
"ea=n;\n"+
"return;\n"+
"}\n"+
"aa=TRUE;\n"+
"da=TRUE;\n"+
"R_changed=n;\n"+
"fa=n;\n"+
"}\n"+
"function S(n){\n"+
"aa=FALSE;\n"+
"if(ea==n){\n"+
"R(n);\n"+
"}\n"+
"}\n"+
"function set_fraction(n){\n"+
"if(da){\n"+
"ba=n;\n"+
"da=FALSE;\n"+
"}else if(n<ca){\n"+
"ba=(1.0-ca)+n;\n"+
"}else{\n"+
"ba=n-ca;\n"+
"}\n"+
"ca=n;\n"+
"if(V==TRUE)Z[3]-=2.*Math.PI*ba;\n"+
"else Z[3]+=2.*Math.PI*ba;\n"+
"Z_changed=Z;\n"+
"}`)
ProtoBody202.children[1] = Script211;

ROUTE ROUTE235 = createNode("ROUTE");
ROUTE235.fromNode = "Y_1";
ROUTE235.fromField = "Z_changed";
ROUTE235.toNode = "X_1";
ROUTE235.toField = "set_rotation";
ProtoBody202.children[2] = ROUTE235;

ProtoDeclare186.protoBody = ProtoBody202;

children[3] = ProtoDeclare186;

ProtoDeclare ProtoDeclare236 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ga" ><ProtoInterface><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="url" accessType="inputOutput" type="MFString"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="0 0.48 0.8"></field>
<field name="emissiveColor" accessType="inputOutput" type="SFColor" value="0 0.09 0.15"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="0.5 0.5 0.5"></field>
<field name="shininess" accessType="inputOutput" type="SFFloat" value="0.2"></field>
<field name="q" accessType="inputOutput" type="SFVec2f" value="-0.5 -0.5"></field>
<field name="s" accessType="inputOutput" type="SFFloat"></field>
<field name="t" accessType="inputOutput" type="SFVec2f" value="1 1"></field>
<field name="u" accessType="inputOutput" type="SFVec2f"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="D" accessType="inputOutput" type="SFNode"></field>
<field name="F" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="p" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="geometry" accessType="initializeOnly" type="SFNode"></field>
<field name="choice" accessType="initializeOnly" type="SFInt32"></field>
<field name="ha" accessType="initializeOnly" type="SFVec3f" value="0 0 0.5"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="ia_1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="choice"></connect>
</IS>
<Shape><IS><connect nodeField="geometry" protoField="geometry"></connect>
</IS>
<Appearance containerField="appearance" DEF="ja_1"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
<ImageTexture containerField="texture"><IS><connect nodeField="url" protoField="url"></connect>
</IS>
</ImageTexture>
<TextureTransform containerField="textureTransform"><IS><connect nodeField="translation" protoField="u"></connect>
<connect nodeField="rotation" protoField="s"></connect>
<connect nodeField="scale" protoField="t"></connect>
<connect nodeField="center" protoField="q"></connect>
</IS>
</TextureTransform>
</Appearance>
</Shape>
</Switch>
<Script DEF="ka" directOutput="true"><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="p" accessType="initializeOnly" type="SFBool"></field>
<field name="la" accessType="initializeOnly" type="SFNode"><Appearance USE="ja_1"></Appearance>
</field>
<field name="ma" accessType="initializeOnly" type="SFNode"><Switch USE="ia_1"></Switch>
</field>
<IS><connect nodeField="set_p" protoField="set_p"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="set_v" protoField="set_v"></connect>
<connect nodeField="p_changed" protoField="p_changed"></connect>
<connect nodeField="v_changed" protoField="v_changed"></connect>
<connect nodeField="p" protoField="p"></connect>
</IS>
<![CDATA[javascript:
function set_p(n){
if(n==TRUE){
ma.whichChoice=0;
}else{
ma.whichChoice=-1;
}
p=n;
p_changed=n;
}
function initialize(){
v_changed=la.texture_changed;
set_p(p);
}
function set_v(n){
la.set_texture=n;
v_changed=n;
}
function w(){
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare236.name = "ga";
ProtoInterface ProtoInterface237 = createNode("ProtoInterface");
field field238 = createNode("field");
field238.name = "set_p";
field238.accessType = "inputOnly";
field238.type = "SFBool";
ProtoInterface237.field = new MFNode();

ProtoInterface237.field[0] = field238;

field field239 = createNode("field");
field239.name = "w";
field239.accessType = "inputOnly";
field239.type = "SFBool";
ProtoInterface237.field[1] = field239;

field field240 = createNode("field");
field240.name = "set_v";
field240.accessType = "inputOnly";
field240.type = "SFNode";
ProtoInterface237.field[2] = field240;

field field241 = createNode("field");
field241.name = "p_changed";
field241.accessType = "outputOnly";
field241.type = "SFBool";
ProtoInterface237.field[3] = field241;

field field242 = createNode("field");
field242.name = "v_changed";
field242.accessType = "outputOnly";
field242.type = "SFNode";
ProtoInterface237.field[4] = field242;

field field243 = createNode("field");
field243.name = "url";
field243.accessType = "inputOutput";
field243.type = "MFString";
ProtoInterface237.field[5] = field243;

field field244 = createNode("field");
field244.name = "transparency";
field244.accessType = "inputOutput";
field244.type = "SFFloat";
ProtoInterface237.field[6] = field244;

field field245 = createNode("field");
field245.name = "diffuseColor";
field245.accessType = "inputOutput";
field245.type = "SFColor";
field245.value = "0 0.48 0.8";
ProtoInterface237.field[7] = field245;

field field246 = createNode("field");
field246.name = "emissiveColor";
field246.accessType = "inputOutput";
field246.type = "SFColor";
field246.value = "0 0.09 0.15";
ProtoInterface237.field[8] = field246;

field field247 = createNode("field");
field247.name = "specularColor";
field247.accessType = "inputOutput";
field247.type = "SFColor";
field247.value = "0.5 0.5 0.5";
ProtoInterface237.field[9] = field247;

field field248 = createNode("field");
field248.name = "shininess";
field248.accessType = "inputOutput";
field248.type = "SFFloat";
field248.value = "0.2";
ProtoInterface237.field[10] = field248;

field field249 = createNode("field");
field249.name = "q";
field249.accessType = "inputOutput";
field249.type = "SFVec2f";
field249.value = "-0.5 -0.5";
ProtoInterface237.field[11] = field249;

field field250 = createNode("field");
field250.name = "s";
field250.accessType = "inputOutput";
field250.type = "SFFloat";
ProtoInterface237.field[12] = field250;

field field251 = createNode("field");
field251.name = "t";
field251.accessType = "inputOutput";
field251.type = "SFVec2f";
field251.value = "1 1";
ProtoInterface237.field[13] = field251;

field field252 = createNode("field");
field252.name = "u";
field252.accessType = "inputOutput";
field252.type = "SFVec2f";
ProtoInterface237.field[14] = field252;

field field253 = createNode("field");
field253.name = "B";
field253.accessType = "inputOutput";
field253.type = "SFNode";
ProtoInterface237.field[15] = field253;

field field254 = createNode("field");
field254.name = "C";
field254.accessType = "inputOutput";
field254.type = "MFNode";
ProtoInterface237.field[16] = field254;

field field255 = createNode("field");
field255.name = "D";
field255.accessType = "inputOutput";
field255.type = "SFNode";
ProtoInterface237.field[17] = field255;

field field256 = createNode("field");
field256.name = "F";
field256.accessType = "inputOutput";
field256.type = "SFInt32";
field256.value = "-1";
ProtoInterface237.field[18] = field256;

field field257 = createNode("field");
field257.name = "p";
field257.accessType = "initializeOnly";
field257.type = "SFBool";
field257.value = "true";
ProtoInterface237.field[19] = field257;

field field258 = createNode("field");
field258.name = "geometry";
field258.accessType = "initializeOnly";
field258.type = "SFNode";
ProtoInterface237.field[20] = field258;

field field259 = createNode("field");
field259.name = "choice";
field259.accessType = "initializeOnly";
field259.type = "SFInt32";
ProtoInterface237.field[21] = field259;

field field260 = createNode("field");
field260.name = "ha";
field260.accessType = "initializeOnly";
field260.type = "SFVec3f";
field260.value = "0 0 0.5";
ProtoInterface237.field[22] = field260;

ProtoDeclare236.protoInterface = ProtoInterface237;

ProtoBody ProtoBody261 = createNode("ProtoBody");
Switch Switch262 = createNode("Switch");
Switch262.DEF = "ia_1";
Switch262.whichChoice = -1;
IS IS263 = createNode("IS");
connect connect264 = createNode("connect");
connect264.nodeField = "whichChoice";
connect264.protoField = "choice";
IS263.connect = new MFNode();

IS263.connect[0] = connect264;

Switch262.iS = IS263;

Shape Shape265 = createNode("Shape");
IS IS266 = createNode("IS");
connect connect267 = createNode("connect");
connect267.nodeField = "geometry";
connect267.protoField = "geometry";
IS266.connect = new MFNode();

IS266.connect[0] = connect267;

Shape265.iS = IS266;

Appearance Appearance268 = createNode("Appearance");
Appearance268.DEF = "ja_1";
Material Material269 = createNode("Material");
IS IS270 = createNode("IS");
connect connect271 = createNode("connect");
connect271.nodeField = "diffuseColor";
connect271.protoField = "diffuseColor";
IS270.connect = new MFNode();

IS270.connect[0] = connect271;

connect connect272 = createNode("connect");
connect272.nodeField = "specularColor";
connect272.protoField = "specularColor";
IS270.connect[1] = connect272;

connect connect273 = createNode("connect");
connect273.nodeField = "emissiveColor";
connect273.protoField = "emissiveColor";
IS270.connect[2] = connect273;

connect connect274 = createNode("connect");
connect274.nodeField = "shininess";
connect274.protoField = "shininess";
IS270.connect[3] = connect274;

connect connect275 = createNode("connect");
connect275.nodeField = "transparency";
connect275.protoField = "transparency";
IS270.connect[4] = connect275;

Material269.iS = IS270;

Appearance268.material = Material269;

ImageTexture ImageTexture276 = createNode("ImageTexture");
IS IS277 = createNode("IS");
connect connect278 = createNode("connect");
connect278.nodeField = "url";
connect278.protoField = "url";
IS277.connect = new MFNode();

IS277.connect[0] = connect278;

ImageTexture276.iS = IS277;

Appearance268.texture = ImageTexture276;

TextureTransform TextureTransform279 = createNode("TextureTransform");
IS IS280 = createNode("IS");
connect connect281 = createNode("connect");
connect281.nodeField = "translation";
connect281.protoField = "u";
IS280.connect = new MFNode();

IS280.connect[0] = connect281;

connect connect282 = createNode("connect");
connect282.nodeField = "rotation";
connect282.protoField = "s";
IS280.connect[1] = connect282;

connect connect283 = createNode("connect");
connect283.nodeField = "scale";
connect283.protoField = "t";
IS280.connect[2] = connect283;

connect connect284 = createNode("connect");
connect284.nodeField = "center";
connect284.protoField = "q";
IS280.connect[3] = connect284;

TextureTransform279.iS = IS280;

Appearance268.textureTransform = TextureTransform279;

Shape265.appearance = Appearance268;

Switch262.children = new MFNode();

Switch262.children[0] = Shape265;

ProtoBody261.children = new MFNode();

ProtoBody261.children[0] = Switch262;

Script Script285 = createNode("Script");
Script285.DEF = "ka";
Script285.directOutput = True;
field field286 = createNode("field");
field286.name = "set_p";
field286.accessType = "inputOnly";
field286.type = "SFBool";
Script285.field = new MFNode();

Script285.field[0] = field286;

field field287 = createNode("field");
field287.name = "w";
field287.accessType = "inputOnly";
field287.type = "SFBool";
Script285.field[1] = field287;

field field288 = createNode("field");
field288.name = "set_v";
field288.accessType = "inputOnly";
field288.type = "SFNode";
Script285.field[2] = field288;

field field289 = createNode("field");
field289.name = "p_changed";
field289.accessType = "outputOnly";
field289.type = "SFBool";
Script285.field[3] = field289;

field field290 = createNode("field");
field290.name = "v_changed";
field290.accessType = "outputOnly";
field290.type = "SFNode";
Script285.field[4] = field290;

field field291 = createNode("field");
field291.name = "p";
field291.accessType = "initializeOnly";
field291.type = "SFBool";
Script285.field[5] = field291;

field field292 = createNode("field");
field292.name = "la";
field292.accessType = "initializeOnly";
field292.type = "SFNode";
Appearance Appearance293 = createNode("Appearance");
Appearance293.USE = "ja_1";
field292.children = new MFNode();

field292.children[0] = Appearance293;

Script285.field[6] = field292;

field field294 = createNode("field");
field294.name = "ma";
field294.accessType = "initializeOnly";
field294.type = "SFNode";
Switch Switch295 = createNode("Switch");
Switch295.USE = "ia_1";
field294.children = new MFNode();

field294.children[0] = Switch295;

Script285.field[7] = field294;

IS IS296 = createNode("IS");
connect connect297 = createNode("connect");
connect297.nodeField = "set_p";
connect297.protoField = "set_p";
IS296.connect = new MFNode();

IS296.connect[0] = connect297;

connect connect298 = createNode("connect");
connect298.nodeField = "w";
connect298.protoField = "w";
IS296.connect[1] = connect298;

connect connect299 = createNode("connect");
connect299.nodeField = "set_v";
connect299.protoField = "set_v";
IS296.connect[2] = connect299;

connect connect300 = createNode("connect");
connect300.nodeField = "p_changed";
connect300.protoField = "p_changed";
IS296.connect[3] = connect300;

connect connect301 = createNode("connect");
connect301.nodeField = "v_changed";
connect301.protoField = "v_changed";
IS296.connect[4] = connect301;

connect connect302 = createNode("connect");
connect302.nodeField = "p";
connect302.protoField = "p";
IS296.connect[5] = connect302;

Script285.iS = IS296;


Script285.setSourceCode(`javascript:\n"+
"function set_p(n){\n"+
"if(n==TRUE){\n"+
"ma.whichChoice=0;\n"+
"}else{\n"+
"ma.whichChoice=-1;\n"+
"}\n"+
"p=n;\n"+
"p_changed=n;\n"+
"}\n"+
"function initialize(){\n"+
"v_changed=la.texture_changed;\n"+
"set_p(p);\n"+
"}\n"+
"function set_v(n){\n"+
"la.set_texture=n;\n"+
"v_changed=n;\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody261.children[1] = Script285;

ProtoDeclare236.protoBody = ProtoBody261;

children[4] = ProtoDeclare236;

ProtoDeclare ProtoDeclare303 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="na" ><ProtoInterface><field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="isOver" accessType="outputOnly" type="SFBool"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="hitPoint_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="hitTexCoord_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="oa" accessType="initializeOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><TouchSensor DEF="pa_1" enabled="false"><IS><connect nodeField="hitTexCoord_changed" protoField="hitTexCoord_changed"></connect>
<connect nodeField="hitPoint_changed" protoField="hitPoint_changed"></connect>
<connect nodeField="isOver" protoField="isOver"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
</TouchSensor>
<Script DEF="qa_1" directOutput="true"><field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="enabled_changed" accessType="outputOnly" type="SFBool"></field>
<field name="oa" accessType="initializeOnly" type="SFInt32"></field>
<IS><connect nodeField="set_enabled" protoField="set_enabled"></connect>
<connect nodeField="oa" protoField="oa"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
if(oa>0){
enabled_changed=TRUE;
}
}
function set_enabled(n){
if(n==TRUE){
if(oa==0){
enabled_changed=TRUE;
}
oa++;
}else{
if(oa==1){
enabled_changed=FALSE;
}
if(oa>0){
oa--;
}
}
}]]></Script>
<ROUTE fromNode="qa_1" fromField="enabled_changed" toNode="pa_1" toField="set_enabled"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare303.name = "na";
ProtoInterface ProtoInterface304 = createNode("ProtoInterface");
field field305 = createNode("field");
field305.name = "set_enabled";
field305.accessType = "inputOnly";
field305.type = "SFBool";
ProtoInterface304.field = new MFNode();

ProtoInterface304.field[0] = field305;

field field306 = createNode("field");
field306.name = "isOver";
field306.accessType = "outputOnly";
field306.type = "SFBool";
ProtoInterface304.field[1] = field306;

field field307 = createNode("field");
field307.name = "isActive";
field307.accessType = "outputOnly";
field307.type = "SFBool";
ProtoInterface304.field[2] = field307;

field field308 = createNode("field");
field308.name = "hitPoint_changed";
field308.accessType = "outputOnly";
field308.type = "SFVec3f";
ProtoInterface304.field[3] = field308;

field field309 = createNode("field");
field309.name = "hitTexCoord_changed";
field309.accessType = "outputOnly";
field309.type = "SFVec2f";
ProtoInterface304.field[4] = field309;

field field310 = createNode("field");
field310.name = "oa";
field310.accessType = "initializeOnly";
field310.type = "SFInt32";
ProtoInterface304.field[5] = field310;

ProtoDeclare303.protoInterface = ProtoInterface304;

ProtoBody ProtoBody311 = createNode("ProtoBody");
TouchSensor TouchSensor312 = createNode("TouchSensor");
TouchSensor312.DEF = "pa_1";
TouchSensor312.enabled = False;
IS IS313 = createNode("IS");
connect connect314 = createNode("connect");
connect314.nodeField = "hitTexCoord_changed";
connect314.protoField = "hitTexCoord_changed";
IS313.connect = new MFNode();

IS313.connect[0] = connect314;

connect connect315 = createNode("connect");
connect315.nodeField = "hitPoint_changed";
connect315.protoField = "hitPoint_changed";
IS313.connect[1] = connect315;

connect connect316 = createNode("connect");
connect316.nodeField = "isOver";
connect316.protoField = "isOver";
IS313.connect[2] = connect316;

connect connect317 = createNode("connect");
connect317.nodeField = "isActive";
connect317.protoField = "isActive";
IS313.connect[3] = connect317;

TouchSensor312.iS = IS313;

ProtoBody311.children = new MFNode();

ProtoBody311.children[0] = TouchSensor312;

Script Script318 = createNode("Script");
Script318.DEF = "qa_1";
Script318.directOutput = True;
field field319 = createNode("field");
field319.name = "set_enabled";
field319.accessType = "inputOnly";
field319.type = "SFBool";
Script318.field = new MFNode();

Script318.field[0] = field319;

field field320 = createNode("field");
field320.name = "enabled_changed";
field320.accessType = "outputOnly";
field320.type = "SFBool";
Script318.field[1] = field320;

field field321 = createNode("field");
field321.name = "oa";
field321.accessType = "initializeOnly";
field321.type = "SFInt32";
Script318.field[2] = field321;

IS IS322 = createNode("IS");
connect connect323 = createNode("connect");
connect323.nodeField = "set_enabled";
connect323.protoField = "set_enabled";
IS322.connect = new MFNode();

IS322.connect[0] = connect323;

connect connect324 = createNode("connect");
connect324.nodeField = "oa";
connect324.protoField = "oa";
IS322.connect[1] = connect324;

Script318.iS = IS322;


Script318.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"if(oa>0){\n"+
"enabled_changed=TRUE;\n"+
"}\n"+
"}\n"+
"function set_enabled(n){\n"+
"if(n==TRUE){\n"+
"if(oa==0){\n"+
"enabled_changed=TRUE;\n"+
"}\n"+
"oa++;\n"+
"}else{\n"+
"if(oa==1){\n"+
"enabled_changed=FALSE;\n"+
"}\n"+
"if(oa>0){\n"+
"oa--;\n"+
"}\n"+
"}\n"+
"}`)
ProtoBody311.children[1] = Script318;

ROUTE ROUTE325 = createNode("ROUTE");
ROUTE325.fromNode = "qa_1";
ROUTE325.fromField = "enabled_changed";
ROUTE325.toNode = "pa_1";
ROUTE325.toField = "set_enabled";
ProtoBody311.children[2] = ROUTE325;

ProtoDeclare303.protoBody = ProtoBody311;

children[5] = ProtoDeclare303;

ProtoDeclare ProtoDeclare326 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ra" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="sa" accessType="inputOnly" type="SFTime"></field>
<field name="ta" accessType="inputOnly" type="SFTime"></field>
<field name="fraction" accessType="outputOnly" type="SFFloat"></field>
<field name="ua" accessType="outputOnly" type="SFFloat"></field>
<field name="va" accessType="outputOnly" type="SFFloat"></field>
<field name="wa_changed" accessType="outputOnly" type="SFTime"></field>
<field name="xa_changed" accessType="outputOnly" type="SFTime"></field>
<field name="ya_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="za" accessType="outputOnly" type="SFTime"></field>
<field name="Aa" accessType="outputOnly" type="SFTime"></field>
<field name="Ba" accessType="outputOnly" type="SFTime"></field>
<field name="cycleInterval" accessType="initializeOnly" type="SFTime" value="2"></field>
<field name="Ca" accessType="initializeOnly" type="SFTime"></field>
<field name="Da" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="xa" accessType="initializeOnly" type="SFTime" value="5"></field>
<field name="Ea" accessType="initializeOnly" type="SFTime"></field>
<field name="Fa" accessType="initializeOnly" type="SFTime"></field>
<field name="Ga" accessType="initializeOnly" type="SFTime"></field>
<field name="Ha" accessType="initializeOnly" type="SFBool"></field>
<field name="direction" accessType="initializeOnly" type="SFInt32"></field>
<field name="loop" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="Ia" accessType="initializeOnly" type="SFBool"></field>
<field name="Ja" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="Ka" accessType="initializeOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><TimeSensor DEF="La_1" enabled="false" loop="true" startTime="1"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
</IS>
</TimeSensor>
<Script DEF="Ma_1" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="sa" accessType="inputOnly" type="SFTime"></field>
<field name="ta" accessType="inputOnly" type="SFTime"></field>
<field name="fraction" accessType="outputOnly" type="SFFloat"></field>
<field name="ua" accessType="outputOnly" type="SFFloat"></field>
<field name="va" accessType="outputOnly" type="SFFloat"></field>
<field name="wa_changed" accessType="outputOnly" type="SFTime"></field>
<field name="xa_changed" accessType="outputOnly" type="SFTime"></field>
<field name="ya_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="za" accessType="outputOnly" type="SFTime"></field>
<field name="Aa" accessType="outputOnly" type="SFTime"></field>
<field name="cycleInterval_changed" accessType="outputOnly" type="SFTime"></field>
<field name="Na" accessType="outputOnly" type="SFBool"></field>
<field name="Oa" accessType="outputOnly" type="SFTime"></field>
<field name="Pa" accessType="outputOnly" type="SFTime"></field>
<field name="Ba" accessType="outputOnly" type="SFTime"></field>
<field name="da" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="Qa" accessType="initializeOnly" type="SFFloat"></field>
<field name="Ra" accessType="initializeOnly" type="SFTime"></field>
<field name="direction" accessType="initializeOnly" type="SFInt32"></field>
<field name="Sa" accessType="initializeOnly" type="SFFloat"></field>
<field name="Ja" accessType="initializeOnly" type="SFBool"></field>
<field name="loop" accessType="initializeOnly" type="SFBool"></field>
<field name="Ia" accessType="initializeOnly" type="SFBool"></field>
<field name="cycleInterval" accessType="initializeOnly" type="SFTime"></field>
<field name="Ca" accessType="initializeOnly" type="SFTime"></field>
<field name="Da" accessType="initializeOnly" type="SFBool"></field>
<field name="xa" accessType="initializeOnly" type="SFTime"></field>
<field name="Ea" accessType="initializeOnly" type="SFTime"></field>
<field name="Fa" accessType="initializeOnly" type="SFTime"></field>
<field name="Ga" accessType="initializeOnly" type="SFTime"></field>
<field name="Ta" accessType="initializeOnly" type="SFTime"></field>
<field name="Ha" accessType="initializeOnly" type="SFBool"></field>
<field name="Ua" accessType="initializeOnly" type="SFTime"></field>
<field name="Va" accessType="initializeOnly" type="SFTime"></field>
<field name="ya" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Ka" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="sa" protoField="sa"></connect>
<connect nodeField="ta" protoField="ta"></connect>
<connect nodeField="fraction" protoField="fraction"></connect>
<connect nodeField="ua" protoField="ua"></connect>
<connect nodeField="va" protoField="va"></connect>
<connect nodeField="wa_changed" protoField="wa_changed"></connect>
<connect nodeField="xa_changed" protoField="xa_changed"></connect>
<connect nodeField="ya_changed" protoField="ya_changed"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="za" protoField="za"></connect>
<connect nodeField="Aa" protoField="Aa"></connect>
<connect nodeField="Ba" protoField="Ba"></connect>
<connect nodeField="direction" protoField="direction"></connect>
<connect nodeField="Ja" protoField="Ja"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="Ia" protoField="Ia"></connect>
<connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="Ca" protoField="Ca"></connect>
<connect nodeField="Da" protoField="Da"></connect>
<connect nodeField="xa" protoField="xa"></connect>
<connect nodeField="Ea" protoField="Ea"></connect>
<connect nodeField="Fa" protoField="Fa"></connect>
<connect nodeField="Ga" protoField="Ga"></connect>
<connect nodeField="Ha" protoField="Ha"></connect>
<connect nodeField="Ka" protoField="Ka"></connect>
</IS>
<![CDATA[javascript:
function Wa(){
var Xa=Math.random();
Va=
(cycleInterval-Ca)*(1-Xa)+
(cycleInterval+Ca)*Xa;
cycleInterval_changed=Va;
}
function Ya(){
var Xa=Math.random();
Ua=(xa-Ea)*(1-Xa)+
(xa+Ea)*Xa;
}
function initialize(){
if(direction==2){
cycleInterval*=2;
Ca*=2;
cycleInterval_changed=cycleInterval;
}
Wa();
if(Da==TRUE){
Ya();
}else{
Ua=-1;
}
if(Ka==FALSE){
Na=FALSE;
}else{
R(1,1);
}
}
function R(n,Za){
da=TRUE;
if((Ja==TRUE)||
((Ua>0)&&(ua==1))){
Sa=0;
if(Ca>0){
Wa();
}else{
Va=cycleInterval;
}
if(Da==TRUE){
if(Ea>0){
Ya();
}else{
Ua=xa;
}
}
}
ya[0]=Ua;
ya[1]=Va;
xa_changed=ya[0];
wa_changed=ya[1];
ya_changed=ya;
Na=TRUE;
startTime=Za;
Oa=Za;
}
function S(n,Za){
if((Ha==TRUE)||(Ga==0)){
Na=FALSE;
stopTime=Za;
}else{
Ta=Za;
}
}
function sa(n,Za){
if(Na==TRUE){
Na=FALSE;
stopTime=Za;
}
Ba=Za;
}
function ta(n,Za){
xa=n;
if(xa<(Fa+Ga)){
xa=Fa+Ga;
}
xa_changed=xa;
Ua=xa;
}
function ab(n,Za){
Na=FALSE;
stopTime=Za;
Ta=0;
va=0;
}
function bb(n,Za){
Na=FALSE;
stopTime=Za;
Ta=0;
va=0;
}
function cb(n,Za){
Na=FALSE;
stopTime=Ra+Ua;
if((Ca==0)&&
(Ea==0)){
var db=Ua;
while(db>cycleInterval){
db-=cycleInterval;
}
var eb=db/cycleInterval;
if(db>cycleInterval){
eb=1;
}
if((Ia==FALSE)||
((Fa==0)&&
(Ga==0))){
if(direction==0){
fraction=eb;
}else if(direction==1){
fraction=1-eb;
}else{
if(eb>.5){
fraction=2*(1-eb);
}else{
fraction=2*eb;
}
}
}
}
if(Ua>0){
ua=1;
if(direction==1){
ua=1-ua;
}
}
Ta=0;
va=0;
}
function set_fraction(n,Za){
if(Na==FALSE){
return;
}
if(da==FALSE){
if((Fa>0)&&
((Za-Ra)<=Fa)){
if(Ta>0){
if(Za-Ta>=Ga){
ab(n,Za);
}else{
fb=1-((Za-Ta)/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}
}else{
va=(Za-Ra)/Fa;
}
}else if((Ga>0)&&
(Ua>0)&&
((Za-Ra)>=(Ua-Ga))){
fb=((Ua-(Za-Ra))/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}else if((Ga>0)&&
(loop==FALSE)&&
((Za-Ra)>=(cycleInterval_changed-Ga))){
if(Sa>0){
fb=((cycleInterval_changed-(Za-Ra))/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}
}else if(Ta>0){
if(Za-Ta>=Ga){
ab(n,Za);
}else{
fb=1-((Za-Ta)/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}
}else{
va=1;
}
}else{
va=0;
}
if(da==TRUE){
da=FALSE;
if(!Ja&&(Ua>0)&&
(ua>0)&&(ua<1)){
Ra=Ra+(Za-stopTime);
}else{
Ra=Za;
if((loop==TRUE)&&(Ja)){
za=Za;
}
}
}else{
if(n>Qa){
if(Ia==FALSE){
Sa=Sa+(n-Qa);
}else{
Sa=Sa+(n-Qa)*va;
}
}else{
if(Ia==FALSE){
Sa=Sa+(1-Qa)+n;
}else{
Sa=Sa+((1-Qa)+n)*va;
}
}
if(direction==0){
fraction=Sa;
if(fraction>=1){
if(loop==TRUE){
fraction=fraction-1;
}else{
fraction=1;
}
}
}else if(direction==1){
fraction=1-Sa;
if(fraction<=0){
if(loop==TRUE){
fraction=fraction+1;
}else{
fraction=0;
}
}
}else if(direction==2){
fraction=Sa;
if(fraction>=1){
if(loop==TRUE){
fraction=fraction-1;
}else{
fraction=1;
}
}
if(fraction>.5){
fraction=2*(1-fraction);
}else{
fraction=2*fraction;
}
}
if(Sa>=1){
if(loop==TRUE){
Sa-=1;
Aa=Za;
za=Aa;
}else{
Sa=0;
bb(n,Za);
}
}
}
if(Ua>0){
if((Za-Ra)>Ua){
cb(n,Za);
}else{
ua=(Za-Ra)/Ua;
if(direction==1){
ua=1-ua;
}
}
}
Qa=n;
}]]></Script>
<ROUTE fromNode="Ma_1" fromField="Na" toNode="La_1" toField="set_enabled"></ROUTE>
<ROUTE fromNode="Ma_1" fromField="Oa" toNode="La_1" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Ma_1" fromField="Pa" toNode="La_1" toField="set_stopTime"></ROUTE>
<ROUTE fromNode="Ma_1" fromField="cycleInterval_changed" toNode="La_1" toField="set_cycleInterval"></ROUTE>
<ROUTE fromNode="La_1" fromField="fraction_changed" toNode="Ma_1" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare326.name = "ra";
ProtoInterface ProtoInterface327 = createNode("ProtoInterface");
field field328 = createNode("field");
field328.name = "R";
field328.accessType = "inputOnly";
field328.type = "SFTime";
ProtoInterface327.field = new MFNode();

ProtoInterface327.field[0] = field328;

field field329 = createNode("field");
field329.name = "S";
field329.accessType = "inputOnly";
field329.type = "SFTime";
ProtoInterface327.field[1] = field329;

field field330 = createNode("field");
field330.name = "sa";
field330.accessType = "inputOnly";
field330.type = "SFTime";
ProtoInterface327.field[2] = field330;

field field331 = createNode("field");
field331.name = "ta";
field331.accessType = "inputOnly";
field331.type = "SFTime";
ProtoInterface327.field[3] = field331;

field field332 = createNode("field");
field332.name = "fraction";
field332.accessType = "outputOnly";
field332.type = "SFFloat";
ProtoInterface327.field[4] = field332;

field field333 = createNode("field");
field333.name = "ua";
field333.accessType = "outputOnly";
field333.type = "SFFloat";
ProtoInterface327.field[5] = field333;

field field334 = createNode("field");
field334.name = "va";
field334.accessType = "outputOnly";
field334.type = "SFFloat";
ProtoInterface327.field[6] = field334;

field field335 = createNode("field");
field335.name = "wa_changed";
field335.accessType = "outputOnly";
field335.type = "SFTime";
ProtoInterface327.field[7] = field335;

field field336 = createNode("field");
field336.name = "xa_changed";
field336.accessType = "outputOnly";
field336.type = "SFTime";
ProtoInterface327.field[8] = field336;

field field337 = createNode("field");
field337.name = "ya_changed";
field337.accessType = "outputOnly";
field337.type = "SFVec2f";
ProtoInterface327.field[9] = field337;

field field338 = createNode("field");
field338.name = "startTime";
field338.accessType = "outputOnly";
field338.type = "SFTime";
ProtoInterface327.field[10] = field338;

field field339 = createNode("field");
field339.name = "stopTime";
field339.accessType = "outputOnly";
field339.type = "SFTime";
ProtoInterface327.field[11] = field339;

field field340 = createNode("field");
field340.name = "za";
field340.accessType = "outputOnly";
field340.type = "SFTime";
ProtoInterface327.field[12] = field340;

field field341 = createNode("field");
field341.name = "Aa";
field341.accessType = "outputOnly";
field341.type = "SFTime";
ProtoInterface327.field[13] = field341;

field field342 = createNode("field");
field342.name = "Ba";
field342.accessType = "outputOnly";
field342.type = "SFTime";
ProtoInterface327.field[14] = field342;

field field343 = createNode("field");
field343.name = "cycleInterval";
field343.accessType = "initializeOnly";
field343.type = "SFTime";
field343.value = "2";
ProtoInterface327.field[15] = field343;

field field344 = createNode("field");
field344.name = "Ca";
field344.accessType = "initializeOnly";
field344.type = "SFTime";
ProtoInterface327.field[16] = field344;

field field345 = createNode("field");
field345.name = "Da";
field345.accessType = "initializeOnly";
field345.type = "SFBool";
field345.value = "true";
ProtoInterface327.field[17] = field345;

field field346 = createNode("field");
field346.name = "xa";
field346.accessType = "initializeOnly";
field346.type = "SFTime";
field346.value = "5";
ProtoInterface327.field[18] = field346;

field field347 = createNode("field");
field347.name = "Ea";
field347.accessType = "initializeOnly";
field347.type = "SFTime";
ProtoInterface327.field[19] = field347;

field field348 = createNode("field");
field348.name = "Fa";
field348.accessType = "initializeOnly";
field348.type = "SFTime";
ProtoInterface327.field[20] = field348;

field field349 = createNode("field");
field349.name = "Ga";
field349.accessType = "initializeOnly";
field349.type = "SFTime";
ProtoInterface327.field[21] = field349;

field field350 = createNode("field");
field350.name = "Ha";
field350.accessType = "initializeOnly";
field350.type = "SFBool";
ProtoInterface327.field[22] = field350;

field field351 = createNode("field");
field351.name = "direction";
field351.accessType = "initializeOnly";
field351.type = "SFInt32";
ProtoInterface327.field[23] = field351;

field field352 = createNode("field");
field352.name = "loop";
field352.accessType = "initializeOnly";
field352.type = "SFBool";
field352.value = "true";
ProtoInterface327.field[24] = field352;

field field353 = createNode("field");
field353.name = "Ia";
field353.accessType = "initializeOnly";
field353.type = "SFBool";
ProtoInterface327.field[25] = field353;

field field354 = createNode("field");
field354.name = "Ja";
field354.accessType = "initializeOnly";
field354.type = "SFBool";
field354.value = "true";
ProtoInterface327.field[26] = field354;

field field355 = createNode("field");
field355.name = "Ka";
field355.accessType = "initializeOnly";
field355.type = "SFBool";
ProtoInterface327.field[27] = field355;

ProtoDeclare326.protoInterface = ProtoInterface327;

ProtoBody ProtoBody356 = createNode("ProtoBody");
TimeSensor TimeSensor357 = createNode("TimeSensor");
TimeSensor357.DEF = "La_1";
TimeSensor357.enabled = False;
TimeSensor357.loop = True;
TimeSensor357.startTime = 1;
IS IS358 = createNode("IS");
connect connect359 = createNode("connect");
connect359.nodeField = "cycleInterval";
connect359.protoField = "cycleInterval";
IS358.connect = new MFNode();

IS358.connect[0] = connect359;

TimeSensor357.iS = IS358;

ProtoBody356.children = new MFNode();

ProtoBody356.children[0] = TimeSensor357;

Script Script360 = createNode("Script");
Script360.DEF = "Ma_1";
Script360.directOutput = True;
field field361 = createNode("field");
field361.name = "R";
field361.accessType = "inputOnly";
field361.type = "SFTime";
Script360.field = new MFNode();

Script360.field[0] = field361;

field field362 = createNode("field");
field362.name = "S";
field362.accessType = "inputOnly";
field362.type = "SFTime";
Script360.field[1] = field362;

field field363 = createNode("field");
field363.name = "set_fraction";
field363.accessType = "inputOnly";
field363.type = "SFFloat";
Script360.field[2] = field363;

field field364 = createNode("field");
field364.name = "sa";
field364.accessType = "inputOnly";
field364.type = "SFTime";
Script360.field[3] = field364;

field field365 = createNode("field");
field365.name = "ta";
field365.accessType = "inputOnly";
field365.type = "SFTime";
Script360.field[4] = field365;

field field366 = createNode("field");
field366.name = "fraction";
field366.accessType = "outputOnly";
field366.type = "SFFloat";
Script360.field[5] = field366;

field field367 = createNode("field");
field367.name = "ua";
field367.accessType = "outputOnly";
field367.type = "SFFloat";
Script360.field[6] = field367;

field field368 = createNode("field");
field368.name = "va";
field368.accessType = "outputOnly";
field368.type = "SFFloat";
Script360.field[7] = field368;

field field369 = createNode("field");
field369.name = "wa_changed";
field369.accessType = "outputOnly";
field369.type = "SFTime";
Script360.field[8] = field369;

field field370 = createNode("field");
field370.name = "xa_changed";
field370.accessType = "outputOnly";
field370.type = "SFTime";
Script360.field[9] = field370;

field field371 = createNode("field");
field371.name = "ya_changed";
field371.accessType = "outputOnly";
field371.type = "SFVec2f";
Script360.field[10] = field371;

field field372 = createNode("field");
field372.name = "startTime";
field372.accessType = "outputOnly";
field372.type = "SFTime";
Script360.field[11] = field372;

field field373 = createNode("field");
field373.name = "stopTime";
field373.accessType = "outputOnly";
field373.type = "SFTime";
Script360.field[12] = field373;

field field374 = createNode("field");
field374.name = "za";
field374.accessType = "outputOnly";
field374.type = "SFTime";
Script360.field[13] = field374;

field field375 = createNode("field");
field375.name = "Aa";
field375.accessType = "outputOnly";
field375.type = "SFTime";
Script360.field[14] = field375;

field field376 = createNode("field");
field376.name = "cycleInterval_changed";
field376.accessType = "outputOnly";
field376.type = "SFTime";
Script360.field[15] = field376;

field field377 = createNode("field");
field377.name = "Na";
field377.accessType = "outputOnly";
field377.type = "SFBool";
Script360.field[16] = field377;

field field378 = createNode("field");
field378.name = "Oa";
field378.accessType = "outputOnly";
field378.type = "SFTime";
Script360.field[17] = field378;

field field379 = createNode("field");
field379.name = "Pa";
field379.accessType = "outputOnly";
field379.type = "SFTime";
Script360.field[18] = field379;

field field380 = createNode("field");
field380.name = "Ba";
field380.accessType = "outputOnly";
field380.type = "SFTime";
Script360.field[19] = field380;

field field381 = createNode("field");
field381.name = "da";
field381.accessType = "initializeOnly";
field381.type = "SFBool";
field381.value = "true";
Script360.field[20] = field381;

field field382 = createNode("field");
field382.name = "Qa";
field382.accessType = "initializeOnly";
field382.type = "SFFloat";
Script360.field[21] = field382;

field field383 = createNode("field");
field383.name = "Ra";
field383.accessType = "initializeOnly";
field383.type = "SFTime";
Script360.field[22] = field383;

field field384 = createNode("field");
field384.name = "direction";
field384.accessType = "initializeOnly";
field384.type = "SFInt32";
Script360.field[23] = field384;

field field385 = createNode("field");
field385.name = "Sa";
field385.accessType = "initializeOnly";
field385.type = "SFFloat";
Script360.field[24] = field385;

field field386 = createNode("field");
field386.name = "Ja";
field386.accessType = "initializeOnly";
field386.type = "SFBool";
Script360.field[25] = field386;

field field387 = createNode("field");
field387.name = "loop";
field387.accessType = "initializeOnly";
field387.type = "SFBool";
Script360.field[26] = field387;

field field388 = createNode("field");
field388.name = "Ia";
field388.accessType = "initializeOnly";
field388.type = "SFBool";
Script360.field[27] = field388;

field field389 = createNode("field");
field389.name = "cycleInterval";
field389.accessType = "initializeOnly";
field389.type = "SFTime";
Script360.field[28] = field389;

field field390 = createNode("field");
field390.name = "Ca";
field390.accessType = "initializeOnly";
field390.type = "SFTime";
Script360.field[29] = field390;

field field391 = createNode("field");
field391.name = "Da";
field391.accessType = "initializeOnly";
field391.type = "SFBool";
Script360.field[30] = field391;

field field392 = createNode("field");
field392.name = "xa";
field392.accessType = "initializeOnly";
field392.type = "SFTime";
Script360.field[31] = field392;

field field393 = createNode("field");
field393.name = "Ea";
field393.accessType = "initializeOnly";
field393.type = "SFTime";
Script360.field[32] = field393;

field field394 = createNode("field");
field394.name = "Fa";
field394.accessType = "initializeOnly";
field394.type = "SFTime";
Script360.field[33] = field394;

field field395 = createNode("field");
field395.name = "Ga";
field395.accessType = "initializeOnly";
field395.type = "SFTime";
Script360.field[34] = field395;

field field396 = createNode("field");
field396.name = "Ta";
field396.accessType = "initializeOnly";
field396.type = "SFTime";
Script360.field[35] = field396;

field field397 = createNode("field");
field397.name = "Ha";
field397.accessType = "initializeOnly";
field397.type = "SFBool";
Script360.field[36] = field397;

field field398 = createNode("field");
field398.name = "Ua";
field398.accessType = "initializeOnly";
field398.type = "SFTime";
Script360.field[37] = field398;

field field399 = createNode("field");
field399.name = "Va";
field399.accessType = "initializeOnly";
field399.type = "SFTime";
Script360.field[38] = field399;

field field400 = createNode("field");
field400.name = "ya";
field400.accessType = "initializeOnly";
field400.type = "SFVec2f";
Script360.field[39] = field400;

field field401 = createNode("field");
field401.name = "Ka";
field401.accessType = "initializeOnly";
field401.type = "SFBool";
Script360.field[40] = field401;

IS IS402 = createNode("IS");
connect connect403 = createNode("connect");
connect403.nodeField = "R";
connect403.protoField = "R";
IS402.connect = new MFNode();

IS402.connect[0] = connect403;

connect connect404 = createNode("connect");
connect404.nodeField = "S";
connect404.protoField = "S";
IS402.connect[1] = connect404;

connect connect405 = createNode("connect");
connect405.nodeField = "sa";
connect405.protoField = "sa";
IS402.connect[2] = connect405;

connect connect406 = createNode("connect");
connect406.nodeField = "ta";
connect406.protoField = "ta";
IS402.connect[3] = connect406;

connect connect407 = createNode("connect");
connect407.nodeField = "fraction";
connect407.protoField = "fraction";
IS402.connect[4] = connect407;

connect connect408 = createNode("connect");
connect408.nodeField = "ua";
connect408.protoField = "ua";
IS402.connect[5] = connect408;

connect connect409 = createNode("connect");
connect409.nodeField = "va";
connect409.protoField = "va";
IS402.connect[6] = connect409;

connect connect410 = createNode("connect");
connect410.nodeField = "wa_changed";
connect410.protoField = "wa_changed";
IS402.connect[7] = connect410;

connect connect411 = createNode("connect");
connect411.nodeField = "xa_changed";
connect411.protoField = "xa_changed";
IS402.connect[8] = connect411;

connect connect412 = createNode("connect");
connect412.nodeField = "ya_changed";
connect412.protoField = "ya_changed";
IS402.connect[9] = connect412;

connect connect413 = createNode("connect");
connect413.nodeField = "startTime";
connect413.protoField = "startTime";
IS402.connect[10] = connect413;

connect connect414 = createNode("connect");
connect414.nodeField = "stopTime";
connect414.protoField = "stopTime";
IS402.connect[11] = connect414;

connect connect415 = createNode("connect");
connect415.nodeField = "za";
connect415.protoField = "za";
IS402.connect[12] = connect415;

connect connect416 = createNode("connect");
connect416.nodeField = "Aa";
connect416.protoField = "Aa";
IS402.connect[13] = connect416;

connect connect417 = createNode("connect");
connect417.nodeField = "Ba";
connect417.protoField = "Ba";
IS402.connect[14] = connect417;

connect connect418 = createNode("connect");
connect418.nodeField = "direction";
connect418.protoField = "direction";
IS402.connect[15] = connect418;

connect connect419 = createNode("connect");
connect419.nodeField = "Ja";
connect419.protoField = "Ja";
IS402.connect[16] = connect419;

connect connect420 = createNode("connect");
connect420.nodeField = "loop";
connect420.protoField = "loop";
IS402.connect[17] = connect420;

connect connect421 = createNode("connect");
connect421.nodeField = "Ia";
connect421.protoField = "Ia";
IS402.connect[18] = connect421;

connect connect422 = createNode("connect");
connect422.nodeField = "cycleInterval";
connect422.protoField = "cycleInterval";
IS402.connect[19] = connect422;

connect connect423 = createNode("connect");
connect423.nodeField = "Ca";
connect423.protoField = "Ca";
IS402.connect[20] = connect423;

connect connect424 = createNode("connect");
connect424.nodeField = "Da";
connect424.protoField = "Da";
IS402.connect[21] = connect424;

connect connect425 = createNode("connect");
connect425.nodeField = "xa";
connect425.protoField = "xa";
IS402.connect[22] = connect425;

connect connect426 = createNode("connect");
connect426.nodeField = "Ea";
connect426.protoField = "Ea";
IS402.connect[23] = connect426;

connect connect427 = createNode("connect");
connect427.nodeField = "Fa";
connect427.protoField = "Fa";
IS402.connect[24] = connect427;

connect connect428 = createNode("connect");
connect428.nodeField = "Ga";
connect428.protoField = "Ga";
IS402.connect[25] = connect428;

connect connect429 = createNode("connect");
connect429.nodeField = "Ha";
connect429.protoField = "Ha";
IS402.connect[26] = connect429;

connect connect430 = createNode("connect");
connect430.nodeField = "Ka";
connect430.protoField = "Ka";
IS402.connect[27] = connect430;

Script360.iS = IS402;


Script360.setSourceCode(`javascript:\n"+
"function Wa(){\n"+
"var Xa=Math.random();\n"+
"Va=\n"+
"(cycleInterval-Ca)*(1-Xa)+\n"+
"(cycleInterval+Ca)*Xa;\n"+
"cycleInterval_changed=Va;\n"+
"}\n"+
"function Ya(){\n"+
"var Xa=Math.random();\n"+
"Ua=(xa-Ea)*(1-Xa)+\n"+
"(xa+Ea)*Xa;\n"+
"}\n"+
"function initialize(){\n"+
"if(direction==2){\n"+
"cycleInterval*=2;\n"+
"Ca*=2;\n"+
"cycleInterval_changed=cycleInterval;\n"+
"}\n"+
"Wa();\n"+
"if(Da==TRUE){\n"+
"Ya();\n"+
"}else{\n"+
"Ua=-1;\n"+
"}\n"+
"if(Ka==FALSE){\n"+
"Na=FALSE;\n"+
"}else{\n"+
"R(1,1);\n"+
"}\n"+
"}\n"+
"function R(n,Za){\n"+
"da=TRUE;\n"+
"if((Ja==TRUE)||\n"+
"((Ua>0)&&(ua==1))){\n"+
"Sa=0;\n"+
"if(Ca>0){\n"+
"Wa();\n"+
"}else{\n"+
"Va=cycleInterval;\n"+
"}\n"+
"if(Da==TRUE){\n"+
"if(Ea>0){\n"+
"Ya();\n"+
"}else{\n"+
"Ua=xa;\n"+
"}\n"+
"}\n"+
"}\n"+
"ya[0]=Ua;\n"+
"ya[1]=Va;\n"+
"xa_changed=ya[0];\n"+
"wa_changed=ya[1];\n"+
"ya_changed=ya;\n"+
"Na=TRUE;\n"+
"startTime=Za;\n"+
"Oa=Za;\n"+
"}\n"+
"function S(n,Za){\n"+
"if((Ha==TRUE)||(Ga==0)){\n"+
"Na=FALSE;\n"+
"stopTime=Za;\n"+
"}else{\n"+
"Ta=Za;\n"+
"}\n"+
"}\n"+
"function sa(n,Za){\n"+
"if(Na==TRUE){\n"+
"Na=FALSE;\n"+
"stopTime=Za;\n"+
"}\n"+
"Ba=Za;\n"+
"}\n"+
"function ta(n,Za){\n"+
"xa=n;\n"+
"if(xa<(Fa+Ga)){\n"+
"xa=Fa+Ga;\n"+
"}\n"+
"xa_changed=xa;\n"+
"Ua=xa;\n"+
"}\n"+
"function ab(n,Za){\n"+
"Na=FALSE;\n"+
"stopTime=Za;\n"+
"Ta=0;\n"+
"va=0;\n"+
"}\n"+
"function bb(n,Za){\n"+
"Na=FALSE;\n"+
"stopTime=Za;\n"+
"Ta=0;\n"+
"va=0;\n"+
"}\n"+
"function cb(n,Za){\n"+
"Na=FALSE;\n"+
"stopTime=Ra+Ua;\n"+
"if((Ca==0)&&\n"+
"(Ea==0)){\n"+
"var db=Ua;\n"+
"while(db>cycleInterval){\n"+
"db-=cycleInterval;\n"+
"}\n"+
"var eb=db/cycleInterval;\n"+
"if(db>cycleInterval){\n"+
"eb=1;\n"+
"}\n"+
"if((Ia==FALSE)||\n"+
"((Fa==0)&&\n"+
"(Ga==0))){\n"+
"if(direction==0){\n"+
"fraction=eb;\n"+
"}else if(direction==1){\n"+
"fraction=1-eb;\n"+
"}else{\n"+
"if(eb>.5){\n"+
"fraction=2*(1-eb);\n"+
"}else{\n"+
"fraction=2*eb;\n"+
"}\n"+
"}\n"+
"}\n"+
"}\n"+
"if(Ua>0){\n"+
"ua=1;\n"+
"if(direction==1){\n"+
"ua=1-ua;\n"+
"}\n"+
"}\n"+
"Ta=0;\n"+
"va=0;\n"+
"}\n"+
"function set_fraction(n,Za){\n"+
"if(Na==FALSE){\n"+
"return;\n"+
"}\n"+
"if(da==FALSE){\n"+
"if((Fa>0)&&\n"+
"((Za-Ra)<=Fa)){\n"+
"if(Ta>0){\n"+
"if(Za-Ta>=Ga){\n"+
"ab(n,Za);\n"+
"}else{\n"+
"fb=1-((Za-Ta)/Ga);\n"+
"if(fb>va){\n"+
"va=va;\n"+
"}else{\n"+
"va=fb;\n"+
"}\n"+
"}\n"+
"}else{\n"+
"va=(Za-Ra)/Fa;\n"+
"}\n"+
"}else if((Ga>0)&&\n"+
"(Ua>0)&&\n"+
"((Za-Ra)>=(Ua-Ga))){\n"+
"fb=((Ua-(Za-Ra))/Ga);\n"+
"if(fb>va){\n"+
"va=va;\n"+
"}else{\n"+
"va=fb;\n"+
"}\n"+
"}else if((Ga>0)&&\n"+
"(loop==FALSE)&&\n"+
"((Za-Ra)>=(cycleInterval_changed-Ga))){\n"+
"if(Sa>0){\n"+
"fb=((cycleInterval_changed-(Za-Ra))/Ga);\n"+
"if(fb>va){\n"+
"va=va;\n"+
"}else{\n"+
"va=fb;\n"+
"}\n"+
"}\n"+
"}else if(Ta>0){\n"+
"if(Za-Ta>=Ga){\n"+
"ab(n,Za);\n"+
"}else{\n"+
"fb=1-((Za-Ta)/Ga);\n"+
"if(fb>va){\n"+
"va=va;\n"+
"}else{\n"+
"va=fb;\n"+
"}\n"+
"}\n"+
"}else{\n"+
"va=1;\n"+
"}\n"+
"}else{\n"+
"va=0;\n"+
"}\n"+
"if(da==TRUE){\n"+
"da=FALSE;\n"+
"if(!Ja&&(Ua>0)&&\n"+
"(ua>0)&&(ua<1)){\n"+
"Ra=Ra+(Za-stopTime);\n"+
"}else{\n"+
"Ra=Za;\n"+
"if((loop==TRUE)&&(Ja)){\n"+
"za=Za;\n"+
"}\n"+
"}\n"+
"}else{\n"+
"if(n>Qa){\n"+
"if(Ia==FALSE){\n"+
"Sa=Sa+(n-Qa);\n"+
"}else{\n"+
"Sa=Sa+(n-Qa)*va;\n"+
"}\n"+
"}else{\n"+
"if(Ia==FALSE){\n"+
"Sa=Sa+(1-Qa)+n;\n"+
"}else{\n"+
"Sa=Sa+((1-Qa)+n)*va;\n"+
"}\n"+
"}\n"+
"if(direction==0){\n"+
"fraction=Sa;\n"+
"if(fraction>=1){\n"+
"if(loop==TRUE){\n"+
"fraction=fraction-1;\n"+
"}else{\n"+
"fraction=1;\n"+
"}\n"+
"}\n"+
"}else if(direction==1){\n"+
"fraction=1-Sa;\n"+
"if(fraction<=0){\n"+
"if(loop==TRUE){\n"+
"fraction=fraction+1;\n"+
"}else{\n"+
"fraction=0;\n"+
"}\n"+
"}\n"+
"}else if(direction==2){\n"+
"fraction=Sa;\n"+
"if(fraction>=1){\n"+
"if(loop==TRUE){\n"+
"fraction=fraction-1;\n"+
"}else{\n"+
"fraction=1;\n"+
"}\n"+
"}\n"+
"if(fraction>.5){\n"+
"fraction=2*(1-fraction);\n"+
"}else{\n"+
"fraction=2*fraction;\n"+
"}\n"+
"}\n"+
"if(Sa>=1){\n"+
"if(loop==TRUE){\n"+
"Sa-=1;\n"+
"Aa=Za;\n"+
"za=Aa;\n"+
"}else{\n"+
"Sa=0;\n"+
"bb(n,Za);\n"+
"}\n"+
"}\n"+
"}\n"+
"if(Ua>0){\n"+
"if((Za-Ra)>Ua){\n"+
"cb(n,Za);\n"+
"}else{\n"+
"ua=(Za-Ra)/Ua;\n"+
"if(direction==1){\n"+
"ua=1-ua;\n"+
"}\n"+
"}\n"+
"}\n"+
"Qa=n;\n"+
"}`)
ProtoBody356.children[1] = Script360;

ROUTE ROUTE431 = createNode("ROUTE");
ROUTE431.fromNode = "Ma_1";
ROUTE431.fromField = "Na";
ROUTE431.toNode = "La_1";
ROUTE431.toField = "set_enabled";
ProtoBody356.children[2] = ROUTE431;

ROUTE ROUTE432 = createNode("ROUTE");
ROUTE432.fromNode = "Ma_1";
ROUTE432.fromField = "Oa";
ROUTE432.toNode = "La_1";
ROUTE432.toField = "set_startTime";
ProtoBody356.children[3] = ROUTE432;

ROUTE ROUTE433 = createNode("ROUTE");
ROUTE433.fromNode = "Ma_1";
ROUTE433.fromField = "Pa";
ROUTE433.toNode = "La_1";
ROUTE433.toField = "set_stopTime";
ProtoBody356.children[4] = ROUTE433;

ROUTE ROUTE434 = createNode("ROUTE");
ROUTE434.fromNode = "Ma_1";
ROUTE434.fromField = "cycleInterval_changed";
ROUTE434.toNode = "La_1";
ROUTE434.toField = "set_cycleInterval";
ProtoBody356.children[5] = ROUTE434;

ROUTE ROUTE435 = createNode("ROUTE");
ROUTE435.fromNode = "La_1";
ROUTE435.fromField = "fraction_changed";
ROUTE435.toNode = "Ma_1";
ROUTE435.toField = "set_fraction";
ProtoBody356.children[6] = ROUTE435;

ProtoDeclare326.protoBody = ProtoBody356;

children[6] = ProtoDeclare326;

ProtoDeclare ProtoDeclare436 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="gb" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="direction" accessType="initializeOnly" type="SFInt32"></field>
<field name="hb" accessType="initializeOnly" type="SFBool"></field>
<field name="ib" accessType="initializeOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="jb" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="direction" accessType="initializeOnly" type="SFInt32"></field>
<field name="aa" accessType="initializeOnly" type="SFBool"></field>
<field name="kb" accessType="initializeOnly" type="MFVec2f"></field>
<field name="ba" accessType="initializeOnly" type="SFFloat"></field>
<field name="ca" accessType="initializeOnly" type="SFFloat"></field>
<field name="da" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="fa" accessType="initializeOnly" type="SFTime"></field>
<field name="hb" accessType="initializeOnly" type="SFBool"></field>
<field name="ib" accessType="initializeOnly" type="SFBool"></field>
<field name="lb" accessType="initializeOnly" type="SFInt32"></field>
<field name="mb" accessType="initializeOnly" type="MFNode"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="R_changed" protoField="R_changed"></connect>
<connect nodeField="U" protoField="U"></connect>
<connect nodeField="direction" protoField="direction"></connect>
<connect nodeField="hb" protoField="hb"></connect>
<connect nodeField="ib" protoField="ib"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
U.w=TRUE;
aa=FALSE;
}
function R(n){
if(ib&&!hb){
return;
}
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
da=TRUE;
if(hb==FALSE){
mb.length=1;
mb[0]=U;
}else{
mb=U.A_changed;
}
kb.length=mb.length;
for(lb=0;lb<mb.length;lb++){
kb[lb].x=mb[lb].u_changed.x;
kb[lb].y=mb[lb].u_changed.y;
}
R_changed=n;
fa=n;
}
function S(n){
aa=FALSE;
if(ea==n){
R(n);
}
}
function set_fraction(n){
if(ib&&!hb){
return;
}
if(da){
ba=n;
da=FALSE;
}else if(n<ca){
ba=(1.0-ca)+n;
}else{
ba=n-ca;
}
ca=n;
for(lb=0;lb<mb.length;lb++){
if(direction==0)kb[lb].y+=-ba;
if(direction==1)kb[lb].y+=ba;
if(direction==2)kb[lb].x+=ba;
if(direction==3)kb[lb].x+=-ba;
mb[lb].set_u=kb[lb];
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare436.name = "gb";
ProtoInterface ProtoInterface437 = createNode("ProtoInterface");
field field438 = createNode("field");
field438.name = "R";
field438.accessType = "inputOnly";
field438.type = "SFTime";
ProtoInterface437.field = new MFNode();

ProtoInterface437.field[0] = field438;

field field439 = createNode("field");
field439.name = "S";
field439.accessType = "inputOnly";
field439.type = "SFTime";
ProtoInterface437.field[1] = field439;

field field440 = createNode("field");
field440.name = "set_fraction";
field440.accessType = "inputOnly";
field440.type = "SFFloat";
ProtoInterface437.field[2] = field440;

field field441 = createNode("field");
field441.name = "R_changed";
field441.accessType = "outputOnly";
field441.type = "SFTime";
ProtoInterface437.field[3] = field441;

field field442 = createNode("field");
field442.name = "U";
field442.accessType = "initializeOnly";
field442.type = "SFNode";
ProtoInterface437.field[4] = field442;

field field443 = createNode("field");
field443.name = "direction";
field443.accessType = "initializeOnly";
field443.type = "SFInt32";
ProtoInterface437.field[5] = field443;

field field444 = createNode("field");
field444.name = "hb";
field444.accessType = "initializeOnly";
field444.type = "SFBool";
ProtoInterface437.field[6] = field444;

field field445 = createNode("field");
field445.name = "ib";
field445.accessType = "initializeOnly";
field445.type = "SFBool";
ProtoInterface437.field[7] = field445;

ProtoDeclare436.protoInterface = ProtoInterface437;

ProtoBody ProtoBody446 = createNode("ProtoBody");
Script Script447 = createNode("Script");
Script447.DEF = "jb";
Script447.directOutput = True;
field field448 = createNode("field");
field448.name = "R";
field448.accessType = "inputOnly";
field448.type = "SFTime";
Script447.field = new MFNode();

Script447.field[0] = field448;

field field449 = createNode("field");
field449.name = "S";
field449.accessType = "inputOnly";
field449.type = "SFTime";
Script447.field[1] = field449;

field field450 = createNode("field");
field450.name = "set_fraction";
field450.accessType = "inputOnly";
field450.type = "SFFloat";
Script447.field[2] = field450;

field field451 = createNode("field");
field451.name = "R_changed";
field451.accessType = "outputOnly";
field451.type = "SFTime";
Script447.field[3] = field451;

field field452 = createNode("field");
field452.name = "U";
field452.accessType = "initializeOnly";
field452.type = "SFNode";
Script447.field[4] = field452;

field field453 = createNode("field");
field453.name = "direction";
field453.accessType = "initializeOnly";
field453.type = "SFInt32";
Script447.field[5] = field453;

field field454 = createNode("field");
field454.name = "aa";
field454.accessType = "initializeOnly";
field454.type = "SFBool";
Script447.field[6] = field454;

field field455 = createNode("field");
field455.name = "kb";
field455.accessType = "initializeOnly";
field455.type = "MFVec2f";
Script447.field[7] = field455;

field field456 = createNode("field");
field456.name = "ba";
field456.accessType = "initializeOnly";
field456.type = "SFFloat";
Script447.field[8] = field456;

field field457 = createNode("field");
field457.name = "ca";
field457.accessType = "initializeOnly";
field457.type = "SFFloat";
Script447.field[9] = field457;

field field458 = createNode("field");
field458.name = "da";
field458.accessType = "initializeOnly";
field458.type = "SFBool";
field458.value = "true";
Script447.field[10] = field458;

field field459 = createNode("field");
field459.name = "ea";
field459.accessType = "initializeOnly";
field459.type = "SFTime";
Script447.field[11] = field459;

field field460 = createNode("field");
field460.name = "fa";
field460.accessType = "initializeOnly";
field460.type = "SFTime";
Script447.field[12] = field460;

field field461 = createNode("field");
field461.name = "hb";
field461.accessType = "initializeOnly";
field461.type = "SFBool";
Script447.field[13] = field461;

field field462 = createNode("field");
field462.name = "ib";
field462.accessType = "initializeOnly";
field462.type = "SFBool";
Script447.field[14] = field462;

field field463 = createNode("field");
field463.name = "lb";
field463.accessType = "initializeOnly";
field463.type = "SFInt32";
Script447.field[15] = field463;

field field464 = createNode("field");
field464.name = "mb";
field464.accessType = "initializeOnly";
field464.type = "MFNode";
Script447.field[16] = field464;

IS IS465 = createNode("IS");
connect connect466 = createNode("connect");
connect466.nodeField = "R";
connect466.protoField = "R";
IS465.connect = new MFNode();

IS465.connect[0] = connect466;

connect connect467 = createNode("connect");
connect467.nodeField = "S";
connect467.protoField = "S";
IS465.connect[1] = connect467;

connect connect468 = createNode("connect");
connect468.nodeField = "set_fraction";
connect468.protoField = "set_fraction";
IS465.connect[2] = connect468;

connect connect469 = createNode("connect");
connect469.nodeField = "R_changed";
connect469.protoField = "R_changed";
IS465.connect[3] = connect469;

connect connect470 = createNode("connect");
connect470.nodeField = "U";
connect470.protoField = "U";
IS465.connect[4] = connect470;

connect connect471 = createNode("connect");
connect471.nodeField = "direction";
connect471.protoField = "direction";
IS465.connect[5] = connect471;

connect connect472 = createNode("connect");
connect472.nodeField = "hb";
connect472.protoField = "hb";
IS465.connect[6] = connect472;

connect connect473 = createNode("connect");
connect473.nodeField = "ib";
connect473.protoField = "ib";
IS465.connect[7] = connect473;

Script447.iS = IS465;


Script447.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"U.w=TRUE;\n"+
"aa=FALSE;\n"+
"}\n"+
"function R(n){\n"+
"if(ib&&!hb){\n"+
"return;\n"+
"}\n"+
"if(fa==n){\n"+
"return;\n"+
"}\n"+
"if(aa==TRUE){\n"+
"ea=n;\n"+
"return;\n"+
"}\n"+
"aa=TRUE;\n"+
"da=TRUE;\n"+
"if(hb==FALSE){\n"+
"mb.length=1;\n"+
"mb[0]=U;\n"+
"}else{\n"+
"mb=U.A_changed;\n"+
"}\n"+
"kb.length=mb.length;\n"+
"for(lb=0;lb<mb.length;lb++){\n"+
"kb[lb].x=mb[lb].u_changed.x;\n"+
"kb[lb].y=mb[lb].u_changed.y;\n"+
"}\n"+
"R_changed=n;\n"+
"fa=n;\n"+
"}\n"+
"function S(n){\n"+
"aa=FALSE;\n"+
"if(ea==n){\n"+
"R(n);\n"+
"}\n"+
"}\n"+
"function set_fraction(n){\n"+
"if(ib&&!hb){\n"+
"return;\n"+
"}\n"+
"if(da){\n"+
"ba=n;\n"+
"da=FALSE;\n"+
"}else if(n<ca){\n"+
"ba=(1.0-ca)+n;\n"+
"}else{\n"+
"ba=n-ca;\n"+
"}\n"+
"ca=n;\n"+
"for(lb=0;lb<mb.length;lb++){\n"+
"if(direction==0)kb[lb].y+=-ba;\n"+
"if(direction==1)kb[lb].y+=ba;\n"+
"if(direction==2)kb[lb].x+=ba;\n"+
"if(direction==3)kb[lb].x+=-ba;\n"+
"mb[lb].set_u=kb[lb];\n"+
"}\n"+
"}`)
ProtoBody446.children = new MFNode();

ProtoBody446.children[0] = Script447;

ProtoDeclare436.protoBody = ProtoBody446;

children[7] = ProtoDeclare436;

ProtoDeclare ProtoDeclare474 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nb" ><ProtoInterface><field name="ob" accessType="inputOnly" type="SFTime"></field>
<field name="pb" accessType="inputOnly" type="SFTime"></field>
<field name="qb" accessType="inputOnly" type="SFBool"></field>
<field name="rb" accessType="inputOnly" type="SFBool"></field>
<field name="sb" accessType="inputOnly" type="SFVec3f"></field>
<field name="tb" accessType="inputOnly" type="SFVec2f"></field>
<field name="ub" accessType="outputOnly" type="SFTime"></field>
<field name="vb" accessType="outputOnly" type="SFTime"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="wb" accessType="outputOnly" type="SFTime"></field>
<field name="xb" accessType="outputOnly" type="SFTime"></field>
<field name="coord" accessType="outputOnly" type="SFVec3f"></field>
<field name="texCoord" accessType="outputOnly" type="SFVec2f"></field>
<field name="yb_changed" accessType="outputOnly" type="SFBool"></field>
<field name="enabled" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><Script DEF="I_1" directOutput="true"><field name="ob" accessType="inputOnly" type="SFTime"></field>
<field name="pb" accessType="inputOnly" type="SFTime"></field>
<field name="qb" accessType="inputOnly" type="SFBool"></field>
<field name="rb" accessType="inputOnly" type="SFBool"></field>
<field name="sb" accessType="inputOnly" type="SFVec3f"></field>
<field name="tb" accessType="inputOnly" type="SFVec2f"></field>
<field name="ub" accessType="outputOnly" type="SFTime"></field>
<field name="vb" accessType="outputOnly" type="SFTime"></field>
<field name="wb" accessType="outputOnly" type="SFTime"></field>
<field name="xb" accessType="outputOnly" type="SFTime"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="coord" accessType="outputOnly" type="SFVec3f"></field>
<field name="texCoord" accessType="outputOnly" type="SFVec2f"></field>
<field name="yb_changed" accessType="outputOnly" type="SFBool"></field>
<field name="enabled" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="ob" protoField="ob"></connect>
<connect nodeField="pb" protoField="pb"></connect>
<connect nodeField="qb" protoField="qb"></connect>
<connect nodeField="rb" protoField="rb"></connect>
<connect nodeField="sb" protoField="sb"></connect>
<connect nodeField="tb" protoField="tb"></connect>
<connect nodeField="ub" protoField="ub"></connect>
<connect nodeField="vb" protoField="vb"></connect>
<connect nodeField="wb" protoField="wb"></connect>
<connect nodeField="xb" protoField="xb"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
<connect nodeField="coord" protoField="coord"></connect>
<connect nodeField="texCoord" protoField="texCoord"></connect>
<connect nodeField="yb_changed" protoField="yb_changed"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
yb_changed=enabled;
}
function ob(n,time){
if(!enabled){
enabled=TRUE;
yb_changed=TRUE;
wb=time;
}
}
function pb(n,time){
if(enabled){
enabled=FALSE;
yb_changed=FALSE;
xb=time;
}
}
function rb(n,Za){
if(enabled){
if(n==TRUE){
ub=Za;
}else{
vb=Za;
}
}
}
function qb(n,Za){
if(enabled){
if(n==TRUE){
enterTime=Za;
}else{
exitTime=Za;
}
}
}
function sb(n,Za){
if(enabled){
coord=n;
}
}
function tb(n,Za){
if(enabled){
texCoord=n;
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare474.name = "nb";
ProtoInterface ProtoInterface475 = createNode("ProtoInterface");
field field476 = createNode("field");
field476.name = "ob";
field476.accessType = "inputOnly";
field476.type = "SFTime";
ProtoInterface475.field = new MFNode();

ProtoInterface475.field[0] = field476;

field field477 = createNode("field");
field477.name = "pb";
field477.accessType = "inputOnly";
field477.type = "SFTime";
ProtoInterface475.field[1] = field477;

field field478 = createNode("field");
field478.name = "qb";
field478.accessType = "inputOnly";
field478.type = "SFBool";
ProtoInterface475.field[2] = field478;

field field479 = createNode("field");
field479.name = "rb";
field479.accessType = "inputOnly";
field479.type = "SFBool";
ProtoInterface475.field[3] = field479;

field field480 = createNode("field");
field480.name = "sb";
field480.accessType = "inputOnly";
field480.type = "SFVec3f";
ProtoInterface475.field[4] = field480;

field field481 = createNode("field");
field481.name = "tb";
field481.accessType = "inputOnly";
field481.type = "SFVec2f";
ProtoInterface475.field[5] = field481;

field field482 = createNode("field");
field482.name = "ub";
field482.accessType = "outputOnly";
field482.type = "SFTime";
ProtoInterface475.field[6] = field482;

field field483 = createNode("field");
field483.name = "vb";
field483.accessType = "outputOnly";
field483.type = "SFTime";
ProtoInterface475.field[7] = field483;

field field484 = createNode("field");
field484.name = "enterTime";
field484.accessType = "outputOnly";
field484.type = "SFTime";
ProtoInterface475.field[8] = field484;

field field485 = createNode("field");
field485.name = "exitTime";
field485.accessType = "outputOnly";
field485.type = "SFTime";
ProtoInterface475.field[9] = field485;

field field486 = createNode("field");
field486.name = "wb";
field486.accessType = "outputOnly";
field486.type = "SFTime";
ProtoInterface475.field[10] = field486;

field field487 = createNode("field");
field487.name = "xb";
field487.accessType = "outputOnly";
field487.type = "SFTime";
ProtoInterface475.field[11] = field487;

field field488 = createNode("field");
field488.name = "coord";
field488.accessType = "outputOnly";
field488.type = "SFVec3f";
ProtoInterface475.field[12] = field488;

field field489 = createNode("field");
field489.name = "texCoord";
field489.accessType = "outputOnly";
field489.type = "SFVec2f";
ProtoInterface475.field[13] = field489;

field field490 = createNode("field");
field490.name = "yb_changed";
field490.accessType = "outputOnly";
field490.type = "SFBool";
ProtoInterface475.field[14] = field490;

field field491 = createNode("field");
field491.name = "enabled";
field491.accessType = "initializeOnly";
field491.type = "SFBool";
field491.value = "true";
ProtoInterface475.field[15] = field491;

ProtoDeclare474.protoInterface = ProtoInterface475;

ProtoBody ProtoBody492 = createNode("ProtoBody");
Script Script493 = createNode("Script");
Script493.DEF = "I_1";
Script493.directOutput = True;
field field494 = createNode("field");
field494.name = "ob";
field494.accessType = "inputOnly";
field494.type = "SFTime";
Script493.field = new MFNode();

Script493.field[0] = field494;

field field495 = createNode("field");
field495.name = "pb";
field495.accessType = "inputOnly";
field495.type = "SFTime";
Script493.field[1] = field495;

field field496 = createNode("field");
field496.name = "qb";
field496.accessType = "inputOnly";
field496.type = "SFBool";
Script493.field[2] = field496;

field field497 = createNode("field");
field497.name = "rb";
field497.accessType = "inputOnly";
field497.type = "SFBool";
Script493.field[3] = field497;

field field498 = createNode("field");
field498.name = "sb";
field498.accessType = "inputOnly";
field498.type = "SFVec3f";
Script493.field[4] = field498;

field field499 = createNode("field");
field499.name = "tb";
field499.accessType = "inputOnly";
field499.type = "SFVec2f";
Script493.field[5] = field499;

field field500 = createNode("field");
field500.name = "ub";
field500.accessType = "outputOnly";
field500.type = "SFTime";
Script493.field[6] = field500;

field field501 = createNode("field");
field501.name = "vb";
field501.accessType = "outputOnly";
field501.type = "SFTime";
Script493.field[7] = field501;

field field502 = createNode("field");
field502.name = "wb";
field502.accessType = "outputOnly";
field502.type = "SFTime";
Script493.field[8] = field502;

field field503 = createNode("field");
field503.name = "xb";
field503.accessType = "outputOnly";
field503.type = "SFTime";
Script493.field[9] = field503;

field field504 = createNode("field");
field504.name = "enterTime";
field504.accessType = "outputOnly";
field504.type = "SFTime";
Script493.field[10] = field504;

field field505 = createNode("field");
field505.name = "exitTime";
field505.accessType = "outputOnly";
field505.type = "SFTime";
Script493.field[11] = field505;

field field506 = createNode("field");
field506.name = "coord";
field506.accessType = "outputOnly";
field506.type = "SFVec3f";
Script493.field[12] = field506;

field field507 = createNode("field");
field507.name = "texCoord";
field507.accessType = "outputOnly";
field507.type = "SFVec2f";
Script493.field[13] = field507;

field field508 = createNode("field");
field508.name = "yb_changed";
field508.accessType = "outputOnly";
field508.type = "SFBool";
Script493.field[14] = field508;

field field509 = createNode("field");
field509.name = "enabled";
field509.accessType = "initializeOnly";
field509.type = "SFBool";
Script493.field[15] = field509;

IS IS510 = createNode("IS");
connect connect511 = createNode("connect");
connect511.nodeField = "ob";
connect511.protoField = "ob";
IS510.connect = new MFNode();

IS510.connect[0] = connect511;

connect connect512 = createNode("connect");
connect512.nodeField = "pb";
connect512.protoField = "pb";
IS510.connect[1] = connect512;

connect connect513 = createNode("connect");
connect513.nodeField = "qb";
connect513.protoField = "qb";
IS510.connect[2] = connect513;

connect connect514 = createNode("connect");
connect514.nodeField = "rb";
connect514.protoField = "rb";
IS510.connect[3] = connect514;

connect connect515 = createNode("connect");
connect515.nodeField = "sb";
connect515.protoField = "sb";
IS510.connect[4] = connect515;

connect connect516 = createNode("connect");
connect516.nodeField = "tb";
connect516.protoField = "tb";
IS510.connect[5] = connect516;

connect connect517 = createNode("connect");
connect517.nodeField = "ub";
connect517.protoField = "ub";
IS510.connect[6] = connect517;

connect connect518 = createNode("connect");
connect518.nodeField = "vb";
connect518.protoField = "vb";
IS510.connect[7] = connect518;

connect connect519 = createNode("connect");
connect519.nodeField = "wb";
connect519.protoField = "wb";
IS510.connect[8] = connect519;

connect connect520 = createNode("connect");
connect520.nodeField = "xb";
connect520.protoField = "xb";
IS510.connect[9] = connect520;

connect connect521 = createNode("connect");
connect521.nodeField = "enterTime";
connect521.protoField = "enterTime";
IS510.connect[10] = connect521;

connect connect522 = createNode("connect");
connect522.nodeField = "exitTime";
connect522.protoField = "exitTime";
IS510.connect[11] = connect522;

connect connect523 = createNode("connect");
connect523.nodeField = "coord";
connect523.protoField = "coord";
IS510.connect[12] = connect523;

connect connect524 = createNode("connect");
connect524.nodeField = "texCoord";
connect524.protoField = "texCoord";
IS510.connect[13] = connect524;

connect connect525 = createNode("connect");
connect525.nodeField = "yb_changed";
connect525.protoField = "yb_changed";
IS510.connect[14] = connect525;

connect connect526 = createNode("connect");
connect526.nodeField = "enabled";
connect526.protoField = "enabled";
IS510.connect[15] = connect526;

Script493.iS = IS510;


Script493.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"yb_changed=enabled;\n"+
"}\n"+
"function ob(n,time){\n"+
"if(!enabled){\n"+
"enabled=TRUE;\n"+
"yb_changed=TRUE;\n"+
"wb=time;\n"+
"}\n"+
"}\n"+
"function pb(n,time){\n"+
"if(enabled){\n"+
"enabled=FALSE;\n"+
"yb_changed=FALSE;\n"+
"xb=time;\n"+
"}\n"+
"}\n"+
"function rb(n,Za){\n"+
"if(enabled){\n"+
"if(n==TRUE){\n"+
"ub=Za;\n"+
"}else{\n"+
"vb=Za;\n"+
"}\n"+
"}\n"+
"}\n"+
"function qb(n,Za){\n"+
"if(enabled){\n"+
"if(n==TRUE){\n"+
"enterTime=Za;\n"+
"}else{\n"+
"exitTime=Za;\n"+
"}\n"+
"}\n"+
"}\n"+
"function sb(n,Za){\n"+
"if(enabled){\n"+
"coord=n;\n"+
"}\n"+
"}\n"+
"function tb(n,Za){\n"+
"if(enabled){\n"+
"texCoord=n;\n"+
"}\n"+
"}`)
ProtoBody492.children = new MFNode();

ProtoBody492.children[0] = Script493;

ProtoDeclare474.protoBody = ProtoBody492;

children[8] = ProtoDeclare474;

ProtoDeclare ProtoDeclare527 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="zb" ><ProtoInterface><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="set_coord" accessType="inputOnly" type="MFVec3f"></field>
<field name="set_texCoord" accessType="inputOnly" type="MFVec2f"></field>
<field name="set_diffuseColor" accessType="inputOnly" type="SFColor"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="coord_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="texCoord_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="diffuseColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="url" accessType="inputOutput" type="MFString"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat"></field>
<field name="emissiveColor" accessType="inputOutput" type="SFColor" value="0 0.09 0.15"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="0.5 0.5 0.5"></field>
<field name="shininess" accessType="inputOutput" type="SFFloat" value="0.2"></field>
<field name="q" accessType="inputOutput" type="SFVec2f" value="-0.5 -0.5"></field>
<field name="s" accessType="inputOutput" type="SFFloat"></field>
<field name="t" accessType="inputOutput" type="SFVec2f" value="1 1"></field>
<field name="u" accessType="inputOutput" type="SFVec2f"></field>
<field name="Ab" accessType="inputOutput" type="SFVec2f" value="1 1"></field>
<field name="Bb" accessType="inputOutput" type="SFFloat"></field>
<field name="Cb" accessType="inputOutput" type="SFFloat"></field>
<field name="Db" accessType="inputOutput" type="SFFloat"></field>
<field name="Eb" accessType="inputOutput" type="SFFloat"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="D" accessType="inputOutput" type="SFNode"></field>
<field name="F" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="p" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="Fb" accessType="initializeOnly" type="SFBool"></field>
<field name="Gb" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="Hb" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Ib" accessType="initializeOnly" type="SFVec2f" value="1 1"></field>
<field name="Jb" accessType="initializeOnly" type="SFColor"></field>
<field name="Kb" accessType="initializeOnly" type="SFColor"></field>
<field name="Lb" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="coord" accessType="initializeOnly" type="MFVec3f"></field>
<field name="texCoord" accessType="initializeOnly" type="MFVec2f"></field>
<field name="coordIndex" accessType="initializeOnly" type="MFInt32"></field>
<field name="color" accessType="initializeOnly" type="MFColor"></field>
<field name="Mb" accessType="initializeOnly" type="SFNode"></field>
<field name="Nb" accessType="initializeOnly" type="SFNode"></field>
<field name="Ob" accessType="initializeOnly" type="SFFloat" value="0.02"></field>
<field name="Pb" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="creaseAngle" accessType="initializeOnly" type="SFFloat" value="0.524"></field>
<field name="H" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="choice" accessType="initializeOnly" type="SFInt32"></field>
<field name="Qb" accessType="initializeOnly" type="MFString"></field>
<field name="Rb" accessType="initializeOnly" type="MFString" value="&quot;SERIF&quot;"></field>
<field name="fontStyle" accessType="initializeOnly" type="SFString" value="PLAIN"></field>
<field name="Sb" accessType="initializeOnly" type="SFString"></field>
<field name="diffuseColor" accessType="initializeOnly" type="SFColor" value="0 0.48 0.8"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="Tb_1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="choice"></connect>
</IS>
<Shape><Appearance containerField="appearance" DEF="Ub_1"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
<ImageTexture containerField="texture" DEF="Vb_1"><IS><connect nodeField="url" protoField="url"></connect>
</IS>
</ImageTexture>
<TextureTransform containerField="textureTransform" DEF="Wb_1"><IS><connect nodeField="translation" protoField="u"></connect>
<connect nodeField="rotation" protoField="s"></connect>
<connect nodeField="scale" protoField="t"></connect>
<connect nodeField="center" protoField="q"></connect>
</IS>
</TextureTransform>
</Appearance>
<IndexedFaceSet DEF="Xb_1" convex="false"><IS><connect nodeField="solid" protoField="Gb"></connect>
<connect nodeField="creaseAngle" protoField="creaseAngle"></connect>
<connect nodeField="coordIndex" protoField="coordIndex"></connect>
</IS>
<TextureCoordinate containerField="texCoord" DEF="Zb_1"><IS><connect nodeField="point" protoField="texCoord"></connect>
</IS>
</TextureCoordinate>
<Coordinate DEF="Yb_1"><IS><connect nodeField="point" protoField="coord"></connect>
</IS>
</Coordinate>
</IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" DEF="ac_1"><ImageTexture containerField="texture" USE="Vb_1"></ImageTexture>
<TextureTransform containerField="textureTransform" USE="Wb_1"></TextureTransform>
</Appearance>
<IndexedFaceSet DEF="bc_1" convex="false"><IS><connect nodeField="solid" protoField="Gb"></connect>
<connect nodeField="creaseAngle" protoField="creaseAngle"></connect>
<connect nodeField="coordIndex" protoField="coordIndex"></connect>
</IS>
<Color containerField="color" DEF="dc_1"><IS><connect nodeField="color" protoField="color"></connect>
</IS>
</Color>
<TextureCoordinate containerField="texCoord" DEF="ec_1"><IS><connect nodeField="point" protoField="texCoord"></connect>
</IS>
</TextureCoordinate>
<Coordinate DEF="cc_1"><IS><connect nodeField="point" protoField="coord"></connect>
</IS>
</Coordinate>
</IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" USE="Ub_1"></Appearance>
<IndexedFaceSet USE="bc_1"></IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" USE="ac_1"></Appearance>
<IndexedFaceSet USE="bc_1"></IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" USE="Ub_1"></Appearance>
<Text DEF="fc_1"><IS><connect nodeField="string" protoField="Qb"></connect>
</IS>
<FontStyle containerField="fontStyle"><IS><connect nodeField="language" protoField="Sb"></connect>
<connect nodeField="family" protoField="Rb"></connect>
<connect nodeField="style" protoField="fontStyle"></connect>
</IS>
</FontStyle>
</Text>
</Shape>
<Shape><Appearance containerField="appearance" USE="ac_1"></Appearance>
<Text USE="fc_1"></Text>
</Shape>
</Switch>
<Script DEF="gc_1" directOutput="true"><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="set_coord" accessType="inputOnly" type="MFVec3f"></field>
<field name="set_texCoord" accessType="inputOnly" type="MFVec2f"></field>
<field name="set_diffuseColor" accessType="inputOnly" type="SFColor"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="choice" accessType="outputOnly" type="SFInt32"></field>
<field name="coordIndex" accessType="outputOnly" type="MFInt32"></field>
<field name="color_changed" accessType="outputOnly" type="MFColor"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="coord_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="texCoord_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="diffuseColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="hc" accessType="initializeOnly" type="SFInt32"></field>
<field name="p" accessType="initializeOnly" type="SFBool"></field>
<field name="coord" accessType="initializeOnly" type="MFVec3f"></field>
<field name="texCoord" accessType="initializeOnly" type="MFVec2f"></field>
<field name="H" accessType="initializeOnly" type="SFBool"></field>
<field name="color" accessType="initializeOnly" type="MFColor"></field>
<field name="Hb" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Ib" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Jb" accessType="initializeOnly" type="SFColor"></field>
<field name="Kb" accessType="initializeOnly" type="SFColor"></field>
<field name="Lb" accessType="initializeOnly" type="SFInt32"></field>
<field name="diffuseColor" accessType="initializeOnly" type="SFColor"></field>
<field name="Mb" accessType="initializeOnly" type="SFNode"></field>
<field name="Nb" accessType="initializeOnly" type="SFNode"></field>
<field name="Ob" accessType="initializeOnly" type="SFFloat"></field>
<field name="Pb" accessType="initializeOnly" type="SFFloat"></field>
<field name="Fb" accessType="initializeOnly" type="SFBool"></field>
<field name="Gb" accessType="initializeOnly" type="SFBool"></field>
<field name="ma" accessType="initializeOnly" type="SFNode"><Switch USE="Tb_1"></Switch>
</field>
<field name="ic" accessType="initializeOnly" type="SFNode"><Appearance USE="Ub_1"></Appearance>
</field>
<field name="jc" accessType="initializeOnly" type="SFNode"><Appearance USE="ac_1"></Appearance>
</field>
<IS><connect nodeField="set_p" protoField="set_p"></connect>
<connect nodeField="set_coord" protoField="set_coord"></connect>
<connect nodeField="set_texCoord" protoField="set_texCoord"></connect>
<connect nodeField="set_diffuseColor" protoField="set_diffuseColor"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="set_v" protoField="set_v"></connect>
<connect nodeField="p_changed" protoField="p_changed"></connect>
<connect nodeField="coord_changed" protoField="coord_changed"></connect>
<connect nodeField="texCoord_changed" protoField="texCoord_changed"></connect>
<connect nodeField="diffuseColor_changed" protoField="diffuseColor_changed"></connect>
<connect nodeField="v_changed" protoField="v_changed"></connect>
<connect nodeField="hc" protoField="choice"></connect>
<connect nodeField="p" protoField="p"></connect>
<connect nodeField="H" protoField="H"></connect>
<connect nodeField="Hb" protoField="Hb"></connect>
<connect nodeField="Ib" protoField="Ib"></connect>
<connect nodeField="Jb" protoField="Jb"></connect>
<connect nodeField="Kb" protoField="Kb"></connect>
<connect nodeField="Lb" protoField="Lb"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="Mb" protoField="Mb"></connect>
<connect nodeField="Nb" protoField="Nb"></connect>
<connect nodeField="Ob" protoField="Ob"></connect>
<connect nodeField="Pb" protoField="Pb"></connect>
<connect nodeField="Fb" protoField="Fb"></connect>
<connect nodeField="Gb" protoField="Gb"></connect>
</IS>
<![CDATA[javascript:
function kc()
{
R=0;
lc=-1;
for(J=0;J<Mb.mc.length-1;J++){
R=J;
nc=Mb.mc[J];
oc=Mb.mc[J+1];
for(J+=2;J<Mb.mc.length-1
&&Mb.mc[J]!=-1;J++);
lc=J-1;
pc=Mb.mc[lc];
for(qc=R;qc<=lc;qc++){
rc=coord[pc].x;
sc=coord[pc].y;
tc=coord[nc].x;
uc=coord[nc].y;
vc=coord[oc].x;
wc=coord[oc].y;
xc=sc-uc;
yc=tc-rc;
zc=rc*(uc-sc)-sc*(tc-rc);
Ac=uc-wc;
Bc=vc-tc;
Cc=tc*(wc-uc)-uc*(vc-tc);
Dc=1.0/Math.sqrt(xc*xc+yc*yc);
xc*=Dc;
yc*=Dc;
zc*=Dc;
Ec=1.0/Math.sqrt(Ac*Ac+Bc*Bc);
Ac*=Ec;
Bc*=Ec;
Cc*=Ec;
for(Fc=0;Fc<Nb.Gc.length;Fc++){
Hc=Nb.Gc[Fc].y*Ob;
if(Hc==0)
continue;
Ic=zc+Hc;
Jc=Cc+Hc;
Kc=xc*Bc-Ac*yc;
if(Math.abs(Kc)<0.001){
Lc=yc;
Mc=-xc;
Nc=-xc*uc-yc*tc+Hc;
Oc=1.0/(xc*Mc-Lc*yc);
Pc=(yc*Jc-Bc*Ic)*Oc;
Qc=(Ac*Ic-xc*Jc)*Oc;
}else{
Oc=1.0/Kc;
Pc=(yc*Jc-Bc*Ic)*Oc;
Qc=(Ac*Ic-xc*Jc)*Oc;
}
Rc=nc+(Fc*Mb.coord.length);
coord[Rc].x=Pc;
coord[Rc].y=Qc;
}
pc=nc;
nc=oc;
if(qc<lc-1)
oc=Mb.mc[qc+2];
else
oc=Mb.mc[R];
}
}
}
function Sc()
{
coord.length=Mb.coord.length*Nb.Gc.length;
Tc=FALSE;
Uc=0;
for(Fc=0;Fc<Nb.Gc.length;Fc++){
Vc=-1*Nb.Gc[Fc].x*Pb;
if(Nb.Gc[Fc].y!=0)
Tc=TRUE;
for(Wc=0;Wc<Mb.coord.length;Wc++){
coord[Uc].x=Mb.coord[Wc].x;
coord[Uc].y=Mb.coord[Wc].y;
coord[Uc].z=Vc;
Uc++;
}
}
coordIndex=Mb.coordIndex;
coordIndex.length=Mb.coordIndex.length*2
+(Mb.mc.length-1)*(Nb.Gc.length-1);
Xc=TRUE;
for(qc=Mb.coordIndex.length,Fc=0;
Fc<Nb.Gc.length-1;Fc++){
Yc=Mb.coord.length*Fc;
for(J=0;J<Mb.mc.length-1;J++){
Zc=Mb.mc[J];
if(Xc){
R=Zc;
Xc=FALSE;
}
ad=Mb.mc[J+1];
if(J>=Mb.mc.length-2||ad==-1){
ad=R;
Xc=TRUE;
}
if(Zc!=-1&&ad!=-1){
Zc+=Yc;
ad+=Yc;
bd=Zc+Mb.coord.length;
cd=ad+Mb.coord.length;
coordIndex[qc++]=Zc;
coordIndex[qc++]=bd;
coordIndex[qc++]=ad;
coordIndex[qc++]=-1;
coordIndex[qc++]=ad;
coordIndex[qc++]=bd;
coordIndex[qc++]=cd;
coordIndex[qc++]=-1;
}
else
Xc=TRUE;
}
}
dd=Mb.coord.length*(Nb.Gc.length-1);
for(J=Mb.coordIndex.length-2;J>=0;J--,qc++){
ed=Mb.coordIndex[J];
if(ed!=-1){
ed+=dd;
}
coordIndex[qc]=ed;
}
coordIndex[qc]=-1;qc++;
coordIndex.length=qc;
if(Tc){
kc();
}
coord_changed=coord;
}
function fd(){
coord=Mb.coord;
coordIndex=Mb.coordIndex;
coord_changed=coord;
}
function gd(){
if((H==TRUE)&&(Lb==-1))return;
if(Lb==0){
min=Hb.x;
max=Ib.x;
}
else{
min=Hb.y;
max=Ib.y;
}
hd=max-min;
color.length=coord.length;
for(id=0;id<coord.length;id++){
if(hd==0.0){
fraction=0.0;
}else{
if(Lb==0){
fraction=(coord[id].x-min)/hd;
}else{
fraction=(coord[id].y-min)/hd;
}
}
jd=new SFColor(0,0,0);
if(Lb==-1){
jd=diffuseColor;
}else{
if(fraction<0){fraction=0;}
if(fraction>1){fraction=1;}
jd.r=Kb.r*(1-fraction)+
Jb.r*fraction;
jd.g=Kb.g*(1-fraction)+
Jb.g*fraction;
jd.b=Kb.b*(1-fraction)+
Jb.b*fraction;
}
color[id]=jd;
}
color_changed=color;
}
function kd(){
hd=new SFVec2f(0,0);
hd.x=Ib.x-Hb.x;
hd.y=Ib.y-Hb.y;
texCoord.length=coord.length;
for(id=0;id<coord.length;id++){
if(hd.x==0.0){
texCoord[id].x=0.0;
}else{
texCoord[id].x=(coord[id].x-Hb.x)/hd.x;
}
if(hd.y==0.0){
texCoord[id].y=0.0;
}else{
texCoord[id].y=(coord[id].y-Hb.y)/hd.y;
}
}
texCoord_changed=texCoord;
}
function set_p(n){
if(n==TRUE){
if(H==TRUE){
if(hc>=4){
ma.whichChoice=4;
choice=4;
}
else if(Lb>=0){
ma.whichChoice=2;
choice=2;
}else{
ma.whichChoice=0;
choice=0;
}
}else{
if(hc>=4){
ma.whichChoice=5;
choice=5;
}
else if(Lb>=0){
ma.whichChoice=3;
choice=3;
}else{
ma.whichChoice=1;
choice=1;
}
}
}else{
ma.whichChoice=-1;
choice=-1;
}
p=n;
p_changed=n;
}
function ld()
{
if(Fb){
fd();
}
else{
Sc();
}
}
function initialize(){
set_p(p);
v_changed=ic.texture_changed;
diffuseColor_changed=diffuseColor;
if(hc<4){
ld();
kd();
gd();
}
}
function set_diffuseColor(n){
diffuseColor=n;
diffuseColor_changed=n;
gd();
}
function set_v(n){
ic.set_texture=n;
jc.set_texture=n;
v_changed=n;
}
function w(){
}]]></Script>
<ROUTE fromNode="gc_1" fromField="coord_changed" toNode="Yb_1" toField="set_point"></ROUTE>
<ROUTE fromNode="gc_1" fromField="texCoord_changed" toNode="Zb_1" toField="set_point"></ROUTE>
<ROUTE fromNode="gc_1" fromField="coordIndex" toNode="Xb_1" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="gc_1" fromField="coord_changed" toNode="cc_1" toField="set_point"></ROUTE>
<ROUTE fromNode="gc_1" fromField="color_changed" toNode="dc_1" toField="set_color"></ROUTE>
<ROUTE fromNode="gc_1" fromField="texCoord_changed" toNode="ec_1" toField="set_point"></ROUTE>
<ROUTE fromNode="gc_1" fromField="coordIndex" toNode="bc_1" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="gc_1" fromField="coordIndex" toNode="bc_1" toField="set_colorIndex"></ROUTE>
<ROUTE fromNode="gc_1" fromField="choice" toNode="Tb_1" toField="set_whichChoice"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare527.name = "zb";
ProtoInterface ProtoInterface528 = createNode("ProtoInterface");
field field529 = createNode("field");
field529.name = "set_p";
field529.accessType = "inputOnly";
field529.type = "SFBool";
ProtoInterface528.field = new MFNode();

ProtoInterface528.field[0] = field529;

field field530 = createNode("field");
field530.name = "set_coord";
field530.accessType = "inputOnly";
field530.type = "MFVec3f";
ProtoInterface528.field[1] = field530;

field field531 = createNode("field");
field531.name = "set_texCoord";
field531.accessType = "inputOnly";
field531.type = "MFVec2f";
ProtoInterface528.field[2] = field531;

field field532 = createNode("field");
field532.name = "set_diffuseColor";
field532.accessType = "inputOnly";
field532.type = "SFColor";
ProtoInterface528.field[3] = field532;

field field533 = createNode("field");
field533.name = "w";
field533.accessType = "inputOnly";
field533.type = "SFBool";
ProtoInterface528.field[4] = field533;

field field534 = createNode("field");
field534.name = "set_v";
field534.accessType = "inputOnly";
field534.type = "SFNode";
ProtoInterface528.field[5] = field534;

field field535 = createNode("field");
field535.name = "p_changed";
field535.accessType = "outputOnly";
field535.type = "SFBool";
ProtoInterface528.field[6] = field535;

field field536 = createNode("field");
field536.name = "coord_changed";
field536.accessType = "outputOnly";
field536.type = "MFVec3f";
ProtoInterface528.field[7] = field536;

field field537 = createNode("field");
field537.name = "texCoord_changed";
field537.accessType = "outputOnly";
field537.type = "MFVec2f";
ProtoInterface528.field[8] = field537;

field field538 = createNode("field");
field538.name = "diffuseColor_changed";
field538.accessType = "outputOnly";
field538.type = "SFColor";
ProtoInterface528.field[9] = field538;

field field539 = createNode("field");
field539.name = "v_changed";
field539.accessType = "outputOnly";
field539.type = "SFNode";
ProtoInterface528.field[10] = field539;

field field540 = createNode("field");
field540.name = "url";
field540.accessType = "inputOutput";
field540.type = "MFString";
ProtoInterface528.field[11] = field540;

field field541 = createNode("field");
field541.name = "transparency";
field541.accessType = "inputOutput";
field541.type = "SFFloat";
ProtoInterface528.field[12] = field541;

field field542 = createNode("field");
field542.name = "emissiveColor";
field542.accessType = "inputOutput";
field542.type = "SFColor";
field542.value = "0 0.09 0.15";
ProtoInterface528.field[13] = field542;

field field543 = createNode("field");
field543.name = "specularColor";
field543.accessType = "inputOutput";
field543.type = "SFColor";
field543.value = "0.5 0.5 0.5";
ProtoInterface528.field[14] = field543;

field field544 = createNode("field");
field544.name = "shininess";
field544.accessType = "inputOutput";
field544.type = "SFFloat";
field544.value = "0.2";
ProtoInterface528.field[15] = field544;

field field545 = createNode("field");
field545.name = "q";
field545.accessType = "inputOutput";
field545.type = "SFVec2f";
field545.value = "-0.5 -0.5";
ProtoInterface528.field[16] = field545;

field field546 = createNode("field");
field546.name = "s";
field546.accessType = "inputOutput";
field546.type = "SFFloat";
ProtoInterface528.field[17] = field546;

field field547 = createNode("field");
field547.name = "t";
field547.accessType = "inputOutput";
field547.type = "SFVec2f";
field547.value = "1 1";
ProtoInterface528.field[18] = field547;

field field548 = createNode("field");
field548.name = "u";
field548.accessType = "inputOutput";
field548.type = "SFVec2f";
ProtoInterface528.field[19] = field548;

field field549 = createNode("field");
field549.name = "Ab";
field549.accessType = "inputOutput";
field549.type = "SFVec2f";
field549.value = "1 1";
ProtoInterface528.field[20] = field549;

field field550 = createNode("field");
field550.name = "Bb";
field550.accessType = "inputOutput";
field550.type = "SFFloat";
ProtoInterface528.field[21] = field550;

field field551 = createNode("field");
field551.name = "Cb";
field551.accessType = "inputOutput";
field551.type = "SFFloat";
ProtoInterface528.field[22] = field551;

field field552 = createNode("field");
field552.name = "Db";
field552.accessType = "inputOutput";
field552.type = "SFFloat";
ProtoInterface528.field[23] = field552;

field field553 = createNode("field");
field553.name = "Eb";
field553.accessType = "inputOutput";
field553.type = "SFFloat";
ProtoInterface528.field[24] = field553;

field field554 = createNode("field");
field554.name = "B";
field554.accessType = "inputOutput";
field554.type = "SFNode";
ProtoInterface528.field[25] = field554;

field field555 = createNode("field");
field555.name = "C";
field555.accessType = "inputOutput";
field555.type = "MFNode";
ProtoInterface528.field[26] = field555;

field field556 = createNode("field");
field556.name = "D";
field556.accessType = "inputOutput";
field556.type = "SFNode";
ProtoInterface528.field[27] = field556;

field field557 = createNode("field");
field557.name = "F";
field557.accessType = "inputOutput";
field557.type = "SFInt32";
field557.value = "-1";
ProtoInterface528.field[28] = field557;

field field558 = createNode("field");
field558.name = "p";
field558.accessType = "initializeOnly";
field558.type = "SFBool";
field558.value = "true";
ProtoInterface528.field[29] = field558;

field field559 = createNode("field");
field559.name = "Fb";
field559.accessType = "initializeOnly";
field559.type = "SFBool";
ProtoInterface528.field[30] = field559;

field field560 = createNode("field");
field560.name = "Gb";
field560.accessType = "initializeOnly";
field560.type = "SFBool";
field560.value = "true";
ProtoInterface528.field[31] = field560;

field field561 = createNode("field");
field561.name = "Hb";
field561.accessType = "initializeOnly";
field561.type = "SFVec2f";
ProtoInterface528.field[32] = field561;

field field562 = createNode("field");
field562.name = "Ib";
field562.accessType = "initializeOnly";
field562.type = "SFVec2f";
field562.value = "1 1";
ProtoInterface528.field[33] = field562;

field field563 = createNode("field");
field563.name = "Jb";
field563.accessType = "initializeOnly";
field563.type = "SFColor";
ProtoInterface528.field[34] = field563;

field field564 = createNode("field");
field564.name = "Kb";
field564.accessType = "initializeOnly";
field564.type = "SFColor";
ProtoInterface528.field[35] = field564;

field field565 = createNode("field");
field565.name = "Lb";
field565.accessType = "initializeOnly";
field565.type = "SFInt32";
field565.value = "-1";
ProtoInterface528.field[36] = field565;

field field566 = createNode("field");
field566.name = "coord";
field566.accessType = "initializeOnly";
field566.type = "MFVec3f";
ProtoInterface528.field[37] = field566;

field field567 = createNode("field");
field567.name = "texCoord";
field567.accessType = "initializeOnly";
field567.type = "MFVec2f";
ProtoInterface528.field[38] = field567;

field field568 = createNode("field");
field568.name = "coordIndex";
field568.accessType = "initializeOnly";
field568.type = "MFInt32";
ProtoInterface528.field[39] = field568;

field field569 = createNode("field");
field569.name = "color";
field569.accessType = "initializeOnly";
field569.type = "MFColor";
ProtoInterface528.field[40] = field569;

field field570 = createNode("field");
field570.name = "Mb";
field570.accessType = "initializeOnly";
field570.type = "SFNode";
ProtoInterface528.field[41] = field570;

field field571 = createNode("field");
field571.name = "Nb";
field571.accessType = "initializeOnly";
field571.type = "SFNode";
ProtoInterface528.field[42] = field571;

field field572 = createNode("field");
field572.name = "Ob";
field572.accessType = "initializeOnly";
field572.type = "SFFloat";
field572.value = "0.02";
ProtoInterface528.field[43] = field572;

field field573 = createNode("field");
field573.name = "Pb";
field573.accessType = "initializeOnly";
field573.type = "SFFloat";
field573.value = "1";
ProtoInterface528.field[44] = field573;

field field574 = createNode("field");
field574.name = "creaseAngle";
field574.accessType = "initializeOnly";
field574.type = "SFFloat";
field574.value = "0.524";
ProtoInterface528.field[45] = field574;

field field575 = createNode("field");
field575.name = "H";
field575.accessType = "initializeOnly";
field575.type = "SFBool";
field575.value = "true";
ProtoInterface528.field[46] = field575;

field field576 = createNode("field");
field576.name = "choice";
field576.accessType = "initializeOnly";
field576.type = "SFInt32";
ProtoInterface528.field[47] = field576;

field field577 = createNode("field");
field577.name = "Qb";
field577.accessType = "initializeOnly";
field577.type = "MFString";
ProtoInterface528.field[48] = field577;

field field578 = createNode("field");
field578.name = "Rb";
field578.accessType = "initializeOnly";
field578.type = "MFString";
field578.value = "\"SERIF\"";
ProtoInterface528.field[49] = field578;

field field579 = createNode("field");
field579.name = "fontStyle";
field579.accessType = "initializeOnly";
field579.type = "SFString";
field579.value = "PLAIN";
ProtoInterface528.field[50] = field579;

field field580 = createNode("field");
field580.name = "Sb";
field580.accessType = "initializeOnly";
field580.type = "SFString";
ProtoInterface528.field[51] = field580;

field field581 = createNode("field");
field581.name = "diffuseColor";
field581.accessType = "initializeOnly";
field581.type = "SFColor";
field581.value = "0 0.48 0.8";
ProtoInterface528.field[52] = field581;

ProtoDeclare527.protoInterface = ProtoInterface528;

ProtoBody ProtoBody582 = createNode("ProtoBody");
Switch Switch583 = createNode("Switch");
Switch583.DEF = "Tb_1";
Switch583.whichChoice = -1;
IS IS584 = createNode("IS");
connect connect585 = createNode("connect");
connect585.nodeField = "whichChoice";
connect585.protoField = "choice";
IS584.connect = new MFNode();

IS584.connect[0] = connect585;

Switch583.iS = IS584;

Shape Shape586 = createNode("Shape");
Appearance Appearance587 = createNode("Appearance");
Appearance587.DEF = "Ub_1";
Material Material588 = createNode("Material");
IS IS589 = createNode("IS");
connect connect590 = createNode("connect");
connect590.nodeField = "diffuseColor";
connect590.protoField = "diffuseColor";
IS589.connect = new MFNode();

IS589.connect[0] = connect590;

connect connect591 = createNode("connect");
connect591.nodeField = "specularColor";
connect591.protoField = "specularColor";
IS589.connect[1] = connect591;

connect connect592 = createNode("connect");
connect592.nodeField = "emissiveColor";
connect592.protoField = "emissiveColor";
IS589.connect[2] = connect592;

connect connect593 = createNode("connect");
connect593.nodeField = "shininess";
connect593.protoField = "shininess";
IS589.connect[3] = connect593;

connect connect594 = createNode("connect");
connect594.nodeField = "transparency";
connect594.protoField = "transparency";
IS589.connect[4] = connect594;

Material588.iS = IS589;

Appearance587.material = Material588;

ImageTexture ImageTexture595 = createNode("ImageTexture");
ImageTexture595.DEF = "Vb_1";
IS IS596 = createNode("IS");
connect connect597 = createNode("connect");
connect597.nodeField = "url";
connect597.protoField = "url";
IS596.connect = new MFNode();

IS596.connect[0] = connect597;

ImageTexture595.iS = IS596;

Appearance587.texture = ImageTexture595;

TextureTransform TextureTransform598 = createNode("TextureTransform");
TextureTransform598.DEF = "Wb_1";
IS IS599 = createNode("IS");
connect connect600 = createNode("connect");
connect600.nodeField = "translation";
connect600.protoField = "u";
IS599.connect = new MFNode();

IS599.connect[0] = connect600;

connect connect601 = createNode("connect");
connect601.nodeField = "rotation";
connect601.protoField = "s";
IS599.connect[1] = connect601;

connect connect602 = createNode("connect");
connect602.nodeField = "scale";
connect602.protoField = "t";
IS599.connect[2] = connect602;

connect connect603 = createNode("connect");
connect603.nodeField = "center";
connect603.protoField = "q";
IS599.connect[3] = connect603;

TextureTransform598.iS = IS599;

Appearance587.textureTransform = TextureTransform598;

Shape586.appearance = Appearance587;

IndexedFaceSet IndexedFaceSet604 = createNode("IndexedFaceSet");
IndexedFaceSet604.DEF = "Xb_1";
IndexedFaceSet604.convex = False;
IS IS605 = createNode("IS");
connect connect606 = createNode("connect");
connect606.nodeField = "solid";
connect606.protoField = "Gb";
IS605.connect = new MFNode();

IS605.connect[0] = connect606;

connect connect607 = createNode("connect");
connect607.nodeField = "creaseAngle";
connect607.protoField = "creaseAngle";
IS605.connect[1] = connect607;

connect connect608 = createNode("connect");
connect608.nodeField = "coordIndex";
connect608.protoField = "coordIndex";
IS605.connect[2] = connect608;

IndexedFaceSet604.iS = IS605;

TextureCoordinate TextureCoordinate609 = createNode("TextureCoordinate");
TextureCoordinate609.DEF = "Zb_1";
IS IS610 = createNode("IS");
connect connect611 = createNode("connect");
connect611.nodeField = "point";
connect611.protoField = "texCoord";
IS610.connect = new MFNode();

IS610.connect[0] = connect611;

TextureCoordinate609.iS = IS610;

IndexedFaceSet604.texCoord = TextureCoordinate609;

Coordinate Coordinate612 = createNode("Coordinate");
Coordinate612.DEF = "Yb_1";
IS IS613 = createNode("IS");
connect connect614 = createNode("connect");
connect614.nodeField = "point";
connect614.protoField = "coord";
IS613.connect = new MFNode();

IS613.connect[0] = connect614;

Coordinate612.iS = IS613;

IndexedFaceSet604.coord = Coordinate612;

Shape586.geometry = IndexedFaceSet604;

Switch583.children = new MFNode();

Switch583.children[0] = Shape586;

Shape Shape615 = createNode("Shape");
Appearance Appearance616 = createNode("Appearance");
Appearance616.DEF = "ac_1";
ImageTexture ImageTexture617 = createNode("ImageTexture");
ImageTexture617.USE = "Vb_1";
Appearance616.texture = ImageTexture617;

TextureTransform TextureTransform618 = createNode("TextureTransform");
TextureTransform618.USE = "Wb_1";
Appearance616.textureTransform = TextureTransform618;

Shape615.appearance = Appearance616;

IndexedFaceSet IndexedFaceSet619 = createNode("IndexedFaceSet");
IndexedFaceSet619.DEF = "bc_1";
IndexedFaceSet619.convex = False;
IS IS620 = createNode("IS");
connect connect621 = createNode("connect");
connect621.nodeField = "solid";
connect621.protoField = "Gb";
IS620.connect = new MFNode();

IS620.connect[0] = connect621;

connect connect622 = createNode("connect");
connect622.nodeField = "creaseAngle";
connect622.protoField = "creaseAngle";
IS620.connect[1] = connect622;

connect connect623 = createNode("connect");
connect623.nodeField = "coordIndex";
connect623.protoField = "coordIndex";
IS620.connect[2] = connect623;

IndexedFaceSet619.iS = IS620;

Color Color624 = createNode("Color");
Color624.DEF = "dc_1";
IS IS625 = createNode("IS");
connect connect626 = createNode("connect");
connect626.nodeField = "color";
connect626.protoField = "color";
IS625.connect = new MFNode();

IS625.connect[0] = connect626;

Color624.iS = IS625;

IndexedFaceSet619.color = Color624;

TextureCoordinate TextureCoordinate627 = createNode("TextureCoordinate");
TextureCoordinate627.DEF = "ec_1";
IS IS628 = createNode("IS");
connect connect629 = createNode("connect");
connect629.nodeField = "point";
connect629.protoField = "texCoord";
IS628.connect = new MFNode();

IS628.connect[0] = connect629;

TextureCoordinate627.iS = IS628;

IndexedFaceSet619.texCoord = TextureCoordinate627;

Coordinate Coordinate630 = createNode("Coordinate");
Coordinate630.DEF = "cc_1";
IS IS631 = createNode("IS");
connect connect632 = createNode("connect");
connect632.nodeField = "point";
connect632.protoField = "coord";
IS631.connect = new MFNode();

IS631.connect[0] = connect632;

Coordinate630.iS = IS631;

IndexedFaceSet619.coord = Coordinate630;

Shape615.geometry = IndexedFaceSet619;

Switch583.children[1] = Shape615;

Shape Shape633 = createNode("Shape");
Appearance Appearance634 = createNode("Appearance");
Appearance634.USE = "Ub_1";
Shape633.appearance = Appearance634;

IndexedFaceSet IndexedFaceSet635 = createNode("IndexedFaceSet");
IndexedFaceSet635.USE = "bc_1";
Shape633.geometry = IndexedFaceSet635;

Switch583.children[2] = Shape633;

Shape Shape636 = createNode("Shape");
Appearance Appearance637 = createNode("Appearance");
Appearance637.USE = "ac_1";
Shape636.appearance = Appearance637;

IndexedFaceSet IndexedFaceSet638 = createNode("IndexedFaceSet");
IndexedFaceSet638.USE = "bc_1";
Shape636.geometry = IndexedFaceSet638;

Switch583.children[3] = Shape636;

Shape Shape639 = createNode("Shape");
Appearance Appearance640 = createNode("Appearance");
Appearance640.USE = "Ub_1";
Shape639.appearance = Appearance640;

Text Text641 = createNode("Text");
Text641.DEF = "fc_1";
IS IS642 = createNode("IS");
connect connect643 = createNode("connect");
connect643.nodeField = "string";
connect643.protoField = "Qb";
IS642.connect = new MFNode();

IS642.connect[0] = connect643;

Text641.iS = IS642;

FontStyle FontStyle644 = createNode("FontStyle");
IS IS645 = createNode("IS");
connect connect646 = createNode("connect");
connect646.nodeField = "language";
connect646.protoField = "Sb";
IS645.connect = new MFNode();

IS645.connect[0] = connect646;

connect connect647 = createNode("connect");
connect647.nodeField = "family";
connect647.protoField = "Rb";
IS645.connect[1] = connect647;

connect connect648 = createNode("connect");
connect648.nodeField = "style";
connect648.protoField = "fontStyle";
IS645.connect[2] = connect648;

FontStyle644.iS = IS645;

Text641.fontStyle = FontStyle644;

Shape639.geometry = Text641;

Switch583.children[4] = Shape639;

Shape Shape649 = createNode("Shape");
Appearance Appearance650 = createNode("Appearance");
Appearance650.USE = "ac_1";
Shape649.appearance = Appearance650;

Text Text651 = createNode("Text");
Text651.USE = "fc_1";
Shape649.geometry = Text651;

Switch583.children[5] = Shape649;

ProtoBody582.children = new MFNode();

ProtoBody582.children[0] = Switch583;

Script Script652 = createNode("Script");
Script652.DEF = "gc_1";
Script652.directOutput = True;
field field653 = createNode("field");
field653.name = "set_p";
field653.accessType = "inputOnly";
field653.type = "SFBool";
Script652.field = new MFNode();

Script652.field[0] = field653;

field field654 = createNode("field");
field654.name = "set_coord";
field654.accessType = "inputOnly";
field654.type = "MFVec3f";
Script652.field[1] = field654;

field field655 = createNode("field");
field655.name = "set_texCoord";
field655.accessType = "inputOnly";
field655.type = "MFVec2f";
Script652.field[2] = field655;

field field656 = createNode("field");
field656.name = "set_diffuseColor";
field656.accessType = "inputOnly";
field656.type = "SFColor";
Script652.field[3] = field656;

field field657 = createNode("field");
field657.name = "w";
field657.accessType = "inputOnly";
field657.type = "SFBool";
Script652.field[4] = field657;

field field658 = createNode("field");
field658.name = "set_v";
field658.accessType = "inputOnly";
field658.type = "SFNode";
Script652.field[5] = field658;

field field659 = createNode("field");
field659.name = "choice";
field659.accessType = "outputOnly";
field659.type = "SFInt32";
Script652.field[6] = field659;

field field660 = createNode("field");
field660.name = "coordIndex";
field660.accessType = "outputOnly";
field660.type = "MFInt32";
Script652.field[7] = field660;

field field661 = createNode("field");
field661.name = "color_changed";
field661.accessType = "outputOnly";
field661.type = "MFColor";
Script652.field[8] = field661;

field field662 = createNode("field");
field662.name = "p_changed";
field662.accessType = "outputOnly";
field662.type = "SFBool";
Script652.field[9] = field662;

field field663 = createNode("field");
field663.name = "coord_changed";
field663.accessType = "outputOnly";
field663.type = "MFVec3f";
Script652.field[10] = field663;

field field664 = createNode("field");
field664.name = "texCoord_changed";
field664.accessType = "outputOnly";
field664.type = "MFVec2f";
Script652.field[11] = field664;

field field665 = createNode("field");
field665.name = "diffuseColor_changed";
field665.accessType = "outputOnly";
field665.type = "SFColor";
Script652.field[12] = field665;

field field666 = createNode("field");
field666.name = "v_changed";
field666.accessType = "outputOnly";
field666.type = "SFNode";
Script652.field[13] = field666;

field field667 = createNode("field");
field667.name = "hc";
field667.accessType = "initializeOnly";
field667.type = "SFInt32";
Script652.field[14] = field667;

field field668 = createNode("field");
field668.name = "p";
field668.accessType = "initializeOnly";
field668.type = "SFBool";
Script652.field[15] = field668;

field field669 = createNode("field");
field669.name = "coord";
field669.accessType = "initializeOnly";
field669.type = "MFVec3f";
Script652.field[16] = field669;

field field670 = createNode("field");
field670.name = "texCoord";
field670.accessType = "initializeOnly";
field670.type = "MFVec2f";
Script652.field[17] = field670;

field field671 = createNode("field");
field671.name = "H";
field671.accessType = "initializeOnly";
field671.type = "SFBool";
Script652.field[18] = field671;

field field672 = createNode("field");
field672.name = "color";
field672.accessType = "initializeOnly";
field672.type = "MFColor";
Script652.field[19] = field672;

field field673 = createNode("field");
field673.name = "Hb";
field673.accessType = "initializeOnly";
field673.type = "SFVec2f";
Script652.field[20] = field673;

field field674 = createNode("field");
field674.name = "Ib";
field674.accessType = "initializeOnly";
field674.type = "SFVec2f";
Script652.field[21] = field674;

field field675 = createNode("field");
field675.name = "Jb";
field675.accessType = "initializeOnly";
field675.type = "SFColor";
Script652.field[22] = field675;

field field676 = createNode("field");
field676.name = "Kb";
field676.accessType = "initializeOnly";
field676.type = "SFColor";
Script652.field[23] = field676;

field field677 = createNode("field");
field677.name = "Lb";
field677.accessType = "initializeOnly";
field677.type = "SFInt32";
Script652.field[24] = field677;

field field678 = createNode("field");
field678.name = "diffuseColor";
field678.accessType = "initializeOnly";
field678.type = "SFColor";
Script652.field[25] = field678;

field field679 = createNode("field");
field679.name = "Mb";
field679.accessType = "initializeOnly";
field679.type = "SFNode";
Script652.field[26] = field679;

field field680 = createNode("field");
field680.name = "Nb";
field680.accessType = "initializeOnly";
field680.type = "SFNode";
Script652.field[27] = field680;

field field681 = createNode("field");
field681.name = "Ob";
field681.accessType = "initializeOnly";
field681.type = "SFFloat";
Script652.field[28] = field681;

field field682 = createNode("field");
field682.name = "Pb";
field682.accessType = "initializeOnly";
field682.type = "SFFloat";
Script652.field[29] = field682;

field field683 = createNode("field");
field683.name = "Fb";
field683.accessType = "initializeOnly";
field683.type = "SFBool";
Script652.field[30] = field683;

field field684 = createNode("field");
field684.name = "Gb";
field684.accessType = "initializeOnly";
field684.type = "SFBool";
Script652.field[31] = field684;

field field685 = createNode("field");
field685.name = "ma";
field685.accessType = "initializeOnly";
field685.type = "SFNode";
Switch Switch686 = createNode("Switch");
Switch686.USE = "Tb_1";
field685.children = new MFNode();

field685.children[0] = Switch686;

Script652.field[32] = field685;

field field687 = createNode("field");
field687.name = "ic";
field687.accessType = "initializeOnly";
field687.type = "SFNode";
Appearance Appearance688 = createNode("Appearance");
Appearance688.USE = "Ub_1";
field687.children = new MFNode();

field687.children[0] = Appearance688;

Script652.field[33] = field687;

field field689 = createNode("field");
field689.name = "jc";
field689.accessType = "initializeOnly";
field689.type = "SFNode";
Appearance Appearance690 = createNode("Appearance");
Appearance690.USE = "ac_1";
field689.children = new MFNode();

field689.children[0] = Appearance690;

Script652.field[34] = field689;

IS IS691 = createNode("IS");
connect connect692 = createNode("connect");
connect692.nodeField = "set_p";
connect692.protoField = "set_p";
IS691.connect = new MFNode();

IS691.connect[0] = connect692;

connect connect693 = createNode("connect");
connect693.nodeField = "set_coord";
connect693.protoField = "set_coord";
IS691.connect[1] = connect693;

connect connect694 = createNode("connect");
connect694.nodeField = "set_texCoord";
connect694.protoField = "set_texCoord";
IS691.connect[2] = connect694;

connect connect695 = createNode("connect");
connect695.nodeField = "set_diffuseColor";
connect695.protoField = "set_diffuseColor";
IS691.connect[3] = connect695;

connect connect696 = createNode("connect");
connect696.nodeField = "w";
connect696.protoField = "w";
IS691.connect[4] = connect696;

connect connect697 = createNode("connect");
connect697.nodeField = "set_v";
connect697.protoField = "set_v";
IS691.connect[5] = connect697;

connect connect698 = createNode("connect");
connect698.nodeField = "p_changed";
connect698.protoField = "p_changed";
IS691.connect[6] = connect698;

connect connect699 = createNode("connect");
connect699.nodeField = "coord_changed";
connect699.protoField = "coord_changed";
IS691.connect[7] = connect699;

connect connect700 = createNode("connect");
connect700.nodeField = "texCoord_changed";
connect700.protoField = "texCoord_changed";
IS691.connect[8] = connect700;

connect connect701 = createNode("connect");
connect701.nodeField = "diffuseColor_changed";
connect701.protoField = "diffuseColor_changed";
IS691.connect[9] = connect701;

connect connect702 = createNode("connect");
connect702.nodeField = "v_changed";
connect702.protoField = "v_changed";
IS691.connect[10] = connect702;

connect connect703 = createNode("connect");
connect703.nodeField = "hc";
connect703.protoField = "choice";
IS691.connect[11] = connect703;

connect connect704 = createNode("connect");
connect704.nodeField = "p";
connect704.protoField = "p";
IS691.connect[12] = connect704;

connect connect705 = createNode("connect");
connect705.nodeField = "H";
connect705.protoField = "H";
IS691.connect[13] = connect705;

connect connect706 = createNode("connect");
connect706.nodeField = "Hb";
connect706.protoField = "Hb";
IS691.connect[14] = connect706;

connect connect707 = createNode("connect");
connect707.nodeField = "Ib";
connect707.protoField = "Ib";
IS691.connect[15] = connect707;

connect connect708 = createNode("connect");
connect708.nodeField = "Jb";
connect708.protoField = "Jb";
IS691.connect[16] = connect708;

connect connect709 = createNode("connect");
connect709.nodeField = "Kb";
connect709.protoField = "Kb";
IS691.connect[17] = connect709;

connect connect710 = createNode("connect");
connect710.nodeField = "Lb";
connect710.protoField = "Lb";
IS691.connect[18] = connect710;

connect connect711 = createNode("connect");
connect711.nodeField = "diffuseColor";
connect711.protoField = "diffuseColor";
IS691.connect[19] = connect711;

connect connect712 = createNode("connect");
connect712.nodeField = "Mb";
connect712.protoField = "Mb";
IS691.connect[20] = connect712;

connect connect713 = createNode("connect");
connect713.nodeField = "Nb";
connect713.protoField = "Nb";
IS691.connect[21] = connect713;

connect connect714 = createNode("connect");
connect714.nodeField = "Ob";
connect714.protoField = "Ob";
IS691.connect[22] = connect714;

connect connect715 = createNode("connect");
connect715.nodeField = "Pb";
connect715.protoField = "Pb";
IS691.connect[23] = connect715;

connect connect716 = createNode("connect");
connect716.nodeField = "Fb";
connect716.protoField = "Fb";
IS691.connect[24] = connect716;

connect connect717 = createNode("connect");
connect717.nodeField = "Gb";
connect717.protoField = "Gb";
IS691.connect[25] = connect717;

Script652.iS = IS691;


Script652.setSourceCode(`javascript:\n"+
"function kc()\n"+
"{\n"+
"R=0;\n"+
"lc=-1;\n"+
"for(J=0;J<Mb.mc.length-1;J++){\n"+
"R=J;\n"+
"nc=Mb.mc[J];\n"+
"oc=Mb.mc[J+1];\n"+
"for(J+=2;J<Mb.mc.length-1\n"+
"&&Mb.mc[J]!=-1;J++);\n"+
"lc=J-1;\n"+
"pc=Mb.mc[lc];\n"+
"for(qc=R;qc<=lc;qc++){\n"+
"rc=coord[pc].x;\n"+
"sc=coord[pc].y;\n"+
"tc=coord[nc].x;\n"+
"uc=coord[nc].y;\n"+
"vc=coord[oc].x;\n"+
"wc=coord[oc].y;\n"+
"xc=sc-uc;\n"+
"yc=tc-rc;\n"+
"zc=rc*(uc-sc)-sc*(tc-rc);\n"+
"Ac=uc-wc;\n"+
"Bc=vc-tc;\n"+
"Cc=tc*(wc-uc)-uc*(vc-tc);\n"+
"Dc=1.0/Math.sqrt(xc*xc+yc*yc);\n"+
"xc*=Dc;\n"+
"yc*=Dc;\n"+
"zc*=Dc;\n"+
"Ec=1.0/Math.sqrt(Ac*Ac+Bc*Bc);\n"+
"Ac*=Ec;\n"+
"Bc*=Ec;\n"+
"Cc*=Ec;\n"+
"for(Fc=0;Fc<Nb.Gc.length;Fc++){\n"+
"Hc=Nb.Gc[Fc].y*Ob;\n"+
"if(Hc==0)\n"+
"continue;\n"+
"Ic=zc+Hc;\n"+
"Jc=Cc+Hc;\n"+
"Kc=xc*Bc-Ac*yc;\n"+
"if(Math.abs(Kc)<0.001){\n"+
"Lc=yc;\n"+
"Mc=-xc;\n"+
"Nc=-xc*uc-yc*tc+Hc;\n"+
"Oc=1.0/(xc*Mc-Lc*yc);\n"+
"Pc=(yc*Jc-Bc*Ic)*Oc;\n"+
"Qc=(Ac*Ic-xc*Jc)*Oc;\n"+
"}else{\n"+
"Oc=1.0/Kc;\n"+
"Pc=(yc*Jc-Bc*Ic)*Oc;\n"+
"Qc=(Ac*Ic-xc*Jc)*Oc;\n"+
"}\n"+
"Rc=nc+(Fc*Mb.coord.length);\n"+
"coord[Rc].x=Pc;\n"+
"coord[Rc].y=Qc;\n"+
"}\n"+
"pc=nc;\n"+
"nc=oc;\n"+
"if(qc<lc-1)\n"+
"oc=Mb.mc[qc+2];\n"+
"else\n"+
"oc=Mb.mc[R];\n"+
"}\n"+
"}\n"+
"}\n"+
"function Sc()\n"+
"{\n"+
"coord.length=Mb.coord.length*Nb.Gc.length;\n"+
"Tc=FALSE;\n"+
"Uc=0;\n"+
"for(Fc=0;Fc<Nb.Gc.length;Fc++){\n"+
"Vc=-1*Nb.Gc[Fc].x*Pb;\n"+
"if(Nb.Gc[Fc].y!=0)\n"+
"Tc=TRUE;\n"+
"for(Wc=0;Wc<Mb.coord.length;Wc++){\n"+
"coord[Uc].x=Mb.coord[Wc].x;\n"+
"coord[Uc].y=Mb.coord[Wc].y;\n"+
"coord[Uc].z=Vc;\n"+
"Uc++;\n"+
"}\n"+
"}\n"+
"coordIndex=Mb.coordIndex;\n"+
"coordIndex.length=Mb.coordIndex.length*2\n"+
"+(Mb.mc.length-1)*(Nb.Gc.length-1);\n"+
"Xc=TRUE;\n"+
"for(qc=Mb.coordIndex.length,Fc=0;\n"+
"Fc<Nb.Gc.length-1;Fc++){\n"+
"Yc=Mb.coord.length*Fc;\n"+
"for(J=0;J<Mb.mc.length-1;J++){\n"+
"Zc=Mb.mc[J];\n"+
"if(Xc){\n"+
"R=Zc;\n"+
"Xc=FALSE;\n"+
"}\n"+
"ad=Mb.mc[J+1];\n"+
"if(J>=Mb.mc.length-2||ad==-1){\n"+
"ad=R;\n"+
"Xc=TRUE;\n"+
"}\n"+
"if(Zc!=-1&&ad!=-1){\n"+
"Zc+=Yc;\n"+
"ad+=Yc;\n"+
"bd=Zc+Mb.coord.length;\n"+
"cd=ad+Mb.coord.length;\n"+
"coordIndex[qc++]=Zc;\n"+
"coordIndex[qc++]=bd;\n"+
"coordIndex[qc++]=ad;\n"+
"coordIndex[qc++]=-1;\n"+
"coordIndex[qc++]=ad;\n"+
"coordIndex[qc++]=bd;\n"+
"coordIndex[qc++]=cd;\n"+
"coordIndex[qc++]=-1;\n"+
"}\n"+
"else\n"+
"Xc=TRUE;\n"+
"}\n"+
"}\n"+
"dd=Mb.coord.length*(Nb.Gc.length-1);\n"+
"for(J=Mb.coordIndex.length-2;J>=0;J--,qc++){\n"+
"ed=Mb.coordIndex[J];\n"+
"if(ed!=-1){\n"+
"ed+=dd;\n"+
"}\n"+
"coordIndex[qc]=ed;\n"+
"}\n"+
"coordIndex[qc]=-1;qc++;\n"+
"coordIndex.length=qc;\n"+
"if(Tc){\n"+
"kc();\n"+
"}\n"+
"coord_changed=coord;\n"+
"}\n"+
"function fd(){\n"+
"coord=Mb.coord;\n"+
"coordIndex=Mb.coordIndex;\n"+
"coord_changed=coord;\n"+
"}\n"+
"function gd(){\n"+
"if((H==TRUE)&&(Lb==-1))return;\n"+
"if(Lb==0){\n"+
"min=Hb.x;\n"+
"max=Ib.x;\n"+
"}\n"+
"else{\n"+
"min=Hb.y;\n"+
"max=Ib.y;\n"+
"}\n"+
"hd=max-min;\n"+
"color.length=coord.length;\n"+
"for(id=0;id<coord.length;id++){\n"+
"if(hd==0.0){\n"+
"fraction=0.0;\n"+
"}else{\n"+
"if(Lb==0){\n"+
"fraction=(coord[id].x-min)/hd;\n"+
"}else{\n"+
"fraction=(coord[id].y-min)/hd;\n"+
"}\n"+
"}\n"+
"jd=new SFColor(0,0,0);\n"+
"if(Lb==-1){\n"+
"jd=diffuseColor;\n"+
"}else{\n"+
"if(fraction<0){fraction=0;}\n"+
"if(fraction>1){fraction=1;}\n"+
"jd.r=Kb.r*(1-fraction)+\n"+
"Jb.r*fraction;\n"+
"jd.g=Kb.g*(1-fraction)+\n"+
"Jb.g*fraction;\n"+
"jd.b=Kb.b*(1-fraction)+\n"+
"Jb.b*fraction;\n"+
"}\n"+
"color[id]=jd;\n"+
"}\n"+
"color_changed=color;\n"+
"}\n"+
"function kd(){\n"+
"hd=new SFVec2f(0,0);\n"+
"hd.x=Ib.x-Hb.x;\n"+
"hd.y=Ib.y-Hb.y;\n"+
"texCoord.length=coord.length;\n"+
"for(id=0;id<coord.length;id++){\n"+
"if(hd.x==0.0){\n"+
"texCoord[id].x=0.0;\n"+
"}else{\n"+
"texCoord[id].x=(coord[id].x-Hb.x)/hd.x;\n"+
"}\n"+
"if(hd.y==0.0){\n"+
"texCoord[id].y=0.0;\n"+
"}else{\n"+
"texCoord[id].y=(coord[id].y-Hb.y)/hd.y;\n"+
"}\n"+
"}\n"+
"texCoord_changed=texCoord;\n"+
"}\n"+
"function set_p(n){\n"+
"if(n==TRUE){\n"+
"if(H==TRUE){\n"+
"if(hc>=4){\n"+
"ma.whichChoice=4;\n"+
"choice=4;\n"+
"}\n"+
"else if(Lb>=0){\n"+
"ma.whichChoice=2;\n"+
"choice=2;\n"+
"}else{\n"+
"ma.whichChoice=0;\n"+
"choice=0;\n"+
"}\n"+
"}else{\n"+
"if(hc>=4){\n"+
"ma.whichChoice=5;\n"+
"choice=5;\n"+
"}\n"+
"else if(Lb>=0){\n"+
"ma.whichChoice=3;\n"+
"choice=3;\n"+
"}else{\n"+
"ma.whichChoice=1;\n"+
"choice=1;\n"+
"}\n"+
"}\n"+
"}else{\n"+
"ma.whichChoice=-1;\n"+
"choice=-1;\n"+
"}\n"+
"p=n;\n"+
"p_changed=n;\n"+
"}\n"+
"function ld()\n"+
"{\n"+
"if(Fb){\n"+
"fd();\n"+
"}\n"+
"else{\n"+
"Sc();\n"+
"}\n"+
"}\n"+
"function initialize(){\n"+
"set_p(p);\n"+
"v_changed=ic.texture_changed;\n"+
"diffuseColor_changed=diffuseColor;\n"+
"if(hc<4){\n"+
"ld();\n"+
"kd();\n"+
"gd();\n"+
"}\n"+
"}\n"+
"function set_diffuseColor(n){\n"+
"diffuseColor=n;\n"+
"diffuseColor_changed=n;\n"+
"gd();\n"+
"}\n"+
"function set_v(n){\n"+
"ic.set_texture=n;\n"+
"jc.set_texture=n;\n"+
"v_changed=n;\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody582.children[1] = Script652;

ROUTE ROUTE718 = createNode("ROUTE");
ROUTE718.fromNode = "gc_1";
ROUTE718.fromField = "coord_changed";
ROUTE718.toNode = "Yb_1";
ROUTE718.toField = "set_point";
ProtoBody582.children[2] = ROUTE718;

ROUTE ROUTE719 = createNode("ROUTE");
ROUTE719.fromNode = "gc_1";
ROUTE719.fromField = "texCoord_changed";
ROUTE719.toNode = "Zb_1";
ROUTE719.toField = "set_point";
ProtoBody582.children[3] = ROUTE719;

ROUTE ROUTE720 = createNode("ROUTE");
ROUTE720.fromNode = "gc_1";
ROUTE720.fromField = "coordIndex";
ROUTE720.toNode = "Xb_1";
ROUTE720.toField = "set_coordIndex";
ProtoBody582.children[4] = ROUTE720;

ROUTE ROUTE721 = createNode("ROUTE");
ROUTE721.fromNode = "gc_1";
ROUTE721.fromField = "coord_changed";
ROUTE721.toNode = "cc_1";
ROUTE721.toField = "set_point";
ProtoBody582.children[5] = ROUTE721;

ROUTE ROUTE722 = createNode("ROUTE");
ROUTE722.fromNode = "gc_1";
ROUTE722.fromField = "color_changed";
ROUTE722.toNode = "dc_1";
ROUTE722.toField = "set_color";
ProtoBody582.children[6] = ROUTE722;

ROUTE ROUTE723 = createNode("ROUTE");
ROUTE723.fromNode = "gc_1";
ROUTE723.fromField = "texCoord_changed";
ROUTE723.toNode = "ec_1";
ROUTE723.toField = "set_point";
ProtoBody582.children[7] = ROUTE723;

ROUTE ROUTE724 = createNode("ROUTE");
ROUTE724.fromNode = "gc_1";
ROUTE724.fromField = "coordIndex";
ROUTE724.toNode = "bc_1";
ROUTE724.toField = "set_coordIndex";
ProtoBody582.children[8] = ROUTE724;

ROUTE ROUTE725 = createNode("ROUTE");
ROUTE725.fromNode = "gc_1";
ROUTE725.fromField = "coordIndex";
ROUTE725.toNode = "bc_1";
ROUTE725.toField = "set_colorIndex";
ProtoBody582.children[9] = ROUTE725;

ROUTE ROUTE726 = createNode("ROUTE");
ROUTE726.fromNode = "gc_1";
ROUTE726.fromField = "choice";
ROUTE726.toNode = "Tb_1";
ROUTE726.toField = "set_whichChoice";
ProtoBody582.children[10] = ROUTE726;

ProtoDeclare527.protoBody = ProtoBody582;

children[9] = ProtoDeclare527;

ProtoDeclare ProtoDeclare727 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="md" ><ProtoInterface><field name="coord" accessType="inputOutput" type="MFVec3f"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="mc" accessType="inputOutput" type="MFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare727.name = "md";
ProtoInterface ProtoInterface728 = createNode("ProtoInterface");
field field729 = createNode("field");
field729.name = "coord";
field729.accessType = "inputOutput";
field729.type = "MFVec3f";
ProtoInterface728.field = new MFNode();

ProtoInterface728.field[0] = field729;

field field730 = createNode("field");
field730.name = "coordIndex";
field730.accessType = "inputOutput";
field730.type = "MFInt32";
ProtoInterface728.field[1] = field730;

field field731 = createNode("field");
field731.name = "mc";
field731.accessType = "inputOutput";
field731.type = "MFInt32";
ProtoInterface728.field[2] = field731;

ProtoDeclare727.protoInterface = ProtoInterface728;

ProtoBody ProtoBody732 = createNode("ProtoBody");
Group Group733 = createNode("Group");
ProtoBody732.children = new MFNode();

ProtoBody732.children[0] = Group733;

ProtoDeclare727.protoBody = ProtoBody732;

children[10] = ProtoDeclare727;

ProtoDeclare ProtoDeclare734 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nd" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_od" accessType="inputOnly" type="SFFloat"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="hb" accessType="initializeOnly" type="SFBool"></field>
<field name="ib" accessType="initializeOnly" type="SFBool"></field>
<field name="pd" accessType="initializeOnly" type="SFBool"></field>
<field name="qd" accessType="initializeOnly" type="SFBool"></field>
<field name="rd" accessType="initializeOnly" type="SFBool"></field>
<field name="sd" accessType="initializeOnly" type="SFBool"></field>
<field name="td" accessType="initializeOnly" type="SFBool"></field>
<field name="ud" accessType="initializeOnly" type="SFBool"></field>
<field name="vd" accessType="initializeOnly" type="SFBool"></field>
<field name="wd" accessType="initializeOnly" type="SFBool"></field>
<field name="xd" accessType="initializeOnly" type="SFBool"></field>
<field name="diffuseColor" accessType="initializeOnly" type="SFColor" value="1 0 0"></field>
<field name="emissiveColor" accessType="initializeOnly" type="SFColor" value="0 0 1"></field>
<field name="specularColor" accessType="initializeOnly" type="SFColor" value="0 1 0"></field>
<field name="transparency" accessType="initializeOnly" type="SFFloat"></field>
<field name="shininess" accessType="initializeOnly" type="SFFloat" value="0.2"></field>
<field name="q" accessType="initializeOnly" type="SFVec2f" value="-0.5 -0.5"></field>
<field name="t" accessType="initializeOnly" type="SFVec2f" value="1 1"></field>
<field name="s" accessType="initializeOnly" type="SFFloat"></field>
<field name="u" accessType="initializeOnly" type="SFVec2f"></field>
<field name="ha" accessType="initializeOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="jb_1" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_od" accessType="inputOnly" type="SFFloat"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="hb" accessType="initializeOnly" type="SFBool"></field>
<field name="ib" accessType="initializeOnly" type="SFBool"></field>
<field name="pd" accessType="initializeOnly" type="SFBool"></field>
<field name="qd" accessType="initializeOnly" type="SFBool"></field>
<field name="rd" accessType="initializeOnly" type="SFBool"></field>
<field name="sd" accessType="initializeOnly" type="SFBool"></field>
<field name="td" accessType="initializeOnly" type="SFBool"></field>
<field name="ud" accessType="initializeOnly" type="SFBool"></field>
<field name="vd" accessType="initializeOnly" type="SFBool"></field>
<field name="wd" accessType="initializeOnly" type="SFBool"></field>
<field name="xd" accessType="initializeOnly" type="SFBool"></field>
<field name="diffuseColor" accessType="initializeOnly" type="SFColor"></field>
<field name="emissiveColor" accessType="initializeOnly" type="SFColor"></field>
<field name="specularColor" accessType="initializeOnly" type="SFColor"></field>
<field name="transparency" accessType="initializeOnly" type="SFFloat"></field>
<field name="shininess" accessType="initializeOnly" type="SFFloat"></field>
<field name="q" accessType="initializeOnly" type="SFVec2f"></field>
<field name="t" accessType="initializeOnly" type="SFVec2f"></field>
<field name="s" accessType="initializeOnly" type="SFFloat"></field>
<field name="u" accessType="initializeOnly" type="SFVec2f"></field>
<field name="yd" accessType="initializeOnly" type="MFColor" value="0 0 0"></field>
<field name="zd" accessType="initializeOnly" type="MFColor" value="0 0 0"></field>
<field name="Ad" accessType="initializeOnly" type="MFColor" value="0 0 0"></field>
<field name="Bd" accessType="initializeOnly" type="MFFloat" value="0"></field>
<field name="Cd" accessType="initializeOnly" type="MFFloat" value="0"></field>
<field name="Dd" accessType="initializeOnly" type="MFVec2f" value="0 0"></field>
<field name="Ed" accessType="initializeOnly" type="MFVec2f" value="0 0"></field>
<field name="Fd" accessType="initializeOnly" type="MFFloat" value="0"></field>
<field name="Gd" accessType="initializeOnly" type="MFVec2f" value="0 0"></field>
<field name="Hd" accessType="initializeOnly" type="MFColor" value="0 0 0"></field>
<field name="Id" accessType="initializeOnly" type="MFColor" value="0 0 0"></field>
<field name="Jd" accessType="initializeOnly" type="MFColor" value="0 0 0"></field>
<field name="Kd" accessType="initializeOnly" type="MFString"></field>
<field name="Ld" accessType="initializeOnly" type="SFColor"></field>
<field name="Md" accessType="initializeOnly" type="SFColor"></field>
<field name="aa" accessType="initializeOnly" type="SFBool"></field>
<field name="lb" accessType="initializeOnly" type="SFInt32"></field>
<field name="mb" accessType="initializeOnly" type="MFNode"></field>
<field name="Nd" accessType="initializeOnly" type="SFVec2f"></field>
<field name="od" accessType="initializeOnly" type="SFFloat"></field>
<field name="Od" accessType="initializeOnly" type="SFFloat"></field>
<field name="Pd" accessType="initializeOnly" type="SFFloat"></field>
<field name="Qd" accessType="initializeOnly" type="SFFloat"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="fa" accessType="initializeOnly" type="SFTime"></field>
<field name="Rd" accessType="initializeOnly" type="SFBool"></field>
<field name="Sd" accessType="initializeOnly" type="SFVec2f" value="1 1"></field>
<field name="Td" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Za" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Ud" accessType="initializeOnly" type="SFFloat"></field>
<field name="Vd" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Wd" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Xd" accessType="initializeOnly" type="SFVec2f"></field>
<field name="Yd" accessType="initializeOnly" type="SFVec2f"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="set_od" protoField="set_od"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="R_changed" protoField="R_changed"></connect>
<connect nodeField="U" protoField="U"></connect>
<connect nodeField="hb" protoField="hb"></connect>
<connect nodeField="ib" protoField="ib"></connect>
<connect nodeField="pd" protoField="pd"></connect>
<connect nodeField="qd" protoField="qd"></connect>
<connect nodeField="rd" protoField="rd"></connect>
<connect nodeField="sd" protoField="sd"></connect>
<connect nodeField="td" protoField="td"></connect>
<connect nodeField="ud" protoField="ud"></connect>
<connect nodeField="vd" protoField="vd"></connect>
<connect nodeField="wd" protoField="wd"></connect>
<connect nodeField="xd" protoField="xd"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="q" protoField="q"></connect>
<connect nodeField="t" protoField="t"></connect>
<connect nodeField="s" protoField="s"></connect>
<connect nodeField="u" protoField="u"></connect>
</IS>
<![CDATA[javascript:
function Zd(lb){
Sd.x=lb.t_changed.x;
Sd.y=lb.t_changed.y;
Td.x=lb.q_changed.x;
Td.y=lb.q_changed.y;
Za.x=lb.u_changed.x;
Za.y=lb.u_changed.y;
Ud=lb.s_changed;
var ae,be;
ae=Math.cos(Ud);
be=Math.sin(Ud);
Vd.x=q.x;
Vd.y=q.y;
Yd.x=((-Td.x)+(Sd.x*(Td.x-Vd.x+Za.x)*ae)-(Sd.x*(Td.y-Vd.y+Za.y)*be));
Yd.y=((-Td.y)+(Sd.y*(Td.y-Vd.y+Za.y)*ae)+(Sd.y*(Td.x-Vd.x+Za.x)*be));
Vd.x=-Yd.x;
Vd.y=-Yd.y;
lb.set_q=Vd;
Wd.x=(Td.x-Vd.x+Za.x-((Td.x-Vd.x)*Math.cos(Ud))/Sd.x-((Td.y-Vd.y)*Math.sin(Ud))/Sd.y);
Wd.y=(Td.y-Vd.y+Za.y-((Td.y-Vd.y)*Math.cos(Ud))/Sd.y+((Td.x-Vd.x)*Math.sin(Ud))/Sd.x);
lb.set_u=Wd;
Xd.x=Wd.x-Za.x;
Xd.y=Wd.y-Za.y;
u.x+=Xd.x;
u.y+=Xd.y;
}
function initialize(){
U.w=TRUE;
Rd=FALSE;
aa=FALSE;
od=0.;
}
function R(n){
if(ib&&!hb){
return;
}
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
od=0.;
if(hb==FALSE){
mb.length=1;
mb[0]=U;
}else{
mb=U.A_changed;
}
yd.length=
zd.length=
Ad.length=
Hd.length=
Id.length=
Jd.length=
Bd.length=
Cd.length=
Dd.length=
Ed.length=
Fd.length=
Gd.length=mb.length;
for(lb=0;lb<mb.length;lb++){
if(pd==TRUE){
ce(mb[lb].diffuseColor_changed,yd[lb]);
ce(diffuseColor,Hd[lb]);
if((yd[lb][1]<=Qd)||(yd[lb][2]<=Qd)){
yd[lb][0]=Hd[lb][0];
}else if((Hd[lb][1]<=Qd)||(Hd[lb][2]<=Qd)){
Hd[lb][0]=yd[lb][0];
}
}
if(rd==TRUE){
ce(mb[lb].specularColor_changed,Ad[lb]);
ce(specularColor,Jd[lb]);
if((Ad[lb][1]<=Qd)||(Ad[lb][2]<=Qd)){
Ad[lb][0]=Jd[lb][0];
}else if((Jd[lb][1]<=Qd)||(Jd[lb][2]<=Qd)){
Jd[lb][0]=Ad[lb][0];
}
}
if(qd==TRUE){
ce(mb[lb].emissiveColor_changed,zd[lb]);
ce(emissiveColor,Id[lb]);
if((zd[lb][1]<=Qd)||(zd[lb][2]<=Qd)){
zd[lb][0]=Id[lb][0];
}else if((Id[lb][1]<=Qd)||(Id[lb][2]<=Qd)){
Id[lb][0]=zd[lb][0];
}
}
if(sd==TRUE)Bd[lb]=mb[lb].transparency_changed;
if(td==TRUE)Cd[lb]=mb[lb].shininess_changed;
if(vd==TRUE||wd==TRUE||xd==TRUE){
Kd=mb[lb].v_changed.url;
if(Kd.length>0){
if(Kd[0].length>0){
if(lb==0)Rd=TRUE;
Zd(mb[lb]);
Ed[lb]=mb[lb].t_changed;
Fd[lb]=mb[lb].s_changed;
Gd[lb]=mb[lb].u_changed;
}
}
}
}
R_changed=n;
fa=n;
}
function S(n){
aa=FALSE;
if(ea==n){
R(n);
}
}
function set_od(n){
od=n;
if(od<0.)od=0.;
else if(od>1.)od=1.;
}
function set_fraction(n){
if(ib&&!hb){
return;
}
Pd=od*(1.+Math.sin(2.*Math.PI*n-(Math.PI/2.)))/2.;
Od=od*Math.sin(2.*Math.PI*n);
for(lb=0;lb<mb.length;lb++){
if(pd==TRUE){
Ld[0]=(1.-Pd)*yd[lb][0]+Pd*Hd[lb][0];
Ld[1]=(1.-Pd)*yd[lb][1]+Pd*Hd[lb][1];
Ld[2]=(1.-Pd)*yd[lb][2]+Pd*Hd[lb][2];
de(Ld,Md);
mb[lb].set_diffuseColor=Md;
}
if(rd==TRUE){
Ld[0]=(1.-Pd)*Ad[lb][0]+Pd*Jd[lb][0];
Ld[1]=(1.-Pd)*Ad[lb][1]+Pd*Jd[lb][1];
Ld[2]=(1.-Pd)*Ad[lb][2]+Pd*Jd[lb][2];
de(Ld,Md);
mb[lb].set_specularColor=Md;
}
if(qd==TRUE){
Ld[0]=(1.-Pd)*zd[lb][0]+Pd*Id[lb][0];
Ld[1]=(1.-Pd)*zd[lb][1]+Pd*Id[lb][1];
Ld[2]=(1.-Pd)*zd[lb][2]+Pd*Id[lb][2];
de(Ld,Md);
mb[lb].set_emissiveColor=Md;
}
if(sd==TRUE)mb[lb].set_transparency=(1.-Pd)*Bd[lb]+Pd*transparency;
if(td==TRUE)mb[lb].set_shininess=(1.-Pd)*Cd[lb]+Pd*shininess;
if(Rd==TRUE){
if(vd==TRUE){
Nd.x=(1.-Pd)*Ed[lb].x+Pd*t.x;
Nd.y=(1.-Pd)*Ed[lb].y+Pd*t.y;
mb[lb].set_t=Nd;
}
if(wd==TRUE){
mb[lb].set_s=Fd[lb]+Od*s;
}
if(xd==TRUE){
Nd.x=Gd[lb].x+Od*u.x;
Nd.y=Gd[lb].y+Od*u.y;
mb[lb].set_u=Nd;
}
}
}
}
function ce(ee,fe){
var max,min;
max=(ee[0]>ee[1])?
((ee[0]>ee[2])?ee[0]:ee[2]):
((ee[1]>ee[2])?ee[1]:ee[2]);
min=(ee[0]<ee[1])?
((ee[0]<ee[2])?ee[0]:ee[2]):
((ee[1]<ee[2])?ee[1]:ee[2]);
fe[2]=max;
if(max!=0.)fe[1]=(max-min)/max;
else fe[1]=0.;
if(fe[1]!=0.){
if(ee[0]==max)fe[0]=(ee[1]-ee[2])/(max-min);
else if(ee[1]==max)fe[0]=2.+(ee[2]-ee[0])/(max-min);
else fe[0]=4.+(ee[0]-ee[1])/(max-min);
if(fe[0]<0.)fe[0]+=6.;
fe[0]/=6.;
}else fe[0]=0.;
}
function de(fe,ee){
var ge,he,Za,ie;
var J;
if(fe[0]==1.)fe[0]=0.;
else fe[0]*=6.;
J=Math.floor(fe[0]);
ge=fe[0]-J;
ie=fe[2]*(1.-fe[1]);
he=fe[2]*(1.-(fe[1]*ge));
Za=fe[2]*(1.-(fe[1]*(1.-ge)));
switch(J){
case 0:ee[0]=fe[2];ee[1]=Za;ee[2]=ie;break;
case 1:ee[0]=he;ee[1]=fe[2];ee[2]=ie;break;
case 2:ee[0]=ie;ee[1]=fe[2];ee[2]=Za;break;
case 3:ee[0]=ie;ee[1]=he;ee[2]=fe[2];break;
case 4:ee[0]=Za;ee[1]=ie;ee[2]=fe[2];break;
case 5:ee[0]=fe[2];ee[1]=ie;ee[2]=he;break;
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare734.name = "nd";
ProtoInterface ProtoInterface735 = createNode("ProtoInterface");
field field736 = createNode("field");
field736.name = "R";
field736.accessType = "inputOnly";
field736.type = "SFTime";
ProtoInterface735.field = new MFNode();

ProtoInterface735.field[0] = field736;

field field737 = createNode("field");
field737.name = "S";
field737.accessType = "inputOnly";
field737.type = "SFTime";
ProtoInterface735.field[1] = field737;

field field738 = createNode("field");
field738.name = "set_od";
field738.accessType = "inputOnly";
field738.type = "SFFloat";
ProtoInterface735.field[2] = field738;

field field739 = createNode("field");
field739.name = "set_fraction";
field739.accessType = "inputOnly";
field739.type = "SFFloat";
ProtoInterface735.field[3] = field739;

field field740 = createNode("field");
field740.name = "R_changed";
field740.accessType = "outputOnly";
field740.type = "SFTime";
ProtoInterface735.field[4] = field740;

field field741 = createNode("field");
field741.name = "U";
field741.accessType = "initializeOnly";
field741.type = "SFNode";
ProtoInterface735.field[5] = field741;

field field742 = createNode("field");
field742.name = "hb";
field742.accessType = "initializeOnly";
field742.type = "SFBool";
ProtoInterface735.field[6] = field742;

field field743 = createNode("field");
field743.name = "ib";
field743.accessType = "initializeOnly";
field743.type = "SFBool";
ProtoInterface735.field[7] = field743;

field field744 = createNode("field");
field744.name = "pd";
field744.accessType = "initializeOnly";
field744.type = "SFBool";
ProtoInterface735.field[8] = field744;

field field745 = createNode("field");
field745.name = "qd";
field745.accessType = "initializeOnly";
field745.type = "SFBool";
ProtoInterface735.field[9] = field745;

field field746 = createNode("field");
field746.name = "rd";
field746.accessType = "initializeOnly";
field746.type = "SFBool";
ProtoInterface735.field[10] = field746;

field field747 = createNode("field");
field747.name = "sd";
field747.accessType = "initializeOnly";
field747.type = "SFBool";
ProtoInterface735.field[11] = field747;

field field748 = createNode("field");
field748.name = "td";
field748.accessType = "initializeOnly";
field748.type = "SFBool";
ProtoInterface735.field[12] = field748;

field field749 = createNode("field");
field749.name = "ud";
field749.accessType = "initializeOnly";
field749.type = "SFBool";
ProtoInterface735.field[13] = field749;

field field750 = createNode("field");
field750.name = "vd";
field750.accessType = "initializeOnly";
field750.type = "SFBool";
ProtoInterface735.field[14] = field750;

field field751 = createNode("field");
field751.name = "wd";
field751.accessType = "initializeOnly";
field751.type = "SFBool";
ProtoInterface735.field[15] = field751;

field field752 = createNode("field");
field752.name = "xd";
field752.accessType = "initializeOnly";
field752.type = "SFBool";
ProtoInterface735.field[16] = field752;

field field753 = createNode("field");
field753.name = "diffuseColor";
field753.accessType = "initializeOnly";
field753.type = "SFColor";
field753.value = "1 0 0";
ProtoInterface735.field[17] = field753;

field field754 = createNode("field");
field754.name = "emissiveColor";
field754.accessType = "initializeOnly";
field754.type = "SFColor";
field754.value = "0 0 1";
ProtoInterface735.field[18] = field754;

field field755 = createNode("field");
field755.name = "specularColor";
field755.accessType = "initializeOnly";
field755.type = "SFColor";
field755.value = "0 1 0";
ProtoInterface735.field[19] = field755;

field field756 = createNode("field");
field756.name = "transparency";
field756.accessType = "initializeOnly";
field756.type = "SFFloat";
ProtoInterface735.field[20] = field756;

field field757 = createNode("field");
field757.name = "shininess";
field757.accessType = "initializeOnly";
field757.type = "SFFloat";
field757.value = "0.2";
ProtoInterface735.field[21] = field757;

field field758 = createNode("field");
field758.name = "q";
field758.accessType = "initializeOnly";
field758.type = "SFVec2f";
field758.value = "-0.5 -0.5";
ProtoInterface735.field[22] = field758;

field field759 = createNode("field");
field759.name = "t";
field759.accessType = "initializeOnly";
field759.type = "SFVec2f";
field759.value = "1 1";
ProtoInterface735.field[23] = field759;

field field760 = createNode("field");
field760.name = "s";
field760.accessType = "initializeOnly";
field760.type = "SFFloat";
ProtoInterface735.field[24] = field760;

field field761 = createNode("field");
field761.name = "u";
field761.accessType = "initializeOnly";
field761.type = "SFVec2f";
ProtoInterface735.field[25] = field761;

field field762 = createNode("field");
field762.name = "ha";
field762.accessType = "initializeOnly";
field762.type = "SFVec3f";
ProtoInterface735.field[26] = field762;

ProtoDeclare734.protoInterface = ProtoInterface735;

ProtoBody ProtoBody763 = createNode("ProtoBody");
Script Script764 = createNode("Script");
Script764.DEF = "jb_1";
Script764.directOutput = True;
field field765 = createNode("field");
field765.name = "R";
field765.accessType = "inputOnly";
field765.type = "SFTime";
Script764.field = new MFNode();

Script764.field[0] = field765;

field field766 = createNode("field");
field766.name = "S";
field766.accessType = "inputOnly";
field766.type = "SFTime";
Script764.field[1] = field766;

field field767 = createNode("field");
field767.name = "set_od";
field767.accessType = "inputOnly";
field767.type = "SFFloat";
Script764.field[2] = field767;

field field768 = createNode("field");
field768.name = "set_fraction";
field768.accessType = "inputOnly";
field768.type = "SFFloat";
Script764.field[3] = field768;

field field769 = createNode("field");
field769.name = "R_changed";
field769.accessType = "outputOnly";
field769.type = "SFTime";
Script764.field[4] = field769;

field field770 = createNode("field");
field770.name = "U";
field770.accessType = "initializeOnly";
field770.type = "SFNode";
Script764.field[5] = field770;

field field771 = createNode("field");
field771.name = "hb";
field771.accessType = "initializeOnly";
field771.type = "SFBool";
Script764.field[6] = field771;

field field772 = createNode("field");
field772.name = "ib";
field772.accessType = "initializeOnly";
field772.type = "SFBool";
Script764.field[7] = field772;

field field773 = createNode("field");
field773.name = "pd";
field773.accessType = "initializeOnly";
field773.type = "SFBool";
Script764.field[8] = field773;

field field774 = createNode("field");
field774.name = "qd";
field774.accessType = "initializeOnly";
field774.type = "SFBool";
Script764.field[9] = field774;

field field775 = createNode("field");
field775.name = "rd";
field775.accessType = "initializeOnly";
field775.type = "SFBool";
Script764.field[10] = field775;

field field776 = createNode("field");
field776.name = "sd";
field776.accessType = "initializeOnly";
field776.type = "SFBool";
Script764.field[11] = field776;

field field777 = createNode("field");
field777.name = "td";
field777.accessType = "initializeOnly";
field777.type = "SFBool";
Script764.field[12] = field777;

field field778 = createNode("field");
field778.name = "ud";
field778.accessType = "initializeOnly";
field778.type = "SFBool";
Script764.field[13] = field778;

field field779 = createNode("field");
field779.name = "vd";
field779.accessType = "initializeOnly";
field779.type = "SFBool";
Script764.field[14] = field779;

field field780 = createNode("field");
field780.name = "wd";
field780.accessType = "initializeOnly";
field780.type = "SFBool";
Script764.field[15] = field780;

field field781 = createNode("field");
field781.name = "xd";
field781.accessType = "initializeOnly";
field781.type = "SFBool";
Script764.field[16] = field781;

field field782 = createNode("field");
field782.name = "diffuseColor";
field782.accessType = "initializeOnly";
field782.type = "SFColor";
Script764.field[17] = field782;

field field783 = createNode("field");
field783.name = "emissiveColor";
field783.accessType = "initializeOnly";
field783.type = "SFColor";
Script764.field[18] = field783;

field field784 = createNode("field");
field784.name = "specularColor";
field784.accessType = "initializeOnly";
field784.type = "SFColor";
Script764.field[19] = field784;

field field785 = createNode("field");
field785.name = "transparency";
field785.accessType = "initializeOnly";
field785.type = "SFFloat";
Script764.field[20] = field785;

field field786 = createNode("field");
field786.name = "shininess";
field786.accessType = "initializeOnly";
field786.type = "SFFloat";
Script764.field[21] = field786;

field field787 = createNode("field");
field787.name = "q";
field787.accessType = "initializeOnly";
field787.type = "SFVec2f";
Script764.field[22] = field787;

field field788 = createNode("field");
field788.name = "t";
field788.accessType = "initializeOnly";
field788.type = "SFVec2f";
Script764.field[23] = field788;

field field789 = createNode("field");
field789.name = "s";
field789.accessType = "initializeOnly";
field789.type = "SFFloat";
Script764.field[24] = field789;

field field790 = createNode("field");
field790.name = "u";
field790.accessType = "initializeOnly";
field790.type = "SFVec2f";
Script764.field[25] = field790;

field field791 = createNode("field");
field791.name = "yd";
field791.accessType = "initializeOnly";
field791.type = "MFColor";
field791.value = "0 0 0";
Script764.field[26] = field791;

field field792 = createNode("field");
field792.name = "zd";
field792.accessType = "initializeOnly";
field792.type = "MFColor";
field792.value = "0 0 0";
Script764.field[27] = field792;

field field793 = createNode("field");
field793.name = "Ad";
field793.accessType = "initializeOnly";
field793.type = "MFColor";
field793.value = "0 0 0";
Script764.field[28] = field793;

field field794 = createNode("field");
field794.name = "Bd";
field794.accessType = "initializeOnly";
field794.type = "MFFloat";
field794.value = "0";
Script764.field[29] = field794;

field field795 = createNode("field");
field795.name = "Cd";
field795.accessType = "initializeOnly";
field795.type = "MFFloat";
field795.value = "0";
Script764.field[30] = field795;

field field796 = createNode("field");
field796.name = "Dd";
field796.accessType = "initializeOnly";
field796.type = "MFVec2f";
field796.value = "0 0";
Script764.field[31] = field796;

field field797 = createNode("field");
field797.name = "Ed";
field797.accessType = "initializeOnly";
field797.type = "MFVec2f";
field797.value = "0 0";
Script764.field[32] = field797;

field field798 = createNode("field");
field798.name = "Fd";
field798.accessType = "initializeOnly";
field798.type = "MFFloat";
field798.value = "0";
Script764.field[33] = field798;

field field799 = createNode("field");
field799.name = "Gd";
field799.accessType = "initializeOnly";
field799.type = "MFVec2f";
field799.value = "0 0";
Script764.field[34] = field799;

field field800 = createNode("field");
field800.name = "Hd";
field800.accessType = "initializeOnly";
field800.type = "MFColor";
field800.value = "0 0 0";
Script764.field[35] = field800;

field field801 = createNode("field");
field801.name = "Id";
field801.accessType = "initializeOnly";
field801.type = "MFColor";
field801.value = "0 0 0";
Script764.field[36] = field801;

field field802 = createNode("field");
field802.name = "Jd";
field802.accessType = "initializeOnly";
field802.type = "MFColor";
field802.value = "0 0 0";
Script764.field[37] = field802;

field field803 = createNode("field");
field803.name = "Kd";
field803.accessType = "initializeOnly";
field803.type = "MFString";
Script764.field[38] = field803;

field field804 = createNode("field");
field804.name = "Ld";
field804.accessType = "initializeOnly";
field804.type = "SFColor";
Script764.field[39] = field804;

field field805 = createNode("field");
field805.name = "Md";
field805.accessType = "initializeOnly";
field805.type = "SFColor";
Script764.field[40] = field805;

field field806 = createNode("field");
field806.name = "aa";
field806.accessType = "initializeOnly";
field806.type = "SFBool";
Script764.field[41] = field806;

field field807 = createNode("field");
field807.name = "lb";
field807.accessType = "initializeOnly";
field807.type = "SFInt32";
Script764.field[42] = field807;

field field808 = createNode("field");
field808.name = "mb";
field808.accessType = "initializeOnly";
field808.type = "MFNode";
Script764.field[43] = field808;

field field809 = createNode("field");
field809.name = "Nd";
field809.accessType = "initializeOnly";
field809.type = "SFVec2f";
Script764.field[44] = field809;

field field810 = createNode("field");
field810.name = "od";
field810.accessType = "initializeOnly";
field810.type = "SFFloat";
Script764.field[45] = field810;

field field811 = createNode("field");
field811.name = "Od";
field811.accessType = "initializeOnly";
field811.type = "SFFloat";
Script764.field[46] = field811;

field field812 = createNode("field");
field812.name = "Pd";
field812.accessType = "initializeOnly";
field812.type = "SFFloat";
Script764.field[47] = field812;

field field813 = createNode("field");
field813.name = "Qd";
field813.accessType = "initializeOnly";
field813.type = "SFFloat";
Script764.field[48] = field813;

field field814 = createNode("field");
field814.name = "ea";
field814.accessType = "initializeOnly";
field814.type = "SFTime";
Script764.field[49] = field814;

field field815 = createNode("field");
field815.name = "fa";
field815.accessType = "initializeOnly";
field815.type = "SFTime";
Script764.field[50] = field815;

field field816 = createNode("field");
field816.name = "Rd";
field816.accessType = "initializeOnly";
field816.type = "SFBool";
Script764.field[51] = field816;

field field817 = createNode("field");
field817.name = "Sd";
field817.accessType = "initializeOnly";
field817.type = "SFVec2f";
field817.value = "1 1";
Script764.field[52] = field817;

field field818 = createNode("field");
field818.name = "Td";
field818.accessType = "initializeOnly";
field818.type = "SFVec2f";
Script764.field[53] = field818;

field field819 = createNode("field");
field819.name = "Za";
field819.accessType = "initializeOnly";
field819.type = "SFVec2f";
Script764.field[54] = field819;

field field820 = createNode("field");
field820.name = "Ud";
field820.accessType = "initializeOnly";
field820.type = "SFFloat";
Script764.field[55] = field820;

field field821 = createNode("field");
field821.name = "Vd";
field821.accessType = "initializeOnly";
field821.type = "SFVec2f";
Script764.field[56] = field821;

field field822 = createNode("field");
field822.name = "Wd";
field822.accessType = "initializeOnly";
field822.type = "SFVec2f";
Script764.field[57] = field822;

field field823 = createNode("field");
field823.name = "Xd";
field823.accessType = "initializeOnly";
field823.type = "SFVec2f";
Script764.field[58] = field823;

field field824 = createNode("field");
field824.name = "Yd";
field824.accessType = "initializeOnly";
field824.type = "SFVec2f";
Script764.field[59] = field824;

IS IS825 = createNode("IS");
connect connect826 = createNode("connect");
connect826.nodeField = "R";
connect826.protoField = "R";
IS825.connect = new MFNode();

IS825.connect[0] = connect826;

connect connect827 = createNode("connect");
connect827.nodeField = "S";
connect827.protoField = "S";
IS825.connect[1] = connect827;

connect connect828 = createNode("connect");
connect828.nodeField = "set_od";
connect828.protoField = "set_od";
IS825.connect[2] = connect828;

connect connect829 = createNode("connect");
connect829.nodeField = "set_fraction";
connect829.protoField = "set_fraction";
IS825.connect[3] = connect829;

connect connect830 = createNode("connect");
connect830.nodeField = "R_changed";
connect830.protoField = "R_changed";
IS825.connect[4] = connect830;

connect connect831 = createNode("connect");
connect831.nodeField = "U";
connect831.protoField = "U";
IS825.connect[5] = connect831;

connect connect832 = createNode("connect");
connect832.nodeField = "hb";
connect832.protoField = "hb";
IS825.connect[6] = connect832;

connect connect833 = createNode("connect");
connect833.nodeField = "ib";
connect833.protoField = "ib";
IS825.connect[7] = connect833;

connect connect834 = createNode("connect");
connect834.nodeField = "pd";
connect834.protoField = "pd";
IS825.connect[8] = connect834;

connect connect835 = createNode("connect");
connect835.nodeField = "qd";
connect835.protoField = "qd";
IS825.connect[9] = connect835;

connect connect836 = createNode("connect");
connect836.nodeField = "rd";
connect836.protoField = "rd";
IS825.connect[10] = connect836;

connect connect837 = createNode("connect");
connect837.nodeField = "sd";
connect837.protoField = "sd";
IS825.connect[11] = connect837;

connect connect838 = createNode("connect");
connect838.nodeField = "td";
connect838.protoField = "td";
IS825.connect[12] = connect838;

connect connect839 = createNode("connect");
connect839.nodeField = "ud";
connect839.protoField = "ud";
IS825.connect[13] = connect839;

connect connect840 = createNode("connect");
connect840.nodeField = "vd";
connect840.protoField = "vd";
IS825.connect[14] = connect840;

connect connect841 = createNode("connect");
connect841.nodeField = "wd";
connect841.protoField = "wd";
IS825.connect[15] = connect841;

connect connect842 = createNode("connect");
connect842.nodeField = "xd";
connect842.protoField = "xd";
IS825.connect[16] = connect842;

connect connect843 = createNode("connect");
connect843.nodeField = "diffuseColor";
connect843.protoField = "diffuseColor";
IS825.connect[17] = connect843;

connect connect844 = createNode("connect");
connect844.nodeField = "emissiveColor";
connect844.protoField = "emissiveColor";
IS825.connect[18] = connect844;

connect connect845 = createNode("connect");
connect845.nodeField = "specularColor";
connect845.protoField = "specularColor";
IS825.connect[19] = connect845;

connect connect846 = createNode("connect");
connect846.nodeField = "transparency";
connect846.protoField = "transparency";
IS825.connect[20] = connect846;

connect connect847 = createNode("connect");
connect847.nodeField = "shininess";
connect847.protoField = "shininess";
IS825.connect[21] = connect847;

connect connect848 = createNode("connect");
connect848.nodeField = "q";
connect848.protoField = "q";
IS825.connect[22] = connect848;

connect connect849 = createNode("connect");
connect849.nodeField = "t";
connect849.protoField = "t";
IS825.connect[23] = connect849;

connect connect850 = createNode("connect");
connect850.nodeField = "s";
connect850.protoField = "s";
IS825.connect[24] = connect850;

connect connect851 = createNode("connect");
connect851.nodeField = "u";
connect851.protoField = "u";
IS825.connect[25] = connect851;

Script764.iS = IS825;


Script764.setSourceCode(`javascript:\n"+
"function Zd(lb){\n"+
"Sd.x=lb.t_changed.x;\n"+
"Sd.y=lb.t_changed.y;\n"+
"Td.x=lb.q_changed.x;\n"+
"Td.y=lb.q_changed.y;\n"+
"Za.x=lb.u_changed.x;\n"+
"Za.y=lb.u_changed.y;\n"+
"Ud=lb.s_changed;\n"+
"var ae,be;\n"+
"ae=Math.cos(Ud);\n"+
"be=Math.sin(Ud);\n"+
"Vd.x=q.x;\n"+
"Vd.y=q.y;\n"+
"Yd.x=((-Td.x)+(Sd.x*(Td.x-Vd.x+Za.x)*ae)-(Sd.x*(Td.y-Vd.y+Za.y)*be));\n"+
"Yd.y=((-Td.y)+(Sd.y*(Td.y-Vd.y+Za.y)*ae)+(Sd.y*(Td.x-Vd.x+Za.x)*be));\n"+
"Vd.x=-Yd.x;\n"+
"Vd.y=-Yd.y;\n"+
"lb.set_q=Vd;\n"+
"Wd.x=(Td.x-Vd.x+Za.x-((Td.x-Vd.x)*Math.cos(Ud))/Sd.x-((Td.y-Vd.y)*Math.sin(Ud))/Sd.y);\n"+
"Wd.y=(Td.y-Vd.y+Za.y-((Td.y-Vd.y)*Math.cos(Ud))/Sd.y+((Td.x-Vd.x)*Math.sin(Ud))/Sd.x);\n"+
"lb.set_u=Wd;\n"+
"Xd.x=Wd.x-Za.x;\n"+
"Xd.y=Wd.y-Za.y;\n"+
"u.x+=Xd.x;\n"+
"u.y+=Xd.y;\n"+
"}\n"+
"function initialize(){\n"+
"U.w=TRUE;\n"+
"Rd=FALSE;\n"+
"aa=FALSE;\n"+
"od=0.;\n"+
"}\n"+
"function R(n){\n"+
"if(ib&&!hb){\n"+
"return;\n"+
"}\n"+
"if(fa==n){\n"+
"return;\n"+
"}\n"+
"if(aa==TRUE){\n"+
"ea=n;\n"+
"return;\n"+
"}\n"+
"aa=TRUE;\n"+
"od=0.;\n"+
"if(hb==FALSE){\n"+
"mb.length=1;\n"+
"mb[0]=U;\n"+
"}else{\n"+
"mb=U.A_changed;\n"+
"}\n"+
"yd.length=\n"+
"zd.length=\n"+
"Ad.length=\n"+
"Hd.length=\n"+
"Id.length=\n"+
"Jd.length=\n"+
"Bd.length=\n"+
"Cd.length=\n"+
"Dd.length=\n"+
"Ed.length=\n"+
"Fd.length=\n"+
"Gd.length=mb.length;\n"+
"for(lb=0;lb<mb.length;lb++){\n"+
"if(pd==TRUE){\n"+
"ce(mb[lb].diffuseColor_changed,yd[lb]);\n"+
"ce(diffuseColor,Hd[lb]);\n"+
"if((yd[lb][1]<=Qd)||(yd[lb][2]<=Qd)){\n"+
"yd[lb][0]=Hd[lb][0];\n"+
"}else if((Hd[lb][1]<=Qd)||(Hd[lb][2]<=Qd)){\n"+
"Hd[lb][0]=yd[lb][0];\n"+
"}\n"+
"}\n"+
"if(rd==TRUE){\n"+
"ce(mb[lb].specularColor_changed,Ad[lb]);\n"+
"ce(specularColor,Jd[lb]);\n"+
"if((Ad[lb][1]<=Qd)||(Ad[lb][2]<=Qd)){\n"+
"Ad[lb][0]=Jd[lb][0];\n"+
"}else if((Jd[lb][1]<=Qd)||(Jd[lb][2]<=Qd)){\n"+
"Jd[lb][0]=Ad[lb][0];\n"+
"}\n"+
"}\n"+
"if(qd==TRUE){\n"+
"ce(mb[lb].emissiveColor_changed,zd[lb]);\n"+
"ce(emissiveColor,Id[lb]);\n"+
"if((zd[lb][1]<=Qd)||(zd[lb][2]<=Qd)){\n"+
"zd[lb][0]=Id[lb][0];\n"+
"}else if((Id[lb][1]<=Qd)||(Id[lb][2]<=Qd)){\n"+
"Id[lb][0]=zd[lb][0];\n"+
"}\n"+
"}\n"+
"if(sd==TRUE)Bd[lb]=mb[lb].transparency_changed;\n"+
"if(td==TRUE)Cd[lb]=mb[lb].shininess_changed;\n"+
"if(vd==TRUE||wd==TRUE||xd==TRUE){\n"+
"Kd=mb[lb].v_changed.url;\n"+
"if(Kd.length>0){\n"+
"if(Kd[0].length>0){\n"+
"if(lb==0)Rd=TRUE;\n"+
"Zd(mb[lb]);\n"+
"Ed[lb]=mb[lb].t_changed;\n"+
"Fd[lb]=mb[lb].s_changed;\n"+
"Gd[lb]=mb[lb].u_changed;\n"+
"}\n"+
"}\n"+
"}\n"+
"}\n"+
"R_changed=n;\n"+
"fa=n;\n"+
"}\n"+
"function S(n){\n"+
"aa=FALSE;\n"+
"if(ea==n){\n"+
"R(n);\n"+
"}\n"+
"}\n"+
"function set_od(n){\n"+
"od=n;\n"+
"if(od<0.)od=0.;\n"+
"else if(od>1.)od=1.;\n"+
"}\n"+
"function set_fraction(n){\n"+
"if(ib&&!hb){\n"+
"return;\n"+
"}\n"+
"Pd=od*(1.+Math.sin(2.*Math.PI*n-(Math.PI/2.)))/2.;\n"+
"Od=od*Math.sin(2.*Math.PI*n);\n"+
"for(lb=0;lb<mb.length;lb++){\n"+
"if(pd==TRUE){\n"+
"Ld[0]=(1.-Pd)*yd[lb][0]+Pd*Hd[lb][0];\n"+
"Ld[1]=(1.-Pd)*yd[lb][1]+Pd*Hd[lb][1];\n"+
"Ld[2]=(1.-Pd)*yd[lb][2]+Pd*Hd[lb][2];\n"+
"de(Ld,Md);\n"+
"mb[lb].set_diffuseColor=Md;\n"+
"}\n"+
"if(rd==TRUE){\n"+
"Ld[0]=(1.-Pd)*Ad[lb][0]+Pd*Jd[lb][0];\n"+
"Ld[1]=(1.-Pd)*Ad[lb][1]+Pd*Jd[lb][1];\n"+
"Ld[2]=(1.-Pd)*Ad[lb][2]+Pd*Jd[lb][2];\n"+
"de(Ld,Md);\n"+
"mb[lb].set_specularColor=Md;\n"+
"}\n"+
"if(qd==TRUE){\n"+
"Ld[0]=(1.-Pd)*zd[lb][0]+Pd*Id[lb][0];\n"+
"Ld[1]=(1.-Pd)*zd[lb][1]+Pd*Id[lb][1];\n"+
"Ld[2]=(1.-Pd)*zd[lb][2]+Pd*Id[lb][2];\n"+
"de(Ld,Md);\n"+
"mb[lb].set_emissiveColor=Md;\n"+
"}\n"+
"if(sd==TRUE)mb[lb].set_transparency=(1.-Pd)*Bd[lb]+Pd*transparency;\n"+
"if(td==TRUE)mb[lb].set_shininess=(1.-Pd)*Cd[lb]+Pd*shininess;\n"+
"if(Rd==TRUE){\n"+
"if(vd==TRUE){\n"+
"Nd.x=(1.-Pd)*Ed[lb].x+Pd*t.x;\n"+
"Nd.y=(1.-Pd)*Ed[lb].y+Pd*t.y;\n"+
"mb[lb].set_t=Nd;\n"+
"}\n"+
"if(wd==TRUE){\n"+
"mb[lb].set_s=Fd[lb]+Od*s;\n"+
"}\n"+
"if(xd==TRUE){\n"+
"Nd.x=Gd[lb].x+Od*u.x;\n"+
"Nd.y=Gd[lb].y+Od*u.y;\n"+
"mb[lb].set_u=Nd;\n"+
"}\n"+
"}\n"+
"}\n"+
"}\n"+
"function ce(ee,fe){\n"+
"var max,min;\n"+
"max=(ee[0]>ee[1])?\n"+
"((ee[0]>ee[2])?ee[0]:ee[2]):\n"+
"((ee[1]>ee[2])?ee[1]:ee[2]);\n"+
"min=(ee[0]<ee[1])?\n"+
"((ee[0]<ee[2])?ee[0]:ee[2]):\n"+
"((ee[1]<ee[2])?ee[1]:ee[2]);\n"+
"fe[2]=max;\n"+
"if(max!=0.)fe[1]=(max-min)/max;\n"+
"else fe[1]=0.;\n"+
"if(fe[1]!=0.){\n"+
"if(ee[0]==max)fe[0]=(ee[1]-ee[2])/(max-min);\n"+
"else if(ee[1]==max)fe[0]=2.+(ee[2]-ee[0])/(max-min);\n"+
"else fe[0]=4.+(ee[0]-ee[1])/(max-min);\n"+
"if(fe[0]<0.)fe[0]+=6.;\n"+
"fe[0]/=6.;\n"+
"}else fe[0]=0.;\n"+
"}\n"+
"function de(fe,ee){\n"+
"var ge,he,Za,ie;\n"+
"var J;\n"+
"if(fe[0]==1.)fe[0]=0.;\n"+
"else fe[0]*=6.;\n"+
"J=Math.floor(fe[0]);\n"+
"ge=fe[0]-J;\n"+
"ie=fe[2]*(1.-fe[1]);\n"+
"he=fe[2]*(1.-(fe[1]*ge));\n"+
"Za=fe[2]*(1.-(fe[1]*(1.-ge)));\n"+
"switch(J){\n"+
"case 0:ee[0]=fe[2];ee[1]=Za;ee[2]=ie;break;\n"+
"case 1:ee[0]=he;ee[1]=fe[2];ee[2]=ie;break;\n"+
"case 2:ee[0]=ie;ee[1]=fe[2];ee[2]=Za;break;\n"+
"case 3:ee[0]=ie;ee[1]=he;ee[2]=fe[2];break;\n"+
"case 4:ee[0]=Za;ee[1]=ie;ee[2]=fe[2];break;\n"+
"case 5:ee[0]=fe[2];ee[1]=ie;ee[2]=he;break;\n"+
"}\n"+
"}`)
ProtoBody763.children = new MFNode();

ProtoBody763.children[0] = Script764;

ProtoDeclare734.protoBody = ProtoBody763;

children[11] = ProtoDeclare734;

ProtoDeclare ProtoDeclare852 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="je" ><ProtoInterface><field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="isOver" accessType="outputOnly" type="SFBool"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="trackPoint_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="oa" accessType="initializeOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><SphereSensor DEF="ke_1" enabled="false" autoOffset="false"><IS><connect nodeField="trackPoint_changed" protoField="trackPoint_changed"></connect>
<connect nodeField="rotation_changed" protoField="rotation_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
</SphereSensor>
<Script DEF="le_1" directOutput="true"><field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="enabled_changed" accessType="outputOnly" type="SFBool"></field>
<field name="oa" accessType="initializeOnly" type="SFInt32"></field>
<IS><connect nodeField="set_enabled" protoField="set_enabled"></connect>
<connect nodeField="oa" protoField="oa"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
if(oa>0){
enabled_changed=TRUE;
}
}
function set_enabled(n){
if(n==TRUE){
enabled_changed=TRUE;
oa++;
}else{
enabled_changed=FALSE;
enabled_changed=TRUE;
if(oa>0){
oa--;
}
}
}]]></Script>
<ROUTE fromNode="le_1" fromField="enabled_changed" toNode="ke_1" toField="set_enabled"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare852.name = "je";
ProtoInterface ProtoInterface853 = createNode("ProtoInterface");
field field854 = createNode("field");
field854.name = "set_enabled";
field854.accessType = "inputOnly";
field854.type = "SFBool";
ProtoInterface853.field = new MFNode();

ProtoInterface853.field[0] = field854;

field field855 = createNode("field");
field855.name = "isOver";
field855.accessType = "outputOnly";
field855.type = "SFBool";
ProtoInterface853.field[1] = field855;

field field856 = createNode("field");
field856.name = "isActive";
field856.accessType = "outputOnly";
field856.type = "SFBool";
ProtoInterface853.field[2] = field856;

field field857 = createNode("field");
field857.name = "trackPoint_changed";
field857.accessType = "outputOnly";
field857.type = "SFVec3f";
ProtoInterface853.field[3] = field857;

field field858 = createNode("field");
field858.name = "rotation_changed";
field858.accessType = "outputOnly";
field858.type = "SFRotation";
ProtoInterface853.field[4] = field858;

field field859 = createNode("field");
field859.name = "oa";
field859.accessType = "initializeOnly";
field859.type = "SFInt32";
ProtoInterface853.field[5] = field859;

ProtoDeclare852.protoInterface = ProtoInterface853;

ProtoBody ProtoBody860 = createNode("ProtoBody");
SphereSensor SphereSensor861 = createNode("SphereSensor");
SphereSensor861.DEF = "ke_1";
SphereSensor861.enabled = False;
SphereSensor861.autoOffset = False;
IS IS862 = createNode("IS");
connect connect863 = createNode("connect");
connect863.nodeField = "trackPoint_changed";
connect863.protoField = "trackPoint_changed";
IS862.connect = new MFNode();

IS862.connect[0] = connect863;

connect connect864 = createNode("connect");
connect864.nodeField = "rotation_changed";
connect864.protoField = "rotation_changed";
IS862.connect[1] = connect864;

connect connect865 = createNode("connect");
connect865.nodeField = "isActive";
connect865.protoField = "isActive";
IS862.connect[2] = connect865;

SphereSensor861.iS = IS862;

ProtoBody860.children = new MFNode();

ProtoBody860.children[0] = SphereSensor861;

Script Script866 = createNode("Script");
Script866.DEF = "le_1";
Script866.directOutput = True;
field field867 = createNode("field");
field867.name = "set_enabled";
field867.accessType = "inputOnly";
field867.type = "SFBool";
Script866.field = new MFNode();

Script866.field[0] = field867;

field field868 = createNode("field");
field868.name = "enabled_changed";
field868.accessType = "outputOnly";
field868.type = "SFBool";
Script866.field[1] = field868;

field field869 = createNode("field");
field869.name = "oa";
field869.accessType = "initializeOnly";
field869.type = "SFInt32";
Script866.field[2] = field869;

IS IS870 = createNode("IS");
connect connect871 = createNode("connect");
connect871.nodeField = "set_enabled";
connect871.protoField = "set_enabled";
IS870.connect = new MFNode();

IS870.connect[0] = connect871;

connect connect872 = createNode("connect");
connect872.nodeField = "oa";
connect872.protoField = "oa";
IS870.connect[1] = connect872;

Script866.iS = IS870;


Script866.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"if(oa>0){\n"+
"enabled_changed=TRUE;\n"+
"}\n"+
"}\n"+
"function set_enabled(n){\n"+
"if(n==TRUE){\n"+
"enabled_changed=TRUE;\n"+
"oa++;\n"+
"}else{\n"+
"enabled_changed=FALSE;\n"+
"enabled_changed=TRUE;\n"+
"if(oa>0){\n"+
"oa--;\n"+
"}\n"+
"}\n"+
"}`)
ProtoBody860.children[1] = Script866;

ROUTE ROUTE873 = createNode("ROUTE");
ROUTE873.fromNode = "le_1";
ROUTE873.fromField = "enabled_changed";
ROUTE873.toNode = "ke_1";
ROUTE873.toField = "set_enabled";
ProtoBody860.children[2] = ROUTE873;

ProtoDeclare852.protoBody = ProtoBody860;

children[12] = ProtoDeclare852;

ProtoDeclare ProtoDeclare874 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="me" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="sa" accessType="inputOnly" type="SFTime"></field>
<field name="rb" accessType="inputOnly" type="SFBool"></field>
<field name="ne" accessType="inputOnly" type="SFRotation"></field>
<field name="oe" accessType="inputOnly" type="SFVec3f"></field>
<field name="yb_changed" accessType="outputOnly" type="SFBool"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="pe" accessType="initializeOnly" type="SFInt32"></field>
<field name="qe" accessType="initializeOnly" type="SFVec3f" value="0 0 1"></field>
<field name="enabled" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="re" accessType="initializeOnly" type="SFNode"></field>
<field name="center" accessType="initializeOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="I_2" directOutput="true"><field name="isActive" accessType="inputOnly" type="SFBool"></field>
<field name="se" accessType="inputOnly" type="SFRotation"></field>
<field name="te" accessType="inputOnly" type="SFVec3f"></field>
<field name="ob" accessType="inputOnly" type="SFTime"></field>
<field name="pb" accessType="inputOnly" type="SFTime"></field>
<field name="yb_changed" accessType="outputOnly" type="SFBool"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="pe" accessType="initializeOnly" type="SFInt32"></field>
<field name="qe" accessType="initializeOnly" type="SFVec3f"></field>
<field name="enabled" accessType="initializeOnly" type="SFBool"></field>
<field name="ue" accessType="initializeOnly" type="SFNode"></field>
<field name="ve" accessType="initializeOnly" type="SFRotation"></field>
<IS><connect nodeField="isActive" protoField="rb"></connect>
<connect nodeField="se" protoField="ne"></connect>
<connect nodeField="te" protoField="oe"></connect>
<connect nodeField="ob" protoField="R"></connect>
<connect nodeField="pb" protoField="sa"></connect>
<connect nodeField="yb_changed" protoField="yb_changed"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="pe" protoField="pe"></connect>
<connect nodeField="qe" protoField="qe"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="ue" protoField="re"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
yb_changed=enabled;
}
function ob(n,time){
if(!enabled){
enabled=TRUE;
yb_changed=TRUE;
ve=ue.rotation;
}
}
function pb(n,time){
if(enabled){
enabled=FALSE;
yb_changed=FALSE;
stopTime=time;
}
}
function isActive(n,Za){
ve=ue.rotation;
if(n==TRUE){
yb_changed=TRUE;
}
else{
yb_changed=FALSE;
}
}
function se(n){
if(pe==0){
ue.rotation=n.multiply(ve);
}
}
function te(n){
if(pe==1){
we=new SFRotation(qe,n);
ue.rotation=we.multiply(ve);
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare874.name = "me";
ProtoInterface ProtoInterface875 = createNode("ProtoInterface");
field field876 = createNode("field");
field876.name = "R";
field876.accessType = "inputOnly";
field876.type = "SFTime";
ProtoInterface875.field = new MFNode();

ProtoInterface875.field[0] = field876;

field field877 = createNode("field");
field877.name = "sa";
field877.accessType = "inputOnly";
field877.type = "SFTime";
ProtoInterface875.field[1] = field877;

field field878 = createNode("field");
field878.name = "rb";
field878.accessType = "inputOnly";
field878.type = "SFBool";
ProtoInterface875.field[2] = field878;

field field879 = createNode("field");
field879.name = "ne";
field879.accessType = "inputOnly";
field879.type = "SFRotation";
ProtoInterface875.field[3] = field879;

field field880 = createNode("field");
field880.name = "oe";
field880.accessType = "inputOnly";
field880.type = "SFVec3f";
ProtoInterface875.field[4] = field880;

field field881 = createNode("field");
field881.name = "yb_changed";
field881.accessType = "outputOnly";
field881.type = "SFBool";
ProtoInterface875.field[5] = field881;

field field882 = createNode("field");
field882.name = "stopTime";
field882.accessType = "outputOnly";
field882.type = "SFTime";
ProtoInterface875.field[6] = field882;

field field883 = createNode("field");
field883.name = "pe";
field883.accessType = "initializeOnly";
field883.type = "SFInt32";
ProtoInterface875.field[7] = field883;

field field884 = createNode("field");
field884.name = "qe";
field884.accessType = "initializeOnly";
field884.type = "SFVec3f";
field884.value = "0 0 1";
ProtoInterface875.field[8] = field884;

field field885 = createNode("field");
field885.name = "enabled";
field885.accessType = "initializeOnly";
field885.type = "SFBool";
field885.value = "true";
ProtoInterface875.field[9] = field885;

field field886 = createNode("field");
field886.name = "re";
field886.accessType = "initializeOnly";
field886.type = "SFNode";
ProtoInterface875.field[10] = field886;

field field887 = createNode("field");
field887.name = "center";
field887.accessType = "initializeOnly";
field887.type = "SFVec3f";
ProtoInterface875.field[11] = field887;

ProtoDeclare874.protoInterface = ProtoInterface875;

ProtoBody ProtoBody888 = createNode("ProtoBody");
Script Script889 = createNode("Script");
Script889.DEF = "I_2";
Script889.directOutput = True;
field field890 = createNode("field");
field890.name = "isActive";
field890.accessType = "inputOnly";
field890.type = "SFBool";
Script889.field = new MFNode();

Script889.field[0] = field890;

field field891 = createNode("field");
field891.name = "se";
field891.accessType = "inputOnly";
field891.type = "SFRotation";
Script889.field[1] = field891;

field field892 = createNode("field");
field892.name = "te";
field892.accessType = "inputOnly";
field892.type = "SFVec3f";
Script889.field[2] = field892;

field field893 = createNode("field");
field893.name = "ob";
field893.accessType = "inputOnly";
field893.type = "SFTime";
Script889.field[3] = field893;

field field894 = createNode("field");
field894.name = "pb";
field894.accessType = "inputOnly";
field894.type = "SFTime";
Script889.field[4] = field894;

field field895 = createNode("field");
field895.name = "yb_changed";
field895.accessType = "outputOnly";
field895.type = "SFBool";
Script889.field[5] = field895;

field field896 = createNode("field");
field896.name = "stopTime";
field896.accessType = "outputOnly";
field896.type = "SFTime";
Script889.field[6] = field896;

field field897 = createNode("field");
field897.name = "pe";
field897.accessType = "initializeOnly";
field897.type = "SFInt32";
Script889.field[7] = field897;

field field898 = createNode("field");
field898.name = "qe";
field898.accessType = "initializeOnly";
field898.type = "SFVec3f";
Script889.field[8] = field898;

field field899 = createNode("field");
field899.name = "enabled";
field899.accessType = "initializeOnly";
field899.type = "SFBool";
Script889.field[9] = field899;

field field900 = createNode("field");
field900.name = "ue";
field900.accessType = "initializeOnly";
field900.type = "SFNode";
Script889.field[10] = field900;

field field901 = createNode("field");
field901.name = "ve";
field901.accessType = "initializeOnly";
field901.type = "SFRotation";
Script889.field[11] = field901;

IS IS902 = createNode("IS");
connect connect903 = createNode("connect");
connect903.nodeField = "isActive";
connect903.protoField = "rb";
IS902.connect = new MFNode();

IS902.connect[0] = connect903;

connect connect904 = createNode("connect");
connect904.nodeField = "se";
connect904.protoField = "ne";
IS902.connect[1] = connect904;

connect connect905 = createNode("connect");
connect905.nodeField = "te";
connect905.protoField = "oe";
IS902.connect[2] = connect905;

connect connect906 = createNode("connect");
connect906.nodeField = "ob";
connect906.protoField = "R";
IS902.connect[3] = connect906;

connect connect907 = createNode("connect");
connect907.nodeField = "pb";
connect907.protoField = "sa";
IS902.connect[4] = connect907;

connect connect908 = createNode("connect");
connect908.nodeField = "yb_changed";
connect908.protoField = "yb_changed";
IS902.connect[5] = connect908;

connect connect909 = createNode("connect");
connect909.nodeField = "stopTime";
connect909.protoField = "stopTime";
IS902.connect[6] = connect909;

connect connect910 = createNode("connect");
connect910.nodeField = "pe";
connect910.protoField = "pe";
IS902.connect[7] = connect910;

connect connect911 = createNode("connect");
connect911.nodeField = "qe";
connect911.protoField = "qe";
IS902.connect[8] = connect911;

connect connect912 = createNode("connect");
connect912.nodeField = "enabled";
connect912.protoField = "enabled";
IS902.connect[9] = connect912;

connect connect913 = createNode("connect");
connect913.nodeField = "ue";
connect913.protoField = "re";
IS902.connect[10] = connect913;

Script889.iS = IS902;


Script889.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"yb_changed=enabled;\n"+
"}\n"+
"function ob(n,time){\n"+
"if(!enabled){\n"+
"enabled=TRUE;\n"+
"yb_changed=TRUE;\n"+
"ve=ue.rotation;\n"+
"}\n"+
"}\n"+
"function pb(n,time){\n"+
"if(enabled){\n"+
"enabled=FALSE;\n"+
"yb_changed=FALSE;\n"+
"stopTime=time;\n"+
"}\n"+
"}\n"+
"function isActive(n,Za){\n"+
"ve=ue.rotation;\n"+
"if(n==TRUE){\n"+
"yb_changed=TRUE;\n"+
"}\n"+
"else{\n"+
"yb_changed=FALSE;\n"+
"}\n"+
"}\n"+
"function se(n){\n"+
"if(pe==0){\n"+
"ue.rotation=n.multiply(ve);\n"+
"}\n"+
"}\n"+
"function te(n){\n"+
"if(pe==1){\n"+
"we=new SFRotation(qe,n);\n"+
"ue.rotation=we.multiply(ve);\n"+
"}\n"+
"}`)
ProtoBody888.children = new MFNode();

ProtoBody888.children[0] = Script889;

ProtoDeclare874.protoBody = ProtoBody888;

children[13] = ProtoDeclare874;

ProtoDeclare ProtoDeclare914 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="xe" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="ye" accessType="initializeOnly" type="SFNode"></field>
<field name="ze" accessType="initializeOnly" type="SFNode"></field>
<field name="Ae" accessType="initializeOnly" type="SFNode"></field>
<field name="Be" accessType="initializeOnly" type="SFBool"></field>
<field name="Ce" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="De" accessType="initializeOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="Ee" accessType="initializeOnly" type="SFNode"></field>
<field name="Fe" accessType="initializeOnly" type="SFNode"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="Be" accessType="initializeOnly" type="SFBool"></field>
<field name="Ce" accessType="initializeOnly" type="SFInt32"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="De" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="Ee" protoField="ye"></connect>
<connect nodeField="Fe" protoField="ze"></connect>
<connect nodeField="U" protoField="Ae"></connect>
<connect nodeField="Be" protoField="Be"></connect>
<connect nodeField="Ce" protoField="Ce"></connect>
<connect nodeField="De" protoField="De"></connect>
</IS>
<![CDATA[javascript:
function R(n,Za){
if(startTime==Za){
return;
}
if(!Be){
if(U.D!=null){
if(U.F!=Ce){
if(!De){
U.D.sa=Za;
}
}
}
U.D=Fe;
U.F=Ce;
Ee.R=Za;
Be=TRUE;
startTime=Za;
}else{
ea=Za;
}
}
function S(n,Za){
Be=FALSE;
if(ea==Za){
R(n,Za);
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare914.name = "xe";
ProtoInterface ProtoInterface915 = createNode("ProtoInterface");
field field916 = createNode("field");
field916.name = "R";
field916.accessType = "inputOnly";
field916.type = "SFTime";
ProtoInterface915.field = new MFNode();

ProtoInterface915.field[0] = field916;

field field917 = createNode("field");
field917.name = "S";
field917.accessType = "inputOnly";
field917.type = "SFTime";
ProtoInterface915.field[1] = field917;

field field918 = createNode("field");
field918.name = "startTime";
field918.accessType = "outputOnly";
field918.type = "SFTime";
ProtoInterface915.field[2] = field918;

field field919 = createNode("field");
field919.name = "ye";
field919.accessType = "initializeOnly";
field919.type = "SFNode";
ProtoInterface915.field[3] = field919;

field field920 = createNode("field");
field920.name = "ze";
field920.accessType = "initializeOnly";
field920.type = "SFNode";
ProtoInterface915.field[4] = field920;

field field921 = createNode("field");
field921.name = "Ae";
field921.accessType = "initializeOnly";
field921.type = "SFNode";
ProtoInterface915.field[5] = field921;

field field922 = createNode("field");
field922.name = "Be";
field922.accessType = "initializeOnly";
field922.type = "SFBool";
ProtoInterface915.field[6] = field922;

field field923 = createNode("field");
field923.name = "Ce";
field923.accessType = "initializeOnly";
field923.type = "SFInt32";
field923.value = "-1";
ProtoInterface915.field[7] = field923;

field field924 = createNode("field");
field924.name = "De";
field924.accessType = "initializeOnly";
field924.type = "SFBool";
ProtoInterface915.field[8] = field924;

ProtoDeclare914.protoInterface = ProtoInterface915;

ProtoBody ProtoBody925 = createNode("ProtoBody");
Script Script926 = createNode("Script");
Script926.directOutput = True;
field field927 = createNode("field");
field927.name = "R";
field927.accessType = "inputOnly";
field927.type = "SFTime";
Script926.field = new MFNode();

Script926.field[0] = field927;

field field928 = createNode("field");
field928.name = "S";
field928.accessType = "inputOnly";
field928.type = "SFTime";
Script926.field[1] = field928;

field field929 = createNode("field");
field929.name = "startTime";
field929.accessType = "outputOnly";
field929.type = "SFTime";
Script926.field[2] = field929;

field field930 = createNode("field");
field930.name = "Ee";
field930.accessType = "initializeOnly";
field930.type = "SFNode";
Script926.field[3] = field930;

field field931 = createNode("field");
field931.name = "Fe";
field931.accessType = "initializeOnly";
field931.type = "SFNode";
Script926.field[4] = field931;

field field932 = createNode("field");
field932.name = "U";
field932.accessType = "initializeOnly";
field932.type = "SFNode";
Script926.field[5] = field932;

field field933 = createNode("field");
field933.name = "Be";
field933.accessType = "initializeOnly";
field933.type = "SFBool";
Script926.field[6] = field933;

field field934 = createNode("field");
field934.name = "Ce";
field934.accessType = "initializeOnly";
field934.type = "SFInt32";
Script926.field[7] = field934;

field field935 = createNode("field");
field935.name = "ea";
field935.accessType = "initializeOnly";
field935.type = "SFTime";
Script926.field[8] = field935;

field field936 = createNode("field");
field936.name = "De";
field936.accessType = "initializeOnly";
field936.type = "SFBool";
Script926.field[9] = field936;

IS IS937 = createNode("IS");
connect connect938 = createNode("connect");
connect938.nodeField = "R";
connect938.protoField = "R";
IS937.connect = new MFNode();

IS937.connect[0] = connect938;

connect connect939 = createNode("connect");
connect939.nodeField = "S";
connect939.protoField = "S";
IS937.connect[1] = connect939;

connect connect940 = createNode("connect");
connect940.nodeField = "startTime";
connect940.protoField = "startTime";
IS937.connect[2] = connect940;

connect connect941 = createNode("connect");
connect941.nodeField = "Ee";
connect941.protoField = "ye";
IS937.connect[3] = connect941;

connect connect942 = createNode("connect");
connect942.nodeField = "Fe";
connect942.protoField = "ze";
IS937.connect[4] = connect942;

connect connect943 = createNode("connect");
connect943.nodeField = "U";
connect943.protoField = "Ae";
IS937.connect[5] = connect943;

connect connect944 = createNode("connect");
connect944.nodeField = "Be";
connect944.protoField = "Be";
IS937.connect[6] = connect944;

connect connect945 = createNode("connect");
connect945.nodeField = "Ce";
connect945.protoField = "Ce";
IS937.connect[7] = connect945;

connect connect946 = createNode("connect");
connect946.nodeField = "De";
connect946.protoField = "De";
IS937.connect[8] = connect946;

Script926.iS = IS937;


Script926.setSourceCode(`javascript:\n"+
"function R(n,Za){\n"+
"if(startTime==Za){\n"+
"return;\n"+
"}\n"+
"if(!Be){\n"+
"if(U.D!=null){\n"+
"if(U.F!=Ce){\n"+
"if(!De){\n"+
"U.D.sa=Za;\n"+
"}\n"+
"}\n"+
"}\n"+
"U.D=Fe;\n"+
"U.F=Ce;\n"+
"Ee.R=Za;\n"+
"Be=TRUE;\n"+
"startTime=Za;\n"+
"}else{\n"+
"ea=Za;\n"+
"}\n"+
"}\n"+
"function S(n,Za){\n"+
"Be=FALSE;\n"+
"if(ea==Za){\n"+
"R(n,Za);\n"+
"}\n"+
"}`)
ProtoBody925.children = new MFNode();

ProtoBody925.children[0] = Script926;

ProtoDeclare914.protoBody = ProtoBody925;

children[14] = ProtoDeclare914;

ProtoDeclare ProtoDeclare947 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Ge" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="He" accessType="outputOnly" type="SFTime"></field>
<field name="Ie" accessType="outputOnly" type="SFTime"></field>
<field name="Je" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="Ke" accessType="initializeOnly" type="SFFloat" value="5"></field>
<field name="qe" accessType="initializeOnly" type="SFVec3f" value="0 0 1"></field>
<field name="T" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="center" accessType="initializeOnly" type="SFVec3f"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="Le" accessType="initializeOnly" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Script directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="He" accessType="outputOnly" type="SFTime"></field>
<field name="Ie" accessType="outputOnly" type="SFTime"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="Me" accessType="initializeOnly" type="SFNode"></field>
<field name="center" accessType="initializeOnly" type="SFVec3f"></field>
<field name="Je" accessType="initializeOnly" type="SFBool"></field>
<field name="Ke" accessType="initializeOnly" type="SFFloat"></field>
<field name="qe" accessType="initializeOnly" type="SFVec3f"></field>
<field name="Ne" accessType="initializeOnly" type="SFVec3f" value="0 1 0"></field>
<field name="Oe" accessType="initializeOnly" type="SFInt32" value="2"></field>
<field name="Pe" accessType="initializeOnly" type="SFVec3f"></field>
<field name="Qe" accessType="initializeOnly" type="SFRotation"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="He" protoField="He"></connect>
<connect nodeField="Ie" protoField="Ie"></connect>
<connect nodeField="U" protoField="U"></connect>
<connect nodeField="Me" protoField="Le"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="Je" protoField="Je"></connect>
<connect nodeField="Ke" protoField="Ke"></connect>
<connect nodeField="qe" protoField="qe"></connect>
</IS>
<![CDATA[vrmlscript:
function Re(U,Se){
var Te=new VrmlMatrix();
for(var J=U.C.length-2;J>=0;J--){
Te.setTransform(U.C[J].translation,
U.C[J].rotation,
U.C[J].scale,
U.C[J].scaleOrientation,
U.C[J].center);
Se.multRight(Te);
}
}
function Ue(Ve,Se){
var We=Ve;
while(We.G==FALSE){
Re(We,Se);
We=We.B;
}
}
function Xe()
{
var Se=new VrmlMatrix();
Re(Me,Se);
Ue(Me.B,Se);
var Ye=Me.C[0].center;
return Se.multVecMatrix(Ye);
}
function Ze(Se)
{
Re(Me,Se);
Ue(Me.B,Se);
}
function af()
{
var Se=new VrmlMatrix();
Re(U,Se);
Ue(U.B,Se);
return Se;
}
function R(n,Za)
{
He=Za;
U.C[0].center=center;
Ne=new SFVec3f(0,1,0);
Oe=2;
if(Math.abs(qe.x)>0.5){
Oe=0;
}
else if(Math.abs(qe.y)>0.5){
Oe=1;
Ne=new SFVec3f(0,0,1);
}
}
function set_fraction(n)
{
var bf=new SFVec3f(0,0,0);
if(Je){
bf=new SFVec3f(0.0,0.0,Ke);
}
else{
bf=Xe();
}
var cf=af();
var df=cf.inverse();
var vec=df.multVecMatrix(bf);
vec=vec.subtract(U.C[0].center);
var we=new SFRotation(qe,vec);
if(n<1.0){
we=Qe.slerp(we,n);
}
U.C[0].rotation=we.multiply(U.C[0].rotation);
if(Je){
cf=af();
df=cf.inverse();
var ef=df.multVecMatrix(new SFVec3f(0,1,0));
var ff=new SFVec3f(0,0,0);
var gf=df.multVecMatrix(ff);
ef=ef.subtract(gf);
ef[Oe]=0.0;
we=new SFRotation(Ne,ef);
U.C[0].rotation=we.multiply(U.C[0].rotation);
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare947.name = "Ge";
ProtoInterface ProtoInterface948 = createNode("ProtoInterface");
field field949 = createNode("field");
field949.name = "R";
field949.accessType = "inputOnly";
field949.type = "SFTime";
ProtoInterface948.field = new MFNode();

ProtoInterface948.field[0] = field949;

field field950 = createNode("field");
field950.name = "set_fraction";
field950.accessType = "inputOnly";
field950.type = "SFFloat";
ProtoInterface948.field[1] = field950;

field field951 = createNode("field");
field951.name = "He";
field951.accessType = "outputOnly";
field951.type = "SFTime";
ProtoInterface948.field[2] = field951;

field field952 = createNode("field");
field952.name = "Ie";
field952.accessType = "outputOnly";
field952.type = "SFTime";
ProtoInterface948.field[3] = field952;

field field953 = createNode("field");
field953.name = "Je";
field953.accessType = "initializeOnly";
field953.type = "SFBool";
field953.value = "true";
ProtoInterface948.field[4] = field953;

field field954 = createNode("field");
field954.name = "Ke";
field954.accessType = "initializeOnly";
field954.type = "SFFloat";
field954.value = "5";
ProtoInterface948.field[5] = field954;

field field955 = createNode("field");
field955.name = "qe";
field955.accessType = "initializeOnly";
field955.type = "SFVec3f";
field955.value = "0 0 1";
ProtoInterface948.field[6] = field955;

field field956 = createNode("field");
field956.name = "T";
field956.accessType = "initializeOnly";
field956.type = "SFBool";
field956.value = "true";
ProtoInterface948.field[7] = field956;

field field957 = createNode("field");
field957.name = "center";
field957.accessType = "initializeOnly";
field957.type = "SFVec3f";
ProtoInterface948.field[8] = field957;

field field958 = createNode("field");
field958.name = "U";
field958.accessType = "initializeOnly";
field958.type = "SFNode";
ProtoInterface948.field[9] = field958;

field field959 = createNode("field");
field959.name = "Le";
field959.accessType = "initializeOnly";
field959.type = "SFNode";
ProtoInterface948.field[10] = field959;

ProtoDeclare947.protoInterface = ProtoInterface948;

ProtoBody ProtoBody960 = createNode("ProtoBody");
Script Script961 = createNode("Script");
Script961.directOutput = True;
field field962 = createNode("field");
field962.name = "R";
field962.accessType = "inputOnly";
field962.type = "SFTime";
Script961.field = new MFNode();

Script961.field[0] = field962;

field field963 = createNode("field");
field963.name = "set_fraction";
field963.accessType = "inputOnly";
field963.type = "SFFloat";
Script961.field[1] = field963;

field field964 = createNode("field");
field964.name = "He";
field964.accessType = "outputOnly";
field964.type = "SFTime";
Script961.field[2] = field964;

field field965 = createNode("field");
field965.name = "Ie";
field965.accessType = "outputOnly";
field965.type = "SFTime";
Script961.field[3] = field965;

field field966 = createNode("field");
field966.name = "U";
field966.accessType = "initializeOnly";
field966.type = "SFNode";
Script961.field[4] = field966;

field field967 = createNode("field");
field967.name = "Me";
field967.accessType = "initializeOnly";
field967.type = "SFNode";
Script961.field[5] = field967;

field field968 = createNode("field");
field968.name = "center";
field968.accessType = "initializeOnly";
field968.type = "SFVec3f";
Script961.field[6] = field968;

field field969 = createNode("field");
field969.name = "Je";
field969.accessType = "initializeOnly";
field969.type = "SFBool";
Script961.field[7] = field969;

field field970 = createNode("field");
field970.name = "Ke";
field970.accessType = "initializeOnly";
field970.type = "SFFloat";
Script961.field[8] = field970;

field field971 = createNode("field");
field971.name = "qe";
field971.accessType = "initializeOnly";
field971.type = "SFVec3f";
Script961.field[9] = field971;

field field972 = createNode("field");
field972.name = "Ne";
field972.accessType = "initializeOnly";
field972.type = "SFVec3f";
field972.value = "0 1 0";
Script961.field[10] = field972;

field field973 = createNode("field");
field973.name = "Oe";
field973.accessType = "initializeOnly";
field973.type = "SFInt32";
field973.value = "2";
Script961.field[11] = field973;

field field974 = createNode("field");
field974.name = "Pe";
field974.accessType = "initializeOnly";
field974.type = "SFVec3f";
Script961.field[12] = field974;

field field975 = createNode("field");
field975.name = "Qe";
field975.accessType = "initializeOnly";
field975.type = "SFRotation";
Script961.field[13] = field975;

IS IS976 = createNode("IS");
connect connect977 = createNode("connect");
connect977.nodeField = "R";
connect977.protoField = "R";
IS976.connect = new MFNode();

IS976.connect[0] = connect977;

connect connect978 = createNode("connect");
connect978.nodeField = "set_fraction";
connect978.protoField = "set_fraction";
IS976.connect[1] = connect978;

connect connect979 = createNode("connect");
connect979.nodeField = "He";
connect979.protoField = "He";
IS976.connect[2] = connect979;

connect connect980 = createNode("connect");
connect980.nodeField = "Ie";
connect980.protoField = "Ie";
IS976.connect[3] = connect980;

connect connect981 = createNode("connect");
connect981.nodeField = "U";
connect981.protoField = "U";
IS976.connect[4] = connect981;

connect connect982 = createNode("connect");
connect982.nodeField = "Me";
connect982.protoField = "Le";
IS976.connect[5] = connect982;

connect connect983 = createNode("connect");
connect983.nodeField = "center";
connect983.protoField = "center";
IS976.connect[6] = connect983;

connect connect984 = createNode("connect");
connect984.nodeField = "Je";
connect984.protoField = "Je";
IS976.connect[7] = connect984;

connect connect985 = createNode("connect");
connect985.nodeField = "Ke";
connect985.protoField = "Ke";
IS976.connect[8] = connect985;

connect connect986 = createNode("connect");
connect986.nodeField = "qe";
connect986.protoField = "qe";
IS976.connect[9] = connect986;

Script961.iS = IS976;


Script961.setSourceCode(`vrmlscript:\n"+
"function Re(U,Se){\n"+
"var Te=new VrmlMatrix();\n"+
"for(var J=U.C.length-2;J>=0;J--){\n"+
"Te.setTransform(U.C[J].translation,\n"+
"U.C[J].rotation,\n"+
"U.C[J].scale,\n"+
"U.C[J].scaleOrientation,\n"+
"U.C[J].center);\n"+
"Se.multRight(Te);\n"+
"}\n"+
"}\n"+
"function Ue(Ve,Se){\n"+
"var We=Ve;\n"+
"while(We.G==FALSE){\n"+
"Re(We,Se);\n"+
"We=We.B;\n"+
"}\n"+
"}\n"+
"function Xe()\n"+
"{\n"+
"var Se=new VrmlMatrix();\n"+
"Re(Me,Se);\n"+
"Ue(Me.B,Se);\n"+
"var Ye=Me.C[0].center;\n"+
"return Se.multVecMatrix(Ye);\n"+
"}\n"+
"function Ze(Se)\n"+
"{\n"+
"Re(Me,Se);\n"+
"Ue(Me.B,Se);\n"+
"}\n"+
"function af()\n"+
"{\n"+
"var Se=new VrmlMatrix();\n"+
"Re(U,Se);\n"+
"Ue(U.B,Se);\n"+
"return Se;\n"+
"}\n"+
"function R(n,Za)\n"+
"{\n"+
"He=Za;\n"+
"U.C[0].center=center;\n"+
"Ne=new SFVec3f(0,1,0);\n"+
"Oe=2;\n"+
"if(Math.abs(qe.x)>0.5){\n"+
"Oe=0;\n"+
"}\n"+
"else if(Math.abs(qe.y)>0.5){\n"+
"Oe=1;\n"+
"Ne=new SFVec3f(0,0,1);\n"+
"}\n"+
"}\n"+
"function set_fraction(n)\n"+
"{\n"+
"var bf=new SFVec3f(0,0,0);\n"+
"if(Je){\n"+
"bf=new SFVec3f(0.0,0.0,Ke);\n"+
"}\n"+
"else{\n"+
"bf=Xe();\n"+
"}\n"+
"var cf=af();\n"+
"var df=cf.inverse();\n"+
"var vec=df.multVecMatrix(bf);\n"+
"vec=vec.subtract(U.C[0].center);\n"+
"var we=new SFRotation(qe,vec);\n"+
"if(n<1.0){\n"+
"we=Qe.slerp(we,n);\n"+
"}\n"+
"U.C[0].rotation=we.multiply(U.C[0].rotation);\n"+
"if(Je){\n"+
"cf=af();\n"+
"df=cf.inverse();\n"+
"var ef=df.multVecMatrix(new SFVec3f(0,1,0));\n"+
"var ff=new SFVec3f(0,0,0);\n"+
"var gf=df.multVecMatrix(ff);\n"+
"ef=ef.subtract(gf);\n"+
"ef[Oe]=0.0;\n"+
"we=new SFRotation(Ne,ef);\n"+
"U.C[0].rotation=we.multiply(U.C[0].rotation);\n"+
"}\n"+
"}`)
ProtoBody960.children = new MFNode();

ProtoBody960.children[0] = Script961;

ProtoDeclare947.protoBody = ProtoBody960;

children[15] = ProtoDeclare947;

ProtoDeclare ProtoDeclare987 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="hf" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_od" accessType="inputOnly" type="SFFloat"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="jf" accessType="inputOnly" type="SFFloat"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="center" accessType="inputOutput" type="SFVec3f"></field>
<field name="T" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="kf" accessType="initializeOnly" type="SFInt32" value="8"></field>
<field name="lf" accessType="initializeOnly" type="SFFloat" value="1.5"></field>
<field name="mf" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="nf" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="of" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="pf_1"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
<PositionInterpolator DEF="qf_1"></PositionInterpolator>
<Script DEF="rf_1" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_od" accessType="inputOnly" type="SFFloat"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="jf" accessType="inputOnly" type="SFFloat"></field>
<field name="set_sf" accessType="inputOnly" type="SFVec3f"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="key_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="keyValue_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="sf_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="kf" accessType="initializeOnly" type="SFInt32"></field>
<field name="lf" accessType="initializeOnly" type="SFFloat"></field>
<field name="mf" accessType="initializeOnly" type="SFBool"></field>
<field name="nf" accessType="initializeOnly" type="SFBool"></field>
<field name="of" accessType="initializeOnly" type="SFBool"></field>
<field name="aa" accessType="initializeOnly" type="SFBool"></field>
<field name="tf" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="key" accessType="initializeOnly" type="MFFloat" value="0"></field>
<field name="keyValue" accessType="initializeOnly" type="MFVec3f" value="0 0 0"></field>
<field name="uf" accessType="initializeOnly" type="SFNode"><Transform USE="pf_1"></Transform>
</field>
<field name="vf" accessType="initializeOnly" type="SFVec3f"></field>
<field name="sf" accessType="initializeOnly" type="SFVec3f"></field>
<field name="od" accessType="initializeOnly" type="SFFloat"></field>
<field name="wf" accessType="initializeOnly" type="SFFloat"></field>
<field name="xf" accessType="initializeOnly" type="SFFloat"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="fa" accessType="initializeOnly" type="SFTime"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="set_od" protoField="set_od"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="jf" protoField="jf"></connect>
<connect nodeField="R_changed" protoField="R_changed"></connect>
<connect nodeField="U" protoField="U"></connect>
<connect nodeField="kf" protoField="kf"></connect>
<connect nodeField="lf" protoField="lf"></connect>
<connect nodeField="mf" protoField="mf"></connect>
<connect nodeField="nf" protoField="nf"></connect>
<connect nodeField="of" protoField="of"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
aa=FALSE;
tf=1.;
sf.x=sf.y=sf.z=1.;
key.length=kf;
keyValue.length=kf;
ge=0.0;
g=kf-1.0;
g=1./g;
for(J=0;J<kf;J++){
key[J]=ge;
keyValue[J].x=keyValue[J].y=keyValue[J].z=1.;
if(mf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].x=wf;
}
if(nf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].y=wf;
}
if(of==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].z=wf;
}
ge+=g;
}
}
function R(n){
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
vf=uf.scale_changed;
key_changed=key;
keyValue_changed=keyValue;
R_changed=n;
fa=n;
}
function S(n){
uf.set_scale=vf;
aa=FALSE;
if(ea==n){
R(n);
}
}
function set_od(n){
od=n;
if(od<0.)od=0.;
else if(od>1.)od=1.;
}
function set_sf(n){
if(mf==TRUE)sf.x=(1.-od)+od*(n.x);
if(nf==TRUE)sf.y=(1.-od)+od*(n.y);
if(of==TRUE)sf.z=(1.-od)+od*(n.z);
sf_changed=sf;
}
function set_fraction(n){
fraction_changed=n;
}
function jf(n){
if(n>tf){
tf=n;
return;
}
tf=n;
keyValue[0].x=keyValue[kf-1].x;
keyValue[0].y=keyValue[kf-1].y;
keyValue[0].z=keyValue[kf-1].z;
for(J=1;J<kf;J++){
if(mf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].x=wf;
}
if(nf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].y=wf;
}
if(of==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].z=wf;
}
}
keyValue_changed=keyValue;
}]]></Script>
<ROUTE fromNode="rf_1" fromField="sf_changed" toNode="pf_1" toField="set_scale"></ROUTE>
<ROUTE fromNode="rf_1" fromField="key_changed" toNode="qf_1" toField="set_key"></ROUTE>
<ROUTE fromNode="rf_1" fromField="fraction_changed" toNode="qf_1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="rf_1" fromField="keyValue_changed" toNode="qf_1" toField="set_keyValue"></ROUTE>
<ROUTE fromNode="qf_1" fromField="value_changed" toNode="rf_1" toField="set_sf"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare987.name = "hf";
ProtoInterface ProtoInterface988 = createNode("ProtoInterface");
field field989 = createNode("field");
field989.name = "R";
field989.accessType = "inputOnly";
field989.type = "SFTime";
ProtoInterface988.field = new MFNode();

ProtoInterface988.field[0] = field989;

field field990 = createNode("field");
field990.name = "S";
field990.accessType = "inputOnly";
field990.type = "SFTime";
ProtoInterface988.field[1] = field990;

field field991 = createNode("field");
field991.name = "set_od";
field991.accessType = "inputOnly";
field991.type = "SFFloat";
ProtoInterface988.field[2] = field991;

field field992 = createNode("field");
field992.name = "set_fraction";
field992.accessType = "inputOnly";
field992.type = "SFFloat";
ProtoInterface988.field[3] = field992;

field field993 = createNode("field");
field993.name = "jf";
field993.accessType = "inputOnly";
field993.type = "SFFloat";
ProtoInterface988.field[4] = field993;

field field994 = createNode("field");
field994.name = "R_changed";
field994.accessType = "outputOnly";
field994.type = "SFTime";
ProtoInterface988.field[5] = field994;

field field995 = createNode("field");
field995.name = "translation";
field995.accessType = "inputOutput";
field995.type = "SFVec3f";
ProtoInterface988.field[6] = field995;

field field996 = createNode("field");
field996.name = "scale";
field996.accessType = "inputOutput";
field996.type = "SFVec3f";
field996.value = "1 1 1";
ProtoInterface988.field[7] = field996;

field field997 = createNode("field");
field997.name = "center";
field997.accessType = "inputOutput";
field997.type = "SFVec3f";
ProtoInterface988.field[8] = field997;

field field998 = createNode("field");
field998.name = "T";
field998.accessType = "inputOutput";
field998.type = "SFBool";
field998.value = "true";
ProtoInterface988.field[9] = field998;

field field999 = createNode("field");
field999.name = "rotation";
field999.accessType = "inputOutput";
field999.type = "SFRotation";
ProtoInterface988.field[10] = field999;

field field1000 = createNode("field");
field1000.name = "scaleOrientation";
field1000.accessType = "inputOutput";
field1000.type = "SFRotation";
ProtoInterface988.field[11] = field1000;

field field1001 = createNode("field");
field1001.name = "children";
field1001.accessType = "initializeOnly";
field1001.type = "MFNode";
ProtoInterface988.field[12] = field1001;

field field1002 = createNode("field");
field1002.name = "U";
field1002.accessType = "initializeOnly";
field1002.type = "SFNode";
ProtoInterface988.field[13] = field1002;

field field1003 = createNode("field");
field1003.name = "kf";
field1003.accessType = "initializeOnly";
field1003.type = "SFInt32";
field1003.value = "8";
ProtoInterface988.field[14] = field1003;

field field1004 = createNode("field");
field1004.name = "lf";
field1004.accessType = "initializeOnly";
field1004.type = "SFFloat";
field1004.value = "1.5";
ProtoInterface988.field[15] = field1004;

field field1005 = createNode("field");
field1005.name = "mf";
field1005.accessType = "initializeOnly";
field1005.type = "SFBool";
field1005.value = "true";
ProtoInterface988.field[16] = field1005;

field field1006 = createNode("field");
field1006.name = "nf";
field1006.accessType = "initializeOnly";
field1006.type = "SFBool";
field1006.value = "true";
ProtoInterface988.field[17] = field1006;

field field1007 = createNode("field");
field1007.name = "of";
field1007.accessType = "initializeOnly";
field1007.type = "SFBool";
field1007.value = "true";
ProtoInterface988.field[18] = field1007;

ProtoDeclare987.protoInterface = ProtoInterface988;

ProtoBody ProtoBody1008 = createNode("ProtoBody");
Transform Transform1009 = createNode("Transform");
Transform1009.DEF = "pf_1";
IS IS1010 = createNode("IS");
connect connect1011 = createNode("connect");
connect1011.nodeField = "translation";
connect1011.protoField = "translation";
IS1010.connect = new MFNode();

IS1010.connect[0] = connect1011;

connect connect1012 = createNode("connect");
connect1012.nodeField = "rotation";
connect1012.protoField = "rotation";
IS1010.connect[1] = connect1012;

connect connect1013 = createNode("connect");
connect1013.nodeField = "scale";
connect1013.protoField = "scale";
IS1010.connect[2] = connect1013;

connect connect1014 = createNode("connect");
connect1014.nodeField = "scaleOrientation";
connect1014.protoField = "scaleOrientation";
IS1010.connect[3] = connect1014;

connect connect1015 = createNode("connect");
connect1015.nodeField = "center";
connect1015.protoField = "center";
IS1010.connect[4] = connect1015;

connect connect1016 = createNode("connect");
connect1016.nodeField = "children";
connect1016.protoField = "children";
IS1010.connect[5] = connect1016;

Transform1009.iS = IS1010;

ProtoBody1008.children = new MFNode();

ProtoBody1008.children[0] = Transform1009;

PositionInterpolator PositionInterpolator1017 = createNode("PositionInterpolator");
PositionInterpolator1017.DEF = "qf_1";
ProtoBody1008.children[1] = PositionInterpolator1017;

Script Script1018 = createNode("Script");
Script1018.DEF = "rf_1";
Script1018.directOutput = True;
field field1019 = createNode("field");
field1019.name = "R";
field1019.accessType = "inputOnly";
field1019.type = "SFTime";
Script1018.field = new MFNode();

Script1018.field[0] = field1019;

field field1020 = createNode("field");
field1020.name = "S";
field1020.accessType = "inputOnly";
field1020.type = "SFTime";
Script1018.field[1] = field1020;

field field1021 = createNode("field");
field1021.name = "set_od";
field1021.accessType = "inputOnly";
field1021.type = "SFFloat";
Script1018.field[2] = field1021;

field field1022 = createNode("field");
field1022.name = "set_fraction";
field1022.accessType = "inputOnly";
field1022.type = "SFFloat";
Script1018.field[3] = field1022;

field field1023 = createNode("field");
field1023.name = "jf";
field1023.accessType = "inputOnly";
field1023.type = "SFFloat";
Script1018.field[4] = field1023;

field field1024 = createNode("field");
field1024.name = "set_sf";
field1024.accessType = "inputOnly";
field1024.type = "SFVec3f";
Script1018.field[5] = field1024;

field field1025 = createNode("field");
field1025.name = "R_changed";
field1025.accessType = "outputOnly";
field1025.type = "SFTime";
Script1018.field[6] = field1025;

field field1026 = createNode("field");
field1026.name = "key_changed";
field1026.accessType = "outputOnly";
field1026.type = "MFFloat";
Script1018.field[7] = field1026;

field field1027 = createNode("field");
field1027.name = "keyValue_changed";
field1027.accessType = "outputOnly";
field1027.type = "MFVec3f";
Script1018.field[8] = field1027;

field field1028 = createNode("field");
field1028.name = "sf_changed";
field1028.accessType = "outputOnly";
field1028.type = "SFVec3f";
Script1018.field[9] = field1028;

field field1029 = createNode("field");
field1029.name = "fraction_changed";
field1029.accessType = "outputOnly";
field1029.type = "SFFloat";
Script1018.field[10] = field1029;

field field1030 = createNode("field");
field1030.name = "U";
field1030.accessType = "initializeOnly";
field1030.type = "SFNode";
Script1018.field[11] = field1030;

field field1031 = createNode("field");
field1031.name = "kf";
field1031.accessType = "initializeOnly";
field1031.type = "SFInt32";
Script1018.field[12] = field1031;

field field1032 = createNode("field");
field1032.name = "lf";
field1032.accessType = "initializeOnly";
field1032.type = "SFFloat";
Script1018.field[13] = field1032;

field field1033 = createNode("field");
field1033.name = "mf";
field1033.accessType = "initializeOnly";
field1033.type = "SFBool";
Script1018.field[14] = field1033;

field field1034 = createNode("field");
field1034.name = "nf";
field1034.accessType = "initializeOnly";
field1034.type = "SFBool";
Script1018.field[15] = field1034;

field field1035 = createNode("field");
field1035.name = "of";
field1035.accessType = "initializeOnly";
field1035.type = "SFBool";
Script1018.field[16] = field1035;

field field1036 = createNode("field");
field1036.name = "aa";
field1036.accessType = "initializeOnly";
field1036.type = "SFBool";
Script1018.field[17] = field1036;

field field1037 = createNode("field");
field1037.name = "tf";
field1037.accessType = "initializeOnly";
field1037.type = "SFFloat";
field1037.value = "1";
Script1018.field[18] = field1037;

field field1038 = createNode("field");
field1038.name = "key";
field1038.accessType = "initializeOnly";
field1038.type = "MFFloat";
field1038.value = "0";
Script1018.field[19] = field1038;

field field1039 = createNode("field");
field1039.name = "keyValue";
field1039.accessType = "initializeOnly";
field1039.type = "MFVec3f";
field1039.value = "0 0 0";
Script1018.field[20] = field1039;

field field1040 = createNode("field");
field1040.name = "uf";
field1040.accessType = "initializeOnly";
field1040.type = "SFNode";
Transform Transform1041 = createNode("Transform");
Transform1041.USE = "pf_1";
field1040.children = new MFNode();

field1040.children[0] = Transform1041;

Script1018.field[21] = field1040;

field field1042 = createNode("field");
field1042.name = "vf";
field1042.accessType = "initializeOnly";
field1042.type = "SFVec3f";
Script1018.field[22] = field1042;

field field1043 = createNode("field");
field1043.name = "sf";
field1043.accessType = "initializeOnly";
field1043.type = "SFVec3f";
Script1018.field[23] = field1043;

field field1044 = createNode("field");
field1044.name = "od";
field1044.accessType = "initializeOnly";
field1044.type = "SFFloat";
Script1018.field[24] = field1044;

field field1045 = createNode("field");
field1045.name = "wf";
field1045.accessType = "initializeOnly";
field1045.type = "SFFloat";
Script1018.field[25] = field1045;

field field1046 = createNode("field");
field1046.name = "xf";
field1046.accessType = "initializeOnly";
field1046.type = "SFFloat";
Script1018.field[26] = field1046;

field field1047 = createNode("field");
field1047.name = "ea";
field1047.accessType = "initializeOnly";
field1047.type = "SFTime";
Script1018.field[27] = field1047;

field field1048 = createNode("field");
field1048.name = "fa";
field1048.accessType = "initializeOnly";
field1048.type = "SFTime";
Script1018.field[28] = field1048;

IS IS1049 = createNode("IS");
connect connect1050 = createNode("connect");
connect1050.nodeField = "R";
connect1050.protoField = "R";
IS1049.connect = new MFNode();

IS1049.connect[0] = connect1050;

connect connect1051 = createNode("connect");
connect1051.nodeField = "S";
connect1051.protoField = "S";
IS1049.connect[1] = connect1051;

connect connect1052 = createNode("connect");
connect1052.nodeField = "set_od";
connect1052.protoField = "set_od";
IS1049.connect[2] = connect1052;

connect connect1053 = createNode("connect");
connect1053.nodeField = "set_fraction";
connect1053.protoField = "set_fraction";
IS1049.connect[3] = connect1053;

connect connect1054 = createNode("connect");
connect1054.nodeField = "jf";
connect1054.protoField = "jf";
IS1049.connect[4] = connect1054;

connect connect1055 = createNode("connect");
connect1055.nodeField = "R_changed";
connect1055.protoField = "R_changed";
IS1049.connect[5] = connect1055;

connect connect1056 = createNode("connect");
connect1056.nodeField = "U";
connect1056.protoField = "U";
IS1049.connect[6] = connect1056;

connect connect1057 = createNode("connect");
connect1057.nodeField = "kf";
connect1057.protoField = "kf";
IS1049.connect[7] = connect1057;

connect connect1058 = createNode("connect");
connect1058.nodeField = "lf";
connect1058.protoField = "lf";
IS1049.connect[8] = connect1058;

connect connect1059 = createNode("connect");
connect1059.nodeField = "mf";
connect1059.protoField = "mf";
IS1049.connect[9] = connect1059;

connect connect1060 = createNode("connect");
connect1060.nodeField = "nf";
connect1060.protoField = "nf";
IS1049.connect[10] = connect1060;

connect connect1061 = createNode("connect");
connect1061.nodeField = "of";
connect1061.protoField = "of";
IS1049.connect[11] = connect1061;

Script1018.iS = IS1049;


Script1018.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"aa=FALSE;\n"+
"tf=1.;\n"+
"sf.x=sf.y=sf.z=1.;\n"+
"key.length=kf;\n"+
"keyValue.length=kf;\n"+
"ge=0.0;\n"+
"g=kf-1.0;\n"+
"g=1./g;\n"+
"for(J=0;J<kf;J++){\n"+
"key[J]=ge;\n"+
"keyValue[J].x=keyValue[J].y=keyValue[J].z=1.;\n"+
"if(mf==TRUE){\n"+
"xf=Math.random();\n"+
"wf=(1.-xf)+xf*(lf);\n"+
"keyValue[J].x=wf;\n"+
"}\n"+
"if(nf==TRUE){\n"+
"xf=Math.random();\n"+
"wf=(1.-xf)+xf*(lf);\n"+
"keyValue[J].y=wf;\n"+
"}\n"+
"if(of==TRUE){\n"+
"xf=Math.random();\n"+
"wf=(1.-xf)+xf*(lf);\n"+
"keyValue[J].z=wf;\n"+
"}\n"+
"ge+=g;\n"+
"}\n"+
"}\n"+
"function R(n){\n"+
"if(fa==n){\n"+
"return;\n"+
"}\n"+
"if(aa==TRUE){\n"+
"ea=n;\n"+
"return;\n"+
"}\n"+
"aa=TRUE;\n"+
"vf=uf.scale_changed;\n"+
"key_changed=key;\n"+
"keyValue_changed=keyValue;\n"+
"R_changed=n;\n"+
"fa=n;\n"+
"}\n"+
"function S(n){\n"+
"uf.set_scale=vf;\n"+
"aa=FALSE;\n"+
"if(ea==n){\n"+
"R(n);\n"+
"}\n"+
"}\n"+
"function set_od(n){\n"+
"od=n;\n"+
"if(od<0.)od=0.;\n"+
"else if(od>1.)od=1.;\n"+
"}\n"+
"function set_sf(n){\n"+
"if(mf==TRUE)sf.x=(1.-od)+od*(n.x);\n"+
"if(nf==TRUE)sf.y=(1.-od)+od*(n.y);\n"+
"if(of==TRUE)sf.z=(1.-od)+od*(n.z);\n"+
"sf_changed=sf;\n"+
"}\n"+
"function set_fraction(n){\n"+
"fraction_changed=n;\n"+
"}\n"+
"function jf(n){\n"+
"if(n>tf){\n"+
"tf=n;\n"+
"return;\n"+
"}\n"+
"tf=n;\n"+
"keyValue[0].x=keyValue[kf-1].x;\n"+
"keyValue[0].y=keyValue[kf-1].y;\n"+
"keyValue[0].z=keyValue[kf-1].z;\n"+
"for(J=1;J<kf;J++){\n"+
"if(mf==TRUE){\n"+
"xf=Math.random();\n"+
"wf=(1.-xf)+xf*(lf);\n"+
"keyValue[J].x=wf;\n"+
"}\n"+
"if(nf==TRUE){\n"+
"xf=Math.random();\n"+
"wf=(1.-xf)+xf*(lf);\n"+
"keyValue[J].y=wf;\n"+
"}\n"+
"if(of==TRUE){\n"+
"xf=Math.random();\n"+
"wf=(1.-xf)+xf*(lf);\n"+
"keyValue[J].z=wf;\n"+
"}\n"+
"}\n"+
"keyValue_changed=keyValue;\n"+
"}`)
ProtoBody1008.children[2] = Script1018;

ROUTE ROUTE1062 = createNode("ROUTE");
ROUTE1062.fromNode = "rf_1";
ROUTE1062.fromField = "sf_changed";
ROUTE1062.toNode = "pf_1";
ROUTE1062.toField = "set_scale";
ProtoBody1008.children[3] = ROUTE1062;

ROUTE ROUTE1063 = createNode("ROUTE");
ROUTE1063.fromNode = "rf_1";
ROUTE1063.fromField = "key_changed";
ROUTE1063.toNode = "qf_1";
ROUTE1063.toField = "set_key";
ProtoBody1008.children[4] = ROUTE1063;

ROUTE ROUTE1064 = createNode("ROUTE");
ROUTE1064.fromNode = "rf_1";
ROUTE1064.fromField = "fraction_changed";
ROUTE1064.toNode = "qf_1";
ROUTE1064.toField = "set_fraction";
ProtoBody1008.children[5] = ROUTE1064;

ROUTE ROUTE1065 = createNode("ROUTE");
ROUTE1065.fromNode = "rf_1";
ROUTE1065.fromField = "keyValue_changed";
ROUTE1065.toNode = "qf_1";
ROUTE1065.toField = "set_keyValue";
ProtoBody1008.children[6] = ROUTE1065;

ROUTE ROUTE1066 = createNode("ROUTE");
ROUTE1066.fromNode = "qf_1";
ROUTE1066.fromField = "value_changed";
ROUTE1066.toNode = "rf_1";
ROUTE1066.toField = "set_sf";
ProtoBody1008.children[7] = ROUTE1066;

ProtoDeclare987.protoBody = ProtoBody1008;

children[16] = ProtoDeclare987;

ProtoDeclare ProtoDeclare1067 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="yf" ><ProtoInterface><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="point_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="zf_changed" accessType="outputOnly" type="MFInt32"></field>
<field name="Sd_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="Af_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="Bf_changed" accessType="outputOnly" type="MFInt32"></field>
<field name="Cf_changed" accessType="outputOnly" type="SFBool"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="0.3 0.5 1"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="D" accessType="inputOutput" type="SFNode"></field>
<field name="F" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="G" accessType="inputOutput" type="SFBool"></field>
<field name="point" accessType="initializeOnly" type="MFVec3f"></field>
<field name="zf" accessType="initializeOnly" type="MFInt32"></field>
<field name="Sd" accessType="initializeOnly" type="MFFloat"></field>
<field name="Af" accessType="initializeOnly" type="MFVec2f"></field>
<field name="Bf" accessType="initializeOnly" type="MFInt32"></field>
<field name="Cf" accessType="initializeOnly" type="SFBool"></field>
<field name="p" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="coord" accessType="initializeOnly" type="MFVec3f"></field>
<field name="coordIndex" accessType="initializeOnly" type="MFInt32"></field>
<field name="choice" accessType="initializeOnly" type="SFInt32"></field>
<field name="Df" accessType="initializeOnly" type="SFInt32" value="8"></field>
<field name="scale" accessType="initializeOnly" type="SFVec3f" value="1 1 1"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="Ef_1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="choice"></connect>
</IS>
<Shape><Appearance containerField="appearance"><Material containerField="material" DEF="Ff"><IS><connect nodeField="emissiveColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="Gf_1"><IS><connect nodeField="coordIndex" protoField="coordIndex"></connect>
</IS>
<Coordinate DEF="Hf_1"><IS><connect nodeField="point" protoField="coord"></connect>
</IS>
</Coordinate>
</IndexedLineSet>
</Shape>
</Switch>
<Script DEF="If_1" directOutput="true"><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="point_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="zf_changed" accessType="outputOnly" type="MFInt32"></field>
<field name="Sd_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="Af_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="Bf_changed" accessType="outputOnly" type="MFInt32"></field>
<field name="Cf_changed" accessType="outputOnly" type="SFBool"></field>
<field name="coord" accessType="outputOnly" type="MFVec3f"></field>
<field name="coordIndex" accessType="outputOnly" type="MFInt32"></field>
<field name="p" accessType="initializeOnly" type="SFBool"></field>
<field name="point" accessType="initializeOnly" type="MFVec3f"></field>
<field name="zf" accessType="initializeOnly" type="MFInt32"></field>
<field name="Sd" accessType="initializeOnly" type="MFFloat"></field>
<field name="Af" accessType="initializeOnly" type="MFVec2f"></field>
<field name="Bf" accessType="initializeOnly" type="MFInt32"></field>
<field name="Cf" accessType="initializeOnly" type="SFBool"></field>
<field name="Df" accessType="initializeOnly" type="SFInt32"></field>
<field name="ma" accessType="initializeOnly" type="SFNode"><Switch USE="Ef_1"></Switch>
</field>
<IS><connect nodeField="set_p" protoField="set_p"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="p_changed" protoField="p_changed"></connect>
<connect nodeField="point_changed" protoField="point_changed"></connect>
<connect nodeField="zf_changed" protoField="zf_changed"></connect>
<connect nodeField="Sd_changed" protoField="Sd_changed"></connect>
<connect nodeField="Af_changed" protoField="Af_changed"></connect>
<connect nodeField="Bf_changed" protoField="Bf_changed"></connect>
<connect nodeField="Cf_changed" protoField="Cf_changed"></connect>
<connect nodeField="p" protoField="p"></connect>
<connect nodeField="point" protoField="point"></connect>
<connect nodeField="zf" protoField="zf"></connect>
<connect nodeField="Sd" protoField="Sd"></connect>
<connect nodeField="Af" protoField="Af"></connect>
<connect nodeField="Bf" protoField="Bf"></connect>
<connect nodeField="Cf" protoField="Cf"></connect>
<connect nodeField="Df" protoField="Df"></connect>
</IS>
<![CDATA[javascript:
function Jf(Kf,Lf,
Mf,Nf,Of,Pf,Qf,Rf){
Sf=coord.length;
coord.length+=Df;
for(J=0;J<Df;J++){
var Tf=Kf.multiply(Of[J]);
Tf=Tf.add(Lf.multiply(Pf[J]));
Tf=Tf.add(Mf.multiply(Qf[J]));
Tf=Tf.add(Nf.multiply(Rf[J]));
coord[Sf+J]=Tf;
}
}
function Uf(){
if(point.length==0)return;
var index=0;
var Vf=new SFVec3f();
var Kf=new SFVec3f();
var Lf=new SFVec3f();
var Mf=new SFVec3f();
var Nf=new SFVec3f();
var Wf=new SFVec3f();
var Xf=new SFVec3f();
var Yf=new SFVec3f();
var Zf=new SFVec3f();
var ag=FALSE;
var bg=FALSE;
var cg=FALSE;
var dg=FALSE;
var eg=FALSE;
var fg=FALSE;
if(zf[index]==1){
Vf=point[index];
ag=TRUE;
Xf=point[index];
cg=TRUE;
index++;
}
if(zf[index]==0){
Kf=point[index];
Yf=point[index];
index++;
}
if(zf[index]==2){
Lf=point[index];
dg=TRUE;
Zf=point[index];
fg=TRUE;
index++;
}
var Of=new MFFloat();
var Pf=new MFFloat();
var Qf=new MFFloat();
var Rf=new MFFloat();
Of.length=Pf.length=Qf.length=Rf.length=Df;
Of[0]=1;
Pf[0]=Qf[0]=Rf[0]=0;
for(J=1;J<Df;J++){
gg=(J*1.0)/Df;
Of[J]=(1-gg)*(1-gg)*(1-gg);
Pf[J]=3*gg*(1-gg)*(1-gg);
Qf[J]=3*gg*gg*(1-gg);
Rf[J]=gg*gg*gg;
}
while(index<zf.length){
bg=FALSE;
eg=FALSE;
if(zf[index]==1){
Mf=point[index];
bg=TRUE;
index++;
}
if((index<zf.length)&&(zf[index]==0)){
Nf=point[index];
index++;
}
if((index<zf.length)&&(zf[index]==2)){
Wf=point[index];
eg=TRUE;
index++;
}
if(dg&&bg){
Jf(Kf,Lf,
Mf,Nf,
Of,Pf,Qf,Rf);
}else if(dg){
Jf(Kf,Lf,
Nf,Nf,
Of,Pf,Qf,Rf);
}else if(bg){
Jf(Kf,Kf,
Mf,Nf,
Of,Pf,Qf,Rf);
}else{
coord[coord.length]=Kf;
}
Vf=Mf;
Kf=Nf;
Lf=Wf;
ag=bg;
dg=eg;
}
if(Cf){
if(eg&&cg){
Jf(Nf,Wf,
Xf,Yf,
Of,Pf,Qf,Rf);
}else if(eg){
Jf(Nf,Wf,
Yf,Yf,
Of,Pf,Qf,Rf);
}else if(cg){
Jf(Nf,Nf,
Xf,Yf,
Of,Pf,Qf,Rf);
}else{
coord[coord.length]=Nf;
}
coord[coord.length]=Yf;
}else{
coord[coord.length]=Nf;
}
coordIndex.length=coord.length+1;
for(J=0;J<coord.length;J++){
coordIndex[J]=J;
}
coordIndex[coordIndex.length-1]=-1;
}
function set_p(n){
if(n==TRUE){
ma.whichChoice=0;
}else{
ma.whichChoice=-1;
}
p=n;
p_changed=n;
}
function initialize(){
set_p(p);
Uf();
point_changed=point;
zf_changed=zf;
Sd_changed=Sd;
Af_changed=Af;
Bf_changed=Bf;
Cf_changed=Cf;
}
function w(){
}]]></Script>
<ROUTE fromNode="If_1" fromField="coord" toNode="Hf_1" toField="set_point"></ROUTE>
<ROUTE fromNode="If_1" fromField="coordIndex" toNode="Gf_1" toField="set_coordIndex"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1067.name = "yf";
ProtoInterface ProtoInterface1068 = createNode("ProtoInterface");
field field1069 = createNode("field");
field1069.name = "set_p";
field1069.accessType = "inputOnly";
field1069.type = "SFBool";
ProtoInterface1068.field = new MFNode();

ProtoInterface1068.field[0] = field1069;

field field1070 = createNode("field");
field1070.name = "w";
field1070.accessType = "inputOnly";
field1070.type = "SFBool";
ProtoInterface1068.field[1] = field1070;

field field1071 = createNode("field");
field1071.name = "point_changed";
field1071.accessType = "outputOnly";
field1071.type = "MFVec3f";
ProtoInterface1068.field[2] = field1071;

field field1072 = createNode("field");
field1072.name = "zf_changed";
field1072.accessType = "outputOnly";
field1072.type = "MFInt32";
ProtoInterface1068.field[3] = field1072;

field field1073 = createNode("field");
field1073.name = "Sd_changed";
field1073.accessType = "outputOnly";
field1073.type = "MFFloat";
ProtoInterface1068.field[4] = field1073;

field field1074 = createNode("field");
field1074.name = "Af_changed";
field1074.accessType = "outputOnly";
field1074.type = "MFVec2f";
ProtoInterface1068.field[5] = field1074;

field field1075 = createNode("field");
field1075.name = "Bf_changed";
field1075.accessType = "outputOnly";
field1075.type = "MFInt32";
ProtoInterface1068.field[6] = field1075;

field field1076 = createNode("field");
field1076.name = "Cf_changed";
field1076.accessType = "outputOnly";
field1076.type = "SFBool";
ProtoInterface1068.field[7] = field1076;

field field1077 = createNode("field");
field1077.name = "p_changed";
field1077.accessType = "outputOnly";
field1077.type = "SFBool";
ProtoInterface1068.field[8] = field1077;

field field1078 = createNode("field");
field1078.name = "diffuseColor";
field1078.accessType = "inputOutput";
field1078.type = "SFColor";
field1078.value = "0.3 0.5 1";
ProtoInterface1068.field[9] = field1078;

field field1079 = createNode("field");
field1079.name = "B";
field1079.accessType = "inputOutput";
field1079.type = "SFNode";
ProtoInterface1068.field[10] = field1079;

field field1080 = createNode("field");
field1080.name = "C";
field1080.accessType = "inputOutput";
field1080.type = "MFNode";
ProtoInterface1068.field[11] = field1080;

field field1081 = createNode("field");
field1081.name = "D";
field1081.accessType = "inputOutput";
field1081.type = "SFNode";
ProtoInterface1068.field[12] = field1081;

field field1082 = createNode("field");
field1082.name = "F";
field1082.accessType = "inputOutput";
field1082.type = "SFInt32";
field1082.value = "-1";
ProtoInterface1068.field[13] = field1082;

field field1083 = createNode("field");
field1083.name = "G";
field1083.accessType = "inputOutput";
field1083.type = "SFBool";
ProtoInterface1068.field[14] = field1083;

field field1084 = createNode("field");
field1084.name = "point";
field1084.accessType = "initializeOnly";
field1084.type = "MFVec3f";
ProtoInterface1068.field[15] = field1084;

field field1085 = createNode("field");
field1085.name = "zf";
field1085.accessType = "initializeOnly";
field1085.type = "MFInt32";
ProtoInterface1068.field[16] = field1085;

field field1086 = createNode("field");
field1086.name = "Sd";
field1086.accessType = "initializeOnly";
field1086.type = "MFFloat";
ProtoInterface1068.field[17] = field1086;

field field1087 = createNode("field");
field1087.name = "Af";
field1087.accessType = "initializeOnly";
field1087.type = "MFVec2f";
ProtoInterface1068.field[18] = field1087;

field field1088 = createNode("field");
field1088.name = "Bf";
field1088.accessType = "initializeOnly";
field1088.type = "MFInt32";
ProtoInterface1068.field[19] = field1088;

field field1089 = createNode("field");
field1089.name = "Cf";
field1089.accessType = "initializeOnly";
field1089.type = "SFBool";
ProtoInterface1068.field[20] = field1089;

field field1090 = createNode("field");
field1090.name = "p";
field1090.accessType = "initializeOnly";
field1090.type = "SFBool";
field1090.value = "true";
ProtoInterface1068.field[21] = field1090;

field field1091 = createNode("field");
field1091.name = "coord";
field1091.accessType = "initializeOnly";
field1091.type = "MFVec3f";
ProtoInterface1068.field[22] = field1091;

field field1092 = createNode("field");
field1092.name = "coordIndex";
field1092.accessType = "initializeOnly";
field1092.type = "MFInt32";
ProtoInterface1068.field[23] = field1092;

field field1093 = createNode("field");
field1093.name = "choice";
field1093.accessType = "initializeOnly";
field1093.type = "SFInt32";
ProtoInterface1068.field[24] = field1093;

field field1094 = createNode("field");
field1094.name = "Df";
field1094.accessType = "initializeOnly";
field1094.type = "SFInt32";
field1094.value = "8";
ProtoInterface1068.field[25] = field1094;

field field1095 = createNode("field");
field1095.name = "scale";
field1095.accessType = "initializeOnly";
field1095.type = "SFVec3f";
field1095.value = "1 1 1";
ProtoInterface1068.field[26] = field1095;

ProtoDeclare1067.protoInterface = ProtoInterface1068;

ProtoBody ProtoBody1096 = createNode("ProtoBody");
Switch Switch1097 = createNode("Switch");
Switch1097.DEF = "Ef_1";
Switch1097.whichChoice = -1;
IS IS1098 = createNode("IS");
connect connect1099 = createNode("connect");
connect1099.nodeField = "whichChoice";
connect1099.protoField = "choice";
IS1098.connect = new MFNode();

IS1098.connect[0] = connect1099;

Switch1097.iS = IS1098;

Shape Shape1100 = createNode("Shape");
Appearance Appearance1101 = createNode("Appearance");
Material Material1102 = createNode("Material");
Material1102.DEF = "Ff";
IS IS1103 = createNode("IS");
connect connect1104 = createNode("connect");
connect1104.nodeField = "emissiveColor";
connect1104.protoField = "diffuseColor";
IS1103.connect = new MFNode();

IS1103.connect[0] = connect1104;

Material1102.iS = IS1103;

Appearance1101.material = Material1102;

Shape1100.appearance = Appearance1101;

IndexedLineSet IndexedLineSet1105 = createNode("IndexedLineSet");
IndexedLineSet1105.DEF = "Gf_1";
IS IS1106 = createNode("IS");
connect connect1107 = createNode("connect");
connect1107.nodeField = "coordIndex";
connect1107.protoField = "coordIndex";
IS1106.connect = new MFNode();

IS1106.connect[0] = connect1107;

IndexedLineSet1105.iS = IS1106;

Coordinate Coordinate1108 = createNode("Coordinate");
Coordinate1108.DEF = "Hf_1";
IS IS1109 = createNode("IS");
connect connect1110 = createNode("connect");
connect1110.nodeField = "point";
connect1110.protoField = "coord";
IS1109.connect = new MFNode();

IS1109.connect[0] = connect1110;

Coordinate1108.iS = IS1109;

IndexedLineSet1105.coord = Coordinate1108;

Shape1100.geometry = IndexedLineSet1105;

Switch1097.children = new MFNode();

Switch1097.children[0] = Shape1100;

ProtoBody1096.children = new MFNode();

ProtoBody1096.children[0] = Switch1097;

Script Script1111 = createNode("Script");
Script1111.DEF = "If_1";
Script1111.directOutput = True;
field field1112 = createNode("field");
field1112.name = "set_p";
field1112.accessType = "inputOnly";
field1112.type = "SFBool";
Script1111.field = new MFNode();

Script1111.field[0] = field1112;

field field1113 = createNode("field");
field1113.name = "w";
field1113.accessType = "inputOnly";
field1113.type = "SFBool";
Script1111.field[1] = field1113;

field field1114 = createNode("field");
field1114.name = "p_changed";
field1114.accessType = "outputOnly";
field1114.type = "SFBool";
Script1111.field[2] = field1114;

field field1115 = createNode("field");
field1115.name = "point_changed";
field1115.accessType = "outputOnly";
field1115.type = "MFVec3f";
Script1111.field[3] = field1115;

field field1116 = createNode("field");
field1116.name = "zf_changed";
field1116.accessType = "outputOnly";
field1116.type = "MFInt32";
Script1111.field[4] = field1116;

field field1117 = createNode("field");
field1117.name = "Sd_changed";
field1117.accessType = "outputOnly";
field1117.type = "MFFloat";
Script1111.field[5] = field1117;

field field1118 = createNode("field");
field1118.name = "Af_changed";
field1118.accessType = "outputOnly";
field1118.type = "MFVec2f";
Script1111.field[6] = field1118;

field field1119 = createNode("field");
field1119.name = "Bf_changed";
field1119.accessType = "outputOnly";
field1119.type = "MFInt32";
Script1111.field[7] = field1119;

field field1120 = createNode("field");
field1120.name = "Cf_changed";
field1120.accessType = "outputOnly";
field1120.type = "SFBool";
Script1111.field[8] = field1120;

field field1121 = createNode("field");
field1121.name = "coord";
field1121.accessType = "outputOnly";
field1121.type = "MFVec3f";
Script1111.field[9] = field1121;

field field1122 = createNode("field");
field1122.name = "coordIndex";
field1122.accessType = "outputOnly";
field1122.type = "MFInt32";
Script1111.field[10] = field1122;

field field1123 = createNode("field");
field1123.name = "p";
field1123.accessType = "initializeOnly";
field1123.type = "SFBool";
Script1111.field[11] = field1123;

field field1124 = createNode("field");
field1124.name = "point";
field1124.accessType = "initializeOnly";
field1124.type = "MFVec3f";
Script1111.field[12] = field1124;

field field1125 = createNode("field");
field1125.name = "zf";
field1125.accessType = "initializeOnly";
field1125.type = "MFInt32";
Script1111.field[13] = field1125;

field field1126 = createNode("field");
field1126.name = "Sd";
field1126.accessType = "initializeOnly";
field1126.type = "MFFloat";
Script1111.field[14] = field1126;

field field1127 = createNode("field");
field1127.name = "Af";
field1127.accessType = "initializeOnly";
field1127.type = "MFVec2f";
Script1111.field[15] = field1127;

field field1128 = createNode("field");
field1128.name = "Bf";
field1128.accessType = "initializeOnly";
field1128.type = "MFInt32";
Script1111.field[16] = field1128;

field field1129 = createNode("field");
field1129.name = "Cf";
field1129.accessType = "initializeOnly";
field1129.type = "SFBool";
Script1111.field[17] = field1129;

field field1130 = createNode("field");
field1130.name = "Df";
field1130.accessType = "initializeOnly";
field1130.type = "SFInt32";
Script1111.field[18] = field1130;

field field1131 = createNode("field");
field1131.name = "ma";
field1131.accessType = "initializeOnly";
field1131.type = "SFNode";
Switch Switch1132 = createNode("Switch");
Switch1132.USE = "Ef_1";
field1131.children = new MFNode();

field1131.children[0] = Switch1132;

Script1111.field[19] = field1131;

IS IS1133 = createNode("IS");
connect connect1134 = createNode("connect");
connect1134.nodeField = "set_p";
connect1134.protoField = "set_p";
IS1133.connect = new MFNode();

IS1133.connect[0] = connect1134;

connect connect1135 = createNode("connect");
connect1135.nodeField = "w";
connect1135.protoField = "w";
IS1133.connect[1] = connect1135;

connect connect1136 = createNode("connect");
connect1136.nodeField = "p_changed";
connect1136.protoField = "p_changed";
IS1133.connect[2] = connect1136;

connect connect1137 = createNode("connect");
connect1137.nodeField = "point_changed";
connect1137.protoField = "point_changed";
IS1133.connect[3] = connect1137;

connect connect1138 = createNode("connect");
connect1138.nodeField = "zf_changed";
connect1138.protoField = "zf_changed";
IS1133.connect[4] = connect1138;

connect connect1139 = createNode("connect");
connect1139.nodeField = "Sd_changed";
connect1139.protoField = "Sd_changed";
IS1133.connect[5] = connect1139;

connect connect1140 = createNode("connect");
connect1140.nodeField = "Af_changed";
connect1140.protoField = "Af_changed";
IS1133.connect[6] = connect1140;

connect connect1141 = createNode("connect");
connect1141.nodeField = "Bf_changed";
connect1141.protoField = "Bf_changed";
IS1133.connect[7] = connect1141;

connect connect1142 = createNode("connect");
connect1142.nodeField = "Cf_changed";
connect1142.protoField = "Cf_changed";
IS1133.connect[8] = connect1142;

connect connect1143 = createNode("connect");
connect1143.nodeField = "p";
connect1143.protoField = "p";
IS1133.connect[9] = connect1143;

connect connect1144 = createNode("connect");
connect1144.nodeField = "point";
connect1144.protoField = "point";
IS1133.connect[10] = connect1144;

connect connect1145 = createNode("connect");
connect1145.nodeField = "zf";
connect1145.protoField = "zf";
IS1133.connect[11] = connect1145;

connect connect1146 = createNode("connect");
connect1146.nodeField = "Sd";
connect1146.protoField = "Sd";
IS1133.connect[12] = connect1146;

connect connect1147 = createNode("connect");
connect1147.nodeField = "Af";
connect1147.protoField = "Af";
IS1133.connect[13] = connect1147;

connect connect1148 = createNode("connect");
connect1148.nodeField = "Bf";
connect1148.protoField = "Bf";
IS1133.connect[14] = connect1148;

connect connect1149 = createNode("connect");
connect1149.nodeField = "Cf";
connect1149.protoField = "Cf";
IS1133.connect[15] = connect1149;

connect connect1150 = createNode("connect");
connect1150.nodeField = "Df";
connect1150.protoField = "Df";
IS1133.connect[16] = connect1150;

Script1111.iS = IS1133;


Script1111.setSourceCode(`javascript:\n"+
"function Jf(Kf,Lf,\n"+
"Mf,Nf,Of,Pf,Qf,Rf){\n"+
"Sf=coord.length;\n"+
"coord.length+=Df;\n"+
"for(J=0;J<Df;J++){\n"+
"var Tf=Kf.multiply(Of[J]);\n"+
"Tf=Tf.add(Lf.multiply(Pf[J]));\n"+
"Tf=Tf.add(Mf.multiply(Qf[J]));\n"+
"Tf=Tf.add(Nf.multiply(Rf[J]));\n"+
"coord[Sf+J]=Tf;\n"+
"}\n"+
"}\n"+
"function Uf(){\n"+
"if(point.length==0)return;\n"+
"var index=0;\n"+
"var Vf=new SFVec3f();\n"+
"var Kf=new SFVec3f();\n"+
"var Lf=new SFVec3f();\n"+
"var Mf=new SFVec3f();\n"+
"var Nf=new SFVec3f();\n"+
"var Wf=new SFVec3f();\n"+
"var Xf=new SFVec3f();\n"+
"var Yf=new SFVec3f();\n"+
"var Zf=new SFVec3f();\n"+
"var ag=FALSE;\n"+
"var bg=FALSE;\n"+
"var cg=FALSE;\n"+
"var dg=FALSE;\n"+
"var eg=FALSE;\n"+
"var fg=FALSE;\n"+
"if(zf[index]==1){\n"+
"Vf=point[index];\n"+
"ag=TRUE;\n"+
"Xf=point[index];\n"+
"cg=TRUE;\n"+
"index++;\n"+
"}\n"+
"if(zf[index]==0){\n"+
"Kf=point[index];\n"+
"Yf=point[index];\n"+
"index++;\n"+
"}\n"+
"if(zf[index]==2){\n"+
"Lf=point[index];\n"+
"dg=TRUE;\n"+
"Zf=point[index];\n"+
"fg=TRUE;\n"+
"index++;\n"+
"}\n"+
"var Of=new MFFloat();\n"+
"var Pf=new MFFloat();\n"+
"var Qf=new MFFloat();\n"+
"var Rf=new MFFloat();\n"+
"Of.length=Pf.length=Qf.length=Rf.length=Df;\n"+
"Of[0]=1;\n"+
"Pf[0]=Qf[0]=Rf[0]=0;\n"+
"for(J=1;J<Df;J++){\n"+
"gg=(J*1.0)/Df;\n"+
"Of[J]=(1-gg)*(1-gg)*(1-gg);\n"+
"Pf[J]=3*gg*(1-gg)*(1-gg);\n"+
"Qf[J]=3*gg*gg*(1-gg);\n"+
"Rf[J]=gg*gg*gg;\n"+
"}\n"+
"while(index<zf.length){\n"+
"bg=FALSE;\n"+
"eg=FALSE;\n"+
"if(zf[index]==1){\n"+
"Mf=point[index];\n"+
"bg=TRUE;\n"+
"index++;\n"+
"}\n"+
"if((index<zf.length)&&(zf[index]==0)){\n"+
"Nf=point[index];\n"+
"index++;\n"+
"}\n"+
"if((index<zf.length)&&(zf[index]==2)){\n"+
"Wf=point[index];\n"+
"eg=TRUE;\n"+
"index++;\n"+
"}\n"+
"if(dg&&bg){\n"+
"Jf(Kf,Lf,\n"+
"Mf,Nf,\n"+
"Of,Pf,Qf,Rf);\n"+
"}else if(dg){\n"+
"Jf(Kf,Lf,\n"+
"Nf,Nf,\n"+
"Of,Pf,Qf,Rf);\n"+
"}else if(bg){\n"+
"Jf(Kf,Kf,\n"+
"Mf,Nf,\n"+
"Of,Pf,Qf,Rf);\n"+
"}else{\n"+
"coord[coord.length]=Kf;\n"+
"}\n"+
"Vf=Mf;\n"+
"Kf=Nf;\n"+
"Lf=Wf;\n"+
"ag=bg;\n"+
"dg=eg;\n"+
"}\n"+
"if(Cf){\n"+
"if(eg&&cg){\n"+
"Jf(Nf,Wf,\n"+
"Xf,Yf,\n"+
"Of,Pf,Qf,Rf);\n"+
"}else if(eg){\n"+
"Jf(Nf,Wf,\n"+
"Yf,Yf,\n"+
"Of,Pf,Qf,Rf);\n"+
"}else if(cg){\n"+
"Jf(Nf,Nf,\n"+
"Xf,Yf,\n"+
"Of,Pf,Qf,Rf);\n"+
"}else{\n"+
"coord[coord.length]=Nf;\n"+
"}\n"+
"coord[coord.length]=Yf;\n"+
"}else{\n"+
"coord[coord.length]=Nf;\n"+
"}\n"+
"coordIndex.length=coord.length+1;\n"+
"for(J=0;J<coord.length;J++){\n"+
"coordIndex[J]=J;\n"+
"}\n"+
"coordIndex[coordIndex.length-1]=-1;\n"+
"}\n"+
"function set_p(n){\n"+
"if(n==TRUE){\n"+
"ma.whichChoice=0;\n"+
"}else{\n"+
"ma.whichChoice=-1;\n"+
"}\n"+
"p=n;\n"+
"p_changed=n;\n"+
"}\n"+
"function initialize(){\n"+
"set_p(p);\n"+
"Uf();\n"+
"point_changed=point;\n"+
"zf_changed=zf;\n"+
"Sd_changed=Sd;\n"+
"Af_changed=Af;\n"+
"Bf_changed=Bf;\n"+
"Cf_changed=Cf;\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody1096.children[1] = Script1111;

ROUTE ROUTE1151 = createNode("ROUTE");
ROUTE1151.fromNode = "If_1";
ROUTE1151.fromField = "coord";
ROUTE1151.toNode = "Hf_1";
ROUTE1151.toField = "set_point";
ProtoBody1096.children[2] = ROUTE1151;

ROUTE ROUTE1152 = createNode("ROUTE");
ROUTE1152.fromNode = "If_1";
ROUTE1152.fromField = "coordIndex";
ROUTE1152.toNode = "Gf_1";
ROUTE1152.toField = "set_coordIndex";
ProtoBody1096.children[3] = ROUTE1152;

ProtoDeclare1067.protoBody = ProtoBody1096;

children[17] = ProtoDeclare1067;

ProtoDeclare ProtoDeclare1153 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="hg" ><ProtoInterface><field name="set_position" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_orientation" accessType="inputOnly" type="SFRotation"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="offset" accessType="initializeOnly" type="SFVec3f"></field>
<field name="ig" accessType="initializeOnly" type="SFRotation"></field>
<field name="jg" accessType="initializeOnly" type="SFFloat"></field>
<field name="center" accessType="initializeOnly" type="SFVec3f"></field>
<field name="T" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="kg" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><Script directOutput="true"><field name="set_position" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_orientation" accessType="inputOnly" type="SFRotation"></field>
<field name="U" accessType="initializeOnly" type="SFNode"></field>
<field name="offset" accessType="initializeOnly" type="SFVec3f"></field>
<field name="ig" accessType="initializeOnly" type="SFRotation"></field>
<field name="kg" accessType="initializeOnly" type="SFBool"></field>
<field name="lg" accessType="initializeOnly" type="SFVec3f"></field>
<field name="ff" accessType="initializeOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_position" protoField="set_position"></connect>
<connect nodeField="set_orientation" protoField="set_orientation"></connect>
<connect nodeField="U" protoField="U"></connect>
<connect nodeField="offset" protoField="offset"></connect>
<connect nodeField="ig" protoField="ig"></connect>
<connect nodeField="kg" protoField="kg"></connect>
</IS>
<![CDATA[javascript:
function Re(U,Se){
var Te=new VrmlMatrix();
for(var J=U.C.length-1;J>=0;J--){
Te.setTransform(U.C[J].translation,
U.C[J].rotation,
U.C[J].scale,
U.C[J].scaleOrientation,
U.C[J].center);
Se.multRight(Te);
}
}
function Ue(Ve,Se){
var We=Ve;
while(We.G==FALSE){
Re(We,Se);
We=We.B;
}
}
function set_orientation(mg)
{
if(!kg){
var ng=new VrmlMatrix();
Ue(U.B,ng);
var og=ng.inverse();
var pg=og.multVecMatrix(lg);
var qg=new SFVec3f();
var rg=new SFRotation();
var sg=new SFVec3f();
og.getTransform(qg,rg,sg);
var tg=mg.multiply(rg);
var ug=ig.multiply(tg);
var vg=ug.multVec(offset);
U.C[0].translation=pg.add(vg);
U.C[0].rotation=ug;
U.C[0].center=ff;
}
}
function set_position(wg)
{
if(kg){
var ng=new VrmlMatrix();
Ue(U.B,ng);
var og=ng.inverse();
var pg=og.multVecMatrix(wg);
xg=new VrmlMatrix();
xg.setTransform(ff,
U.C[0].rotation,
U.C[0].scale,
U.C[0].scaleOrientation,
U.C[0].center);
vg=xg.multVecMatrix(offset);
U.C[0].translation=pg.add(vg);
U.C[0].center=ff;
}else{
lg=wg;
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1153.name = "hg";
ProtoInterface ProtoInterface1154 = createNode("ProtoInterface");
field field1155 = createNode("field");
field1155.name = "set_position";
field1155.accessType = "inputOnly";
field1155.type = "SFVec3f";
ProtoInterface1154.field = new MFNode();

ProtoInterface1154.field[0] = field1155;

field field1156 = createNode("field");
field1156.name = "set_orientation";
field1156.accessType = "inputOnly";
field1156.type = "SFRotation";
ProtoInterface1154.field[1] = field1156;

field field1157 = createNode("field");
field1157.name = "U";
field1157.accessType = "initializeOnly";
field1157.type = "SFNode";
ProtoInterface1154.field[2] = field1157;

field field1158 = createNode("field");
field1158.name = "offset";
field1158.accessType = "initializeOnly";
field1158.type = "SFVec3f";
ProtoInterface1154.field[3] = field1158;

field field1159 = createNode("field");
field1159.name = "ig";
field1159.accessType = "initializeOnly";
field1159.type = "SFRotation";
ProtoInterface1154.field[4] = field1159;

field field1160 = createNode("field");
field1160.name = "jg";
field1160.accessType = "initializeOnly";
field1160.type = "SFFloat";
ProtoInterface1154.field[5] = field1160;

field field1161 = createNode("field");
field1161.name = "center";
field1161.accessType = "initializeOnly";
field1161.type = "SFVec3f";
ProtoInterface1154.field[6] = field1161;

field field1162 = createNode("field");
field1162.name = "T";
field1162.accessType = "initializeOnly";
field1162.type = "SFBool";
field1162.value = "true";
ProtoInterface1154.field[7] = field1162;

field field1163 = createNode("field");
field1163.name = "kg";
field1163.accessType = "initializeOnly";
field1163.type = "SFBool";
field1163.value = "true";
ProtoInterface1154.field[8] = field1163;

ProtoDeclare1153.protoInterface = ProtoInterface1154;

ProtoBody ProtoBody1164 = createNode("ProtoBody");
Script Script1165 = createNode("Script");
Script1165.directOutput = True;
field field1166 = createNode("field");
field1166.name = "set_position";
field1166.accessType = "inputOnly";
field1166.type = "SFVec3f";
Script1165.field = new MFNode();

Script1165.field[0] = field1166;

field field1167 = createNode("field");
field1167.name = "set_orientation";
field1167.accessType = "inputOnly";
field1167.type = "SFRotation";
Script1165.field[1] = field1167;

field field1168 = createNode("field");
field1168.name = "U";
field1168.accessType = "initializeOnly";
field1168.type = "SFNode";
Script1165.field[2] = field1168;

field field1169 = createNode("field");
field1169.name = "offset";
field1169.accessType = "initializeOnly";
field1169.type = "SFVec3f";
Script1165.field[3] = field1169;

field field1170 = createNode("field");
field1170.name = "ig";
field1170.accessType = "initializeOnly";
field1170.type = "SFRotation";
Script1165.field[4] = field1170;

field field1171 = createNode("field");
field1171.name = "kg";
field1171.accessType = "initializeOnly";
field1171.type = "SFBool";
Script1165.field[5] = field1171;

field field1172 = createNode("field");
field1172.name = "lg";
field1172.accessType = "initializeOnly";
field1172.type = "SFVec3f";
Script1165.field[6] = field1172;

field field1173 = createNode("field");
field1173.name = "ff";
field1173.accessType = "initializeOnly";
field1173.type = "SFVec3f";
Script1165.field[7] = field1173;

IS IS1174 = createNode("IS");
connect connect1175 = createNode("connect");
connect1175.nodeField = "set_position";
connect1175.protoField = "set_position";
IS1174.connect = new MFNode();

IS1174.connect[0] = connect1175;

connect connect1176 = createNode("connect");
connect1176.nodeField = "set_orientation";
connect1176.protoField = "set_orientation";
IS1174.connect[1] = connect1176;

connect connect1177 = createNode("connect");
connect1177.nodeField = "U";
connect1177.protoField = "U";
IS1174.connect[2] = connect1177;

connect connect1178 = createNode("connect");
connect1178.nodeField = "offset";
connect1178.protoField = "offset";
IS1174.connect[3] = connect1178;

connect connect1179 = createNode("connect");
connect1179.nodeField = "ig";
connect1179.protoField = "ig";
IS1174.connect[4] = connect1179;

connect connect1180 = createNode("connect");
connect1180.nodeField = "kg";
connect1180.protoField = "kg";
IS1174.connect[5] = connect1180;

Script1165.iS = IS1174;


Script1165.setSourceCode(`javascript:\n"+
"function Re(U,Se){\n"+
"var Te=new VrmlMatrix();\n"+
"for(var J=U.C.length-1;J>=0;J--){\n"+
"Te.setTransform(U.C[J].translation,\n"+
"U.C[J].rotation,\n"+
"U.C[J].scale,\n"+
"U.C[J].scaleOrientation,\n"+
"U.C[J].center);\n"+
"Se.multRight(Te);\n"+
"}\n"+
"}\n"+
"function Ue(Ve,Se){\n"+
"var We=Ve;\n"+
"while(We.G==FALSE){\n"+
"Re(We,Se);\n"+
"We=We.B;\n"+
"}\n"+
"}\n"+
"function set_orientation(mg)\n"+
"{\n"+
"if(!kg){\n"+
"var ng=new VrmlMatrix();\n"+
"Ue(U.B,ng);\n"+
"var og=ng.inverse();\n"+
"var pg=og.multVecMatrix(lg);\n"+
"var qg=new SFVec3f();\n"+
"var rg=new SFRotation();\n"+
"var sg=new SFVec3f();\n"+
"og.getTransform(qg,rg,sg);\n"+
"var tg=mg.multiply(rg);\n"+
"var ug=ig.multiply(tg);\n"+
"var vg=ug.multVec(offset);\n"+
"U.C[0].translation=pg.add(vg);\n"+
"U.C[0].rotation=ug;\n"+
"U.C[0].center=ff;\n"+
"}\n"+
"}\n"+
"function set_position(wg)\n"+
"{\n"+
"if(kg){\n"+
"var ng=new VrmlMatrix();\n"+
"Ue(U.B,ng);\n"+
"var og=ng.inverse();\n"+
"var pg=og.multVecMatrix(wg);\n"+
"xg=new VrmlMatrix();\n"+
"xg.setTransform(ff,\n"+
"U.C[0].rotation,\n"+
"U.C[0].scale,\n"+
"U.C[0].scaleOrientation,\n"+
"U.C[0].center);\n"+
"vg=xg.multVecMatrix(offset);\n"+
"U.C[0].translation=pg.add(vg);\n"+
"U.C[0].center=ff;\n"+
"}else{\n"+
"lg=wg;\n"+
"}\n"+
"}`)
ProtoBody1164.children = new MFNode();

ProtoBody1164.children[0] = Script1165;

ProtoDeclare1153.protoBody = ProtoBody1164;

children[18] = ProtoDeclare1153;

ProtoDeclare ProtoDeclare1181 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="yg" ><ProtoInterface><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="zg" accessType="outputOnly" type="SFVec3f"></field>
<field name="Ag" accessType="outputOnly" type="SFRotation"></field>
<field name="Bg" accessType="outputOnly" type="SFVec3f"></field>
<field name="Cg" accessType="outputOnly" type="SFRotation"></field>
<field name="Dg" accessType="outputOnly" type="SFTime"></field>
<field name="Eg" accessType="initializeOnly" type="SFNode"></field>
<field name="Fg" accessType="initializeOnly" type="SFBool"></field>
<field name="Gg" accessType="initializeOnly" type="SFFloat"></field>
<field name="Hg" accessType="initializeOnly" type="SFVec3f" value="0 0 1"></field>
<field name="reverse" accessType="initializeOnly" type="SFInt32"></field>
<field name="Ig" accessType="initializeOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="I_3" directOutput="true"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="zg" accessType="outputOnly" type="SFVec3f"></field>
<field name="Ag" accessType="outputOnly" type="SFRotation"></field>
<field name="Bg" accessType="outputOnly" type="SFVec3f"></field>
<field name="Cg" accessType="outputOnly" type="SFRotation"></field>
<field name="Dg" accessType="outputOnly" type="SFTime"></field>
<field name="Jg" accessType="initializeOnly" type="SFNode"></field>
<field name="Fg" accessType="initializeOnly" type="SFBool"></field>
<field name="Gg" accessType="initializeOnly" type="SFFloat"></field>
<field name="Hg" accessType="initializeOnly" type="SFVec3f"></field>
<field name="reverse" accessType="initializeOnly" type="SFInt32"></field>
<field name="Ig" accessType="initializeOnly" type="SFBool"></field>
<field name="Kg" accessType="initializeOnly" type="SFBool"></field>
<field name="Lg" accessType="initializeOnly" type="SFFloat"></field>
<field name="Qa" accessType="initializeOnly" type="SFFloat"></field>
<IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="R" protoField="R"></connect>
<connect nodeField="zg" protoField="zg"></connect>
<connect nodeField="Ag" protoField="Ag"></connect>
<connect nodeField="Bg" protoField="Bg"></connect>
<connect nodeField="Cg" protoField="Cg"></connect>
<connect nodeField="Dg" protoField="Dg"></connect>
<connect nodeField="Jg" protoField="Eg"></connect>
<connect nodeField="Fg" protoField="Fg"></connect>
<connect nodeField="Gg" protoField="Gg"></connect>
<connect nodeField="Hg" protoField="Hg"></connect>
<connect nodeField="reverse" protoField="reverse"></connect>
<connect nodeField="Ig" protoField="Ig"></connect>
</IS>
<![CDATA[javascript:
function Re(U,Se){
var Te=new VrmlMatrix();
for(var J=U.C.length-1;J>=0;J--){
Te.setTransform(U.C[J].translation,
U.C[J].rotation,
U.C[J].scale,
U.C[J].scaleOrientation,
U.C[J].center);
Se.multRight(Te);
}
}
function Ue(Ve,Se){
var We=Ve;
while(We.G==FALSE){
Re(We,Se);
We=We.B;
}
}
function Mg(Se){
Re(Jg,Se);
Ue(Jg.B,Se);
}
function R(n,Za)
{
Dg=Za;
var J=0;
var Ng=0;
while((J<Jg.zf_changed.length)&&(Ng<2)){
if(Jg.zf_changed[J]==0){
Ng=Ng+1;
}
J++;
}
if(Ng<2){
Kg=TRUE;
}
else{
Kg=FALSE;
}
if(Ig==FALSE){
Lg=0;
}else{
Lg=Qa;
}
}
function Og(Pg,Za)
{
Qg=new MFVec3f();
Qg[0]=Pg[0].add((Pg[1].add(Pg[0].negate())).multiply(Za));
Qg[1]=Pg[1].add((Pg[2].add(Pg[1].negate())).multiply(Za));
Qg[2]=Pg[2].add((Pg[3].add(Pg[2].negate())).multiply(Za));
Rg=new MFVec3f();
Rg[0]=Qg[0].add((Qg[1].add(Qg[0].negate())).multiply(Za));
Rg[1]=Qg[1].add((Qg[2].add(Qg[1].negate())).multiply(Za));
Sg=Rg[0].add((Rg[1].add(Rg[0].negate())).multiply(Za));
return Sg;
}
function Tg(index)
{
Pg=new MFVec3f();
Pg[0]=Jg.point_changed[index];
index=(index+1)%Jg.zf_changed.length;
if(Jg.zf_changed[index]==2)
{
Pg[1]=Jg.point_changed[index];
index=(index+1)%Jg.zf_changed.length;
}
else if(Jg.zf_changed[index]==0)
{
Pg[3]=Jg.point_changed[index];
Pg[1]=(Pg[3].subtract(Pg[0])).multiply(1.0/3.0).add(Pg[0]);
Pg[2]=(Pg[3].subtract(Pg[0])).multiply(2.0/3.0).add(Pg[0]);
return Pg;
}
else
{
Pg[1]=Pg[0];
}
Pg[2]=Jg.point_changed[index];
if(Jg.zf_changed[index]==1)
{
index=(index+1)%Jg.zf_changed.length;
}
Pg[3]=Jg.point_changed[index];
return Pg;
}
function Ug(n)
{
var Vg=0;
for(J=0;J<Jg.Sd_changed.length-1;J++){
if((n>=Jg.Sd_changed[J])&&
(n<=Jg.Sd_changed[J+1])){
Vg=J;
break;
}
}
return Vg;
}
function Wg(Za,Vg)
{
Sd=(Za-Jg.Sd_changed[Vg])/(Jg.Sd_changed[Vg+1]-Jg.Sd_changed[Vg]);
return Sd;
}
function Xg(Vg)
{
Yg=0;
Zg=-1;
for(J=0;J<Jg.zf_changed.length;J++){
if(Jg.zf_changed[J]==0){
if(Yg==Vg){
Zg=J;
break;
}
Yg++;
}
}
return Zg;
}
function ah(index,Za)
{
Pg=Tg(index);
bh=new MFVec3f();
bh[0]=Pg[1].add(Pg[0].negate());
bh[1]=Pg[2].add(Pg[1].negate());
bh[2]=Pg[3].add(Pg[2].negate());
ch=new MFVec3f();
ch[0]=bh[0].add((bh[1].add(bh[0].negate())).multiply(Za));
ch[1]=bh[1].add((bh[2].add(bh[1].negate())).multiply(Za));
dh=ch[0].add((ch[1].add(ch[0].negate())).multiply(Za));
eh=dh.length();
if(eh<1.e-5)
{
fh=Og(Pg,Za);
ba=(Za>0.5)?-0.01:0.01;
Yg=0;
while((eh<1.e-5)&&(Yg<10))
{
Yg=Yg+1;
Za=Za+ba;
gh=Og(Pg,Za);
dh=gh.subtract(fh);
eh=dh.length();
}
if(Za>0.5){dh=dh.negate();}
}
return dh;
}
function hh(index,Za,ih)
{
ih=ih+Gg;
if(ih>1.0)
{
if(Jg.Cf_changed==TRUE)
{
ih=ih-1.0;
}
else
{
ih=1.0;
if(Za>=1.0){
return ah(index,Za);
}
}
}
Vg=Ug(ih);
jh=Wg(ih,Vg);
kh=Xg(Vg);
Pg=Tg(index);
fh=Og(Pg,Za);
if(kh!=index)
{
Pg=Tg(kh);
}
gh=Og(Pg,jh);
dh=gh.subtract(fh);
if(dh.length()<1.e-4)
{
return ah(index,Za);
}
return dh;
}
function lh(index,Za,ih)
{
if(Kg){
return new SFVec3f(0,0,0);
}
if(Gg>0.0)
{
return hh(index,Za,ih);
}
else
{
return ah(index,Za);
}
}
function mh()
{
return new SFVec3f(1.0,0.0,0.0);
}
function nh(oh,ph)
{
if(Kg){
return 0.0;
}
if((oh.length()<0.0001)||(ph.length()<0.0001)){
return 0.0;
}
if(Hg.y>0.5){ph.y=0.0;}
oh=oh.normalize();
ph=ph.normalize();
dot=oh.dot(ph);
if(dot<-1.0){dot=-1.0;}
else if(dot>1.0){dot=1.0;}
angle=Math.acos(dot);
qh=oh.cross(ph);
if(qh.dot(Hg)<0.0)
{angle=-angle;}
return angle;
}
function set_fraction(n){
n+=Lg;
if(n>1){
n-=1;
}
Qa=n;
if(reverse!=0){
n=1.0-n;
}
var rh=new VrmlMatrix();
Mg(rh);
sh=new SFVec3f;
th=new SFRotation;
uh=new SFVec3f;
rh.getTransform(sh,th,uh);
if(Kg)
{
var J=0;
while(J<Jg.point_changed.length){
if(Jg.zf_changed[J]==0){
zg=Jg.point_changed[J];
Bg=rh.multVecMatrix(zg);
if(Fg)
{
Ag=new SFRotation(0.0,0.0,0.0,1.0);
Cg=Ag.multiply(th);
}
return;
}
J=J+1;
}
return;
}
if(n<=0.0){
vh=-1;
if(Jg.zf_changed[0]==0){
vh=0;
}else if(Jg.zf_changed[0]==1){
vh=1;
}
zg=Jg.point_changed[vh];
Bg=rh.multVecMatrix(zg);
if(Fg)
{
wh=lh(vh,0.0,n);
xh=mh();
angle=nh(xh,wh);
Ag=new SFRotation(Hg,angle);
Cg=Ag.multiply(th);
}
return;
}
if(n>=1.0){
if(Jg.Cf_changed==FALSE){
yh=Jg.point_changed.length-1;
if(Jg.zf_changed[yh]==0){
zg=Jg.point_changed[yh];
}else if(Jg.zf_changed[yh]==2){
zg=Jg.point_changed[yh-1];
}
}else{
if(Jg.zf_changed[0]==0){
zg=Jg.point_changed[0];
}else if(Jg.zf_changed[0]==1){
zg=Jg.point_changed[1];
}
}
Bg=rh.multVecMatrix(zg);
if(Fg)
{
J=Jg.point_changed.length;
Ng=1;
if(Jg.Cf_changed==FALSE){
Ng=Ng+1;
}
Yg=0;
while((J>=0)&&(Yg<Ng)){
J--;
if(Jg.zf_changed[J]==0){
Yg=Yg+1;
}
}
if(J>=0)
{
wh=lh(J,1.0,n);
xh=mh();
angle=nh(xh,wh);
Ag=new SFRotation(Hg,angle);
Cg=Ag.multiply(th);
}
else
{
Ag=new SFRotation(0.0,0.0,0.0,1.0);
Cg=Ag.multiply(th);
}
}
return;
}
Vg=Ug(n);
Sd=Wg(n,Vg);
zh=-1;
Zg=Xg(Vg);
if(Jg.zf_changed[(Zg+1)%Jg.zf_changed.length]==0){
zh=(Zg+1)%Jg.zf_changed.length;
Ah=Jg.point_changed[Zg].multiply(1-Sd);
Bh=Jg.point_changed[zh].multiply(Sd);
zg=Ah.add(Bh);
Bg=rh.multVecMatrix(zg);
if(Fg)
{
wh=lh(Zg,Sd,n);
xh=mh();
angle=nh(xh,wh);
Ag=new SFRotation(Hg,angle);
Cg=Ag.multiply(th);
}
return;
}
if(Jg.zf_changed[(Zg+2)%Jg.zf_changed.length]==0){
zh=(Zg+2)%Jg.zf_changed.length;
}else{
zh=(Zg+3)%Jg.zf_changed.length;
}
index=Jg.Bf_changed[Vg];
Ch=Jg.Af_changed[index][0];
while(Ch<=Jg.Af_changed[index][0]){
Dh=Jg.Af_changed[index+1][0];
if((Sd>=Ch)&&(Sd<=Dh)){
Eh=(Sd-Ch)/(Dh-Ch);
gg=Jg.Af_changed[index][1]*(1.0-Eh)+
Jg.Af_changed[index+1][1]*Eh;
break;
}
index++;
Ch=Dh;
}
Of=(1-gg)*(1-gg)*(1-gg);
Pf=3*(1-gg)*(1-gg)*gg;
Qf=3*(1-gg)*gg*gg;
Rf=gg*gg*gg;
Fh=(Zg+1)%Jg.point_changed.length;
if(((Zg+3)%Jg.point_changed.length)==zh){
Gh=Jg.point_changed[Zg].multiply(Of);
Ah=Jg.point_changed[Fh].multiply(Pf);
Bh=Jg.point_changed[zh-1].multiply(Qf);
Hh=Jg.point_changed[zh].multiply(Rf);
}else if(Jg.zf_changed[Fh]==2){
Gh=Jg.point_changed[Zg].multiply(Of);
Ah=Jg.point_changed[Fh].multiply(Pf);
Bh=Jg.point_changed[zh].multiply(Qf);
Hh=Jg.point_changed[zh].multiply(Rf);
}else if(Jg.zf_changed[Fh]==1){
Gh=Jg.point_changed[Zg].multiply(Of);
Ah=Jg.point_changed[Zg].multiply(Pf);
Bh=Jg.point_changed[zh-1].multiply(Qf);
Hh=Jg.point_changed[zh].multiply(Rf);
}
zg=Gh.add(Ah).add(Bh).add(Hh);
Bg=rh.multVecMatrix(zg);
if(Fg)
{
wh=lh(Zg,gg,n);
xh=mh();
Ag=new SFRotation(Hg,nh(xh,wh));
Cg=Ag.multiply(th);
}
}
function initialize(){
Jg.w=TRUE;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1181.name = "yg";
ProtoInterface ProtoInterface1182 = createNode("ProtoInterface");
field field1183 = createNode("field");
field1183.name = "set_fraction";
field1183.accessType = "inputOnly";
field1183.type = "SFFloat";
ProtoInterface1182.field = new MFNode();

ProtoInterface1182.field[0] = field1183;

field field1184 = createNode("field");
field1184.name = "R";
field1184.accessType = "inputOnly";
field1184.type = "SFTime";
ProtoInterface1182.field[1] = field1184;

field field1185 = createNode("field");
field1185.name = "zg";
field1185.accessType = "outputOnly";
field1185.type = "SFVec3f";
ProtoInterface1182.field[2] = field1185;

field field1186 = createNode("field");
field1186.name = "Ag";
field1186.accessType = "outputOnly";
field1186.type = "SFRotation";
ProtoInterface1182.field[3] = field1186;

field field1187 = createNode("field");
field1187.name = "Bg";
field1187.accessType = "outputOnly";
field1187.type = "SFVec3f";
ProtoInterface1182.field[4] = field1187;

field field1188 = createNode("field");
field1188.name = "Cg";
field1188.accessType = "outputOnly";
field1188.type = "SFRotation";
ProtoInterface1182.field[5] = field1188;

field field1189 = createNode("field");
field1189.name = "Dg";
field1189.accessType = "outputOnly";
field1189.type = "SFTime";
ProtoInterface1182.field[6] = field1189;

field field1190 = createNode("field");
field1190.name = "Eg";
field1190.accessType = "initializeOnly";
field1190.type = "SFNode";
ProtoInterface1182.field[7] = field1190;

field field1191 = createNode("field");
field1191.name = "Fg";
field1191.accessType = "initializeOnly";
field1191.type = "SFBool";
ProtoInterface1182.field[8] = field1191;

field field1192 = createNode("field");
field1192.name = "Gg";
field1192.accessType = "initializeOnly";
field1192.type = "SFFloat";
ProtoInterface1182.field[9] = field1192;

field field1193 = createNode("field");
field1193.name = "Hg";
field1193.accessType = "initializeOnly";
field1193.type = "SFVec3f";
field1193.value = "0 0 1";
ProtoInterface1182.field[10] = field1193;

field field1194 = createNode("field");
field1194.name = "reverse";
field1194.accessType = "initializeOnly";
field1194.type = "SFInt32";
ProtoInterface1182.field[11] = field1194;

field field1195 = createNode("field");
field1195.name = "Ig";
field1195.accessType = "initializeOnly";
field1195.type = "SFBool";
ProtoInterface1182.field[12] = field1195;

ProtoDeclare1181.protoInterface = ProtoInterface1182;

ProtoBody ProtoBody1196 = createNode("ProtoBody");
Script Script1197 = createNode("Script");
Script1197.DEF = "I_3";
Script1197.directOutput = True;
field field1198 = createNode("field");
field1198.name = "set_fraction";
field1198.accessType = "inputOnly";
field1198.type = "SFFloat";
Script1197.field = new MFNode();

Script1197.field[0] = field1198;

field field1199 = createNode("field");
field1199.name = "R";
field1199.accessType = "inputOnly";
field1199.type = "SFTime";
Script1197.field[1] = field1199;

field field1200 = createNode("field");
field1200.name = "zg";
field1200.accessType = "outputOnly";
field1200.type = "SFVec3f";
Script1197.field[2] = field1200;

field field1201 = createNode("field");
field1201.name = "Ag";
field1201.accessType = "outputOnly";
field1201.type = "SFRotation";
Script1197.field[3] = field1201;

field field1202 = createNode("field");
field1202.name = "Bg";
field1202.accessType = "outputOnly";
field1202.type = "SFVec3f";
Script1197.field[4] = field1202;

field field1203 = createNode("field");
field1203.name = "Cg";
field1203.accessType = "outputOnly";
field1203.type = "SFRotation";
Script1197.field[5] = field1203;

field field1204 = createNode("field");
field1204.name = "Dg";
field1204.accessType = "outputOnly";
field1204.type = "SFTime";
Script1197.field[6] = field1204;

field field1205 = createNode("field");
field1205.name = "Jg";
field1205.accessType = "initializeOnly";
field1205.type = "SFNode";
Script1197.field[7] = field1205;

field field1206 = createNode("field");
field1206.name = "Fg";
field1206.accessType = "initializeOnly";
field1206.type = "SFBool";
Script1197.field[8] = field1206;

field field1207 = createNode("field");
field1207.name = "Gg";
field1207.accessType = "initializeOnly";
field1207.type = "SFFloat";
Script1197.field[9] = field1207;

field field1208 = createNode("field");
field1208.name = "Hg";
field1208.accessType = "initializeOnly";
field1208.type = "SFVec3f";
Script1197.field[10] = field1208;

field field1209 = createNode("field");
field1209.name = "reverse";
field1209.accessType = "initializeOnly";
field1209.type = "SFInt32";
Script1197.field[11] = field1209;

field field1210 = createNode("field");
field1210.name = "Ig";
field1210.accessType = "initializeOnly";
field1210.type = "SFBool";
Script1197.field[12] = field1210;

field field1211 = createNode("field");
field1211.name = "Kg";
field1211.accessType = "initializeOnly";
field1211.type = "SFBool";
Script1197.field[13] = field1211;

field field1212 = createNode("field");
field1212.name = "Lg";
field1212.accessType = "initializeOnly";
field1212.type = "SFFloat";
Script1197.field[14] = field1212;

field field1213 = createNode("field");
field1213.name = "Qa";
field1213.accessType = "initializeOnly";
field1213.type = "SFFloat";
Script1197.field[15] = field1213;

IS IS1214 = createNode("IS");
connect connect1215 = createNode("connect");
connect1215.nodeField = "set_fraction";
connect1215.protoField = "set_fraction";
IS1214.connect = new MFNode();

IS1214.connect[0] = connect1215;

connect connect1216 = createNode("connect");
connect1216.nodeField = "R";
connect1216.protoField = "R";
IS1214.connect[1] = connect1216;

connect connect1217 = createNode("connect");
connect1217.nodeField = "zg";
connect1217.protoField = "zg";
IS1214.connect[2] = connect1217;

connect connect1218 = createNode("connect");
connect1218.nodeField = "Ag";
connect1218.protoField = "Ag";
IS1214.connect[3] = connect1218;

connect connect1219 = createNode("connect");
connect1219.nodeField = "Bg";
connect1219.protoField = "Bg";
IS1214.connect[4] = connect1219;

connect connect1220 = createNode("connect");
connect1220.nodeField = "Cg";
connect1220.protoField = "Cg";
IS1214.connect[5] = connect1220;

connect connect1221 = createNode("connect");
connect1221.nodeField = "Dg";
connect1221.protoField = "Dg";
IS1214.connect[6] = connect1221;

connect connect1222 = createNode("connect");
connect1222.nodeField = "Jg";
connect1222.protoField = "Eg";
IS1214.connect[7] = connect1222;

connect connect1223 = createNode("connect");
connect1223.nodeField = "Fg";
connect1223.protoField = "Fg";
IS1214.connect[8] = connect1223;

connect connect1224 = createNode("connect");
connect1224.nodeField = "Gg";
connect1224.protoField = "Gg";
IS1214.connect[9] = connect1224;

connect connect1225 = createNode("connect");
connect1225.nodeField = "Hg";
connect1225.protoField = "Hg";
IS1214.connect[10] = connect1225;

connect connect1226 = createNode("connect");
connect1226.nodeField = "reverse";
connect1226.protoField = "reverse";
IS1214.connect[11] = connect1226;

connect connect1227 = createNode("connect");
connect1227.nodeField = "Ig";
connect1227.protoField = "Ig";
IS1214.connect[12] = connect1227;

Script1197.iS = IS1214;


Script1197.setSourceCode(`javascript:\n"+
"function Re(U,Se){\n"+
"var Te=new VrmlMatrix();\n"+
"for(var J=U.C.length-1;J>=0;J--){\n"+
"Te.setTransform(U.C[J].translation,\n"+
"U.C[J].rotation,\n"+
"U.C[J].scale,\n"+
"U.C[J].scaleOrientation,\n"+
"U.C[J].center);\n"+
"Se.multRight(Te);\n"+
"}\n"+
"}\n"+
"function Ue(Ve,Se){\n"+
"var We=Ve;\n"+
"while(We.G==FALSE){\n"+
"Re(We,Se);\n"+
"We=We.B;\n"+
"}\n"+
"}\n"+
"function Mg(Se){\n"+
"Re(Jg,Se);\n"+
"Ue(Jg.B,Se);\n"+
"}\n"+
"function R(n,Za)\n"+
"{\n"+
"Dg=Za;\n"+
"var J=0;\n"+
"var Ng=0;\n"+
"while((J<Jg.zf_changed.length)&&(Ng<2)){\n"+
"if(Jg.zf_changed[J]==0){\n"+
"Ng=Ng+1;\n"+
"}\n"+
"J++;\n"+
"}\n"+
"if(Ng<2){\n"+
"Kg=TRUE;\n"+
"}\n"+
"else{\n"+
"Kg=FALSE;\n"+
"}\n"+
"if(Ig==FALSE){\n"+
"Lg=0;\n"+
"}else{\n"+
"Lg=Qa;\n"+
"}\n"+
"}\n"+
"function Og(Pg,Za)\n"+
"{\n"+
"Qg=new MFVec3f();\n"+
"Qg[0]=Pg[0].add((Pg[1].add(Pg[0].negate())).multiply(Za));\n"+
"Qg[1]=Pg[1].add((Pg[2].add(Pg[1].negate())).multiply(Za));\n"+
"Qg[2]=Pg[2].add((Pg[3].add(Pg[2].negate())).multiply(Za));\n"+
"Rg=new MFVec3f();\n"+
"Rg[0]=Qg[0].add((Qg[1].add(Qg[0].negate())).multiply(Za));\n"+
"Rg[1]=Qg[1].add((Qg[2].add(Qg[1].negate())).multiply(Za));\n"+
"Sg=Rg[0].add((Rg[1].add(Rg[0].negate())).multiply(Za));\n"+
"return Sg;\n"+
"}\n"+
"function Tg(index)\n"+
"{\n"+
"Pg=new MFVec3f();\n"+
"Pg[0]=Jg.point_changed[index];\n"+
"index=(index+1)%Jg.zf_changed.length;\n"+
"if(Jg.zf_changed[index]==2)\n"+
"{\n"+
"Pg[1]=Jg.point_changed[index];\n"+
"index=(index+1)%Jg.zf_changed.length;\n"+
"}\n"+
"else if(Jg.zf_changed[index]==0)\n"+
"{\n"+
"Pg[3]=Jg.point_changed[index];\n"+
"Pg[1]=(Pg[3].subtract(Pg[0])).multiply(1.0/3.0).add(Pg[0]);\n"+
"Pg[2]=(Pg[3].subtract(Pg[0])).multiply(2.0/3.0).add(Pg[0]);\n"+
"return Pg;\n"+
"}\n"+
"else\n"+
"{\n"+
"Pg[1]=Pg[0];\n"+
"}\n"+
"Pg[2]=Jg.point_changed[index];\n"+
"if(Jg.zf_changed[index]==1)\n"+
"{\n"+
"index=(index+1)%Jg.zf_changed.length;\n"+
"}\n"+
"Pg[3]=Jg.point_changed[index];\n"+
"return Pg;\n"+
"}\n"+
"function Ug(n)\n"+
"{\n"+
"var Vg=0;\n"+
"for(J=0;J<Jg.Sd_changed.length-1;J++){\n"+
"if((n>=Jg.Sd_changed[J])&&\n"+
"(n<=Jg.Sd_changed[J+1])){\n"+
"Vg=J;\n"+
"break;\n"+
"}\n"+
"}\n"+
"return Vg;\n"+
"}\n"+
"function Wg(Za,Vg)\n"+
"{\n"+
"Sd=(Za-Jg.Sd_changed[Vg])/(Jg.Sd_changed[Vg+1]-Jg.Sd_changed[Vg]);\n"+
"return Sd;\n"+
"}\n"+
"function Xg(Vg)\n"+
"{\n"+
"Yg=0;\n"+
"Zg=-1;\n"+
"for(J=0;J<Jg.zf_changed.length;J++){\n"+
"if(Jg.zf_changed[J]==0){\n"+
"if(Yg==Vg){\n"+
"Zg=J;\n"+
"break;\n"+
"}\n"+
"Yg++;\n"+
"}\n"+
"}\n"+
"return Zg;\n"+
"}\n"+
"function ah(index,Za)\n"+
"{\n"+
"Pg=Tg(index);\n"+
"bh=new MFVec3f();\n"+
"bh[0]=Pg[1].add(Pg[0].negate());\n"+
"bh[1]=Pg[2].add(Pg[1].negate());\n"+
"bh[2]=Pg[3].add(Pg[2].negate());\n"+
"ch=new MFVec3f();\n"+
"ch[0]=bh[0].add((bh[1].add(bh[0].negate())).multiply(Za));\n"+
"ch[1]=bh[1].add((bh[2].add(bh[1].negate())).multiply(Za));\n"+
"dh=ch[0].add((ch[1].add(ch[0].negate())).multiply(Za));\n"+
"eh=dh.length();\n"+
"if(eh<1.e-5)\n"+
"{\n"+
"fh=Og(Pg,Za);\n"+
"ba=(Za>0.5)?-0.01:0.01;\n"+
"Yg=0;\n"+
"while((eh<1.e-5)&&(Yg<10))\n"+
"{\n"+
"Yg=Yg+1;\n"+
"Za=Za+ba;\n"+
"gh=Og(Pg,Za);\n"+
"dh=gh.subtract(fh);\n"+
"eh=dh.length();\n"+
"}\n"+
"if(Za>0.5){dh=dh.negate();}\n"+
"}\n"+
"return dh;\n"+
"}\n"+
"function hh(index,Za,ih)\n"+
"{\n"+
"ih=ih+Gg;\n"+
"if(ih>1.0)\n"+
"{\n"+
"if(Jg.Cf_changed==TRUE)\n"+
"{\n"+
"ih=ih-1.0;\n"+
"}\n"+
"else\n"+
"{\n"+
"ih=1.0;\n"+
"if(Za>=1.0){\n"+
"return ah(index,Za);\n"+
"}\n"+
"}\n"+
"}\n"+
"Vg=Ug(ih);\n"+
"jh=Wg(ih,Vg);\n"+
"kh=Xg(Vg);\n"+
"Pg=Tg(index);\n"+
"fh=Og(Pg,Za);\n"+
"if(kh!=index)\n"+
"{\n"+
"Pg=Tg(kh);\n"+
"}\n"+
"gh=Og(Pg,jh);\n"+
"dh=gh.subtract(fh);\n"+
"if(dh.length()<1.e-4)\n"+
"{\n"+
"return ah(index,Za);\n"+
"}\n"+
"return dh;\n"+
"}\n"+
"function lh(index,Za,ih)\n"+
"{\n"+
"if(Kg){\n"+
"return new SFVec3f(0,0,0);\n"+
"}\n"+
"if(Gg>0.0)\n"+
"{\n"+
"return hh(index,Za,ih);\n"+
"}\n"+
"else\n"+
"{\n"+
"return ah(index,Za);\n"+
"}\n"+
"}\n"+
"function mh()\n"+
"{\n"+
"return new SFVec3f(1.0,0.0,0.0);\n"+
"}\n"+
"function nh(oh,ph)\n"+
"{\n"+
"if(Kg){\n"+
"return 0.0;\n"+
"}\n"+
"if((oh.length()<0.0001)||(ph.length()<0.0001)){\n"+
"return 0.0;\n"+
"}\n"+
"if(Hg.y>0.5){ph.y=0.0;}\n"+
"oh=oh.normalize();\n"+
"ph=ph.normalize();\n"+
"dot=oh.dot(ph);\n"+
"if(dot<-1.0){dot=-1.0;}\n"+
"else if(dot>1.0){dot=1.0;}\n"+
"angle=Math.acos(dot);\n"+
"qh=oh.cross(ph);\n"+
"if(qh.dot(Hg)<0.0)\n"+
"{angle=-angle;}\n"+
"return angle;\n"+
"}\n"+
"function set_fraction(n){\n"+
"n+=Lg;\n"+
"if(n>1){\n"+
"n-=1;\n"+
"}\n"+
"Qa=n;\n"+
"if(reverse!=0){\n"+
"n=1.0-n;\n"+
"}\n"+
"var rh=new VrmlMatrix();\n"+
"Mg(rh);\n"+
"sh=new SFVec3f;\n"+
"th=new SFRotation;\n"+
"uh=new SFVec3f;\n"+
"rh.getTransform(sh,th,uh);\n"+
"if(Kg)\n"+
"{\n"+
"var J=0;\n"+
"while(J<Jg.point_changed.length){\n"+
"if(Jg.zf_changed[J]==0){\n"+
"zg=Jg.point_changed[J];\n"+
"Bg=rh.multVecMatrix(zg);\n"+
"if(Fg)\n"+
"{\n"+
"Ag=new SFRotation(0.0,0.0,0.0,1.0);\n"+
"Cg=Ag.multiply(th);\n"+
"}\n"+
"return;\n"+
"}\n"+
"J=J+1;\n"+
"}\n"+
"return;\n"+
"}\n"+
"if(n<=0.0){\n"+
"vh=-1;\n"+
"if(Jg.zf_changed[0]==0){\n"+
"vh=0;\n"+
"}else if(Jg.zf_changed[0]==1){\n"+
"vh=1;\n"+
"}\n"+
"zg=Jg.point_changed[vh];\n"+
"Bg=rh.multVecMatrix(zg);\n"+
"if(Fg)\n"+
"{\n"+
"wh=lh(vh,0.0,n);\n"+
"xh=mh();\n"+
"angle=nh(xh,wh);\n"+
"Ag=new SFRotation(Hg,angle);\n"+
"Cg=Ag.multiply(th);\n"+
"}\n"+
"return;\n"+
"}\n"+
"if(n>=1.0){\n"+
"if(Jg.Cf_changed==FALSE){\n"+
"yh=Jg.point_changed.length-1;\n"+
"if(Jg.zf_changed[yh]==0){\n"+
"zg=Jg.point_changed[yh];\n"+
"}else if(Jg.zf_changed[yh]==2){\n"+
"zg=Jg.point_changed[yh-1];\n"+
"}\n"+
"}else{\n"+
"if(Jg.zf_changed[0]==0){\n"+
"zg=Jg.point_changed[0];\n"+
"}else if(Jg.zf_changed[0]==1){\n"+
"zg=Jg.point_changed[1];\n"+
"}\n"+
"}\n"+
"Bg=rh.multVecMatrix(zg);\n"+
"if(Fg)\n"+
"{\n"+
"J=Jg.point_changed.length;\n"+
"Ng=1;\n"+
"if(Jg.Cf_changed==FALSE){\n"+
"Ng=Ng+1;\n"+
"}\n"+
"Yg=0;\n"+
"while((J>=0)&&(Yg<Ng)){\n"+
"J--;\n"+
"if(Jg.zf_changed[J]==0){\n"+
"Yg=Yg+1;\n"+
"}\n"+
"}\n"+
"if(J>=0)\n"+
"{\n"+
"wh=lh(J,1.0,n);\n"+
"xh=mh();\n"+
"angle=nh(xh,wh);\n"+
"Ag=new SFRotation(Hg,angle);\n"+
"Cg=Ag.multiply(th);\n"+
"}\n"+
"else\n"+
"{\n"+
"Ag=new SFRotation(0.0,0.0,0.0,1.0);\n"+
"Cg=Ag.multiply(th);\n"+
"}\n"+
"}\n"+
"return;\n"+
"}\n"+
"Vg=Ug(n);\n"+
"Sd=Wg(n,Vg);\n"+
"zh=-1;\n"+
"Zg=Xg(Vg);\n"+
"if(Jg.zf_changed[(Zg+1)%Jg.zf_changed.length]==0){\n"+
"zh=(Zg+1)%Jg.zf_changed.length;\n"+
"Ah=Jg.point_changed[Zg].multiply(1-Sd);\n"+
"Bh=Jg.point_changed[zh].multiply(Sd);\n"+
"zg=Ah.add(Bh);\n"+
"Bg=rh.multVecMatrix(zg);\n"+
"if(Fg)\n"+
"{\n"+
"wh=lh(Zg,Sd,n);\n"+
"xh=mh();\n"+
"angle=nh(xh,wh);\n"+
"Ag=new SFRotation(Hg,angle);\n"+
"Cg=Ag.multiply(th);\n"+
"}\n"+
"return;\n"+
"}\n"+
"if(Jg.zf_changed[(Zg+2)%Jg.zf_changed.length]==0){\n"+
"zh=(Zg+2)%Jg.zf_changed.length;\n"+
"}else{\n"+
"zh=(Zg+3)%Jg.zf_changed.length;\n"+
"}\n"+
"index=Jg.Bf_changed[Vg];\n"+
"Ch=Jg.Af_changed[index][0];\n"+
"while(Ch<=Jg.Af_changed[index][0]){\n"+
"Dh=Jg.Af_changed[index+1][0];\n"+
"if((Sd>=Ch)&&(Sd<=Dh)){\n"+
"Eh=(Sd-Ch)/(Dh-Ch);\n"+
"gg=Jg.Af_changed[index][1]*(1.0-Eh)+\n"+
"Jg.Af_changed[index+1][1]*Eh;\n"+
"break;\n"+
"}\n"+
"index++;\n"+
"Ch=Dh;\n"+
"}\n"+
"Of=(1-gg)*(1-gg)*(1-gg);\n"+
"Pf=3*(1-gg)*(1-gg)*gg;\n"+
"Qf=3*(1-gg)*gg*gg;\n"+
"Rf=gg*gg*gg;\n"+
"Fh=(Zg+1)%Jg.point_changed.length;\n"+
"if(((Zg+3)%Jg.point_changed.length)==zh){\n"+
"Gh=Jg.point_changed[Zg].multiply(Of);\n"+
"Ah=Jg.point_changed[Fh].multiply(Pf);\n"+
"Bh=Jg.point_changed[zh-1].multiply(Qf);\n"+
"Hh=Jg.point_changed[zh].multiply(Rf);\n"+
"}else if(Jg.zf_changed[Fh]==2){\n"+
"Gh=Jg.point_changed[Zg].multiply(Of);\n"+
"Ah=Jg.point_changed[Fh].multiply(Pf);\n"+
"Bh=Jg.point_changed[zh].multiply(Qf);\n"+
"Hh=Jg.point_changed[zh].multiply(Rf);\n"+
"}else if(Jg.zf_changed[Fh]==1){\n"+
"Gh=Jg.point_changed[Zg].multiply(Of);\n"+
"Ah=Jg.point_changed[Zg].multiply(Pf);\n"+
"Bh=Jg.point_changed[zh-1].multiply(Qf);\n"+
"Hh=Jg.point_changed[zh].multiply(Rf);\n"+
"}\n"+
"zg=Gh.add(Ah).add(Bh).add(Hh);\n"+
"Bg=rh.multVecMatrix(zg);\n"+
"if(Fg)\n"+
"{\n"+
"wh=lh(Zg,gg,n);\n"+
"xh=mh();\n"+
"Ag=new SFRotation(Hg,nh(xh,wh));\n"+
"Cg=Ag.multiply(th);\n"+
"}\n"+
"}\n"+
"function initialize(){\n"+
"Jg.w=TRUE;\n"+
"}`)
ProtoBody1196.children = new MFNode();

ProtoBody1196.children[0] = Script1197;

ProtoDeclare1181.protoBody = ProtoBody1196;

children[19] = ProtoDeclare1181;

ProtoDeclare ProtoDeclare1228 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Ih" ><ProtoInterface><field name="set_intensity" accessType="inputOnly" type="SFFloat"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="intensity_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="Jh" accessType="outputOnly" type="SFTime"></field>
<field name="pitch" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="loop" accessType="inputOutput" type="SFBool"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="url" accessType="initializeOnly" type="MFString"></field>
<field name="intensity" accessType="initializeOnly" type="SFFloat" value="1"></field>
</ProtoInterface>
<ProtoBody><Sound DEF="Kh_1" spatialize="false" minBack="1000000" minFront="1000000" maxBack="1000000" maxFront="1000000"><IS><connect nodeField="intensity" protoField="intensity"></connect>
</IS>
<AudioClip containerField="source" DEF="Lh_1"><IS><connect nodeField="url" protoField="url"></connect>
<connect nodeField="pitch" protoField="pitch"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="duration_changed" protoField="Jh"></connect>
</IS>
</AudioClip>
</Sound>
<Script DEF="Mh_1" directOutput="true"><field name="set_intensity" accessType="inputOnly" type="SFFloat"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="intensity_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="startTime_changed" accessType="outputOnly" type="SFTime"></field>
<field name="stopTime_changed" accessType="outputOnly" type="SFTime"></field>
<field name="intensity" accessType="initializeOnly" type="SFFloat"></field>
<IS><connect nodeField="set_intensity" protoField="set_intensity"></connect>
<connect nodeField="set_startTime" protoField="set_startTime"></connect>
<connect nodeField="set_stopTime" protoField="set_stopTime"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="intensity_changed" protoField="intensity_changed"></connect>
<connect nodeField="intensity" protoField="intensity"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
intensity_changed=intensity;
}
function set_intensity(n){
intensity=n;
intensity_changed=n;
}
function set_startTime(n){
startTime_changed=n;
}
function set_stopTime(n){
stopTime_changed=n;
}
function w(){
}]]></Script>
<ROUTE fromNode="Mh_1" fromField="startTime_changed" toNode="Lh_1" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Mh_1" fromField="stopTime_changed" toNode="Lh_1" toField="set_stopTime"></ROUTE>
<ROUTE fromNode="Mh_1" fromField="intensity_changed" toNode="Kh_1" toField="set_intensity"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1228.name = "Ih";
ProtoInterface ProtoInterface1229 = createNode("ProtoInterface");
field field1230 = createNode("field");
field1230.name = "set_intensity";
field1230.accessType = "inputOnly";
field1230.type = "SFFloat";
ProtoInterface1229.field = new MFNode();

ProtoInterface1229.field[0] = field1230;

field field1231 = createNode("field");
field1231.name = "set_startTime";
field1231.accessType = "inputOnly";
field1231.type = "SFTime";
ProtoInterface1229.field[1] = field1231;

field field1232 = createNode("field");
field1232.name = "set_stopTime";
field1232.accessType = "inputOnly";
field1232.type = "SFTime";
ProtoInterface1229.field[2] = field1232;

field field1233 = createNode("field");
field1233.name = "w";
field1233.accessType = "inputOnly";
field1233.type = "SFBool";
ProtoInterface1229.field[3] = field1233;

field field1234 = createNode("field");
field1234.name = "intensity_changed";
field1234.accessType = "outputOnly";
field1234.type = "SFFloat";
ProtoInterface1229.field[4] = field1234;

field field1235 = createNode("field");
field1235.name = "Jh";
field1235.accessType = "outputOnly";
field1235.type = "SFTime";
ProtoInterface1229.field[5] = field1235;

field field1236 = createNode("field");
field1236.name = "pitch";
field1236.accessType = "inputOutput";
field1236.type = "SFFloat";
field1236.value = "1";
ProtoInterface1229.field[6] = field1236;

field field1237 = createNode("field");
field1237.name = "loop";
field1237.accessType = "inputOutput";
field1237.type = "SFBool";
ProtoInterface1229.field[7] = field1237;

field field1238 = createNode("field");
field1238.name = "B";
field1238.accessType = "inputOutput";
field1238.type = "SFNode";
ProtoInterface1229.field[8] = field1238;

field field1239 = createNode("field");
field1239.name = "C";
field1239.accessType = "inputOutput";
field1239.type = "MFNode";
ProtoInterface1229.field[9] = field1239;

field field1240 = createNode("field");
field1240.name = "url";
field1240.accessType = "initializeOnly";
field1240.type = "MFString";
ProtoInterface1229.field[10] = field1240;

field field1241 = createNode("field");
field1241.name = "intensity";
field1241.accessType = "initializeOnly";
field1241.type = "SFFloat";
field1241.value = "1";
ProtoInterface1229.field[11] = field1241;

ProtoDeclare1228.protoInterface = ProtoInterface1229;

ProtoBody ProtoBody1242 = createNode("ProtoBody");
Sound Sound1243 = createNode("Sound");
Sound1243.DEF = "Kh_1";
Sound1243.spatialize = False;
Sound1243.minBack = 1000000;
Sound1243.minFront = 1000000;
Sound1243.maxBack = 1000000;
Sound1243.maxFront = 1000000;
IS IS1244 = createNode("IS");
connect connect1245 = createNode("connect");
connect1245.nodeField = "intensity";
connect1245.protoField = "intensity";
IS1244.connect = new MFNode();

IS1244.connect[0] = connect1245;

Sound1243.iS = IS1244;

AudioClip AudioClip1246 = createNode("AudioClip");
AudioClip1246.DEF = "Lh_1";
IS IS1247 = createNode("IS");
connect connect1248 = createNode("connect");
connect1248.nodeField = "url";
connect1248.protoField = "url";
IS1247.connect = new MFNode();

IS1247.connect[0] = connect1248;

connect connect1249 = createNode("connect");
connect1249.nodeField = "pitch";
connect1249.protoField = "pitch";
IS1247.connect[1] = connect1249;

connect connect1250 = createNode("connect");
connect1250.nodeField = "loop";
connect1250.protoField = "loop";
IS1247.connect[2] = connect1250;

connect connect1251 = createNode("connect");
connect1251.nodeField = "duration_changed";
connect1251.protoField = "Jh";
IS1247.connect[3] = connect1251;

AudioClip1246.iS = IS1247;

Sound1243.source = AudioClip1246;

ProtoBody1242.children = new MFNode();

ProtoBody1242.children[0] = Sound1243;

Script Script1252 = createNode("Script");
Script1252.DEF = "Mh_1";
Script1252.directOutput = True;
field field1253 = createNode("field");
field1253.name = "set_intensity";
field1253.accessType = "inputOnly";
field1253.type = "SFFloat";
Script1252.field = new MFNode();

Script1252.field[0] = field1253;

field field1254 = createNode("field");
field1254.name = "set_startTime";
field1254.accessType = "inputOnly";
field1254.type = "SFTime";
Script1252.field[1] = field1254;

field field1255 = createNode("field");
field1255.name = "set_stopTime";
field1255.accessType = "inputOnly";
field1255.type = "SFTime";
Script1252.field[2] = field1255;

field field1256 = createNode("field");
field1256.name = "w";
field1256.accessType = "inputOnly";
field1256.type = "SFBool";
Script1252.field[3] = field1256;

field field1257 = createNode("field");
field1257.name = "intensity_changed";
field1257.accessType = "outputOnly";
field1257.type = "SFFloat";
Script1252.field[4] = field1257;

field field1258 = createNode("field");
field1258.name = "startTime_changed";
field1258.accessType = "outputOnly";
field1258.type = "SFTime";
Script1252.field[5] = field1258;

field field1259 = createNode("field");
field1259.name = "stopTime_changed";
field1259.accessType = "outputOnly";
field1259.type = "SFTime";
Script1252.field[6] = field1259;

field field1260 = createNode("field");
field1260.name = "intensity";
field1260.accessType = "initializeOnly";
field1260.type = "SFFloat";
Script1252.field[7] = field1260;

IS IS1261 = createNode("IS");
connect connect1262 = createNode("connect");
connect1262.nodeField = "set_intensity";
connect1262.protoField = "set_intensity";
IS1261.connect = new MFNode();

IS1261.connect[0] = connect1262;

connect connect1263 = createNode("connect");
connect1263.nodeField = "set_startTime";
connect1263.protoField = "set_startTime";
IS1261.connect[1] = connect1263;

connect connect1264 = createNode("connect");
connect1264.nodeField = "set_stopTime";
connect1264.protoField = "set_stopTime";
IS1261.connect[2] = connect1264;

connect connect1265 = createNode("connect");
connect1265.nodeField = "w";
connect1265.protoField = "w";
IS1261.connect[3] = connect1265;

connect connect1266 = createNode("connect");
connect1266.nodeField = "intensity_changed";
connect1266.protoField = "intensity_changed";
IS1261.connect[4] = connect1266;

connect connect1267 = createNode("connect");
connect1267.nodeField = "intensity";
connect1267.protoField = "intensity";
IS1261.connect[5] = connect1267;

Script1252.iS = IS1261;


Script1252.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"intensity_changed=intensity;\n"+
"}\n"+
"function set_intensity(n){\n"+
"intensity=n;\n"+
"intensity_changed=n;\n"+
"}\n"+
"function set_startTime(n){\n"+
"startTime_changed=n;\n"+
"}\n"+
"function set_stopTime(n){\n"+
"stopTime_changed=n;\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody1242.children[1] = Script1252;

ROUTE ROUTE1268 = createNode("ROUTE");
ROUTE1268.fromNode = "Mh_1";
ROUTE1268.fromField = "startTime_changed";
ROUTE1268.toNode = "Lh_1";
ROUTE1268.toField = "set_startTime";
ProtoBody1242.children[2] = ROUTE1268;

ROUTE ROUTE1269 = createNode("ROUTE");
ROUTE1269.fromNode = "Mh_1";
ROUTE1269.fromField = "stopTime_changed";
ROUTE1269.toNode = "Lh_1";
ROUTE1269.toField = "set_stopTime";
ProtoBody1242.children[3] = ROUTE1269;

ROUTE ROUTE1270 = createNode("ROUTE");
ROUTE1270.fromNode = "Mh_1";
ROUTE1270.fromField = "intensity_changed";
ROUTE1270.toNode = "Kh_1";
ROUTE1270.toField = "set_intensity";
ProtoBody1242.children[4] = ROUTE1270;

ProtoDeclare1228.protoBody = ProtoBody1242;

children[20] = ProtoDeclare1228;

ProtoDeclare ProtoDeclare1271 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Nh" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_intensity" accessType="inputOnly" type="SFFloat"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="Jh" accessType="inputOnly" type="SFTime"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="Oh" accessType="initializeOnly" type="SFNode"></field>
<field name="loop" accessType="initializeOnly" type="SFBool"></field>
<field name="intensity" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="pitch" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="Qa" accessType="initializeOnly" type="SFFloat"></field>
<field name="Ph" accessType="initializeOnly" type="SFBool"></field>
<field name="duration" accessType="initializeOnly" type="SFTime"></field>
<field name="Qh" accessType="initializeOnly" type="SFBool"></field>
<field name="Rh" accessType="initializeOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="Sh" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="set_intensity" accessType="inputOnly" type="SFFloat"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="Jh" accessType="inputOnly" type="SFTime"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="Oh" accessType="initializeOnly" type="SFNode"></field>
<field name="loop" accessType="initializeOnly" type="SFBool"></field>
<field name="intensity" accessType="initializeOnly" type="SFFloat"></field>
<field name="pitch" accessType="initializeOnly" type="SFFloat"></field>
<field name="duration" accessType="initializeOnly" type="SFTime"></field>
<field name="Qh" accessType="initializeOnly" type="SFBool"></field>
<field name="Rh" accessType="initializeOnly" type="SFBool"></field>
<field name="Th" accessType="initializeOnly" type="SFBool"></field>
<field name="Qa" accessType="initializeOnly" type="SFFloat"></field>
<field name="Ph" accessType="initializeOnly" type="SFBool"></field>
<field name="Uh" accessType="initializeOnly" type="SFBool"></field>
<field name="Vh" accessType="initializeOnly" type="SFTime" value="-1"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="fa" accessType="initializeOnly" type="SFTime"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="set_intensity" protoField="set_intensity"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="Jh" protoField="Jh"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="Oh" protoField="Oh"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="intensity" protoField="intensity"></connect>
<connect nodeField="pitch" protoField="pitch"></connect>
<connect nodeField="duration" protoField="duration"></connect>
<connect nodeField="Qh" protoField="Qh"></connect>
<connect nodeField="Rh" protoField="Rh"></connect>
<connect nodeField="Qa" protoField="Qa"></connect>
<connect nodeField="Ph" protoField="Ph"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
if(Qh){
Oh.set_intensity=0;
}else{
Oh.set_intensity=intensity;
}
Oh.loop=loop;
Oh.pitch=pitch;
}
function R(n,time){
if(fa==n){
return;
}
if((Th==TRUE)&&(Vh==-1)){
ea=n;
return;
}
if(Uh==FALSE){
Vh=n;
startTime=n;
Th=TRUE;
return;
}
if(Qh){
Oh.set_intensity=0;
}else{
Oh.set_intensity=intensity;
}
Oh.loop=loop;
Oh.pitch=pitch;
if(Vh>0){
Oh.set_startTime=Vh;
Oh.set_stopTime=Vh-1;
}else{
var Wh=n-(duration/pitch)*Qa;
Oh.set_startTime=Wh;
Oh.set_stopTime=Wh-1;
}
if(Th==FALSE){
startTime=n;
Th=TRUE;
}
Vh=-1;
fa=n;
}
function S(n,time){
if(!Th){
return;
}
if(Ph==FALSE){
Qa=0;
}
if(Qa==1){
Qa=0;
}
Oh.set_stopTime=n;
stopTime=n;
Th=FALSE;
Vh=-1;
if(Qh){
Oh.set_intensity=0;
}else{
Oh.set_intensity=intensity;
}
if(ea==n){
R(n,time);
}
}
function set_intensity(n,time){
if(Qh||Rh){
Oh.set_intensity=n*intensity;
}
}
function set_fraction(n){
Qa=n;
}
function Jh(n,Za){
Uh=TRUE;
if(Vh>0){
R(Za,Za);
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1271.name = "Nh";
ProtoInterface ProtoInterface1272 = createNode("ProtoInterface");
field field1273 = createNode("field");
field1273.name = "R";
field1273.accessType = "inputOnly";
field1273.type = "SFTime";
ProtoInterface1272.field = new MFNode();

ProtoInterface1272.field[0] = field1273;

field field1274 = createNode("field");
field1274.name = "S";
field1274.accessType = "inputOnly";
field1274.type = "SFTime";
ProtoInterface1272.field[1] = field1274;

field field1275 = createNode("field");
field1275.name = "set_intensity";
field1275.accessType = "inputOnly";
field1275.type = "SFFloat";
ProtoInterface1272.field[2] = field1275;

field field1276 = createNode("field");
field1276.name = "set_fraction";
field1276.accessType = "inputOnly";
field1276.type = "SFFloat";
ProtoInterface1272.field[3] = field1276;

field field1277 = createNode("field");
field1277.name = "Jh";
field1277.accessType = "inputOnly";
field1277.type = "SFTime";
ProtoInterface1272.field[4] = field1277;

field field1278 = createNode("field");
field1278.name = "startTime";
field1278.accessType = "outputOnly";
field1278.type = "SFTime";
ProtoInterface1272.field[5] = field1278;

field field1279 = createNode("field");
field1279.name = "stopTime";
field1279.accessType = "outputOnly";
field1279.type = "SFTime";
ProtoInterface1272.field[6] = field1279;

field field1280 = createNode("field");
field1280.name = "Oh";
field1280.accessType = "initializeOnly";
field1280.type = "SFNode";
ProtoInterface1272.field[7] = field1280;

field field1281 = createNode("field");
field1281.name = "loop";
field1281.accessType = "initializeOnly";
field1281.type = "SFBool";
ProtoInterface1272.field[8] = field1281;

field field1282 = createNode("field");
field1282.name = "intensity";
field1282.accessType = "initializeOnly";
field1282.type = "SFFloat";
field1282.value = "1";
ProtoInterface1272.field[9] = field1282;

field field1283 = createNode("field");
field1283.name = "pitch";
field1283.accessType = "initializeOnly";
field1283.type = "SFFloat";
field1283.value = "1";
ProtoInterface1272.field[10] = field1283;

field field1284 = createNode("field");
field1284.name = "Qa";
field1284.accessType = "initializeOnly";
field1284.type = "SFFloat";
ProtoInterface1272.field[11] = field1284;

field field1285 = createNode("field");
field1285.name = "Ph";
field1285.accessType = "initializeOnly";
field1285.type = "SFBool";
ProtoInterface1272.field[12] = field1285;

field field1286 = createNode("field");
field1286.name = "duration";
field1286.accessType = "initializeOnly";
field1286.type = "SFTime";
ProtoInterface1272.field[13] = field1286;

field field1287 = createNode("field");
field1287.name = "Qh";
field1287.accessType = "initializeOnly";
field1287.type = "SFBool";
ProtoInterface1272.field[14] = field1287;

field field1288 = createNode("field");
field1288.name = "Rh";
field1288.accessType = "initializeOnly";
field1288.type = "SFBool";
ProtoInterface1272.field[15] = field1288;

ProtoDeclare1271.protoInterface = ProtoInterface1272;

ProtoBody ProtoBody1289 = createNode("ProtoBody");
Script Script1290 = createNode("Script");
Script1290.DEF = "Sh";
Script1290.directOutput = True;
field field1291 = createNode("field");
field1291.name = "R";
field1291.accessType = "inputOnly";
field1291.type = "SFTime";
Script1290.field = new MFNode();

Script1290.field[0] = field1291;

field field1292 = createNode("field");
field1292.name = "S";
field1292.accessType = "inputOnly";
field1292.type = "SFTime";
Script1290.field[1] = field1292;

field field1293 = createNode("field");
field1293.name = "set_intensity";
field1293.accessType = "inputOnly";
field1293.type = "SFFloat";
Script1290.field[2] = field1293;

field field1294 = createNode("field");
field1294.name = "set_fraction";
field1294.accessType = "inputOnly";
field1294.type = "SFFloat";
Script1290.field[3] = field1294;

field field1295 = createNode("field");
field1295.name = "Jh";
field1295.accessType = "inputOnly";
field1295.type = "SFTime";
Script1290.field[4] = field1295;

field field1296 = createNode("field");
field1296.name = "startTime";
field1296.accessType = "outputOnly";
field1296.type = "SFTime";
Script1290.field[5] = field1296;

field field1297 = createNode("field");
field1297.name = "stopTime";
field1297.accessType = "outputOnly";
field1297.type = "SFTime";
Script1290.field[6] = field1297;

field field1298 = createNode("field");
field1298.name = "Oh";
field1298.accessType = "initializeOnly";
field1298.type = "SFNode";
Script1290.field[7] = field1298;

field field1299 = createNode("field");
field1299.name = "loop";
field1299.accessType = "initializeOnly";
field1299.type = "SFBool";
Script1290.field[8] = field1299;

field field1300 = createNode("field");
field1300.name = "intensity";
field1300.accessType = "initializeOnly";
field1300.type = "SFFloat";
Script1290.field[9] = field1300;

field field1301 = createNode("field");
field1301.name = "pitch";
field1301.accessType = "initializeOnly";
field1301.type = "SFFloat";
Script1290.field[10] = field1301;

field field1302 = createNode("field");
field1302.name = "duration";
field1302.accessType = "initializeOnly";
field1302.type = "SFTime";
Script1290.field[11] = field1302;

field field1303 = createNode("field");
field1303.name = "Qh";
field1303.accessType = "initializeOnly";
field1303.type = "SFBool";
Script1290.field[12] = field1303;

field field1304 = createNode("field");
field1304.name = "Rh";
field1304.accessType = "initializeOnly";
field1304.type = "SFBool";
Script1290.field[13] = field1304;

field field1305 = createNode("field");
field1305.name = "Th";
field1305.accessType = "initializeOnly";
field1305.type = "SFBool";
Script1290.field[14] = field1305;

field field1306 = createNode("field");
field1306.name = "Qa";
field1306.accessType = "initializeOnly";
field1306.type = "SFFloat";
Script1290.field[15] = field1306;

field field1307 = createNode("field");
field1307.name = "Ph";
field1307.accessType = "initializeOnly";
field1307.type = "SFBool";
Script1290.field[16] = field1307;

field field1308 = createNode("field");
field1308.name = "Uh";
field1308.accessType = "initializeOnly";
field1308.type = "SFBool";
Script1290.field[17] = field1308;

field field1309 = createNode("field");
field1309.name = "Vh";
field1309.accessType = "initializeOnly";
field1309.type = "SFTime";
field1309.value = "-1";
Script1290.field[18] = field1309;

field field1310 = createNode("field");
field1310.name = "ea";
field1310.accessType = "initializeOnly";
field1310.type = "SFTime";
Script1290.field[19] = field1310;

field field1311 = createNode("field");
field1311.name = "fa";
field1311.accessType = "initializeOnly";
field1311.type = "SFTime";
Script1290.field[20] = field1311;

IS IS1312 = createNode("IS");
connect connect1313 = createNode("connect");
connect1313.nodeField = "R";
connect1313.protoField = "R";
IS1312.connect = new MFNode();

IS1312.connect[0] = connect1313;

connect connect1314 = createNode("connect");
connect1314.nodeField = "S";
connect1314.protoField = "S";
IS1312.connect[1] = connect1314;

connect connect1315 = createNode("connect");
connect1315.nodeField = "set_intensity";
connect1315.protoField = "set_intensity";
IS1312.connect[2] = connect1315;

connect connect1316 = createNode("connect");
connect1316.nodeField = "set_fraction";
connect1316.protoField = "set_fraction";
IS1312.connect[3] = connect1316;

connect connect1317 = createNode("connect");
connect1317.nodeField = "Jh";
connect1317.protoField = "Jh";
IS1312.connect[4] = connect1317;

connect connect1318 = createNode("connect");
connect1318.nodeField = "startTime";
connect1318.protoField = "startTime";
IS1312.connect[5] = connect1318;

connect connect1319 = createNode("connect");
connect1319.nodeField = "stopTime";
connect1319.protoField = "stopTime";
IS1312.connect[6] = connect1319;

connect connect1320 = createNode("connect");
connect1320.nodeField = "Oh";
connect1320.protoField = "Oh";
IS1312.connect[7] = connect1320;

connect connect1321 = createNode("connect");
connect1321.nodeField = "loop";
connect1321.protoField = "loop";
IS1312.connect[8] = connect1321;

connect connect1322 = createNode("connect");
connect1322.nodeField = "intensity";
connect1322.protoField = "intensity";
IS1312.connect[9] = connect1322;

connect connect1323 = createNode("connect");
connect1323.nodeField = "pitch";
connect1323.protoField = "pitch";
IS1312.connect[10] = connect1323;

connect connect1324 = createNode("connect");
connect1324.nodeField = "duration";
connect1324.protoField = "duration";
IS1312.connect[11] = connect1324;

connect connect1325 = createNode("connect");
connect1325.nodeField = "Qh";
connect1325.protoField = "Qh";
IS1312.connect[12] = connect1325;

connect connect1326 = createNode("connect");
connect1326.nodeField = "Rh";
connect1326.protoField = "Rh";
IS1312.connect[13] = connect1326;

connect connect1327 = createNode("connect");
connect1327.nodeField = "Qa";
connect1327.protoField = "Qa";
IS1312.connect[14] = connect1327;

connect connect1328 = createNode("connect");
connect1328.nodeField = "Ph";
connect1328.protoField = "Ph";
IS1312.connect[15] = connect1328;

Script1290.iS = IS1312;


Script1290.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"if(Qh){\n"+
"Oh.set_intensity=0;\n"+
"}else{\n"+
"Oh.set_intensity=intensity;\n"+
"}\n"+
"Oh.loop=loop;\n"+
"Oh.pitch=pitch;\n"+
"}\n"+
"function R(n,time){\n"+
"if(fa==n){\n"+
"return;\n"+
"}\n"+
"if((Th==TRUE)&&(Vh==-1)){\n"+
"ea=n;\n"+
"return;\n"+
"}\n"+
"if(Uh==FALSE){\n"+
"Vh=n;\n"+
"startTime=n;\n"+
"Th=TRUE;\n"+
"return;\n"+
"}\n"+
"if(Qh){\n"+
"Oh.set_intensity=0;\n"+
"}else{\n"+
"Oh.set_intensity=intensity;\n"+
"}\n"+
"Oh.loop=loop;\n"+
"Oh.pitch=pitch;\n"+
"if(Vh>0){\n"+
"Oh.set_startTime=Vh;\n"+
"Oh.set_stopTime=Vh-1;\n"+
"}else{\n"+
"var Wh=n-(duration/pitch)*Qa;\n"+
"Oh.set_startTime=Wh;\n"+
"Oh.set_stopTime=Wh-1;\n"+
"}\n"+
"if(Th==FALSE){\n"+
"startTime=n;\n"+
"Th=TRUE;\n"+
"}\n"+
"Vh=-1;\n"+
"fa=n;\n"+
"}\n"+
"function S(n,time){\n"+
"if(!Th){\n"+
"return;\n"+
"}\n"+
"if(Ph==FALSE){\n"+
"Qa=0;\n"+
"}\n"+
"if(Qa==1){\n"+
"Qa=0;\n"+
"}\n"+
"Oh.set_stopTime=n;\n"+
"stopTime=n;\n"+
"Th=FALSE;\n"+
"Vh=-1;\n"+
"if(Qh){\n"+
"Oh.set_intensity=0;\n"+
"}else{\n"+
"Oh.set_intensity=intensity;\n"+
"}\n"+
"if(ea==n){\n"+
"R(n,time);\n"+
"}\n"+
"}\n"+
"function set_intensity(n,time){\n"+
"if(Qh||Rh){\n"+
"Oh.set_intensity=n*intensity;\n"+
"}\n"+
"}\n"+
"function set_fraction(n){\n"+
"Qa=n;\n"+
"}\n"+
"function Jh(n,Za){\n"+
"Uh=TRUE;\n"+
"if(Vh>0){\n"+
"R(Za,Za);\n"+
"}\n"+
"}`)
ProtoBody1289.children = new MFNode();

ProtoBody1289.children[0] = Script1290;

ProtoDeclare1271.protoBody = ProtoBody1289;

children[21] = ProtoDeclare1271;

ProtoDeclare ProtoDeclare1329 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Xh" ><ProtoInterface><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="Yh" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Script DEF="jb_2" directOutput="true"><field name="R" accessType="inputOnly" type="SFTime"></field>
<field name="S" accessType="inputOnly" type="SFTime"></field>
<field name="R_changed" accessType="outputOnly" type="SFTime"></field>
<field name="Yh" accessType="outputOnly" type="SFTime"></field>
<field name="aa" accessType="initializeOnly" type="SFBool"></field>
<field name="ea" accessType="initializeOnly" type="SFTime"></field>
<field name="fa" accessType="initializeOnly" type="SFTime"></field>
<IS><connect nodeField="R" protoField="R"></connect>
<connect nodeField="S" protoField="S"></connect>
<connect nodeField="R_changed" protoField="R_changed"></connect>
<connect nodeField="Yh" protoField="Yh"></connect>
</IS>
<![CDATA[javascript:
function initialize(){
aa=FALSE;
}
function R(n){
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
R_changed=n;
fa=n;
}
function S(n){
Yh=n;
aa=FALSE;
if(ea==n){
R(n);
}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1329.name = "Xh";
ProtoInterface ProtoInterface1330 = createNode("ProtoInterface");
field field1331 = createNode("field");
field1331.name = "R";
field1331.accessType = "inputOnly";
field1331.type = "SFTime";
ProtoInterface1330.field = new MFNode();

ProtoInterface1330.field[0] = field1331;

field field1332 = createNode("field");
field1332.name = "S";
field1332.accessType = "inputOnly";
field1332.type = "SFTime";
ProtoInterface1330.field[1] = field1332;

field field1333 = createNode("field");
field1333.name = "R_changed";
field1333.accessType = "outputOnly";
field1333.type = "SFTime";
ProtoInterface1330.field[2] = field1333;

field field1334 = createNode("field");
field1334.name = "Yh";
field1334.accessType = "outputOnly";
field1334.type = "SFTime";
ProtoInterface1330.field[3] = field1334;

ProtoDeclare1329.protoInterface = ProtoInterface1330;

ProtoBody ProtoBody1335 = createNode("ProtoBody");
Script Script1336 = createNode("Script");
Script1336.DEF = "jb_2";
Script1336.directOutput = True;
field field1337 = createNode("field");
field1337.name = "R";
field1337.accessType = "inputOnly";
field1337.type = "SFTime";
Script1336.field = new MFNode();

Script1336.field[0] = field1337;

field field1338 = createNode("field");
field1338.name = "S";
field1338.accessType = "inputOnly";
field1338.type = "SFTime";
Script1336.field[1] = field1338;

field field1339 = createNode("field");
field1339.name = "R_changed";
field1339.accessType = "outputOnly";
field1339.type = "SFTime";
Script1336.field[2] = field1339;

field field1340 = createNode("field");
field1340.name = "Yh";
field1340.accessType = "outputOnly";
field1340.type = "SFTime";
Script1336.field[3] = field1340;

field field1341 = createNode("field");
field1341.name = "aa";
field1341.accessType = "initializeOnly";
field1341.type = "SFBool";
Script1336.field[4] = field1341;

field field1342 = createNode("field");
field1342.name = "ea";
field1342.accessType = "initializeOnly";
field1342.type = "SFTime";
Script1336.field[5] = field1342;

field field1343 = createNode("field");
field1343.name = "fa";
field1343.accessType = "initializeOnly";
field1343.type = "SFTime";
Script1336.field[6] = field1343;

IS IS1344 = createNode("IS");
connect connect1345 = createNode("connect");
connect1345.nodeField = "R";
connect1345.protoField = "R";
IS1344.connect = new MFNode();

IS1344.connect[0] = connect1345;

connect connect1346 = createNode("connect");
connect1346.nodeField = "S";
connect1346.protoField = "S";
IS1344.connect[1] = connect1346;

connect connect1347 = createNode("connect");
connect1347.nodeField = "R_changed";
connect1347.protoField = "R_changed";
IS1344.connect[2] = connect1347;

connect connect1348 = createNode("connect");
connect1348.nodeField = "Yh";
connect1348.protoField = "Yh";
IS1344.connect[3] = connect1348;

Script1336.iS = IS1344;


Script1336.setSourceCode(`javascript:\n"+
"function initialize(){\n"+
"aa=FALSE;\n"+
"}\n"+
"function R(n){\n"+
"if(fa==n){\n"+
"return;\n"+
"}\n"+
"if(aa==TRUE){\n"+
"ea=n;\n"+
"return;\n"+
"}\n"+
"aa=TRUE;\n"+
"R_changed=n;\n"+
"fa=n;\n"+
"}\n"+
"function S(n){\n"+
"Yh=n;\n"+
"aa=FALSE;\n"+
"if(ea==n){\n"+
"R(n);\n"+
"}\n"+
"}`)
ProtoBody1335.children = new MFNode();

ProtoBody1335.children[0] = Script1336;

ProtoDeclare1329.protoBody = ProtoBody1335;

children[22] = ProtoDeclare1329;

ProtoDeclare ProtoDeclare1349 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Zh" ><ProtoInterface><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="set_coord" accessType="inputOnly" type="MFVec3f"></field>
<field name="set_texCoord" accessType="inputOnly" type="MFVec2f"></field>
<field name="set_hd" accessType="inputOnly" type="SFFloat"></field>
<field name="set_height" accessType="inputOnly" type="SFFloat"></field>
<field name="set_diffuseColor" accessType="inputOnly" type="SFColor"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="coord_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="texCoord_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="hd_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="height_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="diffuseColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="url" accessType="inputOutput" type="MFString"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat"></field>
<field name="emissiveColor" accessType="inputOutput" type="SFColor"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor"></field>
<field name="shininess" accessType="inputOutput" type="SFFloat" value="0.2"></field>
<field name="q" accessType="inputOutput" type="SFVec2f" value="-0.5 -0.5"></field>
<field name="s" accessType="inputOutput" type="SFFloat"></field>
<field name="t" accessType="inputOutput" type="SFVec2f" value="1 1"></field>
<field name="u" accessType="inputOutput" type="SFVec2f"></field>
<field name="B" accessType="inputOutput" type="SFNode"></field>
<field name="C" accessType="inputOutput" type="MFNode"></field>
<field name="D" accessType="inputOutput" type="SFNode"></field>
<field name="F" accessType="inputOutput" type="SFInt32" value="-1"></field>
<field name="p" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="hd" accessType="initializeOnly" type="SFFloat" value="72"></field>
<field name="height" accessType="initializeOnly" type="SFFloat" value="72"></field>
<field name="ai" accessType="initializeOnly" type="MFInt32" value="1 1"></field>
<field name="bi" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="Jb" accessType="initializeOnly" type="SFColor"></field>
<field name="Kb" accessType="initializeOnly" type="SFColor"></field>
<field name="Lb" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="H" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="ci" accessType="initializeOnly" type="SFVec2f" value="1 1"></field>
<field name="diffuseColor" accessType="initializeOnly" type="SFColor" value="1 1 1"></field>
<field name="di" accessType="initializeOnly" type="SFBool"></field>
<field name="choice" accessType="initializeOnly" type="SFInt32"></field>
<field name="ha" accessType="initializeOnly" type="SFVec3f"></field>
<field name="coord" accessType="initializeOnly" type="MFVec3f"></field>
<field name="texCoord" accessType="initializeOnly" type="MFVec2f"></field>
<field name="coordIndex" accessType="initializeOnly" type="MFInt32"></field>
<field name="color" accessType="initializeOnly" type="MFColor"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="ei_1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="choice"></connect>
</IS>
<Shape><Appearance containerField="appearance" DEF="fi_1"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
<ImageTexture containerField="texture" DEF="gi_1"><IS><connect nodeField="url" protoField="url"></connect>
</IS>
</ImageTexture>
<TextureTransform containerField="textureTransform" DEF="hi_1"><IS><connect nodeField="translation" protoField="u"></connect>
<connect nodeField="rotation" protoField="s"></connect>
<connect nodeField="scale" protoField="t"></connect>
<connect nodeField="center" protoField="q"></connect>
</IS>
</TextureTransform>
</Appearance>
<IndexedFaceSet DEF="ii_1" solid="false" creaseAngle="3"><IS><connect nodeField="coordIndex" protoField="coordIndex"></connect>
</IS>
<TextureCoordinate containerField="texCoord" DEF="ki_1"><IS><connect nodeField="point" protoField="texCoord"></connect>
</IS>
</TextureCoordinate>
<Coordinate DEF="ji_1"><IS><connect nodeField="point" protoField="coord"></connect>
</IS>
</Coordinate>
</IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" DEF="li_1"><ImageTexture containerField="texture" USE="gi_1"></ImageTexture>
<TextureTransform containerField="textureTransform" USE="hi_1"></TextureTransform>
</Appearance>
<IndexedFaceSet DEF="mi_1" solid="false" creaseAngle="3"><IS><connect nodeField="coordIndex" protoField="coordIndex"></connect>
</IS>
<Color containerField="color" DEF="oi_1"><IS><connect nodeField="color" protoField="color"></connect>
</IS>
</Color>
<TextureCoordinate containerField="texCoord" DEF="pi_1"><IS><connect nodeField="point" protoField="texCoord"></connect>
</IS>
</TextureCoordinate>
<Coordinate DEF="ni_1"><IS><connect nodeField="point" protoField="coord"></connect>
</IS>
</Coordinate>
</IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" USE="fi_1"></Appearance>
<IndexedFaceSet USE="mi_1"></IndexedFaceSet>
</Shape>
<Shape><Appearance containerField="appearance" USE="li_1"></Appearance>
<IndexedFaceSet USE="mi_1"></IndexedFaceSet>
</Shape>
</Switch>
<Script DEF="qi_1" directOutput="true"><field name="set_p" accessType="inputOnly" type="SFBool"></field>
<field name="set_coord" accessType="inputOnly" type="MFVec3f"></field>
<field name="set_texCoord" accessType="inputOnly" type="MFVec2f"></field>
<field name="set_hd" accessType="inputOnly" type="SFFloat"></field>
<field name="set_height" accessType="inputOnly" type="SFFloat"></field>
<field name="set_diffuseColor" accessType="inputOnly" type="SFColor"></field>
<field name="w" accessType="inputOnly" type="SFBool"></field>
<field name="set_v" accessType="inputOnly" type="SFNode"></field>
<field name="coordIndex" accessType="outputOnly" type="MFInt32"></field>
<field name="p_changed" accessType="outputOnly" type="SFBool"></field>
<field name="coord_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="texCoord_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="color_changed" accessType="outputOnly" type="MFColor"></field>
<field name="hd_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="height_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="diffuseColor_changed" accessType="outputOnly" type="SFColor"></field>
<field name="v_changed" accessType="outputOnly" type="SFNode"></field>
<field name="p" accessType="initializeOnly" type="SFBool"></field>
<field name="coord" accessType="initializeOnly" type="MFVec3f"></field>
<field name="texCoord" accessType="initializeOnly" type="MFVec2f"></field>
<field name="color" accessType="initializeOnly" type="MFColor"></field>
<field name="ai" accessType="initializeOnly" type="MFInt32"></field>
<field name="H" accessType="initializeOnly" type="SFBool"></field>
<field name="Jb" accessType="initializeOnly" type="SFColor"></field>
<field name="Kb" accessType="initializeOnly" type="SFColor"></field>
<field name="Lb" accessType="initializeOnly" type="SFInt32"></field>
<field name="hd" accessType="initializeOnly" type="SFFloat"></field>
<field name="height" accessType="initializeOnly" type="SFFloat"></field>
<field name="di" accessType="initializeOnly" type="SFBool"></field>
<field name="diffuseColor" accessType="initializeOnly" type="SFColor"></field>
<field name="ma" accessType="initializeOnly" type="SFNode"><Switch USE="ei_1"></Switch>
</field>
<field name="ic" accessType="initializeOnly" type="SFNode"><Appearance USE="fi_1"></Appearance>
</field>
<field name="jc" accessType="initializeOnly" type="SFNode"><Appearance USE="li_1"></Appearance>
</field>
<field name="ci" accessType="initializeOnly" type="SFVec2f"></field>
<IS><connect nodeField="set_p" protoField="set_p"></connect>
<connect nodeField="set_coord" protoField="set_coord"></connect>
<connect nodeField="set_texCoord" protoField="set_texCoord"></connect>
<connect nodeField="set_hd" protoField="set_hd"></connect>
<connect nodeField="set_height" protoField="set_height"></connect>
<connect nodeField="set_diffuseColor" protoField="set_diffuseColor"></connect>
<connect nodeField="w" protoField="w"></connect>
<connect nodeField="set_v" protoField="set_v"></connect>
<connect nodeField="p_changed" protoField="p_changed"></connect>
<connect nodeField="coord_changed" protoField="coord_changed"></connect>
<connect nodeField="texCoord_changed" protoField="texCoord_changed"></connect>
<connect nodeField="hd_changed" protoField="hd_changed"></connect>
<connect nodeField="height_changed" protoField="height_changed"></connect>
<connect nodeField="diffuseColor_changed" protoField="diffuseColor_changed"></connect>
<connect nodeField="v_changed" protoField="v_changed"></connect>
<connect nodeField="p" protoField="p"></connect>
<connect nodeField="ai" protoField="ai"></connect>
<connect nodeField="H" protoField="H"></connect>
<connect nodeField="Jb" protoField="Jb"></connect>
<connect nodeField="Kb" protoField="Kb"></connect>
<connect nodeField="Lb" protoField="Lb"></connect>
<connect nodeField="hd" protoField="hd"></connect>
<connect nodeField="height" protoField="height"></connect>
<connect nodeField="di" protoField="di"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="ci" protoField="ci"></connect>
</IS>
<![CDATA[javascript:
function ld(){
ri=-0.5*hd/72;
si=-ri;
ti=-0.5*height/72;
ui=-ti;
if(di==FALSE){
vi=(si-ri)/ai[0];
wi=(ui-ti)/ai[1];
xi=1/ai[0];
yi=1/ai[1];
coord.length=(ai[0]+1)*(ai[1]+1);
texCoord.length=coord.length;
for(J=0;J<=ai[1];J++){
for(qc=0;qc<=ai[0];qc++){
index=J*(ai[0]+1)+qc;
if(qc==ai[0]){
coord[index].x=si;
}else{
coord[index].x=ri+qc*vi;
}
if(J==ai[1]){
coord[index].y=ui;
}else{
coord[index].y=ti+J*wi;
}
coord[index].z=0;
if(qc==ai[0]){
texCoord[index].x=.5+.5*ci[0];
}else{
texCoord[index].x=.5-.5*ci[0]+qc*xi*ci[0];
}
if(J==ai[1]){
texCoord[index].y=.5+.5*ci[1];
}else{
texCoord[index].y=.5-.5*ci[1]+J*yi*ci[1];
}
}
}
index=0;
for(J=0;J<ai[1];J++){
for(qc=0;qc<ai[0];qc++){
coordIndex[index++]=J*(ai[0]+1)+qc;
coordIndex[index++]=J*(ai[0]+1)+qc+1;
coordIndex[index++]=(J+1)*(ai[0]+1)+qc+1;
coordIndex[index++]=(J+1)*(ai[0]+1)+qc;
coordIndex[index++]=-1;
}
}
}else{
coord.length=1+(ai[0])*(ai[1]);
texCoord.length=1+(ai[0])*(ai[1]);
index=0;
coord[index].x=0;
coord[index].y=0;
coord[index].z=0;
texCoord[index].x=.5;
texCoord[index].y=.5;
zi=new MFVec3f();
zi.length=ai[0];
angle=0;
Ai=2*Math.PI/ai[0];
for(J=0;J<ai[0];J++){
zi[J].x=Math.cos(angle);
zi[J].y=Math.sin(angle);
zi[J].z=0;
angle+=Ai;
}
for(J=0;J<ai[1];J++){
Bi=0.5*hd*(J+1)/(ai[1]*72);
Ci=0.5*height*(J+1)/(ai[1]*72);
Di=0.5*(J+1)/ai[1];
for(qc=0;qc<ai[0];qc++){
index=1+J*(ai[0])+qc;
coord[index].x=zi[qc].x*Bi;
coord[index].y=zi[qc].y*Ci;
texCoord[index].x=0.5+zi[qc].x*Di*ci[0];
texCoord[index].y=0.5+zi[qc].y*Di*ci[1];
coord[index].z=0;
}
}
index=0;
for(J=0;J<ai[1];J++){
if(J==0){
for(qc=0;qc<ai[0];qc++){
coordIndex[index++]=0;
coordIndex[index++]=1+(J*ai[0])+qc;
Ei=(qc+1)%ai[0];
coordIndex[index++]=1+(J*ai[0])+Ei;
coordIndex[index++]=-1;
}
}else{
for(qc=0;qc<ai[0];qc++){
coordIndex[index++]=1+((J-1)*ai[0])+qc;
Ei=(qc+1)%ai[0];
coordIndex[index++]=1+(J*ai[0])+qc;
coordIndex[index++]=1+(J*ai[0])+Ei;
coordIndex[index++]=1+((J-1)*ai[0])+Ei;
coordIndex[index++]=-1;
}
}
}
}
hd_changed=hd;
height_changed=height;
coord_changed=coord;
texCoord_changed=texCoord;
}
function gd(){
if((H==TRUE)&&(Lb==-1))return;
ri=-0.5*hd/72;
si=-ri;
ti=-0.5*height/72;
ui=-ti;
for(id=0;id<coord.length;id++){
if(Lb==0){
fraction=(coord[id].x-ri)/(si-ri);
}else if(Lb==1){
fraction=(coord[id].y-ti)/(ui-ti);
}else if((Lb==2)&&(di==TRUE)){
if(id==0){
fraction=0;
Fi=1;
}else{
fraction=Fi/ai[1];
if((id%ai[0])==0){
Fi++;
}
}
}
jd=new SFColor(0,0,0);
if(Lb==-1){
jd=diffuseColor;
}else{
jd.r=Kb.r*(1-fraction)+
Jb.r*fraction;
jd.g=Kb.g*(1-fraction)+
Jb.g*fraction;
jd.b=Kb.b*(1-fraction)+
Jb.b*fraction;
}
color[id]=jd;
}
color_changed=color;
}
function set_p(n){
if(n==TRUE){
if(H==TRUE){
if(Lb>=0){
ma.whichChoice=2;
}else{
ma.whichChoice=0;
}
}else{
if(Lb>=0){
ma.whichChoice=3;
}else{
ma.whichChoice=1;
}
}
}else{
ma.whichChoice=-1;
}
p=n;
p_changed=n;
}
function initialize(){
ld();
v_changed=ic.texture_changed;
diffuseColor_changed=diffuseColor;
gd();
set_p(p);
}
function set_coord(n){
coord_changed=n;
}
function set_texCoord(n){
texCoord_changed=n;
}
function set_v(n){
ic.set_texture=n;
jc.set_texture=n;
v_changed=n;
}
function set_hd(n){
hd=n;
ld();
}
function set_height(n){
height=n;
ld();
}
function set_diffuseColor(n){
diffuseColor=n;
diffuseColor_changed=n;
gd();
}
function w(){
}]]></Script>
<ROUTE fromNode="qi_1" fromField="coord_changed" toNode="ji_1" toField="set_point"></ROUTE>
<ROUTE fromNode="qi_1" fromField="texCoord_changed" toNode="ki_1" toField="set_point"></ROUTE>
<ROUTE fromNode="qi_1" fromField="coordIndex" toNode="ii_1" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="qi_1" fromField="coord_changed" toNode="ni_1" toField="set_point"></ROUTE>
<ROUTE fromNode="qi_1" fromField="color_changed" toNode="oi_1" toField="set_color"></ROUTE>
<ROUTE fromNode="qi_1" fromField="texCoord_changed" toNode="pi_1" toField="set_point"></ROUTE>
<ROUTE fromNode="qi_1" fromField="coordIndex" toNode="mi_1" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="qi_1" fromField="coordIndex" toNode="mi_1" toField="set_colorIndex"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare1349.name = "Zh";
ProtoInterface ProtoInterface1350 = createNode("ProtoInterface");
field field1351 = createNode("field");
field1351.name = "set_p";
field1351.accessType = "inputOnly";
field1351.type = "SFBool";
ProtoInterface1350.field = new MFNode();

ProtoInterface1350.field[0] = field1351;

field field1352 = createNode("field");
field1352.name = "set_coord";
field1352.accessType = "inputOnly";
field1352.type = "MFVec3f";
ProtoInterface1350.field[1] = field1352;

field field1353 = createNode("field");
field1353.name = "set_texCoord";
field1353.accessType = "inputOnly";
field1353.type = "MFVec2f";
ProtoInterface1350.field[2] = field1353;

field field1354 = createNode("field");
field1354.name = "set_hd";
field1354.accessType = "inputOnly";
field1354.type = "SFFloat";
ProtoInterface1350.field[3] = field1354;

field field1355 = createNode("field");
field1355.name = "set_height";
field1355.accessType = "inputOnly";
field1355.type = "SFFloat";
ProtoInterface1350.field[4] = field1355;

field field1356 = createNode("field");
field1356.name = "set_diffuseColor";
field1356.accessType = "inputOnly";
field1356.type = "SFColor";
ProtoInterface1350.field[5] = field1356;

field field1357 = createNode("field");
field1357.name = "w";
field1357.accessType = "inputOnly";
field1357.type = "SFBool";
ProtoInterface1350.field[6] = field1357;

field field1358 = createNode("field");
field1358.name = "set_v";
field1358.accessType = "inputOnly";
field1358.type = "SFNode";
ProtoInterface1350.field[7] = field1358;

field field1359 = createNode("field");
field1359.name = "p_changed";
field1359.accessType = "outputOnly";
field1359.type = "SFBool";
ProtoInterface1350.field[8] = field1359;

field field1360 = createNode("field");
field1360.name = "coord_changed";
field1360.accessType = "outputOnly";
field1360.type = "MFVec3f";
ProtoInterface1350.field[9] = field1360;

field field1361 = createNode("field");
field1361.name = "texCoord_changed";
field1361.accessType = "outputOnly";
field1361.type = "MFVec2f";
ProtoInterface1350.field[10] = field1361;

field field1362 = createNode("field");
field1362.name = "hd_changed";
field1362.accessType = "outputOnly";
field1362.type = "SFFloat";
ProtoInterface1350.field[11] = field1362;

field field1363 = createNode("field");
field1363.name = "height_changed";
field1363.accessType = "outputOnly";
field1363.type = "SFFloat";
ProtoInterface1350.field[12] = field1363;

field field1364 = createNode("field");
field1364.name = "diffuseColor_changed";
field1364.accessType = "outputOnly";
field1364.type = "SFColor";
ProtoInterface1350.field[13] = field1364;

field field1365 = createNode("field");
field1365.name = "v_changed";
field1365.accessType = "outputOnly";
field1365.type = "SFNode";
ProtoInterface1350.field[14] = field1365;

field field1366 = createNode("field");
field1366.name = "url";
field1366.accessType = "inputOutput";
field1366.type = "MFString";
ProtoInterface1350.field[15] = field1366;

field field1367 = createNode("field");
field1367.name = "transparency";
field1367.accessType = "inputOutput";
field1367.type = "SFFloat";
ProtoInterface1350.field[16] = field1367;

field field1368 = createNode("field");
field1368.name = "emissiveColor";
field1368.accessType = "inputOutput";
field1368.type = "SFColor";
ProtoInterface1350.field[17] = field1368;

field field1369 = createNode("field");
field1369.name = "specularColor";
field1369.accessType = "inputOutput";
field1369.type = "SFColor";
ProtoInterface1350.field[18] = field1369;

field field1370 = createNode("field");
field1370.name = "shininess";
field1370.accessType = "inputOutput";
field1370.type = "SFFloat";
field1370.value = "0.2";
ProtoInterface1350.field[19] = field1370;

field field1371 = createNode("field");
field1371.name = "q";
field1371.accessType = "inputOutput";
field1371.type = "SFVec2f";
field1371.value = "-0.5 -0.5";
ProtoInterface1350.field[20] = field1371;

field field1372 = createNode("field");
field1372.name = "s";
field1372.accessType = "inputOutput";
field1372.type = "SFFloat";
ProtoInterface1350.field[21] = field1372;

field field1373 = createNode("field");
field1373.name = "t";
field1373.accessType = "inputOutput";
field1373.type = "SFVec2f";
field1373.value = "1 1";
ProtoInterface1350.field[22] = field1373;

field field1374 = createNode("field");
field1374.name = "u";
field1374.accessType = "inputOutput";
field1374.type = "SFVec2f";
ProtoInterface1350.field[23] = field1374;

field field1375 = createNode("field");
field1375.name = "B";
field1375.accessType = "inputOutput";
field1375.type = "SFNode";
ProtoInterface1350.field[24] = field1375;

field field1376 = createNode("field");
field1376.name = "C";
field1376.accessType = "inputOutput";
field1376.type = "MFNode";
ProtoInterface1350.field[25] = field1376;

field field1377 = createNode("field");
field1377.name = "D";
field1377.accessType = "inputOutput";
field1377.type = "SFNode";
ProtoInterface1350.field[26] = field1377;

field field1378 = createNode("field");
field1378.name = "F";
field1378.accessType = "inputOutput";
field1378.type = "SFInt32";
field1378.value = "-1";
ProtoInterface1350.field[27] = field1378;

field field1379 = createNode("field");
field1379.name = "p";
field1379.accessType = "initializeOnly";
field1379.type = "SFBool";
field1379.value = "true";
ProtoInterface1350.field[28] = field1379;

field field1380 = createNode("field");
field1380.name = "hd";
field1380.accessType = "initializeOnly";
field1380.type = "SFFloat";
field1380.value = "72";
ProtoInterface1350.field[29] = field1380;

field field1381 = createNode("field");
field1381.name = "height";
field1381.accessType = "initializeOnly";
field1381.type = "SFFloat";
field1381.value = "72";
ProtoInterface1350.field[30] = field1381;

field field1382 = createNode("field");
field1382.name = "ai";
field1382.accessType = "initializeOnly";
field1382.type = "MFInt32";
field1382.value = "1 1";
ProtoInterface1350.field[31] = field1382;

field field1383 = createNode("field");
field1383.name = "bi";
field1383.accessType = "initializeOnly";
field1383.type = "SFInt32";
field1383.value = "-1";
ProtoInterface1350.field[32] = field1383;

field field1384 = createNode("field");
field1384.name = "Jb";
field1384.accessType = "initializeOnly";
field1384.type = "SFColor";
ProtoInterface1350.field[33] = field1384;

field field1385 = createNode("field");
field1385.name = "Kb";
field1385.accessType = "initializeOnly";
field1385.type = "SFColor";
ProtoInterface1350.field[34] = field1385;

field field1386 = createNode("field");
field1386.name = "Lb";
field1386.accessType = "initializeOnly";
field1386.type = "SFInt32";
field1386.value = "-1";
ProtoInterface1350.field[35] = field1386;

field field1387 = createNode("field");
field1387.name = "H";
field1387.accessType = "initializeOnly";
field1387.type = "SFBool";
field1387.value = "true";
ProtoInterface1350.field[36] = field1387;

field field1388 = createNode("field");
field1388.name = "ci";
field1388.accessType = "initializeOnly";
field1388.type = "SFVec2f";
field1388.value = "1 1";
ProtoInterface1350.field[37] = field1388;

field field1389 = createNode("field");
field1389.name = "diffuseColor";
field1389.accessType = "initializeOnly";
field1389.type = "SFColor";
field1389.value = "1 1 1";
ProtoInterface1350.field[38] = field1389;

field field1390 = createNode("field");
field1390.name = "di";
field1390.accessType = "initializeOnly";
field1390.type = "SFBool";
ProtoInterface1350.field[39] = field1390;

field field1391 = createNode("field");
field1391.name = "choice";
field1391.accessType = "initializeOnly";
field1391.type = "SFInt32";
ProtoInterface1350.field[40] = field1391;

field field1392 = createNode("field");
field1392.name = "ha";
field1392.accessType = "initializeOnly";
field1392.type = "SFVec3f";
ProtoInterface1350.field[41] = field1392;

field field1393 = createNode("field");
field1393.name = "coord";
field1393.accessType = "initializeOnly";
field1393.type = "MFVec3f";
ProtoInterface1350.field[42] = field1393;

field field1394 = createNode("field");
field1394.name = "texCoord";
field1394.accessType = "initializeOnly";
field1394.type = "MFVec2f";
ProtoInterface1350.field[43] = field1394;

field field1395 = createNode("field");
field1395.name = "coordIndex";
field1395.accessType = "initializeOnly";
field1395.type = "MFInt32";
ProtoInterface1350.field[44] = field1395;

field field1396 = createNode("field");
field1396.name = "color";
field1396.accessType = "initializeOnly";
field1396.type = "MFColor";
ProtoInterface1350.field[45] = field1396;

ProtoDeclare1349.protoInterface = ProtoInterface1350;

ProtoBody ProtoBody1397 = createNode("ProtoBody");
Switch Switch1398 = createNode("Switch");
Switch1398.DEF = "ei_1";
Switch1398.whichChoice = -1;
IS IS1399 = createNode("IS");
connect connect1400 = createNode("connect");
connect1400.nodeField = "whichChoice";
connect1400.protoField = "choice";
IS1399.connect = new MFNode();

IS1399.connect[0] = connect1400;

Switch1398.iS = IS1399;

Shape Shape1401 = createNode("Shape");
Appearance Appearance1402 = createNode("Appearance");
Appearance1402.DEF = "fi_1";
Material Material1403 = createNode("Material");
IS IS1404 = createNode("IS");
connect connect1405 = createNode("connect");
connect1405.nodeField = "diffuseColor";
connect1405.protoField = "diffuseColor";
IS1404.connect = new MFNode();

IS1404.connect[0] = connect1405;

connect connect1406 = createNode("connect");
connect1406.nodeField = "specularColor";
connect1406.protoField = "specularColor";
IS1404.connect[1] = connect1406;

connect connect1407 = createNode("connect");
connect1407.nodeField = "emissiveColor";
connect1407.protoField = "emissiveColor";
IS1404.connect[2] = connect1407;

connect connect1408 = createNode("connect");
connect1408.nodeField = "shininess";
connect1408.protoField = "shininess";
IS1404.connect[3] = connect1408;

connect connect1409 = createNode("connect");
connect1409.nodeField = "transparency";
connect1409.protoField = "transparency";
IS1404.connect[4] = connect1409;

Material1403.iS = IS1404;

Appearance1402.material = Material1403;

ImageTexture ImageTexture1410 = createNode("ImageTexture");
ImageTexture1410.DEF = "gi_1";
IS IS1411 = createNode("IS");
connect connect1412 = createNode("connect");
connect1412.nodeField = "url";
connect1412.protoField = "url";
IS1411.connect = new MFNode();

IS1411.connect[0] = connect1412;

ImageTexture1410.iS = IS1411;

Appearance1402.texture = ImageTexture1410;

TextureTransform TextureTransform1413 = createNode("TextureTransform");
TextureTransform1413.DEF = "hi_1";
IS IS1414 = createNode("IS");
connect connect1415 = createNode("connect");
connect1415.nodeField = "translation";
connect1415.protoField = "u";
IS1414.connect = new MFNode();

IS1414.connect[0] = connect1415;

connect connect1416 = createNode("connect");
connect1416.nodeField = "rotation";
connect1416.protoField = "s";
IS1414.connect[1] = connect1416;

connect connect1417 = createNode("connect");
connect1417.nodeField = "scale";
connect1417.protoField = "t";
IS1414.connect[2] = connect1417;

connect connect1418 = createNode("connect");
connect1418.nodeField = "center";
connect1418.protoField = "q";
IS1414.connect[3] = connect1418;

TextureTransform1413.iS = IS1414;

Appearance1402.textureTransform = TextureTransform1413;

Shape1401.appearance = Appearance1402;

IndexedFaceSet IndexedFaceSet1419 = createNode("IndexedFaceSet");
IndexedFaceSet1419.DEF = "ii_1";
IndexedFaceSet1419.solid = False;
IndexedFaceSet1419.creaseAngle = 3;
IS IS1420 = createNode("IS");
connect connect1421 = createNode("connect");
connect1421.nodeField = "coordIndex";
connect1421.protoField = "coordIndex";
IS1420.connect = new MFNode();

IS1420.connect[0] = connect1421;

IndexedFaceSet1419.iS = IS1420;

TextureCoordinate TextureCoordinate1422 = createNode("TextureCoordinate");
TextureCoordinate1422.DEF = "ki_1";
IS IS1423 = createNode("IS");
connect connect1424 = createNode("connect");
connect1424.nodeField = "point";
connect1424.protoField = "texCoord";
IS1423.connect = new MFNode();

IS1423.connect[0] = connect1424;

TextureCoordinate1422.iS = IS1423;

IndexedFaceSet1419.texCoord = TextureCoordinate1422;

Coordinate Coordinate1425 = createNode("Coordinate");
Coordinate1425.DEF = "ji_1";
IS IS1426 = createNode("IS");
connect connect1427 = createNode("connect");
connect1427.nodeField = "point";
connect1427.protoField = "coord";
IS1426.connect = new MFNode();

IS1426.connect[0] = connect1427;

Coordinate1425.iS = IS1426;

IndexedFaceSet1419.coord = Coordinate1425;

Shape1401.geometry = IndexedFaceSet1419;

Switch1398.children = new MFNode();

Switch1398.children[0] = Shape1401;

Shape Shape1428 = createNode("Shape");
Appearance Appearance1429 = createNode("Appearance");
Appearance1429.DEF = "li_1";
ImageTexture ImageTexture1430 = createNode("ImageTexture");
ImageTexture1430.USE = "gi_1";
Appearance1429.texture = ImageTexture1430;

TextureTransform TextureTransform1431 = createNode("TextureTransform");
TextureTransform1431.USE = "hi_1";
Appearance1429.textureTransform = TextureTransform1431;

Shape1428.appearance = Appearance1429;

IndexedFaceSet IndexedFaceSet1432 = createNode("IndexedFaceSet");
IndexedFaceSet1432.DEF = "mi_1";
IndexedFaceSet1432.solid = False;
IndexedFaceSet1432.creaseAngle = 3;
IS IS1433 = createNode("IS");
connect connect1434 = createNode("connect");
connect1434.nodeField = "coordIndex";
connect1434.protoField = "coordIndex";
IS1433.connect = new MFNode();

IS1433.connect[0] = connect1434;

IndexedFaceSet1432.iS = IS1433;

Color Color1435 = createNode("Color");
Color1435.DEF = "oi_1";
IS IS1436 = createNode("IS");
connect connect1437 = createNode("connect");
connect1437.nodeField = "color";
connect1437.protoField = "color";
IS1436.connect = new MFNode();

IS1436.connect[0] = connect1437;

Color1435.iS = IS1436;

IndexedFaceSet1432.color = Color1435;

TextureCoordinate TextureCoordinate1438 = createNode("TextureCoordinate");
TextureCoordinate1438.DEF = "pi_1";
IS IS1439 = createNode("IS");
connect connect1440 = createNode("connect");
connect1440.nodeField = "point";
connect1440.protoField = "texCoord";
IS1439.connect = new MFNode();

IS1439.connect[0] = connect1440;

TextureCoordinate1438.iS = IS1439;

IndexedFaceSet1432.texCoord = TextureCoordinate1438;

Coordinate Coordinate1441 = createNode("Coordinate");
Coordinate1441.DEF = "ni_1";
IS IS1442 = createNode("IS");
connect connect1443 = createNode("connect");
connect1443.nodeField = "point";
connect1443.protoField = "coord";
IS1442.connect = new MFNode();

IS1442.connect[0] = connect1443;

Coordinate1441.iS = IS1442;

IndexedFaceSet1432.coord = Coordinate1441;

Shape1428.geometry = IndexedFaceSet1432;

Switch1398.children[1] = Shape1428;

Shape Shape1444 = createNode("Shape");
Appearance Appearance1445 = createNode("Appearance");
Appearance1445.USE = "fi_1";
Shape1444.appearance = Appearance1445;

IndexedFaceSet IndexedFaceSet1446 = createNode("IndexedFaceSet");
IndexedFaceSet1446.USE = "mi_1";
Shape1444.geometry = IndexedFaceSet1446;

Switch1398.children[2] = Shape1444;

Shape Shape1447 = createNode("Shape");
Appearance Appearance1448 = createNode("Appearance");
Appearance1448.USE = "li_1";
Shape1447.appearance = Appearance1448;

IndexedFaceSet IndexedFaceSet1449 = createNode("IndexedFaceSet");
IndexedFaceSet1449.USE = "mi_1";
Shape1447.geometry = IndexedFaceSet1449;

Switch1398.children[3] = Shape1447;

ProtoBody1397.children = new MFNode();

ProtoBody1397.children[0] = Switch1398;

Script Script1450 = createNode("Script");
Script1450.DEF = "qi_1";
Script1450.directOutput = True;
field field1451 = createNode("field");
field1451.name = "set_p";
field1451.accessType = "inputOnly";
field1451.type = "SFBool";
Script1450.field = new MFNode();

Script1450.field[0] = field1451;

field field1452 = createNode("field");
field1452.name = "set_coord";
field1452.accessType = "inputOnly";
field1452.type = "MFVec3f";
Script1450.field[1] = field1452;

field field1453 = createNode("field");
field1453.name = "set_texCoord";
field1453.accessType = "inputOnly";
field1453.type = "MFVec2f";
Script1450.field[2] = field1453;

field field1454 = createNode("field");
field1454.name = "set_hd";
field1454.accessType = "inputOnly";
field1454.type = "SFFloat";
Script1450.field[3] = field1454;

field field1455 = createNode("field");
field1455.name = "set_height";
field1455.accessType = "inputOnly";
field1455.type = "SFFloat";
Script1450.field[4] = field1455;

field field1456 = createNode("field");
field1456.name = "set_diffuseColor";
field1456.accessType = "inputOnly";
field1456.type = "SFColor";
Script1450.field[5] = field1456;

field field1457 = createNode("field");
field1457.name = "w";
field1457.accessType = "inputOnly";
field1457.type = "SFBool";
Script1450.field[6] = field1457;

field field1458 = createNode("field");
field1458.name = "set_v";
field1458.accessType = "inputOnly";
field1458.type = "SFNode";
Script1450.field[7] = field1458;

field field1459 = createNode("field");
field1459.name = "coordIndex";
field1459.accessType = "outputOnly";
field1459.type = "MFInt32";
Script1450.field[8] = field1459;

field field1460 = createNode("field");
field1460.name = "p_changed";
field1460.accessType = "outputOnly";
field1460.type = "SFBool";
Script1450.field[9] = field1460;

field field1461 = createNode("field");
field1461.name = "coord_changed";
field1461.accessType = "outputOnly";
field1461.type = "MFVec3f";
Script1450.field[10] = field1461;

field field1462 = createNode("field");
field1462.name = "texCoord_changed";
field1462.accessType = "outputOnly";
field1462.type = "MFVec2f";
Script1450.field[11] = field1462;

field field1463 = createNode("field");
field1463.name = "color_changed";
field1463.accessType = "outputOnly";
field1463.type = "MFColor";
Script1450.field[12] = field1463;

field field1464 = createNode("field");
field1464.name = "hd_changed";
field1464.accessType = "outputOnly";
field1464.type = "SFFloat";
Script1450.field[13] = field1464;

field field1465 = createNode("field");
field1465.name = "height_changed";
field1465.accessType = "outputOnly";
field1465.type = "SFFloat";
Script1450.field[14] = field1465;

field field1466 = createNode("field");
field1466.name = "diffuseColor_changed";
field1466.accessType = "outputOnly";
field1466.type = "SFColor";
Script1450.field[15] = field1466;

field field1467 = createNode("field");
field1467.name = "v_changed";
field1467.accessType = "outputOnly";
field1467.type = "SFNode";
Script1450.field[16] = field1467;

field field1468 = createNode("field");
field1468.name = "p";
field1468.accessType = "initializeOnly";
field1468.type = "SFBool";
Script1450.field[17] = field1468;

field field1469 = createNode("field");
field1469.name = "coord";
field1469.accessType = "initializeOnly";
field1469.type = "MFVec3f";
Script1450.field[18] = field1469;

field field1470 = createNode("field");
field1470.name = "texCoord";
field1470.accessType = "initializeOnly";
field1470.type = "MFVec2f";
Script1450.field[19] = field1470;

field field1471 = createNode("field");
field1471.name = "color";
field1471.accessType = "initializeOnly";
field1471.type = "MFColor";
Script1450.field[20] = field1471;

field field1472 = createNode("field");
field1472.name = "ai";
field1472.accessType = "initializeOnly";
field1472.type = "MFInt32";
Script1450.field[21] = field1472;

field field1473 = createNode("field");
field1473.name = "H";
field1473.accessType = "initializeOnly";
field1473.type = "SFBool";
Script1450.field[22] = field1473;

field field1474 = createNode("field");
field1474.name = "Jb";
field1474.accessType = "initializeOnly";
field1474.type = "SFColor";
Script1450.field[23] = field1474;

field field1475 = createNode("field");
field1475.name = "Kb";
field1475.accessType = "initializeOnly";
field1475.type = "SFColor";
Script1450.field[24] = field1475;

field field1476 = createNode("field");
field1476.name = "Lb";
field1476.accessType = "initializeOnly";
field1476.type = "SFInt32";
Script1450.field[25] = field1476;

field field1477 = createNode("field");
field1477.name = "hd";
field1477.accessType = "initializeOnly";
field1477.type = "SFFloat";
Script1450.field[26] = field1477;

field field1478 = createNode("field");
field1478.name = "height";
field1478.accessType = "initializeOnly";
field1478.type = "SFFloat";
Script1450.field[27] = field1478;

field field1479 = createNode("field");
field1479.name = "di";
field1479.accessType = "initializeOnly";
field1479.type = "SFBool";
Script1450.field[28] = field1479;

field field1480 = createNode("field");
field1480.name = "diffuseColor";
field1480.accessType = "initializeOnly";
field1480.type = "SFColor";
Script1450.field[29] = field1480;

field field1481 = createNode("field");
field1481.name = "ma";
field1481.accessType = "initializeOnly";
field1481.type = "SFNode";
Switch Switch1482 = createNode("Switch");
Switch1482.USE = "ei_1";
field1481.children = new MFNode();

field1481.children[0] = Switch1482;

Script1450.field[30] = field1481;

field field1483 = createNode("field");
field1483.name = "ic";
field1483.accessType = "initializeOnly";
field1483.type = "SFNode";
Appearance Appearance1484 = createNode("Appearance");
Appearance1484.USE = "fi_1";
field1483.children = new MFNode();

field1483.children[0] = Appearance1484;

Script1450.field[31] = field1483;

field field1485 = createNode("field");
field1485.name = "jc";
field1485.accessType = "initializeOnly";
field1485.type = "SFNode";
Appearance Appearance1486 = createNode("Appearance");
Appearance1486.USE = "li_1";
field1485.children = new MFNode();

field1485.children[0] = Appearance1486;

Script1450.field[32] = field1485;

field field1487 = createNode("field");
field1487.name = "ci";
field1487.accessType = "initializeOnly";
field1487.type = "SFVec2f";
Script1450.field[33] = field1487;

IS IS1488 = createNode("IS");
connect connect1489 = createNode("connect");
connect1489.nodeField = "set_p";
connect1489.protoField = "set_p";
IS1488.connect = new MFNode();

IS1488.connect[0] = connect1489;

connect connect1490 = createNode("connect");
connect1490.nodeField = "set_coord";
connect1490.protoField = "set_coord";
IS1488.connect[1] = connect1490;

connect connect1491 = createNode("connect");
connect1491.nodeField = "set_texCoord";
connect1491.protoField = "set_texCoord";
IS1488.connect[2] = connect1491;

connect connect1492 = createNode("connect");
connect1492.nodeField = "set_hd";
connect1492.protoField = "set_hd";
IS1488.connect[3] = connect1492;

connect connect1493 = createNode("connect");
connect1493.nodeField = "set_height";
connect1493.protoField = "set_height";
IS1488.connect[4] = connect1493;

connect connect1494 = createNode("connect");
connect1494.nodeField = "set_diffuseColor";
connect1494.protoField = "set_diffuseColor";
IS1488.connect[5] = connect1494;

connect connect1495 = createNode("connect");
connect1495.nodeField = "w";
connect1495.protoField = "w";
IS1488.connect[6] = connect1495;

connect connect1496 = createNode("connect");
connect1496.nodeField = "set_v";
connect1496.protoField = "set_v";
IS1488.connect[7] = connect1496;

connect connect1497 = createNode("connect");
connect1497.nodeField = "p_changed";
connect1497.protoField = "p_changed";
IS1488.connect[8] = connect1497;

connect connect1498 = createNode("connect");
connect1498.nodeField = "coord_changed";
connect1498.protoField = "coord_changed";
IS1488.connect[9] = connect1498;

connect connect1499 = createNode("connect");
connect1499.nodeField = "texCoord_changed";
connect1499.protoField = "texCoord_changed";
IS1488.connect[10] = connect1499;

connect connect1500 = createNode("connect");
connect1500.nodeField = "hd_changed";
connect1500.protoField = "hd_changed";
IS1488.connect[11] = connect1500;

connect connect1501 = createNode("connect");
connect1501.nodeField = "height_changed";
connect1501.protoField = "height_changed";
IS1488.connect[12] = connect1501;

connect connect1502 = createNode("connect");
connect1502.nodeField = "diffuseColor_changed";
connect1502.protoField = "diffuseColor_changed";
IS1488.connect[13] = connect1502;

connect connect1503 = createNode("connect");
connect1503.nodeField = "v_changed";
connect1503.protoField = "v_changed";
IS1488.connect[14] = connect1503;

connect connect1504 = createNode("connect");
connect1504.nodeField = "p";
connect1504.protoField = "p";
IS1488.connect[15] = connect1504;

connect connect1505 = createNode("connect");
connect1505.nodeField = "ai";
connect1505.protoField = "ai";
IS1488.connect[16] = connect1505;

connect connect1506 = createNode("connect");
connect1506.nodeField = "H";
connect1506.protoField = "H";
IS1488.connect[17] = connect1506;

connect connect1507 = createNode("connect");
connect1507.nodeField = "Jb";
connect1507.protoField = "Jb";
IS1488.connect[18] = connect1507;

connect connect1508 = createNode("connect");
connect1508.nodeField = "Kb";
connect1508.protoField = "Kb";
IS1488.connect[19] = connect1508;

connect connect1509 = createNode("connect");
connect1509.nodeField = "Lb";
connect1509.protoField = "Lb";
IS1488.connect[20] = connect1509;

connect connect1510 = createNode("connect");
connect1510.nodeField = "hd";
connect1510.protoField = "hd";
IS1488.connect[21] = connect1510;

connect connect1511 = createNode("connect");
connect1511.nodeField = "height";
connect1511.protoField = "height";
IS1488.connect[22] = connect1511;

connect connect1512 = createNode("connect");
connect1512.nodeField = "di";
connect1512.protoField = "di";
IS1488.connect[23] = connect1512;

connect connect1513 = createNode("connect");
connect1513.nodeField = "diffuseColor";
connect1513.protoField = "diffuseColor";
IS1488.connect[24] = connect1513;

connect connect1514 = createNode("connect");
connect1514.nodeField = "ci";
connect1514.protoField = "ci";
IS1488.connect[25] = connect1514;

Script1450.iS = IS1488;


Script1450.setSourceCode(`javascript:\n"+
"function ld(){\n"+
"ri=-0.5*hd/72;\n"+
"si=-ri;\n"+
"ti=-0.5*height/72;\n"+
"ui=-ti;\n"+
"if(di==FALSE){\n"+
"vi=(si-ri)/ai[0];\n"+
"wi=(ui-ti)/ai[1];\n"+
"xi=1/ai[0];\n"+
"yi=1/ai[1];\n"+
"coord.length=(ai[0]+1)*(ai[1]+1);\n"+
"texCoord.length=coord.length;\n"+
"for(J=0;J<=ai[1];J++){\n"+
"for(qc=0;qc<=ai[0];qc++){\n"+
"index=J*(ai[0]+1)+qc;\n"+
"if(qc==ai[0]){\n"+
"coord[index].x=si;\n"+
"}else{\n"+
"coord[index].x=ri+qc*vi;\n"+
"}\n"+
"if(J==ai[1]){\n"+
"coord[index].y=ui;\n"+
"}else{\n"+
"coord[index].y=ti+J*wi;\n"+
"}\n"+
"coord[index].z=0;\n"+
"if(qc==ai[0]){\n"+
"texCoord[index].x=.5+.5*ci[0];\n"+
"}else{\n"+
"texCoord[index].x=.5-.5*ci[0]+qc*xi*ci[0];\n"+
"}\n"+
"if(J==ai[1]){\n"+
"texCoord[index].y=.5+.5*ci[1];\n"+
"}else{\n"+
"texCoord[index].y=.5-.5*ci[1]+J*yi*ci[1];\n"+
"}\n"+
"}\n"+
"}\n"+
"index=0;\n"+
"for(J=0;J<ai[1];J++){\n"+
"for(qc=0;qc<ai[0];qc++){\n"+
"coordIndex[index++]=J*(ai[0]+1)+qc;\n"+
"coordIndex[index++]=J*(ai[0]+1)+qc+1;\n"+
"coordIndex[index++]=(J+1)*(ai[0]+1)+qc+1;\n"+
"coordIndex[index++]=(J+1)*(ai[0]+1)+qc;\n"+
"coordIndex[index++]=-1;\n"+
"}\n"+
"}\n"+
"}else{\n"+
"coord.length=1+(ai[0])*(ai[1]);\n"+
"texCoord.length=1+(ai[0])*(ai[1]);\n"+
"index=0;\n"+
"coord[index].x=0;\n"+
"coord[index].y=0;\n"+
"coord[index].z=0;\n"+
"texCoord[index].x=.5;\n"+
"texCoord[index].y=.5;\n"+
"zi=new MFVec3f();\n"+
"zi.length=ai[0];\n"+
"angle=0;\n"+
"Ai=2*Math.PI/ai[0];\n"+
"for(J=0;J<ai[0];J++){\n"+
"zi[J].x=Math.cos(angle);\n"+
"zi[J].y=Math.sin(angle);\n"+
"zi[J].z=0;\n"+
"angle+=Ai;\n"+
"}\n"+
"for(J=0;J<ai[1];J++){\n"+
"Bi=0.5*hd*(J+1)/(ai[1]*72);\n"+
"Ci=0.5*height*(J+1)/(ai[1]*72);\n"+
"Di=0.5*(J+1)/ai[1];\n"+
"for(qc=0;qc<ai[0];qc++){\n"+
"index=1+J*(ai[0])+qc;\n"+
"coord[index].x=zi[qc].x*Bi;\n"+
"coord[index].y=zi[qc].y*Ci;\n"+
"texCoord[index].x=0.5+zi[qc].x*Di*ci[0];\n"+
"texCoord[index].y=0.5+zi[qc].y*Di*ci[1];\n"+
"coord[index].z=0;\n"+
"}\n"+
"}\n"+
"index=0;\n"+
"for(J=0;J<ai[1];J++){\n"+
"if(J==0){\n"+
"for(qc=0;qc<ai[0];qc++){\n"+
"coordIndex[index++]=0;\n"+
"coordIndex[index++]=1+(J*ai[0])+qc;\n"+
"Ei=(qc+1)%ai[0];\n"+
"coordIndex[index++]=1+(J*ai[0])+Ei;\n"+
"coordIndex[index++]=-1;\n"+
"}\n"+
"}else{\n"+
"for(qc=0;qc<ai[0];qc++){\n"+
"coordIndex[index++]=1+((J-1)*ai[0])+qc;\n"+
"Ei=(qc+1)%ai[0];\n"+
"coordIndex[index++]=1+(J*ai[0])+qc;\n"+
"coordIndex[index++]=1+(J*ai[0])+Ei;\n"+
"coordIndex[index++]=1+((J-1)*ai[0])+Ei;\n"+
"coordIndex[index++]=-1;\n"+
"}\n"+
"}\n"+
"}\n"+
"}\n"+
"hd_changed=hd;\n"+
"height_changed=height;\n"+
"coord_changed=coord;\n"+
"texCoord_changed=texCoord;\n"+
"}\n"+
"function gd(){\n"+
"if((H==TRUE)&&(Lb==-1))return;\n"+
"ri=-0.5*hd/72;\n"+
"si=-ri;\n"+
"ti=-0.5*height/72;\n"+
"ui=-ti;\n"+
"for(id=0;id<coord.length;id++){\n"+
"if(Lb==0){\n"+
"fraction=(coord[id].x-ri)/(si-ri);\n"+
"}else if(Lb==1){\n"+
"fraction=(coord[id].y-ti)/(ui-ti);\n"+
"}else if((Lb==2)&&(di==TRUE)){\n"+
"if(id==0){\n"+
"fraction=0;\n"+
"Fi=1;\n"+
"}else{\n"+
"fraction=Fi/ai[1];\n"+
"if((id%ai[0])==0){\n"+
"Fi++;\n"+
"}\n"+
"}\n"+
"}\n"+
"jd=new SFColor(0,0,0);\n"+
"if(Lb==-1){\n"+
"jd=diffuseColor;\n"+
"}else{\n"+
"jd.r=Kb.r*(1-fraction)+\n"+
"Jb.r*fraction;\n"+
"jd.g=Kb.g*(1-fraction)+\n"+
"Jb.g*fraction;\n"+
"jd.b=Kb.b*(1-fraction)+\n"+
"Jb.b*fraction;\n"+
"}\n"+
"color[id]=jd;\n"+
"}\n"+
"color_changed=color;\n"+
"}\n"+
"function set_p(n){\n"+
"if(n==TRUE){\n"+
"if(H==TRUE){\n"+
"if(Lb>=0){\n"+
"ma.whichChoice=2;\n"+
"}else{\n"+
"ma.whichChoice=0;\n"+
"}\n"+
"}else{\n"+
"if(Lb>=0){\n"+
"ma.whichChoice=3;\n"+
"}else{\n"+
"ma.whichChoice=1;\n"+
"}\n"+
"}\n"+
"}else{\n"+
"ma.whichChoice=-1;\n"+
"}\n"+
"p=n;\n"+
"p_changed=n;\n"+
"}\n"+
"function initialize(){\n"+
"ld();\n"+
"v_changed=ic.texture_changed;\n"+
"diffuseColor_changed=diffuseColor;\n"+
"gd();\n"+
"set_p(p);\n"+
"}\n"+
"function set_coord(n){\n"+
"coord_changed=n;\n"+
"}\n"+
"function set_texCoord(n){\n"+
"texCoord_changed=n;\n"+
"}\n"+
"function set_v(n){\n"+
"ic.set_texture=n;\n"+
"jc.set_texture=n;\n"+
"v_changed=n;\n"+
"}\n"+
"function set_hd(n){\n"+
"hd=n;\n"+
"ld();\n"+
"}\n"+
"function set_height(n){\n"+
"height=n;\n"+
"ld();\n"+
"}\n"+
"function set_diffuseColor(n){\n"+
"diffuseColor=n;\n"+
"diffuseColor_changed=n;\n"+
"gd();\n"+
"}\n"+
"function w(){\n"+
"}`)
ProtoBody1397.children[1] = Script1450;

ROUTE ROUTE1515 = createNode("ROUTE");
ROUTE1515.fromNode = "qi_1";
ROUTE1515.fromField = "coord_changed";
ROUTE1515.toNode = "ji_1";
ROUTE1515.toField = "set_point";
ProtoBody1397.children[2] = ROUTE1515;

ROUTE ROUTE1516 = createNode("ROUTE");
ROUTE1516.fromNode = "qi_1";
ROUTE1516.fromField = "texCoord_changed";
ROUTE1516.toNode = "ki_1";
ROUTE1516.toField = "set_point";
ProtoBody1397.children[3] = ROUTE1516;

ROUTE ROUTE1517 = createNode("ROUTE");
ROUTE1517.fromNode = "qi_1";
ROUTE1517.fromField = "coordIndex";
ROUTE1517.toNode = "ii_1";
ROUTE1517.toField = "set_coordIndex";
ProtoBody1397.children[4] = ROUTE1517;

ROUTE ROUTE1518 = createNode("ROUTE");
ROUTE1518.fromNode = "qi_1";
ROUTE1518.fromField = "coord_changed";
ROUTE1518.toNode = "ni_1";
ROUTE1518.toField = "set_point";
ProtoBody1397.children[5] = ROUTE1518;

ROUTE ROUTE1519 = createNode("ROUTE");
ROUTE1519.fromNode = "qi_1";
ROUTE1519.fromField = "color_changed";
ROUTE1519.toNode = "oi_1";
ROUTE1519.toField = "set_color";
ProtoBody1397.children[6] = ROUTE1519;

ROUTE ROUTE1520 = createNode("ROUTE");
ROUTE1520.fromNode = "qi_1";
ROUTE1520.fromField = "texCoord_changed";
ROUTE1520.toNode = "pi_1";
ROUTE1520.toField = "set_point";
ProtoBody1397.children[7] = ROUTE1520;

ROUTE ROUTE1521 = createNode("ROUTE");
ROUTE1521.fromNode = "qi_1";
ROUTE1521.fromField = "coordIndex";
ROUTE1521.toNode = "mi_1";
ROUTE1521.toField = "set_coordIndex";
ProtoBody1397.children[8] = ROUTE1521;

ROUTE ROUTE1522 = createNode("ROUTE");
ROUTE1522.fromNode = "qi_1";
ROUTE1522.fromField = "coordIndex";
ROUTE1522.toNode = "mi_1";
ROUTE1522.toField = "set_colorIndex";
ProtoBody1397.children[9] = ROUTE1522;

ProtoDeclare1349.protoBody = ProtoBody1397;

children[23] = ProtoDeclare1349;

WorldInfo WorldInfo1523 = createNode("WorldInfo");
WorldInfo1523.info = new MFString(new java.lang.String["Published by Cosmo PageFX V1.0"]);
MetadataSet MetadataSet1524 = createNode("MetadataSet");
MetadataSet1524.name = "Titania";
MetadataSet1524.DEF = "Titania";
MetadataSet1524.reference = "http://titania.create3000.de";
MetadataSet MetadataSet1525 = createNode("MetadataSet");
MetadataSet1525.name = "NavigationInfo";
MetadataSet1525.DEF = "NavigationInfo";
MetadataSet1525.reference = "http://titania.create3000.de";
MetadataString MetadataString1526 = createNode("MetadataString");
MetadataString1526.name = "type";
MetadataString1526.DEF = "type";
MetadataString1526.reference = "http://titania.create3000.de";
MetadataString1526.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet1525.value = new MFNode();

MetadataSet1525.value[0] = MetadataString1526;

MetadataSet1524.value = new MFNode();

MetadataSet1524.value[0] = MetadataSet1525;

MetadataSet MetadataSet1527 = createNode("MetadataSet");
MetadataSet1527.name = "Viewpoint";
MetadataSet1527.DEF = "Viewpoint";
MetadataSet1527.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble1528 = createNode("MetadataDouble");
MetadataDouble1528.name = "position";
MetadataDouble1528.DEF = "position";
MetadataDouble1528.reference = "http://titania.create3000.de";
MetadataDouble1528.value = new MFDouble(new double[0,0,5]);
MetadataSet1527.value = new MFNode();

MetadataSet1527.value[0] = MetadataDouble1528;

MetadataDouble MetadataDouble1529 = createNode("MetadataDouble");
MetadataDouble1529.name = "orientation";
MetadataDouble1529.DEF = "orientation";
MetadataDouble1529.reference = "http://titania.create3000.de";
MetadataDouble1529.value = new MFDouble(new double[0,0,1,0]);
MetadataSet1527.value[1] = MetadataDouble1529;

MetadataDouble MetadataDouble1530 = createNode("MetadataDouble");
MetadataDouble1530.name = "centerOfRotation";
MetadataDouble1530.DEF = "centerOfRotation";
MetadataDouble1530.reference = "http://titania.create3000.de";
MetadataDouble1530.value = new MFDouble(new double[0,0,0]);
MetadataSet1527.value[2] = MetadataDouble1530;

MetadataSet1524.value[1] = MetadataSet1527;

WorldInfo1523.metadata = MetadataSet1524;

children[24] = WorldInfo1523;

Group Group1531 = createNode("Group");
Group1531.DEF = "Gi";
ProtoInstance ProtoInstance1532 = createNode("ProtoInstance");
ProtoInstance1532.name = "f";
ProtoInstance1532.DEF = "Hi";
Group1531.children = new MFNode();

Group1531.children[0] = ProtoInstance1532;

Viewpoint Viewpoint1533 = createNode("Viewpoint");
Viewpoint1533.DEF = "Ii";
Viewpoint1533.description = "Home";
Viewpoint1533.position = new SFVec3f(new float[0,0,5]);
Viewpoint1533.fieldOfView = 0.3519;
Group1531.children[1] = Viewpoint1533;

NavigationInfo NavigationInfo1534 = createNode("NavigationInfo");
NavigationInfo1534.DEF = "Ji";
NavigationInfo1534.type = new MFString(new java.lang.String["NONE"]);
Group1531.children[2] = NavigationInfo1534;

Background Background1535 = createNode("Background");
Background1535.DEF = "Ki";
Background1535.skyColor = new MFColor(new float[0.749,0.749,0.749]);
Group1531.children[3] = Background1535;

ProtoInstance ProtoInstance1536 = createNode("ProtoInstance");
ProtoInstance1536.name = "o";
ProtoInstance1536.DEF = "Li";
fieldValue fieldValue1537 = createNode("fieldValue");
fieldValue1537.name = "G";
fieldValue1537.value = "true";
ProtoInstance1536.fieldValue = new MFNode();

ProtoInstance1536.fieldValue[0] = fieldValue1537;

fieldValue fieldValue1538 = createNode("fieldValue");
fieldValue1538.name = "children";
Transform Transform1539 = createNode("Transform");
Transform1539.DEF = "Mi";
Transform1539.translation = new SFVec3f(new float[-0.951,0.2225,2.99]);
Transform1539.rotation = new SFRotation(new float[-0.145494,-0.989359,0,0.7418]);
Transform Transform1540 = createNode("Transform");
Transform1540.DEF = "Ni";
ProtoInstance ProtoInstance1541 = createNode("ProtoInstance");
ProtoInstance1541.name = "K";
ProtoInstance1541.DEF = "Oi";
fieldValue fieldValue1542 = createNode("fieldValue");
fieldValue1542.name = "B";
ProtoInstance ProtoInstance1543 = createNode("ProtoInstance");
ProtoInstance1543.USE = "Li";
fieldValue1542.children = new MFNode();

fieldValue1542.children[0] = ProtoInstance1543;

ProtoInstance1541.fieldValue = new MFNode();

ProtoInstance1541.fieldValue[0] = fieldValue1542;

fieldValue fieldValue1544 = createNode("fieldValue");
fieldValue1544.name = "C";
Transform Transform1545 = createNode("Transform");
Transform1545.USE = "Mi";
fieldValue1544.children = new MFNode();

fieldValue1544.children[0] = Transform1545;

Transform Transform1546 = createNode("Transform");
Transform1546.USE = "Ni";
fieldValue1544.children[1] = Transform1546;

ProtoInstance1541.fieldValue[1] = fieldValue1544;

fieldValue fieldValue1547 = createNode("fieldValue");
fieldValue1547.name = "L";
fieldValue1547.value = "1.528";
ProtoInstance1541.fieldValue[2] = fieldValue1547;

fieldValue fieldValue1548 = createNode("fieldValue");
fieldValue1548.name = "attenuation";
fieldValue1548.value = "0.001 0.6545 0";
ProtoInstance1541.fieldValue[3] = fieldValue1548;

Transform1540.children = new MFNode();

Transform1540.children[0] = ProtoInstance1541;

Transform1539.children = new MFNode();

Transform1539.children[0] = Transform1540;

fieldValue1538.children = new MFNode();

fieldValue1538.children[0] = Transform1539;

Transform Transform1549 = createNode("Transform");
Transform1549.DEF = "Pi";
Transform1549.translation = new SFVec3f(new float[-1.271,-0.1785,0.68]);
Transform1549.rotation = new SFRotation(new float[1,0,0,3.166]);
Transform1549.center = new SFVec3f(new float[0,0,1.94e-8]);
ProtoInstance ProtoInstance1550 = createNode("ProtoInstance");
ProtoInstance1550.name = "Q";
ProtoInstance1550.DEF = "Qi";
fieldValue fieldValue1551 = createNode("fieldValue");
fieldValue1551.name = "center";
fieldValue1551.value = "0 0 1.94e-8";
ProtoInstance1550.fieldValue = new MFNode();

ProtoInstance1550.fieldValue[0] = fieldValue1551;

fieldValue fieldValue1552 = createNode("fieldValue");
fieldValue1552.name = "U";
ProtoInstance ProtoInstance1553 = createNode("ProtoInstance");
ProtoInstance1553.name = "ga";
ProtoInstance1553.DEF = "Ri";
fieldValue fieldValue1554 = createNode("fieldValue");
fieldValue1554.name = "url";
fieldValue1554.value = "\"stripe.png\"";
ProtoInstance1553.fieldValue = new MFNode();

ProtoInstance1553.fieldValue[0] = fieldValue1554;

fieldValue fieldValue1555 = createNode("fieldValue");
fieldValue1555.name = "diffuseColor";
fieldValue1555.value = "1 0 1";
ProtoInstance1553.fieldValue[1] = fieldValue1555;

fieldValue fieldValue1556 = createNode("fieldValue");
fieldValue1556.name = "emissiveColor";
fieldValue1556.value = "0 0 0";
ProtoInstance1553.fieldValue[2] = fieldValue1556;

fieldValue fieldValue1557 = createNode("fieldValue");
fieldValue1557.name = "specularColor";
fieldValue1557.value = "0.04 0.16 0.28";
ProtoInstance1553.fieldValue[3] = fieldValue1557;

fieldValue fieldValue1558 = createNode("fieldValue");
fieldValue1558.name = "shininess";
fieldValue1558.value = "0.02";
ProtoInstance1553.fieldValue[4] = fieldValue1558;

fieldValue fieldValue1559 = createNode("fieldValue");
fieldValue1559.name = "s";
fieldValue1559.value = "1.047";
ProtoInstance1553.fieldValue[5] = fieldValue1559;

fieldValue fieldValue1560 = createNode("fieldValue");
fieldValue1560.name = "t";
fieldValue1560.value = "2 2";
ProtoInstance1553.fieldValue[6] = fieldValue1560;

fieldValue fieldValue1561 = createNode("fieldValue");
fieldValue1561.name = "B";
ProtoInstance ProtoInstance1562 = createNode("ProtoInstance");
ProtoInstance1562.USE = "Li";
fieldValue1561.children = new MFNode();

fieldValue1561.children[0] = ProtoInstance1562;

ProtoInstance1553.fieldValue[7] = fieldValue1561;

fieldValue fieldValue1563 = createNode("fieldValue");
fieldValue1563.name = "C";
Transform Transform1564 = createNode("Transform");
Transform1564.USE = "Pi";
fieldValue1563.children = new MFNode();

fieldValue1563.children[0] = Transform1564;

ProtoInstance ProtoInstance1565 = createNode("ProtoInstance");
ProtoInstance1565.USE = "Qi";
fieldValue1563.children[1] = ProtoInstance1565;

Transform Transform1566 = createNode("Transform");
Transform1566.DEF = "Si";
Transform1566.scale = new SFVec3f(new float[0.5154,0.6149,0.5154]);
ProtoInstance ProtoInstance1567 = createNode("ProtoInstance");
ProtoInstance1567.name = "na";
ProtoInstance1567.DEF = "Ti";
fieldValue fieldValue1568 = createNode("fieldValue");
fieldValue1568.name = "oa";
fieldValue1568.value = "1";
ProtoInstance1567.fieldValue = new MFNode();

ProtoInstance1567.fieldValue[0] = fieldValue1568;

Transform1566.children = new MFNode();

Transform1566.children[0] = ProtoInstance1567;

ProtoInstance ProtoInstance1569 = createNode("ProtoInstance");
ProtoInstance1569.USE = "Ri";
Transform1566.children[1] = ProtoInstance1569;

ProtoInstance ProtoInstance1570 = createNode("ProtoInstance");
ProtoInstance1570.name = "ra";
ProtoInstance1570.DEF = "Ui";
fieldValue fieldValue1571 = createNode("fieldValue");
fieldValue1571.name = "cycleInterval";
fieldValue1571.value = "3";
ProtoInstance1570.fieldValue = new MFNode();

ProtoInstance1570.fieldValue[0] = fieldValue1571;

fieldValue fieldValue1572 = createNode("fieldValue");
fieldValue1572.name = "Da";
fieldValue1572.value = "false";
ProtoInstance1570.fieldValue[1] = fieldValue1572;

fieldValue fieldValue1573 = createNode("fieldValue");
fieldValue1573.name = "Ia";
fieldValue1573.value = "true";
ProtoInstance1570.fieldValue[2] = fieldValue1573;

Transform1566.children[2] = ProtoInstance1570;

ProtoInstance ProtoInstance1574 = createNode("ProtoInstance");
ProtoInstance1574.name = "gb";
ProtoInstance1574.DEF = "Vi";
fieldValue fieldValue1575 = createNode("fieldValue");
fieldValue1575.name = "U";
ProtoInstance ProtoInstance1576 = createNode("ProtoInstance");
ProtoInstance1576.USE = "Ri";
fieldValue1575.children = new MFNode();

fieldValue1575.children[0] = ProtoInstance1576;

ProtoInstance1574.fieldValue = new MFNode();

ProtoInstance1574.fieldValue[0] = fieldValue1575;

fieldValue fieldValue1577 = createNode("fieldValue");
fieldValue1577.name = "direction";
fieldValue1577.value = "1";
ProtoInstance1574.fieldValue[1] = fieldValue1577;

Transform1566.children[3] = ProtoInstance1574;

ProtoInstance ProtoInstance1578 = createNode("ProtoInstance");
ProtoInstance1578.name = "nb";
ProtoInstance1578.DEF = "Wi";
Transform1566.children[4] = ProtoInstance1578;

ProtoInstance ProtoInstance1579 = createNode("ProtoInstance");
ProtoInstance1579.name = "ra";
ProtoInstance1579.DEF = "Xi";
fieldValue fieldValue1580 = createNode("fieldValue");
fieldValue1580.name = "Da";
fieldValue1580.value = "false";
ProtoInstance1579.fieldValue = new MFNode();

ProtoInstance1579.fieldValue[0] = fieldValue1580;

fieldValue fieldValue1581 = createNode("fieldValue");
fieldValue1581.name = "Ia";
fieldValue1581.value = "true";
ProtoInstance1579.fieldValue[1] = fieldValue1581;

Transform1566.children[5] = ProtoInstance1579;

fieldValue1563.children[2] = Transform1566;

ProtoInstance1553.fieldValue[8] = fieldValue1563;

fieldValue fieldValue1582 = createNode("fieldValue");
fieldValue1582.name = "geometry";
Cone Cone1583 = createNode("Cone");
Cone1583.DEF = "_1";
Cone1583.height = 1;
Cone1583.bottomRadius = 0.5;
fieldValue1582.children = new MFNode();

fieldValue1582.children[0] = Cone1583;

ProtoInstance1553.fieldValue[9] = fieldValue1582;

fieldValue fieldValue1584 = createNode("fieldValue");
fieldValue1584.name = "ha";
fieldValue1584.value = "0 0 0.25";
ProtoInstance1553.fieldValue[10] = fieldValue1584;

fieldValue1552.children = new MFNode();

fieldValue1552.children[0] = ProtoInstance1553;

ProtoInstance1550.fieldValue[1] = fieldValue1552;

fieldValue fieldValue1585 = createNode("fieldValue");
fieldValue1585.name = "children";
Transform Transform1586 = createNode("Transform");
Transform1586.USE = "Si";
fieldValue1585.children = new MFNode();

fieldValue1585.children[0] = Transform1586;

ProtoInstance1550.fieldValue[2] = fieldValue1585;

Transform1549.children = new MFNode();

Transform1549.children[0] = ProtoInstance1550;

fieldValue1538.children[1] = Transform1549;

Transform Transform1587 = createNode("Transform");
Transform1587.DEF = "Yi";
Transform1587.translation = new SFVec3f(new float[-0.6985,-0.1547,0.7377]);
Transform1587.rotation = new SFRotation(new float[0,0,1,0.3252]);
Transform1587.center = new SFVec3f(new float[0,0,-1.282e-8]);
ProtoInstance ProtoInstance1588 = createNode("ProtoInstance");
ProtoInstance1588.name = "Q";
ProtoInstance1588.DEF = "Zi";
fieldValue fieldValue1589 = createNode("fieldValue");
fieldValue1589.name = "center";
fieldValue1589.value = "0 0 -1.282e-8";
ProtoInstance1588.fieldValue = new MFNode();

ProtoInstance1588.fieldValue[0] = fieldValue1589;

fieldValue fieldValue1590 = createNode("fieldValue");
fieldValue1590.name = "U";
ProtoInstance ProtoInstance1591 = createNode("ProtoInstance");
ProtoInstance1591.name = "ga";
ProtoInstance1591.DEF = "aj";
fieldValue fieldValue1592 = createNode("fieldValue");
fieldValue1592.name = "url";
fieldValue1592.value = "\"globe.jpg\"";
ProtoInstance1591.fieldValue = new MFNode();

ProtoInstance1591.fieldValue[0] = fieldValue1592;

fieldValue fieldValue1593 = createNode("fieldValue");
fieldValue1593.name = "diffuseColor";
fieldValue1593.value = "0.6 0.6 0.6";
ProtoInstance1591.fieldValue[1] = fieldValue1593;

fieldValue fieldValue1594 = createNode("fieldValue");
fieldValue1594.name = "emissiveColor";
fieldValue1594.value = "0.2 0.2 0.12";
ProtoInstance1591.fieldValue[2] = fieldValue1594;

fieldValue fieldValue1595 = createNode("fieldValue");
fieldValue1595.name = "specularColor";
fieldValue1595.value = "0.8 0.8 0.8";
ProtoInstance1591.fieldValue[3] = fieldValue1595;

fieldValue fieldValue1596 = createNode("fieldValue");
fieldValue1596.name = "shininess";
fieldValue1596.value = "0.15";
ProtoInstance1591.fieldValue[4] = fieldValue1596;

fieldValue fieldValue1597 = createNode("fieldValue");
fieldValue1597.name = "B";
ProtoInstance ProtoInstance1598 = createNode("ProtoInstance");
ProtoInstance1598.USE = "Li";
fieldValue1597.children = new MFNode();

fieldValue1597.children[0] = ProtoInstance1598;

ProtoInstance1591.fieldValue[5] = fieldValue1597;

fieldValue fieldValue1599 = createNode("fieldValue");
fieldValue1599.name = "C";
Transform Transform1600 = createNode("Transform");
Transform1600.USE = "Yi";
fieldValue1599.children = new MFNode();

fieldValue1599.children[0] = Transform1600;

ProtoInstance ProtoInstance1601 = createNode("ProtoInstance");
ProtoInstance1601.USE = "Zi";
fieldValue1599.children[1] = ProtoInstance1601;

Transform Transform1602 = createNode("Transform");
Transform1602.DEF = "bj";
Transform1602.scale = new SFVec3f(new float[0.4064,0.4064,0.4064]);
ProtoInstance ProtoInstance1603 = createNode("ProtoInstance");
ProtoInstance1603.USE = "aj";
Transform1602.children = new MFNode();

Transform1602.children[0] = ProtoInstance1603;

ProtoInstance ProtoInstance1604 = createNode("ProtoInstance");
ProtoInstance1604.name = "ra";
ProtoInstance1604.DEF = "cj";
fieldValue fieldValue1605 = createNode("fieldValue");
fieldValue1605.name = "cycleInterval";
fieldValue1605.value = "6";
ProtoInstance1604.fieldValue = new MFNode();

ProtoInstance1604.fieldValue[0] = fieldValue1605;

fieldValue fieldValue1606 = createNode("fieldValue");
fieldValue1606.name = "Da";
fieldValue1606.value = "false";
ProtoInstance1604.fieldValue[1] = fieldValue1606;

fieldValue fieldValue1607 = createNode("fieldValue");
fieldValue1607.name = "Ia";
fieldValue1607.value = "true";
ProtoInstance1604.fieldValue[2] = fieldValue1607;

Transform1602.children[1] = ProtoInstance1604;

fieldValue1599.children[2] = Transform1602;

ProtoInstance1591.fieldValue[6] = fieldValue1599;

fieldValue fieldValue1608 = createNode("fieldValue");
fieldValue1608.name = "geometry";
Sphere Sphere1609 = createNode("Sphere");
Sphere1609.DEF = "_2";
Sphere1609.radius = 0.5;
fieldValue1608.children = new MFNode();

fieldValue1608.children[0] = Sphere1609;

ProtoInstance1591.fieldValue[7] = fieldValue1608;

fieldValue1590.children = new MFNode();

fieldValue1590.children[0] = ProtoInstance1591;

ProtoInstance1588.fieldValue[1] = fieldValue1590;

fieldValue fieldValue1610 = createNode("fieldValue");
fieldValue1610.name = "children";
Transform Transform1611 = createNode("Transform");
Transform1611.USE = "bj";
fieldValue1610.children = new MFNode();

fieldValue1610.children[0] = Transform1611;

ProtoInstance1588.fieldValue[2] = fieldValue1610;

fieldValue fieldValue1612 = createNode("fieldValue");
fieldValue1612.name = "W";
fieldValue1612.value = "1";
ProtoInstance1588.fieldValue[3] = fieldValue1612;

Transform1587.children = new MFNode();

Transform1587.children[0] = ProtoInstance1588;

fieldValue1538.children[2] = Transform1587;

Transform Transform1613 = createNode("Transform");
Transform1613.DEF = "dj";
Transform1613.translation = new SFVec3f(new float[-0.7941,-0.386,0.7019]);
Transform1613.center = new SFVec3f(new float[0,0,-5.221e-9]);
Transform Transform1614 = createNode("Transform");
Transform1614.DEF = "ej";
Transform1614.scale = new SFVec3f(new float[0.0876,0.3115,0.0876]);
ProtoInstance ProtoInstance1615 = createNode("ProtoInstance");
ProtoInstance1615.name = "ga";
ProtoInstance1615.DEF = "fj";
fieldValue fieldValue1616 = createNode("fieldValue");
fieldValue1616.name = "url";
fieldValue1616.value = "\"\"";
ProtoInstance1615.fieldValue = new MFNode();

ProtoInstance1615.fieldValue[0] = fieldValue1616;

fieldValue fieldValue1617 = createNode("fieldValue");
fieldValue1617.name = "diffuseColor";
fieldValue1617.value = "0.8 0 0";
ProtoInstance1615.fieldValue[1] = fieldValue1617;

fieldValue fieldValue1618 = createNode("fieldValue");
fieldValue1618.name = "emissiveColor";
fieldValue1618.value = "0.15 0 0";
ProtoInstance1615.fieldValue[2] = fieldValue1618;

fieldValue fieldValue1619 = createNode("fieldValue");
fieldValue1619.name = "B";
ProtoInstance ProtoInstance1620 = createNode("ProtoInstance");
ProtoInstance1620.USE = "Li";
fieldValue1619.children = new MFNode();

fieldValue1619.children[0] = ProtoInstance1620;

ProtoInstance1615.fieldValue[3] = fieldValue1619;

fieldValue fieldValue1621 = createNode("fieldValue");
fieldValue1621.name = "C";
Transform Transform1622 = createNode("Transform");
Transform1622.USE = "dj";
fieldValue1621.children = new MFNode();

fieldValue1621.children[0] = Transform1622;

Transform Transform1623 = createNode("Transform");
Transform1623.USE = "ej";
fieldValue1621.children[1] = Transform1623;

ProtoInstance1615.fieldValue[4] = fieldValue1621;

fieldValue fieldValue1624 = createNode("fieldValue");
fieldValue1624.name = "geometry";
Cylinder Cylinder1625 = createNode("Cylinder");
Cylinder1625.DEF = "_3";
Cylinder1625.height = 1;
Cylinder1625.radius = 0.5;
fieldValue1624.children = new MFNode();

fieldValue1624.children[0] = Cylinder1625;

ProtoInstance1615.fieldValue[5] = fieldValue1624;

Transform1614.children = new MFNode();

Transform1614.children[0] = ProtoInstance1615;

Transform1613.children = new MFNode();

Transform1613.children[0] = Transform1614;

fieldValue1538.children[3] = Transform1613;

Transform Transform1626 = createNode("Transform");
Transform1626.DEF = "gj";
Transform1626.translation = new SFVec3f(new float[-0.5524,-0.4097,0.6894]);
Transform1626.rotation = new SFRotation(new float[0,0,1,0.7457]);
Transform1626.center = new SFVec3f(new float[0,0,-5.221e-9]);
Transform Transform1627 = createNode("Transform");
Transform1627.DEF = "hj";
Transform1627.scale = new SFVec3f(new float[0.0876,0.3115,0.0876]);
ProtoInstance ProtoInstance1628 = createNode("ProtoInstance");
ProtoInstance1628.name = "ga";
ProtoInstance1628.DEF = "ij";
fieldValue fieldValue1629 = createNode("fieldValue");
fieldValue1629.name = "url";
fieldValue1629.value = "\"\"";
ProtoInstance1628.fieldValue = new MFNode();

ProtoInstance1628.fieldValue[0] = fieldValue1629;

fieldValue fieldValue1630 = createNode("fieldValue");
fieldValue1630.name = "diffuseColor";
fieldValue1630.value = "1 0 0";
ProtoInstance1628.fieldValue[1] = fieldValue1630;

fieldValue fieldValue1631 = createNode("fieldValue");
fieldValue1631.name = "emissiveColor";
fieldValue1631.value = "0.2 0 0";
ProtoInstance1628.fieldValue[2] = fieldValue1631;

fieldValue fieldValue1632 = createNode("fieldValue");
fieldValue1632.name = "specularColor";
fieldValue1632.value = "0 0 0";
ProtoInstance1628.fieldValue[3] = fieldValue1632;

fieldValue fieldValue1633 = createNode("fieldValue");
fieldValue1633.name = "shininess";
fieldValue1633.value = "0";
ProtoInstance1628.fieldValue[4] = fieldValue1633;

fieldValue fieldValue1634 = createNode("fieldValue");
fieldValue1634.name = "B";
ProtoInstance ProtoInstance1635 = createNode("ProtoInstance");
ProtoInstance1635.USE = "Li";
fieldValue1634.children = new MFNode();

fieldValue1634.children[0] = ProtoInstance1635;

ProtoInstance1628.fieldValue[5] = fieldValue1634;

fieldValue fieldValue1636 = createNode("fieldValue");
fieldValue1636.name = "C";
Transform Transform1637 = createNode("Transform");
Transform1637.USE = "gj";
fieldValue1636.children = new MFNode();

fieldValue1636.children[0] = Transform1637;

Transform Transform1638 = createNode("Transform");
Transform1638.USE = "hj";
fieldValue1636.children[1] = Transform1638;

ProtoInstance1628.fieldValue[6] = fieldValue1636;

fieldValue fieldValue1639 = createNode("fieldValue");
fieldValue1639.name = "geometry";
Cylinder Cylinder1640 = createNode("Cylinder");
Cylinder1640.DEF = "_4";
Cylinder1640.height = 1;
Cylinder1640.radius = 0.5;
fieldValue1639.children = new MFNode();

fieldValue1639.children[0] = Cylinder1640;

ProtoInstance1628.fieldValue[7] = fieldValue1639;

Transform1627.children = new MFNode();

Transform1627.children[0] = ProtoInstance1628;

Transform1626.children = new MFNode();

Transform1626.children[0] = Transform1627;

fieldValue1538.children[4] = Transform1626;

Transform Transform1641 = createNode("Transform");
Transform1641.DEF = "jj";
Transform1641.translation = new SFVec3f(new float[-0.4473,-0.3719,0.6801]);
Transform Transform1642 = createNode("Transform");
Transform1642.DEF = "kj";
Transform1642.scale = new SFVec3f(new float[0.9219,0.9219,0.9219]);
ProtoInstance ProtoInstance1643 = createNode("ProtoInstance");
ProtoInstance1643.name = "o";
ProtoInstance1643.DEF = "lj";
fieldValue fieldValue1644 = createNode("fieldValue");
fieldValue1644.name = "B";
ProtoInstance ProtoInstance1645 = createNode("ProtoInstance");
ProtoInstance1645.USE = "Li";
fieldValue1644.children = new MFNode();

fieldValue1644.children[0] = ProtoInstance1645;

ProtoInstance1643.fieldValue = new MFNode();

ProtoInstance1643.fieldValue[0] = fieldValue1644;

fieldValue fieldValue1646 = createNode("fieldValue");
fieldValue1646.name = "C";
Transform Transform1647 = createNode("Transform");
Transform1647.USE = "jj";
fieldValue1646.children = new MFNode();

fieldValue1646.children[0] = Transform1647;

Transform Transform1648 = createNode("Transform");
Transform1648.USE = "kj";
fieldValue1646.children[1] = Transform1648;

ProtoInstance1643.fieldValue[1] = fieldValue1646;

fieldValue fieldValue1649 = createNode("fieldValue");
fieldValue1649.name = "children";
Transform Transform1650 = createNode("Transform");
Transform1650.DEF = "mj";
Transform1650.translation = new SFVec3f(new float[0,0,-0.005423]);
Transform Transform1651 = createNode("Transform");
Transform1651.DEF = "nj";
Transform1651.scale = new SFVec3f(new float[0.96,0.96,1]);
ProtoInstance ProtoInstance1652 = createNode("ProtoInstance");
ProtoInstance1652.name = "zb";
ProtoInstance1652.DEF = "oj";
fieldValue fieldValue1653 = createNode("fieldValue");
fieldValue1653.name = "url";
fieldValue1653.value = "\"\"";
ProtoInstance1652.fieldValue = new MFNode();

ProtoInstance1652.fieldValue[0] = fieldValue1653;

fieldValue fieldValue1654 = createNode("fieldValue");
fieldValue1654.name = "emissiveColor";
fieldValue1654.value = "0.01 0.18 0.1";
ProtoInstance1652.fieldValue[1] = fieldValue1654;

fieldValue fieldValue1655 = createNode("fieldValue");
fieldValue1655.name = "specularColor";
fieldValue1655.value = "0 0 0";
ProtoInstance1652.fieldValue[2] = fieldValue1655;

fieldValue fieldValue1656 = createNode("fieldValue");
fieldValue1656.name = "shininess";
fieldValue1656.value = "0";
ProtoInstance1652.fieldValue[3] = fieldValue1656;

fieldValue fieldValue1657 = createNode("fieldValue");
fieldValue1657.name = "Cb";
fieldValue1657.value = "0.9888";
ProtoInstance1652.fieldValue[4] = fieldValue1657;

fieldValue fieldValue1658 = createNode("fieldValue");
fieldValue1658.name = "B";
ProtoInstance ProtoInstance1659 = createNode("ProtoInstance");
ProtoInstance1659.USE = "lj";
fieldValue1658.children = new MFNode();

fieldValue1658.children[0] = ProtoInstance1659;

ProtoInstance1652.fieldValue[5] = fieldValue1658;

fieldValue fieldValue1660 = createNode("fieldValue");
fieldValue1660.name = "C";
Transform Transform1661 = createNode("Transform");
Transform1661.USE = "mj";
fieldValue1660.children = new MFNode();

fieldValue1660.children[0] = Transform1661;

Transform Transform1662 = createNode("Transform");
Transform1662.USE = "nj";
fieldValue1660.children[1] = Transform1662;

ProtoInstance1652.fieldValue[6] = fieldValue1660;

fieldValue fieldValue1663 = createNode("fieldValue");
fieldValue1663.name = "Fb";
fieldValue1663.value = "true";
ProtoInstance1652.fieldValue[7] = fieldValue1663;

fieldValue fieldValue1664 = createNode("fieldValue");
fieldValue1664.name = "Gb";
fieldValue1664.value = "false";
ProtoInstance1652.fieldValue[8] = fieldValue1664;

fieldValue fieldValue1665 = createNode("fieldValue");
fieldValue1665.name = "Hb";
fieldValue1665.value = "0.01 0";
ProtoInstance1652.fieldValue[9] = fieldValue1665;

fieldValue fieldValue1666 = createNode("fieldValue");
fieldValue1666.name = "Ib";
fieldValue1666.value = "0.79 0.6";
ProtoInstance1652.fieldValue[10] = fieldValue1666;

fieldValue fieldValue1667 = createNode("fieldValue");
fieldValue1667.name = "Mb";
ProtoInstance ProtoInstance1668 = createNode("ProtoInstance");
ProtoInstance1668.name = "md";
ProtoInstance1668.DEF = "pj";
fieldValue fieldValue1669 = createNode("fieldValue");
fieldValue1669.name = "coord";
fieldValue1669.value = "0.37 0 0 0.38 0 0 0.62 0.51 0 0.62 0.11 0 0.61 0.07 0 0.6 0.04 0 0.58 0.02 0 0.55 0.01 0 0.53 0.01 0 0.53 0 0 0.79 0 0 0.79 0.01 0 0.76 0.01 0 0.73 0.02 0 0.71 0.04 0 0.7 0.06 0 0.7 0.54 0 0.71 0.57 0 0.73 0.59 0 0.79 0.59 0 0.79 0.6 0 0.62 0.6 0 0.39 0.13 0 0.18 0.6 0 0.01 0.6 0 0.01 0.59 0 0.04 0.59 0 0.06 0.58 0 0.09 0.56 0 0.09 0.53 0 0.1 0.49 0 0.1 0.11 0 0.09 0.07 0 0.08 0.04 0 0.06 0.02 0 0.03 0.01 0 0.01 0.01 0 0.01 0 0 0.23 0 0 0.23 0.01 0 0.2 0.01 0 0.17 0.02 0 0.15 0.04 0 0.14 0.06 0 0.14 0.51 0";
ProtoInstance1668.fieldValue = new MFNode();

ProtoInstance1668.fieldValue[0] = fieldValue1669;

fieldValue fieldValue1670 = createNode("fieldValue");
fieldValue1670.name = "coordIndex";
fieldValue1670.value = "30 28 29 -1 38 36 37 -1 36 38 35 -1 35 38 34 -1 34 38 33 -1 33 38 40 -1 33 40 41 -1 33 41 32 -1 32 41 42 -1 32 42 31 -1 31 42 43 -1 31 43 30 -1 40 38 39 -1 10 8 9 -1 8 10 7 -1 7 10 6 -1 6 10 5 -1 5 10 13 -1 5 13 4 -1 4 13 3 -1 3 13 14 -1 3 14 15 -1 3 15 2 -1 2 15 21 -1 13 10 12 -1 12 10 11 -1 21 18 20 -1 18 21 17 -1 17 21 16 -1 16 21 15 -1 20 18 19 -1 26 24 25 -1 24 26 23 -1 23 26 27 -1 23 27 28 -1 23 28 30 -1 23 30 44 -1 44 30 43 -1 23 44 0 -1 23 0 22 -1 22 0 1 -1 22 1 2 -1 22 2 21 -1";
ProtoInstance1668.fieldValue[1] = fieldValue1670;

fieldValue fieldValue1671 = createNode("fieldValue");
fieldValue1671.name = "mc";
fieldValue1671.value = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 -1";
ProtoInstance1668.fieldValue[2] = fieldValue1671;

fieldValue1667.children = new MFNode();

fieldValue1667.children[0] = ProtoInstance1668;

ProtoInstance1652.fieldValue[11] = fieldValue1667;

fieldValue fieldValue1672 = createNode("fieldValue");
fieldValue1672.name = "Ob";
fieldValue1672.value = "0.04";
ProtoInstance1652.fieldValue[12] = fieldValue1672;

fieldValue fieldValue1673 = createNode("fieldValue");
fieldValue1673.name = "Pb";
fieldValue1673.value = "0.1389";
ProtoInstance1652.fieldValue[13] = fieldValue1673;

fieldValue fieldValue1674 = createNode("fieldValue");
fieldValue1674.name = "creaseAngle";
fieldValue1674.value = "0";
ProtoInstance1652.fieldValue[14] = fieldValue1674;

fieldValue fieldValue1675 = createNode("fieldValue");
fieldValue1675.name = "diffuseColor";
fieldValue1675.value = "0.03 0.49 0.22";
ProtoInstance1652.fieldValue[15] = fieldValue1675;

Transform1651.children = new MFNode();

Transform1651.children[0] = ProtoInstance1652;

Transform1650.children = new MFNode();

Transform1650.children[0] = Transform1651;

fieldValue1649.children = new MFNode();

fieldValue1649.children[0] = Transform1650;

ProtoInstance1643.fieldValue[2] = fieldValue1649;

fieldValue fieldValue1676 = createNode("fieldValue");
fieldValue1676.name = "A";
ProtoInstance ProtoInstance1677 = createNode("ProtoInstance");
ProtoInstance1677.USE = "oj";
fieldValue1676.children = new MFNode();

fieldValue1676.children[0] = ProtoInstance1677;

ProtoInstance1643.fieldValue[3] = fieldValue1676;

Transform1642.children = new MFNode();

Transform1642.children[0] = ProtoInstance1643;

ProtoInstance ProtoInstance1678 = createNode("ProtoInstance");
ProtoInstance1678.name = "ra";
ProtoInstance1678.DEF = "qj";
fieldValue fieldValue1679 = createNode("fieldValue");
fieldValue1679.name = "cycleInterval";
fieldValue1679.value = "4";
ProtoInstance1678.fieldValue = new MFNode();

ProtoInstance1678.fieldValue[0] = fieldValue1679;

fieldValue fieldValue1680 = createNode("fieldValue");
fieldValue1680.name = "Ca";
fieldValue1680.value = "3";
ProtoInstance1678.fieldValue[1] = fieldValue1680;

fieldValue fieldValue1681 = createNode("fieldValue");
fieldValue1681.name = "Da";
fieldValue1681.value = "false";
ProtoInstance1678.fieldValue[2] = fieldValue1681;

Transform1642.children[1] = ProtoInstance1678;

ProtoInstance ProtoInstance1682 = createNode("ProtoInstance");
ProtoInstance1682.name = "nd";
ProtoInstance1682.DEF = "rj";
fieldValue fieldValue1683 = createNode("fieldValue");
fieldValue1683.name = "U";
ProtoInstance ProtoInstance1684 = createNode("ProtoInstance");
ProtoInstance1684.USE = "lj";
fieldValue1683.children = new MFNode();

fieldValue1683.children[0] = ProtoInstance1684;

ProtoInstance1682.fieldValue = new MFNode();

ProtoInstance1682.fieldValue[0] = fieldValue1683;

fieldValue fieldValue1685 = createNode("fieldValue");
fieldValue1685.name = "hb";
fieldValue1685.value = "true";
ProtoInstance1682.fieldValue[1] = fieldValue1685;

fieldValue fieldValue1686 = createNode("fieldValue");
fieldValue1686.name = "ib";
fieldValue1686.value = "true";
ProtoInstance1682.fieldValue[2] = fieldValue1686;

fieldValue fieldValue1687 = createNode("fieldValue");
fieldValue1687.name = "pd";
fieldValue1687.value = "true";
ProtoInstance1682.fieldValue[3] = fieldValue1687;

fieldValue fieldValue1688 = createNode("fieldValue");
fieldValue1688.name = "qd";
fieldValue1688.value = "true";
ProtoInstance1682.fieldValue[4] = fieldValue1688;

fieldValue fieldValue1689 = createNode("fieldValue");
fieldValue1689.name = "rd";
fieldValue1689.value = "true";
ProtoInstance1682.fieldValue[5] = fieldValue1689;

fieldValue fieldValue1690 = createNode("fieldValue");
fieldValue1690.name = "sd";
fieldValue1690.value = "true";
ProtoInstance1682.fieldValue[6] = fieldValue1690;

fieldValue fieldValue1691 = createNode("fieldValue");
fieldValue1691.name = "td";
fieldValue1691.value = "true";
ProtoInstance1682.fieldValue[7] = fieldValue1691;

fieldValue fieldValue1692 = createNode("fieldValue");
fieldValue1692.name = "vd";
fieldValue1692.value = "true";
ProtoInstance1682.fieldValue[8] = fieldValue1692;

fieldValue fieldValue1693 = createNode("fieldValue");
fieldValue1693.name = "wd";
fieldValue1693.value = "true";
ProtoInstance1682.fieldValue[9] = fieldValue1693;

fieldValue fieldValue1694 = createNode("fieldValue");
fieldValue1694.name = "xd";
fieldValue1694.value = "true";
ProtoInstance1682.fieldValue[10] = fieldValue1694;

fieldValue fieldValue1695 = createNode("fieldValue");
fieldValue1695.name = "diffuseColor";
fieldValue1695.value = "0.76 1 0.76";
ProtoInstance1682.fieldValue[11] = fieldValue1695;

fieldValue fieldValue1696 = createNode("fieldValue");
fieldValue1696.name = "emissiveColor";
fieldValue1696.value = "0.04 0 0.06";
ProtoInstance1682.fieldValue[12] = fieldValue1696;

fieldValue fieldValue1697 = createNode("fieldValue");
fieldValue1697.name = "specularColor";
fieldValue1697.value = "0 0 0";
ProtoInstance1682.fieldValue[13] = fieldValue1697;

fieldValue fieldValue1698 = createNode("fieldValue");
fieldValue1698.name = "shininess";
fieldValue1698.value = "0";
ProtoInstance1682.fieldValue[14] = fieldValue1698;

Transform1642.children[2] = ProtoInstance1682;

Transform1641.children = new MFNode();

Transform1641.children[0] = Transform1642;

fieldValue1538.children[5] = Transform1641;

Transform Transform1699 = createNode("Transform");
Transform1699.DEF = "sj";
Transform1699.translation = new SFVec3f(new float[1.264,-0.3495,0.7311]);
Transform1699.center = new SFVec3f(new float[1.639e-7,0.2337,-0.007482]);
Transform Transform1700 = createNode("Transform");
Transform1700.DEF = "tj";
ProtoInstance ProtoInstance1701 = createNode("ProtoInstance");
ProtoInstance1701.name = "je";
ProtoInstance1701.DEF = "uj";
fieldValue fieldValue1702 = createNode("fieldValue");
fieldValue1702.name = "oa";
fieldValue1702.value = "1";
ProtoInstance1701.fieldValue = new MFNode();

ProtoInstance1701.fieldValue[0] = fieldValue1702;

Transform1700.children = new MFNode();

Transform1700.children[0] = ProtoInstance1701;

ProtoInstance ProtoInstance1703 = createNode("ProtoInstance");
ProtoInstance1703.name = "na";
ProtoInstance1703.DEF = "vj";
fieldValue fieldValue1704 = createNode("fieldValue");
fieldValue1704.name = "oa";
fieldValue1704.value = "1";
ProtoInstance1703.fieldValue = new MFNode();

ProtoInstance1703.fieldValue[0] = fieldValue1704;

Transform1700.children[1] = ProtoInstance1703;

ProtoInstance ProtoInstance1705 = createNode("ProtoInstance");
ProtoInstance1705.name = "o";
ProtoInstance1705.DEF = "wj";
fieldValue fieldValue1706 = createNode("fieldValue");
fieldValue1706.name = "B";
ProtoInstance ProtoInstance1707 = createNode("ProtoInstance");
ProtoInstance1707.USE = "Li";
fieldValue1706.children = new MFNode();

fieldValue1706.children[0] = ProtoInstance1707;

ProtoInstance1705.fieldValue = new MFNode();

ProtoInstance1705.fieldValue[0] = fieldValue1706;

fieldValue fieldValue1708 = createNode("fieldValue");
fieldValue1708.name = "C";
Transform Transform1709 = createNode("Transform");
Transform1709.USE = "sj";
fieldValue1708.children = new MFNode();

fieldValue1708.children[0] = Transform1709;

Transform Transform1710 = createNode("Transform");
Transform1710.USE = "tj";
fieldValue1708.children[1] = Transform1710;

ProtoInstance1705.fieldValue[1] = fieldValue1708;

fieldValue fieldValue1711 = createNode("fieldValue");
fieldValue1711.name = "children";
Transform Transform1712 = createNode("Transform");
Transform1712.DEF = "xj";
Transform1712.translation = new SFVec3f(new float[-0.3425,0,-0.004982]);
Transform Transform1713 = createNode("Transform");
Transform1713.DEF = "yj";
Transform1713.scale = new SFVec3f(new float[0.72,0.72,1]);
ProtoInstance ProtoInstance1714 = createNode("ProtoInstance");
ProtoInstance1714.name = "zb";
ProtoInstance1714.DEF = "zj";
fieldValue fieldValue1715 = createNode("fieldValue");
fieldValue1715.name = "url";
fieldValue1715.value = "\"\"";
ProtoInstance1714.fieldValue = new MFNode();

ProtoInstance1714.fieldValue[0] = fieldValue1715;

fieldValue fieldValue1716 = createNode("fieldValue");
fieldValue1716.name = "emissiveColor";
fieldValue1716.value = "0.1 0.02 0";
ProtoInstance1714.fieldValue[1] = fieldValue1716;

fieldValue fieldValue1717 = createNode("fieldValue");
fieldValue1717.name = "specularColor";
fieldValue1717.value = "0.1 0.1 0.1";
ProtoInstance1714.fieldValue[2] = fieldValue1717;

fieldValue fieldValue1718 = createNode("fieldValue");
fieldValue1718.name = "shininess";
fieldValue1718.value = "0.08";
ProtoInstance1714.fieldValue[3] = fieldValue1718;

fieldValue fieldValue1719 = createNode("fieldValue");
fieldValue1719.name = "Cb";
fieldValue1719.value = "0.4848";
ProtoInstance1714.fieldValue[4] = fieldValue1719;

fieldValue fieldValue1720 = createNode("fieldValue");
fieldValue1720.name = "B";
ProtoInstance ProtoInstance1721 = createNode("ProtoInstance");
ProtoInstance1721.USE = "wj";
fieldValue1720.children = new MFNode();

fieldValue1720.children[0] = ProtoInstance1721;

ProtoInstance1714.fieldValue[5] = fieldValue1720;

fieldValue fieldValue1722 = createNode("fieldValue");
fieldValue1722.name = "C";
Transform Transform1723 = createNode("Transform");
Transform1723.USE = "xj";
fieldValue1722.children = new MFNode();

fieldValue1722.children[0] = Transform1723;

Transform Transform1724 = createNode("Transform");
Transform1724.USE = "yj";
fieldValue1722.children[1] = Transform1724;

ProtoInstance1714.fieldValue[6] = fieldValue1722;

fieldValue fieldValue1725 = createNode("fieldValue");
fieldValue1725.name = "Fb";
fieldValue1725.value = "true";
ProtoInstance1714.fieldValue[7] = fieldValue1725;

fieldValue fieldValue1726 = createNode("fieldValue");
fieldValue1726.name = "Gb";
fieldValue1726.value = "false";
ProtoInstance1714.fieldValue[8] = fieldValue1726;

fieldValue fieldValue1727 = createNode("fieldValue");
fieldValue1727.name = "Hb";
fieldValue1727.value = "0.03214 -0.006429";
ProtoInstance1714.fieldValue[9] = fieldValue1727;

fieldValue fieldValue1728 = createNode("fieldValue");
fieldValue1728.name = "Ib";
fieldValue1728.value = "0.9193 0.6557";
ProtoInstance1714.fieldValue[10] = fieldValue1728;

fieldValue fieldValue1729 = createNode("fieldValue");
fieldValue1729.name = "Mb";
ProtoInstance ProtoInstance1730 = createNode("ProtoInstance");
ProtoInstance1730.name = "md";
ProtoInstance1730.DEF = "Aj";
fieldValue fieldValue1731 = createNode("fieldValue");
fieldValue1731.name = "coord";
fieldValue1731.value = "0.3793 0.07071 0 0.1221 0.07071 0 0.1479 0.1157 0 0.1736 0.1479 0 0.2186 0.1993 0 0.2636 0.2443 0 0.2957 0.2893 0 0.3471 0.3536 0 0.3664 0.4114 0 0.3793 0.4757 0 0.3664 0.54 0 0.3343 0.6043 0 0.315 0.63 0 0.2507 0.6557 0 0.2121 0.6557 0 0.1479 0.6493 0 0.09643 0.6107 0 0.05786 0.5464 0 0.045 0.4629 0 0.1093 0.4564 0 0.1157 0.5143 0 0.135 0.5593 0 0.1671 0.585 0 0.2121 0.5914 0 0.2507 0.585 0 0.2829 0.5593 0 0.3021 0.5271 0 0.315 0.4821 0 0.3021 0.4307 0 0.2829 0.3857 0 0.2636 0.3536 0 0.2379 0.3214 0 0.2057 0.2829 0 0.1671 0.2379 0 0.09643 0.1671 0 0.05786 0.1029 0 0.03857 0.05143 0 0.03214 0 0 0.3793 0 0";
ProtoInstance1730.fieldValue = new MFNode();

ProtoInstance1730.fieldValue[0] = fieldValue1731;

fieldValue fieldValue1732 = createNode("fieldValue");
fieldValue1732.name = "coordIndex";
fieldValue1732.value = "38 36 37 -1 36 38 1 -1 36 1 35 -1 35 1 34 -1 1 38 0 -1 1 33 34 -1 33 1 2 -1 33 2 3 -1 33 3 32 -1 32 3 4 -1 32 4 31 -1 31 4 5 -1 31 5 30 -1 30 5 6 -1 30 6 29 -1 29 6 28 -1 28 6 7 -1 28 7 27 -1 27 7 12 -1 12 7 11 -1 11 7 10 -1 10 7 8 -1 10 8 9 -1 19 17 18 -1 17 19 16 -1 16 19 20 -1 16 20 15 -1 15 20 21 -1 15 21 22 -1 15 22 14 -1 14 22 23 -1 14 23 24 -1 14 24 13 -1 13 24 25 -1 13 25 12 -1 12 25 26 -1 12 26 27 -1";
ProtoInstance1730.fieldValue[1] = fieldValue1732;

fieldValue fieldValue1733 = createNode("fieldValue");
fieldValue1733.name = "mc";
fieldValue1733.value = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 -1";
ProtoInstance1730.fieldValue[2] = fieldValue1733;

fieldValue1729.children = new MFNode();

fieldValue1729.children[0] = ProtoInstance1730;

ProtoInstance1714.fieldValue[11] = fieldValue1729;

fieldValue fieldValue1734 = createNode("fieldValue");
fieldValue1734.name = "Ob";
fieldValue1734.value = "0.04";
ProtoInstance1714.fieldValue[12] = fieldValue1734;

fieldValue fieldValue1735 = createNode("fieldValue");
fieldValue1735.name = "Pb";
fieldValue1735.value = "0.1389";
ProtoInstance1714.fieldValue[13] = fieldValue1735;

fieldValue fieldValue1736 = createNode("fieldValue");
fieldValue1736.name = "creaseAngle";
fieldValue1736.value = "0";
ProtoInstance1714.fieldValue[14] = fieldValue1736;

fieldValue fieldValue1737 = createNode("fieldValue");
fieldValue1737.name = "diffuseColor";
fieldValue1737.value = "0.9 0.15 0";
ProtoInstance1714.fieldValue[15] = fieldValue1737;

Transform1713.children = new MFNode();

Transform1713.children[0] = ProtoInstance1714;

Transform1712.children = new MFNode();

Transform1712.children[0] = Transform1713;

fieldValue1711.children = new MFNode();

fieldValue1711.children[0] = Transform1712;

Transform Transform1738 = createNode("Transform");
Transform1738.DEF = "Bj";
Transform1738.translation = new SFVec3f(new float[-0.07406,0,-0.009982]);
Transform Transform1739 = createNode("Transform");
Transform1739.DEF = "Cj";
Transform1739.scale = new SFVec3f(new float[0.72,0.72,1]);
ProtoInstance ProtoInstance1740 = createNode("ProtoInstance");
ProtoInstance1740.name = "zb";
ProtoInstance1740.DEF = "Dj";
fieldValue fieldValue1741 = createNode("fieldValue");
fieldValue1741.name = "url";
fieldValue1741.value = "\"\"";
ProtoInstance1740.fieldValue = new MFNode();

ProtoInstance1740.fieldValue[0] = fieldValue1741;

fieldValue fieldValue1742 = createNode("fieldValue");
fieldValue1742.name = "emissiveColor";
fieldValue1742.value = "0.1 0.02 0";
ProtoInstance1740.fieldValue[1] = fieldValue1742;

fieldValue fieldValue1743 = createNode("fieldValue");
fieldValue1743.name = "specularColor";
fieldValue1743.value = "0.1 0.1 0.1";
ProtoInstance1740.fieldValue[2] = fieldValue1743;

fieldValue fieldValue1744 = createNode("fieldValue");
fieldValue1744.name = "shininess";
fieldValue1744.value = "0.08";
ProtoInstance1740.fieldValue[3] = fieldValue1744;

fieldValue fieldValue1745 = createNode("fieldValue");
fieldValue1745.name = "Cb";
fieldValue1745.value = "0.4848";
ProtoInstance1740.fieldValue[4] = fieldValue1745;

fieldValue fieldValue1746 = createNode("fieldValue");
fieldValue1746.name = "B";
ProtoInstance ProtoInstance1747 = createNode("ProtoInstance");
ProtoInstance1747.USE = "wj";
fieldValue1746.children = new MFNode();

fieldValue1746.children[0] = ProtoInstance1747;

ProtoInstance1740.fieldValue[5] = fieldValue1746;

fieldValue fieldValue1748 = createNode("fieldValue");
fieldValue1748.name = "C";
Transform Transform1749 = createNode("Transform");
Transform1749.USE = "Bj";
fieldValue1748.children = new MFNode();

fieldValue1748.children[0] = Transform1749;

Transform Transform1750 = createNode("Transform");
Transform1750.USE = "Cj";
fieldValue1748.children[1] = Transform1750;

ProtoInstance1740.fieldValue[6] = fieldValue1748;

fieldValue fieldValue1751 = createNode("fieldValue");
fieldValue1751.name = "Fb";
fieldValue1751.value = "true";
ProtoInstance1740.fieldValue[7] = fieldValue1751;

fieldValue fieldValue1752 = createNode("fieldValue");
fieldValue1752.name = "Gb";
fieldValue1752.value = "false";
ProtoInstance1740.fieldValue[8] = fieldValue1752;

fieldValue fieldValue1753 = createNode("fieldValue");
fieldValue1753.name = "Hb";
fieldValue1753.value = "-0.3407 -0.006429";
ProtoInstance1740.fieldValue[9] = fieldValue1753;

fieldValue fieldValue1754 = createNode("fieldValue");
fieldValue1754.name = "Ib";
fieldValue1754.value = "0.5464 0.6557";
ProtoInstance1740.fieldValue[10] = fieldValue1754;

fieldValue fieldValue1755 = createNode("fieldValue");
fieldValue1755.name = "Mb";
ProtoInstance ProtoInstance1756 = createNode("ProtoInstance");
ProtoInstance1756.name = "md";
ProtoInstance1756.DEF = "Ej";
fieldValue fieldValue1757 = createNode("fieldValue");
fieldValue1757.name = "coord";
fieldValue1757.value = "0.06429 0 0 0.135 0 0 0.135 0.09 0 0.06429 0.09 0";
ProtoInstance1756.fieldValue = new MFNode();

ProtoInstance1756.fieldValue[0] = fieldValue1757;

fieldValue fieldValue1758 = createNode("fieldValue");
fieldValue1758.name = "coordIndex";
fieldValue1758.value = "1 3 0 -1 3 1 2 -1";
ProtoInstance1756.fieldValue[1] = fieldValue1758;

fieldValue fieldValue1759 = createNode("fieldValue");
fieldValue1759.name = "mc";
fieldValue1759.value = "0 1 2 3 -1";
ProtoInstance1756.fieldValue[2] = fieldValue1759;

fieldValue1755.children = new MFNode();

fieldValue1755.children[0] = ProtoInstance1756;

ProtoInstance1740.fieldValue[11] = fieldValue1755;

fieldValue fieldValue1760 = createNode("fieldValue");
fieldValue1760.name = "Ob";
fieldValue1760.value = "0.04";
ProtoInstance1740.fieldValue[12] = fieldValue1760;

fieldValue fieldValue1761 = createNode("fieldValue");
fieldValue1761.name = "Pb";
fieldValue1761.value = "0.1389";
ProtoInstance1740.fieldValue[13] = fieldValue1761;

fieldValue fieldValue1762 = createNode("fieldValue");
fieldValue1762.name = "creaseAngle";
fieldValue1762.value = "0";
ProtoInstance1740.fieldValue[14] = fieldValue1762;

fieldValue fieldValue1763 = createNode("fieldValue");
fieldValue1763.name = "diffuseColor";
fieldValue1763.value = "0.9 0.15 0";
ProtoInstance1740.fieldValue[15] = fieldValue1763;

Transform1739.children = new MFNode();

Transform1739.children[0] = ProtoInstance1740;

Transform1738.children = new MFNode();

Transform1738.children[0] = Transform1739;

fieldValue1711.children[1] = Transform1738;

Transform Transform1764 = createNode("Transform");
Transform1764.DEF = "Fj";
Transform1764.translation = new SFVec3f(new float[0.04629,0,-0.005]);
Transform Transform1765 = createNode("Transform");
Transform1765.DEF = "Gj";
Transform1765.scale = new SFVec3f(new float[0.72,0.72,1]);
ProtoInstance ProtoInstance1766 = createNode("ProtoInstance");
ProtoInstance1766.name = "zb";
ProtoInstance1766.DEF = "Hj";
fieldValue fieldValue1767 = createNode("fieldValue");
fieldValue1767.name = "url";
fieldValue1767.value = "\"\"";
ProtoInstance1766.fieldValue = new MFNode();

ProtoInstance1766.fieldValue[0] = fieldValue1767;

fieldValue fieldValue1768 = createNode("fieldValue");
fieldValue1768.name = "emissiveColor";
fieldValue1768.value = "0.1 0.02 0";
ProtoInstance1766.fieldValue[1] = fieldValue1768;

fieldValue fieldValue1769 = createNode("fieldValue");
fieldValue1769.name = "specularColor";
fieldValue1769.value = "0.1 0.1 0.1";
ProtoInstance1766.fieldValue[2] = fieldValue1769;

fieldValue fieldValue1770 = createNode("fieldValue");
fieldValue1770.name = "shininess";
fieldValue1770.value = "0.08";
ProtoInstance1766.fieldValue[3] = fieldValue1770;

fieldValue fieldValue1771 = createNode("fieldValue");
fieldValue1771.name = "Cb";
fieldValue1771.value = "0.4848";
ProtoInstance1766.fieldValue[4] = fieldValue1771;

fieldValue fieldValue1772 = createNode("fieldValue");
fieldValue1772.name = "B";
ProtoInstance ProtoInstance1773 = createNode("ProtoInstance");
ProtoInstance1773.USE = "wj";
fieldValue1772.children = new MFNode();

fieldValue1772.children[0] = ProtoInstance1773;

ProtoInstance1766.fieldValue[5] = fieldValue1772;

fieldValue fieldValue1774 = createNode("fieldValue");
fieldValue1774.name = "C";
Transform Transform1775 = createNode("Transform");
Transform1775.USE = "Fj";
fieldValue1774.children = new MFNode();

fieldValue1774.children[0] = Transform1775;

Transform Transform1776 = createNode("Transform");
Transform1776.USE = "Gj";
fieldValue1774.children[1] = Transform1776;

ProtoInstance1766.fieldValue[6] = fieldValue1774;

fieldValue fieldValue1777 = createNode("fieldValue");
fieldValue1777.name = "Fb";
fieldValue1777.value = "true";
ProtoInstance1766.fieldValue[7] = fieldValue1777;

fieldValue fieldValue1778 = createNode("fieldValue");
fieldValue1778.name = "Gb";
fieldValue1778.value = "false";
ProtoInstance1766.fieldValue[8] = fieldValue1778;

fieldValue fieldValue1779 = createNode("fieldValue");
fieldValue1779.name = "Hb";
fieldValue1779.value = "-0.5079 -0.006429";
ProtoInstance1766.fieldValue[9] = fieldValue1779;

fieldValue fieldValue1780 = createNode("fieldValue");
fieldValue1780.name = "Ib";
fieldValue1780.value = "0.3793 0.6557";
ProtoInstance1766.fieldValue[10] = fieldValue1780;

fieldValue fieldValue1781 = createNode("fieldValue");
fieldValue1781.name = "Mb";
ProtoInstance ProtoInstance1782 = createNode("ProtoInstance");
ProtoInstance1782.name = "md";
ProtoInstance1782.DEF = "Ij";
fieldValue fieldValue1783 = createNode("fieldValue");
fieldValue1783.name = "coord";
fieldValue1783.value = "0.09643 0.3986 0 0.1029 0.4564 0 0.1093 0.5079 0 0.1221 0.54 0 0.1414 0.5657 0 0.18 0.5914 0 0.225 0.5914 0 0.2636 0.5657 0 0.2829 0.54 0 0.2957 0.5079 0 0.3021 0.4629 0 0.3086 0.3986 0 0.315 0.3279 0 0.3086 0.2571 0 0.3021 0.1929 0 0.2957 0.1479 0 0.2829 0.1157 0 0.2636 0.09 0 0.225 0.06429 0 0.2057 0.05786 0 0.18 0.06429 0 0.1414 0.09 0 0.1221 0.1157 0 0.1093 0.1479 0 0.1029 0.1929 0 0.09643 0.2571 0 0.03214 0.2443 0 0.03857 0.1736 0 0.05786 0.1157 0 0.07714 0.07071 0 0.1029 0.03857 0 0.135 0.01286 0 0.1671 0 0 0.1993 -0.006429 0 0.2443 0 0 0.2764 0.01929 0 0.3086 0.045 0 0.3343 0.08357 0 0.3536 0.1286 0 0.3664 0.1864 0 0.3729 0.2507 0 0.3793 0.3279 0 0.3729 0.4114 0 0.36 0.4821 0 0.3471 0.54 0 0.3214 0.5914 0 0.3021 0.6171 0 0.27 0.6429 0 0.2379 0.6557 0 0.1607 0.6557 0 0.1286 0.6364 0 0.09643 0.6107 0 0.07071 0.5721 0 0.05143 0.5271 0 0.03857 0.4693 0 0.03214 0.405 0";
ProtoInstance1782.fieldValue = new MFNode();

ProtoInstance1782.fieldValue[0] = fieldValue1783;

fieldValue fieldValue1784 = createNode("fieldValue");
fieldValue1784.name = "coordIndex";
fieldValue1784.value = "30 25 29 -1 25 30 24 -1 24 30 23 -1 23 30 31 -1 23 31 22 -1 22 31 21 -1 21 31 32 -1 21 32 20 -1 20 32 33 -1 20 33 19 -1 19 33 34 -1 19 34 18 -1 18 34 17 -1 17 34 35 -1 17 35 16 -1 16 35 36 -1 16 36 15 -1 15 36 14 -1 14 36 13 -1 13 36 37 -1 13 37 12 -1 12 37 45 -1 45 37 44 -1 44 37 38 -1 44 38 43 -1 43 38 39 -1 43 39 42 -1 42 39 40 -1 42 40 41 -1 27 55 26 -1 55 27 54 -1 54 27 28 -1 54 28 53 -1 53 28 52 -1 52 28 29 -1 52 29 51 -1 51 29 25 -1 51 25 0 -1 51 0 1 -1 51 1 2 -1 51 2 50 -1 50 2 3 -1 50 3 4 -1 50 4 49 -1 49 4 5 -1 49 5 48 -1 48 5 6 -1 48 6 7 -1 48 7 47 -1 47 7 8 -1 47 8 46 -1 46 8 9 -1 46 9 10 -1 46 10 11 -1 46 11 45 -1 45 11 12 -1";
ProtoInstance1782.fieldValue[1] = fieldValue1784;

fieldValue fieldValue1785 = createNode("fieldValue");
fieldValue1785.name = "mc";
fieldValue1785.value = "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 -1 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 -1";
ProtoInstance1782.fieldValue[2] = fieldValue1785;

fieldValue1781.children = new MFNode();

fieldValue1781.children[0] = ProtoInstance1782;

ProtoInstance1766.fieldValue[11] = fieldValue1781;

fieldValue fieldValue1786 = createNode("fieldValue");
fieldValue1786.name = "Ob";
fieldValue1786.value = "0.04";
ProtoInstance1766.fieldValue[12] = fieldValue1786;

fieldValue fieldValue1787 = createNode("fieldValue");
fieldValue1787.name = "Pb";
fieldValue1787.value = "0.1389";
ProtoInstance1766.fieldValue[13] = fieldValue1787;

fieldValue fieldValue1788 = createNode("fieldValue");
fieldValue1788.name = "creaseAngle";
fieldValue1788.value = "0";
ProtoInstance1766.fieldValue[14] = fieldValue1788;

fieldValue fieldValue1789 = createNode("fieldValue");
fieldValue1789.name = "diffuseColor";
fieldValue1789.value = "0.9 0.15 0";
ProtoInstance1766.fieldValue[15] = fieldValue1789;

Transform1765.children = new MFNode();

Transform1765.children[0] = ProtoInstance1766;

Transform1764.children = new MFNode();

Transform1764.children[0] = Transform1765;

fieldValue1711.children[2] = Transform1764;

ProtoInstance1705.fieldValue[2] = fieldValue1711;

fieldValue fieldValue1790 = createNode("fieldValue");
fieldValue1790.name = "A";
ProtoInstance ProtoInstance1791 = createNode("ProtoInstance");
ProtoInstance1791.USE = "zj";
fieldValue1790.children = new MFNode();

fieldValue1790.children[0] = ProtoInstance1791;

ProtoInstance ProtoInstance1792 = createNode("ProtoInstance");
ProtoInstance1792.USE = "Dj";
fieldValue1790.children[1] = ProtoInstance1792;

ProtoInstance ProtoInstance1793 = createNode("ProtoInstance");
ProtoInstance1793.USE = "Hj";
fieldValue1790.children[2] = ProtoInstance1793;

ProtoInstance1705.fieldValue[3] = fieldValue1790;

Transform1700.children[2] = ProtoInstance1705;

ProtoInstance ProtoInstance1794 = createNode("ProtoInstance");
ProtoInstance1794.name = "me";
ProtoInstance1794.DEF = "Jj";
fieldValue fieldValue1795 = createNode("fieldValue");
fieldValue1795.name = "re";
Transform Transform1796 = createNode("Transform");
Transform1796.USE = "sj";
fieldValue1795.children = new MFNode();

fieldValue1795.children[0] = Transform1796;

ProtoInstance1794.fieldValue = new MFNode();

ProtoInstance1794.fieldValue[0] = fieldValue1795;

Transform1700.children[3] = ProtoInstance1794;

ProtoInstance ProtoInstance1797 = createNode("ProtoInstance");
ProtoInstance1797.name = "xe";
ProtoInstance1797.DEF = "Kj";
fieldValue fieldValue1798 = createNode("fieldValue");
fieldValue1798.name = "ye";
ProtoInstance ProtoInstance1799 = createNode("ProtoInstance");
ProtoInstance1799.USE = "Jj";
fieldValue1798.children = new MFNode();

fieldValue1798.children[0] = ProtoInstance1799;

ProtoInstance1797.fieldValue = new MFNode();

ProtoInstance1797.fieldValue[0] = fieldValue1798;

fieldValue fieldValue1800 = createNode("fieldValue");
fieldValue1800.name = "ze";
ProtoInstance ProtoInstance1801 = createNode("ProtoInstance");
ProtoInstance1801.USE = "Jj";
fieldValue1800.children = new MFNode();

fieldValue1800.children[0] = ProtoInstance1801;

ProtoInstance1797.fieldValue[1] = fieldValue1800;

fieldValue fieldValue1802 = createNode("fieldValue");
fieldValue1802.name = "Ae";
ProtoInstance ProtoInstance1803 = createNode("ProtoInstance");
ProtoInstance1803.USE = "wj";
fieldValue1802.children = new MFNode();

fieldValue1802.children[0] = ProtoInstance1803;

ProtoInstance1797.fieldValue[2] = fieldValue1802;

fieldValue fieldValue1804 = createNode("fieldValue");
fieldValue1804.name = "Ce";
fieldValue1804.value = "86";
ProtoInstance1797.fieldValue[3] = fieldValue1804;

Transform1700.children[4] = ProtoInstance1797;

ProtoInstance ProtoInstance1805 = createNode("ProtoInstance");
ProtoInstance1805.name = "nb";
ProtoInstance1805.DEF = "Lj";
Transform1700.children[5] = ProtoInstance1805;

ProtoInstance ProtoInstance1806 = createNode("ProtoInstance");
ProtoInstance1806.name = "ra";
ProtoInstance1806.DEF = "Mj";
fieldValue fieldValue1807 = createNode("fieldValue");
fieldValue1807.name = "Da";
fieldValue1807.value = "false";
ProtoInstance1806.fieldValue = new MFNode();

ProtoInstance1806.fieldValue[0] = fieldValue1807;

fieldValue fieldValue1808 = createNode("fieldValue");
fieldValue1808.name = "Fa";
fieldValue1808.value = "0.5";
ProtoInstance1806.fieldValue[1] = fieldValue1808;

Transform1700.children[6] = ProtoInstance1806;

ProtoInstance ProtoInstance1809 = createNode("ProtoInstance");
ProtoInstance1809.name = "Ge";
ProtoInstance1809.DEF = "Nj";
fieldValue fieldValue1810 = createNode("fieldValue");
fieldValue1810.name = "center";
fieldValue1810.value = "1.639e-7 0.2337 -0.007482";
ProtoInstance1809.fieldValue = new MFNode();

ProtoInstance1809.fieldValue[0] = fieldValue1810;

fieldValue fieldValue1811 = createNode("fieldValue");
fieldValue1811.name = "U";
ProtoInstance ProtoInstance1812 = createNode("ProtoInstance");
ProtoInstance1812.USE = "wj";
fieldValue1811.children = new MFNode();

fieldValue1811.children[0] = ProtoInstance1812;

ProtoInstance1809.fieldValue[1] = fieldValue1811;

Transform1700.children[7] = ProtoInstance1809;

ProtoInstance ProtoInstance1813 = createNode("ProtoInstance");
ProtoInstance1813.name = "xe";
ProtoInstance1813.DEF = "Oj";
fieldValue fieldValue1814 = createNode("fieldValue");
fieldValue1814.name = "ye";
ProtoInstance ProtoInstance1815 = createNode("ProtoInstance");
ProtoInstance1815.USE = "Nj";
fieldValue1814.children = new MFNode();

fieldValue1814.children[0] = ProtoInstance1815;

ProtoInstance1813.fieldValue = new MFNode();

ProtoInstance1813.fieldValue[0] = fieldValue1814;

fieldValue fieldValue1816 = createNode("fieldValue");
fieldValue1816.name = "ze";
ProtoInstance ProtoInstance1817 = createNode("ProtoInstance");
ProtoInstance1817.USE = "Mj";
fieldValue1816.children = new MFNode();

fieldValue1816.children[0] = ProtoInstance1817;

ProtoInstance1813.fieldValue[1] = fieldValue1816;

fieldValue fieldValue1818 = createNode("fieldValue");
fieldValue1818.name = "Ae";
ProtoInstance ProtoInstance1819 = createNode("ProtoInstance");
ProtoInstance1819.USE = "wj";
fieldValue1818.children = new MFNode();

fieldValue1818.children[0] = ProtoInstance1819;

ProtoInstance1813.fieldValue[2] = fieldValue1818;

fieldValue fieldValue1820 = createNode("fieldValue");
fieldValue1820.name = "Ce";
fieldValue1820.value = "90";
ProtoInstance1813.fieldValue[3] = fieldValue1820;

Transform1700.children[8] = ProtoInstance1813;

Transform1699.children = new MFNode();

Transform1699.children[0] = Transform1700;

fieldValue1538.children[6] = Transform1699;

Transform Transform1821 = createNode("Transform");
Transform1821.DEF = "Pj";
Transform1821.translation = new SFVec3f(new float[0.3736,-0.7009,0.7521]);
Transform1821.rotation = new SFRotation(new float[1,0,0,3.13]);
Transform1821.center = new SFVec3f(new float[0.253,0.2677,0]);
ProtoInstance ProtoInstance1822 = createNode("ProtoInstance");
ProtoInstance1822.name = "hf";
ProtoInstance1822.DEF = "Qj";
fieldValue fieldValue1823 = createNode("fieldValue");
fieldValue1823.name = "center";
fieldValue1823.value = "0.253 0.2677 0";
ProtoInstance1822.fieldValue = new MFNode();

ProtoInstance1822.fieldValue[0] = fieldValue1823;

fieldValue fieldValue1824 = createNode("fieldValue");
fieldValue1824.name = "children";
Transform Transform1825 = createNode("Transform");
Transform1825.DEF = "Rj";
Transform1825.scale = new SFVec3f(new float[0.1293,0.7015,0.1824]);
ProtoInstance ProtoInstance1826 = createNode("ProtoInstance");
ProtoInstance1826.name = "ga";
ProtoInstance1826.DEF = "Sj";
fieldValue fieldValue1827 = createNode("fieldValue");
fieldValue1827.name = "url";
fieldValue1827.value = "\"\"";
ProtoInstance1826.fieldValue = new MFNode();

ProtoInstance1826.fieldValue[0] = fieldValue1827;

fieldValue fieldValue1828 = createNode("fieldValue");
fieldValue1828.name = "diffuseColor";
fieldValue1828.value = "0.8 0.8 0";
ProtoInstance1826.fieldValue[1] = fieldValue1828;

fieldValue fieldValue1829 = createNode("fieldValue");
fieldValue1829.name = "emissiveColor";
fieldValue1829.value = "0.15 0.15 0";
ProtoInstance1826.fieldValue[2] = fieldValue1829;

fieldValue fieldValue1830 = createNode("fieldValue");
fieldValue1830.name = "B";
ProtoInstance ProtoInstance1831 = createNode("ProtoInstance");
ProtoInstance1831.USE = "Li";
fieldValue1830.children = new MFNode();

fieldValue1830.children[0] = ProtoInstance1831;

ProtoInstance1826.fieldValue[3] = fieldValue1830;

fieldValue fieldValue1832 = createNode("fieldValue");
fieldValue1832.name = "C";
Transform Transform1833 = createNode("Transform");
Transform1833.USE = "Pj";
fieldValue1832.children = new MFNode();

fieldValue1832.children[0] = Transform1833;

ProtoInstance ProtoInstance1834 = createNode("ProtoInstance");
ProtoInstance1834.USE = "Qj";
fieldValue1832.children[1] = ProtoInstance1834;

Transform Transform1835 = createNode("Transform");
Transform1835.USE = "Rj";
fieldValue1832.children[2] = Transform1835;

ProtoInstance1826.fieldValue[4] = fieldValue1832;

fieldValue fieldValue1836 = createNode("fieldValue");
fieldValue1836.name = "geometry";
Cone Cone1837 = createNode("Cone");
Cone1837.DEF = "_5";
Cone1837.height = 1;
Cone1837.bottomRadius = 0.5;
fieldValue1836.children = new MFNode();

fieldValue1836.children[0] = Cone1837;

ProtoInstance1826.fieldValue[5] = fieldValue1836;

fieldValue fieldValue1838 = createNode("fieldValue");
fieldValue1838.name = "ha";
fieldValue1838.value = "0 0 0.25";
ProtoInstance1826.fieldValue[6] = fieldValue1838;

Transform1825.children = new MFNode();

Transform1825.children[0] = ProtoInstance1826;

ProtoInstance ProtoInstance1839 = createNode("ProtoInstance");
ProtoInstance1839.name = "ra";
ProtoInstance1839.DEF = "Tj";
fieldValue fieldValue1840 = createNode("fieldValue");
fieldValue1840.name = "Da";
fieldValue1840.value = "false";
ProtoInstance1839.fieldValue = new MFNode();

ProtoInstance1839.fieldValue[0] = fieldValue1840;

Transform1825.children[1] = ProtoInstance1839;

fieldValue1824.children = new MFNode();

fieldValue1824.children[0] = Transform1825;

ProtoInstance1822.fieldValue[1] = fieldValue1824;

fieldValue fieldValue1841 = createNode("fieldValue");
fieldValue1841.name = "U";
ProtoInstance ProtoInstance1842 = createNode("ProtoInstance");
ProtoInstance1842.USE = "Sj";
fieldValue1841.children = new MFNode();

fieldValue1841.children[0] = ProtoInstance1842;

ProtoInstance1822.fieldValue[2] = fieldValue1841;

fieldValue fieldValue1843 = createNode("fieldValue");
fieldValue1843.name = "kf";
fieldValue1843.value = "17";
ProtoInstance1822.fieldValue[3] = fieldValue1843;

fieldValue fieldValue1844 = createNode("fieldValue");
fieldValue1844.name = "lf";
fieldValue1844.value = "0.6";
ProtoInstance1822.fieldValue[4] = fieldValue1844;

Transform1821.children = new MFNode();

Transform1821.children[0] = ProtoInstance1822;

fieldValue1538.children[7] = Transform1821;

Transform Transform1845 = createNode("Transform");
Transform1845.DEF = "Uj";
Transform1845.translation = new SFVec3f(new float[0.5037,-0.3512,0.749]);
Transform1845.rotation = new SFRotation(new float[0.767059,-0.641566,0.0036798,3.133]);
Transform1845.scaleOrientation = new SFRotation(new float[0.1555,-0.1734,-0.972498,0.7118]);
Transform1845.center = new SFVec3f(new float[0,0,-2.608e-8]);
ProtoInstance ProtoInstance1846 = createNode("ProtoInstance");
ProtoInstance1846.name = "hf";
ProtoInstance1846.DEF = "Vj";
fieldValue fieldValue1847 = createNode("fieldValue");
fieldValue1847.name = "center";
fieldValue1847.value = "0 0 -2.608e-8";
ProtoInstance1846.fieldValue = new MFNode();

ProtoInstance1846.fieldValue[0] = fieldValue1847;

fieldValue fieldValue1848 = createNode("fieldValue");
fieldValue1848.name = "children";
Transform Transform1849 = createNode("Transform");
Transform1849.DEF = "Wj";
Transform1849.scale = new SFVec3f(new float[0.1583,0.4654,0.1583]);
ProtoInstance ProtoInstance1850 = createNode("ProtoInstance");
ProtoInstance1850.name = "ga";
ProtoInstance1850.DEF = "Xj";
fieldValue fieldValue1851 = createNode("fieldValue");
fieldValue1851.name = "url";
fieldValue1851.value = "\"\"";
ProtoInstance1850.fieldValue = new MFNode();

ProtoInstance1850.fieldValue[0] = fieldValue1851;

fieldValue fieldValue1852 = createNode("fieldValue");
fieldValue1852.name = "diffuseColor";
fieldValue1852.value = "0.8 0.8 0";
ProtoInstance1850.fieldValue[1] = fieldValue1852;

fieldValue fieldValue1853 = createNode("fieldValue");
fieldValue1853.name = "emissiveColor";
fieldValue1853.value = "0.15 0.15 0";
ProtoInstance1850.fieldValue[2] = fieldValue1853;

fieldValue fieldValue1854 = createNode("fieldValue");
fieldValue1854.name = "B";
ProtoInstance ProtoInstance1855 = createNode("ProtoInstance");
ProtoInstance1855.USE = "Li";
fieldValue1854.children = new MFNode();

fieldValue1854.children[0] = ProtoInstance1855;

ProtoInstance1850.fieldValue[3] = fieldValue1854;

fieldValue fieldValue1856 = createNode("fieldValue");
fieldValue1856.name = "C";
Transform Transform1857 = createNode("Transform");
Transform1857.USE = "Uj";
fieldValue1856.children = new MFNode();

fieldValue1856.children[0] = Transform1857;

ProtoInstance ProtoInstance1858 = createNode("ProtoInstance");
ProtoInstance1858.USE = "Vj";
fieldValue1856.children[1] = ProtoInstance1858;

Transform Transform1859 = createNode("Transform");
Transform1859.USE = "Wj";
fieldValue1856.children[2] = Transform1859;

ProtoInstance1850.fieldValue[4] = fieldValue1856;

fieldValue fieldValue1860 = createNode("fieldValue");
fieldValue1860.name = "geometry";
Cone Cone1861 = createNode("Cone");
Cone1861.DEF = "_6";
Cone1861.height = 1;
Cone1861.bottomRadius = 0.5;
fieldValue1860.children = new MFNode();

fieldValue1860.children[0] = Cone1861;

ProtoInstance1850.fieldValue[5] = fieldValue1860;

fieldValue fieldValue1862 = createNode("fieldValue");
fieldValue1862.name = "ha";
fieldValue1862.value = "0 0 0.25";
ProtoInstance1850.fieldValue[6] = fieldValue1862;

Transform1849.children = new MFNode();

Transform1849.children[0] = ProtoInstance1850;

ProtoInstance ProtoInstance1863 = createNode("ProtoInstance");
ProtoInstance1863.name = "ra";
ProtoInstance1863.DEF = "Yj";
fieldValue fieldValue1864 = createNode("fieldValue");
fieldValue1864.name = "Da";
fieldValue1864.value = "false";
ProtoInstance1863.fieldValue = new MFNode();

ProtoInstance1863.fieldValue[0] = fieldValue1864;

Transform1849.children[1] = ProtoInstance1863;

fieldValue1848.children = new MFNode();

fieldValue1848.children[0] = Transform1849;

ProtoInstance1846.fieldValue[1] = fieldValue1848;

fieldValue fieldValue1865 = createNode("fieldValue");
fieldValue1865.name = "U";
ProtoInstance ProtoInstance1866 = createNode("ProtoInstance");
ProtoInstance1866.USE = "Xj";
fieldValue1865.children = new MFNode();

fieldValue1865.children[0] = ProtoInstance1866;

ProtoInstance1846.fieldValue[2] = fieldValue1865;

fieldValue fieldValue1867 = createNode("fieldValue");
fieldValue1867.name = "kf";
fieldValue1867.value = "4";
ProtoInstance1846.fieldValue[3] = fieldValue1867;

fieldValue fieldValue1868 = createNode("fieldValue");
fieldValue1868.name = "lf";
fieldValue1868.value = "0.5";
ProtoInstance1846.fieldValue[4] = fieldValue1868;

Transform1845.children = new MFNode();

Transform1845.children[0] = ProtoInstance1846;

fieldValue1538.children[8] = Transform1845;

Transform Transform1869 = createNode("Transform");
Transform1869.DEF = "Zj";
Transform1869.translation = new SFVec3f(new float[-0.1469,-0.05878,1.385]);
Transform1869.rotation = new SFRotation(new float[0.97098,-0.144597,-0.190496,4.532]);
Transform1869.center = new SFVec3f(new float[0,0,1.49e-8]);
Transform Transform1870 = createNode("Transform");
Transform1870.DEF = "ak";
ProtoInstance ProtoInstance1871 = createNode("ProtoInstance");
ProtoInstance1871.name = "yf";
ProtoInstance1871.DEF = "bk";
fieldValue fieldValue1872 = createNode("fieldValue");
fieldValue1872.name = "B";
ProtoInstance ProtoInstance1873 = createNode("ProtoInstance");
ProtoInstance1873.USE = "Li";
fieldValue1872.children = new MFNode();

fieldValue1872.children[0] = ProtoInstance1873;

ProtoInstance1871.fieldValue = new MFNode();

ProtoInstance1871.fieldValue[0] = fieldValue1872;

fieldValue fieldValue1874 = createNode("fieldValue");
fieldValue1874.name = "C";
Transform Transform1875 = createNode("Transform");
Transform1875.USE = "Zj";
fieldValue1874.children = new MFNode();

fieldValue1874.children[0] = Transform1875;

Transform Transform1876 = createNode("Transform");
Transform1876.USE = "ak";
fieldValue1874.children[1] = Transform1876;

ProtoInstance1871.fieldValue[1] = fieldValue1874;

fieldValue fieldValue1877 = createNode("fieldValue");
fieldValue1877.name = "point";
fieldValue1877.value = "-0.7965 -0.8007 0 -0.7965 0 0 -0.7965 0.8007 0 -0.4399 1.45 0 0 1.45 0 0.4399 1.45 0 0.7965 0.8007 0 0.7965 0 0 0.7965 -0.8007 0 0.4399 -1.45 0 0 -1.45 0 -0.4399 -1.45 0";
ProtoInstance1871.fieldValue[2] = fieldValue1877;

fieldValue fieldValue1878 = createNode("fieldValue");
fieldValue1878.name = "zf";
fieldValue1878.value = "1 0 2 1 0 2 1 0 2 1 0 2";
ProtoInstance1871.fieldValue[3] = fieldValue1878;

fieldValue fieldValue1879 = createNode("fieldValue");
fieldValue1879.name = "Sd";
fieldValue1879.value = "0 0.25 0.5 0.75 1";
ProtoInstance1871.fieldValue[4] = fieldValue1879;

fieldValue fieldValue1880 = createNode("fieldValue");
fieldValue1880.name = "Af";
fieldValue1880.value = "0 0 0.3311 0.263 0.5893 0.5 0.7889 0.72 1 1 0 0 0.2111 0.28 0.4107 0.5 0.6689 0.737 1 1 0 0 0.3311 0.263 0.5893 0.5 0.7889 0.72 1 1 0 0 0.2111 0.28 0.4107 0.5 0.6689 0.737 1 1";
ProtoInstance1871.fieldValue[5] = fieldValue1880;

fieldValue fieldValue1881 = createNode("fieldValue");
fieldValue1881.name = "Bf";
fieldValue1881.value = "0 5 10 15";
ProtoInstance1871.fieldValue[6] = fieldValue1881;

fieldValue fieldValue1882 = createNode("fieldValue");
fieldValue1882.name = "Cf";
fieldValue1882.value = "true";
ProtoInstance1871.fieldValue[7] = fieldValue1882;

fieldValue fieldValue1883 = createNode("fieldValue");
fieldValue1883.name = "scale";
fieldValue1883.value = "1.593 2.9 1";
ProtoInstance1871.fieldValue[8] = fieldValue1883;

Transform1870.children = new MFNode();

Transform1870.children[0] = ProtoInstance1871;

Transform1869.children = new MFNode();

Transform1869.children[0] = Transform1870;

fieldValue1538.children[9] = Transform1869;

Transform Transform1884 = createNode("Transform");
Transform1884.DEF = "ck";
Transform1884.translation = new SFVec3f(new float[0.9488,0.05581,4.768e-7]);
Transform1884.rotation = new SFRotation(new float[0,0,1,0.1762]);
Transform1884.center = new SFVec3f(new float[-1.063,-0.7111,-0.02255]);
ProtoInstance ProtoInstance1885 = createNode("ProtoInstance");
ProtoInstance1885.name = "Q";
ProtoInstance1885.DEF = "dk";
fieldValue fieldValue1886 = createNode("fieldValue");
fieldValue1886.name = "center";
fieldValue1886.value = "-1.063 -0.7111 -0.02255";
ProtoInstance1885.fieldValue = new MFNode();

ProtoInstance1885.fieldValue[0] = fieldValue1886;

fieldValue fieldValue1887 = createNode("fieldValue");
fieldValue1887.name = "U";
ProtoInstance ProtoInstance1888 = createNode("ProtoInstance");
ProtoInstance1888.name = "o";
ProtoInstance1888.DEF = "ek";
fieldValue fieldValue1889 = createNode("fieldValue");
fieldValue1889.name = "B";
ProtoInstance ProtoInstance1890 = createNode("ProtoInstance");
ProtoInstance1890.USE = "Li";
fieldValue1889.children = new MFNode();

fieldValue1889.children[0] = ProtoInstance1890;

ProtoInstance1888.fieldValue = new MFNode();

ProtoInstance1888.fieldValue[0] = fieldValue1889;

fieldValue fieldValue1891 = createNode("fieldValue");
fieldValue1891.name = "C";
Transform Transform1892 = createNode("Transform");
Transform1892.USE = "ck";
fieldValue1891.children = new MFNode();

fieldValue1891.children[0] = Transform1892;

ProtoInstance ProtoInstance1893 = createNode("ProtoInstance");
ProtoInstance1893.USE = "dk";
fieldValue1891.children[1] = ProtoInstance1893;

ProtoInstance ProtoInstance1894 = createNode("ProtoInstance");
ProtoInstance1894.name = "Q";
ProtoInstance1894.DEF = "rk";
fieldValue fieldValue1895 = createNode("fieldValue");
fieldValue1895.name = "center";
fieldValue1895.value = "-1.063 -0.7111 -0.02255";
ProtoInstance1894.fieldValue = new MFNode();

ProtoInstance1894.fieldValue[0] = fieldValue1895;

fieldValue fieldValue1896 = createNode("fieldValue");
fieldValue1896.name = "U";
ProtoInstance ProtoInstance1897 = createNode("ProtoInstance");
ProtoInstance1897.USE = "ek";
fieldValue1896.children = new MFNode();

fieldValue1896.children[0] = ProtoInstance1897;

ProtoInstance1894.fieldValue[1] = fieldValue1896;

fieldValue fieldValue1898 = createNode("fieldValue");
fieldValue1898.name = "children";
Transform Transform1899 = createNode("Transform");
Transform1899.DEF = "sk";
ProtoInstance ProtoInstance1900 = createNode("ProtoInstance");
ProtoInstance1900.USE = "ek";
Transform1899.children = new MFNode();

Transform1899.children[0] = ProtoInstance1900;

ProtoInstance ProtoInstance1901 = createNode("ProtoInstance");
ProtoInstance1901.name = "ra";
ProtoInstance1901.DEF = "tk";
fieldValue fieldValue1902 = createNode("fieldValue");
fieldValue1902.name = "cycleInterval";
fieldValue1902.value = "3";
ProtoInstance1901.fieldValue = new MFNode();

ProtoInstance1901.fieldValue[0] = fieldValue1902;

fieldValue fieldValue1903 = createNode("fieldValue");
fieldValue1903.name = "Da";
fieldValue1903.value = "false";
ProtoInstance1901.fieldValue[1] = fieldValue1903;

fieldValue fieldValue1904 = createNode("fieldValue");
fieldValue1904.name = "Ia";
fieldValue1904.value = "true";
ProtoInstance1901.fieldValue[2] = fieldValue1904;

Transform1899.children[1] = ProtoInstance1901;

ProtoInstance ProtoInstance1905 = createNode("ProtoInstance");
ProtoInstance1905.name = "ra";
ProtoInstance1905.DEF = "uk";
fieldValue fieldValue1906 = createNode("fieldValue");
fieldValue1906.name = "Da";
fieldValue1906.value = "false";
ProtoInstance1905.fieldValue = new MFNode();

ProtoInstance1905.fieldValue[0] = fieldValue1906;

fieldValue fieldValue1907 = createNode("fieldValue");
fieldValue1907.name = "Ia";
fieldValue1907.value = "true";
ProtoInstance1905.fieldValue[1] = fieldValue1907;

Transform1899.children[2] = ProtoInstance1905;

ProtoInstance ProtoInstance1908 = createNode("ProtoInstance");
ProtoInstance1908.name = "ra";
ProtoInstance1908.DEF = "vk";
fieldValue fieldValue1909 = createNode("fieldValue");
fieldValue1909.name = "cycleInterval";
fieldValue1909.value = "12";
ProtoInstance1908.fieldValue = new MFNode();

ProtoInstance1908.fieldValue[0] = fieldValue1909;

fieldValue fieldValue1910 = createNode("fieldValue");
fieldValue1910.name = "Da";
fieldValue1910.value = "false";
ProtoInstance1908.fieldValue[1] = fieldValue1910;

fieldValue fieldValue1911 = createNode("fieldValue");
fieldValue1911.name = "Ia";
fieldValue1911.value = "true";
ProtoInstance1908.fieldValue[2] = fieldValue1911;

Transform1899.children[3] = ProtoInstance1908;

ProtoInstance ProtoInstance1912 = createNode("ProtoInstance");
ProtoInstance1912.name = "hg";
ProtoInstance1912.DEF = "wk";
fieldValue fieldValue1913 = createNode("fieldValue");
fieldValue1913.name = "U";
ProtoInstance ProtoInstance1914 = createNode("ProtoInstance");
ProtoInstance1914.USE = "ek";
fieldValue1913.children = new MFNode();

fieldValue1913.children[0] = ProtoInstance1914;

ProtoInstance1912.fieldValue = new MFNode();

ProtoInstance1912.fieldValue[0] = fieldValue1913;

fieldValue fieldValue1915 = createNode("fieldValue");
fieldValue1915.name = "offset";
fieldValue1915.value = "1.063 0.7111 0.02255";
ProtoInstance1912.fieldValue[1] = fieldValue1915;

fieldValue fieldValue1916 = createNode("fieldValue");
fieldValue1916.name = "center";
fieldValue1916.value = "-1.063 -0.7111 -0.02255";
ProtoInstance1912.fieldValue[2] = fieldValue1916;

fieldValue fieldValue1917 = createNode("fieldValue");
fieldValue1917.name = "T";
fieldValue1917.value = "false";
ProtoInstance1912.fieldValue[3] = fieldValue1917;

Transform1899.children[4] = ProtoInstance1912;

ProtoInstance ProtoInstance1918 = createNode("ProtoInstance");
ProtoInstance1918.name = "yg";
ProtoInstance1918.DEF = "xk";
fieldValue fieldValue1919 = createNode("fieldValue");
fieldValue1919.name = "Eg";
ProtoInstance ProtoInstance1920 = createNode("ProtoInstance");
ProtoInstance1920.USE = "bk";
fieldValue1919.children = new MFNode();

fieldValue1919.children[0] = ProtoInstance1920;

ProtoInstance1918.fieldValue = new MFNode();

ProtoInstance1918.fieldValue[0] = fieldValue1919;

Transform1899.children[5] = ProtoInstance1918;

ProtoInstance ProtoInstance1921 = createNode("ProtoInstance");
ProtoInstance1921.name = "xe";
ProtoInstance1921.DEF = "yk";
fieldValue fieldValue1922 = createNode("fieldValue");
fieldValue1922.name = "ye";
ProtoInstance ProtoInstance1923 = createNode("ProtoInstance");
ProtoInstance1923.USE = "xk";
fieldValue1922.children = new MFNode();

fieldValue1922.children[0] = ProtoInstance1923;

ProtoInstance1921.fieldValue = new MFNode();

ProtoInstance1921.fieldValue[0] = fieldValue1922;

fieldValue fieldValue1924 = createNode("fieldValue");
fieldValue1924.name = "ze";
ProtoInstance ProtoInstance1925 = createNode("ProtoInstance");
ProtoInstance1925.USE = "vk";
fieldValue1924.children = new MFNode();

fieldValue1924.children[0] = ProtoInstance1925;

ProtoInstance1921.fieldValue[1] = fieldValue1924;

fieldValue fieldValue1926 = createNode("fieldValue");
fieldValue1926.name = "Ae";
ProtoInstance ProtoInstance1927 = createNode("ProtoInstance");
ProtoInstance1927.USE = "ek";
fieldValue1926.children = new MFNode();

fieldValue1926.children[0] = ProtoInstance1927;

ProtoInstance1921.fieldValue[2] = fieldValue1926;

fieldValue fieldValue1928 = createNode("fieldValue");
fieldValue1928.name = "Ce";
fieldValue1928.value = "103";
ProtoInstance1921.fieldValue[3] = fieldValue1928;

Transform1899.children[6] = ProtoInstance1921;

fieldValue1898.children = new MFNode();

fieldValue1898.children[0] = Transform1899;

ProtoInstance1894.fieldValue[2] = fieldValue1898;

fieldValue1891.children[2] = ProtoInstance1894;

Transform Transform1929 = createNode("Transform");
Transform1929.USE = "sk";
fieldValue1891.children[3] = Transform1929;

ProtoInstance1888.fieldValue[1] = fieldValue1891;

fieldValue fieldValue1930 = createNode("fieldValue");
fieldValue1930.name = "children";
Transform Transform1931 = createNode("Transform");
Transform1931.DEF = "fk";
Transform1931.translation = new SFVec3f(new float[-1.064,-0.7111,-0.02]);
Transform Transform1932 = createNode("Transform");
Transform1932.DEF = "gk";
Transform1932.scale = new SFVec3f(new float[0.02196,0.2431,0.02196]);
ProtoInstance ProtoInstance1933 = createNode("ProtoInstance");
ProtoInstance1933.name = "ga";
ProtoInstance1933.DEF = "hk";
fieldValue fieldValue1934 = createNode("fieldValue");
fieldValue1934.name = "url";
fieldValue1934.value = "\"\"";
ProtoInstance1933.fieldValue = new MFNode();

ProtoInstance1933.fieldValue[0] = fieldValue1934;

fieldValue fieldValue1935 = createNode("fieldValue");
fieldValue1935.name = "diffuseColor";
fieldValue1935.value = "0.38 0.38 0.38";
ProtoInstance1933.fieldValue[1] = fieldValue1935;

fieldValue fieldValue1936 = createNode("fieldValue");
fieldValue1936.name = "emissiveColor";
fieldValue1936.value = "0.18 0.18 0.18";
ProtoInstance1933.fieldValue[2] = fieldValue1936;

fieldValue fieldValue1937 = createNode("fieldValue");
fieldValue1937.name = "specularColor";
fieldValue1937.value = "1 0.86 0.46";
ProtoInstance1933.fieldValue[3] = fieldValue1937;

fieldValue fieldValue1938 = createNode("fieldValue");
fieldValue1938.name = "shininess";
fieldValue1938.value = "0.23";
ProtoInstance1933.fieldValue[4] = fieldValue1938;

fieldValue fieldValue1939 = createNode("fieldValue");
fieldValue1939.name = "B";
ProtoInstance ProtoInstance1940 = createNode("ProtoInstance");
ProtoInstance1940.USE = "ek";
fieldValue1939.children = new MFNode();

fieldValue1939.children[0] = ProtoInstance1940;

ProtoInstance1933.fieldValue[5] = fieldValue1939;

fieldValue fieldValue1941 = createNode("fieldValue");
fieldValue1941.name = "C";
Transform Transform1942 = createNode("Transform");
Transform1942.USE = "fk";
fieldValue1941.children = new MFNode();

fieldValue1941.children[0] = Transform1942;

Transform Transform1943 = createNode("Transform");
Transform1943.USE = "gk";
fieldValue1941.children[1] = Transform1943;

ProtoInstance1933.fieldValue[6] = fieldValue1941;

fieldValue fieldValue1944 = createNode("fieldValue");
fieldValue1944.name = "geometry";
Box Box1945 = createNode("Box");
Box1945.DEF = "_7";
Box1945.size = new SFVec3f(new float[1,1,1]);
fieldValue1944.children = new MFNode();

fieldValue1944.children[0] = Box1945;

ProtoInstance1933.fieldValue[7] = fieldValue1944;

Transform1932.children = new MFNode();

Transform1932.children[0] = ProtoInstance1933;

Transform1931.children = new MFNode();

Transform1931.children[0] = Transform1932;

fieldValue1930.children = new MFNode();

fieldValue1930.children[0] = Transform1931;

Transform Transform1946 = createNode("Transform");
Transform1946.DEF = "ik";
Transform1946.translation = new SFVec3f(new float[-1.063,-0.7072,-0.02]);
Transform1946.rotation = new SFRotation(new float[0,0,1,4.711]);
Transform1946.scaleOrientation = new SFRotation(new float[0,0,-1,0.120801]);
Transform Transform1947 = createNode("Transform");
Transform1947.DEF = "jk";
Transform1947.scale = new SFVec3f(new float[0.02196,0.2431,0.02196]);
ProtoInstance ProtoInstance1948 = createNode("ProtoInstance");
ProtoInstance1948.name = "ga";
ProtoInstance1948.DEF = "kk";
fieldValue fieldValue1949 = createNode("fieldValue");
fieldValue1949.name = "url";
fieldValue1949.value = "\"\"";
ProtoInstance1948.fieldValue = new MFNode();

ProtoInstance1948.fieldValue[0] = fieldValue1949;

fieldValue fieldValue1950 = createNode("fieldValue");
fieldValue1950.name = "diffuseColor";
fieldValue1950.value = "0.38 0.38 0.38";
ProtoInstance1948.fieldValue[1] = fieldValue1950;

fieldValue fieldValue1951 = createNode("fieldValue");
fieldValue1951.name = "emissiveColor";
fieldValue1951.value = "0.18 0.18 0.18";
ProtoInstance1948.fieldValue[2] = fieldValue1951;

fieldValue fieldValue1952 = createNode("fieldValue");
fieldValue1952.name = "specularColor";
fieldValue1952.value = "1 0.86 0.46";
ProtoInstance1948.fieldValue[3] = fieldValue1952;

fieldValue fieldValue1953 = createNode("fieldValue");
fieldValue1953.name = "shininess";
fieldValue1953.value = "0.23";
ProtoInstance1948.fieldValue[4] = fieldValue1953;

fieldValue fieldValue1954 = createNode("fieldValue");
fieldValue1954.name = "B";
ProtoInstance ProtoInstance1955 = createNode("ProtoInstance");
ProtoInstance1955.USE = "ek";
fieldValue1954.children = new MFNode();

fieldValue1954.children[0] = ProtoInstance1955;

ProtoInstance1948.fieldValue[5] = fieldValue1954;

fieldValue fieldValue1956 = createNode("fieldValue");
fieldValue1956.name = "C";
Transform Transform1957 = createNode("Transform");
Transform1957.USE = "ik";
fieldValue1956.children = new MFNode();

fieldValue1956.children[0] = Transform1957;

Transform Transform1958 = createNode("Transform");
Transform1958.USE = "jk";
fieldValue1956.children[1] = Transform1958;

ProtoInstance1948.fieldValue[6] = fieldValue1956;

fieldValue fieldValue1959 = createNode("fieldValue");
fieldValue1959.name = "geometry";
Box Box1960 = createNode("Box");
Box1960.DEF = "_8";
Box1960.size = new SFVec3f(new float[1,1,1]);
fieldValue1959.children = new MFNode();

fieldValue1959.children[0] = Box1960;

ProtoInstance1948.fieldValue[7] = fieldValue1959;

Transform1947.children = new MFNode();

Transform1947.children[0] = ProtoInstance1948;

Transform1946.children = new MFNode();

Transform1946.children[0] = Transform1947;

fieldValue1930.children[1] = Transform1946;

Transform Transform1961 = createNode("Transform");
Transform1961.DEF = "lk";
Transform1961.translation = new SFVec3f(new float[-1.065,-0.7075,-0.02255]);
Transform1961.rotation = new SFRotation(new float[1,0,0,1.571]);
Transform Transform1962 = createNode("Transform");
Transform1962.DEF = "mk";
Transform1962.scale = new SFVec3f(new float[0.02196,0.2431,0.02196]);
ProtoInstance ProtoInstance1963 = createNode("ProtoInstance");
ProtoInstance1963.name = "ga";
ProtoInstance1963.DEF = "nk";
fieldValue fieldValue1964 = createNode("fieldValue");
fieldValue1964.name = "url";
fieldValue1964.value = "\"\"";
ProtoInstance1963.fieldValue = new MFNode();

ProtoInstance1963.fieldValue[0] = fieldValue1964;

fieldValue fieldValue1965 = createNode("fieldValue");
fieldValue1965.name = "diffuseColor";
fieldValue1965.value = "0.38 0.38 0.38";
ProtoInstance1963.fieldValue[1] = fieldValue1965;

fieldValue fieldValue1966 = createNode("fieldValue");
fieldValue1966.name = "emissiveColor";
fieldValue1966.value = "0.18 0.18 0.18";
ProtoInstance1963.fieldValue[2] = fieldValue1966;

fieldValue fieldValue1967 = createNode("fieldValue");
fieldValue1967.name = "specularColor";
fieldValue1967.value = "1 0.86 0.46";
ProtoInstance1963.fieldValue[3] = fieldValue1967;

fieldValue fieldValue1968 = createNode("fieldValue");
fieldValue1968.name = "shininess";
fieldValue1968.value = "0.23";
ProtoInstance1963.fieldValue[4] = fieldValue1968;

fieldValue fieldValue1969 = createNode("fieldValue");
fieldValue1969.name = "B";
ProtoInstance ProtoInstance1970 = createNode("ProtoInstance");
ProtoInstance1970.USE = "ek";
fieldValue1969.children = new MFNode();

fieldValue1969.children[0] = ProtoInstance1970;

ProtoInstance1963.fieldValue[5] = fieldValue1969;

fieldValue fieldValue1971 = createNode("fieldValue");
fieldValue1971.name = "C";
Transform Transform1972 = createNode("Transform");
Transform1972.USE = "lk";
fieldValue1971.children = new MFNode();

fieldValue1971.children[0] = Transform1972;

Transform Transform1973 = createNode("Transform");
Transform1973.USE = "mk";
fieldValue1971.children[1] = Transform1973;

ProtoInstance1963.fieldValue[6] = fieldValue1971;

fieldValue fieldValue1974 = createNode("fieldValue");
fieldValue1974.name = "geometry";
Box Box1975 = createNode("Box");
Box1975.DEF = "_9";
Box1975.size = new SFVec3f(new float[1,1,1]);
fieldValue1974.children = new MFNode();

fieldValue1974.children[0] = Box1975;

ProtoInstance1963.fieldValue[7] = fieldValue1974;

Transform1962.children = new MFNode();

Transform1962.children[0] = ProtoInstance1963;

Transform1961.children = new MFNode();

Transform1961.children[0] = Transform1962;

fieldValue1930.children[2] = Transform1961;

Transform Transform1976 = createNode("Transform");
Transform1976.DEF = "ok";
Transform1976.translation = new SFVec3f(new float[-1.063,-0.7112,-0.02]);
Transform Transform1977 = createNode("Transform");
Transform1977.DEF = "pk";
Transform1977.scale = new SFVec3f(new float[0.1604,0.1604,0.1604]);
ProtoInstance ProtoInstance1978 = createNode("ProtoInstance");
ProtoInstance1978.name = "ga";
ProtoInstance1978.DEF = "qk";
fieldValue fieldValue1979 = createNode("fieldValue");
fieldValue1979.name = "url";
fieldValue1979.value = "\"\"";
ProtoInstance1978.fieldValue = new MFNode();

ProtoInstance1978.fieldValue[0] = fieldValue1979;

fieldValue fieldValue1980 = createNode("fieldValue");
fieldValue1980.name = "diffuseColor";
fieldValue1980.value = "0.38 0.38 0.38";
ProtoInstance1978.fieldValue[1] = fieldValue1980;

fieldValue fieldValue1981 = createNode("fieldValue");
fieldValue1981.name = "emissiveColor";
fieldValue1981.value = "0.18 0.18 0.18";
ProtoInstance1978.fieldValue[2] = fieldValue1981;

fieldValue fieldValue1982 = createNode("fieldValue");
fieldValue1982.name = "specularColor";
fieldValue1982.value = "1 0.86 0.46";
ProtoInstance1978.fieldValue[3] = fieldValue1982;

fieldValue fieldValue1983 = createNode("fieldValue");
fieldValue1983.name = "shininess";
fieldValue1983.value = "0.23";
ProtoInstance1978.fieldValue[4] = fieldValue1983;

fieldValue fieldValue1984 = createNode("fieldValue");
fieldValue1984.name = "B";
ProtoInstance ProtoInstance1985 = createNode("ProtoInstance");
ProtoInstance1985.USE = "ek";
fieldValue1984.children = new MFNode();

fieldValue1984.children[0] = ProtoInstance1985;

ProtoInstance1978.fieldValue[5] = fieldValue1984;

fieldValue fieldValue1986 = createNode("fieldValue");
fieldValue1986.name = "C";
Transform Transform1987 = createNode("Transform");
Transform1987.USE = "ok";
fieldValue1986.children = new MFNode();

fieldValue1986.children[0] = Transform1987;

Transform Transform1988 = createNode("Transform");
Transform1988.USE = "pk";
fieldValue1986.children[1] = Transform1988;

ProtoInstance1978.fieldValue[6] = fieldValue1986;

fieldValue fieldValue1989 = createNode("fieldValue");
fieldValue1989.name = "geometry";
Sphere Sphere1990 = createNode("Sphere");
Sphere1990.DEF = "_10";
Sphere1990.radius = 0.5;
fieldValue1989.children = new MFNode();

fieldValue1989.children[0] = Sphere1990;

ProtoInstance1978.fieldValue[7] = fieldValue1989;

Transform1977.children = new MFNode();

Transform1977.children[0] = ProtoInstance1978;

Transform1976.children = new MFNode();

Transform1976.children[0] = Transform1977;

fieldValue1930.children[3] = Transform1976;

ProtoInstance1888.fieldValue[2] = fieldValue1930;

fieldValue fieldValue1991 = createNode("fieldValue");
fieldValue1991.name = "A";
ProtoInstance ProtoInstance1992 = createNode("ProtoInstance");
ProtoInstance1992.USE = "hk";
fieldValue1991.children = new MFNode();

fieldValue1991.children[0] = ProtoInstance1992;

ProtoInstance ProtoInstance1993 = createNode("ProtoInstance");
ProtoInstance1993.USE = "kk";
fieldValue1991.children[1] = ProtoInstance1993;

ProtoInstance ProtoInstance1994 = createNode("ProtoInstance");
ProtoInstance1994.USE = "nk";
fieldValue1991.children[2] = ProtoInstance1994;

ProtoInstance ProtoInstance1995 = createNode("ProtoInstance");
ProtoInstance1995.USE = "qk";
fieldValue1991.children[3] = ProtoInstance1995;

ProtoInstance1888.fieldValue[3] = fieldValue1991;

fieldValue1887.children = new MFNode();

fieldValue1887.children[0] = ProtoInstance1888;

ProtoInstance1885.fieldValue[1] = fieldValue1887;

fieldValue fieldValue1996 = createNode("fieldValue");
fieldValue1996.name = "children";
ProtoInstance ProtoInstance1997 = createNode("ProtoInstance");
ProtoInstance1997.USE = "rk";
fieldValue1996.children = new MFNode();

fieldValue1996.children[0] = ProtoInstance1997;

ProtoInstance1885.fieldValue[2] = fieldValue1996;

fieldValue fieldValue1998 = createNode("fieldValue");
fieldValue1998.name = "W";
fieldValue1998.value = "2";
ProtoInstance1885.fieldValue[3] = fieldValue1998;

Transform1884.children = new MFNode();

Transform1884.children[0] = ProtoInstance1885;

fieldValue1538.children[10] = Transform1884;

Transform Transform1999 = createNode("Transform");
Transform1999.DEF = "zk";
Transform1999.translation = new SFVec3f(new float[2.022,0.2389,1.5]);
Transform1999.rotation = new SFRotation(new float[-0.145494,0.989359,0,0.7418]);
Transform Transform2000 = createNode("Transform");
Transform2000.DEF = "Ak";
ProtoInstance ProtoInstance2001 = createNode("ProtoInstance");
ProtoInstance2001.name = "K";
ProtoInstance2001.DEF = "Bk";
fieldValue fieldValue2002 = createNode("fieldValue");
fieldValue2002.name = "B";
ProtoInstance ProtoInstance2003 = createNode("ProtoInstance");
ProtoInstance2003.USE = "Li";
fieldValue2002.children = new MFNode();

fieldValue2002.children[0] = ProtoInstance2003;

ProtoInstance2001.fieldValue = new MFNode();

ProtoInstance2001.fieldValue[0] = fieldValue2002;

fieldValue fieldValue2004 = createNode("fieldValue");
fieldValue2004.name = "C";
Transform Transform2005 = createNode("Transform");
Transform2005.USE = "zk";
fieldValue2004.children = new MFNode();

fieldValue2004.children[0] = Transform2005;

Transform Transform2006 = createNode("Transform");
Transform2006.USE = "Ak";
fieldValue2004.children[1] = Transform2006;

ProtoInstance2001.fieldValue[1] = fieldValue2004;

fieldValue fieldValue2007 = createNode("fieldValue");
fieldValue2007.name = "L";
fieldValue2007.value = "1.528";
ProtoInstance2001.fieldValue[2] = fieldValue2007;

fieldValue fieldValue2008 = createNode("fieldValue");
fieldValue2008.name = "attenuation";
fieldValue2008.value = "0.001 0.6545 0";
ProtoInstance2001.fieldValue[3] = fieldValue2008;

Transform2000.children = new MFNode();

Transform2000.children[0] = ProtoInstance2001;

Transform1999.children = new MFNode();

Transform1999.children[0] = Transform2000;

fieldValue1538.children[11] = Transform1999;

Transform Transform2009 = createNode("Transform");
Transform2009.DEF = "Ck";
Transform Transform2010 = createNode("Transform");
Transform2010.DEF = "Dk";
ProtoInstance ProtoInstance2011 = createNode("ProtoInstance");
ProtoInstance2011.name = "Ih";
ProtoInstance2011.DEF = "Ek";
fieldValue fieldValue2012 = createNode("fieldValue");
fieldValue2012.name = "B";
ProtoInstance ProtoInstance2013 = createNode("ProtoInstance");
ProtoInstance2013.USE = "Li";
fieldValue2012.children = new MFNode();

fieldValue2012.children[0] = ProtoInstance2013;

ProtoInstance2011.fieldValue = new MFNode();

ProtoInstance2011.fieldValue[0] = fieldValue2012;

fieldValue fieldValue2014 = createNode("fieldValue");
fieldValue2014.name = "C";
Transform Transform2015 = createNode("Transform");
Transform2015.USE = "Ck";
fieldValue2014.children = new MFNode();

fieldValue2014.children[0] = Transform2015;

Transform Transform2016 = createNode("Transform");
Transform2016.USE = "Dk";
fieldValue2014.children[1] = Transform2016;

ProtoInstance2011.fieldValue[1] = fieldValue2014;

fieldValue fieldValue2017 = createNode("fieldValue");
fieldValue2017.name = "url";
fieldValue2017.value = "\"tonerow3d_16_22.wav\"";
ProtoInstance2011.fieldValue[2] = fieldValue2017;

Transform2010.children = new MFNode();

Transform2010.children[0] = ProtoInstance2011;

ProtoInstance ProtoInstance2018 = createNode("ProtoInstance");
ProtoInstance2018.name = "ra";
ProtoInstance2018.DEF = "Fk";
fieldValue fieldValue2019 = createNode("fieldValue");
fieldValue2019.name = "cycleInterval";
fieldValue2019.value = "0.232925";
ProtoInstance2018.fieldValue = new MFNode();

ProtoInstance2018.fieldValue[0] = fieldValue2019;

fieldValue fieldValue2020 = createNode("fieldValue");
fieldValue2020.name = "xa";
fieldValue2020.value = "0.232925";
ProtoInstance2018.fieldValue[1] = fieldValue2020;

Transform2010.children[1] = ProtoInstance2018;

ProtoInstance ProtoInstance2021 = createNode("ProtoInstance");
ProtoInstance2021.name = "Nh";
ProtoInstance2021.DEF = "Gk";
fieldValue fieldValue2022 = createNode("fieldValue");
fieldValue2022.name = "Oh";
ProtoInstance ProtoInstance2023 = createNode("ProtoInstance");
ProtoInstance2023.USE = "Ek";
fieldValue2022.children = new MFNode();

fieldValue2022.children[0] = ProtoInstance2023;

ProtoInstance2021.fieldValue = new MFNode();

ProtoInstance2021.fieldValue[0] = fieldValue2022;

fieldValue fieldValue2024 = createNode("fieldValue");
fieldValue2024.name = "intensity";
fieldValue2024.value = "0.49";
ProtoInstance2021.fieldValue[1] = fieldValue2024;

fieldValue fieldValue2025 = createNode("fieldValue");
fieldValue2025.name = "duration";
fieldValue2025.value = "0.232925";
ProtoInstance2021.fieldValue[2] = fieldValue2025;

Transform2010.children[2] = ProtoInstance2021;

ProtoInstance ProtoInstance2026 = createNode("ProtoInstance");
ProtoInstance2026.name = "ra";
ProtoInstance2026.DEF = "Hk";
fieldValue fieldValue2027 = createNode("fieldValue");
fieldValue2027.name = "xa";
fieldValue2027.value = "1.268";
ProtoInstance2026.fieldValue = new MFNode();

ProtoInstance2026.fieldValue[0] = fieldValue2027;

Transform2010.children[3] = ProtoInstance2026;

ProtoInstance ProtoInstance2028 = createNode("ProtoInstance");
ProtoInstance2028.name = "Xh";
ProtoInstance2028.DEF = "Ik";
Transform2010.children[4] = ProtoInstance2028;

ProtoInstance ProtoInstance2029 = createNode("ProtoInstance");
ProtoInstance2029.name = "ra";
ProtoInstance2029.DEF = "Jk";
fieldValue fieldValue2030 = createNode("fieldValue");
fieldValue2030.name = "cycleInterval";
fieldValue2030.value = "0.232925";
ProtoInstance2029.fieldValue = new MFNode();

ProtoInstance2029.fieldValue[0] = fieldValue2030;

fieldValue fieldValue2031 = createNode("fieldValue");
fieldValue2031.name = "xa";
fieldValue2031.value = "0.232925";
ProtoInstance2029.fieldValue[1] = fieldValue2031;

Transform2010.children[5] = ProtoInstance2029;

ProtoInstance ProtoInstance2032 = createNode("ProtoInstance");
ProtoInstance2032.name = "Nh";
ProtoInstance2032.DEF = "Kk";
fieldValue fieldValue2033 = createNode("fieldValue");
fieldValue2033.name = "Oh";
ProtoInstance ProtoInstance2034 = createNode("ProtoInstance");
ProtoInstance2034.USE = "Ek";
fieldValue2033.children = new MFNode();

fieldValue2033.children[0] = ProtoInstance2034;

ProtoInstance2032.fieldValue = new MFNode();

ProtoInstance2032.fieldValue[0] = fieldValue2033;

fieldValue fieldValue2035 = createNode("fieldValue");
fieldValue2035.name = "intensity";
fieldValue2035.value = "0.3";
ProtoInstance2032.fieldValue[1] = fieldValue2035;

fieldValue fieldValue2036 = createNode("fieldValue");
fieldValue2036.name = "duration";
fieldValue2036.value = "0.232925";
ProtoInstance2032.fieldValue[2] = fieldValue2036;

Transform2010.children[6] = ProtoInstance2032;

ProtoInstance ProtoInstance2037 = createNode("ProtoInstance");
ProtoInstance2037.name = "ra";
ProtoInstance2037.DEF = "Lk";
fieldValue fieldValue2038 = createNode("fieldValue");
fieldValue2038.name = "xa";
fieldValue2038.value = "1.268";
ProtoInstance2037.fieldValue = new MFNode();

ProtoInstance2037.fieldValue[0] = fieldValue2038;

Transform2010.children[7] = ProtoInstance2037;

ProtoInstance ProtoInstance2039 = createNode("ProtoInstance");
ProtoInstance2039.name = "Xh";
ProtoInstance2039.DEF = "Mk";
Transform2010.children[8] = ProtoInstance2039;

ProtoInstance ProtoInstance2040 = createNode("ProtoInstance");
ProtoInstance2040.name = "ra";
ProtoInstance2040.DEF = "Nk";
fieldValue fieldValue2041 = createNode("fieldValue");
fieldValue2041.name = "cycleInterval";
fieldValue2041.value = "0.232925";
ProtoInstance2040.fieldValue = new MFNode();

ProtoInstance2040.fieldValue[0] = fieldValue2041;

fieldValue fieldValue2042 = createNode("fieldValue");
fieldValue2042.name = "xa";
fieldValue2042.value = "0.232925";
ProtoInstance2040.fieldValue[1] = fieldValue2042;

Transform2010.children[9] = ProtoInstance2040;

ProtoInstance ProtoInstance2043 = createNode("ProtoInstance");
ProtoInstance2043.name = "Nh";
ProtoInstance2043.DEF = "Ok";
fieldValue fieldValue2044 = createNode("fieldValue");
fieldValue2044.name = "Oh";
ProtoInstance ProtoInstance2045 = createNode("ProtoInstance");
ProtoInstance2045.USE = "Ek";
fieldValue2044.children = new MFNode();

fieldValue2044.children[0] = ProtoInstance2045;

ProtoInstance2043.fieldValue = new MFNode();

ProtoInstance2043.fieldValue[0] = fieldValue2044;

fieldValue fieldValue2046 = createNode("fieldValue");
fieldValue2046.name = "intensity";
fieldValue2046.value = "0.2";
ProtoInstance2043.fieldValue[1] = fieldValue2046;

fieldValue fieldValue2047 = createNode("fieldValue");
fieldValue2047.name = "duration";
fieldValue2047.value = "0.232925";
ProtoInstance2043.fieldValue[2] = fieldValue2047;

Transform2010.children[10] = ProtoInstance2043;

ProtoInstance ProtoInstance2048 = createNode("ProtoInstance");
ProtoInstance2048.name = "ra";
ProtoInstance2048.DEF = "Pk";
fieldValue fieldValue2049 = createNode("fieldValue");
fieldValue2049.name = "xa";
fieldValue2049.value = "1.268";
ProtoInstance2048.fieldValue = new MFNode();

ProtoInstance2048.fieldValue[0] = fieldValue2049;

Transform2010.children[11] = ProtoInstance2048;

ProtoInstance ProtoInstance2050 = createNode("ProtoInstance");
ProtoInstance2050.name = "Xh";
ProtoInstance2050.DEF = "Qk";
Transform2010.children[12] = ProtoInstance2050;

ProtoInstance ProtoInstance2051 = createNode("ProtoInstance");
ProtoInstance2051.name = "ra";
ProtoInstance2051.DEF = "Rk";
fieldValue fieldValue2052 = createNode("fieldValue");
fieldValue2052.name = "cycleInterval";
fieldValue2052.value = "0.232925";
ProtoInstance2051.fieldValue = new MFNode();

ProtoInstance2051.fieldValue[0] = fieldValue2052;

fieldValue fieldValue2053 = createNode("fieldValue");
fieldValue2053.name = "xa";
fieldValue2053.value = "0.232925";
ProtoInstance2051.fieldValue[1] = fieldValue2053;

Transform2010.children[13] = ProtoInstance2051;

ProtoInstance ProtoInstance2054 = createNode("ProtoInstance");
ProtoInstance2054.name = "Nh";
ProtoInstance2054.DEF = "Sk";
fieldValue fieldValue2055 = createNode("fieldValue");
fieldValue2055.name = "Oh";
ProtoInstance ProtoInstance2056 = createNode("ProtoInstance");
ProtoInstance2056.USE = "Ek";
fieldValue2055.children = new MFNode();

fieldValue2055.children[0] = ProtoInstance2056;

ProtoInstance2054.fieldValue = new MFNode();

ProtoInstance2054.fieldValue[0] = fieldValue2055;

fieldValue fieldValue2057 = createNode("fieldValue");
fieldValue2057.name = "intensity";
fieldValue2057.value = "0.3";
ProtoInstance2054.fieldValue[1] = fieldValue2057;

fieldValue fieldValue2058 = createNode("fieldValue");
fieldValue2058.name = "duration";
fieldValue2058.value = "0.232925";
ProtoInstance2054.fieldValue[2] = fieldValue2058;

Transform2010.children[14] = ProtoInstance2054;

ProtoInstance ProtoInstance2059 = createNode("ProtoInstance");
ProtoInstance2059.name = "ra";
ProtoInstance2059.DEF = "Tk";
fieldValue fieldValue2060 = createNode("fieldValue");
fieldValue2060.name = "xa";
fieldValue2060.value = "1.268";
ProtoInstance2059.fieldValue = new MFNode();

ProtoInstance2059.fieldValue[0] = fieldValue2060;

Transform2010.children[15] = ProtoInstance2059;

ProtoInstance ProtoInstance2061 = createNode("ProtoInstance");
ProtoInstance2061.name = "Xh";
ProtoInstance2061.DEF = "Uk";
Transform2010.children[16] = ProtoInstance2061;

ProtoInstance ProtoInstance2062 = createNode("ProtoInstance");
ProtoInstance2062.name = "ra";
ProtoInstance2062.DEF = "Vk";
fieldValue fieldValue2063 = createNode("fieldValue");
fieldValue2063.name = "cycleInterval";
fieldValue2063.value = "0.232925";
ProtoInstance2062.fieldValue = new MFNode();

ProtoInstance2062.fieldValue[0] = fieldValue2063;

fieldValue fieldValue2064 = createNode("fieldValue");
fieldValue2064.name = "xa";
fieldValue2064.value = "0.232925";
ProtoInstance2062.fieldValue[1] = fieldValue2064;

Transform2010.children[17] = ProtoInstance2062;

ProtoInstance ProtoInstance2065 = createNode("ProtoInstance");
ProtoInstance2065.name = "Nh";
ProtoInstance2065.DEF = "Wk";
fieldValue fieldValue2066 = createNode("fieldValue");
fieldValue2066.name = "Oh";
ProtoInstance ProtoInstance2067 = createNode("ProtoInstance");
ProtoInstance2067.USE = "Ek";
fieldValue2066.children = new MFNode();

fieldValue2066.children[0] = ProtoInstance2067;

ProtoInstance2065.fieldValue = new MFNode();

ProtoInstance2065.fieldValue[0] = fieldValue2066;

fieldValue fieldValue2068 = createNode("fieldValue");
fieldValue2068.name = "intensity";
fieldValue2068.value = "0.49";
ProtoInstance2065.fieldValue[1] = fieldValue2068;

fieldValue fieldValue2069 = createNode("fieldValue");
fieldValue2069.name = "duration";
fieldValue2069.value = "0.232925";
ProtoInstance2065.fieldValue[2] = fieldValue2069;

Transform2010.children[18] = ProtoInstance2065;

ProtoInstance ProtoInstance2070 = createNode("ProtoInstance");
ProtoInstance2070.name = "ra";
ProtoInstance2070.DEF = "Xk";
fieldValue fieldValue2071 = createNode("fieldValue");
fieldValue2071.name = "xa";
fieldValue2071.value = "1.268";
ProtoInstance2070.fieldValue = new MFNode();

ProtoInstance2070.fieldValue[0] = fieldValue2071;

Transform2010.children[19] = ProtoInstance2070;

ProtoInstance ProtoInstance2072 = createNode("ProtoInstance");
ProtoInstance2072.name = "Xh";
ProtoInstance2072.DEF = "Yk";
Transform2010.children[20] = ProtoInstance2072;

ProtoInstance ProtoInstance2073 = createNode("ProtoInstance");
ProtoInstance2073.name = "ra";
ProtoInstance2073.DEF = "Zk";
fieldValue fieldValue2074 = createNode("fieldValue");
fieldValue2074.name = "cycleInterval";
fieldValue2074.value = "0.232925";
ProtoInstance2073.fieldValue = new MFNode();

ProtoInstance2073.fieldValue[0] = fieldValue2074;

fieldValue fieldValue2075 = createNode("fieldValue");
fieldValue2075.name = "xa";
fieldValue2075.value = "0.232925";
ProtoInstance2073.fieldValue[1] = fieldValue2075;

Transform2010.children[21] = ProtoInstance2073;

ProtoInstance ProtoInstance2076 = createNode("ProtoInstance");
ProtoInstance2076.name = "Nh";
ProtoInstance2076.DEF = "al";
fieldValue fieldValue2077 = createNode("fieldValue");
fieldValue2077.name = "Oh";
ProtoInstance ProtoInstance2078 = createNode("ProtoInstance");
ProtoInstance2078.USE = "Ek";
fieldValue2077.children = new MFNode();

fieldValue2077.children[0] = ProtoInstance2078;

ProtoInstance2076.fieldValue = new MFNode();

ProtoInstance2076.fieldValue[0] = fieldValue2077;

fieldValue fieldValue2079 = createNode("fieldValue");
fieldValue2079.name = "intensity";
fieldValue2079.value = "0.75";
ProtoInstance2076.fieldValue[1] = fieldValue2079;

fieldValue fieldValue2080 = createNode("fieldValue");
fieldValue2080.name = "duration";
fieldValue2080.value = "0.232925";
ProtoInstance2076.fieldValue[2] = fieldValue2080;

Transform2010.children[22] = ProtoInstance2076;

ProtoInstance ProtoInstance2081 = createNode("ProtoInstance");
ProtoInstance2081.name = "ra";
ProtoInstance2081.DEF = "bl";
fieldValue fieldValue2082 = createNode("fieldValue");
fieldValue2082.name = "xa";
fieldValue2082.value = "1.268";
ProtoInstance2081.fieldValue = new MFNode();

ProtoInstance2081.fieldValue[0] = fieldValue2082;

Transform2010.children[23] = ProtoInstance2081;

ProtoInstance ProtoInstance2083 = createNode("ProtoInstance");
ProtoInstance2083.name = "Xh";
ProtoInstance2083.DEF = "cl";
Transform2010.children[24] = ProtoInstance2083;

ProtoInstance ProtoInstance2084 = createNode("ProtoInstance");
ProtoInstance2084.name = "ra";
ProtoInstance2084.DEF = "dl";
fieldValue fieldValue2085 = createNode("fieldValue");
fieldValue2085.name = "cycleInterval";
fieldValue2085.value = "0.232925";
ProtoInstance2084.fieldValue = new MFNode();

ProtoInstance2084.fieldValue[0] = fieldValue2085;

fieldValue fieldValue2086 = createNode("fieldValue");
fieldValue2086.name = "xa";
fieldValue2086.value = "0.232925";
ProtoInstance2084.fieldValue[1] = fieldValue2086;

Transform2010.children[25] = ProtoInstance2084;

ProtoInstance ProtoInstance2087 = createNode("ProtoInstance");
ProtoInstance2087.name = "Nh";
ProtoInstance2087.DEF = "el";
fieldValue fieldValue2088 = createNode("fieldValue");
fieldValue2088.name = "Oh";
ProtoInstance ProtoInstance2089 = createNode("ProtoInstance");
ProtoInstance2089.USE = "Ek";
fieldValue2088.children = new MFNode();

fieldValue2088.children[0] = ProtoInstance2089;

ProtoInstance2087.fieldValue = new MFNode();

ProtoInstance2087.fieldValue[0] = fieldValue2088;

fieldValue fieldValue2090 = createNode("fieldValue");
fieldValue2090.name = "duration";
fieldValue2090.value = "0.232925";
ProtoInstance2087.fieldValue[1] = fieldValue2090;

Transform2010.children[26] = ProtoInstance2087;

ProtoInstance ProtoInstance2091 = createNode("ProtoInstance");
ProtoInstance2091.name = "ra";
ProtoInstance2091.DEF = "fl";
fieldValue fieldValue2092 = createNode("fieldValue");
fieldValue2092.name = "xa";
fieldValue2092.value = "1.268";
ProtoInstance2091.fieldValue = new MFNode();

ProtoInstance2091.fieldValue[0] = fieldValue2092;

Transform2010.children[27] = ProtoInstance2091;

ProtoInstance ProtoInstance2093 = createNode("ProtoInstance");
ProtoInstance2093.name = "Xh";
ProtoInstance2093.DEF = "gl";
Transform2010.children[28] = ProtoInstance2093;

Transform2009.children = new MFNode();

Transform2009.children[0] = Transform2010;

fieldValue1538.children[12] = Transform2009;

Transform Transform2094 = createNode("Transform");
Transform2094.DEF = "hl";
Transform2094.translation = new SFVec3f(new float[-1.192e-7,-0.006944,0]);
Transform Transform2095 = createNode("Transform");
Transform2095.DEF = "il";
Transform2095.scale = new SFVec3f(new float[4.181,1.778,4.181]);
ProtoInstance ProtoInstance2096 = createNode("ProtoInstance");
ProtoInstance2096.name = "Zh";
ProtoInstance2096.DEF = "jl";
fieldValue fieldValue2097 = createNode("fieldValue");
fieldValue2097.name = "url";
fieldValue2097.value = "\"\"";
ProtoInstance2096.fieldValue = new MFNode();

ProtoInstance2096.fieldValue[0] = fieldValue2097;

fieldValue fieldValue2098 = createNode("fieldValue");
fieldValue2098.name = "emissiveColor";
fieldValue2098.value = "0 0.09 0.15";
ProtoInstance2096.fieldValue[1] = fieldValue2098;

fieldValue fieldValue2099 = createNode("fieldValue");
fieldValue2099.name = "specularColor";
fieldValue2099.value = "0.5 0.5 0.5";
ProtoInstance2096.fieldValue[2] = fieldValue2099;

fieldValue fieldValue2100 = createNode("fieldValue");
fieldValue2100.name = "B";
ProtoInstance ProtoInstance2101 = createNode("ProtoInstance");
ProtoInstance2101.USE = "Li";
fieldValue2100.children = new MFNode();

fieldValue2100.children[0] = ProtoInstance2101;

ProtoInstance2096.fieldValue[3] = fieldValue2100;

fieldValue fieldValue2102 = createNode("fieldValue");
fieldValue2102.name = "C";
Transform Transform2103 = createNode("Transform");
Transform2103.USE = "hl";
fieldValue2102.children = new MFNode();

fieldValue2102.children[0] = Transform2103;

Transform Transform2104 = createNode("Transform");
Transform2104.USE = "il";
fieldValue2102.children[1] = Transform2104;

ProtoInstance2096.fieldValue[4] = fieldValue2102;

fieldValue fieldValue2105 = createNode("fieldValue");
fieldValue2105.name = "ai";
fieldValue2105.value = "4 4";
ProtoInstance2096.fieldValue[5] = fieldValue2105;

fieldValue fieldValue2106 = createNode("fieldValue");
fieldValue2106.name = "H";
fieldValue2106.value = "false";
ProtoInstance2096.fieldValue[6] = fieldValue2106;

fieldValue fieldValue2107 = createNode("fieldValue");
fieldValue2107.name = "diffuseColor";
fieldValue2107.value = "0 0 0";
ProtoInstance2096.fieldValue[7] = fieldValue2107;

fieldValue fieldValue2108 = createNode("fieldValue");
fieldValue2108.name = "choice";
fieldValue2108.value = "1";
ProtoInstance2096.fieldValue[8] = fieldValue2108;

Transform2095.children = new MFNode();

Transform2095.children[0] = ProtoInstance2096;

Transform2094.children = new MFNode();

Transform2094.children[0] = Transform2095;

fieldValue1538.children[13] = Transform2094;

ProtoInstance1536.fieldValue[1] = fieldValue1538;

fieldValue fieldValue2109 = createNode("fieldValue");
fieldValue2109.name = "A";
ProtoInstance ProtoInstance2110 = createNode("ProtoInstance");
ProtoInstance2110.USE = "Oi";
fieldValue2109.children = new MFNode();

fieldValue2109.children[0] = ProtoInstance2110;

ProtoInstance ProtoInstance2111 = createNode("ProtoInstance");
ProtoInstance2111.USE = "Ri";
fieldValue2109.children[1] = ProtoInstance2111;

ProtoInstance ProtoInstance2112 = createNode("ProtoInstance");
ProtoInstance2112.USE = "aj";
fieldValue2109.children[2] = ProtoInstance2112;

ProtoInstance ProtoInstance2113 = createNode("ProtoInstance");
ProtoInstance2113.USE = "fj";
fieldValue2109.children[3] = ProtoInstance2113;

ProtoInstance ProtoInstance2114 = createNode("ProtoInstance");
ProtoInstance2114.USE = "ij";
fieldValue2109.children[4] = ProtoInstance2114;

ProtoInstance ProtoInstance2115 = createNode("ProtoInstance");
ProtoInstance2115.USE = "lj";
fieldValue2109.children[5] = ProtoInstance2115;

ProtoInstance ProtoInstance2116 = createNode("ProtoInstance");
ProtoInstance2116.USE = "wj";
fieldValue2109.children[6] = ProtoInstance2116;

ProtoInstance ProtoInstance2117 = createNode("ProtoInstance");
ProtoInstance2117.USE = "Sj";
fieldValue2109.children[7] = ProtoInstance2117;

ProtoInstance ProtoInstance2118 = createNode("ProtoInstance");
ProtoInstance2118.USE = "Xj";
fieldValue2109.children[8] = ProtoInstance2118;

ProtoInstance ProtoInstance2119 = createNode("ProtoInstance");
ProtoInstance2119.USE = "bk";
fieldValue2109.children[9] = ProtoInstance2119;

ProtoInstance ProtoInstance2120 = createNode("ProtoInstance");
ProtoInstance2120.USE = "ek";
fieldValue2109.children[10] = ProtoInstance2120;

ProtoInstance ProtoInstance2121 = createNode("ProtoInstance");
ProtoInstance2121.USE = "Bk";
fieldValue2109.children[11] = ProtoInstance2121;

ProtoInstance ProtoInstance2122 = createNode("ProtoInstance");
ProtoInstance2122.USE = "Ek";
fieldValue2109.children[12] = ProtoInstance2122;

ProtoInstance ProtoInstance2123 = createNode("ProtoInstance");
ProtoInstance2123.USE = "jl";
fieldValue2109.children[13] = ProtoInstance2123;

ProtoInstance1536.fieldValue[2] = fieldValue2109;

Group1531.children[4] = ProtoInstance1536;

ProtoInstance ProtoInstance2124 = createNode("ProtoInstance");
ProtoInstance2124.name = "f";
ProtoInstance2124.DEF = "kl";
Group1531.children[5] = ProtoInstance2124;

children[25] = Group1531;

ROUTE ROUTE2125 = createNode("ROUTE");
ROUTE2125.fromNode = "kl";
ROUTE2125.fromField = "j";
ROUTE2125.toNode = "Hi";
ROUTE2125.toField = "h";
children[26] = ROUTE2125;

ROUTE ROUTE2126 = createNode("ROUTE");
ROUTE2126.fromNode = "Wi";
ROUTE2126.fromField = "yb_changed";
ROUTE2126.toNode = "Ti";
ROUTE2126.toField = "set_enabled";
children[27] = ROUTE2126;

ROUTE ROUTE2127 = createNode("ROUTE");
ROUTE2127.fromNode = "Vi";
ROUTE2127.fromField = "R_changed";
ROUTE2127.toNode = "Ui";
ROUTE2127.toField = "R";
children[28] = ROUTE2127;

ROUTE ROUTE2128 = createNode("ROUTE");
ROUTE2128.fromNode = "Hi";
ROUTE2128.fromField = "i";
ROUTE2128.toNode = "Vi";
ROUTE2128.toField = "R";
children[29] = ROUTE2128;

ROUTE ROUTE2129 = createNode("ROUTE");
ROUTE2129.fromNode = "Ui";
ROUTE2129.fromField = "stopTime";
ROUTE2129.toNode = "Vi";
ROUTE2129.toField = "S";
children[30] = ROUTE2129;

ROUTE ROUTE2130 = createNode("ROUTE");
ROUTE2130.fromNode = "Ui";
ROUTE2130.fromField = "fraction";
ROUTE2130.toNode = "Vi";
ROUTE2130.toField = "set_fraction";
children[31] = ROUTE2130;

ROUTE ROUTE2131 = createNode("ROUTE");
ROUTE2131.fromNode = "Ti";
ROUTE2131.fromField = "isOver";
ROUTE2131.toNode = "Wi";
ROUTE2131.toField = "qb";
children[32] = ROUTE2131;

ROUTE ROUTE2132 = createNode("ROUTE");
ROUTE2132.fromNode = "Ti";
ROUTE2132.fromField = "isActive";
ROUTE2132.toNode = "Wi";
ROUTE2132.toField = "rb";
children[33] = ROUTE2132;

ROUTE ROUTE2133 = createNode("ROUTE");
ROUTE2133.fromNode = "Ti";
ROUTE2133.fromField = "hitPoint_changed";
ROUTE2133.toNode = "Wi";
ROUTE2133.toField = "sb";
children[34] = ROUTE2133;

ROUTE ROUTE2134 = createNode("ROUTE");
ROUTE2134.fromNode = "Ti";
ROUTE2134.fromField = "hitTexCoord_changed";
ROUTE2134.toNode = "Wi";
ROUTE2134.toField = "tb";
children[35] = ROUTE2134;

ROUTE ROUTE2135 = createNode("ROUTE");
ROUTE2135.fromNode = "Qi";
ROUTE2135.fromField = "R_changed";
ROUTE2135.toNode = "Xi";
ROUTE2135.toField = "R";
children[36] = ROUTE2135;

ROUTE ROUTE2136 = createNode("ROUTE");
ROUTE2136.fromNode = "Wi";
ROUTE2136.fromField = "exitTime";
ROUTE2136.toNode = "Xi";
ROUTE2136.toField = "S";
children[37] = ROUTE2136;

ROUTE ROUTE2137 = createNode("ROUTE");
ROUTE2137.fromNode = "Wi";
ROUTE2137.fromField = "enterTime";
ROUTE2137.toNode = "Qi";
ROUTE2137.toField = "R";
children[38] = ROUTE2137;

ROUTE ROUTE2138 = createNode("ROUTE");
ROUTE2138.fromNode = "Xi";
ROUTE2138.fromField = "stopTime";
ROUTE2138.toNode = "Qi";
ROUTE2138.toField = "S";
children[39] = ROUTE2138;

ROUTE ROUTE2139 = createNode("ROUTE");
ROUTE2139.fromNode = "Xi";
ROUTE2139.fromField = "fraction";
ROUTE2139.toNode = "Qi";
ROUTE2139.toField = "set_fraction";
children[40] = ROUTE2139;

ROUTE ROUTE2140 = createNode("ROUTE");
ROUTE2140.fromNode = "Zi";
ROUTE2140.fromField = "R_changed";
ROUTE2140.toNode = "cj";
ROUTE2140.toField = "R";
children[41] = ROUTE2140;

ROUTE ROUTE2141 = createNode("ROUTE");
ROUTE2141.fromNode = "Hi";
ROUTE2141.fromField = "i";
ROUTE2141.toNode = "Zi";
ROUTE2141.toField = "R";
children[42] = ROUTE2141;

ROUTE ROUTE2142 = createNode("ROUTE");
ROUTE2142.fromNode = "cj";
ROUTE2142.fromField = "stopTime";
ROUTE2142.toNode = "Zi";
ROUTE2142.toField = "S";
children[43] = ROUTE2142;

ROUTE ROUTE2143 = createNode("ROUTE");
ROUTE2143.fromNode = "cj";
ROUTE2143.fromField = "fraction";
ROUTE2143.toNode = "Zi";
ROUTE2143.toField = "set_fraction";
children[44] = ROUTE2143;

ROUTE ROUTE2144 = createNode("ROUTE");
ROUTE2144.fromNode = "rj";
ROUTE2144.fromField = "R_changed";
ROUTE2144.toNode = "qj";
ROUTE2144.toField = "R";
children[45] = ROUTE2144;

ROUTE ROUTE2145 = createNode("ROUTE");
ROUTE2145.fromNode = "Hi";
ROUTE2145.fromField = "i";
ROUTE2145.toNode = "rj";
ROUTE2145.toField = "R";
children[46] = ROUTE2145;

ROUTE ROUTE2146 = createNode("ROUTE");
ROUTE2146.fromNode = "qj";
ROUTE2146.fromField = "stopTime";
ROUTE2146.toNode = "rj";
ROUTE2146.toField = "S";
children[47] = ROUTE2146;

ROUTE ROUTE2147 = createNode("ROUTE");
ROUTE2147.fromNode = "qj";
ROUTE2147.fromField = "va";
ROUTE2147.toNode = "rj";
ROUTE2147.toField = "set_od";
children[48] = ROUTE2147;

ROUTE ROUTE2148 = createNode("ROUTE");
ROUTE2148.fromNode = "qj";
ROUTE2148.fromField = "fraction";
ROUTE2148.toNode = "rj";
ROUTE2148.toField = "set_fraction";
children[49] = ROUTE2148;

ROUTE ROUTE2149 = createNode("ROUTE");
ROUTE2149.fromNode = "Jj";
ROUTE2149.fromField = "yb_changed";
ROUTE2149.toNode = "uj";
ROUTE2149.toField = "set_enabled";
children[50] = ROUTE2149;

ROUTE ROUTE2150 = createNode("ROUTE");
ROUTE2150.fromNode = "Lj";
ROUTE2150.fromField = "yb_changed";
ROUTE2150.toNode = "vj";
ROUTE2150.toField = "set_enabled";
children[51] = ROUTE2150;

ROUTE ROUTE2151 = createNode("ROUTE");
ROUTE2151.fromNode = "Lj";
ROUTE2151.fromField = "vb";
ROUTE2151.toNode = "Jj";
ROUTE2151.toField = "sa";
children[52] = ROUTE2151;

ROUTE ROUTE2152 = createNode("ROUTE");
ROUTE2152.fromNode = "uj";
ROUTE2152.fromField = "isActive";
ROUTE2152.toNode = "Jj";
ROUTE2152.toField = "rb";
children[53] = ROUTE2152;

ROUTE ROUTE2153 = createNode("ROUTE");
ROUTE2153.fromNode = "uj";
ROUTE2153.fromField = "rotation_changed";
ROUTE2153.toNode = "Jj";
ROUTE2153.toField = "ne";
children[54] = ROUTE2153;

ROUTE ROUTE2154 = createNode("ROUTE");
ROUTE2154.fromNode = "uj";
ROUTE2154.fromField = "trackPoint_changed";
ROUTE2154.toNode = "Jj";
ROUTE2154.toField = "oe";
children[55] = ROUTE2154;

ROUTE ROUTE2155 = createNode("ROUTE");
ROUTE2155.fromNode = "Lj";
ROUTE2155.fromField = "ub";
ROUTE2155.toNode = "Kj";
ROUTE2155.toField = "R";
children[56] = ROUTE2155;

ROUTE ROUTE2156 = createNode("ROUTE");
ROUTE2156.fromNode = "Jj";
ROUTE2156.fromField = "stopTime";
ROUTE2156.toNode = "Kj";
ROUTE2156.toField = "S";
children[57] = ROUTE2156;

ROUTE ROUTE2157 = createNode("ROUTE");
ROUTE2157.fromNode = "vj";
ROUTE2157.fromField = "isOver";
ROUTE2157.toNode = "Lj";
ROUTE2157.toField = "qb";
children[58] = ROUTE2157;

ROUTE ROUTE2158 = createNode("ROUTE");
ROUTE2158.fromNode = "vj";
ROUTE2158.fromField = "isActive";
ROUTE2158.toNode = "Lj";
ROUTE2158.toField = "rb";
children[59] = ROUTE2158;

ROUTE ROUTE2159 = createNode("ROUTE");
ROUTE2159.fromNode = "vj";
ROUTE2159.fromField = "hitPoint_changed";
ROUTE2159.toNode = "Lj";
ROUTE2159.toField = "sb";
children[60] = ROUTE2159;

ROUTE ROUTE2160 = createNode("ROUTE");
ROUTE2160.fromNode = "vj";
ROUTE2160.fromField = "hitTexCoord_changed";
ROUTE2160.toNode = "Lj";
ROUTE2160.toField = "tb";
children[61] = ROUTE2160;

ROUTE ROUTE2161 = createNode("ROUTE");
ROUTE2161.fromNode = "Nj";
ROUTE2161.fromField = "He";
ROUTE2161.toNode = "Mj";
ROUTE2161.toField = "R";
children[62] = ROUTE2161;

ROUTE ROUTE2162 = createNode("ROUTE");
ROUTE2162.fromNode = "Mj";
ROUTE2162.fromField = "ua";
ROUTE2162.toNode = "Nj";
ROUTE2162.toField = "set_fraction";
children[63] = ROUTE2162;

ROUTE ROUTE2163 = createNode("ROUTE");
ROUTE2163.fromNode = "Mj";
ROUTE2163.fromField = "va";
ROUTE2163.toNode = "Nj";
ROUTE2163.toField = "set_fraction";
children[64] = ROUTE2163;

ROUTE ROUTE2164 = createNode("ROUTE");
ROUTE2164.fromNode = "Lj";
ROUTE2164.fromField = "vb";
ROUTE2164.toNode = "Oj";
ROUTE2164.toField = "R";
children[65] = ROUTE2164;

ROUTE ROUTE2165 = createNode("ROUTE");
ROUTE2165.fromNode = "Mj";
ROUTE2165.fromField = "stopTime";
ROUTE2165.toNode = "Oj";
ROUTE2165.toField = "S";
children[66] = ROUTE2165;

ROUTE ROUTE2166 = createNode("ROUTE");
ROUTE2166.fromNode = "Nj";
ROUTE2166.fromField = "Ie";
ROUTE2166.toNode = "Oj";
ROUTE2166.toField = "S";
children[67] = ROUTE2166;

ROUTE ROUTE2167 = createNode("ROUTE");
ROUTE2167.fromNode = "Qj";
ROUTE2167.fromField = "R_changed";
ROUTE2167.toNode = "Tj";
ROUTE2167.toField = "R";
children[68] = ROUTE2167;

ROUTE ROUTE2168 = createNode("ROUTE");
ROUTE2168.fromNode = "Hi";
ROUTE2168.fromField = "i";
ROUTE2168.toNode = "Qj";
ROUTE2168.toField = "R";
children[69] = ROUTE2168;

ROUTE ROUTE2169 = createNode("ROUTE");
ROUTE2169.fromNode = "Tj";
ROUTE2169.fromField = "stopTime";
ROUTE2169.toNode = "Qj";
ROUTE2169.toField = "S";
children[70] = ROUTE2169;

ROUTE ROUTE2170 = createNode("ROUTE");
ROUTE2170.fromNode = "Tj";
ROUTE2170.fromField = "va";
ROUTE2170.toNode = "Qj";
ROUTE2170.toField = "set_od";
children[71] = ROUTE2170;

ROUTE ROUTE2171 = createNode("ROUTE");
ROUTE2171.fromNode = "Tj";
ROUTE2171.fromField = "fraction";
ROUTE2171.toNode = "Qj";
ROUTE2171.toField = "set_fraction";
children[72] = ROUTE2171;

ROUTE ROUTE2172 = createNode("ROUTE");
ROUTE2172.fromNode = "Tj";
ROUTE2172.fromField = "fraction";
ROUTE2172.toNode = "Qj";
ROUTE2172.toField = "jf";
children[73] = ROUTE2172;

ROUTE ROUTE2173 = createNode("ROUTE");
ROUTE2173.fromNode = "Vj";
ROUTE2173.fromField = "R_changed";
ROUTE2173.toNode = "Yj";
ROUTE2173.toField = "R";
children[74] = ROUTE2173;

ROUTE ROUTE2174 = createNode("ROUTE");
ROUTE2174.fromNode = "Hi";
ROUTE2174.fromField = "i";
ROUTE2174.toNode = "Vj";
ROUTE2174.toField = "R";
children[75] = ROUTE2174;

ROUTE ROUTE2175 = createNode("ROUTE");
ROUTE2175.fromNode = "Yj";
ROUTE2175.fromField = "stopTime";
ROUTE2175.toNode = "Vj";
ROUTE2175.toField = "S";
children[76] = ROUTE2175;

ROUTE ROUTE2176 = createNode("ROUTE");
ROUTE2176.fromNode = "Yj";
ROUTE2176.fromField = "va";
ROUTE2176.toNode = "Vj";
ROUTE2176.toField = "set_od";
children[77] = ROUTE2176;

ROUTE ROUTE2177 = createNode("ROUTE");
ROUTE2177.fromNode = "Yj";
ROUTE2177.fromField = "fraction";
ROUTE2177.toNode = "Vj";
ROUTE2177.toField = "set_fraction";
children[78] = ROUTE2177;

ROUTE ROUTE2178 = createNode("ROUTE");
ROUTE2178.fromNode = "Yj";
ROUTE2178.fromField = "fraction";
ROUTE2178.toNode = "Vj";
ROUTE2178.toField = "jf";
children[79] = ROUTE2178;

ROUTE ROUTE2179 = createNode("ROUTE");
ROUTE2179.fromNode = "dk";
ROUTE2179.fromField = "R_changed";
ROUTE2179.toNode = "tk";
ROUTE2179.toField = "R";
children[80] = ROUTE2179;

ROUTE ROUTE2180 = createNode("ROUTE");
ROUTE2180.fromNode = "rk";
ROUTE2180.fromField = "R_changed";
ROUTE2180.toNode = "uk";
ROUTE2180.toField = "R";
children[81] = ROUTE2180;

ROUTE ROUTE2181 = createNode("ROUTE");
ROUTE2181.fromNode = "xk";
ROUTE2181.fromField = "Dg";
ROUTE2181.toNode = "vk";
ROUTE2181.toField = "R";
children[82] = ROUTE2181;

ROUTE ROUTE2182 = createNode("ROUTE");
ROUTE2182.fromNode = "xk";
ROUTE2182.fromField = "Bg";
ROUTE2182.toNode = "wk";
ROUTE2182.toField = "set_position";
children[83] = ROUTE2182;

ROUTE ROUTE2183 = createNode("ROUTE");
ROUTE2183.fromNode = "vk";
ROUTE2183.fromField = "fraction";
ROUTE2183.toNode = "xk";
ROUTE2183.toField = "set_fraction";
children[84] = ROUTE2183;

ROUTE ROUTE2184 = createNode("ROUTE");
ROUTE2184.fromNode = "Hi";
ROUTE2184.fromField = "i";
ROUTE2184.toNode = "yk";
ROUTE2184.toField = "R";
children[85] = ROUTE2184;

ROUTE ROUTE2185 = createNode("ROUTE");
ROUTE2185.fromNode = "vk";
ROUTE2185.fromField = "stopTime";
ROUTE2185.toNode = "yk";
ROUTE2185.toField = "S";
children[86] = ROUTE2185;

ROUTE ROUTE2186 = createNode("ROUTE");
ROUTE2186.fromNode = "vk";
ROUTE2186.fromField = "Ba";
ROUTE2186.toNode = "yk";
ROUTE2186.toField = "S";
children[87] = ROUTE2186;

ROUTE ROUTE2187 = createNode("ROUTE");
ROUTE2187.fromNode = "Hi";
ROUTE2187.fromField = "i";
ROUTE2187.toNode = "rk";
ROUTE2187.toField = "R";
children[88] = ROUTE2187;

ROUTE ROUTE2188 = createNode("ROUTE");
ROUTE2188.fromNode = "uk";
ROUTE2188.fromField = "stopTime";
ROUTE2188.toNode = "rk";
ROUTE2188.toField = "S";
children[89] = ROUTE2188;

ROUTE ROUTE2189 = createNode("ROUTE");
ROUTE2189.fromNode = "uk";
ROUTE2189.fromField = "fraction";
ROUTE2189.toNode = "rk";
ROUTE2189.toField = "set_fraction";
children[90] = ROUTE2189;

ROUTE ROUTE2190 = createNode("ROUTE");
ROUTE2190.fromNode = "Hi";
ROUTE2190.fromField = "i";
ROUTE2190.toNode = "dk";
ROUTE2190.toField = "R";
children[91] = ROUTE2190;

ROUTE ROUTE2191 = createNode("ROUTE");
ROUTE2191.fromNode = "tk";
ROUTE2191.fromField = "stopTime";
ROUTE2191.toNode = "dk";
ROUTE2191.toField = "S";
children[92] = ROUTE2191;

ROUTE ROUTE2192 = createNode("ROUTE");
ROUTE2192.fromNode = "tk";
ROUTE2192.fromField = "fraction";
ROUTE2192.toNode = "dk";
ROUTE2192.toField = "set_fraction";
children[93] = ROUTE2192;

ROUTE ROUTE2193 = createNode("ROUTE");
ROUTE2193.fromNode = "Gk";
ROUTE2193.fromField = "startTime";
ROUTE2193.toNode = "Fk";
ROUTE2193.toField = "R";
children[94] = ROUTE2193;

ROUTE ROUTE2194 = createNode("ROUTE");
ROUTE2194.fromNode = "vk";
ROUTE2194.fromField = "Aa";
ROUTE2194.toNode = "Gk";
ROUTE2194.toField = "R";
children[95] = ROUTE2194;

ROUTE ROUTE2195 = createNode("ROUTE");
ROUTE2195.fromNode = "vk";
ROUTE2195.fromField = "startTime";
ROUTE2195.toNode = "Gk";
ROUTE2195.toField = "R";
children[96] = ROUTE2195;

ROUTE ROUTE2196 = createNode("ROUTE");
ROUTE2196.fromNode = "Fk";
ROUTE2196.fromField = "stopTime";
ROUTE2196.toNode = "Gk";
ROUTE2196.toField = "S";
children[97] = ROUTE2196;

ROUTE ROUTE2197 = createNode("ROUTE");
ROUTE2197.fromNode = "Fk";
ROUTE2197.fromField = "va";
ROUTE2197.toNode = "Gk";
ROUTE2197.toField = "set_intensity";
children[98] = ROUTE2197;

ROUTE ROUTE2198 = createNode("ROUTE");
ROUTE2198.fromNode = "Fk";
ROUTE2198.fromField = "fraction";
ROUTE2198.toNode = "Gk";
ROUTE2198.toField = "set_fraction";
children[99] = ROUTE2198;

ROUTE ROUTE2199 = createNode("ROUTE");
ROUTE2199.fromNode = "Ek";
ROUTE2199.fromField = "Jh";
ROUTE2199.toNode = "Gk";
ROUTE2199.toField = "Jh";
children[100] = ROUTE2199;

ROUTE ROUTE2200 = createNode("ROUTE");
ROUTE2200.fromNode = "Ik";
ROUTE2200.fromField = "R_changed";
ROUTE2200.toNode = "Hk";
ROUTE2200.toField = "R";
children[101] = ROUTE2200;

ROUTE ROUTE2201 = createNode("ROUTE");
ROUTE2201.fromNode = "Gk";
ROUTE2201.fromField = "stopTime";
ROUTE2201.toNode = "Ik";
ROUTE2201.toField = "R";
children[102] = ROUTE2201;

ROUTE ROUTE2202 = createNode("ROUTE");
ROUTE2202.fromNode = "Hk";
ROUTE2202.fromField = "stopTime";
ROUTE2202.toNode = "Ik";
ROUTE2202.toField = "S";
children[103] = ROUTE2202;

ROUTE ROUTE2203 = createNode("ROUTE");
ROUTE2203.fromNode = "Kk";
ROUTE2203.fromField = "startTime";
ROUTE2203.toNode = "Jk";
ROUTE2203.toField = "R";
children[104] = ROUTE2203;

ROUTE ROUTE2204 = createNode("ROUTE");
ROUTE2204.fromNode = "Hk";
ROUTE2204.fromField = "stopTime";
ROUTE2204.toNode = "Kk";
ROUTE2204.toField = "R";
children[105] = ROUTE2204;

ROUTE ROUTE2205 = createNode("ROUTE");
ROUTE2205.fromNode = "Jk";
ROUTE2205.fromField = "stopTime";
ROUTE2205.toNode = "Kk";
ROUTE2205.toField = "S";
children[106] = ROUTE2205;

ROUTE ROUTE2206 = createNode("ROUTE");
ROUTE2206.fromNode = "Jk";
ROUTE2206.fromField = "va";
ROUTE2206.toNode = "Kk";
ROUTE2206.toField = "set_intensity";
children[107] = ROUTE2206;

ROUTE ROUTE2207 = createNode("ROUTE");
ROUTE2207.fromNode = "Jk";
ROUTE2207.fromField = "fraction";
ROUTE2207.toNode = "Kk";
ROUTE2207.toField = "set_fraction";
children[108] = ROUTE2207;

ROUTE ROUTE2208 = createNode("ROUTE");
ROUTE2208.fromNode = "Ek";
ROUTE2208.fromField = "Jh";
ROUTE2208.toNode = "Kk";
ROUTE2208.toField = "Jh";
children[109] = ROUTE2208;

ROUTE ROUTE2209 = createNode("ROUTE");
ROUTE2209.fromNode = "Mk";
ROUTE2209.fromField = "R_changed";
ROUTE2209.toNode = "Lk";
ROUTE2209.toField = "R";
children[110] = ROUTE2209;

ROUTE ROUTE2210 = createNode("ROUTE");
ROUTE2210.fromNode = "Kk";
ROUTE2210.fromField = "stopTime";
ROUTE2210.toNode = "Mk";
ROUTE2210.toField = "R";
children[111] = ROUTE2210;

ROUTE ROUTE2211 = createNode("ROUTE");
ROUTE2211.fromNode = "Lk";
ROUTE2211.fromField = "stopTime";
ROUTE2211.toNode = "Mk";
ROUTE2211.toField = "S";
children[112] = ROUTE2211;

ROUTE ROUTE2212 = createNode("ROUTE");
ROUTE2212.fromNode = "Ok";
ROUTE2212.fromField = "startTime";
ROUTE2212.toNode = "Nk";
ROUTE2212.toField = "R";
children[113] = ROUTE2212;

ROUTE ROUTE2213 = createNode("ROUTE");
ROUTE2213.fromNode = "Lk";
ROUTE2213.fromField = "stopTime";
ROUTE2213.toNode = "Ok";
ROUTE2213.toField = "R";
children[114] = ROUTE2213;

ROUTE ROUTE2214 = createNode("ROUTE");
ROUTE2214.fromNode = "Nk";
ROUTE2214.fromField = "stopTime";
ROUTE2214.toNode = "Ok";
ROUTE2214.toField = "S";
children[115] = ROUTE2214;

ROUTE ROUTE2215 = createNode("ROUTE");
ROUTE2215.fromNode = "Nk";
ROUTE2215.fromField = "va";
ROUTE2215.toNode = "Ok";
ROUTE2215.toField = "set_intensity";
children[116] = ROUTE2215;

ROUTE ROUTE2216 = createNode("ROUTE");
ROUTE2216.fromNode = "Nk";
ROUTE2216.fromField = "fraction";
ROUTE2216.toNode = "Ok";
ROUTE2216.toField = "set_fraction";
children[117] = ROUTE2216;

ROUTE ROUTE2217 = createNode("ROUTE");
ROUTE2217.fromNode = "Ek";
ROUTE2217.fromField = "Jh";
ROUTE2217.toNode = "Ok";
ROUTE2217.toField = "Jh";
children[118] = ROUTE2217;

ROUTE ROUTE2218 = createNode("ROUTE");
ROUTE2218.fromNode = "Qk";
ROUTE2218.fromField = "R_changed";
ROUTE2218.toNode = "Pk";
ROUTE2218.toField = "R";
children[119] = ROUTE2218;

ROUTE ROUTE2219 = createNode("ROUTE");
ROUTE2219.fromNode = "Ok";
ROUTE2219.fromField = "stopTime";
ROUTE2219.toNode = "Qk";
ROUTE2219.toField = "R";
children[120] = ROUTE2219;

ROUTE ROUTE2220 = createNode("ROUTE");
ROUTE2220.fromNode = "Pk";
ROUTE2220.fromField = "stopTime";
ROUTE2220.toNode = "Qk";
ROUTE2220.toField = "S";
children[121] = ROUTE2220;

ROUTE ROUTE2221 = createNode("ROUTE");
ROUTE2221.fromNode = "Sk";
ROUTE2221.fromField = "startTime";
ROUTE2221.toNode = "Rk";
ROUTE2221.toField = "R";
children[122] = ROUTE2221;

ROUTE ROUTE2222 = createNode("ROUTE");
ROUTE2222.fromNode = "Pk";
ROUTE2222.fromField = "stopTime";
ROUTE2222.toNode = "Sk";
ROUTE2222.toField = "R";
children[123] = ROUTE2222;

ROUTE ROUTE2223 = createNode("ROUTE");
ROUTE2223.fromNode = "Rk";
ROUTE2223.fromField = "stopTime";
ROUTE2223.toNode = "Sk";
ROUTE2223.toField = "S";
children[124] = ROUTE2223;

ROUTE ROUTE2224 = createNode("ROUTE");
ROUTE2224.fromNode = "Rk";
ROUTE2224.fromField = "va";
ROUTE2224.toNode = "Sk";
ROUTE2224.toField = "set_intensity";
children[125] = ROUTE2224;

ROUTE ROUTE2225 = createNode("ROUTE");
ROUTE2225.fromNode = "Rk";
ROUTE2225.fromField = "fraction";
ROUTE2225.toNode = "Sk";
ROUTE2225.toField = "set_fraction";
children[126] = ROUTE2225;

ROUTE ROUTE2226 = createNode("ROUTE");
ROUTE2226.fromNode = "Ek";
ROUTE2226.fromField = "Jh";
ROUTE2226.toNode = "Sk";
ROUTE2226.toField = "Jh";
children[127] = ROUTE2226;

ROUTE ROUTE2227 = createNode("ROUTE");
ROUTE2227.fromNode = "Uk";
ROUTE2227.fromField = "R_changed";
ROUTE2227.toNode = "Tk";
ROUTE2227.toField = "R";
children[128] = ROUTE2227;

ROUTE ROUTE2228 = createNode("ROUTE");
ROUTE2228.fromNode = "Sk";
ROUTE2228.fromField = "stopTime";
ROUTE2228.toNode = "Uk";
ROUTE2228.toField = "R";
children[129] = ROUTE2228;

ROUTE ROUTE2229 = createNode("ROUTE");
ROUTE2229.fromNode = "Tk";
ROUTE2229.fromField = "stopTime";
ROUTE2229.toNode = "Uk";
ROUTE2229.toField = "S";
children[130] = ROUTE2229;

ROUTE ROUTE2230 = createNode("ROUTE");
ROUTE2230.fromNode = "Wk";
ROUTE2230.fromField = "startTime";
ROUTE2230.toNode = "Vk";
ROUTE2230.toField = "R";
children[131] = ROUTE2230;

ROUTE ROUTE2231 = createNode("ROUTE");
ROUTE2231.fromNode = "Tk";
ROUTE2231.fromField = "stopTime";
ROUTE2231.toNode = "Wk";
ROUTE2231.toField = "R";
children[132] = ROUTE2231;

ROUTE ROUTE2232 = createNode("ROUTE");
ROUTE2232.fromNode = "Vk";
ROUTE2232.fromField = "stopTime";
ROUTE2232.toNode = "Wk";
ROUTE2232.toField = "S";
children[133] = ROUTE2232;

ROUTE ROUTE2233 = createNode("ROUTE");
ROUTE2233.fromNode = "Vk";
ROUTE2233.fromField = "va";
ROUTE2233.toNode = "Wk";
ROUTE2233.toField = "set_intensity";
children[134] = ROUTE2233;

ROUTE ROUTE2234 = createNode("ROUTE");
ROUTE2234.fromNode = "Vk";
ROUTE2234.fromField = "fraction";
ROUTE2234.toNode = "Wk";
ROUTE2234.toField = "set_fraction";
children[135] = ROUTE2234;

ROUTE ROUTE2235 = createNode("ROUTE");
ROUTE2235.fromNode = "Ek";
ROUTE2235.fromField = "Jh";
ROUTE2235.toNode = "Wk";
ROUTE2235.toField = "Jh";
children[136] = ROUTE2235;

ROUTE ROUTE2236 = createNode("ROUTE");
ROUTE2236.fromNode = "Yk";
ROUTE2236.fromField = "R_changed";
ROUTE2236.toNode = "Xk";
ROUTE2236.toField = "R";
children[137] = ROUTE2236;

ROUTE ROUTE2237 = createNode("ROUTE");
ROUTE2237.fromNode = "Wk";
ROUTE2237.fromField = "stopTime";
ROUTE2237.toNode = "Yk";
ROUTE2237.toField = "R";
children[138] = ROUTE2237;

ROUTE ROUTE2238 = createNode("ROUTE");
ROUTE2238.fromNode = "Xk";
ROUTE2238.fromField = "stopTime";
ROUTE2238.toNode = "Yk";
ROUTE2238.toField = "S";
children[139] = ROUTE2238;

ROUTE ROUTE2239 = createNode("ROUTE");
ROUTE2239.fromNode = "al";
ROUTE2239.fromField = "startTime";
ROUTE2239.toNode = "Zk";
ROUTE2239.toField = "R";
children[140] = ROUTE2239;

ROUTE ROUTE2240 = createNode("ROUTE");
ROUTE2240.fromNode = "Xk";
ROUTE2240.fromField = "stopTime";
ROUTE2240.toNode = "al";
ROUTE2240.toField = "R";
children[141] = ROUTE2240;

ROUTE ROUTE2241 = createNode("ROUTE");
ROUTE2241.fromNode = "Zk";
ROUTE2241.fromField = "stopTime";
ROUTE2241.toNode = "al";
ROUTE2241.toField = "S";
children[142] = ROUTE2241;

ROUTE ROUTE2242 = createNode("ROUTE");
ROUTE2242.fromNode = "Zk";
ROUTE2242.fromField = "va";
ROUTE2242.toNode = "al";
ROUTE2242.toField = "set_intensity";
children[143] = ROUTE2242;

ROUTE ROUTE2243 = createNode("ROUTE");
ROUTE2243.fromNode = "Zk";
ROUTE2243.fromField = "fraction";
ROUTE2243.toNode = "al";
ROUTE2243.toField = "set_fraction";
children[144] = ROUTE2243;

ROUTE ROUTE2244 = createNode("ROUTE");
ROUTE2244.fromNode = "Ek";
ROUTE2244.fromField = "Jh";
ROUTE2244.toNode = "al";
ROUTE2244.toField = "Jh";
children[145] = ROUTE2244;

ROUTE ROUTE2245 = createNode("ROUTE");
ROUTE2245.fromNode = "cl";
ROUTE2245.fromField = "R_changed";
ROUTE2245.toNode = "bl";
ROUTE2245.toField = "R";
children[146] = ROUTE2245;

ROUTE ROUTE2246 = createNode("ROUTE");
ROUTE2246.fromNode = "al";
ROUTE2246.fromField = "stopTime";
ROUTE2246.toNode = "cl";
ROUTE2246.toField = "R";
children[147] = ROUTE2246;

ROUTE ROUTE2247 = createNode("ROUTE");
ROUTE2247.fromNode = "bl";
ROUTE2247.fromField = "stopTime";
ROUTE2247.toNode = "cl";
ROUTE2247.toField = "S";
children[148] = ROUTE2247;

ROUTE ROUTE2248 = createNode("ROUTE");
ROUTE2248.fromNode = "el";
ROUTE2248.fromField = "startTime";
ROUTE2248.toNode = "dl";
ROUTE2248.toField = "R";
children[149] = ROUTE2248;

ROUTE ROUTE2249 = createNode("ROUTE");
ROUTE2249.fromNode = "bl";
ROUTE2249.fromField = "stopTime";
ROUTE2249.toNode = "el";
ROUTE2249.toField = "R";
children[150] = ROUTE2249;

ROUTE ROUTE2250 = createNode("ROUTE");
ROUTE2250.fromNode = "dl";
ROUTE2250.fromField = "stopTime";
ROUTE2250.toNode = "el";
ROUTE2250.toField = "S";
children[151] = ROUTE2250;

ROUTE ROUTE2251 = createNode("ROUTE");
ROUTE2251.fromNode = "dl";
ROUTE2251.fromField = "va";
ROUTE2251.toNode = "el";
ROUTE2251.toField = "set_intensity";
children[152] = ROUTE2251;

ROUTE ROUTE2252 = createNode("ROUTE");
ROUTE2252.fromNode = "dl";
ROUTE2252.fromField = "fraction";
ROUTE2252.toNode = "el";
ROUTE2252.toField = "set_fraction";
children[153] = ROUTE2252;

ROUTE ROUTE2253 = createNode("ROUTE");
ROUTE2253.fromNode = "Ek";
ROUTE2253.fromField = "Jh";
ROUTE2253.toNode = "el";
ROUTE2253.toField = "Jh";
children[154] = ROUTE2253;

ROUTE ROUTE2254 = createNode("ROUTE");
ROUTE2254.fromNode = "gl";
ROUTE2254.fromField = "R_changed";
ROUTE2254.toNode = "fl";
ROUTE2254.toField = "R";
children[155] = ROUTE2254;

ROUTE ROUTE2255 = createNode("ROUTE");
ROUTE2255.fromNode = "el";
ROUTE2255.fromField = "stopTime";
ROUTE2255.toNode = "gl";
ROUTE2255.toField = "R";
children[156] = ROUTE2255;

ROUTE ROUTE2256 = createNode("ROUTE");
ROUTE2256.fromNode = "fl";
ROUTE2256.fromField = "stopTime";
ROUTE2256.toNode = "gl";
ROUTE2256.toField = "S";
children[157] = ROUTE2256;

ROUTE ROUTE2257 = createNode("ROUTE");
ROUTE2257.fromNode = "Hi";
ROUTE2257.fromField = "j";
ROUTE2257.toNode = "kl";
ROUTE2257.toField = "h";
children[158] = ROUTE2257;

}
