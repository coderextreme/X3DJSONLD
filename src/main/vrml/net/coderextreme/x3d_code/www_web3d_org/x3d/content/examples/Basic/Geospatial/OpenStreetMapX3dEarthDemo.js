let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "OpenStreetMapX3dEarthDemo.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Group3 = browser.currentScene.createNode("Group");
//28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL, 21 level 34.53258110649095 69.13782119750976 Kabul, Afghanistan, 13 level 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA, 19 level 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA, 21 level 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI, 19 level 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom, 21 level 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA, 21 level 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA, 21 level 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL, 21 level -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil, 18 level 1.26299 103.837398 Port of Singapore, Singapore, 17 level 28.225 0.7 Algeria, Africa 13 level
let Inline4 = browser.currentScene.createNode("Inline");
Inline4.url = new MFString(new java.lang.String["/osmb0m","https://www.web3d.org/x3d/content/examples/Basic/Geospatial//osmb0m"]);
Group3.children = new MFNode();

Group3.children[0] = Inline4;

let GeoViewpoint5 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint5.description = "Default Viewpoint";
GeoViewpoint5.fieldOfView = 1.05;
GeoViewpoint5.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint5.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint5.position = new SFVec3d(new double[0,0,10000000]);
let GeoOrigin6 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin6.DEF = "ORIGIN";
GeoOrigin6.geoCoords = new SFVec3d(new double[0,0,-6378137]);
GeoOrigin6.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint5.geoOrigin = GeoOrigin6;

Group3.children[1] = GeoViewpoint5;

let GeoViewpoint7 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint7.DEF = "ZOOM";
GeoViewpoint7.description = "Zoom and Spin";
GeoViewpoint7.fieldOfView = 1.05;
GeoViewpoint7.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint7.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint7.position = new SFVec3d(new double[51.500152,-0.126236,10000000]);
let GeoOrigin8 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin8.USE = "ORIGIN";
GeoViewpoint7.geoOrigin = GeoOrigin8;

Group3.children[2] = GeoViewpoint7;

let GeoViewpoint9 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint9.DEF = "ZOOM1";
GeoViewpoint9.description = "Orange County Convention Center, Orlando, FL";
GeoViewpoint9.fieldOfView = 1.05;
GeoViewpoint9.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint9.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint9.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,500000]);
let GeoOrigin10 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin10.USE = "ORIGIN";
GeoViewpoint9.geoOrigin = GeoOrigin10;

Group3.children[3] = GeoViewpoint9;

let GeoViewpoint11 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint11.DEF = "ZOOM2";
GeoViewpoint11.description = "Kabul, Afghanistan";
GeoViewpoint11.fieldOfView = 1.05;
GeoViewpoint11.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint11.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint11.position = new SFVec3d(new double[34.53258110649095,69.13782119750977,500000]);
let GeoOrigin12 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin12.USE = "ORIGIN";
GeoViewpoint11.geoOrigin = GeoOrigin12;

Group3.children[4] = GeoViewpoint11;

let GeoViewpoint13 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint13.DEF = "ZOOM3";
GeoViewpoint13.description = "Naval Postgraduate School, Monterey, CA";
GeoViewpoint13.fieldOfView = 1.05;
GeoViewpoint13.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint13.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint13.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,500000]);
let GeoOrigin14 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin14.USE = "ORIGIN";
GeoViewpoint13.geoOrigin = GeoOrigin14;

Group3.children[5] = GeoViewpoint13;

let GeoViewpoint15 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint15.DEF = "ZOOM4";
GeoViewpoint15.description = "San Francisco Museum of Modern Art, San Francisco, CA";
GeoViewpoint15.fieldOfView = 1.05;
GeoViewpoint15.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint15.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint15.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,500000]);
let GeoOrigin16 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin16.USE = "ORIGIN";
GeoViewpoint15.geoOrigin = GeoOrigin16;

Group3.children[6] = GeoViewpoint15;

let GeoViewpoint17 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint17.DEF = "ZOOM5";
GeoViewpoint17.description = "Narragansett Bay, Newport, RI";
GeoViewpoint17.fieldOfView = 1.05;
GeoViewpoint17.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint17.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint17.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,500000]);
let GeoOrigin18 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin18.USE = "ORIGIN";
GeoViewpoint17.geoOrigin = GeoOrigin18;

Group3.children[7] = GeoViewpoint17;

let GeoViewpoint19 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint19.DEF = "ZOOM6";
GeoViewpoint19.description = "King's Cross, London, United Kingdom";
GeoViewpoint19.fieldOfView = 1.05;
GeoViewpoint19.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint19.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint19.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,500000]);
let GeoOrigin20 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin20.USE = "ORIGIN";
GeoViewpoint19.geoOrigin = GeoOrigin20;

Group3.children[8] = GeoViewpoint19;

let GeoViewpoint21 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint21.DEF = "ZOOM7";
GeoViewpoint21.description = "Scollay Square, Boston, MA";
GeoViewpoint21.fieldOfView = 1.05;
GeoViewpoint21.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint21.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint21.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,500000]);
let GeoOrigin22 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin22.USE = "ORIGIN";
GeoViewpoint21.geoOrigin = GeoOrigin22;

Group3.children[9] = GeoViewpoint21;

let GeoViewpoint23 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint23.DEF = "ZOOM8";
GeoViewpoint23.description = "San Diego Convention Center, San Diego, CA";
GeoViewpoint23.fieldOfView = 1.05;
GeoViewpoint23.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint23.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint23.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,500000]);
let GeoOrigin24 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin24.USE = "ORIGIN";
GeoViewpoint23.geoOrigin = GeoOrigin24;

Group3.children[10] = GeoViewpoint23;

let GeoViewpoint25 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint25.DEF = "ZOOM9";
GeoViewpoint25.description = "International Plaza Resort and Spa, Orlando, FL";
GeoViewpoint25.fieldOfView = 1.05;
GeoViewpoint25.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint25.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint25.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,500000]);
let GeoOrigin26 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin26.USE = "ORIGIN";
GeoViewpoint25.geoOrigin = GeoOrigin26;

Group3.children[11] = GeoViewpoint25;

let GeoViewpoint27 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint27.DEF = "ZOOM10";
GeoViewpoint27.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil";
GeoViewpoint27.fieldOfView = 1.05;
GeoViewpoint27.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint27.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint27.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,500000]);
let GeoOrigin28 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin28.USE = "ORIGIN";
GeoViewpoint27.geoOrigin = GeoOrigin28;

Group3.children[12] = GeoViewpoint27;

let GeoViewpoint29 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint29.DEF = "ZOOM11";
GeoViewpoint29.description = "Port of Singapore, Singapore";
GeoViewpoint29.fieldOfView = 1.05;
GeoViewpoint29.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint29.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint29.position = new SFVec3d(new double[1.26299,103.837398,500000]);
let GeoOrigin30 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin30.USE = "ORIGIN";
GeoViewpoint29.geoOrigin = GeoOrigin30;

Group3.children[13] = GeoViewpoint29;

let GeoViewpoint31 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint31.description = "0E 0N";
GeoViewpoint31.fieldOfView = 1.05;
GeoViewpoint31.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint31.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint31.position = new SFVec3d(new double[0,0,10000000]);
let GeoOrigin32 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin32.USE = "ORIGIN";
GeoViewpoint31.geoOrigin = GeoOrigin32;

Group3.children[14] = GeoViewpoint31;

