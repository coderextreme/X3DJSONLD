let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PyruvicAcid.x3d";
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
Viewpoint300.description = "Inspect PyruvicAcid";
Viewpoint300.position = new SFVec3f(new float[0,2,20]);
browser.currentScene.children[20] = Viewpoint300;

//Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved.
//type=\"3D\" <date day=\"5\" month=\"2\" year=\"2010\"/>
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
fieldValue305.value = "\"Pyruvic Acid: C3 H4 O3\"";
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
fieldValue308.value = "\"molecule weight: 88.06\"";
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
fieldValue311.value = "\"melting point: 12\"";
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
fieldValue314.value = "\"boiling point: 165\"";
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
fieldValue317.value = "\"specific gravity: 1.265\"";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

Transform315.children = new MFNode();

Transform315.children[0] = ProtoInstance316;

Transform301.children[4] = Transform315;

browser.currentScene.children[21] = Transform301;

let Group318 = browser.currentScene.createNode("Group");
let Transform319 = browser.currentScene.createNode("Transform");
let ProtoInstance320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance320.name = "Carbon";
ProtoInstance320.DEF = "pyruvic_acid_a1";
let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "position";
fieldValue321.value = "1.2732 0.8302 0.9936";
ProtoInstance320.fieldValue = new MFNode();

ProtoInstance320.fieldValue[0] = fieldValue321;

Transform319.children = new MFNode();

Transform319.children[0] = ProtoInstance320;

Group318.children = new MFNode();

Group318.children[0] = Transform319;

let Transform322 = browser.currentScene.createNode("Transform");
let ProtoInstance323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance323.name = "Carbon";
ProtoInstance323.DEF = "pyruvic_acid_a2";
let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "position";
fieldValue324.value = "2.6424 1.5034 0.9854";
ProtoInstance323.fieldValue = new MFNode();

ProtoInstance323.fieldValue[0] = fieldValue324;

Transform322.children = new MFNode();

Transform322.children[0] = ProtoInstance323;

Group318.children[1] = Transform322;

let Transform325 = browser.currentScene.createNode("Transform");
let ProtoInstance326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance326.name = "Carbon";
ProtoInstance326.DEF = "pyruvic_acid_a3";
let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "position";
fieldValue327.value = "2.5974 2.9991 0.9011";
ProtoInstance326.fieldValue = new MFNode();

ProtoInstance326.fieldValue[0] = fieldValue327;

Transform325.children = new MFNode();

Transform325.children[0] = ProtoInstance326;

Group318.children[2] = Transform325;

let Transform328 = browser.currentScene.createNode("Transform");
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Oxygen";
ProtoInstance329.DEF = "pyruvic_acid_a4";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "position";
fieldValue330.value = "3.6572 0.847 1.0232";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

Transform328.children = new MFNode();

Transform328.children[0] = ProtoInstance329;

Group318.children[3] = Transform328;

let Transform331 = browser.currentScene.createNode("Transform");
let ProtoInstance332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance332.name = "Oxygen";
ProtoInstance332.DEF = "pyruvic_acid_a5";
let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "position";
fieldValue333.value = "0.8508 0.4234 2.2078";
ProtoInstance332.fieldValue = new MFNode();

ProtoInstance332.fieldValue[0] = fieldValue333;

Transform331.children = new MFNode();

Transform331.children[0] = ProtoInstance332;

Group318.children[4] = Transform331;

let Transform334 = browser.currentScene.createNode("Transform");
let ProtoInstance335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance335.name = "Oxygen";
ProtoInstance335.DEF = "pyruvic_acid_a6";
let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "position";
fieldValue336.value = "0.5294 0.64 0.052";
ProtoInstance335.fieldValue = new MFNode();

ProtoInstance335.fieldValue[0] = fieldValue336;

Transform334.children = new MFNode();

Transform334.children[0] = ProtoInstance335;

Group318.children[5] = Transform334;

browser.currentScene.children[22] = Group318;

let Group337 = browser.currentScene.createNode("Group");
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "line";
ProtoInstance338.DEF = "pyruvic_acid_b1";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "bond_set";
fieldValue339.value = "1.2732 0.8302 0.9936 2.6424 1.5034 0.9854";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

Group337.children = new MFNode();

Group337.children[0] = ProtoInstance338;

let ProtoInstance340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance340.name = "line";
ProtoInstance340.DEF = "pyruvic_acid_b2";
let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "bond_set";
fieldValue341.value = "1.2732 0.8302 0.9936 0.8508 0.4234 2.2078";
ProtoInstance340.fieldValue = new MFNode();

ProtoInstance340.fieldValue[0] = fieldValue341;

Group337.children[1] = ProtoInstance340;

let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "line";
ProtoInstance342.DEF = "pyruvic_acid_b3";
let fieldValue343 = browser.currentScene.createNode("fieldValue");
fieldValue343.name = "bond_set";
fieldValue343.value = "1.2532 0.8302 0.9936 0.5094 0.64 0.052";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

Group337.children[2] = ProtoInstance342;

let ProtoInstance344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance344.name = "line";
ProtoInstance344.DEF = "pyruvic_acid_b3_2";
let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "bond_set";
fieldValue345.value = "1.2932000000000001 0.8302 0.9936 0.5494 0.64 0.052";
ProtoInstance344.fieldValue = new MFNode();

ProtoInstance344.fieldValue[0] = fieldValue345;

Group337.children[3] = ProtoInstance344;

let ProtoInstance346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance346.name = "line";
ProtoInstance346.DEF = "pyruvic_acid_b4";
let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "bond_set";
fieldValue347.value = "2.6424 1.5034 0.9854 2.5974 2.9991 0.9011";
ProtoInstance346.fieldValue = new MFNode();

ProtoInstance346.fieldValue[0] = fieldValue347;

Group337.children[4] = ProtoInstance346;

let ProtoInstance348 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance348.name = "line";
ProtoInstance348.DEF = "pyruvic_acid_b5";
let fieldValue349 = browser.currentScene.createNode("fieldValue");
fieldValue349.name = "bond_set";
fieldValue349.value = "2.6224 1.5034 0.9854 3.6372 0.847 1.0232";
ProtoInstance348.fieldValue = new MFNode();

ProtoInstance348.fieldValue[0] = fieldValue349;

Group337.children[5] = ProtoInstance348;

let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "line";
ProtoInstance350.DEF = "pyruvic_acid_b5_2";
let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "bond_set";
fieldValue351.value = "2.6624 1.5034 0.9854 3.6772 0.847 1.0232";
ProtoInstance350.fieldValue = new MFNode();

ProtoInstance350.fieldValue[0] = fieldValue351;

Group337.children[6] = ProtoInstance350;

browser.currentScene.children[23] = Group337;

