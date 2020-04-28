let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "TempleNoOrigin.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.avatarSize = new MFFloat(new float[0.000001,0.000001,0.000001]);
NavigationInfo3.speed = 0.0001;
browser.currentScene.children[1] = NavigationInfo3;

let GeoViewpoint4 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint4.description = "Temple";
GeoViewpoint4.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
GeoViewpoint4.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint4.position = new SFVec3d(new double[8167782,258125,45]);
browser.currentScene.children[2] = GeoViewpoint4;

let Background5 = browser.currentScene.createNode("Background");
Background5.groundColor = new MFColor(new float[1,1,1]);
Background5.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[3] = Background5;

let GeoLocation6 = browser.currentScene.createNode("GeoLocation");
GeoLocation6.geoCoords = new SFVec3d(new double[8167769,258115,2.5]);
GeoLocation6.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Transform7 = browser.currentScene.createNode("Transform");
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "COLUMN";
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[1,0.9,0.8]);
Appearance9.material = Material10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.DEF = "stone6";
ImageTexture11.url = new MFString(new java.lang.String["images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"]);
Appearance9.texture = ImageTexture11;

Shape8.appearance = Appearance9;

let Cylinder12 = browser.currentScene.createNode("Cylinder");
Cylinder12.height = 5;
Cylinder12.radius = 0.6;
Shape8.geometry = Cylinder12;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

GeoLocation6.children = new MFNode();

GeoLocation6.children[0] = Transform7;

browser.currentScene.children[4] = GeoLocation6;

let GeoLocation13 = browser.currentScene.createNode("GeoLocation");
GeoLocation13.geoCoords = new SFVec3d(new double[8167771,258115,2.5]);
GeoLocation13.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.USE = "COLUMN";
GeoLocation13.children = new MFNode();

GeoLocation13.children[0] = Shape14;

browser.currentScene.children[5] = GeoLocation13;

let GeoLocation15 = browser.currentScene.createNode("GeoLocation");
GeoLocation15.geoCoords = new SFVec3d(new double[8167773,258115,2.5]);
GeoLocation15.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.USE = "COLUMN";
GeoLocation15.children = new MFNode();

GeoLocation15.children[0] = Shape16;

browser.currentScene.children[6] = GeoLocation15;

let GeoLocation17 = browser.currentScene.createNode("GeoLocation");
GeoLocation17.geoCoords = new SFVec3d(new double[8167775,258115,2.5]);
GeoLocation17.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.USE = "COLUMN";
GeoLocation17.children = new MFNode();

GeoLocation17.children[0] = Shape18;

browser.currentScene.children[7] = GeoLocation17;

let GeoLocation19 = browser.currentScene.createNode("GeoLocation");
GeoLocation19.geoCoords = new SFVec3d(new double[8167777,258115,2.5]);
GeoLocation19.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.USE = "COLUMN";
GeoLocation19.children = new MFNode();

GeoLocation19.children[0] = Shape20;

browser.currentScene.children[8] = GeoLocation19;

let GeoLocation21 = browser.currentScene.createNode("GeoLocation");
GeoLocation21.geoCoords = new SFVec3d(new double[8167779,258115,2.5]);
GeoLocation21.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape22 = browser.currentScene.createNode("Shape");
Shape22.USE = "COLUMN";
GeoLocation21.children = new MFNode();

GeoLocation21.children[0] = Shape22;

browser.currentScene.children[9] = GeoLocation21;

let GeoLocation23 = browser.currentScene.createNode("GeoLocation");
GeoLocation23.geoCoords = new SFVec3d(new double[8167781,258115,2.5]);
GeoLocation23.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.USE = "COLUMN";
GeoLocation23.children = new MFNode();

GeoLocation23.children[0] = Shape24;

browser.currentScene.children[10] = GeoLocation23;

