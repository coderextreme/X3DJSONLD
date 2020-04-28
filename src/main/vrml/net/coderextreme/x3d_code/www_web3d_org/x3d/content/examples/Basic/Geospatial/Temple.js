let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Temple.x3d";
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
let GeoOrigin5 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin5.DEF = "ORIGIN";
GeoOrigin5.geoCoords = new SFVec3d(new double[8167780,258126,0]);
GeoOrigin5.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
GeoViewpoint4.geoOrigin = GeoOrigin5;

browser.currentScene.children[2] = GeoViewpoint4;

let Background6 = browser.currentScene.createNode("Background");
Background6.groundColor = new MFColor(new float[1,1,1]);
Background6.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[3] = Background6;

let GeoLocation7 = browser.currentScene.createNode("GeoLocation");
GeoLocation7.geoCoords = new SFVec3d(new double[8167769,258115,2.5]);
GeoLocation7.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin8 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin8.USE = "ORIGIN";
GeoLocation7.geoOrigin = GeoOrigin8;

let Transform9 = browser.currentScene.createNode("Transform");
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "COLUMN";
let Appearance11 = browser.currentScene.createNode("Appearance");
let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.DEF = "stone6";
ImageTexture12.url = new MFString(new java.lang.String["images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"]);
Appearance11.texture = ImageTexture12;

let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[1,0.9,0.8]);
Appearance11.material = Material13;

Shape10.appearance = Appearance11;

let Cylinder14 = browser.currentScene.createNode("Cylinder");
Cylinder14.height = 5;
Cylinder14.radius = 0.6;
Shape10.geometry = Cylinder14;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

GeoLocation7.children = new MFNode();

GeoLocation7.children[0] = Transform9;

browser.currentScene.children[4] = GeoLocation7;

let GeoLocation15 = browser.currentScene.createNode("GeoLocation");
GeoLocation15.geoCoords = new SFVec3d(new double[8167771,258115,2.5]);
GeoLocation15.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin16 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin16.USE = "ORIGIN";
GeoLocation15.geoOrigin = GeoOrigin16;

let Shape17 = browser.currentScene.createNode("Shape");
Shape17.USE = "COLUMN";
GeoLocation15.children = new MFNode();

GeoLocation15.children[0] = Shape17;

browser.currentScene.children[5] = GeoLocation15;

let GeoLocation18 = browser.currentScene.createNode("GeoLocation");
GeoLocation18.geoCoords = new SFVec3d(new double[8167773,258115,2.5]);
GeoLocation18.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin19 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin19.USE = "ORIGIN";
GeoLocation18.geoOrigin = GeoOrigin19;

let Shape20 = browser.currentScene.createNode("Shape");
Shape20.USE = "COLUMN";
GeoLocation18.children = new MFNode();

GeoLocation18.children[0] = Shape20;

browser.currentScene.children[6] = GeoLocation18;

let GeoLocation21 = browser.currentScene.createNode("GeoLocation");
GeoLocation21.geoCoords = new SFVec3d(new double[8167775,258115,2.5]);
GeoLocation21.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin22 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin22.USE = "ORIGIN";
GeoLocation21.geoOrigin = GeoOrigin22;

let Shape23 = browser.currentScene.createNode("Shape");
Shape23.USE = "COLUMN";
GeoLocation21.children = new MFNode();

GeoLocation21.children[0] = Shape23;

browser.currentScene.children[7] = GeoLocation21;

let GeoLocation24 = browser.currentScene.createNode("GeoLocation");
GeoLocation24.geoCoords = new SFVec3d(new double[8167777,258115,2.5]);
GeoLocation24.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin25 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin25.USE = "ORIGIN";
GeoLocation24.geoOrigin = GeoOrigin25;

let Shape26 = browser.currentScene.createNode("Shape");
Shape26.USE = "COLUMN";
GeoLocation24.children = new MFNode();

GeoLocation24.children[0] = Shape26;

browser.currentScene.children[8] = GeoLocation24;

let GeoLocation27 = browser.currentScene.createNode("GeoLocation");
GeoLocation27.geoCoords = new SFVec3d(new double[8167779,258115,2.5]);
GeoLocation27.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin28 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin28.USE = "ORIGIN";
GeoLocation27.geoOrigin = GeoOrigin28;

let Shape29 = browser.currentScene.createNode("Shape");
Shape29.USE = "COLUMN";
GeoLocation27.children = new MFNode();

GeoLocation27.children[0] = Shape29;

browser.currentScene.children[9] = GeoLocation27;

let GeoLocation30 = browser.currentScene.createNode("GeoLocation");
GeoLocation30.geoCoords = new SFVec3d(new double[8167781,258115,2.5]);
GeoLocation30.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin31 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin31.USE = "ORIGIN";
GeoLocation30.geoOrigin = GeoOrigin31;

let Shape32 = browser.currentScene.createNode("Shape");
Shape32.USE = "COLUMN";
GeoLocation30.children = new MFNode();

GeoLocation30.children[0] = Shape32;

browser.currentScene.children[10] = GeoLocation30;

