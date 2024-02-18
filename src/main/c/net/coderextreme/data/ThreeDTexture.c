#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a kind of ThreeDTexture cube with spheres";
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

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="sphereproto" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "sphereproto";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
field field12 = createNode("field");
field12.name = "xtranslation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Transform Transform14 = createNode("Transform");
IS IS15 = createNode("IS");
connect connect16 = createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "xtranslation";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

Shape Shape17 = createNode("Shape");
Sphere Sphere18 = createNode("Sphere");
Shape17.geometry = Sphere18;

Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,1,1]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.child = new undefined();

Transform14.child[0] = Shape17;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare10.protoBody = ProtoBody13;

children[2] = ProtoDeclare10;

ProtoDeclare ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "three";
ProtoInterface ProtoInterface22 = createNode("ProtoInterface");
field field23 = createNode("field");
field23.name = "ytranslation";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

ProtoDeclare21.protoInterface = ProtoInterface22;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Transform Transform25 = createNode("Transform");
IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "translation";
connect27.protoField = "ytranslation";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Transform25.iS = IS26;

ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "sphereproto";
fieldValue fieldValue29 = createNode("fieldValue");
fieldValue29.name = "xtranslation";
fieldValue29.value = "0 0 0";
ProtoInstance28.fieldValue = new MFNode();

ProtoInstance28.fieldValue[0] = fieldValue29;

Transform25.children = new MFNode();

Transform25.children[0] = ProtoInstance28;

ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "sphereproto";
fieldValue fieldValue31 = createNode("fieldValue");
fieldValue31.name = "xtranslation";
fieldValue31.value = "2 0 0";
ProtoInstance30.fieldValue = new MFNode();

ProtoInstance30.fieldValue[0] = fieldValue31;

Transform25.children[1] = ProtoInstance30;

ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "sphereproto";
fieldValue fieldValue33 = createNode("fieldValue");
fieldValue33.name = "xtranslation";
fieldValue33.value = "-2 0 0";
ProtoInstance32.fieldValue = new MFNode();

ProtoInstance32.fieldValue[0] = fieldValue33;

Transform25.children[2] = ProtoInstance32;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Transform25;

ProtoDeclare21.protoBody = ProtoBody24;

children[3] = ProtoDeclare21;

ProtoDeclare ProtoDeclare34 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare34.name = "nine";
ProtoInterface ProtoInterface35 = createNode("ProtoInterface");
field field36 = createNode("field");
field36.name = "ztranslation";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
ProtoInterface35.field = new MFNode();

ProtoInterface35.field[0] = field36;

ProtoDeclare34.protoInterface = ProtoInterface35;

ProtoBody ProtoBody37 = createNode("ProtoBody");
Transform Transform38 = createNode("Transform");
IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "translation";
connect40.protoField = "ztranslation";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

Transform38.iS = IS39;

ProtoInstance ProtoInstance41 = createNode("ProtoInstance");
ProtoInstance41.name = "three";
fieldValue fieldValue42 = createNode("fieldValue");
fieldValue42.name = "ytranslation";
fieldValue42.value = "0 0 0";
ProtoInstance41.fieldValue = new MFNode();

ProtoInstance41.fieldValue[0] = fieldValue42;

Transform38.children = new MFNode();

Transform38.children[0] = ProtoInstance41;

ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "three";
fieldValue fieldValue44 = createNode("fieldValue");
fieldValue44.name = "ytranslation";
fieldValue44.value = "0 2 0";
ProtoInstance43.fieldValue = new MFNode();

ProtoInstance43.fieldValue[0] = fieldValue44;

Transform38.children[1] = ProtoInstance43;

ProtoInstance ProtoInstance45 = createNode("ProtoInstance");
ProtoInstance45.name = "three";
fieldValue fieldValue46 = createNode("fieldValue");
fieldValue46.name = "ytranslation";
fieldValue46.value = "0 -2 0";
ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

Transform38.children[2] = ProtoInstance45;

ProtoBody37.children = new MFNode();

ProtoBody37.children[0] = Transform38;

ProtoDeclare34.protoBody = ProtoBody37;

children[4] = ProtoDeclare34;

ProtoDeclare ProtoDeclare47 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare47.name = "twentyseven";
ProtoInterface ProtoInterface48 = createNode("ProtoInterface");
field field49 = createNode("field");
field49.name = "ttranslation";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
ProtoInterface48.field = new MFNode();

ProtoInterface48.field[0] = field49;

ProtoDeclare47.protoInterface = ProtoInterface48;

ProtoBody ProtoBody50 = createNode("ProtoBody");
Transform Transform51 = createNode("Transform");
IS IS52 = createNode("IS");
connect connect53 = createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ttranslation";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Transform51.iS = IS52;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "nine";
fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "ztranslation";
fieldValue55.value = "0 0 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Transform51.children = new MFNode();

Transform51.children[0] = ProtoInstance54;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "nine";
fieldValue fieldValue57 = createNode("fieldValue");
fieldValue57.name = "ztranslation";
fieldValue57.value = "0 0 2";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

Transform51.children[1] = ProtoInstance56;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "nine";
fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "ztranslation";
fieldValue59.value = "0 0 -2";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Transform51.children[2] = ProtoInstance58;

ProtoBody50.children = new MFNode();

ProtoBody50.children[0] = Transform51;

ProtoDeclare47.protoBody = ProtoBody50;

children[5] = ProtoDeclare47;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "twentyseven";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "ttranslation";
fieldValue61.value = "0 0 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

children[6] = ProtoInstance60;

}
