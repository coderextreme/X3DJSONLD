#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "generator";
meta2.content = "view3dscene, https://castle-engine.io/view3dscene.php";
head1.meta = new MFNode();

head1.meta[0] = meta2;

component component3 = createNode("component");
component3.name = "Networking";
component3.level = 2;
head1.component[1] = component3;

head = head1;

ProtoDeclare ProtoDeclare5 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="posi"></field>
<field accessType="initializeOnly" type="SFColor" name="col"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.4"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="1.1"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare5.name = "org";
ProtoInterface ProtoInterface6 = createNode("ProtoInterface");
field field7 = createNode("field");
field7.accessType = "initializeOnly";
field7.type = "SFVec3f";
field7.name = "posi";
ProtoInterface6.field = new MFNode();

ProtoInterface6.field[0] = field7;

field field8 = createNode("field");
field8.accessType = "initializeOnly";
field8.type = "SFColor";
field8.name = "col";
ProtoInterface6.field[1] = field8;

ProtoDeclare5.protoInterface = ProtoInterface6;

ProtoBody ProtoBody9 = createNode("ProtoBody");
Transform Transform10 = createNode("Transform");
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.transparency = 0.4;
IS IS14 = createNode("IS");
connect connect15 = createNode("connect");
connect15.nodeField = "emissiveColor";
connect15.protoField = "col";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Material13.iS = IS14;

Appearance12.material = Material13;

Shape11.appearance = Appearance12;

Sphere Sphere16 = createNode("Sphere");
Sphere16.radius = 1.1;
Shape11.geometry = Sphere16;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "posi";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Transform10.iS = IS17;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Transform10;

ProtoDeclare5.protoBody = ProtoBody9;

children = new MFNode();

children[0] = ProtoDeclare5;

ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.3 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "r";
ProtoInterface ProtoInterface20 = createNode("ProtoInterface");
field field21 = createNode("field");
field21.accessType = "initializeOnly";
field21.type = "SFVec3f";
field21.name = "pos";
ProtoInterface20.field = new MFNode();

ProtoInterface20.field[0] = field21;

ProtoDeclare19.protoInterface = ProtoInterface20;

ProtoBody ProtoBody22 = createNode("ProtoBody");
ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "org";
fieldValue fieldValue24 = createNode("fieldValue");
fieldValue24.name = "col";
fieldValue24.value = "0 0.3 1";
ProtoInstance23.fieldValue = new MFNode();

ProtoInstance23.fieldValue[0] = fieldValue24;

IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "posi";
connect26.protoField = "pos";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

ProtoInstance23.iS = IS25;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = ProtoInstance23;

ProtoDeclare19.protoBody = ProtoBody22;

children[1] = ProtoDeclare19;

NavigationInfo NavigationInfo27 = createNode("NavigationInfo");
NavigationInfo27.type = new MFString(new java.lang.String["EXAMINE","FLY","WALK"]);
NavigationInfo27.avatarSize = new MFFloat(new float[200,200,120]);
NavigationInfo27.speed = 3;
children[2] = NavigationInfo27;

WorldInfo WorldInfo28 = createNode("WorldInfo");
WorldInfo28.title = "Arts Mapper";
children[3] = WorldInfo28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.description = "looking North";
Viewpoint29.position = new SFVec3f(new float[0,60,110]);
Viewpoint29.orientation = new SFRotation(new float[1,0,0,-0.699999988079071]);
Viewpoint29.fieldOfView = 0.7853981;
children[4] = Viewpoint29;

Viewpoint Viewpoint30 = createNode("Viewpoint");
Viewpoint30.description = "looking East";
Viewpoint30.position = new SFVec3f(new float[-140,30,0]);
Viewpoint30.orientation = new SFRotation(new float[0,0.400000005960464,0,-1.39999997615814]);
Viewpoint30.fieldOfView = 0.7853981;
children[5] = Viewpoint30;

Viewpoint Viewpoint31 = createNode("Viewpoint");
Viewpoint31.description = "Overhead";
Viewpoint31.position = new SFVec3f(new float[0,150,0]);
Viewpoint31.orientation = new SFRotation(new float[1,0,0,-1.57000005245209]);
Viewpoint31.fieldOfView = 0.7853981;
children[6] = Viewpoint31;

Anchor Anchor32 = createNode("Anchor");
Anchor32.description = "High Peak Community Arts";
Anchor32.url = new MFString(new java.lang.String["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]);
ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "r";
fieldValue fieldValue34 = createNode("fieldValue");
fieldValue34.name = "pos";
fieldValue34.value = "400 0.1 -385";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

Anchor32.children = new MFNode();

Anchor32.children[0] = ProtoInstance33;

children[7] = Anchor32;

}
