let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Riboflavin.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Carbon" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoC"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoC_mat" diffuseColor="0 0 0" shininess="0.8" specularColor="0.29 0.3 0.29"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="0.77"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;C&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "Carbon";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "position";
field5.accessType = "inputOutput";
field5.type = "SFVec3f";
field5.value = "0 0 0";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "Mat";
field6.accessType = "inputOutput";
field6.type = "SFFloat";
field6.value = "0.6";
ProtoInterface4.field[1] = field6;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody7 = browser.currentScene.createNode("ProtoBody");
let Group8 = browser.currentScene.createNode("Group");
let Transform9 = browser.currentScene.createNode("Transform");
Transform9.DEF = "atoC";
let IS10 = browser.currentScene.createNode("IS");
let connect11 = browser.currentScene.createNode("connect");
connect11.nodeField = "translation";
connect11.protoField = "position";
IS10.connect = new MFNode();

IS10.connect[0] = connect11;

Transform9.iS = IS10;

let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.DEF = "atoC_mat";
Material14.diffuseColor = new SFColor(new float[0,0,0]);
Material14.shininess = 0.8;
Material14.specularColor = new SFColor(new float[0.29,0.3,0.29]);
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "transparency";
connect16.protoField = "Mat";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Material14.iS = IS15;

Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Sphere17 = browser.currentScene.createNode("Sphere");
Sphere17.radius = 0.77;
Shape12.geometry = Sphere17;

Transform9.children = new MFNode();

Transform9.children[0] = Shape12;

let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["C"]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.size = 0.8;
Text21.fontStyle = FontStyle22;

Shape18.geometry = Text21;

Transform9.children[1] = Shape18;

Group8.children = new MFNode();

Group8.children[0] = Transform9;

ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = Group8;

ProtoDeclare3.protoBody = ProtoBody7;

browser.currentScene.children[1] = ProtoDeclare3;

let ProtoDeclare23 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Hydrogen" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoH"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoH_mat" ambientIntensity="0.0933" diffuseColor="0.38 0.38 0.42" shininess="0.5" specularColor="0.53 0.53 0.53"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="0.32"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;H&quot;"><FontStyle size="0.4"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare23.name = "Hydrogen";
let ProtoInterface24 = browser.currentScene.createNode("ProtoInterface");
let field25 = browser.currentScene.createNode("field");
field25.name = "position";
field25.accessType = "inputOutput";
field25.type = "SFVec3f";
field25.value = "0 0 0";
ProtoInterface24.field = new MFNode();

ProtoInterface24.field[0] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "Mat";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.value = "0.6";
ProtoInterface24.field[1] = field26;

ProtoDeclare23.protoInterface = ProtoInterface24;

let ProtoBody27 = browser.currentScene.createNode("ProtoBody");
let Group28 = browser.currentScene.createNode("Group");
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "atoH";
let IS30 = browser.currentScene.createNode("IS");
let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "translation";
connect31.protoField = "position";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

Transform29.iS = IS30;

let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.DEF = "atoH_mat";
Material34.ambientIntensity = 0.0933;
Material34.diffuseColor = new SFColor(new float[0.38,0.38,0.42]);
Material34.shininess = 0.5;
Material34.specularColor = new SFColor(new float[0.53,0.53,0.53]);
let IS35 = browser.currentScene.createNode("IS");
let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "transparency";
connect36.protoField = "Mat";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

Material34.iS = IS35;

Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere37 = browser.currentScene.createNode("Sphere");
Sphere37.radius = 0.32;
Shape32.geometry = Sphere37;

Transform29.children = new MFNode();

Transform29.children[0] = Shape32;

let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Text41 = browser.currentScene.createNode("Text");
Text41.string = new MFString(new java.lang.String["H"]);
let FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.size = 0.4;
Text41.fontStyle = FontStyle42;

Shape38.geometry = Text41;

Transform29.children[1] = Shape38;

Group28.children = new MFNode();

Group28.children[0] = Transform29;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Group28;

ProtoDeclare23.protoBody = ProtoBody27;

browser.currentScene.children[2] = ProtoDeclare23;

let ProtoDeclare43 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Nitrogen" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoN"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoN_mat" diffuseColor="0 0 0.72" emissiveColor="0 0 0.13" specularColor="0.5 0.5 0.5"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="0.75"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;N&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare43.name = "Nitrogen";
let ProtoInterface44 = browser.currentScene.createNode("ProtoInterface");
let field45 = browser.currentScene.createNode("field");
field45.name = "position";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.value = "0 0 0";
ProtoInterface44.field = new MFNode();

ProtoInterface44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "Mat";
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.value = "0.6";
ProtoInterface44.field[1] = field46;

ProtoDeclare43.protoInterface = ProtoInterface44;

let ProtoBody47 = browser.currentScene.createNode("ProtoBody");
let Group48 = browser.currentScene.createNode("Group");
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "atoN";
let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "translation";
connect51.protoField = "position";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

Transform49.iS = IS50;

let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.DEF = "atoN_mat";
Material54.diffuseColor = new SFColor(new float[0,0,0.72]);
Material54.emissiveColor = new SFColor(new float[0,0,0.13]);
Material54.specularColor = new SFColor(new float[0.5,0.5,0.5]);
let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "transparency";
connect56.protoField = "Mat";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

Material54.iS = IS55;

Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let Sphere57 = browser.currentScene.createNode("Sphere");
Sphere57.radius = 0.75;
Shape52.geometry = Sphere57;

Transform49.children = new MFNode();

Transform49.children[0] = Shape52;

let Shape58 = browser.currentScene.createNode("Shape");
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

let Text61 = browser.currentScene.createNode("Text");
Text61.string = new MFString(new java.lang.String["N"]);
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.size = 0.8;
Text61.fontStyle = FontStyle62;

Shape58.geometry = Text61;

Transform49.children[1] = Shape58;

Group48.children = new MFNode();

Group48.children[0] = Transform49;

ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Group48;

ProtoDeclare43.protoBody = ProtoBody47;

browser.currentScene.children[3] = ProtoDeclare43;

let ProtoDeclare63 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Oxygen" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoO"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoO_mat" ambientIntensity="0.487" diffuseColor="0.54 0.05 0.25" shininess="0.2" specularColor="0.81 0.77 0.75"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="0.73"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;O&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare63.name = "Oxygen";
let ProtoInterface64 = browser.currentScene.createNode("ProtoInterface");
let field65 = browser.currentScene.createNode("field");
field65.name = "position";
field65.accessType = "inputOutput";
field65.type = "SFVec3f";
field65.value = "0 0 0";
ProtoInterface64.field = new MFNode();

ProtoInterface64.field[0] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "Mat";
field66.accessType = "inputOutput";
field66.type = "SFFloat";
field66.value = "0.6";
ProtoInterface64.field[1] = field66;

ProtoDeclare63.protoInterface = ProtoInterface64;

let ProtoBody67 = browser.currentScene.createNode("ProtoBody");
let Group68 = browser.currentScene.createNode("Group");
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "atoO";
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "translation";
connect71.protoField = "position";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

Transform69.iS = IS70;

let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.DEF = "atoO_mat";
Material74.ambientIntensity = 0.487;
Material74.diffuseColor = new SFColor(new float[0.54,0.05,0.25]);
Material74.shininess = 0.2;
Material74.specularColor = new SFColor(new float[0.81,0.77,0.75]);
let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "transparency";
connect76.protoField = "Mat";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

Material74.iS = IS75;

Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let Sphere77 = browser.currentScene.createNode("Sphere");
Sphere77.radius = 0.73;
Shape72.geometry = Sphere77;

Transform69.children = new MFNode();

Transform69.children[0] = Shape72;

let Shape78 = browser.currentScene.createNode("Shape");
let Appearance79 = browser.currentScene.createNode("Appearance");
let Material80 = browser.currentScene.createNode("Material");
Material80.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

let Text81 = browser.currentScene.createNode("Text");
Text81.string = new MFString(new java.lang.String["O"]);
let FontStyle82 = browser.currentScene.createNode("FontStyle");
FontStyle82.size = 0.8;
Text81.fontStyle = FontStyle82;

Shape78.geometry = Text81;

Transform69.children[1] = Shape78;

Group68.children = new MFNode();

Group68.children[0] = Transform69;

ProtoBody67.children = new MFNode();

ProtoBody67.children[0] = Group68;

ProtoDeclare63.protoBody = ProtoBody67;

browser.currentScene.children[4] = ProtoDeclare63;

let ProtoDeclare83 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Fluorine" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoF"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoF_mat" diffuseColor="1 0.48 0.79" emissiveColor="0.09 0.04 0.07"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="0.72"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;F&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare83.name = "Fluorine";
let ProtoInterface84 = browser.currentScene.createNode("ProtoInterface");
let field85 = browser.currentScene.createNode("field");
field85.name = "position";
field85.accessType = "inputOutput";
field85.type = "SFVec3f";
field85.value = "0 0 0";
ProtoInterface84.field = new MFNode();

ProtoInterface84.field[0] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "Mat";
field86.accessType = "inputOutput";
field86.type = "SFFloat";
field86.value = "0.6";
ProtoInterface84.field[1] = field86;

ProtoDeclare83.protoInterface = ProtoInterface84;

let ProtoBody87 = browser.currentScene.createNode("ProtoBody");
let Group88 = browser.currentScene.createNode("Group");
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.DEF = "atoF";
let IS90 = browser.currentScene.createNode("IS");
let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "translation";
connect91.protoField = "position";
IS90.connect = new MFNode();

IS90.connect[0] = connect91;

Transform89.iS = IS90;

let Shape92 = browser.currentScene.createNode("Shape");
let Appearance93 = browser.currentScene.createNode("Appearance");
let Material94 = browser.currentScene.createNode("Material");
Material94.DEF = "atoF_mat";
Material94.diffuseColor = new SFColor(new float[1,0.48,0.79]);
Material94.emissiveColor = new SFColor(new float[0.09,0.04,0.07]);
let IS95 = browser.currentScene.createNode("IS");
let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "transparency";
connect96.protoField = "Mat";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

Material94.iS = IS95;

Appearance93.material = Material94;

Shape92.appearance = Appearance93;

let Sphere97 = browser.currentScene.createNode("Sphere");
Sphere97.radius = 0.72;
Shape92.geometry = Sphere97;

Transform89.children = new MFNode();

Transform89.children[0] = Shape92;

let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

let Text101 = browser.currentScene.createNode("Text");
Text101.string = new MFString(new java.lang.String["F"]);
let FontStyle102 = browser.currentScene.createNode("FontStyle");
FontStyle102.size = 0.8;
Text101.fontStyle = FontStyle102;

Shape98.geometry = Text101;

Transform89.children[1] = Shape98;

Group88.children = new MFNode();

Group88.children[0] = Transform89;

ProtoBody87.children = new MFNode();

ProtoBody87.children[0] = Group88;

ProtoDeclare83.protoBody = ProtoBody87;

browser.currentScene.children[5] = ProtoDeclare83;

let ProtoDeclare103 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Silicon" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoSi"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoSi_mat" diffuseColor="0.8 0.8 0.8"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.18"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;Si&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare103.name = "Silicon";
let ProtoInterface104 = browser.currentScene.createNode("ProtoInterface");
let field105 = browser.currentScene.createNode("field");
field105.name = "position";
field105.accessType = "inputOutput";
field105.type = "SFVec3f";
field105.value = "0 0 0";
ProtoInterface104.field = new MFNode();

