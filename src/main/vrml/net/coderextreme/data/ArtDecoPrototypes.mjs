let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
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

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "license";
meta12.content = "../license.html";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "ArtDecoPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco00" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "ArtDeco00";
ProtoDeclare15.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare15.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody16 = browser.currentScene.createNode("ProtoBody");
let Material17 = browser.currentScene.createNode("Material");
Material17.ambientIntensity = 0.25;
Material17.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material17.shininess = 0.127273;
Material17.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Material17;

ProtoDeclare15.protoBody = ProtoBody16;

browser.currentScene.children[1] = ProtoDeclare15;

let ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco01" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.254777" diffuseColor="0.685208 0.134679 0.332385" shininess="0.071429" specularColor="0.122449 0.050035 0.050035"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "ArtDeco01";
ProtoDeclare18.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare18.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
let Material20 = browser.currentScene.createNode("Material");
Material20.ambientIntensity = 0.254777;
Material20.diffuseColor = new SFColor(new float[0.685208,0.134679,0.332385]);
Material20.shininess = 0.071429;
Material20.specularColor = new SFColor(new float[0.122449,0.050035,0.050035]);
ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Material20;

ProtoDeclare18.protoBody = ProtoBody19;

browser.currentScene.children[2] = ProtoDeclare18;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco02" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><!--computed conversion ambientIntensity=1.745282, normalized to 1.0--><ProtoBody><Material ambientIntensity="1" diffuseColor="0.536861 0.0529 0.245479" shininess="0.832432" specularColor="0.805292 0.765198 0.747416"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "ArtDeco02";
ProtoDeclare21.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare21.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
//computed conversion ambientIntensity=1.745282, normalized to 1.0
let ProtoBody22 = browser.currentScene.createNode("ProtoBody");
let Material23 = browser.currentScene.createNode("Material");
Material23.ambientIntensity = 1;
Material23.diffuseColor = new SFColor(new float[0.536861,0.0529,0.245479]);
Material23.shininess = 0.832432;
Material23.specularColor = new SFColor(new float[0.805292,0.765198,0.747416]);
ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Material23;

ProtoDeclare21.protoBody = ProtoBody22;

browser.currentScene.children[3] = ProtoDeclare21;

let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco03" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.248649" diffuseColor="1 0.452381 0.40339" shininess="0.902703" specularColor="0.686486 0.396903 0.419275"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "ArtDeco03";
ProtoDeclare24.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody25 = browser.currentScene.createNode("ProtoBody");
let Material26 = browser.currentScene.createNode("Material");
Material26.ambientIntensity = 0.248649;
Material26.diffuseColor = new SFColor(new float[1,0.452381,0.40339]);
Material26.shininess = 0.902703;
Material26.specularColor = new SFColor(new float[0.686486,0.396903,0.419275]);
ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Material26;

ProtoDeclare24.protoBody = ProtoBody25;

browser.currentScene.children[4] = ProtoDeclare24;

let ProtoDeclare27 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco04" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.748016 0.298362 0.342624" shininess="0.69697" specularColor="0.345455 0.345455 0.345455"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare27.name = "ArtDeco04";
ProtoDeclare27.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare27.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let Material29 = browser.currentScene.createNode("Material");
Material29.ambientIntensity = 0.25;
Material29.diffuseColor = new SFColor(new float[0.748016,0.298362,0.342624]);
Material29.shininess = 0.69697;
Material29.specularColor = new SFColor(new float[0.345455,0.345455,0.345455]);
ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Material29;

ProtoDeclare27.protoBody = ProtoBody28;

browser.currentScene.children[5] = ProtoDeclare27;

let ProtoDeclare30 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco05" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.24359" diffuseColor="0.945455 0.318988 0.321717" shininess="0.018182" specularColor="0.072727 0.021705 0.010732"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare30.name = "ArtDeco05";
ProtoDeclare30.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare30.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Material32 = browser.currentScene.createNode("Material");
Material32.ambientIntensity = 0.24359;
Material32.diffuseColor = new SFColor(new float[0.945455,0.318988,0.321717]);
Material32.shininess = 0.018182;
Material32.specularColor = new SFColor(new float[0.072727,0.021705,0.010732]);
ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Material32;

