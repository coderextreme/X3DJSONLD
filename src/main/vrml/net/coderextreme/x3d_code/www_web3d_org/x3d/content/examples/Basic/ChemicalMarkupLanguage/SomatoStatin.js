let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SomatoStatin.x3d";
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
Viewpoint300.description = "Inspect SomatoStatin";
Viewpoint300.position = new SFVec3f(new float[0,2,20]);
browser.currentScene.children[20] = Viewpoint300;

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
fieldValue305.value = "\"SomatoStatin: \"";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

Transform302.children[1] = ProtoInstance304;

Transform301.children = new MFNode();

Transform301.children[0] = Transform302;

browser.currentScene.children[21] = Transform301;

//<date day=\"23\" month=\"11\" year=\"1995\"></date>
let Group306 = browser.currentScene.createNode("Group");
let Transform307 = browser.currentScene.createNode("Transform");
let ProtoInstance308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance308.name = "Carbon";
ProtoInstance308.DEF = "a1";
let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "position";
fieldValue309.value = "-12.2078 -4.5188 0";
ProtoInstance308.fieldValue = new MFNode();

ProtoInstance308.fieldValue[0] = fieldValue309;

Transform307.children = new MFNode();

Transform307.children[0] = ProtoInstance308;

Group306.children = new MFNode();

Group306.children[0] = Transform307;

let Transform310 = browser.currentScene.createNode("Transform");
let ProtoInstance311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance311.name = "Carbon";
ProtoInstance311.DEF = "a2";
let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "position";
fieldValue312.value = "-10.7479 -4.0461 0";
ProtoInstance311.fieldValue = new MFNode();

ProtoInstance311.fieldValue[0] = fieldValue312;

Transform310.children = new MFNode();

Transform310.children[0] = ProtoInstance311;

Group306.children[1] = Transform310;

let Transform313 = browser.currentScene.createNode("Transform");
let ProtoInstance314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance314.name = "Carbon";
ProtoInstance314.DEF = "a3";
let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "position";
fieldValue315.value = "-12.2078 -6.0483 0";
ProtoInstance314.fieldValue = new MFNode();

ProtoInstance314.fieldValue[0] = fieldValue315;

Transform313.children = new MFNode();

Transform313.children[0] = ProtoInstance314;

Group306.children[2] = Transform313;

let Transform316 = browser.currentScene.createNode("Transform");
let ProtoInstance317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance317.name = "Carbon";
ProtoInstance317.DEF = "a4";
let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "position";
fieldValue318.value = "-13.5565 -3.7541 0";
ProtoInstance317.fieldValue = new MFNode();

ProtoInstance317.fieldValue[0] = fieldValue318;

Transform316.children = new MFNode();

Transform316.children[0] = ProtoInstance317;

Group306.children[3] = Transform316;

let Transform319 = browser.currentScene.createNode("Transform");
let ProtoInstance320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance320.name = "Carbon";
ProtoInstance320.DEF = "a5";
let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "position";
fieldValue321.value = "-10.2751 -2.5862 0";
ProtoInstance320.fieldValue = new MFNode();

ProtoInstance320.fieldValue[0] = fieldValue321;

Transform319.children = new MFNode();

Transform319.children[0] = ProtoInstance320;

Group306.children[4] = Transform319;

let Transform322 = browser.currentScene.createNode("Transform");
let ProtoInstance323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance323.name = "Carbon";
ProtoInstance323.DEF = "a6";
let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "position";
fieldValue324.value = "-9.8441 -5.2836 0";
ProtoInstance323.fieldValue = new MFNode();

ProtoInstance323.fieldValue[0] = fieldValue324;

Transform322.children = new MFNode();

Transform322.children[0] = ProtoInstance323;

Group306.children[5] = Transform322;

let Transform325 = browser.currentScene.createNode("Transform");
let ProtoInstance326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance326.name = "Nitrogen";
ProtoInstance326.DEF = "a7";
let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "position";
fieldValue327.value = "-10.7479 -6.5349 0";
ProtoInstance326.fieldValue = new MFNode();

ProtoInstance326.fieldValue[0] = fieldValue327;

Transform325.children = new MFNode();

Transform325.children[0] = ProtoInstance326;

Group306.children[6] = Transform325;

let Transform328 = browser.currentScene.createNode("Transform");
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Carbon";
ProtoInstance329.DEF = "a8";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "position";
fieldValue330.value = "-13.5565 -6.8269 0";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

Transform328.children = new MFNode();

Transform328.children[0] = ProtoInstance329;

Group306.children[7] = Transform328;

let Transform331 = browser.currentScene.createNode("Transform");
let ProtoInstance332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance332.name = "Carbon";
ProtoInstance332.DEF = "a9";
let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "position";
fieldValue333.value = "-14.8774 -4.5188 0";
ProtoInstance332.fieldValue = new MFNode();

ProtoInstance332.fieldValue[0] = fieldValue333;

Transform331.children = new MFNode();

Transform331.children[0] = ProtoInstance332;

Group306.children[8] = Transform331;

let Transform334 = browser.currentScene.createNode("Transform");
let ProtoInstance335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance335.name = "Carbon";
ProtoInstance335.DEF = "a10";
let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "position";
fieldValue336.value = "-8.7735 -2.2525 0";
ProtoInstance335.fieldValue = new MFNode();

ProtoInstance335.fieldValue[0] = fieldValue336;

Transform334.children = new MFNode();

Transform334.children[0] = ProtoInstance335;

Group306.children[9] = Transform334;

let Transform337 = browser.currentScene.createNode("Transform");
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Carbon";
ProtoInstance338.DEF = "a11";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "position";
fieldValue339.value = "-14.8774 -6.0483 0";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

Transform337.children = new MFNode();

Transform337.children[0] = ProtoInstance338;

Group306.children[10] = Transform337;

let Transform340 = browser.currentScene.createNode("Transform");
let ProtoInstance341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance341.name = "Nitrogen";
ProtoInstance341.DEF = "a12";
let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "position";
fieldValue342.value = "-8.9681 -0.723 0";
ProtoInstance341.fieldValue = new MFNode();

ProtoInstance341.fieldValue[0] = fieldValue342;

Transform340.children = new MFNode();

Transform340.children[0] = ProtoInstance341;

Group306.children[11] = Transform340;

let Transform343 = browser.currentScene.createNode("Transform");
let ProtoInstance344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance344.name = "Carbon";
ProtoInstance344.DEF = "a13";
let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "position";
fieldValue345.value = "-8.3285 -3.7263 0";
ProtoInstance344.fieldValue = new MFNode();

ProtoInstance344.fieldValue[0] = fieldValue345;

Transform343.children = new MFNode();

Transform343.children[0] = ProtoInstance344;

Group306.children[12] = Transform343;

let Transform346 = browser.currentScene.createNode("Transform");
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Carbon";
ProtoInstance347.DEF = "a14";
let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "position";
fieldValue348.value = "-8.8986 0.8064 0";
ProtoInstance347.fieldValue = new MFNode();

ProtoInstance347.fieldValue[0] = fieldValue348;

Transform346.children = new MFNode();

Transform346.children[0] = ProtoInstance347;

Group306.children[13] = Transform346;

let Transform349 = browser.currentScene.createNode("Transform");
let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "Nitrogen";
ProtoInstance350.DEF = "a15";
let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "position";
fieldValue351.value = "-7.6472 -5.1167 0";
ProtoInstance350.fieldValue = new MFNode();

ProtoInstance350.fieldValue[0] = fieldValue351;

Transform349.children = new MFNode();

Transform349.children[0] = ProtoInstance350;

Group306.children[14] = Transform349;

let Transform352 = browser.currentScene.createNode("Transform");
let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.name = "Oxygen";
ProtoInstance353.DEF = "a16";
let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "position";
fieldValue354.value = "-9.7607 -4.2964 0";
ProtoInstance353.fieldValue = new MFNode();

ProtoInstance353.fieldValue[0] = fieldValue354;

Transform352.children = new MFNode();

Transform352.children[0] = ProtoInstance353;

Group306.children[15] = Transform352;

let Transform355 = browser.currentScene.createNode("Transform");
let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Carbon";
ProtoInstance356.DEF = "a17";
let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "position";
fieldValue357.value = "-8.5927 2.3081 0";
ProtoInstance356.fieldValue = new MFNode();

ProtoInstance356.fieldValue[0] = fieldValue357;

Transform355.children = new MFNode();

Transform355.children[0] = ProtoInstance356;

Group306.children[16] = Transform355;

let Transform358 = browser.currentScene.createNode("Transform");
let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.name = "Oxygen";
ProtoInstance359.DEF = "a18";
let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "position";
fieldValue360.value = "-10.4281 0.9872 0";
ProtoInstance359.fieldValue = new MFNode();

ProtoInstance359.fieldValue[0] = fieldValue360;

Transform358.children = new MFNode();

Transform358.children[0] = ProtoInstance359;

Group306.children[17] = Transform358;

let Transform361 = browser.currentScene.createNode("Transform");
let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.name = "Carbon";
ProtoInstance362.DEF = "a19";
let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "position";
fieldValue363.value = "-6.7296 -6.3542 0";
ProtoInstance362.fieldValue = new MFNode();

ProtoInstance362.fieldValue[0] = fieldValue363;

Transform361.children = new MFNode();

Transform361.children[0] = ProtoInstance362;

Group306.children[18] = Transform361;

let Transform364 = browser.currentScene.createNode("Transform");
let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.name = "Carbon";
ProtoInstance365.DEF = "a20";
let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "position";
fieldValue366.value = "-10.0666 2.753 0";
ProtoInstance365.fieldValue = new MFNode();

ProtoInstance365.fieldValue[0] = fieldValue366;

Transform364.children = new MFNode();

Transform364.children[0] = ProtoInstance365;

Group306.children[19] = Transform364;

let Transform367 = browser.currentScene.createNode("Transform");
let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.name = "Nitrogen";
ProtoInstance368.DEF = "a21";
let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "position";
fieldValue369.value = "-8.0366 3.7541 0";
ProtoInstance368.fieldValue = new MFNode();

ProtoInstance368.fieldValue[0] = fieldValue369;

Transform367.children = new MFNode();

Transform367.children[0] = ProtoInstance368;

Group306.children[20] = Transform367;

let Transform370 = browser.currentScene.createNode("Transform");
let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.name = "Carbon";
ProtoInstance371.DEF = "a22";
let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "position";
fieldValue372.value = "-5.6451 -7.4526 0";
ProtoInstance371.fieldValue = new MFNode();

ProtoInstance371.fieldValue[0] = fieldValue372;

Transform370.children = new MFNode();

Transform370.children[0] = ProtoInstance371;

Group306.children[21] = Transform370;

let Transform373 = browser.currentScene.createNode("Transform");
let ProtoInstance374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance374.name = "Carbon";
ProtoInstance374.DEF = "a23";
let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "position";
fieldValue375.value = "-7.9253 -7.3692 0";
ProtoInstance374.fieldValue = new MFNode();

ProtoInstance374.fieldValue[0] = fieldValue375;

Transform373.children = new MFNode();

Transform373.children[0] = ProtoInstance374;

Group306.children[22] = Transform373;

let Transform376 = browser.currentScene.createNode("Transform");
let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Carbon";
ProtoInstance377.DEF = "a24";
let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "position";
fieldValue378.value = "-10.4281 4.2546 0";
ProtoInstance377.fieldValue = new MFNode();

ProtoInstance377.fieldValue[0] = fieldValue378;

Transform376.children = new MFNode();

Transform376.children[0] = ProtoInstance377;

Group306.children[23] = Transform376;

let Transform379 = browser.currentScene.createNode("Transform");
let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.name = "Carbon";
ProtoInstance380.DEF = "a25";
let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "position";
fieldValue381.value = "-7.244 5.075 0";
ProtoInstance380.fieldValue = new MFNode();

ProtoInstance380.fieldValue[0] = fieldValue381;

Transform379.children = new MFNode();

Transform379.children[0] = ProtoInstance380;

Group306.children[24] = Transform379;

let Transform382 = browser.currentScene.createNode("Transform");
let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.name = "Nitrogen";
ProtoInstance383.DEF = "a26";
let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "position";
fieldValue384.value = "-4.3937 -8.3425 0";
ProtoInstance383.fieldValue = new MFNode();

ProtoInstance383.fieldValue[0] = fieldValue384;

Transform382.children = new MFNode();

Transform382.children[0] = ProtoInstance383;

Group306.children[25] = Transform382;

let Transform385 = browser.currentScene.createNode("Transform");
let ProtoInstance386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance386.name = "Oxygen";
ProtoInstance386.DEF = "a27";
let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "position";
fieldValue387.value = "-6.6322 -8.6344 0";
ProtoInstance386.fieldValue = new MFNode();

ProtoInstance386.fieldValue[0] = fieldValue387;

Transform385.children = new MFNode();

Transform385.children[0] = ProtoInstance386;

Group306.children[26] = Transform385;

let Transform388 = browser.currentScene.createNode("Transform");
let ProtoInstance389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance389.name = "Carbon";
ProtoInstance389.DEF = "a28";
let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "position";
fieldValue390.value = "-9.3714 -6.8408 0";
ProtoInstance389.fieldValue = new MFNode();

ProtoInstance389.fieldValue[0] = fieldValue390;

Transform388.children = new MFNode();

Transform388.children[0] = ProtoInstance389;

Group306.children[27] = Transform388;

let Transform391 = browser.currentScene.createNode("Transform");
let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.name = "Carbon";
ProtoInstance392.DEF = "a29";
let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "position";
fieldValue393.value = "-11.9019 4.6857 0";
ProtoInstance392.fieldValue = new MFNode();

ProtoInstance392.fieldValue[0] = fieldValue393;

Transform391.children = new MFNode();

Transform391.children[0] = ProtoInstance392;

Group306.children[28] = Transform391;

let Transform394 = browser.currentScene.createNode("Transform");
let ProtoInstance395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance395.name = "Carbon";
ProtoInstance395.DEF = "a30";
let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "position";
fieldValue396.value = "-9.3157 5.3114 0";
ProtoInstance395.fieldValue = new MFNode();

ProtoInstance395.fieldValue[0] = fieldValue396;

Transform394.children = new MFNode();

Transform394.children[0] = ProtoInstance395;

Group306.children[29] = Transform394;

let Transform397 = browser.currentScene.createNode("Transform");
let ProtoInstance398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance398.name = "Carbon";
ProtoInstance398.DEF = "a31";
let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "position";
fieldValue399.value = "-6.2568 6.2568 0";
ProtoInstance398.fieldValue = new MFNode();

ProtoInstance398.fieldValue[0] = fieldValue399;

Transform397.children = new MFNode();

Transform397.children[0] = ProtoInstance398;

Group306.children[30] = Transform397;

let Transform400 = browser.currentScene.createNode("Transform");
let ProtoInstance401 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance401.name = "Oxygen";
ProtoInstance401.DEF = "a32";
let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "position";
fieldValue402.value = "-8.5093 5.9649 0";
ProtoInstance401.fieldValue = new MFNode();

ProtoInstance401.fieldValue[0] = fieldValue402;

Transform400.children = new MFNode();

Transform400.children[0] = ProtoInstance401;

Group306.children[31] = Transform400;