ProtoInterface104.field[0] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "Mat";
field106.accessType = "inputOutput";
field106.type = "SFFloat";
field106.value = "0.6";
ProtoInterface104.field[1] = field106;

ProtoDeclare103.protoInterface = ProtoInterface104;

let ProtoBody107 = browser.currentScene.createNode("ProtoBody");
let Group108 = browser.currentScene.createNode("Group");
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.DEF = "atoSi";
let IS110 = browser.currentScene.createNode("IS");
let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "translation";
connect111.protoField = "position";
IS110.connect = new MFNode();

IS110.connect[0] = connect111;

Transform109.iS = IS110;

let Shape112 = browser.currentScene.createNode("Shape");
let Appearance113 = browser.currentScene.createNode("Appearance");
let Material114 = browser.currentScene.createNode("Material");
Material114.DEF = "atoSi_mat";
Material114.diffuseColor = new SFColor(new float[0.8,0.8,0.8]);
let IS115 = browser.currentScene.createNode("IS");
let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "transparency";
connect116.protoField = "Mat";
IS115.connect = new MFNode();

IS115.connect[0] = connect116;

Material114.iS = IS115;

Appearance113.material = Material114;

Shape112.appearance = Appearance113;

let Sphere117 = browser.currentScene.createNode("Sphere");
Sphere117.radius = 1.18;
Shape112.geometry = Sphere117;

Transform109.children = new MFNode();

Transform109.children[0] = Shape112;

let Shape118 = browser.currentScene.createNode("Shape");
let Appearance119 = browser.currentScene.createNode("Appearance");
let Material120 = browser.currentScene.createNode("Material");
Material120.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

let Text121 = browser.currentScene.createNode("Text");
Text121.string = new MFString(new java.lang.String["Si"]);
let FontStyle122 = browser.currentScene.createNode("FontStyle");
FontStyle122.size = 0.8;
Text121.fontStyle = FontStyle122;

Shape118.geometry = Text121;

Transform109.children[1] = Shape118;

Group108.children = new MFNode();

Group108.children[0] = Transform109;

ProtoBody107.children = new MFNode();

ProtoBody107.children[0] = Group108;

ProtoDeclare103.protoBody = ProtoBody107;

browser.currentScene.children[6] = ProtoDeclare103;

let ProtoDeclare123 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Phosphorus" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoP"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoP_mat" ambientIntensity="0.11" diffuseColor="0.9 0.41 0" emissiveColor="0.1 0.04 0" shininess="0.8" specularColor="0.1 0.1 0.1"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.1"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;P&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare123.name = "Phosphorus";
let ProtoInterface124 = browser.currentScene.createNode("ProtoInterface");
let field125 = browser.currentScene.createNode("field");
field125.name = "position";
field125.accessType = "inputOutput";
field125.type = "SFVec3f";
field125.value = "0 0 0";
ProtoInterface124.field = new MFNode();

ProtoInterface124.field[0] = field125;

let field126 = browser.currentScene.createNode("field");
field126.name = "Mat";
field126.accessType = "inputOutput";
field126.type = "SFFloat";
field126.value = "0.6";
ProtoInterface124.field[1] = field126;

ProtoDeclare123.protoInterface = ProtoInterface124;

let ProtoBody127 = browser.currentScene.createNode("ProtoBody");
let Group128 = browser.currentScene.createNode("Group");
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.DEF = "atoP";
let IS130 = browser.currentScene.createNode("IS");
let connect131 = browser.currentScene.createNode("connect");
connect131.nodeField = "translation";
connect131.protoField = "position";
IS130.connect = new MFNode();

IS130.connect[0] = connect131;

Transform129.iS = IS130;

let Shape132 = browser.currentScene.createNode("Shape");
let Appearance133 = browser.currentScene.createNode("Appearance");
let Material134 = browser.currentScene.createNode("Material");
Material134.DEF = "atoP_mat";
Material134.ambientIntensity = 0.11;
Material134.diffuseColor = new SFColor(new float[0.9,0.41,0]);
Material134.emissiveColor = new SFColor(new float[0.1,0.04,0]);
Material134.shininess = 0.8;
Material134.specularColor = new SFColor(new float[0.1,0.1,0.1]);
let IS135 = browser.currentScene.createNode("IS");
let connect136 = browser.currentScene.createNode("connect");
connect136.nodeField = "transparency";
connect136.protoField = "Mat";
IS135.connect = new MFNode();

IS135.connect[0] = connect136;

Material134.iS = IS135;

Appearance133.material = Material134;

Shape132.appearance = Appearance133;

let Sphere137 = browser.currentScene.createNode("Sphere");
Sphere137.radius = 1.1;
Shape132.geometry = Sphere137;

Transform129.children = new MFNode();

Transform129.children[0] = Shape132;

let Shape138 = browser.currentScene.createNode("Shape");
let Appearance139 = browser.currentScene.createNode("Appearance");
let Material140 = browser.currentScene.createNode("Material");
Material140.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance139.material = Material140;

Shape138.appearance = Appearance139;

let Text141 = browser.currentScene.createNode("Text");
Text141.string = new MFString(new java.lang.String["P"]);
let FontStyle142 = browser.currentScene.createNode("FontStyle");
FontStyle142.size = 0.8;
Text141.fontStyle = FontStyle142;

Shape138.geometry = Text141;

Transform129.children[1] = Shape138;

Group128.children = new MFNode();

Group128.children[0] = Transform129;

ProtoBody127.children = new MFNode();

ProtoBody127.children[0] = Group128;

ProtoDeclare123.protoBody = ProtoBody127;

browser.currentScene.children[7] = ProtoDeclare123;

let ProtoDeclare143 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Sulphur" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoS"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoS_mat" ambientIntensity="0.0467" diffuseColor="0.25 0.39 0.25" emissiveColor="0.05 0.08 0.05" shininess="0.6" specularColor="0.11 0.12 0.08"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.3"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;S&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare143.name = "Sulphur";
let ProtoInterface144 = browser.currentScene.createNode("ProtoInterface");
let field145 = browser.currentScene.createNode("field");
field145.name = "position";
field145.accessType = "inputOutput";
field145.type = "SFVec3f";
field145.value = "0 0 0";
ProtoInterface144.field = new MFNode();

ProtoInterface144.field[0] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "Mat";
field146.accessType = "inputOutput";
field146.type = "SFFloat";
field146.value = "0.6";
ProtoInterface144.field[1] = field146;

ProtoDeclare143.protoInterface = ProtoInterface144;

let ProtoBody147 = browser.currentScene.createNode("ProtoBody");
let Group148 = browser.currentScene.createNode("Group");
let Transform149 = browser.currentScene.createNode("Transform");
Transform149.DEF = "atoS";
let IS150 = browser.currentScene.createNode("IS");
let connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "translation";
connect151.protoField = "position";
IS150.connect = new MFNode();

IS150.connect[0] = connect151;

Transform149.iS = IS150;

let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
let Material154 = browser.currentScene.createNode("Material");
Material154.DEF = "atoS_mat";
Material154.ambientIntensity = 0.0467;
Material154.diffuseColor = new SFColor(new float[0.25,0.39,0.25]);
Material154.emissiveColor = new SFColor(new float[0.05,0.08,0.05]);
Material154.shininess = 0.6;
Material154.specularColor = new SFColor(new float[0.11,0.12,0.08]);
let IS155 = browser.currentScene.createNode("IS");
let connect156 = browser.currentScene.createNode("connect");
connect156.nodeField = "transparency";
connect156.protoField = "Mat";
IS155.connect = new MFNode();

IS155.connect[0] = connect156;

Material154.iS = IS155;

Appearance153.material = Material154;

Shape152.appearance = Appearance153;

let Sphere157 = browser.currentScene.createNode("Sphere");
Sphere157.radius = 1.3;
Shape152.geometry = Sphere157;

Transform149.children = new MFNode();

Transform149.children[0] = Shape152;

let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

let Text161 = browser.currentScene.createNode("Text");
Text161.string = new MFString(new java.lang.String["S"]);
let FontStyle162 = browser.currentScene.createNode("FontStyle");
FontStyle162.size = 0.8;
Text161.fontStyle = FontStyle162;

Shape158.geometry = Text161;

Transform149.children[1] = Shape158;

Group148.children = new MFNode();

Group148.children[0] = Transform149;

ProtoBody147.children = new MFNode();

ProtoBody147.children[0] = Group148;

ProtoDeclare143.protoBody = ProtoBody147;

browser.currentScene.children[8] = ProtoDeclare143;

let ProtoDeclare163 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Chlorine" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoCl"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoCl_mat" diffuseColor="0.28 0.7 0" emissiveColor="0.06 0.15 0" shininess="0.8" specularColor="0.5 0.5 0.5"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.01"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;Cl&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare163.name = "Chlorine";
let ProtoInterface164 = browser.currentScene.createNode("ProtoInterface");
let field165 = browser.currentScene.createNode("field");
field165.name = "position";
field165.accessType = "inputOutput";
field165.type = "SFVec3f";
field165.value = "0 0 0";
ProtoInterface164.field = new MFNode();

ProtoInterface164.field[0] = field165;

let field166 = browser.currentScene.createNode("field");
field166.name = "Mat";
field166.accessType = "inputOutput";
field166.type = "SFFloat";
field166.value = "0.6";
ProtoInterface164.field[1] = field166;

ProtoDeclare163.protoInterface = ProtoInterface164;

let ProtoBody167 = browser.currentScene.createNode("ProtoBody");
let Group168 = browser.currentScene.createNode("Group");
let Transform169 = browser.currentScene.createNode("Transform");
Transform169.DEF = "atoCl";
let IS170 = browser.currentScene.createNode("IS");
let connect171 = browser.currentScene.createNode("connect");
connect171.nodeField = "translation";
connect171.protoField = "position";
IS170.connect = new MFNode();

IS170.connect[0] = connect171;

Transform169.iS = IS170;

let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.DEF = "atoCl_mat";
Material174.diffuseColor = new SFColor(new float[0.28,0.7,0]);
Material174.emissiveColor = new SFColor(new float[0.06,0.15,0]);
Material174.shininess = 0.8;
Material174.specularColor = new SFColor(new float[0.5,0.5,0.5]);
let IS175 = browser.currentScene.createNode("IS");
let connect176 = browser.currentScene.createNode("connect");
connect176.nodeField = "transparency";
connect176.protoField = "Mat";
IS175.connect = new MFNode();

IS175.connect[0] = connect176;

Material174.iS = IS175;

Appearance173.material = Material174;

Shape172.appearance = Appearance173;

let Sphere177 = browser.currentScene.createNode("Sphere");
Sphere177.radius = 1.01;
Shape172.geometry = Sphere177;

Transform169.children = new MFNode();

Transform169.children[0] = Shape172;

let Shape178 = browser.currentScene.createNode("Shape");
let Appearance179 = browser.currentScene.createNode("Appearance");
let Material180 = browser.currentScene.createNode("Material");
Material180.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance179.material = Material180;

Shape178.appearance = Appearance179;

let Text181 = browser.currentScene.createNode("Text");
Text181.string = new MFString(new java.lang.String["Cl"]);
let FontStyle182 = browser.currentScene.createNode("FontStyle");
FontStyle182.size = 0.8;
Text181.fontStyle = FontStyle182;

Shape178.geometry = Text181;

Transform169.children[1] = Shape178;