let GeoLocation33 = browser.currentScene.createNode("GeoLocation");
GeoLocation33.geoCoords = new SFVec3d(new double[8167783,258115,2.5]);
GeoLocation33.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin34 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin34.USE = "ORIGIN";
GeoLocation33.geoOrigin = GeoOrigin34;

let Shape35 = browser.currentScene.createNode("Shape");
Shape35.USE = "COLUMN";
GeoLocation33.children = new MFNode();

GeoLocation33.children[0] = Shape35;

browser.currentScene.children[11] = GeoLocation33;

let GeoLocation36 = browser.currentScene.createNode("GeoLocation");
GeoLocation36.geoCoords = new SFVec3d(new double[8167785,258115,2.5]);
GeoLocation36.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin37 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin37.USE = "ORIGIN";
GeoLocation36.geoOrigin = GeoOrigin37;

let Shape38 = browser.currentScene.createNode("Shape");
Shape38.USE = "COLUMN";
GeoLocation36.children = new MFNode();

GeoLocation36.children[0] = Shape38;

browser.currentScene.children[12] = GeoLocation36;

let GeoLocation39 = browser.currentScene.createNode("GeoLocation");
GeoLocation39.geoCoords = new SFVec3d(new double[8167787,258115,2.5]);
GeoLocation39.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin40 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin40.USE = "ORIGIN";
GeoLocation39.geoOrigin = GeoOrigin40;

let Shape41 = browser.currentScene.createNode("Shape");
Shape41.USE = "COLUMN";
GeoLocation39.children = new MFNode();

GeoLocation39.children[0] = Shape41;

browser.currentScene.children[13] = GeoLocation39;

let GeoLocation42 = browser.currentScene.createNode("GeoLocation");
GeoLocation42.geoCoords = new SFVec3d(new double[8167789,258115,2.5]);
GeoLocation42.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin43 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin43.USE = "ORIGIN";
GeoLocation42.geoOrigin = GeoOrigin43;

let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "COLUMN";
GeoLocation42.children = new MFNode();

GeoLocation42.children[0] = Shape44;

browser.currentScene.children[14] = GeoLocation42;

let GeoLocation45 = browser.currentScene.createNode("GeoLocation");
GeoLocation45.geoCoords = new SFVec3d(new double[8167769,258117,2.5]);
GeoLocation45.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin46 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin46.USE = "ORIGIN";
GeoLocation45.geoOrigin = GeoOrigin46;

let Shape47 = browser.currentScene.createNode("Shape");
Shape47.USE = "COLUMN";
GeoLocation45.children = new MFNode();

GeoLocation45.children[0] = Shape47;

browser.currentScene.children[15] = GeoLocation45;

let GeoLocation48 = browser.currentScene.createNode("GeoLocation");
GeoLocation48.geoCoords = new SFVec3d(new double[8167771,258117,2.5]);
GeoLocation48.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin49 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin49.USE = "ORIGIN";
GeoLocation48.geoOrigin = GeoOrigin49;

let Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "COLUMN";
GeoLocation48.children = new MFNode();

GeoLocation48.children[0] = Shape50;

browser.currentScene.children[16] = GeoLocation48;

let GeoLocation51 = browser.currentScene.createNode("GeoLocation");
GeoLocation51.geoCoords = new SFVec3d(new double[8167773,258117,2.5]);
GeoLocation51.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin52 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin52.USE = "ORIGIN";
GeoLocation51.geoOrigin = GeoOrigin52;

let Shape53 = browser.currentScene.createNode("Shape");
Shape53.USE = "COLUMN";
GeoLocation51.children = new MFNode();

GeoLocation51.children[0] = Shape53;

browser.currentScene.children[17] = GeoLocation51;

let GeoLocation54 = browser.currentScene.createNode("GeoLocation");
GeoLocation54.geoCoords = new SFVec3d(new double[8167775,258117,2.5]);
GeoLocation54.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin55 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin55.USE = "ORIGIN";
GeoLocation54.geoOrigin = GeoOrigin55;

let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "COLUMN";
GeoLocation54.children = new MFNode();

GeoLocation54.children[0] = Shape56;

browser.currentScene.children[18] = GeoLocation54;

let GeoLocation57 = browser.currentScene.createNode("GeoLocation");
GeoLocation57.geoCoords = new SFVec3d(new double[8167777,258117,2.5]);
GeoLocation57.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin58 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin58.USE = "ORIGIN";
GeoLocation57.geoOrigin = GeoOrigin58;

let Shape59 = browser.currentScene.createNode("Shape");
Shape59.USE = "COLUMN";
GeoLocation57.children = new MFNode();

GeoLocation57.children[0] = Shape59;

browser.currentScene.children[19] = GeoLocation57;

let GeoLocation60 = browser.currentScene.createNode("GeoLocation");
GeoLocation60.geoCoords = new SFVec3d(new double[8167779,258117,2.5]);
GeoLocation60.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin61 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin61.USE = "ORIGIN";
GeoLocation60.geoOrigin = GeoOrigin61;

let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "COLUMN";
GeoLocation60.children = new MFNode();

GeoLocation60.children[0] = Shape62;

browser.currentScene.children[20] = GeoLocation60;