let Transform403 = browser.currentScene.createNode("Transform");
let ProtoInstance404 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance404.name = "Carbon";
ProtoInstance404.DEF = "a33";
let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "position";
fieldValue405.value = "-3.0172 -9.0238 0";
ProtoInstance404.fieldValue = new MFNode();

ProtoInstance404.fieldValue[0] = fieldValue405;

Transform403.children = new MFNode();

Transform403.children[0] = ProtoInstance404;

Group306.children[32] = Transform403;

let Transform406 = browser.currentScene.createNode("Transform");
let ProtoInstance407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance407.name = "Carbon";
ProtoInstance407.DEF = "a34";
let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "position";
fieldValue408.value = "-10.5393 -7.8558 0";
ProtoInstance407.fieldValue = new MFNode();

ProtoInstance407.fieldValue[0] = fieldValue408;

Transform406.children = new MFNode();

Transform406.children[0] = ProtoInstance407;

Group306.children[33] = Transform406;

let Transform409 = browser.currentScene.createNode("Transform");
let ProtoInstance410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance410.name = "Carbon";
ProtoInstance410.DEF = "a35";
let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "position";
fieldValue411.value = "-12.2634 6.1734 0";
ProtoInstance410.fieldValue = new MFNode();

ProtoInstance410.fieldValue[0] = fieldValue411;

Transform409.children = new MFNode();

Transform409.children[0] = ProtoInstance410;

Group306.children[34] = Transform409;

let Transform412 = browser.currentScene.createNode("Transform");
let ProtoInstance413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance413.name = "Carbon";
ProtoInstance413.DEF = "a36";
let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "position";
fieldValue414.value = "-9.6772 6.7991 0";
ProtoInstance413.fieldValue = new MFNode();

ProtoInstance413.fieldValue[0] = fieldValue414;

Transform412.children = new MFNode();

Transform412.children[0] = ProtoInstance413;

Group306.children[35] = Transform412;

let Transform415 = browser.currentScene.createNode("Transform");
let ProtoInstance416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance416.name = "Carbon";
ProtoInstance416.DEF = "a37";
let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "position";
fieldValue417.value = "-7.3414 7.3275 0";
ProtoInstance416.fieldValue = new MFNode();

ProtoInstance416.fieldValue[0] = fieldValue417;

Transform415.children = new MFNode();

Transform415.children[0] = ProtoInstance416;

Group306.children[36] = Transform415;

let Transform418 = browser.currentScene.createNode("Transform");
let ProtoInstance419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance419.name = "Nitrogen";
ProtoInstance419.DEF = "a38";
let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "position";
fieldValue420.value = "-5.075 7.244 0";
ProtoInstance419.fieldValue = new MFNode();

ProtoInstance419.fieldValue[0] = fieldValue420;

Transform418.children = new MFNode();

Transform418.children[0] = ProtoInstance419;

Group306.children[37] = Transform418;

let Transform421 = browser.currentScene.createNode("Transform");
let ProtoInstance422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance422.name = "Carbon";
ProtoInstance422.DEF = "a39";
let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "position";
fieldValue423.value = "-1.5294 -9.4548 0";
ProtoInstance422.fieldValue = new MFNode();

ProtoInstance422.fieldValue[0] = fieldValue423;

Transform421.children = new MFNode();

Transform421.children[0] = ProtoInstance422;

Group306.children[38] = Transform421;

let Transform424 = browser.currentScene.createNode("Transform");
let ProtoInstance425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance425.name = "Carbon";
ProtoInstance425.DEF = "a40";
let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "position";
fieldValue426.value = "-3.5594 -10.4559 0";
ProtoInstance425.fieldValue = new MFNode();

ProtoInstance425.fieldValue[0] = fieldValue426;

Transform424.children = new MFNode();

Transform424.children[0] = ProtoInstance425;

Group306.children[39] = Transform424;

let Transform427 = browser.currentScene.createNode("Transform");
let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.name = "Carbon";
ProtoInstance428.DEF = "a41";
let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "position";
fieldValue429.value = "-11.9853 -7.3275 0";
ProtoInstance428.fieldValue = new MFNode();

ProtoInstance428.fieldValue[0] = fieldValue429;

Transform427.children = new MFNode();

Transform427.children[0] = ProtoInstance428;

Group306.children[40] = Transform427;

let Transform430 = browser.currentScene.createNode("Transform");
let ProtoInstance431 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance431.name = "Carbon";
ProtoInstance431.DEF = "a42";
let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "position";
fieldValue432.value = "-11.1511 7.2301 0";
ProtoInstance431.fieldValue = new MFNode();

ProtoInstance431.fieldValue[0] = fieldValue432;

Transform430.children = new MFNode();

Transform430.children[0] = ProtoInstance431;

Group306.children[41] = Transform430;

let Transform433 = browser.currentScene.createNode("Transform");
let ProtoInstance434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance434.name = "Carbon";
ProtoInstance434.DEF = "a43";
let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "position";
fieldValue435.value = "-6.952 8.8291 0";
ProtoInstance434.fieldValue = new MFNode();

ProtoInstance434.fieldValue[0] = fieldValue435;

Transform433.children = new MFNode();

Transform433.children[0] = ProtoInstance434;

Group306.children[42] = Transform433;

let Transform436 = browser.currentScene.createNode("Transform");
let ProtoInstance437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance437.name = "Carbon";
ProtoInstance437.DEF = "a44";
let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "position";
fieldValue438.value = "-3.768 8.0505 0";
ProtoInstance437.fieldValue = new MFNode();

ProtoInstance437.fieldValue[0] = fieldValue438;

Transform436.children = new MFNode();

Transform436.children[0] = ProtoInstance437;

Group306.children[43] = Transform436;

let Transform439 = browser.currentScene.createNode("Transform");
let ProtoInstance440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance440.name = "Nitrogen";
ProtoInstance440.DEF = "a45";
let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "position";
fieldValue441.value = "0 -9.6355 0";
ProtoInstance440.fieldValue = new MFNode();

ProtoInstance440.fieldValue[0] = fieldValue441;

Transform439.children = new MFNode();

Transform439.children[0] = ProtoInstance440;

Group306.children[44] = Transform439;

let Transform442 = browser.currentScene.createNode("Transform");
let ProtoInstance443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance443.name = "Oxygen";
ProtoInstance443.DEF = "a46";
let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "position";
fieldValue444.value = "-1.8353 -10.9564 0";
ProtoInstance443.fieldValue = new MFNode();

ProtoInstance443.fieldValue[0] = fieldValue444;

Transform442.children = new MFNode();

Transform442.children[0] = ProtoInstance443;

Group306.children[45] = Transform442;

let Transform445 = browser.currentScene.createNode("Transform");
let ProtoInstance446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance446.name = "Carbon";
ProtoInstance446.DEF = "a47";
let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "position";
fieldValue447.value = "-5.0889 -10.6922 0";
ProtoInstance446.fieldValue = new MFNode();

ProtoInstance446.fieldValue[0] = fieldValue447;

Transform445.children = new MFNode();

Transform445.children[0] = ProtoInstance446;

Group306.children[46] = Transform445;

let Transform448 = browser.currentScene.createNode("Transform");
let ProtoInstance449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance449.name = "Oxygen";
ProtoInstance449.DEF = "a48";
let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "position";
fieldValue450.value = "-3.6151 -12.5554 0";
ProtoInstance449.fieldValue = new MFNode();

ProtoInstance449.fieldValue[0] = fieldValue450;

Transform448.children = new MFNode();

Transform448.children[0] = ProtoInstance449;

Group306.children[47] = Transform448;

let Transform451 = browser.currentScene.createNode("Transform");
let ProtoInstance452 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance452.name = "Nitrogen";
ProtoInstance452.DEF = "a49";
let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "position";
fieldValue453.value = "-13.1672 -8.3285 0";
ProtoInstance452.fieldValue = new MFNode();

ProtoInstance452.fieldValue[0] = fieldValue453;

Transform451.children = new MFNode();

Transform451.children[0] = ProtoInstance452;

Group306.children[48] = Transform451;

let Transform454 = browser.currentScene.createNode("Transform");
let ProtoInstance455 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance455.name = "Carbon";
ProtoInstance455.DEF = "a50";
let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "position";
fieldValue456.value = "-8.0505 9.9136 0";
ProtoInstance455.fieldValue = new MFNode();

ProtoInstance455.fieldValue[0] = fieldValue456;

Transform454.children = new MFNode();

Transform454.children[0] = ProtoInstance455;

Group306.children[49] = Transform454;

let Transform457 = browser.currentScene.createNode("Transform");
let ProtoInstance458 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance458.name = "Carbon";
ProtoInstance458.DEF = "a51";
let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "position";
fieldValue459.value = "-5.4643 9.2323 0";
ProtoInstance458.fieldValue = new MFNode();

ProtoInstance458.fieldValue[0] = fieldValue459;

Transform457.children = new MFNode();

Transform457.children[0] = ProtoInstance458;

Group306.children[50] = Transform457;

let Transform460 = browser.currentScene.createNode("Transform");
let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "Carbon";
ProtoInstance461.DEF = "a52";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "position";
fieldValue462.value = "-2.322 8.6205 0";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

Transform460.children = new MFNode();

Transform460.children[0] = ProtoInstance461;

Group306.children[51] = Transform460;

let Transform463 = browser.currentScene.createNode("Transform");
let ProtoInstance464 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance464.name = "Oxygen";
ProtoInstance464.DEF = "a53";
let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "position";
fieldValue465.value = "-4.4354 9.427 0";
ProtoInstance464.fieldValue = new MFNode();

ProtoInstance464.fieldValue[0] = fieldValue465;

Transform463.children = new MFNode();

Transform463.children[0] = ProtoInstance464;

Group306.children[52] = Transform463;

let Transform466 = browser.currentScene.createNode("Transform");
let ProtoInstance467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance467.name = "Carbon";
ProtoInstance467.DEF = "a54";
let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "position";
fieldValue468.value = "1.5294 -9.566 0";
ProtoInstance467.fieldValue = new MFNode();

ProtoInstance467.fieldValue[0] = fieldValue468;

Transform466.children = new MFNode();

Transform466.children[0] = ProtoInstance467;

Group306.children[53] = Transform466;

let Transform469 = browser.currentScene.createNode("Transform");
let ProtoInstance470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance470.name = "Carbon";
ProtoInstance470.DEF = "a55";
let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "position";
fieldValue471.value = "-7.6611 11.4013 0";
ProtoInstance470.fieldValue = new MFNode();

ProtoInstance470.fieldValue[0] = fieldValue471;

Transform469.children = new MFNode();

Transform469.children[0] = ProtoInstance470;

Group306.children[54] = Transform469;

let Transform472 = browser.currentScene.createNode("Transform");
let ProtoInstance473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance473.name = "Carbon";
ProtoInstance473.DEF = "a56";
let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "position";
fieldValue474.value = "-5.075 10.72 0";
ProtoInstance473.fieldValue = new MFNode();

ProtoInstance473.fieldValue[0] = fieldValue474;

Transform472.children = new MFNode();

Transform472.children[0] = ProtoInstance473;

Group306.children[55] = Transform472;

let Transform475 = browser.currentScene.createNode("Transform");
let ProtoInstance476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance476.name = "Nitrogen";
ProtoInstance476.DEF = "a57";
let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "position";
fieldValue477.value = "-0.8203 8.9403 0";
ProtoInstance476.fieldValue = new MFNode();

ProtoInstance476.fieldValue[0] = fieldValue477;

Transform475.children = new MFNode();

Transform475.children[0] = ProtoInstance476;

Group306.children[56] = Transform475;

let Transform478 = browser.currentScene.createNode("Transform");
let ProtoInstance479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance479.name = "Carbon";
ProtoInstance479.DEF = "a58";
let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "position";
fieldValue480.value = "-2.7808 10.0805 0";
ProtoInstance479.fieldValue = new MFNode();

ProtoInstance479.fieldValue[0] = fieldValue480;

Transform478.children = new MFNode();

Transform478.children[0] = ProtoInstance479;

Group306.children[57] = Transform478;

let Transform481 = browser.currentScene.createNode("Transform");
let ProtoInstance482 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance482.name = "Carbon";
ProtoInstance482.DEF = "a59";
let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "position";
fieldValue483.value = "1.7241 -11.0955 0";
ProtoInstance482.fieldValue = new MFNode();

ProtoInstance482.fieldValue[0] = fieldValue483;

Transform481.children = new MFNode();

Transform481.children[0] = ProtoInstance482;

Group306.children[58] = Transform481;

let Transform484 = browser.currentScene.createNode("Transform");
let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Carbon";
ProtoInstance485.DEF = "a60";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "position";
fieldValue486.value = "3.045 -9.2462 0";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

Transform484.children = new MFNode();

Transform484.children[0] = ProtoInstance485;

Group306.children[59] = Transform484;

let Transform487 = browser.currentScene.createNode("Transform");
let ProtoInstance488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance488.name = "Carbon";
ProtoInstance488.DEF = "a61";
let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "position";
fieldValue489.value = "-6.1595 11.8046 0";
ProtoInstance488.fieldValue = new MFNode();

ProtoInstance488.fieldValue[0] = fieldValue489;

Transform487.children = new MFNode();

Transform487.children[0] = ProtoInstance488;

Group306.children[60] = Transform487;

let Transform490 = browser.currentScene.createNode("Transform");
let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "Carbon";
ProtoInstance491.DEF = "a62";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "position";
fieldValue492.value = "0.7091 8.9959 0";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

Transform490.children = new MFNode();

Transform490.children[0] = ProtoInstance491;

Group306.children[61] = Transform490;

let Transform493 = browser.currentScene.createNode("Transform");
let ProtoInstance494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance494.name = "Carbon";
ProtoInstance494.DEF = "a63";
let fieldValue495 = browser.currentScene.createNode("fieldValue");
fieldValue495.name = "position";
fieldValue495.value = "-1.7102 11.2067 0";
ProtoInstance494.fieldValue = new MFNode();

ProtoInstance494.fieldValue[0] = fieldValue495;

Transform493.children = new MFNode();

Transform493.children[0] = ProtoInstance494;

Group306.children[62] = Transform493;

let Transform496 = browser.currentScene.createNode("Transform");
let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.name = "Carbon";
ProtoInstance497.DEF = "a64";
let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "position";
fieldValue498.value = "0.5005 -12.027 0";
ProtoInstance497.fieldValue = new MFNode();

ProtoInstance497.fieldValue[0] = fieldValue498;

Transform496.children = new MFNode();

Transform496.children[0] = ProtoInstance497;

Group306.children[63] = Transform496;

let Transform499 = browser.currentScene.createNode("Transform");
let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.name = "Nitrogen";
ProtoInstance500.DEF = "a65";
let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "position";
fieldValue501.value = "4.4771 -8.6901 0";
ProtoInstance500.fieldValue = new MFNode();

ProtoInstance500.fieldValue[0] = fieldValue501;

Transform499.children = new MFNode();

Transform499.children[0] = ProtoInstance500;

Group306.children[64] = Transform499;