Group168.children = new MFNode();

Group168.children[0] = Transform169;

ProtoBody167.children = new MFNode();

ProtoBody167.children[0] = Group168;

ProtoDeclare163.protoBody = ProtoBody167;

browser.currentScene.children[9] = ProtoDeclare163;

let ProtoDeclare183 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bromine" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoBr"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoBr_mat" ambientIntensity="0.0833" diffuseColor="0.5 0.3 0.19" emissiveColor="0.12 0.13 0.08" shininess="0.17" specularColor="0.08 0.08 0.05"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.14"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;Br&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare183.name = "Bromine";
let ProtoInterface184 = browser.currentScene.createNode("ProtoInterface");
let field185 = browser.currentScene.createNode("field");
field185.name = "position";
field185.accessType = "inputOutput";
field185.type = "SFVec3f";
field185.value = "0 0 0";
ProtoInterface184.field = new MFNode();

ProtoInterface184.field[0] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "Mat";
field186.accessType = "inputOutput";
field186.type = "SFFloat";
field186.value = "0.6";
ProtoInterface184.field[1] = field186;

ProtoDeclare183.protoInterface = ProtoInterface184;

let ProtoBody187 = browser.currentScene.createNode("ProtoBody");
let Group188 = browser.currentScene.createNode("Group");
let Transform189 = browser.currentScene.createNode("Transform");
Transform189.DEF = "atoBr";
let IS190 = browser.currentScene.createNode("IS");
let connect191 = browser.currentScene.createNode("connect");
connect191.nodeField = "translation";
connect191.protoField = "position";
IS190.connect = new MFNode();

IS190.connect[0] = connect191;

Transform189.iS = IS190;

let Shape192 = browser.currentScene.createNode("Shape");
let Appearance193 = browser.currentScene.createNode("Appearance");
let Material194 = browser.currentScene.createNode("Material");
Material194.DEF = "atoBr_mat";
Material194.ambientIntensity = 0.0833;
Material194.diffuseColor = new SFColor(new float[0.5,0.3,0.19]);
Material194.emissiveColor = new SFColor(new float[0.12,0.13,0.08]);
Material194.shininess = 0.17;
Material194.specularColor = new SFColor(new float[0.08,0.08,0.05]);
let IS195 = browser.currentScene.createNode("IS");
let connect196 = browser.currentScene.createNode("connect");
connect196.nodeField = "transparency";
connect196.protoField = "Mat";
IS195.connect = new MFNode();

IS195.connect[0] = connect196;

Material194.iS = IS195;

Appearance193.material = Material194;

Shape192.appearance = Appearance193;

let Sphere197 = browser.currentScene.createNode("Sphere");
Sphere197.radius = 1.14;
Shape192.geometry = Sphere197;

Transform189.children = new MFNode();

Transform189.children[0] = Shape192;

let Shape198 = browser.currentScene.createNode("Shape");
let Appearance199 = browser.currentScene.createNode("Appearance");
let Material200 = browser.currentScene.createNode("Material");
Material200.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance199.material = Material200;

Shape198.appearance = Appearance199;

let Text201 = browser.currentScene.createNode("Text");
Text201.string = new MFString(new java.lang.String["Br"]);
let FontStyle202 = browser.currentScene.createNode("FontStyle");
FontStyle202.size = 0.8;
Text201.fontStyle = FontStyle202;

Shape198.geometry = Text201;

Transform189.children[1] = Shape198;

Group188.children = new MFNode();

Group188.children[0] = Transform189;

ProtoBody187.children = new MFNode();

ProtoBody187.children[0] = Group188;

ProtoDeclare183.protoBody = ProtoBody187;

browser.currentScene.children[10] = ProtoDeclare183;

let ProtoDeclare203 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Iodine" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="atoI"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="atoI_mat" diffuseColor="0.56 0.37 0.74" emissiveColor="0.15 0.1 0.2" shininess="0.09" specularColor="0.12 0.12 0.12"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.33"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;I&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare203.name = "Iodine";
let ProtoInterface204 = browser.currentScene.createNode("ProtoInterface");
let field205 = browser.currentScene.createNode("field");
field205.name = "position";
field205.accessType = "inputOutput";
field205.type = "SFVec3f";
field205.value = "0 0 0";
ProtoInterface204.field = new MFNode();

ProtoInterface204.field[0] = field205;

let field206 = browser.currentScene.createNode("field");
field206.name = "Mat";
field206.accessType = "inputOutput";
field206.type = "SFFloat";
field206.value = "0.6";
ProtoInterface204.field[1] = field206;

ProtoDeclare203.protoInterface = ProtoInterface204;

let ProtoBody207 = browser.currentScene.createNode("ProtoBody");
let Group208 = browser.currentScene.createNode("Group");
let Transform209 = browser.currentScene.createNode("Transform");
Transform209.DEF = "atoI";
let IS210 = browser.currentScene.createNode("IS");
let connect211 = browser.currentScene.createNode("connect");
connect211.nodeField = "translation";
connect211.protoField = "position";
IS210.connect = new MFNode();

IS210.connect[0] = connect211;

Transform209.iS = IS210;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.DEF = "atoI_mat";
Material214.diffuseColor = new SFColor(new float[0.56,0.37,0.74]);
Material214.emissiveColor = new SFColor(new float[0.15,0.1,0.2]);
Material214.shininess = 0.09;
Material214.specularColor = new SFColor(new float[0.12,0.12,0.12]);
let IS215 = browser.currentScene.createNode("IS");
let connect216 = browser.currentScene.createNode("connect");
connect216.nodeField = "transparency";
connect216.protoField = "Mat";
IS215.connect = new MFNode();

IS215.connect[0] = connect216;

Material214.iS = IS215;

Appearance213.material = Material214;

Shape212.appearance = Appearance213;

let Sphere217 = browser.currentScene.createNode("Sphere");
Sphere217.radius = 1.33;
Shape212.geometry = Sphere217;

Transform209.children = new MFNode();

Transform209.children[0] = Shape212;

let Shape218 = browser.currentScene.createNode("Shape");
let Appearance219 = browser.currentScene.createNode("Appearance");
let Material220 = browser.currentScene.createNode("Material");
Material220.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance219.material = Material220;

Shape218.appearance = Appearance219;

let Text221 = browser.currentScene.createNode("Text");
Text221.string = new MFString(new java.lang.String["I"]);
let FontStyle222 = browser.currentScene.createNode("FontStyle");
FontStyle222.size = 0.8;
Text221.fontStyle = FontStyle222;

Shape218.geometry = Text221;

Transform209.children[1] = Shape218;

Group208.children = new MFNode();

Group208.children[0] = Transform209;

ProtoBody207.children = new MFNode();

ProtoBody207.children[0] = Group208;

ProtoDeclare203.protoBody = ProtoBody207;

browser.currentScene.children[11] = ProtoDeclare203;

let ProtoDeclare223 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="unknown" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="Mat" accessType="inputOutput" type="SFFloat" value="0.6"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="ato_"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance><Material DEF="ato__mat" diffuseColor="1 1 1" emissiveColor="0.15 0.1 0.2" shininess="0.09" specularColor="0.12 0.12 0.12"><IS><connect nodeField="transparency" protoField="Mat"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.001"></Sphere>
</Shape>
<Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" string="&quot;?&quot;"><FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare223.name = "unknown";
let ProtoInterface224 = browser.currentScene.createNode("ProtoInterface");
let field225 = browser.currentScene.createNode("field");
field225.name = "position";
field225.accessType = "inputOutput";
field225.type = "SFVec3f";
field225.value = "0 0 0";
ProtoInterface224.field = new MFNode();

ProtoInterface224.field[0] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "Mat";
field226.accessType = "inputOutput";
field226.type = "SFFloat";
field226.value = "0.6";
ProtoInterface224.field[1] = field226;

ProtoDeclare223.protoInterface = ProtoInterface224;

let ProtoBody227 = browser.currentScene.createNode("ProtoBody");
let Group228 = browser.currentScene.createNode("Group");
let Transform229 = browser.currentScene.createNode("Transform");
Transform229.DEF = "ato_";
let IS230 = browser.currentScene.createNode("IS");
let connect231 = browser.currentScene.createNode("connect");
connect231.nodeField = "translation";
connect231.protoField = "position";
IS230.connect = new MFNode();

IS230.connect[0] = connect231;

Transform229.iS = IS230;

let Shape232 = browser.currentScene.createNode("Shape");
let Appearance233 = browser.currentScene.createNode("Appearance");
let Material234 = browser.currentScene.createNode("Material");
Material234.DEF = "ato__mat";
Material234.diffuseColor = new SFColor(new float[1,1,1]);
Material234.emissiveColor = new SFColor(new float[0.15,0.1,0.2]);
Material234.shininess = 0.09;
Material234.specularColor = new SFColor(new float[0.12,0.12,0.12]);
let IS235 = browser.currentScene.createNode("IS");
let connect236 = browser.currentScene.createNode("connect");
connect236.nodeField = "transparency";
connect236.protoField = "Mat";
IS235.connect = new MFNode();

IS235.connect[0] = connect236;

Material234.iS = IS235;

Appearance233.material = Material234;

Shape232.appearance = Appearance233;

let Sphere237 = browser.currentScene.createNode("Sphere");
Sphere237.radius = 1.001;
Shape232.geometry = Sphere237;

Transform229.children = new MFNode();

Transform229.children[0] = Shape232;

let Shape238 = browser.currentScene.createNode("Shape");
let Appearance239 = browser.currentScene.createNode("Appearance");
let Material240 = browser.currentScene.createNode("Material");
Material240.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

let Text241 = browser.currentScene.createNode("Text");
Text241.string = new MFString(new java.lang.String["?"]);
let FontStyle242 = browser.currentScene.createNode("FontStyle");
FontStyle242.size = 0.8;
Text241.fontStyle = FontStyle242;

Shape238.geometry = Text241;

Transform229.children[1] = Shape238;

Group228.children = new MFNode();

Group228.children[0] = Transform229;

ProtoBody227.children = new MFNode();

ProtoBody227.children[0] = Group228;

ProtoDeclare223.protoBody = ProtoBody227;

browser.currentScene.children[12] = ProtoDeclare223;

let ProtoDeclare243 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="line" ><ProtoInterface><field name="bond_set" accessType="inputOutput" type="MFVec3f" value="-1 0 0 1 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Appearance><Material diffuseColor="1 1 1" emissiveColor="1 1 1"></Material>
</Appearance>
<IndexedLineSet containerField="geometry" coordIndex="0 1 -1"><Coordinate containerField="coord" DEF="bondo"><IS><connect nodeField="point" protoField="bond_set"></connect>
</IS>
</Coordinate>
</IndexedLineSet>
</Shape>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare243.name = "line";
let ProtoInterface244 = browser.currentScene.createNode("ProtoInterface");
let field245 = browser.currentScene.createNode("field");
field245.name = "bond_set";
field245.accessType = "inputOutput";
field245.type = "MFVec3f";
field245.value = "-1 0 0 1 0 0";
ProtoInterface244.field = new MFNode();

ProtoInterface244.field[0] = field245;

ProtoDeclare243.protoInterface = ProtoInterface244;