let GeoLocation63 = browser.currentScene.createNode("GeoLocation");
GeoLocation63.geoCoords = new SFVec3d(new double[8167781,258117,2.5]);
GeoLocation63.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin64 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin64.USE = "ORIGIN";
GeoLocation63.geoOrigin = GeoOrigin64;

let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "COLUMN";
GeoLocation63.children = new MFNode();

GeoLocation63.children[0] = Shape65;

browser.currentScene.children[21] = GeoLocation63;

let GeoLocation66 = browser.currentScene.createNode("GeoLocation");
GeoLocation66.geoCoords = new SFVec3d(new double[8167783,258117,2.5]);
GeoLocation66.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin67 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin67.USE = "ORIGIN";
GeoLocation66.geoOrigin = GeoOrigin67;

let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "COLUMN";
GeoLocation66.children = new MFNode();

GeoLocation66.children[0] = Shape68;

browser.currentScene.children[22] = GeoLocation66;

let GeoLocation69 = browser.currentScene.createNode("GeoLocation");
GeoLocation69.geoCoords = new SFVec3d(new double[8167785,258117,2.5]);
GeoLocation69.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin70 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin70.USE = "ORIGIN";
GeoLocation69.geoOrigin = GeoOrigin70;

let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "COLUMN";
GeoLocation69.children = new MFNode();

GeoLocation69.children[0] = Shape71;

browser.currentScene.children[23] = GeoLocation69;

let GeoLocation72 = browser.currentScene.createNode("GeoLocation");
GeoLocation72.geoCoords = new SFVec3d(new double[8167787,258117,2.5]);
GeoLocation72.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin73 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin73.USE = "ORIGIN";
GeoLocation72.geoOrigin = GeoOrigin73;

let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "COLUMN";
GeoLocation72.children = new MFNode();

GeoLocation72.children[0] = Shape74;

browser.currentScene.children[24] = GeoLocation72;

let GeoLocation75 = browser.currentScene.createNode("GeoLocation");
GeoLocation75.geoCoords = new SFVec3d(new double[8167789,258117,2.5]);
GeoLocation75.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin76 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin76.USE = "ORIGIN";
GeoLocation75.geoOrigin = GeoOrigin76;

let Shape77 = browser.currentScene.createNode("Shape");
Shape77.USE = "COLUMN";
GeoLocation75.children = new MFNode();

GeoLocation75.children[0] = Shape77;

browser.currentScene.children[25] = GeoLocation75;

let GeoLocation78 = browser.currentScene.createNode("GeoLocation");
GeoLocation78.geoCoords = new SFVec3d(new double[8167769,258119,2.5]);
GeoLocation78.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin79 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin79.USE = "ORIGIN";
GeoLocation78.geoOrigin = GeoOrigin79;

let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "COLUMN";
GeoLocation78.children = new MFNode();

GeoLocation78.children[0] = Shape80;

browser.currentScene.children[26] = GeoLocation78;

let GeoLocation81 = browser.currentScene.createNode("GeoLocation");
GeoLocation81.geoCoords = new SFVec3d(new double[8167771,258119,2.5]);
GeoLocation81.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin82 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin82.USE = "ORIGIN";
GeoLocation81.geoOrigin = GeoOrigin82;

let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "COLUMN";
GeoLocation81.children = new MFNode();

GeoLocation81.children[0] = Shape83;

browser.currentScene.children[27] = GeoLocation81;

let GeoLocation84 = browser.currentScene.createNode("GeoLocation");
GeoLocation84.geoCoords = new SFVec3d(new double[8167787,258119,2.5]);
GeoLocation84.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin85 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin85.USE = "ORIGIN";
GeoLocation84.geoOrigin = GeoOrigin85;

let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "COLUMN";
GeoLocation84.children = new MFNode();

GeoLocation84.children[0] = Shape86;

browser.currentScene.children[28] = GeoLocation84;

let GeoLocation87 = browser.currentScene.createNode("GeoLocation");
GeoLocation87.geoCoords = new SFVec3d(new double[8167789,258119,2.5]);
GeoLocation87.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin88 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin88.USE = "ORIGIN";
GeoLocation87.geoOrigin = GeoOrigin88;

let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "COLUMN";
GeoLocation87.children = new MFNode();

GeoLocation87.children[0] = Shape89;

browser.currentScene.children[29] = GeoLocation87;

let GeoLocation90 = browser.currentScene.createNode("GeoLocation");
GeoLocation90.geoCoords = new SFVec3d(new double[8167769,258121,2.5]);
GeoLocation90.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin91 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin91.USE = "ORIGIN";
GeoLocation90.geoOrigin = GeoOrigin91;

let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "COLUMN";
GeoLocation90.children = new MFNode();

GeoLocation90.children[0] = Shape92;

browser.currentScene.children[30] = GeoLocation90;

let GeoLocation93 = browser.currentScene.createNode("GeoLocation");
GeoLocation93.geoCoords = new SFVec3d(new double[8167771,258121,2.5]);
GeoLocation93.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin94 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin94.USE = "ORIGIN";
GeoLocation93.geoOrigin = GeoOrigin94;

let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "COLUMN";
GeoLocation93.children = new MFNode();

