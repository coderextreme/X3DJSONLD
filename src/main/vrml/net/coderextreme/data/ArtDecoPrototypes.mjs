let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ArtDecoPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "David Roussel";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "James Harney, Don Brutzman NPS";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "7 April 2002";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "20 October 2019";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "http://vrmlstuff.free.fr/materials";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "subject";
meta9.content = "Universal Media Material Library";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "identifier";
meta10.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "generator";
meta11.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[9] = meta11;

head = head1;

let ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco00" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" specularColor="0.276305 0.11431 0.139857" shininess="0.127273"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "ArtDeco00";
let ProtoInterface14 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare13.protoInterface = ProtoInterface14;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Material16 = browser.currentScene.createNode("Material");
Material16.ambientIntensity = 0.25;
Material16.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material16.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
Material16.shininess = 0.127273;
ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Material16;

ProtoDeclare13.protoBody = ProtoBody15;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare13;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.254777" diffuseColor="0.685208 0.134679 0.332385" specularColor="0.122449 0.050035 0.050035" shininess="0.071429"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "ArtDeco01";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
let Material20 = browser.currentScene.createNode("Material");
Material20.ambientIntensity = 0.254777;
Material20.diffuseColor = new SFColor(new float[0.685208,0.134679,0.332385]);
Material20.specularColor = new SFColor(new float[0.122449,0.050035,0.050035]);
Material20.shininess = 0.071429;
ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Material20;

ProtoDeclare17.protoBody = ProtoBody19;

browser.currentScene.children[1] = ProtoDeclare17;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco02" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="1" diffuseColor="0.536861 0.0529 0.245479" specularColor="0.805292 0.765198 0.747416" shininess="0.832432"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "ArtDeco02";
let ProtoInterface22 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare21.protoInterface = ProtoInterface22;

let ProtoBody23 = browser.currentScene.createNode("ProtoBody");
let Material24 = browser.currentScene.createNode("Material");
Material24.ambientIntensity = 1;
Material24.diffuseColor = new SFColor(new float[0.536861,0.0529,0.245479]);
Material24.specularColor = new SFColor(new float[0.805292,0.765198,0.747416]);
Material24.shininess = 0.832432;
ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Material24;

ProtoDeclare21.protoBody = ProtoBody23;

browser.currentScene.children[2] = ProtoDeclare21;

let ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco03" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.248649" diffuseColor="1 0.452381 0.40339" specularColor="0.686486 0.396903 0.419275" shininess="0.902703"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "ArtDeco03";
let ProtoInterface26 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare25.protoInterface = ProtoInterface26;

let ProtoBody27 = browser.currentScene.createNode("ProtoBody");
let Material28 = browser.currentScene.createNode("Material");
Material28.ambientIntensity = 0.248649;
Material28.diffuseColor = new SFColor(new float[1,0.452381,0.40339]);
Material28.specularColor = new SFColor(new float[0.686486,0.396903,0.419275]);
Material28.shininess = 0.902703;
ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Material28;

ProtoDeclare25.protoBody = ProtoBody27;

browser.currentScene.children[3] = ProtoDeclare25;

let ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco04" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.748016 0.298362 0.342624" specularColor="0.345455 0.345455 0.345455" shininess="0.69697"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare29.name = "ArtDeco04";
let ProtoInterface30 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare29.protoInterface = ProtoInterface30;

let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Material32 = browser.currentScene.createNode("Material");
Material32.ambientIntensity = 0.25;
Material32.diffuseColor = new SFColor(new float[0.748016,0.298362,0.342624]);
Material32.specularColor = new SFColor(new float[0.345455,0.345455,0.345455]);
Material32.shininess = 0.69697;
ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Material32;

ProtoDeclare29.protoBody = ProtoBody31;

browser.currentScene.children[4] = ProtoDeclare29;

let ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco05" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.24359" diffuseColor="0.945455 0.318988 0.321717" specularColor="0.072727 0.021705 0.010732" shininess="0.018182"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "ArtDeco05";
let ProtoInterface34 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare33.protoInterface = ProtoInterface34;

let ProtoBody35 = browser.currentScene.createNode("ProtoBody");
let Material36 = browser.currentScene.createNode("Material");
Material36.ambientIntensity = 0.24359;
Material36.diffuseColor = new SFColor(new float[0.945455,0.318988,0.321717]);
Material36.specularColor = new SFColor(new float[0.072727,0.021705,0.010732]);
Material36.shininess = 0.018182;
ProtoBody35.children = new MFNode();

