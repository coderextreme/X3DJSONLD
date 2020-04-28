let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let GeoViewpoint3 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint3.DEF = "martins_office";
GeoViewpoint3.description = "Martin's Office +1000m";
GeoViewpoint3.orientation = new SFRotation(new float[1,0,0,-1.5707964]);
GeoViewpoint3.position = new SFVec3d(new double[37.45657629289387,-122.1772098019601,1000]);
let GeoOrigin4 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin4.DEF = "LVCS-ORIGIN";
GeoOrigin4.geoCoords = new SFVec3d(new double[37.45657629289387,-122.1772098019601,10]);
GeoViewpoint3.geoOrigin = GeoOrigin4;

browser.currentScene.children[1] = GeoViewpoint3;

let Group5 = browser.currentScene.createNode("Group");
let NavigationInfo6 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo6.speed = 100;
Group5.children = new MFNode();

Group5.children[0] = NavigationInfo6;

let GeoLocation7 = browser.currentScene.createNode("GeoLocation");
GeoLocation7.geoCoords = new SFVec3d(new double[37.4572702942313,-122.17285272090446,13.575352419167757]);
let GeoOrigin8 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin8.USE = "LVCS-ORIGIN";
GeoLocation7.geoOrigin = GeoOrigin8;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.rotation = new SFRotation(new float[1,0,0,0]);
let Transform10 = browser.currentScene.createNode("Transform");
Transform10.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform11 = browser.currentScene.createNode("Transform");
let Inline12 = browser.currentScene.createNode("Inline");
Inline12.url = new MFString(new java.lang.String["SriCampus000.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus000.x3d","SriCampus000.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus000.x3d"]);
Transform11.children = new MFNode();

Transform11.children[0] = Inline12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

GeoLocation7.children = new MFNode();

GeoLocation7.children[0] = Transform9;

Group5.children[1] = GeoLocation7;

let GeoLocation13 = browser.currentScene.createNode("GeoLocation");
GeoLocation13.geoCoords = new SFVec3d(new double[37.45855087547784,-122.17299719228961,6.5414795177057385]);
let GeoOrigin14 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin14.USE = "LVCS-ORIGIN";
GeoLocation13.geoOrigin = GeoOrigin14;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.rotation = new SFRotation(new float[1,0,0,0]);
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.rotation = new SFRotation(new float[0,1,0,0.33597755]);
let Transform17 = browser.currentScene.createNode("Transform");
let Inline18 = browser.currentScene.createNode("Inline");
Inline18.url = new MFString(new java.lang.String["SriCampus001.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus001.x3d","SriCampus001.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus001.x3d"]);
Transform17.children = new MFNode();

Transform17.children[0] = Inline18;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

Transform15.children = new MFNode();

Transform15.children[0] = Transform16;

GeoLocation13.children = new MFNode();

GeoLocation13.children[0] = Transform15;

Group5.children[2] = GeoLocation13;

let GeoLocation19 = browser.currentScene.createNode("GeoLocation");
GeoLocation19.geoCoords = new SFVec3d(new double[37.455090143380325,-122.17577908304841,6.858270224183798]);
let GeoOrigin20 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin20.USE = "LVCS-ORIGIN";
GeoLocation19.geoOrigin = GeoOrigin20;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.rotation = new SFRotation(new float[1,0,0,0]);
let Transform22 = browser.currentScene.createNode("Transform");
let Transform23 = browser.currentScene.createNode("Transform");
let Inline24 = browser.currentScene.createNode("Inline");
Inline24.url = new MFString(new java.lang.String["SriCampus002.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d","SriCampus002.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d"]);
Transform23.children = new MFNode();

Transform23.children[0] = Inline24;

Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

Transform21.children = new MFNode();

Transform21.children[0] = Transform22;

GeoLocation19.children = new MFNode();

GeoLocation19.children[0] = Transform21;

Group5.children[3] = GeoLocation19;

let GeoLocation25 = browser.currentScene.createNode("GeoLocation");
GeoLocation25.geoCoords = new SFVec3d(new double[37.45587247434353,-122.17549681473791,5.48073857370764]);
let GeoOrigin26 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin26.USE = "LVCS-ORIGIN";
GeoLocation25.geoOrigin = GeoOrigin26;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.rotation = new SFRotation(new float[1,0,0,0]);
let Transform28 = browser.currentScene.createNode("Transform");
Transform28.rotation = new SFRotation(new float[0,1,0,1.060658]);
let Transform29 = browser.currentScene.createNode("Transform");
let Inline30 = browser.currentScene.createNode("Inline");
Inline30.url = new MFString(new java.lang.String["SriCampus003.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus003.x3d","SriCampus003.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus003.x3d"]);
Transform29.children = new MFNode();

Transform29.children[0] = Inline30;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform27.children = new MFNode();

Transform27.children[0] = Transform28;

GeoLocation25.children = new MFNode();

GeoLocation25.children[0] = Transform27;

Group5.children[4] = GeoLocation25;

let GeoLocation31 = browser.currentScene.createNode("GeoLocation");
GeoLocation31.geoCoords = new SFVec3d(new double[37.45696959896483,-122.17349356475091,2.5236815866082907]);
let GeoOrigin32 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin32.USE = "LVCS-ORIGIN";
GeoLocation31.geoOrigin = GeoOrigin32;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.rotation = new SFRotation(new float[1,0,0,0]);
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.rotation = new SFRotation(new float[0,1,0,-0.56828195]);
let Transform35 = browser.currentScene.createNode("Transform");
let Inline36 = browser.currentScene.createNode("Inline");
Inline36.url = new MFString(new java.lang.String["SriCampus004.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus004.x3d","SriCampus004.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus004.x3d"]);
Transform35.children = new MFNode();

Transform35.children[0] = Inline36;

Transform34.children = new MFNode();

Transform34.children[0] = Transform35;

Transform33.children = new MFNode();

Transform33.children[0] = Transform34;

GeoLocation31.children = new MFNode();

GeoLocation31.children[0] = Transform33;

Group5.children[5] = GeoLocation31;

let GeoLocation37 = browser.currentScene.createNode("GeoLocation");
GeoLocation37.geoCoords = new SFVec3d(new double[37.45752986169077,-122.17255239265334,3.0489128064364195]);
let GeoOrigin38 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin38.USE = "LVCS-ORIGIN";
GeoLocation37.geoOrigin = GeoOrigin38;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.rotation = new SFRotation(new float[1,0,0,0]);
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.rotation = new SFRotation(new float[0,1,0,-0.55716646]);
let Transform41 = browser.currentScene.createNode("Transform");
let Inline42 = browser.currentScene.createNode("Inline");
Inline42.url = new MFString(new java.lang.String["SriCampus005.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus005.x3d","SriCampus005.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus005.x3d"]);
Transform41.children = new MFNode();

Transform41.children[0] = Inline42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

Transform39.children = new MFNode();

Transform39.children[0] = Transform40;

GeoLocation37.children = new MFNode();

GeoLocation37.children[0] = Transform39;

Group5.children[6] = GeoLocation37;

let GeoLocation43 = browser.currentScene.createNode("GeoLocation");
GeoLocation43.geoCoords = new SFVec3d(new double[37.45508901792349,-122.1744509895613,5.380065024830401]);
let GeoOrigin44 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin44.USE = "LVCS-ORIGIN";
GeoLocation43.geoOrigin = GeoOrigin44;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.rotation = new SFRotation(new float[1,0,0,0]);
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform47 = browser.currentScene.createNode("Transform");
let Inline48 = browser.currentScene.createNode("Inline");
Inline48.url = new MFString(new java.lang.String["SriCampus006.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus006.x3d","SriCampus006.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus005.x3d"]);
Transform47.children = new MFNode();

Transform47.children[0] = Inline48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

GeoLocation43.children = new MFNode();

GeoLocation43.children[0] = Transform45;

Group5.children[7] = GeoLocation43;

let GeoLocation49 = browser.currentScene.createNode("GeoLocation");
GeoLocation49.geoCoords = new SFVec3d(new double[37.45636316454118,-122.17448723463019,2.573365761898458]);
let GeoOrigin50 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin50.USE = "LVCS-ORIGIN";
GeoLocation49.geoOrigin = GeoOrigin50;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.rotation = new SFRotation(new float[1,0,0,0]);
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.rotation = new SFRotation(new float[0,1,0,-0.54725033]);
let Transform53 = browser.currentScene.createNode("Transform");
let Inline54 = browser.currentScene.createNode("Inline");
Inline54.url = new MFString(new java.lang.String["SriCampus007.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus007.x3d","SriCampus007.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus007.x3d"]);
Transform53.children = new MFNode();

Transform53.children[0] = Inline54;

Transform52.children = new MFNode();

Transform52.children[0] = Transform53;

Transform51.children = new MFNode();

Transform51.children[0] = Transform52;

GeoLocation49.children = new MFNode();

GeoLocation49.children[0] = Transform51;

Group5.children[8] = GeoLocation49;

let GeoLocation55 = browser.currentScene.createNode("GeoLocation");
GeoLocation55.geoCoords = new SFVec3d(new double[37.45502643073463,-122.17742528313674,3.3866771683096886]);
let GeoOrigin56 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin56.USE = "LVCS-ORIGIN";
GeoLocation55.geoOrigin = GeoOrigin56;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.rotation = new SFRotation(new float[1,0,0,0]);
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform59 = browser.currentScene.createNode("Transform");
let Inline60 = browser.currentScene.createNode("Inline");
Inline60.url = new MFString(new java.lang.String["SriCampus008.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus008.x3d","SriCampus008.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus008.x3d"]);
Transform59.children = new MFNode();

Transform59.children[0] = Inline60;

Transform58.children = new MFNode();

Transform58.children[0] = Transform59;

Transform57.children = new MFNode();

Transform57.children[0] = Transform58;

GeoLocation55.children = new MFNode();

GeoLocation55.children[0] = Transform57;

Group5.children[9] = GeoLocation55;

let GeoLocation61 = browser.currentScene.createNode("GeoLocation");
GeoLocation61.geoCoords = new SFVec3d(new double[37.45588879799328,-122.17524623801918,4.98465908691287]);
let GeoOrigin62 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin62.USE = "LVCS-ORIGIN";
GeoLocation61.geoOrigin = GeoOrigin62;

let Transform63 = browser.currentScene.createNode("Transform");
Transform63.rotation = new SFRotation(new float[1,0,0,0]);
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.rotation = new SFRotation(new float[0,1,0,-2.1260338]);
let Transform65 = browser.currentScene.createNode("Transform");
let Inline66 = browser.currentScene.createNode("Inline");
Inline66.url = new MFString(new java.lang.String["SriCampus009.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus009.x3d","SriCampus009.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus009.x3d"]);
Transform65.children = new MFNode();

Transform65.children[0] = Inline66;

Transform64.children = new MFNode();

Transform64.children[0] = Transform65;

Transform63.children = new MFNode();

Transform63.children[0] = Transform64;

GeoLocation61.children = new MFNode();

GeoLocation61.children[0] = Transform63;

Group5.children[10] = GeoLocation61;

let GeoLocation67 = browser.currentScene.createNode("GeoLocation");
GeoLocation67.geoCoords = new SFVec3d(new double[37.456517519745695,-122.17328336441369,2.713802792131901]);
let GeoOrigin68 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin68.USE = "LVCS-ORIGIN";
GeoLocation67.geoOrigin = GeoOrigin68;

let Transform69 = browser.currentScene.createNode("Transform");
Transform69.rotation = new SFRotation(new float[1,0,0,0]);
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.rotation = new SFRotation(new float[0,1,0,-2.1507866]);
let Transform71 = browser.currentScene.createNode("Transform");
let Inline72 = browser.currentScene.createNode("Inline");
Inline72.url = new MFString(new java.lang.String["SriCampus010.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus010.x3d","SriCampus010.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus010.x3d"]);
Transform71.children = new MFNode();

Transform71.children[0] = Inline72;

Transform70.children = new MFNode();

Transform70.children[0] = Transform71;

Transform69.children = new MFNode();

Transform69.children[0] = Transform70;

GeoLocation67.children = new MFNode();

GeoLocation67.children[0] = Transform69;

Group5.children[11] = GeoLocation67;

let GeoLocation73 = browser.currentScene.createNode("GeoLocation");
GeoLocation73.geoCoords = new SFVec3d(new double[37.45600155148939,-122.17599240217977,18.010228152386844]);
let GeoOrigin74 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin74.USE = "LVCS-ORIGIN";
GeoLocation73.geoOrigin = GeoOrigin74;

let Transform75 = browser.currentScene.createNode("Transform");
Transform75.rotation = new SFRotation(new float[1,0,0,0]);
let Transform76 = browser.currentScene.createNode("Transform");
Transform76.rotation = new SFRotation(new float[0,1,0,0.21222101]);
let Transform77 = browser.currentScene.createNode("Transform");
let Inline78 = browser.currentScene.createNode("Inline");
Inline78.url = new MFString(new java.lang.String["SriCampus011.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus011.x3d","SriCampus011.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus011.x3d"]);
Transform77.children = new MFNode();

Transform77.children[0] = Inline78;

Transform76.children = new MFNode();

Transform76.children[0] = Transform77;

Transform75.children = new MFNode();

Transform75.children[0] = Transform76;

GeoLocation73.children = new MFNode();

GeoLocation73.children[0] = Transform75;

Group5.children[12] = GeoLocation73;

let GeoLocation79 = browser.currentScene.createNode("GeoLocation");
GeoLocation79.geoCoords = new SFVec3d(new double[37.45723685203812,-122.17511987604118,15.92335551790893]);
let GeoOrigin80 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin80.USE = "LVCS-ORIGIN";
GeoLocation79.geoOrigin = GeoOrigin80;

let Transform81 = browser.currentScene.createNode("Transform");
Transform81.rotation = new SFRotation(new float[1,0,0,0]);
let Transform82 = browser.currentScene.createNode("Transform");
let Transform83 = browser.currentScene.createNode("Transform");
let Inline84 = browser.currentScene.createNode("Inline");
Inline84.url = new MFString(new java.lang.String["SriCampus012.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus012.x3d","SriCampus012.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus012.x3d"]);
Transform83.children = new MFNode();

Transform83.children[0] = Inline84;

Transform82.children = new MFNode();

Transform82.children[0] = Transform83;

Transform81.children = new MFNode();

Transform81.children[0] = Transform82;

GeoLocation79.children = new MFNode();

GeoLocation79.children[0] = Transform81;

Group5.children[13] = GeoLocation79;

let GeoLocation85 = browser.currentScene.createNode("GeoLocation");
GeoLocation85.geoCoords = new SFVec3d(new double[37.45503421704476,-122.17670563469521,3.221325115300715]);
let GeoOrigin86 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin86.USE = "LVCS-ORIGIN";
GeoLocation85.geoOrigin = GeoOrigin86;

let Transform87 = browser.currentScene.createNode("Transform");
Transform87.rotation = new SFRotation(new float[1,0,0,0]);
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform89 = browser.currentScene.createNode("Transform");
let Inline90 = browser.currentScene.createNode("Inline");
Inline90.url = new MFString(new java.lang.String["SriCampus013.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus013.x3d","SriCampus013.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus013.x3d"]);
Transform89.children = new MFNode();

Transform89.children[0] = Inline90;

Transform88.children = new MFNode();

Transform88.children[0] = Transform89;

Transform87.children = new MFNode();

Transform87.children[0] = Transform88;

GeoLocation85.children = new MFNode();

GeoLocation85.children[0] = Transform87;

Group5.children[14] = GeoLocation85;

let GeoLocation91 = browser.currentScene.createNode("GeoLocation");
GeoLocation91.geoCoords = new SFVec3d(new double[37.45660302303386,-122.17497866580095,4.641824320890009]);
let GeoOrigin92 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin92.USE = "LVCS-ORIGIN";
GeoLocation91.geoOrigin = GeoOrigin92;

let Transform93 = browser.currentScene.createNode("Transform");
Transform93.rotation = new SFRotation(new float[1,0,0,0]);
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform95 = browser.currentScene.createNode("Transform");
let Inline96 = browser.currentScene.createNode("Inline");
Inline96.url = new MFString(new java.lang.String["SriCampus014.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus014.x3d","SriCampus014.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus014.x3d"]);
Transform95.children = new MFNode();

Transform95.children[0] = Inline96;

Transform94.children = new MFNode();

Transform94.children[0] = Transform95;

Transform93.children = new MFNode();

Transform93.children[0] = Transform94;

GeoLocation91.children = new MFNode();

GeoLocation91.children[0] = Transform93;

Group5.children[15] = GeoLocation91;

let GeoLocation97 = browser.currentScene.createNode("GeoLocation");
GeoLocation97.geoCoords = new SFVec3d(new double[37.455662812713115,-122.17815579828473,7.127999701537192]);
let GeoOrigin98 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin98.USE = "LVCS-ORIGIN";
GeoLocation97.geoOrigin = GeoOrigin98;

let Transform99 = browser.currentScene.createNode("Transform");
Transform99.rotation = new SFRotation(new float[1,0,0,0]);
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform101 = browser.currentScene.createNode("Transform");
let Inline102 = browser.currentScene.createNode("Inline");
Inline102.url = new MFString(new java.lang.String["SriCampus015.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus015.x3d","SriCampus015.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus015.x3d"]);
Transform101.children = new MFNode();

Transform101.children[0] = Inline102;

Transform100.children = new MFNode();

Transform100.children[0] = Transform101;

Transform99.children = new MFNode();

Transform99.children[0] = Transform100;

GeoLocation97.children = new MFNode();

GeoLocation97.children[0] = Transform99;

Group5.children[16] = GeoLocation97;

let GeoLocation103 = browser.currentScene.createNode("GeoLocation");
GeoLocation103.geoCoords = new SFVec3d(new double[37.454777118864726,-122.17428652336147,5.93625679705292]);
let GeoOrigin104 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin104.USE = "LVCS-ORIGIN";
GeoLocation103.geoOrigin = GeoOrigin104;

let Transform105 = browser.currentScene.createNode("Transform");
Transform105.rotation = new SFRotation(new float[1,0,0,0]);
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.rotation = new SFRotation(new float[0,1,0,-0.5545655]);
let Transform107 = browser.currentScene.createNode("Transform");
let Inline108 = browser.currentScene.createNode("Inline");
Inline108.url = new MFString(new java.lang.String["SriCampus016.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus016.x3d","SriCampus016.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus016.x3d"]);
Transform107.children = new MFNode();

Transform107.children[0] = Inline108;

Transform106.children = new MFNode();

Transform106.children[0] = Transform107;

Transform105.children = new MFNode();

Transform105.children[0] = Transform106;

GeoLocation103.children = new MFNode();

GeoLocation103.children[0] = Transform105;

Group5.children[17] = GeoLocation103;

let GeoLocation109 = browser.currentScene.createNode("GeoLocation");
GeoLocation109.geoCoords = new SFVec3d(new double[37.4586277365655,-122.173191886012,6.549256028607488]);
let GeoOrigin110 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin110.USE = "LVCS-ORIGIN";
GeoLocation109.geoOrigin = GeoOrigin110;

let Transform111 = browser.currentScene.createNode("Transform");
Transform111.rotation = new SFRotation(new float[1,0,0,0]);
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.rotation = new SFRotation(new float[0,1,0,-1.2557627]);
let Transform113 = browser.currentScene.createNode("Transform");
let Inline114 = browser.currentScene.createNode("Inline");
Inline114.url = new MFString(new java.lang.String["SriCampus017.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus017.x3d","SriCampus017.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus017.x3d"]);
Transform113.children = new MFNode();

Transform113.children[0] = Inline114;

Transform112.children = new MFNode();

Transform112.children[0] = Transform113;

Transform111.children = new MFNode();

Transform111.children[0] = Transform112;

GeoLocation109.children = new MFNode();

GeoLocation109.children[0] = Transform111;

Group5.children[18] = GeoLocation109;

let GeoLocation115 = browser.currentScene.createNode("GeoLocation");
GeoLocation115.geoCoords = new SFVec3d(new double[37.456656900883765,-122.17432461409655,4.092642282135785]);
let GeoOrigin116 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin116.USE = "LVCS-ORIGIN";
GeoLocation115.geoOrigin = GeoOrigin116;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.rotation = new SFRotation(new float[1,0,0,0]);
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform119 = browser.currentScene.createNode("Transform");
let Inline120 = browser.currentScene.createNode("Inline");
Inline120.url = new MFString(new java.lang.String["SriCampus018.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus018.x3d","SriCampus018.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus018.x3d"]);
Transform119.children = new MFNode();

Transform119.children[0] = Inline120;

Transform118.children = new MFNode();

Transform118.children[0] = Transform119;

Transform117.children = new MFNode();

Transform117.children[0] = Transform118;

GeoLocation115.children = new MFNode();

GeoLocation115.children[0] = Transform117;

Group5.children[19] = GeoLocation115;

let GeoLocation121 = browser.currentScene.createNode("GeoLocation");
GeoLocation121.geoCoords = new SFVec3d(new double[37.45589196793829,-122.17661290206827,13.849743553437293]);
let GeoOrigin122 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin122.USE = "LVCS-ORIGIN";
GeoLocation121.geoOrigin = GeoOrigin122;

let Transform123 = browser.currentScene.createNode("Transform");
Transform123.rotation = new SFRotation(new float[1,0,0,0]);
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform125 = browser.currentScene.createNode("Transform");
let Inline126 = browser.currentScene.createNode("Inline");
Inline126.url = new MFString(new java.lang.String["SriCampus019.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus019.x3d","SriCampus019.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus019.x3d"]);
Transform125.children = new MFNode();

Transform125.children[0] = Inline126;

Transform124.children = new MFNode();

Transform124.children[0] = Transform125;

Transform123.children = new MFNode();

Transform123.children[0] = Transform124;

GeoLocation121.children = new MFNode();

