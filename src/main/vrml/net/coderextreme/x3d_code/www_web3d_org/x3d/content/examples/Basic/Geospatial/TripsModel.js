let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "TripsModel.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Group3 = browser.currentScene.createNode("Group");
let GeoViewpoint4 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint4.description = "Model 1";
GeoViewpoint4.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint4.position = new SFVec3d(new double[-22.9062,-43.1748,5000100]);
Group3.children = new MFNode();

Group3.children[0] = GeoViewpoint4;

let GeoMetadata5 = browser.currentScene.createNode("GeoMetadata");
GeoMetadata5.summary = new MFString(new java.lang.String["title","Martin's Trips","software","text2geovrml (C) 2000 SRI International","models","46"]);
Group3.children[1] = GeoMetadata5;

let GeoLocation6 = browser.currentScene.createNode("GeoLocation");
GeoLocation6.geoCoords = new SFVec3d(new double[-22.9062,-43.1748,50100]);
let Anchor7 = browser.currentScene.createNode("Anchor");
Anchor7.description = "Rio De Janeiro";
Anchor7.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor7.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/rio1.jpg"]);
let Transform8 = browser.currentScene.createNode("Transform");
Transform8.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,0,0]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

let Cone12 = browser.currentScene.createNode("Cone");
Cone12.bottomRadius = 50000;
Cone12.height = 100000;
Shape9.geometry = Cone12;

Transform8.children = new MFNode();

Transform8.children[0] = Shape9;

Anchor7.children = new MFNode();

Anchor7.children[0] = Transform8;

GeoLocation6.children = new MFNode();

GeoLocation6.children[0] = Anchor7;

Group3.children[2] = GeoLocation6;

let GeoViewpoint13 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint13.description = "Model 2";
GeoViewpoint13.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint13.position = new SFVec3d(new double[20.9458,-86.8608,5000100]);
Group3.children[3] = GeoViewpoint13;

let GeoLocation14 = browser.currentScene.createNode("GeoLocation");
GeoLocation14.geoCoords = new SFVec3d(new double[20.9458,-86.8608,50100]);
let Anchor15 = browser.currentScene.createNode("Anchor");
Anchor15.description = "Cancun";
Anchor15.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor15.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico1.jpg"]);
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,0,0]);
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let Cone20 = browser.currentScene.createNode("Cone");
Cone20.bottomRadius = 50000;
Cone20.height = 100000;
Shape17.geometry = Cone20;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

Anchor15.children = new MFNode();

Anchor15.children[0] = Transform16;

GeoLocation14.children = new MFNode();

GeoLocation14.children[0] = Anchor15;

Group3.children[4] = GeoLocation14;

let GeoViewpoint21 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint21.description = "Model 3";
GeoViewpoint21.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint21.position = new SFVec3d(new double[20.9817,-89.6103,5000100]);
Group3.children[5] = GeoViewpoint21;

let GeoLocation22 = browser.currentScene.createNode("GeoLocation");
GeoLocation22.geoCoords = new SFVec3d(new double[20.9817,-89.6103,50100]);
let Anchor23 = browser.currentScene.createNode("Anchor");
Anchor23.description = "Merida";
Anchor23.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[1,0,0]);
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

let Cone28 = browser.currentScene.createNode("Cone");
Cone28.bottomRadius = 50000;
Cone28.height = 100000;
Shape25.geometry = Cone28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Anchor23.children = new MFNode();

Anchor23.children[0] = Transform24;

GeoLocation22.children = new MFNode();

GeoLocation22.children[0] = Anchor23;

Group3.children[6] = GeoLocation22;

let GeoViewpoint29 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint29.description = "Model 4";
GeoViewpoint29.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint29.position = new SFVec3d(new double[20.405,-89.53,5000100]);
Group3.children[7] = GeoViewpoint29;

let GeoLocation30 = browser.currentScene.createNode("GeoLocation");
GeoLocation30.geoCoords = new SFVec3d(new double[20.405,-89.53,50100]);
let Anchor31 = browser.currentScene.createNode("Anchor");
Anchor31.description = "Uxmal";
Anchor31.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor31.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico4.jpg"]);
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,0,0]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Cone36 = browser.currentScene.createNode("Cone");
Cone36.bottomRadius = 50000;
Cone36.height = 100000;
Shape33.geometry = Cone36;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

Anchor31.children = new MFNode();

Anchor31.children[0] = Transform32;

GeoLocation30.children = new MFNode();

GeoLocation30.children[0] = Anchor31;

Group3.children[8] = GeoLocation30;

let GeoViewpoint37 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint37.description = "Model 5";
GeoViewpoint37.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint37.position = new SFVec3d(new double[28.5758,77.1958,5000100]);
Group3.children[9] = GeoViewpoint37;