ProtoDeclare30.protoBody = ProtoBody31;

browser.currentScene.children[6] = ProtoDeclare30;

let ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco06" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25946" diffuseColor="0.228655 0.195513 0.425484" shininess="0.542553" specularColor="0.324504 0.404255 0.404255"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "ArtDeco06";
ProtoDeclare33.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare33.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody34 = browser.currentScene.createNode("ProtoBody");
let Material35 = browser.currentScene.createNode("Material");
Material35.ambientIntensity = 0.25946;
Material35.diffuseColor = new SFColor(new float[0.228655,0.195513,0.425484]);
Material35.shininess = 0.542553;
Material35.specularColor = new SFColor(new float[0.324504,0.404255,0.404255]);
ProtoBody34.children = new MFNode();

ProtoBody34.children[0] = Material35;

ProtoDeclare33.protoBody = ProtoBody34;

browser.currentScene.children[7] = ProtoDeclare33;

let ProtoDeclare36 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco07" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.200348 0.100857 0.320833" shininess="0.133333" specularColor="0.311358 0.387879 0.387879"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare36.name = "ArtDeco07";
ProtoDeclare36.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody37 = browser.currentScene.createNode("ProtoBody");
let Material38 = browser.currentScene.createNode("Material");
Material38.ambientIntensity = 0.333333;
Material38.diffuseColor = new SFColor(new float[0.200348,0.100857,0.320833]);
Material38.shininess = 0.133333;
Material38.specularColor = new SFColor(new float[0.311358,0.387879,0.387879]);
ProtoBody37.children = new MFNode();

ProtoBody37.children[0] = Material38;

ProtoDeclare36.protoBody = ProtoBody37;

browser.currentScene.children[8] = ProtoDeclare36;

let ProtoDeclare39 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco08" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.330519 0.3389 0.6" shininess="0.787879" specularColor="0.290909 0.290909 0.290909"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare39.name = "ArtDeco08";
ProtoDeclare39.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare39.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody40 = browser.currentScene.createNode("ProtoBody");
let Material41 = browser.currentScene.createNode("Material");
Material41.ambientIntensity = 0.242424;
Material41.diffuseColor = new SFColor(new float[0.330519,0.3389,0.6]);
Material41.shininess = 0.787879;
Material41.specularColor = new SFColor(new float[0.290909,0.290909,0.290909]);
ProtoBody40.children = new MFNode();

ProtoBody40.children[0] = Material41;

ProtoDeclare39.protoBody = ProtoBody40;

browser.currentScene.children[9] = ProtoDeclare39;

let ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco09" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.237059 0.096273 0.215625" shininess="0.133333" specularColor="0.311358 0.387879 0.387879"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "ArtDeco09";
ProtoDeclare42.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare42.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody43 = browser.currentScene.createNode("ProtoBody");
let Material44 = browser.currentScene.createNode("Material");
Material44.ambientIntensity = 0.333333;
Material44.diffuseColor = new SFColor(new float[0.237059,0.096273,0.215625]);
Material44.shininess = 0.133333;
Material44.specularColor = new SFColor(new float[0.311358,0.387879,0.387879]);
ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Material44;

ProtoDeclare42.protoBody = ProtoBody43;

browser.currentScene.children[10] = ProtoDeclare42;

let ProtoDeclare45 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco10" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242425" diffuseColor="0.304 0.09025 0.207364" shininess="0.072727" specularColor="0.6665 0.579046 0.830303"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare45.name = "ArtDeco10";
ProtoDeclare45.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare45.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody46 = browser.currentScene.createNode("ProtoBody");
let Material47 = browser.currentScene.createNode("Material");
Material47.ambientIntensity = 0.242425;
Material47.diffuseColor = new SFColor(new float[0.304,0.09025,0.207364]);
Material47.shininess = 0.072727;
Material47.specularColor = new SFColor(new float[0.6665,0.579046,0.830303]);
ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Material47;