GeoLocation121.children[0] = Transform123;

Group5.children[20] = GeoLocation121;

let GeoLocation127 = browser.currentScene.createNode("GeoLocation");
GeoLocation127.geoCoords = new SFVec3d(new double[37.454742097706344,-122.176075551685,9.548194108530879]);
let GeoOrigin128 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin128.USE = "LVCS-ORIGIN";
GeoLocation127.geoOrigin = GeoOrigin128;

let Transform129 = browser.currentScene.createNode("Transform");
Transform129.rotation = new SFRotation(new float[1,0,0,0]);
let Transform130 = browser.currentScene.createNode("Transform");
Transform130.rotation = new SFRotation(new float[0,1,0,-0.5448796]);
let Transform131 = browser.currentScene.createNode("Transform");
let Inline132 = browser.currentScene.createNode("Inline");
Inline132.url = new MFString(new java.lang.String["SriCampus020.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus020.x3d","SriCampus020.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus020.x3d"]);
Transform131.children = new MFNode();

Transform131.children[0] = Inline132;

Transform130.children = new MFNode();

Transform130.children[0] = Transform131;

Transform129.children = new MFNode();

Transform129.children[0] = Transform130;

GeoLocation127.children = new MFNode();

GeoLocation127.children[0] = Transform129;

Group5.children[21] = GeoLocation127;

let GeoLocation133 = browser.currentScene.createNode("GeoLocation");
GeoLocation133.geoCoords = new SFVec3d(new double[37.459343100583965,-122.17577382427473,2.365921502932906]);
let GeoOrigin134 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin134.USE = "LVCS-ORIGIN";
GeoLocation133.geoOrigin = GeoOrigin134;

let Transform135 = browser.currentScene.createNode("Transform");
Transform135.rotation = new SFRotation(new float[1,0,0,0]);
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.rotation = new SFRotation(new float[0,1,0,2.5693567]);
let Transform137 = browser.currentScene.createNode("Transform");
let Inline138 = browser.currentScene.createNode("Inline");
Inline138.url = new MFString(new java.lang.String["SriCampus021.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus021.x3d","SriCampus021.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus021.x3d"]);
Transform137.children = new MFNode();

Transform137.children[0] = Inline138;

Transform136.children = new MFNode();

Transform136.children[0] = Transform137;

Transform135.children = new MFNode();

Transform135.children[0] = Transform136;

GeoLocation133.children = new MFNode();

GeoLocation133.children[0] = Transform135;

Group5.children[22] = GeoLocation133;

let GeoLocation139 = browser.currentScene.createNode("GeoLocation");
GeoLocation139.geoCoords = new SFVec3d(new double[37.45829026053256,-122.17403444710365,5.760875140316784]);
let GeoOrigin140 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin140.USE = "LVCS-ORIGIN";
GeoLocation139.geoOrigin = GeoOrigin140;

let Transform141 = browser.currentScene.createNode("Transform");
Transform141.rotation = new SFRotation(new float[1,0,0,0]);
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.rotation = new SFRotation(new float[0,1,0,1.0156201]);
let Transform143 = browser.currentScene.createNode("Transform");
let Inline144 = browser.currentScene.createNode("Inline");
Inline144.url = new MFString(new java.lang.String["SriCampus022.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus022.x3d","SriCampus022.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus022.x3d"]);
Transform143.children = new MFNode();

Transform143.children[0] = Inline144;

Transform142.children = new MFNode();

Transform142.children[0] = Transform143;

Transform141.children = new MFNode();

Transform141.children[0] = Transform142;

GeoLocation139.children = new MFNode();

GeoLocation139.children[0] = Transform141;

Group5.children[23] = GeoLocation139;

let GeoLocation145 = browser.currentScene.createNode("GeoLocation");
GeoLocation145.geoCoords = new SFVec3d(new double[37.45491557328823,-122.17726006224677,3.0214025918394327]);
let GeoOrigin146 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin146.USE = "LVCS-ORIGIN";
GeoLocation145.geoOrigin = GeoOrigin146;

let Transform147 = browser.currentScene.createNode("Transform");
Transform147.rotation = new SFRotation(new float[1,0,0,0]);
let Transform148 = browser.currentScene.createNode("Transform");
Transform148.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform149 = browser.currentScene.createNode("Transform");
let Inline150 = browser.currentScene.createNode("Inline");
Inline150.url = new MFString(new java.lang.String["SriCampus023.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus023.x3d","SriCampus023.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus023.x3d"]);
Transform149.children = new MFNode();

Transform149.children[0] = Inline150;

Transform148.children = new MFNode();

Transform148.children[0] = Transform149;

Transform147.children = new MFNode();

Transform147.children[0] = Transform148;

GeoLocation145.children = new MFNode();

GeoLocation145.children[0] = Transform147;

Group5.children[24] = GeoLocation145;

let GeoLocation151 = browser.currentScene.createNode("GeoLocation");
GeoLocation151.geoCoords = new SFVec3d(new double[37.45591917814891,-122.17571403160821,8.78000576607883]);
let GeoOrigin152 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin152.USE = "LVCS-ORIGIN";
GeoLocation151.geoOrigin = GeoOrigin152;

let Transform153 = browser.currentScene.createNode("Transform");
Transform153.rotation = new SFRotation(new float[1,0,0,0]);
let Transform154 = browser.currentScene.createNode("Transform");
Transform154.rotation = new SFRotation(new float[0,1,0,0.2759828]);
let Transform155 = browser.currentScene.createNode("Transform");
let Inline156 = browser.currentScene.createNode("Inline");
Inline156.url = new MFString(new java.lang.String["SriCampus024.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus024.x3d","SriCampus024.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus024.x3d"]);
Transform155.children = new MFNode();

Transform155.children[0] = Inline156;

Transform154.children = new MFNode();

Transform154.children[0] = Transform155;

Transform153.children = new MFNode();

Transform153.children[0] = Transform154;

GeoLocation151.children = new MFNode();

GeoLocation151.children[0] = Transform153;

Group5.children[25] = GeoLocation151;

let GeoLocation157 = browser.currentScene.createNode("GeoLocation");
GeoLocation157.geoCoords = new SFVec3d(new double[37.45657326482748,-122.17430275688713,2.487428056076169]);
let GeoOrigin158 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin158.USE = "LVCS-ORIGIN";
GeoLocation157.geoOrigin = GeoOrigin158;

let Transform159 = browser.currentScene.createNode("Transform");
Transform159.rotation = new SFRotation(new float[1,0,0,0]);
let Transform160 = browser.currentScene.createNode("Transform");
let Transform161 = browser.currentScene.createNode("Transform");
let Inline162 = browser.currentScene.createNode("Inline");
Inline162.url = new MFString(new java.lang.String["SriCampus025.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus025.x3d","SriCampus025.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus025.x3d"]);
Transform161.children = new MFNode();

Transform161.children[0] = Inline162;

Transform160.children = new MFNode();

Transform160.children[0] = Transform161;

Transform159.children = new MFNode();

Transform159.children[0] = Transform160;

GeoLocation157.children = new MFNode();

GeoLocation157.children[0] = Transform159;

Group5.children[26] = GeoLocation157;

let GeoLocation163 = browser.currentScene.createNode("GeoLocation");
GeoLocation163.geoCoords = new SFVec3d(new double[37.457954698100075,-122.17548056555404,17.594010497443378]);
let GeoOrigin164 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin164.USE = "LVCS-ORIGIN";
GeoLocation163.geoOrigin = GeoOrigin164;

let Transform165 = browser.currentScene.createNode("Transform");
Transform165.rotation = new SFRotation(new float[1,0,0,0]);
let Transform166 = browser.currentScene.createNode("Transform");
let Transform167 = browser.currentScene.createNode("Transform");
let Inline168 = browser.currentScene.createNode("Inline");
Inline168.url = new MFString(new java.lang.String["SriCampus026.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus026.x3d","SriCampus026.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus026.x3d"]);
Transform167.children = new MFNode();

Transform167.children[0] = Inline168;

Transform166.children = new MFNode();

Transform166.children[0] = Transform167;

Transform165.children = new MFNode();

Transform165.children[0] = Transform166;

GeoLocation163.children = new MFNode();

GeoLocation163.children[0] = Transform165;

Group5.children[27] = GeoLocation163;

let GeoLocation169 = browser.currentScene.createNode("GeoLocation");
GeoLocation169.geoCoords = new SFVec3d(new double[37.45590585076085,-122.1751944596797,3.552113295532763]);
let GeoOrigin170 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin170.USE = "LVCS-ORIGIN";
GeoLocation169.geoOrigin = GeoOrigin170;

let Transform171 = browser.currentScene.createNode("Transform");
Transform171.rotation = new SFRotation(new float[1,0,0,0]);
let Transform172 = browser.currentScene.createNode("Transform");
Transform172.rotation = new SFRotation(new float[0,1,0,-0.50157756]);
let Transform173 = browser.currentScene.createNode("Transform");
let Inline174 = browser.currentScene.createNode("Inline");
Inline174.url = new MFString(new java.lang.String["SriCampus027.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus027.x3d","SriCampus027.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus027.x3d"]);
Transform173.children = new MFNode();

Transform173.children[0] = Inline174;

Transform172.children = new MFNode();

Transform172.children[0] = Transform173;

Transform171.children = new MFNode();

Transform171.children[0] = Transform172;

GeoLocation169.children = new MFNode();

GeoLocation169.children[0] = Transform171;

Group5.children[28] = GeoLocation169;

let GeoLocation175 = browser.currentScene.createNode("GeoLocation");
GeoLocation175.geoCoords = new SFVec3d(new double[37.45610913695282,-122.17399622245125,4.362026927061379]);
let GeoOrigin176 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin176.USE = "LVCS-ORIGIN";
GeoLocation175.geoOrigin = GeoOrigin176;

let Transform177 = browser.currentScene.createNode("Transform");
Transform177.rotation = new SFRotation(new float[1,0,0,0]);
let Transform178 = browser.currentScene.createNode("Transform");
Transform178.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform179 = browser.currentScene.createNode("Transform");
let Inline180 = browser.currentScene.createNode("Inline");
Inline180.url = new MFString(new java.lang.String["SriCampus028.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus028.x3d","SriCampus028.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus028.x3d"]);
Transform179.children = new MFNode();

Transform179.children[0] = Inline180;

Transform178.children = new MFNode();

Transform178.children[0] = Transform179;

Transform177.children = new MFNode();

Transform177.children[0] = Transform178;

GeoLocation175.children = new MFNode();

GeoLocation175.children[0] = Transform177;

Group5.children[29] = GeoLocation175;

let GeoLocation181 = browser.currentScene.createNode("GeoLocation");
GeoLocation181.geoCoords = new SFVec3d(new double[37.4547116922646,-122.17681020280229,3.355502273887396]);
let GeoOrigin182 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin182.USE = "LVCS-ORIGIN";
GeoLocation181.geoOrigin = GeoOrigin182;

let Transform183 = browser.currentScene.createNode("Transform");
Transform183.rotation = new SFRotation(new float[1,0,0,0]);
let Transform184 = browser.currentScene.createNode("Transform");
Transform184.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform185 = browser.currentScene.createNode("Transform");
let Inline186 = browser.currentScene.createNode("Inline");
Inline186.url = new MFString(new java.lang.String["SriCampus029.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus029.x3d","SriCampus029.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus029.x3d"]);
Transform185.children = new MFNode();

Transform185.children[0] = Inline186;

Transform184.children = new MFNode();

Transform184.children[0] = Transform185;

Transform183.children = new MFNode();

Transform183.children[0] = Transform184;

GeoLocation181.children = new MFNode();

GeoLocation181.children[0] = Transform183;

Group5.children[30] = GeoLocation181;

let GeoLocation187 = browser.currentScene.createNode("GeoLocation");
GeoLocation187.geoCoords = new SFVec3d(new double[37.45766070886009,-122.17599575766377,5.076752241700888]);
let GeoOrigin188 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin188.USE = "LVCS-ORIGIN";
GeoLocation187.geoOrigin = GeoOrigin188;

let Transform189 = browser.currentScene.createNode("Transform");
Transform189.rotation = new SFRotation(new float[1,0,0,0]);
let Transform190 = browser.currentScene.createNode("Transform");
Transform190.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform191 = browser.currentScene.createNode("Transform");
let Inline192 = browser.currentScene.createNode("Inline");
Inline192.url = new MFString(new java.lang.String["SriCampus030.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus030.x3d","SriCampus030.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus030.x3d"]);
Transform191.children = new MFNode();

Transform191.children[0] = Inline192;

Transform190.children = new MFNode();

Transform190.children[0] = Transform191;

Transform189.children = new MFNode();

Transform189.children[0] = Transform190;

GeoLocation187.children = new MFNode();

GeoLocation187.children[0] = Transform189;

Group5.children[31] = GeoLocation187;

let GeoLocation193 = browser.currentScene.createNode("GeoLocation");
GeoLocation193.geoCoords = new SFVec3d(new double[37.45796451160252,-122.17613803796557,6.220091599971056]);
let GeoOrigin194 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin194.USE = "LVCS-ORIGIN";
GeoLocation193.geoOrigin = GeoOrigin194;

let Transform195 = browser.currentScene.createNode("Transform");
Transform195.rotation = new SFRotation(new float[1,0,0,0]);
let Transform196 = browser.currentScene.createNode("Transform");
Transform196.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform197 = browser.currentScene.createNode("Transform");
let Inline198 = browser.currentScene.createNode("Inline");
Inline198.url = new MFString(new java.lang.String["SriCampus031.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus031.x3d","SriCampus031.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus031.x3d"]);
Transform197.children = new MFNode();

Transform197.children[0] = Inline198;

Transform196.children = new MFNode();

Transform196.children[0] = Transform197;

Transform195.children = new MFNode();

Transform195.children[0] = Transform196;

GeoLocation193.children = new MFNode();

GeoLocation193.children[0] = Transform195;

Group5.children[32] = GeoLocation193;

let GeoLocation199 = browser.currentScene.createNode("GeoLocation");
GeoLocation199.geoCoords = new SFVec3d(new double[37.45677350057518,-122.17749573363987,2.197195878252387]);
let GeoOrigin200 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin200.USE = "LVCS-ORIGIN";
GeoLocation199.geoOrigin = GeoOrigin200;

let Transform201 = browser.currentScene.createNode("Transform");
Transform201.rotation = new SFRotation(new float[1,0,0,0]);
let Transform202 = browser.currentScene.createNode("Transform");
Transform202.rotation = new SFRotation(new float[0,1,0,0.9981249]);
let Transform203 = browser.currentScene.createNode("Transform");
let Inline204 = browser.currentScene.createNode("Inline");
Inline204.url = new MFString(new java.lang.String["SriCampus032.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus032.x3d","SriCampus032.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus032.x3d"]);
Transform203.children = new MFNode();

Transform203.children[0] = Inline204;

Transform202.children = new MFNode();

Transform202.children[0] = Transform203;

Transform201.children = new MFNode();

Transform201.children[0] = Transform202;

GeoLocation199.children = new MFNode();

GeoLocation199.children[0] = Transform201;

Group5.children[33] = GeoLocation199;

let GeoLocation205 = browser.currentScene.createNode("GeoLocation");
GeoLocation205.geoCoords = new SFVec3d(new double[37.45807779112422,-122.17411764890807,5.709648999385536]);
let GeoOrigin206 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin206.USE = "LVCS-ORIGIN";
GeoLocation205.geoOrigin = GeoOrigin206;

let Transform207 = browser.currentScene.createNode("Transform");
Transform207.rotation = new SFRotation(new float[1,0,0,0]);
let Transform208 = browser.currentScene.createNode("Transform");
Transform208.rotation = new SFRotation(new float[0,1,0,1.0156201]);
let Transform209 = browser.currentScene.createNode("Transform");
let Inline210 = browser.currentScene.createNode("Inline");
Inline210.url = new MFString(new java.lang.String["SriCampus033.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus033.x3d","SriCampus033.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus033.x3d"]);
Transform209.children = new MFNode();

Transform209.children[0] = Inline210;

Transform208.children = new MFNode();

Transform208.children[0] = Transform209;

Transform207.children = new MFNode();

Transform207.children[0] = Transform208;

GeoLocation205.children = new MFNode();

GeoLocation205.children[0] = Transform207;

Group5.children[34] = GeoLocation205;

let GeoLocation211 = browser.currentScene.createNode("GeoLocation");
GeoLocation211.geoCoords = new SFVec3d(new double[37.454882244588006,-122.17692956544983,4.7519437577575445]);
let GeoOrigin212 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin212.USE = "LVCS-ORIGIN";
GeoLocation211.geoOrigin = GeoOrigin212;

let Transform213 = browser.currentScene.createNode("Transform");
Transform213.rotation = new SFRotation(new float[1,0,0,0]);
let Transform214 = browser.currentScene.createNode("Transform");
Transform214.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform215 = browser.currentScene.createNode("Transform");
let Inline216 = browser.currentScene.createNode("Inline");
Inline216.url = new MFString(new java.lang.String["SriCampus034.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus034.x3d","SriCampus034.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus034.x3d"]);
Transform215.children = new MFNode();

Transform215.children[0] = Inline216;

Transform214.children = new MFNode();

Transform214.children[0] = Transform215;

Transform213.children = new MFNode();

Transform213.children[0] = Transform214;

GeoLocation211.children = new MFNode();

GeoLocation211.children[0] = Transform213;

Group5.children[35] = GeoLocation211;

let GeoLocation217 = browser.currentScene.createNode("GeoLocation");
GeoLocation217.geoCoords = new SFVec3d(new double[37.45597603145201,-122.17611074695542,18.00964650325477]);
let GeoOrigin218 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin218.USE = "LVCS-ORIGIN";
GeoLocation217.geoOrigin = GeoOrigin218;

let Transform219 = browser.currentScene.createNode("Transform");
Transform219.rotation = new SFRotation(new float[1,0,0,0]);
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.rotation = new SFRotation(new float[0,1,0,0.21222101]);
let Transform221 = browser.currentScene.createNode("Transform");
let Inline222 = browser.currentScene.createNode("Inline");
Inline222.url = new MFString(new java.lang.String["SriCampus035.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus035.x3d","SriCampus035.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus035.x3d"]);
Transform221.children = new MFNode();

Transform221.children[0] = Inline222;

Transform220.children = new MFNode();

Transform220.children[0] = Transform221;

Transform219.children = new MFNode();

Transform219.children[0] = Transform220;

GeoLocation217.children = new MFNode();

GeoLocation217.children[0] = Transform219;

Group5.children[36] = GeoLocation217;

let GeoLocation223 = browser.currentScene.createNode("GeoLocation");
GeoLocation223.geoCoords = new SFVec3d(new double[37.457230040769886,-122.17267919332014,13.204680165275931]);
let GeoOrigin224 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin224.USE = "LVCS-ORIGIN";
GeoLocation223.geoOrigin = GeoOrigin224;

let Transform225 = browser.currentScene.createNode("Transform");
Transform225.rotation = new SFRotation(new float[1,0,0,0]);
let Transform226 = browser.currentScene.createNode("Transform");
Transform226.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform227 = browser.currentScene.createNode("Transform");
let Inline228 = browser.currentScene.createNode("Inline");
Inline228.url = new MFString(new java.lang.String["SriCampus036.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus036.x3d","SriCampus036.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus036.x3d"]);
Transform227.children = new MFNode();

Transform227.children[0] = Inline228;

Transform226.children = new MFNode();

Transform226.children[0] = Transform227;

Transform225.children = new MFNode();

Transform225.children[0] = Transform226;

GeoLocation223.children = new MFNode();

GeoLocation223.children[0] = Transform225;

Group5.children[37] = GeoLocation223;

let GeoLocation229 = browser.currentScene.createNode("GeoLocation");
GeoLocation229.geoCoords = new SFVec3d(new double[37.45480613981243,-122.17386945372586,4.2101172199472785]);
let GeoOrigin230 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin230.USE = "LVCS-ORIGIN";
GeoLocation229.geoOrigin = GeoOrigin230;

let Transform231 = browser.currentScene.createNode("Transform");
Transform231.rotation = new SFRotation(new float[1,0,0,0]);
let Transform232 = browser.currentScene.createNode("Transform");
Transform232.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform233 = browser.currentScene.createNode("Transform");
let Inline234 = browser.currentScene.createNode("Inline");
Inline234.url = new MFString(new java.lang.String["SriCampus037.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus037.x3d","SriCampus037.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus037.x3d"]);
Transform233.children = new MFNode();

Transform233.children[0] = Inline234;

Transform232.children = new MFNode();

Transform232.children[0] = Transform233;

Transform231.children = new MFNode();

Transform231.children[0] = Transform232;

GeoLocation229.children = new MFNode();

GeoLocation229.children[0] = Transform231;

Group5.children[38] = GeoLocation229;

let GeoLocation235 = browser.currentScene.createNode("GeoLocation");
GeoLocation235.geoCoords = new SFVec3d(new double[37.45708528417106,-122.17296111448651,9.479117675684392]);
let GeoOrigin236 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin236.USE = "LVCS-ORIGIN";
GeoLocation235.geoOrigin = GeoOrigin236;

let Transform237 = browser.currentScene.createNode("Transform");
Transform237.rotation = new SFRotation(new float[1,0,0,0]);
let Transform238 = browser.currentScene.createNode("Transform");
let Transform239 = browser.currentScene.createNode("Transform");
let Inline240 = browser.currentScene.createNode("Inline");
Inline240.url = new MFString(new java.lang.String["SriCampus038.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus038.x3d","SriCampus038.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus038.x3d"]);
Transform239.children = new MFNode();

Transform239.children[0] = Inline240;

Transform238.children = new MFNode();

Transform238.children[0] = Transform239;

Transform237.children = new MFNode();

Transform237.children[0] = Transform238;