let GeoViewpoint33 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint33.description = "90E 0N";
GeoViewpoint33.fieldOfView = 1.05;
GeoViewpoint33.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint33.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint33.position = new SFVec3d(new double[0,89.9,10000000]);
let GeoOrigin34 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin34.USE = "ORIGIN";
GeoViewpoint33.geoOrigin = GeoOrigin34;

Group3.children[15] = GeoViewpoint33;

let GeoViewpoint35 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint35.description = "90W 0N";
GeoViewpoint35.fieldOfView = 1.05;
GeoViewpoint35.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint35.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint35.position = new SFVec3d(new double[0,-89.9,10000000]);
let GeoOrigin36 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin36.USE = "ORIGIN";
GeoViewpoint35.geoOrigin = GeoOrigin36;

Group3.children[16] = GeoViewpoint35;

let GeoViewpoint37 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint37.description = "180E 0N";
GeoViewpoint37.fieldOfView = 1.05;
GeoViewpoint37.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint37.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint37.position = new SFVec3d(new double[0,180,10000000]);
let GeoOrigin38 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin38.USE = "ORIGIN";
GeoViewpoint37.geoOrigin = GeoOrigin38;

Group3.children[17] = GeoViewpoint37;

let GeoViewpoint39 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint39.description = "North Pole";
GeoViewpoint39.fieldOfView = 1.05;
GeoViewpoint39.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint39.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint39.position = new SFVec3d(new double[90,0,10000000]);
let GeoOrigin40 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin40.USE = "ORIGIN";
GeoViewpoint39.geoOrigin = GeoOrigin40;

Group3.children[18] = GeoViewpoint39;

let GeoViewpoint41 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint41.description = "South Pole";
GeoViewpoint41.fieldOfView = 1.05;
GeoViewpoint41.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint41.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint41.position = new SFVec3d(new double[-89.9,0,10000000]);
let GeoOrigin42 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin42.USE = "ORIGIN";
GeoViewpoint41.geoOrigin = GeoOrigin42;

Group3.children[19] = GeoViewpoint41;

let GeoViewpoint43 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint43.description = "Orange County Convention Center, Orlando, FL: 10000Km";
GeoViewpoint43.fieldOfView = 1.05;
GeoViewpoint43.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint43.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint43.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,10000000]);
let GeoOrigin44 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin44.USE = "ORIGIN";
GeoViewpoint43.geoOrigin = GeoOrigin44;

Group3.children[20] = GeoViewpoint43;

let GeoViewpoint45 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint45.description = "Orange County Convention Center, Orlando, FL: 1000Km";
GeoViewpoint45.fieldOfView = 1.05;
GeoViewpoint45.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint45.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint45.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,1000000]);
let GeoOrigin46 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin46.USE = "ORIGIN";
GeoViewpoint45.geoOrigin = GeoOrigin46;

Group3.children[21] = GeoViewpoint45;

let GeoViewpoint47 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint47.description = "Orange County Convention Center, Orlando, FL: 100Km";
GeoViewpoint47.fieldOfView = 1.05;
GeoViewpoint47.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint47.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint47.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,100000]);
let GeoOrigin48 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin48.USE = "ORIGIN";
GeoViewpoint47.geoOrigin = GeoOrigin48;

Group3.children[22] = GeoViewpoint47;

let GeoViewpoint49 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint49.description = "Orange County Convention Center, Orlando, FL: 10Km";
GeoViewpoint49.fieldOfView = 1.05;
GeoViewpoint49.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint49.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint49.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,10000]);
let GeoOrigin50 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin50.USE = "ORIGIN";
GeoViewpoint49.geoOrigin = GeoOrigin50;

Group3.children[23] = GeoViewpoint49;

let GeoViewpoint51 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint51.description = "Orange County Convention Center, Orlando, FL: 1Km";
GeoViewpoint51.fieldOfView = 1.05;
GeoViewpoint51.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint51.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint51.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,1000]);
let GeoOrigin52 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin52.USE = "ORIGIN";
GeoViewpoint51.geoOrigin = GeoOrigin52;

Group3.children[24] = GeoViewpoint51;

let GeoViewpoint53 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint53.description = "Orange County Convention Center, Orlando, FL: 200m";
GeoViewpoint53.fieldOfView = 1.05;
GeoViewpoint53.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint53.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint53.position = new SFVec3d(new double[28.424806942669584,-81.46898746490479,200]);
let GeoOrigin54 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin54.USE = "ORIGIN";
GeoViewpoint53.geoOrigin = GeoOrigin54;

Group3.children[25] = GeoViewpoint53;

let GeoViewpoint55 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint55.description = "Kabul, Afghanistan: 10000Km";
GeoViewpoint55.fieldOfView = 1.05;
GeoViewpoint55.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint55.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint55.position = new SFVec3d(new double[34.53258110649095,69.13782119750977,10000000]);
let GeoOrigin56 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin56.USE = "ORIGIN";
GeoViewpoint55.geoOrigin = GeoOrigin56;

Group3.children[26] = GeoViewpoint55;

let GeoViewpoint57 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint57.description = "Kabul, Afghanistan: 1000Km";
GeoViewpoint57.fieldOfView = 1.05;
GeoViewpoint57.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint57.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint57.position = new SFVec3d(new double[34.53258110649095,69.13782119750977,1000000]);
let GeoOrigin58 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin58.USE = "ORIGIN";
GeoViewpoint57.geoOrigin = GeoOrigin58;

Group3.children[27] = GeoViewpoint57;

let GeoViewpoint59 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint59.description = "Kabul, Afghanistan: 100Km";
GeoViewpoint59.fieldOfView = 1.05;
GeoViewpoint59.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint59.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint59.position = new SFVec3d(new double[34.53258110649095,69.13782119750977,100000]);
let GeoOrigin60 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin60.USE = "ORIGIN";
GeoViewpoint59.geoOrigin = GeoOrigin60;

Group3.children[28] = GeoViewpoint59;

let GeoViewpoint61 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint61.description = "Kabul, Afghanistan: 10Km";
GeoViewpoint61.fieldOfView = 1.05;
GeoViewpoint61.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint61.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint61.position = new SFVec3d(new double[34.53258110649095,69.13782119750977,10000]);
let GeoOrigin62 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin62.USE = "ORIGIN";
GeoViewpoint61.geoOrigin = GeoOrigin62;

Group3.children[29] = GeoViewpoint61;

let GeoViewpoint63 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint63.description = "Naval Postgraduate School, Monterey, CA: 10000Km";
GeoViewpoint63.fieldOfView = 1.05;
GeoViewpoint63.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint63.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint63.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,10000000]);
let GeoOrigin64 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin64.USE = "ORIGIN";
GeoViewpoint63.geoOrigin = GeoOrigin64;

Group3.children[30] = GeoViewpoint63;

let GeoViewpoint65 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint65.description = "Naval Postgraduate School, Monterey, CA: 1000Km";
GeoViewpoint65.fieldOfView = 1.05;
GeoViewpoint65.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint65.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint65.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,1000000]);
let GeoOrigin66 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin66.USE = "ORIGIN";
GeoViewpoint65.geoOrigin = GeoOrigin66;

Group3.children[31] = GeoViewpoint65;

let GeoViewpoint67 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint67.description = "Naval Postgraduate School, Monterey, CA: 100Km";
GeoViewpoint67.fieldOfView = 1.05;
GeoViewpoint67.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint67.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint67.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,100000]);
let GeoOrigin68 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin68.USE = "ORIGIN";
GeoViewpoint67.geoOrigin = GeoOrigin68;