ProtoBody35.children[0] = Material36;

ProtoDeclare33.protoBody = ProtoBody35;

browser.currentScene.children[5] = ProtoDeclare33;

let ProtoDeclare37 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco06" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25946" diffuseColor="0.228655 0.195513 0.425484" specularColor="0.324504 0.404255 0.404255" shininess="0.542553"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare37.name = "ArtDeco06";
let ProtoInterface38 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare37.protoInterface = ProtoInterface38;

let ProtoBody39 = browser.currentScene.createNode("ProtoBody");
let Material40 = browser.currentScene.createNode("Material");
Material40.ambientIntensity = 0.25946;
Material40.diffuseColor = new SFColor(new float[0.228655,0.195513,0.425484]);
Material40.specularColor = new SFColor(new float[0.324504,0.404255,0.404255]);
Material40.shininess = 0.542553;
ProtoBody39.children = new MFNode();

ProtoBody39.children[0] = Material40;

ProtoDeclare37.protoBody = ProtoBody39;

browser.currentScene.children[6] = ProtoDeclare37;

let ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco07" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.200348 0.100857 0.320833" specularColor="0.311358 0.387879 0.387879" shininess="0.133333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "ArtDeco07";
let ProtoInterface42 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare41.protoInterface = ProtoInterface42;

let ProtoBody43 = browser.currentScene.createNode("ProtoBody");
let Material44 = browser.currentScene.createNode("Material");
Material44.ambientIntensity = 0.333333;
Material44.diffuseColor = new SFColor(new float[0.200348,0.100857,0.320833]);
Material44.specularColor = new SFColor(new float[0.311358,0.387879,0.387879]);
Material44.shininess = 0.133333;
ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Material44;

ProtoDeclare41.protoBody = ProtoBody43;

browser.currentScene.children[7] = ProtoDeclare41;

let ProtoDeclare45 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco08" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.330519 0.3389 0.6" specularColor="0.290909 0.290909 0.290909" shininess="0.787879"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare45.name = "ArtDeco08";
let ProtoInterface46 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare45.protoInterface = ProtoInterface46;

let ProtoBody47 = browser.currentScene.createNode("ProtoBody");
let Material48 = browser.currentScene.createNode("Material");
Material48.ambientIntensity = 0.242424;
Material48.diffuseColor = new SFColor(new float[0.330519,0.3389,0.6]);
Material48.specularColor = new SFColor(new float[0.290909,0.290909,0.290909]);
Material48.shininess = 0.787879;
ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Material48;

ProtoDeclare45.protoBody = ProtoBody47;

browser.currentScene.children[8] = ProtoDeclare45;

let ProtoDeclare49 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco09" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.237059 0.096273 0.215625" specularColor="0.311358 0.387879 0.387879" shininess="0.133333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare49.name = "ArtDeco09";
let ProtoInterface50 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare49.protoInterface = ProtoInterface50;

let ProtoBody51 = browser.currentScene.createNode("ProtoBody");
let Material52 = browser.currentScene.createNode("Material");
Material52.ambientIntensity = 0.333333;
Material52.diffuseColor = new SFColor(new float[0.237059,0.096273,0.215625]);
Material52.specularColor = new SFColor(new float[0.311358,0.387879,0.387879]);
Material52.shininess = 0.133333;
ProtoBody51.children = new MFNode();

ProtoBody51.children[0] = Material52;

ProtoDeclare49.protoBody = ProtoBody51;

browser.currentScene.children[9] = ProtoDeclare49;

let ProtoDeclare53 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco10" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242425" diffuseColor="0.304 0.09025 0.207364" specularColor="0.6665 0.579046 0.830303" shininess="0.072727"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare53.name = "ArtDeco10";
let ProtoInterface54 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare53.protoInterface = ProtoInterface54;

let ProtoBody55 = browser.currentScene.createNode("ProtoBody");
let Material56 = browser.currentScene.createNode("Material");
Material56.ambientIntensity = 0.242425;
Material56.diffuseColor = new SFColor(new float[0.304,0.09025,0.207364]);
Material56.specularColor = new SFColor(new float[0.6665,0.579046,0.830303]);
Material56.shininess = 0.072727;
ProtoBody55.children = new MFNode();