GeoLocation235.children = new MFNode();

GeoLocation235.children[0] = Transform237;

Group5.children[39] = GeoLocation235;

let GeoLocation241 = browser.currentScene.createNode("GeoLocation");
GeoLocation241.geoCoords = new SFVec3d(new double[37.4557183207063,-122.17555223488635,3.840058395639062]);
let GeoOrigin242 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin242.USE = "LVCS-ORIGIN";
GeoLocation241.geoOrigin = GeoOrigin242;

let Transform243 = browser.currentScene.createNode("Transform");
Transform243.rotation = new SFRotation(new float[1,0,0,0]);
let Transform244 = browser.currentScene.createNode("Transform");
Transform244.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform245 = browser.currentScene.createNode("Transform");
let Inline246 = browser.currentScene.createNode("Inline");
Inline246.url = new MFString(new java.lang.String["SriCampus039.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus039.x3d","SriCampus039.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus039.x3d"]);
Transform245.children = new MFNode();

Transform245.children[0] = Inline246;

Transform244.children = new MFNode();

Transform244.children[0] = Transform245;

Transform243.children = new MFNode();

Transform243.children[0] = Transform244;

GeoLocation241.children = new MFNode();

GeoLocation241.children[0] = Transform243;

Group5.children[40] = GeoLocation241;

let GeoLocation247 = browser.currentScene.createNode("GeoLocation");
GeoLocation247.geoCoords = new SFVec3d(new double[37.45634044951326,-122.1756935597244,15.859837665222585]);
let GeoOrigin248 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin248.USE = "LVCS-ORIGIN";
GeoLocation247.geoOrigin = GeoOrigin248;

let Transform249 = browser.currentScene.createNode("Transform");
Transform249.rotation = new SFRotation(new float[1,0,0,0]);
let Transform250 = browser.currentScene.createNode("Transform");
Transform250.rotation = new SFRotation(new float[0,1,0,3.1311207]);
let Transform251 = browser.currentScene.createNode("Transform");
let Inline252 = browser.currentScene.createNode("Inline");
Inline252.url = new MFString(new java.lang.String["SriCampus040.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus040.x3d","SriCampus040.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus040.x3d"]);
Transform251.children = new MFNode();

Transform251.children[0] = Inline252;

Transform250.children = new MFNode();

Transform250.children[0] = Transform251;

Transform249.children = new MFNode();

Transform249.children[0] = Transform250;

GeoLocation247.children = new MFNode();

GeoLocation247.children[0] = Transform249;

Group5.children[41] = GeoLocation247;

let GeoLocation253 = browser.currentScene.createNode("GeoLocation");
GeoLocation253.geoCoords = new SFVec3d(new double[37.45592566042719,-122.17660938487437,13.852261767722666]);
let GeoOrigin254 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin254.USE = "LVCS-ORIGIN";
GeoLocation253.geoOrigin = GeoOrigin254;

let Transform255 = browser.currentScene.createNode("Transform");
Transform255.rotation = new SFRotation(new float[1,0,0,0]);
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform257 = browser.currentScene.createNode("Transform");
let Inline258 = browser.currentScene.createNode("Inline");
Inline258.url = new MFString(new java.lang.String["SriCampus041.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus041.x3d","SriCampus041.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus041.x3d"]);
Transform257.children = new MFNode();

Transform257.children[0] = Inline258;

Transform256.children = new MFNode();

Transform256.children[0] = Transform257;

Transform255.children = new MFNode();

Transform255.children[0] = Transform256;

GeoLocation253.children = new MFNode();

GeoLocation253.children[0] = Transform255;

Group5.children[42] = GeoLocation253;

let GeoLocation259 = browser.currentScene.createNode("GeoLocation");
GeoLocation259.geoCoords = new SFVec3d(new double[37.457529892816005,-122.17256711496873,11.012683819048107]);
let GeoOrigin260 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin260.USE = "LVCS-ORIGIN";
GeoLocation259.geoOrigin = GeoOrigin260;

let Transform261 = browser.currentScene.createNode("Transform");
Transform261.rotation = new SFRotation(new float[1,0,0,0]);
let Transform262 = browser.currentScene.createNode("Transform");
Transform262.rotation = new SFRotation(new float[0,1,0,-0.53855884]);
let Transform263 = browser.currentScene.createNode("Transform");
let Inline264 = browser.currentScene.createNode("Inline");
Inline264.url = new MFString(new java.lang.String["SriCampus042.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus042.x3d","SriCampus042.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus042.x3d"]);
Transform263.children = new MFNode();

Transform263.children[0] = Inline264;

Transform262.children = new MFNode();

Transform262.children[0] = Transform263;

Transform261.children = new MFNode();

Transform261.children[0] = Transform262;

GeoLocation259.children = new MFNode();

GeoLocation259.children[0] = Transform261;

Group5.children[43] = GeoLocation259;

let GeoLocation265 = browser.currentScene.createNode("GeoLocation");
GeoLocation265.geoCoords = new SFVec3d(new double[37.45482242600392,-122.17658734313235,4.471417527645826]);
let GeoOrigin266 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin266.USE = "LVCS-ORIGIN";
GeoLocation265.geoOrigin = GeoOrigin266;

let Transform267 = browser.currentScene.createNode("Transform");
Transform267.rotation = new SFRotation(new float[1,0,0,0]);
let Transform268 = browser.currentScene.createNode("Transform");
Transform268.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform269 = browser.currentScene.createNode("Transform");
let Inline270 = browser.currentScene.createNode("Inline");
Inline270.url = new MFString(new java.lang.String["SriCampus043.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus043.x3d","SriCampus043.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus043.x3d"]);
Transform269.children = new MFNode();

Transform269.children[0] = Inline270;

Transform268.children = new MFNode();

Transform268.children[0] = Transform269;

Transform267.children = new MFNode();

Transform267.children[0] = Transform268;

GeoLocation265.children = new MFNode();

GeoLocation265.children[0] = Transform267;

Group5.children[44] = GeoLocation265;

let GeoLocation271 = browser.currentScene.createNode("GeoLocation");
GeoLocation271.geoCoords = new SFVec3d(new double[37.45914867841565,-122.17542440073804,2.6793939722701907]);
let GeoOrigin272 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin272.USE = "LVCS-ORIGIN";
GeoLocation271.geoOrigin = GeoOrigin272;

let Transform273 = browser.currentScene.createNode("Transform");
Transform273.rotation = new SFRotation(new float[1,0,0,0]);
let Transform274 = browser.currentScene.createNode("Transform");
Transform274.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform275 = browser.currentScene.createNode("Transform");
let Inline276 = browser.currentScene.createNode("Inline");
Inline276.url = new MFString(new java.lang.String["SriCampus044.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus044.x3d","SriCampus044.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus044.x3d"]);
Transform275.children = new MFNode();

Transform275.children[0] = Inline276;

Transform274.children = new MFNode();

Transform274.children[0] = Transform275;

Transform273.children = new MFNode();

Transform273.children[0] = Transform274;

GeoLocation271.children = new MFNode();

GeoLocation271.children[0] = Transform273;

Group5.children[45] = GeoLocation271;

let GeoLocation277 = browser.currentScene.createNode("GeoLocation");
GeoLocation277.geoCoords = new SFVec3d(new double[37.45657629289387,-122.1772098019601,17.19216455705464]);
let GeoOrigin278 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin278.USE = "LVCS-ORIGIN";
GeoLocation277.geoOrigin = GeoOrigin278;

let Transform279 = browser.currentScene.createNode("Transform");
Transform279.rotation = new SFRotation(new float[1,0,0,0]);
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.rotation = new SFRotation(new float[0,1,0,-0.5530734]);
let Transform281 = browser.currentScene.createNode("Transform");
let Inline282 = browser.currentScene.createNode("Inline");
Inline282.url = new MFString(new java.lang.String["SriCampus045.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus045.x3d","SriCampus045.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus045.x3d"]);
Transform281.children = new MFNode();

Transform281.children[0] = Inline282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

Transform279.children = new MFNode();

Transform279.children[0] = Transform280;

GeoLocation277.children = new MFNode();

GeoLocation277.children[0] = Transform279;

Group5.children[46] = GeoLocation277;

let GeoLocation283 = browser.currentScene.createNode("GeoLocation");
GeoLocation283.geoCoords = new SFVec3d(new double[37.455442192677,-122.17682685627666,8.63792418781668]);
let GeoOrigin284 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin284.USE = "LVCS-ORIGIN";
GeoLocation283.geoOrigin = GeoOrigin284;

let Transform285 = browser.currentScene.createNode("Transform");
Transform285.rotation = new SFRotation(new float[1,0,0,0]);
let Transform286 = browser.currentScene.createNode("Transform");
let Transform287 = browser.currentScene.createNode("Transform");
let Inline288 = browser.currentScene.createNode("Inline");
Inline288.url = new MFString(new java.lang.String["SriCampus046.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus046.x3d","SriCampus046.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus046.x3d"]);
Transform287.children = new MFNode();

Transform287.children[0] = Inline288;

Transform286.children = new MFNode();

Transform286.children[0] = Transform287;

Transform285.children = new MFNode();

Transform285.children[0] = Transform286;

GeoLocation283.children = new MFNode();

GeoLocation283.children[0] = Transform285;

Group5.children[47] = GeoLocation283;

let GeoLocation289 = browser.currentScene.createNode("GeoLocation");
GeoLocation289.geoCoords = new SFVec3d(new double[37.456380605079985,-122.17571867583752,7.213743315078318]);
let GeoOrigin290 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin290.USE = "LVCS-ORIGIN";
GeoLocation289.geoOrigin = GeoOrigin290;

let Transform291 = browser.currentScene.createNode("Transform");
Transform291.rotation = new SFRotation(new float[1,0,0,0]);
let Transform292 = browser.currentScene.createNode("Transform");
Transform292.rotation = new SFRotation(new float[0,1,0,-0.54237884]);
let Transform293 = browser.currentScene.createNode("Transform");
let Inline294 = browser.currentScene.createNode("Inline");
Inline294.url = new MFString(new java.lang.String["SriCampus047.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus047.x3d","SriCampus047.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus047.x3d"]);
Transform293.children = new MFNode();

Transform293.children[0] = Inline294;

Transform292.children = new MFNode();

Transform292.children[0] = Transform293;

Transform291.children = new MFNode();

Transform291.children[0] = Transform292;

GeoLocation289.children = new MFNode();

GeoLocation289.children[0] = Transform291;

Group5.children[48] = GeoLocation289;

let GeoLocation295 = browser.currentScene.createNode("GeoLocation");
GeoLocation295.geoCoords = new SFVec3d(new double[37.454818712921295,-122.17585322698552,4.202082556672394]);
let GeoOrigin296 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin296.USE = "LVCS-ORIGIN";
GeoLocation295.geoOrigin = GeoOrigin296;

let Transform297 = browser.currentScene.createNode("Transform");
Transform297.rotation = new SFRotation(new float[1,0,0,0]);
let Transform298 = browser.currentScene.createNode("Transform");
Transform298.rotation = new SFRotation(new float[0,1,0,-0.5448796]);
let Transform299 = browser.currentScene.createNode("Transform");
let Inline300 = browser.currentScene.createNode("Inline");
Inline300.url = new MFString(new java.lang.String["SriCampus048.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus048.x3d","SriCampus048.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus048.x3d"]);
Transform299.children = new MFNode();

Transform299.children[0] = Inline300;

Transform298.children = new MFNode();

Transform298.children[0] = Transform299;

Transform297.children = new MFNode();

Transform297.children[0] = Transform298;

GeoLocation295.children = new MFNode();

GeoLocation295.children[0] = Transform297;

Group5.children[49] = GeoLocation295;

let GeoLocation301 = browser.currentScene.createNode("GeoLocation");
GeoLocation301.geoCoords = new SFVec3d(new double[37.4550502471287,-122.17682036348906,3.8518225820735097]);
let GeoOrigin302 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin302.USE = "LVCS-ORIGIN";
GeoLocation301.geoOrigin = GeoOrigin302;

let Transform303 = browser.currentScene.createNode("Transform");
Transform303.rotation = new SFRotation(new float[1,0,0,0]);
let Transform304 = browser.currentScene.createNode("Transform");
Transform304.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform305 = browser.currentScene.createNode("Transform");
let Inline306 = browser.currentScene.createNode("Inline");
Inline306.url = new MFString(new java.lang.String["SriCampus049.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus049.x3d","SriCampus049.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus049.x3d"]);
Transform305.children = new MFNode();

Transform305.children[0] = Inline306;

Transform304.children = new MFNode();

Transform304.children[0] = Transform305;

Transform303.children = new MFNode();

Transform303.children[0] = Transform304;

GeoLocation301.children = new MFNode();

GeoLocation301.children[0] = Transform303;

Group5.children[50] = GeoLocation301;

let GeoLocation307 = browser.currentScene.createNode("GeoLocation");
GeoLocation307.geoCoords = new SFVec3d(new double[37.45746330669514,-122.17345143211628,2.9129314199090004]);
let GeoOrigin308 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin308.USE = "LVCS-ORIGIN";
GeoLocation307.geoOrigin = GeoOrigin308;

let Transform309 = browser.currentScene.createNode("Transform");
Transform309.rotation = new SFRotation(new float[1,0,0,0]);
let Transform310 = browser.currentScene.createNode("Transform");
Transform310.rotation = new SFRotation(new float[0,1,0,-0.56828195]);
let Transform311 = browser.currentScene.createNode("Transform");
let Inline312 = browser.currentScene.createNode("Inline");
Inline312.url = new MFString(new java.lang.String["SriCampus050.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus050.x3d","SriCampus050.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus050.x3d"]);
Transform311.children = new MFNode();

Transform311.children[0] = Inline312;

Transform310.children = new MFNode();

Transform310.children[0] = Transform311;

Transform309.children = new MFNode();

Transform309.children[0] = Transform310;

GeoLocation307.children = new MFNode();

GeoLocation307.children[0] = Transform309;

Group5.children[51] = GeoLocation307;

let GeoLocation313 = browser.currentScene.createNode("GeoLocation");
GeoLocation313.geoCoords = new SFVec3d(new double[37.454442875116044,-122.17594377760844,6.156108728609979]);
let GeoOrigin314 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin314.USE = "LVCS-ORIGIN";
GeoLocation313.geoOrigin = GeoOrigin314;

let Transform315 = browser.currentScene.createNode("Transform");
Transform315.rotation = new SFRotation(new float[1,0,0,0]);
let Transform316 = browser.currentScene.createNode("Transform");
Transform316.rotation = new SFRotation(new float[0,1,0,-0.55922556]);
let Transform317 = browser.currentScene.createNode("Transform");
let Inline318 = browser.currentScene.createNode("Inline");
Inline318.url = new MFString(new java.lang.String["SriCampus051.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus051.x3d","SriCampus051.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus051.x3d"]);
Transform317.children = new MFNode();

Transform317.children[0] = Inline318;

Transform316.children = new MFNode();

Transform316.children[0] = Transform317;

Transform315.children = new MFNode();

Transform315.children[0] = Transform316;

GeoLocation313.children = new MFNode();

GeoLocation313.children[0] = Transform315;

Group5.children[52] = GeoLocation313;

let GeoLocation319 = browser.currentScene.createNode("GeoLocation");
GeoLocation319.geoCoords = new SFVec3d(new double[37.45879701654415,-122.17393522056128,6.569330669008195]);
let GeoOrigin320 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin320.USE = "LVCS-ORIGIN";
GeoLocation319.geoOrigin = GeoOrigin320;

let Transform321 = browser.currentScene.createNode("Transform");
Transform321.rotation = new SFRotation(new float[1,0,0,0]);
let Transform322 = browser.currentScene.createNode("Transform");
Transform322.rotation = new SFRotation(new float[0,1,0,0.33597755]);
let Transform323 = browser.currentScene.createNode("Transform");
let Inline324 = browser.currentScene.createNode("Inline");
Inline324.url = new MFString(new java.lang.String["SriCampus052.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus052.x3d","SriCampus052.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus052.x3d"]);
Transform323.children = new MFNode();

Transform323.children[0] = Inline324;

Transform322.children = new MFNode();

Transform322.children[0] = Transform323;

Transform321.children = new MFNode();

Transform321.children[0] = Transform322;

GeoLocation319.children = new MFNode();

GeoLocation319.children[0] = Transform321;

Group5.children[53] = GeoLocation319;

let GeoLocation325 = browser.currentScene.createNode("GeoLocation");
GeoLocation325.geoCoords = new SFVec3d(new double[37.45582234818999,-122.17715115863376,17.133673508651555]);
let GeoOrigin326 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin326.USE = "LVCS-ORIGIN";
GeoLocation325.geoOrigin = GeoOrigin326;

let Transform327 = browser.currentScene.createNode("Transform");
Transform327.rotation = new SFRotation(new float[1,0,0,0]);
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.rotation = new SFRotation(new float[0,1,0,-0.5530734]);
let Transform329 = browser.currentScene.createNode("Transform");
let Inline330 = browser.currentScene.createNode("Inline");
Inline330.url = new MFString(new java.lang.String["SriCampus053.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus053.x3d","SriCampus053.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus053.x3d"]);
Transform329.children = new MFNode();

Transform329.children[0] = Inline330;

Transform328.children = new MFNode();

Transform328.children[0] = Transform329;

Transform327.children = new MFNode();

Transform327.children[0] = Transform328;

GeoLocation325.children = new MFNode();

GeoLocation325.children[0] = Transform327;

Group5.children[54] = GeoLocation325;

let GeoLocation331 = browser.currentScene.createNode("GeoLocation");
GeoLocation331.geoCoords = new SFVec3d(new double[37.45585039052191,-122.17529710799967,6.946160456165671]);
let GeoOrigin332 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin332.USE = "LVCS-ORIGIN";
GeoLocation331.geoOrigin = GeoOrigin332;

let Transform333 = browser.currentScene.createNode("Transform");
Transform333.rotation = new SFRotation(new float[1,0,0,0]);
let Transform334 = browser.currentScene.createNode("Transform");
Transform334.rotation = new SFRotation(new float[0,1,0,1.0208304]);
let Transform335 = browser.currentScene.createNode("Transform");
let Inline336 = browser.currentScene.createNode("Inline");
Inline336.url = new MFString(new java.lang.String["SriCampus054.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus054.x3d","SriCampus054.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus054.x3d"]);
Transform335.children = new MFNode();

Transform335.children[0] = Inline336;

Transform334.children = new MFNode();

Transform334.children[0] = Transform335;

Transform333.children = new MFNode();

Transform333.children[0] = Transform334;

GeoLocation331.children = new MFNode();

GeoLocation331.children[0] = Transform333;

Group5.children[55] = GeoLocation331;

let GeoLocation337 = browser.currentScene.createNode("GeoLocation");
GeoLocation337.geoCoords = new SFVec3d(new double[37.457508873176856,-122.172491886199,14.514393392950296]);
let GeoOrigin338 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin338.USE = "LVCS-ORIGIN";
GeoLocation337.geoOrigin = GeoOrigin338;

let Transform339 = browser.currentScene.createNode("Transform");
Transform339.rotation = new SFRotation(new float[1,0,0,0]);
let Transform340 = browser.currentScene.createNode("Transform");
Transform340.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform341 = browser.currentScene.createNode("Transform");
let Inline342 = browser.currentScene.createNode("Inline");
Inline342.url = new MFString(new java.lang.String["SriCampus055.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus055.x3d","SriCampus055.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus055.x3d"]);
Transform341.children = new MFNode();

Transform341.children[0] = Inline342;

Transform340.children = new MFNode();

Transform340.children[0] = Transform341;

Transform339.children = new MFNode();

Transform339.children[0] = Transform340;

GeoLocation337.children = new MFNode();

GeoLocation337.children[0] = Transform339;

Group5.children[56] = GeoLocation337;

let GeoLocation343 = browser.currentScene.createNode("GeoLocation");
GeoLocation343.geoCoords = new SFVec3d(new double[37.45513578302731,-122.17717506959657,3.4812645660713315]);
let GeoOrigin344 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin344.USE = "LVCS-ORIGIN";
GeoLocation343.geoOrigin = GeoOrigin344;

let Transform345 = browser.currentScene.createNode("Transform");
Transform345.rotation = new SFRotation(new float[1,0,0,0]);
let Transform346 = browser.currentScene.createNode("Transform");
Transform346.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform347 = browser.currentScene.createNode("Transform");
let Inline348 = browser.currentScene.createNode("Inline");
Inline348.url = new MFString(new java.lang.String["SriCampus056.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus056.x3d","SriCampus056.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus056.x3d"]);
Transform347.children = new MFNode();

Transform347.children[0] = Inline348;

Transform346.children = new MFNode();

Transform346.children[0] = Transform347;

Transform345.children = new MFNode();

Transform345.children[0] = Transform346;

GeoLocation343.children = new MFNode();

GeoLocation343.children[0] = Transform345;

Group5.children[57] = GeoLocation343;

let GeoLocation349 = browser.currentScene.createNode("GeoLocation");
GeoLocation349.geoCoords = new SFVec3d(new double[37.45719839591745,-122.17509532185987,7.586426428519189]);
let GeoOrigin350 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin350.USE = "LVCS-ORIGIN";
GeoLocation349.geoOrigin = GeoOrigin350;

let Transform351 = browser.currentScene.createNode("Transform");
Transform351.rotation = new SFRotation(new float[1,0,0,0]);
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.rotation = new SFRotation(new float[0,1,0,-0.58450484]);
let Transform353 = browser.currentScene.createNode("Transform");
let Inline354 = browser.currentScene.createNode("Inline");
Inline354.url = new MFString(new java.lang.String["SriCampus057.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus057.x3d","SriCampus057.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus057.x3d"]);
Transform353.children = new MFNode();

Transform353.children[0] = Inline354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

Transform351.children = new MFNode();

