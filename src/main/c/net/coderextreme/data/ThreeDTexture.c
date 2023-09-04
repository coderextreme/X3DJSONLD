#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ThreeDTexture.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d";
head1.meta[3] = meta5;

head = head1;

ProtoDeclare ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="sphereproto" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "sphereproto";
ProtoInterface ProtoInterface8 = createNode("ProtoInterface");
field field9 = createNode("field");
field9.accessType = "inputOutput";
field9.type = "SFVec3f";
field9.name = "xtranslation";
ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

ProtoDeclare7.protoInterface = ProtoInterface8;

ProtoBody ProtoBody10 = createNode("ProtoBody");
Transform Transform11 = createNode("Transform");
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Sphere Sphere15 = createNode("Sphere");
Shape12.geometry = Sphere15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "xtranslation";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform11.iS = IS16;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = Transform11;

ProtoDeclare7.protoBody = ProtoBody10;

children = new MFNode();

children[0] = ProtoDeclare7;

ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="sphereproto"></ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "three";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.name = "ytranslation";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody21 = createNode("ProtoBody");
Transform Transform22 = createNode("Transform");
ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "sphereproto";
Transform22.children = new MFNode();

Transform22.children[0] = ProtoInstance23;

ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "sphereproto";
fieldValue fieldValue25 = createNode("fieldValue");
fieldValue25.name = "xtranslation";
fieldValue25.value = "2 0 0";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

Transform22.children[1] = ProtoInstance24;

ProtoInstance ProtoInstance26 = createNode("ProtoInstance");
ProtoInstance26.name = "sphereproto";
fieldValue fieldValue27 = createNode("fieldValue");
fieldValue27.name = "xtranslation";
fieldValue27.value = "-2 0 0";
ProtoInstance26.fieldValue = new MFNode();

ProtoInstance26.fieldValue[0] = fieldValue27;

Transform22.children[2] = ProtoInstance26;

IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "translation";
connect29.protoField = "ytranslation";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Transform22.iS = IS28;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

ProtoDeclare18.protoBody = ProtoBody21;

children[1] = ProtoDeclare18;

ProtoDeclare ProtoDeclare30 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="three"></ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare30.name = "nine";
ProtoInterface ProtoInterface31 = createNode("ProtoInterface");
field field32 = createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.name = "ztranslation";
ProtoInterface31.field = new MFNode();

ProtoInterface31.field[0] = field32;

ProtoDeclare30.protoInterface = ProtoInterface31;

ProtoBody ProtoBody33 = createNode("ProtoBody");
Transform Transform34 = createNode("Transform");
ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "three";
Transform34.children = new MFNode();

Transform34.children[0] = ProtoInstance35;

ProtoInstance ProtoInstance36 = createNode("ProtoInstance");
ProtoInstance36.name = "three";
fieldValue fieldValue37 = createNode("fieldValue");
fieldValue37.name = "ytranslation";
fieldValue37.value = "0 2 0";
ProtoInstance36.fieldValue = new MFNode();

ProtoInstance36.fieldValue[0] = fieldValue37;

Transform34.children[1] = ProtoInstance36;

ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "three";
fieldValue fieldValue39 = createNode("fieldValue");
fieldValue39.name = "ytranslation";
fieldValue39.value = "0 -2 0";
ProtoInstance38.fieldValue = new MFNode();

ProtoInstance38.fieldValue[0] = fieldValue39;

Transform34.children[2] = ProtoInstance38;

IS IS40 = createNode("IS");
connect connect41 = createNode("connect");
connect41.nodeField = "translation";
connect41.protoField = "ztranslation";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

Transform34.iS = IS40;

ProtoBody33.children = new MFNode();

ProtoBody33.children[0] = Transform34;

ProtoDeclare30.protoBody = ProtoBody33;

children[2] = ProtoDeclare30;

ProtoDeclare ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="nine"></ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "twentyseven";
ProtoInterface ProtoInterface43 = createNode("ProtoInterface");
field field44 = createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.name = "ttranslation";
ProtoInterface43.field = new MFNode();

ProtoInterface43.field[0] = field44;

ProtoDeclare42.protoInterface = ProtoInterface43;

ProtoBody ProtoBody45 = createNode("ProtoBody");
Transform Transform46 = createNode("Transform");
ProtoInstance ProtoInstance47 = createNode("ProtoInstance");
ProtoInstance47.name = "nine";
Transform46.children = new MFNode();

Transform46.children[0] = ProtoInstance47;

ProtoInstance ProtoInstance48 = createNode("ProtoInstance");
ProtoInstance48.name = "nine";
fieldValue fieldValue49 = createNode("fieldValue");
fieldValue49.name = "ztranslation";
fieldValue49.value = "0 0 2";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

Transform46.children[1] = ProtoInstance48;

ProtoInstance ProtoInstance50 = createNode("ProtoInstance");
ProtoInstance50.name = "nine";
fieldValue fieldValue51 = createNode("fieldValue");
fieldValue51.name = "ztranslation";
fieldValue51.value = "0 0 -2";
ProtoInstance50.fieldValue = new MFNode();

ProtoInstance50.fieldValue[0] = fieldValue51;

Transform46.children[2] = ProtoInstance50;

IS IS52 = createNode("IS");
connect connect53 = createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ttranslation";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Transform46.iS = IS52;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Transform46;

ProtoDeclare42.protoBody = ProtoBody45;

children[3] = ProtoDeclare42;

NavigationInfo NavigationInfo54 = createNode("NavigationInfo");
NavigationInfo54.type = new MFString(new java.lang.String["EXAMINE"]);
children[4] = NavigationInfo54;

Viewpoint Viewpoint55 = createNode("Viewpoint");
Viewpoint55.description = "Rubiks Cube";
Viewpoint55.position = new SFVec3f(new float[0,0,12]);
children[5] = Viewpoint55;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "twentyseven";
children[6] = ProtoInstance56;

}