let GeoLocation25 = browser.currentScene.createNode("GeoLocation");
GeoLocation25.geoCoords = new SFVec3d(new double[8167783,258115,2.5]);
GeoLocation25.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.USE = "COLUMN";
GeoLocation25.children = new MFNode();

GeoLocation25.children[0] = Shape26;

browser.currentScene.children[11] = GeoLocation25;

let GeoLocation27 = browser.currentScene.createNode("GeoLocation");
GeoLocation27.geoCoords = new SFVec3d(new double[8167785,258115,2.5]);
GeoLocation27.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.USE = "COLUMN";
GeoLocation27.children = new MFNode();

GeoLocation27.children[0] = Shape28;

browser.currentScene.children[12] = GeoLocation27;

let GeoLocation29 = browser.currentScene.createNode("GeoLocation");
GeoLocation29.geoCoords = new SFVec3d(new double[8167787,258115,2.5]);
GeoLocation29.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.USE = "COLUMN";
GeoLocation29.children = new MFNode();

GeoLocation29.children[0] = Shape30;

browser.currentScene.children[13] = GeoLocation29;

let GeoLocation31 = browser.currentScene.createNode("GeoLocation");
GeoLocation31.geoCoords = new SFVec3d(new double[8167789,258115,2.5]);
GeoLocation31.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.USE = "COLUMN";
GeoLocation31.children = new MFNode();

GeoLocation31.children[0] = Shape32;

browser.currentScene.children[14] = GeoLocation31;

let GeoLocation33 = browser.currentScene.createNode("GeoLocation");
GeoLocation33.geoCoords = new SFVec3d(new double[8167769,258117,2.5]);
GeoLocation33.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape34 = browser.currentScene.createNode("Shape");
Shape34.USE = "COLUMN";
GeoLocation33.children = new MFNode();

GeoLocation33.children[0] = Shape34;

browser.currentScene.children[15] = GeoLocation33;

let GeoLocation35 = browser.currentScene.createNode("GeoLocation");
GeoLocation35.geoCoords = new SFVec3d(new double[8167771,258117,2.5]);
GeoLocation35.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.USE = "COLUMN";
GeoLocation35.children = new MFNode();

GeoLocation35.children[0] = Shape36;

browser.currentScene.children[16] = GeoLocation35;

let GeoLocation37 = browser.currentScene.createNode("GeoLocation");
GeoLocation37.geoCoords = new SFVec3d(new double[8167773,258117,2.5]);
GeoLocation37.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.USE = "COLUMN";
GeoLocation37.children = new MFNode();

GeoLocation37.children[0] = Shape38;

browser.currentScene.children[17] = GeoLocation37;

let GeoLocation39 = browser.currentScene.createNode("GeoLocation");
GeoLocation39.geoCoords = new SFVec3d(new double[8167775,258117,2.5]);
GeoLocation39.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.USE = "COLUMN";
GeoLocation39.children = new MFNode();

GeoLocation39.children[0] = Shape40;

browser.currentScene.children[18] = GeoLocation39;

let GeoLocation41 = browser.currentScene.createNode("GeoLocation");
GeoLocation41.geoCoords = new SFVec3d(new double[8167777,258117,2.5]);
GeoLocation41.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.USE = "COLUMN";
GeoLocation41.children = new MFNode();

GeoLocation41.children[0] = Shape42;

browser.currentScene.children[19] = GeoLocation41;

let GeoLocation43 = browser.currentScene.createNode("GeoLocation");
GeoLocation43.geoCoords = new SFVec3d(new double[8167779,258117,2.5]);
GeoLocation43.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "COLUMN";
GeoLocation43.children = new MFNode();

GeoLocation43.children[0] = Shape44;

browser.currentScene.children[20] = GeoLocation43;

let GeoLocation45 = browser.currentScene.createNode("GeoLocation");
GeoLocation45.geoCoords = new SFVec3d(new double[8167781,258117,2.5]);
GeoLocation45.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "COLUMN";
GeoLocation45.children = new MFNode();