let ProtoBody246 = browser.currentScene.createNode("ProtoBody");
let Group247 = browser.currentScene.createNode("Group");
let Shape248 = browser.currentScene.createNode("Shape");
let Appearance249 = browser.currentScene.createNode("Appearance");
let Material250 = browser.currentScene.createNode("Material");
Material250.diffuseColor = new SFColor(new float[1,1,1]);
Material250.emissiveColor = new SFColor(new float[1,1,1]);
Appearance249.material = Material250;

Shape248.appearance = Appearance249;

let IndexedLineSet251 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet251.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.DEF = "bondo";
let IS253 = browser.currentScene.createNode("IS");
let connect254 = browser.currentScene.createNode("connect");
connect254.nodeField = "point";
connect254.protoField = "bond_set";
IS253.connect = new MFNode();

IS253.connect[0] = connect254;

Coordinate252.iS = IS253;

IndexedLineSet251.coord = Coordinate252;

Shape248.geometry = IndexedLineSet251;

Group247.children = new MFNode();

Group247.children[0] = Shape248;

ProtoBody246.children = new MFNode();

ProtoBody246.children[0] = Group247;

ProtoDeclare243.protoBody = ProtoBody246;

browser.currentScene.children[13] = ProtoDeclare243;

let ProtoDeclare255 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="title_text" ><ProtoInterface><field name="txt" accessType="inputOutput" type="MFString"></field>
</ProtoInterface>
<ProtoBody><Transform><Group><Transform><Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" DEF="cmpd_name"><IS><connect nodeField="string" protoField="txt"></connect>
</IS>
<FontStyle></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare255.name = "title_text";
let ProtoInterface256 = browser.currentScene.createNode("ProtoInterface");
let field257 = browser.currentScene.createNode("field");
field257.name = "txt";
field257.accessType = "inputOutput";
field257.type = "MFString";
ProtoInterface256.field = new MFNode();

ProtoInterface256.field[0] = field257;

ProtoDeclare255.protoInterface = ProtoInterface256;

let ProtoBody258 = browser.currentScene.createNode("ProtoBody");
let Transform259 = browser.currentScene.createNode("Transform");
let Group260 = browser.currentScene.createNode("Group");
let Transform261 = browser.currentScene.createNode("Transform");
let Shape262 = browser.currentScene.createNode("Shape");
let Appearance263 = browser.currentScene.createNode("Appearance");
let Material264 = browser.currentScene.createNode("Material");
Material264.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance263.material = Material264;

Shape262.appearance = Appearance263;

let Text265 = browser.currentScene.createNode("Text");
Text265.DEF = "cmpd_name";
let IS266 = browser.currentScene.createNode("IS");
let connect267 = browser.currentScene.createNode("connect");
connect267.nodeField = "string";
connect267.protoField = "txt";
IS266.connect = new MFNode();

IS266.connect[0] = connect267;

Text265.iS = IS266;

let FontStyle268 = browser.currentScene.createNode("FontStyle");
Text265.fontStyle = FontStyle268;

Shape262.geometry = Text265;

Transform261.children = new MFNode();

Transform261.children[0] = Shape262;

Group260.children = new MFNode();

Group260.children[0] = Transform261;

Transform259.children = new MFNode();

Transform259.children[0] = Group260;

ProtoBody258.children = new MFNode();

ProtoBody258.children[0] = Transform259;

ProtoDeclare255.protoBody = ProtoBody258;

browser.currentScene.children[14] = ProtoDeclare255;

let ProtoDeclare269 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ano1_text" ><ProtoInterface><field name="txt" accessType="inputOutput" type="MFString"></field>
</ProtoInterface>
<ProtoBody><Transform><Group><Transform><Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" DEF="cmpd_name1"><IS><connect nodeField="string" protoField="txt"></connect>
</IS>
<FontStyle size="0.8"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare269.name = "ano1_text";
let ProtoInterface270 = browser.currentScene.createNode("ProtoInterface");
let field271 = browser.currentScene.createNode("field");
field271.name = "txt";
field271.accessType = "inputOutput";
field271.type = "MFString";
ProtoInterface270.field = new MFNode();

ProtoInterface270.field[0] = field271;

ProtoDeclare269.protoInterface = ProtoInterface270;

let ProtoBody272 = browser.currentScene.createNode("ProtoBody");
let Transform273 = browser.currentScene.createNode("Transform");
let Group274 = browser.currentScene.createNode("Group");
let Transform275 = browser.currentScene.createNode("Transform");
let Shape276 = browser.currentScene.createNode("Shape");
let Appearance277 = browser.currentScene.createNode("Appearance");
let Material278 = browser.currentScene.createNode("Material");
Material278.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance277.material = Material278;

Shape276.appearance = Appearance277;

let Text279 = browser.currentScene.createNode("Text");
Text279.DEF = "cmpd_name1";
let IS280 = browser.currentScene.createNode("IS");
let connect281 = browser.currentScene.createNode("connect");
connect281.nodeField = "string";
connect281.protoField = "txt";
IS280.connect = new MFNode();

IS280.connect[0] = connect281;

Text279.iS = IS280;

let FontStyle282 = browser.currentScene.createNode("FontStyle");
FontStyle282.size = 0.8;
Text279.fontStyle = FontStyle282;

Shape276.geometry = Text279;

Transform275.children = new MFNode();

Transform275.children[0] = Shape276;

Group274.children = new MFNode();

Group274.children[0] = Transform275;

Transform273.children = new MFNode();

Transform273.children[0] = Group274;

ProtoBody272.children = new MFNode();

ProtoBody272.children[0] = Transform273;

ProtoDeclare269.protoBody = ProtoBody272;

browser.currentScene.children[15] = ProtoDeclare269;

let ProtoDeclare283 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ano2_text" ><ProtoInterface><field name="txt" accessType="inputOutput" type="MFString"></field>
</ProtoInterface>
<ProtoBody><Transform><Group><Transform><Shape><Appearance><Material diffuseColor="0.9 0.9 0.9"></Material>
</Appearance>
<Text containerField="geometry" DEF="cmpd_name2"><IS><connect nodeField="string" protoField="txt"></connect>
</IS>
<FontStyle size="0.6"></FontStyle>
</Text>
</Shape>
</Transform>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare283.name = "ano2_text";
let ProtoInterface284 = browser.currentScene.createNode("ProtoInterface");
let field285 = browser.currentScene.createNode("field");
field285.name = "txt";
field285.accessType = "inputOutput";
field285.type = "MFString";
ProtoInterface284.field = new MFNode();

ProtoInterface284.field[0] = field285;

ProtoDeclare283.protoInterface = ProtoInterface284;

let ProtoBody286 = browser.currentScene.createNode("ProtoBody");
let Transform287 = browser.currentScene.createNode("Transform");
let Group288 = browser.currentScene.createNode("Group");
let Transform289 = browser.currentScene.createNode("Transform");
let Shape290 = browser.currentScene.createNode("Shape");
let Appearance291 = browser.currentScene.createNode("Appearance");
let Material292 = browser.currentScene.createNode("Material");
Material292.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance291.material = Material292;

Shape290.appearance = Appearance291;

let Text293 = browser.currentScene.createNode("Text");
Text293.DEF = "cmpd_name2";
let IS294 = browser.currentScene.createNode("IS");
let connect295 = browser.currentScene.createNode("connect");
connect295.nodeField = "string";
connect295.protoField = "txt";
IS294.connect = new MFNode();

IS294.connect[0] = connect295;

Text293.iS = IS294;

let FontStyle296 = browser.currentScene.createNode("FontStyle");
FontStyle296.size = 0.6;
Text293.fontStyle = FontStyle296;

Shape290.geometry = Text293;

Transform289.children = new MFNode();

Transform289.children[0] = Shape290;

Group288.children = new MFNode();

Group288.children[0] = Transform289;

Transform287.children = new MFNode();

Transform287.children[0] = Group288;

ProtoBody286.children = new MFNode();

ProtoBody286.children[0] = Transform287;

ProtoDeclare283.protoBody = ProtoBody286;

browser.currentScene.children[16] = ProtoDeclare283;

let Background297 = browser.currentScene.createNode("Background");
Background297.groundAngle = new MFFloat(new float[1.309,1.570796]);
Background297.groundColor = new MFColor(new float[0,0.5,0.7,0,0.4,0.7,0.6,0.5,0.7]);
Background297.skyAngle = new MFFloat(new float[1.309,1.570796]);
Background297.skyColor = new MFColor(new float[0,0.5,0.8,0,0.6,0.7,0.6,0.6,0.7]);
browser.currentScene.children[17] = Background297;

let PointLight298 = browser.currentScene.createNode("PointLight");
PointLight298.ambientIntensity = 1;
PointLight298.location = new SFVec3f(new float[0,0,5]);
PointLight298.radius = 30;
browser.currentScene.children[18] = PointLight298;

let NavigationInfo299 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo299.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[19] = NavigationInfo299;

let Viewpoint300 = browser.currentScene.createNode("Viewpoint");
Viewpoint300.description = "Inspect Riboflavin";
Viewpoint300.position = new SFVec3f(new float[0,2,20]);
browser.currentScene.children[20] = Viewpoint300;

//CML document - riboflavin - karne - 7/8/00
//file converted from: MDL .mol
let Transform301 = browser.currentScene.createNode("Transform");
Transform301.DEF = "infogroupa";
Transform301.translation = new SFVec3f(new float[-8,2,-4]);
let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new SFVec3f(new float[0,6,0]);
let Viewpoint303 = browser.currentScene.createNode("Viewpoint");
Viewpoint303.description = "title billboard";
Viewpoint303.position = new SFVec3f(new float[6,-2,10]);
Transform302.children = new MFNode();

Transform302.children[0] = Viewpoint303;

let ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "title_text";
let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "txt";
fieldValue305.value = "\"Riboflavin: \"";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

Transform302.children[1] = ProtoInstance304;

Transform301.children = new MFNode();

Transform301.children[0] = Transform302;

browser.currentScene.children[21] = Transform301;

let Group306 = browser.currentScene.createNode("Group");
let Transform307 = browser.currentScene.createNode("Transform");
let ProtoInstance308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance308.name = "Carbon";
ProtoInstance308.DEF = "riboflavin_karne_a_1";
let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "position";
fieldValue309.value = "-4.72 -3.788 -0.212";
ProtoInstance308.fieldValue = new MFNode();

ProtoInstance308.fieldValue[0] = fieldValue309;

Transform307.children = new MFNode();

Transform307.children[0] = ProtoInstance308;

Group306.children = new MFNode();

Group306.children[0] = Transform307;

let Transform310 = browser.currentScene.createNode("Transform");
let ProtoInstance311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance311.name = "Carbon";
ProtoInstance311.DEF = "riboflavin_karne_a_2";
let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "position";
fieldValue312.value = "-4.436 -0.848 0.256";
ProtoInstance311.fieldValue = new MFNode();

ProtoInstance311.fieldValue[0] = fieldValue312;

Transform310.children = new MFNode();

Transform310.children[0] = ProtoInstance311;

Group306.children[1] = Transform310;

let Transform313 = browser.currentScene.createNode("Transform");
let ProtoInstance314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance314.name = "Oxygen";
ProtoInstance314.DEF = "riboflavin_karne_a_3";
let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "position";
fieldValue315.value = "4.912 -2.612 1.444";
ProtoInstance314.fieldValue = new MFNode();

ProtoInstance314.fieldValue[0] = fieldValue315;

Transform313.children = new MFNode();

Transform313.children[0] = ProtoInstance314;

Group306.children[2] = Transform313;