let Transform502 = browser.currentScene.createNode("Transform");
let ProtoInstance503 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance503.name = "Oxygen";
ProtoInstance503.DEF = "a66";
let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "position";
fieldValue504.value = "3.4899 -10.72 0";
ProtoInstance503.fieldValue = new MFNode();

ProtoInstance503.fieldValue[0] = fieldValue504;

Transform502.children = new MFNode();

Transform502.children[0] = ProtoInstance503;

Group306.children[65] = Transform502;

let Transform505 = browser.currentScene.createNode("Transform");
let ProtoInstance506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance506.name = "Carbon";
ProtoInstance506.DEF = "a67";
let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "position";
fieldValue507.value = "2.2386 8.8152 0";
ProtoInstance506.fieldValue = new MFNode();

ProtoInstance506.fieldValue[0] = fieldValue507;

Transform505.children = new MFNode();

Transform505.children[0] = ProtoInstance506;

Group306.children[66] = Transform505;

let Transform508 = browser.currentScene.createNode("Transform");
let ProtoInstance509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance509.name = "Oxygen";
ProtoInstance509.DEF = "a68";
let fieldValue510 = browser.currentScene.createNode("fieldValue");
fieldValue510.name = "position";
fieldValue510.value = "0.7647 10.5393 0";
ProtoInstance509.fieldValue = new MFNode();

ProtoInstance509.fieldValue[0] = fieldValue510;

Transform508.children = new MFNode();

Transform508.children[0] = ProtoInstance509;

Group306.children[67] = Transform508;

let Transform511 = browser.currentScene.createNode("Transform");
let ProtoInstance512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance512.name = "Nitrogen";
ProtoInstance512.DEF = "a69";
let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "position";
fieldValue513.value = "-2.1551 12.6944 0";
ProtoInstance512.fieldValue = new MFNode();

ProtoInstance512.fieldValue[0] = fieldValue513;

Transform511.children = new MFNode();

Transform511.children[0] = ProtoInstance512;

Group306.children[68] = Transform511;

let Transform514 = browser.currentScene.createNode("Transform");
let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.name = "Oxygen";
ProtoInstance515.DEF = "a70";
let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "position";
fieldValue516.value = "0.0278 12.027 0";
ProtoInstance515.fieldValue = new MFNode();

ProtoInstance515.fieldValue[0] = fieldValue516;

Transform514.children = new MFNode();

Transform514.children[0] = ProtoInstance515;

Group306.children[69] = Transform514;

let Transform517 = browser.currentScene.createNode("Transform");
let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.name = "Carbon";
ProtoInstance518.DEF = "a71";
let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "position";
fieldValue519.value = "0.6952 -13.5704 0";
ProtoInstance518.fieldValue = new MFNode();

ProtoInstance518.fieldValue[0] = fieldValue519;

Transform517.children = new MFNode();

Transform517.children[0] = ProtoInstance518;

Group306.children[70] = Transform517;

let Transform520 = browser.currentScene.createNode("Transform");
let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.name = "Carbon";
ProtoInstance521.DEF = "a72";
let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "position";
fieldValue522.value = "-0.9038 -11.4292 0";
ProtoInstance521.fieldValue = new MFNode();

ProtoInstance521.fieldValue[0] = fieldValue522;

Transform520.children = new MFNode();

Transform520.children[0] = ProtoInstance521;

Group306.children[71] = Transform520;

let Transform523 = browser.currentScene.createNode("Transform");
let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.name = "Carbon";
ProtoInstance524.DEF = "a73";
let fieldValue525 = browser.currentScene.createNode("fieldValue");
fieldValue525.name = "position";
fieldValue525.value = "5.7841 -7.8975 0";
ProtoInstance524.fieldValue = new MFNode();

ProtoInstance524.fieldValue[0] = fieldValue525;

Transform523.children = new MFNode();

Transform523.children[0] = ProtoInstance524;

Group306.children[72] = Transform523;

let Transform526 = browser.currentScene.createNode("Transform");
let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.name = "Nitrogen";
ProtoInstance527.DEF = "a74";
let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "position";
fieldValue528.value = "3.7263 8.3842 0";
ProtoInstance527.fieldValue = new MFNode();

ProtoInstance527.fieldValue[0] = fieldValue528;

Transform526.children = new MFNode();

Transform526.children[0] = ProtoInstance527;

Group306.children[73] = Transform526;

let Transform529 = browser.currentScene.createNode("Transform");
let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.name = "Carbon";
ProtoInstance530.DEF = "a75";
let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "position";
fieldValue531.value = "2.5584 10.3168 0";
ProtoInstance530.fieldValue = new MFNode();

ProtoInstance530.fieldValue[0] = fieldValue531;

Transform529.children = new MFNode();

Transform529.children[0] = ProtoInstance530;

Group306.children[74] = Transform529;

let Transform532 = browser.currentScene.createNode("Transform");
let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.name = "Carbon";
ProtoInstance533.DEF = "a76";
let fieldValue534 = browser.currentScene.createNode("fieldValue");
fieldValue534.name = "position";
fieldValue534.value = "-0.5145 -14.4881 0";
ProtoInstance533.fieldValue = new MFNode();

ProtoInstance533.fieldValue[0] = fieldValue534;

Transform532.children = new MFNode();

Transform532.children[0] = ProtoInstance533;

Group306.children[75] = Transform532;

let Transform535 = browser.currentScene.createNode("Transform");
let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.name = "Carbon";
ProtoInstance536.DEF = "a77";
let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "position";
fieldValue537.value = "-2.1273 -12.3746 0";
ProtoInstance536.fieldValue = new MFNode();

ProtoInstance536.fieldValue[0] = fieldValue537;

Transform535.children = new MFNode();

Transform535.children[0] = ProtoInstance536;

Group306.children[76] = Transform535;

let Transform538 = browser.currentScene.createNode("Transform");
let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "Carbon";
ProtoInstance539.DEF = "a78";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "position";
fieldValue540.value = "6.9659 -6.8825 0";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

Transform538.children = new MFNode();

Transform538.children[0] = ProtoInstance539;

Group306.children[77] = Transform538;

let Transform541 = browser.currentScene.createNode("Transform");
let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.name = "Carbon";
ProtoInstance542.DEF = "a79";
let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "position";
fieldValue543.value = "6.6879 -9.1489 0";
ProtoInstance542.fieldValue = new MFNode();

ProtoInstance542.fieldValue[0] = fieldValue543;

Transform541.children = new MFNode();

Transform541.children[0] = ProtoInstance542;

Group306.children[78] = Transform541;

let Transform544 = browser.currentScene.createNode("Transform");
let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.name = "Carbon";
ProtoInstance545.DEF = "a80";
let fieldValue546 = browser.currentScene.createNode("fieldValue");
fieldValue546.name = "position";
fieldValue546.value = "5.1028 7.7029 0";
ProtoInstance545.fieldValue = new MFNode();

ProtoInstance545.fieldValue[0] = fieldValue546;

Transform544.children = new MFNode();

Transform544.children[0] = ProtoInstance545;

Group306.children[79] = Transform544;

let Transform547 = browser.currentScene.createNode("Transform");
let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.name = "Carbon";
ProtoInstance548.DEF = "a81";
let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "position";
fieldValue549.value = "4.0183 10.8035 0";
ProtoInstance548.fieldValue = new MFNode();

ProtoInstance548.fieldValue[0] = fieldValue549;

Transform547.children = new MFNode();

Transform547.children[0] = ProtoInstance548;

Group306.children[80] = Transform547;

let Transform550 = browser.currentScene.createNode("Transform");
let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.name = "Carbon";
ProtoInstance551.DEF = "a82";
let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "position";
fieldValue552.value = "-1.9327 -13.9041 0";
ProtoInstance551.fieldValue = new MFNode();

ProtoInstance551.fieldValue[0] = fieldValue552;

Transform550.children = new MFNode();

Transform550.children[0] = ProtoInstance551;

Group306.children[81] = Transform550;

let Transform553 = browser.currentScene.createNode("Transform");
let ProtoInstance554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance554.name = "Nitrogen";
ProtoInstance554.DEF = "a83";
let fieldValue555 = browser.currentScene.createNode("fieldValue");
fieldValue555.name = "position";
fieldValue555.value = "7.967 -5.7146 0";
ProtoInstance554.fieldValue = new MFNode();

ProtoInstance554.fieldValue[0] = fieldValue555;

Transform553.children = new MFNode();

Transform553.children[0] = ProtoInstance554;

Group306.children[82] = Transform553;

let Transform556 = browser.currentScene.createNode("Transform");
let ProtoInstance557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance557.name = "Oxygen";
ProtoInstance557.DEF = "a84";
let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "position";
fieldValue558.value = "8.0644 -7.9809 0";
ProtoInstance557.fieldValue = new MFNode();

ProtoInstance557.fieldValue[0] = fieldValue558;

Transform556.children = new MFNode();

Transform556.children[0] = ProtoInstance557;

Group306.children[83] = Transform556;

let Transform559 = browser.currentScene.createNode("Transform");
let ProtoInstance560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance560.name = "Carbon";
ProtoInstance560.DEF = "a85";
let fieldValue561 = browser.currentScene.createNode("fieldValue");
fieldValue561.name = "position";
fieldValue561.value = "6.0483 -10.5532 0";
ProtoInstance560.fieldValue = new MFNode();

ProtoInstance560.fieldValue[0] = fieldValue561;

Transform559.children = new MFNode();

Transform559.children[0] = ProtoInstance560;

Group306.children[84] = Transform559;

let Transform562 = browser.currentScene.createNode("Transform");
let ProtoInstance563 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance563.name = "Oxygen";
ProtoInstance563.DEF = "a86";
let fieldValue564 = browser.currentScene.createNode("fieldValue");
fieldValue564.name = "position";
fieldValue564.value = "8.6066 -10.2473 0";
ProtoInstance563.fieldValue = new MFNode();

ProtoInstance563.fieldValue[0] = fieldValue564;

Transform562.children = new MFNode();

Transform562.children[0] = ProtoInstance563;

Group306.children[85] = Transform562;

let Transform565 = browser.currentScene.createNode("Transform");
let ProtoInstance566 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance566.name = "Carbon";
ProtoInstance566.DEF = "a87";
let fieldValue567 = browser.currentScene.createNode("fieldValue");
fieldValue567.name = "position";
fieldValue567.value = "6.3542 6.7991 0";
ProtoInstance566.fieldValue = new MFNode();

ProtoInstance566.fieldValue[0] = fieldValue567;

Transform565.children = new MFNode();

Transform565.children[0] = ProtoInstance566;

Group306.children[86] = Transform565;

let Transform568 = browser.currentScene.createNode("Transform");
let ProtoInstance569 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance569.name = "Oxygen";
ProtoInstance569.DEF = "a88";
let fieldValue570 = browser.currentScene.createNode("fieldValue");
fieldValue570.name = "position";
fieldValue570.value = "5.8814 9.0377 0";
ProtoInstance569.fieldValue = new MFNode();

ProtoInstance569.fieldValue[0] = fieldValue570;

Transform568.children = new MFNode();

Transform568.children[0] = ProtoInstance569;

Group306.children[87] = Transform568;

let Transform571 = browser.currentScene.createNode("Transform");
let ProtoInstance572 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance572.name = "Carbon";
ProtoInstance572.DEF = "a89";
let fieldValue573 = browser.currentScene.createNode("fieldValue");
fieldValue573.name = "position";
fieldValue573.value = "4.3242 12.3051 0";
ProtoInstance572.fieldValue = new MFNode();

ProtoInstance572.fieldValue[0] = fieldValue573;

Transform571.children = new MFNode();

Transform571.children[0] = ProtoInstance572;

Group306.children[88] = Transform571;

let Transform574 = browser.currentScene.createNode("Transform");
let ProtoInstance575 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance575.name = "Carbon";
ProtoInstance575.DEF = "a90";
let fieldValue576 = browser.currentScene.createNode("fieldValue");
fieldValue576.name = "position";
fieldValue576.value = "8.7457 -4.3937 0";
ProtoInstance575.fieldValue = new MFNode();

ProtoInstance575.fieldValue[0] = fieldValue576;

Transform574.children = new MFNode();

Transform574.children[0] = ProtoInstance575;

Group306.children[89] = Transform574;

let Transform577 = browser.currentScene.createNode("Transform");
let ProtoInstance578 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance578.name = "Carbon";
ProtoInstance578.DEF = "a91";
let fieldValue579 = browser.currentScene.createNode("fieldValue");
fieldValue579.name = "position";
fieldValue579.value = "7.4665 5.7285 0";
ProtoInstance578.fieldValue = new MFNode();

ProtoInstance578.fieldValue[0] = fieldValue579;

Transform577.children = new MFNode();

Transform577.children[0] = ProtoInstance578;

Group306.children[90] = Transform577;

let Transform580 = browser.currentScene.createNode("Transform");
let ProtoInstance581 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance581.name = "Nitrogen";
ProtoInstance581.DEF = "a92";
let fieldValue582 = browser.currentScene.createNode("fieldValue");
fieldValue582.name = "position";
fieldValue582.value = "7.3414 7.9948 0";
ProtoInstance581.fieldValue = new MFNode();

ProtoInstance581.fieldValue[0] = fieldValue582;

Transform580.children = new MFNode();

Transform580.children[0] = ProtoInstance581;

Group306.children[91] = Transform580;

let Transform583 = browser.currentScene.createNode("Transform");
let ProtoInstance584 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance584.name = "Carbon";
ProtoInstance584.DEF = "a93";
let fieldValue585 = browser.currentScene.createNode("fieldValue");
fieldValue585.name = "position";
fieldValue585.value = "5.7841 12.8057 0";
ProtoInstance584.fieldValue = new MFNode();

ProtoInstance584.fieldValue[0] = fieldValue585;

Transform583.children = new MFNode();

Transform583.children[0] = ProtoInstance584;

Group306.children[92] = Transform583;

let Transform586 = browser.currentScene.createNode("Transform");
let ProtoInstance587 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance587.name = "Carbon";
ProtoInstance587.DEF = "a94";
let fieldValue588 = browser.currentScene.createNode("fieldValue");
fieldValue588.name = "position";
fieldValue588.value = "9.3018 -2.9616 0";
ProtoInstance587.fieldValue = new MFNode();

ProtoInstance587.fieldValue[0] = fieldValue588;

Transform586.children = new MFNode();

Transform586.children[0] = ProtoInstance587;

Group306.children[93] = Transform586;

let Transform589 = browser.currentScene.createNode("Transform");
let ProtoInstance590 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance590.name = "Carbon";
ProtoInstance590.DEF = "a95";
let fieldValue591 = browser.currentScene.createNode("fieldValue");
fieldValue591.name = "position";
fieldValue591.value = "10.1361 -5.0611 0";
ProtoInstance590.fieldValue = new MFNode();

ProtoInstance590.fieldValue[0] = fieldValue591;

Transform589.children = new MFNode();

Transform589.children[0] = ProtoInstance590;

Group306.children[94] = Transform589;

let Transform592 = browser.currentScene.createNode("Transform");
let ProtoInstance593 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance593.name = "Sulphur";
ProtoInstance593.DEF = "a96";
let fieldValue594 = browser.currentScene.createNode("fieldValue");
fieldValue594.name = "position";
fieldValue594.value = "8.3564 4.4771 0";
ProtoInstance593.fieldValue = new MFNode();

