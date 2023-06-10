#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Networking";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Core";
component3.level = 2;
head1.component[1] = component3;

meta meta4 = createNode("meta");
meta4.name = "title";
meta4.content = "t4.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Andreas Plesch and John Carlson";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "source";
meta8.content = "t1.wrl";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "description";
meta9.content = "Test Case for Proto Expander";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[8] = meta10;

head = head1;

NavigationInfo NavigationInfo12 = createNode("NavigationInfo");
NavigationInfo12.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo12.speed = 3;
NavigationInfo12.avatarSize = new MFFloat(new float[200,200,120]);
children = new MFNode();

children[0] = NavigationInfo12;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.title = "Arts Mapper";
children[1] = WorldInfo13;

Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.description = "looking North";
Viewpoint14.position = new SFVec3f(new float[0,60,110]);
Viewpoint14.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint14.fieldOfView = 0.785398125648499;
children[2] = Viewpoint14;

ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
<Shape><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="5.10000002384186"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "org";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "posi";
field17.accessType = "initializeOnly";
field17.type = "SFVec3f";
field17.value = "0 0 0";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.name = "col";
field18.accessType = "initializeOnly";
field18.type = "SFColor";
field18.value = "0 0 0";
ProtoInterface16.field[1] = field18;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody19 = createNode("ProtoBody");
Transform Transform20 = createNode("Transform");
IS IS21 = createNode("IS");
connect connect22 = createNode("connect");
connect22.nodeField = "translation";
connect22.protoField = "posi";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

Transform20.iS = IS21;

Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[1,1,1]);
IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "emissiveColor";
connect27.protoField = "col";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Material25.iS = IS26;

Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Sphere Sphere28 = createNode("Sphere");
Sphere28.radius = 5.10000002384186;
Shape23.geometry = Sphere28;

Transform20.children = new MFNode();

Transform20.children[0] = Shape23;

ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Transform20;

ProtoDeclare15.protoBody = ProtoBody19;

children[3] = ProtoDeclare15;

ProtoDeclare ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare29.name = "r";
ProtoInterface ProtoInterface30 = createNode("ProtoInterface");
field field31 = createNode("field");
field31.name = "pos";
field31.accessType = "initializeOnly";
field31.type = "SFVec3f";
field31.value = "0 0 0";
ProtoInterface30.field = new MFNode();

ProtoInterface30.field[0] = field31;

ProtoDeclare29.protoInterface = ProtoInterface30;

ProtoBody ProtoBody32 = createNode("ProtoBody");
ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "org";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "col";
fieldValue34.value = "0 0.300000011920929 1";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "posi";
connect36.protoField = "pos";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

ProtoInstance33.iS = IS35;

ProtoBody32.children = new MFNode();

ProtoBody32.children[0] = ProtoInstance33;

ProtoDeclare29.protoBody = ProtoBody32;

children[4] = ProtoDeclare29;

ProtoDeclare ProtoDeclare37 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.200000002980232"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare37.name = "n";
ProtoInterface ProtoInterface38 = createNode("ProtoInterface");
field field39 = createNode("field");
field39.name = "pos";
field39.accessType = "initializeOnly";
field39.type = "SFVec3f";
field39.value = "0 0 0";
ProtoInterface38.field = new MFNode();

ProtoInterface38.field[0] = field39;

ProtoDeclare37.protoInterface = ProtoInterface38;

ProtoBody ProtoBody40 = createNode("ProtoBody");
ProtoInstance ProtoInstance41 = createNode("ProtoInstance");
ProtoInstance41.name = "org";
fieldValue fieldValue42 = createNode("fieldValue");
fieldValue42.name = "col";
fieldValue42.value = "1 0 0.200000002980232";
ProtoInstance41.fieldValue = new MFNode();

ProtoInstance41.fieldValue[0] = fieldValue42;

IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "posi";
connect44.protoField = "pos";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

ProtoInstance41.iS = IS43;

ProtoBody40.children = new MFNode();

ProtoBody40.children[0] = ProtoInstance41;

ProtoDeclare37.protoBody = ProtoBody40;

children[5] = ProtoDeclare37;

