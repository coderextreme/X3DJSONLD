#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "t4.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Andreas Plesch and John Carlson";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "source";
meta6.content = "t1.wrl";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "Test Case for Proto Expander";
head1.meta[5] = meta7;

component component8 = createNode("component");
component8.name = "Networking";
component8.level = 2;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "Core";
component9.level = 2;
head1.component[7] = component9;

head = head1;

ProtoDeclare ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="posi"></field>
<field accessType="initializeOnly" type="SFColor" name="col"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="5.1"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "org";
ProtoInterface ProtoInterface12 = createNode("ProtoInterface");
field field13 = createNode("field");
field13.accessType = "initializeOnly";
field13.type = "SFVec3f";
field13.name = "posi";
ProtoInterface12.field = new MFNode();

ProtoInterface12.field[0] = field13;

field field14 = createNode("field");
field14.accessType = "initializeOnly";
field14.type = "SFColor";
field14.name = "col";
ProtoInterface12.field[1] = field14;

ProtoDeclare11.protoInterface = ProtoInterface12;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Transform Transform16 = createNode("Transform");
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,1,1]);
IS IS20 = createNode("IS");
connect connect21 = createNode("connect");
connect21.nodeField = "emissiveColor";
connect21.protoField = "col";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

Material19.iS = IS20;

Appearance18.material = Material19;

Shape17.appearance = Appearance18;

Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 5.1;
Shape17.geometry = Sphere22;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

IS IS23 = createNode("IS");
connect connect24 = createNode("connect");
connect24.nodeField = "translation";
connect24.protoField = "posi";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

Transform16.iS = IS23;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare11.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare11;

ProtoDeclare ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.3 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "r";
ProtoInterface ProtoInterface26 = createNode("ProtoInterface");
field field27 = createNode("field");
field27.accessType = "initializeOnly";
field27.type = "SFVec3f";
field27.name = "pos";
ProtoInterface26.field = new MFNode();

ProtoInterface26.field[0] = field27;

ProtoDeclare25.protoInterface = ProtoInterface26;

ProtoBody ProtoBody28 = createNode("ProtoBody");
ProtoInstance ProtoInstance29 = createNode("ProtoInstance");
ProtoInstance29.name = "org";
fieldValue fieldValue30 = createNode("fieldValue");
fieldValue30.name = "col";
fieldValue30.value = "0 0.3 1";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "posi";
connect32.protoField = "pos";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ProtoInstance29.iS = IS31;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = ProtoInstance29;

ProtoDeclare25.protoBody = ProtoBody28;

children[1] = ProtoDeclare25;

ProtoDeclare ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="n" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="1 0 0.2"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "n";
ProtoInterface ProtoInterface34 = createNode("ProtoInterface");
field field35 = createNode("field");
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.name = "pos";
ProtoInterface34.field = new MFNode();

ProtoInterface34.field[0] = field35;

ProtoDeclare33.protoInterface = ProtoInterface34;

ProtoBody ProtoBody36 = createNode("ProtoBody");
ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "org";
fieldValue fieldValue38 = createNode("fieldValue");
fieldValue38.name = "col";
fieldValue38.value = "1 0 0.2";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "posi";
connect40.protoField = "pos";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

ProtoInstance37.iS = IS39;

ProtoBody36.children = new MFNode();

ProtoBody36.children[0] = ProtoInstance37;

ProtoDeclare33.protoBody = ProtoBody36;

children[2] = ProtoDeclare33;

ProtoDeclare ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="i" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0.6 0 0.6"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "i";
ProtoInterface ProtoInterface42 = createNode("ProtoInterface");
field field43 = createNode("field");
field43.accessType = "initializeOnly";
field43.type = "SFVec3f";
field43.name = "pos";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

ProtoDeclare41.protoInterface = ProtoInterface42;

ProtoBody ProtoBody44 = createNode("ProtoBody");
ProtoInstance ProtoInstance45 = createNode("ProtoInstance");
ProtoInstance45.name = "org";
fieldValue fieldValue46 = createNode("fieldValue");
fieldValue46.name = "col";
fieldValue46.value = "0.6 0 0.6";
ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