ProtoDeclare45.protoBody = ProtoBody46;

browser.currentScene.children[11] = ProtoDeclare45;

let ProtoDeclare48 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco11" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.258928" diffuseColor="0.335631 0.207672 0.238304" emissiveColor="0.010638 0.010638 0.010638" shininess="0.021277" specularColor="0.198631 0.075403 0.138803"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare48.name = "ArtDeco11";
ProtoDeclare48.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare48.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody49 = browser.currentScene.createNode("ProtoBody");
let Material50 = browser.currentScene.createNode("Material");
Material50.ambientIntensity = 0.258928;
Material50.diffuseColor = new SFColor(new float[0.335631,0.207672,0.238304]);
Material50.emissiveColor = new SFColor(new float[0.010638,0.010638,0.010638]);
Material50.shininess = 0.021277;
Material50.specularColor = new SFColor(new float[0.198631,0.075403,0.138803]);
ProtoBody49.children = new MFNode();

ProtoBody49.children[0] = Material50;

ProtoDeclare48.protoBody = ProtoBody49;

browser.currentScene.children[12] = ProtoDeclare48;

let ProtoDeclare51 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco12" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.14715 0.00856" shininess="0.076531" specularColor="0.193878 0.029416 0.029416"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare51.name = "ArtDeco12";
ProtoDeclare51.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare51.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody52 = browser.currentScene.createNode("ProtoBody");
let Material53 = browser.currentScene.createNode("Material");
Material53.ambientIntensity = 0.240838;
Material53.diffuseColor = new SFColor(new float[0.876873,0.14715,0.00856]);
Material53.shininess = 0.076531;
Material53.specularColor = new SFColor(new float[0.193878,0.029416,0.029416]);
ProtoBody52.children = new MFNode();

ProtoBody52.children[0] = Material53;

ProtoDeclare51.protoBody = ProtoBody52;

browser.currentScene.children[13] = ProtoDeclare51;

let ProtoDeclare54 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco13" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.794445 0.249425 0" shininess="0.551515" specularColor="0.62904 0.194211 0.033663"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare54.name = "ArtDeco13";
ProtoDeclare54.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare54.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody55 = browser.currentScene.createNode("ProtoBody");
let Material56 = browser.currentScene.createNode("Material");
Material56.ambientIntensity = 0.25;
Material56.diffuseColor = new SFColor(new float[0.794445,0.249425,0]);
Material56.shininess = 0.551515;
Material56.specularColor = new SFColor(new float[0.62904,0.194211,0.033663]);
ProtoBody55.children = new MFNode();

ProtoBody55.children[0] = Material56;

ProtoDeclare54.protoBody = ProtoBody55;

browser.currentScene.children[14] = ProtoDeclare54;

let ProtoDeclare57 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco14" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.510609 0.17264 0.059872" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare57.name = "ArtDeco14";
ProtoDeclare57.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare57.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody58 = browser.currentScene.createNode("ProtoBody");
let Material59 = browser.currentScene.createNode("Material");
Material59.ambientIntensity = 0.25;
Material59.diffuseColor = new SFColor(new float[0.510609,0.17264,0.059872]);
Material59.shininess = 0.933333;
Material59.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
ProtoBody58.children = new MFNode();

ProtoBody58.children[0] = Material59;

ProtoDeclare57.protoBody = ProtoBody58;

browser.currentScene.children[15] = ProtoDeclare57;

let ProtoDeclare60 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco15" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.255814" diffuseColor="0.914894 0.444404 0.348914" shininess="0.12766" specularColor="0.345745 0.143066 0"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare60.name = "ArtDeco15";
ProtoDeclare60.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare60.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody61 = browser.currentScene.createNode("ProtoBody");
let Material62 = browser.currentScene.createNode("Material");
Material62.ambientIntensity = 0.255814;
Material62.diffuseColor = new SFColor(new float[0.914894,0.444404,0.348914]);
Material62.shininess = 0.12766;
Material62.specularColor = new SFColor(new float[0.345745,0.143066,0]);
ProtoBody61.children = new MFNode();

ProtoBody61.children[0] = Material62;