GeoLocation93.children[0] = Shape95;

browser.currentScene.children[31] = GeoLocation93;

let GeoLocation96 = browser.currentScene.createNode("GeoLocation");
GeoLocation96.geoCoords = new SFVec3d(new double[8167787,258121,2.5]);
GeoLocation96.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin97 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin97.USE = "ORIGIN";
GeoLocation96.geoOrigin = GeoOrigin97;

let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "COLUMN";
GeoLocation96.children = new MFNode();

GeoLocation96.children[0] = Shape98;

browser.currentScene.children[32] = GeoLocation96;

let GeoLocation99 = browser.currentScene.createNode("GeoLocation");
GeoLocation99.geoCoords = new SFVec3d(new double[8167789,258121,2.5]);
GeoLocation99.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin100 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin100.USE = "ORIGIN";
GeoLocation99.geoOrigin = GeoOrigin100;

let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "COLUMN";
GeoLocation99.children = new MFNode();

GeoLocation99.children[0] = Shape101;

browser.currentScene.children[33] = GeoLocation99;

let GeoLocation102 = browser.currentScene.createNode("GeoLocation");
GeoLocation102.geoCoords = new SFVec3d(new double[8167769,258123,2.5]);
GeoLocation102.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin103 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin103.USE = "ORIGIN";
GeoLocation102.geoOrigin = GeoOrigin103;

let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "COLUMN";
GeoLocation102.children = new MFNode();

GeoLocation102.children[0] = Shape104;

browser.currentScene.children[34] = GeoLocation102;

let GeoLocation105 = browser.currentScene.createNode("GeoLocation");
GeoLocation105.geoCoords = new SFVec3d(new double[8167771,258123,2.5]);
GeoLocation105.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin106 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin106.USE = "ORIGIN";
GeoLocation105.geoOrigin = GeoOrigin106;

let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "COLUMN";
GeoLocation105.children = new MFNode();

GeoLocation105.children[0] = Shape107;

browser.currentScene.children[35] = GeoLocation105;

let GeoLocation108 = browser.currentScene.createNode("GeoLocation");
GeoLocation108.geoCoords = new SFVec3d(new double[8167787,258123,2.5]);
GeoLocation108.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin109 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin109.USE = "ORIGIN";
GeoLocation108.geoOrigin = GeoOrigin109;

let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "COLUMN";
GeoLocation108.children = new MFNode();

GeoLocation108.children[0] = Shape110;

browser.currentScene.children[36] = GeoLocation108;

let GeoLocation111 = browser.currentScene.createNode("GeoLocation");
GeoLocation111.geoCoords = new SFVec3d(new double[8167789,258123,2.5]);
GeoLocation111.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin112 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin112.USE = "ORIGIN";
GeoLocation111.geoOrigin = GeoOrigin112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "COLUMN";
GeoLocation111.children = new MFNode();

GeoLocation111.children[0] = Shape113;

browser.currentScene.children[37] = GeoLocation111;

let GeoLocation114 = browser.currentScene.createNode("GeoLocation");
GeoLocation114.geoCoords = new SFVec3d(new double[8167769,258125,2.5]);
GeoLocation114.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin115 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin115.USE = "ORIGIN";
GeoLocation114.geoOrigin = GeoOrigin115;

let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "COLUMN";
GeoLocation114.children = new MFNode();

GeoLocation114.children[0] = Shape116;

browser.currentScene.children[38] = GeoLocation114;

let GeoLocation117 = browser.currentScene.createNode("GeoLocation");
GeoLocation117.geoCoords = new SFVec3d(new double[8167771,258125,2.5]);
GeoLocation117.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin118 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin118.USE = "ORIGIN";
GeoLocation117.geoOrigin = GeoOrigin118;

let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "COLUMN";
GeoLocation117.children = new MFNode();

GeoLocation117.children[0] = Shape119;

browser.currentScene.children[39] = GeoLocation117;

let GeoLocation120 = browser.currentScene.createNode("GeoLocation");
GeoLocation120.geoCoords = new SFVec3d(new double[8167787,258125,2.5]);
GeoLocation120.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin121 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin121.USE = "ORIGIN";
GeoLocation120.geoOrigin = GeoOrigin121;

let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "COLUMN";
GeoLocation120.children = new MFNode();

GeoLocation120.children[0] = Shape122;

browser.currentScene.children[40] = GeoLocation120;

let GeoLocation123 = browser.currentScene.createNode("GeoLocation");
GeoLocation123.geoCoords = new SFVec3d(new double[8167789,258125,2.5]);
GeoLocation123.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin124 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin124.USE = "ORIGIN";
GeoLocation123.geoOrigin = GeoOrigin124;

let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "COLUMN";
GeoLocation123.children = new MFNode();

GeoLocation123.children[0] = Shape125;

browser.currentScene.children[41] = GeoLocation123;

let GeoLocation126 = browser.currentScene.createNode("GeoLocation");
GeoLocation126.geoCoords = new SFVec3d(new double[8167769,258127,2.5]);
GeoLocation126.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin127 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin127.USE = "ORIGIN";
GeoLocation126.geoOrigin = GeoOrigin127;

