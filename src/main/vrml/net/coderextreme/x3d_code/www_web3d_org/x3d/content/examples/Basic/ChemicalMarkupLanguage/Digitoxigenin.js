let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Digitoxigenin.x3d";
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
Viewpoint300.description = "Inspect Digitoxigenin";
Viewpoint300.position = new SFVec3f(new float[0,2,20]);
browser.currentScene.children[20] = Viewpoint300;

//<?xml-stylesheet type=\"text/xsl\" href=\"generic.xsl\" ?>
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
fieldValue305.value = "\"Digitoxigenin: \"";
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
ProtoInstance308.DEF = "digitoxigenin_karne_a_1";
let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "position";
fieldValue309.value = "-2.1606 1.6552 -0.8847";
ProtoInstance308.fieldValue = new MFNode();

ProtoInstance308.fieldValue[0] = fieldValue309;

Transform307.children = new MFNode();

Transform307.children[0] = ProtoInstance308;

Group306.children = new MFNode();

Group306.children[0] = Transform307;

let Transform310 = browser.currentScene.createNode("Transform");
let ProtoInstance311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance311.name = "Carbon";
ProtoInstance311.DEF = "digitoxigenin_karne_a_2";
let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "position";
fieldValue312.value = "-2.1997 0.1524 -1.1623";
ProtoInstance311.fieldValue = new MFNode();

ProtoInstance311.fieldValue[0] = fieldValue312;

Transform310.children = new MFNode();

Transform310.children[0] = ProtoInstance311;

Group306.children[1] = Transform310;

let Transform313 = browser.currentScene.createNode("Transform");
let ProtoInstance314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance314.name = "Carbon";
ProtoInstance314.DEF = "digitoxigenin_karne_a_3";
let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "position";
fieldValue315.value = "-2.3838 -0.6669 0.0977";
ProtoInstance314.fieldValue = new MFNode();

ProtoInstance314.fieldValue[0] = fieldValue315;

Transform313.children = new MFNode();

Transform313.children[0] = ProtoInstance314;

Group306.children[2] = Transform313;

let Transform316 = browser.currentScene.createNode("Transform");
let ProtoInstance317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance317.name = "Carbon";
ProtoInstance317.DEF = "digitoxigenin_karne_a_4";
let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "position";
fieldValue318.value = "-1.4275 -0.2242 1.2059";
ProtoInstance317.fieldValue = new MFNode();

ProtoInstance317.fieldValue[0] = fieldValue318;

Transform316.children = new MFNode();

Transform316.children[0] = ProtoInstance317;

Group306.children[3] = Transform316;

let Transform319 = browser.currentScene.createNode("Transform");
let ProtoInstance320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance320.name = "Carbon";
ProtoInstance320.DEF = "digitoxigenin_karne_a_5";
let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "position";
fieldValue321.value = "-1.4096 1.2976 1.4632";
ProtoInstance320.fieldValue = new MFNode();

ProtoInstance320.fieldValue[0] = fieldValue321;

Transform319.children = new MFNode();

Transform319.children[0] = ProtoInstance320;

Group306.children[4] = Transform319;

let Transform322 = browser.currentScene.createNode("Transform");
let ProtoInstance323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance323.name = "Carbon";
ProtoInstance323.DEF = "digitoxigenin_karne_a_6";
let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "position";
fieldValue324.value = "-0.4098 1.6499 2.5708";
ProtoInstance323.fieldValue = new MFNode();

ProtoInstance323.fieldValue[0] = fieldValue324;

Transform322.children = new MFNode();

Transform322.children[0] = ProtoInstance323;

Group306.children[5] = Transform322;

let Transform325 = browser.currentScene.createNode("Transform");
let ProtoInstance326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance326.name = "Carbon";
ProtoInstance326.DEF = "digitoxigenin_karne_a_7";
let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "position";
fieldValue327.value = "1.0361 1.3738 2.1457";
ProtoInstance326.fieldValue = new MFNode();

ProtoInstance326.fieldValue[0] = fieldValue327;

Transform325.children = new MFNode();

Transform325.children[0] = ProtoInstance326;

Group306.children[6] = Transform325;

let Transform328 = browser.currentScene.createNode("Transform");
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Carbon";
ProtoInstance329.DEF = "digitoxigenin_karne_a_8";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "position";
fieldValue330.value = "1.3916 2.036 0.8039";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

Transform328.children = new MFNode();

Transform328.children[0] = ProtoInstance329;

Group306.children[7] = Transform328;

let Transform331 = browser.currentScene.createNode("Transform");
let ProtoInstance332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance332.name = "Carbon";
ProtoInstance332.DEF = "digitoxigenin_karne_a_9";
let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "position";
fieldValue333.value = "0.3399 1.7901 -0.3008";
ProtoInstance332.fieldValue = new MFNode();

ProtoInstance332.fieldValue[0] = fieldValue333;

Transform331.children = new MFNode();

Transform331.children[0] = ProtoInstance332;

Group306.children[8] = Transform331;

let Transform334 = browser.currentScene.createNode("Transform");
let ProtoInstance335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance335.name = "Carbon";
ProtoInstance335.DEF = "digitoxigenin_karne_a_10";
let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "position";
fieldValue336.value = "-1.114 2.0931 0.1658";
ProtoInstance335.fieldValue = new MFNode();

ProtoInstance335.fieldValue[0] = fieldValue336;

Transform334.children = new MFNode();

Transform334.children[0] = ProtoInstance335;

Group306.children[9] = Transform334;

let Transform337 = browser.currentScene.createNode("Transform");
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Carbon";
ProtoInstance338.DEF = "digitoxigenin_karne_a_11";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "position";
fieldValue339.value = "0.7681 2.5701 -1.5481";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

Transform337.children = new MFNode();

Transform337.children[0] = ProtoInstance338;

Group306.children[10] = Transform337;

let Transform340 = browser.currentScene.createNode("Transform");
let ProtoInstance341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance341.name = "Carbon";
ProtoInstance341.DEF = "digitoxigenin_karne_a_12";
let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "position";
fieldValue342.value = "2.1105 2.0585 -2.0639";
ProtoInstance341.fieldValue = new MFNode();

ProtoInstance341.fieldValue[0] = fieldValue342;

Transform340.children = new MFNode();

Transform340.children[0] = ProtoInstance341;

Group306.children[11] = Transform340;

let Transform343 = browser.currentScene.createNode("Transform");
let ProtoInstance344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance344.name = "Carbon";
ProtoInstance344.DEF = "digitoxigenin_karne_a_13";
let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "position";
fieldValue345.value = "3.2569 2.2095 -1.0278";
ProtoInstance344.fieldValue = new MFNode();

ProtoInstance344.fieldValue[0] = fieldValue345;

Transform343.children = new MFNode();

Transform343.children[0] = ProtoInstance344;

Group306.children[12] = Transform343;

let Transform346 = browser.currentScene.createNode("Transform");
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Carbon";
ProtoInstance347.DEF = "digitoxigenin_karne_a_14";
let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "position";
fieldValue348.value = "2.7981 1.601 0.3349";
ProtoInstance347.fieldValue = new MFNode();

ProtoInstance347.fieldValue[0] = fieldValue348;

Transform346.children = new MFNode();

Transform346.children[0] = ProtoInstance347;

Group306.children[13] = Transform346;

let Transform349 = browser.currentScene.createNode("Transform");
let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "Carbon";
ProtoInstance350.DEF = "digitoxigenin_karne_a_15";
let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "position";
fieldValue351.value = "2.9717 0.0748 0.1666";
ProtoInstance350.fieldValue = new MFNode();

ProtoInstance350.fieldValue[0] = fieldValue351;

Transform349.children = new MFNode();

Transform349.children[0] = ProtoInstance350;

Group306.children[14] = Transform349;

let Transform352 = browser.currentScene.createNode("Transform");
let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.name = "Carbon";
ProtoInstance353.DEF = "digitoxigenin_karne_a_16";
let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "position";
fieldValue354.value = "4.016 -0.145 -0.9304";
ProtoInstance353.fieldValue = new MFNode();