Group3.children[32] = GeoViewpoint67;

let GeoViewpoint69 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint69.description = "Naval Postgraduate School, Monterey, CA: 10Km";
GeoViewpoint69.fieldOfView = 1.05;
GeoViewpoint69.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint69.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint69.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,10000]);
let GeoOrigin70 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin70.USE = "ORIGIN";
GeoViewpoint69.geoOrigin = GeoOrigin70;

Group3.children[33] = GeoViewpoint69;

let GeoViewpoint71 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint71.description = "Naval Postgraduate School, Monterey, CA: 1Km";
GeoViewpoint71.fieldOfView = 1.05;
GeoViewpoint71.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint71.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint71.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,1000]);
let GeoOrigin72 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin72.USE = "ORIGIN";
GeoViewpoint71.geoOrigin = GeoOrigin72;

Group3.children[34] = GeoViewpoint71;

let GeoViewpoint73 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint73.description = "Naval Postgraduate School, Monterey, CA: 200m";
GeoViewpoint73.fieldOfView = 1.05;
GeoViewpoint73.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint73.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint73.position = new SFVec3d(new double[36.596454966540136,-121.87352389097214,200]);
let GeoOrigin74 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin74.USE = "ORIGIN";
GeoViewpoint73.geoOrigin = GeoOrigin74;

Group3.children[35] = GeoViewpoint73;

let GeoViewpoint75 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint75.description = "San Francisco Museum of Modern Art, San Francisco, CA: 10000Km";
GeoViewpoint75.fieldOfView = 1.05;
GeoViewpoint75.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint75.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint75.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,10000000]);
let GeoOrigin76 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin76.USE = "ORIGIN";
GeoViewpoint75.geoOrigin = GeoOrigin76;

Group3.children[36] = GeoViewpoint75;

let GeoViewpoint77 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint77.description = "San Francisco Museum of Modern Art, San Francisco, CA: 1000Km";
GeoViewpoint77.fieldOfView = 1.05;
GeoViewpoint77.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint77.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint77.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,1000000]);
let GeoOrigin78 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin78.USE = "ORIGIN";
GeoViewpoint77.geoOrigin = GeoOrigin78;

Group3.children[37] = GeoViewpoint77;

let GeoViewpoint79 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint79.description = "San Francisco Museum of Modern Art, San Francisco, CA: 100Km";
GeoViewpoint79.fieldOfView = 1.05;
GeoViewpoint79.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint79.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint79.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,100000]);
let GeoOrigin80 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin80.USE = "ORIGIN";
GeoViewpoint79.geoOrigin = GeoOrigin80;

Group3.children[38] = GeoViewpoint79;

let GeoViewpoint81 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint81.description = "San Francisco Museum of Modern Art, San Francisco, CA: 10Km";
GeoViewpoint81.fieldOfView = 1.05;
GeoViewpoint81.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint81.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint81.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,10000]);
let GeoOrigin82 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin82.USE = "ORIGIN";
GeoViewpoint81.geoOrigin = GeoOrigin82;

Group3.children[39] = GeoViewpoint81;

let GeoViewpoint83 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint83.description = "San Francisco Museum of Modern Art, San Francisco, CA: 1Km";
GeoViewpoint83.fieldOfView = 1.05;
GeoViewpoint83.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint83.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint83.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,1000]);
let GeoOrigin84 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin84.USE = "ORIGIN";
GeoViewpoint83.geoOrigin = GeoOrigin84;

Group3.children[40] = GeoViewpoint83;

let GeoViewpoint85 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint85.description = "San Francisco Museum of Modern Art, San Francisco, CA: 200m";
GeoViewpoint85.fieldOfView = 1.05;
GeoViewpoint85.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint85.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint85.position = new SFVec3d(new double[37.78588957889747,-122.40087300539018,200]);
let GeoOrigin86 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin86.USE = "ORIGIN";
GeoViewpoint85.geoOrigin = GeoOrigin86;

Group3.children[41] = GeoViewpoint85;

let GeoViewpoint87 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint87.description = "Narragansett Bay, Newport, RI: 10000Km";
GeoViewpoint87.fieldOfView = 1.05;
GeoViewpoint87.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint87.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint87.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,10000000]);
let GeoOrigin88 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin88.USE = "ORIGIN";
GeoViewpoint87.geoOrigin = GeoOrigin88;

Group3.children[42] = GeoViewpoint87;

let GeoViewpoint89 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint89.description = "Narragansett Bay, Newport, RI: 1000Km";
GeoViewpoint89.fieldOfView = 1.05;
GeoViewpoint89.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint89.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint89.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,1000000]);
let GeoOrigin90 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin90.USE = "ORIGIN";
GeoViewpoint89.geoOrigin = GeoOrigin90;

Group3.children[43] = GeoViewpoint89;

let GeoViewpoint91 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint91.description = "Narragansett Bay, Newport, RI: 100Km";
GeoViewpoint91.fieldOfView = 1.05;
GeoViewpoint91.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint91.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint91.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,100000]);
let GeoOrigin92 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin92.USE = "ORIGIN";
GeoViewpoint91.geoOrigin = GeoOrigin92;

Group3.children[44] = GeoViewpoint91;

let GeoViewpoint93 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint93.description = "Narragansett Bay, Newport, RI: 10Km";
GeoViewpoint93.fieldOfView = 1.05;
GeoViewpoint93.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint93.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint93.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,10000]);
let GeoOrigin94 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin94.USE = "ORIGIN";
GeoViewpoint93.geoOrigin = GeoOrigin94;

Group3.children[45] = GeoViewpoint93;

let GeoViewpoint95 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint95.description = "Narragansett Bay, Newport, RI: 1Km";
GeoViewpoint95.fieldOfView = 1.05;
GeoViewpoint95.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint95.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint95.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,1000]);
let GeoOrigin96 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin96.USE = "ORIGIN";
GeoViewpoint95.geoOrigin = GeoOrigin96;

Group3.children[46] = GeoViewpoint95;

let GeoViewpoint97 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint97.description = "Narragansett Bay, Newport, RI: 200m";
GeoViewpoint97.fieldOfView = 1.05;
GeoViewpoint97.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint97.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint97.position = new SFVec3d(new double[41.48692107976417,-71.32715016603471,200]);
let GeoOrigin98 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin98.USE = "ORIGIN";
GeoViewpoint97.geoOrigin = GeoOrigin98;

Group3.children[47] = GeoViewpoint97;

let GeoViewpoint99 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint99.description = "King's Cross, London, United Kingdom: 10000Km";
GeoViewpoint99.fieldOfView = 1.05;
GeoViewpoint99.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint99.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint99.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,10000000]);
let GeoOrigin100 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin100.USE = "ORIGIN";
GeoViewpoint99.geoOrigin = GeoOrigin100;

Group3.children[48] = GeoViewpoint99;

let GeoViewpoint101 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint101.description = "King's Cross, London, United Kingdom: 1000Km";
GeoViewpoint101.fieldOfView = 1.05;
GeoViewpoint101.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint101.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint101.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,1000000]);
let GeoOrigin102 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin102.USE = "ORIGIN";
GeoViewpoint101.geoOrigin = GeoOrigin102;

Group3.children[49] = GeoViewpoint101;

let GeoViewpoint103 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint103.description = "King's Cross, London, United Kingdom: 100Km";
GeoViewpoint103.fieldOfView = 1.05;
GeoViewpoint103.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint103.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint103.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,100000]);
let GeoOrigin104 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin104.USE = "ORIGIN";
GeoViewpoint103.geoOrigin = GeoOrigin104;