let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "COLUMN";
GeoLocation126.children = new MFNode();

GeoLocation126.children[0] = Shape128;

browser.currentScene.children[42] = GeoLocation126;

let GeoLocation129 = browser.currentScene.createNode("GeoLocation");
GeoLocation129.geoCoords = new SFVec3d(new double[8167771,258127,2.5]);
GeoLocation129.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin130 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin130.USE = "ORIGIN";
GeoLocation129.geoOrigin = GeoOrigin130;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "COLUMN";
GeoLocation129.children = new MFNode();

GeoLocation129.children[0] = Shape131;

browser.currentScene.children[43] = GeoLocation129;

let GeoLocation132 = browser.currentScene.createNode("GeoLocation");
GeoLocation132.geoCoords = new SFVec3d(new double[8167787,258127,2.5]);
GeoLocation132.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin133 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin133.USE = "ORIGIN";
GeoLocation132.geoOrigin = GeoOrigin133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "COLUMN";
GeoLocation132.children = new MFNode();

GeoLocation132.children[0] = Shape134;

browser.currentScene.children[44] = GeoLocation132;

let GeoLocation135 = browser.currentScene.createNode("GeoLocation");
GeoLocation135.geoCoords = new SFVec3d(new double[8167789,258127,2.5]);
GeoLocation135.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin136 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin136.USE = "ORIGIN";
GeoLocation135.geoOrigin = GeoOrigin136;

let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "COLUMN";
GeoLocation135.children = new MFNode();

GeoLocation135.children[0] = Shape137;

browser.currentScene.children[45] = GeoLocation135;

let GeoLocation138 = browser.currentScene.createNode("GeoLocation");
GeoLocation138.geoCoords = new SFVec3d(new double[8167769,258129,2.5]);
GeoLocation138.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin139 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin139.USE = "ORIGIN";
GeoLocation138.geoOrigin = GeoOrigin139;

let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "COLUMN";
GeoLocation138.children = new MFNode();

GeoLocation138.children[0] = Shape140;

browser.currentScene.children[46] = GeoLocation138;

let GeoLocation141 = browser.currentScene.createNode("GeoLocation");
GeoLocation141.geoCoords = new SFVec3d(new double[8167771,258129,2.5]);
GeoLocation141.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin142 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin142.USE = "ORIGIN";
GeoLocation141.geoOrigin = GeoOrigin142;

let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "COLUMN";
GeoLocation141.children = new MFNode();

GeoLocation141.children[0] = Shape143;

browser.currentScene.children[47] = GeoLocation141;

let GeoLocation144 = browser.currentScene.createNode("GeoLocation");
GeoLocation144.geoCoords = new SFVec3d(new double[8167787,258129,2.5]);
GeoLocation144.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin145 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin145.USE = "ORIGIN";
GeoLocation144.geoOrigin = GeoOrigin145;

let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "COLUMN";
GeoLocation144.children = new MFNode();

GeoLocation144.children[0] = Shape146;

browser.currentScene.children[48] = GeoLocation144;

let GeoLocation147 = browser.currentScene.createNode("GeoLocation");
GeoLocation147.geoCoords = new SFVec3d(new double[8167789,258129,2.5]);
GeoLocation147.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin148 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin148.USE = "ORIGIN";
GeoLocation147.geoOrigin = GeoOrigin148;

let Shape149 = browser.currentScene.createNode("Shape");
Shape149.USE = "COLUMN";
GeoLocation147.children = new MFNode();

GeoLocation147.children[0] = Shape149;

browser.currentScene.children[49] = GeoLocation147;

let GeoLocation150 = browser.currentScene.createNode("GeoLocation");
GeoLocation150.geoCoords = new SFVec3d(new double[8167769,258131,2.5]);
GeoLocation150.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin151 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin151.USE = "ORIGIN";
GeoLocation150.geoOrigin = GeoOrigin151;

let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "COLUMN";
GeoLocation150.children = new MFNode();

GeoLocation150.children[0] = Shape152;

browser.currentScene.children[50] = GeoLocation150;

let GeoLocation153 = browser.currentScene.createNode("GeoLocation");
GeoLocation153.geoCoords = new SFVec3d(new double[8167771,258131,2.5]);
GeoLocation153.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin154 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin154.USE = "ORIGIN";
GeoLocation153.geoOrigin = GeoOrigin154;

let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "COLUMN";
GeoLocation153.children = new MFNode();

GeoLocation153.children[0] = Shape155;

browser.currentScene.children[51] = GeoLocation153;

let GeoLocation156 = browser.currentScene.createNode("GeoLocation");
GeoLocation156.geoCoords = new SFVec3d(new double[8167787,258131,2.5]);
GeoLocation156.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin157 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin157.USE = "ORIGIN";
GeoLocation156.geoOrigin = GeoOrigin157;

let Shape158 = browser.currentScene.createNode("Shape");
Shape158.USE = "COLUMN";
GeoLocation156.children = new MFNode();

GeoLocation156.children[0] = Shape158;

browser.currentScene.children[52] = GeoLocation156;