let Transform316 = browser.currentScene.createNode("Transform");
let ProtoInstance317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance317.name = "Carbon";
ProtoInstance317.DEF = "riboflavin_karne_a_4";
let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "position";
fieldValue318.value = "1.52 4.612 -0.416";
ProtoInstance317.fieldValue = new MFNode();

ProtoInstance317.fieldValue[0] = fieldValue318;

Transform316.children = new MFNode();

Transform316.children[0] = ProtoInstance317;

Group306.children[3] = Transform316;

let Transform319 = browser.currentScene.createNode("Transform");
let ProtoInstance320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance320.name = "Carbon";
ProtoInstance320.DEF = "riboflavin_karne_a_5";
let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "position";
fieldValue321.value = "1.876 3.12 -0.536";
ProtoInstance320.fieldValue = new MFNode();

ProtoInstance320.fieldValue[0] = fieldValue321;

Transform319.children = new MFNode();

Transform319.children[0] = ProtoInstance320;

Group306.children[4] = Transform319;

let Transform322 = browser.currentScene.createNode("Transform");
let ProtoInstance323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance323.name = "Carbon";
ProtoInstance323.DEF = "riboflavin_karne_a_6";
let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "position";
fieldValue324.value = "1.172 2.224 0.516";
ProtoInstance323.fieldValue = new MFNode();

ProtoInstance323.fieldValue[0] = fieldValue324;

Transform322.children = new MFNode();

Transform322.children[0] = ProtoInstance323;

Group306.children[5] = Transform322;

let Transform325 = browser.currentScene.createNode("Transform");
let ProtoInstance326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance326.name = "Carbon";
ProtoInstance326.DEF = "riboflavin_karne_a_7";
let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "position";
fieldValue327.value = "1.228 0.712 0.188";
ProtoInstance326.fieldValue = new MFNode();

ProtoInstance326.fieldValue[0] = fieldValue327;

Transform325.children = new MFNode();

Transform325.children[0] = ProtoInstance326;

Group306.children[6] = Transform325;

let Transform328 = browser.currentScene.createNode("Transform");
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Carbon";
ProtoInstance329.DEF = "riboflavin_karne_a_8";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "position";
fieldValue330.value = "0.732 -0.164 1.364";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

Transform328.children = new MFNode();

Transform328.children[0] = ProtoInstance329;

Group306.children[7] = Transform328;

let Transform331 = browser.currentScene.createNode("Transform");
let ProtoInstance332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance332.name = "Nitrogen";
ProtoInstance332.DEF = "riboflavin_karne_a_9";
let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "position";
fieldValue333.value = "2.692 -2.156 1.204";
ProtoInstance332.fieldValue = new MFNode();

ProtoInstance332.fieldValue[0] = fieldValue333;

Transform331.children = new MFNode();

Transform331.children[0] = ProtoInstance332;

Group306.children[8] = Transform331;

let Transform334 = browser.currentScene.createNode("Transform");
let ProtoInstance335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance335.name = "Carbon";
ProtoInstance335.DEF = "riboflavin_karne_a_10";
let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "position";
fieldValue336.value = "3.816 -3.044 1.176";
ProtoInstance335.fieldValue = new MFNode();

ProtoInstance335.fieldValue[0] = fieldValue336;

Transform334.children = new MFNode();

Transform334.children[0] = ProtoInstance335;

Group306.children[9] = Transform334;

let Transform337 = browser.currentScene.createNode("Transform");
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Nitrogen";
ProtoInstance338.DEF = "riboflavin_karne_a_11";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "position";
fieldValue339.value = "3.54 -4.356 0.828";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

Transform337.children = new MFNode();

Transform337.children[0] = ProtoInstance338;

Group306.children[10] = Transform337;

let Transform340 = browser.currentScene.createNode("Transform");
let ProtoInstance341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance341.name = "Carbon";
ProtoInstance341.DEF = "riboflavin_karne_a_12";
let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "position";
fieldValue342.value = "2.236 -4.764 0.532";
ProtoInstance341.fieldValue = new MFNode();

ProtoInstance341.fieldValue[0] = fieldValue342;

Transform340.children = new MFNode();

Transform340.children[0] = ProtoInstance341;

Group306.children[11] = Transform340;

let Transform343 = browser.currentScene.createNode("Transform");
let ProtoInstance344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance344.name = "Nitrogen";
ProtoInstance344.DEF = "riboflavin_karne_a_13";
let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "position";
fieldValue345.value = "0.024 -4.256 0.316";
ProtoInstance344.fieldValue = new MFNode();

ProtoInstance344.fieldValue[0] = fieldValue345;

Transform343.children = new MFNode();

Transform343.children[0] = ProtoInstance344;

Group306.children[12] = Transform343;

let Transform346 = browser.currentScene.createNode("Transform");
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Carbon";
ProtoInstance347.DEF = "riboflavin_karne_a_14";
let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "position";
fieldValue348.value = "1.208 -3.86 0.584";
ProtoInstance347.fieldValue = new MFNode();

ProtoInstance347.fieldValue[0] = fieldValue348;

Transform346.children = new MFNode();

Transform346.children[0] = ProtoInstance347;

Group306.children[13] = Transform346;

let Transform349 = browser.currentScene.createNode("Transform");
let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "Carbon";
ProtoInstance350.DEF = "riboflavin_karne_a_15";
let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "position";
fieldValue351.value = "1.5 -2.528 0.928";
ProtoInstance350.fieldValue = new MFNode();

ProtoInstance350.fieldValue[0] = fieldValue351;

Transform349.children = new MFNode();

Transform349.children[0] = ProtoInstance350;

Group306.children[14] = Transform349;

let Transform352 = browser.currentScene.createNode("Transform");
let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.name = "Nitrogen";
ProtoInstance353.DEF = "riboflavin_karne_a_16";
let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "position";
fieldValue354.value = "0.452 -1.552 0.984";
ProtoInstance353.fieldValue = new MFNode();

ProtoInstance353.fieldValue[0] = fieldValue354;

Transform352.children = new MFNode();

Transform352.children[0] = ProtoInstance353;

Group306.children[15] = Transform352;

let Transform355 = browser.currentScene.createNode("Transform");
let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Carbon";
ProtoInstance356.DEF = "riboflavin_karne_a_17";
let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "position";
fieldValue357.value = "-1.968 -1.256 0.596";
ProtoInstance356.fieldValue = new MFNode();

ProtoInstance356.fieldValue[0] = fieldValue357;

Transform355.children = new MFNode();

Transform355.children[0] = ProtoInstance356;

Group306.children[16] = Transform355;

let Transform358 = browser.currentScene.createNode("Transform");
let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.name = "Carbon";
ProtoInstance359.DEF = "riboflavin_karne_a_18";
let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "position";
fieldValue360.value = "-0.828 -2.08 0.644";
ProtoInstance359.fieldValue = new MFNode();

ProtoInstance359.fieldValue[0] = fieldValue360;

Transform358.children = new MFNode();

Transform358.children[0] = ProtoInstance359;

Group306.children[17] = Transform358;

let Transform361 = browser.currentScene.createNode("Transform");
let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.name = "Carbon";
ProtoInstance362.DEF = "riboflavin_karne_a_19";
let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "position";
fieldValue363.value = "-0.96 -3.448 0.34";
ProtoInstance362.fieldValue = new MFNode();

ProtoInstance362.fieldValue[0] = fieldValue363;

Transform361.children = new MFNode();

Transform361.children[0] = ProtoInstance362;

Group306.children[18] = Transform361;

let Transform364 = browser.currentScene.createNode("Transform");
let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.name = "Carbon";
ProtoInstance365.DEF = "riboflavin_karne_a_20";
let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "position";
fieldValue366.value = "-2.232 -3.968 0.056";
ProtoInstance365.fieldValue = new MFNode();

ProtoInstance365.fieldValue[0] = fieldValue366;

Transform364.children = new MFNode();

Transform364.children[0] = ProtoInstance365;

Group306.children[19] = Transform364;

let Transform367 = browser.currentScene.createNode("Transform");
let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.name = "Carbon";
ProtoInstance368.DEF = "riboflavin_karne_a_21";
let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "position";
fieldValue369.value = "-3.38 -3.16 0.056";
ProtoInstance368.fieldValue = new MFNode();

ProtoInstance368.fieldValue[0] = fieldValue369;

Transform367.children = new MFNode();

Transform367.children[0] = ProtoInstance368;

Group306.children[20] = Transform367;

let Transform370 = browser.currentScene.createNode("Transform");
let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.name = "Carbon";
ProtoInstance371.DEF = "riboflavin_karne_a_22";
let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "position";
fieldValue372.value = "-3.244 -1.776 0.3";
ProtoInstance371.fieldValue = new MFNode();

ProtoInstance371.fieldValue[0] = fieldValue372;

Transform370.children = new MFNode();

Transform370.children[0] = ProtoInstance371;

Group306.children[21] = Transform370;

let Transform373 = browser.currentScene.createNode("Transform");
let ProtoInstance374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance374.name = "Hydrogen";
ProtoInstance374.DEF = "riboflavin_karne_a_23";
let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "position";
fieldValue375.value = "-4.656 -4.896 -0.268";
ProtoInstance374.fieldValue = new MFNode();

ProtoInstance374.fieldValue[0] = fieldValue375;

Transform373.children = new MFNode();

Transform373.children[0] = ProtoInstance374;

Group306.children[22] = Transform373;

let Transform376 = browser.currentScene.createNode("Transform");
let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Hydrogen";
ProtoInstance377.DEF = "riboflavin_karne_a_24";
let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "position";
fieldValue378.value = "-5.14 -3.432 -1.18";
ProtoInstance377.fieldValue = new MFNode();

ProtoInstance377.fieldValue[0] = fieldValue378;

Transform376.children = new MFNode();

Transform376.children[0] = ProtoInstance377;

Group306.children[23] = Transform376;

let Transform379 = browser.currentScene.createNode("Transform");
let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.name = "Hydrogen";
ProtoInstance380.DEF = "riboflavin_karne_a_25";
let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "position";
fieldValue381.value = "-5.448 -3.54 0.592";
ProtoInstance380.fieldValue = new MFNode();

ProtoInstance380.fieldValue[0] = fieldValue381;

Transform379.children = new MFNode();

Transform379.children[0] = ProtoInstance380;

Group306.children[24] = Transform379;

let Transform382 = browser.currentScene.createNode("Transform");
let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.name = "Hydrogen";
ProtoInstance383.DEF = "riboflavin_karne_a_26";
let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "position";
fieldValue384.value = "-5.04 -1.008 -0.66";
ProtoInstance383.fieldValue = new MFNode();

ProtoInstance383.fieldValue[0] = fieldValue384;

Transform382.children = new MFNode();

Transform382.children[0] = ProtoInstance383;

Group306.children[25] = Transform382;

let Transform385 = browser.currentScene.createNode("Transform");
let ProtoInstance386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance386.name = "Hydrogen";
ProtoInstance386.DEF = "riboflavin_karne_a_27";
let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "position";
fieldValue387.value = "-4.136 0.22 0.252";
ProtoInstance386.fieldValue = new MFNode();

ProtoInstance386.fieldValue[0] = fieldValue387;

Transform385.children = new MFNode();

Transform385.children[0] = ProtoInstance386;

Group306.children[26] = Transform385;