ProtoBody55.children[0] = Material56;

ProtoDeclare53.protoBody = ProtoBody55;

browser.currentScene.children[10] = ProtoDeclare53;

let ProtoDeclare57 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco11" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.258928" diffuseColor="0.335631 0.207672 0.238304" specularColor="0.198631 0.075403 0.138803" emissiveColor="0.010638 0.010638 0.010638" shininess="0.021277"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare57.name = "ArtDeco11";
let ProtoInterface58 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare57.protoInterface = ProtoInterface58;

let ProtoBody59 = browser.currentScene.createNode("ProtoBody");
let Material60 = browser.currentScene.createNode("Material");
Material60.ambientIntensity = 0.258928;
Material60.diffuseColor = new SFColor(new float[0.335631,0.207672,0.238304]);
Material60.specularColor = new SFColor(new float[0.198631,0.075403,0.138803]);
Material60.emissiveColor = new SFColor(new float[0.010638,0.010638,0.010638]);
Material60.shininess = 0.021277;
ProtoBody59.children = new MFNode();

ProtoBody59.children[0] = Material60;

ProtoDeclare57.protoBody = ProtoBody59;

browser.currentScene.children[11] = ProtoDeclare57;

let ProtoDeclare61 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco12" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.14715 0.00856" specularColor="0.193878 0.029416 0.029416" shininess="0.076531"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare61.name = "ArtDeco12";
let ProtoInterface62 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare61.protoInterface = ProtoInterface62;

let ProtoBody63 = browser.currentScene.createNode("ProtoBody");
let Material64 = browser.currentScene.createNode("Material");
Material64.ambientIntensity = 0.240838;
Material64.diffuseColor = new SFColor(new float[0.876873,0.14715,0.00856]);
Material64.specularColor = new SFColor(new float[0.193878,0.029416,0.029416]);
Material64.shininess = 0.076531;
ProtoBody63.children = new MFNode();

ProtoBody63.children[0] = Material64;

ProtoDeclare61.protoBody = ProtoBody63;

browser.currentScene.children[12] = ProtoDeclare61;

let ProtoDeclare65 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco13" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.794445 0.249425 0" specularColor="0.62904 0.194211 0.033663" shininess="0.551515"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare65.name = "ArtDeco13";
let ProtoInterface66 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare65.protoInterface = ProtoInterface66;

let ProtoBody67 = browser.currentScene.createNode("ProtoBody");
let Material68 = browser.currentScene.createNode("Material");
Material68.ambientIntensity = 0.25;
Material68.diffuseColor = new SFColor(new float[0.794445,0.249425,0]);
Material68.specularColor = new SFColor(new float[0.62904,0.194211,0.033663]);
Material68.shininess = 0.551515;
ProtoBody67.children = new MFNode();

ProtoBody67.children[0] = Material68;

ProtoDeclare65.protoBody = ProtoBody67;

browser.currentScene.children[13] = ProtoDeclare65;

let ProtoDeclare69 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco14" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.510609 0.17264 0.059872" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare69.name = "ArtDeco14";
let ProtoInterface70 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare69.protoInterface = ProtoInterface70;

let ProtoBody71 = browser.currentScene.createNode("ProtoBody");
let Material72 = browser.currentScene.createNode("Material");
Material72.ambientIntensity = 0.25;
Material72.diffuseColor = new SFColor(new float[0.510609,0.17264,0.059872]);
Material72.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
Material72.shininess = 0.933333;
ProtoBody71.children = new MFNode();

ProtoBody71.children[0] = Material72;

ProtoDeclare69.protoBody = ProtoBody71;

browser.currentScene.children[14] = ProtoDeclare69;

let ProtoDeclare73 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco15" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.255814" diffuseColor="0.914894 0.444404 0.348914" specularColor="0.345745 0.143066 0" shininess="0.12766"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare73.name = "ArtDeco15";
let ProtoInterface74 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare73.protoInterface = ProtoInterface74;

let ProtoBody75 = browser.currentScene.createNode("ProtoBody");
let Material76 = browser.currentScene.createNode("Material");
Material76.ambientIntensity = 0.255814;
Material76.diffuseColor = new SFColor(new float[0.914894,0.444404,0.348914]);
Material76.specularColor = new SFColor(new float[0.345745,0.143066,0]);
Material76.shininess = 0.12766;
ProtoBody75.children = new MFNode();