let GeoLocation159 = browser.currentScene.createNode("GeoLocation");
GeoLocation159.geoCoords = new SFVec3d(new double[8167789,258131,2.5]);
GeoLocation159.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin160 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin160.USE = "ORIGIN";
GeoLocation159.geoOrigin = GeoOrigin160;

let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "COLUMN";
GeoLocation159.children = new MFNode();

GeoLocation159.children[0] = Shape161;

browser.currentScene.children[53] = GeoLocation159;

let GeoLocation162 = browser.currentScene.createNode("GeoLocation");
GeoLocation162.geoCoords = new SFVec3d(new double[8167769,258133,2.5]);
GeoLocation162.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin163 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin163.USE = "ORIGIN";
GeoLocation162.geoOrigin = GeoOrigin163;

let Shape164 = browser.currentScene.createNode("Shape");
Shape164.USE = "COLUMN";
GeoLocation162.children = new MFNode();

GeoLocation162.children[0] = Shape164;

browser.currentScene.children[54] = GeoLocation162;

let GeoLocation165 = browser.currentScene.createNode("GeoLocation");
GeoLocation165.geoCoords = new SFVec3d(new double[8167771,258133,2.5]);
GeoLocation165.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin166 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin166.USE = "ORIGIN";
GeoLocation165.geoOrigin = GeoOrigin166;

let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "COLUMN";
GeoLocation165.children = new MFNode();

GeoLocation165.children[0] = Shape167;

browser.currentScene.children[55] = GeoLocation165;

let GeoLocation168 = browser.currentScene.createNode("GeoLocation");
GeoLocation168.geoCoords = new SFVec3d(new double[8167773,258133,2.5]);
GeoLocation168.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin169 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin169.USE = "ORIGIN";
GeoLocation168.geoOrigin = GeoOrigin169;

let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "COLUMN";
GeoLocation168.children = new MFNode();

GeoLocation168.children[0] = Shape170;

browser.currentScene.children[56] = GeoLocation168;

let GeoLocation171 = browser.currentScene.createNode("GeoLocation");
GeoLocation171.geoCoords = new SFVec3d(new double[8167775,258133,2.5]);
GeoLocation171.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin172 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin172.USE = "ORIGIN";
GeoLocation171.geoOrigin = GeoOrigin172;

let Shape173 = browser.currentScene.createNode("Shape");
Shape173.USE = "COLUMN";
GeoLocation171.children = new MFNode();

GeoLocation171.children[0] = Shape173;

browser.currentScene.children[57] = GeoLocation171;

let GeoLocation174 = browser.currentScene.createNode("GeoLocation");
GeoLocation174.geoCoords = new SFVec3d(new double[8167777,258133,2.5]);
GeoLocation174.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin175 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin175.USE = "ORIGIN";
GeoLocation174.geoOrigin = GeoOrigin175;

let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "COLUMN";
GeoLocation174.children = new MFNode();

GeoLocation174.children[0] = Shape176;

browser.currentScene.children[58] = GeoLocation174;

let GeoLocation177 = browser.currentScene.createNode("GeoLocation");
GeoLocation177.geoCoords = new SFVec3d(new double[8167779,258133,2.5]);
GeoLocation177.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin178 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin178.USE = "ORIGIN";
GeoLocation177.geoOrigin = GeoOrigin178;

let Shape179 = browser.currentScene.createNode("Shape");
Shape179.USE = "COLUMN";
GeoLocation177.children = new MFNode();

GeoLocation177.children[0] = Shape179;

browser.currentScene.children[59] = GeoLocation177;

let GeoLocation180 = browser.currentScene.createNode("GeoLocation");
GeoLocation180.geoCoords = new SFVec3d(new double[8167781,258133,2.5]);
GeoLocation180.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin181 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin181.USE = "ORIGIN";
GeoLocation180.geoOrigin = GeoOrigin181;

let Shape182 = browser.currentScene.createNode("Shape");
Shape182.USE = "COLUMN";
GeoLocation180.children = new MFNode();

GeoLocation180.children[0] = Shape182;

browser.currentScene.children[60] = GeoLocation180;

let GeoLocation183 = browser.currentScene.createNode("GeoLocation");
GeoLocation183.geoCoords = new SFVec3d(new double[8167783,258133,2.5]);
GeoLocation183.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin184 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin184.USE = "ORIGIN";
GeoLocation183.geoOrigin = GeoOrigin184;

let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "COLUMN";
GeoLocation183.children = new MFNode();

GeoLocation183.children[0] = Shape185;

browser.currentScene.children[61] = GeoLocation183;

let GeoLocation186 = browser.currentScene.createNode("GeoLocation");
GeoLocation186.geoCoords = new SFVec3d(new double[8167785,258133,2.5]);
GeoLocation186.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin187 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin187.USE = "ORIGIN";
GeoLocation186.geoOrigin = GeoOrigin187;

let Shape188 = browser.currentScene.createNode("Shape");
Shape188.USE = "COLUMN";
GeoLocation186.children = new MFNode();

GeoLocation186.children[0] = Shape188;

browser.currentScene.children[62] = GeoLocation186;