ProtoInstance353.fieldValue[0] = fieldValue354;

Transform352.children = new MFNode();

Transform352.children[0] = ProtoInstance353;

Group306.children[15] = Transform352;

let Transform355 = browser.currentScene.createNode("Transform");
let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Carbon";
ProtoInstance356.DEF = "digitoxigenin_karne_a_17";
let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "position";
fieldValue357.value = "4.4147 1.2521 -1.499";
ProtoInstance356.fieldValue = new MFNode();

ProtoInstance356.fieldValue[0] = fieldValue357;

Transform355.children = new MFNode();

Transform355.children[0] = ProtoInstance356;

Group306.children[16] = Transform355;

let Transform358 = browser.currentScene.createNode("Transform");
let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.name = "Carbon";
ProtoInstance359.DEF = "digitoxigenin_karne_a_18";
let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "position";
fieldValue360.value = "3.6782 3.6838 -0.9321";
ProtoInstance359.fieldValue = new MFNode();

ProtoInstance359.fieldValue[0] = fieldValue360;

Transform358.children = new MFNode();

Transform358.children[0] = ProtoInstance359;

Group306.children[17] = Transform358;

let Transform361 = browser.currentScene.createNode("Transform");
let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.name = "Carbon";
ProtoInstance362.DEF = "digitoxigenin_karne_a_19";
let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "position";
fieldValue363.value = "-1.3206 3.6128 0.3983";
ProtoInstance362.fieldValue = new MFNode();

ProtoInstance362.fieldValue[0] = fieldValue363;

Transform361.children = new MFNode();

Transform361.children[0] = ProtoInstance362;

Group306.children[18] = Transform361;

let Transform364 = browser.currentScene.createNode("Transform");
let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.name = "Carbon";
ProtoInstance365.DEF = "digitoxigenin_karne_a_20";
let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "position";
fieldValue366.value = "5.8099 1.6589 -1.1447";
ProtoInstance365.fieldValue = new MFNode();

ProtoInstance365.fieldValue[0] = fieldValue366;

Transform364.children = new MFNode();

Transform364.children[0] = ProtoInstance365;

Group306.children[19] = Transform364;

let Transform367 = browser.currentScene.createNode("Transform");
let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.name = "Carbon";
ProtoInstance368.DEF = "digitoxigenin_karne_a_21";
let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "position";
fieldValue369.value = "6.5388 1.3027 0.1169";
ProtoInstance368.fieldValue = new MFNode();

ProtoInstance368.fieldValue[0] = fieldValue369;

Transform367.children = new MFNode();

Transform367.children[0] = ProtoInstance368;

Group306.children[20] = Transform367;

let Transform370 = browser.currentScene.createNode("Transform");
let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.name = "Carbon";
ProtoInstance371.DEF = "digitoxigenin_karne_a_22";
let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "position";
fieldValue372.value = "6.66 2.3309 -1.9293";
ProtoInstance371.fieldValue = new MFNode();

ProtoInstance371.fieldValue[0] = fieldValue372;

Transform370.children = new MFNode();

Transform370.children[0] = ProtoInstance371;

Group306.children[21] = Transform370;

let Transform373 = browser.currentScene.createNode("Transform");
let ProtoInstance374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance374.name = "Carbon";
ProtoInstance374.DEF = "digitoxigenin_karne_a_23";
let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "position";
fieldValue375.value = "7.9463 2.4238 -1.26";
ProtoInstance374.fieldValue = new MFNode();

ProtoInstance374.fieldValue[0] = fieldValue375;

Transform373.children = new MFNode();

Transform373.children[0] = ProtoInstance374;

Group306.children[22] = Transform373;

let Transform376 = browser.currentScene.createNode("Transform");
let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Hydrogen";
ProtoInstance377.DEF = "digitoxigenin_karne_a_24";
let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "position";
fieldValue378.value = "-3.1542 1.9631 -0.5268";
ProtoInstance377.fieldValue = new MFNode();

ProtoInstance377.fieldValue[0] = fieldValue378;

Transform376.children = new MFNode();

Transform376.children[0] = ProtoInstance377;

Group306.children[23] = Transform376;

let Transform379 = browser.currentScene.createNode("Transform");
let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.name = "Hydrogen";
ProtoInstance380.DEF = "digitoxigenin_karne_a_25";
let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "position";
fieldValue381.value = "-1.9345 2.1719 -1.829";
ProtoInstance380.fieldValue = new MFNode();

ProtoInstance380.fieldValue[0] = fieldValue381;

Transform379.children = new MFNode();

Transform379.children[0] = ProtoInstance380;

Group306.children[24] = Transform379;

let Transform382 = browser.currentScene.createNode("Transform");
let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.name = "Hydrogen";
ProtoInstance383.DEF = "digitoxigenin_karne_a_26";
let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "position";
fieldValue384.value = "-1.2536 -0.1427 -1.6394";
ProtoInstance383.fieldValue = new MFNode();

ProtoInstance383.fieldValue[0] = fieldValue384;

Transform382.children = new MFNode();

Transform382.children[0] = ProtoInstance383;

Group306.children[25] = Transform382;

let Transform385 = browser.currentScene.createNode("Transform");
let ProtoInstance386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance386.name = "Hydrogen";
ProtoInstance386.DEF = "digitoxigenin_karne_a_27";
let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "position";
fieldValue387.value = "-3.0361 -0.0583 -1.845";
ProtoInstance386.fieldValue = new MFNode();

ProtoInstance386.fieldValue[0] = fieldValue387;

Transform385.children = new MFNode();

Transform385.children[0] = ProtoInstance386;

Group306.children[26] = Transform385;

let Transform388 = browser.currentScene.createNode("Transform");
let ProtoInstance389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance389.name = "Hydrogen";
ProtoInstance389.DEF = "digitoxigenin_karne_a_28";
let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "position";
fieldValue390.value = "-2.1882 -1.7259 -0.1262";
ProtoInstance389.fieldValue = new MFNode();

ProtoInstance389.fieldValue[0] = fieldValue390;

Transform388.children = new MFNode();

Transform388.children[0] = ProtoInstance389;

Group306.children[27] = Transform388;

let Transform391 = browser.currentScene.createNode("Transform");
let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.name = "Hydrogen";
ProtoInstance392.DEF = "digitoxigenin_karne_a_29";
let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "position";
fieldValue393.value = "-0.4104 -0.538 0.9282";
ProtoInstance392.fieldValue = new MFNode();

ProtoInstance392.fieldValue[0] = fieldValue393;

Transform391.children = new MFNode();

Transform391.children[0] = ProtoInstance392;

Group306.children[28] = Transform391;

let Transform394 = browser.currentScene.createNode("Transform");
let ProtoInstance395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance395.name = "Oxygen";
ProtoInstance395.DEF = "digitoxigenin_karne_a_30";
let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "position";
fieldValue396.value = "-3.7698 -0.5088 0.5013";
ProtoInstance395.fieldValue = new MFNode();

ProtoInstance395.fieldValue[0] = fieldValue396;

Transform394.children = new MFNode();

Transform394.children[0] = ProtoInstance395;

Group306.children[29] = Transform394;

let Transform397 = browser.currentScene.createNode("Transform");
let ProtoInstance398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance398.name = "Oxygen";
ProtoInstance398.DEF = "digitoxigenin_karne_a_31";
let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "position";
fieldValue399.value = "2.5002 2.7469 -3.2656";
ProtoInstance398.fieldValue = new MFNode();

ProtoInstance398.fieldValue[0] = fieldValue399;

Transform397.children = new MFNode();

Transform397.children[0] = ProtoInstance398;

Group306.children[30] = Transform397;

let Transform400 = browser.currentScene.createNode("Transform");
let ProtoInstance401 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance401.name = "Oxygen";
ProtoInstance401.DEF = "digitoxigenin_karne_a_32";
let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "position";
fieldValue402.value = "3.7691 1.9732 1.347";
ProtoInstance401.fieldValue = new MFNode();