Transform351.children[0] = Transform352;

GeoLocation349.children = new MFNode();

GeoLocation349.children[0] = Transform351;

Group5.children[58] = GeoLocation349;

let GeoLocation355 = browser.currentScene.createNode("GeoLocation");
GeoLocation355.geoCoords = new SFVec3d(new double[37.4569883265308,-122.1729676712078,6.5581301134079695]);
let GeoOrigin356 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin356.USE = "LVCS-ORIGIN";
GeoLocation355.geoOrigin = GeoOrigin356;

let Transform357 = browser.currentScene.createNode("Transform");
Transform357.rotation = new SFRotation(new float[1,0,0,0]);
let Transform358 = browser.currentScene.createNode("Transform");
Transform358.rotation = new SFRotation(new float[0,1,0,1.0149409]);
let Transform359 = browser.currentScene.createNode("Transform");
let Inline360 = browser.currentScene.createNode("Inline");
Inline360.url = new MFString(new java.lang.String["SriCampus058.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus058.x3d","SriCampus058.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus058.x3d"]);
Transform359.children = new MFNode();

Transform359.children[0] = Inline360;

Transform358.children = new MFNode();

Transform358.children[0] = Transform359;

Transform357.children = new MFNode();

Transform357.children[0] = Transform358;

GeoLocation355.children = new MFNode();

GeoLocation355.children[0] = Transform357;

Group5.children[59] = GeoLocation355;

let GeoLocation361 = browser.currentScene.createNode("GeoLocation");
GeoLocation361.geoCoords = new SFVec3d(new double[37.45456145819844,-122.17689486975709,7.527868615463376]);
let GeoOrigin362 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin362.USE = "LVCS-ORIGIN";
GeoLocation361.geoOrigin = GeoOrigin362;

let Transform363 = browser.currentScene.createNode("Transform");
Transform363.rotation = new SFRotation(new float[1,0,0,0]);
let Transform364 = browser.currentScene.createNode("Transform");
Transform364.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform365 = browser.currentScene.createNode("Transform");
let Inline366 = browser.currentScene.createNode("Inline");
Inline366.url = new MFString(new java.lang.String["SriCampus059.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus059.x3d","SriCampus059.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus059.x3d"]);
Transform365.children = new MFNode();

Transform365.children[0] = Inline366;

Transform364.children = new MFNode();

Transform364.children[0] = Transform365;

Transform363.children = new MFNode();

Transform363.children[0] = Transform364;

GeoLocation361.children = new MFNode();

GeoLocation361.children[0] = Transform363;

Group5.children[60] = GeoLocation361;

let GeoLocation367 = browser.currentScene.createNode("GeoLocation");
GeoLocation367.geoCoords = new SFVec3d(new double[37.45740319412557,-122.17618841369759,5.0026247035712]);
let GeoOrigin368 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin368.USE = "LVCS-ORIGIN";
GeoLocation367.geoOrigin = GeoOrigin368;

let Transform369 = browser.currentScene.createNode("Transform");
Transform369.rotation = new SFRotation(new float[1,0,0,0]);
let Transform370 = browser.currentScene.createNode("Transform");
Transform370.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform371 = browser.currentScene.createNode("Transform");
let Inline372 = browser.currentScene.createNode("Inline");
Inline372.url = new MFString(new java.lang.String["SriCampus060.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus060.x3d","SriCampus060.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus060.x3d"]);
Transform371.children = new MFNode();

Transform371.children[0] = Inline372;

Transform370.children = new MFNode();

Transform370.children[0] = Transform371;

Transform369.children = new MFNode();

Transform369.children[0] = Transform370;

GeoLocation367.children = new MFNode();

GeoLocation367.children[0] = Transform369;

Group5.children[61] = GeoLocation367;

let GeoLocation373 = browser.currentScene.createNode("GeoLocation");
GeoLocation373.geoCoords = new SFVec3d(new double[37.455980832229784,-122.1754127566971,5.2845821883529425]);
let GeoOrigin374 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin374.USE = "LVCS-ORIGIN";
GeoLocation373.geoOrigin = GeoOrigin374;

let Transform375 = browser.currentScene.createNode("Transform");
Transform375.rotation = new SFRotation(new float[1,0,0,0]);
let Transform376 = browser.currentScene.createNode("Transform");
Transform376.rotation = new SFRotation(new float[0,1,0,-2.1260338]);
let Transform377 = browser.currentScene.createNode("Transform");
let Inline378 = browser.currentScene.createNode("Inline");
Inline378.url = new MFString(new java.lang.String["SriCampus061.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus061.x3d","SriCampus061.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus061.x3d"]);
Transform377.children = new MFNode();

Transform377.children[0] = Inline378;

Transform376.children = new MFNode();

Transform376.children[0] = Transform377;

Transform375.children = new MFNode();

Transform375.children[0] = Transform376;

GeoLocation373.children = new MFNode();

GeoLocation373.children[0] = Transform375;

Group5.children[62] = GeoLocation373;

let GeoLocation379 = browser.currentScene.createNode("GeoLocation");
GeoLocation379.geoCoords = new SFVec3d(new double[37.4572507076156,-122.17266351614354,13.141504678875208]);
let GeoOrigin380 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin380.USE = "LVCS-ORIGIN";
GeoLocation379.geoOrigin = GeoOrigin380;

let Transform381 = browser.currentScene.createNode("Transform");
Transform381.rotation = new SFRotation(new float[1,0,0,0]);
let Transform382 = browser.currentScene.createNode("Transform");
Transform382.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform383 = browser.currentScene.createNode("Transform");
let Inline384 = browser.currentScene.createNode("Inline");
Inline384.url = new MFString(new java.lang.String["SriCampus062.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus062.x3d","SriCampus062.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus062.x3d"]);
Transform383.children = new MFNode();

Transform383.children[0] = Inline384;

Transform382.children = new MFNode();

Transform382.children[0] = Transform383;

Transform381.children = new MFNode();

Transform381.children[0] = Transform382;

GeoLocation379.children = new MFNode();

GeoLocation379.children[0] = Transform381;

Group5.children[63] = GeoLocation379;

let GeoLocation385 = browser.currentScene.createNode("GeoLocation");
GeoLocation385.geoCoords = new SFVec3d(new double[37.45512771849234,-122.17753368161324,6.1585897551849484]);
let GeoOrigin386 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin386.USE = "LVCS-ORIGIN";
GeoLocation385.geoOrigin = GeoOrigin386;

let Transform387 = browser.currentScene.createNode("Transform");
Transform387.rotation = new SFRotation(new float[1,0,0,0]);
let Transform388 = browser.currentScene.createNode("Transform");
Transform388.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform389 = browser.currentScene.createNode("Transform");
let Inline390 = browser.currentScene.createNode("Inline");
Inline390.url = new MFString(new java.lang.String["SriCampus063.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus063.x3d","SriCampus063.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus063.x3d"]);
Transform389.children = new MFNode();

Transform389.children[0] = Inline390;

Transform388.children = new MFNode();

Transform388.children[0] = Transform389;

Transform387.children = new MFNode();

Transform387.children[0] = Transform388;

GeoLocation385.children = new MFNode();

GeoLocation385.children[0] = Transform387;

Group5.children[64] = GeoLocation385;

let GeoLocation391 = browser.currentScene.createNode("GeoLocation");
GeoLocation391.geoCoords = new SFVec3d(new double[37.45648897149806,-122.17474510430961,4.042569777928293]);
let GeoOrigin392 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin392.USE = "LVCS-ORIGIN";
GeoLocation391.geoOrigin = GeoOrigin392;

let Transform393 = browser.currentScene.createNode("Transform");
Transform393.rotation = new SFRotation(new float[1,0,0,0]);
let Transform394 = browser.currentScene.createNode("Transform");
Transform394.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform395 = browser.currentScene.createNode("Transform");
let Inline396 = browser.currentScene.createNode("Inline");
Inline396.url = new MFString(new java.lang.String["SriCampus064.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus064.x3d","SriCampus064.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus064.x3d"]);
Transform395.children = new MFNode();

Transform395.children[0] = Inline396;

Transform394.children = new MFNode();

Transform394.children[0] = Transform395;

Transform393.children = new MFNode();

Transform393.children[0] = Transform394;

GeoLocation391.children = new MFNode();

GeoLocation391.children[0] = Transform393;

Group5.children[65] = GeoLocation391;

let GeoLocation397 = browser.currentScene.createNode("GeoLocation");
GeoLocation397.geoCoords = new SFVec3d(new double[37.457545419520336,-122.17647045693873,6.57679077796638]);
let GeoOrigin398 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin398.USE = "LVCS-ORIGIN";
GeoLocation397.geoOrigin = GeoOrigin398;

let Transform399 = browser.currentScene.createNode("Transform");
Transform399.rotation = new SFRotation(new float[1,0,0,0]);
let Transform400 = browser.currentScene.createNode("Transform");
Transform400.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform401 = browser.currentScene.createNode("Transform");
let Inline402 = browser.currentScene.createNode("Inline");
Inline402.url = new MFString(new java.lang.String["SriCampus065.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus065.x3d","SriCampus065.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus065.x3d"]);
Transform401.children = new MFNode();

Transform401.children[0] = Inline402;

Transform400.children = new MFNode();

Transform400.children[0] = Transform401;

Transform399.children = new MFNode();

Transform399.children[0] = Transform400;

GeoLocation397.children = new MFNode();

GeoLocation397.children[0] = Transform399;

Group5.children[66] = GeoLocation397;

let GeoLocation403 = browser.currentScene.createNode("GeoLocation");
GeoLocation403.geoCoords = new SFVec3d(new double[37.4567782426038,-122.17300057286778,8.243166682310402]);
let GeoOrigin404 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin404.USE = "LVCS-ORIGIN";
GeoLocation403.geoOrigin = GeoOrigin404;

let Transform405 = browser.currentScene.createNode("Transform");
Transform405.rotation = new SFRotation(new float[1,0,0,0]);
let Transform406 = browser.currentScene.createNode("Transform");
Transform406.rotation = new SFRotation(new float[0,1,0,-0.60314816]);
let Transform407 = browser.currentScene.createNode("Transform");
let Inline408 = browser.currentScene.createNode("Inline");
Inline408.url = new MFString(new java.lang.String["SriCampus066.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus066.x3d","SriCampus066.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus066.x3d"]);
Transform407.children = new MFNode();

Transform407.children[0] = Inline408;

Transform406.children = new MFNode();

Transform406.children[0] = Transform407;

Transform405.children = new MFNode();

Transform405.children[0] = Transform406;

GeoLocation403.children = new MFNode();

GeoLocation403.children[0] = Transform405;

Group5.children[67] = GeoLocation403;

let GeoLocation409 = browser.currentScene.createNode("GeoLocation");
GeoLocation409.geoCoords = new SFVec3d(new double[37.45460042628699,-122.17581565926682,6.317391004413366]);
let GeoOrigin410 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin410.USE = "LVCS-ORIGIN";
GeoLocation409.geoOrigin = GeoOrigin410;

let Transform411 = browser.currentScene.createNode("Transform");
Transform411.rotation = new SFRotation(new float[1,0,0,0]);
let Transform412 = browser.currentScene.createNode("Transform");
Transform412.rotation = new SFRotation(new float[0,1,0,-0.55802435]);
let Transform413 = browser.currentScene.createNode("Transform");
let Inline414 = browser.currentScene.createNode("Inline");
Inline414.url = new MFString(new java.lang.String["SriCampus067.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus067.x3d","SriCampus067.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus067.x3d"]);
Transform413.children = new MFNode();

Transform413.children[0] = Inline414;

Transform412.children = new MFNode();

Transform412.children[0] = Transform413;

Transform411.children = new MFNode();

Transform411.children[0] = Transform412;

GeoLocation409.children = new MFNode();

GeoLocation409.children[0] = Transform411;

Group5.children[68] = GeoLocation409;

let GeoLocation415 = browser.currentScene.createNode("GeoLocation");
GeoLocation415.geoCoords = new SFVec3d(new double[37.45671927239422,-122.17710406092134,17.201877245679498]);
let GeoOrigin416 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin416.USE = "LVCS-ORIGIN";
GeoLocation415.geoOrigin = GeoOrigin416;

let Transform417 = browser.currentScene.createNode("Transform");
Transform417.rotation = new SFRotation(new float[1,0,0,0]);
let Transform418 = browser.currentScene.createNode("Transform");
Transform418.rotation = new SFRotation(new float[0,1,0,-0.5530734]);
let Transform419 = browser.currentScene.createNode("Transform");
let Inline420 = browser.currentScene.createNode("Inline");
Inline420.url = new MFString(new java.lang.String["SriCampus068.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus068.x3d","SriCampus068.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus068.x3d"]);
Transform419.children = new MFNode();

Transform419.children[0] = Inline420;

Transform418.children = new MFNode();

Transform418.children[0] = Transform419;

Transform417.children = new MFNode();

Transform417.children[0] = Transform418;

GeoLocation415.children = new MFNode();

GeoLocation415.children[0] = Transform417;

Group5.children[69] = GeoLocation415;

let GeoLocation421 = browser.currentScene.createNode("GeoLocation");
GeoLocation421.geoCoords = new SFVec3d(new double[37.45847639259631,-122.1732855152507,6.537731416523457]);
let GeoOrigin422 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin422.USE = "LVCS-ORIGIN";
GeoLocation421.geoOrigin = GeoOrigin422;

let Transform423 = browser.currentScene.createNode("Transform");
Transform423.rotation = new SFRotation(new float[1,0,0,0]);
let Transform424 = browser.currentScene.createNode("Transform");
Transform424.rotation = new SFRotation(new float[0,1,0,0.33597755]);
let Transform425 = browser.currentScene.createNode("Transform");
let Inline426 = browser.currentScene.createNode("Inline");
Inline426.url = new MFString(new java.lang.String["SriCampus069.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus069.x3d","SriCampus069.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus069.x3d"]);
Transform425.children = new MFNode();

Transform425.children[0] = Inline426;

Transform424.children = new MFNode();

Transform424.children[0] = Transform425;

Transform423.children = new MFNode();

Transform423.children[0] = Transform424;

GeoLocation421.children = new MFNode();

GeoLocation421.children[0] = Transform423;

Group5.children[70] = GeoLocation421;

let GeoLocation427 = browser.currentScene.createNode("GeoLocation");
GeoLocation427.geoCoords = new SFVec3d(new double[37.455910343615315,-122.17664992226594,13.851592540740967]);
let GeoOrigin428 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin428.USE = "LVCS-ORIGIN";
GeoLocation427.geoOrigin = GeoOrigin428;

let Transform429 = browser.currentScene.createNode("Transform");
Transform429.rotation = new SFRotation(new float[1,0,0,0]);
let Transform430 = browser.currentScene.createNode("Transform");
Transform430.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform431 = browser.currentScene.createNode("Transform");
let Inline432 = browser.currentScene.createNode("Inline");
Inline432.url = new MFString(new java.lang.String["SriCampus070.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus070.x3d","SriCampus070.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus070.x3d"]);
Transform431.children = new MFNode();

Transform431.children[0] = Inline432;

Transform430.children = new MFNode();

Transform430.children[0] = Transform431;

Transform429.children = new MFNode();

Transform429.children[0] = Transform430;

GeoLocation427.children = new MFNode();

GeoLocation427.children[0] = Transform429;

Group5.children[71] = GeoLocation427;

let GeoLocation433 = browser.currentScene.createNode("GeoLocation");
GeoLocation433.geoCoords = new SFVec3d(new double[37.45579582804456,-122.17533034339407,4.9784933580085635]);
let GeoOrigin434 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin434.USE = "LVCS-ORIGIN";
GeoLocation433.geoOrigin = GeoOrigin434;

let Transform435 = browser.currentScene.createNode("Transform");
Transform435.rotation = new SFRotation(new float[1,0,0,0]);
let Transform436 = browser.currentScene.createNode("Transform");
Transform436.rotation = new SFRotation(new float[0,1,0,1.0204762]);
let Transform437 = browser.currentScene.createNode("Transform");
let Inline438 = browser.currentScene.createNode("Inline");
Inline438.url = new MFString(new java.lang.String["SriCampus071.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus071.x3d","SriCampus071.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus071.x3d"]);
Transform437.children = new MFNode();

Transform437.children[0] = Inline438;

Transform436.children = new MFNode();

Transform436.children[0] = Transform437;

Transform435.children = new MFNode();

Transform435.children[0] = Transform436;

GeoLocation433.children = new MFNode();

GeoLocation433.children[0] = Transform435;

Group5.children[72] = GeoLocation433;

let GeoLocation439 = browser.currentScene.createNode("GeoLocation");
GeoLocation439.geoCoords = new SFVec3d(new double[37.455199117886465,-122.17701342699323,4.017314109019935]);
let GeoOrigin440 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin440.USE = "LVCS-ORIGIN";
GeoLocation439.geoOrigin = GeoOrigin440;

let Transform441 = browser.currentScene.createNode("Transform");
Transform441.rotation = new SFRotation(new float[1,0,0,0]);
let Transform442 = browser.currentScene.createNode("Transform");
Transform442.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform443 = browser.currentScene.createNode("Transform");
let Inline444 = browser.currentScene.createNode("Inline");
Inline444.url = new MFString(new java.lang.String["SriCampus072.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus072.x3d","SriCampus072.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus072.x3d"]);
Transform443.children = new MFNode();

Transform443.children[0] = Inline444;

Transform442.children = new MFNode();

Transform442.children[0] = Transform443;

Transform441.children = new MFNode();

Transform441.children[0] = Transform442;

GeoLocation439.children = new MFNode();

GeoLocation439.children[0] = Transform441;

Group5.children[73] = GeoLocation439;

let GeoLocation445 = browser.currentScene.createNode("GeoLocation");
GeoLocation445.geoCoords = new SFVec3d(new double[37.45742307208743,-122.17284002175455,15.32203997951001]);
let GeoOrigin446 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin446.USE = "LVCS-ORIGIN";
GeoLocation445.geoOrigin = GeoOrigin446;

let Transform447 = browser.currentScene.createNode("Transform");
Transform447.rotation = new SFRotation(new float[1,0,0,0]);
let Transform448 = browser.currentScene.createNode("Transform");
Transform448.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform449 = browser.currentScene.createNode("Transform");
let Inline450 = browser.currentScene.createNode("Inline");
Inline450.url = new MFString(new java.lang.String["SriCampus073.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus073.x3d","SriCampus073.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus073.x3d"]);
Transform449.children = new MFNode();

Transform449.children[0] = Inline450;

Transform448.children = new MFNode();

Transform448.children[0] = Transform449;

Transform447.children = new MFNode();

Transform447.children[0] = Transform448;

GeoLocation445.children = new MFNode();

GeoLocation445.children[0] = Transform447;

Group5.children[74] = GeoLocation445;

let GeoLocation451 = browser.currentScene.createNode("GeoLocation");
GeoLocation451.geoCoords = new SFVec3d(new double[37.455266201390465,-122.17506929403226,6.281517929397523]);
let GeoOrigin452 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin452.USE = "LVCS-ORIGIN";
GeoLocation451.geoOrigin = GeoOrigin452;

let Transform453 = browser.currentScene.createNode("Transform");
Transform453.rotation = new SFRotation(new float[1,0,0,0]);
let Transform454 = browser.currentScene.createNode("Transform");
Transform454.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform455 = browser.currentScene.createNode("Transform");
let Inline456 = browser.currentScene.createNode("Inline");
Inline456.url = new MFString(new java.lang.String["SriCampus074.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus074.x3d","SriCampus074.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus074.x3d"]);
Transform455.children = new MFNode();

Transform455.children[0] = Inline456;

Transform454.children = new MFNode();

Transform454.children[0] = Transform455;

Transform453.children = new MFNode();

Transform453.children[0] = Transform454;

GeoLocation451.children = new MFNode();

GeoLocation451.children[0] = Transform453;

Group5.children[75] = GeoLocation451;

let GeoLocation457 = browser.currentScene.createNode("GeoLocation");
GeoLocation457.geoCoords = new SFVec3d(new double[37.458249512657666,-122.17582503824109,13.063681640662253]);
let GeoOrigin458 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin458.USE = "LVCS-ORIGIN";
GeoLocation457.geoOrigin = GeoOrigin458;

let Transform459 = browser.currentScene.createNode("Transform");
Transform459.rotation = new SFRotation(new float[1,0,0,0]);
let Transform460 = browser.currentScene.createNode("Transform");
let Transform461 = browser.currentScene.createNode("Transform");
let Inline462 = browser.currentScene.createNode("Inline");
Inline462.url = new MFString(new java.lang.String["SriCampus075.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus075.x3d","SriCampus075.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus075.x3d"]);
Transform461.children = new MFNode();

Transform461.children[0] = Inline462;

Transform460.children = new MFNode();

Transform460.children[0] = Transform461;

Transform459.children = new MFNode();

Transform459.children[0] = Transform460;

GeoLocation457.children = new MFNode();

GeoLocation457.children[0] = Transform459;

Group5.children[76] = GeoLocation457;

let GeoLocation463 = browser.currentScene.createNode("GeoLocation");
GeoLocation463.geoCoords = new SFVec3d(new double[37.45703379139092,-122.17608269698908,17.61487079691142]);
let GeoOrigin464 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin464.USE = "LVCS-ORIGIN";
GeoLocation463.geoOrigin = GeoOrigin464;

let Transform465 = browser.currentScene.createNode("Transform");
Transform465.rotation = new SFRotation(new float[1,0,0,0]);
let Transform466 = browser.currentScene.createNode("Transform");
Transform466.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform467 = browser.currentScene.createNode("Transform");
let Inline468 = browser.currentScene.createNode("Inline");
Inline468.url = new MFString(new java.lang.String["SriCampus076.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus076.x3d","SriCampus076.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus076.x3d"]);
Transform467.children = new MFNode();