ProtoDeclare60.protoBody = ProtoBody61;

browser.currentScene.children[16] = ProtoDeclare60;

let ProtoDeclare63 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco16" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.323147 0.199564" shininess="0.80102" specularColor="0.816327 0.278677 0.278677"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare63.name = "ArtDeco16";
ProtoDeclare63.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare63.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody64 = browser.currentScene.createNode("ProtoBody");
let Material65 = browser.currentScene.createNode("Material");
Material65.ambientIntensity = 0.240838;
Material65.diffuseColor = new SFColor(new float[0.876873,0.323147,0.199564]);
Material65.shininess = 0.80102;
Material65.specularColor = new SFColor(new float[0.816327,0.278677,0.278677]);
ProtoBody64.children = new MFNode();

ProtoBody64.children[0] = Material65;

ProtoDeclare63.protoBody = ProtoBody64;

browser.currentScene.children[17] = ProtoDeclare63;

let ProtoDeclare66 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco17" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.515625 0.315496 0.252441" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare66.name = "ArtDeco17";
ProtoDeclare66.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare66.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody67 = browser.currentScene.createNode("ProtoBody");
let Material68 = browser.currentScene.createNode("Material");
Material68.ambientIntensity = 0.242424;
Material68.diffuseColor = new SFColor(new float[0.515625,0.315496,0.252441]);
Material68.shininess = 0.933333;
Material68.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
ProtoBody67.children = new MFNode();

ProtoBody67.children[0] = Material68;

ProtoDeclare66.protoBody = ProtoBody67;

browser.currentScene.children[18] = ProtoDeclare66;

let ProtoDeclare69 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco18" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.264706" diffuseColor="0 0.346939 0.253624" shininess="0.316327" specularColor="0 0.311074 0.357143"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare69.name = "ArtDeco18";
ProtoDeclare69.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare69.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody70 = browser.currentScene.createNode("ProtoBody");
let Material71 = browser.currentScene.createNode("Material");
Material71.ambientIntensity = 0.264706;
Material71.diffuseColor = new SFColor(new float[0,0.346939,0.253624]);
Material71.shininess = 0.316327;
Material71.specularColor = new SFColor(new float[0,0.311074,0.357143]);
ProtoBody70.children = new MFNode();

ProtoBody70.children[0] = Material71;

ProtoDeclare69.protoBody = ProtoBody70;

browser.currentScene.children[19] = ProtoDeclare69;

let ProtoDeclare72 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco19" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.259259" diffuseColor="0 0.251004 0.239248" shininess="0.060606" specularColor="0.177935 0.249369 0.229278"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare72.name = "ArtDeco19";
ProtoDeclare72.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare72.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody73 = browser.currentScene.createNode("ProtoBody");
let Material74 = browser.currentScene.createNode("Material");
Material74.ambientIntensity = 0.259259;
Material74.diffuseColor = new SFColor(new float[0,0.251004,0.239248]);
Material74.shininess = 0.060606;
Material74.specularColor = new SFColor(new float[0.177935,0.249369,0.229278]);
ProtoBody73.children = new MFNode();

ProtoBody73.children[0] = Material74;

ProtoDeclare72.protoBody = ProtoBody73;

browser.currentScene.children[20] = ProtoDeclare72;

let ProtoDeclare75 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco20" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.24" diffuseColor="0.228298 0.385771 0.186794" shininess="0.393939" specularColor="0.200464 0.300145 0.293518"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare75.name = "ArtDeco20";
ProtoDeclare75.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare75.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody76 = browser.currentScene.createNode("ProtoBody");
let Material77 = browser.currentScene.createNode("Material");
Material77.ambientIntensity = 0.24;
Material77.diffuseColor = new SFColor(new float[0.228298,0.385771,0.186794]);
Material77.shininess = 0.393939;
Material77.specularColor = new SFColor(new float[0.200464,0.300145,0.293518]);
ProtoBody76.children = new MFNode();

ProtoBody76.children[0] = Material77;

ProtoDeclare75.protoBody = ProtoBody76;