let GeoLocation189 = browser.currentScene.createNode("GeoLocation");
GeoLocation189.geoCoords = new SFVec3d(new double[8167787,258133,2.5]);
GeoLocation189.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin190 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin190.USE = "ORIGIN";
GeoLocation189.geoOrigin = GeoOrigin190;

let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "COLUMN";
GeoLocation189.children = new MFNode();

GeoLocation189.children[0] = Shape191;

browser.currentScene.children[63] = GeoLocation189;

let GeoLocation192 = browser.currentScene.createNode("GeoLocation");
GeoLocation192.geoCoords = new SFVec3d(new double[8167789,258133,2.5]);
GeoLocation192.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin193 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin193.USE = "ORIGIN";
GeoLocation192.geoOrigin = GeoOrigin193;

let Shape194 = browser.currentScene.createNode("Shape");
Shape194.USE = "COLUMN";
GeoLocation192.children = new MFNode();

GeoLocation192.children[0] = Shape194;

browser.currentScene.children[64] = GeoLocation192;

let GeoLocation195 = browser.currentScene.createNode("GeoLocation");
GeoLocation195.geoCoords = new SFVec3d(new double[8167769,258135,2.5]);
GeoLocation195.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin196 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin196.USE = "ORIGIN";
GeoLocation195.geoOrigin = GeoOrigin196;

let Shape197 = browser.currentScene.createNode("Shape");
Shape197.USE = "COLUMN";
GeoLocation195.children = new MFNode();

GeoLocation195.children[0] = Shape197;

browser.currentScene.children[65] = GeoLocation195;

let GeoLocation198 = browser.currentScene.createNode("GeoLocation");
GeoLocation198.geoCoords = new SFVec3d(new double[8167771,258135,2.5]);
GeoLocation198.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin199 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin199.USE = "ORIGIN";
GeoLocation198.geoOrigin = GeoOrigin199;

let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "COLUMN";
GeoLocation198.children = new MFNode();

GeoLocation198.children[0] = Shape200;

browser.currentScene.children[66] = GeoLocation198;

let GeoLocation201 = browser.currentScene.createNode("GeoLocation");
GeoLocation201.geoCoords = new SFVec3d(new double[8167773,258135,2.5]);
GeoLocation201.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin202 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin202.USE = "ORIGIN";
GeoLocation201.geoOrigin = GeoOrigin202;

let Shape203 = browser.currentScene.createNode("Shape");
Shape203.USE = "COLUMN";
GeoLocation201.children = new MFNode();

GeoLocation201.children[0] = Shape203;

browser.currentScene.children[67] = GeoLocation201;

let GeoLocation204 = browser.currentScene.createNode("GeoLocation");
GeoLocation204.geoCoords = new SFVec3d(new double[8167775,258135,2.5]);
GeoLocation204.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin205 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin205.USE = "ORIGIN";
GeoLocation204.geoOrigin = GeoOrigin205;

let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "COLUMN";
GeoLocation204.children = new MFNode();

GeoLocation204.children[0] = Shape206;

browser.currentScene.children[68] = GeoLocation204;

let GeoLocation207 = browser.currentScene.createNode("GeoLocation");
GeoLocation207.geoCoords = new SFVec3d(new double[8167777,258135,2.5]);
GeoLocation207.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin208 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin208.USE = "ORIGIN";
GeoLocation207.geoOrigin = GeoOrigin208;

let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "COLUMN";
GeoLocation207.children = new MFNode();

GeoLocation207.children[0] = Shape209;

browser.currentScene.children[69] = GeoLocation207;

let GeoLocation210 = browser.currentScene.createNode("GeoLocation");
GeoLocation210.geoCoords = new SFVec3d(new double[8167779,258135,2.5]);
GeoLocation210.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin211 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin211.USE = "ORIGIN";
GeoLocation210.geoOrigin = GeoOrigin211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "COLUMN";
GeoLocation210.children = new MFNode();

GeoLocation210.children[0] = Shape212;

browser.currentScene.children[70] = GeoLocation210;

let GeoLocation213 = browser.currentScene.createNode("GeoLocation");
GeoLocation213.geoCoords = new SFVec3d(new double[8167781,258135,2.5]);
GeoLocation213.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin214 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin214.USE = "ORIGIN";
GeoLocation213.geoOrigin = GeoOrigin214;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.USE = "COLUMN";
GeoLocation213.children = new MFNode();

GeoLocation213.children[0] = Shape215;

browser.currentScene.children[71] = GeoLocation213;

let GeoLocation216 = browser.currentScene.createNode("GeoLocation");
GeoLocation216.geoCoords = new SFVec3d(new double[8167783,258135,2.5]);
GeoLocation216.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin217 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin217.USE = "ORIGIN";
GeoLocation216.geoOrigin = GeoOrigin217;

let Shape218 = browser.currentScene.createNode("Shape");
Shape218.USE = "COLUMN";
GeoLocation216.children = new MFNode();

GeoLocation216.children[0] = Shape218;

browser.currentScene.children[72] = GeoLocation216;

let GeoLocation219 = browser.currentScene.createNode("GeoLocation");
GeoLocation219.geoCoords = new SFVec3d(new double[8167785,258135,2.5]);
GeoLocation219.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin220 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin220.USE = "ORIGIN";
GeoLocation219.geoOrigin = GeoOrigin220;

