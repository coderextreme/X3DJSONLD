#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Sunrise X3D Editor";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Sun, 12 Dec 2021 19:43:00 +0100";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Sunrise X3D Editor V1.0, https://create3000.github.io/Sunrise/";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///Users/holger/Desktop/X_ITE/x_ite/src/tests/vp-layers.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Tue, 14 Dec 2021 20:27:38 +0100";
head1.meta[5] = meta7;

head = head1;

ProtoDeclare ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="VP" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="same" accessType="inputOutput" type="SFBool"></field>
<field name="viewpoint" accessType="initializeOnly" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="Box"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
</IS>
<Shape><Appearance containerField="appearance"><Material containerField="material"></Material>
</Appearance>
<Box></Box>
</Shape>
<TouchSensor DEF="_1"></TouchSensor>
</Transform>
<Script DEF="VPScript"><field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="same" accessType="inputOutput" type="SFBool"></field>
<field name="viewpoint" accessType="initializeOnly" type="SFNode"></field>
<IS><connect nodeField="same" protoField="same"></connect>
<connect nodeField="viewpoint" protoField="viewpoint"></connect>
</IS>
<![CDATA[ecmascript:

function set_time (value, time)
{
   var bind = same ? viewpoint .isBound : !viewpoint .isBound;

   viewpoint .set_bind = bind;

   print (viewpoint .description, bind);
}]]></Script>
<ROUTE fromNode="_1" fromField="touchTime" toNode="VPScript" toField="set_time"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "VP";
ProtoInterface ProtoInterface10 = createNode("ProtoInterface");
field field11 = createNode("field");
field11.name = "translation";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

field field12 = createNode("field");
field12.name = "scale";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "1 1 1";
ProtoInterface10.field[1] = field12;

field field13 = createNode("field");
field13.name = "same";
field13.accessType = "inputOutput";
field13.type = "SFBool";
ProtoInterface10.field[2] = field13;

field field14 = createNode("field");
field14.name = "viewpoint";
field14.accessType = "initializeOnly";
field14.type = "SFNode";
ProtoInterface10.field[3] = field14;

ProtoDeclare9.protoInterface = ProtoInterface10;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Transform Transform16 = createNode("Transform");
Transform16.DEF = "Box";
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "translation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

connect connect19 = createNode("connect");
connect19.nodeField = "scale";
connect19.protoField = "scale";
IS17.connect[1] = connect19;

Transform16.iS = IS17;

Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Box Box23 = createNode("Box");
Shape20.geometry = Box23;

Transform16.child = new undefined();

Transform16.child[0] = Shape20;

TouchSensor TouchSensor24 = createNode("TouchSensor");
TouchSensor24.DEF = "_1";
Transform16.children[1] = TouchSensor24;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

Script Script25 = createNode("Script");
Script25.DEF = "VPScript";
field field26 = createNode("field");
field26.name = "set_time";
field26.accessType = "inputOnly";
field26.type = "SFTime";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "same";
field27.accessType = "inputOutput";
field27.type = "SFBool";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "viewpoint";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
Script25.field[2] = field28;

IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "same";
connect30.protoField = "same";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "viewpoint";
connect31.protoField = "viewpoint";
IS29.connect[1] = connect31;

Script25.iS = IS29;


Script25.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_time (value, time)\n"+
"{\n"+
"   var bind = same ? viewpoint .isBound : !viewpoint .isBound;\n"+
"\n"+
"   viewpoint .set_bind = bind;\n"+
"\n"+
"   print (viewpoint .description, bind);\n"+
"}`)
ProtoBody15.children[1] = Script25;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "_1";
ROUTE32.fromField = "touchTime";
ROUTE32.toNode = "VPScript";
ROUTE32.toField = "set_time";
ProtoBody15.children[2] = ROUTE32;

ProtoDeclare9.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare9;

WorldInfo WorldInfo33 = createNode("WorldInfo");
MetadataSet MetadataSet34 = createNode("MetadataSet");
MetadataSet34.name = "Sunrise";
MetadataSet34.DEF = "Sunrise";
MetadataSet34.reference = "https://github.com/create3000/Swift-X3D";
MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "Footer";
MetadataSet35.DEF = "Footer";
MetadataSet35.reference = "https://github.com/create3000/Swift-X3D";
MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "selectedTabItem";
MetadataString36.DEF = "selectedTabItem";
MetadataString36.reference = "https://github.com/create3000/Swift-X3D";
MetadataString36.value = new MFString(new java.lang.String["ScriptEditor"]);
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataString36;

MetadataSet34.value = new MFNode();

MetadataSet34.value[0] = MetadataSet35;

MetadataSet MetadataSet37 = createNode("MetadataSet");
MetadataSet37.name = "Sidebar";
MetadataSet37.DEF = "Sidebar";
MetadataSet37.reference = "https://github.com/create3000/Swift-X3D";
MetadataString MetadataString38 = createNode("MetadataString");
MetadataString38.name = "selectedTabItem";
MetadataString38.DEF = "selectedTabItem_1";
MetadataString38.reference = "https://github.com/create3000/Swift-X3D";
MetadataString38.value = new MFString(new java.lang.String["OutlineEditor"]);
MetadataSet37.value = new MFNode();

MetadataSet37.value[0] = MetadataString38;

MetadataSet34.value[1] = MetadataSet37;

WorldInfo33.metadata = MetadataSet34;

children[1] = WorldInfo33;