IS IS47 = createNode("IS");
connect connect48 = createNode("connect");
connect48.nodeField = "posi";
connect48.protoField = "pos";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

ProtoInstance45.iS = IS47;

ProtoBody44.children = new MFNode();

ProtoBody44.children[0] = ProtoInstance45;

ProtoDeclare41.protoBody = ProtoBody44;

children[3] = ProtoDeclare41;

NavigationInfo NavigationInfo49 = createNode("NavigationInfo");
NavigationInfo49.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo49.avatarSize = new MFFloat(new float[200,200,120]);
NavigationInfo49.speed = 3;
children[4] = NavigationInfo49;

WorldInfo WorldInfo50 = createNode("WorldInfo");
WorldInfo50.title = "Arts Mapper";
children[5] = WorldInfo50;

Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.description = "looking North";
Viewpoint51.position = new SFVec3f(new float[0,60,110]);
Viewpoint51.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint51.fieldOfView = 0.7853981;
children[6] = Viewpoint51;

Transform Transform52 = createNode("Transform");
Transform52.translation = new SFVec3f(new float[-468,0,315]);
Anchor Anchor53 = createNode("Anchor");
Anchor53.description = "High Peak Community Arts";
Anchor53.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "r";
fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "pos";
fieldValue55.value = "400 0.1 -385";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Anchor53.children = new MFNode();

Anchor53.children[0] = ProtoInstance54;

Transform52.children = new MFNode();

Transform52.children[0] = Anchor53;

Anchor Anchor56 = createNode("Anchor");
Anchor56.description = "People Express";
Anchor56.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "i";
fieldValue fieldValue58 = createNode("fieldValue");
fieldValue58.name = "pos";
fieldValue58.value = "429.9 0.1 -319.6";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

Anchor56.children = new MFNode();

Anchor56.children[0] = ProtoInstance57;

Transform52.children[1] = Anchor56;

Anchor Anchor59 = createNode("Anchor");
Anchor59.description = "QArts/Studios";
Anchor59.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "i";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "pos";
fieldValue61.value = "430 0.1 -335";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Anchor59.children = new MFNode();

Anchor59.children[0] = ProtoInstance60;

Transform52.children[2] = Anchor59;

Anchor Anchor62 = createNode("Anchor");
Anchor62.description = "First Movement";
Anchor62.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "n";
fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "pos";
fieldValue64.value = "429.9 0.1 -360.3";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Anchor62.children = new MFNode();

Anchor62.children[0] = ProtoInstance63;

Transform52.children[3] = Anchor62;

Anchor Anchor65 = createNode("Anchor");
Anchor65.description = "City Arts";
Anchor65.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "i";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "pos";
fieldValue67.value = "455.9 0.1 -341.3";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

Anchor65.children = new MFNode();

Anchor65.children[0] = ProtoInstance66;

Transform52.children[4] = Anchor65;

Anchor Anchor68 = createNode("Anchor");
Anchor68.description = "Indigo Dance Group (Salamanda Tandem)";
Anchor68.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance69 = createNode("ProtoInstance");
ProtoInstance69.name = "r";
fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "pos";
fieldValue70.value = "456.1 0.1 -341.5";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

Anchor68.children = new MFNode();

Anchor68.children[0] = ProtoInstance69;

Transform52.children[5] = Anchor68;

Anchor Anchor71 = createNode("Anchor");
Anchor71.description = "Watering Seeds";
Anchor71.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance72 = createNode("ProtoInstance");
ProtoInstance72.name = "r";
fieldValue fieldValue73 = createNode("fieldValue");
fieldValue73.name = "pos";
fieldValue73.value = "454 0.1 -361.3";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

Anchor71.children = new MFNode();

Anchor71.children[0] = ProtoInstance72;

Transform52.children[6] = Anchor71;

Anchor Anchor74 = createNode("Anchor");
Anchor74.description = "Fased In The Arts";
Anchor74.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "r";
fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "pos";
fieldValue76.value = "440 0.1 -350";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