Group3.children[50] = GeoViewpoint103;

let GeoViewpoint105 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint105.description = "King's Cross, London, United Kingdom: 10Km";
GeoViewpoint105.fieldOfView = 1.05;
GeoViewpoint105.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint105.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint105.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,10000]);
let GeoOrigin106 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin106.USE = "ORIGIN";
GeoViewpoint105.geoOrigin = GeoOrigin106;

Group3.children[51] = GeoViewpoint105;

let GeoViewpoint107 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint107.description = "King's Cross, London, United Kingdom: 1Km";
GeoViewpoint107.fieldOfView = 1.05;
GeoViewpoint107.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint107.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint107.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,1000]);
let GeoOrigin108 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin108.USE = "ORIGIN";
GeoViewpoint107.geoOrigin = GeoOrigin108;

Group3.children[52] = GeoViewpoint107;

let GeoViewpoint109 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint109.description = "King's Cross, London, United Kingdom: 200m";
GeoViewpoint109.fieldOfView = 1.05;
GeoViewpoint109.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint109.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint109.position = new SFVec3d(new double[51.5305712322625,-0.12352377176285152,200]);
let GeoOrigin110 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin110.USE = "ORIGIN";
GeoViewpoint109.geoOrigin = GeoOrigin110;

Group3.children[53] = GeoViewpoint109;

let GeoViewpoint111 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint111.description = "Scollay Square, Boston, MA: 10000Km";
GeoViewpoint111.fieldOfView = 1.05;
GeoViewpoint111.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint111.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint111.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,10000000]);
let GeoOrigin112 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin112.USE = "ORIGIN";
GeoViewpoint111.geoOrigin = GeoOrigin112;

Group3.children[54] = GeoViewpoint111;

let GeoViewpoint113 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint113.description = "Scollay Square, Boston, MA: 1000Km";
GeoViewpoint113.fieldOfView = 1.05;
GeoViewpoint113.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint113.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint113.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,1000000]);
let GeoOrigin114 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin114.USE = "ORIGIN";
GeoViewpoint113.geoOrigin = GeoOrigin114;

Group3.children[55] = GeoViewpoint113;

let GeoViewpoint115 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint115.description = "Scollay Square, Boston, MA: 100Km";
GeoViewpoint115.fieldOfView = 1.05;
GeoViewpoint115.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint115.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint115.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,100000]);
let GeoOrigin116 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin116.USE = "ORIGIN";
GeoViewpoint115.geoOrigin = GeoOrigin116;

Group3.children[56] = GeoViewpoint115;

let GeoViewpoint117 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint117.description = "Scollay Square, Boston, MA: 10Km";
GeoViewpoint117.fieldOfView = 1.05;
GeoViewpoint117.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint117.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint117.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,10000]);
let GeoOrigin118 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin118.USE = "ORIGIN";
GeoViewpoint117.geoOrigin = GeoOrigin118;

Group3.children[57] = GeoViewpoint117;

let GeoViewpoint119 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint119.description = "Scollay Square, Boston, MA: 1Km";
GeoViewpoint119.fieldOfView = 1.05;
GeoViewpoint119.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint119.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint119.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,1000]);
let GeoOrigin120 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin120.USE = "ORIGIN";
GeoViewpoint119.geoOrigin = GeoOrigin120;

Group3.children[58] = GeoViewpoint119;

let GeoViewpoint121 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint121.description = "Scollay Square, Boston, MA: 200m";
GeoViewpoint121.fieldOfView = 1.05;
GeoViewpoint121.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint121.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint121.position = new SFVec3d(new double[42.36027219744271,-71.05916529893875,200]);
let GeoOrigin122 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin122.USE = "ORIGIN";
GeoViewpoint121.geoOrigin = GeoOrigin122;

Group3.children[59] = GeoViewpoint121;

let GeoViewpoint123 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint123.description = "San Diego Convention Center, San Diego, CA: 10000Km";
GeoViewpoint123.fieldOfView = 1.05;
GeoViewpoint123.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint123.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint123.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,10000000]);
let GeoOrigin124 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin124.USE = "ORIGIN";
GeoViewpoint123.geoOrigin = GeoOrigin124;

Group3.children[60] = GeoViewpoint123;

let GeoViewpoint125 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint125.description = "San Diego Convention Center, San Diego, CA: 1000Km";
GeoViewpoint125.fieldOfView = 1.05;
GeoViewpoint125.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint125.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint125.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,1000000]);
let GeoOrigin126 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin126.USE = "ORIGIN";
GeoViewpoint125.geoOrigin = GeoOrigin126;

Group3.children[61] = GeoViewpoint125;

let GeoViewpoint127 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint127.description = "San Diego Convention Center, San Diego, CA: 100Km";
GeoViewpoint127.fieldOfView = 1.05;
GeoViewpoint127.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint127.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint127.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,100000]);
let GeoOrigin128 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin128.USE = "ORIGIN";
GeoViewpoint127.geoOrigin = GeoOrigin128;

Group3.children[62] = GeoViewpoint127;

let GeoViewpoint129 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint129.description = "San Diego Convention Center, San Diego, CA: 10Km";
GeoViewpoint129.fieldOfView = 1.05;
GeoViewpoint129.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint129.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint129.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,10000]);
let GeoOrigin130 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin130.USE = "ORIGIN";
GeoViewpoint129.geoOrigin = GeoOrigin130;

Group3.children[63] = GeoViewpoint129;

let GeoViewpoint131 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint131.description = "San Diego Convention Center, San Diego, CA: 1Km";
GeoViewpoint131.fieldOfView = 1.05;
GeoViewpoint131.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint131.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint131.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,1000]);
let GeoOrigin132 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin132.USE = "ORIGIN";
GeoViewpoint131.geoOrigin = GeoOrigin132;

Group3.children[64] = GeoViewpoint131;

let GeoViewpoint133 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint133.description = "San Diego Convention Center, San Diego, CA: 200m";
GeoViewpoint133.fieldOfView = 1.05;
GeoViewpoint133.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint133.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint133.position = new SFVec3d(new double[32.70688495899665,-117.16055274009707,200]);
let GeoOrigin134 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin134.USE = "ORIGIN";
GeoViewpoint133.geoOrigin = GeoOrigin134;

Group3.children[65] = GeoViewpoint133;

let GeoViewpoint135 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint135.description = "International Plaza Resort and Spa, Orlando, FL: 10000Km";
GeoViewpoint135.fieldOfView = 1.05;
GeoViewpoint135.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint135.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint135.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,10000000]);
let GeoOrigin136 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin136.USE = "ORIGIN";
GeoViewpoint135.geoOrigin = GeoOrigin136;

Group3.children[66] = GeoViewpoint135;

let GeoViewpoint137 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint137.description = "International Plaza Resort and Spa, Orlando, FL: 1000Km";
GeoViewpoint137.fieldOfView = 1.05;
GeoViewpoint137.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint137.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint137.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,1000000]);
let GeoOrigin138 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin138.USE = "ORIGIN";
GeoViewpoint137.geoOrigin = GeoOrigin138;

Group3.children[67] = GeoViewpoint137;

let GeoViewpoint139 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint139.description = "International Plaza Resort and Spa, Orlando, FL: 100Km";
GeoViewpoint139.fieldOfView = 1.05;
GeoViewpoint139.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint139.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint139.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,100000]);
let GeoOrigin140 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin140.USE = "ORIGIN";
GeoViewpoint139.geoOrigin = GeoOrigin140;