browser.currentScene.children[21] = ProtoDeclare75;

let ProtoDeclare78 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco21" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.315389 0.544 0.258052" shininess="0.509389" specularColor="0.456 0.456 0.456"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare78.name = "ArtDeco21";
ProtoDeclare78.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare78.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody79 = browser.currentScene.createNode("ProtoBody");
let Material80 = browser.currentScene.createNode("Material");
Material80.ambientIntensity = 0.25;
Material80.diffuseColor = new SFColor(new float[0.315389,0.544,0.258052]);
Material80.shininess = 0.509389;
Material80.specularColor = new SFColor(new float[0.456,0.456,0.456]);
ProtoBody79.children = new MFNode();

ProtoBody79.children[0] = Material80;

ProtoDeclare78.protoBody = ProtoBody79;

browser.currentScene.children[22] = ProtoDeclare78;

let ProtoDeclare81 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco22" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.246032" diffuseColor="0.251104 0.312562 0.201724" shininess="0.086735" specularColor="0.209184 0.113842 0.111328"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare81.name = "ArtDeco22";
ProtoDeclare81.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare81.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody82 = browser.currentScene.createNode("ProtoBody");
let Material83 = browser.currentScene.createNode("Material");
Material83.ambientIntensity = 0.246032;
Material83.diffuseColor = new SFColor(new float[0.251104,0.312562,0.201724]);
Material83.shininess = 0.086735;
Material83.specularColor = new SFColor(new float[0.209184,0.113842,0.111328]);
ProtoBody82.children = new MFNode();

ProtoBody82.children[0] = Material83;

ProtoDeclare81.protoBody = ProtoBody82;

browser.currentScene.children[23] = ProtoDeclare81;

let ProtoDeclare84 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco23" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.392348 0.456 0.417708" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare84.name = "ArtDeco23";
ProtoDeclare84.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare84.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody85 = browser.currentScene.createNode("ProtoBody");
let Material86 = browser.currentScene.createNode("Material");
Material86.ambientIntensity = 0.242424;
Material86.diffuseColor = new SFColor(new float[0.392348,0.456,0.417708]);
Material86.shininess = 0.933333;
Material86.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
ProtoBody85.children = new MFNode();

ProtoBody85.children[0] = Material86;

ProtoDeclare84.protoBody = ProtoBody85;

browser.currentScene.children[24] = ProtoDeclare84;

let ProtoDeclare87 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco24" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.253968" diffuseColor="1 0.854922 0" shininess="1" specularColor="0.872449 0.247119 0.254214"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare87.name = "ArtDeco24";
ProtoDeclare87.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare87.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody88 = browser.currentScene.createNode("ProtoBody");
let Material89 = browser.currentScene.createNode("Material");
Material89.ambientIntensity = 0.253968;
Material89.diffuseColor = new SFColor(new float[1,0.854922,0]);
Material89.shininess = 1;
Material89.specularColor = new SFColor(new float[0.872449,0.247119,0.254214]);
ProtoBody88.children = new MFNode();

ProtoBody88.children[0] = Material89;

ProtoDeclare87.protoBody = ProtoBody88;

browser.currentScene.children[25] = ProtoDeclare87;

let ProtoDeclare90 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco25" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.795918 0.505869 0.093315" shininess="0.397959" specularColor="0.923469 0.428866 0.006369"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare90.name = "ArtDeco25";
ProtoDeclare90.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare90.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody91 = browser.currentScene.createNode("ProtoBody");
let Material92 = browser.currentScene.createNode("Material");
Material92.ambientIntensity = 0.25641;
Material92.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material92.shininess = 0.397959;
Material92.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
ProtoBody91.children = new MFNode();

ProtoBody91.children[0] = Material92;

ProtoDeclare90.protoBody = ProtoBody91;

browser.currentScene.children[26] = ProtoDeclare90;

