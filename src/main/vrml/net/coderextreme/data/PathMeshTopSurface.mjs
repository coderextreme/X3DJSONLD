const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "PathMeshTopSurface.x3d");
scene.addMetaData("description", "Pathway for HAnim scene Winter and Spring.");
scene.addMetaData("creator", "Carol McDonald");
scene.addMetaData("translator", "Joe Williams and Don Brutzman");
scene.addMetaData("created", "27 May 2023");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:53 GMT");
scene.addMetaData("source", "originals/PathMeshTopSurface.x3dv");
scene.addMetaData("reference", "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d");
scene.addMetaData("generator", "tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting");
await browser .loadComponents (scene);
let NavigationInfo13 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo13.DEF = "pathTop";
NavigationInfo13.headlight = False;
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo13;

let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.ambientIntensity = 0;
Material16.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material16.shininess = 0;
material = Material16;

appearance = Appearance15;

let IndexedFaceSet17 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet17.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet17.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.point = new X3D.MFVec3f([26.39594,0.075,25.67472,26.00195,0.075,25.75502,26.25982,0.075,25.00694,25.86584,0.075,25.08724,26.1237,0.075,24.33916,25.72972,0.075,24.41947]);
coord = Coordinate18;

geometry = IndexedFaceSet17;

browser.currentScene.children[1] = Shape14;

let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.ambientIntensity = 0;
Material21.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material21.shininess = 0;
material = Material21;

appearance = Appearance20;

let IndexedFaceSet22 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet22.solid = False;
IndexedFaceSet22.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet22.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate23 = browser.currentScene.createNode("Coordinate");
Coordinate23.point = new X3D.MFVec3f([26.39918,0.075,23.57728,26.53329,0.075,24.23526,25.5916,0.075,23.74189,25.72572,0.075,24.39987]);
coord = Coordinate23;

geometry = IndexedFaceSet22;

browser.currentScene.children[2] = Shape19;

let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.ambientIntensity = 0;
Material26.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material26.shininess = 0;
material = Material26;

appearance = Appearance25;

let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.solid = False;
IndexedFaceSet27.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet27.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new X3D.MFVec3f([25.58761,0.075,23.72229,25.45349,0.075,23.06431,26.39518,0.075,23.55768,26.26106,0.075,22.8997]);
coord = Coordinate28;

geometry = IndexedFaceSet27;

browser.currentScene.children[3] = Shape24;

let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.ambientIntensity = 0;
Material31.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material31.shininess = 0;
material = Material31;

appearance = Appearance30;

let IndexedFaceSet32 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet32.solid = False;
IndexedFaceSet32.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet32.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new X3D.MFVec3f([25.84348,0.075,22.96441,25.4495,0.075,23.04472,25.57125,0.075,21.62885,25.17726,0.075,21.70916]);
coord = Coordinate33;

geometry = IndexedFaceSet32;

browser.currentScene.children[4] = Shape29;

let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.ambientIntensity = 0;
Material36.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material36.shininess = 0;
material = Material36;

appearance = Appearance35;

let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.solid = False;
IndexedFaceSet37.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet37.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new X3D.MFVec3f([25.72724,0.075,28.63393,25.59312,0.075,27.97596,26.53481,0.075,28.46932,26.40069,0.075,27.81134]);
coord = Coordinate38;

geometry = IndexedFaceSet37;

browser.currentScene.children[5] = Shape34;

let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.ambientIntensity = 0;
Material41.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material41.shininess = 0;
material = Material41;

appearance = Appearance40;

let IndexedFaceSet42 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet42.solid = False;
IndexedFaceSet42.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet42.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate43 = browser.currentScene.createNode("Coordinate");
Coordinate43.point = new X3D.MFVec3f([26.26258,0.075,27.13377,26.3967,0.075,27.79175,25.85879,0.075,27.21607,25.99291,0.075,27.87405,25.45501,0.075,27.29838,25.58913,0.075,27.95636]);
coord = Coordinate43;

geometry = IndexedFaceSet42;

browser.currentScene.children[6] = Shape39;

let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.ambientIntensity = 0;
Material46.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material46.shininess = 0;
material = Material46;

appearance = Appearance45;

let IndexedFaceSet47 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet47.solid = False;
IndexedFaceSet47.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet47.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate48 = browser.currentScene.createNode("Coordinate");
Coordinate48.point = new X3D.MFVec3f([25.59236,0.075,25.85892,25.78936,0.075,25.81877,25.98635,0.075,25.77861,25.72848,0.075,26.5267,25.92547,0.075,26.48655,26.12247,0.075,26.44639,25.8646,0.075,27.19448,26.06159,0.075,27.15432,26.25858,0.075,27.11417]);
coord = Coordinate48;

geometry = IndexedFaceSet47;

browser.currentScene.children[7] = Shape44;

let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.ambientIntensity = 0;
Material51.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material51.shininess = 0;
material = Material51;

appearance = Appearance50;

let IndexedFaceSet52 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet52.solid = False;
IndexedFaceSet52.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet52.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new X3D.MFVec3f([25.17878,0.075,25.94323,25.57277,0.075,25.86292,25.3149,0.075,26.611,25.70888,0.075,26.53069,25.45101,0.075,27.27878,25.845,0.075,27.19847]);
coord = Coordinate53;

geometry = IndexedFaceSet52;

browser.currentScene.children[8] = Shape49;

let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.ambientIntensity = 0;
Material56.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material56.shininess = 0;
material = Material56;

appearance = Appearance55;

let IndexedFaceSet57 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet57.solid = False;
IndexedFaceSet57.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet57.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new X3D.MFVec3f([25.17478,0.075,25.92363,25.04066,0.075,25.26565,25.98236,0.075,25.75902,25.84824,0.075,25.10104]);
coord = Coordinate58;

geometry = IndexedFaceSet57;

browser.currentScene.children[9] = Shape54;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.ambientIntensity = 0;
Material61.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material61.shininess = 0;
material = Material61;

appearance = Appearance60;

let IndexedFaceSet62 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet62.solid = False;
IndexedFaceSet62.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet62.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new X3D.MFVec3f([25.03667,0.075,25.24605,24.90255,0.075,24.58807,25.44046,0.075,25.16375,25.30634,0.075,24.50577,25.84424,0.075,25.08144,25.71012,0.075,24.42346]);
coord = Coordinate63;

geometry = IndexedFaceSet62;

browser.currentScene.children[10] = Shape59;

let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.ambientIntensity = 0;
Material66.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material66.shininess = 0;
material = Material66;

appearance = Appearance65;

let IndexedFaceSet67 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet67.solid = False;
IndexedFaceSet67.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet67.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate68 = browser.currentScene.createNode("Coordinate");
Coordinate68.point = new X3D.MFVec3f([25.03991,0.075,23.14862,25.43389,0.075,23.06831,25.17602,0.075,23.81639,25.57001,0.075,23.73609,25.31214,0.075,24.48417,25.70613,0.075,24.40386]);
coord = Coordinate68;

geometry = IndexedFaceSet67;

browser.currentScene.children[11] = Shape64;

let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.ambientIntensity = 0;
Material71.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material71.shininess = 0;
material = Material71;

appearance = Appearance70;

let IndexedFaceSet72 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet72.solid = False;
IndexedFaceSet72.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet72.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate73 = browser.currentScene.createNode("Coordinate");
Coordinate73.point = new X3D.MFVec3f([24.62632,0.075,23.23292,25.02031,0.075,23.15261,24.89856,0.075,24.56848,25.29254,0.075,24.48817]);
coord = Coordinate73;

geometry = IndexedFaceSet72;

browser.currentScene.children[12] = Shape69;

let Shape74 = browser.currentScene.createNode("Shape");
let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.ambientIntensity = 0;
Material76.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material76.shininess = 0;
material = Material76;

appearance = Appearance75;

let IndexedFaceSet77 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet77.solid = False;
IndexedFaceSet77.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet77.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new X3D.MFVec3f([24.62233,0.075,23.21332,24.48821,0.075,22.55534,25.4299,0.075,23.04871,25.29578,0.075,22.39073]);
coord = Coordinate78;

geometry = IndexedFaceSet77;

browser.currentScene.children[13] = Shape74;

let Shape79 = browser.currentScene.createNode("Shape");
let Appearance80 = browser.currentScene.createNode("Appearance");
let Material81 = browser.currentScene.createNode("Material");
Material81.ambientIntensity = 0;
Material81.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material81.shininess = 0;
material = Material81;

appearance = Appearance80;

let IndexedFaceSet82 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet82.solid = False;
IndexedFaceSet82.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet82.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate83 = browser.currentScene.createNode("Coordinate");
Coordinate83.point = new X3D.MFVec3f([24.48421,0.075,22.53575,24.3501,0.075,21.87777,25.29178,0.075,22.37114,25.15767,0.075,21.71316]);
coord = Coordinate83;

geometry = IndexedFaceSet82;

browser.currentScene.children[14] = Shape79;

let Shape84 = browser.currentScene.createNode("Shape");
let Appearance85 = browser.currentScene.createNode("Appearance");
let Material86 = browser.currentScene.createNode("Material");
Material86.ambientIntensity = 0;
Material86.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material86.shininess = 0;
material = Material86;

appearance = Appearance85;

let IndexedFaceSet87 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet87.solid = False;
IndexedFaceSet87.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet87.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new X3D.MFVec3f([24.48745,0.075,20.43831,24.88144,0.075,20.358,24.75968,0.075,21.77387,25.15367,0.075,21.69356]);
coord = Coordinate88;

geometry = IndexedFaceSet87;

browser.currentScene.children[15] = Shape84;

let Shape89 = browser.currentScene.createNode("Shape");
let Appearance90 = browser.currentScene.createNode("Appearance");
let Material91 = browser.currentScene.createNode("Material");
Material91.ambientIntensity = 0;
Material91.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material91.shininess = 0;
material = Material91;

appearance = Appearance90;

let IndexedFaceSet92 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet92.solid = False;
IndexedFaceSet92.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet92.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate93 = browser.currentScene.createNode("Coordinate");
Coordinate93.point = new X3D.MFVec3f([24.74009,0.075,21.77786,24.3461,0.075,21.85817,24.46785,0.075,20.44231,24.07387,0.075,20.52261]);
coord = Coordinate93;

geometry = IndexedFaceSet92;

browser.currentScene.children[16] = Shape89;

let Shape94 = browser.currentScene.createNode("Shape");
let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Material96.ambientIntensity = 0;
Material96.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material96.shininess = 0;
material = Material96;

appearance = Appearance95;

let IndexedFaceSet97 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet97.solid = False;
IndexedFaceSet97.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet97.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new X3D.MFVec3f([25.1763,0.075,30.15769,25.04218,0.075,29.49971,25.58009,0.075,30.07539,25.44597,0.075,29.41741,25.98387,0.075,29.99308,25.84975,0.075,29.3351]);
coord = Coordinate98;

geometry = IndexedFaceSet97;

browser.currentScene.children[17] = Shape94;

let Shape99 = browser.currentScene.createNode("Shape");
let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.ambientIntensity = 0;
Material101.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material101.shininess = 0;
material = Material101;

appearance = Appearance100;

let IndexedFaceSet102 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet102.solid = False;
IndexedFaceSet102.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet102.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new X3D.MFVec3f([25.03819,0.075,29.48012,24.90407,0.075,28.82214,25.44197,0.075,29.39781,25.30785,0.075,28.73983,25.84576,0.075,29.31551,25.71164,0.075,28.65753]);
coord = Coordinate103;

geometry = IndexedFaceSet102;

browser.currentScene.children[18] = Shape99;

let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.ambientIntensity = 0;
Material106.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material106.shininess = 0;
material = Material106;

appearance = Appearance105;

let IndexedFaceSet107 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet107.solid = False;
IndexedFaceSet107.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet107.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new X3D.MFVec3f([25.04142,0.075,27.38268,25.43541,0.075,27.30237,25.17754,0.075,28.05046,25.57153,0.075,27.97015,25.31366,0.075,28.71824,25.70764,0.075,28.63793]);
coord = Coordinate108;

geometry = IndexedFaceSet107;

browser.currentScene.children[19] = Shape104;

let Shape109 = browser.currentScene.createNode("Shape");
let Appearance110 = browser.currentScene.createNode("Appearance");
let Material111 = browser.currentScene.createNode("Material");
Material111.ambientIntensity = 0;
Material111.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material111.shininess = 0;
material = Material111;

appearance = Appearance110;

let IndexedFaceSet112 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet112.solid = False;
IndexedFaceSet112.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet112.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate113 = browser.currentScene.createNode("Coordinate");
Coordinate113.point = new X3D.MFVec3f([24.62784,0.075,27.46698,24.82483,0.075,27.42683,25.02183,0.075,27.38668,24.76396,0.075,28.13476,24.96095,0.075,28.09461,25.15794,0.075,28.05445,24.90007,0.075,28.80254,25.09706,0.075,28.76239,25.29406,0.075,28.72223]);
coord = Coordinate113;

geometry = IndexedFaceSet112;

browser.currentScene.children[20] = Shape109;

let Shape114 = browser.currentScene.createNode("Shape");
let Appearance115 = browser.currentScene.createNode("Appearance");
let Material116 = browser.currentScene.createNode("Material");
Material116.ambientIntensity = 0;
Material116.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material116.shininess = 0;
material = Material116;

appearance = Appearance115;

let IndexedFaceSet117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet117.solid = False;
IndexedFaceSet117.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet117.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate118 = browser.currentScene.createNode("Coordinate");
Coordinate118.point = new X3D.MFVec3f([24.62384,0.075,27.44739,24.55679,0.075,27.1184,24.48973,0.075,26.78941,25.43142,0.075,27.28278,25.36436,0.075,26.95379,25.2973,0.075,26.6248]);
coord = Coordinate118;

geometry = IndexedFaceSet117;

browser.currentScene.children[21] = Shape114;

let Shape119 = browser.currentScene.createNode("Shape");
let Appearance120 = browser.currentScene.createNode("Appearance");
let Material121 = browser.currentScene.createNode("Material");
Material121.ambientIntensity = 0;
Material121.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material121.shininess = 0;
material = Material121;

appearance = Appearance120;

let IndexedFaceSet122 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet122.solid = False;
IndexedFaceSet122.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet122.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.point = new X3D.MFVec3f([24.48573,0.075,26.76981,24.35161,0.075,26.11183,25.2933,0.075,26.6052,25.15918,0.075,25.94722]);
coord = Coordinate123;

geometry = IndexedFaceSet122;

browser.currentScene.children[22] = Shape119;

let Shape124 = browser.currentScene.createNode("Shape");
let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.ambientIntensity = 0;
Material126.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material126.shininess = 0;
material = Material126;

appearance = Appearance125;

let IndexedFaceSet127 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet127.solid = False;
IndexedFaceSet127.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet127.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate128 = browser.currentScene.createNode("Coordinate");
Coordinate128.point = new X3D.MFVec3f([25.15519,0.075,25.92762,24.7612,0.075,26.00793,24.88295,0.075,24.59207,24.48897,0.075,24.67238]);
coord = Coordinate128;

geometry = IndexedFaceSet127;

browser.currentScene.children[23] = Shape124;

let Shape129 = browser.currentScene.createNode("Shape");
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.ambientIntensity = 0;
Material131.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material131.shininess = 0;
material = Material131;

appearance = Appearance130;

let IndexedFaceSet132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet132.solid = False;
IndexedFaceSet132.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet132.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new X3D.MFVec3f([24.07538,0.075,24.75668,24.46937,0.075,24.67637,24.34762,0.075,26.09224,24.7416,0.075,26.01193]);
coord = Coordinate133;

geometry = IndexedFaceSet132;

browser.currentScene.children[24] = Shape129;

let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.ambientIntensity = 0;
Material136.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material136.shininess = 0;
material = Material136;

appearance = Appearance135;

let IndexedFaceSet137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet137.solid = False;
IndexedFaceSet137.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet137.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate138 = browser.currentScene.createNode("Coordinate");
Coordinate138.point = new X3D.MFVec3f([24.07139,0.075,24.73708,23.93727,0.075,24.0791,24.87896,0.075,24.57247,24.74484,0.075,23.91449]);
coord = Coordinate138;

geometry = IndexedFaceSet137;

browser.currentScene.children[25] = Shape134;

let Shape139 = browser.currentScene.createNode("Shape");
let Appearance140 = browser.currentScene.createNode("Appearance");
let Material141 = browser.currentScene.createNode("Material");
Material141.ambientIntensity = 0;
Material141.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material141.shininess = 0;
material = Material141;

appearance = Appearance140;

let IndexedFaceSet142 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet142.solid = False;
IndexedFaceSet142.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet142.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate143 = browser.currentScene.createNode("Coordinate");
Coordinate143.point = new X3D.MFVec3f([24.60673,0.075,23.23692,24.74084,0.075,23.89489,24.20294,0.075,23.31922,24.33706,0.075,23.9772,23.79915,0.075,23.40153,23.93328,0.075,24.05951]);
coord = Coordinate143;

geometry = IndexedFaceSet142;

browser.currentScene.children[26] = Shape139;

let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.ambientIntensity = 0;
Material146.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material146.shininess = 0;
material = Material146;

appearance = Appearance145;

let IndexedFaceSet147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet147.solid = False;
IndexedFaceSet147.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet147.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new X3D.MFVec3f([24.60273,0.075,23.21732,24.40574,0.075,23.25747,24.20874,0.075,23.29763,24.46661,0.075,22.54954,24.26962,0.075,22.58969,24.07263,0.075,22.62985,24.3305,0.075,21.88176,24.1335,0.075,21.92192,23.93651,0.075,21.96207]);
coord = Coordinate148;

geometry = IndexedFaceSet147;

browser.currentScene.children[27] = Shape144;

let Shape149 = browser.currentScene.createNode("Shape");
let Appearance150 = browser.currentScene.createNode("Appearance");
let Material151 = browser.currentScene.createNode("Material");
Material151.ambientIntensity = 0;
Material151.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material151.shininess = 0;
material = Material151;

appearance = Appearance150;

let IndexedFaceSet152 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet152.solid = False;
IndexedFaceSet152.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet152.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new X3D.MFVec3f([23.52293,0.075,22.04637,23.91691,0.075,21.96606,23.65904,0.075,22.71415,24.05303,0.075,22.63384,23.79516,0.075,23.38193,24.18915,0.075,23.30162]);
coord = Coordinate153;

geometry = IndexedFaceSet152;

browser.currentScene.children[28] = Shape149;

let Shape154 = browser.currentScene.createNode("Shape");
let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
Material156.ambientIntensity = 0;
Material156.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material156.shininess = 0;
material = Material156;

appearance = Appearance155;

let IndexedFaceSet157 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet157.solid = False;
IndexedFaceSet157.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet157.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new X3D.MFVec3f([23.51893,0.075,22.02678,23.38481,0.075,21.3688,24.3265,0.075,21.86217,24.19238,0.075,21.20419]);
coord = Coordinate158;

geometry = IndexedFaceSet157;

browser.currentScene.children[29] = Shape154;

let Shape159 = browser.currentScene.createNode("Shape");
let Appearance160 = browser.currentScene.createNode("Appearance");
let Material161 = browser.currentScene.createNode("Material");
Material161.ambientIntensity = 0;
Material161.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material161.shininess = 0;
material = Material161;

appearance = Appearance160;

let IndexedFaceSet162 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet162.solid = False;
IndexedFaceSet162.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet162.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate163 = browser.currentScene.createNode("Coordinate");
Coordinate163.point = new X3D.MFVec3f([24.05427,0.075,20.52661,24.18839,0.075,21.18459,23.2467,0.075,20.69122,23.38082,0.075,21.3492]);
coord = Coordinate163;

geometry = IndexedFaceSet162;

browser.currentScene.children[30] = Shape159;

let Shape164 = browser.currentScene.createNode("Shape");
let Appearance165 = browser.currentScene.createNode("Appearance");
let Material166 = browser.currentScene.createNode("Material");
Material166.ambientIntensity = 0;
Material166.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material166.shininess = 0;
material = Material166;

appearance = Appearance165;

let IndexedFaceSet167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet167.solid = False;
IndexedFaceSet167.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet167.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.point = new X3D.MFVec3f([24.05028,0.075,20.50701,23.65629,0.075,20.58732,23.91416,0.075,19.83923,23.52017,0.075,19.91954,23.77804,0.075,19.17146,23.38405,0.075,19.25176]);
coord = Coordinate168;

geometry = IndexedFaceSet167;

browser.currentScene.children[31] = Shape164;

let Shape169 = browser.currentScene.createNode("Shape");
let Appearance170 = browser.currentScene.createNode("Appearance");
let Material171 = browser.currentScene.createNode("Material");
Material171.ambientIntensity = 0;
Material171.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material171.shininess = 0;
material = Material171;

appearance = Appearance170;

let IndexedFaceSet172 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet172.solid = False;
IndexedFaceSet172.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet172.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate173 = browser.currentScene.createNode("Coordinate");
Coordinate173.point = new X3D.MFVec3f([22.97047,0.075,19.33607,23.36446,0.075,19.25576,23.2427,0.075,20.67162,23.63669,0.075,20.59131]);
coord = Coordinate173;

geometry = IndexedFaceSet172;

browser.currentScene.children[32] = Shape169;

let Shape174 = browser.currentScene.createNode("Shape");
let Appearance175 = browser.currentScene.createNode("Appearance");
let Material176 = browser.currentScene.createNode("Material");
Material176.ambientIntensity = 0;
Material176.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material176.shininess = 0;
material = Material176;

appearance = Appearance175;

let IndexedFaceSet177 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet177.solid = False;
IndexedFaceSet177.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet177.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new X3D.MFVec3f([24.49048,0.075,28.90644,24.88447,0.075,28.82613,24.76272,0.075,30.242,25.1567,0.075,30.16169]);
coord = Coordinate178;

geometry = IndexedFaceSet177;

browser.currentScene.children[33] = Shape174;

let Shape179 = browser.currentScene.createNode("Shape");
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.ambientIntensity = 0;
Material181.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material181.shininess = 0;
material = Material181;

appearance = Appearance180;

let IndexedFaceSet182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet182.solid = False;
IndexedFaceSet182.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet182.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new X3D.MFVec3f([24.0769,0.075,28.99074,24.47089,0.075,28.91043,24.34913,0.075,30.3263,24.74312,0.075,30.24599]);
coord = Coordinate183;

geometry = IndexedFaceSet182;

browser.currentScene.children[34] = Shape179;

let Shape184 = browser.currentScene.createNode("Shape");
let Appearance185 = browser.currentScene.createNode("Appearance");
let Material186 = browser.currentScene.createNode("Material");
Material186.ambientIntensity = 0;
Material186.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material186.shininess = 0;
material = Material186;

appearance = Appearance185;

let IndexedFaceSet187 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet187.solid = False;
IndexedFaceSet187.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet187.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate188 = browser.currentScene.createNode("Coordinate");
Coordinate188.point = new X3D.MFVec3f([24.0729,0.075,28.97115,24.00584,0.075,28.64216,23.93879,0.075,28.31317,24.47669,0.075,28.88884,24.40963,0.075,28.55985,24.34257,0.075,28.23086,24.88048,0.075,28.80654,24.81342,0.075,28.47754,24.74636,0.075,28.14856]);
coord = Coordinate188;

geometry = IndexedFaceSet187;

browser.currentScene.children[35] = Shape184;

let Shape189 = browser.currentScene.createNode("Shape");
let Appearance190 = browser.currentScene.createNode("Appearance");
let Material191 = browser.currentScene.createNode("Material");
Material191.ambientIntensity = 0;
Material191.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material191.shininess = 0;
material = Material191;

appearance = Appearance190;

let IndexedFaceSet192 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet192.solid = False;
IndexedFaceSet192.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet192.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.point = new X3D.MFVec3f([23.93479,0.075,28.29357,23.80067,0.075,27.63559,24.33858,0.075,28.21126,24.20446,0.075,27.55329,24.74236,0.075,28.12896,24.60824,0.075,27.47098]);
coord = Coordinate193;

geometry = IndexedFaceSet192;

browser.currentScene.children[36] = Shape189;

let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.ambientIntensity = 0;
Material196.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material196.shininess = 0;
material = Material196;

appearance = Appearance195;

let IndexedFaceSet197 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet197.solid = False;
IndexedFaceSet197.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet197.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new X3D.MFVec3f([23.93803,0.075,26.19613,24.13502,0.075,26.15598,24.33201,0.075,26.11583,24.07414,0.075,26.86391,24.27114,0.075,26.82376,24.46813,0.075,26.7836,24.21026,0.075,27.53169,24.40725,0.075,27.49154,24.60425,0.075,27.45138]);
coord = Coordinate198;

geometry = IndexedFaceSet197;

browser.currentScene.children[37] = Shape194;

let Shape199 = browser.currentScene.createNode("Shape");
let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.ambientIntensity = 0;
Material201.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material201.shininess = 0;
material = Material201;

appearance = Appearance200;

let IndexedFaceSet202 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet202.solid = False;
IndexedFaceSet202.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet202.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new X3D.MFVec3f([23.52444,0.075,26.28044,23.72144,0.075,26.24028,23.91843,0.075,26.20013,23.66056,0.075,26.94822,23.85755,0.075,26.90806,24.05455,0.075,26.86791,23.79668,0.075,27.61599,23.99367,0.075,27.57584,24.19066,0.075,27.53568]);
coord = Coordinate203;

geometry = IndexedFaceSet202;

browser.currentScene.children[38] = Shape199;

let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.ambientIntensity = 0;
Material206.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material206.shininess = 0;
material = Material206;

appearance = Appearance205;

let IndexedFaceSet207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet207.solid = False;
IndexedFaceSet207.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet207.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.point = new X3D.MFVec3f([23.52045,0.075,26.26084,23.38633,0.075,25.60286,24.32802,0.075,26.09623,24.1939,0.075,25.43825]);
coord = Coordinate208;

geometry = IndexedFaceSet207;

browser.currentScene.children[39] = Shape204;

let Shape209 = browser.currentScene.createNode("Shape");
let Appearance210 = browser.currentScene.createNode("Appearance");
let Material211 = browser.currentScene.createNode("Material");
Material211.ambientIntensity = 0;
Material211.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material211.shininess = 0;
material = Material211;

appearance = Appearance210;

let IndexedFaceSet212 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet212.solid = False;
IndexedFaceSet212.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet212.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new X3D.MFVec3f([23.38233,0.075,25.58327,23.24821,0.075,24.92529,24.18991,0.075,25.41865,24.05579,0.075,24.76067]);
coord = Coordinate213;

geometry = IndexedFaceSet212;

browser.currentScene.children[40] = Shape209;

let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
let Material216 = browser.currentScene.createNode("Material");
Material216.ambientIntensity = 0;
Material216.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material216.shininess = 0;
material = Material216;

appearance = Appearance215;

let IndexedFaceSet217 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet217.solid = False;
IndexedFaceSet217.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet217.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate218 = browser.currentScene.createNode("Coordinate");
Coordinate218.point = new X3D.MFVec3f([23.38557,0.075,23.48583,23.77956,0.075,23.40552,23.52169,0.075,24.15361,23.91567,0.075,24.0733,23.6578,0.075,24.82138,24.05179,0.075,24.74108]);
coord = Coordinate218;

geometry = IndexedFaceSet217;

browser.currentScene.children[41] = Shape214;

let Shape219 = browser.currentScene.createNode("Shape");
let Appearance220 = browser.currentScene.createNode("Appearance");
let Material221 = browser.currentScene.createNode("Material");
Material221.ambientIntensity = 0;
Material221.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material221.shininess = 0;
material = Material221;

appearance = Appearance220;

let IndexedFaceSet222 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet222.solid = False;
IndexedFaceSet222.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet222.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate223 = browser.currentScene.createNode("Coordinate");
Coordinate223.point = new X3D.MFVec3f([22.97199,0.075,23.57013,23.36597,0.075,23.48982,23.1081,0.075,24.23791,23.50209,0.075,24.1576,23.24422,0.075,24.90569,23.63821,0.075,24.82538]);
coord = Coordinate223;

geometry = IndexedFaceSet222;

browser.currentScene.children[42] = Shape219;

let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.ambientIntensity = 0;
Material226.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material226.shininess = 0;
material = Material226;

appearance = Appearance225;

let IndexedFaceSet227 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet227.solid = False;
IndexedFaceSet227.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet227.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new X3D.MFVec3f([22.96799,0.075,23.55054,22.83387,0.075,22.89256,23.77556,0.075,23.38592,23.64144,0.075,22.72794]);
coord = Coordinate228;

geometry = IndexedFaceSet227;

browser.currentScene.children[43] = Shape224;

let Shape229 = browser.currentScene.createNode("Shape");
let Appearance230 = browser.currentScene.createNode("Appearance");
let Material231 = browser.currentScene.createNode("Material");
Material231.ambientIntensity = 0;
Material231.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material231.shininess = 0;
material = Material231;

appearance = Appearance230;

let IndexedFaceSet232 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet232.solid = False;
IndexedFaceSet232.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet232.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new X3D.MFVec3f([22.82988,0.075,22.87296,22.69576,0.075,22.21498,23.63745,0.075,22.70835,23.50333,0.075,22.05037]);
coord = Coordinate233;

geometry = IndexedFaceSet232;

browser.currentScene.children[44] = Shape229;

let Shape234 = browser.currentScene.createNode("Shape");
let Appearance235 = browser.currentScene.createNode("Appearance");
let Material236 = browser.currentScene.createNode("Material");
Material236.ambientIntensity = 0;
Material236.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material236.shininess = 0;
material = Material236;

appearance = Appearance235;

let IndexedFaceSet237 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet237.solid = False;
IndexedFaceSet237.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet237.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate238 = browser.currentScene.createNode("Coordinate");
Coordinate238.point = new X3D.MFVec3f([22.83311,0.075,20.77552,23.2271,0.075,20.69522,23.10535,0.075,22.11108,23.49934,0.075,22.03077]);
coord = Coordinate238;

geometry = IndexedFaceSet237;

browser.currentScene.children[45] = Shape234;

let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.ambientIntensity = 0;
Material241.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material241.shininess = 0;
material = Material241;

appearance = Appearance240;

let IndexedFaceSet242 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet242.solid = False;
IndexedFaceSet242.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet242.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate243 = browser.currentScene.createNode("Coordinate");
Coordinate243.point = new X3D.MFVec3f([22.41953,0.075,20.85983,22.81352,0.075,20.77952,22.69176,0.075,22.19538,23.08575,0.075,22.11507]);
coord = Coordinate243;

geometry = IndexedFaceSet242;

browser.currentScene.children[46] = Shape239;

let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.ambientIntensity = 0;
Material246.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material246.shininess = 0;
material = Material246;

appearance = Appearance245;

let IndexedFaceSet247 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet247.solid = False;
IndexedFaceSet247.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet247.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new X3D.MFVec3f([22.41554,0.075,20.84023,22.28142,0.075,20.18225,23.22311,0.075,20.67562,23.08899,0.075,20.01764]);
coord = Coordinate248;

geometry = IndexedFaceSet247;

browser.currentScene.children[47] = Shape244;

let Shape249 = browser.currentScene.createNode("Shape");
let Appearance250 = browser.currentScene.createNode("Appearance");
let Material251 = browser.currentScene.createNode("Material");
Material251.ambientIntensity = 0;
Material251.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material251.shininess = 0;
material = Material251;

appearance = Appearance250;

let IndexedFaceSet252 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet252.solid = False;
IndexedFaceSet252.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet252.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate253 = browser.currentScene.createNode("Coordinate");
Coordinate253.point = new X3D.MFVec3f([22.27742,0.075,20.16265,22.1433,0.075,19.50467,23.08499,0.075,19.99804,22.95087,0.075,19.34006]);
coord = Coordinate253;

geometry = IndexedFaceSet252;

browser.currentScene.children[48] = Shape249;

let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.ambientIntensity = 0;
Material256.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material256.shininess = 0;
material = Material256;

appearance = Appearance255;

let IndexedFaceSet257 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet257.solid = False;
IndexedFaceSet257.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet257.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new X3D.MFVec3f([22.28066,0.075,18.06522,22.67465,0.075,17.98491,22.41678,0.075,18.733,22.81076,0.075,18.65269,22.55289,0.075,19.40077,22.94688,0.075,19.32047]);
coord = Coordinate258;

geometry = IndexedFaceSet257;

browser.currentScene.children[49] = Shape254;

let Shape259 = browser.currentScene.createNode("Shape");
let Appearance260 = browser.currentScene.createNode("Appearance");
let Material261 = browser.currentScene.createNode("Material");
Material261.ambientIntensity = 0;
Material261.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material261.shininess = 0;
material = Material261;

appearance = Appearance260;

let IndexedFaceSet262 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet262.solid = False;
IndexedFaceSet262.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet262.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate263 = browser.currentScene.createNode("Coordinate");
Coordinate263.point = new X3D.MFVec3f([21.86707,0.075,18.14952,22.26106,0.075,18.06921,22.13931,0.075,19.48508,22.53329,0.075,19.40477]);
coord = Coordinate263;

geometry = IndexedFaceSet262;

browser.currentScene.children[50] = Shape259;

let Shape264 = browser.currentScene.createNode("Shape");
let Appearance265 = browser.currentScene.createNode("Appearance");
let Material266 = browser.currentScene.createNode("Material");
Material266.ambientIntensity = 0;
Material266.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material266.shininess = 0;
material = Material266;

appearance = Appearance265;

let IndexedFaceSet267 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet267.solid = False;
IndexedFaceSet267.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet267.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate268 = browser.currentScene.createNode("Coordinate");
Coordinate268.point = new X3D.MFVec3f([24.0573,0.075,28.99474,24.19142,0.075,29.65272,23.24973,0.075,29.15935,23.38385,0.075,29.81733]);
coord = Coordinate268;

geometry = IndexedFaceSet267;

browser.currentScene.children[51] = Shape264;

let Shape269 = browser.currentScene.createNode("Shape");
let Appearance270 = browser.currentScene.createNode("Appearance");
let Material271 = browser.currentScene.createNode("Material");
Material271.ambientIntensity = 0;
Material271.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material271.shininess = 0;
material = Material271;

appearance = Appearance270;

let IndexedFaceSet272 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet272.solid = False;
IndexedFaceSet272.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet272.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate273 = browser.currentScene.createNode("Coordinate");
Coordinate273.point = new X3D.MFVec3f([24.05331,0.075,28.97514,23.85631,0.075,29.0153,23.65932,0.075,29.05545,23.91719,0.075,28.30736,23.7202,0.075,28.34752,23.5232,0.075,28.38767,23.78107,0.075,27.63959,23.58408,0.075,27.67974,23.38709,0.075,27.71989]);
coord = Coordinate273;

geometry = IndexedFaceSet272;

browser.currentScene.children[52] = Shape269;

let Shape274 = browser.currentScene.createNode("Shape");
let Appearance275 = browser.currentScene.createNode("Appearance");
let Material276 = browser.currentScene.createNode("Material");
Material276.ambientIntensity = 0;
Material276.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material276.shininess = 0;
material = Material276;

appearance = Appearance275;

let IndexedFaceSet277 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet277.solid = False;
IndexedFaceSet277.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet277.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate278 = browser.currentScene.createNode("Coordinate");
Coordinate278.point = new X3D.MFVec3f([23.63972,0.075,29.05944,23.24574,0.075,29.13975,23.50361,0.075,28.39167,23.10962,0.075,28.47198,23.36749,0.075,27.72389,22.9735,0.075,27.8042]);
coord = Coordinate278;

geometry = IndexedFaceSet277;

browser.currentScene.children[53] = Shape274;

let Shape279 = browser.currentScene.createNode("Shape");
let Appearance280 = browser.currentScene.createNode("Appearance");
let Material281 = browser.currentScene.createNode("Material");
Material281.ambientIntensity = 0;
Material281.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material281.shininess = 0;
material = Material281;

appearance = Appearance280;

let IndexedFaceSet282 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet282.solid = False;
IndexedFaceSet282.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet282.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate283 = browser.currentScene.createNode("Coordinate");
Coordinate283.point = new X3D.MFVec3f([23.64296,0.075,26.96201,23.77708,0.075,27.61999,22.83539,0.075,27.12662,22.96951,0.075,27.7846]);
coord = Coordinate283;

geometry = IndexedFaceSet282;

browser.currentScene.children[54] = Shape279;

let Shape284 = browser.currentScene.createNode("Shape");
let Appearance285 = browser.currentScene.createNode("Appearance");
let Material286 = browser.currentScene.createNode("Material");
Material286.ambientIntensity = 0;
Material286.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material286.shininess = 0;
material = Material286;

appearance = Appearance285;

let IndexedFaceSet287 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet287.solid = False;
IndexedFaceSet287.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet287.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate288 = browser.currentScene.createNode("Coordinate");
Coordinate288.point = new X3D.MFVec3f([22.83139,0.075,27.10702,22.69728,0.075,26.44904,23.23518,0.075,27.02472,23.10106,0.075,26.36674,23.63897,0.075,26.94241,23.50485,0.075,26.28443]);
coord = Coordinate288;

geometry = IndexedFaceSet287;

browser.currentScene.children[55] = Shape284;

let Shape289 = browser.currentScene.createNode("Shape");
let Appearance290 = browser.currentScene.createNode("Appearance");
let Material291 = browser.currentScene.createNode("Material");
Material291.ambientIntensity = 0;
Material291.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material291.shininess = 0;
material = Material291;

appearance = Appearance290;

let IndexedFaceSet292 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet292.solid = False;
IndexedFaceSet292.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet292.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate293 = browser.currentScene.createNode("Coordinate");
Coordinate293.point = new X3D.MFVec3f([22.83463,0.075,25.00959,23.22862,0.075,24.92928,22.97075,0.075,25.67737,23.36473,0.075,25.59706,23.10686,0.075,26.34514,23.50085,0.075,26.26484]);
coord = Coordinate293;

geometry = IndexedFaceSet292;

browser.currentScene.children[56] = Shape289;

let Shape294 = browser.currentScene.createNode("Shape");
let Appearance295 = browser.currentScene.createNode("Appearance");
let Material296 = browser.currentScene.createNode("Material");
Material296.ambientIntensity = 0;
Material296.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material296.shininess = 0;
material = Material296;

appearance = Appearance295;

let IndexedFaceSet297 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet297.solid = False;
IndexedFaceSet297.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet297.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate298 = browser.currentScene.createNode("Coordinate");
Coordinate298.point = new X3D.MFVec3f([23.08727,0.075,26.34914,22.69328,0.075,26.42945,22.95115,0.075,25.68136,22.55716,0.075,25.76167,22.81503,0.075,25.01358,22.42105,0.075,25.09389]);
coord = Coordinate298;

geometry = IndexedFaceSet297;

browser.currentScene.children[57] = Shape294;

let Shape299 = browser.currentScene.createNode("Shape");
let Appearance300 = browser.currentScene.createNode("Appearance");
let Material301 = browser.currentScene.createNode("Material");
Material301.ambientIntensity = 0;
Material301.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material301.shininess = 0;
material = Material301;

appearance = Appearance300;

let IndexedFaceSet302 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet302.solid = False;
IndexedFaceSet302.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet302.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate303 = browser.currentScene.createNode("Coordinate");
Coordinate303.point = new X3D.MFVec3f([23.0905,0.075,24.2517,23.22462,0.075,24.90968,22.28293,0.075,24.41632,22.41705,0.075,25.07429]);
coord = Coordinate303;

geometry = IndexedFaceSet302;

browser.currentScene.children[58] = Shape299;

let Shape304 = browser.currentScene.createNode("Shape");
let Appearance305 = browser.currentScene.createNode("Appearance");
let Material306 = browser.currentScene.createNode("Material");
Material306.ambientIntensity = 0;
Material306.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material306.shininess = 0;
material = Material306;

appearance = Appearance305;

let IndexedFaceSet307 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet307.solid = False;
IndexedFaceSet307.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet307.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate308 = browser.currentScene.createNode("Coordinate");
Coordinate308.point = new X3D.MFVec3f([22.27894,0.075,24.39672,22.14482,0.075,23.73874,23.08651,0.075,24.23211,22.95239,0.075,23.57413]);
coord = Coordinate308;

geometry = IndexedFaceSet307;

browser.currentScene.children[59] = Shape304;

let Shape309 = browser.currentScene.createNode("Shape");
let Appearance310 = browser.currentScene.createNode("Appearance");
let Material311 = browser.currentScene.createNode("Material");
Material311.ambientIntensity = 0;
Material311.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material311.shininess = 0;
material = Material311;

appearance = Appearance310;

let IndexedFaceSet312 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet312.solid = False;
IndexedFaceSet312.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet312.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate313 = browser.currentScene.createNode("Coordinate");
Coordinate313.point = new X3D.MFVec3f([22.28218,0.075,22.29928,22.67616,0.075,22.21897,22.55441,0.075,23.63484,22.94839,0.075,23.55453]);
coord = Coordinate313;

geometry = IndexedFaceSet312;

browser.currentScene.children[60] = Shape309;

let Shape314 = browser.currentScene.createNode("Shape");
let Appearance315 = browser.currentScene.createNode("Appearance");
let Material316 = browser.currentScene.createNode("Material");
Material316.ambientIntensity = 0;
Material316.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material316.shininess = 0;
material = Material316;

appearance = Appearance315;

let IndexedFaceSet317 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet317.solid = False;
IndexedFaceSet317.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet317.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate318 = browser.currentScene.createNode("Coordinate");
Coordinate318.point = new X3D.MFVec3f([22.53481,0.075,23.63883,22.33782,0.075,23.67899,22.14083,0.075,23.71914,22.39869,0.075,22.97105,22.2017,0.075,23.01121,22.00471,0.075,23.05136,22.26258,0.075,22.30328,22.06558,0.075,22.34343,21.86859,0.075,22.38358]);
coord = Coordinate318;

geometry = IndexedFaceSet317;

browser.currentScene.children[61] = Shape314;

let Shape319 = browser.currentScene.createNode("Shape");
let Appearance320 = browser.currentScene.createNode("Appearance");
let Material321 = browser.currentScene.createNode("Material");
Material321.ambientIntensity = 0;
Material321.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material321.shininess = 0;
material = Material321;

appearance = Appearance320;

let IndexedFaceSet322 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet322.solid = False;
IndexedFaceSet322.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet322.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate323 = browser.currentScene.createNode("Coordinate");
Coordinate323.point = new X3D.MFVec3f([22.53805,0.075,21.5414,22.67217,0.075,22.19938,21.73048,0.075,21.70601,21.8646,0.075,22.36399]);
coord = Coordinate323;

geometry = IndexedFaceSet322;

browser.currentScene.children[62] = Shape319;

let Shape324 = browser.currentScene.createNode("Shape");
let Appearance325 = browser.currentScene.createNode("Appearance");
let Material326 = browser.currentScene.createNode("Material");
Material326.ambientIntensity = 0;
Material326.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material326.shininess = 0;
material = Material326;

appearance = Appearance325;

let IndexedFaceSet327 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet327.solid = False;
IndexedFaceSet327.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet327.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate328 = browser.currentScene.createNode("Coordinate");
Coordinate328.point = new X3D.MFVec3f([21.72648,0.075,21.68641,21.59236,0.075,21.02843,22.53405,0.075,21.5218,22.39993,0.075,20.86382]);
coord = Coordinate328;

geometry = IndexedFaceSet327;

browser.currentScene.children[63] = Shape324;

let Shape329 = browser.currentScene.createNode("Shape");
let Appearance330 = browser.currentScene.createNode("Appearance");
let Material331 = browser.currentScene.createNode("Material");
Material331.ambientIntensity = 0;
Material331.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material331.shininess = 0;
material = Material331;

appearance = Appearance330;

let IndexedFaceSet332 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet332.solid = False;
IndexedFaceSet332.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet332.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate333 = browser.currentScene.createNode("Coordinate");
Coordinate333.point = new X3D.MFVec3f([21.72972,0.075,19.58898,22.12371,0.075,19.50867,22.00195,0.075,20.92453,22.39594,0.075,20.84422]);
coord = Coordinate333;

geometry = IndexedFaceSet332;

browser.currentScene.children[64] = Shape329;

let Shape334 = browser.currentScene.createNode("Shape");
let Appearance335 = browser.currentScene.createNode("Appearance");
let Material336 = browser.currentScene.createNode("Material");
Material336.ambientIntensity = 0;
Material336.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material336.shininess = 0;
material = Material336;

appearance = Appearance335;

let IndexedFaceSet337 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet337.solid = False;
IndexedFaceSet337.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet337.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate338 = browser.currentScene.createNode("Coordinate");
Coordinate338.point = new X3D.MFVec3f([21.98236,0.075,20.92853,21.58837,0.075,21.00883,21.71012,0.075,19.59297,21.31614,0.075,19.67328]);
coord = Coordinate338;

geometry = IndexedFaceSet337;

browser.currentScene.children[65] = Shape334;

let Shape339 = browser.currentScene.createNode("Shape");
let Appearance340 = browser.currentScene.createNode("Appearance");
let Material341 = browser.currentScene.createNode("Material");
Material341.ambientIntensity = 0;
Material341.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material341.shininess = 0;
material = Material341;

appearance = Appearance340;

let IndexedFaceSet342 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet342.solid = False;
IndexedFaceSet342.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet342.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate343 = browser.currentScene.createNode("Coordinate");
Coordinate343.point = new X3D.MFVec3f([21.31214,0.075,19.65368,21.17802,0.075,18.9957,22.11971,0.075,19.48907,21.98559,0.075,18.83109]);
coord = Coordinate343;

geometry = IndexedFaceSet342;

browser.currentScene.children[66] = Shape339;

let Shape344 = browser.currentScene.createNode("Shape");
let Appearance345 = browser.currentScene.createNode("Appearance");
let Material346 = browser.currentScene.createNode("Material");
Material346.ambientIntensity = 0;
Material346.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material346.shininess = 0;
material = Material346;

appearance = Appearance345;

let IndexedFaceSet347 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet347.solid = False;
IndexedFaceSet347.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet347.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.point = new X3D.MFVec3f([21.17403,0.075,18.97611,21.03991,0.075,18.31813,21.9816,0.075,18.81149,21.84748,0.075,18.15351]);
coord = Coordinate348;

geometry = IndexedFaceSet347;

browser.currentScene.children[67] = Shape344;

let Shape349 = browser.currentScene.createNode("Shape");
let Appearance350 = browser.currentScene.createNode("Appearance");
let Material351 = browser.currentScene.createNode("Material");
Material351.ambientIntensity = 0;
Material351.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material351.shininess = 0;
material = Material351;

appearance = Appearance350;

let IndexedFaceSet352 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet352.solid = False;
IndexedFaceSet352.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet352.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate353 = browser.currentScene.createNode("Coordinate");
Coordinate353.point = new X3D.MFVec3f([21.17726,0.075,16.87867,21.57125,0.075,16.79836,21.4495,0.075,18.21423,21.84348,0.075,18.13392]);
coord = Coordinate353;

geometry = IndexedFaceSet352;

browser.currentScene.children[68] = Shape349;

let Shape354 = browser.currentScene.createNode("Shape");
let Appearance355 = browser.currentScene.createNode("Appearance");
let Material356 = browser.currentScene.createNode("Material");
Material356.ambientIntensity = 0;
Material356.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material356.shininess = 0;
material = Material356;

appearance = Appearance355;

let IndexedFaceSet357 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet357.solid = False;
IndexedFaceSet357.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet357.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate358 = browser.currentScene.createNode("Coordinate");
Coordinate358.point = new X3D.MFVec3f([20.76368,0.075,16.96297,20.96067,0.075,16.92282,21.15767,0.075,16.88267,20.8998,0.075,17.63075,21.09679,0.075,17.5906,21.29378,0.075,17.55044,21.03591,0.075,18.29853,21.23291,0.075,18.25838,21.4299,0.075,18.21822]);
coord = Coordinate358;

geometry = IndexedFaceSet357;

browser.currentScene.children[69] = Shape354;

let Shape359 = browser.currentScene.createNode("Shape");
let Appearance360 = browser.currentScene.createNode("Appearance");
let Material361 = browser.currentScene.createNode("Material");
Material361.ambientIntensity = 0;
Material361.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material361.shininess = 0;
material = Material361;

appearance = Appearance360;

let IndexedFaceSet362 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet362.solid = False;
IndexedFaceSet362.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet362.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate363 = browser.currentScene.createNode("Coordinate");
Coordinate363.point = new X3D.MFVec3f([19.65877,0.075,11.54236,20.05275,0.075,11.46205,19.79488,0.075,12.21014,20.18887,0.075,12.12983,19.931,0.075,12.87792,20.32499,0.075,12.79761]);
coord = Coordinate363;

geometry = IndexedFaceSet362;

browser.currentScene.children[70] = Shape359;

let Shape364 = browser.currentScene.createNode("Shape");
let Appearance365 = browser.currentScene.createNode("Appearance");
let Material366 = browser.currentScene.createNode("Material");
Material366.ambientIntensity = 0;
Material366.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material366.shininess = 0;
material = Material366;

appearance = Appearance365;

let IndexedFaceSet367 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet367.solid = False;
IndexedFaceSet367.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet367.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate368 = browser.currentScene.createNode("Coordinate");
Coordinate368.point = new X3D.MFVec3f([19.65477,0.075,11.52277,19.52065,0.075,10.86479,20.05856,0.075,11.44046,19.92444,0.075,10.78248,20.46234,0.075,11.35815,20.32822,0.075,10.70017]);
coord = Coordinate368;

geometry = IndexedFaceSet367;

browser.currentScene.children[71] = Shape364;

let Shape369 = browser.currentScene.createNode("Shape");
let Appearance370 = browser.currentScene.createNode("Appearance");
let Material371 = browser.currentScene.createNode("Material");
Material371.ambientIntensity = 0;
Material371.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material371.shininess = 0;
material = Material371;

appearance = Appearance370;

let IndexedFaceSet372 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet372.solid = False;
IndexedFaceSet372.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet372.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate373 = browser.currentScene.createNode("Coordinate");
Coordinate373.point = new X3D.MFVec3f([20.19011,0.075,10.0226,20.32423,0.075,10.68058,19.38254,0.075,10.18721,19.51666,0.075,10.84519]);
coord = Coordinate373;

geometry = IndexedFaceSet372;

browser.currentScene.children[72] = Shape369;

let Shape374 = browser.currentScene.createNode("Shape");
let Appearance375 = browser.currentScene.createNode("Appearance");
let Material376 = browser.currentScene.createNode("Material");
Material376.ambientIntensity = 0;
Material376.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material376.shininess = 0;
material = Material376;

appearance = Appearance375;

let IndexedFaceSet377 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet377.solid = False;
IndexedFaceSet377.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet377.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate378 = browser.currentScene.createNode("Coordinate");
Coordinate378.point = new X3D.MFVec3f([19.5199,0.075,8.747754,19.91388,0.075,8.667445,19.65601,0.075,9.415531,20.05,0.075,9.335223,19.79213,0.075,10.08331,20.18612,0.075,10.003]);
coord = Coordinate378;

geometry = IndexedFaceSet377;

browser.currentScene.children[73] = Shape374;

let Shape379 = browser.currentScene.createNode("Shape");
let Appearance380 = browser.currentScene.createNode("Appearance");
let Material381 = browser.currentScene.createNode("Material");
Material381.ambientIntensity = 0;
Material381.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material381.shininess = 0;
material = Material381;

appearance = Appearance380;

let IndexedFaceSet382 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet382.solid = False;
IndexedFaceSet382.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet382.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate383 = browser.currentScene.createNode("Coordinate");
Coordinate383.point = new X3D.MFVec3f([19.77253,0.075,10.0873,19.57554,0.075,10.12746,19.37854,0.075,10.16761,19.63642,0.075,9.419526,19.43942,0.075,9.459681,19.24243,0.075,9.499835,19.5003,0.075,8.751748,19.3033,0.075,8.791903,19.10631,0.075,8.832057]);
coord = Coordinate383;

geometry = IndexedFaceSet382;

browser.currentScene.children[74] = Shape379;

let Shape384 = browser.currentScene.createNode("Shape");
let Appearance385 = browser.currentScene.createNode("Appearance");
let Material386 = browser.currentScene.createNode("Material");
Material386.ambientIntensity = 0;
Material386.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material386.shininess = 0;
material = Material386;

appearance = Appearance385;

let IndexedFaceSet387 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet387.solid = False;
IndexedFaceSet387.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet387.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate388 = browser.currentScene.createNode("Coordinate");
Coordinate388.point = new X3D.MFVec3f([19.77577,0.075,7.989869,19.84283,0.075,8.318858,19.90989,0.075,8.647848,18.9682,0.075,8.15448,19.03526,0.075,8.48347,19.10232,0.075,8.81246]);
coord = Coordinate388;

geometry = IndexedFaceSet387;

browser.currentScene.children[75] = Shape384;

let Shape389 = browser.currentScene.createNode("Shape");
let Appearance390 = browser.currentScene.createNode("Appearance");
let Material391 = browser.currentScene.createNode("Material");
Material391.ambientIntensity = 0;
Material391.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material391.shininess = 0;
material = Material391;

appearance = Appearance390;

let IndexedFaceSet392 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet392.solid = False;
IndexedFaceSet392.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet392.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate393 = browser.currentScene.createNode("Coordinate");
Coordinate393.point = new X3D.MFVec3f([18.9642,0.075,8.134883,18.83008,0.075,7.476904,19.36799,0.075,8.052578,19.23387,0.075,7.394598,19.77177,0.075,7.970272,19.63765,0.075,7.312293]);
coord = Coordinate393;

geometry = IndexedFaceSet392;

browser.currentScene.children[76] = Shape389;

let Shape394 = browser.currentScene.createNode("Shape");
let Appearance395 = browser.currentScene.createNode("Appearance");
let Material396 = browser.currentScene.createNode("Material");
Material396.ambientIntensity = 0;
Material396.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material396.shininess = 0;
material = Material396;

appearance = Appearance395;

let IndexedFaceSet397 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet397.solid = False;
IndexedFaceSet397.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet397.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate398 = browser.currentScene.createNode("Coordinate");
Coordinate398.point = new X3D.MFVec3f([18.96744,0.075,6.037448,19.16443,0.075,5.997294,19.36143,0.075,5.957139,19.10356,0.075,6.705226,19.30055,0.075,6.665071,19.49754,0.075,6.624918,19.23967,0.075,7.373004,19.43667,0.075,7.33285,19.63366,0.075,7.292696]);
coord = Coordinate398;

geometry = IndexedFaceSet397;

browser.currentScene.children[77] = Shape394;

let Shape399 = browser.currentScene.createNode("Shape");
let Appearance400 = browser.currentScene.createNode("Appearance");
let Material401 = browser.currentScene.createNode("Material");
Material401.ambientIntensity = 0;
Material401.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material401.shininess = 0;
material = Material401;

appearance = Appearance400;

let IndexedFaceSet402 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet402.solid = False;
IndexedFaceSet402.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet402.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate403 = browser.currentScene.createNode("Coordinate");
Coordinate403.point = new X3D.MFVec3f([18.55386,0.075,6.121751,18.94784,0.075,6.041442,18.68997,0.075,6.789529,19.08396,0.075,6.70922,18.82609,0.075,7.457307,19.22008,0.075,7.376998]);
coord = Coordinate403;

geometry = IndexedFaceSet402;

browser.currentScene.children[78] = Shape399;

let Shape404 = browser.currentScene.createNode("Shape");
let Appearance405 = browser.currentScene.createNode("Appearance");
let Material406 = browser.currentScene.createNode("Material");
Material406.ambientIntensity = 0;
Material406.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material406.shininess = 0;
material = Material406;

appearance = Appearance405;

let IndexedFaceSet407 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet407.solid = False;
IndexedFaceSet407.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet407.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate408 = browser.currentScene.createNode("Coordinate");
Coordinate408.point = new X3D.MFVec3f([18.54986,0.075,6.102154,18.41574,0.075,5.444175,18.95365,0.075,6.019848,18.81953,0.075,5.361869,19.35743,0.075,5.937542,19.22331,0.075,5.279563]);
coord = Coordinate408;

geometry = IndexedFaceSet407;

browser.currentScene.children[79] = Shape404;

let Shape409 = browser.currentScene.createNode("Shape");
let Appearance410 = browser.currentScene.createNode("Appearance");
let Material411 = browser.currentScene.createNode("Material");
Material411.ambientIntensity = 0;
Material411.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material411.shininess = 0;
material = Material411;

appearance = Appearance410;

let IndexedFaceSet412 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet412.solid = False;
IndexedFaceSet412.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet412.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate413 = browser.currentScene.createNode("Coordinate");
Coordinate413.point = new X3D.MFVec3f([22.83615,0.075,29.24365,23.23013,0.075,29.16334,23.10838,0.075,30.57921,23.50237,0.075,30.4989]);
coord = Coordinate413;

geometry = IndexedFaceSet412;

browser.currentScene.children[80] = Shape409;

let Shape414 = browser.currentScene.createNode("Shape");
let Appearance415 = browser.currentScene.createNode("Appearance");
let Material416 = browser.currentScene.createNode("Material");
Material416.ambientIntensity = 0;
Material416.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material416.shininess = 0;
material = Material416;

appearance = Appearance415;

let IndexedFaceSet417 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet417.solid = False;
IndexedFaceSet417.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet417.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate418 = browser.currentScene.createNode("Coordinate");
Coordinate418.point = new X3D.MFVec3f([23.08878,0.075,30.5832,22.89179,0.075,30.62336,22.6948,0.075,30.66351,22.95267,0.075,29.91542,22.75567,0.075,29.95558,22.55868,0.075,29.99573,22.81655,0.075,29.24765,22.61956,0.075,29.2878,22.42256,0.075,29.32796]);
coord = Coordinate418;

geometry = IndexedFaceSet417;

browser.currentScene.children[81] = Shape414;

let Shape419 = browser.currentScene.createNode("Shape");
let Appearance420 = browser.currentScene.createNode("Appearance");
let Material421 = browser.currentScene.createNode("Material");
Material421.ambientIntensity = 0;
Material421.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material421.shininess = 0;
material = Material421;

appearance = Appearance420;

let IndexedFaceSet422 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet422.solid = False;
IndexedFaceSet422.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet422.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate423 = browser.currentScene.createNode("Coordinate");
Coordinate423.point = new X3D.MFVec3f([23.09202,0.075,28.48577,23.22614,0.075,29.14375,22.28445,0.075,28.65038,22.41857,0.075,29.30836]);
coord = Coordinate423;

geometry = IndexedFaceSet422;

browser.currentScene.children[82] = Shape419;

let Shape424 = browser.currentScene.createNode("Shape");
let Appearance425 = browser.currentScene.createNode("Appearance");
let Material426 = browser.currentScene.createNode("Material");
Material426.ambientIntensity = 0;
Material426.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material426.shininess = 0;
material = Material426;

appearance = Appearance425;

let IndexedFaceSet427 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet427.solid = False;
IndexedFaceSet427.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet427.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate428 = browser.currentScene.createNode("Coordinate");
Coordinate428.point = new X3D.MFVec3f([22.28045,0.075,28.63078,22.14634,0.075,27.9728,23.08803,0.075,28.46617,22.95391,0.075,27.80819]);
coord = Coordinate428;

geometry = IndexedFaceSet427;

browser.currentScene.children[83] = Shape424;

let Shape429 = browser.currentScene.createNode("Shape");
let Appearance430 = browser.currentScene.createNode("Appearance");
let Material431 = browser.currentScene.createNode("Material");
Material431.ambientIntensity = 0;
Material431.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material431.shininess = 0;
material = Material431;

appearance = Appearance430;

let IndexedFaceSet432 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet432.solid = False;
IndexedFaceSet432.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet432.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate433 = browser.currentScene.createNode("Coordinate");
Coordinate433.point = new X3D.MFVec3f([22.94991,0.075,27.7886,22.55593,0.075,27.8689,22.67768,0.075,26.45304,22.28369,0.075,26.53335]);
coord = Coordinate433;

geometry = IndexedFaceSet432;

browser.currentScene.children[84] = Shape429;

let Shape434 = browser.currentScene.createNode("Shape");
let Appearance435 = browser.currentScene.createNode("Appearance");
let Material436 = browser.currentScene.createNode("Material");
Material436.ambientIntensity = 0;
Material436.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material436.shininess = 0;
material = Material436;

appearance = Appearance435;

let IndexedFaceSet437 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet437.solid = False;
IndexedFaceSet437.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet437.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate438 = browser.currentScene.createNode("Coordinate");
Coordinate438.point = new X3D.MFVec3f([21.87011,0.075,26.61765,22.0671,0.075,26.5775,22.26409,0.075,26.53734,22.00622,0.075,27.28543,22.20322,0.075,27.24527,22.40021,0.075,27.20512,22.14234,0.075,27.95321,22.33933,0.075,27.91305,22.53633,0.075,27.8729]);
coord = Coordinate438;

geometry = IndexedFaceSet437;

browser.currentScene.children[85] = Shape434;

let Shape439 = browser.currentScene.createNode("Shape");
let Appearance440 = browser.currentScene.createNode("Appearance");
let Material441 = browser.currentScene.createNode("Material");
Material441.ambientIntensity = 0;
Material441.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material441.shininess = 0;
material = Material441;

appearance = Appearance440;

let IndexedFaceSet442 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet442.solid = False;
IndexedFaceSet442.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet442.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate443 = browser.currentScene.createNode("Coordinate");
Coordinate443.point = new X3D.MFVec3f([22.53956,0.075,25.77546,22.67368,0.075,26.43344,21.73199,0.075,25.94007,21.86611,0.075,26.59805]);
coord = Coordinate443;

geometry = IndexedFaceSet442;

browser.currentScene.children[86] = Shape439;

let Shape444 = browser.currentScene.createNode("Shape");
let Appearance445 = browser.currentScene.createNode("Appearance");
let Material446 = browser.currentScene.createNode("Material");
Material446.ambientIntensity = 0;
Material446.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material446.shininess = 0;
material = Material446;

appearance = Appearance445;

let IndexedFaceSet447 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet447.solid = False;
IndexedFaceSet447.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet447.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate448 = browser.currentScene.createNode("Coordinate");
Coordinate448.point = new X3D.MFVec3f([21.728,0.075,25.92048,21.66094,0.075,25.59149,21.59388,0.075,25.2625,22.53557,0.075,25.75587,22.46851,0.075,25.42688,22.40145,0.075,25.09789]);
coord = Coordinate448;

geometry = IndexedFaceSet447;

browser.currentScene.children[87] = Shape444;

let Shape449 = browser.currentScene.createNode("Shape");
let Appearance450 = browser.currentScene.createNode("Appearance");
let Material451 = browser.currentScene.createNode("Material");
Material451.ambientIntensity = 0;
Material451.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material451.shininess = 0;
material = Material451;

appearance = Appearance450;

let IndexedFaceSet452 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet452.solid = False;
IndexedFaceSet452.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet452.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new X3D.MFVec3f([22.39746,0.075,25.07829,22.20046,0.075,25.11844,22.00347,0.075,25.1586,22.26134,0.075,24.41051,22.06435,0.075,24.45066,21.86735,0.075,24.49082,22.12522,0.075,23.74273,21.92823,0.075,23.78289,21.73124,0.075,23.82304]);
coord = Coordinate453;

geometry = IndexedFaceSet452;

browser.currentScene.children[88] = Shape449;

let Shape454 = browser.currentScene.createNode("Shape");
let Appearance455 = browser.currentScene.createNode("Appearance");
let Material456 = browser.currentScene.createNode("Material");
Material456.ambientIntensity = 0;
Material456.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material456.shininess = 0;
material = Material456;

appearance = Appearance455;

let IndexedFaceSet457 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet457.solid = False;
IndexedFaceSet457.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet457.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.point = new X3D.MFVec3f([21.31765,0.075,23.90734,21.71164,0.075,23.82704,21.58988,0.075,25.2429,21.98387,0.075,25.16259]);
coord = Coordinate458;

geometry = IndexedFaceSet457;

browser.currentScene.children[89] = Shape454;

let Shape459 = browser.currentScene.createNode("Shape");
let Appearance460 = browser.currentScene.createNode("Appearance");
let Material461 = browser.currentScene.createNode("Material");
Material461.ambientIntensity = 0;
Material461.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material461.shininess = 0;
material = Material461;

appearance = Appearance460;

let IndexedFaceSet462 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet462.solid = False;
IndexedFaceSet462.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet462.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate463 = browser.currentScene.createNode("Coordinate");
Coordinate463.point = new X3D.MFVec3f([21.31366,0.075,23.88775,21.17954,0.075,23.22977,22.12123,0.075,23.72313,21.98711,0.075,23.06516]);
coord = Coordinate463;

geometry = IndexedFaceSet462;

browser.currentScene.children[90] = Shape459;

let Shape464 = browser.currentScene.createNode("Shape");
let Appearance465 = browser.currentScene.createNode("Appearance");
let Material466 = browser.currentScene.createNode("Material");
Material466.ambientIntensity = 0;
Material466.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material466.shininess = 0;
material = Material466;

appearance = Appearance465;

let IndexedFaceSet467 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet467.solid = False;
IndexedFaceSet467.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet467.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate468 = browser.currentScene.createNode("Coordinate");
Coordinate468.point = new X3D.MFVec3f([21.17554,0.075,23.21017,21.04142,0.075,22.55219,21.98311,0.075,23.04556,21.84899,0.075,22.38758]);
coord = Coordinate468;

geometry = IndexedFaceSet467;

browser.currentScene.children[91] = Shape464;

let Shape469 = browser.currentScene.createNode("Shape");
let Appearance470 = browser.currentScene.createNode("Appearance");
let Material471 = browser.currentScene.createNode("Material");
Material471.ambientIntensity = 0;
Material471.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material471.shininess = 0;
material = Material471;

appearance = Appearance470;

let IndexedFaceSet472 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet472.solid = False;
IndexedFaceSet472.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet472.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate473 = browser.currentScene.createNode("Coordinate");
Coordinate473.point = new X3D.MFVec3f([21.845,0.075,22.36798,21.45101,0.075,22.44829,21.57277,0.075,21.03243,21.17878,0.075,21.11274]);
coord = Coordinate473;

geometry = IndexedFaceSet472;

browser.currentScene.children[92] = Shape469;

let Shape474 = browser.currentScene.createNode("Shape");
let Appearance475 = browser.currentScene.createNode("Appearance");
let Material476 = browser.currentScene.createNode("Material");
Material476.ambientIntensity = 0;
Material476.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material476.shininess = 0;
material = Material476;

appearance = Appearance475;

let IndexedFaceSet477 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet477.solid = False;
IndexedFaceSet477.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet477.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate478 = browser.currentScene.createNode("Coordinate");
Coordinate478.point = new X3D.MFVec3f([20.7652,0.075,21.19704,21.15918,0.075,21.11673,21.03743,0.075,22.53259,21.43142,0.075,22.45229]);
coord = Coordinate478;

geometry = IndexedFaceSet477;

browser.currentScene.children[93] = Shape474;

let Shape479 = browser.currentScene.createNode("Shape");
let Appearance480 = browser.currentScene.createNode("Appearance");
let Material481 = browser.currentScene.createNode("Material");
Material481.ambientIntensity = 0;
Material481.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material481.shininess = 0;
material = Material481;

appearance = Appearance480;

let IndexedFaceSet482 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet482.solid = False;
IndexedFaceSet482.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet482.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate483 = browser.currentScene.createNode("Coordinate");
Coordinate483.point = new X3D.MFVec3f([20.7612,0.075,21.17744,20.62708,0.075,20.51946,21.16499,0.075,21.09514,21.03087,0.075,20.43716,21.56877,0.075,21.01283,21.43465,0.075,20.35485]);
coord = Coordinate483;

geometry = IndexedFaceSet482;

browser.currentScene.children[94] = Shape479;

let Shape484 = browser.currentScene.createNode("Shape");
let Appearance485 = browser.currentScene.createNode("Appearance");
let Material486 = browser.currentScene.createNode("Material");
Material486.ambientIntensity = 0;
Material486.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material486.shininess = 0;
material = Material486;

appearance = Appearance485;

let IndexedFaceSet487 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet487.solid = False;
IndexedFaceSet487.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet487.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.point = new X3D.MFVec3f([20.62309,0.075,20.49986,20.48897,0.075,19.84189,21.02687,0.075,20.41756,20.89275,0.075,19.75958,21.43066,0.075,20.33525,21.29654,0.075,19.67727]);
coord = Coordinate488;

geometry = IndexedFaceSet487;

browser.currentScene.children[95] = Shape484;

let Shape489 = browser.currentScene.createNode("Shape");
let Appearance490 = browser.currentScene.createNode("Appearance");
let Material491 = browser.currentScene.createNode("Material");
Material491.ambientIntensity = 0;
Material491.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material491.shininess = 0;
material = Material491;

appearance = Appearance490;

let IndexedFaceSet492 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet492.solid = False;
IndexedFaceSet492.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet492.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate493 = browser.currentScene.createNode("Coordinate");
Coordinate493.point = new X3D.MFVec3f([20.62632,0.075,18.40243,20.82332,0.075,18.36228,21.02031,0.075,18.32212,20.76244,0.075,19.07021,20.95943,0.075,19.03005,21.15643,0.075,18.9899,20.89856,0.075,19.73799,21.09555,0.075,19.69783,21.29254,0.075,19.65768]);
coord = Coordinate493;

geometry = IndexedFaceSet492;

browser.currentScene.children[96] = Shape489;

let Shape494 = browser.currentScene.createNode("Shape");
let Appearance495 = browser.currentScene.createNode("Appearance");
let Material496 = browser.currentScene.createNode("Material");
Material496.ambientIntensity = 0;
Material496.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material496.shininess = 0;
material = Material496;

appearance = Appearance495;

let IndexedFaceSet497 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet497.solid = False;
IndexedFaceSet497.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet497.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate498 = browser.currentScene.createNode("Coordinate");
Coordinate498.point = new X3D.MFVec3f([20.21274,0.075,18.48673,20.40973,0.075,18.44658,20.60673,0.075,18.40642,20.34886,0.075,19.15451,20.54585,0.075,19.11436,20.74284,0.075,19.0742,20.48497,0.075,19.82229,20.68197,0.075,19.78214,20.87896,0.075,19.74198]);
coord = Coordinate498;

geometry = IndexedFaceSet497;

browser.currentScene.children[97] = Shape494;

let Shape499 = browser.currentScene.createNode("Shape");
let Appearance500 = browser.currentScene.createNode("Appearance");
let Material501 = browser.currentScene.createNode("Material");
Material501.ambientIntensity = 0;
Material501.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material501.shininess = 0;
material = Material501;

appearance = Appearance500;

let IndexedFaceSet502 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet502.solid = False;
IndexedFaceSet502.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet502.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate503 = browser.currentScene.createNode("Coordinate");
Coordinate503.point = new X3D.MFVec3f([20.20874,0.075,18.46714,20.07463,0.075,17.80916,20.61253,0.075,18.38483,20.47841,0.075,17.72685,21.01632,0.075,18.30252,20.8822,0.075,17.64454]);
coord = Coordinate503;

geometry = IndexedFaceSet502;

browser.currentScene.children[98] = Shape499;

let Shape504 = browser.currentScene.createNode("Shape");
let Appearance505 = browser.currentScene.createNode("Appearance");
let Material506 = browser.currentScene.createNode("Material");
Material506.ambientIntensity = 0;
Material506.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material506.shininess = 0;
material = Material506;

appearance = Appearance505;

let IndexedFaceSet507 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet507.solid = False;
IndexedFaceSet507.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet507.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate508 = browser.currentScene.createNode("Coordinate");
Coordinate508.point = new X3D.MFVec3f([20.74408,0.075,16.96697,20.8782,0.075,17.62495,20.3403,0.075,17.04927,20.47442,0.075,17.70725,19.93651,0.075,17.13158,20.07063,0.075,17.78956]);
coord = Coordinate508;

geometry = IndexedFaceSet507;

browser.currentScene.children[99] = Shape504;

let Shape509 = browser.currentScene.createNode("Shape");
let Appearance510 = browser.currentScene.createNode("Appearance");
let Material511 = browser.currentScene.createNode("Material");
Material511.ambientIntensity = 0;
Material511.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material511.shininess = 0;
material = Material511;

appearance = Appearance510;

let IndexedFaceSet512 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet512.solid = False;
IndexedFaceSet512.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet512.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate513 = browser.currentScene.createNode("Coordinate");
Coordinate513.point = new X3D.MFVec3f([20.74009,0.075,16.94737,20.3461,0.075,17.02768,20.60397,0.075,16.27959,20.20998,0.075,16.3599,20.46785,0.075,15.61182,20.07387,0.075,15.69212]);
coord = Coordinate513;

geometry = IndexedFaceSet512;

browser.currentScene.children[100] = Shape509;

let Shape514 = browser.currentScene.createNode("Shape");
let Appearance515 = browser.currentScene.createNode("Appearance");
let Material516 = browser.currentScene.createNode("Material");
Material516.ambientIntensity = 0;
Material516.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material516.shininess = 0;
material = Material516;

appearance = Appearance515;

let IndexedFaceSet517 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet517.solid = False;
IndexedFaceSet517.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet517.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new X3D.MFVec3f([19.66028,0.075,15.77643,19.85728,0.075,15.73627,20.05427,0.075,15.69612,19.7964,0.075,16.4442,19.99339,0.075,16.40405,20.19039,0.075,16.3639,19.93252,0.075,17.11198,20.12951,0.075,17.07183,20.3265,0.075,17.03168]);
coord = Coordinate518;

geometry = IndexedFaceSet517;

browser.currentScene.children[101] = Shape514;

let Shape519 = browser.currentScene.createNode("Shape");
let Appearance520 = browser.currentScene.createNode("Appearance");
let Material521 = browser.currentScene.createNode("Material");
Material521.ambientIntensity = 0;
Material521.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material521.shininess = 0;
material = Material521;

appearance = Appearance520;

let IndexedFaceSet522 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet522.solid = False;
IndexedFaceSet522.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet522.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate523 = browser.currentScene.createNode("Coordinate");
Coordinate523.point = new X3D.MFVec3f([19.65629,0.075,15.75683,19.58923,0.075,15.42784,19.52217,0.075,15.09885,20.06007,0.075,15.67452,19.99302,0.075,15.34553,19.92595,0.075,15.01655,20.46386,0.075,15.59222,20.3968,0.075,15.26323,20.32974,0.075,14.93424]);
coord = Coordinate523;

geometry = IndexedFaceSet522;

browser.currentScene.children[102] = Shape519;

let Shape524 = browser.currentScene.createNode("Shape");
let Appearance525 = browser.currentScene.createNode("Appearance");
let Material526 = browser.currentScene.createNode("Material");
Material526.ambientIntensity = 0;
Material526.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material526.shininess = 0;
material = Material526;

appearance = Appearance525;

let IndexedFaceSet527 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet527.solid = False;
IndexedFaceSet527.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet527.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate528 = browser.currentScene.createNode("Coordinate");
Coordinate528.point = new X3D.MFVec3f([20.19163,0.075,14.25666,20.32575,0.075,14.91464,19.38406,0.075,14.42127,19.51818,0.075,15.07925]);
coord = Coordinate528;

geometry = IndexedFaceSet527;

browser.currentScene.children[103] = Shape524;

let Shape529 = browser.currentScene.createNode("Shape");
let Appearance530 = browser.currentScene.createNode("Appearance");
let Material531 = browser.currentScene.createNode("Material");
Material531.ambientIntensity = 0;
Material531.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material531.shininess = 0;
material = Material531;

appearance = Appearance530;

let IndexedFaceSet532 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet532.solid = False;
IndexedFaceSet532.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet532.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate533 = browser.currentScene.createNode("Coordinate");
Coordinate533.point = new X3D.MFVec3f([19.52141,0.075,12.98182,19.9154,0.075,12.90151,19.65753,0.075,13.6496,20.05152,0.075,13.56929,19.79364,0.075,14.31737,20.18763,0.075,14.23707]);
coord = Coordinate533;

geometry = IndexedFaceSet532;

browser.currentScene.children[104] = Shape529;

let Shape534 = browser.currentScene.createNode("Shape");
let Appearance535 = browser.currentScene.createNode("Appearance");
let Material536 = browser.currentScene.createNode("Material");
Material536.ambientIntensity = 0;
Material536.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material536.shininess = 0;
material = Material536;

appearance = Appearance535;

let IndexedFaceSet537 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet537.solid = False;
IndexedFaceSet537.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet537.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate538 = browser.currentScene.createNode("Coordinate");
Coordinate538.point = new X3D.MFVec3f([19.10783,0.075,13.06612,19.50181,0.075,12.98581,19.38006,0.075,14.40168,19.77405,0.075,14.32137]);
coord = Coordinate538;

geometry = IndexedFaceSet537;

browser.currentScene.children[105] = Shape534;

let Shape539 = browser.currentScene.createNode("Shape");
let Appearance540 = browser.currentScene.createNode("Appearance");
let Material541 = browser.currentScene.createNode("Material");
Material541.ambientIntensity = 0;
Material541.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material541.shininess = 0;
material = Material541;

appearance = Appearance540;

let IndexedFaceSet542 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet542.solid = False;
IndexedFaceSet542.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet542.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate543 = browser.currentScene.createNode("Coordinate");
Coordinate543.point = new X3D.MFVec3f([19.10383,0.075,13.04652,18.96971,0.075,12.38855,19.50762,0.075,12.96422,19.3735,0.075,12.30624,19.9114,0.075,12.88191,19.77728,0.075,12.22393]);
coord = Coordinate543;

geometry = IndexedFaceSet542;

browser.currentScene.children[106] = Shape539;

let Shape544 = browser.currentScene.createNode("Shape");
let Appearance545 = browser.currentScene.createNode("Appearance");
let Material546 = browser.currentScene.createNode("Material");
Material546.ambientIntensity = 0;
Material546.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material546.shininess = 0;
material = Material546;

appearance = Appearance545;

let IndexedFaceSet547 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet547.solid = False;
IndexedFaceSet547.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet547.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new X3D.MFVec3f([18.96572,0.075,12.36895,18.8316,0.075,11.71097,19.3695,0.075,12.28664,19.23538,0.075,11.62866,19.77329,0.075,12.20434,19.63917,0.075,11.54636]);
coord = Coordinate548;

geometry = IndexedFaceSet547;

browser.currentScene.children[107] = Shape544;

let Shape549 = browser.currentScene.createNode("Shape");
let Appearance550 = browser.currentScene.createNode("Appearance");
let Material551 = browser.currentScene.createNode("Material");
Material551.ambientIntensity = 0;
Material551.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material551.shininess = 0;
material = Material551;

appearance = Appearance550;

let IndexedFaceSet552 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet552.solid = False;
IndexedFaceSet552.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet552.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate553 = browser.currentScene.createNode("Coordinate");
Coordinate553.point = new X3D.MFVec3f([18.96896,0.075,10.27151,19.36294,0.075,10.1912,19.10507,0.075,10.93929,19.49906,0.075,10.85898,19.24119,0.075,11.60707,19.63518,0.075,11.52676]);
coord = Coordinate553;

geometry = IndexedFaceSet552;

browser.currentScene.children[108] = Shape549;

let Shape554 = browser.currentScene.createNode("Shape");
let Appearance555 = browser.currentScene.createNode("Appearance");
let Material556 = browser.currentScene.createNode("Material");
Material556.ambientIntensity = 0;
Material556.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material556.shininess = 0;
material = Material556;

appearance = Appearance555;

let IndexedFaceSet557 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet557.solid = False;
IndexedFaceSet557.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet557.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.point = new X3D.MFVec3f([18.55537,0.075,10.35582,18.75237,0.075,10.31566,18.94936,0.075,10.27551,18.69149,0.075,11.02359,18.88848,0.075,10.98344,19.08548,0.075,10.94328,18.8276,0.075,11.69137,19.0246,0.075,11.65122,19.22159,0.075,11.61106]);
coord = Coordinate558;

geometry = IndexedFaceSet557;

browser.currentScene.children[109] = Shape554;

let Shape559 = browser.currentScene.createNode("Shape");
let Appearance560 = browser.currentScene.createNode("Appearance");
let Material561 = browser.currentScene.createNode("Material");
Material561.ambientIntensity = 0;
Material561.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material561.shininess = 0;
material = Material561;

appearance = Appearance560;

let IndexedFaceSet562 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet562.solid = False;
IndexedFaceSet562.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet562.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate563 = browser.currentScene.createNode("Coordinate");
Coordinate563.point = new X3D.MFVec3f([19.22483,0.075,9.513628,19.29189,0.075,9.842617,19.35895,0.075,10.17161,18.82104,0.075,9.595933,18.8881,0.075,9.924923,18.95516,0.075,10.25391,18.41726,0.075,9.678239,18.48432,0.075,10.00723,18.55138,0.075,10.33622]);
coord = Coordinate563;

geometry = IndexedFaceSet562;

browser.currentScene.children[110] = Shape559;

let Shape564 = browser.currentScene.createNode("Shape");
let Appearance565 = browser.currentScene.createNode("Appearance");
let Material566 = browser.currentScene.createNode("Material");
Material566.ambientIntensity = 0;
Material566.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material566.shininess = 0;
material = Material566;

appearance = Appearance565;

let IndexedFaceSet567 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet567.solid = False;
IndexedFaceSet567.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet567.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new X3D.MFVec3f([18.41326,0.075,9.658642,18.27914,0.075,9.000663,19.22083,0.075,9.494031,19.08671,0.075,8.836051]);
coord = Coordinate568;

geometry = IndexedFaceSet567;

browser.currentScene.children[111] = Shape564;

let Shape569 = browser.currentScene.createNode("Shape");
let Appearance570 = browser.currentScene.createNode("Appearance");
let Material571 = browser.currentScene.createNode("Material");
Material571.ambientIntensity = 0;
Material571.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material571.shininess = 0;
material = Material571;

appearance = Appearance570;

let IndexedFaceSet572 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet572.solid = False;
IndexedFaceSet572.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet572.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate573 = browser.currentScene.createNode("Coordinate");
Coordinate573.point = new X3D.MFVec3f([19.08272,0.075,8.816454,18.68873,0.075,8.896763,18.9466,0.075,8.148676,18.55262,0.075,8.228985,18.81049,0.075,7.480898,18.4165,0.075,7.561207]);
coord = Coordinate573;

geometry = IndexedFaceSet572;

browser.currentScene.children[112] = Shape569;

let Shape574 = browser.currentScene.createNode("Shape");
let Appearance575 = browser.currentScene.createNode("Appearance");
let Material576 = browser.currentScene.createNode("Material");
Material576.ambientIntensity = 0;
Material576.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material576.shininess = 0;
material = Material576;

appearance = Appearance575;

let IndexedFaceSet577 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet577.solid = False;
IndexedFaceSet577.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet577.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate578 = browser.currentScene.createNode("Coordinate");
Coordinate578.point = new X3D.MFVec3f([18.00292,0.075,7.64551,18.19991,0.075,7.605356,18.3969,0.075,7.565201,18.13903,0.075,8.313288,18.33603,0.075,8.273133,18.53302,0.075,8.23298,18.27515,0.075,8.981066,18.47214,0.075,8.940911,18.66914,0.075,8.900757]);
coord = Coordinate578;

geometry = IndexedFaceSet577;

browser.currentScene.children[113] = Shape574;

let Shape579 = browser.currentScene.createNode("Shape");
let Appearance580 = browser.currentScene.createNode("Appearance");
let Material581 = browser.currentScene.createNode("Material");
Material581.ambientIntensity = 0;
Material581.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material581.shininess = 0;
material = Material581;

appearance = Appearance580;

let IndexedFaceSet582 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet582.solid = False;
IndexedFaceSet582.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet582.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate583 = browser.currentScene.createNode("Coordinate");
Coordinate583.point = new X3D.MFVec3f([17.99892,0.075,7.625913,17.8648,0.075,6.967933,18.40271,0.075,7.543607,18.26859,0.075,6.885628,18.80649,0.075,7.461301,18.67237,0.075,6.803322]);
coord = Coordinate583;

geometry = IndexedFaceSet582;

browser.currentScene.children[114] = Shape579;

let Shape584 = browser.currentScene.createNode("Shape");
let Appearance585 = browser.currentScene.createNode("Appearance");
let Material586 = browser.currentScene.createNode("Material");
Material586.ambientIntensity = 0;
Material586.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material586.shininess = 0;
material = Material586;

appearance = Appearance585;

let IndexedFaceSet587 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet587.solid = False;
IndexedFaceSet587.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet587.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate588 = browser.currentScene.createNode("Coordinate");
Coordinate588.point = new X3D.MFVec3f([17.86081,0.075,6.948337,17.72669,0.075,6.290357,18.26459,0.075,6.866031,18.13047,0.075,6.208051,18.66838,0.075,6.783725,18.53426,0.075,6.125745]);
coord = Coordinate588;

geometry = IndexedFaceSet587;

browser.currentScene.children[115] = Shape584;

let Shape589 = browser.currentScene.createNode("Shape");
let Appearance590 = browser.currentScene.createNode("Appearance");
let Material591 = browser.currentScene.createNode("Material");
Material591.ambientIntensity = 0;
Material591.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material591.shininess = 0;
material = Material591;

appearance = Appearance590;

let IndexedFaceSet592 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet592.solid = False;
IndexedFaceSet592.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet592.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate593 = browser.currentScene.createNode("Coordinate");
Coordinate593.point = new X3D.MFVec3f([17.86404,0.075,4.850901,18.25803,0.075,4.770593,18.13628,0.075,6.186457,18.53026,0.075,6.106149]);
coord = Coordinate593;

geometry = IndexedFaceSet592;

browser.currentScene.children[116] = Shape589;

let Shape594 = browser.currentScene.createNode("Shape");
let Appearance595 = browser.currentScene.createNode("Appearance");
let Material596 = browser.currentScene.createNode("Material");
Material596.ambientIntensity = 0;
Material596.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material596.shininess = 0;
material = Material596;

appearance = Appearance595;

let IndexedFaceSet597 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet597.solid = False;
IndexedFaceSet597.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet597.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate598 = browser.currentScene.createNode("Coordinate");
Coordinate598.point = new X3D.MFVec3f([17.45046,0.075,4.935204,17.84445,0.075,4.854896,17.72269,0.075,6.27076,18.11668,0.075,6.190452]);
coord = Coordinate598;

geometry = IndexedFaceSet597;

browser.currentScene.children[117] = Shape594;

let Shape599 = browser.currentScene.createNode("Shape");
let Appearance600 = browser.currentScene.createNode("Appearance");
let Material601 = browser.currentScene.createNode("Material");
Material601.ambientIntensity = 0;
Material601.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material601.shininess = 0;
material = Material601;

appearance = Appearance600;

let IndexedFaceSet602 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet602.solid = False;
IndexedFaceSet602.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet602.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate603 = browser.currentScene.createNode("Coordinate");
Coordinate603.point = new X3D.MFVec3f([17.44646,0.075,4.915607,17.31235,0.075,4.257627,17.85025,0.075,4.833302,17.71613,0.075,4.175322,18.25404,0.075,4.750996,18.11992,0.075,4.093016]);
coord = Coordinate603;

geometry = IndexedFaceSet602;

browser.currentScene.children[118] = Shape599;

let Shape604 = browser.currentScene.createNode("Shape");
let Appearance605 = browser.currentScene.createNode("Appearance");
let Material606 = browser.currentScene.createNode("Material");
Material606.ambientIntensity = 0;
Material606.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material606.shininess = 0;
material = Material606;

appearance = Appearance605;

let IndexedFaceSet607 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet607.solid = False;
IndexedFaceSet607.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet607.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new X3D.MFVec3f([17.9818,0.075,3.41544,18.11592,0.075,4.073419,17.57802,0.075,3.497746,17.71214,0.075,4.155725,17.17423,0.075,3.580051,17.30835,0.075,4.23803]);
coord = Coordinate608;

geometry = IndexedFaceSet607;

browser.currentScene.children[119] = Shape604;

let Shape609 = browser.currentScene.createNode("Shape");
let Appearance610 = browser.currentScene.createNode("Appearance");
let Material611 = browser.currentScene.createNode("Material");
Material611.ambientIntensity = 0;
Material611.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material611.shininess = 0;
material = Material611;

appearance = Appearance610;

let IndexedFaceSet612 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet612.solid = False;
IndexedFaceSet612.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet612.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate613 = browser.currentScene.createNode("Coordinate");
Coordinate613.point = new X3D.MFVec3f([22.40297,0.075,29.33195,22.53709,0.075,29.98993,21.5954,0.075,29.49656,21.72952,0.075,30.15454]);
coord = Coordinate613;

geometry = IndexedFaceSet612;

browser.currentScene.children[120] = Shape609;

let Shape614 = browser.currentScene.createNode("Shape");
let Appearance615 = browser.currentScene.createNode("Appearance");
let Material616 = browser.currentScene.createNode("Material");
Material616.ambientIntensity = 0;
Material616.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material616.shininess = 0;
material = Material616;

appearance = Appearance615;

let IndexedFaceSet617 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet617.solid = False;
IndexedFaceSet617.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet617.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate618 = browser.currentScene.createNode("Coordinate");
Coordinate618.point = new X3D.MFVec3f([21.73275,0.075,28.05711,22.12674,0.075,27.9768,21.86887,0.075,28.72488,22.26286,0.075,28.64458,22.00498,0.075,29.39266,22.39897,0.075,29.31235]);
coord = Coordinate618;

geometry = IndexedFaceSet617;

browser.currentScene.children[121] = Shape614;

let Shape619 = browser.currentScene.createNode("Shape");
let Appearance620 = browser.currentScene.createNode("Appearance");
let Material621 = browser.currentScene.createNode("Material");
Material621.ambientIntensity = 0;
Material621.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material621.shininess = 0;
material = Material621;

appearance = Appearance620;

let IndexedFaceSet622 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet622.solid = False;
IndexedFaceSet622.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet622.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate623 = browser.currentScene.createNode("Coordinate");
Coordinate623.point = new X3D.MFVec3f([21.98539,0.075,29.39666,21.5914,0.075,29.47696,21.84927,0.075,28.72888,21.45528,0.075,28.80919,21.71315,0.075,28.0611,21.31917,0.075,28.14141]);
coord = Coordinate623;

geometry = IndexedFaceSet622;

browser.currentScene.children[122] = Shape619;

let Shape624 = browser.currentScene.createNode("Shape");
let Appearance625 = browser.currentScene.createNode("Appearance");
let Material626 = browser.currentScene.createNode("Material");
Material626.ambientIntensity = 0;
Material626.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material626.shininess = 0;
material = Material626;

appearance = Appearance625;

let IndexedFaceSet627 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet627.solid = False;
IndexedFaceSet627.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet627.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate628 = browser.currentScene.createNode("Coordinate");
Coordinate628.point = new X3D.MFVec3f([21.98862,0.075,27.29922,22.12274,0.075,27.9572,21.18105,0.075,27.46383,21.31517,0.075,28.12181]);
coord = Coordinate628;

geometry = IndexedFaceSet627;

browser.currentScene.children[123] = Shape624;

let Shape629 = browser.currentScene.createNode("Shape");
let Appearance630 = browser.currentScene.createNode("Appearance");
let Material631 = browser.currentScene.createNode("Material");
Material631.ambientIntensity = 0;
Material631.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material631.shininess = 0;
material = Material631;

appearance = Appearance630;

let IndexedFaceSet632 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet632.solid = False;
IndexedFaceSet632.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet632.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate633 = browser.currentScene.createNode("Coordinate");
Coordinate633.point = new X3D.MFVec3f([21.17706,0.075,27.44423,21.04294,0.075,26.78626,21.58084,0.075,27.36193,21.44672,0.075,26.70395,21.98463,0.075,27.27962,21.85051,0.075,26.62164]);
coord = Coordinate633;

geometry = IndexedFaceSet632;

browser.currentScene.children[124] = Shape629;

let Shape634 = browser.currentScene.createNode("Shape");
let Appearance635 = browser.currentScene.createNode("Appearance");
let Material636 = browser.currentScene.createNode("Material");
Material636.ambientIntensity = 0;
Material636.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material636.shininess = 0;
material = Material636;

appearance = Appearance635;

let IndexedFaceSet637 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet637.solid = False;
IndexedFaceSet637.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet637.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate638 = browser.currentScene.createNode("Coordinate");
Coordinate638.point = new X3D.MFVec3f([21.1803,0.075,25.3468,21.57428,0.075,25.26649,21.45253,0.075,26.68236,21.84652,0.075,26.60205]);
coord = Coordinate638;

geometry = IndexedFaceSet637;

browser.currentScene.children[125] = Shape634;

let Shape639 = browser.currentScene.createNode("Shape");
let Appearance640 = browser.currentScene.createNode("Appearance");
let Material641 = browser.currentScene.createNode("Material");
Material641.ambientIntensity = 0;
Material641.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material641.shininess = 0;
material = Material641;

appearance = Appearance640;

let IndexedFaceSet642 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet642.solid = False;
IndexedFaceSet642.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet642.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate643 = browser.currentScene.createNode("Coordinate");
Coordinate643.point = new X3D.MFVec3f([21.43293,0.075,26.68635,21.23594,0.075,26.72651,21.03894,0.075,26.76666,21.29682,0.075,26.01857,21.09982,0.075,26.05873,20.90283,0.075,26.09888,21.1607,0.075,25.35079,20.96371,0.075,25.39095,20.76671,0.075,25.4311]);
coord = Coordinate643;

geometry = IndexedFaceSet642;

browser.currentScene.children[126] = Shape639;

let Shape644 = browser.currentScene.createNode("Shape");
let Appearance645 = browser.currentScene.createNode("Appearance");
let Material646 = browser.currentScene.createNode("Material");
Material646.ambientIntensity = 0;
Material646.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material646.shininess = 0;
material = Material646;

appearance = Appearance645;

let IndexedFaceSet647 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet647.solid = False;
IndexedFaceSet647.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet647.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate648 = browser.currentScene.createNode("Coordinate");
Coordinate648.point = new X3D.MFVec3f([21.43617,0.075,24.58891,21.57029,0.075,25.24689,20.6286,0.075,24.75353,20.76272,0.075,25.41151]);
coord = Coordinate648;

geometry = IndexedFaceSet647;

browser.currentScene.children[127] = Shape644;

let Shape649 = browser.currentScene.createNode("Shape");
let Appearance650 = browser.currentScene.createNode("Appearance");
let Material651 = browser.currentScene.createNode("Material");
Material651.ambientIntensity = 0;
Material651.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material651.shininess = 0;
material = Material651;

appearance = Appearance650;

let IndexedFaceSet652 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet652.solid = False;
IndexedFaceSet652.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet652.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate653 = browser.currentScene.createNode("Coordinate");
Coordinate653.point = new X3D.MFVec3f([20.6246,0.075,24.73393,20.49048,0.075,24.07595,21.43217,0.075,24.56932,21.29805,0.075,23.91134]);
coord = Coordinate653;

geometry = IndexedFaceSet652;

browser.currentScene.children[128] = Shape649;

let Shape654 = browser.currentScene.createNode("Shape");
let Appearance655 = browser.currentScene.createNode("Appearance");
let Material656 = browser.currentScene.createNode("Material");
Material656.ambientIntensity = 0;
Material656.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material656.shininess = 0;
material = Material656;

appearance = Appearance655;

let IndexedFaceSet657 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet657.solid = False;
IndexedFaceSet657.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet657.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate658 = browser.currentScene.createNode("Coordinate");
Coordinate658.point = new X3D.MFVec3f([20.62784,0.075,22.63649,21.02183,0.075,22.55619,20.76396,0.075,23.30427,21.15794,0.075,23.22396,20.90007,0.075,23.97205,21.29406,0.075,23.89174]);
coord = Coordinate658;

geometry = IndexedFaceSet657;

browser.currentScene.children[129] = Shape654;

let Shape659 = browser.currentScene.createNode("Shape");
let Appearance660 = browser.currentScene.createNode("Appearance");
let Material661 = browser.currentScene.createNode("Material");
Material661.ambientIntensity = 0;
Material661.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material661.shininess = 0;
material = Material661;

appearance = Appearance660;

let IndexedFaceSet662 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet662.solid = False;
IndexedFaceSet662.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet662.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new X3D.MFVec3f([20.21426,0.075,22.7208,20.41125,0.075,22.68064,20.60824,0.075,22.64049,20.35037,0.075,23.38857,20.54737,0.075,23.34842,20.74436,0.075,23.30827,20.48649,0.075,24.05635,20.68348,0.075,24.0162,20.88048,0.075,23.97605]);
coord = Coordinate663;

geometry = IndexedFaceSet662;

browser.currentScene.children[130] = Shape659;

let Shape664 = browser.currentScene.createNode("Shape");
let Appearance665 = browser.currentScene.createNode("Appearance");
let Material666 = browser.currentScene.createNode("Material");
Material666.ambientIntensity = 0;
Material666.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material666.shininess = 0;
material = Material666;

appearance = Appearance665;

let IndexedFaceSet667 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet667.solid = False;
IndexedFaceSet667.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet667.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate668 = browser.currentScene.createNode("Coordinate");
Coordinate668.point = new X3D.MFVec3f([20.21026,0.075,22.7012,20.07614,0.075,22.04322,21.01783,0.075,22.53659,20.88371,0.075,21.87861]);
coord = Coordinate668;

geometry = IndexedFaceSet667;

browser.currentScene.children[131] = Shape664;

let Shape669 = browser.currentScene.createNode("Shape");
let Appearance670 = browser.currentScene.createNode("Appearance");
let Material671 = browser.currentScene.createNode("Material");
Material671.ambientIntensity = 0;
Material671.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material671.shininess = 0;
material = Material671;

appearance = Appearance670;

let IndexedFaceSet672 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet672.solid = False;
IndexedFaceSet672.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet672.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate673 = browser.currentScene.createNode("Coordinate");
Coordinate673.point = new X3D.MFVec3f([20.07215,0.075,22.02362,19.93803,0.075,21.36564,20.87972,0.075,21.85901,20.7456,0.075,21.20103]);
coord = Coordinate673;

geometry = IndexedFaceSet672;

browser.currentScene.children[132] = Shape669;

let Shape674 = browser.currentScene.createNode("Shape");
let Appearance675 = browser.currentScene.createNode("Appearance");
let Material676 = browser.currentScene.createNode("Material");
Material676.ambientIntensity = 0;
Material676.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material676.shininess = 0;
material = Material676;

appearance = Appearance675;

let IndexedFaceSet677 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet677.solid = False;
IndexedFaceSet677.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet677.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate678 = browser.currentScene.createNode("Coordinate");
Coordinate678.point = new X3D.MFVec3f([20.07538,0.075,19.92619,20.27238,0.075,19.88603,20.46937,0.075,19.84588,20.2115,0.075,20.59397,20.40849,0.075,20.55381,20.60549,0.075,20.51366,20.34762,0.075,21.26174,20.54461,0.075,21.22159,20.7416,0.075,21.18144]);
coord = Coordinate678;

geometry = IndexedFaceSet677;

browser.currentScene.children[133] = Shape674;

let Shape679 = browser.currentScene.createNode("Shape");
let Appearance680 = browser.currentScene.createNode("Appearance");
let Material681 = browser.currentScene.createNode("Material");
Material681.ambientIntensity = 0;
Material681.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material681.shininess = 0;
material = Material681;

appearance = Appearance680;

let IndexedFaceSet682 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet682.solid = False;
IndexedFaceSet682.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet682.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate683 = browser.currentScene.createNode("Coordinate");
Coordinate683.point = new X3D.MFVec3f([19.6618,0.075,20.01049,19.85879,0.075,19.97034,20.05579,0.075,19.93018,19.79792,0.075,20.67827,19.99491,0.075,20.63811,20.1919,0.075,20.59796,19.93403,0.075,21.34605,20.13103,0.075,21.30589,20.32802,0.075,21.26574]);
coord = Coordinate683;

geometry = IndexedFaceSet682;

browser.currentScene.children[134] = Shape679;

let Shape684 = browser.currentScene.createNode("Shape");
let Appearance685 = browser.currentScene.createNode("Appearance");
let Material686 = browser.currentScene.createNode("Material");
Material686.ambientIntensity = 0;
Material686.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material686.shininess = 0;
material = Material686;

appearance = Appearance685;

let IndexedFaceSet687 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet687.solid = False;
IndexedFaceSet687.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet687.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate688 = browser.currentScene.createNode("Coordinate");
Coordinate688.point = new X3D.MFVec3f([19.6578,0.075,19.99089,19.52369,0.075,19.33291,20.46538,0.075,19.82628,20.33126,0.075,19.1683]);
coord = Coordinate688;

geometry = IndexedFaceSet687;

browser.currentScene.children[135] = Shape684;

let Shape689 = browser.currentScene.createNode("Shape");
let Appearance690 = browser.currentScene.createNode("Appearance");
let Material691 = browser.currentScene.createNode("Material");
Material691.ambientIntensity = 0;
Material691.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material691.shininess = 0;
material = Material691;

appearance = Appearance690;

let IndexedFaceSet692 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet692.solid = False;
IndexedFaceSet692.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet692.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new X3D.MFVec3f([19.51969,0.075,19.31332,19.38557,0.075,18.65534,19.92348,0.075,19.23101,19.78936,0.075,18.57303,20.32726,0.075,19.14871,20.19314,0.075,18.49073]);
coord = Coordinate693;

geometry = IndexedFaceSet692;

browser.currentScene.children[136] = Shape689;

let Shape694 = browser.currentScene.createNode("Shape");
let Appearance695 = browser.currentScene.createNode("Appearance");
let Material696 = browser.currentScene.createNode("Material");
Material696.ambientIntensity = 0;
Material696.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material696.shininess = 0;
material = Material696;

appearance = Appearance695;

let IndexedFaceSet697 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet697.solid = False;
IndexedFaceSet697.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet697.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate698 = browser.currentScene.createNode("Coordinate");
Coordinate698.point = new X3D.MFVec3f([19.52293,0.075,17.21588,19.91691,0.075,17.13557,19.79516,0.075,18.55144,20.18915,0.075,18.47113]);
coord = Coordinate698;

geometry = IndexedFaceSet697;

browser.currentScene.children[137] = Shape694;

let Shape699 = browser.currentScene.createNode("Shape");
let Appearance700 = browser.currentScene.createNode("Appearance");
let Material701 = browser.currentScene.createNode("Material");
Material701.ambientIntensity = 0;
Material701.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material701.shininess = 0;
material = Material701;

appearance = Appearance700;

let IndexedFaceSet702 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet702.solid = False;
IndexedFaceSet702.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet702.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate703 = browser.currentScene.createNode("Coordinate");
Coordinate703.point = new X3D.MFVec3f([19.10934,0.075,17.30019,19.30634,0.075,17.26003,19.50333,0.075,17.21988,19.24546,0.075,17.96796,19.44245,0.075,17.92781,19.63945,0.075,17.88766,19.38158,0.075,18.63574,19.57857,0.075,18.59559,19.77556,0.075,18.55543]);
coord = Coordinate703;

geometry = IndexedFaceSet702;

browser.currentScene.children[138] = Shape699;

let Shape704 = browser.currentScene.createNode("Shape");
let Appearance705 = browser.currentScene.createNode("Appearance");
let Material706 = browser.currentScene.createNode("Material");
Material706.ambientIntensity = 0;
Material706.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material706.shininess = 0;
material = Material706;

appearance = Appearance705;

let IndexedFaceSet707 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet707.solid = False;
IndexedFaceSet707.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet707.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate708 = browser.currentScene.createNode("Coordinate");
Coordinate708.point = new X3D.MFVec3f([19.10535,0.075,17.28059,18.97123,0.075,16.62261,19.91292,0.075,17.11598,19.7788,0.075,16.458]);
coord = Coordinate708;

geometry = IndexedFaceSet707;

browser.currentScene.children[139] = Shape704;

let Shape709 = browser.currentScene.createNode("Shape");
let Appearance710 = browser.currentScene.createNode("Appearance");
let Material711 = browser.currentScene.createNode("Material");
Material711.ambientIntensity = 0;
Material711.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material711.shininess = 0;
material = Material711;

appearance = Appearance710;

let IndexedFaceSet712 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet712.solid = False;
IndexedFaceSet712.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet712.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.point = new X3D.MFVec3f([19.64069,0.075,15.78042,19.77481,0.075,16.4384,19.2369,0.075,15.86273,19.37102,0.075,16.52071,18.83311,0.075,15.94503,18.96724,0.075,16.60301]);
coord = Coordinate713;

geometry = IndexedFaceSet712;

browser.currentScene.children[140] = Shape709;

let Shape714 = browser.currentScene.createNode("Shape");
let Appearance715 = browser.currentScene.createNode("Appearance");
let Material716 = browser.currentScene.createNode("Material");
Material716.ambientIntensity = 0;
Material716.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material716.shininess = 0;
material = Material716;

appearance = Appearance715;

let IndexedFaceSet717 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet717.solid = False;
IndexedFaceSet717.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet717.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate718 = browser.currentScene.createNode("Coordinate");
Coordinate718.point = new X3D.MFVec3f([19.63669,0.075,15.76082,19.2427,0.075,15.84113,19.36446,0.075,14.42527,18.97047,0.075,14.50558]);
coord = Coordinate718;

geometry = IndexedFaceSet717;

browser.currentScene.children[141] = Shape714;

let Shape719 = browser.currentScene.createNode("Shape");
let Appearance720 = browser.currentScene.createNode("Appearance");
let Material721 = browser.currentScene.createNode("Material");
Material721.ambientIntensity = 0;
Material721.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material721.shininess = 0;
material = Material721;

appearance = Appearance720;

let IndexedFaceSet722 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet722.solid = False;
IndexedFaceSet722.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet722.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new X3D.MFVec3f([18.55689,0.075,14.58988,18.75388,0.075,14.54973,18.95087,0.075,14.50957,18.693,0.075,15.25766,18.89,0.075,15.2175,19.08699,0.075,15.17735,18.82912,0.075,15.92544,19.02611,0.075,15.88528,19.22311,0.075,15.84513]);
coord = Coordinate723;

geometry = IndexedFaceSet722;

browser.currentScene.children[142] = Shape719;

let Shape724 = browser.currentScene.createNode("Shape");
let Appearance725 = browser.currentScene.createNode("Appearance");
let Material726 = browser.currentScene.createNode("Material");
Material726.ambientIntensity = 0;
Material726.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material726.shininess = 0;
material = Material726;

appearance = Appearance725;

let IndexedFaceSet727 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet727.solid = False;
IndexedFaceSet727.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet727.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate728 = browser.currentScene.createNode("Coordinate");
Coordinate728.point = new X3D.MFVec3f([18.55289,0.075,14.57028,18.41877,0.075,13.9123,18.95668,0.075,14.48798,18.82256,0.075,13.83,19.36046,0.075,14.40567,19.22635,0.075,13.74769]);
coord = Coordinate728;

geometry = IndexedFaceSet727;

browser.currentScene.children[143] = Shape724;

let Shape729 = browser.currentScene.createNode("Shape");
let Appearance730 = browser.currentScene.createNode("Appearance");
let Material731 = browser.currentScene.createNode("Material");
Material731.ambientIntensity = 0;
Material731.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material731.shininess = 0;
material = Material731;

appearance = Appearance730;

let IndexedFaceSet732 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet732.solid = False;
IndexedFaceSet732.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet732.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate733 = browser.currentScene.createNode("Coordinate");
Coordinate733.point = new X3D.MFVec3f([19.08823,0.075,13.07012,19.22235,0.075,13.7281,18.68444,0.075,13.15242,18.81856,0.075,13.8104,18.28066,0.075,13.23473,18.41478,0.075,13.89271]);
coord = Coordinate733;

geometry = IndexedFaceSet732;

browser.currentScene.children[144] = Shape729;

let Shape734 = browser.currentScene.createNode("Shape");
let Appearance735 = browser.currentScene.createNode("Appearance");
let Material736 = browser.currentScene.createNode("Material");
Material736.ambientIntensity = 0;
Material736.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material736.shininess = 0;
material = Material736;

appearance = Appearance735;

let IndexedFaceSet737 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet737.solid = False;
IndexedFaceSet737.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet737.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate738 = browser.currentScene.createNode("Coordinate");
Coordinate738.point = new X3D.MFVec3f([19.08424,0.075,13.05052,18.69025,0.075,13.13083,18.812,0.075,11.71496,18.41801,0.075,11.79527]);
coord = Coordinate738;

geometry = IndexedFaceSet737;

browser.currentScene.children[145] = Shape734;

let Shape739 = browser.currentScene.createNode("Shape");
let Appearance740 = browser.currentScene.createNode("Appearance");
let Material741 = browser.currentScene.createNode("Material");
Material741.ambientIntensity = 0;
Material741.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material741.shininess = 0;
material = Material741;

appearance = Appearance740;

let IndexedFaceSet742 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet742.solid = False;
IndexedFaceSet742.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet742.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate743 = browser.currentScene.createNode("Coordinate");
Coordinate743.point = new X3D.MFVec3f([18.00443,0.075,11.87957,18.20143,0.075,11.83942,18.39842,0.075,11.79927,18.14055,0.075,12.54735,18.33754,0.075,12.5072,18.53453,0.075,12.46704,18.27666,0.075,13.21513,18.47366,0.075,13.17498,18.67065,0.075,13.13482]);
coord = Coordinate743;

geometry = IndexedFaceSet742;

browser.currentScene.children[146] = Shape739;

let Shape744 = browser.currentScene.createNode("Shape");
let Appearance745 = browser.currentScene.createNode("Appearance");
let Material746 = browser.currentScene.createNode("Material");
Material746.ambientIntensity = 0;
Material746.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material746.shininess = 0;
material = Material746;

appearance = Appearance745;

let IndexedFaceSet747 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet747.solid = False;
IndexedFaceSet747.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet747.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate748 = browser.currentScene.createNode("Coordinate");
Coordinate748.point = new X3D.MFVec3f([18.00044,0.075,11.85998,17.86632,0.075,11.202,18.80801,0.075,11.69537,18.67389,0.075,11.03739]);
coord = Coordinate748;

geometry = IndexedFaceSet747;

browser.currentScene.children[147] = Shape744;

let Shape749 = browser.currentScene.createNode("Shape");
let Appearance750 = browser.currentScene.createNode("Appearance");
let Material751 = browser.currentScene.createNode("Material");
Material751.ambientIntensity = 0;
Material751.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material751.shininess = 0;
material = Material751;

appearance = Appearance750;

let IndexedFaceSet752 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet752.solid = False;
IndexedFaceSet752.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet752.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate753 = browser.currentScene.createNode("Coordinate");
Coordinate753.point = new X3D.MFVec3f([17.86232,0.075,11.1824,17.79526,0.075,10.85341,17.7282,0.075,10.52442,18.66989,0.075,11.01779,18.60283,0.075,10.6888,18.53577,0.075,10.35981]);
coord = Coordinate753;

geometry = IndexedFaceSet752;

browser.currentScene.children[148] = Shape749;

let Shape754 = browser.currentScene.createNode("Shape");
let Appearance755 = browser.currentScene.createNode("Appearance");
let Material756 = browser.currentScene.createNode("Material");
Material756.ambientIntensity = 0;
Material756.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material756.shininess = 0;
material = Material756;

appearance = Appearance755;

let IndexedFaceSet757 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet757.solid = False;
IndexedFaceSet757.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet757.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate758 = browser.currentScene.createNode("Coordinate");
Coordinate758.point = new X3D.MFVec3f([17.86556,0.075,9.084966,18.25955,0.075,9.004658,18.13779,0.075,10.42052,18.53178,0.075,10.34021]);
coord = Coordinate758;

geometry = IndexedFaceSet757;

browser.currentScene.children[149] = Shape754;

let Shape759 = browser.currentScene.createNode("Shape");
let Appearance760 = browser.currentScene.createNode("Appearance");
let Material761 = browser.currentScene.createNode("Material");
Material761.ambientIntensity = 0;
Material761.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material761.shininess = 0;
material = Material761;

appearance = Appearance760;

let IndexedFaceSet762 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet762.solid = False;
IndexedFaceSet762.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet762.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate763 = browser.currentScene.createNode("Coordinate");
Coordinate763.point = new X3D.MFVec3f([18.1182,0.075,10.42452,17.9212,0.075,10.46467,17.72421,0.075,10.50482,17.98208,0.075,9.756739,17.78509,0.075,9.796892,17.58809,0.075,9.837047,17.84596,0.075,9.088961,17.64897,0.075,9.129114,17.45197,0.075,9.169269]);
coord = Coordinate763;

geometry = IndexedFaceSet762;

browser.currentScene.children[150] = Shape759;

let Shape764 = browser.currentScene.createNode("Shape");
let Appearance765 = browser.currentScene.createNode("Appearance");
let Material766 = browser.currentScene.createNode("Material");
Material766.ambientIntensity = 0;
Material766.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material766.shininess = 0;
material = Material766;

appearance = Appearance765;

let IndexedFaceSet767 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet767.solid = False;
IndexedFaceSet767.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet767.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new X3D.MFVec3f([18.12143,0.075,8.327081,18.25555,0.075,8.985061,17.31386,0.075,8.491693,17.44798,0.075,9.149672]);
coord = Coordinate768;

geometry = IndexedFaceSet767;

browser.currentScene.children[151] = Shape764;

let Shape769 = browser.currentScene.createNode("Shape");
let Appearance770 = browser.currentScene.createNode("Appearance");
let Material771 = browser.currentScene.createNode("Material");
Material771.ambientIntensity = 0;
Material771.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material771.shininess = 0;
material = Material771;

appearance = Appearance770;

let IndexedFaceSet772 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet772.solid = False;
IndexedFaceSet772.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet772.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate773 = browser.currentScene.createNode("Coordinate");
Coordinate773.point = new X3D.MFVec3f([17.30987,0.075,8.472095,17.24281,0.075,8.143106,17.17575,0.075,7.814116,17.71365,0.075,8.38979,17.64659,0.075,8.0608,17.57953,0.075,7.73181,18.11744,0.075,8.307484,18.05038,0.075,7.978494,17.98332,0.075,7.649504]);
coord = Coordinate773;

geometry = IndexedFaceSet772;

browser.currentScene.children[152] = Shape769;

let Shape774 = browser.currentScene.createNode("Shape");
let Appearance775 = browser.currentScene.createNode("Appearance");
let Material776 = browser.currentScene.createNode("Material");
Material776.ambientIntensity = 0;
Material776.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material776.shininess = 0;
material = Material776;

appearance = Appearance775;

let IndexedFaceSet777 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet777.solid = False;
IndexedFaceSet777.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet777.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate778 = browser.currentScene.createNode("Coordinate");
Coordinate778.point = new X3D.MFVec3f([17.3131,0.075,6.37466,17.5101,0.075,6.334506,17.70709,0.075,6.294352,17.44922,0.075,7.042438,17.64621,0.075,7.002284,17.84321,0.075,6.96213,17.58534,0.075,7.710216,17.78233,0.075,7.670062,17.97932,0.075,7.629908]);
coord = Coordinate778;

geometry = IndexedFaceSet777;

browser.currentScene.children[153] = Shape774;

let Shape779 = browser.currentScene.createNode("Shape");
let Appearance780 = browser.currentScene.createNode("Appearance");
let Material781 = browser.currentScene.createNode("Material");
Material781.ambientIntensity = 0;
Material781.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material781.shininess = 0;
material = Material781;

appearance = Appearance780;

let IndexedFaceSet782 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet782.solid = False;
IndexedFaceSet782.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet782.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate783 = browser.currentScene.createNode("Coordinate");
Coordinate783.point = new X3D.MFVec3f([16.89952,0.075,6.458963,17.29351,0.075,6.378654,17.17175,0.075,7.794519,17.56574,0.075,7.714211]);
coord = Coordinate783;

geometry = IndexedFaceSet782;

browser.currentScene.children[154] = Shape779;

let Shape784 = browser.currentScene.createNode("Shape");
let Appearance785 = browser.currentScene.createNode("Appearance");
let Material786 = browser.currentScene.createNode("Material");
Material786.ambientIntensity = 0;
Material786.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material786.shininess = 0;
material = Material786;

appearance = Appearance785;

let IndexedFaceSet787 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet787.solid = False;
IndexedFaceSet787.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet787.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate788 = browser.currentScene.createNode("Coordinate");
Coordinate788.point = new X3D.MFVec3f([16.89552,0.075,6.439366,16.76141,0.075,5.781386,17.29931,0.075,6.35706,17.16519,0.075,5.699081,17.7031,0.075,6.274755,17.56898,0.075,5.616775]);
coord = Coordinate788;

geometry = IndexedFaceSet787;

browser.currentScene.children[155] = Shape784;

let Shape789 = browser.currentScene.createNode("Shape");
let Appearance790 = browser.currentScene.createNode("Appearance");
let Material791 = browser.currentScene.createNode("Material");
Material791.ambientIntensity = 0;
Material791.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material791.shininess = 0;
material = Material791;

appearance = Appearance790;

let IndexedFaceSet792 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet792.solid = False;
IndexedFaceSet792.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet792.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate793 = browser.currentScene.createNode("Coordinate");
Coordinate793.point = new X3D.MFVec3f([16.75741,0.075,5.761789,16.62329,0.075,5.10381,17.1612,0.075,5.679484,17.02708,0.075,5.021504,17.56498,0.075,5.597178,17.43086,0.075,4.939198]);
coord = Coordinate793;

geometry = IndexedFaceSet792;

browser.currentScene.children[156] = Shape789;

let Shape794 = browser.currentScene.createNode("Shape");
let Appearance795 = browser.currentScene.createNode("Appearance");
let Material796 = browser.currentScene.createNode("Material");
Material796.ambientIntensity = 0;
Material796.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material796.shininess = 0;
material = Material796;

appearance = Appearance795;

let IndexedFaceSet797 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet797.solid = False;
IndexedFaceSet797.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet797.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate798 = browser.currentScene.createNode("Coordinate");
Coordinate798.point = new X3D.MFVec3f([17.42687,0.075,4.919601,17.03288,0.075,4.99991,17.29075,0.075,4.251824,16.89676,0.075,4.332132,17.15463,0.075,3.584046,16.76065,0.075,3.664354]);
coord = Coordinate798;

geometry = IndexedFaceSet797;

browser.currentScene.children[157] = Shape794;

let Shape799 = browser.currentScene.createNode("Shape");
let Appearance800 = browser.currentScene.createNode("Appearance");
let Material801 = browser.currentScene.createNode("Material");
Material801.ambientIntensity = 0;
Material801.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material801.shininess = 0;
material = Material801;

appearance = Appearance800;

let IndexedFaceSet802 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet802.solid = False;
IndexedFaceSet802.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet802.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate803 = browser.currentScene.createNode("Coordinate");
Coordinate803.point = new X3D.MFVec3f([16.34706,0.075,3.748657,16.74105,0.075,3.668349,16.6193,0.075,5.084213,17.01328,0.075,5.003905]);
coord = Coordinate803;

geometry = IndexedFaceSet802;

browser.currentScene.children[158] = Shape799;

let Shape804 = browser.currentScene.createNode("Shape");
let Appearance805 = browser.currentScene.createNode("Appearance");
let Material806 = browser.currentScene.createNode("Material");
Material806.ambientIntensity = 0;
Material806.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material806.shininess = 0;
material = Material806;

appearance = Appearance805;

let IndexedFaceSet807 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet807.solid = False;
IndexedFaceSet807.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet807.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate808 = browser.currentScene.createNode("Coordinate");
Coordinate808.point = new X3D.MFVec3f([16.34307,0.075,3.72906,16.20895,0.075,3.071081,16.74685,0.075,3.646755,16.61274,0.075,2.988775,17.15064,0.075,3.564449,17.01652,0.075,2.906469]);
coord = Coordinate808;

geometry = IndexedFaceSet807;

browser.currentScene.children[159] = Shape804;

let Shape809 = browser.currentScene.createNode("Shape");
let Appearance810 = browser.currentScene.createNode("Appearance");
let Material811 = browser.currentScene.createNode("Material");
Material811.ambientIntensity = 0;
Material811.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material811.shininess = 0;
material = Material811;

appearance = Appearance810;

let IndexedFaceSet812 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet812.solid = False;
IndexedFaceSet812.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet812.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new X3D.MFVec3f([20.76423,0.075,29.64557,20.63011,0.075,28.98759,21.5718,0.075,29.48096,21.43769,0.075,28.82298]);
coord = Coordinate813;

geometry = IndexedFaceSet812;

browser.currentScene.children[160] = Shape809;

let Shape814 = browser.currentScene.createNode("Shape");
let Appearance815 = browser.currentScene.createNode("Appearance");
let Material816 = browser.currentScene.createNode("Material");
Material816.ambientIntensity = 0;
Material816.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material816.shininess = 0;
material = Material816;

appearance = Appearance815;

let IndexedFaceSet817 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet817.solid = False;
IndexedFaceSet817.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet817.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate818 = browser.currentScene.createNode("Coordinate");
Coordinate818.point = new X3D.MFVec3f([21.29957,0.075,28.1454,21.43369,0.075,28.80338,20.492,0.075,28.31001,20.62612,0.075,28.96799]);
coord = Coordinate818;

geometry = IndexedFaceSet817;

browser.currentScene.children[161] = Shape814;

let Shape819 = browser.currentScene.createNode("Shape");
let Appearance820 = browser.currentScene.createNode("Appearance");
let Material821 = browser.currentScene.createNode("Material");
Material821.ambientIntensity = 0;
Material821.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material821.shininess = 0;
material = Material821;

appearance = Appearance820;

let IndexedFaceSet822 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet822.solid = False;
IndexedFaceSet822.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet822.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new X3D.MFVec3f([20.62935,0.075,26.87056,21.02334,0.075,26.79025,20.76547,0.075,27.53834,21.15946,0.075,27.45803,20.90159,0.075,28.20612,21.29558,0.075,28.12581]);
coord = Coordinate823;

geometry = IndexedFaceSet822;

browser.currentScene.children[162] = Shape819;

let Shape824 = browser.currentScene.createNode("Shape");
let Appearance825 = browser.currentScene.createNode("Appearance");
let Material826 = browser.currentScene.createNode("Material");
Material826.ambientIntensity = 0;
Material826.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material826.shininess = 0;
material = Material826;

appearance = Appearance825;

let IndexedFaceSet827 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet827.solid = False;
IndexedFaceSet827.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet827.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate828 = browser.currentScene.createNode("Coordinate");
Coordinate828.point = new X3D.MFVec3f([20.21577,0.075,26.95486,20.41277,0.075,26.91471,20.60976,0.075,26.87455,20.35189,0.075,27.62264,20.54888,0.075,27.58249,20.74587,0.075,27.54233,20.488,0.075,28.29042,20.685,0.075,28.25026,20.88199,0.075,28.21011]);
coord = Coordinate828;

geometry = IndexedFaceSet827;

browser.currentScene.children[163] = Shape824;

let Shape829 = browser.currentScene.createNode("Shape");
let Appearance830 = browser.currentScene.createNode("Appearance");
let Material831 = browser.currentScene.createNode("Material");
Material831.ambientIntensity = 0;
Material831.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material831.shininess = 0;
material = Material831;

appearance = Appearance830;

let IndexedFaceSet832 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet832.solid = False;
IndexedFaceSet832.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet832.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate833 = browser.currentScene.createNode("Coordinate");
Coordinate833.point = new X3D.MFVec3f([20.21178,0.075,26.93526,20.07766,0.075,26.27728,21.01935,0.075,26.77065,20.88523,0.075,26.11267]);
coord = Coordinate833;

geometry = IndexedFaceSet832;

browser.currentScene.children[164] = Shape829;

let Shape834 = browser.currentScene.createNode("Shape");
let Appearance835 = browser.currentScene.createNode("Appearance");
let Material836 = browser.currentScene.createNode("Material");
Material836.ambientIntensity = 0;
Material836.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material836.shininess = 0;
material = Material836;

appearance = Appearance835;

let IndexedFaceSet837 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet837.solid = False;
IndexedFaceSet837.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet837.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate838 = browser.currentScene.createNode("Coordinate");
Coordinate838.point = new X3D.MFVec3f([20.07366,0.075,26.25769,19.93954,0.075,25.59971,20.88123,0.075,26.09308,20.74711,0.075,25.4351]);
coord = Coordinate838;

geometry = IndexedFaceSet837;

browser.currentScene.children[165] = Shape834;

let Shape839 = browser.currentScene.createNode("Shape");
let Appearance840 = browser.currentScene.createNode("Appearance");
let Material841 = browser.currentScene.createNode("Material");
Material841.ambientIntensity = 0;
Material841.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material841.shininess = 0;
material = Material841;

appearance = Appearance840;

let IndexedFaceSet842 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet842.solid = False;
IndexedFaceSet842.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet842.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate843 = browser.currentScene.createNode("Coordinate");
Coordinate843.point = new X3D.MFVec3f([20.0769,0.075,24.16025,20.47089,0.075,24.07994,20.21302,0.075,24.82803,20.607,0.075,24.74772,20.34913,0.075,25.49581,20.74312,0.075,25.4155]);
coord = Coordinate843;

geometry = IndexedFaceSet842;

browser.currentScene.children[166] = Shape839;

let Shape844 = browser.currentScene.createNode("Shape");
let Appearance845 = browser.currentScene.createNode("Appearance");
let Material846 = browser.currentScene.createNode("Material");
Material846.ambientIntensity = 0;
Material846.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material846.shininess = 0;
material = Material846;

appearance = Appearance845;

let IndexedFaceSet847 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet847.solid = False;
IndexedFaceSet847.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet847.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate848 = browser.currentScene.createNode("Coordinate");
Coordinate848.point = new X3D.MFVec3f([20.32954,0.075,25.4998,20.13254,0.075,25.53996,19.93555,0.075,25.58011,20.19342,0.075,24.83203,19.99643,0.075,24.87218,19.79943,0.075,24.91233,20.0573,0.075,24.16425,19.86031,0.075,24.2044,19.66331,0.075,24.24456]);
coord = Coordinate848;

geometry = IndexedFaceSet847;

browser.currentScene.children[167] = Shape844;

let Shape849 = browser.currentScene.createNode("Shape");
let Appearance850 = browser.currentScene.createNode("Appearance");
let Material851 = browser.currentScene.createNode("Material");
Material851.ambientIntensity = 0;
Material851.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material851.shininess = 0;
material = Material851;

appearance = Appearance850;

let IndexedFaceSet852 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet852.solid = False;
IndexedFaceSet852.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet852.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate853 = browser.currentScene.createNode("Coordinate");
Coordinate853.point = new X3D.MFVec3f([20.33277,0.075,23.40237,20.46689,0.075,24.06035,19.5252,0.075,23.56698,19.65932,0.075,24.22496]);
coord = Coordinate853;

geometry = IndexedFaceSet852;

browser.currentScene.children[168] = Shape849;

let Shape854 = browser.currentScene.createNode("Shape");
let Appearance855 = browser.currentScene.createNode("Appearance");
let Material856 = browser.currentScene.createNode("Material");
Material856.ambientIntensity = 0;
Material856.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material856.shininess = 0;
material = Material856;

appearance = Appearance855;

let IndexedFaceSet857 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet857.solid = False;
IndexedFaceSet857.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet857.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate858 = browser.currentScene.createNode("Coordinate");
Coordinate858.point = new X3D.MFVec3f([19.52121,0.075,23.54738,19.38709,0.075,22.8894,20.32878,0.075,23.38277,20.19466,0.075,22.72479]);
coord = Coordinate858;

geometry = IndexedFaceSet857;

browser.currentScene.children[169] = Shape854;

let Shape859 = browser.currentScene.createNode("Shape");
let Appearance860 = browser.currentScene.createNode("Appearance");
let Material861 = browser.currentScene.createNode("Material");
Material861.ambientIntensity = 0;
Material861.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material861.shininess = 0;
material = Material861;

appearance = Appearance860;

let IndexedFaceSet862 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet862.solid = False;
IndexedFaceSet862.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet862.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate863 = browser.currentScene.createNode("Coordinate");
Coordinate863.point = new X3D.MFVec3f([19.52444,0.075,21.44995,19.72144,0.075,21.40979,19.91843,0.075,21.36964,19.66056,0.075,22.11773,19.85755,0.075,22.07757,20.05455,0.075,22.03742,19.79668,0.075,22.7855,19.99367,0.075,22.74535,20.19066,0.075,22.70519]);
coord = Coordinate863;

geometry = IndexedFaceSet862;

browser.currentScene.children[170] = Shape859;

let Shape864 = browser.currentScene.createNode("Shape");
let Appearance865 = browser.currentScene.createNode("Appearance");
let Material866 = browser.currentScene.createNode("Material");
Material866.ambientIntensity = 0;
Material866.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material866.shininess = 0;
material = Material866;

appearance = Appearance865;

let IndexedFaceSet867 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet867.solid = False;
IndexedFaceSet867.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet867.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate868 = browser.currentScene.createNode("Coordinate");
Coordinate868.point = new X3D.MFVec3f([19.77708,0.075,22.7895,19.38309,0.075,22.86981,19.50485,0.075,21.45394,19.11086,0.075,21.53425]);
coord = Coordinate868;

geometry = IndexedFaceSet867;

browser.currentScene.children[171] = Shape864;

let Shape869 = browser.currentScene.createNode("Shape");
let Appearance870 = browser.currentScene.createNode("Appearance");
let Material871 = browser.currentScene.createNode("Material");
Material871.ambientIntensity = 0;
Material871.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material871.shininess = 0;
material = Material871;

appearance = Appearance870;

let IndexedFaceSet872 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet872.solid = False;
IndexedFaceSet872.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet872.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new X3D.MFVec3f([19.78032,0.075,20.69206,19.91444,0.075,21.35004,18.97275,0.075,20.85667,19.10686,0.075,21.51465]);
coord = Coordinate873;

geometry = IndexedFaceSet872;

browser.currentScene.children[172] = Shape869;

let Shape874 = browser.currentScene.createNode("Shape");
let Appearance875 = browser.currentScene.createNode("Appearance");
let Material876 = browser.currentScene.createNode("Material");
Material876.ambientIntensity = 0;
Material876.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material876.shininess = 0;
material = Material876;

appearance = Appearance875;

let IndexedFaceSet877 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet877.solid = False;
IndexedFaceSet877.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet877.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate878 = browser.currentScene.createNode("Coordinate");
Coordinate878.point = new X3D.MFVec3f([18.96875,0.075,20.83708,18.83463,0.075,20.1791,19.77632,0.075,20.67247,19.6422,0.075,20.01449]);
coord = Coordinate878;

geometry = IndexedFaceSet877;

browser.currentScene.children[173] = Shape874;

let Shape879 = browser.currentScene.createNode("Shape");
let Appearance880 = browser.currentScene.createNode("Appearance");
let Material881 = browser.currentScene.createNode("Material");
Material881.ambientIntensity = 0;
Material881.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material881.shininess = 0;
material = Material881;

appearance = Appearance880;

let IndexedFaceSet882 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet882.solid = False;
IndexedFaceSet882.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet882.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate883 = browser.currentScene.createNode("Coordinate");
Coordinate883.point = new X3D.MFVec3f([18.97199,0.075,18.73964,19.16898,0.075,18.69949,19.36597,0.075,18.65933,19.1081,0.075,19.40742,19.3051,0.075,19.36727,19.50209,0.075,19.32711,19.24422,0.075,20.0752,19.44121,0.075,20.03504,19.63821,0.075,19.99489]);
coord = Coordinate883;

geometry = IndexedFaceSet882;

browser.currentScene.children[174] = Shape879;

let Shape884 = browser.currentScene.createNode("Shape");
let Appearance885 = browser.currentScene.createNode("Appearance");
let Material886 = browser.currentScene.createNode("Material");
Material886.ambientIntensity = 0;
Material886.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material886.shininess = 0;
material = Material886;

appearance = Appearance885;

let IndexedFaceSet887 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet887.solid = False;
IndexedFaceSet887.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet887.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate888 = browser.currentScene.createNode("Coordinate");
Coordinate888.point = new X3D.MFVec3f([18.5584,0.075,18.82394,18.7554,0.075,18.78379,18.95239,0.075,18.74364,18.69452,0.075,19.49172,18.89151,0.075,19.45157,19.08851,0.075,19.41142,18.83064,0.075,20.1595,19.02763,0.075,20.11935,19.22462,0.075,20.07919]);
coord = Coordinate888;

geometry = IndexedFaceSet887;

browser.currentScene.children[175] = Shape884;

let Shape889 = browser.currentScene.createNode("Shape");
let Appearance890 = browser.currentScene.createNode("Appearance");
let Material891 = browser.currentScene.createNode("Material");
Material891.ambientIntensity = 0;
Material891.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material891.shininess = 0;
material = Material891;

appearance = Appearance890;

let IndexedFaceSet892 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet892.solid = False;
IndexedFaceSet892.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet892.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate893 = browser.currentScene.createNode("Coordinate");
Coordinate893.point = new X3D.MFVec3f([18.55441,0.075,18.80435,18.42029,0.075,18.14637,19.36198,0.075,18.63974,19.22786,0.075,17.98176]);
coord = Coordinate893;

geometry = IndexedFaceSet892;

browser.currentScene.children[176] = Shape889;

let Shape894 = browser.currentScene.createNode("Shape");
let Appearance895 = browser.currentScene.createNode("Appearance");
let Material896 = browser.currentScene.createNode("Material");
Material896.ambientIntensity = 0;
Material896.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material896.shininess = 0;
material = Material896;

appearance = Appearance895;

let IndexedFaceSet897 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet897.solid = False;
IndexedFaceSet897.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet897.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate898 = browser.currentScene.createNode("Coordinate");
Coordinate898.point = new X3D.MFVec3f([18.41629,0.075,18.12677,18.28218,0.075,17.46879,19.22387,0.075,17.96216,19.08975,0.075,17.30418]);
coord = Coordinate898;

geometry = IndexedFaceSet897;

browser.currentScene.children[177] = Shape894;

let Shape899 = browser.currentScene.createNode("Shape");
let Appearance900 = browser.currentScene.createNode("Appearance");
let Material901 = browser.currentScene.createNode("Material");
Material901.ambientIntensity = 0;
Material901.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material901.shininess = 0;
material = Material901;

appearance = Appearance900;

let IndexedFaceSet902 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet902.solid = False;
IndexedFaceSet902.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet902.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new X3D.MFVec3f([19.08575,0.075,17.28458,18.69176,0.075,17.36489,18.81352,0.075,15.94903,18.41953,0.075,16.02934]);
coord = Coordinate903;

geometry = IndexedFaceSet902;

browser.currentScene.children[178] = Shape899;

let Shape904 = browser.currentScene.createNode("Shape");
let Appearance905 = browser.currentScene.createNode("Appearance");
let Material906 = browser.currentScene.createNode("Material");
Material906.ambientIntensity = 0;
Material906.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material906.shininess = 0;
material = Material906;

appearance = Appearance905;

let IndexedFaceSet907 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet907.solid = False;
IndexedFaceSet907.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet907.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new X3D.MFVec3f([18.00595,0.075,16.11364,18.39993,0.075,16.03333,18.27818,0.075,17.44919,18.67217,0.075,17.36889]);
coord = Coordinate908;

geometry = IndexedFaceSet907;

browser.currentScene.children[179] = Shape904;

let Shape909 = browser.currentScene.createNode("Shape");
let Appearance910 = browser.currentScene.createNode("Appearance");
let Material911 = browser.currentScene.createNode("Material");
Material911.ambientIntensity = 0;
Material911.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material911.shininess = 0;
material = Material911;

appearance = Appearance910;

let IndexedFaceSet912 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet912.solid = False;
IndexedFaceSet912.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet912.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate913 = browser.currentScene.createNode("Coordinate");
Coordinate913.point = new X3D.MFVec3f([18.00195,0.075,16.09404,17.86783,0.075,15.43606,18.80952,0.075,15.92943,18.6754,0.075,15.27145]);
coord = Coordinate913;

geometry = IndexedFaceSet912;

browser.currentScene.children[180] = Shape909;

let Shape914 = browser.currentScene.createNode("Shape");
let Appearance915 = browser.currentScene.createNode("Appearance");
let Material916 = browser.currentScene.createNode("Material");
Material916.ambientIntensity = 0;
Material916.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material916.shininess = 0;
material = Material916;

appearance = Appearance915;

let IndexedFaceSet917 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet917.solid = False;
IndexedFaceSet917.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet917.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate918 = browser.currentScene.createNode("Coordinate");
Coordinate918.point = new X3D.MFVec3f([17.86384,0.075,15.41647,17.72972,0.075,14.75849,18.67141,0.075,15.25185,18.53729,0.075,14.59387]);
coord = Coordinate918;

geometry = IndexedFaceSet917;

browser.currentScene.children[181] = Shape914;

let Shape919 = browser.currentScene.createNode("Shape");
let Appearance920 = browser.currentScene.createNode("Appearance");
let Material921 = browser.currentScene.createNode("Material");
Material921.ambientIntensity = 0;
Material921.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material921.shininess = 0;
material = Material921;

appearance = Appearance920;

let IndexedFaceSet922 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet922.solid = False;
IndexedFaceSet922.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet922.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new X3D.MFVec3f([18.5333,0.075,14.57428,18.13931,0.075,14.65459,18.39718,0.075,13.9065,18.00319,0.075,13.98681,18.26106,0.075,13.23872,17.86707,0.075,13.31903]);
coord = Coordinate923;

geometry = IndexedFaceSet922;

browser.currentScene.children[182] = Shape919;

let Shape924 = browser.currentScene.createNode("Shape");
let Appearance925 = browser.currentScene.createNode("Appearance");
let Material926 = browser.currentScene.createNode("Material");
Material926.ambientIntensity = 0;
Material926.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material926.shininess = 0;
material = Material926;

appearance = Appearance925;

let IndexedFaceSet927 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet927.solid = False;
IndexedFaceSet927.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet927.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate928 = browser.currentScene.createNode("Coordinate");
Coordinate928.point = new X3D.MFVec3f([17.45349,0.075,13.40333,17.84748,0.075,13.32302,17.72573,0.075,14.73889,18.11971,0.075,14.65858]);
coord = Coordinate928;

geometry = IndexedFaceSet927;

browser.currentScene.children[183] = Shape924;

let Shape929 = browser.currentScene.createNode("Shape");
let Appearance930 = browser.currentScene.createNode("Appearance");
let Material931 = browser.currentScene.createNode("Material");
Material931.ambientIntensity = 0;
Material931.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material931.shininess = 0;
material = Material931;

appearance = Appearance930;

let IndexedFaceSet932 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet932.solid = False;
IndexedFaceSet932.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet932.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate933 = browser.currentScene.createNode("Coordinate");
Coordinate933.point = new X3D.MFVec3f([17.4495,0.075,13.38374,17.31538,0.075,12.72576,17.85328,0.075,13.30143,17.71916,0.075,12.64345,18.25707,0.075,13.21912,18.12295,0.075,12.56115]);
coord = Coordinate933;

geometry = IndexedFaceSet932;

browser.currentScene.children[184] = Shape929;

let Shape934 = browser.currentScene.createNode("Shape");
let Appearance935 = browser.currentScene.createNode("Appearance");
let Material936 = browser.currentScene.createNode("Material");
Material936.ambientIntensity = 0;
Material936.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material936.shininess = 0;
material = Material936;

appearance = Appearance935;

let IndexedFaceSet937 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet937.solid = False;
IndexedFaceSet937.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet937.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate938 = browser.currentScene.createNode("Coordinate");
Coordinate938.point = new X3D.MFVec3f([17.98483,0.075,11.88357,18.11895,0.075,12.54155,17.17726,0.075,12.04818,17.31138,0.075,12.70616]);
coord = Coordinate938;

geometry = IndexedFaceSet937;

browser.currentScene.children[185] = Shape934;

let Shape939 = browser.currentScene.createNode("Shape");
let Appearance940 = browser.currentScene.createNode("Appearance");
let Material941 = browser.currentScene.createNode("Material");
Material941.ambientIntensity = 0;
Material941.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material941.shininess = 0;
material = Material941;

appearance = Appearance940;

let IndexedFaceSet942 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet942.solid = False;
IndexedFaceSet942.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet942.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate943 = browser.currentScene.createNode("Coordinate");
Coordinate943.point = new X3D.MFVec3f([17.98084,0.075,11.86397,17.58685,0.075,11.94428,17.70861,0.075,10.52842,17.31462,0.075,10.60872]);
coord = Coordinate943;

geometry = IndexedFaceSet942;

browser.currentScene.children[186] = Shape939;

let Shape944 = browser.currentScene.createNode("Shape");
let Appearance945 = browser.currentScene.createNode("Appearance");
let Material946 = browser.currentScene.createNode("Material");
Material946.ambientIntensity = 0;
Material946.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material946.shininess = 0;
material = Material946;

appearance = Appearance945;

let IndexedFaceSet947 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet947.solid = False;
IndexedFaceSet947.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet947.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate948 = browser.currentScene.createNode("Coordinate");
Coordinate948.point = new X3D.MFVec3f([16.90104,0.075,10.69303,17.09803,0.075,10.65287,17.29502,0.075,10.61272,17.03715,0.075,11.36081,17.23415,0.075,11.32065,17.43114,0.075,11.2805,17.17327,0.075,12.02858,17.37026,0.075,11.98843,17.56726,0.075,11.94827]);
coord = Coordinate948;

geometry = IndexedFaceSet947;

browser.currentScene.children[187] = Shape944;

let Shape949 = browser.currentScene.createNode("Shape");
let Appearance950 = browser.currentScene.createNode("Appearance");
let Material951 = browser.currentScene.createNode("Material");
Material951.ambientIntensity = 0;
Material951.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material951.shininess = 0;
material = Material951;

appearance = Appearance950;

let IndexedFaceSet952 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet952.solid = False;
IndexedFaceSet952.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet952.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate953 = browser.currentScene.createNode("Coordinate");
Coordinate953.point = new X3D.MFVec3f([16.89704,0.075,10.67343,16.76292,0.075,10.01545,17.30083,0.075,10.59112,17.16671,0.075,9.933146,17.70461,0.075,10.50882,17.57049,0.075,9.85084]);
coord = Coordinate953;

geometry = IndexedFaceSet952;

browser.currentScene.children[188] = Shape949;

let Shape954 = browser.currentScene.createNode("Shape");
let Appearance955 = browser.currentScene.createNode("Appearance");
let Material956 = browser.currentScene.createNode("Material");
Material956.ambientIntensity = 0;
Material956.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material956.shininess = 0;
material = Material956;

appearance = Appearance955;

let IndexedFaceSet957 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet957.solid = False;
IndexedFaceSet957.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet957.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate958 = browser.currentScene.createNode("Coordinate");
Coordinate958.point = new X3D.MFVec3f([17.43238,0.075,9.173264,17.5665,0.075,9.831243,16.62481,0.075,9.337874,16.75893,0.075,9.995854]);
coord = Coordinate958;

geometry = IndexedFaceSet957;

browser.currentScene.children[189] = Shape954;

let Shape959 = browser.currentScene.createNode("Shape");
let Appearance960 = browser.currentScene.createNode("Appearance");
let Material961 = browser.currentScene.createNode("Material");
Material961.ambientIntensity = 0;
Material961.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material961.shininess = 0;
material = Material961;

appearance = Appearance960;

let IndexedFaceSet962 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet962.solid = False;
IndexedFaceSet962.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet962.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate963 = browser.currentScene.createNode("Coordinate");
Coordinate963.point = new X3D.MFVec3f([16.76216,0.075,7.898419,17.15615,0.075,7.81811,16.89828,0.075,8.566196,17.29227,0.075,8.485888,17.0344,0.075,9.233974,17.42838,0.075,9.153666]);
coord = Coordinate963;

geometry = IndexedFaceSet962;

browser.currentScene.children[190] = Shape959;

let Shape964 = browser.currentScene.createNode("Shape");
let Appearance965 = browser.currentScene.createNode("Appearance");
let Material966 = browser.currentScene.createNode("Material");
Material966.ambientIntensity = 0;
Material966.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material966.shininess = 0;
material = Material966;

appearance = Appearance965;

let IndexedFaceSet967 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet967.solid = False;
IndexedFaceSet967.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet967.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate968 = browser.currentScene.createNode("Coordinate");
Coordinate968.point = new X3D.MFVec3f([16.34858,0.075,7.982722,16.74257,0.075,7.902413,16.62081,0.075,9.318277,17.0148,0.075,9.237969]);
coord = Coordinate968;

geometry = IndexedFaceSet967;

browser.currentScene.children[191] = Shape964;

let Shape969 = browser.currentScene.createNode("Shape");
let Appearance970 = browser.currentScene.createNode("Appearance");
let Material971 = browser.currentScene.createNode("Material");
Material971.ambientIntensity = 0;
Material971.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material971.shininess = 0;
material = Material971;

appearance = Appearance970;

let IndexedFaceSet972 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet972.solid = False;
IndexedFaceSet972.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet972.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate973 = browser.currentScene.createNode("Coordinate");
Coordinate973.point = new X3D.MFVec3f([17.01804,0.075,7.140534,17.15216,0.075,7.798513,16.21047,0.075,7.305145,16.34459,0.075,7.963125]);
coord = Coordinate973;

geometry = IndexedFaceSet972;

browser.currentScene.children[192] = Shape969;

let Shape974 = browser.currentScene.createNode("Shape");
let Appearance975 = browser.currentScene.createNode("Appearance");
let Material976 = browser.currentScene.createNode("Material");
Material976.ambientIntensity = 0;
Material976.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material976.shininess = 0;
material = Material976;

appearance = Appearance975;

let IndexedFaceSet977 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet977.solid = False;
IndexedFaceSet977.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet977.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate978 = browser.currentScene.createNode("Coordinate");
Coordinate978.point = new X3D.MFVec3f([16.20647,0.075,7.285548,16.07235,0.075,6.627569,17.01404,0.075,7.120937,16.87992,0.075,6.462957]);
coord = Coordinate978;

geometry = IndexedFaceSet977;

browser.currentScene.children[193] = Shape974;

let Shape979 = browser.currentScene.createNode("Shape");
let Appearance980 = browser.currentScene.createNode("Appearance");
let Material981 = browser.currentScene.createNode("Material");
Material981.ambientIntensity = 0;
Material981.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material981.shininess = 0;
material = Material981;

appearance = Appearance980;

let IndexedFaceSet982 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet982.solid = False;
IndexedFaceSet982.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet982.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate983 = browser.currentScene.createNode("Coordinate");
Coordinate983.point = new X3D.MFVec3f([16.20971,0.075,5.188113,16.4067,0.075,5.147959,16.60369,0.075,5.107805,16.34583,0.075,5.855891,16.54282,0.075,5.815737,16.73981,0.075,5.775583,16.48194,0.075,6.523669,16.67893,0.075,6.483515,16.87593,0.075,6.44336]);
coord = Coordinate983;

geometry = IndexedFaceSet982;

browser.currentScene.children[194] = Shape979;

let Shape984 = browser.currentScene.createNode("Shape");
let Appearance985 = browser.currentScene.createNode("Appearance");
let Material986 = browser.currentScene.createNode("Material");
Material986.ambientIntensity = 0;
Material986.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material986.shininess = 0;
material = Material986;

appearance = Appearance985;

let IndexedFaceSet987 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet987.solid = False;
IndexedFaceSet987.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet987.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate988 = browser.currentScene.createNode("Coordinate");
Coordinate988.point = new X3D.MFVec3f([15.79612,0.075,5.272416,15.99312,0.075,5.232262,16.19011,0.075,5.192108,15.93224,0.075,5.940194,16.12923,0.075,5.90004,16.32623,0.075,5.859886,16.06836,0.075,6.607972,16.26535,0.075,6.567818,16.46234,0.075,6.527664]);
coord = Coordinate988;

geometry = IndexedFaceSet987;

browser.currentScene.children[195] = Shape984;

let Shape989 = browser.currentScene.createNode("Shape");
let Appearance990 = browser.currentScene.createNode("Appearance");
let Material991 = browser.currentScene.createNode("Material");
Material991.ambientIntensity = 0;
Material991.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material991.shininess = 0;
material = Material991;

appearance = Appearance990;

let IndexedFaceSet992 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet992.solid = False;
IndexedFaceSet992.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet992.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate993 = browser.currentScene.createNode("Coordinate");
Coordinate993.point = new X3D.MFVec3f([15.79213,0.075,5.252819,15.65801,0.075,4.59484,16.5997,0.075,5.088208,16.46558,0.075,4.430228]);
coord = Coordinate993;

geometry = IndexedFaceSet992;

browser.currentScene.children[196] = Shape989;

let Shape994 = browser.currentScene.createNode("Shape");
let Appearance995 = browser.currentScene.createNode("Appearance");
let Material996 = browser.currentScene.createNode("Material");
Material996.ambientIntensity = 0;
Material996.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material996.shininess = 0;
material = Material996;

appearance = Appearance995;

let IndexedFaceSet997 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet997.solid = False;
IndexedFaceSet997.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet997.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate998 = browser.currentScene.createNode("Coordinate");
Coordinate998.point = new X3D.MFVec3f([16.32747,0.075,3.752652,16.46159,0.075,4.410631,15.5199,0.075,3.917263,15.65402,0.075,4.575243]);
coord = Coordinate998;

geometry = IndexedFaceSet997;

browser.currentScene.children[197] = Shape994;

let Shape999 = browser.currentScene.createNode("Shape");
let Appearance1000 = browser.currentScene.createNode("Appearance");
let Material1001 = browser.currentScene.createNode("Material");
Material1001.ambientIntensity = 0;
Material1001.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1001.shininess = 0;
material = Material1001;

appearance = Appearance1000;

let IndexedFaceSet1002 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1002.solid = False;
IndexedFaceSet1002.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1002.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new X3D.MFVec3f([15.65725,0.075,2.477808,16.05124,0.075,2.397499,15.92949,0.075,3.813363,16.32347,0.075,3.733055]);
coord = Coordinate1003;

geometry = IndexedFaceSet1002;

browser.currentScene.children[198] = Shape999;

let Shape1004 = browser.currentScene.createNode("Shape");
let Appearance1005 = browser.currentScene.createNode("Appearance");
let Material1006 = browser.currentScene.createNode("Material");
Material1006.ambientIntensity = 0;
Material1006.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1006.shininess = 0;
material = Material1006;

appearance = Appearance1005;

let IndexedFaceSet1007 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1007.solid = False;
IndexedFaceSet1007.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1007.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new X3D.MFVec3f([15.24367,0.075,2.56211,15.63765,0.075,2.481802,15.5159,0.075,3.897666,15.90989,0.075,3.817358]);
coord = Coordinate1008;

geometry = IndexedFaceSet1007;

browser.currentScene.children[199] = Shape1004;

let Shape1009 = browser.currentScene.createNode("Shape");
let Appearance1010 = browser.currentScene.createNode("Appearance");
let Material1011 = browser.currentScene.createNode("Material");
Material1011.ambientIntensity = 0;
Material1011.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1011.shininess = 0;
material = Material1011;

appearance = Appearance1010;

let IndexedFaceSet1012 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1012.solid = False;
IndexedFaceSet1012.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1012.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1013 = browser.currentScene.createNode("Coordinate");
Coordinate1013.point = new X3D.MFVec3f([20.07841,0.075,28.39432,20.27541,0.075,28.35416,20.4724,0.075,28.31401,20.21453,0.075,29.0621,20.41153,0.075,29.02194,20.60852,0.075,28.98179,20.35065,0.075,29.72987,20.54764,0.075,29.68972,20.74464,0.075,29.64956]);
coord = Coordinate1013;

geometry = IndexedFaceSet1012;

browser.currentScene.children[200] = Shape1009;

let Shape1014 = browser.currentScene.createNode("Shape");
let Appearance1015 = browser.currentScene.createNode("Appearance");
let Material1016 = browser.currentScene.createNode("Material");
Material1016.ambientIntensity = 0;
Material1016.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1016.shininess = 0;
material = Material1016;

appearance = Appearance1015;

let IndexedFaceSet1017 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1017.solid = False;
IndexedFaceSet1017.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1017.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1018 = browser.currentScene.createNode("Coordinate");
Coordinate1018.point = new X3D.MFVec3f([20.19218,0.075,26.93926,19.79819,0.075,27.01957,19.91995,0.075,25.6037,19.52596,0.075,25.68401]);
coord = Coordinate1018;

geometry = IndexedFaceSet1017;

browser.currentScene.children[201] = Shape1014;

let Shape1019 = browser.currentScene.createNode("Shape");
let Appearance1020 = browser.currentScene.createNode("Appearance");
let Material1021 = browser.currentScene.createNode("Material");
Material1021.ambientIntensity = 0;
Material1021.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1021.shininess = 0;
material = Material1021;

appearance = Appearance1020;

let IndexedFaceSet1022 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1022.solid = False;
IndexedFaceSet1022.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1022.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new X3D.MFVec3f([19.10838,0.075,25.74872,18.97426,0.075,25.09074,19.91595,0.075,25.58411,19.78183,0.075,24.92613]);
coord = Coordinate1023;

geometry = IndexedFaceSet1022;

browser.currentScene.children[202] = Shape1019;

let Shape1024 = browser.currentScene.createNode("Shape");
let Appearance1025 = browser.currentScene.createNode("Appearance");
let Material1026 = browser.currentScene.createNode("Material");
Material1026.ambientIntensity = 0;
Material1026.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1026.shininess = 0;
material = Material1026;

appearance = Appearance1025;

let IndexedFaceSet1027 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1027.solid = False;
IndexedFaceSet1027.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1027.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1028 = browser.currentScene.createNode("Coordinate");
Coordinate1028.point = new X3D.MFVec3f([19.64372,0.075,24.24855,19.77784,0.075,24.90653,18.83615,0.075,24.41316,18.97027,0.075,25.07114]);
coord = Coordinate1028;

geometry = IndexedFaceSet1027;

browser.currentScene.children[203] = Shape1024;

let Shape1029 = browser.currentScene.createNode("Shape");
let Appearance1030 = browser.currentScene.createNode("Appearance");
let Material1031 = browser.currentScene.createNode("Material");
Material1031.ambientIntensity = 0;
Material1031.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1031.shininess = 0;
material = Material1031;

appearance = Appearance1030;

let IndexedFaceSet1032 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1032.solid = False;
IndexedFaceSet1032.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1032.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1033 = browser.currentScene.createNode("Coordinate");
Coordinate1033.point = new X3D.MFVec3f([19.63972,0.075,24.22895,19.24574,0.075,24.30926,19.36749,0.075,22.8934,18.9735,0.075,22.97371]);
coord = Coordinate1033;

geometry = IndexedFaceSet1032;

browser.currentScene.children[204] = Shape1029;

let Shape1034 = browser.currentScene.createNode("Shape");
let Appearance1035 = browser.currentScene.createNode("Appearance");
let Material1036 = browser.currentScene.createNode("Material");
Material1036.ambientIntensity = 0;
Material1036.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1036.shininess = 0;
material = Material1036;

appearance = Appearance1035;

let IndexedFaceSet1037 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1037.solid = False;
IndexedFaceSet1037.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1037.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1038 = browser.currentScene.createNode("Coordinate");
Coordinate1038.point = new X3D.MFVec3f([18.55992,0.075,23.05801,18.75691,0.075,23.01785,18.95391,0.075,22.9777,18.69604,0.075,23.72579,18.89303,0.075,23.68563,19.09002,0.075,23.64548,18.83215,0.075,24.39357,19.02915,0.075,24.35341,19.22614,0.075,24.31326]);
coord = Coordinate1038;

geometry = IndexedFaceSet1037;

browser.currentScene.children[205] = Shape1034;

let Shape1039 = browser.currentScene.createNode("Shape");
let Appearance1040 = browser.currentScene.createNode("Appearance");
let Material1041 = browser.currentScene.createNode("Material");
Material1041.ambientIntensity = 0;
Material1041.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1041.shininess = 0;
material = Material1041;

appearance = Appearance1040;

let IndexedFaceSet1042 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1042.solid = False;
IndexedFaceSet1042.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1042.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1043 = browser.currentScene.createNode("Coordinate");
Coordinate1043.point = new X3D.MFVec3f([18.55593,0.075,23.03841,18.42181,0.075,22.38043,19.3635,0.075,22.8738,19.22938,0.075,22.21582]);
coord = Coordinate1043;

geometry = IndexedFaceSet1042;

browser.currentScene.children[206] = Shape1039;

let Shape1044 = browser.currentScene.createNode("Shape");
let Appearance1045 = browser.currentScene.createNode("Appearance");
let Material1046 = browser.currentScene.createNode("Material");
Material1046.ambientIntensity = 0;
Material1046.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1046.shininess = 0;
material = Material1046;

appearance = Appearance1045;

let IndexedFaceSet1047 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1047.solid = False;
IndexedFaceSet1047.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1047.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1048 = browser.currentScene.createNode("Coordinate");
Coordinate1048.point = new X3D.MFVec3f([19.09126,0.075,21.53824,19.22538,0.075,22.19622,18.28369,0.075,21.70286,18.41781,0.075,22.36084]);
coord = Coordinate1048;

geometry = IndexedFaceSet1047;

browser.currentScene.children[207] = Shape1044;

let Shape1049 = browser.currentScene.createNode("Shape");
let Appearance1050 = browser.currentScene.createNode("Appearance");
let Material1051 = browser.currentScene.createNode("Material");
Material1051.ambientIntensity = 0;
Material1051.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1051.shininess = 0;
material = Material1051;

appearance = Appearance1050;

let IndexedFaceSet1052 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1052.solid = False;
IndexedFaceSet1052.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1052.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1053 = browser.currentScene.createNode("Coordinate");
Coordinate1053.point = new X3D.MFVec3f([18.42105,0.075,20.2634,18.81503,0.075,20.18309,18.69328,0.075,21.59896,19.08727,0.075,21.51865]);
coord = Coordinate1053;

geometry = IndexedFaceSet1052;

browser.currentScene.children[208] = Shape1049;

let Shape1054 = browser.currentScene.createNode("Shape");
let Appearance1055 = browser.currentScene.createNode("Appearance");
let Material1056 = browser.currentScene.createNode("Material");
Material1056.ambientIntensity = 0;
Material1056.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1056.shininess = 0;
material = Material1056;

appearance = Appearance1055;

let IndexedFaceSet1057 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1057.solid = False;
IndexedFaceSet1057.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1057.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1058 = browser.currentScene.createNode("Coordinate");
Coordinate1058.point = new X3D.MFVec3f([18.00746,0.075,20.3477,18.40145,0.075,20.2674,18.14358,0.075,21.01548,18.53757,0.075,20.93517,18.2797,0.075,21.68326,18.67368,0.075,21.60295]);
coord = Coordinate1058;

geometry = IndexedFaceSet1057;

browser.currentScene.children[209] = Shape1054;

let Shape1059 = browser.currentScene.createNode("Shape");
let Appearance1060 = browser.currentScene.createNode("Appearance");
let Material1061 = browser.currentScene.createNode("Material");
Material1061.ambientIntensity = 0;
Material1061.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1061.shininess = 0;
material = Material1061;

appearance = Appearance1060;

let IndexedFaceSet1062 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1062.solid = False;
IndexedFaceSet1062.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1062.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1063 = browser.currentScene.createNode("Coordinate");
Coordinate1063.point = new X3D.MFVec3f([18.00347,0.075,20.32811,17.86935,0.075,19.67013,18.81104,0.075,20.1635,18.67692,0.075,19.50552]);
coord = Coordinate1063;

geometry = IndexedFaceSet1062;

browser.currentScene.children[210] = Shape1059;

let Shape1064 = browser.currentScene.createNode("Shape");
let Appearance1065 = browser.currentScene.createNode("Appearance");
let Material1066 = browser.currentScene.createNode("Material");
Material1066.ambientIntensity = 0;
Material1066.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1066.shininess = 0;
material = Material1066;

appearance = Appearance1065;

let IndexedFaceSet1067 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1067.solid = False;
IndexedFaceSet1067.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1067.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1068 = browser.currentScene.createNode("Coordinate");
Coordinate1068.point = new X3D.MFVec3f([17.86535,0.075,19.65053,17.73124,0.075,18.99255,18.67293,0.075,19.48592,18.53881,0.075,18.82794]);
coord = Coordinate1068;

geometry = IndexedFaceSet1067;

browser.currentScene.children[211] = Shape1064;

let Shape1069 = browser.currentScene.createNode("Shape");
let Appearance1070 = browser.currentScene.createNode("Appearance");
let Material1071 = browser.currentScene.createNode("Material");
Material1071.ambientIntensity = 0;
Material1071.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1071.shininess = 0;
material = Material1071;

appearance = Appearance1070;

let IndexedFaceSet1072 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1072.solid = False;
IndexedFaceSet1072.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1072.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1073 = browser.currentScene.createNode("Coordinate");
Coordinate1073.point = new X3D.MFVec3f([17.86859,0.075,17.55309,18.06558,0.075,17.51294,18.26258,0.075,17.47279,18.00471,0.075,18.22087,18.2017,0.075,18.18072,18.39869,0.075,18.14056,18.14083,0.075,18.88865,18.33782,0.075,18.8485,18.53481,0.075,18.80834]);
coord = Coordinate1073;

geometry = IndexedFaceSet1072;

browser.currentScene.children[212] = Shape1069;

let Shape1074 = browser.currentScene.createNode("Shape");
let Appearance1075 = browser.currentScene.createNode("Appearance");
let Material1076 = browser.currentScene.createNode("Material");
Material1076.ambientIntensity = 0;
Material1076.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1076.shininess = 0;
material = Material1076;

appearance = Appearance1075;

let IndexedFaceSet1077 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1077.solid = False;
IndexedFaceSet1077.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1077.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1078 = browser.currentScene.createNode("Coordinate");
Coordinate1078.point = new X3D.MFVec3f([18.12123,0.075,18.89264,17.72724,0.075,18.97295,17.849,0.075,17.55709,17.45501,0.075,17.6374]);
coord = Coordinate1078;

geometry = IndexedFaceSet1077;

browser.currentScene.children[213] = Shape1074;

let Shape1079 = browser.currentScene.createNode("Shape");
let Appearance1080 = browser.currentScene.createNode("Appearance");
let Material1081 = browser.currentScene.createNode("Material");
Material1081.ambientIntensity = 0;
Material1081.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1081.shininess = 0;
material = Material1081;

appearance = Appearance1080;

let IndexedFaceSet1082 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1082.solid = False;
IndexedFaceSet1082.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1082.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1083 = browser.currentScene.createNode("Coordinate");
Coordinate1083.point = new X3D.MFVec3f([18.12446,0.075,16.79521,18.25858,0.075,17.45319,17.31689,0.075,16.95982,17.45101,0.075,17.6178]);
coord = Coordinate1083;

geometry = IndexedFaceSet1082;

browser.currentScene.children[214] = Shape1079;

let Shape1084 = browser.currentScene.createNode("Shape");
let Appearance1085 = browser.currentScene.createNode("Appearance");
let Material1086 = browser.currentScene.createNode("Material");
Material1086.ambientIntensity = 0;
Material1086.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1086.shininess = 0;
material = Material1086;

appearance = Appearance1085;

let IndexedFaceSet1087 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1087.solid = False;
IndexedFaceSet1087.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1087.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1088 = browser.currentScene.createNode("Coordinate");
Coordinate1088.point = new X3D.MFVec3f([17.3129,0.075,16.94022,17.17878,0.075,16.28225,18.12047,0.075,16.77561,17.98635,0.075,16.11763]);
coord = Coordinate1088;

geometry = IndexedFaceSet1087;

browser.currentScene.children[215] = Shape1084;

let Shape1089 = browser.currentScene.createNode("Shape");
let Appearance1090 = browser.currentScene.createNode("Appearance");
let Material1091 = browser.currentScene.createNode("Material");
Material1091.ambientIntensity = 0;
Material1091.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1091.shininess = 0;
material = Material1091;

appearance = Appearance1090;

let IndexedFaceSet1092 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1092.solid = False;
IndexedFaceSet1092.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1092.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1093 = browser.currentScene.createNode("Coordinate");
Coordinate1093.point = new X3D.MFVec3f([17.98236,0.075,16.09804,17.58837,0.075,16.17834,17.84624,0.075,15.43026,17.45225,0.075,15.51057,17.71012,0.075,14.76248,17.31614,0.075,14.84279]);
coord = Coordinate1093;

geometry = IndexedFaceSet1092;

browser.currentScene.children[216] = Shape1089;

let Shape1094 = browser.currentScene.createNode("Shape");
let Appearance1095 = browser.currentScene.createNode("Appearance");
let Material1096 = browser.currentScene.createNode("Material");
Material1096.ambientIntensity = 0;
Material1096.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1096.shininess = 0;
material = Material1096;

appearance = Appearance1095;

let IndexedFaceSet1097 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1097.solid = False;
IndexedFaceSet1097.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1097.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1098 = browser.currentScene.createNode("Coordinate");
Coordinate1098.point = new X3D.MFVec3f([17.56877,0.075,16.18234,17.37178,0.075,16.22249,17.17479,0.075,16.26265,17.43266,0.075,15.51456,17.23566,0.075,15.55472,17.03867,0.075,15.59487,17.29654,0.075,14.84678,17.09954,0.075,14.88694,16.90255,0.075,14.92709]);
coord = Coordinate1098;

geometry = IndexedFaceSet1097;

browser.currentScene.children[217] = Shape1094;

let Shape1099 = browser.currentScene.createNode("Shape");
let Appearance1100 = browser.currentScene.createNode("Appearance");
let Material1101 = browser.currentScene.createNode("Material");
Material1101.ambientIntensity = 0;
Material1101.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1101.shininess = 0;
material = Material1101;

appearance = Appearance1100;

let IndexedFaceSet1102 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1102.solid = False;
IndexedFaceSet1102.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1102.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1103 = browser.currentScene.createNode("Coordinate");
Coordinate1103.point = new X3D.MFVec3f([17.57201,0.075,14.0849,17.70613,0.075,14.74288,16.76444,0.075,14.24952,16.89856,0.075,14.9075]);
coord = Coordinate1103;

geometry = IndexedFaceSet1102;

browser.currentScene.children[218] = Shape1099;

let Shape1104 = browser.currentScene.createNode("Shape");
let Appearance1105 = browser.currentScene.createNode("Appearance");
let Material1106 = browser.currentScene.createNode("Material");
Material1106.ambientIntensity = 0;
Material1106.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1106.shininess = 0;
material = Material1106;

appearance = Appearance1105;

let IndexedFaceSet1107 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1107.solid = False;
IndexedFaceSet1107.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1107.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1108 = browser.currentScene.createNode("Coordinate");
Coordinate1108.point = new X3D.MFVec3f([16.76044,0.075,14.22992,16.62632,0.075,13.57194,17.16423,0.075,14.14761,17.03011,0.075,13.48963,17.56801,0.075,14.06531,17.4339,0.075,13.40733]);
coord = Coordinate1108;

geometry = IndexedFaceSet1107;

browser.currentScene.children[219] = Shape1104;

let Shape1109 = browser.currentScene.createNode("Shape");
let Appearance1110 = browser.currentScene.createNode("Appearance");
let Material1111 = browser.currentScene.createNode("Material");
Material1111.ambientIntensity = 0;
Material1111.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1111.shininess = 0;
material = Material1111;

appearance = Appearance1110;

let IndexedFaceSet1112 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1112.solid = False;
IndexedFaceSet1112.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1112.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new X3D.MFVec3f([16.76368,0.075,12.13248,17.15767,0.075,12.05217,17.03591,0.075,13.46804,17.4299,0.075,13.38773]);
coord = Coordinate1113;

geometry = IndexedFaceSet1112;

browser.currentScene.children[220] = Shape1109;

let Shape1114 = browser.currentScene.createNode("Shape");
let Appearance1115 = browser.currentScene.createNode("Appearance");
let Material1116 = browser.currentScene.createNode("Material");
Material1116.ambientIntensity = 0;
Material1116.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1116.shininess = 0;
material = Material1116;

appearance = Appearance1115;

let IndexedFaceSet1117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1117.solid = False;
IndexedFaceSet1117.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1117.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1118 = browser.currentScene.createNode("Coordinate");
Coordinate1118.point = new X3D.MFVec3f([16.3501,0.075,12.21679,16.54709,0.075,12.17663,16.74408,0.075,12.13648,16.48621,0.075,12.88456,16.68321,0.075,12.84441,16.8802,0.075,12.80426,16.62233,0.075,13.55234,16.81932,0.075,13.51219,17.01632,0.075,13.47203]);
coord = Coordinate1118;

geometry = IndexedFaceSet1117;

browser.currentScene.children[221] = Shape1114;

let Shape1119 = browser.currentScene.createNode("Shape");
let Appearance1120 = browser.currentScene.createNode("Appearance");
let Material1121 = browser.currentScene.createNode("Material");
Material1121.ambientIntensity = 0;
Material1121.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1121.shininess = 0;
material = Material1121;

appearance = Appearance1120;

let IndexedFaceSet1122 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1122.solid = False;
IndexedFaceSet1122.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1122.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1123 = browser.currentScene.createNode("Coordinate");
Coordinate1123.point = new X3D.MFVec3f([16.3461,0.075,12.19719,16.21198,0.075,11.53921,16.74989,0.075,12.11488,16.61577,0.075,11.4569,17.15367,0.075,12.03258,17.01955,0.075,11.3746]);
coord = Coordinate1123;

geometry = IndexedFaceSet1122;

browser.currentScene.children[222] = Shape1119;

let Shape1124 = browser.currentScene.createNode("Shape");
let Appearance1125 = browser.currentScene.createNode("Appearance");
let Material1126 = browser.currentScene.createNode("Material");
Material1126.ambientIntensity = 0;
Material1126.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1126.shininess = 0;
material = Material1126;

appearance = Appearance1125;

let IndexedFaceSet1127 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1127.solid = False;
IndexedFaceSet1127.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1127.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1128 = browser.currentScene.createNode("Coordinate");
Coordinate1128.point = new X3D.MFVec3f([16.20799,0.075,11.51961,16.07387,0.075,10.86163,16.61177,0.075,11.43731,16.47765,0.075,10.77933,17.01556,0.075,11.355,16.88144,0.075,10.69702]);
coord = Coordinate1128;

geometry = IndexedFaceSet1127;

browser.currentScene.children[223] = Shape1124;

let Shape1129 = browser.currentScene.createNode("Shape");
let Appearance1130 = browser.currentScene.createNode("Appearance");
let Material1131 = browser.currentScene.createNode("Material");
Material1131.ambientIntensity = 0;
Material1131.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1131.shininess = 0;
material = Material1131;

appearance = Appearance1130;

let IndexedFaceSet1132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1132.solid = False;
IndexedFaceSet1132.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1132.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1133 = browser.currentScene.createNode("Coordinate");
Coordinate1133.point = new X3D.MFVec3f([16.87744,0.075,10.67743,16.48346,0.075,10.75773,16.74133,0.075,10.00965,16.34734,0.075,10.08996,16.60521,0.075,9.341869,16.21122,0.075,9.422177]);
coord = Coordinate1133;

geometry = IndexedFaceSet1132;

browser.currentScene.children[224] = Shape1129;

let Shape1134 = browser.currentScene.createNode("Shape");
let Appearance1135 = browser.currentScene.createNode("Appearance");
let Material1136 = browser.currentScene.createNode("Material");
Material1136.ambientIntensity = 0;
Material1136.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1136.shininess = 0;
material = Material1136;

appearance = Appearance1135;

let IndexedFaceSet1137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1137.solid = False;
IndexedFaceSet1137.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1137.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1138 = browser.currentScene.createNode("Coordinate");
Coordinate1138.point = new X3D.MFVec3f([15.79764,0.075,9.506481,16.19163,0.075,9.426172,15.93376,0.075,10.17426,16.32774,0.075,10.09395,16.06987,0.075,10.84204,16.46386,0.075,10.76173]);
coord = Coordinate1138;

geometry = IndexedFaceSet1137;

browser.currentScene.children[225] = Shape1134;

let Shape1139 = browser.currentScene.createNode("Shape");
let Appearance1140 = browser.currentScene.createNode("Appearance");
let Material1141 = browser.currentScene.createNode("Material");
Material1141.ambientIntensity = 0;
Material1141.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1141.shininess = 0;
material = Material1141;

appearance = Appearance1140;

let IndexedFaceSet1142 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1142.solid = False;
IndexedFaceSet1142.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1142.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1143 = browser.currentScene.createNode("Coordinate");
Coordinate1143.point = new X3D.MFVec3f([16.4671,0.075,8.664293,16.60122,0.075,9.322272,16.06331,0.075,8.746598,16.19743,0.075,9.404578,15.65953,0.075,8.828904,15.79364,0.075,9.486884]);
coord = Coordinate1143;

geometry = IndexedFaceSet1142;

browser.currentScene.children[226] = Shape1139;

let Shape1144 = browser.currentScene.createNode("Shape");
let Appearance1145 = browser.currentScene.createNode("Appearance");
let Material1146 = browser.currentScene.createNode("Material");
Material1146.ambientIntensity = 0;
Material1146.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1146.shininess = 0;
material = Material1146;

appearance = Appearance1145;

let IndexedFaceSet1147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1147.solid = False;
IndexedFaceSet1147.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1147.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1148 = browser.currentScene.createNode("Coordinate");
Coordinate1148.point = new X3D.MFVec3f([16.32898,0.075,7.986716,16.4631,0.075,8.644696,15.52141,0.075,8.151328,15.65553,0.075,8.809307]);
coord = Coordinate1148;

geometry = IndexedFaceSet1147;

browser.currentScene.children[227] = Shape1144;

let Shape1149 = browser.currentScene.createNode("Shape");
let Appearance1150 = browser.currentScene.createNode("Appearance");
let Material1151 = browser.currentScene.createNode("Material");
Material1151.ambientIntensity = 0;
Material1151.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1151.shininess = 0;
material = Material1151;

appearance = Appearance1150;

let IndexedFaceSet1152 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1152.solid = False;
IndexedFaceSet1152.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1152.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1153 = browser.currentScene.createNode("Coordinate");
Coordinate1153.point = new X3D.MFVec3f([15.65877,0.075,6.711872,16.05276,0.075,6.631564,15.79488,0.075,7.37965,16.18887,0.075,7.299342,15.931,0.075,8.047428,16.32499,0.075,7.967119]);
coord = Coordinate1153;

geometry = IndexedFaceSet1152;

browser.currentScene.children[228] = Shape1149;

let Shape1154 = browser.currentScene.createNode("Shape");
let Appearance1155 = browser.currentScene.createNode("Appearance");
let Material1156 = browser.currentScene.createNode("Material");
Material1156.ambientIntensity = 0;
Material1156.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1156.shininess = 0;
material = Material1156;

appearance = Appearance1155;

let IndexedFaceSet1157 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1157.solid = False;
IndexedFaceSet1157.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1157.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1158 = browser.currentScene.createNode("Coordinate");
Coordinate1158.point = new X3D.MFVec3f([15.24518,0.075,6.796175,15.44218,0.075,6.756021,15.63917,0.075,6.715867,15.3813,0.075,7.463953,15.57829,0.075,7.423799,15.77529,0.075,7.383645,15.51742,0.075,8.131731,15.71441,0.075,8.091577,15.9114,0.075,8.051422]);
coord = Coordinate1158;

geometry = IndexedFaceSet1157;

browser.currentScene.children[229] = Shape1154;

let Shape1159 = browser.currentScene.createNode("Shape");
let Appearance1160 = browser.currentScene.createNode("Appearance");
let Material1161 = browser.currentScene.createNode("Material");
Material1161.ambientIntensity = 0;
Material1161.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1161.shininess = 0;
material = Material1161;

appearance = Appearance1160;

let IndexedFaceSet1162 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1162.solid = False;
IndexedFaceSet1162.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1162.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1163 = browser.currentScene.createNode("Coordinate");
Coordinate1163.point = new X3D.MFVec3f([15.91464,0.075,5.953987,16.04876,0.075,6.611967,15.10707,0.075,6.118598,15.24119,0.075,6.776578]);
coord = Coordinate1163;

geometry = IndexedFaceSet1162;

browser.currentScene.children[230] = Shape1159;

let Shape1164 = browser.currentScene.createNode("Shape");
let Appearance1165 = browser.currentScene.createNode("Appearance");
let Material1166 = browser.currentScene.createNode("Material");
Material1166.ambientIntensity = 0;
Material1166.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1166.shininess = 0;
material = Material1166;

appearance = Appearance1165;

let IndexedFaceSet1167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1167.solid = False;
IndexedFaceSet1167.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1167.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1168 = browser.currentScene.createNode("Coordinate");
Coordinate1168.point = new X3D.MFVec3f([15.10308,0.075,6.099001,15.03602,0.075,5.770012,14.96896,0.075,5.441022,15.91065,0.075,5.93439,15.84359,0.075,5.605401,15.77653,0.075,5.276411]);
coord = Coordinate1168;

geometry = IndexedFaceSet1167;

browser.currentScene.children[231] = Shape1164;

let Shape1169 = browser.currentScene.createNode("Shape");
let Appearance1170 = browser.currentScene.createNode("Appearance");
let Material1171 = browser.currentScene.createNode("Material");
Material1171.ambientIntensity = 0;
Material1171.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1171.shininess = 0;
material = Material1171;

appearance = Appearance1170;

let IndexedFaceSet1172 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1172.solid = False;
IndexedFaceSet1172.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1172.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1173 = browser.currentScene.createNode("Coordinate");
Coordinate1173.point = new X3D.MFVec3f([15.77253,0.075,5.256814,15.37854,0.075,5.337122,15.63642,0.075,4.589036,15.24243,0.075,4.669344,15.5003,0.075,3.921258,15.10631,0.075,4.001566]);
coord = Coordinate1173;

geometry = IndexedFaceSet1172;

browser.currentScene.children[232] = Shape1169;

let Shape1174 = browser.currentScene.createNode("Shape");
let Appearance1175 = browser.currentScene.createNode("Appearance");
let Material1176 = browser.currentScene.createNode("Material");
Material1176.ambientIntensity = 0;
Material1176.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1176.shininess = 0;
material = Material1176;

appearance = Appearance1175;

let IndexedFaceSet1177 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1177.solid = False;
IndexedFaceSet1177.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1177.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1178 = browser.currentScene.createNode("Coordinate");
Coordinate1178.point = new X3D.MFVec3f([14.69273,0.075,4.085869,14.88972,0.075,4.045715,15.08671,0.075,4.005561,14.82884,0.075,4.753647,15.02584,0.075,4.713493,15.22283,0.075,4.673339,14.96496,0.075,5.421425,15.16195,0.075,5.381271,15.35895,0.075,5.341117]);
coord = Coordinate1178;

geometry = IndexedFaceSet1177;

browser.currentScene.children[233] = Shape1174;

let Shape1179 = browser.currentScene.createNode("Shape");
let Appearance1180 = browser.currentScene.createNode("Appearance");
let Material1181 = browser.currentScene.createNode("Material");
Material1181.ambientIntensity = 0;
Material1181.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1181.shininess = 0;
material = Material1181;

appearance = Appearance1180;

let IndexedFaceSet1182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1182.solid = False;
IndexedFaceSet1182.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1182.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1183 = browser.currentScene.createNode("Coordinate");
Coordinate1183.point = new X3D.MFVec3f([15.36218,0.075,3.243681,15.4963,0.075,3.901661,14.9584,0.075,3.325987,15.09252,0.075,3.983967,14.55461,0.075,3.408293,14.68873,0.075,4.066272]);
coord = Coordinate1183;

geometry = IndexedFaceSet1182;

browser.currentScene.children[234] = Shape1179;

let Shape1184 = browser.currentScene.createNode("Shape");
let Appearance1185 = browser.currentScene.createNode("Appearance");
let Material1186 = browser.currentScene.createNode("Material");
Material1186.ambientIntensity = 0;
Material1186.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1186.shininess = 0;
material = Material1186;

appearance = Appearance1185;

let IndexedFaceSet1187 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1187.solid = False;
IndexedFaceSet1187.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1187.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1188 = browser.currentScene.createNode("Coordinate");
Coordinate1188.point = new X3D.MFVec3f([14.55062,0.075,3.388696,14.4165,0.075,2.730716,15.35819,0.075,3.224084,15.22407,0.075,2.566105]);
coord = Coordinate1188;

geometry = IndexedFaceSet1187;

browser.currentScene.children[235] = Shape1184;

let Shape1189 = browser.currentScene.createNode("Shape");
let Appearance1190 = browser.currentScene.createNode("Appearance");
let Material1191 = browser.currentScene.createNode("Material");
Material1191.ambientIntensity = 0;
Material1191.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1191.shininess = 0;
material = Material1191;

appearance = Appearance1190;

let IndexedFaceSet1192 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1192.solid = False;
IndexedFaceSet1192.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1192.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1193 = browser.currentScene.createNode("Coordinate");
Coordinate1193.point = new X3D.MFVec3f([17.86687,0.075,23.88459,17.73275,0.075,23.22662,18.27066,0.075,23.80229,18.13654,0.075,23.14431,18.67444,0.075,23.71998,18.54032,0.075,23.062]);
coord = Coordinate1193;

geometry = IndexedFaceSet1192;

browser.currentScene.children[236] = Shape1189;

let Shape1194 = browser.currentScene.createNode("Shape");
let Appearance1195 = browser.currentScene.createNode("Appearance");
let Material1196 = browser.currentScene.createNode("Material");
Material1196.ambientIntensity = 0;
Material1196.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1196.shininess = 0;
material = Material1196;

appearance = Appearance1195;

let IndexedFaceSet1197 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1197.solid = False;
IndexedFaceSet1197.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1197.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1198 = browser.currentScene.createNode("Coordinate");
Coordinate1198.point = new X3D.MFVec3f([17.87011,0.075,21.78716,18.0671,0.075,21.74701,18.2641,0.075,21.70685,18.00622,0.075,22.45494,18.20322,0.075,22.41478,18.40021,0.075,22.37463,18.14234,0.075,23.12271,18.33933,0.075,23.08256,18.53633,0.075,23.04241]);
coord = Coordinate1198;

geometry = IndexedFaceSet1197;

browser.currentScene.children[237] = Shape1194;

let Shape1199 = browser.currentScene.createNode("Shape");
let Appearance1200 = browser.currentScene.createNode("Appearance");
let Material1201 = browser.currentScene.createNode("Material");
Material1201.ambientIntensity = 0;
Material1201.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1201.shininess = 0;
material = Material1201;

appearance = Appearance1200;

let IndexedFaceSet1202 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1202.solid = False;
IndexedFaceSet1202.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1202.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1203 = browser.currentScene.createNode("Coordinate");
Coordinate1203.point = new X3D.MFVec3f([18.12274,0.075,23.12671,17.92575,0.075,23.16686,17.72876,0.075,23.20702,17.98663,0.075,22.45893,17.78963,0.075,22.49909,17.59264,0.075,22.53924,17.85051,0.075,21.79115,17.65352,0.075,21.83131,17.45652,0.075,21.87146]);
coord = Coordinate1203;

geometry = IndexedFaceSet1202;

browser.currentScene.children[238] = Shape1199;

let Shape1204 = browser.currentScene.createNode("Shape");
let Appearance1205 = browser.currentScene.createNode("Appearance");
let Material1206 = browser.currentScene.createNode("Material");
Material1206.ambientIntensity = 0;
Material1206.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1206.shininess = 0;
material = Material1206;

appearance = Appearance1205;

let IndexedFaceSet1207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1207.solid = False;
IndexedFaceSet1207.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1207.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1208 = browser.currentScene.createNode("Coordinate");
Coordinate1208.point = new X3D.MFVec3f([17.45253,0.075,21.85187,17.31841,0.075,21.19389,17.85631,0.075,21.76956,17.72219,0.075,21.11158,18.2601,0.075,21.68725,18.12598,0.075,21.02927]);
coord = Coordinate1208;

geometry = IndexedFaceSet1207;

browser.currentScene.children[239] = Shape1204;

let Shape1209 = browser.currentScene.createNode("Shape");
let Appearance1210 = browser.currentScene.createNode("Appearance");
let Material1211 = browser.currentScene.createNode("Material");
Material1211.ambientIntensity = 0;
Material1211.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1211.shininess = 0;
material = Material1211;

appearance = Appearance1210;

let IndexedFaceSet1212 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1212.solid = False;
IndexedFaceSet1212.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1212.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1213 = browser.currentScene.createNode("Coordinate");
Coordinate1213.point = new X3D.MFVec3f([17.98787,0.075,20.3517,18.12199,0.075,21.00968,17.1803,0.075,20.51631,17.31441,0.075,21.17429]);
coord = Coordinate1213;

geometry = IndexedFaceSet1212;

browser.currentScene.children[240] = Shape1209;

let Shape1214 = browser.currentScene.createNode("Shape");
let Appearance1215 = browser.currentScene.createNode("Appearance");
let Material1216 = browser.currentScene.createNode("Material");
Material1216.ambientIntensity = 0;
Material1216.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1216.shininess = 0;
material = Material1216;

appearance = Appearance1215;

let IndexedFaceSet1217 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1217.solid = False;
IndexedFaceSet1217.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1217.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1218 = browser.currentScene.createNode("Coordinate");
Coordinate1218.point = new X3D.MFVec3f([17.98387,0.075,20.3321,17.78688,0.075,20.37226,17.58989,0.075,20.41241,17.84776,0.075,19.66432,17.65076,0.075,19.70448,17.45377,0.075,19.74463,17.71164,0.075,18.99655,17.51464,0.075,19.0367,17.31765,0.075,19.07685]);
coord = Coordinate1218;

geometry = IndexedFaceSet1217;

browser.currentScene.children[241] = Shape1214;

let Shape1219 = browser.currentScene.createNode("Shape");
let Appearance1220 = browser.currentScene.createNode("Appearance");
let Material1221 = browser.currentScene.createNode("Material");
Material1221.ambientIntensity = 0;
Material1221.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1221.shininess = 0;
material = Material1221;

appearance = Appearance1220;

let IndexedFaceSet1222 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1222.solid = False;
IndexedFaceSet1222.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1222.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1223 = browser.currentScene.createNode("Coordinate");
Coordinate1223.point = new X3D.MFVec3f([16.90407,0.075,19.16116,17.10106,0.075,19.121,17.29805,0.075,19.08085,17.04018,0.075,19.82894,17.23718,0.075,19.78878,17.43417,0.075,19.74863,17.1763,0.075,20.49671,17.37329,0.075,20.45656,17.57029,0.075,20.4164]);
coord = Coordinate1223;

geometry = IndexedFaceSet1222;

browser.currentScene.children[242] = Shape1219;

let Shape1224 = browser.currentScene.createNode("Shape");
let Appearance1225 = browser.currentScene.createNode("Appearance");
let Material1226 = browser.currentScene.createNode("Material");
Material1226.ambientIntensity = 0;
Material1226.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1226.shininess = 0;
material = Material1226;

appearance = Appearance1225;

let IndexedFaceSet1227 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1227.solid = False;
IndexedFaceSet1227.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1227.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1228 = browser.currentScene.createNode("Coordinate");
Coordinate1228.point = new X3D.MFVec3f([17.57352,0.075,18.31897,17.70764,0.075,18.97695,17.16974,0.075,18.40127,17.30386,0.075,19.05925,16.76595,0.075,18.48358,16.90007,0.075,19.14156]);
coord = Coordinate1228;

geometry = IndexedFaceSet1227;

browser.currentScene.children[243] = Shape1224;

let Shape1229 = browser.currentScene.createNode("Shape");
let Appearance1230 = browser.currentScene.createNode("Appearance");
let Material1231 = browser.currentScene.createNode("Material");
Material1231.ambientIntensity = 0;
Material1231.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1231.shininess = 0;
material = Material1231;

appearance = Appearance1230;

let IndexedFaceSet1232 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1232.solid = False;
IndexedFaceSet1232.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1232.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1233 = browser.currentScene.createNode("Coordinate");
Coordinate1233.point = new X3D.MFVec3f([17.43541,0.075,17.64139,17.56953,0.075,18.29937,17.03163,0.075,17.7237,17.16574,0.075,18.38168,16.62784,0.075,17.806,16.76196,0.075,18.46398]);
coord = Coordinate1233;

geometry = IndexedFaceSet1232;

browser.currentScene.children[244] = Shape1229;

let Shape1234 = browser.currentScene.createNode("Shape");
let Appearance1235 = browser.currentScene.createNode("Appearance");
let Material1236 = browser.currentScene.createNode("Material");
Material1236.ambientIntensity = 0;
Material1236.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1236.shininess = 0;
material = Material1236;

appearance = Appearance1235;

let IndexedFaceSet1237 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1237.solid = False;
IndexedFaceSet1237.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1237.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1238 = browser.currentScene.createNode("Coordinate");
Coordinate1238.point = new X3D.MFVec3f([16.7652,0.075,16.36655,16.96219,0.075,16.32639,17.15918,0.075,16.28624,16.90131,0.075,17.03433,17.09831,0.075,16.99417,17.2953,0.075,16.95402,17.03743,0.075,17.7021,17.23442,0.075,17.66195,17.43142,0.075,17.6218]);
coord = Coordinate1238;

geometry = IndexedFaceSet1237;

browser.currentScene.children[245] = Shape1234;

let Shape1239 = browser.currentScene.createNode("Shape");
let Appearance1240 = browser.currentScene.createNode("Appearance");
let Material1241 = browser.currentScene.createNode("Material");
Material1241.ambientIntensity = 0;
Material1241.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1241.shininess = 0;
material = Material1241;

appearance = Appearance1240;

let IndexedFaceSet1242 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1242.solid = False;
IndexedFaceSet1242.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1242.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1243 = browser.currentScene.createNode("Coordinate");
Coordinate1243.point = new X3D.MFVec3f([16.35161,0.075,16.45085,16.7456,0.075,16.37054,16.48773,0.075,17.11863,16.88172,0.075,17.03832,16.62385,0.075,17.78641,17.01783,0.075,17.7061]);
coord = Coordinate1243;

geometry = IndexedFaceSet1242;

browser.currentScene.children[246] = Shape1239;

let Shape1244 = browser.currentScene.createNode("Shape");
let Appearance1245 = browser.currentScene.createNode("Appearance");
let Material1246 = browser.currentScene.createNode("Material");
Material1246.ambientIntensity = 0;
Material1246.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1246.shininess = 0;
material = Material1246;

appearance = Appearance1245;

let IndexedFaceSet1247 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1247.solid = False;
IndexedFaceSet1247.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1247.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1248 = browser.currentScene.createNode("Coordinate");
Coordinate1248.point = new X3D.MFVec3f([17.02107,0.075,15.60866,17.15519,0.075,16.26664,16.2135,0.075,15.77327,16.34762,0.075,16.43125]);
coord = Coordinate1248;

geometry = IndexedFaceSet1247;

browser.currentScene.children[247] = Shape1244;

let Shape1249 = browser.currentScene.createNode("Shape");
let Appearance1250 = browser.currentScene.createNode("Appearance");
let Material1251 = browser.currentScene.createNode("Material");
Material1251.ambientIntensity = 0;
Material1251.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1251.shininess = 0;
material = Material1251;

appearance = Appearance1250;

let IndexedFaceSet1252 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1252.solid = False;
IndexedFaceSet1252.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1252.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1253 = browser.currentScene.createNode("Coordinate");
Coordinate1253.point = new X3D.MFVec3f([16.2095,0.075,15.75368,16.07538,0.075,15.0957,16.61329,0.075,15.67137,16.47917,0.075,15.01339,17.01707,0.075,15.58907,16.88296,0.075,14.93109]);
coord = Coordinate1253;

geometry = IndexedFaceSet1252;

browser.currentScene.children[248] = Shape1249;

let Shape1254 = browser.currentScene.createNode("Shape");
let Appearance1255 = browser.currentScene.createNode("Appearance");
let Material1256 = browser.currentScene.createNode("Material");
Material1256.ambientIntensity = 0;
Material1256.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1256.shininess = 0;
material = Material1256;

appearance = Appearance1255;

let IndexedFaceSet1257 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1257.solid = False;
IndexedFaceSet1257.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1257.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1258 = browser.currentScene.createNode("Coordinate");
Coordinate1258.point = new X3D.MFVec3f([16.87896,0.075,14.91149,16.48497,0.075,14.9918,16.60673,0.075,13.57593,16.21274,0.075,13.65624]);
coord = Coordinate1258;

geometry = IndexedFaceSet1257;

browser.currentScene.children[249] = Shape1254;

let Shape1259 = browser.currentScene.createNode("Shape");
let Appearance1260 = browser.currentScene.createNode("Appearance");
let Material1261 = browser.currentScene.createNode("Material");
Material1261.ambientIntensity = 0;
Material1261.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1261.shininess = 0;
material = Material1261;

appearance = Appearance1260;

let IndexedFaceSet1262 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1262.solid = False;
IndexedFaceSet1262.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1262.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1263 = browser.currentScene.createNode("Coordinate");
Coordinate1263.point = new X3D.MFVec3f([16.46538,0.075,14.99579,16.07139,0.075,15.0761,16.19314,0.075,13.66024,15.79916,0.075,13.74055]);
coord = Coordinate1263;

geometry = IndexedFaceSet1262;

browser.currentScene.children[250] = Shape1259;

let Shape1264 = browser.currentScene.createNode("Shape");
let Appearance1265 = browser.currentScene.createNode("Appearance");
let Material1266 = browser.currentScene.createNode("Material");
Material1266.ambientIntensity = 0;
Material1266.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1266.shininess = 0;
material = Material1266;

appearance = Appearance1265;

let IndexedFaceSet1267 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1267.solid = False;
IndexedFaceSet1267.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1267.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1268 = browser.currentScene.createNode("Coordinate");
Coordinate1268.point = new X3D.MFVec3f([16.46861,0.075,12.89836,16.60273,0.075,13.55634,15.66104,0.075,13.06297,15.79516,0.075,13.72095]);
coord = Coordinate1268;

geometry = IndexedFaceSet1267;

browser.currentScene.children[251] = Shape1264;

let Shape1269 = browser.currentScene.createNode("Shape");
let Appearance1270 = browser.currentScene.createNode("Appearance");
let Material1271 = browser.currentScene.createNode("Material");
Material1271.ambientIntensity = 0;
Material1271.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1271.shininess = 0;
material = Material1271;

appearance = Appearance1270;

let IndexedFaceSet1272 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1272.solid = False;
IndexedFaceSet1272.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1272.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1273 = browser.currentScene.createNode("Coordinate");
Coordinate1273.point = new X3D.MFVec3f([15.65705,0.075,13.04337,15.52293,0.075,12.38539,16.06083,0.075,12.96107,15.92671,0.075,12.30309,16.46462,0.075,12.87876,16.3305,0.075,12.22078]);
coord = Coordinate1273;

geometry = IndexedFaceSet1272;

browser.currentScene.children[252] = Shape1269;

let Shape1274 = browser.currentScene.createNode("Shape");
let Appearance1275 = browser.currentScene.createNode("Appearance");
let Material1276 = browser.currentScene.createNode("Material");
Material1276.ambientIntensity = 0;
Material1276.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1276.shininess = 0;
material = Material1276;

appearance = Appearance1275;

let IndexedFaceSet1277 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1277.solid = False;
IndexedFaceSet1277.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1277.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1278 = browser.currentScene.createNode("Coordinate");
Coordinate1278.point = new X3D.MFVec3f([16.3265,0.075,12.20118,15.93252,0.075,12.28149,16.05427,0.075,10.86563,15.66028,0.075,10.94594]);
coord = Coordinate1278;

geometry = IndexedFaceSet1277;

browser.currentScene.children[253] = Shape1274;

let Shape1279 = browser.currentScene.createNode("Shape");
let Appearance1280 = browser.currentScene.createNode("Appearance");
let Material1281 = browser.currentScene.createNode("Material");
Material1281.ambientIntensity = 0;
Material1281.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1281.shininess = 0;
material = Material1281;

appearance = Appearance1280;

let IndexedFaceSet1282 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1282.solid = False;
IndexedFaceSet1282.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1282.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1283 = browser.currentScene.createNode("Coordinate");
Coordinate1283.point = new X3D.MFVec3f([15.91292,0.075,12.28549,15.51893,0.075,12.3658,15.64069,0.075,10.94993,15.2467,0.075,11.03024]);
coord = Coordinate1283;

geometry = IndexedFaceSet1282;

browser.currentScene.children[254] = Shape1279;

let Shape1284 = browser.currentScene.createNode("Shape");
let Appearance1285 = browser.currentScene.createNode("Appearance");
let Material1286 = browser.currentScene.createNode("Material");
Material1286.ambientIntensity = 0;
Material1286.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1286.shininess = 0;
material = Material1286;

appearance = Appearance1285;

let IndexedFaceSet1287 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1287.solid = False;
IndexedFaceSet1287.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1287.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1288 = browser.currentScene.createNode("Coordinate");
Coordinate1288.point = new X3D.MFVec3f([15.24271,0.075,11.01064,15.10859,0.075,10.35266,16.05028,0.075,10.84603,15.91616,0.075,10.18805]);
coord = Coordinate1288;

geometry = IndexedFaceSet1287;

browser.currentScene.children[255] = Shape1284;

let Shape1289 = browser.currentScene.createNode("Shape");
let Appearance1290 = browser.currentScene.createNode("Appearance");
let Material1291 = browser.currentScene.createNode("Material");
Material1291.ambientIntensity = 0;
Material1291.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1291.shininess = 0;
material = Material1291;

appearance = Appearance1290;

let IndexedFaceSet1292 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1292.solid = False;
IndexedFaceSet1292.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1292.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1293 = browser.currentScene.createNode("Coordinate");
Coordinate1293.point = new X3D.MFVec3f([15.10459,0.075,10.33307,14.97047,0.075,9.675087,15.91216,0.075,10.16846,15.77804,0.075,9.510475]);
coord = Coordinate1293;

geometry = IndexedFaceSet1292;

browser.currentScene.children[256] = Shape1289;

let Shape1294 = browser.currentScene.createNode("Shape");
let Appearance1295 = browser.currentScene.createNode("Appearance");
let Material1296 = browser.currentScene.createNode("Material");
Material1296.ambientIntensity = 0;
Material1296.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1296.shininess = 0;
material = Material1296;

appearance = Appearance1295;

let IndexedFaceSet1297 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1297.solid = False;
IndexedFaceSet1297.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1297.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1298 = browser.currentScene.createNode("Coordinate");
Coordinate1298.point = new X3D.MFVec3f([15.77405,0.075,9.490878,15.38006,0.075,9.571187,15.50181,0.075,8.155322,15.10783,0.075,8.235631]);
coord = Coordinate1298;

geometry = IndexedFaceSet1297;

browser.currentScene.children[257] = Shape1294;

let Shape1299 = browser.currentScene.createNode("Shape");
let Appearance1300 = browser.currentScene.createNode("Appearance");
let Material1301 = browser.currentScene.createNode("Material");
Material1301.ambientIntensity = 0;
Material1301.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1301.shininess = 0;
material = Material1301;

appearance = Appearance1300;

let IndexedFaceSet1302 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1302.solid = False;
IndexedFaceSet1302.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1302.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1303 = browser.currentScene.createNode("Coordinate");
Coordinate1303.point = new X3D.MFVec3f([15.36046,0.075,9.575181,15.16347,0.075,9.615335,14.96648,0.075,9.65549,15.22435,0.075,8.907403,15.02735,0.075,8.947557,14.83036,0.075,8.987712,15.08823,0.075,8.239626,14.89124,0.075,8.279779,14.69424,0.075,8.319934]);
coord = Coordinate1303;

geometry = IndexedFaceSet1302;

browser.currentScene.children[258] = Shape1299;

let Shape1304 = browser.currentScene.createNode("Shape");
let Appearance1305 = browser.currentScene.createNode("Appearance");
let Material1306 = browser.currentScene.createNode("Material");
Material1306.ambientIntensity = 0;
Material1306.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1306.shininess = 0;
material = Material1306;

appearance = Appearance1305;

let IndexedFaceSet1307 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1307.solid = False;
IndexedFaceSet1307.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1307.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new X3D.MFVec3f([14.69025,0.075,8.300337,14.55613,0.075,7.642357,15.49782,0.075,8.135725,15.3637,0.075,7.477746]);
coord = Coordinate1308;

geometry = IndexedFaceSet1307;

browser.currentScene.children[259] = Shape1304;

let Shape1309 = browser.currentScene.createNode("Shape");
let Appearance1310 = browser.currentScene.createNode("Appearance");
let Material1311 = browser.currentScene.createNode("Material");
Material1311.ambientIntensity = 0;
Material1311.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1311.shininess = 0;
material = Material1311;

appearance = Appearance1310;

let IndexedFaceSet1312 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1312.solid = False;
IndexedFaceSet1312.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1312.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1313 = browser.currentScene.createNode("Coordinate");
Coordinate1313.point = new X3D.MFVec3f([14.55214,0.075,7.62276,14.41802,0.075,6.964781,15.35971,0.075,7.458149,15.22559,0.075,6.800169]);
coord = Coordinate1313;

geometry = IndexedFaceSet1312;

browser.currentScene.children[260] = Shape1309;

let Shape1314 = browser.currentScene.createNode("Shape");
let Appearance1315 = browser.currentScene.createNode("Appearance");
let Material1316 = browser.currentScene.createNode("Material");
Material1316.ambientIntensity = 0;
Material1316.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1316.shininess = 0;
material = Material1316;

appearance = Appearance1315;

let IndexedFaceSet1317 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1317.solid = False;
IndexedFaceSet1317.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1317.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1318 = browser.currentScene.createNode("Coordinate");
Coordinate1318.point = new X3D.MFVec3f([14.55537,0.075,5.525325,14.94936,0.075,5.445017,14.82761,0.075,6.860881,15.22159,0.075,6.780572]);
coord = Coordinate1318;

geometry = IndexedFaceSet1317;

browser.currentScene.children[261] = Shape1314;

let Shape1319 = browser.currentScene.createNode("Shape");
let Appearance1320 = browser.currentScene.createNode("Appearance");
let Material1321 = browser.currentScene.createNode("Material");
Material1321.ambientIntensity = 0;
Material1321.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1321.shininess = 0;
material = Material1321;

appearance = Appearance1320;

let IndexedFaceSet1322 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1322.solid = False;
IndexedFaceSet1322.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1322.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1323 = browser.currentScene.createNode("Coordinate");
Coordinate1323.point = new X3D.MFVec3f([14.14179,0.075,5.609628,14.53578,0.075,5.52932,14.41402,0.075,6.945184,14.80801,0.075,6.864876]);
coord = Coordinate1323;

geometry = IndexedFaceSet1322;

browser.currentScene.children[262] = Shape1319;

let Shape1324 = browser.currentScene.createNode("Shape");
let Appearance1325 = browser.currentScene.createNode("Appearance");
let Material1326 = browser.currentScene.createNode("Material");
Material1326.ambientIntensity = 0;
Material1326.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1326.shininess = 0;
material = Material1326;

appearance = Appearance1325;

let IndexedFaceSet1327 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1327.solid = False;
IndexedFaceSet1327.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1327.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1328 = browser.currentScene.createNode("Coordinate");
Coordinate1328.point = new X3D.MFVec3f([14.13779,0.075,5.590031,14.00367,0.075,4.932052,14.94536,0.075,5.42542,14.81124,0.075,4.76744]);
coord = Coordinate1328;

geometry = IndexedFaceSet1327;

browser.currentScene.children[263] = Shape1324;

let Shape1329 = browser.currentScene.createNode("Shape");
let Appearance1330 = browser.currentScene.createNode("Appearance");
let Material1331 = browser.currentScene.createNode("Material");
Material1331.ambientIntensity = 0;
Material1331.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1331.shininess = 0;
material = Material1331;

appearance = Appearance1330;

let IndexedFaceSet1332 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1332.solid = False;
IndexedFaceSet1332.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1332.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1333 = browser.currentScene.createNode("Coordinate");
Coordinate1333.point = new X3D.MFVec3f([13.99968,0.075,4.912455,13.86556,0.075,4.254475,14.80725,0.075,4.747843,14.67313,0.075,4.089864]);
coord = Coordinate1333;

geometry = IndexedFaceSet1332;

browser.currentScene.children[264] = Shape1329;

let Shape1334 = browser.currentScene.createNode("Shape");
let Appearance1335 = browser.currentScene.createNode("Appearance");
let Material1336 = browser.currentScene.createNode("Material");
Material1336.ambientIntensity = 0;
Material1336.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1336.shininess = 0;
material = Material1336;

appearance = Appearance1335;

let IndexedFaceSet1337 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1337.solid = False;
IndexedFaceSet1337.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1337.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1338 = browser.currentScene.createNode("Coordinate");
Coordinate1338.point = new X3D.MFVec3f([14.00292,0.075,2.815019,14.3969,0.075,2.734711,14.13903,0.075,3.482797,14.53302,0.075,3.402489,14.27515,0.075,4.150575,14.66914,0.075,4.070267]);
coord = Coordinate1338;

geometry = IndexedFaceSet1337;

browser.currentScene.children[265] = Shape1334;

let Shape1339 = browser.currentScene.createNode("Shape");
let Appearance1340 = browser.currentScene.createNode("Appearance");
let Material1341 = browser.currentScene.createNode("Material");
Material1341.ambientIntensity = 0;
Material1341.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1341.shininess = 0;
material = Material1341;

appearance = Appearance1340;

let IndexedFaceSet1342 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1342.solid = False;
IndexedFaceSet1342.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1342.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1343 = browser.currentScene.createNode("Coordinate");
Coordinate1343.point = new X3D.MFVec3f([13.58933,0.075,2.899323,13.98332,0.075,2.819014,13.86157,0.075,4.234878,14.25555,0.075,4.15457]);
coord = Coordinate1343;

geometry = IndexedFaceSet1342;

browser.currentScene.children[266] = Shape1339;

let Shape1344 = browser.currentScene.createNode("Shape");
let Appearance1345 = browser.currentScene.createNode("Appearance");
let Material1346 = browser.currentScene.createNode("Material");
Material1346.ambientIntensity = 0;
Material1346.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1346.shininess = 0;
material = Material1346;

appearance = Appearance1345;

let IndexedFaceSet1347 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1347.solid = False;
IndexedFaceSet1347.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1347.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1348 = browser.currentScene.createNode("Coordinate");
Coordinate1348.point = new X3D.MFVec3f([16.90159,0.075,23.37562,16.76747,0.075,22.71765,17.70916,0.075,23.21101,17.57504,0.075,22.55303]);
coord = Coordinate1348;

geometry = IndexedFaceSet1347;

browser.currentScene.children[267] = Shape1344;

let Shape1349 = browser.currentScene.createNode("Shape");
let Appearance1350 = browser.currentScene.createNode("Appearance");
let Material1351 = browser.currentScene.createNode("Material");
Material1351.ambientIntensity = 0;
Material1351.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1351.shininess = 0;
material = Material1351;

appearance = Appearance1350;

let IndexedFaceSet1352 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1352.solid = False;
IndexedFaceSet1352.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1352.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1353 = browser.currentScene.createNode("Coordinate");
Coordinate1353.point = new X3D.MFVec3f([16.76348,0.075,22.69805,16.69641,0.075,22.36906,16.62936,0.075,22.04007,17.16726,0.075,22.61574,17.1002,0.075,22.28675,17.03314,0.075,21.95776,17.57105,0.075,22.53344,17.50399,0.075,22.20445,17.43693,0.075,21.87546]);
coord = Coordinate1353;

geometry = IndexedFaceSet1352;

browser.currentScene.children[268] = Shape1349;

let Shape1354 = browser.currentScene.createNode("Shape");
let Appearance1355 = browser.currentScene.createNode("Appearance");
let Material1356 = browser.currentScene.createNode("Material");
Material1356.ambientIntensity = 0;
Material1356.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1356.shininess = 0;
material = Material1356;

appearance = Appearance1355;

let IndexedFaceSet1357 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1357.solid = False;
IndexedFaceSet1357.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1357.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1358 = browser.currentScene.createNode("Coordinate");
Coordinate1358.point = new X3D.MFVec3f([16.76671,0.075,20.60061,16.96371,0.075,20.56046,17.1607,0.075,20.5203,16.90283,0.075,21.26839,17.09982,0.075,21.22824,17.29682,0.075,21.18808,17.03895,0.075,21.93617,17.23594,0.075,21.89602,17.43293,0.075,21.85586]);
coord = Coordinate1358;

geometry = IndexedFaceSet1357;

browser.currentScene.children[269] = Shape1354;

let Shape1359 = browser.currentScene.createNode("Shape");
let Appearance1360 = browser.currentScene.createNode("Appearance");
let Material1361 = browser.currentScene.createNode("Material");
Material1361.ambientIntensity = 0;
Material1361.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1361.shininess = 0;
material = Material1361;

appearance = Appearance1360;

let IndexedFaceSet1362 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1362.solid = False;
IndexedFaceSet1362.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1362.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1363 = browser.currentScene.createNode("Coordinate");
Coordinate1363.point = new X3D.MFVec3f([16.35313,0.075,20.68492,16.74711,0.075,20.60461,16.48924,0.075,21.35269,16.88323,0.075,21.27238,16.62536,0.075,22.02047,17.01935,0.075,21.94016]);
coord = Coordinate1363;

geometry = IndexedFaceSet1362;

browser.currentScene.children[270] = Shape1359;

let Shape1364 = browser.currentScene.createNode("Shape");
let Appearance1365 = browser.currentScene.createNode("Appearance");
let Material1366 = browser.currentScene.createNode("Material");
Material1366.ambientIntensity = 0;
Material1366.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1366.shininess = 0;
material = Material1366;

appearance = Appearance1365;

let IndexedFaceSet1367 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1367.solid = False;
IndexedFaceSet1367.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1367.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1368 = browser.currentScene.createNode("Coordinate");
Coordinate1368.point = new X3D.MFVec3f([16.34913,0.075,20.66532,16.21501,0.075,20.00734,17.1567,0.075,20.50071,17.02258,0.075,19.84273]);
coord = Coordinate1368;

geometry = IndexedFaceSet1367;

browser.currentScene.children[271] = Shape1364;

let Shape1369 = browser.currentScene.createNode("Shape");
let Appearance1370 = browser.currentScene.createNode("Appearance");
let Material1371 = browser.currentScene.createNode("Material");
Material1371.ambientIntensity = 0;
Material1371.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1371.shininess = 0;
material = Material1371;

appearance = Appearance1370;

let IndexedFaceSet1372 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1372.solid = False;
IndexedFaceSet1372.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1372.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1373 = browser.currentScene.createNode("Coordinate");
Coordinate1373.point = new X3D.MFVec3f([16.21102,0.075,19.98774,16.0769,0.075,19.32976,17.01859,0.075,19.82313,16.88447,0.075,19.16515]);
coord = Coordinate1373;

geometry = IndexedFaceSet1372;

browser.currentScene.children[272] = Shape1369;

let Shape1374 = browser.currentScene.createNode("Shape");
let Appearance1375 = browser.currentScene.createNode("Appearance");
let Material1376 = browser.currentScene.createNode("Material");
Material1376.ambientIntensity = 0;
Material1376.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1376.shininess = 0;
material = Material1376;

appearance = Appearance1375;

let IndexedFaceSet1377 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1377.solid = False;
IndexedFaceSet1377.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1377.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1378 = browser.currentScene.createNode("Coordinate");
Coordinate1378.point = new X3D.MFVec3f([16.21426,0.075,17.89031,16.60824,0.075,17.81,16.48649,0.075,19.22586,16.88048,0.075,19.14555]);
coord = Coordinate1378;

geometry = IndexedFaceSet1377;

browser.currentScene.children[273] = Shape1374;

let Shape1379 = browser.currentScene.createNode("Shape");
let Appearance1380 = browser.currentScene.createNode("Appearance");
let Material1381 = browser.currentScene.createNode("Material");
Material1381.ambientIntensity = 0;
Material1381.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1381.shininess = 0;
material = Material1381;

appearance = Appearance1380;

let IndexedFaceSet1382 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1382.solid = False;
IndexedFaceSet1382.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1382.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1383 = browser.currentScene.createNode("Coordinate");
Coordinate1383.point = new X3D.MFVec3f([15.80067,0.075,17.97461,16.19466,0.075,17.8943,16.0729,0.075,19.31017,16.46689,0.075,19.22986]);
coord = Coordinate1383;

geometry = IndexedFaceSet1382;

browser.currentScene.children[274] = Shape1379;

let Shape1384 = browser.currentScene.createNode("Shape");
let Appearance1385 = browser.currentScene.createNode("Appearance");
let Material1386 = browser.currentScene.createNode("Material");
Material1386.ambientIntensity = 0;
Material1386.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1386.shininess = 0;
material = Material1386;

appearance = Appearance1385;

let IndexedFaceSet1387 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1387.solid = False;
IndexedFaceSet1387.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1387.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1388 = browser.currentScene.createNode("Coordinate");
Coordinate1388.point = new X3D.MFVec3f([15.79668,0.075,17.95501,15.66256,0.075,17.29703,16.60425,0.075,17.7904,16.47013,0.075,17.13242]);
coord = Coordinate1388;

geometry = IndexedFaceSet1387;

browser.currentScene.children[275] = Shape1384;

let Shape1389 = browser.currentScene.createNode("Shape");
let Appearance1390 = browser.currentScene.createNode("Appearance");
let Material1391 = browser.currentScene.createNode("Material");
Material1391.ambientIntensity = 0;
Material1391.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1391.shininess = 0;
material = Material1391;

appearance = Appearance1390;

let IndexedFaceSet1392 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1392.solid = False;
IndexedFaceSet1392.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1392.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1393 = browser.currentScene.createNode("Coordinate");
Coordinate1393.point = new X3D.MFVec3f([16.33201,0.075,16.45485,16.46614,0.075,17.11283,15.52444,0.075,16.61946,15.65856,0.075,17.27744]);
coord = Coordinate1393;

geometry = IndexedFaceSet1392;

browser.currentScene.children[276] = Shape1389;

let Shape1394 = browser.currentScene.createNode("Shape");
let Appearance1395 = browser.currentScene.createNode("Appearance");
let Material1396 = browser.currentScene.createNode("Material");
Material1396.ambientIntensity = 0;
Material1396.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1396.shininess = 0;
material = Material1396;

appearance = Appearance1395;

let IndexedFaceSet1397 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1397.solid = False;
IndexedFaceSet1397.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1397.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1398 = browser.currentScene.createNode("Coordinate");
Coordinate1398.point = new X3D.MFVec3f([16.32802,0.075,16.43525,16.13103,0.075,16.4754,15.93403,0.075,16.51556,16.1919,0.075,15.76747,15.99491,0.075,15.80762,15.79792,0.075,15.84778,16.05579,0.075,15.09969,15.85879,0.075,15.13985,15.6618,0.075,15.18]);
coord = Coordinate1398;

geometry = IndexedFaceSet1397;

browser.currentScene.children[277] = Shape1394;

let Shape1399 = browser.currentScene.createNode("Shape");
let Appearance1400 = browser.currentScene.createNode("Appearance");
let Material1401 = browser.currentScene.createNode("Material");
Material1401.ambientIntensity = 0;
Material1401.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1401.shininess = 0;
material = Material1401;

appearance = Appearance1400;

let IndexedFaceSet1402 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1402.solid = False;
IndexedFaceSet1402.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1402.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1403 = browser.currentScene.createNode("Coordinate");
Coordinate1403.point = new X3D.MFVec3f([15.91444,0.075,16.51955,15.52045,0.075,16.59986,15.6422,0.075,15.184,15.24822,0.075,15.2643]);
coord = Coordinate1403;

geometry = IndexedFaceSet1402;

browser.currentScene.children[278] = Shape1399;

let Shape1404 = browser.currentScene.createNode("Shape");
let Appearance1405 = browser.currentScene.createNode("Appearance");
let Material1406 = browser.currentScene.createNode("Material");
Material1406.ambientIntensity = 0;
Material1406.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1406.shininess = 0;
material = Material1406;

appearance = Appearance1405;

let IndexedFaceSet1407 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1407.solid = False;
IndexedFaceSet1407.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1407.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1408 = browser.currentScene.createNode("Coordinate");
Coordinate1408.point = new X3D.MFVec3f([15.91767,0.075,14.42212,16.05179,0.075,15.0801,15.1101,0.075,14.58673,15.24422,0.075,15.24471]);
coord = Coordinate1408;

geometry = IndexedFaceSet1407;

browser.currentScene.children[279] = Shape1404;

let Shape1409 = browser.currentScene.createNode("Shape");
let Appearance1410 = browser.currentScene.createNode("Appearance");
let Material1411 = browser.currentScene.createNode("Material");
Material1411.ambientIntensity = 0;
Material1411.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1411.shininess = 0;
material = Material1411;

appearance = Appearance1410;

let IndexedFaceSet1412 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1412.solid = False;
IndexedFaceSet1412.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1412.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1413 = browser.currentScene.createNode("Coordinate");
Coordinate1413.point = new X3D.MFVec3f([15.77956,0.075,13.74454,15.91368,0.075,14.40252,14.97199,0.075,13.90915,15.10611,0.075,14.56713]);
coord = Coordinate1413;

geometry = IndexedFaceSet1412;

browser.currentScene.children[280] = Shape1409;

let Shape1414 = browser.currentScene.createNode("Shape");
let Appearance1415 = browser.currentScene.createNode("Appearance");
let Material1416 = browser.currentScene.createNode("Material");
Material1416.ambientIntensity = 0;
Material1416.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1416.shininess = 0;
material = Material1416;

appearance = Appearance1415;

let IndexedFaceSet1417 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1417.solid = False;
IndexedFaceSet1417.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1417.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1418 = browser.currentScene.createNode("Coordinate");
Coordinate1418.point = new X3D.MFVec3f([15.77556,0.075,13.72494,15.38158,0.075,13.80525,15.63945,0.075,13.05717,15.24546,0.075,13.13747,15.50333,0.075,12.38939,15.10934,0.075,12.4697]);
coord = Coordinate1418;

geometry = IndexedFaceSet1417;

browser.currentScene.children[281] = Shape1414;

let Shape1419 = browser.currentScene.createNode("Shape");
let Appearance1420 = browser.currentScene.createNode("Appearance");
let Material1421 = browser.currentScene.createNode("Material");
Material1421.ambientIntensity = 0;
Material1421.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1421.shininess = 0;
material = Material1421;

appearance = Appearance1420;

let IndexedFaceSet1422 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1422.solid = False;
IndexedFaceSet1422.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1422.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1423 = browser.currentScene.createNode("Coordinate");
Coordinate1423.point = new X3D.MFVec3f([14.69576,0.075,12.554,15.08975,0.075,12.47369,14.96799,0.075,13.88955,15.36198,0.075,13.80925]);
coord = Coordinate1423;

geometry = IndexedFaceSet1422;

browser.currentScene.children[282] = Shape1419;

let Shape1424 = browser.currentScene.createNode("Shape");
let Appearance1425 = browser.currentScene.createNode("Appearance");
let Material1426 = browser.currentScene.createNode("Material");
Material1426.ambientIntensity = 0;
Material1426.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1426.shininess = 0;
material = Material1426;

appearance = Appearance1425;

let IndexedFaceSet1427 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1427.solid = False;
IndexedFaceSet1427.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1427.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1428 = browser.currentScene.createNode("Coordinate");
Coordinate1428.point = new X3D.MFVec3f([15.36522,0.075,11.71181,15.43228,0.075,12.0408,15.49934,0.075,12.36979,14.55765,0.075,11.87642,14.62471,0.075,12.20541,14.69177,0.075,12.5344]);
coord = Coordinate1428;

geometry = IndexedFaceSet1427;

browser.currentScene.children[283] = Shape1424;

let Shape1429 = browser.currentScene.createNode("Shape");
let Appearance1430 = browser.currentScene.createNode("Appearance");
let Material1431 = browser.currentScene.createNode("Material");
Material1431.ambientIntensity = 0;
Material1431.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1431.shininess = 0;
material = Material1431;

appearance = Appearance1430;

let IndexedFaceSet1432 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1432.solid = False;
IndexedFaceSet1432.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1432.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1433 = browser.currentScene.createNode("Coordinate");
Coordinate1433.point = new X3D.MFVec3f([14.55365,0.075,11.85682,14.41953,0.075,11.19885,14.95744,0.075,11.77452,14.82332,0.075,11.11654,15.36122,0.075,11.69221,15.2271,0.075,11.03423]);
coord = Coordinate1433;

geometry = IndexedFaceSet1432;

browser.currentScene.children[284] = Shape1429;

let Shape1434 = browser.currentScene.createNode("Shape");
let Appearance1435 = browser.currentScene.createNode("Appearance");
let Material1436 = browser.currentScene.createNode("Material");
Material1436.ambientIntensity = 0;
Material1436.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1436.shininess = 0;
material = Material1436;

appearance = Appearance1435;

let IndexedFaceSet1437 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1437.solid = False;
IndexedFaceSet1437.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1437.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1438 = browser.currentScene.createNode("Coordinate");
Coordinate1438.point = new X3D.MFVec3f([15.22311,0.075,11.01464,14.82912,0.075,11.09495,14.95088,0.075,9.679081,14.55689,0.075,9.75939]);
coord = Coordinate1438;

geometry = IndexedFaceSet1437;

browser.currentScene.children[285] = Shape1434;

let Shape1439 = browser.currentScene.createNode("Shape");
let Appearance1440 = browser.currentScene.createNode("Appearance");
let Material1441 = browser.currentScene.createNode("Material");
Material1441.ambientIntensity = 0;
Material1441.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1441.shininess = 0;
material = Material1441;

appearance = Appearance1440;

let IndexedFaceSet1442 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1442.solid = False;
IndexedFaceSet1442.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1442.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1443 = browser.currentScene.createNode("Coordinate");
Coordinate1443.point = new X3D.MFVec3f([14.1433,0.075,9.843693,14.53729,0.075,9.763384,14.41554,0.075,11.17925,14.80952,0.075,11.09894]);
coord = Coordinate1443;

geometry = IndexedFaceSet1442;

browser.currentScene.children[286] = Shape1439;

let Shape1444 = browser.currentScene.createNode("Shape");
let Appearance1445 = browser.currentScene.createNode("Appearance");
let Material1446 = browser.currentScene.createNode("Material");
Material1446.ambientIntensity = 0;
Material1446.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1446.shininess = 0;
material = Material1446;

appearance = Appearance1445;

let IndexedFaceSet1447 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1447.solid = False;
IndexedFaceSet1447.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1447.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1448 = browser.currentScene.createNode("Coordinate");
Coordinate1448.point = new X3D.MFVec3f([14.13931,0.075,9.824096,14.07225,0.075,9.495106,14.00519,0.075,9.166117,14.94688,0.075,9.659484,14.87982,0.075,9.330495,14.81276,0.075,9.001505]);
coord = Coordinate1448;

geometry = IndexedFaceSet1447;

browser.currentScene.children[287] = Shape1444;

let Shape1449 = browser.currentScene.createNode("Shape");
let Appearance1450 = browser.currentScene.createNode("Appearance");
let Material1451 = browser.currentScene.createNode("Material");
Material1451.ambientIntensity = 0;
Material1451.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1451.shininess = 0;
material = Material1451;

appearance = Appearance1450;

let IndexedFaceSet1452 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1452.solid = False;
IndexedFaceSet1452.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1452.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1453 = browser.currentScene.createNode("Coordinate");
Coordinate1453.point = new X3D.MFVec3f([14.67465,0.075,8.323929,14.74171,0.075,8.652918,14.80877,0.075,8.981908,14.27086,0.075,8.406234,14.33792,0.075,8.735224,14.40498,0.075,9.064214,13.86708,0.075,8.48854,13.93414,0.075,8.81753,14.00119,0.075,9.14652]);
coord = Coordinate1453;

geometry = IndexedFaceSet1452;

browser.currentScene.children[288] = Shape1449;

let Shape1454 = browser.currentScene.createNode("Shape");
let Appearance1455 = browser.currentScene.createNode("Appearance");
let Material1456 = browser.currentScene.createNode("Material");
Material1456.ambientIntensity = 0;
Material1456.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1456.shininess = 0;
material = Material1456;

appearance = Appearance1455;

let IndexedFaceSet1457 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1457.solid = False;
IndexedFaceSet1457.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1457.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1458 = browser.currentScene.createNode("Coordinate");
Coordinate1458.point = new X3D.MFVec3f([14.67065,0.075,8.304332,14.27667,0.075,8.38464,14.39842,0.075,6.968776,14.00443,0.075,7.049084]);
coord = Coordinate1458;

geometry = IndexedFaceSet1457;

browser.currentScene.children[289] = Shape1454;

let Shape1459 = browser.currentScene.createNode("Shape");
let Appearance1460 = browser.currentScene.createNode("Appearance");
let Material1461 = browser.currentScene.createNode("Material");
Material1461.ambientIntensity = 0;
Material1461.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1461.shininess = 0;
material = Material1461;

appearance = Appearance1460;

let IndexedFaceSet1462 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1462.solid = False;
IndexedFaceSet1462.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1462.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1463 = browser.currentScene.createNode("Coordinate");
Coordinate1463.point = new X3D.MFVec3f([13.59085,0.075,7.133387,13.98483,0.075,7.053079,13.72696,0.075,7.801165,14.12095,0.075,7.720857,13.86308,0.075,8.468943,14.25707,0.075,8.388635]);
coord = Coordinate1463;

geometry = IndexedFaceSet1462;

browser.currentScene.children[290] = Shape1459;

let Shape1464 = browser.currentScene.createNode("Shape");
let Appearance1465 = browser.currentScene.createNode("Appearance");
let Material1466 = browser.currentScene.createNode("Material");
Material1466.ambientIntensity = 0;
Material1466.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1466.shininess = 0;
material = Material1466;

appearance = Appearance1465;

let IndexedFaceSet1467 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1467.solid = False;
IndexedFaceSet1467.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1467.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1468 = browser.currentScene.createNode("Coordinate");
Coordinate1468.point = new X3D.MFVec3f([14.2603,0.075,6.291199,14.39442,0.075,6.949179,13.85652,0.075,6.373505,13.99064,0.075,7.031484,13.45273,0.075,6.455811,13.58685,0.075,7.11379]);
coord = Coordinate1468;

geometry = IndexedFaceSet1467;

browser.currentScene.children[291] = Shape1464;

let Shape1469 = browser.currentScene.createNode("Shape");
let Appearance1470 = browser.currentScene.createNode("Appearance");
let Material1471 = browser.currentScene.createNode("Material");
Material1471.ambientIntensity = 0;
Material1471.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1471.shininess = 0;
material = Material1471;

appearance = Appearance1470;

let IndexedFaceSet1472 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1472.solid = False;
IndexedFaceSet1472.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1472.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1473 = browser.currentScene.createNode("Coordinate");
Coordinate1473.point = new X3D.MFVec3f([13.44874,0.075,6.436213,13.31462,0.075,5.778234,13.85252,0.075,6.353908,13.71841,0.075,5.695929,14.25631,0.075,6.271602,14.12219,0.075,5.613623]);
coord = Coordinate1473;

geometry = IndexedFaceSet1472;

browser.currentScene.children[292] = Shape1469;

let Shape1474 = browser.currentScene.createNode("Shape");
let Appearance1475 = browser.currentScene.createNode("Appearance");
let Material1476 = browser.currentScene.createNode("Material");
Material1476.ambientIntensity = 0;
Material1476.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1476.shininess = 0;
material = Material1476;

appearance = Appearance1475;

let IndexedFaceSet1477 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1477.solid = False;
IndexedFaceSet1477.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1477.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1478 = browser.currentScene.createNode("Coordinate");
Coordinate1478.point = new X3D.MFVec3f([14.1182,0.075,5.594026,13.72421,0.075,5.674334,13.98208,0.075,4.926248,13.58809,0.075,5.006556,13.84596,0.075,4.25847,13.45198,0.075,4.338778]);
coord = Coordinate1478;

geometry = IndexedFaceSet1477;

browser.currentScene.children[293] = Shape1474;

let Shape1479 = browser.currentScene.createNode("Shape");
let Appearance1480 = browser.currentScene.createNode("Appearance");
let Material1481 = browser.currentScene.createNode("Material");
Material1481.ambientIntensity = 0;
Material1481.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1481.shininess = 0;
material = Material1481;

appearance = Appearance1480;

let IndexedFaceSet1482 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1482.solid = False;
IndexedFaceSet1482.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1482.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1483 = browser.currentScene.createNode("Coordinate");
Coordinate1483.point = new X3D.MFVec3f([13.03839,0.075,4.423081,13.43238,0.075,4.342773,13.17451,0.075,5.090859,13.5685,0.075,5.010551,13.31063,0.075,5.758637,13.70461,0.075,5.678329]);
coord = Coordinate1483;

geometry = IndexedFaceSet1482;

browser.currentScene.children[294] = Shape1479;

let Shape1484 = browser.currentScene.createNode("Shape");
let Appearance1485 = browser.currentScene.createNode("Appearance");
let Material1486 = browser.currentScene.createNode("Material");
Material1486.ambientIntensity = 0;
Material1486.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1486.shininess = 0;
material = Material1486;

appearance = Appearance1485;

let IndexedFaceSet1487 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1487.solid = False;
IndexedFaceSet1487.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1487.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1488 = browser.currentScene.createNode("Coordinate");
Coordinate1488.point = new X3D.MFVec3f([13.0344,0.075,4.403484,12.90028,0.075,3.745505,13.84197,0.075,4.238873,13.70785,0.075,3.580894]);
coord = Coordinate1488;

geometry = IndexedFaceSet1487;

browser.currentScene.children[295] = Shape1484;

let Shape1489 = browser.currentScene.createNode("Shape");
let Appearance1490 = browser.currentScene.createNode("Appearance");
let Material1491 = browser.currentScene.createNode("Material");
Material1491.ambientIntensity = 0;
Material1491.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1491.shininess = 0;
material = Material1491;

appearance = Appearance1490;

let IndexedFaceSet1492 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1492.solid = False;
IndexedFaceSet1492.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1492.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1493 = browser.currentScene.createNode("Coordinate");
Coordinate1493.point = new X3D.MFVec3f([13.56973,0.075,2.903317,13.70385,0.075,3.561296,12.76216,0.075,3.067929,12.89628,0.075,3.725908]);
coord = Coordinate1493;

geometry = IndexedFaceSet1492;

browser.currentScene.children[296] = Shape1489;

let Shape1494 = browser.currentScene.createNode("Shape");
let Appearance1495 = browser.currentScene.createNode("Appearance");
let Material1496 = browser.currentScene.createNode("Material");
Material1496.ambientIntensity = 0;
Material1496.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1496.shininess = 0;
material = Material1496;

appearance = Appearance1495;

let IndexedFaceSet1497 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1497.solid = False;
IndexedFaceSet1497.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1497.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1498 = browser.currentScene.createNode("Coordinate");
Coordinate1498.point = new X3D.MFVec3f([16.47165,0.075,21.36649,16.60576,0.075,22.02447,15.66407,0.075,21.5311,15.79819,0.075,22.18908]);
coord = Coordinate1498;

geometry = IndexedFaceSet1497;

browser.currentScene.children[297] = Shape1494;

let Shape1499 = browser.currentScene.createNode("Shape");
let Appearance1500 = browser.currentScene.createNode("Appearance");
let Material1501 = browser.currentScene.createNode("Material");
Material1501.ambientIntensity = 0;
Material1501.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1501.shininess = 0;
material = Material1501;

appearance = Appearance1500;

let IndexedFaceSet1502 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1502.solid = False;
IndexedFaceSet1502.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1502.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1503 = browser.currentScene.createNode("Coordinate");
Coordinate1503.point = new X3D.MFVec3f([15.66008,0.075,21.5115,15.52596,0.075,20.85352,16.46765,0.075,21.34689,16.33353,0.075,20.68891]);
coord = Coordinate1503;

geometry = IndexedFaceSet1502;

browser.currentScene.children[298] = Shape1499;

let Shape1504 = browser.currentScene.createNode("Shape");
let Appearance1505 = browser.currentScene.createNode("Appearance");
let Material1506 = browser.currentScene.createNode("Material");
Material1506.ambientIntensity = 0;
Material1506.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1506.shininess = 0;
material = Material1506;

appearance = Appearance1505;

let IndexedFaceSet1507 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1507.solid = False;
IndexedFaceSet1507.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1507.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1508 = browser.currentScene.createNode("Coordinate");
Coordinate1508.point = new X3D.MFVec3f([15.66332,0.075,19.41407,15.86031,0.075,19.37391,16.0573,0.075,19.33376,15.79943,0.075,20.08184,15.99643,0.075,20.04169,16.19342,0.075,20.00154,15.93555,0.075,20.74962,16.13254,0.075,20.70947,16.32954,0.075,20.66931]);
coord = Coordinate1508;

geometry = IndexedFaceSet1507;

browser.currentScene.children[299] = Shape1504;

let Shape1509 = browser.currentScene.createNode("Shape");
let Appearance1510 = browser.currentScene.createNode("Appearance");
let Material1511 = browser.currentScene.createNode("Material");
Material1511.ambientIntensity = 0;
Material1511.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1511.shininess = 0;
material = Material1511;

appearance = Appearance1510;

let IndexedFaceSet1512 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1512.solid = False;
IndexedFaceSet1512.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1512.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1513 = browser.currentScene.createNode("Coordinate");
Coordinate1513.point = new X3D.MFVec3f([15.24973,0.075,19.49837,15.64372,0.075,19.41806,15.38585,0.075,20.16615,15.77984,0.075,20.08584,15.52197,0.075,20.83393,15.91595,0.075,20.75362]);
coord = Coordinate1513;

geometry = IndexedFaceSet1512;

browser.currentScene.children[300] = Shape1509;

let Shape1514 = browser.currentScene.createNode("Shape");
let Appearance1515 = browser.currentScene.createNode("Appearance");
let Material1516 = browser.currentScene.createNode("Material");
Material1516.ambientIntensity = 0;
Material1516.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1516.shininess = 0;
material = Material1516;

appearance = Appearance1515;

let IndexedFaceSet1517 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1517.solid = False;
IndexedFaceSet1517.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1517.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1518 = browser.currentScene.createNode("Coordinate");
Coordinate1518.point = new X3D.MFVec3f([15.91919,0.075,18.65618,16.05331,0.075,19.31416,15.11162,0.075,18.82079,15.24574,0.075,19.47877]);
coord = Coordinate1518;

geometry = IndexedFaceSet1517;

browser.currentScene.children[301] = Shape1514;

let Shape1519 = browser.currentScene.createNode("Shape");
let Appearance1520 = browser.currentScene.createNode("Appearance");
let Material1521 = browser.currentScene.createNode("Material");
Material1521.ambientIntensity = 0;
Material1521.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1521.shininess = 0;
material = Material1521;

appearance = Appearance1520;

let IndexedFaceSet1522 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1522.solid = False;
IndexedFaceSet1522.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1522.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1523 = browser.currentScene.createNode("Coordinate");
Coordinate1523.point = new X3D.MFVec3f([15.10762,0.075,18.8012,14.9735,0.075,18.14322,15.91519,0.075,18.63658,15.78107,0.075,17.97861]);
coord = Coordinate1523;

geometry = IndexedFaceSet1522;

browser.currentScene.children[302] = Shape1519;

let Shape1524 = browser.currentScene.createNode("Shape");
let Appearance1525 = browser.currentScene.createNode("Appearance");
let Material1526 = browser.currentScene.createNode("Material");
Material1526.ambientIntensity = 0;
Material1526.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1526.shininess = 0;
material = Material1526;

appearance = Appearance1525;

let IndexedFaceSet1527 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1527.solid = False;
IndexedFaceSet1527.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1527.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1528 = browser.currentScene.createNode("Coordinate");
Coordinate1528.point = new X3D.MFVec3f([15.11086,0.075,16.70376,15.50485,0.075,16.62345,15.38309,0.075,18.03932,15.77708,0.075,17.95901]);
coord = Coordinate1528;

geometry = IndexedFaceSet1527;

browser.currentScene.children[303] = Shape1524;

let Shape1529 = browser.currentScene.createNode("Shape");
let Appearance1530 = browser.currentScene.createNode("Appearance");
let Material1531 = browser.currentScene.createNode("Material");
Material1531.ambientIntensity = 0;
Material1531.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1531.shininess = 0;
material = Material1531;

appearance = Appearance1530;

let IndexedFaceSet1532 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1532.solid = False;
IndexedFaceSet1532.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1532.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1533 = browser.currentScene.createNode("Coordinate");
Coordinate1533.point = new X3D.MFVec3f([14.69728,0.075,16.78806,15.09126,0.075,16.70775,14.96951,0.075,18.12362,15.3635,0.075,18.04331]);
coord = Coordinate1533;

geometry = IndexedFaceSet1532;

browser.currentScene.children[304] = Shape1529;

let Shape1534 = browser.currentScene.createNode("Shape");
let Appearance1535 = browser.currentScene.createNode("Appearance");
let Material1536 = browser.currentScene.createNode("Material");
Material1536.ambientIntensity = 0;
Material1536.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1536.shininess = 0;
material = Material1536;

appearance = Appearance1535;

let IndexedFaceSet1537 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1537.solid = False;
IndexedFaceSet1537.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1537.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1538 = browser.currentScene.createNode("Coordinate");
Coordinate1538.point = new X3D.MFVec3f([15.36673,0.075,15.94588,15.43379,0.075,16.27486,15.50085,0.075,16.60386,14.96295,0.075,16.02818,15.03001,0.075,16.35717,15.09707,0.075,16.68616,14.55916,0.075,16.11049,14.62622,0.075,16.43948,14.69328,0.075,16.76847]);
coord = Coordinate1538;

geometry = IndexedFaceSet1537;

browser.currentScene.children[305] = Shape1534;

let Shape1539 = browser.currentScene.createNode("Shape");
let Appearance1540 = browser.currentScene.createNode("Appearance");
let Material1541 = browser.currentScene.createNode("Material");
Material1541.ambientIntensity = 0;
Material1541.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1541.shininess = 0;
material = Material1541;

appearance = Appearance1540;

let IndexedFaceSet1542 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1542.solid = False;
IndexedFaceSet1542.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1542.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1543 = browser.currentScene.createNode("Coordinate");
Coordinate1543.point = new X3D.MFVec3f([14.55517,0.075,16.09089,14.42105,0.075,15.43291,15.36274,0.075,15.92628,15.22862,0.075,15.2683]);
coord = Coordinate1543;

geometry = IndexedFaceSet1542;

browser.currentScene.children[306] = Shape1539;

let Shape1544 = browser.currentScene.createNode("Shape");
let Appearance1545 = browser.currentScene.createNode("Appearance");
let Material1546 = browser.currentScene.createNode("Material");
Material1546.ambientIntensity = 0;
Material1546.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1546.shininess = 0;
material = Material1546;

appearance = Appearance1545;

let IndexedFaceSet1547 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1547.solid = False;
IndexedFaceSet1547.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1547.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1548 = browser.currentScene.createNode("Coordinate");
Coordinate1548.point = new X3D.MFVec3f([14.5584,0.075,13.99345,14.95239,0.075,13.91315,14.83064,0.075,15.32901,15.22462,0.075,15.2487]);
coord = Coordinate1548;

geometry = IndexedFaceSet1547;

browser.currentScene.children[307] = Shape1544;

let Shape1549 = browser.currentScene.createNode("Shape");
let Appearance1550 = browser.currentScene.createNode("Appearance");
let Material1551 = browser.currentScene.createNode("Material");
Material1551.ambientIntensity = 0;
Material1551.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1551.shininess = 0;
material = Material1551;

appearance = Appearance1550;

let IndexedFaceSet1552 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1552.solid = False;
IndexedFaceSet1552.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1552.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1553 = browser.currentScene.createNode("Coordinate");
Coordinate1553.point = new X3D.MFVec3f([14.14482,0.075,14.07776,14.53881,0.075,13.99745,14.41705,0.075,15.41331,14.81104,0.075,15.333]);
coord = Coordinate1553;

geometry = IndexedFaceSet1552;

browser.currentScene.children[308] = Shape1549;

let Shape1554 = browser.currentScene.createNode("Shape");
let Appearance1555 = browser.currentScene.createNode("Appearance");
let Material1556 = browser.currentScene.createNode("Material");
Material1556.ambientIntensity = 0;
Material1556.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1556.shininess = 0;
material = Material1556;

appearance = Appearance1555;

let IndexedFaceSet1557 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1557.solid = False;
IndexedFaceSet1557.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1557.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1558 = browser.currentScene.createNode("Coordinate");
Coordinate1558.point = new X3D.MFVec3f([14.14083,0.075,14.05816,14.07377,0.075,13.72917,14.00671,0.075,13.40018,14.54461,0.075,13.97585,14.47755,0.075,13.64686,14.41049,0.075,13.31787,14.9484,0.075,13.89355,14.88134,0.075,13.56456,14.81428,0.075,13.23557]);
coord = Coordinate1558;

geometry = IndexedFaceSet1557;

browser.currentScene.children[309] = Shape1554;

let Shape1559 = browser.currentScene.createNode("Shape");
let Appearance1560 = browser.currentScene.createNode("Appearance");
let Material1561 = browser.currentScene.createNode("Material");
Material1561.ambientIntensity = 0;
Material1561.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1561.shininess = 0;
material = Material1561;

appearance = Appearance1560;

let IndexedFaceSet1562 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1562.solid = False;
IndexedFaceSet1562.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1562.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1563 = browser.currentScene.createNode("Coordinate");
Coordinate1563.point = new X3D.MFVec3f([14.67616,0.075,12.55799,14.81028,0.075,13.21597,13.86859,0.075,12.7226,14.00271,0.075,13.38058]);
coord = Coordinate1563;

geometry = IndexedFaceSet1562;

browser.currentScene.children[310] = Shape1559;

let Shape1564 = browser.currentScene.createNode("Shape");
let Appearance1565 = browser.currentScene.createNode("Appearance");
let Material1566 = browser.currentScene.createNode("Material");
Material1566.ambientIntensity = 0;
Material1566.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1566.shininess = 0;
material = Material1566;

appearance = Appearance1565;

let IndexedFaceSet1567 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1567.solid = False;
IndexedFaceSet1567.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1567.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1568 = browser.currentScene.createNode("Coordinate");
Coordinate1568.point = new X3D.MFVec3f([14.00595,0.075,11.28315,14.20294,0.075,11.24299,14.39993,0.075,11.20284,14.14207,0.075,11.95093,14.33906,0.075,11.91077,14.53605,0.075,11.87062,14.27818,0.075,12.6187,14.47517,0.075,12.57855,14.67217,0.075,12.5384]);
coord = Coordinate1568;

geometry = IndexedFaceSet1567;

browser.currentScene.children[311] = Shape1564;

let Shape1569 = browser.currentScene.createNode("Shape");
let Appearance1570 = browser.currentScene.createNode("Appearance");
let Material1571 = browser.currentScene.createNode("Material");
Material1571.ambientIntensity = 0;
Material1571.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1571.shininess = 0;
material = Material1571;

appearance = Appearance1570;

let IndexedFaceSet1572 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1572.solid = False;
IndexedFaceSet1572.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1572.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1573 = browser.currentScene.createNode("Coordinate");
Coordinate1573.point = new X3D.MFVec3f([13.59236,0.075,11.36745,13.98635,0.075,11.28714,13.8646,0.075,12.70301,14.25858,0.075,12.6227]);
coord = Coordinate1573;

geometry = IndexedFaceSet1572;

browser.currentScene.children[312] = Shape1569;

let Shape1574 = browser.currentScene.createNode("Shape");
let Appearance1575 = browser.currentScene.createNode("Appearance");
let Material1576 = browser.currentScene.createNode("Material");
Material1576.ambientIntensity = 0;
Material1576.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1576.shininess = 0;
material = Material1576;

appearance = Appearance1575;

let IndexedFaceSet1577 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1577.solid = False;
IndexedFaceSet1577.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1577.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1578 = browser.currentScene.createNode("Coordinate");
Coordinate1578.point = new X3D.MFVec3f([13.58837,0.075,11.34785,13.45425,0.075,10.68988,13.99216,0.075,11.26555,13.85804,0.075,10.60757,14.39594,0.075,11.18324,14.26182,0.075,10.52526]);
coord = Coordinate1578;

geometry = IndexedFaceSet1577;

browser.currentScene.children[313] = Shape1574;

let Shape1579 = browser.currentScene.createNode("Shape");
let Appearance1580 = browser.currentScene.createNode("Appearance");
let Material1581 = browser.currentScene.createNode("Material");
Material1581.ambientIntensity = 0;
Material1581.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1581.shininess = 0;
material = Material1581;

appearance = Appearance1580;

let IndexedFaceSet1582 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1582.solid = False;
IndexedFaceSet1582.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1582.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1583 = browser.currentScene.createNode("Coordinate");
Coordinate1583.point = new X3D.MFVec3f([13.45026,0.075,10.67028,13.3832,0.075,10.34129,13.31614,0.075,10.0123,14.25783,0.075,10.50567,14.19077,0.075,10.17668,14.12371,0.075,9.847688]);
coord = Coordinate1583;

geometry = IndexedFaceSet1582;

browser.currentScene.children[314] = Shape1579;

let Shape1584 = browser.currentScene.createNode("Shape");
let Appearance1585 = browser.currentScene.createNode("Appearance");
let Material1586 = browser.currentScene.createNode("Material");
Material1586.ambientIntensity = 0;
Material1586.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1586.shininess = 0;
material = Material1586;

appearance = Appearance1585;

let IndexedFaceSet1587 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1587.solid = False;
IndexedFaceSet1587.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1587.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1588 = browser.currentScene.createNode("Coordinate");
Coordinate1588.point = new X3D.MFVec3f([14.11971,0.075,9.828091,13.72573,0.075,9.908399,13.9836,0.075,9.160313,13.58961,0.075,9.240621,13.84748,0.075,8.492535,13.45349,0.075,8.572843]);
coord = Coordinate1588;

geometry = IndexedFaceSet1587;

browser.currentScene.children[315] = Shape1584;

let Shape1589 = browser.currentScene.createNode("Shape");
let Appearance1590 = browser.currentScene.createNode("Appearance");
let Material1591 = browser.currentScene.createNode("Material");
Material1591.ambientIntensity = 0;
Material1591.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1591.shininess = 0;
material = Material1591;

appearance = Appearance1590;

let IndexedFaceSet1592 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1592.solid = False;
IndexedFaceSet1592.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1592.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1593 = browser.currentScene.createNode("Coordinate");
Coordinate1593.point = new X3D.MFVec3f([13.03991,0.075,8.657146,13.2369,0.075,8.616992,13.4339,0.075,8.576838,13.17602,0.075,9.324924,13.37302,0.075,9.28477,13.57001,0.075,9.244616,13.31214,0.075,9.992702,13.50914,0.075,9.952547,13.70613,0.075,9.912394]);
coord = Coordinate1593;

geometry = IndexedFaceSet1592;

browser.currentScene.children[316] = Shape1589;

let Shape1594 = browser.currentScene.createNode("Shape");
let Appearance1595 = browser.currentScene.createNode("Appearance");
let Material1596 = browser.currentScene.createNode("Material");
Material1596.ambientIntensity = 0;
Material1596.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1596.shininess = 0;
material = Material1596;

appearance = Appearance1595;

let IndexedFaceSet1597 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1597.solid = False;
IndexedFaceSet1597.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1597.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1598 = browser.currentScene.createNode("Coordinate");
Coordinate1598.point = new X3D.MFVec3f([13.70936,0.075,7.814958,13.84348,0.075,8.472938,12.90179,0.075,7.979569,13.03591,0.075,8.637548]);
coord = Coordinate1598;

geometry = IndexedFaceSet1597;

browser.currentScene.children[317] = Shape1594;

let Shape1599 = browser.currentScene.createNode("Shape");
let Appearance1600 = browser.currentScene.createNode("Appearance");
let Material1601 = browser.currentScene.createNode("Material");
Material1601.ambientIntensity = 0;
Material1601.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1601.shininess = 0;
material = Material1601;

appearance = Appearance1600;

let IndexedFaceSet1602 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1602.solid = False;
IndexedFaceSet1602.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1602.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1603 = browser.currentScene.createNode("Coordinate");
Coordinate1603.point = new X3D.MFVec3f([13.57125,0.075,7.137382,13.70537,0.075,7.795361,12.76368,0.075,7.301993,12.8978,0.075,7.959972]);
coord = Coordinate1603;

geometry = IndexedFaceSet1602;

browser.currentScene.children[318] = Shape1599;

let Shape1604 = browser.currentScene.createNode("Shape");
let Appearance1605 = browser.currentScene.createNode("Appearance");
let Material1606 = browser.currentScene.createNode("Material");
Material1606.ambientIntensity = 0;
Material1606.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1606.shininess = 0;
material = Material1606;

appearance = Appearance1605;

let IndexedFaceSet1607 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1607.solid = False;
IndexedFaceSet1607.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1607.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1608 = browser.currentScene.createNode("Coordinate");
Coordinate1608.point = new X3D.MFVec3f([12.90104,0.075,5.862537,13.29502,0.075,5.782229,13.17327,0.075,7.198093,13.56726,0.075,7.117785]);
coord = Coordinate1608;

geometry = IndexedFaceSet1607;

browser.currentScene.children[319] = Shape1604;

let Shape1609 = browser.currentScene.createNode("Shape");
let Appearance1610 = browser.currentScene.createNode("Appearance");
let Material1611 = browser.currentScene.createNode("Material");
Material1611.ambientIntensity = 0;
Material1611.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1611.shininess = 0;
material = Material1611;

appearance = Appearance1610;

let IndexedFaceSet1612 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1612.solid = False;
IndexedFaceSet1612.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1612.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1613 = browser.currentScene.createNode("Coordinate");
Coordinate1613.point = new X3D.MFVec3f([12.48745,0.075,5.94684,12.88144,0.075,5.866532,12.75969,0.075,7.282396,13.15367,0.075,7.202087]);
coord = Coordinate1613;

geometry = IndexedFaceSet1612;

browser.currentScene.children[320] = Shape1609;

let Shape1614 = browser.currentScene.createNode("Shape");
let Appearance1615 = browser.currentScene.createNode("Appearance");
let Material1616 = browser.currentScene.createNode("Material");
Material1616.ambientIntensity = 0;
Material1616.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1616.shininess = 0;
material = Material1616;

appearance = Appearance1615;

let IndexedFaceSet1617 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1617.solid = False;
IndexedFaceSet1617.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1617.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1618 = browser.currentScene.createNode("Coordinate");
Coordinate1618.point = new X3D.MFVec3f([12.48346,0.075,5.927243,12.34934,0.075,5.269264,13.29103,0.075,5.762632,13.15691,0.075,5.104652]);
coord = Coordinate1618;

geometry = IndexedFaceSet1617;

browser.currentScene.children[321] = Shape1614;

let Shape1619 = browser.currentScene.createNode("Shape");
let Appearance1620 = browser.currentScene.createNode("Appearance");
let Material1621 = browser.currentScene.createNode("Material");
Material1621.ambientIntensity = 0;
Material1621.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1621.shininess = 0;
material = Material1621;

appearance = Appearance1620;

let IndexedFaceSet1622 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1622.solid = False;
IndexedFaceSet1622.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1622.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1623 = browser.currentScene.createNode("Coordinate");
Coordinate1623.point = new X3D.MFVec3f([12.34534,0.075,5.249667,12.21122,0.075,4.591687,13.15291,0.075,5.085055,13.0188,0.075,4.427076]);
coord = Coordinate1623;

geometry = IndexedFaceSet1622;

browser.currentScene.children[322] = Shape1619;

let Shape1624 = browser.currentScene.createNode("Shape");
let Appearance1625 = browser.currentScene.createNode("Appearance");
let Material1626 = browser.currentScene.createNode("Material");
Material1626.ambientIntensity = 0;
Material1626.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1626.shininess = 0;
material = Material1626;

appearance = Appearance1625;

let IndexedFaceSet1627 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1627.solid = False;
IndexedFaceSet1627.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1627.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1628 = browser.currentScene.createNode("Coordinate");
Coordinate1628.point = new X3D.MFVec3f([12.34858,0.075,3.152231,12.74257,0.075,3.071923,12.62081,0.075,4.487787,13.0148,0.075,4.407479]);
coord = Coordinate1628;

geometry = IndexedFaceSet1627;

browser.currentScene.children[323] = Shape1624;

let Shape1629 = browser.currentScene.createNode("Shape");
let Appearance1630 = browser.currentScene.createNode("Appearance");
let Material1631 = browser.currentScene.createNode("Material");
Material1631.ambientIntensity = 0;
Material1631.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1631.shininess = 0;
material = Material1631;

appearance = Appearance1630;

let IndexedFaceSet1632 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1632.solid = False;
IndexedFaceSet1632.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1632.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1633 = browser.currentScene.createNode("Coordinate");
Coordinate1633.point = new X3D.MFVec3f([11.935,0.075,3.236535,12.32898,0.075,3.156226,12.07111,0.075,3.904312,12.4651,0.075,3.824004,12.20723,0.075,4.57209,12.60122,0.075,4.491782]);
coord = Coordinate1633;

geometry = IndexedFaceSet1632;

browser.currentScene.children[324] = Shape1629;

let Shape1634 = browser.currentScene.createNode("Shape");
let Appearance1635 = browser.currentScene.createNode("Appearance");
let Material1636 = browser.currentScene.createNode("Material");
Material1636.ambientIntensity = 0;
Material1636.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1636.shininess = 0;
material = Material1636;

appearance = Appearance1635;

let IndexedFaceSet1637 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1637.solid = False;
IndexedFaceSet1637.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1637.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1638 = browser.currentScene.createNode("Coordinate");
Coordinate1638.point = new X3D.MFVec3f([11.931,0.075,3.216938,11.79688,0.075,2.558958,12.73857,0.075,3.052326,12.60445,0.075,2.394347]);
coord = Coordinate1638;

geometry = IndexedFaceSet1637;

browser.currentScene.children[325] = Shape1634;

let Shape1639 = browser.currentScene.createNode("Shape");
let Appearance1640 = browser.currentScene.createNode("Appearance");
let Material1641 = browser.currentScene.createNode("Material");
Material1641.ambientIntensity = 0;
Material1641.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1641.shininess = 0;
material = Material1641;

appearance = Appearance1640;

let IndexedFaceSet1642 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1642.solid = False;
IndexedFaceSet1642.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1642.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1643 = browser.currentScene.createNode("Coordinate");
Coordinate1643.point = new X3D.MFVec3f([15.36825,0.075,20.17994,15.50237,0.075,20.83792,14.56068,0.075,20.34455,14.6948,0.075,21.00253]);
coord = Coordinate1643;

geometry = IndexedFaceSet1642;

browser.currentScene.children[326] = Shape1639;

let Shape1644 = browser.currentScene.createNode("Shape");
let Appearance1645 = browser.currentScene.createNode("Appearance");
let Material1646 = browser.currentScene.createNode("Material");
Material1646.ambientIntensity = 0;
Material1646.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1646.shininess = 0;
material = Material1646;

appearance = Appearance1645;

let IndexedFaceSet1647 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1647.solid = False;
IndexedFaceSet1647.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1647.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1648 = browser.currentScene.createNode("Coordinate");
Coordinate1648.point = new X3D.MFVec3f([14.55668,0.075,20.32495,14.48962,0.075,19.99596,14.42256,0.075,19.66698,15.36425,0.075,20.16034,15.29719,0.075,19.83135,15.23013,0.075,19.50236]);
coord = Coordinate1648;

geometry = IndexedFaceSet1647;

browser.currentScene.children[327] = Shape1644;

let Shape1649 = browser.currentScene.createNode("Shape");
let Appearance1650 = browser.currentScene.createNode("Appearance");
let Material1651 = browser.currentScene.createNode("Material");
Material1651.ambientIntensity = 0;
Material1651.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1651.shininess = 0;
material = Material1651;

appearance = Appearance1650;

let IndexedFaceSet1652 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1652.solid = False;
IndexedFaceSet1652.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1652.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1653 = browser.currentScene.createNode("Coordinate");
Coordinate1653.point = new X3D.MFVec3f([14.55992,0.075,18.22752,14.95391,0.075,18.14721,14.83215,0.075,19.56307,15.22614,0.075,19.48277]);
coord = Coordinate1653;

geometry = IndexedFaceSet1652;

browser.currentScene.children[328] = Shape1649;

let Shape1654 = browser.currentScene.createNode("Shape");
let Appearance1655 = browser.currentScene.createNode("Appearance");
let Material1656 = browser.currentScene.createNode("Material");
Material1656.ambientIntensity = 0;
Material1656.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1656.shininess = 0;
material = Material1656;

appearance = Appearance1655;

let IndexedFaceSet1657 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1657.solid = False;
IndexedFaceSet1657.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1657.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1658 = browser.currentScene.createNode("Coordinate");
Coordinate1658.point = new X3D.MFVec3f([14.14634,0.075,18.31182,14.54032,0.075,18.23151,14.28245,0.075,18.9796,14.67644,0.075,18.89929,14.41857,0.075,19.64738,14.81256,0.075,19.56707]);
coord = Coordinate1658;

geometry = IndexedFaceSet1657;

browser.currentScene.children[329] = Shape1654;

let Shape1659 = browser.currentScene.createNode("Shape");
let Appearance1660 = browser.currentScene.createNode("Appearance");
let Material1661 = browser.currentScene.createNode("Material");
Material1661.ambientIntensity = 0;
Material1661.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1661.shininess = 0;
material = Material1661;

appearance = Appearance1660;

let IndexedFaceSet1662 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1662.solid = False;
IndexedFaceSet1662.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1662.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1663 = browser.currentScene.createNode("Coordinate");
Coordinate1663.point = new X3D.MFVec3f([14.14234,0.075,18.29222,14.00822,0.075,17.63424,14.94991,0.075,18.12761,14.81579,0.075,17.46964]);
coord = Coordinate1663;

geometry = IndexedFaceSet1662;

browser.currentScene.children[330] = Shape1659;

let Shape1664 = browser.currentScene.createNode("Shape");
let Appearance1665 = browser.currentScene.createNode("Appearance");
let Material1666 = browser.currentScene.createNode("Material");
Material1666.ambientIntensity = 0;
Material1666.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1666.shininess = 0;
material = Material1666;

appearance = Appearance1665;

let IndexedFaceSet1667 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1667.solid = False;
IndexedFaceSet1667.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1667.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1668 = browser.currentScene.createNode("Coordinate");
Coordinate1668.point = new X3D.MFVec3f([14.00423,0.075,17.61465,13.93717,0.075,17.28566,13.87011,0.075,16.95667,14.8118,0.075,17.45004,14.74474,0.075,17.12105,14.67768,0.075,16.79206]);
coord = Coordinate1668;

geometry = IndexedFaceSet1667;

browser.currentScene.children[331] = Shape1664;

let Shape1669 = browser.currentScene.createNode("Shape");
let Appearance1670 = browser.currentScene.createNode("Appearance");
let Material1671 = browser.currentScene.createNode("Material");
Material1671.ambientIntensity = 0;
Material1671.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1671.shininess = 0;
material = Material1671;

appearance = Appearance1670;

let IndexedFaceSet1672 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1672.solid = False;
IndexedFaceSet1672.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1672.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1673 = browser.currentScene.createNode("Coordinate");
Coordinate1673.point = new X3D.MFVec3f([14.67368,0.075,16.77246,14.2797,0.075,16.85277,14.53757,0.075,16.10468,14.14358,0.075,16.18499,14.40145,0.075,15.4369,14.00746,0.075,15.51721]);
coord = Coordinate1673;

geometry = IndexedFaceSet1672;

browser.currentScene.children[332] = Shape1669;

let Shape1674 = browser.currentScene.createNode("Shape");
let Appearance1675 = browser.currentScene.createNode("Appearance");
let Material1676 = browser.currentScene.createNode("Material");
Material1676.ambientIntensity = 0;
Material1676.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1676.shininess = 0;
material = Material1676;

appearance = Appearance1675;

let IndexedFaceSet1677 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1677.solid = False;
IndexedFaceSet1677.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1677.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1678 = browser.currentScene.createNode("Coordinate");
Coordinate1678.point = new X3D.MFVec3f([14.2601,0.075,16.85676,13.86611,0.075,16.93707,14.12398,0.075,16.18899,13.73,0.075,16.26929,13.98787,0.075,15.52121,13.59388,0.075,15.60152]);
coord = Coordinate1678;

geometry = IndexedFaceSet1677;

browser.currentScene.children[333] = Shape1674;

let Shape1679 = browser.currentScene.createNode("Shape");
let Appearance1680 = browser.currentScene.createNode("Appearance");
let Material1681 = browser.currentScene.createNode("Material");
Material1681.ambientIntensity = 0;
Material1681.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1681.shininess = 0;
material = Material1681;

appearance = Appearance1680;

let IndexedFaceSet1682 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1682.solid = False;
IndexedFaceSet1682.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1682.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1683 = browser.currentScene.createNode("Coordinate");
Coordinate1683.point = new X3D.MFVec3f([13.58989,0.075,15.58192,13.45577,0.075,14.92394,14.39746,0.075,15.41731,14.26334,0.075,14.75933]);
coord = Coordinate1683;

geometry = IndexedFaceSet1682;

browser.currentScene.children[334] = Shape1679;

let Shape1684 = browser.currentScene.createNode("Shape");
let Appearance1685 = browser.currentScene.createNode("Appearance");
let Material1686 = browser.currentScene.createNode("Material");
Material1686.ambientIntensity = 0;
Material1686.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1686.shininess = 0;
material = Material1686;

appearance = Appearance1685;

let IndexedFaceSet1687 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1687.solid = False;
IndexedFaceSet1687.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1687.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1688 = browser.currentScene.createNode("Coordinate");
Coordinate1688.point = new X3D.MFVec3f([12.3501,0.075,7.386296,12.54709,0.075,7.346142,12.74408,0.075,7.305988,12.48621,0.075,8.054074,12.68321,0.075,8.01392,12.8802,0.075,7.973765,12.62233,0.075,8.721852,12.81932,0.075,8.681698,13.01632,0.075,8.641543]);
coord = Coordinate1688;

geometry = IndexedFaceSet1687;

browser.currentScene.children[335] = Shape1684;

let Shape1689 = browser.currentScene.createNode("Shape");
let Appearance1690 = browser.currentScene.createNode("Appearance");
let Material1691 = browser.currentScene.createNode("Material");
Material1691.ambientIntensity = 0;
Material1691.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1691.shininess = 0;
material = Material1691;

appearance = Appearance1690;

let IndexedFaceSet1692 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1692.solid = False;
IndexedFaceSet1692.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1692.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1693 = browser.currentScene.createNode("Coordinate");
Coordinate1693.point = new X3D.MFVec3f([11.93651,0.075,7.470599,12.3305,0.075,7.390291,12.20875,0.075,8.806155,12.60273,0.075,8.725846]);
coord = Coordinate1693;

geometry = IndexedFaceSet1692;

browser.currentScene.children[336] = Shape1689;

let Shape1694 = browser.currentScene.createNode("Shape");
let Appearance1695 = browser.currentScene.createNode("Appearance");
let Material1696 = browser.currentScene.createNode("Material");
Material1696.ambientIntensity = 0;
Material1696.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1696.shininess = 0;
material = Material1696;

appearance = Appearance1695;

let IndexedFaceSet1697 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1697.solid = False;
IndexedFaceSet1697.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1697.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1698 = browser.currentScene.createNode("Coordinate");
Coordinate1698.point = new X3D.MFVec3f([12.60597,0.075,6.628411,12.74009,0.075,7.286391,12.20218,0.075,6.710717,12.3363,0.075,7.368696,11.7984,0.075,6.793023,11.93252,0.075,7.451002]);
coord = Coordinate1698;

geometry = IndexedFaceSet1697;

browser.currentScene.children[337] = Shape1694;

let Shape1699 = browser.currentScene.createNode("Shape");
let Appearance1700 = browser.currentScene.createNode("Appearance");
let Material1701 = browser.currentScene.createNode("Material");
Material1701.ambientIntensity = 0;
Material1701.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1701.shininess = 0;
material = Material1701;

appearance = Appearance1700;

let IndexedFaceSet1702 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1702.solid = False;
IndexedFaceSet1702.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1702.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1703 = browser.currentScene.createNode("Coordinate");
Coordinate1703.point = new X3D.MFVec3f([12.46786,0.075,5.950835,12.60197,0.075,6.608814,11.66028,0.075,6.115446,11.7944,0.075,6.773426]);
coord = Coordinate1703;

geometry = IndexedFaceSet1702;

browser.currentScene.children[338] = Shape1699;

let Shape1704 = browser.currentScene.createNode("Shape");
let Appearance1705 = browser.currentScene.createNode("Appearance");
let Material1706 = browser.currentScene.createNode("Material");
Material1706.ambientIntensity = 0;
Material1706.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1706.shininess = 0;
material = Material1706;

appearance = Appearance1705;

let IndexedFaceSet1707 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1707.solid = False;
IndexedFaceSet1707.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1707.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1708 = browser.currentScene.createNode("Coordinate");
Coordinate1708.point = new X3D.MFVec3f([11.79764,0.075,4.675991,11.99463,0.075,4.635836,12.19163,0.075,4.595682,11.93376,0.075,5.343768,12.13075,0.075,5.303614,12.32774,0.075,5.26346,12.06987,0.075,6.011546,12.26687,0.075,5.971392,12.46386,0.075,5.931238]);
coord = Coordinate1708;

geometry = IndexedFaceSet1707;

browser.currentScene.children[339] = Shape1704;

let Shape1709 = browser.currentScene.createNode("Shape");
let Appearance1710 = browser.currentScene.createNode("Appearance");
let Material1711 = browser.currentScene.createNode("Material");
Material1711.ambientIntensity = 0;
Material1711.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1711.shininess = 0;
material = Material1711;

appearance = Appearance1710;

let IndexedFaceSet1712 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1712.solid = False;
IndexedFaceSet1712.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1712.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1713 = browser.currentScene.createNode("Coordinate");
Coordinate1713.point = new X3D.MFVec3f([11.38406,0.075,4.760293,11.58105,0.075,4.720139,11.77804,0.075,4.679985,11.52017,0.075,5.428071,11.71717,0.075,5.387917,11.91416,0.075,5.347763,11.65629,0.075,6.095849,11.85328,0.075,6.055695,12.05028,0.075,6.015541]);
coord = Coordinate1713;

geometry = IndexedFaceSet1712;

browser.currentScene.children[340] = Shape1709;

let Shape1714 = browser.currentScene.createNode("Shape");
let Appearance1715 = browser.currentScene.createNode("Appearance");
let Material1716 = browser.currentScene.createNode("Material");
Material1716.ambientIntensity = 0;
Material1716.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1716.shininess = 0;
material = Material1716;

appearance = Appearance1715;

let IndexedFaceSet1717 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1717.solid = False;
IndexedFaceSet1717.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1717.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1718 = browser.currentScene.createNode("Coordinate");
Coordinate1718.point = new X3D.MFVec3f([11.38006,0.075,4.740696,11.24594,0.075,4.082717,12.18763,0.075,4.576085,12.05351,0.075,3.918105]);
coord = Coordinate1718;

geometry = IndexedFaceSet1717;

browser.currentScene.children[341] = Shape1714;

let Shape1719 = browser.currentScene.createNode("Shape");
let Appearance1720 = browser.currentScene.createNode("Appearance");
let Material1721 = browser.currentScene.createNode("Material");
Material1721.ambientIntensity = 0;
Material1721.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1721.shininess = 0;
material = Material1721;

appearance = Appearance1720;

let IndexedFaceSet1722 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1722.solid = False;
IndexedFaceSet1722.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1722.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1723 = browser.currentScene.createNode("Coordinate");
Coordinate1723.point = new X3D.MFVec3f([11.9154,0.075,3.240529,12.04952,0.075,3.898509,11.10783,0.075,3.40514,11.24195,0.075,4.06312]);
coord = Coordinate1723;

geometry = IndexedFaceSet1722;

browser.currentScene.children[342] = Shape1719;

let Shape1724 = browser.currentScene.createNode("Shape");
let Appearance1725 = browser.currentScene.createNode("Appearance");
let Material1726 = browser.currentScene.createNode("Material");
Material1726.ambientIntensity = 0;
Material1726.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1726.shininess = 0;
material = Material1726;

appearance = Appearance1725;

let IndexedFaceSet1727 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1727.solid = False;
IndexedFaceSet1727.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1727.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1728 = browser.currentScene.createNode("Coordinate");
Coordinate1728.point = new X3D.MFVec3f([11.24518,0.075,1.965685,11.63917,0.075,1.885376,11.51742,0.075,3.30124,11.9114,0.075,3.220932]);
coord = Coordinate1728;

geometry = IndexedFaceSet1727;

browser.currentScene.children[343] = Shape1724;

let Shape1729 = browser.currentScene.createNode("Shape");
let Appearance1730 = browser.currentScene.createNode("Appearance");
let Material1731 = browser.currentScene.createNode("Material");
Material1731.ambientIntensity = 0;
Material1731.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1731.shininess = 0;
material = Material1731;

appearance = Appearance1730;

let IndexedFaceSet1732 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1732.solid = False;
IndexedFaceSet1732.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1732.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1733 = browser.currentScene.createNode("Coordinate");
Coordinate1733.point = new X3D.MFVec3f([10.8316,0.075,2.049988,11.02859,0.075,2.009833,11.22559,0.075,1.969679,10.96772,0.075,2.717766,11.16471,0.075,2.677611,11.3617,0.075,2.637457,11.10383,0.075,3.385544,11.30083,0.075,3.345389,11.49782,0.075,3.305235]);
coord = Coordinate1733;

geometry = IndexedFaceSet1732;

browser.currentScene.children[344] = Shape1729;

let Shape1734 = browser.currentScene.createNode("Shape");
let Appearance1735 = browser.currentScene.createNode("Appearance");
let Material1736 = browser.currentScene.createNode("Material");
Material1736.ambientIntensity = 0;
Material1736.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1736.shininess = 0;
material = Material1736;

appearance = Appearance1735;

let IndexedFaceSet1737 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1737.solid = False;
IndexedFaceSet1737.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1737.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1738 = browser.currentScene.createNode("Coordinate");
Coordinate1738.point = new X3D.MFVec3f([13.45652,0.075,17.04097,13.85051,0.075,16.96066,13.59264,0.075,17.70875,13.98663,0.075,17.62844,13.72876,0.075,18.37653,14.12274,0.075,18.29622]);
coord = Coordinate1738;

geometry = IndexedFaceSet1737;

browser.currentScene.children[345] = Shape1734;

let Shape1739 = browser.currentScene.createNode("Shape");
let Appearance1740 = browser.currentScene.createNode("Appearance");
let Material1741 = browser.currentScene.createNode("Material");
Material1741.ambientIntensity = 0;
Material1741.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1741.shininess = 0;
material = Material1741;

appearance = Appearance1740;

let IndexedFaceSet1742 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1742.solid = False;
IndexedFaceSet1742.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1742.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1743 = browser.currentScene.createNode("Coordinate");
Coordinate1743.point = new X3D.MFVec3f([11.2467,0.075,6.199749,11.44369,0.075,6.159595,11.64069,0.075,6.119441,11.38282,0.075,6.867527,11.57981,0.075,6.827373,11.7768,0.075,6.787219,11.51893,0.075,7.535305,11.71593,0.075,7.495151,11.91292,0.075,7.454997]);
coord = Coordinate1743;

geometry = IndexedFaceSet1742;

browser.currentScene.children[346] = Shape1739;

let Shape1744 = browser.currentScene.createNode("Shape");
let Appearance1745 = browser.currentScene.createNode("Appearance");
let Material1746 = browser.currentScene.createNode("Material");
Material1746.ambientIntensity = 0;
Material1746.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1746.shininess = 0;
material = Material1746;

appearance = Appearance1745;

let IndexedFaceSet1747 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1747.solid = False;
IndexedFaceSet1747.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1747.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1748 = browser.currentScene.createNode("Coordinate");
Coordinate1748.point = new X3D.MFVec3f([10.83312,0.075,6.284052,11.03011,0.075,6.243898,11.2271,0.075,6.203744,10.96923,0.075,6.95183,11.16623,0.075,6.911676,11.36322,0.075,6.871522,11.10535,0.075,7.619608,11.30234,0.075,7.579454,11.49934,0.075,7.539299]);
coord = Coordinate1748;

geometry = IndexedFaceSet1747;

browser.currentScene.children[347] = Shape1744;

let Shape1749 = browser.currentScene.createNode("Shape");
let Appearance1750 = browser.currentScene.createNode("Appearance");
let Material1751 = browser.currentScene.createNode("Material");
Material1751.ambientIntensity = 0;
Material1751.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1751.shininess = 0;
material = Material1751;

appearance = Appearance1750;

let IndexedFaceSet1752 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1752.solid = False;
IndexedFaceSet1752.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1752.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1753 = browser.currentScene.createNode("Coordinate");
Coordinate1753.point = new X3D.MFVec3f([10.82912,0.075,6.264455,10.695,0.075,5.606476,11.63669,0.075,6.099844,11.50257,0.075,5.441864]);
coord = Coordinate1753;

geometry = IndexedFaceSet1752;

browser.currentScene.children[348] = Shape1749;

let Shape1754 = browser.currentScene.createNode("Shape");
let Appearance1755 = browser.currentScene.createNode("Appearance");
let Material1756 = browser.currentScene.createNode("Material");
Material1756.ambientIntensity = 0;
Material1756.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1756.shininess = 0;
material = Material1756;

appearance = Appearance1755;

let IndexedFaceSet1757 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1757.solid = False;
IndexedFaceSet1757.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1757.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1758 = browser.currentScene.createNode("Coordinate");
Coordinate1758.point = new X3D.MFVec3f([10.69101,0.075,5.586879,10.55689,0.075,4.928899,11.49858,0.075,5.422267,11.36446,0.075,4.764288]);
coord = Coordinate1758;

geometry = IndexedFaceSet1757;

browser.currentScene.children[349] = Shape1754;

let Shape1759 = browser.currentScene.createNode("Shape");
let Appearance1760 = browser.currentScene.createNode("Appearance");
let Material1761 = browser.currentScene.createNode("Material");
Material1761.ambientIntensity = 0;
Material1761.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1761.shininess = 0;
material = Material1761;

appearance = Appearance1760;

let IndexedFaceSet1762 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1762.solid = False;
IndexedFaceSet1762.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1762.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1763 = browser.currentScene.createNode("Coordinate");
Coordinate1763.point = new X3D.MFVec3f([10.69424,0.075,3.489444,11.08823,0.075,3.409135,10.96648,0.075,4.824999,11.36047,0.075,4.744691]);
coord = Coordinate1763;

geometry = IndexedFaceSet1762;

browser.currentScene.children[350] = Shape1759;

let Shape1764 = browser.currentScene.createNode("Shape");
let Appearance1765 = browser.currentScene.createNode("Appearance");
let Material1766 = browser.currentScene.createNode("Material");
Material1766.ambientIntensity = 0;
Material1766.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1766.shininess = 0;
material = Material1766;

appearance = Appearance1765;

let IndexedFaceSet1767 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1767.solid = False;
IndexedFaceSet1767.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1767.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1768 = browser.currentScene.createNode("Coordinate");
Coordinate1768.point = new X3D.MFVec3f([10.28066,0.075,3.573746,10.47765,0.075,3.533592,10.67465,0.075,3.493438,10.41678,0.075,4.241524,10.61377,0.075,4.20137,10.81076,0.075,4.161216,10.55289,0.075,4.909302,10.74989,0.075,4.869148,10.94688,0.075,4.828994]);
coord = Coordinate1768;

geometry = IndexedFaceSet1767;

browser.currentScene.children[351] = Shape1764;

let Shape1769 = browser.currentScene.createNode("Shape");
let Appearance1770 = browser.currentScene.createNode("Appearance");
let Material1771 = browser.currentScene.createNode("Material");
Material1771.ambientIntensity = 0;
Material1771.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1771.shininess = 0;
material = Material1771;

appearance = Appearance1770;

let IndexedFaceSet1772 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1772.solid = False;
IndexedFaceSet1772.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1772.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1773 = browser.currentScene.createNode("Coordinate");
Coordinate1773.point = new X3D.MFVec3f([10.27667,0.075,3.554149,10.14255,0.075,2.89617,11.08424,0.075,3.389538,10.95012,0.075,2.731559]);
coord = Coordinate1773;

geometry = IndexedFaceSet1772;

browser.currentScene.children[352] = Shape1769;

let Shape1774 = browser.currentScene.createNode("Shape");
let Appearance1775 = browser.currentScene.createNode("Appearance");
let Material1776 = browser.currentScene.createNode("Material");
Material1776.ambientIntensity = 0;
Material1776.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1776.shininess = 0;
material = Material1776;

appearance = Appearance1775;

let IndexedFaceSet1777 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1777.solid = False;
IndexedFaceSet1777.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1777.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1778 = browser.currentScene.createNode("Coordinate");
Coordinate1778.point = new X3D.MFVec3f([10.13855,0.075,2.876573,10.00443,0.075,2.218594,10.94612,0.075,2.711962,10.812,0.075,2.053982]);
coord = Coordinate1778;

geometry = IndexedFaceSet1777;

browser.currentScene.children[353] = Shape1774;

let Shape1779 = browser.currentScene.createNode("Shape");
let Appearance1780 = browser.currentScene.createNode("Appearance");
let Material1781 = browser.currentScene.createNode("Material");
Material1781.ambientIntensity = 0;
Material1781.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1781.shininess = 0;
material = Material1781;

appearance = Appearance1780;

let IndexedFaceSet1782 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1782.solid = False;
IndexedFaceSet1782.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1782.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1783 = browser.currentScene.createNode("Coordinate");
Coordinate1783.point = new X3D.MFVec3f([10.14007,0.075,7.110638,10.00595,0.075,6.452658,10.94764,0.075,6.946026,10.81352,0.075,6.288047]);
coord = Coordinate1783;

geometry = IndexedFaceSet1782;

browser.currentScene.children[354] = Shape1779;

let Shape1784 = browser.currentScene.createNode("Shape");
let Appearance1785 = browser.currentScene.createNode("Appearance");
let Material1786 = browser.currentScene.createNode("Material");
Material1786.ambientIntensity = 0;
Material1786.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1786.shininess = 0;
material = Material1786;

appearance = Appearance1785;

let IndexedFaceSet1787 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1787.solid = False;
IndexedFaceSet1787.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1787.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1788 = browser.currentScene.createNode("Coordinate");
Coordinate1788.point = new X3D.MFVec3f([10.1433,0.075,5.013202,10.53729,0.075,4.932894,10.27942,0.075,5.68098,10.67341,0.075,5.600672,10.41554,0.075,6.348758,10.80952,0.075,6.26845]);
coord = Coordinate1788;

geometry = IndexedFaceSet1787;

browser.currentScene.children[355] = Shape1784;

let Shape1789 = browser.currentScene.createNode("Shape");
let Appearance1790 = browser.currentScene.createNode("Appearance");
let Material1791 = browser.currentScene.createNode("Material");
Material1791.ambientIntensity = 0;
Material1791.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1791.shininess = 0;
material = Material1791;

appearance = Appearance1790;

let IndexedFaceSet1792 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1792.solid = False;
IndexedFaceSet1792.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1792.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1793 = browser.currentScene.createNode("Coordinate");
Coordinate1793.point = new X3D.MFVec3f([9.72972,0.075,5.097506,10.12371,0.075,5.017197,9.865837,0.075,5.765283,10.25982,0.075,5.684975,10.00195,0.075,6.433061,10.39594,0.075,6.352753]);
coord = Coordinate1793;

geometry = IndexedFaceSet1792;

browser.currentScene.children[356] = Shape1789;

let Shape1794 = browser.currentScene.createNode("Shape");
let Appearance1795 = browser.currentScene.createNode("Appearance");
let Material1796 = browser.currentScene.createNode("Material");
Material1796.ambientIntensity = 0;
Material1796.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1796.shininess = 0;
material = Material1796;

appearance = Appearance1795;

let IndexedFaceSet1797 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1797.solid = False;
IndexedFaceSet1797.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1797.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1798 = browser.currentScene.createNode("Coordinate");
Coordinate1798.point = new X3D.MFVec3f([10.39918,0.075,4.255318,10.5333,0.075,4.913297,9.591606,0.075,4.419929,9.725726,0.075,5.077909]);
coord = Coordinate1798;

geometry = IndexedFaceSet1797;

browser.currentScene.children[357] = Shape1794;

let Shape1799 = browser.currentScene.createNode("Shape");
let Appearance1800 = browser.currentScene.createNode("Appearance");
let Material1801 = browser.currentScene.createNode("Material");
Material1801.ambientIntensity = 0;
Material1801.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1801.shininess = 0;
material = Material1801;

appearance = Appearance1800;

let IndexedFaceSet1802 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1802.solid = False;
IndexedFaceSet1802.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1802.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1803 = browser.currentScene.createNode("Coordinate");
Coordinate1803.point = new X3D.MFVec3f([9.587612,0.075,4.400332,9.453492,0.075,3.742352,10.39518,0.075,4.235721,10.26106,0.075,3.577741]);
coord = Coordinate1803;

geometry = IndexedFaceSet1802;

browser.currentScene.children[358] = Shape1799;

let Shape1804 = browser.currentScene.createNode("Shape");
let Appearance1805 = browser.currentScene.createNode("Appearance");
let Material1806 = browser.currentScene.createNode("Material");
Material1806.ambientIntensity = 0;
Material1806.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1806.shininess = 0;
material = Material1806;

appearance = Appearance1805;

let IndexedFaceSet1807 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1807.solid = False;
IndexedFaceSet1807.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1807.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1808 = browser.currentScene.createNode("Coordinate");
Coordinate1808.point = new X3D.MFVec3f([9.590848,0.075,2.302897,9.984836,0.075,2.222588,9.863082,0.075,3.638453,10.25707,0.075,3.558144]);
coord = Coordinate1808;

geometry = IndexedFaceSet1807;

browser.currentScene.children[359] = Shape1804;

let Shape1809 = browser.currentScene.createNode("Shape");
let Appearance1810 = browser.currentScene.createNode("Appearance");
let Material1811 = browser.currentScene.createNode("Material");
Material1811.ambientIntensity = 0;
Material1811.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1811.shininess = 0;
material = Material1811;

appearance = Appearance1810;

let IndexedFaceSet1812 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1812.solid = False;
IndexedFaceSet1812.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1812.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1813 = browser.currentScene.createNode("Coordinate");
Coordinate1813.point = new X3D.MFVec3f([9.177264,0.075,2.3872,9.571251,0.075,2.306891,9.449498,0.075,3.722755,9.843485,0.075,3.642447]);
coord = Coordinate1813;

geometry = IndexedFaceSet1812;

browser.currentScene.children[360] = Shape1809;

let Shape1814 = browser.currentScene.createNode("Shape");
let Appearance1815 = browser.currentScene.createNode("Appearance");
let Material1816 = browser.currentScene.createNode("Material");
Material1816.ambientIntensity = 0;
Material1816.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1816.shininess = 0;
material = Material1816;

appearance = Appearance1815;

let IndexedFaceSet1817 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1817.solid = False;
IndexedFaceSet1817.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1817.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1818 = browser.currentScene.createNode("Coordinate");
Coordinate1818.point = new X3D.MFVec3f([9.17327,0.075,2.367603,9.03915,0.075,1.709623,9.577055,0.075,2.285297,9.442936,0.075,1.627318,9.980841,0.075,2.202991,9.846722,0.075,1.545012]);
coord = Coordinate1818;

geometry = IndexedFaceSet1817;

browser.currentScene.children[361] = Shape1814;

let Shape1819 = browser.currentScene.createNode("Shape");
let Appearance1820 = browser.currentScene.createNode("Appearance");
let Material1821 = browser.currentScene.createNode("Material");
Material1821.ambientIntensity = 0;
Material1821.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1821.shininess = 0;
material = Material1821;

appearance = Appearance1820;

let IndexedFaceSet1822 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1822.solid = False;
IndexedFaceSet1822.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1822.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1823 = browser.currentScene.createNode("Coordinate");
Coordinate1823.point = new X3D.MFVec3f([9.174786,0.075,6.601667,9.040667,0.075,5.943688,9.982357,0.075,6.437056,9.848237,0.075,5.779077]);
coord = Coordinate1823;

geometry = IndexedFaceSet1822;

browser.currentScene.children[362] = Shape1819;

let Shape1824 = browser.currentScene.createNode("Shape");
let Appearance1825 = browser.currentScene.createNode("Appearance");
let Material1826 = browser.currentScene.createNode("Material");
Material1826.ambientIntensity = 0;
Material1826.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1826.shininess = 0;
material = Material1826;

appearance = Appearance1825;

let IndexedFaceSet1827 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1827.solid = False;
IndexedFaceSet1827.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1827.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1828 = browser.currentScene.createNode("Coordinate");
Coordinate1828.point = new X3D.MFVec3f([9.036672,0.075,5.924091,8.902553,0.075,5.266111,9.844243,0.075,5.75948,9.710123,0.075,5.1015]);
coord = Coordinate1828;

geometry = IndexedFaceSet1827;

browser.currentScene.children[363] = Shape1824;

let Shape1829 = browser.currentScene.createNode("Shape");
let Appearance1830 = browser.currentScene.createNode("Appearance");
let Material1831 = browser.currentScene.createNode("Material");
Material1831.ambientIntensity = 0;
Material1831.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1831.shininess = 0;
material = Material1831;

appearance = Appearance1830;

let IndexedFaceSet1832 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1832.solid = False;
IndexedFaceSet1832.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1832.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1833 = browser.currentScene.createNode("Coordinate");
Coordinate1833.point = new X3D.MFVec3f([9.039908,0.075,3.826656,9.236902,0.075,3.786501,9.433895,0.075,3.746347,9.176025,0.075,4.494433,9.373018,0.075,4.454279,9.570012,0.075,4.414125,9.312142,0.075,5.162211,9.509135,0.075,5.122057,9.706129,0.075,5.081903]);
coord = Coordinate1833;

geometry = IndexedFaceSet1832;

browser.currentScene.children[364] = Shape1829;

let Shape1834 = browser.currentScene.createNode("Shape");
let Appearance1835 = browser.currentScene.createNode("Appearance");
let Material1836 = browser.currentScene.createNode("Material");
Material1836.ambientIntensity = 0;
Material1836.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1836.shininess = 0;
material = Material1836;

appearance = Appearance1835;

let IndexedFaceSet1837 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1837.solid = False;
IndexedFaceSet1837.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1837.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1838 = browser.currentScene.createNode("Coordinate");
Coordinate1838.point = new X3D.MFVec3f([9.292545,0.075,5.166206,8.898558,0.075,5.246514,9.156428,0.075,4.498428,8.762442,0.075,4.578736,9.020311,0.075,3.83065,8.626325,0.075,3.910959]);
coord = Coordinate1838;

geometry = IndexedFaceSet1837;

browser.currentScene.children[365] = Shape1834;

let Shape1839 = browser.currentScene.createNode("Shape");
let Appearance1840 = browser.currentScene.createNode("Appearance");
let Material1841 = browser.currentScene.createNode("Material");
Material1841.ambientIntensity = 0;
Material1841.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1841.shininess = 0;
material = Material1841;

appearance = Appearance1840;

let IndexedFaceSet1842 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1842.solid = False;
IndexedFaceSet1842.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1842.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1843 = browser.currentScene.createNode("Coordinate");
Coordinate1843.point = new X3D.MFVec3f([8.62233,0.075,3.891361,8.488211,0.075,3.233382,9.429901,0.075,3.72675,9.295781,0.075,3.068771]);
coord = Coordinate1843;

geometry = IndexedFaceSet1842;

browser.currentScene.children[366] = Shape1839;

let Shape1844 = browser.currentScene.createNode("Shape");
let Appearance1845 = browser.currentScene.createNode("Appearance");
let Material1846 = browser.currentScene.createNode("Material");
Material1846.ambientIntensity = 0;
Material1846.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1846.shininess = 0;
material = Material1846;

appearance = Appearance1845;

let IndexedFaceSet1847 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1847.solid = False;
IndexedFaceSet1847.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1847.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1848 = browser.currentScene.createNode("Coordinate");
Coordinate1848.point = new X3D.MFVec3f([8.484216,0.075,3.213785,8.350097,0.075,2.555806,9.291787,0.075,3.049174,9.157667,0.075,2.391194]);
coord = Coordinate1848;

geometry = IndexedFaceSet1847;

browser.currentScene.children[367] = Shape1844;

let Shape1849 = browser.currentScene.createNode("Shape");
let Appearance1850 = browser.currentScene.createNode("Appearance");
let Material1851 = browser.currentScene.createNode("Material");
Material1851.ambientIntensity = 0;
Material1851.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1851.shininess = 0;
material = Material1851;

appearance = Appearance1850;

let IndexedFaceSet1852 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1852.solid = False;
IndexedFaceSet1852.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1852.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1853 = browser.currentScene.createNode("Coordinate");
Coordinate1853.point = new X3D.MFVec3f([8.487453,0.075,1.11635,8.684446,0.075,1.076196,8.881439,0.075,1.036041,8.623569,0.075,1.784128,8.820562,0.075,1.743973,9.017556,0.075,1.703819,8.759686,0.075,2.451906,8.956679,0.075,2.411752,9.153673,0.075,2.371597]);
coord = Coordinate1853;

geometry = IndexedFaceSet1852;

browser.currentScene.children[368] = Shape1849;

let Shape1854 = browser.currentScene.createNode("Shape");
let Appearance1855 = browser.currentScene.createNode("Appearance");
let Material1856 = browser.currentScene.createNode("Material");
Material1856.ambientIntensity = 0;
Material1856.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1856.shininess = 0;
material = Material1856;

appearance = Appearance1855;

let IndexedFaceSet1857 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1857.solid = False;
IndexedFaceSet1857.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1857.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1858 = browser.currentScene.createNode("Coordinate");
Coordinate1858.point = new X3D.MFVec3f([8.073869,0.075,1.200653,8.270862,0.075,1.160499,8.467855,0.075,1.120344,8.209986,0.075,1.868431,8.406979,0.075,1.828277,8.603972,0.075,1.788122,8.346102,0.075,2.536209,8.543096,0.075,2.496054,8.740088,0.075,2.4559]);
coord = Coordinate1858;

geometry = IndexedFaceSet1857;

browser.currentScene.children[369] = Shape1854;

let Shape1859 = browser.currentScene.createNode("Shape");
let Appearance1860 = browser.currentScene.createNode("Appearance");
let Material1861 = browser.currentScene.createNode("Material");
Material1861.ambientIntensity = 0;
Material1861.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1861.shininess = 0;
material = Material1861;

appearance = Appearance1860;

let IndexedFaceSet1862 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1862.solid = False;
IndexedFaceSet1862.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet1862.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate1863 = browser.currentScene.createNode("Coordinate");
Coordinate1863.point = new X3D.MFVec3f([8.743325,0.075,0.3584649,8.810385,0.075,0.6874546,8.877445,0.075,1.016444,7.935755,0.075,0.5230764,8.002814,0.075,0.8520661,8.069874,0.075,1.181056]);
coord = Coordinate1863;

geometry = IndexedFaceSet1862;

browser.currentScene.children[370] = Shape1859;

let Shape1864 = browser.currentScene.createNode("Shape");
let Appearance1865 = browser.currentScene.createNode("Appearance");
let Material1866 = browser.currentScene.createNode("Material");
Material1866.ambientIntensity = 0;
Material1866.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1866.shininess = 0;
material = Material1866;

appearance = Appearance1865;

let IndexedFaceSet1867 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1867.solid = False;
IndexedFaceSet1867.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1867.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1868 = browser.currentScene.createNode("Coordinate");
Coordinate1868.point = new X3D.MFVec3f([8.488969,0.075,5.350414,8.882956,0.075,5.270106,8.761202,0.075,6.68597,9.155189,0.075,6.605662]);
coord = Coordinate1868;

geometry = IndexedFaceSet1867;

browser.currentScene.children[371] = Shape1864;

let Shape1869 = browser.currentScene.createNode("Shape");
let Appearance1870 = browser.currentScene.createNode("Appearance");
let Material1871 = browser.currentScene.createNode("Material");
Material1871.ambientIntensity = 0;
Material1871.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1871.shininess = 0;
material = Material1871;

appearance = Appearance1870;

let IndexedFaceSet1872 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1872.solid = False;
IndexedFaceSet1872.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1872.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1873 = browser.currentScene.createNode("Coordinate");
Coordinate1873.point = new X3D.MFVec3f([8.741605,0.075,6.689965,8.544612,0.075,6.730119,8.347618,0.075,6.770273,8.605488,0.075,6.022187,8.408495,0.075,6.062341,8.211501,0.075,6.102495,8.469372,0.075,5.354409,8.272378,0.075,5.394563,8.075385,0.075,5.434718]);
coord = Coordinate1873;

geometry = IndexedFaceSet1872;

browser.currentScene.children[372] = Shape1869;

let Shape1874 = browser.currentScene.createNode("Shape");
let Appearance1875 = browser.currentScene.createNode("Appearance");
let Material1876 = browser.currentScene.createNode("Material");
Material1876.ambientIntensity = 0;
Material1876.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1876.shininess = 0;
material = Material1876;

appearance = Appearance1875;

let IndexedFaceSet1877 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1877.solid = False;
IndexedFaceSet1877.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1877.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1878 = browser.currentScene.createNode("Coordinate");
Coordinate1878.point = new X3D.MFVec3f([8.07139,0.075,5.415121,7.937271,0.075,4.757141,8.878961,0.075,5.250509,8.744842,0.075,4.59253]);
coord = Coordinate1878;

geometry = IndexedFaceSet1877;

browser.currentScene.children[373] = Shape1874;

let Shape1879 = browser.currentScene.createNode("Shape");
let Appearance1880 = browser.currentScene.createNode("Appearance");
let Material1881 = browser.currentScene.createNode("Material");
Material1881.ambientIntensity = 0;
Material1881.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1881.shininess = 0;
material = Material1881;

appearance = Appearance1880;

let IndexedFaceSet1882 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1882.solid = False;
IndexedFaceSet1882.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1882.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1883 = browser.currentScene.createNode("Coordinate");
Coordinate1883.point = new X3D.MFVec3f([7.933276,0.075,4.737544,7.799157,0.075,4.079565,8.337062,0.075,4.655238,8.202942,0.075,3.997259,8.740847,0.075,4.572933,8.606728,0.075,3.914953]);
coord = Coordinate1883;

geometry = IndexedFaceSet1882;

browser.currentScene.children[374] = Shape1879;

let Shape1884 = browser.currentScene.createNode("Shape");
let Appearance1885 = browser.currentScene.createNode("Appearance");
let Material1886 = browser.currentScene.createNode("Material");
Material1886.ambientIntensity = 0;
Material1886.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1886.shininess = 0;
material = Material1886;

appearance = Appearance1885;

let IndexedFaceSet1887 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1887.solid = False;
IndexedFaceSet1887.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1887.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1888 = browser.currentScene.createNode("Coordinate");
Coordinate1888.point = new X3D.MFVec3f([7.936512,0.075,2.640109,8.3305,0.075,2.5598,8.208746,0.075,3.975665,8.602733,0.075,3.895356]);
coord = Coordinate1888;

geometry = IndexedFaceSet1887;

browser.currentScene.children[375] = Shape1884;

let Shape1889 = browser.currentScene.createNode("Shape");
let Appearance1890 = browser.currentScene.createNode("Appearance");
let Material1891 = browser.currentScene.createNode("Material");
Material1891.ambientIntensity = 0;
Material1891.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1891.shininess = 0;
material = Material1891;

appearance = Appearance1890;

let IndexedFaceSet1892 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1892.solid = False;
IndexedFaceSet1892.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1892.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1893 = browser.currentScene.createNode("Coordinate");
Coordinate1893.point = new X3D.MFVec3f([8.189149,0.075,3.979659,7.992156,0.075,4.019814,7.795162,0.075,4.059968,8.053032,0.075,3.311881,7.856039,0.075,3.352035,7.659045,0.075,3.39219,7.916915,0.075,2.644103,7.719922,0.075,2.684258,7.522929,0.075,2.724412]);
coord = Coordinate1893;

geometry = IndexedFaceSet1892;

browser.currentScene.children[376] = Shape1889;

let Shape1894 = browser.currentScene.createNode("Shape");
let Appearance1895 = browser.currentScene.createNode("Appearance");
let Material1896 = browser.currentScene.createNode("Material");
Material1896.ambientIntensity = 0;
Material1896.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1896.shininess = 0;
material = Material1896;

appearance = Appearance1895;

let IndexedFaceSet1897 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1897.solid = False;
IndexedFaceSet1897.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1897.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1898 = browser.currentScene.createNode("Coordinate");
Coordinate1898.point = new X3D.MFVec3f([7.518934,0.075,2.704815,7.384815,0.075,2.046835,8.326505,0.075,2.540203,8.192386,0.075,1.882224]);
coord = Coordinate1898;

geometry = IndexedFaceSet1897;

browser.currentScene.children[377] = Shape1894;

let Shape1899 = browser.currentScene.createNode("Shape");
let Appearance1900 = browser.currentScene.createNode("Appearance");
let Material1901 = browser.currentScene.createNode("Material");
Material1901.ambientIntensity = 0;
Material1901.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1901.shininess = 0;
material = Material1901;

appearance = Appearance1900;

let IndexedFaceSet1902 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1902.solid = False;
IndexedFaceSet1902.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1902.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1903 = browser.currentScene.createNode("Coordinate");
Coordinate1903.point = new X3D.MFVec3f([7.38082,0.075,2.027238,7.246701,0.075,1.369259,8.188391,0.075,1.862627,8.054272,0.075,1.204647]);
coord = Coordinate1903;

geometry = IndexedFaceSet1902;

browser.currentScene.children[378] = Shape1899;

let Shape1904 = browser.currentScene.createNode("Shape");
let Appearance1905 = browser.currentScene.createNode("Appearance");
let Material1906 = browser.currentScene.createNode("Material");
Material1906.ambientIntensity = 0;
Material1906.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1906.shininess = 0;
material = Material1906;

appearance = Appearance1905;

let IndexedFaceSet1907 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1907.solid = False;
IndexedFaceSet1907.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1907.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1908 = browser.currentScene.createNode("Coordinate");
Coordinate1908.point = new X3D.MFVec3f([7.384057,0.075,-0.07019704,7.58105,0.075,-0.1103513,7.778044,0.075,-0.1505055,7.520174,0.075,0.5975809,7.717167,0.075,0.5574267,7.91416,0.075,0.5172724,7.65629,0.075,1.265359,7.853283,0.075,1.225205,8.050277,0.075,1.18505]);
coord = Coordinate1908;

geometry = IndexedFaceSet1907;

browser.currentScene.children[379] = Shape1904;

let Shape1909 = browser.currentScene.createNode("Shape");
let Appearance1910 = browser.currentScene.createNode("Appearance");
let Material1911 = browser.currentScene.createNode("Material");
Material1911.ambientIntensity = 0;
Material1911.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1911.shininess = 0;
material = Material1911;

appearance = Appearance1910;

let IndexedFaceSet1912 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1912.solid = False;
IndexedFaceSet1912.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1912.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1913 = browser.currentScene.createNode("Coordinate");
Coordinate1913.point = new X3D.MFVec3f([6.970473,0.075,0.01410597,7.36446,0.075,-0.06620247,7.242706,0.075,1.349662,7.636693,0.075,1.269353]);
coord = Coordinate1913;

geometry = IndexedFaceSet1912;

browser.currentScene.children[380] = Shape1909;

let Shape1914 = browser.currentScene.createNode("Shape");
let Appearance1915 = browser.currentScene.createNode("Appearance");
let Material1916 = browser.currentScene.createNode("Material");
Material1916.ambientIntensity = 0;
Material1916.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1916.shininess = 0;
material = Material1916;

appearance = Appearance1915;

let IndexedFaceSet1917 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1917.solid = False;
IndexedFaceSet1917.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1917.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1918 = browser.currentScene.createNode("Coordinate");
Coordinate1918.point = new X3D.MFVec3f([7.382336,0.075,6.261303,7.315277,0.075,5.932313,7.248217,0.075,5.603323,7.786121,0.075,6.178997,7.719062,0.075,5.850008,7.652002,0.075,5.521018,8.189907,0.075,6.096692,8.122848,0.075,5.767702,8.055788,0.075,5.438712]);
coord = Coordinate1918;

geometry = IndexedFaceSet1917;

browser.currentScene.children[381] = Shape1914;

let Shape1919 = browser.currentScene.createNode("Shape");
let Appearance1920 = browser.currentScene.createNode("Appearance");
let Material1921 = browser.currentScene.createNode("Material");
Material1921.ambientIntensity = 0;
Material1921.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1921.shininess = 0;
material = Material1921;

appearance = Appearance1920;

let IndexedFaceSet1922 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1922.solid = False;
IndexedFaceSet1922.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1922.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1923 = browser.currentScene.createNode("Coordinate");
Coordinate1923.point = new X3D.MFVec3f([7.385573,0.075,4.163867,7.77956,0.075,4.083559,7.657806,0.075,5.499424,8.051793,0.075,5.419115]);
coord = Coordinate1923;

geometry = IndexedFaceSet1922;

browser.currentScene.children[382] = Shape1919;

let Shape1924 = browser.currentScene.createNode("Shape");
let Appearance1925 = browser.currentScene.createNode("Appearance");
let Material1926 = browser.currentScene.createNode("Material");
Material1926.ambientIntensity = 0;
Material1926.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1926.shininess = 0;
material = Material1926;

appearance = Appearance1925;

let IndexedFaceSet1927 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1927.solid = False;
IndexedFaceSet1927.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1927.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1928 = browser.currentScene.createNode("Coordinate");
Coordinate1928.point = new X3D.MFVec3f([6.971989,0.075,4.24817,7.365976,0.075,4.167862,7.244222,0.075,5.583726,7.638209,0.075,5.503418]);
coord = Coordinate1928;

geometry = IndexedFaceSet1927;

browser.currentScene.children[383] = Shape1924;

let Shape1929 = browser.currentScene.createNode("Shape");
let Appearance1930 = browser.currentScene.createNode("Appearance");
let Material1931 = browser.currentScene.createNode("Material");
Material1931.ambientIntensity = 0;
Material1931.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1931.shininess = 0;
material = Material1931;

appearance = Appearance1930;

let IndexedFaceSet1932 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1932.solid = False;
IndexedFaceSet1932.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1932.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1933 = browser.currentScene.createNode("Coordinate");
Coordinate1933.point = new X3D.MFVec3f([6.967994,0.075,4.228573,6.833875,0.075,3.570594,7.775565,0.075,4.063962,7.641446,0.075,3.405983]);
coord = Coordinate1933;

geometry = IndexedFaceSet1932;

browser.currentScene.children[384] = Shape1929;

let Shape1934 = browser.currentScene.createNode("Shape");
let Appearance1935 = browser.currentScene.createNode("Appearance");
let Material1936 = browser.currentScene.createNode("Material");
Material1936.ambientIntensity = 0;
Material1936.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1936.shininess = 0;
material = Material1936;

appearance = Appearance1935;

let IndexedFaceSet1937 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1937.solid = False;
IndexedFaceSet1937.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1937.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1938 = browser.currentScene.createNode("Coordinate");
Coordinate1938.point = new X3D.MFVec3f([6.82988,0.075,3.550997,6.695761,0.075,2.893018,7.637451,0.075,3.386386,7.503332,0.075,2.728406]);
coord = Coordinate1938;

geometry = IndexedFaceSet1937;

browser.currentScene.children[385] = Shape1934;

let Shape1939 = browser.currentScene.createNode("Shape");
let Appearance1940 = browser.currentScene.createNode("Appearance");
let Material1941 = browser.currentScene.createNode("Material");
Material1941.ambientIntensity = 0;
Material1941.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1941.shininess = 0;
material = Material1941;

appearance = Appearance1940;

let IndexedFaceSet1942 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1942.solid = False;
IndexedFaceSet1942.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet1942.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate1943 = browser.currentScene.createNode("Coordinate");
Coordinate1943.point = new X3D.MFVec3f([7.499337,0.075,2.708809,7.302343,0.075,2.748963,7.10535,0.075,2.789118,7.36322,0.075,2.041031,7.166227,0.075,2.081186,6.969234,0.075,2.12134,7.227104,0.075,1.373253,7.03011,0.075,1.413408,6.833117,0.075,1.453562]);
coord = Coordinate1943;

geometry = IndexedFaceSet1942;

browser.currentScene.children[386] = Shape1939;

let Shape1944 = browser.currentScene.createNode("Shape");
let Appearance1945 = browser.currentScene.createNode("Appearance");
let Material1946 = browser.currentScene.createNode("Material");
Material1946.ambientIntensity = 0;
Material1946.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1946.shininess = 0;
material = Material1946;

appearance = Appearance1945;

let IndexedFaceSet1947 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1947.solid = False;
IndexedFaceSet1947.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1947.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1948 = browser.currentScene.createNode("Coordinate");
Coordinate1948.point = new X3D.MFVec3f([6.419533,0.075,1.537865,6.813519,0.075,1.457556,6.691766,0.075,2.873421,7.085753,0.075,2.793112]);
coord = Coordinate1948;

geometry = IndexedFaceSet1947;

browser.currentScene.children[387] = Shape1944;

let Shape1949 = browser.currentScene.createNode("Shape");
let Appearance1950 = browser.currentScene.createNode("Appearance");
let Material1951 = browser.currentScene.createNode("Material");
Material1951.ambientIntensity = 0;
Material1951.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1951.shininess = 0;
material = Material1951;

appearance = Appearance1950;

let IndexedFaceSet1952 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1952.solid = False;
IndexedFaceSet1952.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1952.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1953 = browser.currentScene.createNode("Coordinate");
Coordinate1953.point = new X3D.MFVec3f([7.08899,0.075,0.695677,7.223109,0.075,1.353656,6.281419,0.075,0.8602884,6.415538,0.075,1.518268]);
coord = Coordinate1953;

geometry = IndexedFaceSet1952;

browser.currentScene.children[388] = Shape1949;

let Shape1954 = browser.currentScene.createNode("Shape");
let Appearance1955 = browser.currentScene.createNode("Appearance");
let Material1956 = browser.currentScene.createNode("Material");
Material1956.ambientIntensity = 0;
Material1956.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1956.shininess = 0;
material = Material1956;

appearance = Appearance1955;

let IndexedFaceSet1957 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1957.solid = False;
IndexedFaceSet1957.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1957.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1958 = browser.currentScene.createNode("Coordinate");
Coordinate1958.point = new X3D.MFVec3f([6.277424,0.075,0.8406914,6.143305,0.075,0.182712,7.084995,0.075,0.6760799,6.950876,0.075,0.01810054]);
coord = Coordinate1958;

geometry = IndexedFaceSet1957;

browser.currentScene.children[389] = Shape1954;

let Shape1959 = browser.currentScene.createNode("Shape");
let Appearance1960 = browser.currentScene.createNode("Appearance");
let Material1961 = browser.currentScene.createNode("Material");
Material1961.ambientIntensity = 0;
Material1961.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1961.shininess = 0;
material = Material1961;

appearance = Appearance1960;

let IndexedFaceSet1962 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1962.solid = False;
IndexedFaceSet1962.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1962.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1963 = browser.currentScene.createNode("Coordinate");
Coordinate1963.point = new X3D.MFVec3f([6.417054,0.075,5.752332,6.282935,0.075,5.094353,7.224625,0.075,5.587721,7.090506,0.075,4.929741]);
coord = Coordinate1963;

geometry = IndexedFaceSet1962;

browser.currentScene.children[390] = Shape1959;

let Shape1964 = browser.currentScene.createNode("Shape");
let Appearance1965 = browser.currentScene.createNode("Appearance");
let Material1966 = browser.currentScene.createNode("Material");
Material1966.ambientIntensity = 0;
Material1966.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1966.shininess = 0;
material = Material1966;

appearance = Appearance1965;

let IndexedFaceSet1967 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1967.solid = False;
IndexedFaceSet1967.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet1967.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate1968 = browser.currentScene.createNode("Coordinate");
Coordinate1968.point = new X3D.MFVec3f([6.27894,0.075,5.074756,6.144821,0.075,4.416777,6.682726,0.075,4.99245,6.548606,0.075,4.334471,7.086511,0.075,4.910144,6.952392,0.075,4.252165]);
coord = Coordinate1968;

geometry = IndexedFaceSet1967;

browser.currentScene.children[391] = Shape1964;

let Shape1969 = browser.currentScene.createNode("Shape");
let Appearance1970 = browser.currentScene.createNode("Appearance");
let Material1971 = browser.currentScene.createNode("Material");
Material1971.ambientIntensity = 0;
Material1971.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1971.shininess = 0;
material = Material1971;

appearance = Appearance1970;

let IndexedFaceSet1972 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1972.solid = False;
IndexedFaceSet1972.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1972.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1973 = browser.currentScene.createNode("Coordinate");
Coordinate1973.point = new X3D.MFVec3f([6.282177,0.075,2.977321,6.676164,0.075,2.897012,6.55441,0.075,4.312877,6.948397,0.075,4.232568]);
coord = Coordinate1973;

geometry = IndexedFaceSet1972;

browser.currentScene.children[392] = Shape1969;

let Shape1974 = browser.currentScene.createNode("Shape");
let Appearance1975 = browser.currentScene.createNode("Appearance");
let Material1976 = browser.currentScene.createNode("Material");
Material1976.ambientIntensity = 0;
Material1976.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1976.shininess = 0;
material = Material1976;

appearance = Appearance1975;

let IndexedFaceSet1977 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1977.solid = False;
IndexedFaceSet1977.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1977.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1978 = browser.currentScene.createNode("Coordinate");
Coordinate1978.point = new X3D.MFVec3f([5.868593,0.075,3.061624,6.26258,0.075,2.981315,6.140826,0.075,4.39718,6.534813,0.075,4.316871]);
coord = Coordinate1978;

geometry = IndexedFaceSet1977;

browser.currentScene.children[393] = Shape1974;

let Shape1979 = browser.currentScene.createNode("Shape");
let Appearance1980 = browser.currentScene.createNode("Appearance");
let Material1981 = browser.currentScene.createNode("Material");
Material1981.ambientIntensity = 0;
Material1981.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1981.shininess = 0;
material = Material1981;

appearance = Appearance1980;

let IndexedFaceSet1982 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1982.solid = False;
IndexedFaceSet1982.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1982.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1983 = browser.currentScene.createNode("Coordinate");
Coordinate1983.point = new X3D.MFVec3f([6.53805,0.075,2.219436,6.672169,0.075,2.877415,5.730479,0.075,2.384047,5.864598,0.075,3.042027]);
coord = Coordinate1983;

geometry = IndexedFaceSet1982;

browser.currentScene.children[394] = Shape1979;

let Shape1984 = browser.currentScene.createNode("Shape");
let Appearance1985 = browser.currentScene.createNode("Appearance");
let Material1986 = browser.currentScene.createNode("Material");
Material1986.ambientIntensity = 0;
Material1986.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1986.shininess = 0;
material = Material1986;

appearance = Appearance1985;

let IndexedFaceSet1987 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1987.solid = False;
IndexedFaceSet1987.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1987.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1988 = browser.currentScene.createNode("Coordinate");
Coordinate1988.point = new X3D.MFVec3f([5.726484,0.075,2.36445,5.592365,0.075,1.706471,6.534055,0.075,2.199839,6.399936,0.075,1.541859]);
coord = Coordinate1988;

geometry = IndexedFaceSet1987;

browser.currentScene.children[395] = Shape1984;

let Shape1989 = browser.currentScene.createNode("Shape");
let Appearance1990 = browser.currentScene.createNode("Appearance");
let Material1991 = browser.currentScene.createNode("Material");
Material1991.ambientIntensity = 0;
Material1991.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1991.shininess = 0;
material = Material1991;

appearance = Appearance1990;

let IndexedFaceSet1992 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1992.solid = False;
IndexedFaceSet1992.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1992.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1993 = browser.currentScene.createNode("Coordinate");
Coordinate1993.point = new X3D.MFVec3f([6.395941,0.075,1.522262,6.001954,0.075,1.602571,6.123708,0.075,0.1867066,5.729721,0.075,0.267015]);
coord = Coordinate1993;

geometry = IndexedFaceSet1992;

browser.currentScene.children[396] = Shape1989;

let Shape1994 = browser.currentScene.createNode("Shape");
let Appearance1995 = browser.currentScene.createNode("Appearance");
let Material1996 = browser.currentScene.createNode("Material");
Material1996.ambientIntensity = 0;
Material1996.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material1996.shininess = 0;
material = Material1996;

appearance = Appearance1995;

let IndexedFaceSet1997 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1997.solid = False;
IndexedFaceSet1997.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet1997.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate1998 = browser.currentScene.createNode("Coordinate");
Coordinate1998.point = new X3D.MFVec3f([5.316137,0.075,0.351318,5.710124,0.075,0.2710096,5.58837,0.075,1.686874,5.982357,0.075,1.606565]);
coord = Coordinate1998;

geometry = IndexedFaceSet1997;

browser.currentScene.children[397] = Shape1994;

let Shape1999 = browser.currentScene.createNode("Shape");
let Appearance2000 = browser.currentScene.createNode("Appearance");
let Material2001 = browser.currentScene.createNode("Material");
Material2001.ambientIntensity = 0;
Material2001.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2001.shininess = 0;
material = Material2001;

appearance = Appearance2000;

let IndexedFaceSet2002 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2002.solid = False;
IndexedFaceSet2002.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2002.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2003 = browser.currentScene.createNode("Coordinate");
Coordinate2003.point = new X3D.MFVec3f([5.731237,0.075,4.50108,6.125224,0.075,4.420771,6.00347,0.075,5.836636,6.397457,0.075,5.756327]);
coord = Coordinate2003;

geometry = IndexedFaceSet2002;

browser.currentScene.children[398] = Shape1999;

let Shape2004 = browser.currentScene.createNode("Shape");
let Appearance2005 = browser.currentScene.createNode("Appearance");
let Material2006 = browser.currentScene.createNode("Material");
Material2006.ambientIntensity = 0;
Material2006.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2006.shininess = 0;
material = Material2006;

appearance = Appearance2005;

let IndexedFaceSet2007 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2007.solid = False;
IndexedFaceSet2007.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2007.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2008 = browser.currentScene.createNode("Coordinate");
Coordinate2008.point = new X3D.MFVec3f([5.983873,0.075,5.84063,5.589886,0.075,5.920938,5.71164,0.075,4.505074,5.317653,0.075,4.585382]);
coord = Coordinate2008;

geometry = IndexedFaceSet2007;

browser.currentScene.children[399] = Shape2004;

let Shape2009 = browser.currentScene.createNode("Shape");
let Appearance2010 = browser.currentScene.createNode("Appearance");
let Material2011 = browser.currentScene.createNode("Material");
Material2011.ambientIntensity = 0;
Material2011.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2011.shininess = 0;
material = Material2011;

appearance = Appearance2010;

let IndexedFaceSet2012 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2012.solid = False;
IndexedFaceSet2012.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2012.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2013 = browser.currentScene.createNode("Coordinate");
Coordinate2013.point = new X3D.MFVec3f([5.313658,0.075,4.565785,5.179539,0.075,3.907806,6.121229,0.075,4.401174,5.98711,0.075,3.743195]);
coord = Coordinate2013;

geometry = IndexedFaceSet2012;

browser.currentScene.children[400] = Shape2009;

let Shape2014 = browser.currentScene.createNode("Shape");
let Appearance2015 = browser.currentScene.createNode("Appearance");
let Material2016 = browser.currentScene.createNode("Material");
Material2016.ambientIntensity = 0;
Material2016.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2016.shininess = 0;
material = Material2016;

appearance = Appearance2015;

let IndexedFaceSet2017 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2017.solid = False;
IndexedFaceSet2017.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2017.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2018 = browser.currentScene.createNode("Coordinate");
Coordinate2018.point = new X3D.MFVec3f([5.175544,0.075,3.888209,5.041425,0.075,3.23023,5.983115,0.075,3.723598,5.848996,0.075,3.065618]);
coord = Coordinate2018;

geometry = IndexedFaceSet2017;

browser.currentScene.children[401] = Shape2014;

let Shape2019 = browser.currentScene.createNode("Shape");
let Appearance2020 = browser.currentScene.createNode("Appearance");
let Material2021 = browser.currentScene.createNode("Material");
Material2021.ambientIntensity = 0;
Material2021.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2021.shininess = 0;
material = Material2021;

appearance = Appearance2020;

let IndexedFaceSet2022 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2022.solid = False;
IndexedFaceSet2022.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2022.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2023 = browser.currentScene.createNode("Coordinate");
Coordinate2023.point = new X3D.MFVec3f([5.178781,0.075,1.790774,5.375774,0.075,1.75062,5.572768,0.075,1.710465,5.314898,0.075,2.458552,5.511891,0.075,2.418398,5.708885,0.075,2.378243,5.451015,0.075,3.12633,5.648008,0.075,3.086175,5.845001,0.075,3.046021]);
coord = Coordinate2023;

geometry = IndexedFaceSet2022;

browser.currentScene.children[402] = Shape2019;

let Shape2024 = browser.currentScene.createNode("Shape");
let Appearance2025 = browser.currentScene.createNode("Appearance");
let Material2026 = browser.currentScene.createNode("Material");
Material2026.ambientIntensity = 0;
Material2026.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2026.shininess = 0;
material = Material2026;

appearance = Appearance2025;

let IndexedFaceSet2027 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2027.solid = False;
IndexedFaceSet2027.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2027.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2028 = browser.currentScene.createNode("Coordinate");
Coordinate2028.point = new X3D.MFVec3f([4.765197,0.075,1.875077,5.159184,0.075,1.794768,5.03743,0.075,3.210633,5.431417,0.075,3.130324]);
coord = Coordinate2028;

geometry = IndexedFaceSet2027;

browser.currentScene.children[403] = Shape2024;

let Shape2029 = browser.currentScene.createNode("Shape");
let Appearance2030 = browser.currentScene.createNode("Appearance");
let Material2031 = browser.currentScene.createNode("Material");
Material2031.ambientIntensity = 0;
Material2031.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2031.shininess = 0;
material = Material2031;

appearance = Appearance2030;

let IndexedFaceSet2032 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2032.solid = False;
IndexedFaceSet2032.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2032.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2033 = browser.currentScene.createNode("Coordinate");
Coordinate2033.point = new X3D.MFVec3f([5.434654,0.075,1.032889,5.568773,0.075,1.690868,4.627083,0.075,1.1975,4.761202,0.075,1.85548]);
coord = Coordinate2033;

geometry = IndexedFaceSet2032;

browser.currentScene.children[404] = Shape2029;

let Shape2034 = browser.currentScene.createNode("Shape");
let Appearance2035 = browser.currentScene.createNode("Appearance");
let Material2036 = browser.currentScene.createNode("Material");
Material2036.ambientIntensity = 0;
Material2036.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2036.shininess = 0;
material = Material2036;

appearance = Appearance2035;

let IndexedFaceSet2037 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2037.solid = False;
IndexedFaceSet2037.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2037.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2038 = browser.currentScene.createNode("Coordinate");
Coordinate2038.point = new X3D.MFVec3f([4.623088,0.075,1.177903,4.488969,0.075,0.519924,5.430659,0.075,1.013292,5.29654,0.075,0.3553126]);
coord = Coordinate2038;

geometry = IndexedFaceSet2037;

browser.currentScene.children[405] = Shape2034;

let Shape2039 = browser.currentScene.createNode("Shape");
let Appearance2040 = browser.currentScene.createNode("Appearance");
let Material2041 = browser.currentScene.createNode("Material");
Material2041.ambientIntensity = 0;
Material2041.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2041.shininess = 0;
material = Material2041;

appearance = Appearance2040;

let IndexedFaceSet2042 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2042.solid = False;
IndexedFaceSet2042.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2042.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2043 = browser.currentScene.createNode("Coordinate");
Coordinate2043.point = new X3D.MFVec3f([4.762719,0.075,6.089544,4.628599,0.075,5.431565,5.570289,0.075,5.924933,5.43617,0.075,5.266953]);
coord = Coordinate2043;

geometry = IndexedFaceSet2042;

browser.currentScene.children[406] = Shape2039;

let Shape2044 = browser.currentScene.createNode("Shape");
let Appearance2045 = browser.currentScene.createNode("Appearance");
let Material2046 = browser.currentScene.createNode("Material");
Material2046.ambientIntensity = 0;
Material2046.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2046.shininess = 0;
material = Material2046;

appearance = Appearance2045;

let IndexedFaceSet2047 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2047.solid = False;
IndexedFaceSet2047.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
IndexedFaceSet2047.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1]);
let Coordinate2048 = browser.currentScene.createNode("Coordinate");
Coordinate2048.point = new X3D.MFVec3f([4.624605,0.075,5.411968,4.557545,0.075,5.082978,4.490485,0.075,4.753989,5.432175,0.075,5.247356,5.365116,0.075,4.918367,5.298056,0.075,4.589377]);
coord = Coordinate2048;

geometry = IndexedFaceSet2047;

browser.currentScene.children[407] = Shape2044;

let Shape2049 = browser.currentScene.createNode("Shape");
let Appearance2050 = browser.currentScene.createNode("Appearance");
let Material2051 = browser.currentScene.createNode("Material");
Material2051.ambientIntensity = 0;
Material2051.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2051.shininess = 0;
material = Material2051;

appearance = Appearance2050;

let IndexedFaceSet2052 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2052.solid = False;
IndexedFaceSet2052.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2052.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2053 = browser.currentScene.createNode("Coordinate");
Coordinate2053.point = new X3D.MFVec3f([4.627841,0.075,3.314533,5.021828,0.075,3.234224,4.900074,0.075,4.650089,5.294061,0.075,4.56978]);
coord = Coordinate2053;

geometry = IndexedFaceSet2052;

browser.currentScene.children[408] = Shape2049;

let Shape2054 = browser.currentScene.createNode("Shape");
let Appearance2055 = browser.currentScene.createNode("Appearance");
let Material2056 = browser.currentScene.createNode("Material");
Material2056.ambientIntensity = 0;
Material2056.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2056.shininess = 0;
material = Material2056;

appearance = Appearance2055;

let IndexedFaceSet2057 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2057.solid = False;
IndexedFaceSet2057.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet2057.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate2058 = browser.currentScene.createNode("Coordinate");
Coordinate2058.point = new X3D.MFVec3f([4.214257,0.075,3.398836,4.608244,0.075,3.318527,4.350374,0.075,4.066614,4.744361,0.075,3.986305,4.486491,0.075,4.734392,4.880477,0.075,4.654083]);
coord = Coordinate2058;

geometry = IndexedFaceSet2057;

browser.currentScene.children[409] = Shape2054;

let Shape2059 = browser.currentScene.createNode("Shape");
let Appearance2060 = browser.currentScene.createNode("Appearance");
let Material2061 = browser.currentScene.createNode("Material");
Material2061.ambientIntensity = 0;
Material2061.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2061.shininess = 0;
material = Material2061;

appearance = Appearance2060;

let IndexedFaceSet2062 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2062.solid = False;
IndexedFaceSet2062.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2062.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2063 = browser.currentScene.createNode("Coordinate");
Coordinate2063.point = new X3D.MFVec3f([4.210262,0.075,3.379239,4.076143,0.075,2.721259,5.017833,0.075,3.214627,4.883714,0.075,2.556648]);
coord = Coordinate2063;

geometry = IndexedFaceSet2062;

browser.currentScene.children[410] = Shape2059;

let Shape2064 = browser.currentScene.createNode("Shape");
let Appearance2065 = browser.currentScene.createNode("Appearance");
let Material2066 = browser.currentScene.createNode("Material");
Material2066.ambientIntensity = 0;
Material2066.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2066.shininess = 0;
material = Material2066;

appearance = Appearance2065;

let IndexedFaceSet2067 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2067.solid = False;
IndexedFaceSet2067.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet2067.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate2068 = browser.currentScene.createNode("Coordinate");
Coordinate2068.point = new X3D.MFVec3f([4.7456,0.075,1.879071,4.879719,0.075,2.537051,4.341815,0.075,1.961377,4.475934,0.075,2.619357,3.938029,0.075,2.043683,4.072148,0.075,2.701662]);
coord = Coordinate2068;

geometry = IndexedFaceSet2067;

browser.currentScene.children[411] = Shape2064;

let Shape2069 = browser.currentScene.createNode("Shape");
let Appearance2070 = browser.currentScene.createNode("Appearance");
let Material2071 = browser.currentScene.createNode("Material");
Material2071.ambientIntensity = 0;
Material2071.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2071.shininess = 0;
material = Material2071;

appearance = Appearance2070;

let IndexedFaceSet2072 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2072.solid = False;
IndexedFaceSet2072.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2072.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2073 = browser.currentScene.createNode("Coordinate");
Coordinate2073.point = new X3D.MFVec3f([4.741605,0.075,1.859474,4.347619,0.075,1.939783,4.469372,0.075,0.5239186,4.075385,0.075,0.604227]);
coord = Coordinate2073;

geometry = IndexedFaceSet2072;

browser.currentScene.children[412] = Shape2069;

let Shape2074 = browser.currentScene.createNode("Shape");
let Appearance2075 = browser.currentScene.createNode("Appearance");
let Material2076 = browser.currentScene.createNode("Material");
Material2076.ambientIntensity = 0;
Material2076.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2076.shininess = 0;
material = Material2076;

appearance = Appearance2075;

let IndexedFaceSet2077 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2077.solid = False;
IndexedFaceSet2077.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2077.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2078 = browser.currentScene.createNode("Coordinate");
Coordinate2078.point = new X3D.MFVec3f([4.328022,0.075,1.943777,3.934035,0.075,2.024086,4.055788,0.075,0.6082216,3.661801,0.075,0.68853]);
coord = Coordinate2078;

geometry = IndexedFaceSet2077;

browser.currentScene.children[413] = Shape2074;

let Shape2079 = browser.currentScene.createNode("Shape");
let Appearance2080 = browser.currentScene.createNode("Appearance");
let Material2081 = browser.currentScene.createNode("Material");
Material2081.ambientIntensity = 0;
Material2081.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2081.shininess = 0;
material = Material2081;

appearance = Appearance2080;

let IndexedFaceSet2082 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2082.solid = False;
IndexedFaceSet2082.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2082.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2083 = browser.currentScene.createNode("Coordinate");
Coordinate2083.point = new X3D.MFVec3f([4.331258,0.075,-0.1536579,4.465377,0.075,0.5043216,3.523687,0.075,0.0109536,3.657807,0.075,0.668933]);
coord = Coordinate2083;

geometry = IndexedFaceSet2082;

browser.currentScene.children[414] = Shape2079;

let Shape2084 = browser.currentScene.createNode("Shape");
let Appearance2085 = browser.currentScene.createNode("Appearance");
let Material2086 = browser.currentScene.createNode("Material");
Material2086.ambientIntensity = 0;
Material2086.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2086.shininess = 0;
material = Material2086;

appearance = Appearance2085;

let IndexedFaceSet2087 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2087.solid = False;
IndexedFaceSet2087.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2087.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2088 = browser.currentScene.createNode("Coordinate");
Coordinate2088.point = new X3D.MFVec3f([4.076901,0.075,4.838292,4.470888,0.075,4.757983,4.349134,0.075,6.173848,4.743122,0.075,6.093539]);
coord = Coordinate2088;

geometry = IndexedFaceSet2087;

browser.currentScene.children[415] = Shape2084;

let Shape2089 = browser.currentScene.createNode("Shape");
let Appearance2090 = browser.currentScene.createNode("Appearance");
let Material2091 = browser.currentScene.createNode("Material");
Material2091.ambientIntensity = 0;
Material2091.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2091.shininess = 0;
material = Material2091;

appearance = Appearance2090;

let IndexedFaceSet2092 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2092.solid = False;
IndexedFaceSet2092.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2092.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2093 = browser.currentScene.createNode("Coordinate");
Coordinate2093.point = new X3D.MFVec3f([3.663317,0.075,4.922595,4.057304,0.075,4.842286,3.935551,0.075,6.258151,4.329537,0.075,6.177842]);
coord = Coordinate2093;

geometry = IndexedFaceSet2092;

browser.currentScene.children[416] = Shape2089;

let Shape2094 = browser.currentScene.createNode("Shape");
let Appearance2095 = browser.currentScene.createNode("Appearance");
let Material2096 = browser.currentScene.createNode("Material");
Material2096.ambientIntensity = 0;
Material2096.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2096.shininess = 0;
material = Material2096;

appearance = Appearance2095;

let IndexedFaceSet2097 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2097.solid = False;
IndexedFaceSet2097.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet2097.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate2098 = browser.currentScene.createNode("Coordinate");
Coordinate2098.point = new X3D.MFVec3f([3.659323,0.075,4.902997,3.525203,0.075,4.245018,4.063108,0.075,4.820692,3.928989,0.075,4.162713,4.466894,0.075,4.738386,4.332774,0.075,4.080407]);
coord = Coordinate2098;

geometry = IndexedFaceSet2097;

browser.currentScene.children[417] = Shape2094;

let Shape2099 = browser.currentScene.createNode("Shape");
let Appearance2100 = browser.currentScene.createNode("Appearance");
let Material2101 = browser.currentScene.createNode("Material");
Material2101.ambientIntensity = 0;
Material2101.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2101.shininess = 0;
material = Material2101;

appearance = Appearance2100;

let IndexedFaceSet2102 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2102.solid = False;
IndexedFaceSet2102.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2102.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2103 = browser.currentScene.createNode("Coordinate");
Coordinate2103.point = new X3D.MFVec3f([4.19466,0.075,3.40283,4.32878,0.075,4.06081,3.387089,0.075,3.567442,3.521209,0.075,4.225421]);
coord = Coordinate2103;

geometry = IndexedFaceSet2102;

browser.currentScene.children[418] = Shape2099;

let Shape2104 = browser.currentScene.createNode("Shape");
let Appearance2105 = browser.currentScene.createNode("Appearance");
let Material2106 = browser.currentScene.createNode("Material");
Material2106.ambientIntensity = 0;
Material2106.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2106.shininess = 0;
material = Material2106;

appearance = Appearance2105;

let IndexedFaceSet2107 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2107.solid = False;
IndexedFaceSet2107.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2107.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2108 = browser.currentScene.createNode("Coordinate");
Coordinate2108.point = new X3D.MFVec3f([3.524445,0.075,2.127986,3.918432,0.075,2.047678,3.796679,0.075,3.463542,4.190666,0.075,3.383233]);
coord = Coordinate2108;

geometry = IndexedFaceSet2107;

browser.currentScene.children[419] = Shape2104;

let Shape2109 = browser.currentScene.createNode("Shape");
let Appearance2110 = browser.currentScene.createNode("Appearance");
let Material2111 = browser.currentScene.createNode("Material");
Material2111.ambientIntensity = 0;
Material2111.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2111.shininess = 0;
material = Material2111;

appearance = Appearance2110;

let IndexedFaceSet2112 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2112.solid = False;
IndexedFaceSet2112.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2112.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2113 = browser.currentScene.createNode("Coordinate");
Coordinate2113.point = new X3D.MFVec3f([3.777081,0.075,3.467536,3.383095,0.075,3.547845,3.504848,0.075,2.13198,3.110861,0.075,2.212289]);
coord = Coordinate2113;

geometry = IndexedFaceSet2112;

browser.currentScene.children[420] = Shape2109;

let Shape2114 = browser.currentScene.createNode("Shape");
let Appearance2115 = browser.currentScene.createNode("Appearance");
let Material2116 = browser.currentScene.createNode("Material");
Material2116.ambientIntensity = 0;
Material2116.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2116.shininess = 0;
material = Material2116;

appearance = Appearance2115;

let IndexedFaceSet2117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2117.solid = False;
IndexedFaceSet2117.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2117.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2118 = browser.currentScene.createNode("Coordinate");
Coordinate2118.point = new X3D.MFVec3f([3.106867,0.075,2.192692,2.972747,0.075,1.534712,3.914438,0.075,2.02808,3.780318,0.075,1.370101]);
coord = Coordinate2118;

geometry = IndexedFaceSet2117;

browser.currentScene.children[421] = Shape2114;

let Shape2119 = browser.currentScene.createNode("Shape");
let Appearance2120 = browser.currentScene.createNode("Appearance");
let Material2121 = browser.currentScene.createNode("Material");
Material2121.ambientIntensity = 0;
Material2121.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2121.shininess = 0;
material = Material2121;

appearance = Appearance2120;

let IndexedFaceSet2122 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2122.solid = False;
IndexedFaceSet2122.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet2122.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate2123 = browser.currentScene.createNode("Coordinate");
Coordinate2123.point = new X3D.MFVec3f([2.968753,0.075,1.515115,2.834633,0.075,0.8571361,3.372538,0.075,1.43281,3.238419,0.075,0.7748303,3.776324,0.075,1.350504,3.642204,0.075,0.6925246]);
coord = Coordinate2123;

geometry = IndexedFaceSet2122;

browser.currentScene.children[422] = Shape2119;

let Shape2124 = browser.currentScene.createNode("Shape");
let Appearance2125 = browser.currentScene.createNode("Appearance");
let Material2126 = browser.currentScene.createNode("Material");
Material2126.ambientIntensity = 0;
Material2126.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2126.shininess = 0;
material = Material2126;

appearance = Appearance2125;

let IndexedFaceSet2127 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2127.solid = False;
IndexedFaceSet2127.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2127.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2128 = browser.currentScene.createNode("Coordinate");
Coordinate2128.point = new X3D.MFVec3f([3.63821,0.075,0.6729276,3.441216,0.075,0.7130818,3.244223,0.075,0.753236,3.502093,0.075,0.005149654,3.305099,0.075,0.04530387,3.108106,0.075,0.08545809,3.365976,0.075,-0.6626283,3.168983,0.075,-0.622474,2.971989,0.075,-0.5823198]);
coord = Coordinate2128;

geometry = IndexedFaceSet2127;

browser.currentScene.children[423] = Shape2124;

let Shape2129 = browser.currentScene.createNode("Shape");
let Appearance2130 = browser.currentScene.createNode("Appearance");
let Material2131 = browser.currentScene.createNode("Material");
Material2131.ambientIntensity = 0;
Material2131.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2131.shininess = 0;
material = Material2131;

appearance = Appearance2130;

let IndexedFaceSet2132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2132.solid = False;
IndexedFaceSet2132.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2132.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2133 = browser.currentScene.createNode("Coordinate");
Coordinate2133.point = new X3D.MFVec3f([2.558405,0.075,-0.4980168,2.952392,0.075,-0.5783253,2.830639,0.075,0.837539,3.224626,0.075,0.7572306]);
coord = Coordinate2133;

geometry = IndexedFaceSet2132;

browser.currentScene.children[424] = Shape2129;

let Shape2134 = browser.currentScene.createNode("Shape");
let Appearance2135 = browser.currentScene.createNode("Appearance");
let Material2136 = browser.currentScene.createNode("Material");
Material2136.ambientIntensity = 0;
Material2136.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2136.shininess = 0;
material = Material2136;

appearance = Appearance2135;

let IndexedFaceSet2137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2137.solid = False;
IndexedFaceSet2137.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2137.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2138 = browser.currentScene.createNode("Coordinate");
Coordinate2138.point = new X3D.MFVec3f([2.970269,0.075,5.74918,2.903209,0.075,5.42019,2.836149,0.075,5.091201,3.374054,0.075,5.666874,3.306994,0.075,5.337884,3.239935,0.075,5.008895,3.77784,0.075,5.584569,3.71078,0.075,5.255579,3.64372,0.075,4.926589]);
coord = Coordinate2138;

geometry = IndexedFaceSet2137;

browser.currentScene.children[425] = Shape2134;

let Shape2139 = browser.currentScene.createNode("Shape");
let Appearance2140 = browser.currentScene.createNode("Appearance");
let Material2141 = browser.currentScene.createNode("Material");
Material2141.ambientIntensity = 0;
Material2141.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2141.shininess = 0;
material = Material2141;

appearance = Appearance2140;

let IndexedFaceSet2142 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2142.solid = False;
IndexedFaceSet2142.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2142.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2143 = browser.currentScene.createNode("Coordinate");
Coordinate2143.point = new X3D.MFVec3f([2.973505,0.075,3.651745,3.367492,0.075,3.571436,3.245739,0.075,4.9873,3.639726,0.075,4.906992]);
coord = Coordinate2143;

geometry = IndexedFaceSet2142;

browser.currentScene.children[426] = Shape2139;

let Shape2144 = browser.currentScene.createNode("Shape");
let Appearance2145 = browser.currentScene.createNode("Appearance");
let Material2146 = browser.currentScene.createNode("Material");
Material2146.ambientIntensity = 0;
Material2146.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2146.shininess = 0;
material = Material2146;

appearance = Appearance2145;

let IndexedFaceSet2147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2147.solid = False;
IndexedFaceSet2147.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2147.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2148 = browser.currentScene.createNode("Coordinate");
Coordinate2148.point = new X3D.MFVec3f([2.559921,0.075,3.736048,2.953908,0.075,3.655739,2.832155,0.075,5.071604,3.226142,0.075,4.991295]);
coord = Coordinate2148;

geometry = IndexedFaceSet2147;

browser.currentScene.children[427] = Shape2144;

let Shape2149 = browser.currentScene.createNode("Shape");
let Appearance2150 = browser.currentScene.createNode("Appearance");
let Material2151 = browser.currentScene.createNode("Material");
Material2151.ambientIntensity = 0;
Material2151.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2151.shininess = 0;
material = Material2151;

appearance = Appearance2150;

let IndexedFaceSet2152 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2152.solid = False;
IndexedFaceSet2152.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2152.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2153 = browser.currentScene.createNode("Coordinate");
Coordinate2153.point = new X3D.MFVec3f([3.229378,0.075,2.89386,3.363497,0.075,3.551839,2.421807,0.075,3.058471,2.555927,0.075,3.716451]);
coord = Coordinate2153;

geometry = IndexedFaceSet2152;

browser.currentScene.children[428] = Shape2149;

let Shape2154 = browser.currentScene.createNode("Shape");
let Appearance2155 = browser.currentScene.createNode("Appearance");
let Material2156 = browser.currentScene.createNode("Material");
Material2156.ambientIntensity = 0;
Material2156.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2156.shininess = 0;
material = Material2156;

appearance = Appearance2155;

let IndexedFaceSet2157 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2157.solid = False;
IndexedFaceSet2157.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2157.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2158 = browser.currentScene.createNode("Coordinate");
Coordinate2158.point = new X3D.MFVec3f([2.417813,0.075,3.038874,2.283693,0.075,2.380895,3.225384,0.075,2.874263,3.091264,0.075,2.216284]);
coord = Coordinate2158;

geometry = IndexedFaceSet2157;

browser.currentScene.children[429] = Shape2154;

let Shape2159 = browser.currentScene.createNode("Shape");
let Appearance2160 = browser.currentScene.createNode("Appearance");
let Material2161 = browser.currentScene.createNode("Material");
Material2161.ambientIntensity = 0;
Material2161.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2161.shininess = 0;
material = Material2161;

appearance = Appearance2160;

let IndexedFaceSet2162 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2162.solid = False;
IndexedFaceSet2162.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2162.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2163 = browser.currentScene.createNode("Coordinate");
Coordinate2163.point = new X3D.MFVec3f([3.08727,0.075,2.196687,2.693283,0.075,2.276995,2.815036,0.075,0.8611306,2.421049,0.075,0.941439]);
coord = Coordinate2163;

geometry = IndexedFaceSet2162;

browser.currentScene.children[430] = Shape2159;

let Shape2164 = browser.currentScene.createNode("Shape");
let Appearance2165 = browser.currentScene.createNode("Appearance");
let Material2166 = browser.currentScene.createNode("Material");
Material2166.ambientIntensity = 0;
Material2166.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2166.shininess = 0;
material = Material2166;

appearance = Appearance2165;

let IndexedFaceSet2167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2167.solid = False;
IndexedFaceSet2167.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2167.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2168 = browser.currentScene.createNode("Coordinate");
Coordinate2168.point = new X3D.MFVec3f([2.673686,0.075,2.280989,2.279699,0.075,2.361298,2.401452,0.075,0.9454336,2.007465,0.075,1.025742]);
coord = Coordinate2168;

geometry = IndexedFaceSet2167;

browser.currentScene.children[431] = Shape2164;

let Shape2169 = browser.currentScene.createNode("Shape");
let Appearance2170 = browser.currentScene.createNode("Appearance");
let Material2171 = browser.currentScene.createNode("Material");
Material2171.ambientIntensity = 0;
Material2171.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2171.shininess = 0;
material = Material2171;

appearance = Appearance2170;

let IndexedFaceSet2172 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2172.solid = False;
IndexedFaceSet2172.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2172.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2173 = browser.currentScene.createNode("Coordinate");
Coordinate2173.point = new X3D.MFVec3f([2.003471,0.075,1.006145,1.869351,0.075,0.3481656,2.811042,0.075,0.8415336,2.676922,0.075,0.1835542]);
coord = Coordinate2173;

geometry = IndexedFaceSet2172;

browser.currentScene.children[432] = Shape2169;

let Shape2174 = browser.currentScene.createNode("Shape");
let Appearance2175 = browser.currentScene.createNode("Appearance");
let Material2176 = browser.currentScene.createNode("Material");
Material2176.ambientIntensity = 0;
Material2176.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2176.shininess = 0;
material = Material2176;

appearance = Appearance2175;

let IndexedFaceSet2177 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2177.solid = False;
IndexedFaceSet2177.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet2177.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate2178 = browser.currentScene.createNode("Coordinate");
Coordinate2178.point = new X3D.MFVec3f([1.866873,0.075,4.562633,1.732753,0.075,3.904654,2.270658,0.075,4.480328,2.136539,0.075,3.822348,2.674444,0.075,4.398022,2.540324,0.075,3.740042]);
coord = Coordinate2178;

geometry = IndexedFaceSet2177;

browser.currentScene.children[433] = Shape2174;

let Shape2179 = browser.currentScene.createNode("Shape");
let Appearance2180 = browser.currentScene.createNode("Appearance");
let Material2181 = browser.currentScene.createNode("Material");
Material2181.ambientIntensity = 0;
Material2181.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2181.shininess = 0;
material = Material2181;

appearance = Appearance2180;

let IndexedFaceSet2182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2182.solid = False;
IndexedFaceSet2182.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2182.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2183 = browser.currentScene.createNode("Coordinate");
Coordinate2183.point = new X3D.MFVec3f([1.870109,0.075,2.465198,2.067103,0.075,2.425044,2.264096,0.075,2.38489,2.006226,0.075,3.132976,2.203219,0.075,3.092822,2.400213,0.075,3.052667,2.142343,0.075,3.800754,2.339336,0.075,3.7606,2.53633,0.075,3.720445]);
coord = Coordinate2183;

geometry = IndexedFaceSet2182;

browser.currentScene.children[434] = Shape2179;

let Shape2184 = browser.currentScene.createNode("Shape");
let Appearance2185 = browser.currentScene.createNode("Appearance");
let Material2186 = browser.currentScene.createNode("Material");
Material2186.ambientIntensity = 0;
Material2186.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2186.shininess = 0;
material = Material2186;

appearance = Appearance2185;

let IndexedFaceSet2187 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2187.solid = False;
IndexedFaceSet2187.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2187.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2188 = browser.currentScene.createNode("Coordinate");
Coordinate2188.point = new X3D.MFVec3f([1.456525,0.075,2.549501,1.850512,0.075,2.469193,1.728759,0.075,3.885057,2.122746,0.075,3.804748]);
coord = Coordinate2188;

geometry = IndexedFaceSet2187;

browser.currentScene.children[435] = Shape2184;

let Shape2189 = browser.currentScene.createNode("Shape");
let Appearance2190 = browser.currentScene.createNode("Appearance");
let Material2191 = browser.currentScene.createNode("Material");
Material2191.ambientIntensity = 0;
Material2191.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2191.shininess = 0;
material = Material2191;

appearance = Appearance2190;

let IndexedFaceSet2192 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2192.solid = False;
IndexedFaceSet2192.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2192.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2193 = browser.currentScene.createNode("Coordinate");
Coordinate2193.point = new X3D.MFVec3f([1.452531,0.075,2.529904,1.385471,0.075,2.200914,1.318411,0.075,1.871925,1.856316,0.075,2.447598,1.789257,0.075,2.118608,1.722197,0.075,1.789619,2.260102,0.075,2.365293,2.193042,0.075,2.036303,2.125982,0.075,1.707313]);
coord = Coordinate2193;

geometry = IndexedFaceSet2192;

browser.currentScene.children[436] = Shape2189;

let Shape2194 = browser.currentScene.createNode("Shape");
let Appearance2195 = browser.currentScene.createNode("Appearance");
let Material2196 = browser.currentScene.createNode("Material");
Material2196.ambientIntensity = 0;
Material2196.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2196.shininess = 0;
material = Material2196;

appearance = Appearance2195;

let IndexedFaceSet2197 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2197.solid = False;
IndexedFaceSet2197.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
IndexedFaceSet2197.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1]);
let Coordinate2198 = browser.currentScene.createNode("Coordinate");
Coordinate2198.point = new X3D.MFVec3f([1.314417,0.075,1.852327,1.180297,0.075,1.194348,1.718202,0.075,1.770022,1.584083,0.075,1.112042,2.121988,0.075,1.687716,1.987868,0.075,1.029737]);
coord = Coordinate2198;

geometry = IndexedFaceSet2197;

browser.currentScene.children[437] = Shape2194;

let Shape2199 = browser.currentScene.createNode("Shape");
let Appearance2200 = browser.currentScene.createNode("Appearance");
let Material2201 = browser.currentScene.createNode("Material");
Material2201.ambientIntensity = 0;
Material2201.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2201.shininess = 0;
material = Material2201;

appearance = Appearance2200;

let IndexedFaceSet2202 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2202.solid = False;
IndexedFaceSet2202.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2202.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2203 = browser.currentScene.createNode("Coordinate");
Coordinate2203.point = new X3D.MFVec3f([1.983874,0.075,1.01014,1.78688,0.075,1.050294,1.589887,0.075,1.090448,1.847757,0.075,0.3423617,1.650764,0.075,0.3825159,1.45377,0.075,0.4226701,1.71164,0.075,-0.3254162,1.514647,0.075,-0.285262,1.317653,0.075,-0.2451078]);
coord = Coordinate2203;

geometry = IndexedFaceSet2202;

browser.currentScene.children[438] = Shape2199;

let Shape2204 = browser.currentScene.createNode("Shape");
let Appearance2205 = browser.currentScene.createNode("Appearance");
let Material2206 = browser.currentScene.createNode("Material");
Material2206.ambientIntensity = 0;
Material2206.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2206.shininess = 0;
material = Material2206;

appearance = Appearance2205;

let IndexedFaceSet2207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2207.solid = False;
IndexedFaceSet2207.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2207.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2208 = browser.currentScene.createNode("Coordinate");
Coordinate2208.point = new X3D.MFVec3f([0.9040694,0.075,-0.1608048,1.101063,0.075,-0.200959,1.298056,0.075,-0.2411132,1.040186,0.075,0.5069731,1.23718,0.075,0.4668189,1.434173,0.075,0.4266647,1.176303,0.075,1.174751,1.373296,0.075,1.134597,1.57029,0.075,1.094443]);
coord = Coordinate2208;

geometry = IndexedFaceSet2207;

browser.currentScene.children[439] = Shape2204;

let Shape2209 = browser.currentScene.createNode("Shape");
let Appearance2210 = browser.currentScene.createNode("Appearance");
let Material2211 = browser.currentScene.createNode("Material");
Material2211.ambientIntensity = 0;
Material2211.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2211.shininess = 0;
material = Material2211;

appearance = Appearance2210;

let IndexedFaceSet2212 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2212.solid = False;
IndexedFaceSet2212.texCoordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
IndexedFaceSet2212.coordIndex = new X3D.MFInt32([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1]);
let Coordinate2213 = browser.currentScene.createNode("Coordinate");
Coordinate2213.point = new X3D.MFVec3f([0.7667135,0.075,1.278651,0.9637069,0.075,1.238497,1.1607,0.075,1.198343,0.9028302,0.075,1.946429,1.099824,0.075,1.906275,1.296817,0.075,1.866121,1.038947,0.075,2.614207,1.23594,0.075,2.574053,1.432934,0.075,2.533899]);
coord = Coordinate2213;

geometry = IndexedFaceSet2212;

browser.currentScene.children[440] = Shape2209;

let Shape2214 = browser.currentScene.createNode("Shape");
let Appearance2215 = browser.currentScene.createNode("Appearance");
let Material2216 = browser.currentScene.createNode("Material");
Material2216.ambientIntensity = 0;
Material2216.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2216.shininess = 0;
material = Material2216;

appearance = Appearance2215;

let IndexedFaceSet2217 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2217.solid = False;
IndexedFaceSet2217.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2217.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2218 = browser.currentScene.createNode("Coordinate");
Coordinate2218.point = new X3D.MFVec3f([0.349135,0.075,1.343357,0.2150155,0.075,0.6853777,1.156706,0.075,1.178746,1.022586,0.075,0.5207662]);
coord = Coordinate2218;

geometry = IndexedFaceSet2217;

browser.currentScene.children[441] = Shape2214;

let Shape2219 = browser.currentScene.createNode("Shape");
let Appearance2220 = browser.currentScene.createNode("Appearance");
let Material2221 = browser.currentScene.createNode("Material");
Material2221.ambientIntensity = 0;
Material2221.diffuseColor = new X3D.SFColor([0.5,0.5,0.5]);
Material2221.shininess = 0;
material = Material2221;

appearance = Appearance2220;

let IndexedFaceSet2222 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2222.solid = False;
IndexedFaceSet2222.texCoordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
IndexedFaceSet2222.coordIndex = new X3D.MFInt32([3,1,0,-1,3,0,2,-1]);
let Coordinate2223 = browser.currentScene.createNode("Coordinate");
Coordinate2223.point = new X3D.MFVec3f([0.211021,0.075,0.6657807,0.07690154,0.075,0.007801231,1.018592,0.075,0.5011692,0.8844724,0.075,-0.1568102]);
coord = Coordinate2223;

geometry = IndexedFaceSet2222;

browser.currentScene.children[442] = Shape2219;

}
main ();