Transform467.children[0] = Inline468;

Transform466.children = new MFNode();

Transform466.children[0] = Transform467;

Transform465.children = new MFNode();

Transform465.children[0] = Transform466;

GeoLocation463.children = new MFNode();

GeoLocation463.children[0] = Transform465;

Group5.children[77] = GeoLocation463;

let GeoLocation469 = browser.currentScene.createNode("GeoLocation");
GeoLocation469.geoCoords = new SFVec3d(new double[37.459349758117824,-122.17577994880298,12.226319789886475]);
let GeoOrigin470 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin470.USE = "LVCS-ORIGIN";
GeoLocation469.geoOrigin = GeoOrigin470;

let Transform471 = browser.currentScene.createNode("Transform");
Transform471.rotation = new SFRotation(new float[1,0,0,0]);
let Transform472 = browser.currentScene.createNode("Transform");
Transform472.rotation = new SFRotation(new float[0,1,0,-0.52879757]);
let Transform473 = browser.currentScene.createNode("Transform");
let Inline474 = browser.currentScene.createNode("Inline");
Inline474.url = new MFString(new java.lang.String["SriCampus077.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus077.x3d","SriCampus077.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus077.x3d"]);
Transform473.children = new MFNode();

Transform473.children[0] = Inline474;

Transform472.children = new MFNode();

Transform472.children[0] = Transform473;

Transform471.children = new MFNode();

Transform471.children[0] = Transform472;

GeoLocation469.children = new MFNode();

GeoLocation469.children[0] = Transform471;

Group5.children[78] = GeoLocation469;

let GeoLocation475 = browser.currentScene.createNode("GeoLocation");
GeoLocation475.geoCoords = new SFVec3d(new double[37.455523631670935,-122.17826624724431,4.396789534017444]);
let GeoOrigin476 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin476.USE = "LVCS-ORIGIN";
GeoLocation475.geoOrigin = GeoOrigin476;

let Transform477 = browser.currentScene.createNode("Transform");
Transform477.rotation = new SFRotation(new float[1,0,0,0]);
let Transform478 = browser.currentScene.createNode("Transform");
Transform478.rotation = new SFRotation(new float[0,1,0,1.012785]);
let Transform479 = browser.currentScene.createNode("Transform");
let Inline480 = browser.currentScene.createNode("Inline");
Inline480.url = new MFString(new java.lang.String["SriCampus078.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus078.x3d","SriCampus078.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus078.x3d"]);
Transform479.children = new MFNode();

Transform479.children[0] = Inline480;

Transform478.children = new MFNode();

Transform478.children[0] = Transform479;

Transform477.children = new MFNode();

Transform477.children[0] = Transform478;

GeoLocation475.children = new MFNode();

GeoLocation475.children[0] = Transform477;

Group5.children[79] = GeoLocation475;

let GeoLocation481 = browser.currentScene.createNode("GeoLocation");
GeoLocation481.geoCoords = new SFVec3d(new double[37.45748923066822,-122.1757325976501,17.814282183535397]);
let GeoOrigin482 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin482.USE = "LVCS-ORIGIN";
GeoLocation481.geoOrigin = GeoOrigin482;

let Transform483 = browser.currentScene.createNode("Transform");
Transform483.rotation = new SFRotation(new float[1,0,0,0]);
let Transform484 = browser.currentScene.createNode("Transform");
Transform484.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform485 = browser.currentScene.createNode("Transform");
let Inline486 = browser.currentScene.createNode("Inline");
Inline486.url = new MFString(new java.lang.String["SriCampus079.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus079.x3d","SriCampus079.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus079.x3d"]);
Transform485.children = new MFNode();

Transform485.children[0] = Inline486;

Transform484.children = new MFNode();

Transform484.children[0] = Transform485;

Transform483.children = new MFNode();

Transform483.children[0] = Transform484;

GeoLocation481.children = new MFNode();

GeoLocation481.children[0] = Transform483;

Group5.children[80] = GeoLocation481;

let GeoLocation487 = browser.currentScene.createNode("GeoLocation");
GeoLocation487.geoCoords = new SFVec3d(new double[37.45622632561962,-122.17423430878904,4.528802731074393]);
let GeoOrigin488 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin488.USE = "LVCS-ORIGIN";
GeoLocation487.geoOrigin = GeoOrigin488;

let Transform489 = browser.currentScene.createNode("Transform");
Transform489.rotation = new SFRotation(new float[1,0,0,0]);
let Transform490 = browser.currentScene.createNode("Transform");
Transform490.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform491 = browser.currentScene.createNode("Transform");
let Inline492 = browser.currentScene.createNode("Inline");
Inline492.url = new MFString(new java.lang.String["SriCampus080.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus080.x3d","SriCampus080.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus080.x3d"]);
Transform491.children = new MFNode();

Transform491.children[0] = Inline492;

Transform490.children = new MFNode();

Transform490.children[0] = Transform491;

Transform489.children = new MFNode();

Transform489.children[0] = Transform490;

GeoLocation487.children = new MFNode();

GeoLocation487.children[0] = Transform489;

Group5.children[81] = GeoLocation487;

let GeoLocation493 = browser.currentScene.createNode("GeoLocation");
GeoLocation493.geoCoords = new SFVec3d(new double[37.45501807177614,-122.17719105822079,4.006106214597821]);
let GeoOrigin494 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin494.USE = "LVCS-ORIGIN";
GeoLocation493.geoOrigin = GeoOrigin494;

let Transform495 = browser.currentScene.createNode("Transform");
Transform495.rotation = new SFRotation(new float[1,0,0,0]);
let Transform496 = browser.currentScene.createNode("Transform");
Transform496.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform497 = browser.currentScene.createNode("Transform");
let Inline498 = browser.currentScene.createNode("Inline");
Inline498.url = new MFString(new java.lang.String["SriCampus081.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus081.x3d","SriCampus081.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus081.x3d"]);
Transform497.children = new MFNode();

Transform497.children[0] = Inline498;

Transform496.children = new MFNode();

Transform496.children[0] = Transform497;

Transform495.children = new MFNode();

Transform495.children[0] = Transform496;

GeoLocation493.children = new MFNode();

GeoLocation493.children[0] = Transform495;

Group5.children[82] = GeoLocation493;

let GeoLocation499 = browser.currentScene.createNode("GeoLocation");
GeoLocation499.geoCoords = new SFVec3d(new double[37.45465566409258,-122.17698610464193,3.2464131880551577]);
let GeoOrigin500 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin500.USE = "LVCS-ORIGIN";
GeoLocation499.geoOrigin = GeoOrigin500;

let Transform501 = browser.currentScene.createNode("Transform");
Transform501.rotation = new SFRotation(new float[1,0,0,0]);
let Transform502 = browser.currentScene.createNode("Transform");
Transform502.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform503 = browser.currentScene.createNode("Transform");
let Inline504 = browser.currentScene.createNode("Inline");
Inline504.url = new MFString(new java.lang.String["SriCampus082.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus082.x3d","SriCampus082.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus082.x3d"]);
Transform503.children = new MFNode();

Transform503.children[0] = Inline504;

Transform502.children = new MFNode();

Transform502.children[0] = Transform503;

Transform501.children = new MFNode();

Transform501.children[0] = Transform502;

GeoLocation499.children = new MFNode();

GeoLocation499.children[0] = Transform501;

Group5.children[83] = GeoLocation499;

let GeoLocation505 = browser.currentScene.createNode("GeoLocation");
GeoLocation505.geoCoords = new SFVec3d(new double[37.45712962221045,-122.17265941441853,13.401793683879077]);
let GeoOrigin506 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin506.USE = "LVCS-ORIGIN";
GeoLocation505.geoOrigin = GeoOrigin506;

let Transform507 = browser.currentScene.createNode("Transform");
Transform507.rotation = new SFRotation(new float[1,0,0,0]);
let Transform508 = browser.currentScene.createNode("Transform");
Transform508.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform509 = browser.currentScene.createNode("Transform");
let Inline510 = browser.currentScene.createNode("Inline");
Inline510.url = new MFString(new java.lang.String["SriCampus083.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus083.x3d","SriCampus083.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus083.x3d"]);
Transform509.children = new MFNode();

Transform509.children[0] = Inline510;

Transform508.children = new MFNode();

Transform508.children[0] = Transform509;

Transform507.children = new MFNode();

Transform507.children[0] = Transform508;

GeoLocation505.children = new MFNode();

GeoLocation505.children[0] = Transform507;

Group5.children[84] = GeoLocation505;

let GeoLocation511 = browser.currentScene.createNode("GeoLocation");
GeoLocation511.geoCoords = new SFVec3d(new double[37.45692498803204,-122.17769601887738,16.93729296978563]);
let GeoOrigin512 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin512.USE = "LVCS-ORIGIN";
GeoLocation511.geoOrigin = GeoOrigin512;

let Transform513 = browser.currentScene.createNode("Transform");
Transform513.rotation = new SFRotation(new float[1,0,0,0]);
let Transform514 = browser.currentScene.createNode("Transform");
let Transform515 = browser.currentScene.createNode("Transform");
let Inline516 = browser.currentScene.createNode("Inline");
Inline516.url = new MFString(new java.lang.String["SriCampus084.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus084.x3d","SriCampus084.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus084.x3d"]);
Transform515.children = new MFNode();

Transform515.children[0] = Inline516;

Transform514.children = new MFNode();

Transform514.children[0] = Transform515;

Transform513.children = new MFNode();

Transform513.children[0] = Transform514;

GeoLocation511.children = new MFNode();

GeoLocation511.children[0] = Transform513;

Group5.children[85] = GeoLocation511;

let GeoLocation517 = browser.currentScene.createNode("GeoLocation");
GeoLocation517.geoCoords = new SFVec3d(new double[37.456814457875936,-122.1769710991232,2.2080116970464587]);
let GeoOrigin518 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin518.USE = "LVCS-ORIGIN";
GeoLocation517.geoOrigin = GeoOrigin518;

let Transform519 = browser.currentScene.createNode("Transform");
Transform519.rotation = new SFRotation(new float[1,0,0,0]);
let Transform520 = browser.currentScene.createNode("Transform");
Transform520.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform521 = browser.currentScene.createNode("Transform");
let Inline522 = browser.currentScene.createNode("Inline");
Inline522.url = new MFString(new java.lang.String["SriCampus085.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus085.x3d","SriCampus085.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus085.x3d"]);
Transform521.children = new MFNode();

Transform521.children[0] = Inline522;

Transform520.children = new MFNode();

Transform520.children[0] = Transform521;

Transform519.children = new MFNode();

Transform519.children[0] = Transform520;

GeoLocation517.children = new MFNode();

GeoLocation517.children[0] = Transform519;

Group5.children[86] = GeoLocation517;

let GeoLocation523 = browser.currentScene.createNode("GeoLocation");
GeoLocation523.geoCoords = new SFVec3d(new double[37.45440500608271,-122.17564484966901,5.874921953305602]);
let GeoOrigin524 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin524.USE = "LVCS-ORIGIN";
GeoLocation523.geoOrigin = GeoOrigin524;

let Transform525 = browser.currentScene.createNode("Transform");
Transform525.rotation = new SFRotation(new float[1,0,0,0]);
let Transform526 = browser.currentScene.createNode("Transform");
Transform526.rotation = new SFRotation(new float[0,1,0,-0.55922556]);
let Transform527 = browser.currentScene.createNode("Transform");
let Inline528 = browser.currentScene.createNode("Inline");
Inline528.url = new MFString(new java.lang.String["SriCampus086.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus086.x3d","SriCampus086.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus086.x3d"]);
Transform527.children = new MFNode();

Transform527.children[0] = Inline528;

Transform526.children = new MFNode();

Transform526.children[0] = Transform527;

Transform525.children = new MFNode();

Transform525.children[0] = Transform526;

GeoLocation523.children = new MFNode();

GeoLocation523.children[0] = Transform525;

Group5.children[87] = GeoLocation523;

let GeoLocation529 = browser.currentScene.createNode("GeoLocation");
GeoLocation529.geoCoords = new SFVec3d(new double[37.45887150100618,-122.17364689701466,6.572895417921245]);
let GeoOrigin530 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin530.USE = "LVCS-ORIGIN";
GeoLocation529.geoOrigin = GeoOrigin530;

let Transform531 = browser.currentScene.createNode("Transform");
Transform531.rotation = new SFRotation(new float[1,0,0,0]);
let Transform532 = browser.currentScene.createNode("Transform");
Transform532.rotation = new SFRotation(new float[0,1,0,0.33597755]);
let Transform533 = browser.currentScene.createNode("Transform");
let Inline534 = browser.currentScene.createNode("Inline");
Inline534.url = new MFString(new java.lang.String["SriCampus087.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus087.x3d","SriCampus087.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus087.x3d"]);
Transform533.children = new MFNode();

Transform533.children[0] = Inline534;

Transform532.children = new MFNode();

Transform532.children[0] = Transform533;

Transform531.children = new MFNode();

Transform531.children[0] = Transform532;

GeoLocation529.children = new MFNode();

GeoLocation529.children[0] = Transform531;

Group5.children[88] = GeoLocation529;

let GeoLocation535 = browser.currentScene.createNode("GeoLocation");
GeoLocation535.geoCoords = new SFVec3d(new double[37.457302044512346,-122.17262076560766,13.290771765634418]);
let GeoOrigin536 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin536.USE = "LVCS-ORIGIN";
GeoLocation535.geoOrigin = GeoOrigin536;

let Transform537 = browser.currentScene.createNode("Transform");
Transform537.rotation = new SFRotation(new float[1,0,0,0]);
let Transform538 = browser.currentScene.createNode("Transform");
Transform538.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform539 = browser.currentScene.createNode("Transform");
let Inline540 = browser.currentScene.createNode("Inline");
Inline540.url = new MFString(new java.lang.String["SriCampus088.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus088.x3d","SriCampus088.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus088.x3d"]);
Transform539.children = new MFNode();

Transform539.children[0] = Inline540;

Transform538.children = new MFNode();

Transform538.children[0] = Transform539;

Transform537.children = new MFNode();

Transform537.children[0] = Transform538;

GeoLocation535.children = new MFNode();

GeoLocation535.children[0] = Transform537;

Group5.children[89] = GeoLocation535;

let GeoLocation541 = browser.currentScene.createNode("GeoLocation");
GeoLocation541.geoCoords = new SFVec3d(new double[37.45787902024201,-122.17202008954384,4.758735476993024]);
let GeoOrigin542 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin542.USE = "LVCS-ORIGIN";
GeoLocation541.geoOrigin = GeoOrigin542;

let Transform543 = browser.currentScene.createNode("Transform");
Transform543.rotation = new SFRotation(new float[1,0,0,0]);
let Transform544 = browser.currentScene.createNode("Transform");
Transform544.rotation = new SFRotation(new float[0,1,0,-1.2557627]);
let Transform545 = browser.currentScene.createNode("Transform");
let Inline546 = browser.currentScene.createNode("Inline");
Inline546.url = new MFString(new java.lang.String["SriCampus089.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus089.x3d","SriCampus089.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus089.x3d"]);
Transform545.children = new MFNode();

Transform545.children[0] = Inline546;

Transform544.children = new MFNode();

Transform544.children[0] = Transform545;

Transform543.children = new MFNode();

Transform543.children[0] = Transform544;

GeoLocation541.children = new MFNode();

GeoLocation541.children[0] = Transform543;

Group5.children[90] = GeoLocation541;

let GeoLocation547 = browser.currentScene.createNode("GeoLocation");
GeoLocation547.geoCoords = new SFVec3d(new double[37.456270157439285,-122.17655409213577,17.732382902875543]);
let GeoOrigin548 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin548.USE = "LVCS-ORIGIN";
GeoLocation547.geoOrigin = GeoOrigin548;

let Transform549 = browser.currentScene.createNode("Transform");
Transform549.rotation = new SFRotation(new float[1,0,0,0]);
let Transform550 = browser.currentScene.createNode("Transform");
Transform550.rotation = new SFRotation(new float[0,1,0,0.21222101]);
let Transform551 = browser.currentScene.createNode("Transform");
let Inline552 = browser.currentScene.createNode("Inline");
Inline552.url = new MFString(new java.lang.String["SriCampus090.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus090.x3d","SriCampus090.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus090.x3d"]);
Transform551.children = new MFNode();

Transform551.children[0] = Inline552;

Transform550.children = new MFNode();

Transform550.children[0] = Transform551;

Transform549.children = new MFNode();

Transform549.children[0] = Transform550;

GeoLocation547.children = new MFNode();

GeoLocation547.children[0] = Transform549;

Group5.children[91] = GeoLocation547;

let GeoLocation553 = browser.currentScene.createNode("GeoLocation");
GeoLocation553.geoCoords = new SFVec3d(new double[37.455202658874605,-122.17537929382321,10.800645593553782]);
let GeoOrigin554 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin554.USE = "LVCS-ORIGIN";
GeoLocation553.geoOrigin = GeoOrigin554;

let Transform555 = browser.currentScene.createNode("Transform");
Transform555.rotation = new SFRotation(new float[1,0,0,0]);
let Transform556 = browser.currentScene.createNode("Transform");
Transform556.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform557 = browser.currentScene.createNode("Transform");
let Inline558 = browser.currentScene.createNode("Inline");
Inline558.url = new MFString(new java.lang.String["SriCampus091.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus091.x3d","SriCampus091.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus091.x3d"]);
Transform557.children = new MFNode();

Transform557.children[0] = Inline558;

Transform556.children = new MFNode();

Transform556.children[0] = Transform557;

Transform555.children = new MFNode();

Transform555.children[0] = Transform556;

GeoLocation553.children = new MFNode();

GeoLocation553.children[0] = Transform555;

Group5.children[92] = GeoLocation553;

let GeoLocation559 = browser.currentScene.createNode("GeoLocation");
GeoLocation559.geoCoords = new SFVec3d(new double[37.45826209565133,-122.17595626355404,11.577650134451687]);
let GeoOrigin560 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin560.USE = "LVCS-ORIGIN";
GeoLocation559.geoOrigin = GeoOrigin560;

let Transform561 = browser.currentScene.createNode("Transform");
Transform561.rotation = new SFRotation(new float[1,0,0,0]);
let Transform562 = browser.currentScene.createNode("Transform");
Transform562.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform563 = browser.currentScene.createNode("Transform");
let Inline564 = browser.currentScene.createNode("Inline");
Inline564.url = new MFString(new java.lang.String["SriCampus092.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus092.x3d","SriCampus092.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus092.x3d"]);
Transform563.children = new MFNode();

Transform563.children[0] = Inline564;

Transform562.children = new MFNode();

Transform562.children[0] = Transform563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

GeoLocation559.children = new MFNode();

GeoLocation559.children[0] = Transform561;

Group5.children[93] = GeoLocation559;

let GeoLocation565 = browser.currentScene.createNode("GeoLocation");
GeoLocation565.geoCoords = new SFVec3d(new double[37.45544706135105,-122.17542250128548,6.491053903475404]);
let GeoOrigin566 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin566.USE = "LVCS-ORIGIN";
GeoLocation565.geoOrigin = GeoOrigin566;

let Transform567 = browser.currentScene.createNode("Transform");
Transform567.rotation = new SFRotation(new float[1,0,0,0]);
let Transform568 = browser.currentScene.createNode("Transform");
Transform568.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform569 = browser.currentScene.createNode("Transform");
let Inline570 = browser.currentScene.createNode("Inline");
Inline570.url = new MFString(new java.lang.String["SriCampus093.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus093.x3d","SriCampus093.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus093.x3d"]);
Transform569.children = new MFNode();

Transform569.children[0] = Inline570;

Transform568.children = new MFNode();

Transform568.children[0] = Transform569;

Transform567.children = new MFNode();

Transform567.children[0] = Transform568;

GeoLocation565.children = new MFNode();

GeoLocation565.children[0] = Transform567;

Group5.children[94] = GeoLocation565;

let GeoLocation571 = browser.currentScene.createNode("GeoLocation");
GeoLocation571.geoCoords = new SFVec3d(new double[37.458398889705016,-122.1730916119198,6.529909424483776]);
let GeoOrigin572 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin572.USE = "LVCS-ORIGIN";
GeoLocation571.geoOrigin = GeoOrigin572;

let Transform573 = browser.currentScene.createNode("Transform");
Transform573.rotation = new SFRotation(new float[1,0,0,0]);
let Transform574 = browser.currentScene.createNode("Transform");
Transform574.rotation = new SFRotation(new float[0,1,0,-1.2557627]);
let Transform575 = browser.currentScene.createNode("Transform");
let Inline576 = browser.currentScene.createNode("Inline");
Inline576.url = new MFString(new java.lang.String["SriCampus094.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus094.x3d","SriCampus094.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus094.x3d"]);
Transform575.children = new MFNode();

Transform575.children[0] = Inline576;

Transform574.children = new MFNode();

Transform574.children[0] = Transform575;

Transform573.children = new MFNode();

Transform573.children[0] = Transform574;

GeoLocation571.children = new MFNode();

GeoLocation571.children[0] = Transform573;

Group5.children[95] = GeoLocation571;

let GeoLocation577 = browser.currentScene.createNode("GeoLocation");
GeoLocation577.geoCoords = new SFVec3d(new double[37.45590814672539,-122.1765990028583,13.850803661160171]);
let GeoOrigin578 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin578.USE = "LVCS-ORIGIN";
GeoLocation577.geoOrigin = GeoOrigin578;

let Transform579 = browser.currentScene.createNode("Transform");
Transform579.rotation = new SFRotation(new float[1,0,0,0]);
let Transform580 = browser.currentScene.createNode("Transform");
Transform580.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform581 = browser.currentScene.createNode("Transform");
let Inline582 = browser.currentScene.createNode("Inline");
Inline582.url = new MFString(new java.lang.String["SriCampus095.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus095.x3d","SriCampus095.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus095.x3d"]);
Transform581.children = new MFNode();