let ProtoDeclare93 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco26" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><!--computed conversion ambientIntensity=2.226234, normalized to 1.0--><ProtoBody><Material ambientIntensity="1" diffuseColor="0.331633 0.296582 0.279057" shininess="0.096939" specularColor="0.311224 0.25183 0.133042"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare93.name = "ArtDeco26";
ProtoDeclare93.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare93.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
//computed conversion ambientIntensity=2.226234, normalized to 1.0
let ProtoBody94 = browser.currentScene.createNode("ProtoBody");
let Material95 = browser.currentScene.createNode("Material");
Material95.ambientIntensity = 1;
Material95.diffuseColor = new SFColor(new float[0.331633,0.296582,0.279057]);
Material95.shininess = 0.096939;
Material95.specularColor = new SFColor(new float[0.311224,0.25183,0.133042]);
ProtoBody94.children = new MFNode();

ProtoBody94.children[0] = Material95;

ProtoDeclare93.protoBody = ProtoBody94;

browser.currentScene.children[27] = ProtoDeclare93;

let ProtoDeclare96 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco27" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.263158" diffuseColor="0.345455 0.163262 0.122622" shininess="0.048649" specularColor="0.212121 0.107475 0"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare96.name = "ArtDeco27";
ProtoDeclare96.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare96.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody97 = browser.currentScene.createNode("ProtoBody");
let Material98 = browser.currentScene.createNode("Material");
Material98.ambientIntensity = 0.263158;
Material98.diffuseColor = new SFColor(new float[0.345455,0.163262,0.122622]);
Material98.shininess = 0.048649;
Material98.specularColor = new SFColor(new float[0.212121,0.107475,0]);
ProtoBody97.children = new MFNode();

ProtoBody97.children[0] = Material98;

ProtoDeclare96.protoBody = ProtoBody97;

browser.currentScene.children[28] = ProtoDeclare96;

let ProtoDeclare99 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco28" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.240506" diffuseColor="0.277281 0.104336 0.0799" shininess="0.09697" specularColor="0.305587 0.141916 0.270572"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare99.name = "ArtDeco28";
ProtoDeclare99.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare99.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody100 = browser.currentScene.createNode("ProtoBody");
let Material101 = browser.currentScene.createNode("Material");
Material101.ambientIntensity = 0.240506;
Material101.diffuseColor = new SFColor(new float[0.277281,0.104336,0.0799]);
Material101.shininess = 0.09697;
Material101.specularColor = new SFColor(new float[0.305587,0.141916,0.270572]);
ProtoBody100.children = new MFNode();

ProtoBody100.children[0] = Material101;

ProtoDeclare99.protoBody = ProtoBody100;

browser.currentScene.children[29] = ProtoDeclare99;

let ProtoDeclare102 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco29" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.215686" diffuseColor="0.087034 0.025888 0" shininess="0.045918" specularColor="0.224138 0.104091 0.104091"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare102.name = "ArtDeco29";
ProtoDeclare102.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare102.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody103 = browser.currentScene.createNode("ProtoBody");
let Material104 = browser.currentScene.createNode("Material");
Material104.ambientIntensity = 0.215686;
Material104.diffuseColor = new SFColor(new float[0.087034,0.025888,0]);
Material104.shininess = 0.045918;
Material104.specularColor = new SFColor(new float[0.224138,0.104091,0.104091]);
ProtoBody103.children = new MFNode();

ProtoBody103.children[0] = Material104;

ProtoDeclare102.protoBody = ProtoBody103;

browser.currentScene.children[30] = ProtoDeclare102;

let ProtoDeclare105 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco30" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0" diffuseColor="0 0 0" shininess="0.081633" specularColor="0.293243 0.297387 0.290421"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare105.name = "ArtDeco30";
ProtoDeclare105.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare105.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody106 = browser.currentScene.createNode("ProtoBody");
let Material107 = browser.currentScene.createNode("Material");
Material107.ambientIntensity = 0;
Material107.diffuseColor = new SFColor(new float[0,0,0]);
Material107.shininess = 0.081633;
Material107.specularColor = new SFColor(new float[0.293243,0.297387,0.290421]);
ProtoBody106.children = new MFNode();

ProtoBody106.children[0] = Material107;

ProtoDeclare105.protoBody = ProtoBody106;

