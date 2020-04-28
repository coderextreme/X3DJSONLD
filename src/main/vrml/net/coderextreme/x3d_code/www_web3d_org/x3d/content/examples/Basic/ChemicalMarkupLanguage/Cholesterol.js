let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Cholesterol.x3d";
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
Viewpoint300.description = "Inspect Cholesterol";
Viewpoint300.position = new SFVec3f(new float[0,2,20]);
browser.currentScene.children[20] = Viewpoint300;

//<?xml-stylesheet type=\"text/xsl\" href=\"generic.xsl\" ?>
//Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved.
//type=\"3D\" <date day=\"5\" month=\"2\" year=\"2010\"/>
//CML document - cholesterol - karne - 7/8/00
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
fieldValue305.value = "\"Cholesterol: C27 H46 O\"";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

Transform302.children[1] = ProtoInstance304;

Transform301.children = new MFNode();

Transform301.children[0] = Transform302;

let Transform306 = browser.currentScene.createNode("Transform");
Transform306.translation = new SFVec3f(new float[0,5,0]);
let ProtoInstance307 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance307.name = "ano1_text";
let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "txt";
fieldValue308.value = "\"molecule weight: 386.6598\"";
ProtoInstance307.fieldValue = new MFNode();

ProtoInstance307.fieldValue[0] = fieldValue308;

Transform306.children = new MFNode();

Transform306.children[0] = ProtoInstance307;

Transform301.children[1] = Transform306;

let Transform309 = browser.currentScene.createNode("Transform");
Transform309.translation = new SFVec3f(new float[0,4,0]);
let ProtoInstance310 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance310.name = "ano1_text";
let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "txt";
fieldValue311.value = "\"melting point: 148.5\"";
ProtoInstance310.fieldValue = new MFNode();

ProtoInstance310.fieldValue[0] = fieldValue311;

Transform309.children = new MFNode();

Transform309.children[0] = ProtoInstance310;

Transform301.children[2] = Transform309;

let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new SFVec3f(new float[0,3,0]);
let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "ano1_text";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "txt";
fieldValue314.value = "\"boiling point: 360\"";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

Transform312.children = new MFNode();

Transform312.children[0] = ProtoInstance313;

Transform301.children[3] = Transform312;

let Transform315 = browser.currentScene.createNode("Transform");
Transform315.translation = new SFVec3f(new float[0,2,0]);
let ProtoInstance316 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance316.name = "ano1_text";
let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "txt";
fieldValue317.value = "\"specific gravity: 1.067\"";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

Transform315.children = new MFNode();

Transform315.children[0] = ProtoInstance316;

Transform301.children[4] = Transform315;

let Transform318 = browser.currentScene.createNode("Transform");
let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.name = "ano2_text";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "txt";
fieldValue320.value = "\"CAS: 57-88-5\"";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

Transform318.children = new MFNode();

Transform318.children[0] = ProtoInstance319;

Transform301.children[5] = Transform318;

let Transform321 = browser.currentScene.createNode("Transform");
Transform321.translation = new SFVec3f(new float[0,-1,0]);
let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "ano2_text";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "txt";
fieldValue323.value = "\"ACX: I1001660\"";
ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

Transform321.children = new MFNode();

Transform321.children[0] = ProtoInstance322;

Transform301.children[6] = Transform321;

let Transform324 = browser.currentScene.createNode("Transform");
Transform324.translation = new SFVec3f(new float[0,-2,0]);
let ProtoInstance325 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance325.name = "ano2_text";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "txt";
fieldValue326.value = "\"RTECS: FZ8400000\"";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

Transform324.children = new MFNode();

Transform324.children[0] = ProtoInstance325;

Transform301.children[7] = Transform324;

browser.currentScene.children[21] = Transform301;

//molecule specific information
let Group327 = browser.currentScene.createNode("Group");
let Transform328 = browser.currentScene.createNode("Transform");
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Hydrogen";
ProtoInstance329.DEF = "cholesterol_karne_a_1";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "position";
fieldValue330.value = "-1.9901 2.1889 -1.8776";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

Transform328.children = new MFNode();

Transform328.children[0] = ProtoInstance329;

Group327.children = new MFNode();

Group327.children[0] = Transform328;

let Transform331 = browser.currentScene.createNode("Transform");
let ProtoInstance332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance332.name = "Carbon";
ProtoInstance332.DEF = "cholesterol_karne_a_2";
let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "position";
fieldValue333.value = "-2.1059 1.6157 -0.9459";
ProtoInstance332.fieldValue = new MFNode();

ProtoInstance332.fieldValue[0] = fieldValue333;

Transform331.children = new MFNode();

Transform331.children[0] = ProtoInstance332;

Group327.children[1] = Transform331;

let Transform334 = browser.currentScene.createNode("Transform");
let ProtoInstance335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance335.name = "Carbon";
ProtoInstance335.DEF = "cholesterol_karne_a_3";
let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "position";
fieldValue336.value = "-3.5787 1.7234 -0.4719";
ProtoInstance335.fieldValue = new MFNode();

ProtoInstance335.fieldValue[0] = fieldValue336;

Transform334.children = new MFNode();

Transform334.children[0] = ProtoInstance335;

Group327.children[2] = Transform334;

let Transform337 = browser.currentScene.createNode("Transform");
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Carbon";
ProtoInstance338.DEF = "cholesterol_karne_a_4";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "position";
fieldValue339.value = "-3.7797 1.0607 0.812";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

Transform337.children = new MFNode();

Transform337.children[0] = ProtoInstance338;

Group327.children[3] = Transform337;

let Transform340 = browser.currentScene.createNode("Transform");
let ProtoInstance341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance341.name = "Carbon";
ProtoInstance341.DEF = "cholesterol_karne_a_5";
let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "position";
fieldValue342.value = "-2.8482 1.6003 1.9235";
ProtoInstance341.fieldValue = new MFNode();

ProtoInstance341.fieldValue[0] = fieldValue342;

Transform340.children = new MFNode();

Transform340.children[0] = ProtoInstance341;

Group327.children[4] = Transform340;

let Transform343 = browser.currentScene.createNode("Transform");
let ProtoInstance344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance344.name = "Carbon";
ProtoInstance344.DEF = "cholesterol_karne_a_6";
let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "position";
fieldValue345.value = "-1.372 1.5412 1.5004";
ProtoInstance344.fieldValue = new MFNode();

ProtoInstance344.fieldValue[0] = fieldValue345;

Transform343.children = new MFNode();

Transform343.children[0] = ProtoInstance344;

Group327.children[5] = Transform343;

let Transform346 = browser.currentScene.createNode("Transform");
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Carbon";
ProtoInstance347.DEF = "cholesterol_karne_a_7";
let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "position";
fieldValue348.value = "-0.4702 1.006 2.3207";
ProtoInstance347.fieldValue = new MFNode();

ProtoInstance347.fieldValue[0] = fieldValue348;

Transform346.children = new MFNode();

Transform346.children[0] = ProtoInstance347;

Group327.children[6] = Transform346;

let Transform349 = browser.currentScene.createNode("Transform");
let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "Carbon";
ProtoInstance350.DEF = "cholesterol_karne_a_8";
let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "position";
fieldValue351.value = "1.0043 1.0283 1.9762";
ProtoInstance350.fieldValue = new MFNode();

ProtoInstance350.fieldValue[0] = fieldValue351;

Transform349.children = new MFNode();

Transform349.children[0] = ProtoInstance350;

Group327.children[7] = Transform349;

let Transform352 = browser.currentScene.createNode("Transform");
let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.name = "Carbon";
ProtoInstance353.DEF = "cholesterol_karne_a_9";
let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "position";
fieldValue354.value = "1.3614 1.8701 0.8105";
ProtoInstance353.fieldValue = new MFNode();

ProtoInstance353.fieldValue[0] = fieldValue354;

Transform352.children = new MFNode();

Transform352.children[0] = ProtoInstance353;

Group327.children[8] = Transform352;

let Transform355 = browser.currentScene.createNode("Transform");
let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Carbon";
ProtoInstance356.DEF = "cholesterol_karne_a_10";
let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "position";
fieldValue357.value = "0.3215 1.7261 -0.3221";
ProtoInstance356.fieldValue = new MFNode();

ProtoInstance356.fieldValue[0] = fieldValue357;

Transform355.children = new MFNode();

Transform355.children[0] = ProtoInstance356;

Group327.children[9] = Transform355;

let Transform358 = browser.currentScene.createNode("Transform");
let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.name = "Carbon";
ProtoInstance359.DEF = "cholesterol_karne_a_11";
let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "position";
fieldValue360.value = "-1.0963 2.1783 0.1259";
ProtoInstance359.fieldValue = new MFNode();

ProtoInstance359.fieldValue[0] = fieldValue360;

Transform358.children = new MFNode();

Transform358.children[0] = ProtoInstance359;

Group327.children[10] = Transform358;

let Transform361 = browser.currentScene.createNode("Transform");
let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.name = "Carbon";
ProtoInstance362.DEF = "cholesterol_karne_a_12";
let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "position";
fieldValue363.value = "0.7503 2.4279 -1.6345";
ProtoInstance362.fieldValue = new MFNode();

ProtoInstance362.fieldValue[0] = fieldValue363;

Transform361.children = new MFNode();

Transform361.children[0] = ProtoInstance362;

Group327.children[11] = Transform361;

let Transform364 = browser.currentScene.createNode("Transform");
let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.name = "Carbon";
ProtoInstance365.DEF = "cholesterol_karne_a_13";
let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "position";
fieldValue366.value = "2.1677 2.0593 -2.0888";
ProtoInstance365.fieldValue = new MFNode();