Transform581.children[0] = Inline582;

Transform580.children = new MFNode();

Transform580.children[0] = Transform581;

Transform579.children = new MFNode();

Transform579.children[0] = Transform580;

GeoLocation577.children = new MFNode();

GeoLocation577.children[0] = Transform579;

Group5.children[96] = GeoLocation577;

let GeoLocation583 = browser.currentScene.createNode("GeoLocation");
GeoLocation583.geoCoords = new SFVec3d(new double[37.456286881934034,-122.17435595010173,2.799916968680918]);
let GeoOrigin584 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin584.USE = "LVCS-ORIGIN";
GeoLocation583.geoOrigin = GeoOrigin584;

let Transform585 = browser.currentScene.createNode("Transform");
Transform585.rotation = new SFRotation(new float[1,0,0,0]);
let Transform586 = browser.currentScene.createNode("Transform");
Transform586.rotation = new SFRotation(new float[0,1,0,-0.5626132]);
let Transform587 = browser.currentScene.createNode("Transform");
let Inline588 = browser.currentScene.createNode("Inline");
Inline588.url = new MFString(new java.lang.String["SriCampus096.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus096.x3d","SriCampus096.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus096.x3d"]);
Transform587.children = new MFNode();

Transform587.children[0] = Inline588;

Transform586.children = new MFNode();

Transform586.children[0] = Transform587;

Transform585.children = new MFNode();

Transform585.children[0] = Transform586;

GeoLocation583.children = new MFNode();

GeoLocation583.children[0] = Transform585;

Group5.children[97] = GeoLocation583;

let GeoLocation589 = browser.currentScene.createNode("GeoLocation");
GeoLocation589.geoCoords = new SFVec3d(new double[37.45598740170031,-122.17375297634354,4.297718069516122]);
let GeoOrigin590 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin590.USE = "LVCS-ORIGIN";
GeoLocation589.geoOrigin = GeoOrigin590;

let Transform591 = browser.currentScene.createNode("Transform");
Transform591.rotation = new SFRotation(new float[1,0,0,0]);
let Transform592 = browser.currentScene.createNode("Transform");
Transform592.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform593 = browser.currentScene.createNode("Transform");
let Inline594 = browser.currentScene.createNode("Inline");
Inline594.url = new MFString(new java.lang.String["SriCampus097.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus097.x3d","SriCampus097.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus097.x3d"]);
Transform593.children = new MFNode();

Transform593.children[0] = Inline594;

Transform592.children = new MFNode();

Transform592.children[0] = Transform593;

Transform591.children = new MFNode();

Transform591.children[0] = Transform592;

GeoLocation589.children = new MFNode();

GeoLocation589.children[0] = Transform591;

Group5.children[98] = GeoLocation589;

let GeoLocation595 = browser.currentScene.createNode("GeoLocation");
GeoLocation595.geoCoords = new SFVec3d(new double[37.45632012788061,-122.17701436276613,8.888750216923654]);
let GeoOrigin596 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin596.USE = "LVCS-ORIGIN";
GeoLocation595.geoOrigin = GeoOrigin596;

let Transform597 = browser.currentScene.createNode("Transform");
Transform597.rotation = new SFRotation(new float[1,0,0,0]);
let Transform598 = browser.currentScene.createNode("Transform");
Transform598.rotation = new SFRotation(new float[0,1,0,0.2759828]);
let Transform599 = browser.currentScene.createNode("Transform");
let Inline600 = browser.currentScene.createNode("Inline");
Inline600.url = new MFString(new java.lang.String["SriCampus098.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus098.x3d","SriCampus098.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus098.x3d"]);
Transform599.children = new MFNode();

Transform599.children[0] = Inline600;

Transform598.children = new MFNode();

Transform598.children[0] = Transform599;

Transform597.children = new MFNode();

Transform597.children[0] = Transform598;

GeoLocation595.children = new MFNode();

GeoLocation595.children[0] = Transform597;

Group5.children[99] = GeoLocation595;

let GeoLocation601 = browser.currentScene.createNode("GeoLocation");
GeoLocation601.geoCoords = new SFVec3d(new double[37.456845922281055,-122.17669512470076,5.616073635406792]);
let GeoOrigin602 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin602.USE = "LVCS-ORIGIN";
GeoLocation601.geoOrigin = GeoOrigin602;

let Transform603 = browser.currentScene.createNode("Transform");
Transform603.rotation = new SFRotation(new float[1,0,0,0]);
let Transform604 = browser.currentScene.createNode("Transform");
Transform604.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform605 = browser.currentScene.createNode("Transform");
let Inline606 = browser.currentScene.createNode("Inline");
Inline606.url = new MFString(new java.lang.String["SriCampus099.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus099.x3d","SriCampus099.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus099.x3d"]);
Transform605.children = new MFNode();

Transform605.children[0] = Inline606;

Transform604.children = new MFNode();

Transform604.children[0] = Transform605;

Transform603.children = new MFNode();

Transform603.children[0] = Transform604;

GeoLocation601.children = new MFNode();

GeoLocation601.children[0] = Transform603;

Group5.children[100] = GeoLocation601;

let GeoLocation607 = browser.currentScene.createNode("GeoLocation");
GeoLocation607.geoCoords = new SFVec3d(new double[37.455818973641165,-122.17500576498591,5.202997267246246]);
let GeoOrigin608 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin608.USE = "LVCS-ORIGIN";
GeoLocation607.geoOrigin = GeoOrigin608;

let Transform609 = browser.currentScene.createNode("Transform");
Transform609.rotation = new SFRotation(new float[1,0,0,0]);
let Transform610 = browser.currentScene.createNode("Transform");
Transform610.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform611 = browser.currentScene.createNode("Transform");
let Inline612 = browser.currentScene.createNode("Inline");
Inline612.url = new MFString(new java.lang.String["SriCampus100.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus100.x3d","SriCampus100.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus100.x3d"]);
Transform611.children = new MFNode();

Transform611.children[0] = Inline612;

Transform610.children = new MFNode();

Transform610.children[0] = Transform611;

Transform609.children = new MFNode();

Transform609.children[0] = Transform610;

GeoLocation607.children = new MFNode();

GeoLocation607.children[0] = Transform609;

Group5.children[101] = GeoLocation607;

let GeoLocation613 = browser.currentScene.createNode("GeoLocation");
GeoLocation613.geoCoords = new SFVec3d(new double[37.45606574957878,-122.17762711789798,17.579336941242218]);
let GeoOrigin614 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin614.USE = "LVCS-ORIGIN";
GeoLocation613.geoOrigin = GeoOrigin614;

let Transform615 = browser.currentScene.createNode("Transform");
Transform615.rotation = new SFRotation(new float[1,0,0,0]);
let Transform616 = browser.currentScene.createNode("Transform");
Transform616.rotation = new SFRotation(new float[0,1,0,-0.5530734]);
let Transform617 = browser.currentScene.createNode("Transform");
let Inline618 = browser.currentScene.createNode("Inline");
Inline618.url = new MFString(new java.lang.String["SriCampus101.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus101.x3d","SriCampus101.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus101.x3d"]);
Transform617.children = new MFNode();

Transform617.children[0] = Inline618;

Transform616.children = new MFNode();

Transform616.children[0] = Transform617;

Transform615.children = new MFNode();

Transform615.children[0] = Transform616;

GeoLocation613.children = new MFNode();

GeoLocation613.children[0] = Transform615;

Group5.children[102] = GeoLocation613;

let GeoLocation619 = browser.currentScene.createNode("GeoLocation");
GeoLocation619.geoCoords = new SFVec3d(new double[37.45679915195322,-122.17630003052214,18.843943851068616]);
let GeoOrigin620 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin620.USE = "LVCS-ORIGIN";
GeoLocation619.geoOrigin = GeoOrigin620;

let Transform621 = browser.currentScene.createNode("Transform");
Transform621.rotation = new SFRotation(new float[1,0,0,0]);
let Transform622 = browser.currentScene.createNode("Transform");
Transform622.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform623 = browser.currentScene.createNode("Transform");
let Inline624 = browser.currentScene.createNode("Inline");
Inline624.url = new MFString(new java.lang.String["SriCampus102.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus102.x3d","SriCampus102.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus102.x3d"]);
Transform623.children = new MFNode();

Transform623.children[0] = Inline624;

Transform622.children = new MFNode();

Transform622.children[0] = Transform623;

Transform621.children = new MFNode();

Transform621.children[0] = Transform622;

GeoLocation619.children = new MFNode();

GeoLocation619.children[0] = Transform621;

Group5.children[103] = GeoLocation619;

let GeoLocation625 = browser.currentScene.createNode("GeoLocation");
GeoLocation625.geoCoords = new SFVec3d(new double[37.457331549143376,-122.1726072752575,13.708675358444452]);
let GeoOrigin626 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin626.USE = "LVCS-ORIGIN";
GeoLocation625.geoOrigin = GeoOrigin626;

let Transform627 = browser.currentScene.createNode("Transform");
Transform627.rotation = new SFRotation(new float[1,0,0,0]);
let Transform628 = browser.currentScene.createNode("Transform");
Transform628.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform629 = browser.currentScene.createNode("Transform");
let Inline630 = browser.currentScene.createNode("Inline");
Inline630.url = new MFString(new java.lang.String["SriCampus103.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus103.x3d","SriCampus103.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus103.x3d"]);
Transform629.children = new MFNode();

Transform629.children[0] = Inline630;

Transform628.children = new MFNode();

Transform628.children[0] = Transform629;

Transform627.children = new MFNode();

Transform627.children[0] = Transform628;

GeoLocation625.children = new MFNode();

GeoLocation625.children[0] = Transform627;

Group5.children[104] = GeoLocation625;

let GeoLocation631 = browser.currentScene.createNode("GeoLocation");
GeoLocation631.geoCoords = new SFVec3d(new double[37.45520547056154,-122.17781585094826,3.2565740747377276]);
let GeoOrigin632 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin632.USE = "LVCS-ORIGIN";
GeoLocation631.geoOrigin = GeoOrigin632;

let Transform633 = browser.currentScene.createNode("Transform");
Transform633.rotation = new SFRotation(new float[1,0,0,0]);
let Transform634 = browser.currentScene.createNode("Transform");
Transform634.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform635 = browser.currentScene.createNode("Transform");
let Inline636 = browser.currentScene.createNode("Inline");
Inline636.url = new MFString(new java.lang.String["SriCampus104.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus104.x3d","SriCampus104.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus104.x3d"]);
Transform635.children = new MFNode();

Transform635.children[0] = Inline636;

Transform634.children = new MFNode();

Transform634.children[0] = Transform635;

Transform633.children = new MFNode();

Transform633.children[0] = Transform634;

GeoLocation631.children = new MFNode();

GeoLocation631.children[0] = Transform633;

Group5.children[105] = GeoLocation631;

let GeoLocation637 = browser.currentScene.createNode("GeoLocation");
GeoLocation637.geoCoords = new SFVec3d(new double[37.454810121643106,-122.1772881517725,3.4585653822869062]);
let GeoOrigin638 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin638.USE = "LVCS-ORIGIN";
GeoLocation637.geoOrigin = GeoOrigin638;

let Transform639 = browser.currentScene.createNode("Transform");
Transform639.rotation = new SFRotation(new float[1,0,0,0]);
let Transform640 = browser.currentScene.createNode("Transform");
Transform640.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform641 = browser.currentScene.createNode("Transform");
let Inline642 = browser.currentScene.createNode("Inline");
Inline642.url = new MFString(new java.lang.String["SriCampus105.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus105.x3d","SriCampus105.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus105.x3d"]);
Transform641.children = new MFNode();

Transform641.children[0] = Inline642;

Transform640.children = new MFNode();

Transform640.children[0] = Transform641;

Transform639.children = new MFNode();

Transform639.children[0] = Transform640;

GeoLocation637.children = new MFNode();

GeoLocation637.children[0] = Transform639;

Group5.children[106] = GeoLocation637;

let GeoLocation643 = browser.currentScene.createNode("GeoLocation");
GeoLocation643.geoCoords = new SFVec3d(new double[37.4574835594975,-122.17250934197735,14.512516235001385]);
let GeoOrigin644 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin644.USE = "LVCS-ORIGIN";
GeoLocation643.geoOrigin = GeoOrigin644;

let Transform645 = browser.currentScene.createNode("Transform");
Transform645.rotation = new SFRotation(new float[1,0,0,0]);
let Transform646 = browser.currentScene.createNode("Transform");
Transform646.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform647 = browser.currentScene.createNode("Transform");
let Inline648 = browser.currentScene.createNode("Inline");
Inline648.url = new MFString(new java.lang.String["SriCampus106.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus106.x3d","SriCampus106.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus106.x3d"]);
Transform647.children = new MFNode();

Transform647.children[0] = Inline648;

Transform646.children = new MFNode();

Transform646.children[0] = Transform647;

Transform645.children = new MFNode();

Transform645.children[0] = Transform646;

GeoLocation643.children = new MFNode();

GeoLocation643.children[0] = Transform645;

Group5.children[107] = GeoLocation643;

let GeoLocation649 = browser.currentScene.createNode("GeoLocation");
GeoLocation649.geoCoords = new SFVec3d(new double[37.457111007051886,-122.17287436027812,7.242378053255379]);
let GeoOrigin650 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin650.USE = "LVCS-ORIGIN";
GeoLocation649.geoOrigin = GeoOrigin650;

let Transform651 = browser.currentScene.createNode("Transform");
Transform651.rotation = new SFRotation(new float[1,0,0,0]);
let Transform652 = browser.currentScene.createNode("Transform");
Transform652.rotation = new SFRotation(new float[0,1,0,-0.65482974]);
let Transform653 = browser.currentScene.createNode("Transform");
let Inline654 = browser.currentScene.createNode("Inline");
Inline654.url = new MFString(new java.lang.String["SriCampus107.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus107.x3d","SriCampus107.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus107.x3d"]);
Transform653.children = new MFNode();

Transform653.children[0] = Inline654;

Transform652.children = new MFNode();

Transform652.children[0] = Transform653;

Transform651.children = new MFNode();

Transform651.children[0] = Transform652;

GeoLocation649.children = new MFNode();

GeoLocation649.children[0] = Transform651;

Group5.children[108] = GeoLocation649;

let GeoLocation655 = browser.currentScene.createNode("GeoLocation");
GeoLocation655.geoCoords = new SFVec3d(new double[37.458031005215425,-122.1719256683745,4.770276533439755]);
let GeoOrigin656 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin656.USE = "LVCS-ORIGIN";
GeoLocation655.geoOrigin = GeoOrigin656;

let Transform657 = browser.currentScene.createNode("Transform");
Transform657.rotation = new SFRotation(new float[1,0,0,0]);
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.rotation = new SFRotation(new float[0,1,0,0.33597755]);
let Transform659 = browser.currentScene.createNode("Transform");
let Inline660 = browser.currentScene.createNode("Inline");
Inline660.url = new MFString(new java.lang.String["SriCampus108.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus108.x3d","SriCampus108.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus108.x3d"]);
Transform659.children = new MFNode();

Transform659.children[0] = Inline660;

Transform658.children = new MFNode();

Transform658.children[0] = Transform659;

Transform657.children = new MFNode();

Transform657.children[0] = Transform658;

GeoLocation655.children = new MFNode();

GeoLocation655.children[0] = Transform657;

Group5.children[109] = GeoLocation655;

let GeoLocation661 = browser.currentScene.createNode("GeoLocation");
GeoLocation661.geoCoords = new SFVec3d(new double[37.45515720353775,-122.17406431710243,4.3671683901920915]);
let GeoOrigin662 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin662.USE = "LVCS-ORIGIN";
GeoLocation661.geoOrigin = GeoOrigin662;

let Transform663 = browser.currentScene.createNode("Transform");
Transform663.rotation = new SFRotation(new float[1,0,0,0]);
let Transform664 = browser.currentScene.createNode("Transform");
Transform664.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform665 = browser.currentScene.createNode("Transform");
let Inline666 = browser.currentScene.createNode("Inline");
Inline666.url = new MFString(new java.lang.String["SriCampus109.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus109.x3d","SriCampus109.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus109.x3d"]);
Transform665.children = new MFNode();

Transform665.children[0] = Inline666;

Transform664.children = new MFNode();

Transform664.children[0] = Transform665;

Transform663.children = new MFNode();

Transform663.children[0] = Transform664;

GeoLocation661.children = new MFNode();

GeoLocation661.children[0] = Transform663;

Group5.children[110] = GeoLocation661;

let GeoLocation667 = browser.currentScene.createNode("GeoLocation");
GeoLocation667.geoCoords = new SFVec3d(new double[37.45934859760897,-122.17577724891385,3.8770384145900607]);
let GeoOrigin668 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin668.USE = "LVCS-ORIGIN";
GeoLocation667.geoOrigin = GeoOrigin668;

let Transform669 = browser.currentScene.createNode("Transform");
Transform669.rotation = new SFRotation(new float[1,0,0,0]);
let Transform670 = browser.currentScene.createNode("Transform");
Transform670.rotation = new SFRotation(new float[0,1,0,-2.1220884]);
let Transform671 = browser.currentScene.createNode("Transform");
let Inline672 = browser.currentScene.createNode("Inline");
Inline672.url = new MFString(new java.lang.String["SriCampus110.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus110.x3d","SriCampus110.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus110.x3d"]);
Transform671.children = new MFNode();

Transform671.children[0] = Inline672;

Transform670.children = new MFNode();

Transform670.children[0] = Transform671;

Transform669.children = new MFNode();

Transform669.children[0] = Transform670;

GeoLocation667.children = new MFNode();

GeoLocation667.children[0] = Transform669;

Group5.children[111] = GeoLocation667;

let GeoLocation673 = browser.currentScene.createNode("GeoLocation");
GeoLocation673.geoCoords = new SFVec3d(new double[37.45552187784782,-122.1767457842618,8.714063614606857]);
let GeoOrigin674 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin674.USE = "LVCS-ORIGIN";
GeoLocation673.geoOrigin = GeoOrigin674;

let Transform675 = browser.currentScene.createNode("Transform");
Transform675.rotation = new SFRotation(new float[1,0,0,0]);
let Transform676 = browser.currentScene.createNode("Transform");
let Transform677 = browser.currentScene.createNode("Transform");
let Inline678 = browser.currentScene.createNode("Inline");
Inline678.url = new MFString(new java.lang.String["SriCampus111.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus111.x3d","SriCampus111.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus111.x3d"]);
Transform677.children = new MFNode();

Transform677.children[0] = Inline678;

Transform676.children = new MFNode();

Transform676.children[0] = Transform677;

Transform675.children = new MFNode();

Transform675.children[0] = Transform676;

GeoLocation673.children = new MFNode();

GeoLocation673.children[0] = Transform675;

Group5.children[112] = GeoLocation673;

let GeoLocation679 = browser.currentScene.createNode("GeoLocation");
GeoLocation679.geoCoords = new SFVec3d(new double[37.45487218593971,-122.177110948491,4.0440065916627645]);
let GeoOrigin680 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin680.USE = "LVCS-ORIGIN";
GeoLocation679.geoOrigin = GeoOrigin680;

let Transform681 = browser.currentScene.createNode("Transform");
Transform681.rotation = new SFRotation(new float[1,0,0,0]);
let Transform682 = browser.currentScene.createNode("Transform");
Transform682.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform683 = browser.currentScene.createNode("Transform");
let Inline684 = browser.currentScene.createNode("Inline");
Inline684.url = new MFString(new java.lang.String["SriCampus112.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus112.x3d","SriCampus112.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus112.x3d"]);
Transform683.children = new MFNode();

Transform683.children[0] = Inline684;

Transform682.children = new MFNode();

Transform682.children[0] = Transform683;

Transform681.children = new MFNode();

Transform681.children[0] = Transform682;

GeoLocation679.children = new MFNode();

GeoLocation679.children[0] = Transform681;

Group5.children[113] = GeoLocation679;

let GeoLocation685 = browser.currentScene.createNode("GeoLocation");
GeoLocation685.geoCoords = new SFVec3d(new double[37.45714986360583,-122.17352452743128,4.084409800358117]);
let GeoOrigin686 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin686.USE = "LVCS-ORIGIN";
GeoLocation685.geoOrigin = GeoOrigin686;

let Transform687 = browser.currentScene.createNode("Transform");
Transform687.rotation = new SFRotation(new float[1,0,0,0]);
let Transform688 = browser.currentScene.createNode("Transform");
Transform688.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform689 = browser.currentScene.createNode("Transform");
let Inline690 = browser.currentScene.createNode("Inline");
Inline690.url = new MFString(new java.lang.String["SriCampus113.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus113.x3d","SriCampus113.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus113.x3d"]);
Transform689.children = new MFNode();

Transform689.children[0] = Inline690;

Transform688.children = new MFNode();

Transform688.children[0] = Transform689;

Transform687.children = new MFNode();

Transform687.children[0] = Transform688;

GeoLocation685.children = new MFNode();

GeoLocation685.children[0] = Transform687;

Group5.children[114] = GeoLocation685;

let GeoLocation691 = browser.currentScene.createNode("GeoLocation");
GeoLocation691.geoCoords = new SFVec3d(new double[37.45736742589547,-122.17254854118927,12.031191472895443]);
let GeoOrigin692 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin692.USE = "LVCS-ORIGIN";
GeoLocation691.geoOrigin = GeoOrigin692;

let Transform693 = browser.currentScene.createNode("Transform");
Transform693.rotation = new SFRotation(new float[1,0,0,0]);
let Transform694 = browser.currentScene.createNode("Transform");
Transform694.rotation = new SFRotation(new float[0,1,0,-0.45392746]);
let Transform695 = browser.currentScene.createNode("Transform");
let Inline696 = browser.currentScene.createNode("Inline");
Inline696.url = new MFString(new java.lang.String["SriCampus114.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus114.x3d","SriCampus114.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus114.x3d"]);
Transform695.children = new MFNode();