ProtoInstance593.fieldValue[0] = fieldValue594;

Transform592.children = new MFNode();

Transform592.children[0] = ProtoInstance593;

Group306.children[95] = Transform592;

let Transform595 = browser.currentScene.createNode("Transform");
let ProtoInstance596 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance596.name = "Carbon";
ProtoInstance596.DEF = "a97";
let fieldValue597 = browser.currentScene.createNode("fieldValue");
fieldValue597.name = "position";
fieldValue597.value = "8.8708 7.7307 0";
ProtoInstance596.fieldValue = new MFNode();

ProtoInstance596.fieldValue[0] = fieldValue597;

Transform595.children = new MFNode();

Transform595.children[0] = ProtoInstance596;

Group306.children[96] = Transform595;

let Transform598 = browser.currentScene.createNode("Transform");
let ProtoInstance599 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance599.name = "Nitrogen";
ProtoInstance599.DEF = "a98";
let fieldValue600 = browser.currentScene.createNode("fieldValue");
fieldValue600.name = "position";
fieldValue600.value = "6.1039 14.3073 0";
ProtoInstance599.fieldValue = new MFNode();

ProtoInstance599.fieldValue[0] = fieldValue600;

Transform598.children = new MFNode();

Transform598.children[0] = ProtoInstance599;

Group306.children[97] = Transform598;

let Transform601 = browser.currentScene.createNode("Transform");
let ProtoInstance602 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance602.name = "Nitrogen";
ProtoInstance602.DEF = "a99";
let fieldValue603 = browser.currentScene.createNode("fieldValue");
fieldValue603.name = "position";
fieldValue603.value = "9.6077 -1.4321 0";
ProtoInstance602.fieldValue = new MFNode();

ProtoInstance602.fieldValue[0] = fieldValue603;

Transform601.children = new MFNode();

Transform601.children[0] = ProtoInstance602;

Group306.children[98] = Transform601;

let Transform604 = browser.currentScene.createNode("Transform");
let ProtoInstance605 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance605.name = "Oxygen";
ProtoInstance605.DEF = "a100";
let fieldValue606 = browser.currentScene.createNode("fieldValue");
fieldValue606.name = "position";
fieldValue606.value = "10.7757 -3.3926 0";
ProtoInstance605.fieldValue = new MFNode();

ProtoInstance605.fieldValue[0] = fieldValue606;

Transform604.children = new MFNode();

Transform604.children[0] = ProtoInstance605;

Group306.children[99] = Transform604;

let Transform607 = browser.currentScene.createNode("Transform");
let ProtoInstance608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance608.name = "Oxygen";
ProtoInstance608.DEF = "a101";
let fieldValue609 = browser.currentScene.createNode("fieldValue");
fieldValue609.name = "position";
fieldValue609.value = "10.2334 -6.5905 0";
ProtoInstance608.fieldValue = new MFNode();

ProtoInstance608.fieldValue[0] = fieldValue609;

Transform607.children = new MFNode();

Transform607.children[0] = ProtoInstance608;

Group306.children[100] = Transform607;

let Transform610 = browser.currentScene.createNode("Transform");
let ProtoInstance611 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance611.name = "Sulphur";
ProtoInstance611.DEF = "a102";
let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "position";
fieldValue612.value = "9.0377 3.1006 0";
ProtoInstance611.fieldValue = new MFNode();

ProtoInstance611.fieldValue[0] = fieldValue612;

Transform610.children = new MFNode();

Transform610.children[0] = ProtoInstance611;

Group306.children[101] = Transform610;

let Transform613 = browser.currentScene.createNode("Transform");
let ProtoInstance614 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance614.name = "Carbon";
ProtoInstance614.DEF = "a103";
let fieldValue615 = browser.currentScene.createNode("fieldValue");
fieldValue615.name = "position";
fieldValue615.value = "9.858 8.8986 0";
ProtoInstance614.fieldValue = new MFNode();

ProtoInstance614.fieldValue[0] = fieldValue615;

Transform613.children = new MFNode();

Transform613.children[0] = ProtoInstance614;

Group306.children[102] = Transform613;

let Transform616 = browser.currentScene.createNode("Transform");
let ProtoInstance617 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance617.name = "Oxygen";
ProtoInstance617.DEF = "a104";
let fieldValue618 = browser.currentScene.createNode("fieldValue");
fieldValue618.name = "position";
fieldValue618.value = "9.3992 6.2707 0";
ProtoInstance617.fieldValue = new MFNode();

ProtoInstance617.fieldValue[0] = fieldValue618;

Transform616.children = new MFNode();

Transform616.children[0] = ProtoInstance617;

Group306.children[103] = Transform616;

let Transform619 = browser.currentScene.createNode("Transform");
let ProtoInstance620 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance620.name = "Carbon";
ProtoInstance620.DEF = "a105";
let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "position";
fieldValue621.value = "9.6772 0.0834 0";
ProtoInstance620.fieldValue = new MFNode();

ProtoInstance620.fieldValue[0] = fieldValue621;

Transform619.children = new MFNode();

Transform619.children[0] = ProtoInstance620;

Group306.children[104] = Transform619;

let Transform622 = browser.currentScene.createNode("Transform");
let ProtoInstance623 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance623.name = "Carbon";
ProtoInstance623.DEF = "a106";
let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "position";
fieldValue624.value = "9.4826 1.6129 0";
ProtoInstance623.fieldValue = new MFNode();

ProtoInstance623.fieldValue[0] = fieldValue624;

Transform622.children = new MFNode();

Transform622.children[0] = ProtoInstance623;

Group306.children[105] = Transform622;

let Transform625 = browser.currentScene.createNode("Transform");
let ProtoInstance626 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance626.name = "Nitrogen";
ProtoInstance626.DEF = "a107";
let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "position";
fieldValue627.value = "11.3735 8.6344 0";
ProtoInstance626.fieldValue = new MFNode();

ProtoInstance626.fieldValue[0] = fieldValue627;

Transform625.children = new MFNode();

Transform625.children[0] = ProtoInstance626;

Group306.children[106] = Transform625;

let Transform628 = browser.currentScene.createNode("Transform");
let ProtoInstance629 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance629.name = "Carbon";
ProtoInstance629.DEF = "a108";
let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "position";
fieldValue630.value = "11.2067 0.1529 0";
ProtoInstance629.fieldValue = new MFNode();

ProtoInstance629.fieldValue[0] = fieldValue630;

Transform628.children = new MFNode();

Transform628.children[0] = ProtoInstance629;

Group306.children[107] = Transform628;

let Transform631 = browser.currentScene.createNode("Transform");
let ProtoInstance632 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance632.name = "Carbon";
ProtoInstance632.DEF = "a109";
let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "position";
fieldValue633.value = "12.3746 9.8024 0";
ProtoInstance632.fieldValue = new MFNode();

ProtoInstance632.fieldValue[0] = fieldValue633;

Transform631.children = new MFNode();

Transform631.children[0] = ProtoInstance632;

Group306.children[108] = Transform631;

let Transform634 = browser.currentScene.createNode("Transform");
let ProtoInstance635 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance635.name = "Oxygen";
ProtoInstance635.DEF = "a110";
let fieldValue636 = browser.currentScene.createNode("fieldValue");
fieldValue636.name = "position";
fieldValue636.value = "11.9158 1.5155 0";
ProtoInstance635.fieldValue = new MFNode();

ProtoInstance635.fieldValue[0] = fieldValue636;

Transform634.children = new MFNode();

Transform634.children[0] = ProtoInstance635;

Group306.children[109] = Transform634;

let Transform637 = browser.currentScene.createNode("Transform");
let ProtoInstance638 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance638.name = "Oxygen";
ProtoInstance638.DEF = "a111";
let fieldValue639 = browser.currentScene.createNode("fieldValue");
fieldValue639.name = "position";
fieldValue639.value = "12.0409 -1.1262 0";
ProtoInstance638.fieldValue = new MFNode();

ProtoInstance638.fieldValue[0] = fieldValue639;

Transform637.children = new MFNode();

Transform637.children[0] = ProtoInstance638;

Group306.children[110] = Transform637;

let Transform640 = browser.currentScene.createNode("Transform");
let ProtoInstance641 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance641.name = "Carbon";
ProtoInstance641.DEF = "a112";
let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "position";
fieldValue642.value = "13.8902 9.5382 0";
ProtoInstance641.fieldValue = new MFNode();

ProtoInstance641.fieldValue[0] = fieldValue642;

Transform640.children = new MFNode();

Transform640.children[0] = ProtoInstance641;

Group306.children[111] = Transform640;

let Transform643 = browser.currentScene.createNode("Transform");
let ProtoInstance644 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance644.name = "Oxygen";
ProtoInstance644.DEF = "a113";
let fieldValue645 = browser.currentScene.createNode("fieldValue");
fieldValue645.name = "position";
fieldValue645.value = "11.8463 11.2484 0";
ProtoInstance644.fieldValue = new MFNode();

ProtoInstance644.fieldValue[0] = fieldValue645;

Transform643.children = new MFNode();

Transform643.children[0] = ProtoInstance644;

Group306.children[112] = Transform643;

let Transform646 = browser.currentScene.createNode("Transform");
let ProtoInstance647 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance647.name = "Carbon";
ProtoInstance647.DEF = "a114";
let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "position";
fieldValue648.value = "14.8774 10.7061 0";
ProtoInstance647.fieldValue = new MFNode();

ProtoInstance647.fieldValue[0] = fieldValue648;

Transform646.children = new MFNode();

Transform646.children[0] = ProtoInstance647;

Group306.children[113] = Transform646;

let Transform649 = browser.currentScene.createNode("Transform");
let ProtoInstance650 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance650.name = "Nitrogen";
ProtoInstance650.DEF = "a115";
let fieldValue651 = browser.currentScene.createNode("fieldValue");
fieldValue651.name = "position";
fieldValue651.value = "14.4185 8.0922 0";
ProtoInstance650.fieldValue = new MFNode();

ProtoInstance650.fieldValue[0] = fieldValue651;

Transform649.children = new MFNode();

Transform649.children[0] = ProtoInstance650;

Group306.children[114] = Transform649;

browser.currentScene.children[22] = Group306;

let Group652 = browser.currentScene.createNode("Group");
let ProtoInstance653 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance653.name = "line";
ProtoInstance653.DEF = "b1";
let fieldValue654 = browser.currentScene.createNode("fieldValue");
fieldValue654.name = "bond_set";
fieldValue654.value = "-12.2078 -4.5188 0 -10.7479 -4.0461 0";
ProtoInstance653.fieldValue = new MFNode();

ProtoInstance653.fieldValue[0] = fieldValue654;

Group652.children = new MFNode();

Group652.children[0] = ProtoInstance653;

let ProtoInstance655 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance655.name = "line";
ProtoInstance655.DEF = "b2";
let fieldValue656 = browser.currentScene.createNode("fieldValue");
fieldValue656.name = "bond_set";
fieldValue656.value = "-12.2278 -4.5188 0 -12.2278 -6.0483 0";
ProtoInstance655.fieldValue = new MFNode();

ProtoInstance655.fieldValue[0] = fieldValue656;

Group652.children[1] = ProtoInstance655;

let ProtoInstance657 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance657.name = "line";
ProtoInstance657.DEF = "b2_2";
let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "bond_set";
fieldValue658.value = "-12.187800000000001 -4.5188 0 -12.187800000000001 -6.0483 0";
ProtoInstance657.fieldValue = new MFNode();

ProtoInstance657.fieldValue[0] = fieldValue658;

Group652.children[2] = ProtoInstance657;

let ProtoInstance659 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance659.name = "line";
ProtoInstance659.DEF = "b3";
let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "bond_set";
fieldValue660.value = "-12.2078 -4.5188 0 -13.5565 -3.7541 0";
ProtoInstance659.fieldValue = new MFNode();

ProtoInstance659.fieldValue[0] = fieldValue660;

Group652.children[3] = ProtoInstance659;

let ProtoInstance661 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance661.name = "line";
ProtoInstance661.DEF = "b4";
let fieldValue662 = browser.currentScene.createNode("fieldValue");
fieldValue662.name = "bond_set";
fieldValue662.value = "-10.7479 -4.0461 0 -10.2751 -2.5862 0";
ProtoInstance661.fieldValue = new MFNode();

ProtoInstance661.fieldValue[0] = fieldValue662;

Group652.children[4] = ProtoInstance661;

let ProtoInstance663 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance663.name = "line";
ProtoInstance663.DEF = "b5";
let fieldValue664 = browser.currentScene.createNode("fieldValue");
fieldValue664.name = "bond_set";
fieldValue664.value = "-10.7679 -4.0461 0 -9.864099999999999 -5.2836 0";
ProtoInstance663.fieldValue = new MFNode();

ProtoInstance663.fieldValue[0] = fieldValue664;

Group652.children[5] = ProtoInstance663;

let ProtoInstance665 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance665.name = "line";
ProtoInstance665.DEF = "b5_2";
let fieldValue666 = browser.currentScene.createNode("fieldValue");
fieldValue666.name = "bond_set";
fieldValue666.value = "-10.7279 -4.0461 0 -9.8241 -5.2836 0";
ProtoInstance665.fieldValue = new MFNode();

ProtoInstance665.fieldValue[0] = fieldValue666;

Group652.children[6] = ProtoInstance665;

let ProtoInstance667 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance667.name = "line";
ProtoInstance667.DEF = "b6";
let fieldValue668 = browser.currentScene.createNode("fieldValue");
fieldValue668.name = "bond_set";
fieldValue668.value = "-12.2078 -6.0483 0 -10.7479 -6.5349 0";
ProtoInstance667.fieldValue = new MFNode();

ProtoInstance667.fieldValue[0] = fieldValue668;

Group652.children[7] = ProtoInstance667;

let ProtoInstance669 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance669.name = "line";
ProtoInstance669.DEF = "b7";
let fieldValue670 = browser.currentScene.createNode("fieldValue");
fieldValue670.name = "bond_set";
fieldValue670.value = "-12.2078 -6.0483 0 -13.5565 -6.8269 0";
ProtoInstance669.fieldValue = new MFNode();

ProtoInstance669.fieldValue[0] = fieldValue670;

Group652.children[8] = ProtoInstance669;

let ProtoInstance671 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance671.name = "line";
ProtoInstance671.DEF = "b8";
let fieldValue672 = browser.currentScene.createNode("fieldValue");
fieldValue672.name = "bond_set";
fieldValue672.value = "-13.5765 -3.7541 0 -14.8974 -4.5188 0";
ProtoInstance671.fieldValue = new MFNode();

ProtoInstance671.fieldValue[0] = fieldValue672;

Group652.children[9] = ProtoInstance671;

let ProtoInstance673 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance673.name = "line";
ProtoInstance673.DEF = "b8_2";
let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "bond_set";
fieldValue674.value = "-13.5365 -3.7541 0 -14.8574 -4.5188 0";
ProtoInstance673.fieldValue = new MFNode();

ProtoInstance673.fieldValue[0] = fieldValue674;

Group652.children[10] = ProtoInstance673;