ProtoInstance365.fieldValue[0] = fieldValue366;

Transform364.children = new MFNode();

Transform364.children[0] = ProtoInstance365;

Group327.children[12] = Transform364;

let Transform367 = browser.currentScene.createNode("Transform");
let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.name = "Carbon";
ProtoInstance368.DEF = "cholesterol_karne_a_14";
let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "position";
fieldValue369.value = "3.1972 2.372 -0.9408";
ProtoInstance368.fieldValue = new MFNode();

ProtoInstance368.fieldValue[0] = fieldValue369;

Transform367.children = new MFNode();

Transform367.children[0] = ProtoInstance368;

Group327.children[13] = Transform367;

let Transform370 = browser.currentScene.createNode("Transform");
let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.name = "Carbon";
ProtoInstance371.DEF = "cholesterol_karne_a_15";
let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "position";
fieldValue372.value = "2.7895 1.5563 0.2449";
ProtoInstance371.fieldValue = new MFNode();

ProtoInstance371.fieldValue[0] = fieldValue372;

Transform370.children = new MFNode();

Transform370.children[0] = ProtoInstance371;

Group327.children[14] = Transform370;

let Transform373 = browser.currentScene.createNode("Transform");
let ProtoInstance374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance374.name = "Carbon";
ProtoInstance374.DEF = "cholesterol_karne_a_16";
let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "position";
fieldValue375.value = "3.9663 1.6453 1.2237";
ProtoInstance374.fieldValue = new MFNode();

ProtoInstance374.fieldValue[0] = fieldValue375;

Transform373.children = new MFNode();

Transform373.children[0] = ProtoInstance374;

Group327.children[15] = Transform373;

let Transform376 = browser.currentScene.createNode("Transform");
let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Carbon";
ProtoInstance377.DEF = "cholesterol_karne_a_17";
let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "position";
fieldValue378.value = "5.1354 1.5087 0.296";
ProtoInstance377.fieldValue = new MFNode();

ProtoInstance377.fieldValue[0] = fieldValue378;

Transform376.children = new MFNode();

Transform376.children[0] = ProtoInstance377;

Group327.children[16] = Transform376;

let Transform379 = browser.currentScene.createNode("Transform");
let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.name = "Carbon";
ProtoInstance380.DEF = "cholesterol_karne_a_18";
let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "position";
fieldValue381.value = "4.6487 1.7527 -1.1872";
ProtoInstance380.fieldValue = new MFNode();

ProtoInstance380.fieldValue[0] = fieldValue381;

Transform379.children = new MFNode();

Transform379.children[0] = ProtoInstance380;

Group327.children[17] = Transform379;

let Transform382 = browser.currentScene.createNode("Transform");
let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.name = "Carbon";
ProtoInstance383.DEF = "cholesterol_karne_a_19";
let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "position";
fieldValue384.value = "3.245 3.8521 -0.6813";
ProtoInstance383.fieldValue = new MFNode();

ProtoInstance383.fieldValue[0] = fieldValue384;

Transform382.children = new MFNode();

Transform382.children[0] = ProtoInstance383;

Group327.children[18] = Transform382;

let Transform385 = browser.currentScene.createNode("Transform");
let ProtoInstance386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance386.name = "Carbon";
ProtoInstance386.DEF = "cholesterol_karne_a_20";
let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "position";
fieldValue387.value = "-1.3066 3.6419 0.2349";
ProtoInstance386.fieldValue = new MFNode();

ProtoInstance386.fieldValue[0] = fieldValue387;

Transform385.children = new MFNode();

Transform385.children[0] = ProtoInstance386;

Group327.children[19] = Transform385;

let Transform388 = browser.currentScene.createNode("Transform");
let ProtoInstance389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance389.name = "Carbon";
ProtoInstance389.DEF = "cholesterol_karne_a_21";
let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "position";
fieldValue390.value = "5.6329 2.5278 -2.0553";
ProtoInstance389.fieldValue = new MFNode();

ProtoInstance389.fieldValue[0] = fieldValue390;

Transform388.children = new MFNode();

Transform388.children[0] = ProtoInstance389;

Group327.children[20] = Transform388;

let Transform391 = browser.currentScene.createNode("Transform");
let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.name = "Carbon";
ProtoInstance392.DEF = "cholesterol_karne_a_22";
let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "position";
fieldValue393.value = "5.118 2.844 -3.4537";
ProtoInstance392.fieldValue = new MFNode();

ProtoInstance392.fieldValue[0] = fieldValue393;

Transform391.children = new MFNode();

Transform391.children[0] = ProtoInstance392;

Group327.children[21] = Transform391;

let Transform394 = browser.currentScene.createNode("Transform");
let ProtoInstance395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance395.name = "Carbon";
ProtoInstance395.DEF = "cholesterol_karne_a_23";
let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "position";
fieldValue396.value = "7.0185 1.8022 -2.1116";
ProtoInstance395.fieldValue = new MFNode();

ProtoInstance395.fieldValue[0] = fieldValue396;

Transform394.children = new MFNode();

Transform394.children[0] = ProtoInstance395;

Group327.children[22] = Transform394;

let Transform397 = browser.currentScene.createNode("Transform");
let ProtoInstance398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance398.name = "Carbon";
ProtoInstance398.DEF = "cholesterol_karne_a_24";
let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "position";
fieldValue399.value = "8.1314 2.6591 -2.5153";
ProtoInstance398.fieldValue = new MFNode();

ProtoInstance398.fieldValue[0] = fieldValue399;

Transform397.children = new MFNode();

Transform397.children[0] = ProtoInstance398;

Group327.children[23] = Transform397;

let Transform400 = browser.currentScene.createNode("Transform");
let ProtoInstance401 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance401.name = "Carbon";
ProtoInstance401.DEF = "cholesterol_karne_a_25";
let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "position";
fieldValue402.value = "9.4748 1.9697 -2.5572";
ProtoInstance401.fieldValue = new MFNode();

ProtoInstance401.fieldValue[0] = fieldValue402;

Transform400.children = new MFNode();

Transform400.children[0] = ProtoInstance401;

Group327.children[24] = Transform400;

let Transform403 = browser.currentScene.createNode("Transform");
let ProtoInstance404 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance404.name = "Carbon";
ProtoInstance404.DEF = "cholesterol_karne_a_26";
let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "position";
fieldValue405.value = "10.6837 2.862 -2.8793";
ProtoInstance404.fieldValue = new MFNode();

ProtoInstance404.fieldValue[0] = fieldValue405;

Transform403.children = new MFNode();

Transform403.children[0] = ProtoInstance404;

Group327.children[25] = Transform403;

let Transform406 = browser.currentScene.createNode("Transform");
let ProtoInstance407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance407.name = "Carbon";
ProtoInstance407.DEF = "cholesterol_karne_a_27";
let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "position";
fieldValue408.value = "10.5656 3.6361 -4.1508";
ProtoInstance407.fieldValue = new MFNode();

ProtoInstance407.fieldValue[0] = fieldValue408;

Transform406.children = new MFNode();

Transform406.children[0] = ProtoInstance407;

Group327.children[26] = Transform406;

let Transform409 = browser.currentScene.createNode("Transform");
let ProtoInstance410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance410.name = "Carbon";
ProtoInstance410.DEF = "cholesterol_karne_a_28";
let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "position";
fieldValue411.value = "11.9428 2.0228 -2.729";
ProtoInstance410.fieldValue = new MFNode();

ProtoInstance410.fieldValue[0] = fieldValue411;

Transform409.children = new MFNode();

Transform409.children[0] = ProtoInstance410;

Group327.children[27] = Transform409;

let Transform412 = browser.currentScene.createNode("Transform");
let ProtoInstance413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance413.name = "Hydrogen";
ProtoInstance413.DEF = "cholesterol_karne_a_29";
let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "position";
fieldValue414.value = "-1.8702 0.5579 -1.1345";
ProtoInstance413.fieldValue = new MFNode();

ProtoInstance413.fieldValue[0] = fieldValue414;

Transform412.children = new MFNode();

Transform412.children[0] = ProtoInstance413;

Group327.children[28] = Transform412;

let Transform415 = browser.currentScene.createNode("Transform");
let ProtoInstance416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance416.name = "Hydrogen";
ProtoInstance416.DEF = "cholesterol_karne_a_30";
let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "position";
fieldValue417.value = "-4.2306 1.2525 -1.2225";
ProtoInstance416.fieldValue = new MFNode();

ProtoInstance416.fieldValue[0] = fieldValue417;

Transform415.children = new MFNode();

Transform415.children[0] = ProtoInstance416;

Group327.children[29] = Transform415;

let Transform418 = browser.currentScene.createNode("Transform");
let ProtoInstance419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance419.name = "Hydrogen";
ProtoInstance419.DEF = "cholesterol_karne_a_31";
let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "position";
fieldValue420.value = "-3.8443 2.786 -0.3705";
ProtoInstance419.fieldValue = new MFNode();

ProtoInstance419.fieldValue[0] = fieldValue420;

Transform418.children = new MFNode();

Transform418.children[0] = ProtoInstance419;

Group327.children[30] = Transform418;

let Transform421 = browser.currentScene.createNode("Transform");
let ProtoInstance422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance422.name = "Hydrogen";
ProtoInstance422.DEF = "cholesterol_karne_a_32";
let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "position";
fieldValue423.value = "-3.598 -0.0166 0.684";
ProtoInstance422.fieldValue = new MFNode();

ProtoInstance422.fieldValue[0] = fieldValue423;

Transform421.children = new MFNode();

Transform421.children[0] = ProtoInstance422;

Group327.children[31] = Transform421;