let Transform388 = browser.currentScene.createNode("Transform");
let ProtoInstance389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance389.name = "Hydrogen";
ProtoInstance389.DEF = "riboflavin_karne_a_28";
let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "position";
fieldValue390.value = "-5.108 -0.996 1.132";
ProtoInstance389.fieldValue = new MFNode();

ProtoInstance389.fieldValue[0] = fieldValue390;

Transform388.children = new MFNode();

Transform388.children[0] = ProtoInstance389;

Group306.children[27] = Transform388;

let Transform391 = browser.currentScene.createNode("Transform");
let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.name = "Hydrogen";
ProtoInstance392.DEF = "riboflavin_karne_a_29";
let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "position";
fieldValue393.value = "2.204 5.22 -1.048";
ProtoInstance392.fieldValue = new MFNode();

ProtoInstance392.fieldValue[0] = fieldValue393;

Transform391.children = new MFNode();

Transform391.children[0] = ProtoInstance392;

Group306.children[28] = Transform391;

let Transform394 = browser.currentScene.createNode("Transform");
let ProtoInstance395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance395.name = "Hydrogen";
ProtoInstance395.DEF = "riboflavin_karne_a_30";
let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "position";
fieldValue396.value = "1.632 4.984 0.628";
ProtoInstance395.fieldValue = new MFNode();

ProtoInstance395.fieldValue[0] = fieldValue396;

Transform394.children = new MFNode();

Transform394.children[0] = ProtoInstance395;

Group306.children[29] = Transform394;

let Transform397 = browser.currentScene.createNode("Transform");
let ProtoInstance398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance398.name = "Oxygen";
ProtoInstance398.DEF = "riboflavin_karne_a_31";
let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "position";
fieldValue399.value = "0.196 4.816 -0.88";
ProtoInstance398.fieldValue = new MFNode();

ProtoInstance398.fieldValue[0] = fieldValue399;

Transform397.children = new MFNode();

Transform397.children[0] = ProtoInstance398;

Group306.children[30] = Transform397;

let Transform400 = browser.currentScene.createNode("Transform");
let ProtoInstance401 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance401.name = "Hydrogen";
ProtoInstance401.DEF = "riboflavin_karne_a_32";
let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "position";
fieldValue402.value = "1.48 -0.132 2.188";
ProtoInstance401.fieldValue = new MFNode();

ProtoInstance401.fieldValue[0] = fieldValue402;

Transform400.children = new MFNode();

Transform400.children[0] = ProtoInstance401;

Group306.children[31] = Transform400;

let Transform403 = browser.currentScene.createNode("Transform");
let ProtoInstance404 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance404.name = "Hydrogen";
ProtoInstance404.DEF = "riboflavin_karne_a_33";
let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "position";
fieldValue405.value = "-0.168 0.304 1.808";
ProtoInstance404.fieldValue = new MFNode();

ProtoInstance404.fieldValue[0] = fieldValue405;

Transform403.children = new MFNode();

Transform403.children[0] = ProtoInstance404;

Group306.children[32] = Transform403;

let Transform406 = browser.currentScene.createNode("Transform");
let ProtoInstance407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance407.name = "Hydrogen";
ProtoInstance407.DEF = "riboflavin_karne_a_34";
let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "position";
fieldValue408.value = "-1.884 -0.18 0.792";
ProtoInstance407.fieldValue = new MFNode();

ProtoInstance407.fieldValue[0] = fieldValue408;

Transform406.children = new MFNode();

Transform406.children[0] = ProtoInstance407;

Group306.children[33] = Transform406;

let Transform409 = browser.currentScene.createNode("Transform");
let ProtoInstance410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance410.name = "Hydrogen";
ProtoInstance410.DEF = "riboflavin_karne_a_35";
let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "position";
fieldValue411.value = "-2.336 -5.044 -0.168";
ProtoInstance410.fieldValue = new MFNode();

ProtoInstance410.fieldValue[0] = fieldValue411;

Transform409.children = new MFNode();

Transform409.children[0] = ProtoInstance410;

Group306.children[34] = Transform409;

let Transform412 = browser.currentScene.createNode("Transform");
let ProtoInstance413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance413.name = "Hydrogen";
ProtoInstance413.DEF = "riboflavin_karne_a_36";
let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "position";
fieldValue414.value = "0.576 0.528 -0.696";
ProtoInstance413.fieldValue = new MFNode();

ProtoInstance413.fieldValue[0] = fieldValue414;

Transform412.children = new MFNode();

Transform412.children[0] = ProtoInstance413;

Group306.children[35] = Transform412;

let Transform415 = browser.currentScene.createNode("Transform");
let ProtoInstance416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance416.name = "Oxygen";
ProtoInstance416.DEF = "riboflavin_karne_a_37";
let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "position";
fieldValue417.value = "2.56 0.356 -0.148";
ProtoInstance416.fieldValue = new MFNode();

ProtoInstance416.fieldValue[0] = fieldValue417;

Transform415.children = new MFNode();

Transform415.children[0] = ProtoInstance416;

Group306.children[36] = Transform415;

let Transform418 = browser.currentScene.createNode("Transform");
let ProtoInstance419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance419.name = "Oxygen";
ProtoInstance419.DEF = "riboflavin_karne_a_38";
let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "position";
fieldValue420.value = "1.756 2.42 1.796";
ProtoInstance419.fieldValue = new MFNode();

ProtoInstance419.fieldValue[0] = fieldValue420;

Transform418.children = new MFNode();

Transform418.children[0] = ProtoInstance419;

Group306.children[37] = Transform418;

let Transform421 = browser.currentScene.createNode("Transform");
let ProtoInstance422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance422.name = "Hydrogen";
ProtoInstance422.DEF = "riboflavin_karne_a_39";
let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "position";
fieldValue423.value = "0.096 2.512 0.564";
ProtoInstance422.fieldValue = new MFNode();

ProtoInstance422.fieldValue[0] = fieldValue423;

Transform421.children = new MFNode();

Transform421.children[0] = ProtoInstance422;

Group306.children[38] = Transform421;

let Transform424 = browser.currentScene.createNode("Transform");
let ProtoInstance425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance425.name = "Hydrogen";
ProtoInstance425.DEF = "riboflavin_karne_a_40";
let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "position";
fieldValue426.value = "1.58 2.768 -1.556";
ProtoInstance425.fieldValue = new MFNode();

ProtoInstance425.fieldValue[0] = fieldValue426;

Transform424.children = new MFNode();

Transform424.children[0] = ProtoInstance425;

Group306.children[39] = Transform424;

let Transform427 = browser.currentScene.createNode("Transform");
let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.name = "Oxygen";
ProtoInstance428.DEF = "riboflavin_karne_a_41";
let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "position";
fieldValue429.value = "3.284 3.028 -0.388";
ProtoInstance428.fieldValue = new MFNode();

ProtoInstance428.fieldValue[0] = fieldValue429;

Transform427.children = new MFNode();

Transform427.children[0] = ProtoInstance428;

Group306.children[40] = Transform427;

let Transform430 = browser.currentScene.createNode("Transform");
let ProtoInstance431 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance431.name = "Hydrogen";
ProtoInstance431.DEF = "riboflavin_karne_a_42";
let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "position";
fieldValue432.value = "-0.4 4.776 -0.144";
ProtoInstance431.fieldValue = new MFNode();

ProtoInstance431.fieldValue[0] = fieldValue432;

Transform430.children = new MFNode();

Transform430.children[0] = ProtoInstance431;

Group306.children[41] = Transform430;

let Transform433 = browser.currentScene.createNode("Transform");
let ProtoInstance434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance434.name = "Hydrogen";
ProtoInstance434.DEF = "riboflavin_karne_a_43";
let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "position";
fieldValue435.value = "3.652 2.704 -1.196";
ProtoInstance434.fieldValue = new MFNode();

ProtoInstance434.fieldValue[0] = fieldValue435;

Transform433.children = new MFNode();

Transform433.children[0] = ProtoInstance434;

Group306.children[42] = Transform433;

let Transform436 = browser.currentScene.createNode("Transform");
let ProtoInstance437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance437.name = "Hydrogen";
ProtoInstance437.DEF = "riboflavin_karne_a_44";
let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "position";
fieldValue438.value = "1.42 3.22 2.18";
ProtoInstance437.fieldValue = new MFNode();

ProtoInstance437.fieldValue[0] = fieldValue438;

Transform436.children = new MFNode();

Transform436.children[0] = ProtoInstance437;

Group306.children[43] = Transform436;

let Transform439 = browser.currentScene.createNode("Transform");
let ProtoInstance440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance440.name = "Hydrogen";
ProtoInstance440.DEF = "riboflavin_karne_a_45";
let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "position";
fieldValue441.value = "3.124 0.6 0.572";
ProtoInstance440.fieldValue = new MFNode();

ProtoInstance440.fieldValue[0] = fieldValue441;

Transform439.children = new MFNode();

Transform439.children[0] = ProtoInstance440;

Group306.children[44] = Transform439;

let Transform442 = browser.currentScene.createNode("Transform");
let ProtoInstance443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance443.name = "Oxygen";
ProtoInstance443.DEF = "riboflavin_karne_a_46";
let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "position";
fieldValue444.value = "2 -5.916 0.228";
ProtoInstance443.fieldValue = new MFNode();

ProtoInstance443.fieldValue[0] = fieldValue444;

Transform442.children = new MFNode();

Transform442.children[0] = ProtoInstance443;

Group306.children[45] = Transform442;

let Transform445 = browser.currentScene.createNode("Transform");
let ProtoInstance446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance446.name = "Hydrogen";
ProtoInstance446.DEF = "riboflavin_karne_a_47";
let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "position";
fieldValue447.value = "4.312 -5.04 0.788";
ProtoInstance446.fieldValue = new MFNode();

ProtoInstance446.fieldValue[0] = fieldValue447;

Transform445.children = new MFNode();

Transform445.children[0] = ProtoInstance446;

Group306.children[46] = Transform445;

browser.currentScene.children[22] = Group306;

let Group448 = browser.currentScene.createNode("Group");
let ProtoInstance449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance449.name = "line";
ProtoInstance449.DEF = "riboflavin_karne_b_1";
let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "bond_set";
fieldValue450.value = "3.284 3.028 -0.388 3.652 2.704 -1.196";
ProtoInstance449.fieldValue = new MFNode();

ProtoInstance449.fieldValue[0] = fieldValue450;

Group448.children = new MFNode();

Group448.children[0] = ProtoInstance449;

let ProtoInstance451 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance451.name = "line";
ProtoInstance451.DEF = "riboflavin_karne_b_2";
let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "bond_set";
fieldValue452.value = "1.756 2.42 1.796 1.42 3.22 2.18";
ProtoInstance451.fieldValue = new MFNode();

ProtoInstance451.fieldValue[0] = fieldValue452;

Group448.children[1] = ProtoInstance451;

let ProtoInstance453 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance453.name = "line";
ProtoInstance453.DEF = "riboflavin_karne_b_3";
let fieldValue454 = browser.currentScene.createNode("fieldValue");
fieldValue454.name = "bond_set";
fieldValue454.value = "2.56 0.356 -0.148 3.124 0.6 0.572";
ProtoInstance453.fieldValue = new MFNode();

ProtoInstance453.fieldValue[0] = fieldValue454;

Group448.children[2] = ProtoInstance453;