let ProtoInstance675 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance675.name = "line";
ProtoInstance675.DEF = "b9";
let fieldValue676 = browser.currentScene.createNode("fieldValue");
fieldValue676.name = "bond_set";
fieldValue676.value = "-10.2751 -2.5862 0 -8.7735 -2.2525 0";
ProtoInstance675.fieldValue = new MFNode();

ProtoInstance675.fieldValue[0] = fieldValue676;

Group652.children[11] = ProtoInstance675;

let ProtoInstance677 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance677.name = "line";
ProtoInstance677.DEF = "b10";
let fieldValue678 = browser.currentScene.createNode("fieldValue");
fieldValue678.name = "bond_set";
fieldValue678.value = "-13.5765 -6.8269 0 -14.8974 -6.0483 0";
ProtoInstance677.fieldValue = new MFNode();

ProtoInstance677.fieldValue[0] = fieldValue678;

Group652.children[12] = ProtoInstance677;

let ProtoInstance679 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance679.name = "line";
ProtoInstance679.DEF = "b10_2";
let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "bond_set";
fieldValue680.value = "-13.5365 -6.8269 0 -14.8574 -6.0483 0";
ProtoInstance679.fieldValue = new MFNode();

ProtoInstance679.fieldValue[0] = fieldValue680;

Group652.children[13] = ProtoInstance679;

let ProtoInstance681 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance681.name = "line";
ProtoInstance681.DEF = "b11";
let fieldValue682 = browser.currentScene.createNode("fieldValue");
fieldValue682.name = "bond_set";
fieldValue682.value = "-8.7735 -2.2525 0 -8.9681 -0.723 0";
ProtoInstance681.fieldValue = new MFNode();

ProtoInstance681.fieldValue[0] = fieldValue682;

Group652.children[14] = ProtoInstance681;

let ProtoInstance683 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance683.name = "line";
ProtoInstance683.DEF = "b12";
let fieldValue684 = browser.currentScene.createNode("fieldValue");
fieldValue684.name = "bond_set";
fieldValue684.value = "-8.7735 -2.2525 0 -8.3285 -3.7263 0";
ProtoInstance683.fieldValue = new MFNode();

ProtoInstance683.fieldValue[0] = fieldValue684;

Group652.children[15] = ProtoInstance683;

let ProtoInstance685 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance685.name = "line";
ProtoInstance685.DEF = "b13";
let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "bond_set";
fieldValue686.value = "-8.9681 -0.723 0 -8.8986 0.8064 0";
ProtoInstance685.fieldValue = new MFNode();

ProtoInstance685.fieldValue[0] = fieldValue686;

Group652.children[16] = ProtoInstance685;

let ProtoInstance687 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance687.name = "line";
ProtoInstance687.DEF = "b14";
let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "bond_set";
fieldValue688.value = "-8.3285 -3.7263 0 -7.6472 -5.1167 0";
ProtoInstance687.fieldValue = new MFNode();

ProtoInstance687.fieldValue[0] = fieldValue688;

Group652.children[17] = ProtoInstance687;

let ProtoInstance689 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance689.name = "line";
ProtoInstance689.DEF = "b15";
let fieldValue690 = browser.currentScene.createNode("fieldValue");
fieldValue690.name = "bond_set";
fieldValue690.value = "-8.3485 -3.7263 0 -9.7807 -4.2964 0";
ProtoInstance689.fieldValue = new MFNode();

ProtoInstance689.fieldValue[0] = fieldValue690;

Group652.children[18] = ProtoInstance689;

let ProtoInstance691 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance691.name = "line";
ProtoInstance691.DEF = "b15_2";
let fieldValue692 = browser.currentScene.createNode("fieldValue");
fieldValue692.name = "bond_set";
fieldValue692.value = "-8.3085 -3.7263 0 -9.7407 -4.2964 0";
ProtoInstance691.fieldValue = new MFNode();

ProtoInstance691.fieldValue[0] = fieldValue692;

Group652.children[19] = ProtoInstance691;

let ProtoInstance693 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance693.name = "line";
ProtoInstance693.DEF = "b16";
let fieldValue694 = browser.currentScene.createNode("fieldValue");
fieldValue694.name = "bond_set";
fieldValue694.value = "-8.8986 0.8064 0 -8.5927 2.3081 0";
ProtoInstance693.fieldValue = new MFNode();

ProtoInstance693.fieldValue[0] = fieldValue694;

Group652.children[20] = ProtoInstance693;

let ProtoInstance695 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance695.name = "line";
ProtoInstance695.DEF = "b17";
let fieldValue696 = browser.currentScene.createNode("fieldValue");
fieldValue696.name = "bond_set";
fieldValue696.value = "-8.9186 0.8064 0 -10.4481 0.9872 0";
ProtoInstance695.fieldValue = new MFNode();

ProtoInstance695.fieldValue[0] = fieldValue696;

Group652.children[21] = ProtoInstance695;

let ProtoInstance697 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance697.name = "line";
ProtoInstance697.DEF = "b17_2";
let fieldValue698 = browser.currentScene.createNode("fieldValue");
fieldValue698.name = "bond_set";
fieldValue698.value = "-8.8786 0.8064 0 -10.408100000000001 0.9872 0";
ProtoInstance697.fieldValue = new MFNode();

ProtoInstance697.fieldValue[0] = fieldValue698;

Group652.children[22] = ProtoInstance697;

let ProtoInstance699 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance699.name = "line";
ProtoInstance699.DEF = "b18";
let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "bond_set";
fieldValue700.value = "-7.6472 -5.1167 0 -6.7296 -6.3542 0";
ProtoInstance699.fieldValue = new MFNode();

ProtoInstance699.fieldValue[0] = fieldValue700;

Group652.children[23] = ProtoInstance699;

let ProtoInstance701 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance701.name = "line";
ProtoInstance701.DEF = "b19";
let fieldValue702 = browser.currentScene.createNode("fieldValue");
fieldValue702.name = "bond_set";
fieldValue702.value = "-8.5927 2.3081 0 -10.0666 2.753 0";
ProtoInstance701.fieldValue = new MFNode();

ProtoInstance701.fieldValue[0] = fieldValue702;

Group652.children[24] = ProtoInstance701;

let ProtoInstance703 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance703.name = "line";
ProtoInstance703.DEF = "b20";
let fieldValue704 = browser.currentScene.createNode("fieldValue");
fieldValue704.name = "bond_set";
fieldValue704.value = "-8.5927 2.3081 0 -8.0366 3.7541 0";
ProtoInstance703.fieldValue = new MFNode();

ProtoInstance703.fieldValue[0] = fieldValue704;

Group652.children[25] = ProtoInstance703;

let ProtoInstance705 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance705.name = "line";
ProtoInstance705.DEF = "b21";
let fieldValue706 = browser.currentScene.createNode("fieldValue");
fieldValue706.name = "bond_set";
fieldValue706.value = "-6.7296 -6.3542 0 -5.6451 -7.4526 0";
ProtoInstance705.fieldValue = new MFNode();

ProtoInstance705.fieldValue[0] = fieldValue706;

Group652.children[26] = ProtoInstance705;

let ProtoInstance707 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance707.name = "line";
ProtoInstance707.DEF = "b22";
let fieldValue708 = browser.currentScene.createNode("fieldValue");
fieldValue708.name = "bond_set";
fieldValue708.value = "-6.7296 -6.3542 0 -7.9253 -7.3692 0";
ProtoInstance707.fieldValue = new MFNode();

ProtoInstance707.fieldValue[0] = fieldValue708;

Group652.children[27] = ProtoInstance707;

let ProtoInstance709 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance709.name = "line";
ProtoInstance709.DEF = "b23";
let fieldValue710 = browser.currentScene.createNode("fieldValue");
fieldValue710.name = "bond_set";
fieldValue710.value = "-10.0666 2.753 0 -10.4281 4.2546 0";
ProtoInstance709.fieldValue = new MFNode();

ProtoInstance709.fieldValue[0] = fieldValue710;

Group652.children[28] = ProtoInstance709;

let ProtoInstance711 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance711.name = "line";
ProtoInstance711.DEF = "b24";
let fieldValue712 = browser.currentScene.createNode("fieldValue");
fieldValue712.name = "bond_set";
fieldValue712.value = "-8.0366 3.7541 0 -7.244 5.075 0";
ProtoInstance711.fieldValue = new MFNode();

ProtoInstance711.fieldValue[0] = fieldValue712;

Group652.children[29] = ProtoInstance711;

let ProtoInstance713 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance713.name = "line";
ProtoInstance713.DEF = "b25";
let fieldValue714 = browser.currentScene.createNode("fieldValue");
fieldValue714.name = "bond_set";
fieldValue714.value = "-5.6451 -7.4526 0 -4.3937 -8.3425 0";
ProtoInstance713.fieldValue = new MFNode();

ProtoInstance713.fieldValue[0] = fieldValue714;

Group652.children[30] = ProtoInstance713;

let ProtoInstance715 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance715.name = "line";
ProtoInstance715.DEF = "b26";
let fieldValue716 = browser.currentScene.createNode("fieldValue");
fieldValue716.name = "bond_set";
fieldValue716.value = "-5.6651 -7.4526 0 -6.6522 -8.6344 0";
ProtoInstance715.fieldValue = new MFNode();

ProtoInstance715.fieldValue[0] = fieldValue716;

Group652.children[31] = ProtoInstance715;

let ProtoInstance717 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance717.name = "line";
ProtoInstance717.DEF = "b26_2";
let fieldValue718 = browser.currentScene.createNode("fieldValue");
fieldValue718.name = "bond_set";
fieldValue718.value = "-5.625100000000001 -7.4526 0 -6.6122000000000005 -8.6344 0";
ProtoInstance717.fieldValue = new MFNode();

ProtoInstance717.fieldValue[0] = fieldValue718;

Group652.children[32] = ProtoInstance717;

let ProtoInstance719 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance719.name = "line";
ProtoInstance719.DEF = "b27";
let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "bond_set";
fieldValue720.value = "-7.9253 -7.3692 0 -9.3714 -6.8408 0";
ProtoInstance719.fieldValue = new MFNode();

ProtoInstance719.fieldValue[0] = fieldValue720;

Group652.children[33] = ProtoInstance719;

let ProtoInstance721 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance721.name = "line";
ProtoInstance721.DEF = "b28";
let fieldValue722 = browser.currentScene.createNode("fieldValue");
fieldValue722.name = "bond_set";
fieldValue722.value = "-10.4481 4.2546 0 -11.921899999999999 4.6857 0";
ProtoInstance721.fieldValue = new MFNode();

ProtoInstance721.fieldValue[0] = fieldValue722;

Group652.children[34] = ProtoInstance721;

let ProtoInstance723 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance723.name = "line";
ProtoInstance723.DEF = "b28_2";
let fieldValue724 = browser.currentScene.createNode("fieldValue");
fieldValue724.name = "bond_set";
fieldValue724.value = "-10.408100000000001 4.2546 0 -11.8819 4.6857 0";
ProtoInstance723.fieldValue = new MFNode();

ProtoInstance723.fieldValue[0] = fieldValue724;

Group652.children[35] = ProtoInstance723;

let ProtoInstance725 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance725.name = "line";
ProtoInstance725.DEF = "b29";
let fieldValue726 = browser.currentScene.createNode("fieldValue");
fieldValue726.name = "bond_set";
fieldValue726.value = "-10.4281 4.2546 0 -9.3157 5.3114 0";
ProtoInstance725.fieldValue = new MFNode();

ProtoInstance725.fieldValue[0] = fieldValue726;

Group652.children[36] = ProtoInstance725;

let ProtoInstance727 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance727.name = "line";
ProtoInstance727.DEF = "b30";
let fieldValue728 = browser.currentScene.createNode("fieldValue");
fieldValue728.name = "bond_set";
fieldValue728.value = "-7.244 5.075 0 -6.2568 6.2568 0";
ProtoInstance727.fieldValue = new MFNode();

ProtoInstance727.fieldValue[0] = fieldValue728;

Group652.children[37] = ProtoInstance727;

let ProtoInstance729 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance729.name = "line";
ProtoInstance729.DEF = "b31";
let fieldValue730 = browser.currentScene.createNode("fieldValue");
fieldValue730.name = "bond_set";
fieldValue730.value = "-7.263999999999999 5.075 0 -8.5293 5.9649 0";
ProtoInstance729.fieldValue = new MFNode();

ProtoInstance729.fieldValue[0] = fieldValue730;

Group652.children[38] = ProtoInstance729;

let ProtoInstance731 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance731.name = "line";
ProtoInstance731.DEF = "b31_2";
let fieldValue732 = browser.currentScene.createNode("fieldValue");
fieldValue732.name = "bond_set";
fieldValue732.value = "-7.224 5.075 0 -8.4893 5.9649 0";
ProtoInstance731.fieldValue = new MFNode();

ProtoInstance731.fieldValue[0] = fieldValue732;

Group652.children[39] = ProtoInstance731;

let ProtoInstance733 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance733.name = "line";
ProtoInstance733.DEF = "b32";
let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "bond_set";
fieldValue734.value = "-4.3937 -8.3425 0 -3.0172 -9.0238 0";
ProtoInstance733.fieldValue = new MFNode();

ProtoInstance733.fieldValue[0] = fieldValue734;

Group652.children[40] = ProtoInstance733;

let ProtoInstance735 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance735.name = "line";
ProtoInstance735.DEF = "b33";
let fieldValue736 = browser.currentScene.createNode("fieldValue");
fieldValue736.name = "bond_set";
fieldValue736.value = "-9.3714 -6.8408 0 -10.5393 -7.8558 0";
ProtoInstance735.fieldValue = new MFNode();

ProtoInstance735.fieldValue[0] = fieldValue736;

Group652.children[41] = ProtoInstance735;

let ProtoInstance737 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance737.name = "line";
ProtoInstance737.DEF = "b34";
let fieldValue738 = browser.currentScene.createNode("fieldValue");
fieldValue738.name = "bond_set";
fieldValue738.value = "-11.9019 4.6857 0 -12.2634 6.1734 0";
ProtoInstance737.fieldValue = new MFNode();

ProtoInstance737.fieldValue[0] = fieldValue738;

Group652.children[42] = ProtoInstance737;

let ProtoInstance739 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance739.name = "line";
ProtoInstance739.DEF = "b35";
let fieldValue740 = browser.currentScene.createNode("fieldValue");
fieldValue740.name = "bond_set";
fieldValue740.value = "-9.3357 5.3114 0 -9.697199999999999 6.7991 0";
ProtoInstance739.fieldValue = new MFNode();

ProtoInstance739.fieldValue[0] = fieldValue740;

Group652.children[43] = ProtoInstance739;

let ProtoInstance741 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance741.name = "line";
ProtoInstance741.DEF = "b35_2";
let fieldValue742 = browser.currentScene.createNode("fieldValue");
fieldValue742.name = "bond_set";
fieldValue742.value = "-9.2957 5.3114 0 -9.6572 6.7991 0";
ProtoInstance741.fieldValue = new MFNode();

ProtoInstance741.fieldValue[0] = fieldValue742;

Group652.children[44] = ProtoInstance741;