ProtoInstance401.fieldValue[0] = fieldValue402;

Transform400.children = new MFNode();

Transform400.children[0] = ProtoInstance401;

Group306.children[31] = Transform400;

let Transform403 = browser.currentScene.createNode("Transform");
let ProtoInstance404 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance404.name = "Oxygen";
ProtoInstance404.DEF = "digitoxigenin_karne_a_33";
let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "position";
fieldValue405.value = "7.8648 1.8507 -0.0582";
ProtoInstance404.fieldValue = new MFNode();

ProtoInstance404.fieldValue[0] = fieldValue405;

Transform403.children = new MFNode();

Transform403.children[0] = ProtoInstance404;

Group306.children[32] = Transform403;

let Transform406 = browser.currentScene.createNode("Transform");
let ProtoInstance407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance407.name = "Oxygen";
ProtoInstance407.DEF = "digitoxigenin_karne_a_34";
let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "position";
fieldValue408.value = "9.0017 2.87 -1.6562";
ProtoInstance407.fieldValue = new MFNode();

ProtoInstance407.fieldValue[0] = fieldValue408;

Transform406.children = new MFNode();

Transform406.children[0] = ProtoInstance407;

Group306.children[33] = Transform406;

let Transform409 = browser.currentScene.createNode("Transform");
let ProtoInstance410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance410.name = "Hydrogen";
ProtoInstance410.DEF = "digitoxigenin_karne_a_35";
let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "position";
fieldValue411.value = "-1.7247 -0.7271 2.1379";
ProtoInstance410.fieldValue = new MFNode();

ProtoInstance410.fieldValue[0] = fieldValue411;

Transform409.children = new MFNode();

Transform409.children[0] = ProtoInstance410;

Group306.children[34] = Transform409;

let Transform412 = browser.currentScene.createNode("Transform");
let ProtoInstance413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance413.name = "Hydrogen";
ProtoInstance413.DEF = "digitoxigenin_karne_a_36";
let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "position";
fieldValue414.value = "-2.4116 1.5894 1.8107";
ProtoInstance413.fieldValue = new MFNode();

ProtoInstance413.fieldValue[0] = fieldValue414;

Transform412.children = new MFNode();

Transform412.children[0] = ProtoInstance413;

Group306.children[35] = Transform412;

let Transform415 = browser.currentScene.createNode("Transform");
let ProtoInstance416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance416.name = "Hydrogen";
ProtoInstance416.DEF = "digitoxigenin_karne_a_37";
let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "position";
fieldValue417.value = "-0.6396 1.0472 3.4618";
ProtoInstance416.fieldValue = new MFNode();

ProtoInstance416.fieldValue[0] = fieldValue417;

Transform415.children = new MFNode();

Transform415.children[0] = ProtoInstance416;

Group306.children[36] = Transform415;

let Transform418 = browser.currentScene.createNode("Transform");
let ProtoInstance419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance419.name = "Hydrogen";
ProtoInstance419.DEF = "digitoxigenin_karne_a_38";
let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "position";
fieldValue420.value = "-0.5108 2.7178 2.8143";
ProtoInstance419.fieldValue = new MFNode();

ProtoInstance419.fieldValue[0] = fieldValue420;

Transform418.children = new MFNode();

Transform418.children[0] = ProtoInstance419;

Group306.children[37] = Transform418;

let Transform421 = browser.currentScene.createNode("Transform");
let ProtoInstance422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance422.name = "Hydrogen";
ProtoInstance422.DEF = "digitoxigenin_karne_a_39";
let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "position";
fieldValue423.value = "1.1744 0.2867 2.0503";
ProtoInstance422.fieldValue = new MFNode();

ProtoInstance422.fieldValue[0] = fieldValue423;

Transform421.children = new MFNode();

Transform421.children[0] = ProtoInstance422;

Group306.children[38] = Transform421;

let Transform424 = browser.currentScene.createNode("Transform");
let ProtoInstance425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance425.name = "Hydrogen";
ProtoInstance425.DEF = "digitoxigenin_karne_a_40";
let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "position";
fieldValue426.value = "1.7123 1.7627 2.9213";
ProtoInstance425.fieldValue = new MFNode();

ProtoInstance425.fieldValue[0] = fieldValue426;

Transform424.children = new MFNode();

Transform424.children[0] = ProtoInstance425;

Group306.children[39] = Transform424;

let Transform427 = browser.currentScene.createNode("Transform");
let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.name = "Hydrogen";
ProtoInstance428.DEF = "digitoxigenin_karne_a_41";
let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "position";
fieldValue429.value = "1.4233 3.1214 0.98";
ProtoInstance428.fieldValue = new MFNode();

ProtoInstance428.fieldValue[0] = fieldValue429;

Transform427.children = new MFNode();

Transform427.children[0] = ProtoInstance428;

Group306.children[40] = Transform427;

let Transform430 = browser.currentScene.createNode("Transform");
let ProtoInstance431 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance431.name = "Hydrogen";
ProtoInstance431.DEF = "digitoxigenin_karne_a_42";
let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "position";
fieldValue432.value = "0.3689 0.7204 -0.5556";
ProtoInstance431.fieldValue = new MFNode();

ProtoInstance431.fieldValue[0] = fieldValue432;

Transform430.children = new MFNode();

Transform430.children[0] = ProtoInstance431;

Group306.children[41] = Transform430;

let Transform433 = browser.currentScene.createNode("Transform");
let ProtoInstance434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance434.name = "Hydrogen";
ProtoInstance434.DEF = "digitoxigenin_karne_a_43";
let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "position";
fieldValue435.value = "0.8605 3.6364 -1.2942";
ProtoInstance434.fieldValue = new MFNode();

ProtoInstance434.fieldValue[0] = fieldValue435;

Transform433.children = new MFNode();

Transform433.children[0] = ProtoInstance434;

Group306.children[42] = Transform433;

let Transform436 = browser.currentScene.createNode("Transform");
let ProtoInstance437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance437.name = "Hydrogen";
ProtoInstance437.DEF = "digitoxigenin_karne_a_44";
let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "position";
fieldValue438.value = "0.0072 2.4446 -2.3325";
ProtoInstance437.fieldValue = new MFNode();

ProtoInstance437.fieldValue[0] = fieldValue438;

Transform436.children = new MFNode();

Transform436.children[0] = ProtoInstance437;

Group306.children[43] = Transform436;

let Transform439 = browser.currentScene.createNode("Transform");
let ProtoInstance440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance440.name = "Hydrogen";
ProtoInstance440.DEF = "digitoxigenin_karne_a_45";
let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "position";
fieldValue441.value = "1.9935 0.9892 -2.2941";
ProtoInstance440.fieldValue = new MFNode();

ProtoInstance440.fieldValue[0] = fieldValue441;

Transform439.children = new MFNode();

Transform439.children[0] = ProtoInstance440;

Group306.children[44] = Transform439;

let Transform442 = browser.currentScene.createNode("Transform");
let ProtoInstance443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance443.name = "Hydrogen";
ProtoInstance443.DEF = "digitoxigenin_karne_a_46";
let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "position";
fieldValue444.value = "2.0155 -0.383 -0.1266";
ProtoInstance443.fieldValue = new MFNode();

ProtoInstance443.fieldValue[0] = fieldValue444;

Transform442.children = new MFNode();

Transform442.children[0] = ProtoInstance443;

Group306.children[45] = Transform442;

let Transform445 = browser.currentScene.createNode("Transform");
let ProtoInstance446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance446.name = "Hydrogen";
ProtoInstance446.DEF = "digitoxigenin_karne_a_47";
let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "position";
fieldValue447.value = "3.3176 -0.3713 1.1107";
ProtoInstance446.fieldValue = new MFNode();

ProtoInstance446.fieldValue[0] = fieldValue447;

Transform445.children = new MFNode();

Transform445.children[0] = ProtoInstance446;

Group306.children[46] = Transform445;