let ProtoInstance455 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance455.name = "line";
ProtoInstance455.DEF = "riboflavin_karne_b_4";
let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "bond_set";
fieldValue456.value = "0.196 4.816 -0.88 -0.4 4.776 -0.144";
ProtoInstance455.fieldValue = new MFNode();

ProtoInstance455.fieldValue[0] = fieldValue456;

Group448.children[3] = ProtoInstance455;

let ProtoInstance457 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance457.name = "line";
ProtoInstance457.DEF = "riboflavin_karne_b_5";
let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "bond_set";
fieldValue458.value = "-3.38 -3.16 0.056 -3.244 -1.776 0.3";
ProtoInstance457.fieldValue = new MFNode();

ProtoInstance457.fieldValue[0] = fieldValue458;

Group448.children[4] = ProtoInstance457;

let ProtoInstance459 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance459.name = "line";
ProtoInstance459.DEF = "riboflavin_karne_b_6";
let fieldValue460 = browser.currentScene.createNode("fieldValue");
fieldValue460.name = "bond_set";
fieldValue460.value = "-2.232 -3.968 0.056 -2.336 -5.044 -0.168";
ProtoInstance459.fieldValue = new MFNode();

ProtoInstance459.fieldValue[0] = fieldValue460;

Group448.children[5] = ProtoInstance459;

let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "line";
ProtoInstance461.DEF = "riboflavin_karne_b_7";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "bond_set";
fieldValue462.value = "-2.2520000000000002 -3.968 0.056 -3.4 -3.16 0.056";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

Group448.children[6] = ProtoInstance461;

let ProtoInstance463 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance463.name = "line";
ProtoInstance463.DEF = "riboflavin_karne_b_7_2";
let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "bond_set";
fieldValue464.value = "-2.212 -3.968 0.056 -3.36 -3.16 0.056";
ProtoInstance463.fieldValue = new MFNode();

ProtoInstance463.fieldValue[0] = fieldValue464;

Group448.children[7] = ProtoInstance463;

let ProtoInstance465 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance465.name = "line";
ProtoInstance465.DEF = "riboflavin_karne_b_8";
let fieldValue466 = browser.currentScene.createNode("fieldValue");
fieldValue466.name = "bond_set";
fieldValue466.value = "-0.96 -3.448 0.34 -2.232 -3.968 0.056";
ProtoInstance465.fieldValue = new MFNode();

ProtoInstance465.fieldValue[0] = fieldValue466;

Group448.children[8] = ProtoInstance465;

let ProtoInstance467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance467.name = "line";
ProtoInstance467.DEF = "riboflavin_karne_b_9";
let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "bond_set";
fieldValue468.value = "-0.848 -2.08 0.644 -0.98 -3.448 0.34";
ProtoInstance467.fieldValue = new MFNode();

ProtoInstance467.fieldValue[0] = fieldValue468;

Group448.children[9] = ProtoInstance467;

let ProtoInstance469 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance469.name = "line";
ProtoInstance469.DEF = "riboflavin_karne_b_9_2";
let fieldValue470 = browser.currentScene.createNode("fieldValue");
fieldValue470.name = "bond_set";
fieldValue470.value = "-0.8079999999999999 -2.08 0.644 -0.94 -3.448 0.34";
ProtoInstance469.fieldValue = new MFNode();

ProtoInstance469.fieldValue[0] = fieldValue470;

Group448.children[10] = ProtoInstance469;

let ProtoInstance471 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance471.name = "line";
ProtoInstance471.DEF = "riboflavin_karne_b_10";
let fieldValue472 = browser.currentScene.createNode("fieldValue");
fieldValue472.name = "bond_set";
fieldValue472.value = "-1.968 -1.256 0.596 -1.884 -0.18 0.792";
ProtoInstance471.fieldValue = new MFNode();

ProtoInstance471.fieldValue[0] = fieldValue472;

Group448.children[11] = ProtoInstance471;

let ProtoInstance473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance473.name = "line";
ProtoInstance473.DEF = "riboflavin_karne_b_11";
let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "bond_set";
fieldValue474.value = "-1.988 -1.256 0.596 -3.2640000000000002 -1.776 0.3";
ProtoInstance473.fieldValue = new MFNode();

ProtoInstance473.fieldValue[0] = fieldValue474;

Group448.children[12] = ProtoInstance473;

let ProtoInstance475 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance475.name = "line";
ProtoInstance475.DEF = "riboflavin_karne_b_11_2";
let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "bond_set";
fieldValue476.value = "-1.948 -1.256 0.596 -3.224 -1.776 0.3";
ProtoInstance475.fieldValue = new MFNode();

ProtoInstance475.fieldValue[0] = fieldValue476;

Group448.children[13] = ProtoInstance475;

let ProtoInstance477 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance477.name = "line";
ProtoInstance477.DEF = "riboflavin_karne_b_12";
let fieldValue478 = browser.currentScene.createNode("fieldValue");
fieldValue478.name = "bond_set";
fieldValue478.value = "-1.968 -1.256 0.596 -0.828 -2.08 0.644";
ProtoInstance477.fieldValue = new MFNode();

ProtoInstance477.fieldValue[0] = fieldValue478;

Group448.children[14] = ProtoInstance477;

let ProtoInstance479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance479.name = "line";
ProtoInstance479.DEF = "riboflavin_karne_b_13";
let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "bond_set";
fieldValue480.value = "0.452 -1.552 0.984 -0.828 -2.08 0.644";
ProtoInstance479.fieldValue = new MFNode();

ProtoInstance479.fieldValue[0] = fieldValue480;

Group448.children[15] = ProtoInstance479;

let ProtoInstance481 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance481.name = "line";
ProtoInstance481.DEF = "riboflavin_karne_b_14";
let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "bond_set";
fieldValue482.value = "1.5 -2.528 0.928 0.452 -1.552 0.984";
ProtoInstance481.fieldValue = new MFNode();

ProtoInstance481.fieldValue[0] = fieldValue482;

Group448.children[16] = ProtoInstance481;

let ProtoInstance483 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance483.name = "line";
ProtoInstance483.DEF = "riboflavin_karne_b_15";
let fieldValue484 = browser.currentScene.createNode("fieldValue");
fieldValue484.name = "bond_set";
fieldValue484.value = "1.208 -3.86 0.584 1.5 -2.528 0.928";
ProtoInstance483.fieldValue = new MFNode();

ProtoInstance483.fieldValue[0] = fieldValue484;

Group448.children[17] = ProtoInstance483;

let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "line";
ProtoInstance485.DEF = "riboflavin_karne_b_16";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "bond_set";
fieldValue486.value = "0.024 -4.256 0.316 -0.96 -3.448 0.34";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

Group448.children[18] = ProtoInstance485;

let ProtoInstance487 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance487.name = "line";
ProtoInstance487.DEF = "riboflavin_karne_b_17";
let fieldValue488 = browser.currentScene.createNode("fieldValue");
fieldValue488.name = "bond_set";
fieldValue488.value = "0.004 -4.256 0.316 1.188 -3.86 0.584";
ProtoInstance487.fieldValue = new MFNode();

ProtoInstance487.fieldValue[0] = fieldValue488;

Group448.children[19] = ProtoInstance487;

let ProtoInstance489 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance489.name = "line";
ProtoInstance489.DEF = "riboflavin_karne_b_17_2";
let fieldValue490 = browser.currentScene.createNode("fieldValue");
fieldValue490.name = "bond_set";
fieldValue490.value = "0.044 -4.256 0.316 1.228 -3.86 0.584";
ProtoInstance489.fieldValue = new MFNode();

ProtoInstance489.fieldValue[0] = fieldValue490;

Group448.children[20] = ProtoInstance489;

let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "line";
ProtoInstance491.DEF = "riboflavin_karne_b_18";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "bond_set";
fieldValue492.value = "2.216 -4.764 0.532 1.98 -5.916 0.228";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

Group448.children[21] = ProtoInstance491;

let ProtoInstance493 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance493.name = "line";
ProtoInstance493.DEF = "riboflavin_karne_b_18_2";
let fieldValue494 = browser.currentScene.createNode("fieldValue");
fieldValue494.name = "bond_set";
fieldValue494.value = "2.2560000000000002 -4.764 0.532 2.02 -5.916 0.228";
ProtoInstance493.fieldValue = new MFNode();

ProtoInstance493.fieldValue[0] = fieldValue494;

Group448.children[22] = ProtoInstance493;

let ProtoInstance495 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance495.name = "line";
ProtoInstance495.DEF = "riboflavin_karne_b_19";
let fieldValue496 = browser.currentScene.createNode("fieldValue");
fieldValue496.name = "bond_set";
fieldValue496.value = "2.236 -4.764 0.532 1.208 -3.86 0.584";
ProtoInstance495.fieldValue = new MFNode();

ProtoInstance495.fieldValue[0] = fieldValue496;

Group448.children[23] = ProtoInstance495;

let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.name = "line";
ProtoInstance497.DEF = "riboflavin_karne_b_20";
let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "bond_set";
fieldValue498.value = "3.54 -4.356 0.828 4.312 -5.04 0.788";
ProtoInstance497.fieldValue = new MFNode();

ProtoInstance497.fieldValue[0] = fieldValue498;

Group448.children[24] = ProtoInstance497;

let ProtoInstance499 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance499.name = "line";
ProtoInstance499.DEF = "riboflavin_karne_b_21";
let fieldValue500 = browser.currentScene.createNode("fieldValue");
fieldValue500.name = "bond_set";
fieldValue500.value = "3.54 -4.356 0.828 2.236 -4.764 0.532";
ProtoInstance499.fieldValue = new MFNode();

ProtoInstance499.fieldValue[0] = fieldValue500;

Group448.children[25] = ProtoInstance499;

let ProtoInstance501 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance501.name = "line";
ProtoInstance501.DEF = "riboflavin_karne_b_22";
let fieldValue502 = browser.currentScene.createNode("fieldValue");
fieldValue502.name = "bond_set";
fieldValue502.value = "3.816 -3.044 1.176 3.54 -4.356 0.828";
ProtoInstance501.fieldValue = new MFNode();

ProtoInstance501.fieldValue[0] = fieldValue502;

Group448.children[26] = ProtoInstance501;

let ProtoInstance503 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance503.name = "line";
ProtoInstance503.DEF = "riboflavin_karne_b_23";
let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "bond_set";
fieldValue504.value = "2.672 -2.156 1.204 1.48 -2.528 0.928";
ProtoInstance503.fieldValue = new MFNode();

ProtoInstance503.fieldValue[0] = fieldValue504;

Group448.children[27] = ProtoInstance503;

let ProtoInstance505 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance505.name = "line";
ProtoInstance505.DEF = "riboflavin_karne_b_23_2";
let fieldValue506 = browser.currentScene.createNode("fieldValue");
fieldValue506.name = "bond_set";
fieldValue506.value = "2.712 -2.156 1.204 1.52 -2.528 0.928";
ProtoInstance505.fieldValue = new MFNode();

ProtoInstance505.fieldValue[0] = fieldValue506;

Group448.children[28] = ProtoInstance505;

let ProtoInstance507 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance507.name = "line";
ProtoInstance507.DEF = "riboflavin_karne_b_24";
let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "bond_set";
fieldValue508.value = "2.692 -2.156 1.204 3.816 -3.044 1.176";
ProtoInstance507.fieldValue = new MFNode();

ProtoInstance507.fieldValue[0] = fieldValue508;