let Transform424 = browser.currentScene.createNode("Transform");
let ProtoInstance425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance425.name = "Hydrogen";
ProtoInstance425.DEF = "cholesterol_karne_a_33";
let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "position";
fieldValue426.value = "-2.9845 0.9926 2.8302";
ProtoInstance425.fieldValue = new MFNode();

ProtoInstance425.fieldValue[0] = fieldValue426;

Transform424.children = new MFNode();

Transform424.children[0] = ProtoInstance425;

Group327.children[32] = Transform424;

let Transform427 = browser.currentScene.createNode("Transform");
let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.name = "Hydrogen";
ProtoInstance428.DEF = "cholesterol_karne_a_34";
let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "position";
fieldValue429.value = "-3.1166 2.6452 2.1386";
ProtoInstance428.fieldValue = new MFNode();

ProtoInstance428.fieldValue[0] = fieldValue429;

Transform427.children = new MFNode();

Transform427.children[0] = ProtoInstance428;

Group327.children[33] = Transform427;

let Transform430 = browser.currentScene.createNode("Transform");
let ProtoInstance431 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance431.name = "Hydrogen";
ProtoInstance431.DEF = "cholesterol_karne_a_35";
let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "position";
fieldValue432.value = "-0.7974 0.546 3.2519";
ProtoInstance431.fieldValue = new MFNode();

ProtoInstance431.fieldValue[0] = fieldValue432;

Transform430.children = new MFNode();

Transform430.children[0] = ProtoInstance431;

Group327.children[34] = Transform430;

let Transform433 = browser.currentScene.createNode("Transform");
let ProtoInstance434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance434.name = "Oxygen";
ProtoInstance434.DEF = "cholesterol_karne_a_36";
let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "position";
fieldValue435.value = "-5.1826 1.2861 1.2631";
ProtoInstance434.fieldValue = new MFNode();

ProtoInstance434.fieldValue[0] = fieldValue435;

Transform433.children = new MFNode();

Transform433.children[0] = ProtoInstance434;

Group327.children[35] = Transform433;

let Transform436 = browser.currentScene.createNode("Transform");
let ProtoInstance437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance437.name = "Hydrogen";
ProtoInstance437.DEF = "cholesterol_karne_a_37";
let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "position";
fieldValue438.value = "1.3205 -0.0033 1.762";
ProtoInstance437.fieldValue = new MFNode();

ProtoInstance437.fieldValue[0] = fieldValue438;

Transform436.children = new MFNode();

Transform436.children[0] = ProtoInstance437;

Group327.children[36] = Transform436;

let Transform439 = browser.currentScene.createNode("Transform");
let ProtoInstance440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance440.name = "Hydrogen";
ProtoInstance440.DEF = "cholesterol_karne_a_38";
let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "position";
fieldValue441.value = "1.5536 1.406 2.8511";
ProtoInstance440.fieldValue = new MFNode();

ProtoInstance440.fieldValue[0] = fieldValue441;

Transform439.children = new MFNode();

Transform439.children[0] = ProtoInstance440;

Group327.children[37] = Transform439;

let Transform442 = browser.currentScene.createNode("Transform");
let ProtoInstance443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance443.name = "Hydrogen";
ProtoInstance443.DEF = "cholesterol_karne_a_39";
let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "position";
fieldValue444.value = "1.3568 2.9171 1.1476";
ProtoInstance443.fieldValue = new MFNode();

ProtoInstance443.fieldValue[0] = fieldValue444;

Transform442.children = new MFNode();

Transform442.children[0] = ProtoInstance443;

Group327.children[38] = Transform442;

let Transform445 = browser.currentScene.createNode("Transform");
let ProtoInstance446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance446.name = "Hydrogen";
ProtoInstance446.DEF = "cholesterol_karne_a_40";
let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "position";
fieldValue447.value = "0.255 0.6517 -0.5486";
ProtoInstance446.fieldValue = new MFNode();

ProtoInstance446.fieldValue[0] = fieldValue447;

Transform445.children = new MFNode();

Transform445.children[0] = ProtoInstance446;

Group327.children[39] = Transform445;

let Transform448 = browser.currentScene.createNode("Transform");
let ProtoInstance449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance449.name = "Hydrogen";
ProtoInstance449.DEF = "cholesterol_karne_a_41";
let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "position";
fieldValue450.value = "0.7064 3.5158 -1.4783";
ProtoInstance449.fieldValue = new MFNode();

ProtoInstance449.fieldValue[0] = fieldValue450;

Transform448.children = new MFNode();

Transform448.children[0] = ProtoInstance449;

Group327.children[40] = Transform448;

let Transform451 = browser.currentScene.createNode("Transform");
let ProtoInstance452 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance452.name = "Hydrogen";
ProtoInstance452.DEF = "cholesterol_karne_a_42";
let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "position";
fieldValue453.value = "0.0447 2.1427 -2.4288";
ProtoInstance452.fieldValue = new MFNode();

ProtoInstance452.fieldValue[0] = fieldValue453;

Transform451.children = new MFNode();

Transform451.children[0] = ProtoInstance452;

Group327.children[41] = Transform451;

let Transform454 = browser.currentScene.createNode("Transform");
let ProtoInstance455 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance455.name = "Hydrogen";
ProtoInstance455.DEF = "cholesterol_karne_a_43";
let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "position";
fieldValue456.value = "2.4284 2.646 -2.982";
ProtoInstance455.fieldValue = new MFNode();

ProtoInstance455.fieldValue[0] = fieldValue456;

Transform454.children = new MFNode();

Transform454.children[0] = ProtoInstance455;

Group327.children[42] = Transform454;

let Transform457 = browser.currentScene.createNode("Transform");
let ProtoInstance458 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance458.name = "Hydrogen";
ProtoInstance458.DEF = "cholesterol_karne_a_44";
let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "position";
fieldValue459.value = "2.2058 0.9869 -2.3304";
ProtoInstance458.fieldValue = new MFNode();

ProtoInstance458.fieldValue[0] = fieldValue459;

Transform457.children = new MFNode();

Transform457.children[0] = ProtoInstance458;

Group327.children[43] = Transform457;

let Transform460 = browser.currentScene.createNode("Transform");
let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "Hydrogen";
ProtoInstance461.DEF = "cholesterol_karne_a_45";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "position";
fieldValue462.value = "2.7354 0.5091 -0.0874";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

Transform460.children = new MFNode();

Transform460.children[0] = ProtoInstance461;

Group327.children[44] = Transform460;

let Transform463 = browser.currentScene.createNode("Transform");
let ProtoInstance464 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance464.name = "Hydrogen";
ProtoInstance464.DEF = "cholesterol_karne_a_46";
let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "position";
fieldValue465.value = "3.9396 0.8285 1.9599";
ProtoInstance464.fieldValue = new MFNode();

ProtoInstance464.fieldValue[0] = fieldValue465;

Transform463.children = new MFNode();

Transform463.children[0] = ProtoInstance464;

Group327.children[45] = Transform463;

let Transform466 = browser.currentScene.createNode("Transform");
let ProtoInstance467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance467.name = "Hydrogen";
ProtoInstance467.DEF = "cholesterol_karne_a_47";
let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "position";
fieldValue468.value = "3.9804 2.6119 1.7486";
ProtoInstance467.fieldValue = new MFNode();

ProtoInstance467.fieldValue[0] = fieldValue468;

Transform466.children = new MFNode();

Transform466.children[0] = ProtoInstance467;

Group327.children[46] = Transform466;

let Transform469 = browser.currentScene.createNode("Transform");
let ProtoInstance470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance470.name = "Hydrogen";
ProtoInstance470.DEF = "cholesterol_karne_a_48";
let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "position";
fieldValue471.value = "5.5588 0.4972 0.3832";
ProtoInstance470.fieldValue = new MFNode();

ProtoInstance470.fieldValue[0] = fieldValue471;

Transform469.children = new MFNode();

Transform469.children[0] = ProtoInstance470;

Group327.children[47] = Transform469;

let Transform472 = browser.currentScene.createNode("Transform");
let ProtoInstance473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance473.name = "Hydrogen";
ProtoInstance473.DEF = "cholesterol_karne_a_49";
let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "position";
fieldValue474.value = "5.9031 2.2515 0.5587";
ProtoInstance473.fieldValue = new MFNode();

ProtoInstance473.fieldValue[0] = fieldValue474;

Transform472.children = new MFNode();

Transform472.children[0] = ProtoInstance473;

Group327.children[48] = Transform472;

let Transform475 = browser.currentScene.createNode("Transform");
let ProtoInstance476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance476.name = "Hydrogen";
ProtoInstance476.DEF = "cholesterol_karne_a_50";
let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "position";
fieldValue477.value = "4.5225 0.7794 -1.6839";
ProtoInstance476.fieldValue = new MFNode();

ProtoInstance476.fieldValue[0] = fieldValue477;

Transform475.children = new MFNode();

Transform475.children[0] = ProtoInstance476;

Group327.children[49] = Transform475;

let Transform478 = browser.currentScene.createNode("Transform");
let ProtoInstance479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance479.name = "Hydrogen";
ProtoInstance479.DEF = "cholesterol_karne_a_51";
let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "position";
fieldValue480.value = "3.5516 4.3755 -1.5989";
ProtoInstance479.fieldValue = new MFNode();

ProtoInstance479.fieldValue[0] = fieldValue480;

Transform478.children = new MFNode();

Transform478.children[0] = ProtoInstance479;

Group327.children[50] = Transform478;

let Transform481 = browser.currentScene.createNode("Transform");
let ProtoInstance482 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance482.name = "Hydrogen";
ProtoInstance482.DEF = "cholesterol_karne_a_52";
let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "position";
fieldValue483.value = "3.9698 4.0607 0.1194";
ProtoInstance482.fieldValue = new MFNode();