Transform695.children[0] = Inline696;

Transform694.children = new MFNode();

Transform694.children[0] = Transform695;

Transform693.children = new MFNode();

Transform693.children[0] = Transform694;

GeoLocation691.children = new MFNode();

GeoLocation691.children[0] = Transform693;

Group5.children[115] = GeoLocation691;

let GeoLocation697 = browser.currentScene.createNode("GeoLocation");
GeoLocation697.geoCoords = new SFVec3d(new double[37.45525714274129,-122.17507028895217,6.794414064846933]);
let GeoOrigin698 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin698.USE = "LVCS-ORIGIN";
GeoLocation697.geoOrigin = GeoOrigin698;

let Transform699 = browser.currentScene.createNode("Transform");
Transform699.rotation = new SFRotation(new float[1,0,0,0]);
let Transform700 = browser.currentScene.createNode("Transform");
Transform700.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform701 = browser.currentScene.createNode("Transform");
let Inline702 = browser.currentScene.createNode("Inline");
Inline702.url = new MFString(new java.lang.String["SriCampus115.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus115.x3d","SriCampus115.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus115.x3d"]);
Transform701.children = new MFNode();

Transform701.children[0] = Inline702;

Transform700.children = new MFNode();

Transform700.children[0] = Transform701;

Transform699.children = new MFNode();

Transform699.children[0] = Transform700;

GeoLocation697.children = new MFNode();

GeoLocation697.children[0] = Transform699;

Group5.children[116] = GeoLocation697;

let GeoLocation703 = browser.currentScene.createNode("GeoLocation");
GeoLocation703.geoCoords = new SFVec3d(new double[37.45527295154821,-122.17532124323364,6.476923021487892]);
let GeoOrigin704 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin704.USE = "LVCS-ORIGIN";
GeoLocation703.geoOrigin = GeoOrigin704;

let Transform705 = browser.currentScene.createNode("Transform");
Transform705.rotation = new SFRotation(new float[1,0,0,0]);
let Transform706 = browser.currentScene.createNode("Transform");
Transform706.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform707 = browser.currentScene.createNode("Transform");
let Inline708 = browser.currentScene.createNode("Inline");
Inline708.url = new MFString(new java.lang.String["SriCampus116.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus116.x3d","SriCampus116.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus116.x3d"]);
Transform707.children = new MFNode();

Transform707.children[0] = Inline708;

Transform706.children = new MFNode();

Transform706.children[0] = Transform707;

Transform705.children = new MFNode();

Transform705.children[0] = Transform706;

GeoLocation703.children = new MFNode();

GeoLocation703.children[0] = Transform705;

Group5.children[117] = GeoLocation703;

let GeoLocation709 = browser.currentScene.createNode("GeoLocation");
GeoLocation709.geoCoords = new SFVec3d(new double[37.45692705603369,-122.1733747901541,4.366944617591798]);
let GeoOrigin710 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin710.USE = "LVCS-ORIGIN";
GeoLocation709.geoOrigin = GeoOrigin710;

let Transform711 = browser.currentScene.createNode("Transform");
Transform711.rotation = new SFRotation(new float[1,0,0,0]);
let Transform712 = browser.currentScene.createNode("Transform");
Transform712.rotation = new SFRotation(new float[0,1,0,-0.5485743]);
let Transform713 = browser.currentScene.createNode("Transform");
let Inline714 = browser.currentScene.createNode("Inline");
Inline714.url = new MFString(new java.lang.String["SriCampus117.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus117.x3d","SriCampus117.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus117.x3d"]);
Transform713.children = new MFNode();

Transform713.children[0] = Inline714;

Transform712.children = new MFNode();

Transform712.children[0] = Transform713;

Transform711.children = new MFNode();

Transform711.children[0] = Transform712;

GeoLocation709.children = new MFNode();

GeoLocation709.children[0] = Transform711;

Group5.children[118] = GeoLocation709;

let GeoLocation715 = browser.currentScene.createNode("GeoLocation");
GeoLocation715.geoCoords = new SFVec3d(new double[37.45785850917333,-122.17548124695458,17.76672370173037]);
let GeoOrigin716 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin716.USE = "LVCS-ORIGIN";
GeoLocation715.geoOrigin = GeoOrigin716;

let Transform717 = browser.currentScene.createNode("Transform");
Transform717.rotation = new SFRotation(new float[1,0,0,0]);
let Transform718 = browser.currentScene.createNode("Transform");
Transform718.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform719 = browser.currentScene.createNode("Transform");
let Inline720 = browser.currentScene.createNode("Inline");
Inline720.url = new MFString(new java.lang.String["SriCampus118.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus118.x3d","SriCampus118.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus118.x3d"]);
Transform719.children = new MFNode();

Transform719.children[0] = Inline720;

Transform718.children = new MFNode();

Transform718.children[0] = Transform719;

Transform717.children = new MFNode();

Transform717.children[0] = Transform718;

GeoLocation715.children = new MFNode();

GeoLocation715.children[0] = Transform717;

Group5.children[119] = GeoLocation715;

let GeoLocation721 = browser.currentScene.createNode("GeoLocation");
GeoLocation721.geoCoords = new SFVec3d(new double[37.4562485875788,-122.17668959142121,18.037382354959846]);
let GeoOrigin722 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin722.USE = "LVCS-ORIGIN";
GeoLocation721.geoOrigin = GeoOrigin722;

let Transform723 = browser.currentScene.createNode("Transform");
Transform723.rotation = new SFRotation(new float[1,0,0,0]);
let Transform724 = browser.currentScene.createNode("Transform");
Transform724.rotation = new SFRotation(new float[0,1,0,0.21222101]);
let Transform725 = browser.currentScene.createNode("Transform");
let Inline726 = browser.currentScene.createNode("Inline");
Inline726.url = new MFString(new java.lang.String["SriCampus119.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus119.x3d","SriCampus119.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus119.x3d"]);
Transform725.children = new MFNode();

Transform725.children[0] = Inline726;

Transform724.children = new MFNode();

Transform724.children[0] = Transform725;

Transform723.children = new MFNode();

Transform723.children[0] = Transform724;

GeoLocation721.children = new MFNode();

GeoLocation721.children[0] = Transform723;

Group5.children[120] = GeoLocation721;

let GeoLocation727 = browser.currentScene.createNode("GeoLocation");
GeoLocation727.geoCoords = new SFVec3d(new double[37.45810786809718,-122.17212035970775,4.777719925157726]);
let GeoOrigin728 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin728.USE = "LVCS-ORIGIN";
GeoLocation727.geoOrigin = GeoOrigin728;

let Transform729 = browser.currentScene.createNode("Transform");
Transform729.rotation = new SFRotation(new float[1,0,0,0]);
let Transform730 = browser.currentScene.createNode("Transform");
Transform730.rotation = new SFRotation(new float[0,1,0,-1.2557627]);
let Transform731 = browser.currentScene.createNode("Transform");
let Inline732 = browser.currentScene.createNode("Inline");
Inline732.url = new MFString(new java.lang.String["SriCampus120.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus120.x3d","SriCampus120.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus120.x3d"]);
Transform731.children = new MFNode();

Transform731.children[0] = Inline732;

Transform730.children = new MFNode();

Transform730.children[0] = Transform731;

Transform729.children = new MFNode();

Transform729.children[0] = Transform730;

GeoLocation727.children = new MFNode();

GeoLocation727.children[0] = Transform729;

Group5.children[121] = GeoLocation727;

let GeoLocation733 = browser.currentScene.createNode("GeoLocation");
GeoLocation733.geoCoords = new SFVec3d(new double[37.455266201390465,-122.17506929403226,6.281517929397523]);
let GeoOrigin734 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin734.USE = "LVCS-ORIGIN";
GeoLocation733.geoOrigin = GeoOrigin734;

let Transform735 = browser.currentScene.createNode("Transform");
Transform735.rotation = new SFRotation(new float[1,0,0,0]);
let Transform736 = browser.currentScene.createNode("Transform");
Transform736.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform737 = browser.currentScene.createNode("Transform");
let Inline738 = browser.currentScene.createNode("Inline");
Inline738.url = new MFString(new java.lang.String["SriCampus121.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus121.x3d","SriCampus121.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus121.x3d"]);
Transform737.children = new MFNode();

Transform737.children[0] = Inline738;

Transform736.children = new MFNode();

Transform736.children[0] = Transform737;

Transform735.children = new MFNode();

Transform735.children[0] = Transform736;

GeoLocation733.children = new MFNode();

GeoLocation733.children[0] = Transform735;

Group5.children[122] = GeoLocation733;

let GeoLocation739 = browser.currentScene.createNode("GeoLocation");
GeoLocation739.geoCoords = new SFVec3d(new double[37.45592875610246,-122.17663227644208,13.852776668034494]);
let GeoOrigin740 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin740.USE = "LVCS-ORIGIN";
GeoLocation739.geoOrigin = GeoOrigin740;

let Transform741 = browser.currentScene.createNode("Transform");
Transform741.rotation = new SFRotation(new float[1,0,0,0]);
let Transform742 = browser.currentScene.createNode("Transform");
Transform742.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform743 = browser.currentScene.createNode("Transform");
let Inline744 = browser.currentScene.createNode("Inline");
Inline744.url = new MFString(new java.lang.String["SriCampus122.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus122.x3d","SriCampus122.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus122.x3d"]);
Transform743.children = new MFNode();

Transform743.children[0] = Inline744;

Transform742.children = new MFNode();

Transform742.children[0] = Transform743;

Transform741.children = new MFNode();

Transform741.children[0] = Transform742;

GeoLocation739.children = new MFNode();

GeoLocation739.children[0] = Transform741;

Group5.children[123] = GeoLocation739;

let GeoLocation745 = browser.currentScene.createNode("GeoLocation");
GeoLocation745.geoCoords = new SFVec3d(new double[37.45795652492048,-122.17221399048172,4.766224743798375]);
let GeoOrigin746 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin746.USE = "LVCS-ORIGIN";
GeoLocation745.geoOrigin = GeoOrigin746;

let Transform747 = browser.currentScene.createNode("Transform");
Transform747.rotation = new SFRotation(new float[1,0,0,0]);
let Transform748 = browser.currentScene.createNode("Transform");
Transform748.rotation = new SFRotation(new float[0,1,0,0.33597755]);
let Transform749 = browser.currentScene.createNode("Transform");
let Inline750 = browser.currentScene.createNode("Inline");
Inline750.url = new MFString(new java.lang.String["SriCampus123.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus123.x3d","SriCampus123.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus123.x3d"]);
Transform749.children = new MFNode();

Transform749.children[0] = Inline750;

Transform748.children = new MFNode();

Transform748.children[0] = Transform749;

Transform747.children = new MFNode();

Transform747.children[0] = Transform748;

GeoLocation745.children = new MFNode();

GeoLocation745.children[0] = Transform747;

Group5.children[124] = GeoLocation745;

let GeoLocation751 = browser.currentScene.createNode("GeoLocation");
GeoLocation751.geoCoords = new SFVec3d(new double[37.45714439718839,-122.17676921602542,5.741842704825103]);
let GeoOrigin752 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin752.USE = "LVCS-ORIGIN";
GeoLocation751.geoOrigin = GeoOrigin752;

let Transform753 = browser.currentScene.createNode("Transform");
Transform753.rotation = new SFRotation(new float[1,0,0,0]);
let Transform754 = browser.currentScene.createNode("Transform");
Transform754.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform755 = browser.currentScene.createNode("Transform");
let Inline756 = browser.currentScene.createNode("Inline");
Inline756.url = new MFString(new java.lang.String["SriCampus124.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus124.x3d","SriCampus124.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus124.x3d"]);
Transform755.children = new MFNode();

Transform755.children[0] = Inline756;

Transform754.children = new MFNode();

Transform754.children[0] = Transform755;

Transform753.children = new MFNode();

Transform753.children[0] = Transform754;

GeoLocation751.children = new MFNode();

GeoLocation751.children[0] = Transform753;

Group5.children[125] = GeoLocation751;

let GeoLocation757 = browser.currentScene.createNode("GeoLocation");
GeoLocation757.geoCoords = new SFVec3d(new double[37.458446345493876,-122.17621659673107,12.486853444948792]);
let GeoOrigin758 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin758.USE = "LVCS-ORIGIN";
GeoLocation757.geoOrigin = GeoOrigin758;

let Transform759 = browser.currentScene.createNode("Transform");
Transform759.rotation = new SFRotation(new float[1,0,0,0]);
let Transform760 = browser.currentScene.createNode("Transform");
let Transform761 = browser.currentScene.createNode("Transform");
let Inline762 = browser.currentScene.createNode("Inline");
Inline762.url = new MFString(new java.lang.String["SriCampus125.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus125.x3d","SriCampus125.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus125.x3d"]);
Transform761.children = new MFNode();

Transform761.children[0] = Inline762;

Transform760.children = new MFNode();

Transform760.children[0] = Transform761;

Transform759.children = new MFNode();

Transform759.children[0] = Transform760;

GeoLocation757.children = new MFNode();

GeoLocation757.children[0] = Transform759;

Group5.children[126] = GeoLocation757;

let GeoLocation763 = browser.currentScene.createNode("GeoLocation");
GeoLocation763.geoCoords = new SFVec3d(new double[37.45479119875997,-122.17587485217825,12.241555511020124]);
let GeoOrigin764 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin764.USE = "LVCS-ORIGIN";
GeoLocation763.geoOrigin = GeoOrigin764;

let Transform765 = browser.currentScene.createNode("Transform");
Transform765.rotation = new SFRotation(new float[1,0,0,0]);
let Transform766 = browser.currentScene.createNode("Transform");
let Transform767 = browser.currentScene.createNode("Transform");
let Inline768 = browser.currentScene.createNode("Inline");
Inline768.url = new MFString(new java.lang.String["SriCampus126.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus126.x3d","SriCampus126.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus126.x3d"]);
Transform767.children = new MFNode();

Transform767.children[0] = Inline768;

Transform766.children = new MFNode();

Transform766.children[0] = Transform767;

Transform765.children = new MFNode();

Transform765.children[0] = Transform766;

GeoLocation763.children = new MFNode();

GeoLocation763.children[0] = Transform765;

Group5.children[127] = GeoLocation763;

let GeoLocation769 = browser.currentScene.createNode("GeoLocation");
GeoLocation769.geoCoords = new SFVec3d(new double[37.455637529653934,-122.17805175366064,9.068381279706955]);
let GeoOrigin770 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin770.USE = "LVCS-ORIGIN";
GeoLocation769.geoOrigin = GeoOrigin770;

let Transform771 = browser.currentScene.createNode("Transform");
Transform771.rotation = new SFRotation(new float[1,0,0,0]);
let Transform772 = browser.currentScene.createNode("Transform");
Transform772.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform773 = browser.currentScene.createNode("Transform");
let Inline774 = browser.currentScene.createNode("Inline");
Inline774.url = new MFString(new java.lang.String["SriCampus127.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus127.x3d","SriCampus127.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus127.x3d"]);
Transform773.children = new MFNode();

Transform773.children[0] = Inline774;

Transform772.children = new MFNode();

Transform772.children[0] = Transform773;

Transform771.children = new MFNode();

Transform771.children[0] = Transform772;

GeoLocation769.children = new MFNode();

GeoLocation769.children[0] = Transform771;

Group5.children[128] = GeoLocation769;

let GeoLocation775 = browser.currentScene.createNode("GeoLocation");
GeoLocation775.geoCoords = new SFVec3d(new double[37.45763170885517,-122.17283667995618,3.710161382332444]);
let GeoOrigin776 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin776.USE = "LVCS-ORIGIN";
GeoLocation775.geoOrigin = GeoOrigin776;

let Transform777 = browser.currentScene.createNode("Transform");
Transform777.rotation = new SFRotation(new float[1,0,0,0]);
let Transform778 = browser.currentScene.createNode("Transform");
Transform778.rotation = new SFRotation(new float[0,1,0,-0.51614106]);
let Transform779 = browser.currentScene.createNode("Transform");
let Inline780 = browser.currentScene.createNode("Inline");
Inline780.url = new MFString(new java.lang.String["SriCampus128.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus128.x3d","SriCampus128.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus128.x3d"]);
Transform779.children = new MFNode();

Transform779.children[0] = Inline780;

Transform778.children = new MFNode();

Transform778.children[0] = Transform779;

Transform777.children = new MFNode();

Transform777.children[0] = Transform778;

GeoLocation775.children = new MFNode();

GeoLocation775.children[0] = Transform777;

Group5.children[129] = GeoLocation775;

let GeoLocation781 = browser.currentScene.createNode("GeoLocation");
GeoLocation781.geoCoords = new SFVec3d(new double[37.4552030561581,-122.17537929603283,17.37209532316774]);
let GeoOrigin782 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin782.USE = "LVCS-ORIGIN";
GeoLocation781.geoOrigin = GeoOrigin782;

let Transform783 = browser.currentScene.createNode("Transform");
Transform783.rotation = new SFRotation(new float[1,0,0,0]);
let Transform784 = browser.currentScene.createNode("Transform");
let Transform785 = browser.currentScene.createNode("Transform");
let Inline786 = browser.currentScene.createNode("Inline");
Inline786.url = new MFString(new java.lang.String["SriCampus129.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d","SriCampus129.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d"]);
Transform785.children = new MFNode();

Transform785.children[0] = Inline786;

Transform784.children = new MFNode();

Transform784.children[0] = Transform785;

Transform783.children = new MFNode();

Transform783.children[0] = Transform784;

GeoLocation781.children = new MFNode();

GeoLocation781.children[0] = Transform783;

Group5.children[130] = GeoLocation781;

let GeoLocation787 = browser.currentScene.createNode("GeoLocation");
GeoLocation787.geoCoords = new SFVec3d(new double[37.45932899377421,-122.17558236032434,6.673216645605862]);
let GeoOrigin788 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin788.USE = "LVCS-ORIGIN";
GeoLocation787.geoOrigin = GeoOrigin788;

let Transform789 = browser.currentScene.createNode("Transform");
Transform789.rotation = new SFRotation(new float[1,0,0,0]);
let Transform790 = browser.currentScene.createNode("Transform");
let Transform791 = browser.currentScene.createNode("Transform");
let Inline792 = browser.currentScene.createNode("Inline");
Inline792.url = new MFString(new java.lang.String["SriCampus130.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus130.x3d","SriCampus130.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus130.x3d"]);
Transform791.children = new MFNode();

Transform791.children[0] = Inline792;

Transform790.children = new MFNode();

Transform790.children[0] = Transform791;

Transform789.children = new MFNode();

Transform789.children[0] = Transform790;

GeoLocation787.children = new MFNode();

GeoLocation787.children[0] = Transform789;

Group5.children[131] = GeoLocation787;

let GeoLocation793 = browser.currentScene.createNode("GeoLocation");
GeoLocation793.geoCoords = new SFVec3d(new double[37.45589059230768,-122.17663857154662,13.849952574819326]);
let GeoOrigin794 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin794.USE = "LVCS-ORIGIN";
GeoLocation793.geoOrigin = GeoOrigin794;

let Transform795 = browser.currentScene.createNode("Transform");
Transform795.rotation = new SFRotation(new float[1,0,0,0]);
let Transform796 = browser.currentScene.createNode("Transform");
Transform796.rotation = new SFRotation(new float[0,1,0,0.06768273]);
let Transform797 = browser.currentScene.createNode("Transform");
let Inline798 = browser.currentScene.createNode("Inline");
Inline798.url = new MFString(new java.lang.String["SriCampus131.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus131.x3d","SriCampus131.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus131.x3d"]);
Transform797.children = new MFNode();

Transform797.children[0] = Inline798;

Transform796.children = new MFNode();

Transform796.children[0] = Transform797;

Transform795.children = new MFNode();

Transform795.children[0] = Transform796;

GeoLocation793.children = new MFNode();

GeoLocation793.children[0] = Transform795;

Group5.children[132] = GeoLocation793;

let GeoLocation799 = browser.currentScene.createNode("GeoLocation");
GeoLocation799.geoCoords = new SFVec3d(new double[37.45918042954255,-122.1754082085766,5.576121235266328]);
let GeoOrigin800 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin800.USE = "LVCS-ORIGIN";
GeoLocation799.geoOrigin = GeoOrigin800;

let Transform801 = browser.currentScene.createNode("Transform");
Transform801.rotation = new SFRotation(new float[1,0,0,0]);
let Transform802 = browser.currentScene.createNode("Transform");
Transform802.rotation = new SFRotation(new float[0,1,0,-0.5679538]);
let Transform803 = browser.currentScene.createNode("Transform");
let Inline804 = browser.currentScene.createNode("Inline");
Inline804.url = new MFString(new java.lang.String["SriCampus132.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus132.x3d","SriCampus132.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus132.x3d"]);
Transform803.children = new MFNode();

Transform803.children[0] = Inline804;

Transform802.children = new MFNode();

Transform802.children[0] = Transform803;

Transform801.children = new MFNode();

Transform801.children[0] = Transform802;

GeoLocation799.children = new MFNode();

GeoLocation799.children[0] = Transform801;

Group5.children[133] = GeoLocation799;

let GeoLocation805 = browser.currentScene.createNode("GeoLocation");
GeoLocation805.geoCoords = new SFVec3d(new double[37.45513105519014,-122.17542623141605,15.226345616392791]);
let GeoOrigin806 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin806.USE = "LVCS-ORIGIN";
GeoLocation805.geoOrigin = GeoOrigin806;