Group3.children[68] = GeoViewpoint139;

let GeoViewpoint141 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint141.description = "International Plaza Resort and Spa, Orlando, FL: 10Km";
GeoViewpoint141.fieldOfView = 1.05;
GeoViewpoint141.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint141.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint141.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,10000]);
let GeoOrigin142 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin142.USE = "ORIGIN";
GeoViewpoint141.geoOrigin = GeoOrigin142;

Group3.children[69] = GeoViewpoint141;

let GeoViewpoint143 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint143.description = "International Plaza Resort and Spa, Orlando, FL: 1Km";
GeoViewpoint143.fieldOfView = 1.05;
GeoViewpoint143.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint143.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint143.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,1000]);
let GeoOrigin144 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin144.USE = "ORIGIN";
GeoViewpoint143.geoOrigin = GeoOrigin144;

Group3.children[70] = GeoViewpoint143;

let GeoViewpoint145 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint145.description = "International Plaza Resort and Spa, Orlando, FL: 200m";
GeoViewpoint145.fieldOfView = 1.05;
GeoViewpoint145.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint145.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint145.position = new SFVec3d(new double[28.41747302782284,-81.46303564310074,200]);
let GeoOrigin146 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin146.USE = "ORIGIN";
GeoViewpoint145.geoOrigin = GeoOrigin146;

Group3.children[71] = GeoViewpoint145;

let GeoViewpoint147 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint147.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 10000Km";
GeoViewpoint147.fieldOfView = 1.05;
GeoViewpoint147.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint147.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint147.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,10000000]);
let GeoOrigin148 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin148.USE = "ORIGIN";
GeoViewpoint147.geoOrigin = GeoOrigin148;

Group3.children[72] = GeoViewpoint147;

let GeoViewpoint149 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint149.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 1000Km";
GeoViewpoint149.fieldOfView = 1.05;
GeoViewpoint149.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint149.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint149.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,1000000]);
let GeoOrigin150 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin150.USE = "ORIGIN";
GeoViewpoint149.geoOrigin = GeoOrigin150;

Group3.children[73] = GeoViewpoint149;

let GeoViewpoint151 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint151.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 100Km";
GeoViewpoint151.fieldOfView = 1.05;
GeoViewpoint151.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint151.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint151.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,100000]);
let GeoOrigin152 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin152.USE = "ORIGIN";
GeoViewpoint151.geoOrigin = GeoOrigin152;

Group3.children[74] = GeoViewpoint151;

let GeoViewpoint153 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint153.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 10Km";
GeoViewpoint153.fieldOfView = 1.05;
GeoViewpoint153.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint153.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint153.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,10000]);
let GeoOrigin154 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin154.USE = "ORIGIN";
GeoViewpoint153.geoOrigin = GeoOrigin154;

Group3.children[75] = GeoViewpoint153;

let GeoViewpoint155 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint155.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 1Km";
GeoViewpoint155.fieldOfView = 1.05;
GeoViewpoint155.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint155.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint155.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,1000]);
let GeoOrigin156 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin156.USE = "ORIGIN";
GeoViewpoint155.geoOrigin = GeoOrigin156;

Group3.children[76] = GeoViewpoint155;

let GeoViewpoint157 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint157.description = "Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 300m";
GeoViewpoint157.fieldOfView = 1.05;
GeoViewpoint157.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint157.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint157.position = new SFVec3d(new double[-7.137685657416106,-34.845199584960945,300]);
let GeoOrigin158 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin158.USE = "ORIGIN";
GeoViewpoint157.geoOrigin = GeoOrigin158;

Group3.children[77] = GeoViewpoint157;

let GeoViewpoint159 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint159.description = "Port of Singapore, Singapore: 10000Km";
GeoViewpoint159.fieldOfView = 1.05;
GeoViewpoint159.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint159.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint159.position = new SFVec3d(new double[1.26299,103.837398,10000000]);
let GeoOrigin160 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin160.USE = "ORIGIN";
GeoViewpoint159.geoOrigin = GeoOrigin160;

Group3.children[78] = GeoViewpoint159;

let GeoViewpoint161 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint161.description = "Port of Singapore, Singapore: 1000Km";
GeoViewpoint161.fieldOfView = 1.05;
GeoViewpoint161.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint161.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint161.position = new SFVec3d(new double[1.26299,103.837398,1000000]);
let GeoOrigin162 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin162.USE = "ORIGIN";
GeoViewpoint161.geoOrigin = GeoOrigin162;

Group3.children[79] = GeoViewpoint161;

let GeoViewpoint163 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint163.description = "Port of Singapore, Singapore: 100Km";
GeoViewpoint163.fieldOfView = 1.05;
GeoViewpoint163.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint163.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint163.position = new SFVec3d(new double[1.26299,103.837398,100000]);
let GeoOrigin164 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin164.USE = "ORIGIN";
GeoViewpoint163.geoOrigin = GeoOrigin164;

Group3.children[80] = GeoViewpoint163;

let GeoViewpoint165 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint165.description = "Port of Singapore, Singapore: 10Km";
GeoViewpoint165.fieldOfView = 1.05;
GeoViewpoint165.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint165.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint165.position = new SFVec3d(new double[1.26299,103.837398,10000]);
let GeoOrigin166 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin166.USE = "ORIGIN";
GeoViewpoint165.geoOrigin = GeoOrigin166;

Group3.children[81] = GeoViewpoint165;

let GeoViewpoint167 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint167.description = "Port of Singapore, Singapore: 1Km";
GeoViewpoint167.fieldOfView = 1.05;
GeoViewpoint167.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint167.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint167.position = new SFVec3d(new double[1.26299,103.837398,1000]);
let GeoOrigin168 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin168.USE = "ORIGIN";
GeoViewpoint167.geoOrigin = GeoOrigin168;

Group3.children[82] = GeoViewpoint167;

let GeoViewpoint169 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint169.description = "Port of Singapore, Singapore: 500m";
GeoViewpoint169.fieldOfView = 1.05;
GeoViewpoint169.geoSystem = new MFString(new java.lang.String["GD"]);
GeoViewpoint169.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint169.position = new SFVec3d(new double[1.26299,103.837398,500]);
let GeoOrigin170 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin170.USE = "ORIGIN";
GeoViewpoint169.geoOrigin = GeoOrigin170;

Group3.children[83] = GeoViewpoint169;

let TimeSensor171 = browser.currentScene.createNode("TimeSensor");
TimeSensor171.DEF = "TIMER";
TimeSensor171.cycleInterval = 800;
TimeSensor171.enabled = False;
TimeSensor171.loop = True;
Group3.children[84] = TimeSensor171;

let GeoPositionInterpolator172 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator172.DEF = "GeoPositionINTERP";
GeoPositionInterpolator172.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator172.keyValue = new MFVec3d(new double[0,0,10000000,28.424806942669584,-81.46898746490479,5000000,34.53258110649095,69.13782119750977,5000000,36.596454966540136,-121.87352389097214,5000000,37.78588957889747,-122.40087300539018,5000000,41.48692107976417,-71.32715016603471,5000000,51.5305712322625,-0.12352377176285152,5000000,0,-187,5000000,0,0,5000000,0,180,1000000,0,0,10000000]);
Group3.children[85] = GeoPositionInterpolator172;

let ROUTE173 = browser.currentScene.createNode("ROUTE");
ROUTE173.fromField = "isBound";
ROUTE173.fromNode = "ZOOM";
ROUTE173.toField = "enabled";
ROUTE173.toNode = "TIMER";
Group3.children[86] = ROUTE173;