LayerSet LayerSet39 = createNode("LayerSet");
LayerSet39.activeLayer = 1;
LayerSet39.order = new MFInt32(new int[0,1,2]);
Layer Layer40 = createNode("Layer");
Layer40.DEF = "L1";
NavigationInfo NavigationInfo41 = createNode("NavigationInfo");
NavigationInfo41.transitionTime = 2;
Layer40.children = new MFNode();

Layer40.children[0] = NavigationInfo41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.DEF = "VP1";
Viewpoint42.description = "VP1";
Layer40.children[1] = Viewpoint42;

ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "VP";
fieldValue fieldValue44 = createNode("fieldValue");
fieldValue44.name = "translation";
fieldValue44.value = "-3 2 0";
ProtoInstance43.fieldValue = new MFNode();

ProtoInstance43.fieldValue[0] = fieldValue44;

fieldValue fieldValue45 = createNode("fieldValue");
fieldValue45.name = "viewpoint";
Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.USE = "VP1";
fieldValue45.children = new MFNode();

fieldValue45.children[0] = Viewpoint46;

ProtoInstance43.fieldValue[1] = fieldValue45;

Layer40.children[2] = ProtoInstance43;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.DEF = "VP2";
Viewpoint47.description = "VP2";
Viewpoint47.position = new SFVec3f(new float[1,0,10]);
Layer40.children[3] = Viewpoint47;

ProtoInstance ProtoInstance48 = createNode("ProtoInstance");
ProtoInstance48.name = "VP";
fieldValue fieldValue49 = createNode("fieldValue");
fieldValue49.name = "translation";
fieldValue49.value = "0 2 0";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

fieldValue fieldValue50 = createNode("fieldValue");
fieldValue50.name = "viewpoint";
Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.USE = "VP2";
fieldValue50.children = new MFNode();

fieldValue50.children[0] = Viewpoint51;

ProtoInstance48.fieldValue[1] = fieldValue50;

Layer40.children[4] = ProtoInstance48;

Viewpoint Viewpoint52 = createNode("Viewpoint");
Viewpoint52.DEF = "VP3";
Viewpoint52.description = "VP3";
Viewpoint52.position = new SFVec3f(new float[2,0,10]);
Layer40.children[5] = Viewpoint52;

ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "VP";
fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "translation";
fieldValue54.value = "3 2 0";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "viewpoint";
Viewpoint Viewpoint56 = createNode("Viewpoint");
Viewpoint56.USE = "VP3";
fieldValue55.children = new MFNode();

fieldValue55.children[0] = Viewpoint56;

ProtoInstance53.fieldValue[1] = fieldValue55;

Layer40.children[6] = ProtoInstance53;

LayerSet39.layers = new MFNode();

LayerSet39.layers[0] = Layer40;

Layer Layer57 = createNode("Layer");
Layer57.DEF = "L2";
NavigationInfo NavigationInfo58 = createNode("NavigationInfo");
Layer57.children = new MFNode();

Layer57.children[0] = NavigationInfo58;

Viewpoint Viewpoint59 = createNode("Viewpoint");
Viewpoint59.DEF = "VP1_1";
Viewpoint59.description = "VP1";
Layer57.children[1] = Viewpoint59;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "VP";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "translation";
fieldValue61.value = "-3 -2 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "viewpoint";
Viewpoint Viewpoint63 = createNode("Viewpoint");
Viewpoint63.USE = "VP1_1";
fieldValue62.children = new MFNode();

fieldValue62.children[0] = Viewpoint63;

ProtoInstance60.fieldValue[1] = fieldValue62;

Layer57.children[2] = ProtoInstance60;

Viewpoint Viewpoint64 = createNode("Viewpoint");
Viewpoint64.DEF = "VP2_1";
Viewpoint64.description = "VP2";
Viewpoint64.position = new SFVec3f(new float[1,0,10]);
Layer57.children[3] = Viewpoint64;

ProtoInstance ProtoInstance65 = createNode("ProtoInstance");
ProtoInstance65.name = "VP";
fieldValue fieldValue66 = createNode("fieldValue");
fieldValue66.name = "translation";
fieldValue66.value = "0 -2 0";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "viewpoint";
Viewpoint Viewpoint68 = createNode("Viewpoint");
Viewpoint68.USE = "VP2_1";
fieldValue67.children = new MFNode();

fieldValue67.children[0] = Viewpoint68;

ProtoInstance65.fieldValue[1] = fieldValue67;

Layer57.children[4] = ProtoInstance65;

Viewpoint Viewpoint69 = createNode("Viewpoint");
Viewpoint69.USE = "VP3";
Layer57.children[5] = Viewpoint69;

ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "VP";
fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "translation";
fieldValue71.value = "3 -2 0";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "viewpoint";
Viewpoint Viewpoint73 = createNode("Viewpoint");
Viewpoint73.USE = "VP3";
fieldValue72.children = new MFNode();

fieldValue72.children[0] = Viewpoint73;

ProtoInstance70.fieldValue[1] = fieldValue72;

Layer57.children[6] = ProtoInstance70;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.name = "VP";
fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "translation";
fieldValue75.value = "0 -0.5 0";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "scale";
fieldValue76.value = "0.2 0.2 0.2";
ProtoInstance74.fieldValue[1] = fieldValue76;

fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "same";
fieldValue77.value = "true";
ProtoInstance74.fieldValue[2] = fieldValue77;

fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "viewpoint";
Viewpoint Viewpoint79 = createNode("Viewpoint");
Viewpoint79.USE = "VP2_1";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = Viewpoint79;

ProtoInstance74.fieldValue[3] = fieldValue78;

Layer57.children[7] = ProtoInstance74;

LayerSet39.layers[1] = Layer57;

layerSet[2] = LayerSet39;

}