let Transform448 = browser.currentScene.createNode("Transform");
let ProtoInstance449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance449.name = "Hydrogen";
ProtoInstance449.DEF = "digitoxigenin_karne_a_48";
let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "position";
fieldValue450.value = "3.5912 -0.7674 -1.7317";
ProtoInstance449.fieldValue = new MFNode();

ProtoInstance449.fieldValue[0] = fieldValue450;

Transform448.children = new MFNode();

Transform448.children[0] = ProtoInstance449;

Group306.children[47] = Transform448;

let Transform451 = browser.currentScene.createNode("Transform");
let ProtoInstance452 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance452.name = "Hydrogen";
ProtoInstance452.DEF = "digitoxigenin_karne_a_49";
let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "position";
fieldValue453.value = "4.9014 -0.6437 -0.5091";
ProtoInstance452.fieldValue = new MFNode();

ProtoInstance452.fieldValue[0] = fieldValue453;

Transform451.children = new MFNode();

Transform451.children[0] = ProtoInstance452;

Group306.children[48] = Transform451;

let Transform454 = browser.currentScene.createNode("Transform");
let ProtoInstance455 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance455.name = "Hydrogen";
ProtoInstance455.DEF = "digitoxigenin_karne_a_50";
let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "position";
fieldValue456.value = "4.3825 1.2027 -2.5975";
ProtoInstance455.fieldValue = new MFNode();

ProtoInstance455.fieldValue[0] = fieldValue456;

Transform454.children = new MFNode();

Transform454.children[0] = ProtoInstance455;

Group306.children[49] = Transform454;

let Transform457 = browser.currentScene.createNode("Transform");
let ProtoInstance458 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance458.name = "Hydrogen";
ProtoInstance458.DEF = "digitoxigenin_karne_a_51";
let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "position";
fieldValue459.value = "3.9871 4.042 -1.9253";
ProtoInstance458.fieldValue = new MFNode();

ProtoInstance458.fieldValue[0] = fieldValue459;

Transform457.children = new MFNode();

Transform457.children[0] = ProtoInstance458;

Group306.children[50] = Transform457;

let Transform460 = browser.currentScene.createNode("Transform");
let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "Hydrogen";
ProtoInstance461.DEF = "digitoxigenin_karne_a_52";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "position";
fieldValue462.value = "4.5193 3.78 -0.2298";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

Transform460.children = new MFNode();

Transform460.children[0] = ProtoInstance461;

Group306.children[51] = Transform460;

let Transform463 = browser.currentScene.createNode("Transform");
let ProtoInstance464 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance464.name = "Hydrogen";
ProtoInstance464.DEF = "digitoxigenin_karne_a_53";
let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "position";
fieldValue465.value = "2.83 4.285 -0.573";
ProtoInstance464.fieldValue = new MFNode();

ProtoInstance464.fieldValue[0] = fieldValue465;

Transform463.children = new MFNode();

Transform463.children[0] = ProtoInstance464;

Group306.children[52] = Transform463;

let Transform466 = browser.currentScene.createNode("Transform");
let ProtoInstance467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance467.name = "Hydrogen";
ProtoInstance467.DEF = "digitoxigenin_karne_a_54";
let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "position";
fieldValue468.value = "-2.3543 3.7963 0.7265";
ProtoInstance467.fieldValue = new MFNode();

ProtoInstance467.fieldValue[0] = fieldValue468;

Transform466.children = new MFNode();

Transform466.children[0] = ProtoInstance467;

Group306.children[53] = Transform466;

let Transform469 = browser.currentScene.createNode("Transform");
let ProtoInstance470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance470.name = "Hydrogen";
ProtoInstance470.DEF = "digitoxigenin_karne_a_55";
let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "position";
fieldValue471.value = "-1.1316 4.1562 -0.5392";
ProtoInstance470.fieldValue = new MFNode();

ProtoInstance470.fieldValue[0] = fieldValue471;

Transform469.children = new MFNode();

Transform469.children[0] = ProtoInstance470;

Group306.children[54] = Transform469;

let Transform472 = browser.currentScene.createNode("Transform");
let ProtoInstance473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance473.name = "Hydrogen";
ProtoInstance473.DEF = "digitoxigenin_karne_a_56";
let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "position";
fieldValue474.value = "-0.6224 3.9636 1.1726";
ProtoInstance473.fieldValue = new MFNode();

ProtoInstance473.fieldValue[0] = fieldValue474;

Transform472.children = new MFNode();

Transform472.children[0] = ProtoInstance473;

Group306.children[55] = Transform472;

let Transform475 = browser.currentScene.createNode("Transform");
let ProtoInstance476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance476.name = "Hydrogen";
ProtoInstance476.DEF = "digitoxigenin_karne_a_57";
let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "position";
fieldValue477.value = "6.584 0.211 0.2438";
ProtoInstance476.fieldValue = new MFNode();

ProtoInstance476.fieldValue[0] = fieldValue477;

Transform475.children = new MFNode();

Transform475.children[0] = ProtoInstance476;

Group306.children[56] = Transform475;

let Transform478 = browser.currentScene.createNode("Transform");
let ProtoInstance479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance479.name = "Hydrogen";
ProtoInstance479.DEF = "digitoxigenin_karne_a_58";
let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "position";
fieldValue480.value = "6.0452 1.7533 0.9905";
ProtoInstance479.fieldValue = new MFNode();

ProtoInstance479.fieldValue[0] = fieldValue480;

Transform478.children = new MFNode();

Transform478.children[0] = ProtoInstance479;

Group306.children[57] = Transform478;

let Transform481 = browser.currentScene.createNode("Transform");
let ProtoInstance482 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance482.name = "Hydrogen";
ProtoInstance482.DEF = "digitoxigenin_karne_a_59";
let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "position";
fieldValue483.value = "6.4259 2.7417 -2.9103";
ProtoInstance482.fieldValue = new MFNode();

ProtoInstance482.fieldValue[0] = fieldValue483;

Transform481.children = new MFNode();

Transform481.children[0] = ProtoInstance482;

Group306.children[58] = Transform481;

let Transform484 = browser.currentScene.createNode("Transform");
let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Hydrogen";
ProtoInstance485.DEF = "digitoxigenin_karne_a_60";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "position";
fieldValue486.value = "-4.3394 -0.7908 -0.2048";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

Transform484.children = new MFNode();

Transform484.children[0] = ProtoInstance485;

Group306.children[59] = Transform484;

let Transform487 = browser.currentScene.createNode("Transform");
let ProtoInstance488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance488.name = "Hydrogen";
ProtoInstance488.DEF = "digitoxigenin_karne_a_61";
let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "position";
fieldValue489.value = "1.8108 2.6665 -3.9143";
ProtoInstance488.fieldValue = new MFNode();

ProtoInstance488.fieldValue[0] = fieldValue489;

Transform487.children = new MFNode();

Transform487.children[0] = ProtoInstance488;

Group306.children[60] = Transform487;

let Transform490 = browser.currentScene.createNode("Transform");
let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "Hydrogen";
ProtoInstance491.DEF = "digitoxigenin_karne_a_62";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "position";
fieldValue492.value = "3.7194 2.9087 1.5046";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

Transform490.children = new MFNode();

Transform490.children[0] = ProtoInstance491;

Group306.children[61] = Transform490;

browser.currentScene.children[22] = Group306;

let Group493 = browser.currentScene.createNode("Group");
let ProtoInstance494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance494.name = "line";
ProtoInstance494.DEF = "digitoxigenin_karne_b_1";
let fieldValue495 = browser.currentScene.createNode("fieldValue");
fieldValue495.name = "bond_set";
fieldValue495.value = "-2.1606 1.6552 -0.8847 -2.1997 0.1524 -1.1623";
ProtoInstance494.fieldValue = new MFNode();

ProtoInstance494.fieldValue[0] = fieldValue495;

Group493.children = new MFNode();

Group493.children[0] = ProtoInstance494;