let ROUTE174 = browser.currentScene.createNode("ROUTE");
ROUTE174.fromField = "fraction_changed";
ROUTE174.fromNode = "TIMER";
ROUTE174.toField = "set_fraction";
ROUTE174.toNode = "GeoPositionINTERP";
Group3.children[87] = ROUTE174;

let ROUTE175 = browser.currentScene.createNode("ROUTE");
ROUTE175.fromField = "geovalue_changed";
ROUTE175.fromNode = "GeoPositionINTERP";
ROUTE175.toField = "position";
ROUTE175.toNode = "ZOOM";
Group3.children[88] = ROUTE175;

//28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL
let TimeSensor176 = browser.currentScene.createNode("TimeSensor");
TimeSensor176.DEF = "TIMER1";
TimeSensor176.cycleInterval = 400;
TimeSensor176.enabled = False;
TimeSensor176.loop = True;
Group3.children[89] = TimeSensor176;

let GeoPositionInterpolator177 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator177.DEF = "GeoPositionINTERP1";
GeoPositionInterpolator177.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator177.keyValue = new MFVec3d(new double[0,0,10000000,28.424806942669584,-81.46898746490479,1000000,28.424806942669584,-81.46898746490479,100000,28.424806942669584,-81.46898746490479,10000,28.424806942669584,-81.46898746490479,1000,28.424806942669584,-81.46898746490479,200,28.424806942669584,-81.46898746490479,1000,28.424806942669584,-81.46898746490479,10000,28.424806942669584,-81.46898746490479,100000,28.424806942669584,-81.46898746490479,1000000,0,0,10000000]);
Group3.children[90] = GeoPositionInterpolator177;

let ROUTE178 = browser.currentScene.createNode("ROUTE");
ROUTE178.fromField = "isBound";
ROUTE178.fromNode = "ZOOM1";
ROUTE178.toField = "enabled";
ROUTE178.toNode = "TIMER1";
Group3.children[91] = ROUTE178;

let ROUTE179 = browser.currentScene.createNode("ROUTE");
ROUTE179.fromField = "fraction_changed";
ROUTE179.fromNode = "TIMER1";
ROUTE179.toField = "set_fraction";
ROUTE179.toNode = "GeoPositionINTERP1";
Group3.children[92] = ROUTE179;

let ROUTE180 = browser.currentScene.createNode("ROUTE");
ROUTE180.fromField = "geovalue_changed";
ROUTE180.fromNode = "GeoPositionINTERP1";
ROUTE180.toField = "position";
ROUTE180.toNode = "ZOOM1";
Group3.children[93] = ROUTE180;

//34.53258110649095 69.13782119750976 Kabul, Afghanistan
let TimeSensor181 = browser.currentScene.createNode("TimeSensor");
TimeSensor181.DEF = "TIMER2";
TimeSensor181.cycleInterval = 400;
TimeSensor181.enabled = False;
TimeSensor181.loop = True;
Group3.children[94] = TimeSensor181;

let GeoPositionInterpolator182 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator182.DEF = "GeoPositionINTERP2";
GeoPositionInterpolator182.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator182.keyValue = new MFVec3d(new double[0,0,10000000,34.53258110649095,69.13782119750977,1000000,34.53258110649095,69.13782119750977,100000,34.53258110649095,69.13782119750977,10000,34.53258110649095,69.13782119750977,100000,34.53258110649095,69.13782119750977,1000000,0,0,10000000]);
Group3.children[95] = GeoPositionInterpolator182;

let ROUTE183 = browser.currentScene.createNode("ROUTE");
ROUTE183.fromField = "isBound";
ROUTE183.fromNode = "ZOOM2";
ROUTE183.toField = "enabled";
ROUTE183.toNode = "TIMER2";
Group3.children[96] = ROUTE183;

let ROUTE184 = browser.currentScene.createNode("ROUTE");
ROUTE184.fromField = "fraction_changed";
ROUTE184.fromNode = "TIMER2";
ROUTE184.toField = "set_fraction";
ROUTE184.toNode = "GeoPositionINTERP2";
Group3.children[97] = ROUTE184;

let ROUTE185 = browser.currentScene.createNode("ROUTE");
ROUTE185.fromField = "geovalue_changed";
ROUTE185.fromNode = "GeoPositionINTERP2";
ROUTE185.toField = "position";
ROUTE185.toNode = "ZOOM2";
Group3.children[98] = ROUTE185;

//36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA
let TimeSensor186 = browser.currentScene.createNode("TimeSensor");
TimeSensor186.DEF = "TIMER3";
TimeSensor186.cycleInterval = 400;
TimeSensor186.enabled = False;
TimeSensor186.loop = True;
Group3.children[99] = TimeSensor186;

let GeoPositionInterpolator187 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator187.DEF = "GeoPositionINTERP3";
GeoPositionInterpolator187.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator187.keyValue = new MFVec3d(new double[0,0,10000000,36.596454966540136,-121.87352389097214,1000000,36.596454966540136,-121.87352389097214,100000,36.596454966540136,-121.87352389097214,10000,36.596454966540136,-121.87352389097214,1000,36.596454966540136,-121.87352389097214,200,36.596454966540136,-121.87352389097214,1000,36.596454966540136,-121.87352389097214,10000,36.596454966540136,-121.87352389097214,100000,36.596454966540136,-121.87352389097214,1000000,0,0,10000000]);
Group3.children[100] = GeoPositionInterpolator187;

let ROUTE188 = browser.currentScene.createNode("ROUTE");
ROUTE188.fromField = "isBound";
ROUTE188.fromNode = "ZOOM3";
ROUTE188.toField = "enabled";
ROUTE188.toNode = "TIMER3";
Group3.children[101] = ROUTE188;

let ROUTE189 = browser.currentScene.createNode("ROUTE");
ROUTE189.fromField = "fraction_changed";
ROUTE189.fromNode = "TIMER3";
ROUTE189.toField = "set_fraction";
ROUTE189.toNode = "GeoPositionINTERP3";
Group3.children[102] = ROUTE189;

let ROUTE190 = browser.currentScene.createNode("ROUTE");
ROUTE190.fromField = "geovalue_changed";
ROUTE190.fromNode = "GeoPositionINTERP3";
ROUTE190.toField = "position";
ROUTE190.toNode = "ZOOM3";
Group3.children[103] = ROUTE190;

//37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA
let TimeSensor191 = browser.currentScene.createNode("TimeSensor");
TimeSensor191.DEF = "TIMER4";
TimeSensor191.cycleInterval = 400;
TimeSensor191.enabled = False;
TimeSensor191.loop = True;
Group3.children[104] = TimeSensor191;

let GeoPositionInterpolator192 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator192.DEF = "GeoPositionINTERP4";
GeoPositionInterpolator192.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator192.keyValue = new MFVec3d(new double[0,0,10000000,37.78588957889747,-122.40087300539018,1000000,37.78588957889747,-122.40087300539018,100000,37.78588957889747,-122.40087300539018,10000,37.78588957889747,-122.40087300539018,1000,37.78588957889747,-122.40087300539018,200,37.78588957889747,-122.40087300539018,1000,37.78588957889747,-122.40087300539018,10000,37.78588957889747,-122.40087300539018,100000,37.78588957889747,-122.40087300539018,1000000,0,0,10000000]);
Group3.children[105] = GeoPositionInterpolator192;