browser.currentScene.children[31] = ProtoDeclare105;

let ProtoDeclare108 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco31" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.236364 0.236364 0.236364" shininess="0.054546" specularColor="0.29697 0.245839 0.295962"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare108.name = "ArtDeco31";
ProtoDeclare108.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare108.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody109 = browser.currentScene.createNode("ProtoBody");
let Material110 = browser.currentScene.createNode("Material");
Material110.ambientIntensity = 0.25641;
Material110.diffuseColor = new SFColor(new float[0.236364,0.236364,0.236364]);
Material110.shininess = 0.054546;
Material110.specularColor = new SFColor(new float[0.29697,0.245839,0.295962]);
ProtoBody109.children = new MFNode();

ProtoBody109.children[0] = Material110;

ProtoDeclare108.protoBody = ProtoBody109;

browser.currentScene.children[32] = ProtoDeclare108;

let ProtoDeclare111 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco32" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.38087 0.382957 0.417708" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare111.name = "ArtDeco32";
ProtoDeclare111.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare111.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody112 = browser.currentScene.createNode("ProtoBody");
let Material113 = browser.currentScene.createNode("Material");
Material113.ambientIntensity = 0.242424;
Material113.diffuseColor = new SFColor(new float[0.38087,0.382957,0.417708]);
Material113.shininess = 0.933333;
Material113.specularColor = new SFColor(new float[0.533333,0.533333,0.533333]);
ProtoBody112.children = new MFNode();

ProtoBody112.children[0] = Material113;

ProtoDeclare111.protoBody = ProtoBody112;

browser.currentScene.children[33] = ProtoDeclare111;

let ProtoDeclare114 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco33" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.230089" diffuseColor="0.610811 0.610811 0.610811" shininess="0.897297" specularColor="0.767568 0.756757 0.764964"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare114.name = "ArtDeco33";
ProtoDeclare114.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare114.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody115 = browser.currentScene.createNode("ProtoBody");
let Material116 = browser.currentScene.createNode("Material");
Material116.ambientIntensity = 0.230089;
Material116.diffuseColor = new SFColor(new float[0.610811,0.610811,0.610811]);
Material116.shininess = 0.897297;
Material116.specularColor = new SFColor(new float[0.767568,0.756757,0.764964]);
ProtoBody115.children = new MFNode();

ProtoBody115.children[0] = Material116;

ProtoDeclare114.protoBody = ProtoBody115;

browser.currentScene.children[34] = ProtoDeclare114;

let ProtoDeclare117 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco34" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" shininess="0" specularColor="0.2 0.2 0.2"></Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare117.name = "ArtDeco34";
ProtoDeclare117.appinfo = "UniversalMediaMaterials prototype";
ProtoDeclare117.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials";
let ProtoBody118 = browser.currentScene.createNode("ProtoBody");
let Material119 = browser.currentScene.createNode("Material");
Material119.ambientIntensity = 0.25;
Material119.shininess = 0;
Material119.specularColor = new SFColor(new float[0.2,0.2,0.2]);
ProtoBody118.children = new MFNode();

ProtoBody118.children[0] = Material119;

ProtoDeclare117.protoBody = ProtoBody118;

browser.currentScene.children[35] = ProtoDeclare117;

let Anchor120 = browser.currentScene.createNode("Anchor");
Anchor120.description = "ArtDecoPrototypeExample";
Anchor120.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor120.url = new MFString(new java.lang.String["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"]);
let Shape121 = browser.currentScene.createNode("Shape");
let Appearance122 = browser.currentScene.createNode("Appearance");
let Material123 = browser.currentScene.createNode("Material");
Material123.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

let Text124 = browser.currentScene.createNode("Text");
Text124.string = new MFString(new java.lang.String["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"]);
let FontStyle125 = browser.currentScene.createNode("FontStyle");
FontStyle125.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle125.size = 0.8;
Text124.fontStyle = FontStyle125;

Shape121.geometry = Text124;

Anchor120.children = new MFNode();

Anchor120.children[0] = Shape121;

browser.currentScene.children[36] = Anchor120;