let GeoLocation38 = browser.currentScene.createNode("GeoLocation");
GeoLocation38.geoCoords = new SFVec3d(new double[28.5758,77.1958,50100]);
let Anchor39 = browser.currentScene.createNode("Anchor");
Anchor39.description = "New Delhi";
Anchor39.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor39.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/hauz.jpg"]);
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new SFColor(new float[1,0,0]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let Cone44 = browser.currentScene.createNode("Cone");
Cone44.bottomRadius = 50000;
Cone44.height = 100000;
Shape41.geometry = Cone44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

Anchor39.children = new MFNode();

Anchor39.children[0] = Transform40;

GeoLocation38.children = new MFNode();

GeoLocation38.children[0] = Anchor39;

Group3.children[10] = GeoLocation38;

let GeoViewpoint45 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint45.description = "Model 6";
GeoViewpoint45.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint45.position = new SFVec3d(new double[27.1892,78.0128,5000100]);
Group3.children[11] = GeoViewpoint45;

let GeoLocation46 = browser.currentScene.createNode("GeoLocation");
GeoLocation46.geoCoords = new SFVec3d(new double[27.1892,78.0128,50100]);
let Anchor47 = browser.currentScene.createNode("Anchor");
Anchor47.description = "Agra";
Anchor47.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor47.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/taj1.jpg"]);
let Transform48 = browser.currentScene.createNode("Transform");
Transform48.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.diffuseColor = new SFColor(new float[1,0,0]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let Cone52 = browser.currentScene.createNode("Cone");
Cone52.bottomRadius = 50000;
Cone52.height = 100000;
Shape49.geometry = Cone52;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

Anchor47.children = new MFNode();

Anchor47.children[0] = Transform48;

GeoLocation46.children = new MFNode();

GeoLocation46.children[0] = Anchor47;

Group3.children[12] = GeoLocation46;

let GeoViewpoint53 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint53.description = "Model 7";
GeoViewpoint53.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint53.position = new SFVec3d(new double[25.3111,83.012,5000100]);
Group3.children[13] = GeoViewpoint53;

let GeoLocation54 = browser.currentScene.createNode("GeoLocation");
GeoLocation54.geoCoords = new SFVec3d(new double[25.3111,83.012,50100]);
let Anchor55 = browser.currentScene.createNode("Anchor");
Anchor55.description = "Varanasi";
Anchor55.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor55.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/ganga.jpg"]);
let Transform56 = browser.currentScene.createNode("Transform");
Transform56.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,0,0]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

let Cone60 = browser.currentScene.createNode("Cone");
Cone60.bottomRadius = 50000;
Cone60.height = 100000;
Shape57.geometry = Cone60;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

Anchor55.children = new MFNode();

Anchor55.children[0] = Transform56;

GeoLocation54.children = new MFNode();

GeoLocation54.children[0] = Anchor55;

Group3.children[14] = GeoLocation54;

let GeoViewpoint61 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint61.description = "Model 8";
GeoViewpoint61.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint61.position = new SFVec3d(new double[25.4438,78.5688,5000100]);
Group3.children[15] = GeoViewpoint61;

let GeoLocation62 = browser.currentScene.createNode("GeoLocation");
GeoLocation62.geoCoords = new SFVec3d(new double[25.4438,78.5688,50100]);
let Anchor63 = browser.currentScene.createNode("Anchor");
Anchor63.description = "Khajuraho";
Anchor63.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape65 = browser.currentScene.createNode("Shape");
let Appearance66 = browser.currentScene.createNode("Appearance");
let Material67 = browser.currentScene.createNode("Material");
Material67.diffuseColor = new SFColor(new float[1,0,0]);
Appearance66.material = Material67;

Shape65.appearance = Appearance66;

let Cone68 = browser.currentScene.createNode("Cone");
Cone68.bottomRadius = 50000;
Cone68.height = 100000;
Shape65.geometry = Cone68;

Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

Anchor63.children = new MFNode();

Anchor63.children[0] = Transform64;

GeoLocation62.children = new MFNode();

GeoLocation62.children[0] = Anchor63;

Group3.children[16] = GeoLocation62;

let GeoViewpoint69 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint69.description = "Model 9";
GeoViewpoint69.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint69.position = new SFVec3d(new double[13.7342,100.5292,5000100]);
Group3.children[17] = GeoViewpoint69;

let GeoLocation70 = browser.currentScene.createNode("GeoLocation");
GeoLocation70.geoCoords = new SFVec3d(new double[13.7342,100.5292,50100]);
let Anchor71 = browser.currentScene.createNode("Anchor");
Anchor71.description = "Bangkok";
Anchor71.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape73 = browser.currentScene.createNode("Shape");
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.diffuseColor = new SFColor(new float[1,0,0]);
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

let Cone76 = browser.currentScene.createNode("Cone");
Cone76.bottomRadius = 50000;
Cone76.height = 100000;
Shape73.geometry = Cone76;

Transform72.children = new MFNode();

Transform72.children[0] = Shape73;

Anchor71.children = new MFNode();

Anchor71.children[0] = Transform72;

GeoLocation70.children = new MFNode();

GeoLocation70.children[0] = Anchor71;

Group3.children[18] = GeoLocation70;

let GeoViewpoint77 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint77.description = "Model 10";
GeoViewpoint77.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint77.position = new SFVec3d(new double[22.2766,114.1525,5000100]);
Group3.children[19] = GeoViewpoint77;

let GeoLocation78 = browser.currentScene.createNode("GeoLocation");
GeoLocation78.geoCoords = new SFVec3d(new double[22.2766,114.1525,50100]);
let Anchor79 = browser.currentScene.createNode("Anchor");
Anchor79.description = "Hong Kong";
Anchor79.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor79.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/night3.jpg"]);
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape81 = browser.currentScene.createNode("Shape");
let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.diffuseColor = new SFColor(new float[1,0,0]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

let Cone84 = browser.currentScene.createNode("Cone");
Cone84.bottomRadius = 50000;
Cone84.height = 100000;
Shape81.geometry = Cone84;

Transform80.children = new MFNode();

Transform80.children[0] = Shape81;

Anchor79.children = new MFNode();

Anchor79.children[0] = Transform80;

GeoLocation78.children = new MFNode();

GeoLocation78.children[0] = Anchor79;

Group3.children[20] = GeoLocation78;

let GeoViewpoint85 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint85.description = "Model 11";
GeoViewpoint85.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint85.position = new SFVec3d(new double[22.19532,113.54744,5000100]);
Group3.children[21] = GeoViewpoint85;

let GeoLocation86 = browser.currentScene.createNode("GeoLocation");
GeoLocation86.geoCoords = new SFVec3d(new double[22.19532,113.54744,50100]);
let Anchor87 = browser.currentScene.createNode("Anchor");
Anchor87.description = "Macau";
Anchor87.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor87.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/saopaulo.jpg"]);
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape89 = browser.currentScene.createNode("Shape");
let Appearance90 = browser.currentScene.createNode("Appearance");
let Material91 = browser.currentScene.createNode("Material");
Material91.diffuseColor = new SFColor(new float[1,0,0]);
Appearance90.material = Material91;

Shape89.appearance = Appearance90;

let Cone92 = browser.currentScene.createNode("Cone");
Cone92.bottomRadius = 50000;
Cone92.height = 100000;
Shape89.geometry = Cone92;

Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

Anchor87.children = new MFNode();

Anchor87.children[0] = Transform88;

GeoLocation86.children = new MFNode();

GeoLocation86.children[0] = Anchor87;

Group3.children[22] = GeoLocation86;

let GeoViewpoint93 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint93.description = "Model 12";
GeoViewpoint93.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint93.position = new SFVec3d(new double[-31.9397,115.7619,5000100]);
Group3.children[23] = GeoViewpoint93;

let GeoLocation94 = browser.currentScene.createNode("GeoLocation");
GeoLocation94.geoCoords = new SFVec3d(new double[-31.9397,115.7619,50100]);
let Anchor95 = browser.currentScene.createNode("Anchor");
Anchor95.description = "Perth";
Anchor95.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor95.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/perthdad.jpg"]);
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape97 = browser.currentScene.createNode("Shape");
let Appearance98 = browser.currentScene.createNode("Appearance");
let Material99 = browser.currentScene.createNode("Material");
Material99.diffuseColor = new SFColor(new float[1,0,0]);
Appearance98.material = Material99;

Shape97.appearance = Appearance98;

let Cone100 = browser.currentScene.createNode("Cone");
Cone100.bottomRadius = 50000;
Cone100.height = 100000;
Shape97.geometry = Cone100;

Transform96.children = new MFNode();

Transform96.children[0] = Shape97;

Anchor95.children = new MFNode();

Anchor95.children[0] = Transform96;

GeoLocation94.children = new MFNode();

GeoLocation94.children[0] = Anchor95;

Group3.children[24] = GeoLocation94;

let GeoViewpoint101 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint101.description = "Model 13";
GeoViewpoint101.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint101.position = new SFVec3d(new double[-23.7,133.8717,5000100]);
Group3.children[25] = GeoViewpoint101;

let GeoLocation102 = browser.currentScene.createNode("GeoLocation");
GeoLocation102.geoCoords = new SFVec3d(new double[-23.7,133.8717,50100]);
let Anchor103 = browser.currentScene.createNode("Anchor");
Anchor103.description = "Alice Springs";
Anchor103.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor103.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/ayers1.jpg"]);
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape105 = browser.currentScene.createNode("Shape");
let Appearance106 = browser.currentScene.createNode("Appearance");
let Material107 = browser.currentScene.createNode("Material");
Material107.diffuseColor = new SFColor(new float[1,0,0]);
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

let Cone108 = browser.currentScene.createNode("Cone");
Cone108.bottomRadius = 50000;
Cone108.height = 100000;
Shape105.geometry = Cone108;

Transform104.children = new MFNode();

Transform104.children[0] = Shape105;

Anchor103.children = new MFNode();

Anchor103.children[0] = Transform104;

GeoLocation102.children = new MFNode();

GeoLocation102.children[0] = Anchor103;

Group3.children[26] = GeoLocation102;

let GeoViewpoint109 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint109.description = "Model 14";
GeoViewpoint109.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint109.position = new SFVec3d(new double[-34.9333,138.6,5000100]);
Group3.children[27] = GeoViewpoint109;

let GeoLocation110 = browser.currentScene.createNode("GeoLocation");
GeoLocation110.geoCoords = new SFVec3d(new double[-34.9333,138.6,50100]);
let Anchor111 = browser.currentScene.createNode("Anchor");
Anchor111.description = "Adelaide";
Anchor111.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor111.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/adelaide.jpg"]);
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.diffuseColor = new SFColor(new float[1,0,0]);
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

let Cone116 = browser.currentScene.createNode("Cone");
Cone116.bottomRadius = 50000;
Cone116.height = 100000;
Shape113.geometry = Cone116;

Transform112.children = new MFNode();

Transform112.children[0] = Shape113;

Anchor111.children = new MFNode();

Anchor111.children[0] = Transform112;

GeoLocation110.children = new MFNode();

GeoLocation110.children[0] = Anchor111;

Group3.children[28] = GeoLocation110;

let GeoViewpoint117 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint117.description = "Model 15";
GeoViewpoint117.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint117.position = new SFVec3d(new double[-33.9689,151.1283,5000100]);
Group3.children[29] = GeoViewpoint117;

let GeoLocation118 = browser.currentScene.createNode("GeoLocation");
GeoLocation118.geoCoords = new SFVec3d(new double[-33.9689,151.1283,50100]);
let Anchor119 = browser.currentScene.createNode("Anchor");
Anchor119.description = "Sydney";
Anchor119.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor119.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/opera2.jpg"]);
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape121 = browser.currentScene.createNode("Shape");
let Appearance122 = browser.currentScene.createNode("Appearance");
let Material123 = browser.currentScene.createNode("Material");
Material123.diffuseColor = new SFColor(new float[1,0,0]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

let Cone124 = browser.currentScene.createNode("Cone");
Cone124.bottomRadius = 50000;
Cone124.height = 100000;
Shape121.geometry = Cone124;

Transform120.children = new MFNode();

Transform120.children[0] = Shape121;

Anchor119.children = new MFNode();

Anchor119.children[0] = Transform120;

GeoLocation118.children = new MFNode();

GeoLocation118.children[0] = Anchor119;

Group3.children[30] = GeoLocation118;

let GeoViewpoint125 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint125.description = "Model 16";
GeoViewpoint125.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint125.position = new SFVec3d(new double[37.97,23.72,5000100]);
Group3.children[31] = GeoViewpoint125;

let GeoLocation126 = browser.currentScene.createNode("GeoLocation");
GeoLocation126.geoCoords = new SFVec3d(new double[37.97,23.72,50100]);
let Anchor127 = browser.currentScene.createNode("Anchor");
Anchor127.description = "Athens";
Anchor127.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor127.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/athens.jpg"]);
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape129 = browser.currentScene.createNode("Shape");
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.diffuseColor = new SFColor(new float[1,0,0]);
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

let Cone132 = browser.currentScene.createNode("Cone");
Cone132.bottomRadius = 50000;
Cone132.height = 100000;
Shape129.geometry = Cone132;

Transform128.children = new MFNode();

Transform128.children[0] = Shape129;

Anchor127.children = new MFNode();

Anchor127.children[0] = Transform128;

GeoLocation126.children = new MFNode();

GeoLocation126.children[0] = Anchor127;

Group3.children[32] = GeoLocation126;

let GeoViewpoint133 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint133.description = "Model 17";
GeoViewpoint133.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint133.position = new SFVec3d(new double[35.2667,25.7167,5000100]);
Group3.children[33] = GeoViewpoint133;

let GeoLocation134 = browser.currentScene.createNode("GeoLocation");
GeoLocation134.geoCoords = new SFVec3d(new double[35.2667,25.7167,50100]);
let Anchor135 = browser.currentScene.createNode("Anchor");
Anchor135.description = "Elounda";
Anchor135.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor135.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/Spin.gif"]);
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
let Material139 = browser.currentScene.createNode("Material");
Material139.diffuseColor = new SFColor(new float[1,0,0]);
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

let Cone140 = browser.currentScene.createNode("Cone");
Cone140.bottomRadius = 50000;
Cone140.height = 100000;
Shape137.geometry = Cone140;

Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

Anchor135.children = new MFNode();

Anchor135.children[0] = Transform136;

GeoLocation134.children = new MFNode();

GeoLocation134.children[0] = Anchor135;

Group3.children[34] = GeoLocation134;

let GeoViewpoint141 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint141.description = "Model 18";
GeoViewpoint141.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint141.position = new SFVec3d(new double[36.129,-5.352,5000100]);
Group3.children[35] = GeoViewpoint141;

let GeoLocation142 = browser.currentScene.createNode("GeoLocation");
GeoLocation142.geoCoords = new SFVec3d(new double[36.129,-5.352,50100]);
let Anchor143 = browser.currentScene.createNode("Anchor");
Anchor143.description = "Gibraltar";
Anchor143.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform144 = browser.currentScene.createNode("Transform");
Transform144.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape145 = browser.currentScene.createNode("Shape");
let Appearance146 = browser.currentScene.createNode("Appearance");
let Material147 = browser.currentScene.createNode("Material");
Material147.diffuseColor = new SFColor(new float[1,0,0]);
Appearance146.material = Material147;

Shape145.appearance = Appearance146;

let Cone148 = browser.currentScene.createNode("Cone");
Cone148.bottomRadius = 50000;
Cone148.height = 100000;
Shape145.geometry = Cone148;

Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

Anchor143.children = new MFNode();

Anchor143.children[0] = Transform144;

GeoLocation142.children = new MFNode();

GeoLocation142.children[0] = Anchor143;

Group3.children[36] = GeoLocation142;

let GeoViewpoint149 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint149.description = "Model 19";
GeoViewpoint149.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint149.position = new SFVec3d(new double[48.85424,2.34486,5000100]);
Group3.children[37] = GeoViewpoint149;

let GeoLocation150 = browser.currentScene.createNode("GeoLocation");
GeoLocation150.geoCoords = new SFVec3d(new double[48.85424,2.34486,50100]);
let Anchor151 = browser.currentScene.createNode("Anchor");
Anchor151.description = "Paris";
Anchor151.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
let Material155 = browser.currentScene.createNode("Material");
Material155.diffuseColor = new SFColor(new float[1,0,0]);
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

let Cone156 = browser.currentScene.createNode("Cone");
Cone156.bottomRadius = 50000;
Cone156.height = 100000;
Shape153.geometry = Cone156;

Transform152.children = new MFNode();

Transform152.children[0] = Shape153;

Anchor151.children = new MFNode();

Anchor151.children[0] = Transform152;

GeoLocation150.children = new MFNode();

GeoLocation150.children[0] = Anchor151;

Group3.children[38] = GeoLocation150;

let GeoViewpoint157 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint157.description = "Model 20";
GeoViewpoint157.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint157.position = new SFVec3d(new double[44.84138,1.75535,5000100]);
Group3.children[39] = GeoViewpoint157;

let GeoLocation158 = browser.currentScene.createNode("GeoLocation");
GeoLocation158.geoCoords = new SFVec3d(new double[44.84138,1.75535,50100]);
let Anchor159 = browser.currentScene.createNode("Anchor");
Anchor159.description = "Padirac";
Anchor159.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform160 = browser.currentScene.createNode("Transform");
Transform160.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape161 = browser.currentScene.createNode("Shape");
let Appearance162 = browser.currentScene.createNode("Appearance");
let Material163 = browser.currentScene.createNode("Material");
Material163.diffuseColor = new SFColor(new float[1,0,0]);
Appearance162.material = Material163;

Shape161.appearance = Appearance162;

let Cone164 = browser.currentScene.createNode("Cone");
Cone164.bottomRadius = 50000;
Cone164.height = 100000;
Shape161.geometry = Cone164;

Transform160.children = new MFNode();

Transform160.children[0] = Shape161;

Anchor159.children = new MFNode();

Anchor159.children[0] = Transform160;

GeoLocation158.children = new MFNode();

GeoLocation158.children[0] = Anchor159;

Group3.children[40] = GeoLocation158;

let GeoViewpoint165 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint165.description = "Model 21";
GeoViewpoint165.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint165.position = new SFVec3d(new double[57.71622,-3.28994,5000100]);
Group3.children[41] = GeoViewpoint165;

let GeoLocation166 = browser.currentScene.createNode("GeoLocation");
GeoLocation166.geoCoords = new SFVec3d(new double[57.71622,-3.28994,50100]);
let Anchor167 = browser.currentScene.createNode("Anchor");
Anchor167.description = "Lossiemouth";
Anchor167.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor167.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Lossie/snowman1.gif"]);
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape169 = browser.currentScene.createNode("Shape");
let Appearance170 = browser.currentScene.createNode("Appearance");
let Material171 = browser.currentScene.createNode("Material");
Material171.diffuseColor = new SFColor(new float[1,0,0]);
Appearance170.material = Material171;

Shape169.appearance = Appearance170;

let Cone172 = browser.currentScene.createNode("Cone");
Cone172.bottomRadius = 50000;
Cone172.height = 100000;
Shape169.geometry = Cone172;

Transform168.children = new MFNode();

Transform168.children[0] = Shape169;

Anchor167.children = new MFNode();

Anchor167.children[0] = Transform168;

GeoLocation166.children = new MFNode();

GeoLocation166.children[0] = Anchor167;

Group3.children[42] = GeoLocation166;

let GeoViewpoint173 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint173.description = "Model 22";
GeoViewpoint173.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint173.position = new SFVec3d(new double[55.85767,-4.24283,5000100]);
Group3.children[43] = GeoViewpoint173;

let GeoLocation174 = browser.currentScene.createNode("GeoLocation");
GeoLocation174.geoCoords = new SFVec3d(new double[55.85767,-4.24283,50100]);
let Anchor175 = browser.currentScene.createNode("Anchor");
Anchor175.description = "Glasgow";
Anchor175.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor175.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Strath/Nonsense.gif"]);
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape177 = browser.currentScene.createNode("Shape");
let Appearance178 = browser.currentScene.createNode("Appearance");
let Material179 = browser.currentScene.createNode("Material");
Material179.diffuseColor = new SFColor(new float[1,0,0]);
Appearance178.material = Material179;

Shape177.appearance = Appearance178;

let Cone180 = browser.currentScene.createNode("Cone");
Cone180.bottomRadius = 50000;
Cone180.height = 100000;
Shape177.geometry = Cone180;

Transform176.children = new MFNode();

Transform176.children[0] = Shape177;

Anchor175.children = new MFNode();

Anchor175.children[0] = Transform176;

GeoLocation174.children = new MFNode();

GeoLocation174.children[0] = Anchor175;

Group3.children[44] = GeoLocation174;

let GeoViewpoint181 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint181.description = "Model 23";
GeoViewpoint181.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint181.position = new SFVec3d(new double[55.95381,-3.20087,5000100]);
Group3.children[45] = GeoViewpoint181;

let GeoLocation182 = browser.currentScene.createNode("GeoLocation");
GeoLocation182.geoCoords = new SFVec3d(new double[55.95381,-3.20087,50100]);
let Anchor183 = browser.currentScene.createNode("Anchor");
Anchor183.description = "Edinburgh";
Anchor183.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform184 = browser.currentScene.createNode("Transform");
Transform184.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape185 = browser.currentScene.createNode("Shape");
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.diffuseColor = new SFColor(new float[1,0,0]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

let Cone188 = browser.currentScene.createNode("Cone");
Cone188.bottomRadius = 50000;
Cone188.height = 100000;
Shape185.geometry = Cone188;

Transform184.children = new MFNode();

Transform184.children[0] = Shape185;

Anchor183.children = new MFNode();

Anchor183.children[0] = Transform184;

GeoLocation182.children = new MFNode();

GeoLocation182.children[0] = Anchor183;

Group3.children[46] = GeoLocation182;

let GeoViewpoint189 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint189.description = "Model 24";
GeoViewpoint189.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint189.position = new SFVec3d(new double[51.50595,-0.12689,5000100]);
Group3.children[47] = GeoViewpoint189;

let GeoLocation190 = browser.currentScene.createNode("GeoLocation");
GeoLocation190.geoCoords = new SFVec3d(new double[51.50595,-0.12689,50100]);
let Anchor191 = browser.currentScene.createNode("Anchor");
Anchor191.description = "London";
Anchor191.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape193 = browser.currentScene.createNode("Shape");
let Appearance194 = browser.currentScene.createNode("Appearance");
let Material195 = browser.currentScene.createNode("Material");
Material195.diffuseColor = new SFColor(new float[1,0,0]);
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

let Cone196 = browser.currentScene.createNode("Cone");
Cone196.bottomRadius = 50000;
Cone196.height = 100000;
Shape193.geometry = Cone196;

Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

Anchor191.children = new MFNode();

Anchor191.children[0] = Transform192;

GeoLocation190.children = new MFNode();

GeoLocation190.children[0] = Anchor191;

Group3.children[48] = GeoLocation190;

let GeoViewpoint197 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint197.description = "Model 25";
GeoViewpoint197.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint197.position = new SFVec3d(new double[51.88481,0.90342,5000100]);
Group3.children[49] = GeoViewpoint197;

let GeoLocation198 = browser.currentScene.createNode("GeoLocation");
GeoLocation198.geoCoords = new SFVec3d(new double[51.88481,0.90342,50100]);
let Anchor199 = browser.currentScene.createNode("Anchor");
Anchor199.description = "Colchester";
Anchor199.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape201 = browser.currentScene.createNode("Shape");
let Appearance202 = browser.currentScene.createNode("Appearance");
let Material203 = browser.currentScene.createNode("Material");
Material203.diffuseColor = new SFColor(new float[1,0,0]);
Appearance202.material = Material203;

Shape201.appearance = Appearance202;

let Cone204 = browser.currentScene.createNode("Cone");
Cone204.bottomRadius = 50000;
Cone204.height = 100000;
Shape201.geometry = Cone204;

Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

Anchor199.children = new MFNode();

Anchor199.children[0] = Transform200;

GeoLocation198.children = new MFNode();

GeoLocation198.children[0] = Anchor199;

Group3.children[50] = GeoLocation198;

let GeoViewpoint205 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint205.description = "Model 26";
GeoViewpoint205.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint205.position = new SFVec3d(new double[54.77742,-1.573719,5000100]);
Group3.children[51] = GeoViewpoint205;

let GeoLocation206 = browser.currentScene.createNode("GeoLocation");
GeoLocation206.geoCoords = new SFVec3d(new double[54.77742,-1.573719,50100]);
let Anchor207 = browser.currentScene.createNode("Anchor");
Anchor207.description = "Durham";
Anchor207.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform208 = browser.currentScene.createNode("Transform");
Transform208.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape209 = browser.currentScene.createNode("Shape");
let Appearance210 = browser.currentScene.createNode("Appearance");
let Material211 = browser.currentScene.createNode("Material");
Material211.diffuseColor = new SFColor(new float[1,0,0]);
Appearance210.material = Material211;

Shape209.appearance = Appearance210;

let Cone212 = browser.currentScene.createNode("Cone");
Cone212.bottomRadius = 50000;
Cone212.height = 100000;
Shape209.geometry = Cone212;

Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

Anchor207.children = new MFNode();

Anchor207.children[0] = Transform208;

GeoLocation206.children = new MFNode();

GeoLocation206.children[0] = Anchor207;

Group3.children[52] = GeoLocation206;

let GeoViewpoint213 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint213.description = "Model 27";
GeoViewpoint213.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint213.position = new SFVec3d(new double[54.9921,-7.3116,5000100]);
Group3.children[53] = GeoViewpoint213;

let GeoLocation214 = browser.currentScene.createNode("GeoLocation");
GeoLocation214.geoCoords = new SFVec3d(new double[54.9921,-7.3116,50100]);
let Anchor215 = browser.currentScene.createNode("Anchor");
Anchor215.description = "Derry";
Anchor215.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor215.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/NI/Gang.gif"]);
let Transform216 = browser.currentScene.createNode("Transform");
Transform216.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.diffuseColor = new SFColor(new float[1,0,0]);
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

let Cone220 = browser.currentScene.createNode("Cone");
Cone220.bottomRadius = 50000;
Cone220.height = 100000;
Shape217.geometry = Cone220;

Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

Anchor215.children = new MFNode();

Anchor215.children[0] = Transform216;

GeoLocation214.children = new MFNode();

GeoLocation214.children[0] = Anchor215;

Group3.children[54] = GeoLocation214;

let GeoViewpoint221 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint221.description = "Model 28";
GeoViewpoint221.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint221.position = new SFVec3d(new double[54.5938,-5.9231,5000100]);
Group3.children[55] = GeoViewpoint221;

let GeoLocation222 = browser.currentScene.createNode("GeoLocation");
GeoLocation222.geoCoords = new SFVec3d(new double[54.5938,-5.9231,50100]);
let Anchor223 = browser.currentScene.createNode("Anchor");
Anchor223.description = "Belfast";
Anchor223.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape225 = browser.currentScene.createNode("Shape");
let Appearance226 = browser.currentScene.createNode("Appearance");
let Material227 = browser.currentScene.createNode("Material");
Material227.diffuseColor = new SFColor(new float[1,0,0]);
Appearance226.material = Material227;

Shape225.appearance = Appearance226;

let Cone228 = browser.currentScene.createNode("Cone");
Cone228.bottomRadius = 50000;
Cone228.height = 100000;
Shape225.geometry = Cone228;

Transform224.children = new MFNode();

Transform224.children[0] = Shape225;

Anchor223.children = new MFNode();

Anchor223.children[0] = Transform224;

GeoLocation222.children = new MFNode();

GeoLocation222.children[0] = Anchor223;

Group3.children[56] = GeoLocation222;

let GeoViewpoint229 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint229.description = "Model 29";
GeoViewpoint229.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint229.position = new SFVec3d(new double[37.78572,-122.42142,5000100]);
Group3.children[57] = GeoViewpoint229;

let GeoLocation230 = browser.currentScene.createNode("GeoLocation");
GeoLocation230.geoCoords = new SFVec3d(new double[37.78572,-122.42142,50100]);
let Anchor231 = browser.currentScene.createNode("Anchor");
Anchor231.description = "San Francisco CA";
Anchor231.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor231.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/sfbay.jpg"]);
let Transform232 = browser.currentScene.createNode("Transform");
Transform232.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape233 = browser.currentScene.createNode("Shape");
let Appearance234 = browser.currentScene.createNode("Appearance");
let Material235 = browser.currentScene.createNode("Material");
Material235.diffuseColor = new SFColor(new float[1,0,0]);
Appearance234.material = Material235;

Shape233.appearance = Appearance234;

let Cone236 = browser.currentScene.createNode("Cone");
Cone236.bottomRadius = 50000;
Cone236.height = 100000;
Shape233.geometry = Cone236;

Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

Anchor231.children = new MFNode();

Anchor231.children[0] = Transform232;

GeoLocation230.children = new MFNode();

GeoLocation230.children[0] = Anchor231;

Group3.children[58] = GeoLocation230;

let GeoViewpoint237 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint237.description = "Model 30";
GeoViewpoint237.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint237.position = new SFVec3d(new double[34.052207,-118.24344,5000100]);
Group3.children[59] = GeoViewpoint237;

let GeoLocation238 = browser.currentScene.createNode("GeoLocation");
GeoLocation238.geoCoords = new SFVec3d(new double[34.052207,-118.24344,50100]);
let Anchor239 = browser.currentScene.createNode("Anchor");
Anchor239.description = "Los Angeles CA";
Anchor239.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor239.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/cement.jpg"]);
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape241 = browser.currentScene.createNode("Shape");
let Appearance242 = browser.currentScene.createNode("Appearance");
let Material243 = browser.currentScene.createNode("Material");
Material243.diffuseColor = new SFColor(new float[1,0,0]);
Appearance242.material = Material243;

Shape241.appearance = Appearance242;

let Cone244 = browser.currentScene.createNode("Cone");
Cone244.bottomRadius = 50000;
Cone244.height = 100000;
Shape241.geometry = Cone244;

Transform240.children = new MFNode();

Transform240.children[0] = Shape241;

Anchor239.children = new MFNode();

Anchor239.children[0] = Transform240;

GeoLocation238.children = new MFNode();

GeoLocation238.children[0] = Anchor239;

Group3.children[60] = GeoLocation238;

let GeoViewpoint245 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint245.description = "Model 31";
GeoViewpoint245.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint245.position = new SFVec3d(new double[37.893026,-119.581559,5000100]);
Group3.children[61] = GeoViewpoint245;

let GeoLocation246 = browser.currentScene.createNode("GeoLocation");
GeoLocation246.geoCoords = new SFVec3d(new double[37.893026,-119.581559,50100]);
let Anchor247 = browser.currentScene.createNode("Anchor");
Anchor247.description = "Yosemite";
Anchor247.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor247.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum4.jpg"]);
let Transform248 = browser.currentScene.createNode("Transform");
Transform248.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape249 = browser.currentScene.createNode("Shape");
let Appearance250 = browser.currentScene.createNode("Appearance");
let Material251 = browser.currentScene.createNode("Material");
Material251.diffuseColor = new SFColor(new float[1,0,0]);
Appearance250.material = Material251;

Shape249.appearance = Appearance250;

let Cone252 = browser.currentScene.createNode("Cone");
Cone252.bottomRadius = 50000;
Cone252.height = 100000;
Shape249.geometry = Cone252;

Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

Anchor247.children = new MFNode();

Anchor247.children[0] = Transform248;

GeoLocation246.children = new MFNode();

GeoLocation246.children[0] = Anchor247;

Group3.children[62] = GeoLocation246;

let GeoViewpoint253 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint253.description = "Model 32";
GeoViewpoint253.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint253.position = new SFVec3d(new double[36.522546,-116.917641,5000100]);
Group3.children[63] = GeoViewpoint253;

let GeoLocation254 = browser.currentScene.createNode("GeoLocation");
GeoLocation254.geoCoords = new SFVec3d(new double[36.522546,-116.917641,50100]);
let Anchor255 = browser.currentScene.createNode("Anchor");
Anchor255.description = "Death Valley";
Anchor255.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor255.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=death/badwater.jpg"]);
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape257 = browser.currentScene.createNode("Shape");
let Appearance258 = browser.currentScene.createNode("Appearance");
let Material259 = browser.currentScene.createNode("Material");
Material259.diffuseColor = new SFColor(new float[1,0,0]);
Appearance258.material = Material259;

Shape257.appearance = Appearance258;

let Cone260 = browser.currentScene.createNode("Cone");
Cone260.bottomRadius = 50000;
Cone260.height = 100000;
Shape257.geometry = Cone260;

Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

Anchor255.children = new MFNode();

Anchor255.children[0] = Transform256;

GeoLocation254.children = new MFNode();

GeoLocation254.children[0] = Anchor255;

Group3.children[64] = GeoLocation254;

let GeoViewpoint261 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint261.description = "Model 33";
GeoViewpoint261.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint261.position = new SFVec3d(new double[40.755486,-73.986148,5000100]);
Group3.children[65] = GeoViewpoint261;

let GeoLocation262 = browser.currentScene.createNode("GeoLocation");
GeoLocation262.geoCoords = new SFVec3d(new double[40.755486,-73.986148,50100]);
let Anchor263 = browser.currentScene.createNode("Anchor");
Anchor263.description = "New York NY";
Anchor263.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform264 = browser.currentScene.createNode("Transform");
Transform264.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape265 = browser.currentScene.createNode("Shape");
let Appearance266 = browser.currentScene.createNode("Appearance");
let Material267 = browser.currentScene.createNode("Material");
Material267.diffuseColor = new SFColor(new float[1,0,0]);
Appearance266.material = Material267;

Shape265.appearance = Appearance266;

let Cone268 = browser.currentScene.createNode("Cone");
Cone268.bottomRadius = 50000;
Cone268.height = 100000;
Shape265.geometry = Cone268;

Transform264.children = new MFNode();

Transform264.children[0] = Shape265;

Anchor263.children = new MFNode();

Anchor263.children[0] = Transform264;

GeoLocation262.children = new MFNode();

GeoLocation262.children[0] = Anchor263;

Group3.children[66] = GeoLocation262;

let GeoViewpoint269 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint269.description = "Model 34";
GeoViewpoint269.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint269.position = new SFVec3d(new double[38.892076,-77.031942,5000100]);
Group3.children[67] = GeoViewpoint269;

let GeoLocation270 = browser.currentScene.createNode("GeoLocation");
GeoLocation270.geoCoords = new SFVec3d(new double[38.892076,-77.031942,50100]);
let Anchor271 = browser.currentScene.createNode("Anchor");
Anchor271.description = "Washington DC";
Anchor271.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform272 = browser.currentScene.createNode("Transform");
Transform272.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape273 = browser.currentScene.createNode("Shape");
let Appearance274 = browser.currentScene.createNode("Appearance");
let Material275 = browser.currentScene.createNode("Material");
Material275.diffuseColor = new SFColor(new float[1,0,0]);
Appearance274.material = Material275;

Shape273.appearance = Appearance274;

let Cone276 = browser.currentScene.createNode("Cone");
Cone276.bottomRadius = 50000;
Cone276.height = 100000;
Shape273.geometry = Cone276;

Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

Anchor271.children = new MFNode();

Anchor271.children[0] = Transform272;

GeoLocation270.children = new MFNode();

GeoLocation270.children[0] = Anchor271;

Group3.children[68] = GeoLocation270;

let GeoViewpoint277 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint277.description = "Model 35";
GeoViewpoint277.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint277.position = new SFVec3d(new double[28.564086,-81.364457,5000100]);
Group3.children[69] = GeoViewpoint277;

let GeoLocation278 = browser.currentScene.createNode("GeoLocation");
GeoLocation278.geoCoords = new SFVec3d(new double[28.564086,-81.364457,50100]);
let Anchor279 = browser.currentScene.createNode("Anchor");
Anchor279.description = "Orlando FL";
Anchor279.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor279.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/disney1.jpg"]);
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape281 = browser.currentScene.createNode("Shape");
let Appearance282 = browser.currentScene.createNode("Appearance");
let Material283 = browser.currentScene.createNode("Material");
Material283.diffuseColor = new SFColor(new float[1,0,0]);
Appearance282.material = Material283;

Shape281.appearance = Appearance282;

let Cone284 = browser.currentScene.createNode("Cone");
Cone284.bottomRadius = 50000;
Cone284.height = 100000;
Shape281.geometry = Cone284;

Transform280.children = new MFNode();

Transform280.children[0] = Shape281;

Anchor279.children = new MFNode();

Anchor279.children[0] = Transform280;

GeoLocation278.children = new MFNode();

GeoLocation278.children[0] = Anchor279;

Group3.children[70] = GeoLocation278;

let GeoViewpoint285 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint285.description = "Model 36";
GeoViewpoint285.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint285.position = new SFVec3d(new double[29.955863,-90.072585,5000100]);
Group3.children[71] = GeoViewpoint285;

let GeoLocation286 = browser.currentScene.createNode("GeoLocation");
GeoLocation286.geoCoords = new SFVec3d(new double[29.955863,-90.072585,50100]);
let Anchor287 = browser.currentScene.createNode("Anchor");
Anchor287.description = "New Orleans LA";
Anchor287.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform288 = browser.currentScene.createNode("Transform");
Transform288.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape289 = browser.currentScene.createNode("Shape");
let Appearance290 = browser.currentScene.createNode("Appearance");
let Material291 = browser.currentScene.createNode("Material");
Material291.diffuseColor = new SFColor(new float[1,0,0]);
Appearance290.material = Material291;

Shape289.appearance = Appearance290;

let Cone292 = browser.currentScene.createNode("Cone");
Cone292.bottomRadius = 50000;
Cone292.height = 100000;
Shape289.geometry = Cone292;

Transform288.children = new MFNode();

Transform288.children[0] = Shape289;

Anchor287.children = new MFNode();

Anchor287.children[0] = Transform288;

GeoLocation286.children = new MFNode();

GeoLocation286.children[0] = Anchor287;

Group3.children[72] = GeoLocation286;

let GeoViewpoint293 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint293.description = "Model 37";
GeoViewpoint293.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint293.position = new SFVec3d(new double[40.026881,-105.251025,5000100]);
Group3.children[73] = GeoViewpoint293;

let GeoLocation294 = browser.currentScene.createNode("GeoLocation");
GeoLocation294.geoCoords = new SFVec3d(new double[40.026881,-105.251025,50100]);
let Anchor295 = browser.currentScene.createNode("Anchor");
Anchor295.description = "Boulder CO";
Anchor295.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform296 = browser.currentScene.createNode("Transform");
Transform296.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape297 = browser.currentScene.createNode("Shape");
let Appearance298 = browser.currentScene.createNode("Appearance");
let Material299 = browser.currentScene.createNode("Material");
Material299.diffuseColor = new SFColor(new float[1,0,0]);
Appearance298.material = Material299;

Shape297.appearance = Appearance298;

let Cone300 = browser.currentScene.createNode("Cone");
Cone300.bottomRadius = 50000;
Cone300.height = 100000;
Shape297.geometry = Cone300;

Transform296.children = new MFNode();

Transform296.children[0] = Shape297;

Anchor295.children = new MFNode();

Anchor295.children[0] = Transform296;

GeoLocation294.children = new MFNode();

GeoLocation294.children[0] = Anchor295;

Group3.children[74] = GeoLocation294;

let GeoViewpoint301 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint301.description = "Model 38";
GeoViewpoint301.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint301.position = new SFVec3d(new double[39.118556,-94.627072,5000100]);
Group3.children[75] = GeoViewpoint301;

let GeoLocation302 = browser.currentScene.createNode("GeoLocation");
GeoLocation302.geoCoords = new SFVec3d(new double[39.118556,-94.627072,50100]);
let Anchor303 = browser.currentScene.createNode("Anchor");
Anchor303.description = "Kansas City KS";
Anchor303.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform304 = browser.currentScene.createNode("Transform");
Transform304.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape305 = browser.currentScene.createNode("Shape");
let Appearance306 = browser.currentScene.createNode("Appearance");
let Material307 = browser.currentScene.createNode("Material");
Material307.diffuseColor = new SFColor(new float[1,0,0]);
Appearance306.material = Material307;

Shape305.appearance = Appearance306;

let Cone308 = browser.currentScene.createNode("Cone");
Cone308.bottomRadius = 50000;
Cone308.height = 100000;
Shape305.geometry = Cone308;

Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

Anchor303.children = new MFNode();

Anchor303.children[0] = Transform304;

GeoLocation302.children = new MFNode();

GeoLocation302.children[0] = Anchor303;

Group3.children[76] = GeoLocation302;

let GeoViewpoint309 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint309.description = "Model 39";
GeoViewpoint309.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint309.position = new SFVec3d(new double[36.828402,-108.004633,5000100]);
Group3.children[77] = GeoViewpoint309;

let GeoLocation310 = browser.currentScene.createNode("GeoLocation");
GeoLocation310.geoCoords = new SFVec3d(new double[36.828402,-108.004633,50100]);
let Anchor311 = browser.currentScene.createNode("Anchor");
Anchor311.description = "Aztec NM";
Anchor311.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform312 = browser.currentScene.createNode("Transform");
Transform312.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape313 = browser.currentScene.createNode("Shape");
let Appearance314 = browser.currentScene.createNode("Appearance");
let Material315 = browser.currentScene.createNode("Material");
Material315.diffuseColor = new SFColor(new float[1,0,0]);
Appearance314.material = Material315;

Shape313.appearance = Appearance314;

let Cone316 = browser.currentScene.createNode("Cone");
Cone316.bottomRadius = 50000;
Cone316.height = 100000;
Shape313.geometry = Cone316;

Transform312.children = new MFNode();

Transform312.children[0] = Shape313;

Anchor311.children = new MFNode();

Anchor311.children[0] = Transform312;

GeoLocation310.children = new MFNode();

GeoLocation310.children[0] = Anchor311;

Group3.children[78] = GeoLocation310;

let GeoViewpoint317 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint317.description = "Model 40";
GeoViewpoint317.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint317.position = new SFVec3d(new double[35.678502,-105.954149,5000100]);
Group3.children[79] = GeoViewpoint317;

let GeoLocation318 = browser.currentScene.createNode("GeoLocation");
GeoLocation318.geoCoords = new SFVec3d(new double[35.678502,-105.954149,50100]);
let Anchor319 = browser.currentScene.createNode("Anchor");
Anchor319.description = "Santa Fe NM";
Anchor319.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform320 = browser.currentScene.createNode("Transform");
Transform320.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape321 = browser.currentScene.createNode("Shape");
let Appearance322 = browser.currentScene.createNode("Appearance");
let Material323 = browser.currentScene.createNode("Material");
Material323.diffuseColor = new SFColor(new float[1,0,0]);
Appearance322.material = Material323;

Shape321.appearance = Appearance322;

let Cone324 = browser.currentScene.createNode("Cone");
Cone324.bottomRadius = 50000;
Cone324.height = 100000;
Shape321.geometry = Cone324;

Transform320.children = new MFNode();

Transform320.children[0] = Shape321;

Anchor319.children = new MFNode();

Anchor319.children[0] = Transform320;

GeoLocation318.children = new MFNode();

GeoLocation318.children[0] = Anchor319;

Group3.children[80] = GeoLocation318;

let GeoViewpoint325 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint325.description = "Model 41";
GeoViewpoint325.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint325.position = new SFVec3d(new double[36.158861,-115.147437,5000100]);
Group3.children[81] = GeoViewpoint325;

let GeoLocation326 = browser.currentScene.createNode("GeoLocation");
GeoLocation326.geoCoords = new SFVec3d(new double[36.158861,-115.147437,50100]);
let Anchor327 = browser.currentScene.createNode("Anchor");
Anchor327.description = "Las Vegas NV";
Anchor327.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor327.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum15.jpg"]);
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape329 = browser.currentScene.createNode("Shape");
let Appearance330 = browser.currentScene.createNode("Appearance");
let Material331 = browser.currentScene.createNode("Material");
Material331.diffuseColor = new SFColor(new float[1,0,0]);
Appearance330.material = Material331;

Shape329.appearance = Appearance330;

let Cone332 = browser.currentScene.createNode("Cone");
Cone332.bottomRadius = 50000;
Cone332.height = 100000;
Shape329.geometry = Cone332;

Transform328.children = new MFNode();

Transform328.children[0] = Shape329;

Anchor327.children = new MFNode();

Anchor327.children[0] = Transform328;

GeoLocation326.children = new MFNode();

GeoLocation326.children[0] = Anchor327;

Group3.children[82] = GeoLocation326;

let GeoViewpoint333 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint333.description = "Model 42";
GeoViewpoint333.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint333.position = new SFVec3d(new double[47.612224,-122.338469,5000100]);
Group3.children[83] = GeoViewpoint333;

let GeoLocation334 = browser.currentScene.createNode("GeoLocation");
GeoLocation334.geoCoords = new SFVec3d(new double[47.612224,-122.338469,50100]);
let Anchor335 = browser.currentScene.createNode("Anchor");
Anchor335.description = "Seattle WA";
Anchor335.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform336 = browser.currentScene.createNode("Transform");
Transform336.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape337 = browser.currentScene.createNode("Shape");
let Appearance338 = browser.currentScene.createNode("Appearance");
let Material339 = browser.currentScene.createNode("Material");
Material339.diffuseColor = new SFColor(new float[1,0,0]);
Appearance338.material = Material339;

Shape337.appearance = Appearance338;

let Cone340 = browser.currentScene.createNode("Cone");
Cone340.bottomRadius = 50000;
Cone340.height = 100000;
Shape337.geometry = Cone340;

Transform336.children = new MFNode();

Transform336.children[0] = Shape337;

Anchor335.children = new MFNode();

Anchor335.children[0] = Transform336;

GeoLocation334.children = new MFNode();

GeoLocation334.children[0] = Anchor335;

Group3.children[84] = GeoLocation334;

let GeoViewpoint341 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint341.description = "Model 43";
GeoViewpoint341.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint341.position = new SFVec3d(new double[41.39,-70.65,5000100]);
Group3.children[85] = GeoViewpoint341;

let GeoLocation342 = browser.currentScene.createNode("GeoLocation");
GeoLocation342.geoCoords = new SFVec3d(new double[41.39,-70.65,50100]);
let Anchor343 = browser.currentScene.createNode("Anchor");
Anchor343.description = "Martha's Vineyard MA";
Anchor343.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform344 = browser.currentScene.createNode("Transform");
Transform344.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape345 = browser.currentScene.createNode("Shape");
let Appearance346 = browser.currentScene.createNode("Appearance");
let Material347 = browser.currentScene.createNode("Material");
Material347.diffuseColor = new SFColor(new float[1,0,0]);
Appearance346.material = Material347;

Shape345.appearance = Appearance346;

let Cone348 = browser.currentScene.createNode("Cone");
Cone348.bottomRadius = 50000;
Cone348.height = 100000;
Shape345.geometry = Cone348;

Transform344.children = new MFNode();

Transform344.children[0] = Shape345;

Anchor343.children = new MFNode();

Anchor343.children[0] = Transform344;

GeoLocation342.children = new MFNode();

GeoLocation342.children[0] = Anchor343;

Group3.children[86] = GeoLocation342;

let GeoViewpoint349 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint349.description = "Model 44";
GeoViewpoint349.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint349.position = new SFVec3d(new double[36.046441,-112.153457,5000100]);
Group3.children[87] = GeoViewpoint349;

let GeoLocation350 = browser.currentScene.createNode("GeoLocation");
GeoLocation350.geoCoords = new SFVec3d(new double[36.046441,-112.153457,50100]);
let Anchor351 = browser.currentScene.createNode("Anchor");
Anchor351.description = "Grand Canyon AZ";
Anchor351.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor351.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum8.jpg"]);
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape353 = browser.currentScene.createNode("Shape");
let Appearance354 = browser.currentScene.createNode("Appearance");
let Material355 = browser.currentScene.createNode("Material");
Material355.diffuseColor = new SFColor(new float[1,0,0]);
Appearance354.material = Material355;

Shape353.appearance = Appearance354;

let Cone356 = browser.currentScene.createNode("Cone");
Cone356.bottomRadius = 50000;
Cone356.height = 100000;
Shape353.geometry = Cone356;

Transform352.children = new MFNode();

Transform352.children[0] = Shape353;

Anchor351.children = new MFNode();

Anchor351.children[0] = Transform352;

GeoLocation350.children = new MFNode();

GeoLocation350.children[0] = Anchor351;

Group3.children[88] = GeoLocation350;

let GeoViewpoint357 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint357.description = "Model 45";
GeoViewpoint357.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint357.position = new SFVec3d(new double[40.440219,-121.527441,5000100]);
Group3.children[89] = GeoViewpoint357;

let GeoLocation358 = browser.currentScene.createNode("GeoLocation");
GeoLocation358.geoCoords = new SFVec3d(new double[40.440219,-121.527441,50100]);
let Anchor359 = browser.currentScene.createNode("Anchor");
Anchor359.description = "Lassen Park CA";
Anchor359.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
Anchor359.url = new MFString(new java.lang.String["http://www.ai.sri.com/cgi-bin/show_img.pl?img=lassen/Lassen4.jpg"]);
let Transform360 = browser.currentScene.createNode("Transform");
Transform360.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape361 = browser.currentScene.createNode("Shape");
let Appearance362 = browser.currentScene.createNode("Appearance");
let Material363 = browser.currentScene.createNode("Material");
Material363.diffuseColor = new SFColor(new float[1,0,0]);
Appearance362.material = Material363;

Shape361.appearance = Appearance362;

let Cone364 = browser.currentScene.createNode("Cone");
Cone364.bottomRadius = 50000;
Cone364.height = 100000;
Shape361.geometry = Cone364;

Transform360.children = new MFNode();

Transform360.children[0] = Shape361;

Anchor359.children = new MFNode();

Anchor359.children[0] = Transform360;

GeoLocation358.children = new MFNode();

GeoLocation358.children[0] = Anchor359;

Group3.children[90] = GeoLocation358;

let GeoViewpoint365 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint365.description = "Model 46";
GeoViewpoint365.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint365.position = new SFVec3d(new double[51.17,-115.57,5000100]);
Group3.children[91] = GeoViewpoint365;

let GeoLocation366 = browser.currentScene.createNode("GeoLocation");
GeoLocation366.geoCoords = new SFVec3d(new double[51.17,-115.57,50100]);
let Anchor367 = browser.currentScene.createNode("Anchor");
Anchor367.description = "Banff";
Anchor367.parameter = new MFString(new java.lang.String["target=_martinstrips"]);
let Transform368 = browser.currentScene.createNode("Transform");
Transform368.rotation = new SFRotation(new float[1,0,0,3.14159]);
let Shape369 = browser.currentScene.createNode("Shape");
let Appearance370 = browser.currentScene.createNode("Appearance");
let Material371 = browser.currentScene.createNode("Material");
Material371.diffuseColor = new SFColor(new float[1,0,0]);
Appearance370.material = Material371;

Shape369.appearance = Appearance370;

let Cone372 = browser.currentScene.createNode("Cone");
Cone372.bottomRadius = 50000;
Cone372.height = 100000;
Shape369.geometry = Cone372;

Transform368.children = new MFNode();

Transform368.children[0] = Shape369;

Anchor367.children = new MFNode();

Anchor367.children[0] = Transform368;

GeoLocation366.children = new MFNode();

GeoLocation366.children[0] = Anchor367;

Group3.children[92] = GeoLocation366;

browser.currentScene.children[1] = Group3;