let ProtoInstance743 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance743.name = "line";
ProtoInstance743.DEF = "b36";
let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "bond_set";
fieldValue744.value = "-6.2568 6.2568 0 -7.3414 7.3275 0";
ProtoInstance743.fieldValue = new MFNode();

ProtoInstance743.fieldValue[0] = fieldValue744;

Group652.children[45] = ProtoInstance743;

let ProtoInstance745 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance745.name = "line";
ProtoInstance745.DEF = "b37";
let fieldValue746 = browser.currentScene.createNode("fieldValue");
fieldValue746.name = "bond_set";
fieldValue746.value = "-6.2568 6.2568 0 -5.075 7.244 0";
ProtoInstance745.fieldValue = new MFNode();

ProtoInstance745.fieldValue[0] = fieldValue746;

Group652.children[46] = ProtoInstance745;

let ProtoInstance747 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance747.name = "line";
ProtoInstance747.DEF = "b38";
let fieldValue748 = browser.currentScene.createNode("fieldValue");
fieldValue748.name = "bond_set";
fieldValue748.value = "-3.0172 -9.0238 0 -1.5294 -9.4548 0";
ProtoInstance747.fieldValue = new MFNode();

ProtoInstance747.fieldValue[0] = fieldValue748;

Group652.children[47] = ProtoInstance747;

let ProtoInstance749 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance749.name = "line";
ProtoInstance749.DEF = "b39";
let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "bond_set";
fieldValue750.value = "-3.0172 -9.0238 0 -3.5594 -10.4559 0";
ProtoInstance749.fieldValue = new MFNode();

ProtoInstance749.fieldValue[0] = fieldValue750;

Group652.children[48] = ProtoInstance749;

let ProtoInstance751 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance751.name = "line";
ProtoInstance751.DEF = "b40";
let fieldValue752 = browser.currentScene.createNode("fieldValue");
fieldValue752.name = "bond_set";
fieldValue752.value = "-10.5393 -7.8558 0 -11.9853 -7.3275 0";
ProtoInstance751.fieldValue = new MFNode();

ProtoInstance751.fieldValue[0] = fieldValue752;

Group652.children[49] = ProtoInstance751;

let ProtoInstance753 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance753.name = "line";
ProtoInstance753.DEF = "b41";
let fieldValue754 = browser.currentScene.createNode("fieldValue");
fieldValue754.name = "bond_set";
fieldValue754.value = "-12.2834 6.1734 0 -11.1711 7.2301 0";
ProtoInstance753.fieldValue = new MFNode();

ProtoInstance753.fieldValue[0] = fieldValue754;

Group652.children[50] = ProtoInstance753;

let ProtoInstance755 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance755.name = "line";
ProtoInstance755.DEF = "b41_2";
let fieldValue756 = browser.currentScene.createNode("fieldValue");
fieldValue756.name = "bond_set";
fieldValue756.value = "-12.243400000000001 6.1734 0 -11.1311 7.2301 0";
ProtoInstance755.fieldValue = new MFNode();

ProtoInstance755.fieldValue[0] = fieldValue756;

Group652.children[51] = ProtoInstance755;

let ProtoInstance757 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance757.name = "line";
ProtoInstance757.DEF = "b42";
let fieldValue758 = browser.currentScene.createNode("fieldValue");
fieldValue758.name = "bond_set";
fieldValue758.value = "-7.3414 7.3275 0 -6.952 8.8291 0";
ProtoInstance757.fieldValue = new MFNode();

ProtoInstance757.fieldValue[0] = fieldValue758;

Group652.children[52] = ProtoInstance757;

let ProtoInstance759 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance759.name = "line";
ProtoInstance759.DEF = "b43";
let fieldValue760 = browser.currentScene.createNode("fieldValue");
fieldValue760.name = "bond_set";
fieldValue760.value = "-5.075 7.244 0 -3.768 8.0505 0";
ProtoInstance759.fieldValue = new MFNode();

ProtoInstance759.fieldValue[0] = fieldValue760;

Group652.children[53] = ProtoInstance759;

let ProtoInstance761 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance761.name = "line";
ProtoInstance761.DEF = "b44";
let fieldValue762 = browser.currentScene.createNode("fieldValue");
fieldValue762.name = "bond_set";
fieldValue762.value = "-1.5294 -9.4548 0 0 -9.6355 0";
ProtoInstance761.fieldValue = new MFNode();

ProtoInstance761.fieldValue[0] = fieldValue762;

Group652.children[54] = ProtoInstance761;

let ProtoInstance763 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance763.name = "line";
ProtoInstance763.DEF = "b45";
let fieldValue764 = browser.currentScene.createNode("fieldValue");
fieldValue764.name = "bond_set";
fieldValue764.value = "-1.5494 -9.4548 0 -1.8553 -10.9564 0";
ProtoInstance763.fieldValue = new MFNode();

ProtoInstance763.fieldValue[0] = fieldValue764;

Group652.children[55] = ProtoInstance763;

let ProtoInstance765 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance765.name = "line";
ProtoInstance765.DEF = "b45_2";
let fieldValue766 = browser.currentScene.createNode("fieldValue");
fieldValue766.name = "bond_set";
fieldValue766.value = "-1.5094 -9.4548 0 -1.8153 -10.9564 0";
ProtoInstance765.fieldValue = new MFNode();

ProtoInstance765.fieldValue[0] = fieldValue766;

Group652.children[56] = ProtoInstance765;

let ProtoInstance767 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance767.name = "line";
ProtoInstance767.DEF = "b46";
let fieldValue768 = browser.currentScene.createNode("fieldValue");
fieldValue768.name = "bond_set";
fieldValue768.value = "-3.5594 -10.4559 0 -5.0889 -10.6922 0";
ProtoInstance767.fieldValue = new MFNode();

ProtoInstance767.fieldValue[0] = fieldValue768;

Group652.children[57] = ProtoInstance767;

let ProtoInstance769 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance769.name = "line";
ProtoInstance769.DEF = "b47";
let fieldValue770 = browser.currentScene.createNode("fieldValue");
fieldValue770.name = "bond_set";
fieldValue770.value = "-3.5594 -10.4559 0 -3.6151 -12.5554 0";
ProtoInstance769.fieldValue = new MFNode();

ProtoInstance769.fieldValue[0] = fieldValue770;

Group652.children[58] = ProtoInstance769;

let ProtoInstance771 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance771.name = "line";
ProtoInstance771.DEF = "b48";
let fieldValue772 = browser.currentScene.createNode("fieldValue");
fieldValue772.name = "bond_set";
fieldValue772.value = "-11.9853 -7.3275 0 -13.1672 -8.3285 0";
ProtoInstance771.fieldValue = new MFNode();

ProtoInstance771.fieldValue[0] = fieldValue772;

Group652.children[59] = ProtoInstance771;

let ProtoInstance773 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance773.name = "line";
ProtoInstance773.DEF = "b49";
let fieldValue774 = browser.currentScene.createNode("fieldValue");
fieldValue774.name = "bond_set";
fieldValue774.value = "-6.9719999999999995 8.8291 0 -8.0705 9.9136 0";
ProtoInstance773.fieldValue = new MFNode();

ProtoInstance773.fieldValue[0] = fieldValue774;

Group652.children[60] = ProtoInstance773;

let ProtoInstance775 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance775.name = "line";
ProtoInstance775.DEF = "b49_2";
let fieldValue776 = browser.currentScene.createNode("fieldValue");
fieldValue776.name = "bond_set";
fieldValue776.value = "-6.932 8.8291 0 -8.0305 9.9136 0";
ProtoInstance775.fieldValue = new MFNode();

ProtoInstance775.fieldValue[0] = fieldValue776;

Group652.children[61] = ProtoInstance775;

let ProtoInstance777 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance777.name = "line";
ProtoInstance777.DEF = "b50";
let fieldValue778 = browser.currentScene.createNode("fieldValue");
fieldValue778.name = "bond_set";
fieldValue778.value = "-6.952 8.8291 0 -5.4643 9.2323 0";
ProtoInstance777.fieldValue = new MFNode();

ProtoInstance777.fieldValue[0] = fieldValue778;

Group652.children[62] = ProtoInstance777;

let ProtoInstance779 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance779.name = "line";
ProtoInstance779.DEF = "b51";
let fieldValue780 = browser.currentScene.createNode("fieldValue");
fieldValue780.name = "bond_set";
fieldValue780.value = "-3.768 8.0505 0 -2.322 8.6205 0";
ProtoInstance779.fieldValue = new MFNode();

ProtoInstance779.fieldValue[0] = fieldValue780;

Group652.children[63] = ProtoInstance779;

let ProtoInstance781 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance781.name = "line";
ProtoInstance781.DEF = "b52";
let fieldValue782 = browser.currentScene.createNode("fieldValue");
fieldValue782.name = "bond_set";
fieldValue782.value = "-3.788 8.0505 0 -4.455399999999999 9.427 0";
ProtoInstance781.fieldValue = new MFNode();

ProtoInstance781.fieldValue[0] = fieldValue782;

Group652.children[64] = ProtoInstance781;

let ProtoInstance783 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance783.name = "line";
ProtoInstance783.DEF = "b52_2";
let fieldValue784 = browser.currentScene.createNode("fieldValue");
fieldValue784.name = "bond_set";
fieldValue784.value = "-3.7479999999999998 8.0505 0 -4.4154 9.427 0";
ProtoInstance783.fieldValue = new MFNode();

ProtoInstance783.fieldValue[0] = fieldValue784;

Group652.children[65] = ProtoInstance783;

let ProtoInstance785 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance785.name = "line";
ProtoInstance785.DEF = "b53";
let fieldValue786 = browser.currentScene.createNode("fieldValue");
fieldValue786.name = "bond_set";
fieldValue786.value = "0 -9.6355 0 1.5294 -9.566 0";
ProtoInstance785.fieldValue = new MFNode();

ProtoInstance785.fieldValue[0] = fieldValue786;

Group652.children[66] = ProtoInstance785;

let ProtoInstance787 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance787.name = "line";
ProtoInstance787.DEF = "b54";
let fieldValue788 = browser.currentScene.createNode("fieldValue");
fieldValue788.name = "bond_set";
fieldValue788.value = "-8.0505 9.9136 0 -7.6611 11.4013 0";
ProtoInstance787.fieldValue = new MFNode();

ProtoInstance787.fieldValue[0] = fieldValue788;

Group652.children[67] = ProtoInstance787;

let ProtoInstance789 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance789.name = "line";
ProtoInstance789.DEF = "b55";
let fieldValue790 = browser.currentScene.createNode("fieldValue");
fieldValue790.name = "bond_set";
fieldValue790.value = "-5.484299999999999 9.2323 0 -5.095 10.72 0";
ProtoInstance789.fieldValue = new MFNode();

ProtoInstance789.fieldValue[0] = fieldValue790;

Group652.children[68] = ProtoInstance789;

let ProtoInstance791 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance791.name = "line";
ProtoInstance791.DEF = "b55_2";
let fieldValue792 = browser.currentScene.createNode("fieldValue");
fieldValue792.name = "bond_set";
fieldValue792.value = "-5.4443 9.2323 0 -5.055000000000001 10.72 0";
ProtoInstance791.fieldValue = new MFNode();

ProtoInstance791.fieldValue[0] = fieldValue792;

Group652.children[69] = ProtoInstance791;

let ProtoInstance793 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance793.name = "line";
ProtoInstance793.DEF = "b56";
let fieldValue794 = browser.currentScene.createNode("fieldValue");
fieldValue794.name = "bond_set";
fieldValue794.value = "-2.322 8.6205 0 -0.8203 8.9403 0";
ProtoInstance793.fieldValue = new MFNode();

ProtoInstance793.fieldValue[0] = fieldValue794;

Group652.children[70] = ProtoInstance793;

let ProtoInstance795 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance795.name = "line";
ProtoInstance795.DEF = "b57";
let fieldValue796 = browser.currentScene.createNode("fieldValue");
fieldValue796.name = "bond_set";
fieldValue796.value = "-2.322 8.6205 0 -2.7808 10.0805 0";
ProtoInstance795.fieldValue = new MFNode();

ProtoInstance795.fieldValue[0] = fieldValue796;

Group652.children[71] = ProtoInstance795;

let ProtoInstance797 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance797.name = "line";
ProtoInstance797.DEF = "b58";
let fieldValue798 = browser.currentScene.createNode("fieldValue");
fieldValue798.name = "bond_set";
fieldValue798.value = "1.5294 -9.566 0 1.7241 -11.0955 0";
ProtoInstance797.fieldValue = new MFNode();

ProtoInstance797.fieldValue[0] = fieldValue798;

Group652.children[72] = ProtoInstance797;

let ProtoInstance799 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance799.name = "line";
ProtoInstance799.DEF = "b59";
let fieldValue800 = browser.currentScene.createNode("fieldValue");
fieldValue800.name = "bond_set";
fieldValue800.value = "1.5294 -9.566 0 3.045 -9.2462 0";
ProtoInstance799.fieldValue = new MFNode();

ProtoInstance799.fieldValue[0] = fieldValue800;

Group652.children[73] = ProtoInstance799;

let ProtoInstance801 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance801.name = "line";
ProtoInstance801.DEF = "b60";
let fieldValue802 = browser.currentScene.createNode("fieldValue");
fieldValue802.name = "bond_set";
fieldValue802.value = "-7.6811 11.4013 0 -6.1795 11.8046 0";
ProtoInstance801.fieldValue = new MFNode();

ProtoInstance801.fieldValue[0] = fieldValue802;

Group652.children[74] = ProtoInstance801;

let ProtoInstance803 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance803.name = "line";
ProtoInstance803.DEF = "b60_2";
let fieldValue804 = browser.currentScene.createNode("fieldValue");
fieldValue804.name = "bond_set";
fieldValue804.value = "-7.641100000000001 11.4013 0 -6.139500000000001 11.8046 0";
ProtoInstance803.fieldValue = new MFNode();

ProtoInstance803.fieldValue[0] = fieldValue804;

Group652.children[75] = ProtoInstance803;

let ProtoInstance805 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance805.name = "line";
ProtoInstance805.DEF = "b61";
let fieldValue806 = browser.currentScene.createNode("fieldValue");
fieldValue806.name = "bond_set";
fieldValue806.value = "-0.8203 8.9403 0 0.7091 8.9959 0";
ProtoInstance805.fieldValue = new MFNode();

ProtoInstance805.fieldValue[0] = fieldValue806;

Group652.children[76] = ProtoInstance805;

let ProtoInstance807 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance807.name = "line";
ProtoInstance807.DEF = "b62";
let fieldValue808 = browser.currentScene.createNode("fieldValue");
fieldValue808.name = "bond_set";
fieldValue808.value = "-2.7808 10.0805 0 -1.7102 11.2067 0";
ProtoInstance807.fieldValue = new MFNode();

ProtoInstance807.fieldValue[0] = fieldValue808;

Group652.children[77] = ProtoInstance807;

let ProtoInstance809 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance809.name = "line";
ProtoInstance809.DEF = "b63";
let fieldValue810 = browser.currentScene.createNode("fieldValue");
fieldValue810.name = "bond_set";
fieldValue810.value = "1.7241 -11.0955 0 0.5005 -12.027 0";
ProtoInstance809.fieldValue = new MFNode();