ProtoBody75.children[0] = Material76;

ProtoDeclare73.protoBody = ProtoBody75;

browser.currentScene.children[15] = ProtoDeclare73;

let ProtoDeclare77 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco16" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.323147 0.199564" specularColor="0.816327 0.278677 0.278677" shininess="0.80102"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare77.name = "ArtDeco16";
let ProtoInterface78 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare77.protoInterface = ProtoInterface78;

let ProtoBody79 = browser.currentScene.createNode("ProtoBody");
let Material80 = browser.currentScene.createNode("Material");
Material80.ambientIntensity = 0.240838;
Material80.diffuseColor = new SFColor(new float[0.876873,0.323147,0.199564]);
Material80.specularColor = new SFColor(new float[0.816327,0.278677,0.278677]);
Material80.shininess = 0.80102;
ProtoBody79.children = new MFNode();

ProtoBody79.children[0] = Material80;

ProtoDeclare77.protoBody = ProtoBody79;

browser.currentScene.children[16] = ProtoDeclare77;

let ProtoDeclare81 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco17" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.515625 0.315496 0.252441" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare81.name = "ArtDeco17";
let ProtoInterface82 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare81.protoInterface = ProtoInterface82;

let ProtoBody83 = browser.currentScene.createNode("ProtoBody");
let Material84 = browser.currentScene.createNode("Material");
Material84.ambientIntensity = 0.242424;
Material84.diffuseColor = new SFColor(new float[0.515625,0.315496,0.252441]);
Material84.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
Material84.shininess = 0.933333;
ProtoBody83.children = new MFNode();

ProtoBody83.children[0] = Material84;

ProtoDeclare81.protoBody = ProtoBody83;

browser.currentScene.children[17] = ProtoDeclare81;

let ProtoDeclare85 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco18" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.264706" diffuseColor="0 0.346939 0.253624" specularColor="0 0.311074 0.357143" shininess="0.316327"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare85.name = "ArtDeco18";
let ProtoInterface86 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare85.protoInterface = ProtoInterface86;

let ProtoBody87 = browser.currentScene.createNode("ProtoBody");
let Material88 = browser.currentScene.createNode("Material");
Material88.ambientIntensity = 0.264706;
Material88.diffuseColor = new SFColor(new float[0,0.346939,0.253624]);
Material88.specularColor = new SFColor(new float[0,0.311074,0.357143]);
Material88.shininess = 0.316327;
ProtoBody87.children = new MFNode();

ProtoBody87.children[0] = Material88;

ProtoDeclare85.protoBody = ProtoBody87;

browser.currentScene.children[18] = ProtoDeclare85;

let ProtoDeclare89 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco19" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.259259" diffuseColor="0 0.251004 0.239248" specularColor="0.177935 0.249369 0.229278" shininess="0.060606"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare89.name = "ArtDeco19";
let ProtoInterface90 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare89.protoInterface = ProtoInterface90;

let ProtoBody91 = browser.currentScene.createNode("ProtoBody");
let Material92 = browser.currentScene.createNode("Material");
Material92.ambientIntensity = 0.259259;
Material92.diffuseColor = new SFColor(new float[0,0.251004,0.239248]);
Material92.specularColor = new SFColor(new float[0.177935,0.249369,0.229278]);
Material92.shininess = 0.060606;
ProtoBody91.children = new MFNode();

ProtoBody91.children[0] = Material92;

ProtoDeclare89.protoBody = ProtoBody91;

browser.currentScene.children[19] = ProtoDeclare89;

let ProtoDeclare93 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco20" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.24" diffuseColor="0.228298 0.385771 0.186794" specularColor="0.200464 0.300145 0.293518" shininess="0.393939"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare93.name = "ArtDeco20";
let ProtoInterface94 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare93.protoInterface = ProtoInterface94;

let ProtoBody95 = browser.currentScene.createNode("ProtoBody");
let Material96 = browser.currentScene.createNode("Material");
Material96.ambientIntensity = 0.24;
Material96.diffuseColor = new SFColor(new float[0.228298,0.385771,0.186794]);
Material96.specularColor = new SFColor(new float[0.200464,0.300145,0.293518]);
Material96.shininess = 0.393939;
ProtoBody95.children = new MFNode();