ProtoInstance482.fieldValue[0] = fieldValue483;

Transform481.children = new MFNode();

Transform481.children[0] = ProtoInstance482;

Group327.children[51] = Transform481;

let Transform484 = browser.currentScene.createNode("Transform");
let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Hydrogen";
ProtoInstance485.DEF = "cholesterol_karne_a_53";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "position";
fieldValue486.value = "2.2486 4.203 -0.3745";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

Transform484.children = new MFNode();

Transform484.children[0] = ProtoInstance485;

Group327.children[52] = Transform484;

let Transform487 = browser.currentScene.createNode("Transform");
let ProtoInstance488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance488.name = "Hydrogen";
ProtoInstance488.DEF = "cholesterol_karne_a_54";
let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "position";
fieldValue489.value = "-2.3393 3.8408 0.5573";
ProtoInstance488.fieldValue = new MFNode();

ProtoInstance488.fieldValue[0] = fieldValue489;

Transform487.children = new MFNode();

Transform487.children[0] = ProtoInstance488;

Group327.children[53] = Transform487;

let Transform490 = browser.currentScene.createNode("Transform");
let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "Hydrogen";
ProtoInstance491.DEF = "cholesterol_karne_a_55";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "position";
fieldValue492.value = "-1.1313 4.1114 -0.7442";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

Transform490.children = new MFNode();

Transform490.children[0] = ProtoInstance491;

Group327.children[54] = Transform490;

let Transform493 = browser.currentScene.createNode("Transform");
let ProtoInstance494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance494.name = "Hydrogen";
ProtoInstance494.DEF = "cholesterol_karne_a_56";
let fieldValue495 = browser.currentScene.createNode("fieldValue");
fieldValue495.name = "position";
fieldValue495.value = "-0.6054 4.0592 0.9725";
ProtoInstance494.fieldValue = new MFNode();

ProtoInstance494.fieldValue[0] = fieldValue495;

Transform493.children = new MFNode();

Transform493.children[0] = ProtoInstance494;

Group327.children[55] = Transform493;

let Transform496 = browser.currentScene.createNode("Transform");
let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.name = "Hydrogen";
ProtoInstance497.DEF = "cholesterol_karne_a_57";
let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "position";
fieldValue498.value = "5.7945 3.4951 -1.5571";
ProtoInstance497.fieldValue = new MFNode();

ProtoInstance497.fieldValue[0] = fieldValue498;

Transform496.children = new MFNode();

Transform496.children[0] = ProtoInstance497;

Group327.children[56] = Transform496;

let Transform499 = browser.currentScene.createNode("Transform");
let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.name = "Hydrogen";
ProtoInstance500.DEF = "cholesterol_karne_a_58";
let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "position";
fieldValue501.value = "5.886 3.4016 -4.0098";
ProtoInstance500.fieldValue = new MFNode();

ProtoInstance500.fieldValue[0] = fieldValue501;

Transform499.children = new MFNode();

Transform499.children[0] = ProtoInstance500;

Group327.children[57] = Transform499;

let Transform502 = browser.currentScene.createNode("Transform");
let ProtoInstance503 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance503.name = "Hydrogen";
ProtoInstance503.DEF = "cholesterol_karne_a_59";
let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "position";
fieldValue504.value = "4.2048 3.4527 -3.3792";
ProtoInstance503.fieldValue = new MFNode();

ProtoInstance503.fieldValue[0] = fieldValue504;

Transform502.children = new MFNode();

Transform502.children[0] = ProtoInstance503;

Group327.children[58] = Transform502;

let Transform505 = browser.currentScene.createNode("Transform");
let ProtoInstance506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance506.name = "Hydrogen";
ProtoInstance506.DEF = "cholesterol_karne_a_60";
let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "position";
fieldValue507.value = "4.8914 1.9061 -3.9818";
ProtoInstance506.fieldValue = new MFNode();

ProtoInstance506.fieldValue[0] = fieldValue507;

Transform505.children = new MFNode();

Transform505.children[0] = ProtoInstance506;

Group327.children[59] = Transform505;

let Transform508 = browser.currentScene.createNode("Transform");
let ProtoInstance509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance509.name = "Hydrogen";
ProtoInstance509.DEF = "cholesterol_karne_a_61";
let fieldValue510 = browser.currentScene.createNode("fieldValue");
fieldValue510.name = "position";
fieldValue510.value = "6.9441 0.9731 -2.8306";
ProtoInstance509.fieldValue = new MFNode();

ProtoInstance509.fieldValue[0] = fieldValue510;

Transform508.children = new MFNode();

Transform508.children[0] = ProtoInstance509;

Group327.children[60] = Transform508;

let Transform511 = browser.currentScene.createNode("Transform");
let ProtoInstance512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance512.name = "Hydrogen";
ProtoInstance512.DEF = "cholesterol_karne_a_62";
let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "position";
fieldValue513.value = "7.2381 1.4013 -1.1111";
ProtoInstance512.fieldValue = new MFNode();

ProtoInstance512.fieldValue[0] = fieldValue513;

Transform511.children = new MFNode();

Transform511.children[0] = ProtoInstance512;

Group327.children[61] = Transform511;

let Transform514 = browser.currentScene.createNode("Transform");
let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.name = "Hydrogen";
ProtoInstance515.DEF = "cholesterol_karne_a_63";
let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "position";
fieldValue516.value = "8.1969 3.4944 -1.8026";
ProtoInstance515.fieldValue = new MFNode();

ProtoInstance515.fieldValue[0] = fieldValue516;

Transform514.children = new MFNode();

Transform514.children[0] = ProtoInstance515;

Group327.children[62] = Transform514;

let Transform517 = browser.currentScene.createNode("Transform");
let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.name = "Hydrogen";
ProtoInstance518.DEF = "cholesterol_karne_a_64";
let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "position";
fieldValue519.value = "7.9155 3.0506 -3.5203";
ProtoInstance518.fieldValue = new MFNode();

ProtoInstance518.fieldValue[0] = fieldValue519;

Transform517.children = new MFNode();

Transform517.children[0] = ProtoInstance518;

Group327.children[63] = Transform517;

let Transform520 = browser.currentScene.createNode("Transform");
let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.name = "Hydrogen";
ProtoInstance521.DEF = "cholesterol_karne_a_65";
let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "position";
fieldValue522.value = "9.4247 1.1825 -3.3239";
ProtoInstance521.fieldValue = new MFNode();

ProtoInstance521.fieldValue[0] = fieldValue522;

Transform520.children = new MFNode();

Transform520.children[0] = ProtoInstance521;

Group327.children[64] = Transform520;

let Transform523 = browser.currentScene.createNode("Transform");
let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.name = "Hydrogen";
ProtoInstance524.DEF = "cholesterol_karne_a_66";
let fieldValue525 = browser.currentScene.createNode("fieldValue");
fieldValue525.name = "position";
fieldValue525.value = "9.6484 1.5118 -1.5723";
ProtoInstance524.fieldValue = new MFNode();

ProtoInstance524.fieldValue[0] = fieldValue525;

Transform523.children = new MFNode();

Transform523.children[0] = ProtoInstance524;

Group327.children[65] = Transform523;

let Transform526 = browser.currentScene.createNode("Transform");
let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.name = "Hydrogen";
ProtoInstance527.DEF = "cholesterol_karne_a_67";
let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "position";
fieldValue528.value = "10.7271 3.6239 -2.0872";
ProtoInstance527.fieldValue = new MFNode();

ProtoInstance527.fieldValue[0] = fieldValue528;

Transform526.children = new MFNode();

Transform526.children[0] = ProtoInstance527;

Group327.children[66] = Transform526;

let Transform529 = browser.currentScene.createNode("Transform");
let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.name = "Hydrogen";
ProtoInstance530.DEF = "cholesterol_karne_a_68";
let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "position";
fieldValue531.value = "11.4721 4.2419 -4.2967";
ProtoInstance530.fieldValue = new MFNode();

ProtoInstance530.fieldValue[0] = fieldValue531;

Transform529.children = new MFNode();

Transform529.children[0] = ProtoInstance530;

Group327.children[67] = Transform529;

let Transform532 = browser.currentScene.createNode("Transform");
let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.name = "Hydrogen";
ProtoInstance533.DEF = "cholesterol_karne_a_69";
let fieldValue534 = browser.currentScene.createNode("fieldValue");
fieldValue534.name = "position";
fieldValue534.value = "9.6877 4.2967 -4.0977";
ProtoInstance533.fieldValue = new MFNode();

ProtoInstance533.fieldValue[0] = fieldValue534;

Transform532.children = new MFNode();

Transform532.children[0] = ProtoInstance533;

Group327.children[68] = Transform532;

let Transform535 = browser.currentScene.createNode("Transform");
let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.name = "Hydrogen";
ProtoInstance536.DEF = "cholesterol_karne_a_70";
let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "position";
fieldValue537.value = "10.4502 2.9399 -4.9946";
ProtoInstance536.fieldValue = new MFNode();

ProtoInstance536.fieldValue[0] = fieldValue537;

Transform535.children = new MFNode();

Transform535.children[0] = ProtoInstance536;

Group327.children[69] = Transform535;

let Transform538 = browser.currentScene.createNode("Transform");
let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "Hydrogen";
ProtoInstance539.DEF = "cholesterol_karne_a_71";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "position";
fieldValue540.value = "11.9217 1.5002 -1.7613";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

Transform538.children = new MFNode();

Transform538.children[0] = ProtoInstance539;

Group327.children[70] = Transform538;