GeoLocation45.children[0] = Shape46;

browser.currentScene.children[21] = GeoLocation45;

let GeoLocation47 = browser.currentScene.createNode("GeoLocation");
GeoLocation47.geoCoords = new SFVec3d(new double[8167783,258117,2.5]);
GeoLocation47.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "COLUMN";
GeoLocation47.children = new MFNode();

GeoLocation47.children[0] = Shape48;

browser.currentScene.children[22] = GeoLocation47;

let GeoLocation49 = browser.currentScene.createNode("GeoLocation");
GeoLocation49.geoCoords = new SFVec3d(new double[8167785,258117,2.5]);
GeoLocation49.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "COLUMN";
GeoLocation49.children = new MFNode();

GeoLocation49.children[0] = Shape50;

browser.currentScene.children[23] = GeoLocation49;

let GeoLocation51 = browser.currentScene.createNode("GeoLocation");
GeoLocation51.geoCoords = new SFVec3d(new double[8167787,258117,2.5]);
GeoLocation51.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "COLUMN";
GeoLocation51.children = new MFNode();

GeoLocation51.children[0] = Shape52;

browser.currentScene.children[24] = GeoLocation51;

let GeoLocation53 = browser.currentScene.createNode("GeoLocation");
GeoLocation53.geoCoords = new SFVec3d(new double[8167789,258117,2.5]);
GeoLocation53.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "COLUMN";
GeoLocation53.children = new MFNode();

GeoLocation53.children[0] = Shape54;

browser.currentScene.children[25] = GeoLocation53;

let GeoLocation55 = browser.currentScene.createNode("GeoLocation");
GeoLocation55.geoCoords = new SFVec3d(new double[8167769,258119,2.5]);
GeoLocation55.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "COLUMN";
GeoLocation55.children = new MFNode();

GeoLocation55.children[0] = Shape56;

browser.currentScene.children[26] = GeoLocation55;

let GeoLocation57 = browser.currentScene.createNode("GeoLocation");
GeoLocation57.geoCoords = new SFVec3d(new double[8167771,258119,2.5]);
GeoLocation57.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "COLUMN";
GeoLocation57.children = new MFNode();

GeoLocation57.children[0] = Shape58;

browser.currentScene.children[27] = GeoLocation57;

let GeoLocation59 = browser.currentScene.createNode("GeoLocation");
GeoLocation59.geoCoords = new SFVec3d(new double[8167787,258119,2.5]);
GeoLocation59.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "COLUMN";
GeoLocation59.children = new MFNode();

GeoLocation59.children[0] = Shape60;

browser.currentScene.children[28] = GeoLocation59;

let GeoLocation61 = browser.currentScene.createNode("GeoLocation");
GeoLocation61.geoCoords = new SFVec3d(new double[8167789,258119,2.5]);
GeoLocation61.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "COLUMN";
GeoLocation61.children = new MFNode();

GeoLocation61.children[0] = Shape62;

browser.currentScene.children[29] = GeoLocation61;

let GeoLocation63 = browser.currentScene.createNode("GeoLocation");
GeoLocation63.geoCoords = new SFVec3d(new double[8167769,258121,2.5]);
GeoLocation63.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "COLUMN";
GeoLocation63.children = new MFNode();

GeoLocation63.children[0] = Shape64;

browser.currentScene.children[30] = GeoLocation63;

let GeoLocation65 = browser.currentScene.createNode("GeoLocation");
GeoLocation65.geoCoords = new SFVec3d(new double[8167771,258121,2.5]);
GeoLocation65.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "COLUMN";
GeoLocation65.children = new MFNode();

GeoLocation65.children[0] = Shape66;

browser.currentScene.children[31] = GeoLocation65;