ProtoBody95.children[0] = Material96;

ProtoDeclare93.protoBody = ProtoBody95;

browser.currentScene.children[20] = ProtoDeclare93;

let ProtoDeclare97 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco21" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.315389 0.544 0.258052" specularColor="0.456 0.456 0.456" shininess="0.509389"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare97.name = "ArtDeco21";
let ProtoInterface98 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare97.protoInterface = ProtoInterface98;

let ProtoBody99 = browser.currentScene.createNode("ProtoBody");
let Material100 = browser.currentScene.createNode("Material");
Material100.ambientIntensity = 0.25;
Material100.diffuseColor = new SFColor(new float[0.315389,0.544,0.258052]);
Material100.specularColor = new SFColor(new float[0.456,0.456,0.456]);
Material100.shininess = 0.509389;
ProtoBody99.children = new MFNode();

ProtoBody99.children[0] = Material100;

ProtoDeclare97.protoBody = ProtoBody99;

browser.currentScene.children[21] = ProtoDeclare97;

let ProtoDeclare101 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco22" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.246032" diffuseColor="0.251104 0.312562 0.201724" specularColor="0.209184 0.113842 0.111328" shininess="0.086735"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare101.name = "ArtDeco22";
let ProtoInterface102 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare101.protoInterface = ProtoInterface102;

let ProtoBody103 = browser.currentScene.createNode("ProtoBody");
let Material104 = browser.currentScene.createNode("Material");
Material104.ambientIntensity = 0.246032;
Material104.diffuseColor = new SFColor(new float[0.251104,0.312562,0.201724]);
Material104.specularColor = new SFColor(new float[0.209184,0.113842,0.111328]);
Material104.shininess = 0.086735;
ProtoBody103.children = new MFNode();

ProtoBody103.children[0] = Material104;

ProtoDeclare101.protoBody = ProtoBody103;

browser.currentScene.children[22] = ProtoDeclare101;

let ProtoDeclare105 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco23" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.392348 0.456 0.417708" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare105.name = "ArtDeco23";
let ProtoInterface106 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare105.protoInterface = ProtoInterface106;

let ProtoBody107 = browser.currentScene.createNode("ProtoBody");
let Material108 = browser.currentScene.createNode("Material");
Material108.ambientIntensity = 0.242424;
Material108.diffuseColor = new SFColor(new float[0.392348,0.456,0.417708]);
Material108.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
Material108.shininess = 0.933333;
ProtoBody107.children = new MFNode();

ProtoBody107.children[0] = Material108;

ProtoDeclare105.protoBody = ProtoBody107;

browser.currentScene.children[23] = ProtoDeclare105;

let ProtoDeclare109 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco24" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.253968" diffuseColor="1 0.854922 0" specularColor="0.872449 0.247119 0.254214" shininess="1"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare109.name = "ArtDeco24";
let ProtoInterface110 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare109.protoInterface = ProtoInterface110;

let ProtoBody111 = browser.currentScene.createNode("ProtoBody");
let Material112 = browser.currentScene.createNode("Material");
Material112.ambientIntensity = 0.253968;
Material112.diffuseColor = new SFColor(new float[1,0.854922,0]);
Material112.specularColor = new SFColor(new float[0.872449,0.247119,0.254214]);
Material112.shininess = 1;
ProtoBody111.children = new MFNode();

ProtoBody111.children[0] = Material112;

ProtoDeclare109.protoBody = ProtoBody111;

browser.currentScene.children[24] = ProtoDeclare109;

let ProtoDeclare113 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco25" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.795918 0.505869 0.093315" specularColor="0.923469 0.428866 0.006369" shininess="0.397959"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare113.name = "ArtDeco25";
let ProtoInterface114 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare113.protoInterface = ProtoInterface114;

let ProtoBody115 = browser.currentScene.createNode("ProtoBody");
let Material116 = browser.currentScene.createNode("Material");
Material116.ambientIntensity = 0.25641;
Material116.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material116.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
Material116.shininess = 0.397959;
ProtoBody115.children = new MFNode();

ProtoBody115.children[0] = Material116;

ProtoDeclare113.protoBody = ProtoBody115;

browser.currentScene.children[25] = ProtoDeclare113;