let Transform541 = browser.currentScene.createNode("Transform");
let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.name = "Hydrogen";
ProtoInstance542.DEF = "cholesterol_karne_a_72";
let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "position";
fieldValue543.value = "12.8265 2.6762 -2.7736";
ProtoInstance542.fieldValue = new MFNode();

ProtoInstance542.fieldValue[0] = fieldValue543;

Transform541.children = new MFNode();

Transform541.children[0] = ProtoInstance542;

Group327.children[71] = Transform541;

let Transform544 = browser.currentScene.createNode("Transform");
let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.name = "Hydrogen";
ProtoInstance545.DEF = "cholesterol_karne_a_73";
let fieldValue546 = browser.currentScene.createNode("fieldValue");
fieldValue546.name = "position";
fieldValue546.value = "11.991 1.2847 -3.5432";
ProtoInstance545.fieldValue = new MFNode();

ProtoInstance545.fieldValue[0] = fieldValue546;

Transform544.children = new MFNode();

Transform544.children[0] = ProtoInstance545;

Group327.children[72] = Transform544;

let Transform547 = browser.currentScene.createNode("Transform");
let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.name = "Hydrogen";
ProtoInstance548.DEF = "cholesterol_karne_a_74";
let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "position";
fieldValue549.value = "-5.7836 0.9649 0.6011";
ProtoInstance548.fieldValue = new MFNode();

ProtoInstance548.fieldValue[0] = fieldValue549;

Transform547.children = new MFNode();

Transform547.children[0] = ProtoInstance548;

Group327.children[73] = Transform547;

browser.currentScene.children[22] = Group327;

let Group550 = browser.currentScene.createNode("Group");
let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.name = "line";
ProtoInstance551.DEF = "cholesterol_karne_b_1";
let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "bond_set";
fieldValue552.value = "-2.1059 1.6157 -0.9459 -1.9901 2.1889 -1.8776";
ProtoInstance551.fieldValue = new MFNode();

ProtoInstance551.fieldValue[0] = fieldValue552;

Group550.children = new MFNode();

Group550.children[0] = ProtoInstance551;

let ProtoInstance553 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance553.name = "line";
ProtoInstance553.DEF = "cholesterol_karne_b_2";
let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "bond_set";
fieldValue554.value = "-3.5787 1.7234 -0.4719 -2.1059 1.6157 -0.9459";
ProtoInstance553.fieldValue = new MFNode();

ProtoInstance553.fieldValue[0] = fieldValue554;

Group550.children[1] = ProtoInstance553;

let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.name = "line";
ProtoInstance555.DEF = "cholesterol_karne_b_3";
let fieldValue556 = browser.currentScene.createNode("fieldValue");
fieldValue556.name = "bond_set";
fieldValue556.value = "-2.1059 1.6157 -0.9459 -1.0963 2.1783 0.1259";
ProtoInstance555.fieldValue = new MFNode();

ProtoInstance555.fieldValue[0] = fieldValue556;

Group550.children[2] = ProtoInstance555;

let ProtoInstance557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance557.name = "line";
ProtoInstance557.DEF = "cholesterol_karne_b_4";
let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "bond_set";
fieldValue558.value = "-3.7797 1.0607 0.812 -3.5787 1.7234 -0.4719";
ProtoInstance557.fieldValue = new MFNode();

ProtoInstance557.fieldValue[0] = fieldValue558;

Group550.children[3] = ProtoInstance557;

let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.name = "line";
ProtoInstance559.DEF = "cholesterol_karne_b_5";
let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "bond_set";
fieldValue560.value = "-3.7797 1.0607 0.812 -2.8482 1.6003 1.9235";
ProtoInstance559.fieldValue = new MFNode();

ProtoInstance559.fieldValue[0] = fieldValue560;

Group550.children[4] = ProtoInstance559;

let ProtoInstance561 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance561.name = "line";
ProtoInstance561.DEF = "cholesterol_karne_b_6";
let fieldValue562 = browser.currentScene.createNode("fieldValue");
fieldValue562.name = "bond_set";
fieldValue562.value = "-5.1826 1.2861 1.2631 -3.7797 1.0607 0.812";
ProtoInstance561.fieldValue = new MFNode();

ProtoInstance561.fieldValue[0] = fieldValue562;

Group550.children[5] = ProtoInstance561;

let ProtoInstance563 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance563.name = "line";
ProtoInstance563.DEF = "cholesterol_karne_b_7";
let fieldValue564 = browser.currentScene.createNode("fieldValue");
fieldValue564.name = "bond_set";
fieldValue564.value = "-2.8482 1.6003 1.9235 -1.372 1.5412 1.5004";
ProtoInstance563.fieldValue = new MFNode();

ProtoInstance563.fieldValue[0] = fieldValue564;

Group550.children[6] = ProtoInstance563;

let ProtoInstance565 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance565.name = "line";
ProtoInstance565.DEF = "cholesterol_karne_b_8";
let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "bond_set";
fieldValue566.value = "-1.3920000000000001 1.5412 1.5004 -0.4902 1.006 2.3207";
ProtoInstance565.fieldValue = new MFNode();

ProtoInstance565.fieldValue[0] = fieldValue566;

Group550.children[7] = ProtoInstance565;

let ProtoInstance567 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance567.name = "line";
ProtoInstance567.DEF = "cholesterol_karne_b_8_2";
let fieldValue568 = browser.currentScene.createNode("fieldValue");
fieldValue568.name = "bond_set";
fieldValue568.value = "-1.352 1.5412 1.5004 -0.4502 1.006 2.3207";
ProtoInstance567.fieldValue = new MFNode();

ProtoInstance567.fieldValue[0] = fieldValue568;

Group550.children[8] = ProtoInstance567;

let ProtoInstance569 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance569.name = "line";
ProtoInstance569.DEF = "cholesterol_karne_b_9";
let fieldValue570 = browser.currentScene.createNode("fieldValue");
fieldValue570.name = "bond_set";
fieldValue570.value = "-1.372 1.5412 1.5004 -1.0963 2.1783 0.1259";
ProtoInstance569.fieldValue = new MFNode();

ProtoInstance569.fieldValue[0] = fieldValue570;

Group550.children[9] = ProtoInstance569;

let ProtoInstance571 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance571.name = "line";
ProtoInstance571.DEF = "cholesterol_karne_b_10";
let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "bond_set";
fieldValue572.value = "-0.4702 1.006 2.3207 1.0043 1.0283 1.9762";
ProtoInstance571.fieldValue = new MFNode();

ProtoInstance571.fieldValue[0] = fieldValue572;

Group550.children[10] = ProtoInstance571;

let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.name = "line";
ProtoInstance573.DEF = "cholesterol_karne_b_11";
let fieldValue574 = browser.currentScene.createNode("fieldValue");
fieldValue574.name = "bond_set";
fieldValue574.value = "1.0043 1.0283 1.9762 1.3614 1.8701 0.8105";
ProtoInstance573.fieldValue = new MFNode();

ProtoInstance573.fieldValue[0] = fieldValue574;

Group550.children[11] = ProtoInstance573;

let ProtoInstance575 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance575.name = "line";
ProtoInstance575.DEF = "cholesterol_karne_b_12";
let fieldValue576 = browser.currentScene.createNode("fieldValue");
fieldValue576.name = "bond_set";
fieldValue576.value = "0.3215 1.7261 -0.3221 1.3614 1.8701 0.8105";
ProtoInstance575.fieldValue = new MFNode();

ProtoInstance575.fieldValue[0] = fieldValue576;

Group550.children[12] = ProtoInstance575;

let ProtoInstance577 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance577.name = "line";
ProtoInstance577.DEF = "cholesterol_karne_b_13";
let fieldValue578 = browser.currentScene.createNode("fieldValue");
fieldValue578.name = "bond_set";
fieldValue578.value = "1.3614 1.8701 0.8105 2.7895 1.5563 0.2449";
ProtoInstance577.fieldValue = new MFNode();

ProtoInstance577.fieldValue[0] = fieldValue578;

Group550.children[13] = ProtoInstance577;

let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.name = "line";
ProtoInstance579.DEF = "cholesterol_karne_b_14";
let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "bond_set";
fieldValue580.value = "-1.0963 2.1783 0.1259 0.3215 1.7261 -0.3221";
ProtoInstance579.fieldValue = new MFNode();

ProtoInstance579.fieldValue[0] = fieldValue580;

Group550.children[14] = ProtoInstance579;

let ProtoInstance581 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance581.name = "line";
ProtoInstance581.DEF = "cholesterol_karne_b_15";
let fieldValue582 = browser.currentScene.createNode("fieldValue");
fieldValue582.name = "bond_set";
fieldValue582.value = "0.3215 1.7261 -0.3221 0.7503 2.4279 -1.6345";
ProtoInstance581.fieldValue = new MFNode();

ProtoInstance581.fieldValue[0] = fieldValue582;

Group550.children[15] = ProtoInstance581;

let ProtoInstance583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance583.name = "line";
ProtoInstance583.DEF = "cholesterol_karne_b_16";
let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "bond_set";
fieldValue584.value = "-1.0963 2.1783 0.1259 -1.3066 3.6419 0.2349";
ProtoInstance583.fieldValue = new MFNode();

ProtoInstance583.fieldValue[0] = fieldValue584;

Group550.children[16] = ProtoInstance583;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.name = "line";
ProtoInstance585.DEF = "cholesterol_karne_b_17";
let fieldValue586 = browser.currentScene.createNode("fieldValue");
fieldValue586.name = "bond_set";
fieldValue586.value = "0.7503 2.4279 -1.6345 2.1677 2.0593 -2.0888";
ProtoInstance585.fieldValue = new MFNode();