let ProtoInstance496 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance496.name = "line";
ProtoInstance496.DEF = "digitoxigenin_karne_b_2";
let fieldValue497 = browser.currentScene.createNode("fieldValue");
fieldValue497.name = "bond_set";
fieldValue497.value = "-2.1606 1.6552 -0.8847 -1.114 2.0931 0.1658";
ProtoInstance496.fieldValue = new MFNode();

ProtoInstance496.fieldValue[0] = fieldValue497;

Group493.children[1] = ProtoInstance496;

let ProtoInstance498 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance498.name = "line";
ProtoInstance498.DEF = "digitoxigenin_karne_b_3";
let fieldValue499 = browser.currentScene.createNode("fieldValue");
fieldValue499.name = "bond_set";
fieldValue499.value = "-2.1997 0.1524 -1.1623 -2.3838 -0.6669 0.0977";
ProtoInstance498.fieldValue = new MFNode();

ProtoInstance498.fieldValue[0] = fieldValue499;

Group493.children[2] = ProtoInstance498;

let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.name = "line";
ProtoInstance500.DEF = "digitoxigenin_karne_b_4";
let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "bond_set";
fieldValue501.value = "-2.3838 -0.6669 0.0977 -1.4275 -0.2242 1.2059";
ProtoInstance500.fieldValue = new MFNode();

ProtoInstance500.fieldValue[0] = fieldValue501;

Group493.children[3] = ProtoInstance500;

let ProtoInstance502 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance502.name = "line";
ProtoInstance502.DEF = "digitoxigenin_karne_b_5";
let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "bond_set";
fieldValue503.value = "-2.3838 -0.6669 0.0977 -3.7698 -0.5088 0.5013";
ProtoInstance502.fieldValue = new MFNode();

ProtoInstance502.fieldValue[0] = fieldValue503;

Group493.children[4] = ProtoInstance502;

let ProtoInstance504 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance504.name = "line";
ProtoInstance504.DEF = "digitoxigenin_karne_b_6";
let fieldValue505 = browser.currentScene.createNode("fieldValue");
fieldValue505.name = "bond_set";
fieldValue505.value = "-1.4096 1.2976 1.4632 -1.4275 -0.2242 1.2059";
ProtoInstance504.fieldValue = new MFNode();

ProtoInstance504.fieldValue[0] = fieldValue505;

Group493.children[5] = ProtoInstance504;

let ProtoInstance506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance506.name = "line";
ProtoInstance506.DEF = "digitoxigenin_karne_b_7";
let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "bond_set";
fieldValue507.value = "-1.4096 1.2976 1.4632 -0.4098 1.6499 2.5708";
ProtoInstance506.fieldValue = new MFNode();

ProtoInstance506.fieldValue[0] = fieldValue507;

Group493.children[6] = ProtoInstance506;

let ProtoInstance508 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance508.name = "line";
ProtoInstance508.DEF = "digitoxigenin_karne_b_8";
let fieldValue509 = browser.currentScene.createNode("fieldValue");
fieldValue509.name = "bond_set";
fieldValue509.value = "-1.114 2.0931 0.1658 -1.4096 1.2976 1.4632";
ProtoInstance508.fieldValue = new MFNode();

ProtoInstance508.fieldValue[0] = fieldValue509;

Group493.children[7] = ProtoInstance508;

let ProtoInstance510 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance510.name = "line";
ProtoInstance510.DEF = "digitoxigenin_karne_b_9";
let fieldValue511 = browser.currentScene.createNode("fieldValue");
fieldValue511.name = "bond_set";
fieldValue511.value = "-0.4098 1.6499 2.5708 1.0361 1.3738 2.1457";
ProtoInstance510.fieldValue = new MFNode();

ProtoInstance510.fieldValue[0] = fieldValue511;

Group493.children[8] = ProtoInstance510;

let ProtoInstance512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance512.name = "line";
ProtoInstance512.DEF = "digitoxigenin_karne_b_10";
let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "bond_set";
fieldValue513.value = "1.3916 2.036 0.8039 1.0361 1.3738 2.1457";
ProtoInstance512.fieldValue = new MFNode();

ProtoInstance512.fieldValue[0] = fieldValue513;

Group493.children[9] = ProtoInstance512;

let ProtoInstance514 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance514.name = "line";
ProtoInstance514.DEF = "digitoxigenin_karne_b_11";
let fieldValue515 = browser.currentScene.createNode("fieldValue");
fieldValue515.name = "bond_set";
fieldValue515.value = "0.3399 1.7901 -0.3008 1.3916 2.036 0.8039";
ProtoInstance514.fieldValue = new MFNode();

ProtoInstance514.fieldValue[0] = fieldValue515;

Group493.children[10] = ProtoInstance514;

let ProtoInstance516 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance516.name = "line";
ProtoInstance516.DEF = "digitoxigenin_karne_b_12";
let fieldValue517 = browser.currentScene.createNode("fieldValue");
fieldValue517.name = "bond_set";
fieldValue517.value = "1.3916 2.036 0.8039 2.7981 1.601 0.3349";
ProtoInstance516.fieldValue = new MFNode();

ProtoInstance516.fieldValue[0] = fieldValue517;

Group493.children[11] = ProtoInstance516;

let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.name = "line";
ProtoInstance518.DEF = "digitoxigenin_karne_b_13";
let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "bond_set";
fieldValue519.value = "-1.114 2.0931 0.1658 0.3399 1.7901 -0.3008";
ProtoInstance518.fieldValue = new MFNode();

ProtoInstance518.fieldValue[0] = fieldValue519;

Group493.children[12] = ProtoInstance518;

let ProtoInstance520 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance520.name = "line";
ProtoInstance520.DEF = "digitoxigenin_karne_b_14";
let fieldValue521 = browser.currentScene.createNode("fieldValue");
fieldValue521.name = "bond_set";
fieldValue521.value = "0.3399 1.7901 -0.3008 0.7681 2.5701 -1.5481";
ProtoInstance520.fieldValue = new MFNode();

ProtoInstance520.fieldValue[0] = fieldValue521;

Group493.children[13] = ProtoInstance520;

let ProtoInstance522 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance522.name = "line";
ProtoInstance522.DEF = "digitoxigenin_karne_b_15";
let fieldValue523 = browser.currentScene.createNode("fieldValue");
fieldValue523.name = "bond_set";
fieldValue523.value = "-1.114 2.0931 0.1658 -1.3206 3.6128 0.3983";
ProtoInstance522.fieldValue = new MFNode();

ProtoInstance522.fieldValue[0] = fieldValue523;

Group493.children[14] = ProtoInstance522;

let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.name = "line";
ProtoInstance524.DEF = "digitoxigenin_karne_b_16";
let fieldValue525 = browser.currentScene.createNode("fieldValue");
fieldValue525.name = "bond_set";
fieldValue525.value = "0.7681 2.5701 -1.5481 2.1105 2.0585 -2.0639";
ProtoInstance524.fieldValue = new MFNode();

ProtoInstance524.fieldValue[0] = fieldValue525;

Group493.children[15] = ProtoInstance524;

let ProtoInstance526 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance526.name = "line";
ProtoInstance526.DEF = "digitoxigenin_karne_b_17";
let fieldValue527 = browser.currentScene.createNode("fieldValue");
fieldValue527.name = "bond_set";
fieldValue527.value = "2.1105 2.0585 -2.0639 3.2569 2.2095 -1.0278";
ProtoInstance526.fieldValue = new MFNode();

ProtoInstance526.fieldValue[0] = fieldValue527;

Group493.children[16] = ProtoInstance526;

let ProtoInstance528 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance528.name = "line";
ProtoInstance528.DEF = "digitoxigenin_karne_b_18";
let fieldValue529 = browser.currentScene.createNode("fieldValue");
fieldValue529.name = "bond_set";
fieldValue529.value = "2.1105 2.0585 -2.0639 2.5002 2.7469 -3.2656";
ProtoInstance528.fieldValue = new MFNode();

ProtoInstance528.fieldValue[0] = fieldValue529;

Group493.children[17] = ProtoInstance528;