let GeoLocation67 = browser.currentScene.createNode("GeoLocation");
GeoLocation67.geoCoords = new SFVec3d(new double[8167787,258121,2.5]);
GeoLocation67.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "COLUMN";
GeoLocation67.children = new MFNode();

GeoLocation67.children[0] = Shape68;

browser.currentScene.children[32] = GeoLocation67;

let GeoLocation69 = browser.currentScene.createNode("GeoLocation");
GeoLocation69.geoCoords = new SFVec3d(new double[8167789,258121,2.5]);
GeoLocation69.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "COLUMN";
GeoLocation69.children = new MFNode();

GeoLocation69.children[0] = Shape70;

browser.currentScene.children[33] = GeoLocation69;

let GeoLocation71 = browser.currentScene.createNode("GeoLocation");
GeoLocation71.geoCoords = new SFVec3d(new double[8167769,258123,2.5]);
GeoLocation71.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "COLUMN";
GeoLocation71.children = new MFNode();

GeoLocation71.children[0] = Shape72;

browser.currentScene.children[34] = GeoLocation71;

let GeoLocation73 = browser.currentScene.createNode("GeoLocation");
GeoLocation73.geoCoords = new SFVec3d(new double[8167771,258123,2.5]);
GeoLocation73.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "COLUMN";
GeoLocation73.children = new MFNode();

GeoLocation73.children[0] = Shape74;

browser.currentScene.children[35] = GeoLocation73;

let GeoLocation75 = browser.currentScene.createNode("GeoLocation");
GeoLocation75.geoCoords = new SFVec3d(new double[8167787,258123,2.5]);
GeoLocation75.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "COLUMN";
GeoLocation75.children = new MFNode();

GeoLocation75.children[0] = Shape76;

browser.currentScene.children[36] = GeoLocation75;

let GeoLocation77 = browser.currentScene.createNode("GeoLocation");
GeoLocation77.geoCoords = new SFVec3d(new double[8167789,258123,2.5]);
GeoLocation77.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "COLUMN";
GeoLocation77.children = new MFNode();

GeoLocation77.children[0] = Shape78;

browser.currentScene.children[37] = GeoLocation77;

let GeoLocation79 = browser.currentScene.createNode("GeoLocation");
GeoLocation79.geoCoords = new SFVec3d(new double[8167769,258125,2.5]);
GeoLocation79.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "COLUMN";
GeoLocation79.children = new MFNode();

GeoLocation79.children[0] = Shape80;

browser.currentScene.children[38] = GeoLocation79;

let GeoLocation81 = browser.currentScene.createNode("GeoLocation");
GeoLocation81.geoCoords = new SFVec3d(new double[8167771,258125,2.5]);
GeoLocation81.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "COLUMN";
GeoLocation81.children = new MFNode();

GeoLocation81.children[0] = Shape82;

browser.currentScene.children[39] = GeoLocation81;

let GeoLocation83 = browser.currentScene.createNode("GeoLocation");
GeoLocation83.geoCoords = new SFVec3d(new double[8167787,258125,2.5]);
GeoLocation83.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "COLUMN";
GeoLocation83.children = new MFNode();

GeoLocation83.children[0] = Shape84;

browser.currentScene.children[40] = GeoLocation83;

let GeoLocation85 = browser.currentScene.createNode("GeoLocation");
GeoLocation85.geoCoords = new SFVec3d(new double[8167789,258125,2.5]);
GeoLocation85.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "COLUMN";
GeoLocation85.children = new MFNode();

GeoLocation85.children[0] = Shape86;

browser.currentScene.children[41] = GeoLocation85;

let GeoLocation87 = browser.currentScene.createNode("GeoLocation");
GeoLocation87.geoCoords = new SFVec3d(new double[8167769,258127,2.5]);
GeoLocation87.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "COLUMN";
GeoLocation87.children = new MFNode();

GeoLocation87.children[0] = Shape88;

browser.currentScene.children[42] = GeoLocation87;