ProtoInstance585.fieldValue[0] = fieldValue586;

Group550.children[17] = ProtoInstance585;

let ProtoInstance587 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance587.name = "line";
ProtoInstance587.DEF = "cholesterol_karne_b_18";
let fieldValue588 = browser.currentScene.createNode("fieldValue");
fieldValue588.name = "bond_set";
fieldValue588.value = "2.1677 2.0593 -2.0888 3.1972 2.372 -0.9408";
ProtoInstance587.fieldValue = new MFNode();

ProtoInstance587.fieldValue[0] = fieldValue588;

Group550.children[18] = ProtoInstance587;

let ProtoInstance589 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance589.name = "line";
ProtoInstance589.DEF = "cholesterol_karne_b_19";
let fieldValue590 = browser.currentScene.createNode("fieldValue");
fieldValue590.name = "bond_set";
fieldValue590.value = "3.1972 2.372 -0.9408 4.6487 1.7527 -1.1872";
ProtoInstance589.fieldValue = new MFNode();

ProtoInstance589.fieldValue[0] = fieldValue590;

Group550.children[19] = ProtoInstance589;

let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.name = "line";
ProtoInstance591.DEF = "cholesterol_karne_b_20";
let fieldValue592 = browser.currentScene.createNode("fieldValue");
fieldValue592.name = "bond_set";
fieldValue592.value = "3.1972 2.372 -0.9408 3.245 3.8521 -0.6813";
ProtoInstance591.fieldValue = new MFNode();

ProtoInstance591.fieldValue[0] = fieldValue592;

Group550.children[20] = ProtoInstance591;

let ProtoInstance593 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance593.name = "line";
ProtoInstance593.DEF = "cholesterol_karne_b_21";
let fieldValue594 = browser.currentScene.createNode("fieldValue");
fieldValue594.name = "bond_set";
fieldValue594.value = "2.7895 1.5563 0.2449 3.1972 2.372 -0.9408";
ProtoInstance593.fieldValue = new MFNode();

ProtoInstance593.fieldValue[0] = fieldValue594;

Group550.children[21] = ProtoInstance593;

let ProtoInstance595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance595.name = "line";
ProtoInstance595.DEF = "cholesterol_karne_b_22";
let fieldValue596 = browser.currentScene.createNode("fieldValue");
fieldValue596.name = "bond_set";
fieldValue596.value = "2.7895 1.5563 0.2449 3.9663 1.6453 1.2237";
ProtoInstance595.fieldValue = new MFNode();

ProtoInstance595.fieldValue[0] = fieldValue596;

Group550.children[22] = ProtoInstance595;

let ProtoInstance597 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance597.name = "line";
ProtoInstance597.DEF = "cholesterol_karne_b_23";
let fieldValue598 = browser.currentScene.createNode("fieldValue");
fieldValue598.name = "bond_set";
fieldValue598.value = "3.9663 1.6453 1.2237 5.1354 1.5087 0.296";
ProtoInstance597.fieldValue = new MFNode();

ProtoInstance597.fieldValue[0] = fieldValue598;

Group550.children[23] = ProtoInstance597;

let ProtoInstance599 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance599.name = "line";
ProtoInstance599.DEF = "cholesterol_karne_b_24";
let fieldValue600 = browser.currentScene.createNode("fieldValue");
fieldValue600.name = "bond_set";
fieldValue600.value = "4.6487 1.7527 -1.1872 5.1354 1.5087 0.296";
ProtoInstance599.fieldValue = new MFNode();

ProtoInstance599.fieldValue[0] = fieldValue600;

Group550.children[24] = ProtoInstance599;

let ProtoInstance601 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance601.name = "line";
ProtoInstance601.DEF = "cholesterol_karne_b_25";
let fieldValue602 = browser.currentScene.createNode("fieldValue");
fieldValue602.name = "bond_set";
fieldValue602.value = "4.6487 1.7527 -1.1872 5.6329 2.5278 -2.0553";
ProtoInstance601.fieldValue = new MFNode();

ProtoInstance601.fieldValue[0] = fieldValue602;

Group550.children[25] = ProtoInstance601;

let ProtoInstance603 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance603.name = "line";
ProtoInstance603.DEF = "cholesterol_karne_b_26";
let fieldValue604 = browser.currentScene.createNode("fieldValue");
fieldValue604.name = "bond_set";
fieldValue604.value = "5.6329 2.5278 -2.0553 5.118 2.844 -3.4537";
ProtoInstance603.fieldValue = new MFNode();

ProtoInstance603.fieldValue[0] = fieldValue604;

Group550.children[26] = ProtoInstance603;

let ProtoInstance605 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance605.name = "line";
ProtoInstance605.DEF = "cholesterol_karne_b_27";
let fieldValue606 = browser.currentScene.createNode("fieldValue");
fieldValue606.name = "bond_set";
fieldValue606.value = "5.6329 2.5278 -2.0553 7.0185 1.8022 -2.1116";
ProtoInstance605.fieldValue = new MFNode();

ProtoInstance605.fieldValue[0] = fieldValue606;

Group550.children[27] = ProtoInstance605;

let ProtoInstance607 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance607.name = "line";
ProtoInstance607.DEF = "cholesterol_karne_b_28";
let fieldValue608 = browser.currentScene.createNode("fieldValue");
fieldValue608.name = "bond_set";
fieldValue608.value = "7.0185 1.8022 -2.1116 8.1314 2.6591 -2.5153";
ProtoInstance607.fieldValue = new MFNode();

ProtoInstance607.fieldValue[0] = fieldValue608;

Group550.children[28] = ProtoInstance607;

let ProtoInstance609 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance609.name = "line";
ProtoInstance609.DEF = "cholesterol_karne_b_29";
let fieldValue610 = browser.currentScene.createNode("fieldValue");
fieldValue610.name = "bond_set";
fieldValue610.value = "8.1314 2.6591 -2.5153 9.4748 1.9697 -2.5572";
ProtoInstance609.fieldValue = new MFNode();

ProtoInstance609.fieldValue[0] = fieldValue610;

Group550.children[29] = ProtoInstance609;

let ProtoInstance611 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance611.name = "line";
ProtoInstance611.DEF = "cholesterol_karne_b_30";
let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "bond_set";
fieldValue612.value = "9.4748 1.9697 -2.5572 10.6837 2.862 -2.8793";
ProtoInstance611.fieldValue = new MFNode();

ProtoInstance611.fieldValue[0] = fieldValue612;

Group550.children[30] = ProtoInstance611;

let ProtoInstance613 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance613.name = "line";
ProtoInstance613.DEF = "cholesterol_karne_b_31";
let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "bond_set";
fieldValue614.value = "10.6837 2.862 -2.8793 10.5656 3.6361 -4.1508";
ProtoInstance613.fieldValue = new MFNode();

ProtoInstance613.fieldValue[0] = fieldValue614;

Group550.children[31] = ProtoInstance613;

let ProtoInstance615 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance615.name = "line";
ProtoInstance615.DEF = "cholesterol_karne_b_32";
let fieldValue616 = browser.currentScene.createNode("fieldValue");
fieldValue616.name = "bond_set";
fieldValue616.value = "10.6837 2.862 -2.8793 11.9428 2.0228 -2.729";
ProtoInstance615.fieldValue = new MFNode();

ProtoInstance615.fieldValue[0] = fieldValue616;

Group550.children[32] = ProtoInstance615;

let ProtoInstance617 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance617.name = "line";
ProtoInstance617.DEF = "cholesterol_karne_b_33";
let fieldValue618 = browser.currentScene.createNode("fieldValue");
fieldValue618.name = "bond_set";
fieldValue618.value = "-2.1059 1.6157 -0.9459 -1.8702 0.5579 -1.1345";
ProtoInstance617.fieldValue = new MFNode();

ProtoInstance617.fieldValue[0] = fieldValue618;

Group550.children[33] = ProtoInstance617;

let ProtoInstance619 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance619.name = "line";
ProtoInstance619.DEF = "cholesterol_karne_b_34";
let fieldValue620 = browser.currentScene.createNode("fieldValue");
fieldValue620.name = "bond_set";
fieldValue620.value = "-3.5787 1.7234 -0.4719 -4.2306 1.2525 -1.2225";
ProtoInstance619.fieldValue = new MFNode();

ProtoInstance619.fieldValue[0] = fieldValue620;

Group550.children[34] = ProtoInstance619;

let ProtoInstance621 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance621.name = "line";
ProtoInstance621.DEF = "cholesterol_karne_b_35";
let fieldValue622 = browser.currentScene.createNode("fieldValue");
fieldValue622.name = "bond_set";
fieldValue622.value = "-3.5787 1.7234 -0.4719 -3.8443 2.786 -0.3705";
ProtoInstance621.fieldValue = new MFNode();

ProtoInstance621.fieldValue[0] = fieldValue622;

Group550.children[35] = ProtoInstance621;

let ProtoInstance623 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance623.name = "line";
ProtoInstance623.DEF = "cholesterol_karne_b_36";
let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "bond_set";
fieldValue624.value = "-3.7797 1.0607 0.812 -3.598 -0.0166 0.684";
ProtoInstance623.fieldValue = new MFNode();

ProtoInstance623.fieldValue[0] = fieldValue624;

Group550.children[36] = ProtoInstance623;

let ProtoInstance625 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance625.name = "line";
ProtoInstance625.DEF = "cholesterol_karne_b_37";
let fieldValue626 = browser.currentScene.createNode("fieldValue");
fieldValue626.name = "bond_set";
fieldValue626.value = "-2.8482 1.6003 1.9235 -2.9845 0.9926 2.8302";
ProtoInstance625.fieldValue = new MFNode();