Anchor74.children = new MFNode();

Anchor74.children[0] = ProtoInstance75;

Transform52.children[7] = Anchor74;

Anchor Anchor77 = createNode("Anchor");
Anchor77.description = "27a Access Artspace";
Anchor77.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance78 = createNode("ProtoInstance");
ProtoInstance78.name = "n";
fieldValue fieldValue79 = createNode("fieldValue");
fieldValue79.name = "pos";
fieldValue79.value = "458.9 0.1 -304.3";
ProtoInstance78.fieldValue = new MFNode();

ProtoInstance78.fieldValue[0] = fieldValue79;

Anchor77.children = new MFNode();

Anchor77.children[0] = ProtoInstance78;

Transform52.children[8] = Anchor77;

Anchor Anchor80 = createNode("Anchor");
Anchor80.description = "Bamboozle Theatre Company";
Anchor80.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance81 = createNode("ProtoInstance");
ProtoInstance81.name = "r";
fieldValue fieldValue82 = createNode("fieldValue");
fieldValue82.name = "pos";
fieldValue82.value = "457.1 0.1 -300.8";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

Anchor80.children = new MFNode();

Anchor80.children[0] = ProtoInstance81;

Transform52.children[9] = Anchor80;

Anchor Anchor83 = createNode("Anchor");
Anchor83.description = "Mantle Community Arts";
Anchor83.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance84 = createNode("ProtoInstance");
ProtoInstance84.name = "r";
fieldValue fieldValue85 = createNode("fieldValue");
fieldValue85.name = "pos";
fieldValue85.value = "442.4 0.1 -314.5";
ProtoInstance84.fieldValue = new MFNode();

ProtoInstance84.fieldValue[0] = fieldValue85;

Anchor83.children = new MFNode();

Anchor83.children[0] = ProtoInstance84;

Transform52.children[10] = Anchor83;

Anchor Anchor86 = createNode("Anchor");
Anchor86.description = "Artlink East";
Anchor86.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance87 = createNode("ProtoInstance");
ProtoInstance87.name = "r";
fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "pos";
fieldValue88.value = "491.6 0.1 -335.7";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

Anchor86.children = new MFNode();

Anchor86.children[0] = ProtoInstance87;

Transform52.children[11] = Anchor86;

Anchor Anchor89 = createNode("Anchor");
Anchor89.description = "Creations";
Anchor89.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance90 = createNode("ProtoInstance");
ProtoInstance90.name = "r";
fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "pos";
fieldValue91.value = "467 0.1 -243.9";
ProtoInstance90.fieldValue = new MFNode();

ProtoInstance90.fieldValue[0] = fieldValue91;

Anchor89.children = new MFNode();

Anchor89.children[0] = ProtoInstance90;

Transform52.children[12] = Anchor89;

Anchor Anchor92 = createNode("Anchor");
Anchor92.description = "New Perspectives";
Anchor92.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance93 = createNode("ProtoInstance");
ProtoInstance93.name = "n";
fieldValue fieldValue94 = createNode("fieldValue");
fieldValue94.name = "pos";
fieldValue94.value = "457.4 0.1 -262.7";
ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

Anchor92.children = new MFNode();

Anchor92.children[0] = ProtoInstance93;

Transform52.children[13] = Anchor92;

Anchor Anchor95 = createNode("Anchor");
Anchor95.description = "UKan2";
Anchor95.url = new MFString(new java.lang.String["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance96 = createNode("ProtoInstance");
ProtoInstance96.name = "r";
fieldValue fieldValue97 = createNode("fieldValue");
fieldValue97.name = "pos";
fieldValue97.value = "458.7 0.1 -262.7";
ProtoInstance96.fieldValue = new MFNode();

ProtoInstance96.fieldValue[0] = fieldValue97;

Anchor95.children = new MFNode();

Anchor95.children[0] = ProtoInstance96;

Transform52.children[14] = Anchor95;

children[7] = Transform52;

}