let GeoLocation89 = browser.currentScene.createNode("GeoLocation");
GeoLocation89.geoCoords = new SFVec3d(new double[8167771,258127,2.5]);
GeoLocation89.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "COLUMN";
GeoLocation89.children = new MFNode();

GeoLocation89.children[0] = Shape90;

browser.currentScene.children[43] = GeoLocation89;

let GeoLocation91 = browser.currentScene.createNode("GeoLocation");
GeoLocation91.geoCoords = new SFVec3d(new double[8167787,258127,2.5]);
GeoLocation91.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "COLUMN";
GeoLocation91.children = new MFNode();

GeoLocation91.children[0] = Shape92;

browser.currentScene.children[44] = GeoLocation91;

let GeoLocation93 = browser.currentScene.createNode("GeoLocation");
GeoLocation93.geoCoords = new SFVec3d(new double[8167789,258127,2.5]);
GeoLocation93.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "COLUMN";
GeoLocation93.children = new MFNode();

GeoLocation93.children[0] = Shape94;

browser.currentScene.children[45] = GeoLocation93;

let GeoLocation95 = browser.currentScene.createNode("GeoLocation");
GeoLocation95.geoCoords = new SFVec3d(new double[8167769,258129,2.5]);
GeoLocation95.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "COLUMN";
GeoLocation95.children = new MFNode();

GeoLocation95.children[0] = Shape96;

browser.currentScene.children[46] = GeoLocation95;

let GeoLocation97 = browser.currentScene.createNode("GeoLocation");
GeoLocation97.geoCoords = new SFVec3d(new double[8167771,258129,2.5]);
GeoLocation97.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "COLUMN";
GeoLocation97.children = new MFNode();

GeoLocation97.children[0] = Shape98;

browser.currentScene.children[47] = GeoLocation97;

let GeoLocation99 = browser.currentScene.createNode("GeoLocation");
GeoLocation99.geoCoords = new SFVec3d(new double[8167787,258129,2.5]);
GeoLocation99.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "COLUMN";
GeoLocation99.children = new MFNode();

GeoLocation99.children[0] = Shape100;

browser.currentScene.children[48] = GeoLocation99;

let GeoLocation101 = browser.currentScene.createNode("GeoLocation");
GeoLocation101.geoCoords = new SFVec3d(new double[8167789,258129,2.5]);
GeoLocation101.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "COLUMN";
GeoLocation101.children = new MFNode();

GeoLocation101.children[0] = Shape102;

browser.currentScene.children[49] = GeoLocation101;

let GeoLocation103 = browser.currentScene.createNode("GeoLocation");
GeoLocation103.geoCoords = new SFVec3d(new double[8167769,258131,2.5]);
GeoLocation103.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "COLUMN";
GeoLocation103.children = new MFNode();

GeoLocation103.children[0] = Shape104;

browser.currentScene.children[50] = GeoLocation103;

let GeoLocation105 = browser.currentScene.createNode("GeoLocation");
GeoLocation105.geoCoords = new SFVec3d(new double[8167771,258131,2.5]);
GeoLocation105.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "COLUMN";
GeoLocation105.children = new MFNode();

GeoLocation105.children[0] = Shape106;

browser.currentScene.children[51] = GeoLocation105;

let GeoLocation107 = browser.currentScene.createNode("GeoLocation");
GeoLocation107.geoCoords = new SFVec3d(new double[8167787,258131,2.5]);
GeoLocation107.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "COLUMN";
GeoLocation107.children = new MFNode();

GeoLocation107.children[0] = Shape108;

browser.currentScene.children[52] = GeoLocation107;

let GeoLocation109 = browser.currentScene.createNode("GeoLocation");
GeoLocation109.geoCoords = new SFVec3d(new double[8167789,258131,2.5]);
GeoLocation109.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "COLUMN";
GeoLocation109.children = new MFNode();