let ProtoDeclare117 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco26" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="1" diffuseColor="0.331633 0.296582 0.279057" specularColor="0.311224 0.25183 0.133042" shininess="0.096939"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare117.name = "ArtDeco26";
let ProtoInterface118 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare117.protoInterface = ProtoInterface118;

let ProtoBody119 = browser.currentScene.createNode("ProtoBody");
let Material120 = browser.currentScene.createNode("Material");
Material120.ambientIntensity = 1;
Material120.diffuseColor = new SFColor(new float[0.331633,0.296582,0.279057]);
Material120.specularColor = new SFColor(new float[0.311224,0.25183,0.133042]);
Material120.shininess = 0.096939;
ProtoBody119.children = new MFNode();

ProtoBody119.children[0] = Material120;

ProtoDeclare117.protoBody = ProtoBody119;

browser.currentScene.children[26] = ProtoDeclare117;

let ProtoDeclare121 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco27" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.263158" diffuseColor="0.345455 0.163262 0.122622" specularColor="0.212121 0.107475 0" shininess="0.048649"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare121.name = "ArtDeco27";
let ProtoInterface122 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare121.protoInterface = ProtoInterface122;

let ProtoBody123 = browser.currentScene.createNode("ProtoBody");
let Material124 = browser.currentScene.createNode("Material");
Material124.ambientIntensity = 0.263158;
Material124.diffuseColor = new SFColor(new float[0.345455,0.163262,0.122622]);
Material124.specularColor = new SFColor(new float[0.212121,0.107475,0]);
Material124.shininess = 0.048649;
ProtoBody123.children = new MFNode();

ProtoBody123.children[0] = Material124;

ProtoDeclare121.protoBody = ProtoBody123;

browser.currentScene.children[27] = ProtoDeclare121;

let ProtoDeclare125 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco28" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.240506" diffuseColor="0.277281 0.104336 0.0799" specularColor="0.305587 0.141916 0.270572" shininess="0.09697"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare125.name = "ArtDeco28";
let ProtoInterface126 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare125.protoInterface = ProtoInterface126;

let ProtoBody127 = browser.currentScene.createNode("ProtoBody");
let Material128 = browser.currentScene.createNode("Material");
Material128.ambientIntensity = 0.240506;
Material128.diffuseColor = new SFColor(new float[0.277281,0.104336,0.0799]);
Material128.specularColor = new SFColor(new float[0.305587,0.141916,0.270572]);
Material128.shininess = 0.09697;
ProtoBody127.children = new MFNode();

ProtoBody127.children[0] = Material128;

ProtoDeclare125.protoBody = ProtoBody127;

browser.currentScene.children[28] = ProtoDeclare125;

let ProtoDeclare129 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco29" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.215686" diffuseColor="0.087034 0.025888 0" specularColor="0.224138 0.104091 0.104091" shininess="0.045918"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare129.name = "ArtDeco29";
let ProtoInterface130 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare129.protoInterface = ProtoInterface130;

let ProtoBody131 = browser.currentScene.createNode("ProtoBody");
let Material132 = browser.currentScene.createNode("Material");
Material132.ambientIntensity = 0.215686;
Material132.diffuseColor = new SFColor(new float[0.087034,0.025888,0]);
Material132.specularColor = new SFColor(new float[0.224138,0.104091,0.104091]);
Material132.shininess = 0.045918;
ProtoBody131.children = new MFNode();

ProtoBody131.children[0] = Material132;

ProtoDeclare129.protoBody = ProtoBody131;

browser.currentScene.children[29] = ProtoDeclare129;

let ProtoDeclare133 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco30" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0" diffuseColor="0 0 0" specularColor="0.293243 0.297387 0.290421" shininess="0.081633"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare133.name = "ArtDeco30";
let ProtoInterface134 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare133.protoInterface = ProtoInterface134;

let ProtoBody135 = browser.currentScene.createNode("ProtoBody");
let Material136 = browser.currentScene.createNode("Material");
Material136.ambientIntensity = 0;
Material136.diffuseColor = new SFColor(new float[0,0,0]);
Material136.specularColor = new SFColor(new float[0.293243,0.297387,0.290421]);
Material136.shininess = 0.081633;
ProtoBody135.children = new MFNode();

ProtoBody135.children[0] = Material136;

ProtoDeclare133.protoBody = ProtoBody135;

browser.currentScene.children[30] = ProtoDeclare133;