ProtoDeclare ProtoDeclare45 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.600000023841858 0 0.600000023841858"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare45.name = "i";
ProtoInterface ProtoInterface46 = createNode("ProtoInterface");
field field47 = createNode("field");
field47.name = "pos";
field47.accessType = "initializeOnly";
field47.type = "SFVec3f";
field47.value = "0 0 0";
ProtoInterface46.field = new MFNode();

ProtoInterface46.field[0] = field47;

ProtoDeclare45.protoInterface = ProtoInterface46;

ProtoBody ProtoBody48 = createNode("ProtoBody");
ProtoInstance ProtoInstance49 = createNode("ProtoInstance");
ProtoInstance49.name = "org";
fieldValue fieldValue50 = createNode("fieldValue");
fieldValue50.name = "col";
fieldValue50.value = "0.600000023841858 0 0.600000023841858";
ProtoInstance49.fieldValue = new MFNode();

ProtoInstance49.fieldValue[0] = fieldValue50;

IS IS51 = createNode("IS");
connect connect52 = createNode("connect");
connect52.nodeField = "posi";
connect52.protoField = "pos";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

ProtoInstance49.iS = IS51;

ProtoBody48.children = new MFNode();

ProtoBody48.children[0] = ProtoInstance49;

ProtoDeclare45.protoBody = ProtoBody48;

children[6] = ProtoDeclare45;

Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[-468,0,315]);
Anchor Anchor54 = createNode("Anchor");
Anchor54.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor54.description = "High Peak Community Arts";
ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.name = "r";
fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "pos";
fieldValue56.value = "400 0.100000001490116 -385";
ProtoInstance55.fieldValue = new MFNode();

ProtoInstance55.fieldValue[0] = fieldValue56;

Anchor54.children = new MFNode();

Anchor54.children[0] = ProtoInstance55;

Transform53.children = new MFNode();

Transform53.children[0] = Anchor54;

Anchor Anchor57 = createNode("Anchor");
Anchor57.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor57.description = "People Express";
ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "i";
fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "pos";
fieldValue59.value = "429.899993896484 0.100000001490116 -319.600006103516";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Anchor57.children = new MFNode();

Anchor57.children[0] = ProtoInstance58;

Transform53.children[1] = Anchor57;

Anchor Anchor60 = createNode("Anchor");
Anchor60.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor60.description = "QArts/Studios";
ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "i";
fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "pos";
fieldValue62.value = "430 0.100000001490116 -335";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

Anchor60.children = new MFNode();

Anchor60.children[0] = ProtoInstance61;

Transform53.children[2] = Anchor60;

Anchor Anchor63 = createNode("Anchor");
Anchor63.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor63.description = "First Movement";
ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "n";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "pos";
fieldValue65.value = "429.899993896484 0.100000001490116 -360.299987792969";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Anchor63.children = new MFNode();

Anchor63.children[0] = ProtoInstance64;

Transform53.children[3] = Anchor63;

Anchor Anchor66 = createNode("Anchor");
Anchor66.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor66.description = "City Arts";
ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "i";
fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "pos";
fieldValue68.value = "455.899993896484 0.100000001490116 -341.299987792969";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

Anchor66.children = new MFNode();

Anchor66.children[0] = ProtoInstance67;

Transform53.children[4] = Anchor66;

Anchor Anchor69 = createNode("Anchor");
Anchor69.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor69.description = "Indigo Dance Group (Salamanda Tandem)";
ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "r";
fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "pos";
fieldValue71.value = "456.100006103516 0.100000001490116 -341.5";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

Anchor69.children = new MFNode();

Anchor69.children[0] = ProtoInstance70;

Transform53.children[5] = Anchor69;

Anchor Anchor72 = createNode("Anchor");
Anchor72.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor72.description = "Watering Seeds";
ProtoInstance ProtoInstance73 = createNode("ProtoInstance");
ProtoInstance73.name = "r";
fieldValue fieldValue74 = createNode("fieldValue");
fieldValue74.name = "pos";
fieldValue74.value = "454 0.100000001490116 -361.299987792969";
ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

Anchor72.children = new MFNode();

Anchor72.children[0] = ProtoInstance73;

Transform53.children[6] = Anchor72;