let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.name = "line";
ProtoInstance530.DEF = "digitoxigenin_karne_b_19";
let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "bond_set";
fieldValue531.value = "3.2569 2.2095 -1.0278 4.4147 1.2521 -1.499";
ProtoInstance530.fieldValue = new MFNode();

ProtoInstance530.fieldValue[0] = fieldValue531;

Group493.children[18] = ProtoInstance530;

let ProtoInstance532 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance532.name = "line";
ProtoInstance532.DEF = "digitoxigenin_karne_b_20";
let fieldValue533 = browser.currentScene.createNode("fieldValue");
fieldValue533.name = "bond_set";
fieldValue533.value = "3.2569 2.2095 -1.0278 3.6782 3.6838 -0.9321";
ProtoInstance532.fieldValue = new MFNode();

ProtoInstance532.fieldValue[0] = fieldValue533;

Group493.children[19] = ProtoInstance532;

let ProtoInstance534 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance534.name = "line";
ProtoInstance534.DEF = "digitoxigenin_karne_b_21";
let fieldValue535 = browser.currentScene.createNode("fieldValue");
fieldValue535.name = "bond_set";
fieldValue535.value = "2.7981 1.601 0.3349 3.2569 2.2095 -1.0278";
ProtoInstance534.fieldValue = new MFNode();

ProtoInstance534.fieldValue[0] = fieldValue535;

Group493.children[20] = ProtoInstance534;

let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.name = "line";
ProtoInstance536.DEF = "digitoxigenin_karne_b_22";
let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "bond_set";
fieldValue537.value = "2.7981 1.601 0.3349 2.9717 0.0748 0.1666";
ProtoInstance536.fieldValue = new MFNode();

ProtoInstance536.fieldValue[0] = fieldValue537;

Group493.children[21] = ProtoInstance536;

let ProtoInstance538 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance538.name = "line";
ProtoInstance538.DEF = "digitoxigenin_karne_b_23";
let fieldValue539 = browser.currentScene.createNode("fieldValue");
fieldValue539.name = "bond_set";
fieldValue539.value = "2.7981 1.601 0.3349 3.7691 1.9732 1.347";
ProtoInstance538.fieldValue = new MFNode();

ProtoInstance538.fieldValue[0] = fieldValue539;

Group493.children[22] = ProtoInstance538;

let ProtoInstance540 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance540.name = "line";
ProtoInstance540.DEF = "digitoxigenin_karne_b_24";
let fieldValue541 = browser.currentScene.createNode("fieldValue");
fieldValue541.name = "bond_set";
fieldValue541.value = "2.9717 0.0748 0.1666 4.016 -0.145 -0.9304";
ProtoInstance540.fieldValue = new MFNode();

ProtoInstance540.fieldValue[0] = fieldValue541;

Group493.children[23] = ProtoInstance540;

let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.name = "line";
ProtoInstance542.DEF = "digitoxigenin_karne_b_25";
let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "bond_set";
fieldValue543.value = "4.4147 1.2521 -1.499 4.016 -0.145 -0.9304";
ProtoInstance542.fieldValue = new MFNode();

ProtoInstance542.fieldValue[0] = fieldValue543;

Group493.children[24] = ProtoInstance542;

let ProtoInstance544 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance544.name = "line";
ProtoInstance544.DEF = "digitoxigenin_karne_b_26";
let fieldValue545 = browser.currentScene.createNode("fieldValue");
fieldValue545.name = "bond_set";
fieldValue545.value = "4.4147 1.2521 -1.499 5.8099 1.6589 -1.1447";
ProtoInstance544.fieldValue = new MFNode();

ProtoInstance544.fieldValue[0] = fieldValue545;

Group493.children[25] = ProtoInstance544;

let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.name = "line";
ProtoInstance546.DEF = "digitoxigenin_karne_b_27";
let fieldValue547 = browser.currentScene.createNode("fieldValue");
fieldValue547.name = "bond_set";
fieldValue547.value = "5.8099 1.6589 -1.1447 6.5388 1.3027 0.1169";
ProtoInstance546.fieldValue = new MFNode();

ProtoInstance546.fieldValue[0] = fieldValue547;

Group493.children[26] = ProtoInstance546;

let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.name = "line";
ProtoInstance548.DEF = "digitoxigenin_karne_b_28";
let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "bond_set";
fieldValue549.value = "5.7899 1.6589 -1.1447 6.640000000000001 2.3309 -1.9293";
ProtoInstance548.fieldValue = new MFNode();

ProtoInstance548.fieldValue[0] = fieldValue549;

Group493.children[27] = ProtoInstance548;

let ProtoInstance550 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance550.name = "line";
ProtoInstance550.DEF = "digitoxigenin_karne_b_28_2";
let fieldValue551 = browser.currentScene.createNode("fieldValue");
fieldValue551.name = "bond_set";
fieldValue551.value = "5.829899999999999 1.6589 -1.1447 6.68 2.3309 -1.9293";
ProtoInstance550.fieldValue = new MFNode();

ProtoInstance550.fieldValue[0] = fieldValue551;

Group493.children[28] = ProtoInstance550;

let ProtoInstance552 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance552.name = "line";
ProtoInstance552.DEF = "digitoxigenin_karne_b_29";
let fieldValue553 = browser.currentScene.createNode("fieldValue");
fieldValue553.name = "bond_set";
fieldValue553.value = "6.5388 1.3027 0.1169 7.8648 1.8507 -0.0582";
ProtoInstance552.fieldValue = new MFNode();

ProtoInstance552.fieldValue[0] = fieldValue553;

Group493.children[29] = ProtoInstance552;

let ProtoInstance554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance554.name = "line";
ProtoInstance554.DEF = "digitoxigenin_karne_b_30";
let fieldValue555 = browser.currentScene.createNode("fieldValue");
fieldValue555.name = "bond_set";
fieldValue555.value = "6.66 2.3309 -1.9293 7.9463 2.4238 -1.26";
ProtoInstance554.fieldValue = new MFNode();

ProtoInstance554.fieldValue[0] = fieldValue555;

Group493.children[30] = ProtoInstance554;

let ProtoInstance556 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance556.name = "line";
ProtoInstance556.DEF = "digitoxigenin_karne_b_31";
let fieldValue557 = browser.currentScene.createNode("fieldValue");
fieldValue557.name = "bond_set";
fieldValue557.value = "7.9263 2.4238 -1.26 8.9817 2.87 -1.6562";
ProtoInstance556.fieldValue = new MFNode();

ProtoInstance556.fieldValue[0] = fieldValue557;

Group493.children[31] = ProtoInstance556;

let ProtoInstance558 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance558.name = "line";
ProtoInstance558.DEF = "digitoxigenin_karne_b_31_2";
let fieldValue559 = browser.currentScene.createNode("fieldValue");
fieldValue559.name = "bond_set";
fieldValue559.value = "7.9662999999999995 2.4238 -1.26 9.0217 2.87 -1.6562";
ProtoInstance558.fieldValue = new MFNode();

ProtoInstance558.fieldValue[0] = fieldValue559;

Group493.children[32] = ProtoInstance558;

let ProtoInstance560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance560.name = "line";
ProtoInstance560.DEF = "digitoxigenin_karne_b_32";
let fieldValue561 = browser.currentScene.createNode("fieldValue");
fieldValue561.name = "bond_set";
fieldValue561.value = "7.9463 2.4238 -1.26 7.8648 1.8507 -0.0582";
ProtoInstance560.fieldValue = new MFNode();

ProtoInstance560.fieldValue[0] = fieldValue561;

Group493.children[33] = ProtoInstance560;

let ProtoInstance562 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance562.name = "line";
ProtoInstance562.DEF = "digitoxigenin_karne_b_33";
let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "bond_set";
fieldValue563.value = "-2.1606 1.6552 -0.8847 -3.1542 1.9631 -0.5268";
ProtoInstance562.fieldValue = new MFNode();

ProtoInstance562.fieldValue[0] = fieldValue563;

Group493.children[34] = ProtoInstance562;