ProtoInstance809.fieldValue[0] = fieldValue810;

Group652.children[78] = ProtoInstance809;

let ProtoInstance811 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance811.name = "line";
ProtoInstance811.DEF = "b64";
let fieldValue812 = browser.currentScene.createNode("fieldValue");
fieldValue812.name = "bond_set";
fieldValue812.value = "3.045 -9.2462 0 4.4771 -8.6901 0";
ProtoInstance811.fieldValue = new MFNode();

ProtoInstance811.fieldValue[0] = fieldValue812;

Group652.children[79] = ProtoInstance811;

let ProtoInstance813 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance813.name = "line";
ProtoInstance813.DEF = "b65";
let fieldValue814 = browser.currentScene.createNode("fieldValue");
fieldValue814.name = "bond_set";
fieldValue814.value = "3.025 -9.2462 0 3.4699 -10.72 0";
ProtoInstance813.fieldValue = new MFNode();

ProtoInstance813.fieldValue[0] = fieldValue814;

Group652.children[80] = ProtoInstance813;

let ProtoInstance815 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance815.name = "line";
ProtoInstance815.DEF = "b65_2";
let fieldValue816 = browser.currentScene.createNode("fieldValue");
fieldValue816.name = "bond_set";
fieldValue816.value = "3.065 -9.2462 0 3.5099 -10.72 0";
ProtoInstance815.fieldValue = new MFNode();

ProtoInstance815.fieldValue[0] = fieldValue816;

Group652.children[81] = ProtoInstance815;

let ProtoInstance817 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance817.name = "line";
ProtoInstance817.DEF = "b66";
let fieldValue818 = browser.currentScene.createNode("fieldValue");
fieldValue818.name = "bond_set";
fieldValue818.value = "0.7091 8.9959 0 2.2386 8.8152 0";
ProtoInstance817.fieldValue = new MFNode();

ProtoInstance817.fieldValue[0] = fieldValue818;

Group652.children[82] = ProtoInstance817;

let ProtoInstance819 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance819.name = "line";
ProtoInstance819.DEF = "b67";
let fieldValue820 = browser.currentScene.createNode("fieldValue");
fieldValue820.name = "bond_set";
fieldValue820.value = "0.6890999999999999 8.9959 0 0.7447 10.5393 0";
ProtoInstance819.fieldValue = new MFNode();

ProtoInstance819.fieldValue[0] = fieldValue820;

Group652.children[83] = ProtoInstance819;

let ProtoInstance821 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance821.name = "line";
ProtoInstance821.DEF = "b67_2";
let fieldValue822 = browser.currentScene.createNode("fieldValue");
fieldValue822.name = "bond_set";
fieldValue822.value = "0.7291 8.9959 0 0.7847000000000001 10.5393 0";
ProtoInstance821.fieldValue = new MFNode();

ProtoInstance821.fieldValue[0] = fieldValue822;

Group652.children[84] = ProtoInstance821;

let ProtoInstance823 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance823.name = "line";
ProtoInstance823.DEF = "b68";
let fieldValue824 = browser.currentScene.createNode("fieldValue");
fieldValue824.name = "bond_set";
fieldValue824.value = "-1.7102 11.2067 0 -2.1551 12.6944 0";
ProtoInstance823.fieldValue = new MFNode();

ProtoInstance823.fieldValue[0] = fieldValue824;

Group652.children[85] = ProtoInstance823;

let ProtoInstance825 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance825.name = "line";
ProtoInstance825.DEF = "b69";
let fieldValue826 = browser.currentScene.createNode("fieldValue");
fieldValue826.name = "bond_set";
fieldValue826.value = "-1.7302 11.2067 0 0.007799999999999998 12.027 0";
ProtoInstance825.fieldValue = new MFNode();

ProtoInstance825.fieldValue[0] = fieldValue826;

Group652.children[86] = ProtoInstance825;

let ProtoInstance827 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance827.name = "line";
ProtoInstance827.DEF = "b69_2";
let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "bond_set";
fieldValue828.value = "-1.6902 11.2067 0 0.047799999999999995 12.027 0";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

Group652.children[87] = ProtoInstance827;

let ProtoInstance829 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance829.name = "line";
ProtoInstance829.DEF = "b70";
let fieldValue830 = browser.currentScene.createNode("fieldValue");
fieldValue830.name = "bond_set";
fieldValue830.value = "0.4804999999999999 -12.027 0 0.6752 -13.5704 0";
ProtoInstance829.fieldValue = new MFNode();

ProtoInstance829.fieldValue[0] = fieldValue830;

Group652.children[88] = ProtoInstance829;

let ProtoInstance831 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance831.name = "line";
ProtoInstance831.DEF = "b70_2";
let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "bond_set";
fieldValue832.value = "0.5205 -12.027 0 0.7152000000000001 -13.5704 0";
ProtoInstance831.fieldValue = new MFNode();

ProtoInstance831.fieldValue[0] = fieldValue832;

Group652.children[89] = ProtoInstance831;

let ProtoInstance833 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance833.name = "line";
ProtoInstance833.DEF = "b71";
let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "bond_set";
fieldValue834.value = "0.5005 -12.027 0 -0.9038 -11.4292 0";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

Group652.children[90] = ProtoInstance833;

let ProtoInstance835 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance835.name = "line";
ProtoInstance835.DEF = "b72";
let fieldValue836 = browser.currentScene.createNode("fieldValue");
fieldValue836.name = "bond_set";
fieldValue836.value = "4.4771 -8.6901 0 5.7841 -7.8975 0";
ProtoInstance835.fieldValue = new MFNode();

ProtoInstance835.fieldValue[0] = fieldValue836;

Group652.children[91] = ProtoInstance835;

let ProtoInstance837 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance837.name = "line";
ProtoInstance837.DEF = "b73";
let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "bond_set";
fieldValue838.value = "2.2386 8.8152 0 3.7263 8.3842 0";
ProtoInstance837.fieldValue = new MFNode();

ProtoInstance837.fieldValue[0] = fieldValue838;

Group652.children[92] = ProtoInstance837;

let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "line";
ProtoInstance839.DEF = "b74";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "bond_set";
fieldValue840.value = "2.2386 8.8152 0 2.5584 10.3168 0";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

Group652.children[93] = ProtoInstance839;

let ProtoInstance841 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance841.name = "line";
ProtoInstance841.DEF = "b75";
let fieldValue842 = browser.currentScene.createNode("fieldValue");
fieldValue842.name = "bond_set";
fieldValue842.value = "0.6952 -13.5704 0 -0.5145 -14.4881 0";
ProtoInstance841.fieldValue = new MFNode();

ProtoInstance841.fieldValue[0] = fieldValue842;

Group652.children[94] = ProtoInstance841;

let ProtoInstance843 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance843.name = "line";
ProtoInstance843.DEF = "b76";
let fieldValue844 = browser.currentScene.createNode("fieldValue");
fieldValue844.name = "bond_set";
fieldValue844.value = "-0.9238000000000001 -11.4292 0 -2.1473 -12.3746 0";
ProtoInstance843.fieldValue = new MFNode();

ProtoInstance843.fieldValue[0] = fieldValue844;

Group652.children[95] = ProtoInstance843;

let ProtoInstance845 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance845.name = "line";
ProtoInstance845.DEF = "b76_2";
let fieldValue846 = browser.currentScene.createNode("fieldValue");
fieldValue846.name = "bond_set";
fieldValue846.value = "-0.8838 -11.4292 0 -2.1073 -12.3746 0";
ProtoInstance845.fieldValue = new MFNode();

ProtoInstance845.fieldValue[0] = fieldValue846;

Group652.children[96] = ProtoInstance845;

let ProtoInstance847 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance847.name = "line";
ProtoInstance847.DEF = "b77";
let fieldValue848 = browser.currentScene.createNode("fieldValue");
fieldValue848.name = "bond_set";
fieldValue848.value = "5.7841 -7.8975 0 6.9659 -6.8825 0";
ProtoInstance847.fieldValue = new MFNode();

ProtoInstance847.fieldValue[0] = fieldValue848;

Group652.children[97] = ProtoInstance847;

let ProtoInstance849 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance849.name = "line";
ProtoInstance849.DEF = "b78";
let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "bond_set";
fieldValue850.value = "5.7841 -7.8975 0 6.6879 -9.1489 0";
ProtoInstance849.fieldValue = new MFNode();

ProtoInstance849.fieldValue[0] = fieldValue850;

Group652.children[98] = ProtoInstance849;

let ProtoInstance851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance851.name = "line";
ProtoInstance851.DEF = "b79";
let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "bond_set";
fieldValue852.value = "3.7263 8.3842 0 5.1028 7.7029 0";
ProtoInstance851.fieldValue = new MFNode();

ProtoInstance851.fieldValue[0] = fieldValue852;

Group652.children[99] = ProtoInstance851;

let ProtoInstance853 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance853.name = "line";
ProtoInstance853.DEF = "b80";
let fieldValue854 = browser.currentScene.createNode("fieldValue");
fieldValue854.name = "bond_set";
fieldValue854.value = "2.5584 10.3168 0 4.0183 10.8035 0";
ProtoInstance853.fieldValue = new MFNode();

ProtoInstance853.fieldValue[0] = fieldValue854;

Group652.children[100] = ProtoInstance853;

let ProtoInstance855 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance855.name = "line";
ProtoInstance855.DEF = "b81";
let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "bond_set";
fieldValue856.value = "-0.5345 -14.4881 0 -1.9527 -13.9041 0";
ProtoInstance855.fieldValue = new MFNode();

ProtoInstance855.fieldValue[0] = fieldValue856;

Group652.children[101] = ProtoInstance855;

let ProtoInstance857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance857.name = "line";
ProtoInstance857.DEF = "b81_2";
let fieldValue858 = browser.currentScene.createNode("fieldValue");
fieldValue858.name = "bond_set";
fieldValue858.value = "-0.49449999999999994 -14.4881 0 -1.9127 -13.9041 0";
ProtoInstance857.fieldValue = new MFNode();

ProtoInstance857.fieldValue[0] = fieldValue858;

Group652.children[102] = ProtoInstance857;

let ProtoInstance859 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance859.name = "line";
ProtoInstance859.DEF = "b82";
let fieldValue860 = browser.currentScene.createNode("fieldValue");
fieldValue860.name = "bond_set";
fieldValue860.value = "6.9659 -6.8825 0 7.967 -5.7146 0";
ProtoInstance859.fieldValue = new MFNode();

ProtoInstance859.fieldValue[0] = fieldValue860;

Group652.children[103] = ProtoInstance859;

let ProtoInstance861 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance861.name = "line";
ProtoInstance861.DEF = "b83";
let fieldValue862 = browser.currentScene.createNode("fieldValue");
fieldValue862.name = "bond_set";
fieldValue862.value = "6.945900000000001 -6.8825 0 8.0444 -7.9809 0";
ProtoInstance861.fieldValue = new MFNode();

ProtoInstance861.fieldValue[0] = fieldValue862;

Group652.children[104] = ProtoInstance861;

let ProtoInstance863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance863.name = "line";
ProtoInstance863.DEF = "b83_2";
let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "bond_set";
fieldValue864.value = "6.9859 -6.8825 0 8.084399999999999 -7.9809 0";
ProtoInstance863.fieldValue = new MFNode();

ProtoInstance863.fieldValue[0] = fieldValue864;

Group652.children[105] = ProtoInstance863;

let ProtoInstance865 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance865.name = "line";
ProtoInstance865.DEF = "b84";
let fieldValue866 = browser.currentScene.createNode("fieldValue");
fieldValue866.name = "bond_set";
fieldValue866.value = "6.6879 -9.1489 0 6.0483 -10.5532 0";
ProtoInstance865.fieldValue = new MFNode();

ProtoInstance865.fieldValue[0] = fieldValue866;

Group652.children[106] = ProtoInstance865;

let ProtoInstance867 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance867.name = "line";
ProtoInstance867.DEF = "b85";
let fieldValue868 = browser.currentScene.createNode("fieldValue");
fieldValue868.name = "bond_set";
fieldValue868.value = "6.6879 -9.1489 0 8.6066 -10.2473 0";
ProtoInstance867.fieldValue = new MFNode();

ProtoInstance867.fieldValue[0] = fieldValue868;

Group652.children[107] = ProtoInstance867;

let ProtoInstance869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance869.name = "line";
ProtoInstance869.DEF = "b86";
let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "bond_set";
fieldValue870.value = "5.1028 7.7029 0 6.3542 6.7991 0";
ProtoInstance869.fieldValue = new MFNode();

ProtoInstance869.fieldValue[0] = fieldValue870;

Group652.children[108] = ProtoInstance869;

let ProtoInstance871 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance871.name = "line";
ProtoInstance871.DEF = "b87";
let fieldValue872 = browser.currentScene.createNode("fieldValue");
fieldValue872.name = "bond_set";
fieldValue872.value = "5.082800000000001 7.7029 0 5.861400000000001 9.0377 0";
ProtoInstance871.fieldValue = new MFNode();

ProtoInstance871.fieldValue[0] = fieldValue872;

Group652.children[109] = ProtoInstance871;

let ProtoInstance873 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance873.name = "line";
ProtoInstance873.DEF = "b87_2";
let fieldValue874 = browser.currentScene.createNode("fieldValue");
fieldValue874.name = "bond_set";
fieldValue874.value = "5.1228 7.7029 0 5.9014 9.0377 0";
ProtoInstance873.fieldValue = new MFNode();

ProtoInstance873.fieldValue[0] = fieldValue874;

Group652.children[110] = ProtoInstance873;

let ProtoInstance875 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance875.name = "line";
ProtoInstance875.DEF = "b88";
let fieldValue876 = browser.currentScene.createNode("fieldValue");
fieldValue876.name = "bond_set";
fieldValue876.value = "4.0183 10.8035 0 4.3242 12.3051 0";
ProtoInstance875.fieldValue = new MFNode();

ProtoInstance875.fieldValue[0] = fieldValue876;

Group652.children[111] = ProtoInstance875;

let ProtoInstance877 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance877.name = "line";
ProtoInstance877.DEF = "b89";
let fieldValue878 = browser.currentScene.createNode("fieldValue");
fieldValue878.name = "bond_set";
fieldValue878.value = "7.967 -5.7146 0 8.7457 -4.3937 0";
ProtoInstance877.fieldValue = new MFNode();

ProtoInstance877.fieldValue[0] = fieldValue878;

Group652.children[112] = ProtoInstance877;

let ProtoInstance879 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance879.name = "line";
ProtoInstance879.DEF = "b90";
let fieldValue880 = browser.currentScene.createNode("fieldValue");
fieldValue880.name = "bond_set";
fieldValue880.value = "6.3542 6.7991 0 7.4665 5.7285 0";
ProtoInstance879.fieldValue = new MFNode();

ProtoInstance879.fieldValue[0] = fieldValue880;

Group652.children[113] = ProtoInstance879;

let ProtoInstance881 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance881.name = "line";
ProtoInstance881.DEF = "b91";
let fieldValue882 = browser.currentScene.createNode("fieldValue");
fieldValue882.name = "bond_set";
fieldValue882.value = "6.3542 6.7991 0 7.3414 7.9948 0";
ProtoInstance881.fieldValue = new MFNode();