Anchor Anchor75 = createNode("Anchor");
Anchor75.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor75.description = "Fased In The Arts";
ProtoInstance ProtoInstance76 = createNode("ProtoInstance");
ProtoInstance76.name = "r";
fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "pos";
fieldValue77.value = "440 0.100000001490116 -350";
ProtoInstance76.fieldValue = new MFNode();

ProtoInstance76.fieldValue[0] = fieldValue77;

Anchor75.children = new MFNode();

Anchor75.children[0] = ProtoInstance76;

Transform53.children[7] = Anchor75;

Anchor Anchor78 = createNode("Anchor");
Anchor78.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor78.description = "27a Access Artspace";
ProtoInstance ProtoInstance79 = createNode("ProtoInstance");
ProtoInstance79.name = "n";
fieldValue fieldValue80 = createNode("fieldValue");
fieldValue80.name = "pos";
fieldValue80.value = "458.899993896484 0.100000001490116 -304.299987792969";
ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

Anchor78.children = new MFNode();

Anchor78.children[0] = ProtoInstance79;

Transform53.children[8] = Anchor78;

Anchor Anchor81 = createNode("Anchor");
Anchor81.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor81.description = "Bamboozle Theatre Company";
ProtoInstance ProtoInstance82 = createNode("ProtoInstance");
ProtoInstance82.name = "r";
fieldValue fieldValue83 = createNode("fieldValue");
fieldValue83.name = "pos";
fieldValue83.value = "457.100006103516 0.100000001490116 -300.799987792969";
ProtoInstance82.fieldValue = new MFNode();

ProtoInstance82.fieldValue[0] = fieldValue83;

Anchor81.children = new MFNode();

Anchor81.children[0] = ProtoInstance82;

Transform53.children[9] = Anchor81;

Anchor Anchor84 = createNode("Anchor");
Anchor84.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor84.description = "Mantle Community Arts";
ProtoInstance ProtoInstance85 = createNode("ProtoInstance");
ProtoInstance85.name = "r";
fieldValue fieldValue86 = createNode("fieldValue");
fieldValue86.name = "pos";
fieldValue86.value = "442.399993896484 0.100000001490116 -314.5";
ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

Anchor84.children = new MFNode();

Anchor84.children[0] = ProtoInstance85;

Transform53.children[10] = Anchor84;

Anchor Anchor87 = createNode("Anchor");
Anchor87.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor87.description = "Artlink East";
ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "r";
fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "pos";
fieldValue89.value = "491.600006103516 0.100000001490116 -335.700012207031";
ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

Anchor87.children = new MFNode();

Anchor87.children[0] = ProtoInstance88;

Transform53.children[11] = Anchor87;

Anchor Anchor90 = createNode("Anchor");
Anchor90.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor90.description = "Creations";
ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "r";
fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "pos";
fieldValue92.value = "467 0.100000001490116 -243.899993896484";
ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

Anchor90.children = new MFNode();

Anchor90.children[0] = ProtoInstance91;

Transform53.children[12] = Anchor90;

Anchor Anchor93 = createNode("Anchor");
Anchor93.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor93.description = "New Perspectives";
ProtoInstance ProtoInstance94 = createNode("ProtoInstance");
ProtoInstance94.name = "n";
fieldValue fieldValue95 = createNode("fieldValue");
fieldValue95.name = "pos";
fieldValue95.value = "457.399993896484 0.100000001490116 -262.700012207031";
ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

Anchor93.children = new MFNode();

Anchor93.children[0] = ProtoInstance94;

Transform53.children[13] = Anchor93;

Anchor Anchor96 = createNode("Anchor");
Anchor96.url = new MFString(new java.lang.String[", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
Anchor96.description = "UKan2";
ProtoInstance ProtoInstance97 = createNode("ProtoInstance");
ProtoInstance97.name = "r";
fieldValue fieldValue98 = createNode("fieldValue");
fieldValue98.name = "pos";
fieldValue98.value = "458.700012207031 0.100000001490116 -262.700012207031";
ProtoInstance97.fieldValue = new MFNode();

ProtoInstance97.fieldValue[0] = fieldValue98;

Anchor96.children = new MFNode();

Anchor96.children[0] = ProtoInstance97;

Transform53.children[14] = Anchor96;

children[7] = Transform53;

}