let ProtoDeclare137 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco31" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.236364 0.236364 0.236364" specularColor="0.29697 0.245839 0.295962" shininess="0.054546"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare137.name = "ArtDeco31";
let ProtoInterface138 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare137.protoInterface = ProtoInterface138;

let ProtoBody139 = browser.currentScene.createNode("ProtoBody");
let Material140 = browser.currentScene.createNode("Material");
Material140.ambientIntensity = 0.25641;
Material140.diffuseColor = new SFColor(new float[0.236364,0.236364,0.236364]);
Material140.specularColor = new SFColor(new float[0.29697,0.245839,0.295962]);
Material140.shininess = 0.054546;
ProtoBody139.children = new MFNode();

ProtoBody139.children[0] = Material140;

ProtoDeclare137.protoBody = ProtoBody139;

browser.currentScene.children[31] = ProtoDeclare137;

let ProtoDeclare141 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco32" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.38087 0.382957 0.417708" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare141.name = "ArtDeco32";
let ProtoInterface142 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare141.protoInterface = ProtoInterface142;

let ProtoBody143 = browser.currentScene.createNode("ProtoBody");
let Material144 = browser.currentScene.createNode("Material");
Material144.ambientIntensity = 0.242424;
Material144.diffuseColor = new SFColor(new float[0.38087,0.382957,0.417708]);
Material144.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
Material144.shininess = 0.933333;
ProtoBody143.children = new MFNode();

ProtoBody143.children[0] = Material144;

ProtoDeclare141.protoBody = ProtoBody143;

browser.currentScene.children[32] = ProtoDeclare141;

let ProtoDeclare145 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco33" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.230089" diffuseColor="0.610811 0.610811 0.610811" specularColor="0.767568 0.756757 0.764964" shininess="0.897297"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare145.name = "ArtDeco33";
let ProtoInterface146 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare145.protoInterface = ProtoInterface146;

let ProtoBody147 = browser.currentScene.createNode("ProtoBody");
let Material148 = browser.currentScene.createNode("Material");
Material148.ambientIntensity = 0.230089;
Material148.diffuseColor = new SFColor(new float[0.610811,0.610811,0.610811]);
Material148.specularColor = new SFColor(new float[0.767568,0.756757,0.764964]);
Material148.shininess = 0.897297;
ProtoBody147.children = new MFNode();

ProtoBody147.children[0] = Material148;

ProtoDeclare145.protoBody = ProtoBody147;

browser.currentScene.children[33] = ProtoDeclare145;

let ProtoDeclare149 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco34" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" specularColor="0.2 0.2 0.2" shininess="0"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare149.name = "ArtDeco34";
let ProtoInterface150 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare149.protoInterface = ProtoInterface150;

let ProtoBody151 = browser.currentScene.createNode("ProtoBody");
let Material152 = browser.currentScene.createNode("Material");
Material152.ambientIntensity = 0.25;
Material152.specularColor = new SFColor(new float[0.2,0.2,0.2]);
Material152.shininess = 0;
ProtoBody151.children = new MFNode();

ProtoBody151.children[0] = Material152;

ProtoDeclare149.protoBody = ProtoBody151;

browser.currentScene.children[34] = ProtoDeclare149;

let WorldInfo153 = browser.currentScene.createNode("WorldInfo");
WorldInfo153.title = "ArtDecoPrototypes.x3d";
browser.currentScene.children[35] = WorldInfo153;

let Anchor154 = browser.currentScene.createNode("Anchor");
Anchor154.description = "ArtDecoPrototypeExample";
Anchor154.url = new MFString(new java.lang.String["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"]);
Anchor154.parameter = new MFString(new java.lang.String["target=_blank"]);
let Shape155 = browser.currentScene.createNode("Shape");
let Appearance156 = browser.currentScene.createNode("Appearance");
let Material157 = browser.currentScene.createNode("Material");
Material157.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance156.material = Material157;

Shape155.appearance = Appearance156;

let Text158 = browser.currentScene.createNode("Text");
Text158.string = new MFString(new java.lang.String["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"]);
let FontStyle159 = browser.currentScene.createNode("FontStyle");
FontStyle159.size = 0.8;
FontStyle159.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text158.fontStyle = FontStyle159;

Shape155.geometry = Text158;

Anchor154.children = new MFNode();

Anchor154.children[0] = Shape155;

browser.currentScene.children[36] = Anchor154;