GeoLocation109.children[0] = Shape110;

browser.currentScene.children[53] = GeoLocation109;

let GeoLocation111 = browser.currentScene.createNode("GeoLocation");
GeoLocation111.geoCoords = new SFVec3d(new double[8167769,258133,2.5]);
GeoLocation111.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "COLUMN";
GeoLocation111.children = new MFNode();

GeoLocation111.children[0] = Shape112;

browser.currentScene.children[54] = GeoLocation111;

let GeoLocation113 = browser.currentScene.createNode("GeoLocation");
GeoLocation113.geoCoords = new SFVec3d(new double[8167771,258133,2.5]);
GeoLocation113.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "COLUMN";
GeoLocation113.children = new MFNode();

GeoLocation113.children[0] = Shape114;

browser.currentScene.children[55] = GeoLocation113;

let GeoLocation115 = browser.currentScene.createNode("GeoLocation");
GeoLocation115.geoCoords = new SFVec3d(new double[8167773,258133,2.5]);
GeoLocation115.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "COLUMN";
GeoLocation115.children = new MFNode();

GeoLocation115.children[0] = Shape116;

browser.currentScene.children[56] = GeoLocation115;

let GeoLocation117 = browser.currentScene.createNode("GeoLocation");
GeoLocation117.geoCoords = new SFVec3d(new double[8167775,258133,2.5]);
GeoLocation117.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "COLUMN";
GeoLocation117.children = new MFNode();

GeoLocation117.children[0] = Shape118;

browser.currentScene.children[57] = GeoLocation117;

let GeoLocation119 = browser.currentScene.createNode("GeoLocation");
GeoLocation119.geoCoords = new SFVec3d(new double[8167777,258133,2.5]);
GeoLocation119.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "COLUMN";
GeoLocation119.children = new MFNode();

GeoLocation119.children[0] = Shape120;

browser.currentScene.children[58] = GeoLocation119;

let GeoLocation121 = browser.currentScene.createNode("GeoLocation");
GeoLocation121.geoCoords = new SFVec3d(new double[8167779,258133,2.5]);
GeoLocation121.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "COLUMN";
GeoLocation121.children = new MFNode();

GeoLocation121.children[0] = Shape122;

browser.currentScene.children[59] = GeoLocation121;

let GeoLocation123 = browser.currentScene.createNode("GeoLocation");
GeoLocation123.geoCoords = new SFVec3d(new double[8167781,258133,2.5]);
GeoLocation123.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "COLUMN";
GeoLocation123.children = new MFNode();

GeoLocation123.children[0] = Shape124;

browser.currentScene.children[60] = GeoLocation123;

let GeoLocation125 = browser.currentScene.createNode("GeoLocation");
GeoLocation125.geoCoords = new SFVec3d(new double[8167783,258133,2.5]);
GeoLocation125.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "COLUMN";
GeoLocation125.children = new MFNode();

GeoLocation125.children[0] = Shape126;

browser.currentScene.children[61] = GeoLocation125;

let GeoLocation127 = browser.currentScene.createNode("GeoLocation");
GeoLocation127.geoCoords = new SFVec3d(new double[8167785,258133,2.5]);
GeoLocation127.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "COLUMN";
GeoLocation127.children = new MFNode();

GeoLocation127.children[0] = Shape128;

browser.currentScene.children[62] = GeoLocation127;

let GeoLocation129 = browser.currentScene.createNode("GeoLocation");
GeoLocation129.geoCoords = new SFVec3d(new double[8167787,258133,2.5]);
GeoLocation129.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "COLUMN";
GeoLocation129.children = new MFNode();

GeoLocation129.children[0] = Shape130;

browser.currentScene.children[63] = GeoLocation129;

let GeoLocation131 = browser.currentScene.createNode("GeoLocation");
GeoLocation131.geoCoords = new SFVec3d(new double[8167789,258133,2.5]);
GeoLocation131.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "COLUMN";
GeoLocation131.children = new MFNode();