Group448.children[29] = ProtoInstance507;

let ProtoInstance509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance509.name = "line";
ProtoInstance509.DEF = "riboflavin_karne_b_25";
let fieldValue510 = browser.currentScene.createNode("fieldValue");
fieldValue510.name = "bond_set";
fieldValue510.value = "0.732 -0.164 1.364 -0.168 0.304 1.808";
ProtoInstance509.fieldValue = new MFNode();

ProtoInstance509.fieldValue[0] = fieldValue510;

Group448.children[30] = ProtoInstance509;

let ProtoInstance511 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance511.name = "line";
ProtoInstance511.DEF = "riboflavin_karne_b_26";
let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "bond_set";
fieldValue512.value = "0.732 -0.164 1.364 1.48 -0.132 2.188";
ProtoInstance511.fieldValue = new MFNode();

ProtoInstance511.fieldValue[0] = fieldValue512;

Group448.children[31] = ProtoInstance511;

let ProtoInstance513 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance513.name = "line";
ProtoInstance513.DEF = "riboflavin_karne_b_27";
let fieldValue514 = browser.currentScene.createNode("fieldValue");
fieldValue514.name = "bond_set";
fieldValue514.value = "0.732 -0.164 1.364 0.452 -1.552 0.984";
ProtoInstance513.fieldValue = new MFNode();

ProtoInstance513.fieldValue[0] = fieldValue514;

Group448.children[32] = ProtoInstance513;

let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.name = "line";
ProtoInstance515.DEF = "riboflavin_karne_b_28";
let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "bond_set";
fieldValue516.value = "1.228 0.712 0.188 2.56 0.356 -0.148";
ProtoInstance515.fieldValue = new MFNode();

ProtoInstance515.fieldValue[0] = fieldValue516;

Group448.children[33] = ProtoInstance515;

let ProtoInstance517 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance517.name = "line";
ProtoInstance517.DEF = "riboflavin_karne_b_29";
let fieldValue518 = browser.currentScene.createNode("fieldValue");
fieldValue518.name = "bond_set";
fieldValue518.value = "1.228 0.712 0.188 0.576 0.528 -0.696";
ProtoInstance517.fieldValue = new MFNode();

ProtoInstance517.fieldValue[0] = fieldValue518;

Group448.children[34] = ProtoInstance517;

let ProtoInstance519 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance519.name = "line";
ProtoInstance519.DEF = "riboflavin_karne_b_30";
let fieldValue520 = browser.currentScene.createNode("fieldValue");
fieldValue520.name = "bond_set";
fieldValue520.value = "1.228 0.712 0.188 0.732 -0.164 1.364";
ProtoInstance519.fieldValue = new MFNode();

ProtoInstance519.fieldValue[0] = fieldValue520;

Group448.children[35] = ProtoInstance519;

let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.name = "line";
ProtoInstance521.DEF = "riboflavin_karne_b_31";
let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "bond_set";
fieldValue522.value = "1.172 2.224 0.516 0.096 2.512 0.564";
ProtoInstance521.fieldValue = new MFNode();

ProtoInstance521.fieldValue[0] = fieldValue522;

Group448.children[36] = ProtoInstance521;

let ProtoInstance523 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance523.name = "line";
ProtoInstance523.DEF = "riboflavin_karne_b_32";
let fieldValue524 = browser.currentScene.createNode("fieldValue");
fieldValue524.name = "bond_set";
fieldValue524.value = "1.172 2.224 0.516 1.756 2.42 1.796";
ProtoInstance523.fieldValue = new MFNode();

ProtoInstance523.fieldValue[0] = fieldValue524;

Group448.children[37] = ProtoInstance523;

let ProtoInstance525 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance525.name = "line";
ProtoInstance525.DEF = "riboflavin_karne_b_33";
let fieldValue526 = browser.currentScene.createNode("fieldValue");
fieldValue526.name = "bond_set";
fieldValue526.value = "1.172 2.224 0.516 1.228 0.712 0.188";
ProtoInstance525.fieldValue = new MFNode();

ProtoInstance525.fieldValue[0] = fieldValue526;

Group448.children[38] = ProtoInstance525;

let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.name = "line";
ProtoInstance527.DEF = "riboflavin_karne_b_34";
let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "bond_set";
fieldValue528.value = "1.876 3.12 -0.536 3.284 3.028 -0.388";
ProtoInstance527.fieldValue = new MFNode();

ProtoInstance527.fieldValue[0] = fieldValue528;

Group448.children[39] = ProtoInstance527;

let ProtoInstance529 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance529.name = "line";
ProtoInstance529.DEF = "riboflavin_karne_b_35";
let fieldValue530 = browser.currentScene.createNode("fieldValue");
fieldValue530.name = "bond_set";
fieldValue530.value = "1.876 3.12 -0.536 1.58 2.768 -1.556";
ProtoInstance529.fieldValue = new MFNode();

ProtoInstance529.fieldValue[0] = fieldValue530;

Group448.children[40] = ProtoInstance529;

let ProtoInstance531 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance531.name = "line";
ProtoInstance531.DEF = "riboflavin_karne_b_36";
let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "bond_set";
fieldValue532.value = "1.876 3.12 -0.536 1.172 2.224 0.516";
ProtoInstance531.fieldValue = new MFNode();

ProtoInstance531.fieldValue[0] = fieldValue532;

Group448.children[41] = ProtoInstance531;

let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.name = "line";
ProtoInstance533.DEF = "riboflavin_karne_b_37";
let fieldValue534 = browser.currentScene.createNode("fieldValue");
fieldValue534.name = "bond_set";
fieldValue534.value = "1.52 4.612 -0.416 0.196 4.816 -0.88";
ProtoInstance533.fieldValue = new MFNode();

ProtoInstance533.fieldValue[0] = fieldValue534;

Group448.children[42] = ProtoInstance533;

let ProtoInstance535 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance535.name = "line";
ProtoInstance535.DEF = "riboflavin_karne_b_38";
let fieldValue536 = browser.currentScene.createNode("fieldValue");
fieldValue536.name = "bond_set";
fieldValue536.value = "1.52 4.612 -0.416 1.632 4.984 0.628";
ProtoInstance535.fieldValue = new MFNode();

ProtoInstance535.fieldValue[0] = fieldValue536;

Group448.children[43] = ProtoInstance535;

let ProtoInstance537 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance537.name = "line";
ProtoInstance537.DEF = "riboflavin_karne_b_39";
let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "bond_set";
fieldValue538.value = "1.52 4.612 -0.416 2.204 5.22 -1.048";
ProtoInstance537.fieldValue = new MFNode();

ProtoInstance537.fieldValue[0] = fieldValue538;

Group448.children[44] = ProtoInstance537;

let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "line";
ProtoInstance539.DEF = "riboflavin_karne_b_40";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "bond_set";
fieldValue540.value = "1.52 4.612 -0.416 1.876 3.12 -0.536";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

Group448.children[45] = ProtoInstance539;

let ProtoInstance541 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance541.name = "line";
ProtoInstance541.DEF = "riboflavin_karne_b_41";
let fieldValue542 = browser.currentScene.createNode("fieldValue");
fieldValue542.name = "bond_set";
fieldValue542.value = "4.892 -2.612 1.444 3.796 -3.044 1.176";
ProtoInstance541.fieldValue = new MFNode();

ProtoInstance541.fieldValue[0] = fieldValue542;

Group448.children[46] = ProtoInstance541;

let ProtoInstance543 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance543.name = "line";
ProtoInstance543.DEF = "riboflavin_karne_b_41_2";
let fieldValue544 = browser.currentScene.createNode("fieldValue");
fieldValue544.name = "bond_set";
fieldValue544.value = "4.9319999999999995 -2.612 1.444 3.836 -3.044 1.176";
ProtoInstance543.fieldValue = new MFNode();

ProtoInstance543.fieldValue[0] = fieldValue544;

Group448.children[47] = ProtoInstance543;

let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.name = "line";
ProtoInstance545.DEF = "riboflavin_karne_b_42";
let fieldValue546 = browser.currentScene.createNode("fieldValue");
fieldValue546.name = "bond_set";
fieldValue546.value = "-4.436 -0.848 0.256 -5.108 -0.996 1.132";
ProtoInstance545.fieldValue = new MFNode();

ProtoInstance545.fieldValue[0] = fieldValue546;

Group448.children[48] = ProtoInstance545;

let ProtoInstance547 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance547.name = "line";
ProtoInstance547.DEF = "riboflavin_karne_b_43";
let fieldValue548 = browser.currentScene.createNode("fieldValue");
fieldValue548.name = "bond_set";
fieldValue548.value = "-4.436 -0.848 0.256 -4.136 0.22 0.252";
ProtoInstance547.fieldValue = new MFNode();

ProtoInstance547.fieldValue[0] = fieldValue548;

Group448.children[49] = ProtoInstance547;

let ProtoInstance549 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance549.name = "line";
ProtoInstance549.DEF = "riboflavin_karne_b_44";
let fieldValue550 = browser.currentScene.createNode("fieldValue");
fieldValue550.name = "bond_set";
fieldValue550.value = "-4.436 -0.848 0.256 -5.04 -1.008 -0.66";
ProtoInstance549.fieldValue = new MFNode();

ProtoInstance549.fieldValue[0] = fieldValue550;

Group448.children[50] = ProtoInstance549;

let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.name = "line";
ProtoInstance551.DEF = "riboflavin_karne_b_45";
let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "bond_set";
fieldValue552.value = "-4.436 -0.848 0.256 -3.244 -1.776 0.3";
ProtoInstance551.fieldValue = new MFNode();

ProtoInstance551.fieldValue[0] = fieldValue552;

Group448.children[51] = ProtoInstance551;

let ProtoInstance553 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance553.name = "line";
ProtoInstance553.DEF = "riboflavin_karne_b_46";
let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "bond_set";
fieldValue554.value = "-4.72 -3.788 -0.212 -5.448 -3.54 0.592";
ProtoInstance553.fieldValue = new MFNode();

ProtoInstance553.fieldValue[0] = fieldValue554;

Group448.children[52] = ProtoInstance553;

let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.name = "line";
ProtoInstance555.DEF = "riboflavin_karne_b_47";
let fieldValue556 = browser.currentScene.createNode("fieldValue");
fieldValue556.name = "bond_set";
fieldValue556.value = "-4.72 -3.788 -0.212 -5.14 -3.432 -1.18";
ProtoInstance555.fieldValue = new MFNode();

ProtoInstance555.fieldValue[0] = fieldValue556;

Group448.children[53] = ProtoInstance555;

let ProtoInstance557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance557.name = "line";
ProtoInstance557.DEF = "riboflavin_karne_b_48";
let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "bond_set";
fieldValue558.value = "-4.72 -3.788 -0.212 -4.656 -4.896 -0.268";
ProtoInstance557.fieldValue = new MFNode();

ProtoInstance557.fieldValue[0] = fieldValue558;

Group448.children[54] = ProtoInstance557;

let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.name = "line";
ProtoInstance559.DEF = "riboflavin_karne_b_49";
let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "bond_set";
fieldValue560.value = "-4.72 -3.788 -0.212 -3.38 -3.16 0.056";
ProtoInstance559.fieldValue = new MFNode();

ProtoInstance559.fieldValue[0] = fieldValue560;

Group448.children[55] = ProtoInstance559;

browser.currentScene.children[23] = Group448;