let ROUTE193 = browser.currentScene.createNode("ROUTE");
ROUTE193.fromField = "isBound";
ROUTE193.fromNode = "ZOOM4";
ROUTE193.toField = "enabled";
ROUTE193.toNode = "TIMER4";
Group3.children[106] = ROUTE193;

let ROUTE194 = browser.currentScene.createNode("ROUTE");
ROUTE194.fromField = "fraction_changed";
ROUTE194.fromNode = "TIMER4";
ROUTE194.toField = "set_fraction";
ROUTE194.toNode = "GeoPositionINTERP4";
Group3.children[107] = ROUTE194;

let ROUTE195 = browser.currentScene.createNode("ROUTE");
ROUTE195.fromField = "geovalue_changed";
ROUTE195.fromNode = "GeoPositionINTERP4";
ROUTE195.toField = "position";
ROUTE195.toNode = "ZOOM4";
Group3.children[108] = ROUTE195;

//41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI
let TimeSensor196 = browser.currentScene.createNode("TimeSensor");
TimeSensor196.DEF = "TIMER5";
TimeSensor196.cycleInterval = 400;
TimeSensor196.enabled = False;
TimeSensor196.loop = True;
Group3.children[109] = TimeSensor196;

let GeoPositionInterpolator197 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator197.DEF = "GeoPositionINTERP5";
GeoPositionInterpolator197.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator197.keyValue = new MFVec3d(new double[0,0,10000000,41.48692107976417,-71.32715016603471,1000000,41.48692107976417,-71.32715016603471,100000,41.48692107976417,-71.32715016603471,10000,41.48692107976417,-71.32715016603471,1000,41.48692107976417,-71.32715016603471,200,41.48692107976417,-71.32715016603471,1000,41.48692107976417,-71.32715016603471,10000,41.48692107976417,-71.32715016603471,100000,41.48692107976417,-71.32715016603471,1000000,0,0,10000000]);
Group3.children[110] = GeoPositionInterpolator197;

let ROUTE198 = browser.currentScene.createNode("ROUTE");
ROUTE198.fromField = "isBound";
ROUTE198.fromNode = "ZOOM5";
ROUTE198.toField = "enabled";
ROUTE198.toNode = "TIMER5";
Group3.children[111] = ROUTE198;

let ROUTE199 = browser.currentScene.createNode("ROUTE");
ROUTE199.fromField = "fraction_changed";
ROUTE199.fromNode = "TIMER5";
ROUTE199.toField = "set_fraction";
ROUTE199.toNode = "GeoPositionINTERP5";
Group3.children[112] = ROUTE199;

let ROUTE200 = browser.currentScene.createNode("ROUTE");
ROUTE200.fromField = "geovalue_changed";
ROUTE200.fromNode = "GeoPositionINTERP5";
ROUTE200.toField = "position";
ROUTE200.toNode = "ZOOM5";
Group3.children[113] = ROUTE200;

//51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom
let TimeSensor201 = browser.currentScene.createNode("TimeSensor");
TimeSensor201.DEF = "TIMER6";
TimeSensor201.cycleInterval = 400;
TimeSensor201.enabled = False;
TimeSensor201.loop = True;
Group3.children[114] = TimeSensor201;

let GeoPositionInterpolator202 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator202.DEF = "GeoPositionINTERP6";
GeoPositionInterpolator202.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator202.keyValue = new MFVec3d(new double[0,0,10000000,51.5305712322625,-0.12352377176285152,1000000,51.5305712322625,-0.12352377176285152,100000,51.5305712322625,-0.12352377176285152,10000,51.5305712322625,-0.12352377176285152,1000,51.5305712322625,-0.12352377176285152,200,51.5305712322625,-0.12352377176285152,1000,51.5305712322625,-0.12352377176285152,10000,51.5305712322625,-0.12352377176285152,100000,51.5305712322625,-0.12352377176285152,1000000,0,0,10000000]);
Group3.children[115] = GeoPositionInterpolator202;

let ROUTE203 = browser.currentScene.createNode("ROUTE");
ROUTE203.fromField = "isBound";
ROUTE203.fromNode = "ZOOM6";
ROUTE203.toField = "enabled";
ROUTE203.toNode = "TIMER6";
Group3.children[116] = ROUTE203;

let ROUTE204 = browser.currentScene.createNode("ROUTE");
ROUTE204.fromField = "fraction_changed";
ROUTE204.fromNode = "TIMER6";
ROUTE204.toField = "set_fraction";
ROUTE204.toNode = "GeoPositionINTERP6";
Group3.children[117] = ROUTE204;

let ROUTE205 = browser.currentScene.createNode("ROUTE");
ROUTE205.fromField = "geovalue_changed";
ROUTE205.fromNode = "GeoPositionINTERP6";
ROUTE205.toField = "position";
ROUTE205.toNode = "ZOOM6";
Group3.children[118] = ROUTE205;

//42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA
let TimeSensor206 = browser.currentScene.createNode("TimeSensor");
TimeSensor206.DEF = "TIMER7";
TimeSensor206.cycleInterval = 400;
TimeSensor206.enabled = False;
TimeSensor206.loop = True;
Group3.children[119] = TimeSensor206;

let GeoPositionInterpolator207 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator207.DEF = "GeoPositionINTERP7";
GeoPositionInterpolator207.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator207.keyValue = new MFVec3d(new double[0,0,10000000,42.36027219744271,-71.05916529893875,1000000,42.36027219744271,-71.05916529893875,100000,42.36027219744271,-71.05916529893875,10000,42.36027219744271,-71.05916529893875,1000,42.36027219744271,-71.05916529893875,200,42.36027219744271,-71.05916529893875,1000,42.36027219744271,-71.05916529893875,10000,42.36027219744271,-71.05916529893875,100000,42.36027219744271,-71.05916529893875,1000000,0,0,10000000]);
Group3.children[120] = GeoPositionInterpolator207;

let ROUTE208 = browser.currentScene.createNode("ROUTE");
ROUTE208.fromField = "isBound";
ROUTE208.fromNode = "ZOOM7";
ROUTE208.toField = "enabled";
ROUTE208.toNode = "TIMER7";
Group3.children[121] = ROUTE208;

let ROUTE209 = browser.currentScene.createNode("ROUTE");
ROUTE209.fromField = "fraction_changed";
ROUTE209.fromNode = "TIMER7";
ROUTE209.toField = "set_fraction";
ROUTE209.toNode = "GeoPositionINTERP7";
Group3.children[122] = ROUTE209;

let ROUTE210 = browser.currentScene.createNode("ROUTE");
ROUTE210.fromField = "geovalue_changed";
ROUTE210.fromNode = "GeoPositionINTERP7";
ROUTE210.toField = "position";
ROUTE210.toNode = "ZOOM7";
Group3.children[123] = ROUTE210;

//32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA
let TimeSensor211 = browser.currentScene.createNode("TimeSensor");
TimeSensor211.DEF = "TIMER8";
TimeSensor211.cycleInterval = 400;
TimeSensor211.enabled = False;
TimeSensor211.loop = True;
Group3.children[124] = TimeSensor211;