let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "COLUMN";
GeoLocation219.children = new MFNode();

GeoLocation219.children[0] = Shape221;

browser.currentScene.children[73] = GeoLocation219;

let GeoLocation222 = browser.currentScene.createNode("GeoLocation");
GeoLocation222.geoCoords = new SFVec3d(new double[8167787,258135,2.5]);
GeoLocation222.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin223 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin223.USE = "ORIGIN";
GeoLocation222.geoOrigin = GeoOrigin223;

let Shape224 = browser.currentScene.createNode("Shape");
Shape224.USE = "COLUMN";
GeoLocation222.children = new MFNode();

GeoLocation222.children[0] = Shape224;

browser.currentScene.children[74] = GeoLocation222;

let GeoLocation225 = browser.currentScene.createNode("GeoLocation");
GeoLocation225.geoCoords = new SFVec3d(new double[8167789,258135,2.5]);
GeoLocation225.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin226 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin226.USE = "ORIGIN";
GeoLocation225.geoOrigin = GeoOrigin226;

let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "COLUMN";
GeoLocation225.children = new MFNode();

GeoLocation225.children[0] = Shape227;

browser.currentScene.children[75] = GeoLocation225;

let GeoLocation228 = browser.currentScene.createNode("GeoLocation");
GeoLocation228.geoCoords = new SFVec3d(new double[8167779,258125,-0.5]);
GeoLocation228.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin229 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin229.USE = "ORIGIN";
GeoLocation228.geoOrigin = GeoOrigin229;

let Transform230 = browser.currentScene.createNode("Transform");
Transform230.rotation = new SFRotation(new float[0,1,0,0.13]);
let Shape231 = browser.currentScene.createNode("Shape");
let Appearance232 = browser.currentScene.createNode("Appearance");
let ImageTexture233 = browser.currentScene.createNode("ImageTexture");
ImageTexture233.DEF = "stone5";
ImageTexture233.url = new MFString(new java.lang.String["images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"]);
Appearance232.texture = ImageTexture233;

let Material234 = browser.currentScene.createNode("Material");
Material234.diffuseColor = new SFColor(new float[1,1,1]);
Appearance232.material = Material234;

Shape231.appearance = Appearance232;

let Box235 = browser.currentScene.createNode("Box");
Box235.size = new SFVec3f(new float[22,1,22]);
Shape231.geometry = Box235;

Transform230.children = new MFNode();

Transform230.children[0] = Shape231;

GeoLocation228.children = new MFNode();

GeoLocation228.children[0] = Transform230;

browser.currentScene.children[76] = GeoLocation228;

let GeoLocation236 = browser.currentScene.createNode("GeoLocation");
GeoLocation236.geoCoords = new SFVec3d(new double[8167779,258125,-1.5]);
GeoLocation236.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin237 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin237.USE = "ORIGIN";
GeoLocation236.geoOrigin = GeoOrigin237;

let Transform238 = browser.currentScene.createNode("Transform");
Transform238.rotation = new SFRotation(new float[0,1,0,0.13]);
let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
let ImageTexture241 = browser.currentScene.createNode("ImageTexture");
ImageTexture241.USE = "stone5";
Appearance240.texture = ImageTexture241;

let Material242 = browser.currentScene.createNode("Material");
Material242.diffuseColor = new SFColor(new float[1,1,1]);
Appearance240.material = Material242;

Shape239.appearance = Appearance240;

let Box243 = browser.currentScene.createNode("Box");
Box243.size = new SFVec3f(new float[24,1,24]);
Shape239.geometry = Box243;

Transform238.children = new MFNode();

Transform238.children[0] = Shape239;

GeoLocation236.children = new MFNode();

GeoLocation236.children[0] = Transform238;

browser.currentScene.children[77] = GeoLocation236;

let GeoLocation244 = browser.currentScene.createNode("GeoLocation");
GeoLocation244.geoCoords = new SFVec3d(new double[8167779,258125,-2.5]);
GeoLocation244.geoSystem = new MFString(new java.lang.String["UTM","Z11"]);
let GeoOrigin245 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin245.USE = "ORIGIN";
GeoLocation244.geoOrigin = GeoOrigin245;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.rotation = new SFRotation(new float[0,1,0,0.13]);
let Shape247 = browser.currentScene.createNode("Shape");
let Appearance248 = browser.currentScene.createNode("Appearance");
let ImageTexture249 = browser.currentScene.createNode("ImageTexture");
ImageTexture249.USE = "stone5";
Appearance248.texture = ImageTexture249;

let Material250 = browser.currentScene.createNode("Material");
Material250.diffuseColor = new SFColor(new float[1,1,1]);
Appearance248.material = Material250;

Shape247.appearance = Appearance248;

let Box251 = browser.currentScene.createNode("Box");
Box251.size = new SFVec3f(new float[26,1,26]);
Shape247.geometry = Box251;

Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

GeoLocation244.children = new MFNode();

GeoLocation244.children[0] = Transform246;

browser.currentScene.children[78] = GeoLocation244;