let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.name = "line";
ProtoInstance564.DEF = "digitoxigenin_karne_b_34";
let fieldValue565 = browser.currentScene.createNode("fieldValue");
fieldValue565.name = "bond_set";
fieldValue565.value = "-2.1606 1.6552 -0.8847 -1.9345 2.1719 -1.829";
ProtoInstance564.fieldValue = new MFNode();

ProtoInstance564.fieldValue[0] = fieldValue565;

Group493.children[35] = ProtoInstance564;

let ProtoInstance566 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance566.name = "line";
ProtoInstance566.DEF = "digitoxigenin_karne_b_35";
let fieldValue567 = browser.currentScene.createNode("fieldValue");
fieldValue567.name = "bond_set";
fieldValue567.value = "-2.1997 0.1524 -1.1623 -1.2536 -0.1427 -1.6394";
ProtoInstance566.fieldValue = new MFNode();

ProtoInstance566.fieldValue[0] = fieldValue567;

Group493.children[36] = ProtoInstance566;

let ProtoInstance568 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance568.name = "line";
ProtoInstance568.DEF = "digitoxigenin_karne_b_36";
let fieldValue569 = browser.currentScene.createNode("fieldValue");
fieldValue569.name = "bond_set";
fieldValue569.value = "-2.1997 0.1524 -1.1623 -3.0361 -0.0583 -1.845";
ProtoInstance568.fieldValue = new MFNode();

ProtoInstance568.fieldValue[0] = fieldValue569;

Group493.children[37] = ProtoInstance568;

let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.name = "line";
ProtoInstance570.DEF = "digitoxigenin_karne_b_37";
let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "bond_set";
fieldValue571.value = "-2.3838 -0.6669 0.0977 -2.1882 -1.7259 -0.1262";
ProtoInstance570.fieldValue = new MFNode();

ProtoInstance570.fieldValue[0] = fieldValue571;

Group493.children[38] = ProtoInstance570;

let ProtoInstance572 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance572.name = "line";
ProtoInstance572.DEF = "digitoxigenin_karne_b_38";
let fieldValue573 = browser.currentScene.createNode("fieldValue");
fieldValue573.name = "bond_set";
fieldValue573.value = "-1.4275 -0.2242 1.2059 -0.4104 -0.538 0.9282";
ProtoInstance572.fieldValue = new MFNode();

ProtoInstance572.fieldValue[0] = fieldValue573;

Group493.children[39] = ProtoInstance572;

let ProtoInstance574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance574.name = "line";
ProtoInstance574.DEF = "digitoxigenin_karne_b_39";
let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "bond_set";
fieldValue575.value = "-1.4275 -0.2242 1.2059 -1.7247 -0.7271 2.1379";
ProtoInstance574.fieldValue = new MFNode();

ProtoInstance574.fieldValue[0] = fieldValue575;

Group493.children[40] = ProtoInstance574;

let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.name = "line";
ProtoInstance576.DEF = "digitoxigenin_karne_b_40";
let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "bond_set";
fieldValue577.value = "-1.4096 1.2976 1.4632 -2.4116 1.5894 1.8107";
ProtoInstance576.fieldValue = new MFNode();

ProtoInstance576.fieldValue[0] = fieldValue577;

Group493.children[41] = ProtoInstance576;

let ProtoInstance578 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance578.name = "line";
ProtoInstance578.DEF = "digitoxigenin_karne_b_41";
let fieldValue579 = browser.currentScene.createNode("fieldValue");
fieldValue579.name = "bond_set";
fieldValue579.value = "-0.4098 1.6499 2.5708 -0.6396 1.0472 3.4618";
ProtoInstance578.fieldValue = new MFNode();

ProtoInstance578.fieldValue[0] = fieldValue579;

Group493.children[42] = ProtoInstance578;

let ProtoInstance580 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance580.name = "line";
ProtoInstance580.DEF = "digitoxigenin_karne_b_42";
let fieldValue581 = browser.currentScene.createNode("fieldValue");
fieldValue581.name = "bond_set";
fieldValue581.value = "-0.4098 1.6499 2.5708 -0.5108 2.7178 2.8143";
ProtoInstance580.fieldValue = new MFNode();

ProtoInstance580.fieldValue[0] = fieldValue581;

Group493.children[43] = ProtoInstance580;

let ProtoInstance582 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance582.name = "line";
ProtoInstance582.DEF = "digitoxigenin_karne_b_43";
let fieldValue583 = browser.currentScene.createNode("fieldValue");
fieldValue583.name = "bond_set";
fieldValue583.value = "1.0361 1.3738 2.1457 1.1744 0.2867 2.0503";
ProtoInstance582.fieldValue = new MFNode();

ProtoInstance582.fieldValue[0] = fieldValue583;

Group493.children[44] = ProtoInstance582;

let ProtoInstance584 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance584.name = "line";
ProtoInstance584.DEF = "digitoxigenin_karne_b_44";
let fieldValue585 = browser.currentScene.createNode("fieldValue");
fieldValue585.name = "bond_set";
fieldValue585.value = "1.0361 1.3738 2.1457 1.7123 1.7627 2.9213";
ProtoInstance584.fieldValue = new MFNode();

ProtoInstance584.fieldValue[0] = fieldValue585;

Group493.children[45] = ProtoInstance584;

let ProtoInstance586 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance586.name = "line";
ProtoInstance586.DEF = "digitoxigenin_karne_b_45";
let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "bond_set";
fieldValue587.value = "1.3916 2.036 0.8039 1.4233 3.1214 0.98";
ProtoInstance586.fieldValue = new MFNode();

ProtoInstance586.fieldValue[0] = fieldValue587;

Group493.children[46] = ProtoInstance586;

let ProtoInstance588 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance588.name = "line";
ProtoInstance588.DEF = "digitoxigenin_karne_b_46";
let fieldValue589 = browser.currentScene.createNode("fieldValue");
fieldValue589.name = "bond_set";
fieldValue589.value = "0.3399 1.7901 -0.3008 0.3689 0.7204 -0.5556";
ProtoInstance588.fieldValue = new MFNode();

ProtoInstance588.fieldValue[0] = fieldValue589;

Group493.children[47] = ProtoInstance588;

let ProtoInstance590 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance590.name = "line";
ProtoInstance590.DEF = "digitoxigenin_karne_b_47";
let fieldValue591 = browser.currentScene.createNode("fieldValue");
fieldValue591.name = "bond_set";
fieldValue591.value = "0.7681 2.5701 -1.5481 0.8605 3.6364 -1.2942";
ProtoInstance590.fieldValue = new MFNode();

ProtoInstance590.fieldValue[0] = fieldValue591;

Group493.children[48] = ProtoInstance590;

let ProtoInstance592 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance592.name = "line";
ProtoInstance592.DEF = "digitoxigenin_karne_b_48";
let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "bond_set";
fieldValue593.value = "0.7681 2.5701 -1.5481 0.0072 2.4446 -2.3325";
ProtoInstance592.fieldValue = new MFNode();

ProtoInstance592.fieldValue[0] = fieldValue593;

Group493.children[49] = ProtoInstance592;

let ProtoInstance594 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance594.name = "line";
ProtoInstance594.DEF = "digitoxigenin_karne_b_49";
let fieldValue595 = browser.currentScene.createNode("fieldValue");
fieldValue595.name = "bond_set";
fieldValue595.value = "2.1105 2.0585 -2.0639 1.9935 0.9892 -2.2941";
ProtoInstance594.fieldValue = new MFNode();

ProtoInstance594.fieldValue[0] = fieldValue595;

Group493.children[50] = ProtoInstance594;

let ProtoInstance596 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance596.name = "line";
ProtoInstance596.DEF = "digitoxigenin_karne_b_50";
let fieldValue597 = browser.currentScene.createNode("fieldValue");
fieldValue597.name = "bond_set";
fieldValue597.value = "2.9717 0.0748 0.1666 2.0155 -0.383 -0.1266";
ProtoInstance596.fieldValue = new MFNode();

ProtoInstance596.fieldValue[0] = fieldValue597;