ProtoInstance625.fieldValue[0] = fieldValue626;

Group550.children[37] = ProtoInstance625;

let ProtoInstance627 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance627.name = "line";
ProtoInstance627.DEF = "cholesterol_karne_b_38";
let fieldValue628 = browser.currentScene.createNode("fieldValue");
fieldValue628.name = "bond_set";
fieldValue628.value = "-2.8482 1.6003 1.9235 -3.1166 2.6452 2.1386";
ProtoInstance627.fieldValue = new MFNode();

ProtoInstance627.fieldValue[0] = fieldValue628;

Group550.children[38] = ProtoInstance627;

let ProtoInstance629 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance629.name = "line";
ProtoInstance629.DEF = "cholesterol_karne_b_39";
let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "bond_set";
fieldValue630.value = "-0.4702 1.006 2.3207 -0.7974 0.546 3.2519";
ProtoInstance629.fieldValue = new MFNode();

ProtoInstance629.fieldValue[0] = fieldValue630;

Group550.children[39] = ProtoInstance629;

let ProtoInstance631 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance631.name = "line";
ProtoInstance631.DEF = "cholesterol_karne_b_40";
let fieldValue632 = browser.currentScene.createNode("fieldValue");
fieldValue632.name = "bond_set";
fieldValue632.value = "1.0043 1.0283 1.9762 1.3205 -0.0033 1.762";
ProtoInstance631.fieldValue = new MFNode();

ProtoInstance631.fieldValue[0] = fieldValue632;

Group550.children[40] = ProtoInstance631;

let ProtoInstance633 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance633.name = "line";
ProtoInstance633.DEF = "cholesterol_karne_b_41";
let fieldValue634 = browser.currentScene.createNode("fieldValue");
fieldValue634.name = "bond_set";
fieldValue634.value = "1.0043 1.0283 1.9762 1.5536 1.406 2.8511";
ProtoInstance633.fieldValue = new MFNode();

ProtoInstance633.fieldValue[0] = fieldValue634;

Group550.children[41] = ProtoInstance633;

let ProtoInstance635 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance635.name = "line";
ProtoInstance635.DEF = "cholesterol_karne_b_42";
let fieldValue636 = browser.currentScene.createNode("fieldValue");
fieldValue636.name = "bond_set";
fieldValue636.value = "1.3614 1.8701 0.8105 1.3568 2.9171 1.1476";
ProtoInstance635.fieldValue = new MFNode();

ProtoInstance635.fieldValue[0] = fieldValue636;

Group550.children[42] = ProtoInstance635;

let ProtoInstance637 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance637.name = "line";
ProtoInstance637.DEF = "cholesterol_karne_b_43";
let fieldValue638 = browser.currentScene.createNode("fieldValue");
fieldValue638.name = "bond_set";
fieldValue638.value = "0.3215 1.7261 -0.3221 0.255 0.6517 -0.5486";
ProtoInstance637.fieldValue = new MFNode();

ProtoInstance637.fieldValue[0] = fieldValue638;

Group550.children[43] = ProtoInstance637;

let ProtoInstance639 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance639.name = "line";
ProtoInstance639.DEF = "cholesterol_karne_b_44";
let fieldValue640 = browser.currentScene.createNode("fieldValue");
fieldValue640.name = "bond_set";
fieldValue640.value = "0.7503 2.4279 -1.6345 0.7064 3.5158 -1.4783";
ProtoInstance639.fieldValue = new MFNode();

ProtoInstance639.fieldValue[0] = fieldValue640;

Group550.children[44] = ProtoInstance639;

let ProtoInstance641 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance641.name = "line";
ProtoInstance641.DEF = "cholesterol_karne_b_45";
let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "bond_set";
fieldValue642.value = "0.7503 2.4279 -1.6345 0.0447 2.1427 -2.4288";
ProtoInstance641.fieldValue = new MFNode();

ProtoInstance641.fieldValue[0] = fieldValue642;

Group550.children[45] = ProtoInstance641;

let ProtoInstance643 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance643.name = "line";
ProtoInstance643.DEF = "cholesterol_karne_b_46";
let fieldValue644 = browser.currentScene.createNode("fieldValue");
fieldValue644.name = "bond_set";
fieldValue644.value = "2.1677 2.0593 -2.0888 2.4284 2.646 -2.982";
ProtoInstance643.fieldValue = new MFNode();

ProtoInstance643.fieldValue[0] = fieldValue644;

Group550.children[46] = ProtoInstance643;

let ProtoInstance645 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance645.name = "line";
ProtoInstance645.DEF = "cholesterol_karne_b_47";
let fieldValue646 = browser.currentScene.createNode("fieldValue");
fieldValue646.name = "bond_set";
fieldValue646.value = "2.1677 2.0593 -2.0888 2.2058 0.9869 -2.3304";
ProtoInstance645.fieldValue = new MFNode();

ProtoInstance645.fieldValue[0] = fieldValue646;

Group550.children[47] = ProtoInstance645;

let ProtoInstance647 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance647.name = "line";
ProtoInstance647.DEF = "cholesterol_karne_b_48";
let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "bond_set";
fieldValue648.value = "2.7895 1.5563 0.2449 2.7354 0.5091 -0.0874";
ProtoInstance647.fieldValue = new MFNode();

ProtoInstance647.fieldValue[0] = fieldValue648;

Group550.children[48] = ProtoInstance647;

let ProtoInstance649 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance649.name = "line";
ProtoInstance649.DEF = "cholesterol_karne_b_49";
let fieldValue650 = browser.currentScene.createNode("fieldValue");
fieldValue650.name = "bond_set";
fieldValue650.value = "3.9663 1.6453 1.2237 3.9396 0.8285 1.9599";
ProtoInstance649.fieldValue = new MFNode();

ProtoInstance649.fieldValue[0] = fieldValue650;

Group550.children[49] = ProtoInstance649;

let ProtoInstance651 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance651.name = "line";
ProtoInstance651.DEF = "cholesterol_karne_b_50";
let fieldValue652 = browser.currentScene.createNode("fieldValue");
fieldValue652.name = "bond_set";
fieldValue652.value = "3.9663 1.6453 1.2237 3.9804 2.6119 1.7486";
ProtoInstance651.fieldValue = new MFNode();

ProtoInstance651.fieldValue[0] = fieldValue652;

Group550.children[50] = ProtoInstance651;

let ProtoInstance653 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance653.name = "line";
ProtoInstance653.DEF = "cholesterol_karne_b_51";
let fieldValue654 = browser.currentScene.createNode("fieldValue");
fieldValue654.name = "bond_set";
fieldValue654.value = "5.1354 1.5087 0.296 5.5588 0.4972 0.3832";
ProtoInstance653.fieldValue = new MFNode();

ProtoInstance653.fieldValue[0] = fieldValue654;

Group550.children[51] = ProtoInstance653;

let ProtoInstance655 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance655.name = "line";
ProtoInstance655.DEF = "cholesterol_karne_b_52";
let fieldValue656 = browser.currentScene.createNode("fieldValue");
fieldValue656.name = "bond_set";
fieldValue656.value = "5.1354 1.5087 0.296 5.9031 2.2515 0.5587";
ProtoInstance655.fieldValue = new MFNode();

ProtoInstance655.fieldValue[0] = fieldValue656;

Group550.children[52] = ProtoInstance655;

let ProtoInstance657 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance657.name = "line";
ProtoInstance657.DEF = "cholesterol_karne_b_53";
let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "bond_set";
fieldValue658.value = "4.6487 1.7527 -1.1872 4.5225 0.7794 -1.6839";
ProtoInstance657.fieldValue = new MFNode();

ProtoInstance657.fieldValue[0] = fieldValue658;

Group550.children[53] = ProtoInstance657;

let ProtoInstance659 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance659.name = "line";
ProtoInstance659.DEF = "cholesterol_karne_b_54";
let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "bond_set";
fieldValue660.value = "3.245 3.8521 -0.6813 3.5516 4.3755 -1.5989";
ProtoInstance659.fieldValue = new MFNode();

ProtoInstance659.fieldValue[0] = fieldValue660;

Group550.children[54] = ProtoInstance659;

let ProtoInstance661 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance661.name = "line";
ProtoInstance661.DEF = "cholesterol_karne_b_55";
let fieldValue662 = browser.currentScene.createNode("fieldValue");
fieldValue662.name = "bond_set";
fieldValue662.value = "3.245 3.8521 -0.6813 3.9698 4.0607 0.1194";
ProtoInstance661.fieldValue = new MFNode();

ProtoInstance661.fieldValue[0] = fieldValue662;

Group550.children[55] = ProtoInstance661;

let ProtoInstance663 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance663.name = "line";
ProtoInstance663.DEF = "cholesterol_karne_b_56";
let fieldValue664 = browser.currentScene.createNode("fieldValue");
fieldValue664.name = "bond_set";
fieldValue664.value = "3.245 3.8521 -0.6813 2.2486 4.203 -0.3745";
ProtoInstance663.fieldValue = new MFNode();

ProtoInstance663.fieldValue[0] = fieldValue664;

Group550.children[56] = ProtoInstance663;

let ProtoInstance665 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance665.name = "line";
ProtoInstance665.DEF = "cholesterol_karne_b_57";
let fieldValue666 = browser.currentScene.createNode("fieldValue");
fieldValue666.name = "bond_set";
fieldValue666.value = "-1.3066 3.6419 0.2349 -2.3393 3.8408 0.5573";
ProtoInstance665.fieldValue = new MFNode();

ProtoInstance665.fieldValue[0] = fieldValue666;