let Transform807 = browser.currentScene.createNode("Transform");
Transform807.rotation = new SFRotation(new float[1,0,0,0]);
let Transform808 = browser.currentScene.createNode("Transform");
Transform808.rotation = new SFRotation(new float[0,1,0,-1.6047001]);
let Transform809 = browser.currentScene.createNode("Transform");
let Inline810 = browser.currentScene.createNode("Inline");
Inline810.url = new MFString(new java.lang.String["SriCampus133.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus133.x3d","SriCampus133.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus133.x3d"]);
Transform809.children = new MFNode();

Transform809.children[0] = Inline810;

Transform808.children = new MFNode();

Transform808.children[0] = Transform809;

Transform807.children = new MFNode();

Transform807.children[0] = Transform808;

GeoLocation805.children = new MFNode();

GeoLocation805.children[0] = Transform807;

Group5.children[134] = GeoLocation805;

let GeoLocation811 = browser.currentScene.createNode("GeoLocation");
GeoLocation811.geoCoords = new SFVec3d(new double[37.455833276710194,-122.17782281798755,4.371283515356481]);
let GeoOrigin812 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin812.USE = "LVCS-ORIGIN";
GeoLocation811.geoOrigin = GeoOrigin812;

let Transform813 = browser.currentScene.createNode("Transform");
Transform813.rotation = new SFRotation(new float[1,0,0,0]);
let Transform814 = browser.currentScene.createNode("Transform");
Transform814.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform815 = browser.currentScene.createNode("Transform");
let Inline816 = browser.currentScene.createNode("Inline");
Inline816.url = new MFString(new java.lang.String["SriCampus134.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus134.x3d","SriCampus134.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus134.x3d"]);
Transform815.children = new MFNode();

Transform815.children[0] = Inline816;

Transform814.children = new MFNode();

Transform814.children[0] = Transform815;

Transform813.children = new MFNode();

Transform813.children[0] = Transform814;

GeoLocation811.children = new MFNode();

GeoLocation811.children[0] = Transform813;

Group5.children[135] = GeoLocation811;

let GeoLocation817 = browser.currentScene.createNode("GeoLocation");
GeoLocation817.geoCoords = new SFVec3d(new double[37.455470051193934,-122.1764647666282,4.49514652043581]);
let GeoOrigin818 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin818.USE = "LVCS-ORIGIN";
GeoLocation817.geoOrigin = GeoOrigin818;

let Transform819 = browser.currentScene.createNode("Transform");
Transform819.rotation = new SFRotation(new float[1,0,0,0]);
let Transform820 = browser.currentScene.createNode("Transform");
Transform820.rotation = new SFRotation(new float[0,1,0,-2.1285856]);
let Transform821 = browser.currentScene.createNode("Transform");
let Inline822 = browser.currentScene.createNode("Inline");
Inline822.url = new MFString(new java.lang.String["SriCampus135.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus135.x3d","SriCampus135.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus135.x3d"]);
Transform821.children = new MFNode();

Transform821.children[0] = Inline822;

Transform820.children = new MFNode();

Transform820.children[0] = Transform821;

Transform819.children = new MFNode();

Transform819.children[0] = Transform820;

GeoLocation817.children = new MFNode();

GeoLocation817.children[0] = Transform819;

Group5.children[136] = GeoLocation817;

let GeoLocation823 = browser.currentScene.createNode("GeoLocation");
GeoLocation823.geoCoords = new SFVec3d(new double[37.45657234678347,-122.17339401563034,2.7787711387500167]);
let GeoOrigin824 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin824.USE = "LVCS-ORIGIN";
GeoLocation823.geoOrigin = GeoOrigin824;

let Transform825 = browser.currentScene.createNode("Transform");
Transform825.rotation = new SFRotation(new float[1,0,0,0]);
let Transform826 = browser.currentScene.createNode("Transform");
Transform826.rotation = new SFRotation(new float[0,1,0,-2.1507866]);
let Transform827 = browser.currentScene.createNode("Transform");
let Inline828 = browser.currentScene.createNode("Inline");
Inline828.url = new MFString(new java.lang.String["SriCampus136.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus136.x3d","SriCampus136.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus136.x3d"]);
Transform827.children = new MFNode();

Transform827.children[0] = Inline828;

Transform826.children = new MFNode();

Transform826.children[0] = Transform827;

Transform825.children = new MFNode();

Transform825.children[0] = Transform826;

GeoLocation823.children = new MFNode();

GeoLocation823.children[0] = Transform825;

Group5.children[137] = GeoLocation823;

let GeoLocation829 = browser.currentScene.createNode("GeoLocation");
GeoLocation829.geoCoords = new SFVec3d(new double[37.45631310248525,-122.17629745601054,23.58098861668259]);
let GeoOrigin830 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin830.USE = "LVCS-ORIGIN";
GeoLocation829.geoOrigin = GeoOrigin830;

let Transform831 = browser.currentScene.createNode("Transform");
Transform831.rotation = new SFRotation(new float[1,0,0,0]);
let Transform832 = browser.currentScene.createNode("Transform");
let Transform833 = browser.currentScene.createNode("Transform");
let Inline834 = browser.currentScene.createNode("Inline");
Inline834.url = new MFString(new java.lang.String["SriCampus137.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus137.x3d","SriCampus137.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus137.x3d"]);
Transform833.children = new MFNode();

Transform833.children[0] = Inline834;

Transform832.children = new MFNode();

Transform832.children[0] = Transform833;

Transform831.children = new MFNode();

Transform831.children[0] = Transform832;

GeoLocation829.children = new MFNode();

GeoLocation829.children[0] = Transform831;

Group5.children[138] = GeoLocation829;

let GeoLocation835 = browser.currentScene.createNode("GeoLocation");
GeoLocation835.geoCoords = new SFVec3d(new double[37.455171973416775,-122.17478671098695,5.2806648556143045]);
let GeoOrigin836 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin836.USE = "LVCS-ORIGIN";
GeoLocation835.geoOrigin = GeoOrigin836;

let Transform837 = browser.currentScene.createNode("Transform");
Transform837.rotation = new SFRotation(new float[1,0,0,0]);
let Transform838 = browser.currentScene.createNode("Transform");
Transform838.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform839 = browser.currentScene.createNode("Transform");
let Inline840 = browser.currentScene.createNode("Inline");
Inline840.url = new MFString(new java.lang.String["SriCampus138.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus138.x3d","SriCampus138.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus138.x3d"]);
Transform839.children = new MFNode();

Transform839.children[0] = Inline840;

Transform838.children = new MFNode();

Transform838.children[0] = Transform839;

Transform837.children = new MFNode();

Transform837.children[0] = Transform838;

GeoLocation835.children = new MFNode();

GeoLocation835.children[0] = Transform837;

Group5.children[139] = GeoLocation835;

let GeoLocation841 = browser.currentScene.createNode("GeoLocation");
GeoLocation841.geoCoords = new SFVec3d(new double[37.457562174137806,-122.17653367409845,5.033575700595975]);
let GeoOrigin842 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin842.USE = "LVCS-ORIGIN";
GeoLocation841.geoOrigin = GeoOrigin842;

let Transform843 = browser.currentScene.createNode("Transform");
Transform843.rotation = new SFRotation(new float[1,0,0,0]);
let Transform844 = browser.currentScene.createNode("Transform");
Transform844.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform845 = browser.currentScene.createNode("Transform");
let Inline846 = browser.currentScene.createNode("Inline");
Inline846.url = new MFString(new java.lang.String["SriCampus139.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus139.x3d","SriCampus139.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus139.x3d"]);
Transform845.children = new MFNode();

Transform845.children[0] = Inline846;

Transform844.children = new MFNode();

Transform844.children[0] = Transform845;

Transform843.children = new MFNode();

Transform843.children[0] = Transform844;

GeoLocation841.children = new MFNode();

GeoLocation841.children[0] = Transform843;

Group5.children[140] = GeoLocation841;

let GeoLocation847 = browser.currentScene.createNode("GeoLocation");
GeoLocation847.geoCoords = new SFVec3d(new double[37.45801521983128,-122.1757853295299,6.195992290042341]);
let GeoOrigin848 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin848.USE = "LVCS-ORIGIN";
GeoLocation847.geoOrigin = GeoOrigin848;

let Transform849 = browser.currentScene.createNode("Transform");
Transform849.rotation = new SFRotation(new float[1,0,0,0]);
let Transform850 = browser.currentScene.createNode("Transform");
Transform850.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform851 = browser.currentScene.createNode("Transform");
let Inline852 = browser.currentScene.createNode("Inline");
Inline852.url = new MFString(new java.lang.String["SriCampus140.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus140.x3d","SriCampus140.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus140.x3d"]);
Transform851.children = new MFNode();

Transform851.children[0] = Inline852;

Transform850.children = new MFNode();

Transform850.children[0] = Transform851;

Transform849.children = new MFNode();

Transform849.children[0] = Transform850;

GeoLocation847.children = new MFNode();

GeoLocation847.children[0] = Transform849;

Group5.children[141] = GeoLocation847;

let GeoLocation853 = browser.currentScene.createNode("GeoLocation");
GeoLocation853.geoCoords = new SFVec3d(new double[37.45625863524508,-122.17663801938741,9.305874523706734]);
let GeoOrigin854 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin854.USE = "LVCS-ORIGIN";
GeoLocation853.geoOrigin = GeoOrigin854;

let Transform855 = browser.currentScene.createNode("Transform");
Transform855.rotation = new SFRotation(new float[1,0,0,0]);
let Transform856 = browser.currentScene.createNode("Transform");
Transform856.rotation = new SFRotation(new float[0,1,0,0.22040787]);
let Transform857 = browser.currentScene.createNode("Transform");
let Inline858 = browser.currentScene.createNode("Inline");
Inline858.url = new MFString(new java.lang.String["SriCampus141.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus141.x3d","SriCampus141.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus141.x3d"]);
Transform857.children = new MFNode();

Transform857.children[0] = Inline858;

Transform856.children = new MFNode();

Transform856.children[0] = Transform857;

Transform855.children = new MFNode();

Transform855.children[0] = Transform856;

GeoLocation853.children = new MFNode();

GeoLocation853.children[0] = Transform855;

Group5.children[142] = GeoLocation853;

let GeoLocation859 = browser.currentScene.createNode("GeoLocation");
GeoLocation859.geoCoords = new SFVec3d(new double[37.457739055012425,-122.1734358580361,5.76438597496599]);
let GeoOrigin860 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin860.USE = "LVCS-ORIGIN";
GeoLocation859.geoOrigin = GeoOrigin860;

let Transform861 = browser.currentScene.createNode("Transform");
Transform861.rotation = new SFRotation(new float[1,0,0,0]);
let Transform862 = browser.currentScene.createNode("Transform");
Transform862.rotation = new SFRotation(new float[0,1,0,1.0156201]);
let Transform863 = browser.currentScene.createNode("Transform");
let Inline864 = browser.currentScene.createNode("Inline");
Inline864.url = new MFString(new java.lang.String["SriCampus142.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus142.x3d","SriCampus142.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus142.x3d"]);
Transform863.children = new MFNode();

Transform863.children[0] = Inline864;

Transform862.children = new MFNode();

Transform862.children[0] = Transform863;

Transform861.children = new MFNode();

Transform861.children[0] = Transform862;

GeoLocation859.children = new MFNode();

GeoLocation859.children[0] = Transform861;

Group5.children[143] = GeoLocation859;

let GeoLocation865 = browser.currentScene.createNode("GeoLocation");
GeoLocation865.geoCoords = new SFVec3d(new double[37.45598818694582,-122.17605942042513,9.153055736795068]);
let GeoOrigin866 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin866.USE = "LVCS-ORIGIN";
GeoLocation865.geoOrigin = GeoOrigin866;

let Transform867 = browser.currentScene.createNode("Transform");
Transform867.rotation = new SFRotation(new float[1,0,0,0]);
let Transform868 = browser.currentScene.createNode("Transform");
Transform868.rotation = new SFRotation(new float[0,1,0,0.22040787]);
let Transform869 = browser.currentScene.createNode("Transform");
let Inline870 = browser.currentScene.createNode("Inline");
Inline870.url = new MFString(new java.lang.String["SriCampus143.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus143.x3d","SriCampus143.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus143.x3d"]);
Transform869.children = new MFNode();

Transform869.children[0] = Inline870;

Transform868.children = new MFNode();

Transform868.children[0] = Transform869;

Transform867.children = new MFNode();

Transform867.children[0] = Transform868;

GeoLocation865.children = new MFNode();

GeoLocation865.children[0] = Transform867;

Group5.children[144] = GeoLocation865;

let GeoLocation871 = browser.currentScene.createNode("GeoLocation");
GeoLocation871.geoCoords = new SFVec3d(new double[37.4576116909627,-122.17360001041664,5.102806192822754]);
let GeoOrigin872 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin872.USE = "LVCS-ORIGIN";
GeoLocation871.geoOrigin = GeoOrigin872;

let Transform873 = browser.currentScene.createNode("Transform");
Transform873.rotation = new SFRotation(new float[1,0,0,0]);
let Transform874 = browser.currentScene.createNode("Transform");
let Transform875 = browser.currentScene.createNode("Transform");
let Inline876 = browser.currentScene.createNode("Inline");
Inline876.url = new MFString(new java.lang.String["SriCampus144.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus144.x3d","SriCampus144.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus144.x3d"]);
Transform875.children = new MFNode();

Transform875.children[0] = Inline876;

Transform874.children = new MFNode();

Transform874.children[0] = Transform875;

Transform873.children = new MFNode();

Transform873.children[0] = Transform874;

GeoLocation871.children = new MFNode();

GeoLocation871.children[0] = Transform873;

Group5.children[145] = GeoLocation871;

let GeoLocation877 = browser.currentScene.createNode("GeoLocation");
GeoLocation877.geoCoords = new SFVec3d(new double[37.45894836101852,-122.17384159223147,6.580874713137746]);
let GeoOrigin878 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin878.USE = "LVCS-ORIGIN";
GeoLocation877.geoOrigin = GeoOrigin878;

let Transform879 = browser.currentScene.createNode("Transform");
Transform879.rotation = new SFRotation(new float[1,0,0,0]);
let Transform880 = browser.currentScene.createNode("Transform");
Transform880.rotation = new SFRotation(new float[0,1,0,-1.2557627]);
let Transform881 = browser.currentScene.createNode("Transform");
let Inline882 = browser.currentScene.createNode("Inline");
Inline882.url = new MFString(new java.lang.String["SriCampus145.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus145.x3d","SriCampus145.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus145.x3d"]);
Transform881.children = new MFNode();

Transform881.children[0] = Inline882;

Transform880.children = new MFNode();

Transform880.children[0] = Transform881;

Transform879.children = new MFNode();

Transform879.children[0] = Transform880;

GeoLocation877.children = new MFNode();

GeoLocation877.children[0] = Transform879;

Group5.children[146] = GeoLocation877;

let GeoLocation883 = browser.currentScene.createNode("GeoLocation");
GeoLocation883.geoCoords = new SFVec3d(new double[37.45776336144376,-122.17341476074354,5.653091097250581]);
let GeoOrigin884 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin884.USE = "LVCS-ORIGIN";
GeoLocation883.geoOrigin = GeoOrigin884;

let Transform885 = browser.currentScene.createNode("Transform");
Transform885.rotation = new SFRotation(new float[1,0,0,0]);
let Transform886 = browser.currentScene.createNode("Transform");
Transform886.rotation = new SFRotation(new float[0,1,0,-0.5436424]);
let Transform887 = browser.currentScene.createNode("Transform");
let Inline888 = browser.currentScene.createNode("Inline");
Inline888.url = new MFString(new java.lang.String["SriCampus146.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus146.x3d","SriCampus146.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus146.x3d"]);
Transform887.children = new MFNode();

Transform887.children[0] = Inline888;

Transform886.children = new MFNode();

Transform886.children[0] = Transform887;

Transform885.children = new MFNode();

Transform885.children[0] = Transform886;

GeoLocation883.children = new MFNode();

GeoLocation883.children[0] = Transform885;

Group5.children[147] = GeoLocation883;

let GeoLocation889 = browser.currentScene.createNode("GeoLocation");
GeoLocation889.geoCoords = new SFVec3d(new double[37.45516876487382,-122.17770066739573,3.311441686935723]);
let GeoOrigin890 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin890.USE = "LVCS-ORIGIN";
GeoLocation889.geoOrigin = GeoOrigin890;

let Transform891 = browser.currentScene.createNode("Transform");
Transform891.rotation = new SFRotation(new float[1,0,0,0]);
let Transform892 = browser.currentScene.createNode("Transform");
Transform892.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform893 = browser.currentScene.createNode("Transform");
let Inline894 = browser.currentScene.createNode("Inline");
Inline894.url = new MFString(new java.lang.String["SriCampus147.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus147.x3d","SriCampus147.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus147.x3d"]);
Transform893.children = new MFNode();

Transform893.children[0] = Inline894;

Transform892.children = new MFNode();

Transform892.children[0] = Transform893;

Transform891.children = new MFNode();

Transform891.children[0] = Transform892;

GeoLocation889.children = new MFNode();

GeoLocation889.children[0] = Transform891;

Group5.children[148] = GeoLocation889;

let GeoLocation895 = browser.currentScene.createNode("GeoLocation");
GeoLocation895.geoCoords = new SFVec3d(new double[37.455490754774395,-122.1758039372311,3.435827133245766]);
let GeoOrigin896 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin896.USE = "LVCS-ORIGIN";
GeoLocation895.geoOrigin = GeoOrigin896;

let Transform897 = browser.currentScene.createNode("Transform");
Transform897.rotation = new SFRotation(new float[1,0,0,0]);
let Transform898 = browser.currentScene.createNode("Transform");
Transform898.rotation = new SFRotation(new float[0,1,0,-0.5448796]);
let Transform899 = browser.currentScene.createNode("Transform");
let Inline900 = browser.currentScene.createNode("Inline");
Inline900.url = new MFString(new java.lang.String["SriCampus148.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus148.x3d","SriCampus148.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus148.x3d"]);
Transform899.children = new MFNode();

Transform899.children[0] = Inline900;

Transform898.children = new MFNode();

Transform898.children[0] = Transform899;

Transform897.children = new MFNode();

Transform897.children[0] = Transform898;

GeoLocation895.children = new MFNode();

GeoLocation895.children[0] = Transform897;

Group5.children[149] = GeoLocation895;

let GeoLocation901 = browser.currentScene.createNode("GeoLocation");
GeoLocation901.geoCoords = new SFVec3d(new double[37.45752755262736,-122.17293579558574,11.593646936118603]);
let GeoOrigin902 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin902.USE = "LVCS-ORIGIN";
GeoLocation901.geoOrigin = GeoOrigin902;

let Transform903 = browser.currentScene.createNode("Transform");
Transform903.rotation = new SFRotation(new float[1,0,0,0]);
let Transform904 = browser.currentScene.createNode("Transform");
let Transform905 = browser.currentScene.createNode("Transform");
let Inline906 = browser.currentScene.createNode("Inline");
Inline906.url = new MFString(new java.lang.String["SriCampus149.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus149.x3d","SriCampus149.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus149.x3d"]);
Transform905.children = new MFNode();

Transform905.children[0] = Inline906;

Transform904.children = new MFNode();

Transform904.children[0] = Transform905;

Transform903.children = new MFNode();

Transform903.children[0] = Transform904;

GeoLocation901.children = new MFNode();

GeoLocation901.children[0] = Transform903;

Group5.children[150] = GeoLocation901;

let GeoLocation907 = browser.currentScene.createNode("GeoLocation");
GeoLocation907.geoCoords = new SFVec3d(new double[37.45714391701085,-122.17638076991432,4.629718789830804]);
let GeoOrigin908 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin908.USE = "LVCS-ORIGIN";
GeoLocation907.geoOrigin = GeoOrigin908;

let Transform909 = browser.currentScene.createNode("Transform");
Transform909.rotation = new SFRotation(new float[1,0,0,0]);
let Transform910 = browser.currentScene.createNode("Transform");
Transform910.rotation = new SFRotation(new float[0,1,0,-0.5600868]);
let Transform911 = browser.currentScene.createNode("Transform");
let Inline912 = browser.currentScene.createNode("Inline");
Inline912.url = new MFString(new java.lang.String["SriCampus150.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus150.x3d","SriCampus150.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus150.x3d"]);
Transform911.children = new MFNode();

Transform911.children[0] = Inline912;

Transform910.children = new MFNode();

Transform910.children[0] = Transform911;

Transform909.children = new MFNode();

Transform909.children[0] = Transform910;

GeoLocation907.children = new MFNode();

GeoLocation907.children[0] = Transform909;

Group5.children[151] = GeoLocation907;

let GeoLocation913 = browser.currentScene.createNode("GeoLocation");
GeoLocation913.geoCoords = new SFVec3d(new double[37.45871951472387,-122.1737413157338,6.561306121759117]);
let GeoOrigin914 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin914.USE = "LVCS-ORIGIN";
GeoLocation913.geoOrigin = GeoOrigin914;

let Transform915 = browser.currentScene.createNode("Transform");
Transform915.rotation = new SFRotation(new float[1,0,0,0]);
let Transform916 = browser.currentScene.createNode("Transform");
Transform916.rotation = new SFRotation(new float[0,1,0,-1.2557627]);
let Transform917 = browser.currentScene.createNode("Transform");
let Inline918 = browser.currentScene.createNode("Inline");
Inline918.url = new MFString(new java.lang.String["SriCampus151.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus151.x3d","SriCampus151.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus151.x3d"]);
Transform917.children = new MFNode();

Transform917.children[0] = Inline918;

Transform916.children = new MFNode();

Transform916.children[0] = Transform917;

Transform915.children = new MFNode();

Transform915.children[0] = Transform916;

GeoLocation913.children = new MFNode();

GeoLocation913.children[0] = Transform915;

Group5.children[152] = GeoLocation913;

browser.currentScene.children[2] = Group5;