Group493.children[51] = ProtoInstance596;

let ProtoInstance598 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance598.name = "line";
ProtoInstance598.DEF = "digitoxigenin_karne_b_51";
let fieldValue599 = browser.currentScene.createNode("fieldValue");
fieldValue599.name = "bond_set";
fieldValue599.value = "2.9717 0.0748 0.1666 3.3176 -0.3713 1.1107";
ProtoInstance598.fieldValue = new MFNode();

ProtoInstance598.fieldValue[0] = fieldValue599;

Group493.children[52] = ProtoInstance598;

let ProtoInstance600 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance600.name = "line";
ProtoInstance600.DEF = "digitoxigenin_karne_b_52";
let fieldValue601 = browser.currentScene.createNode("fieldValue");
fieldValue601.name = "bond_set";
fieldValue601.value = "4.016 -0.145 -0.9304 3.5912 -0.7674 -1.7317";
ProtoInstance600.fieldValue = new MFNode();

ProtoInstance600.fieldValue[0] = fieldValue601;

Group493.children[53] = ProtoInstance600;

let ProtoInstance602 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance602.name = "line";
ProtoInstance602.DEF = "digitoxigenin_karne_b_53";
let fieldValue603 = browser.currentScene.createNode("fieldValue");
fieldValue603.name = "bond_set";
fieldValue603.value = "4.016 -0.145 -0.9304 4.9014 -0.6437 -0.5091";
ProtoInstance602.fieldValue = new MFNode();

ProtoInstance602.fieldValue[0] = fieldValue603;

Group493.children[54] = ProtoInstance602;

let ProtoInstance604 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance604.name = "line";
ProtoInstance604.DEF = "digitoxigenin_karne_b_54";
let fieldValue605 = browser.currentScene.createNode("fieldValue");
fieldValue605.name = "bond_set";
fieldValue605.value = "4.4147 1.2521 -1.499 4.3825 1.2027 -2.5975";
ProtoInstance604.fieldValue = new MFNode();

ProtoInstance604.fieldValue[0] = fieldValue605;

Group493.children[55] = ProtoInstance604;

let ProtoInstance606 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance606.name = "line";
ProtoInstance606.DEF = "digitoxigenin_karne_b_55";
let fieldValue607 = browser.currentScene.createNode("fieldValue");
fieldValue607.name = "bond_set";
fieldValue607.value = "3.6782 3.6838 -0.9321 3.9871 4.042 -1.9253";
ProtoInstance606.fieldValue = new MFNode();

ProtoInstance606.fieldValue[0] = fieldValue607;

Group493.children[56] = ProtoInstance606;

let ProtoInstance608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance608.name = "line";
ProtoInstance608.DEF = "digitoxigenin_karne_b_56";
let fieldValue609 = browser.currentScene.createNode("fieldValue");
fieldValue609.name = "bond_set";
fieldValue609.value = "3.6782 3.6838 -0.9321 4.5193 3.78 -0.2298";
ProtoInstance608.fieldValue = new MFNode();

ProtoInstance608.fieldValue[0] = fieldValue609;

Group493.children[57] = ProtoInstance608;

let ProtoInstance610 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance610.name = "line";
ProtoInstance610.DEF = "digitoxigenin_karne_b_57";
let fieldValue611 = browser.currentScene.createNode("fieldValue");
fieldValue611.name = "bond_set";
fieldValue611.value = "3.6782 3.6838 -0.9321 2.83 4.285 -0.573";
ProtoInstance610.fieldValue = new MFNode();

ProtoInstance610.fieldValue[0] = fieldValue611;

Group493.children[58] = ProtoInstance610;

let ProtoInstance612 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance612.name = "line";
ProtoInstance612.DEF = "digitoxigenin_karne_b_58";
let fieldValue613 = browser.currentScene.createNode("fieldValue");
fieldValue613.name = "bond_set";
fieldValue613.value = "-1.3206 3.6128 0.3983 -2.3543 3.7963 0.7265";
ProtoInstance612.fieldValue = new MFNode();

ProtoInstance612.fieldValue[0] = fieldValue613;

Group493.children[59] = ProtoInstance612;

let ProtoInstance614 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance614.name = "line";
ProtoInstance614.DEF = "digitoxigenin_karne_b_59";
let fieldValue615 = browser.currentScene.createNode("fieldValue");
fieldValue615.name = "bond_set";
fieldValue615.value = "-1.3206 3.6128 0.3983 -1.1316 4.1562 -0.5392";
ProtoInstance614.fieldValue = new MFNode();

ProtoInstance614.fieldValue[0] = fieldValue615;

Group493.children[60] = ProtoInstance614;

let ProtoInstance616 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance616.name = "line";
ProtoInstance616.DEF = "digitoxigenin_karne_b_60";
let fieldValue617 = browser.currentScene.createNode("fieldValue");
fieldValue617.name = "bond_set";
fieldValue617.value = "-1.3206 3.6128 0.3983 -0.6224 3.9636 1.1726";
ProtoInstance616.fieldValue = new MFNode();

ProtoInstance616.fieldValue[0] = fieldValue617;

Group493.children[61] = ProtoInstance616;

let ProtoInstance618 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance618.name = "line";
ProtoInstance618.DEF = "digitoxigenin_karne_b_61";
let fieldValue619 = browser.currentScene.createNode("fieldValue");
fieldValue619.name = "bond_set";
fieldValue619.value = "6.5388 1.3027 0.1169 6.584 0.211 0.2438";
ProtoInstance618.fieldValue = new MFNode();

ProtoInstance618.fieldValue[0] = fieldValue619;

Group493.children[62] = ProtoInstance618;

let ProtoInstance620 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance620.name = "line";
ProtoInstance620.DEF = "digitoxigenin_karne_b_62";
let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "bond_set";
fieldValue621.value = "6.5388 1.3027 0.1169 6.0452 1.7533 0.9905";
ProtoInstance620.fieldValue = new MFNode();

ProtoInstance620.fieldValue[0] = fieldValue621;

Group493.children[63] = ProtoInstance620;

let ProtoInstance622 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance622.name = "line";
ProtoInstance622.DEF = "digitoxigenin_karne_b_63";
let fieldValue623 = browser.currentScene.createNode("fieldValue");
fieldValue623.name = "bond_set";
fieldValue623.value = "6.66 2.3309 -1.9293 6.4259 2.7417 -2.9103";
ProtoInstance622.fieldValue = new MFNode();

ProtoInstance622.fieldValue[0] = fieldValue623;

Group493.children[64] = ProtoInstance622;

let ProtoInstance624 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance624.name = "line";
ProtoInstance624.DEF = "digitoxigenin_karne_b_64";
let fieldValue625 = browser.currentScene.createNode("fieldValue");
fieldValue625.name = "bond_set";
fieldValue625.value = "-3.7698 -0.5088 0.5013 -4.3394 -0.7908 -0.2048";
ProtoInstance624.fieldValue = new MFNode();

ProtoInstance624.fieldValue[0] = fieldValue625;

Group493.children[65] = ProtoInstance624;

let ProtoInstance626 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance626.name = "line";
ProtoInstance626.DEF = "digitoxigenin_karne_b_65";
let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "bond_set";
fieldValue627.value = "2.5002 2.7469 -3.2656 1.8108 2.6665 -3.9143";
ProtoInstance626.fieldValue = new MFNode();

ProtoInstance626.fieldValue[0] = fieldValue627;

Group493.children[66] = ProtoInstance626;

let ProtoInstance628 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance628.name = "line";
ProtoInstance628.DEF = "digitoxigenin_karne_b_66";
let fieldValue629 = browser.currentScene.createNode("fieldValue");
fieldValue629.name = "bond_set";
fieldValue629.value = "3.7691 1.9732 1.347 3.7194 2.9087 1.5046";
ProtoInstance628.fieldValue = new MFNode();

ProtoInstance628.fieldValue[0] = fieldValue629;

Group493.children[67] = ProtoInstance628;

browser.currentScene.children[23] = Group493;