ProtoInstance881.fieldValue[0] = fieldValue882;

Group652.children[114] = ProtoInstance881;

let ProtoInstance883 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance883.name = "line";
ProtoInstance883.DEF = "b92";
let fieldValue884 = browser.currentScene.createNode("fieldValue");
fieldValue884.name = "bond_set";
fieldValue884.value = "4.3242 12.3051 0 5.7841 12.8057 0";
ProtoInstance883.fieldValue = new MFNode();

ProtoInstance883.fieldValue[0] = fieldValue884;

Group652.children[115] = ProtoInstance883;

let ProtoInstance885 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance885.name = "line";
ProtoInstance885.DEF = "b93";
let fieldValue886 = browser.currentScene.createNode("fieldValue");
fieldValue886.name = "bond_set";
fieldValue886.value = "8.7457 -4.3937 0 9.3018 -2.9616 0";
ProtoInstance885.fieldValue = new MFNode();

ProtoInstance885.fieldValue[0] = fieldValue886;

Group652.children[116] = ProtoInstance885;

let ProtoInstance887 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance887.name = "line";
ProtoInstance887.DEF = "b94";
let fieldValue888 = browser.currentScene.createNode("fieldValue");
fieldValue888.name = "bond_set";
fieldValue888.value = "8.7457 -4.3937 0 10.1361 -5.0611 0";
ProtoInstance887.fieldValue = new MFNode();

ProtoInstance887.fieldValue[0] = fieldValue888;

Group652.children[117] = ProtoInstance887;

let ProtoInstance889 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance889.name = "line";
ProtoInstance889.DEF = "b95";
let fieldValue890 = browser.currentScene.createNode("fieldValue");
fieldValue890.name = "bond_set";
fieldValue890.value = "7.4665 5.7285 0 8.3564 4.4771 0";
ProtoInstance889.fieldValue = new MFNode();

ProtoInstance889.fieldValue[0] = fieldValue890;

Group652.children[118] = ProtoInstance889;

let ProtoInstance891 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance891.name = "line";
ProtoInstance891.DEF = "b96";
let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "bond_set";
fieldValue892.value = "7.3414 7.9948 0 8.8708 7.7307 0";
ProtoInstance891.fieldValue = new MFNode();

ProtoInstance891.fieldValue[0] = fieldValue892;

Group652.children[119] = ProtoInstance891;

let ProtoInstance893 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance893.name = "line";
ProtoInstance893.DEF = "b97";
let fieldValue894 = browser.currentScene.createNode("fieldValue");
fieldValue894.name = "bond_set";
fieldValue894.value = "5.7841 12.8057 0 6.1039 14.3073 0";
ProtoInstance893.fieldValue = new MFNode();

ProtoInstance893.fieldValue[0] = fieldValue894;

Group652.children[120] = ProtoInstance893;

let ProtoInstance895 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance895.name = "line";
ProtoInstance895.DEF = "b98";
let fieldValue896 = browser.currentScene.createNode("fieldValue");
fieldValue896.name = "bond_set";
fieldValue896.value = "9.3018 -2.9616 0 9.6077 -1.4321 0";
ProtoInstance895.fieldValue = new MFNode();

ProtoInstance895.fieldValue[0] = fieldValue896;

Group652.children[121] = ProtoInstance895;

let ProtoInstance897 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance897.name = "line";
ProtoInstance897.DEF = "b99";
let fieldValue898 = browser.currentScene.createNode("fieldValue");
fieldValue898.name = "bond_set";
fieldValue898.value = "9.2818 -2.9616 0 10.755700000000001 -3.3926 0";
ProtoInstance897.fieldValue = new MFNode();

ProtoInstance897.fieldValue[0] = fieldValue898;

Group652.children[122] = ProtoInstance897;

let ProtoInstance899 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance899.name = "line";
ProtoInstance899.DEF = "b99_2";
let fieldValue900 = browser.currentScene.createNode("fieldValue");
fieldValue900.name = "bond_set";
fieldValue900.value = "9.3218 -2.9616 0 10.7957 -3.3926 0";
ProtoInstance899.fieldValue = new MFNode();

ProtoInstance899.fieldValue[0] = fieldValue900;

Group652.children[123] = ProtoInstance899;

let ProtoInstance901 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance901.name = "line";
ProtoInstance901.DEF = "b100";
let fieldValue902 = browser.currentScene.createNode("fieldValue");
fieldValue902.name = "bond_set";
fieldValue902.value = "10.1361 -5.0611 0 10.2334 -6.5905 0";
ProtoInstance901.fieldValue = new MFNode();

ProtoInstance901.fieldValue[0] = fieldValue902;

Group652.children[124] = ProtoInstance901;

let ProtoInstance903 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance903.name = "line";
ProtoInstance903.DEF = "b101";
let fieldValue904 = browser.currentScene.createNode("fieldValue");
fieldValue904.name = "bond_set";
fieldValue904.value = "8.3564 4.4771 0 9.0377 3.1006 0";
ProtoInstance903.fieldValue = new MFNode();

ProtoInstance903.fieldValue[0] = fieldValue904;

Group652.children[125] = ProtoInstance903;

let ProtoInstance905 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance905.name = "line";
ProtoInstance905.DEF = "b102";
let fieldValue906 = browser.currentScene.createNode("fieldValue");
fieldValue906.name = "bond_set";
fieldValue906.value = "8.8708 7.7307 0 9.858 8.8986 0";
ProtoInstance905.fieldValue = new MFNode();

ProtoInstance905.fieldValue[0] = fieldValue906;

Group652.children[126] = ProtoInstance905;

let ProtoInstance907 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance907.name = "line";
ProtoInstance907.DEF = "b103";
let fieldValue908 = browser.currentScene.createNode("fieldValue");
fieldValue908.name = "bond_set";
fieldValue908.value = "8.8508 7.7307 0 9.3792 6.2707 0";
ProtoInstance907.fieldValue = new MFNode();

ProtoInstance907.fieldValue[0] = fieldValue908;

Group652.children[127] = ProtoInstance907;

let ProtoInstance909 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance909.name = "line";
ProtoInstance909.DEF = "b103_2";
let fieldValue910 = browser.currentScene.createNode("fieldValue");
fieldValue910.name = "bond_set";
fieldValue910.value = "8.890799999999999 7.7307 0 9.4192 6.2707 0";
ProtoInstance909.fieldValue = new MFNode();

ProtoInstance909.fieldValue[0] = fieldValue910;

Group652.children[128] = ProtoInstance909;

let ProtoInstance911 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance911.name = "line";
ProtoInstance911.DEF = "b104";
let fieldValue912 = browser.currentScene.createNode("fieldValue");
fieldValue912.name = "bond_set";
fieldValue912.value = "9.6077 -1.4321 0 9.6772 0.0834 0";
ProtoInstance911.fieldValue = new MFNode();

ProtoInstance911.fieldValue[0] = fieldValue912;

Group652.children[129] = ProtoInstance911;

let ProtoInstance913 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance913.name = "line";
ProtoInstance913.DEF = "b105";
let fieldValue914 = browser.currentScene.createNode("fieldValue");
fieldValue914.name = "bond_set";
fieldValue914.value = "9.0377 3.1006 0 9.4826 1.6129 0";
ProtoInstance913.fieldValue = new MFNode();

ProtoInstance913.fieldValue[0] = fieldValue914;

Group652.children[130] = ProtoInstance913;

let ProtoInstance915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance915.name = "line";
ProtoInstance915.DEF = "b106";
let fieldValue916 = browser.currentScene.createNode("fieldValue");
fieldValue916.name = "bond_set";
fieldValue916.value = "9.858 8.8986 0 11.3735 8.6344 0";
ProtoInstance915.fieldValue = new MFNode();

ProtoInstance915.fieldValue[0] = fieldValue916;

Group652.children[131] = ProtoInstance915;

let ProtoInstance917 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance917.name = "line";
ProtoInstance917.DEF = "b107";
let fieldValue918 = browser.currentScene.createNode("fieldValue");
fieldValue918.name = "bond_set";
fieldValue918.value = "9.6772 0.0834 0 11.2067 0.1529 0";
ProtoInstance917.fieldValue = new MFNode();

ProtoInstance917.fieldValue[0] = fieldValue918;

Group652.children[132] = ProtoInstance917;

let ProtoInstance919 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance919.name = "line";
ProtoInstance919.DEF = "b108";
let fieldValue920 = browser.currentScene.createNode("fieldValue");
fieldValue920.name = "bond_set";
fieldValue920.value = "11.3735 8.6344 0 12.3746 9.8024 0";
ProtoInstance919.fieldValue = new MFNode();

ProtoInstance919.fieldValue[0] = fieldValue920;

Group652.children[133] = ProtoInstance919;

let ProtoInstance921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance921.name = "line";
ProtoInstance921.DEF = "b109";
let fieldValue922 = browser.currentScene.createNode("fieldValue");
fieldValue922.name = "bond_set";
fieldValue922.value = "11.2067 0.1529 0 11.9158 1.5155 0";
ProtoInstance921.fieldValue = new MFNode();

ProtoInstance921.fieldValue[0] = fieldValue922;

Group652.children[134] = ProtoInstance921;

let ProtoInstance923 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance923.name = "line";
ProtoInstance923.DEF = "b110";
let fieldValue924 = browser.currentScene.createNode("fieldValue");
fieldValue924.name = "bond_set";
fieldValue924.value = "11.1867 0.1529 0 12.020900000000001 -1.1262 0";
ProtoInstance923.fieldValue = new MFNode();

ProtoInstance923.fieldValue[0] = fieldValue924;

Group652.children[135] = ProtoInstance923;

let ProtoInstance925 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance925.name = "line";
ProtoInstance925.DEF = "b110_2";
let fieldValue926 = browser.currentScene.createNode("fieldValue");
fieldValue926.name = "bond_set";
fieldValue926.value = "11.2267 0.1529 0 12.0609 -1.1262 0";
ProtoInstance925.fieldValue = new MFNode();

ProtoInstance925.fieldValue[0] = fieldValue926;

Group652.children[136] = ProtoInstance925;

let ProtoInstance927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance927.name = "line";
ProtoInstance927.DEF = "b111";
let fieldValue928 = browser.currentScene.createNode("fieldValue");
fieldValue928.name = "bond_set";
fieldValue928.value = "12.3746 9.8024 0 13.8902 9.5382 0";
ProtoInstance927.fieldValue = new MFNode();

ProtoInstance927.fieldValue[0] = fieldValue928;

Group652.children[137] = ProtoInstance927;

let ProtoInstance929 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance929.name = "line";
ProtoInstance929.DEF = "b112";
let fieldValue930 = browser.currentScene.createNode("fieldValue");
fieldValue930.name = "bond_set";
fieldValue930.value = "12.3546 9.8024 0 11.8263 11.2484 0";
ProtoInstance929.fieldValue = new MFNode();

ProtoInstance929.fieldValue[0] = fieldValue930;

Group652.children[138] = ProtoInstance929;

let ProtoInstance931 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance931.name = "line";
ProtoInstance931.DEF = "b112_2";
let fieldValue932 = browser.currentScene.createNode("fieldValue");
fieldValue932.name = "bond_set";
fieldValue932.value = "12.394599999999999 9.8024 0 11.866299999999999 11.2484 0";
ProtoInstance931.fieldValue = new MFNode();

ProtoInstance931.fieldValue[0] = fieldValue932;

Group652.children[139] = ProtoInstance931;

let ProtoInstance933 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance933.name = "line";
ProtoInstance933.DEF = "b113";
let fieldValue934 = browser.currentScene.createNode("fieldValue");
fieldValue934.name = "bond_set";
fieldValue934.value = "13.8902 9.5382 0 14.8774 10.7061 0";
ProtoInstance933.fieldValue = new MFNode();

ProtoInstance933.fieldValue[0] = fieldValue934;

Group652.children[140] = ProtoInstance933;

let ProtoInstance935 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance935.name = "line";
ProtoInstance935.DEF = "b114";
let fieldValue936 = browser.currentScene.createNode("fieldValue");
fieldValue936.name = "bond_set";
fieldValue936.value = "13.8902 9.5382 0 14.4185 8.0922 0";
ProtoInstance935.fieldValue = new MFNode();

ProtoInstance935.fieldValue[0] = fieldValue936;

Group652.children[141] = ProtoInstance935;

let ProtoInstance937 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance937.name = "line";
ProtoInstance937.DEF = "b115";
let fieldValue938 = browser.currentScene.createNode("fieldValue");
fieldValue938.name = "bond_set";
fieldValue938.value = "-9.8441 -5.2836 0 -10.7479 -6.5349 0";
ProtoInstance937.fieldValue = new MFNode();

ProtoInstance937.fieldValue[0] = fieldValue938;

Group652.children[142] = ProtoInstance937;

let ProtoInstance939 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance939.name = "line";
ProtoInstance939.DEF = "b116";
let fieldValue940 = browser.currentScene.createNode("fieldValue");
fieldValue940.name = "bond_set";
fieldValue940.value = "-14.8774 -4.5188 0 -14.8774 -6.0483 0";
ProtoInstance939.fieldValue = new MFNode();

ProtoInstance939.fieldValue[0] = fieldValue940;

Group652.children[143] = ProtoInstance939;

let ProtoInstance941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance941.name = "line";
ProtoInstance941.DEF = "b117";
let fieldValue942 = browser.currentScene.createNode("fieldValue");
fieldValue942.name = "bond_set";
fieldValue942.value = "-9.6772 6.7991 0 -11.1511 7.2301 0";
ProtoInstance941.fieldValue = new MFNode();

ProtoInstance941.fieldValue[0] = fieldValue942;

Group652.children[144] = ProtoInstance941;

let ProtoInstance943 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance943.name = "line";
ProtoInstance943.DEF = "b118";
let fieldValue944 = browser.currentScene.createNode("fieldValue");
fieldValue944.name = "bond_set";
fieldValue944.value = "-5.075 10.72 0 -6.1595 11.8046 0";
ProtoInstance943.fieldValue = new MFNode();

ProtoInstance943.fieldValue[0] = fieldValue944;

Group652.children[145] = ProtoInstance943;

let ProtoInstance945 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance945.name = "line";
ProtoInstance945.DEF = "b119";
let fieldValue946 = browser.currentScene.createNode("fieldValue");
fieldValue946.name = "bond_set";
fieldValue946.value = "-2.1273 -12.3746 0 -1.9327 -13.9041 0";
ProtoInstance945.fieldValue = new MFNode();

ProtoInstance945.fieldValue[0] = fieldValue946;

Group652.children[146] = ProtoInstance945;

let ProtoInstance947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance947.name = "line";
ProtoInstance947.DEF = "b120";
let fieldValue948 = browser.currentScene.createNode("fieldValue");
fieldValue948.name = "bond_set";
fieldValue948.value = "9.6772 0.0834 0 9.4826 1.6129 0";
ProtoInstance947.fieldValue = new MFNode();

ProtoInstance947.fieldValue[0] = fieldValue948;

Group652.children[147] = ProtoInstance947;

browser.currentScene.children[23] = Group652;