GeoLocation131.children[0] = Shape132;

browser.currentScene.children[64] = GeoLocation131;

let GeoLocation133 = browser.currentScene.createNode("GeoLocation");
GeoLocation133.geoCoords = new SFVec3d(new double[8167769,258135,2.5]);
GeoLocation133.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "COLUMN";
GeoLocation133.children = new MFNode();

GeoLocation133.children[0] = Shape134;

browser.currentScene.children[65] = GeoLocation133;

let GeoLocation135 = browser.currentScene.createNode("GeoLocation");
GeoLocation135.geoCoords = new SFVec3d(new double[8167771,258135,2.5]);
GeoLocation135.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "COLUMN";
GeoLocation135.children = new MFNode();

GeoLocation135.children[0] = Shape136;

browser.currentScene.children[66] = GeoLocation135;

let GeoLocation137 = browser.currentScene.createNode("GeoLocation");
GeoLocation137.geoCoords = new SFVec3d(new double[8167773,258135,2.5]);
GeoLocation137.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "COLUMN";
GeoLocation137.children = new MFNode();

GeoLocation137.children[0] = Shape138;

browser.currentScene.children[67] = GeoLocation137;

let GeoLocation139 = browser.currentScene.createNode("GeoLocation");
GeoLocation139.geoCoords = new SFVec3d(new double[8167775,258135,2.5]);
GeoLocation139.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "COLUMN";
GeoLocation139.children = new MFNode();

GeoLocation139.children[0] = Shape140;

browser.currentScene.children[68] = GeoLocation139;

let GeoLocation141 = browser.currentScene.createNode("GeoLocation");
GeoLocation141.geoCoords = new SFVec3d(new double[8167777,258135,2.5]);
GeoLocation141.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "COLUMN";
GeoLocation141.children = new MFNode();

GeoLocation141.children[0] = Shape142;

browser.currentScene.children[69] = GeoLocation141;

let GeoLocation143 = browser.currentScene.createNode("GeoLocation");
GeoLocation143.geoCoords = new SFVec3d(new double[8167779,258135,2.5]);
GeoLocation143.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "COLUMN";
GeoLocation143.children = new MFNode();

GeoLocation143.children[0] = Shape144;

browser.currentScene.children[70] = GeoLocation143;

let GeoLocation145 = browser.currentScene.createNode("GeoLocation");
GeoLocation145.geoCoords = new SFVec3d(new double[8167781,258135,2.5]);
GeoLocation145.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "COLUMN";
GeoLocation145.children = new MFNode();

GeoLocation145.children[0] = Shape146;

browser.currentScene.children[71] = GeoLocation145;

let GeoLocation147 = browser.currentScene.createNode("GeoLocation");
GeoLocation147.geoCoords = new SFVec3d(new double[8167783,258135,2.5]);
GeoLocation147.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "COLUMN";
GeoLocation147.children = new MFNode();

GeoLocation147.children[0] = Shape148;

browser.currentScene.children[72] = GeoLocation147;

let GeoLocation149 = browser.currentScene.createNode("GeoLocation");
GeoLocation149.geoCoords = new SFVec3d(new double[8167785,258135,2.5]);
GeoLocation149.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "COLUMN";
GeoLocation149.children = new MFNode();

GeoLocation149.children[0] = Shape150;

browser.currentScene.children[73] = GeoLocation149;

let GeoLocation151 = browser.currentScene.createNode("GeoLocation");
GeoLocation151.geoCoords = new SFVec3d(new double[8167787,258135,2.5]);
GeoLocation151.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "COLUMN";
GeoLocation151.children = new MFNode();

GeoLocation151.children[0] = Shape152;

browser.currentScene.children[74] = GeoLocation151;