Group550.children[57] = ProtoInstance665;

let ProtoInstance667 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance667.name = "line";
ProtoInstance667.DEF = "cholesterol_karne_b_58";
let fieldValue668 = browser.currentScene.createNode("fieldValue");
fieldValue668.name = "bond_set";
fieldValue668.value = "-1.3066 3.6419 0.2349 -1.1313 4.1114 -0.7442";
ProtoInstance667.fieldValue = new MFNode();

ProtoInstance667.fieldValue[0] = fieldValue668;

Group550.children[58] = ProtoInstance667;

let ProtoInstance669 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance669.name = "line";
ProtoInstance669.DEF = "cholesterol_karne_b_59";
let fieldValue670 = browser.currentScene.createNode("fieldValue");
fieldValue670.name = "bond_set";
fieldValue670.value = "-1.3066 3.6419 0.2349 -0.6054 4.0592 0.9725";
ProtoInstance669.fieldValue = new MFNode();

ProtoInstance669.fieldValue[0] = fieldValue670;

Group550.children[59] = ProtoInstance669;

let ProtoInstance671 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance671.name = "line";
ProtoInstance671.DEF = "cholesterol_karne_b_60";
let fieldValue672 = browser.currentScene.createNode("fieldValue");
fieldValue672.name = "bond_set";
fieldValue672.value = "5.6329 2.5278 -2.0553 5.7945 3.4951 -1.5571";
ProtoInstance671.fieldValue = new MFNode();

ProtoInstance671.fieldValue[0] = fieldValue672;

Group550.children[60] = ProtoInstance671;

let ProtoInstance673 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance673.name = "line";
ProtoInstance673.DEF = "cholesterol_karne_b_61";
let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "bond_set";
fieldValue674.value = "5.118 2.844 -3.4537 5.886 3.4016 -4.0098";
ProtoInstance673.fieldValue = new MFNode();

ProtoInstance673.fieldValue[0] = fieldValue674;

Group550.children[61] = ProtoInstance673;

let ProtoInstance675 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance675.name = "line";
ProtoInstance675.DEF = "cholesterol_karne_b_62";
let fieldValue676 = browser.currentScene.createNode("fieldValue");
fieldValue676.name = "bond_set";
fieldValue676.value = "5.118 2.844 -3.4537 4.2048 3.4527 -3.3792";
ProtoInstance675.fieldValue = new MFNode();

ProtoInstance675.fieldValue[0] = fieldValue676;

Group550.children[62] = ProtoInstance675;

let ProtoInstance677 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance677.name = "line";
ProtoInstance677.DEF = "cholesterol_karne_b_63";
let fieldValue678 = browser.currentScene.createNode("fieldValue");
fieldValue678.name = "bond_set";
fieldValue678.value = "5.118 2.844 -3.4537 4.8914 1.9061 -3.9818";
ProtoInstance677.fieldValue = new MFNode();

ProtoInstance677.fieldValue[0] = fieldValue678;

Group550.children[63] = ProtoInstance677;

let ProtoInstance679 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance679.name = "line";
ProtoInstance679.DEF = "cholesterol_karne_b_64";
let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "bond_set";
fieldValue680.value = "7.0185 1.8022 -2.1116 6.9441 0.9731 -2.8306";
ProtoInstance679.fieldValue = new MFNode();

ProtoInstance679.fieldValue[0] = fieldValue680;

Group550.children[64] = ProtoInstance679;

let ProtoInstance681 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance681.name = "line";
ProtoInstance681.DEF = "cholesterol_karne_b_65";
let fieldValue682 = browser.currentScene.createNode("fieldValue");
fieldValue682.name = "bond_set";
fieldValue682.value = "7.0185 1.8022 -2.1116 7.2381 1.4013 -1.1111";
ProtoInstance681.fieldValue = new MFNode();

ProtoInstance681.fieldValue[0] = fieldValue682;

Group550.children[65] = ProtoInstance681;

let ProtoInstance683 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance683.name = "line";
ProtoInstance683.DEF = "cholesterol_karne_b_66";
let fieldValue684 = browser.currentScene.createNode("fieldValue");
fieldValue684.name = "bond_set";
fieldValue684.value = "8.1314 2.6591 -2.5153 8.1969 3.4944 -1.8026";
ProtoInstance683.fieldValue = new MFNode();

ProtoInstance683.fieldValue[0] = fieldValue684;

Group550.children[66] = ProtoInstance683;

let ProtoInstance685 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance685.name = "line";
ProtoInstance685.DEF = "cholesterol_karne_b_67";
let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "bond_set";
fieldValue686.value = "8.1314 2.6591 -2.5153 7.9155 3.0506 -3.5203";
ProtoInstance685.fieldValue = new MFNode();

ProtoInstance685.fieldValue[0] = fieldValue686;

Group550.children[67] = ProtoInstance685;

let ProtoInstance687 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance687.name = "line";
ProtoInstance687.DEF = "cholesterol_karne_b_68";
let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "bond_set";
fieldValue688.value = "9.4748 1.9697 -2.5572 9.4247 1.1825 -3.3239";
ProtoInstance687.fieldValue = new MFNode();

ProtoInstance687.fieldValue[0] = fieldValue688;

Group550.children[68] = ProtoInstance687;

let ProtoInstance689 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance689.name = "line";
ProtoInstance689.DEF = "cholesterol_karne_b_69";
let fieldValue690 = browser.currentScene.createNode("fieldValue");
fieldValue690.name = "bond_set";
fieldValue690.value = "9.4748 1.9697 -2.5572 9.6484 1.5118 -1.5723";
ProtoInstance689.fieldValue = new MFNode();

ProtoInstance689.fieldValue[0] = fieldValue690;

Group550.children[69] = ProtoInstance689;

let ProtoInstance691 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance691.name = "line";
ProtoInstance691.DEF = "cholesterol_karne_b_70";
let fieldValue692 = browser.currentScene.createNode("fieldValue");
fieldValue692.name = "bond_set";
fieldValue692.value = "10.6837 2.862 -2.8793 10.7271 3.6239 -2.0872";
ProtoInstance691.fieldValue = new MFNode();

ProtoInstance691.fieldValue[0] = fieldValue692;

Group550.children[70] = ProtoInstance691;

let ProtoInstance693 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance693.name = "line";
ProtoInstance693.DEF = "cholesterol_karne_b_71";
let fieldValue694 = browser.currentScene.createNode("fieldValue");
fieldValue694.name = "bond_set";
fieldValue694.value = "10.5656 3.6361 -4.1508 11.4721 4.2419 -4.2967";
ProtoInstance693.fieldValue = new MFNode();

ProtoInstance693.fieldValue[0] = fieldValue694;

Group550.children[71] = ProtoInstance693;

let ProtoInstance695 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance695.name = "line";
ProtoInstance695.DEF = "cholesterol_karne_b_72";
let fieldValue696 = browser.currentScene.createNode("fieldValue");
fieldValue696.name = "bond_set";
fieldValue696.value = "10.5656 3.6361 -4.1508 9.6877 4.2967 -4.0977";
ProtoInstance695.fieldValue = new MFNode();

ProtoInstance695.fieldValue[0] = fieldValue696;

Group550.children[72] = ProtoInstance695;

let ProtoInstance697 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance697.name = "line";
ProtoInstance697.DEF = "cholesterol_karne_b_73";
let fieldValue698 = browser.currentScene.createNode("fieldValue");
fieldValue698.name = "bond_set";
fieldValue698.value = "10.5656 3.6361 -4.1508 10.4502 2.9399 -4.9946";
ProtoInstance697.fieldValue = new MFNode();

ProtoInstance697.fieldValue[0] = fieldValue698;

Group550.children[73] = ProtoInstance697;

let ProtoInstance699 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance699.name = "line";
ProtoInstance699.DEF = "cholesterol_karne_b_74";
let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "bond_set";
fieldValue700.value = "11.9428 2.0228 -2.729 11.9217 1.5002 -1.7613";
ProtoInstance699.fieldValue = new MFNode();

ProtoInstance699.fieldValue[0] = fieldValue700;

Group550.children[74] = ProtoInstance699;

let ProtoInstance701 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance701.name = "line";
ProtoInstance701.DEF = "cholesterol_karne_b_75";
let fieldValue702 = browser.currentScene.createNode("fieldValue");
fieldValue702.name = "bond_set";
fieldValue702.value = "11.9428 2.0228 -2.729 12.8265 2.6762 -2.7736";
ProtoInstance701.fieldValue = new MFNode();

ProtoInstance701.fieldValue[0] = fieldValue702;

Group550.children[75] = ProtoInstance701;

let ProtoInstance703 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance703.name = "line";
ProtoInstance703.DEF = "cholesterol_karne_b_76";
let fieldValue704 = browser.currentScene.createNode("fieldValue");
fieldValue704.name = "bond_set";
fieldValue704.value = "11.9428 2.0228 -2.729 11.991 1.2847 -3.5432";
ProtoInstance703.fieldValue = new MFNode();

ProtoInstance703.fieldValue[0] = fieldValue704;

Group550.children[76] = ProtoInstance703;

let ProtoInstance705 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance705.name = "line";
ProtoInstance705.DEF = "cholesterol_karne_b_77";
let fieldValue706 = browser.currentScene.createNode("fieldValue");
fieldValue706.name = "bond_set";
fieldValue706.value = "-5.1826 1.2861 1.2631 -5.7836 0.9649 0.6011";
ProtoInstance705.fieldValue = new MFNode();

ProtoInstance705.fieldValue[0] = fieldValue706;

Group550.children[77] = ProtoInstance705;

browser.currentScene.children[23] = Group550;

