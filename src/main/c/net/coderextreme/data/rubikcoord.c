#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "rubikcoord.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/rubik.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a kind of 2x2x2 rubik cube";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.description = "Rubiks Cube";
Viewpoint9.position = new SFVec3f(new float[0,0,12]);
children[1] = Viewpoint9;

Background Background10 = createNode("Background");
Background10.skyColor = new MFColor(new float[1,1,1]);
children[2] = Background10;

ProtoDeclare ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="boxproto" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><Box containerField="geometry"></Box>
<Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "boxproto";
ProtoInterface ProtoInterface12 = createNode("ProtoInterface");
field field13 = createNode("field");
field13.name = "xtranslation";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "0 0 0";
ProtoInterface12.field = new MFNode();

ProtoInterface12.field[0] = field13;

field field14 = createNode("field");
field14.name = "diffuseColor";
field14.accessType = "inputOutput";
field14.type = "SFColor";
field14.value = "1 1 1";
ProtoInterface12.field[1] = field14;

ProtoDeclare11.protoInterface = ProtoInterface12;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Transform Transform16 = createNode("Transform");
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "xtranslation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Transform16.iS = IS17;

Shape Shape19 = createNode("Shape");
Box Box20 = createNode("Box");
Shape19.geometry = Box20;

Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,1]);
IS IS23 = createNode("IS");
connect connect24 = createNode("connect");
connect24.nodeField = "diffuseColor";
connect24.protoField = "diffuseColor";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

Material22.iS = IS23;

Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Transform16.children = new MFNode();

Transform16.children[0] = Shape19;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare11.protoBody = ProtoBody15;

children[3] = ProtoDeclare11;

ProtoDeclare ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="two" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor" value="1 0 0"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<fieldValue name="diffuseColor" value="1 0 0"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "two";
ProtoInterface ProtoInterface26 = createNode("ProtoInterface");
field field27 = createNode("field");
field27.name = "ytranslation";
field27.accessType = "inputOutput";
field27.type = "SFVec3f";
field27.value = "0 0 0";
ProtoInterface26.field = new MFNode();

ProtoInterface26.field[0] = field27;

field field28 = createNode("field");
field28.name = "diffuseColor";
field28.accessType = "inputOutput";
field28.type = "SFColor";
field28.value = "1 0 0";
ProtoInterface26.field[1] = field28;

ProtoDeclare25.protoInterface = ProtoInterface26;

ProtoBody ProtoBody29 = createNode("ProtoBody");
Transform Transform30 = createNode("Transform");
IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "translation";
connect32.protoField = "ytranslation";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

Transform30.iS = IS31;

ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "boxproto";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "xtranslation";
fieldValue34.value = "0 0 0";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

fieldValue fieldValue35 = createNode("fieldValue");
fieldValue35.name = "diffuseColor";
fieldValue35.value = "1 0 0";
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "diffuseColor";
connect37.protoField = "diffuseColor";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

fieldValue35.iS = IS36;

ProtoInstance33.fieldValue[1] = fieldValue35;

Transform30.children = new MFNode();

Transform30.children[0] = ProtoInstance33;

ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "boxproto";
fieldValue fieldValue39 = createNode("fieldValue");
fieldValue39.name = "xtranslation";
fieldValue39.value = "2 0 0";
ProtoInstance38.fieldValue = new MFNode();

ProtoInstance38.fieldValue[0] = fieldValue39;

fieldValue fieldValue40 = createNode("fieldValue");
fieldValue40.name = "diffuseColor";
fieldValue40.value = "1 0 0";
IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "diffuseColor";
connect42.protoField = "diffuseColor";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

fieldValue40.iS = IS41;

ProtoInstance38.fieldValue[1] = fieldValue40;

Transform30.children[1] = ProtoInstance38;

ProtoBody29.children = new MFNode();

ProtoBody29.children[0] = Transform30;

ProtoDeclare25.protoBody = ProtoBody29;

children[4] = ProtoDeclare25;

ProtoDeclare ProtoDeclare43 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="four" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="x1diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
<field name="x2diffuseColor" accessType="inputOutput" type="SFColor" value="0 1 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor" value="1 0 0"><IS><connect nodeField="diffuseColor" protoField="x1diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<fieldValue name="diffuseColor" value="0 1 0"><IS><connect nodeField="diffuseColor" protoField="x2diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare43.name = "four";
ProtoInterface ProtoInterface44 = createNode("ProtoInterface");
field field45 = createNode("field");
field45.name = "ztranslation";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.value = "0 0 0";
ProtoInterface44.field = new MFNode();

ProtoInterface44.field[0] = field45;

field field46 = createNode("field");
field46.name = "x1diffuseColor";
field46.accessType = "inputOutput";
field46.type = "SFColor";
field46.value = "1 0 0";
ProtoInterface44.field[1] = field46;