let GeoLocation153 = browser.currentScene.createNode("GeoLocation");
GeoLocation153.geoCoords = new SFVec3d(new double[8167789,258135,2.5]);
GeoLocation153.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "COLUMN";
GeoLocation153.children = new MFNode();

GeoLocation153.children[0] = Shape154;

browser.currentScene.children[75] = GeoLocation153;

let GeoLocation155 = browser.currentScene.createNode("GeoLocation");
GeoLocation155.geoCoords = new SFVec3d(new double[8167779,258125,-0.5]);
GeoLocation155.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.rotation = new SFRotation(new float[0,1,0,0.13]);
let Shape157 = browser.currentScene.createNode("Shape");
let Appearance158 = browser.currentScene.createNode("Appearance");
let Material159 = browser.currentScene.createNode("Material");
Material159.diffuseColor = new SFColor(new float[1,1,1]);
Appearance158.material = Material159;

let ImageTexture160 = browser.currentScene.createNode("ImageTexture");
ImageTexture160.DEF = "stone5";
ImageTexture160.url = new MFString(new java.lang.String["images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"]);
Appearance158.texture = ImageTexture160;

Shape157.appearance = Appearance158;

let Box161 = browser.currentScene.createNode("Box");
Box161.size = new SFVec3f(new float[22,1,22]);
Shape157.geometry = Box161;

Transform156.children = new MFNode();

Transform156.children[0] = Shape157;

GeoLocation155.children = new MFNode();

GeoLocation155.children[0] = Transform156;

browser.currentScene.children[76] = GeoLocation155;

let GeoLocation162 = browser.currentScene.createNode("GeoLocation");
GeoLocation162.geoCoords = new SFVec3d(new double[8167779,258125,-1.5]);
GeoLocation162.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Transform163 = browser.currentScene.createNode("Transform");
Transform163.rotation = new SFRotation(new float[0,1,0,0.13]);
let Shape164 = browser.currentScene.createNode("Shape");
let Appearance165 = browser.currentScene.createNode("Appearance");
let Material166 = browser.currentScene.createNode("Material");
Material166.diffuseColor = new SFColor(new float[1,1,1]);
Appearance165.material = Material166;

let ImageTexture167 = browser.currentScene.createNode("ImageTexture");
ImageTexture167.USE = "stone5";
Appearance165.texture = ImageTexture167;

Shape164.appearance = Appearance165;

let Box168 = browser.currentScene.createNode("Box");
Box168.size = new SFVec3f(new float[24,1,24]);
Shape164.geometry = Box168;

Transform163.children = new MFNode();

Transform163.children[0] = Shape164;

GeoLocation162.children = new MFNode();

GeoLocation162.children[0] = Transform163;

browser.currentScene.children[77] = GeoLocation162;

let GeoLocation169 = browser.currentScene.createNode("GeoLocation");
GeoLocation169.geoCoords = new SFVec3d(new double[8167779,258125,-2.5]);
GeoLocation169.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let Transform170 = browser.currentScene.createNode("Transform");
Transform170.rotation = new SFRotation(new float[0,1,0,0.13]);
let Shape171 = browser.currentScene.createNode("Shape");
let Appearance172 = browser.currentScene.createNode("Appearance");
let Material173 = browser.currentScene.createNode("Material");
Material173.diffuseColor = new SFColor(new float[1,1,1]);
Appearance172.material = Material173;

let ImageTexture174 = browser.currentScene.createNode("ImageTexture");
ImageTexture174.USE = "stone5";
Appearance172.texture = ImageTexture174;

Shape171.appearance = Appearance172;

let Box175 = browser.currentScene.createNode("Box");
Box175.size = new SFVec3f(new float[26,1,26]);
Shape171.geometry = Box175;

Transform170.children = new MFNode();

Transform170.children[0] = Shape171;

GeoLocation169.children = new MFNode();

GeoLocation169.children[0] = Transform170;

browser.currentScene.children[78] = GeoLocation169;