let GeoPositionInterpolator212 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator212.DEF = "GeoPositionINTERP8";
GeoPositionInterpolator212.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator212.keyValue = new MFVec3d(new double[0,0,10000000,32.70688495899665,-117.16055274009707,1000000,32.70688495899665,-117.16055274009707,100000,32.70688495899665,-117.16055274009707,10000,32.70688495899665,-117.16055274009707,1000,32.70688495899665,-117.16055274009707,200,32.70688495899665,-117.16055274009707,1000,32.70688495899665,-117.16055274009707,10000,32.70688495899665,-117.16055274009707,100000,32.70688495899665,-117.16055274009707,1000000,0,0,10000000]);
Group3.children[125] = GeoPositionInterpolator212;

let ROUTE213 = browser.currentScene.createNode("ROUTE");
ROUTE213.fromField = "isBound";
ROUTE213.fromNode = "ZOOM8";
ROUTE213.toField = "enabled";
ROUTE213.toNode = "TIMER8";
Group3.children[126] = ROUTE213;

let ROUTE214 = browser.currentScene.createNode("ROUTE");
ROUTE214.fromField = "fraction_changed";
ROUTE214.fromNode = "TIMER8";
ROUTE214.toField = "set_fraction";
ROUTE214.toNode = "GeoPositionINTERP8";
Group3.children[127] = ROUTE214;

let ROUTE215 = browser.currentScene.createNode("ROUTE");
ROUTE215.fromField = "geovalue_changed";
ROUTE215.fromNode = "GeoPositionINTERP8";
ROUTE215.toField = "position";
ROUTE215.toNode = "ZOOM8";
Group3.children[128] = ROUTE215;

//28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL
let TimeSensor216 = browser.currentScene.createNode("TimeSensor");
TimeSensor216.DEF = "TIMER9";
TimeSensor216.cycleInterval = 400;
TimeSensor216.enabled = False;
TimeSensor216.loop = True;
Group3.children[129] = TimeSensor216;

let GeoPositionInterpolator217 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator217.DEF = "GeoPositionINTERP9";
GeoPositionInterpolator217.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator217.keyValue = new MFVec3d(new double[0,0,10000000,28.41747302782284,-81.46303564310074,1000000,28.41747302782284,-81.46303564310074,100000,28.41747302782284,-81.46303564310074,10000,28.41747302782284,-81.46303564310074,1000,28.41747302782284,-81.46303564310074,200,28.41747302782284,-81.46303564310074,1000,28.41747302782284,-81.46303564310074,10000,28.41747302782284,-81.46303564310074,100000,28.41747302782284,-81.46303564310074,1000000,0,0,10000000]);
Group3.children[130] = GeoPositionInterpolator217;

let ROUTE218 = browser.currentScene.createNode("ROUTE");
ROUTE218.fromField = "isBound";
ROUTE218.fromNode = "ZOOM9";
ROUTE218.toField = "enabled";
ROUTE218.toNode = "TIMER9";
Group3.children[131] = ROUTE218;

let ROUTE219 = browser.currentScene.createNode("ROUTE");
ROUTE219.fromField = "fraction_changed";
ROUTE219.fromNode = "TIMER9";
ROUTE219.toField = "set_fraction";
ROUTE219.toNode = "GeoPositionINTERP9";
Group3.children[132] = ROUTE219;

let ROUTE220 = browser.currentScene.createNode("ROUTE");
ROUTE220.fromField = "geovalue_changed";
ROUTE220.fromNode = "GeoPositionINTERP9";
ROUTE220.toField = "position";
ROUTE220.toNode = "ZOOM9";
Group3.children[133] = ROUTE220;

//-7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil
let TimeSensor221 = browser.currentScene.createNode("TimeSensor");
TimeSensor221.DEF = "TIMER10";
TimeSensor221.cycleInterval = 400;
TimeSensor221.enabled = False;
TimeSensor221.loop = True;
Group3.children[134] = TimeSensor221;

let GeoPositionInterpolator222 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator222.DEF = "GeoPositionINTERP10";
GeoPositionInterpolator222.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator222.keyValue = new MFVec3d(new double[0,-100,10000000,-7.137685657416106,-34.845199584960945,1000000,-7.137685657416106,-34.845199584960945,100000,-7.137685657416106,-34.845199584960945,10000,-7.137685657416106,-34.845199584960945,1000,-7.137685657416106,-34.845199584960945,300,-7.137685657416106,-34.845199584960945,1000,-7.137685657416106,-34.845199584960945,10000,-7.137685657416106,-34.845199584960945,100000,-7.137685657416106,-34.845199584960945,1000000,0,0,10000000]);
Group3.children[135] = GeoPositionInterpolator222;

let ROUTE223 = browser.currentScene.createNode("ROUTE");
ROUTE223.fromField = "isBound";
ROUTE223.fromNode = "ZOOM10";
ROUTE223.toField = "enabled";
ROUTE223.toNode = "TIMER10";
Group3.children[136] = ROUTE223;

let ROUTE224 = browser.currentScene.createNode("ROUTE");
ROUTE224.fromField = "fraction_changed";
ROUTE224.fromNode = "TIMER10";
ROUTE224.toField = "set_fraction";
ROUTE224.toNode = "GeoPositionINTERP10";
Group3.children[137] = ROUTE224;

let ROUTE225 = browser.currentScene.createNode("ROUTE");
ROUTE225.fromField = "geovalue_changed";
ROUTE225.fromNode = "GeoPositionINTERP10";
ROUTE225.toField = "position";
ROUTE225.toNode = "ZOOM10";
Group3.children[138] = ROUTE225;

//1.26299 103.837398 Port of Singapore, Singapore
let TimeSensor226 = browser.currentScene.createNode("TimeSensor");
TimeSensor226.DEF = "TIMER11";
TimeSensor226.cycleInterval = 400;
TimeSensor226.enabled = False;
TimeSensor226.loop = True;
Group3.children[139] = TimeSensor226;

let GeoPositionInterpolator227 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator227.DEF = "GeoPositionINTERP11";
GeoPositionInterpolator227.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
GeoPositionInterpolator227.keyValue = new MFVec3d(new double[0,0,10000000,1.26299,103.837398,1000000,1.26299,103.837398,100000,1.26299,103.837398,10000,1.26299,103.837398,1000,1.26299,103.837398,500,1.26299,103.837398,1000,1.26299,103.837398,10000,1.26299,103.837398,100000,1.26299,103.837398,1000000,0,0,10000000]);
Group3.children[140] = GeoPositionInterpolator227;

let ROUTE228 = browser.currentScene.createNode("ROUTE");
ROUTE228.fromField = "isBound";
ROUTE228.fromNode = "ZOOM11";
ROUTE228.toField = "enabled";
ROUTE228.toNode = "TIMER11";
Group3.children[141] = ROUTE228;

let ROUTE229 = browser.currentScene.createNode("ROUTE");
ROUTE229.fromField = "fraction_changed";
ROUTE229.fromNode = "TIMER11";
ROUTE229.toField = "set_fraction";
ROUTE229.toNode = "GeoPositionINTERP11";
Group3.children[142] = ROUTE229;

let ROUTE230 = browser.currentScene.createNode("ROUTE");
ROUTE230.fromField = "geovalue_changed";
ROUTE230.fromNode = "GeoPositionINTERP11";
ROUTE230.toField = "position";
ROUTE230.toNode = "ZOOM11";
Group3.children[143] = ROUTE230;

browser.currentScene.children[1] = Group3;

//28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL, 21 level 34.53258110649095 69.13782119750976 Kabul, Afghanistan, 13 level 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA, 19 level 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA, 21 level 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI, 19 level 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom, 21 level 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA, 21 level 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA, 21 level 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL, 21 level -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil, 18 level 1.26299 103.837398 Port of Singapore, Singapore, 17 level