field field47 = createNode("field");
field47.name = "x2diffuseColor";
field47.accessType = "inputOutput";
field47.type = "SFColor";
field47.value = "0 1 0";
ProtoInterface44.field[2] = field47;

ProtoDeclare43.protoInterface = ProtoInterface44;

ProtoBody ProtoBody48 = createNode("ProtoBody");
Transform Transform49 = createNode("Transform");
IS IS50 = createNode("IS");
connect connect51 = createNode("connect");
connect51.nodeField = "translation";
connect51.protoField = "ztranslation";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

Transform49.iS = IS50;

ProtoInstance ProtoInstance52 = createNode("ProtoInstance");
ProtoInstance52.name = "two";
fieldValue fieldValue53 = createNode("fieldValue");
fieldValue53.name = "ytranslation";
fieldValue53.value = "0 0 0";
ProtoInstance52.fieldValue = new MFNode();

ProtoInstance52.fieldValue[0] = fieldValue53;

fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "diffuseColor";
fieldValue54.value = "1 0 0";
IS IS55 = createNode("IS");
connect connect56 = createNode("connect");
connect56.nodeField = "diffuseColor";
connect56.protoField = "x1diffuseColor";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

fieldValue54.iS = IS55;

ProtoInstance52.fieldValue[1] = fieldValue54;

Transform49.children = new MFNode();

Transform49.children[0] = ProtoInstance52;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "two";
fieldValue fieldValue58 = createNode("fieldValue");
fieldValue58.name = "ytranslation";
fieldValue58.value = "0 2 0";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "diffuseColor";
fieldValue59.value = "0 1 0";
IS IS60 = createNode("IS");
connect connect61 = createNode("connect");
connect61.nodeField = "diffuseColor";
connect61.protoField = "x2diffuseColor";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

fieldValue59.iS = IS60;

ProtoInstance57.fieldValue[1] = fieldValue59;

Transform49.children[1] = ProtoInstance57;

ProtoBody48.children = new MFNode();

ProtoBody48.children[0] = Transform49;

ProtoDeclare43.protoBody = ProtoBody48;

children[5] = ProtoDeclare43;

ProtoDeclare ProtoDeclare62 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="eight" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="four"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
<fieldValue name="x1diffuseColor" value="1 0 0"></fieldValue>
<fieldValue name="x2diffuseColor" value="0 1 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="four"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
<fieldValue name="x1diffuseColor" value="0 0 1"></fieldValue>
<fieldValue name="x2diffuseColor" value="1 1 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare62.name = "eight";
ProtoInterface ProtoInterface63 = createNode("ProtoInterface");
field field64 = createNode("field");
field64.name = "ttranslation";
field64.accessType = "inputOutput";
field64.type = "SFVec3f";
field64.value = "0 0 0";
ProtoInterface63.field = new MFNode();

ProtoInterface63.field[0] = field64;

ProtoDeclare62.protoInterface = ProtoInterface63;

ProtoBody ProtoBody65 = createNode("ProtoBody");
Transform Transform66 = createNode("Transform");
IS IS67 = createNode("IS");
connect connect68 = createNode("connect");
connect68.nodeField = "translation";
connect68.protoField = "ttranslation";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

Transform66.iS = IS67;

ProtoInstance ProtoInstance69 = createNode("ProtoInstance");
ProtoInstance69.name = "four";
fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "ztranslation";
fieldValue70.value = "0 0 0";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "x1diffuseColor";
fieldValue71.value = "1 0 0";
ProtoInstance69.fieldValue[1] = fieldValue71;

fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "x2diffuseColor";
fieldValue72.value = "0 1 0";
ProtoInstance69.fieldValue[2] = fieldValue72;

Transform66.children = new MFNode();

Transform66.children[0] = ProtoInstance69;

ProtoInstance ProtoInstance73 = createNode("ProtoInstance");
ProtoInstance73.name = "four";
fieldValue fieldValue74 = createNode("fieldValue");
fieldValue74.name = "ztranslation";
fieldValue74.value = "0 0 2";
ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "x1diffuseColor";
fieldValue75.value = "0 0 1";
ProtoInstance73.fieldValue[1] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "x2diffuseColor";
fieldValue76.value = "1 1 0";
ProtoInstance73.fieldValue[2] = fieldValue76;

Transform66.children[1] = ProtoInstance73;

ProtoBody65.children = new MFNode();

ProtoBody65.children[0] = Transform66;

ProtoDeclare62.protoBody = ProtoBody65;

children[6] = ProtoDeclare62;

ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.name = "eight";
fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "ttranslation";
fieldValue78.value = "0 0 0";
ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

children[7] = ProtoInstance77;

//Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>
}
