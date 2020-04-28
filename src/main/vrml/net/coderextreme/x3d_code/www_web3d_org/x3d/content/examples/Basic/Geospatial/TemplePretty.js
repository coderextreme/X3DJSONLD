let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "TemplePretty.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Temple";
Viewpoint3.position = new SFVec3f(new float[0,0,30]);
browser.currentScene.children[1] = Viewpoint3;

let Background4 = browser.currentScene.createNode("Background");
Background4.groundAngle = new MFFloat(new float[1.25,1.37]);
Background4.groundColor = new MFColor(new float[0.01,0.09,0.2,0.05,0.65,0.47,0.4,0.95,0.85]);
Background4.skyAngle = new MFFloat(new float[1.3,1.37]);
Background4.skyColor = new MFColor(new float[0,0,0.2,0.1,0.1,0.8,0.7,0.7,1]);
browser.currentScene.children[2] = Background4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.translation = new SFVec3f(new float[-11,2.5,-11]);
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.DEF = "COLUMN";
let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[1,0.9,0.8]);
Appearance7.material = Material8;

let ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.DEF = "stone6";
ImageTexture9.url = new MFString(new java.lang.String["images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"]);
Appearance7.texture = ImageTexture9;

Shape6.appearance = Appearance7;

let Cylinder10 = browser.currentScene.createNode("Cylinder");
Cylinder10.height = 5;
Cylinder10.radius = 0.6;
Shape6.geometry = Cylinder10;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

browser.currentScene.children[3] = Transform5;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = new SFVec3f(new float[-9,2.5,-11]);
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.USE = "COLUMN";
Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

browser.currentScene.children[4] = Transform11;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[-7,2.5,-11]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.USE = "COLUMN";
Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

browser.currentScene.children[5] = Transform13;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = new SFVec3f(new float[-5,2.5,-11]);
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.USE = "COLUMN";
Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

browser.currentScene.children[6] = Transform15;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new SFVec3f(new float[-3,2.5,-11]);
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.USE = "COLUMN";
Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

browser.currentScene.children[7] = Transform17;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[-1,2.5,-11]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.USE = "COLUMN";
Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

browser.currentScene.children[8] = Transform19;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.translation = new SFVec3f(new float[1,2.5,-11]);
let Shape22 = browser.currentScene.createNode("Shape");
Shape22.USE = "COLUMN";
Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

browser.currentScene.children[9] = Transform21;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[3,2.5,-11]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.USE = "COLUMN";
Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

browser.currentScene.children[10] = Transform23;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new SFVec3f(new float[5,2.5,-11]);
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.USE = "COLUMN";
Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

browser.currentScene.children[11] = Transform25;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new SFVec3f(new float[7,2.5,-11]);
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.USE = "COLUMN";
Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

browser.currentScene.children[12] = Transform27;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[9,2.5,-11]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.USE = "COLUMN";
Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

browser.currentScene.children[13] = Transform29;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[-11,2.5,-9]);
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.USE = "COLUMN";
Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

browser.currentScene.children[14] = Transform31;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[-9,2.5,-9]);
let Shape34 = browser.currentScene.createNode("Shape");
Shape34.USE = "COLUMN";
Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

browser.currentScene.children[15] = Transform33;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[-7,2.5,-9]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.USE = "COLUMN";
Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

browser.currentScene.children[16] = Transform35;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new SFVec3f(new float[-5,2.5,-9]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.USE = "COLUMN";
Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

browser.currentScene.children[17] = Transform37;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new SFVec3f(new float[-3,2.5,-9]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.USE = "COLUMN";
Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

browser.currentScene.children[18] = Transform39;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[-1,2.5,-9]);
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.USE = "COLUMN";
Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

browser.currentScene.children[19] = Transform41;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[1,2.5,-9]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "COLUMN";
Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

browser.currentScene.children[20] = Transform43;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[3,2.5,-9]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "COLUMN";
Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

browser.currentScene.children[21] = Transform45;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[5,2.5,-9]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "COLUMN";
Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

browser.currentScene.children[22] = Transform47;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[7,2.5,-9]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "COLUMN";
Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

browser.currentScene.children[23] = Transform49;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[9,2.5,-9]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "COLUMN";
Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

browser.currentScene.children[24] = Transform51;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new SFVec3f(new float[-11,2.5,-7]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "COLUMN";
Transform53.children = new MFNode();

Transform53.children[0] = Shape54;

browser.currentScene.children[25] = Transform53;

let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[-9,2.5,-7]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "COLUMN";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

browser.currentScene.children[26] = Transform55;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.translation = new SFVec3f(new float[7,2.5,-7]);
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "COLUMN";
Transform57.children = new MFNode();

Transform57.children[0] = Shape58;

browser.currentScene.children[27] = Transform57;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new SFVec3f(new float[9,2.5,-7]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "COLUMN";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

browser.currentScene.children[28] = Transform59;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.translation = new SFVec3f(new float[-11,2.5,-5]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "COLUMN";
Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

browser.currentScene.children[29] = Transform61;

let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new SFVec3f(new float[-9,2.5,-5]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "COLUMN";
Transform63.children = new MFNode();

Transform63.children[0] = Shape64;

browser.currentScene.children[30] = Transform63;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new SFVec3f(new float[7,2.5,-5]);
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "COLUMN";
Transform65.children = new MFNode();

Transform65.children[0] = Shape66;

browser.currentScene.children[31] = Transform65;

let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new SFVec3f(new float[9,2.5,-5]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "COLUMN";
Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

browser.currentScene.children[32] = Transform67;

let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new SFVec3f(new float[-11,2.5,-3]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "COLUMN";
Transform69.children = new MFNode();

Transform69.children[0] = Shape70;

browser.currentScene.children[33] = Transform69;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new SFVec3f(new float[-9,2.5,-3]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "COLUMN";
Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

browser.currentScene.children[34] = Transform71;

let Transform73 = browser.currentScene.createNode("Transform");
Transform73.translation = new SFVec3f(new float[7,2.5,-3]);
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "COLUMN";
Transform73.children = new MFNode();

Transform73.children[0] = Shape74;

browser.currentScene.children[35] = Transform73;

let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[9,2.5,-3]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "COLUMN";
Transform75.children = new MFNode();

Transform75.children[0] = Shape76;

browser.currentScene.children[36] = Transform75;

let Transform77 = browser.currentScene.createNode("Transform");
Transform77.translation = new SFVec3f(new float[-11,2.5,-1]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "COLUMN";
Transform77.children = new MFNode();

Transform77.children[0] = Shape78;

browser.currentScene.children[37] = Transform77;

let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new SFVec3f(new float[-9,2.5,-1]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "COLUMN";
Transform79.children = new MFNode();

Transform79.children[0] = Shape80;

browser.currentScene.children[38] = Transform79;

let Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = new SFVec3f(new float[7,2.5,-1]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "COLUMN";
Transform81.children = new MFNode();

Transform81.children[0] = Shape82;

browser.currentScene.children[39] = Transform81;

let Transform83 = browser.currentScene.createNode("Transform");
Transform83.translation = new SFVec3f(new float[9,2.5,-1]);
let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "COLUMN";
Transform83.children = new MFNode();

Transform83.children[0] = Shape84;

browser.currentScene.children[40] = Transform83;

let Transform85 = browser.currentScene.createNode("Transform");
Transform85.translation = new SFVec3f(new float[-11,2.5,1]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "COLUMN";
Transform85.children = new MFNode();

Transform85.children[0] = Shape86;

browser.currentScene.children[41] = Transform85;

let Transform87 = browser.currentScene.createNode("Transform");
Transform87.translation = new SFVec3f(new float[-9,2.5,1]);
let Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "COLUMN";
Transform87.children = new MFNode();

Transform87.children[0] = Shape88;

browser.currentScene.children[42] = Transform87;

let Transform89 = browser.currentScene.createNode("Transform");
Transform89.translation = new SFVec3f(new float[7,2.5,1]);
let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "COLUMN";
Transform89.children = new MFNode();

Transform89.children[0] = Shape90;

browser.currentScene.children[43] = Transform89;

let Transform91 = browser.currentScene.createNode("Transform");
Transform91.translation = new SFVec3f(new float[9,2.5,1]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "COLUMN";
Transform91.children = new MFNode();

Transform91.children[0] = Shape92;

browser.currentScene.children[44] = Transform91;

let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[-11,2.5,3]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "COLUMN";
Transform93.children = new MFNode();

Transform93.children[0] = Shape94;

browser.currentScene.children[45] = Transform93;

let Transform95 = browser.currentScene.createNode("Transform");
Transform95.translation = new SFVec3f(new float[-9,2.5,3]);
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "COLUMN";
Transform95.children = new MFNode();

Transform95.children[0] = Shape96;

browser.currentScene.children[46] = Transform95;

let Transform97 = browser.currentScene.createNode("Transform");
Transform97.translation = new SFVec3f(new float[7,2.5,3]);
let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "COLUMN";
Transform97.children = new MFNode();

Transform97.children[0] = Shape98;

browser.currentScene.children[47] = Transform97;

let Transform99 = browser.currentScene.createNode("Transform");
Transform99.translation = new SFVec3f(new float[9,2.5,3]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "COLUMN";
Transform99.children = new MFNode();

Transform99.children[0] = Shape100;

browser.currentScene.children[48] = Transform99;

let Transform101 = browser.currentScene.createNode("Transform");
Transform101.translation = new SFVec3f(new float[-11,2.5,5]);
let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "COLUMN";
Transform101.children = new MFNode();

Transform101.children[0] = Shape102;

browser.currentScene.children[49] = Transform101;

let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new SFVec3f(new float[-9,2.5,5]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "COLUMN";
Transform103.children = new MFNode();

Transform103.children[0] = Shape104;

browser.currentScene.children[50] = Transform103;

let Transform105 = browser.currentScene.createNode("Transform");
Transform105.translation = new SFVec3f(new float[7,2.5,5]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "COLUMN";
Transform105.children = new MFNode();

Transform105.children[0] = Shape106;

browser.currentScene.children[51] = Transform105;

let Transform107 = browser.currentScene.createNode("Transform");
Transform107.translation = new SFVec3f(new float[9,2.5,5]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "COLUMN";
Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

browser.currentScene.children[52] = Transform107;

let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new SFVec3f(new float[-11,2.5,7]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "COLUMN";
Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

browser.currentScene.children[53] = Transform109;

let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new SFVec3f(new float[-9,2.5,7]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "COLUMN";
Transform111.children = new MFNode();

Transform111.children[0] = Shape112;

browser.currentScene.children[54] = Transform111;

let Transform113 = browser.currentScene.createNode("Transform");
Transform113.translation = new SFVec3f(new float[-7,2.5,7]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "COLUMN";
Transform113.children = new MFNode();

Transform113.children[0] = Shape114;

browser.currentScene.children[55] = Transform113;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[-5,2.5,7]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "COLUMN";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

browser.currentScene.children[56] = Transform115;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.translation = new SFVec3f(new float[-3,2.5,7]);
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "COLUMN";
Transform117.children = new MFNode();

Transform117.children[0] = Shape118;

browser.currentScene.children[57] = Transform117;

let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new SFVec3f(new float[-1,2.5,7]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "COLUMN";
Transform119.children = new MFNode();

Transform119.children[0] = Shape120;

browser.currentScene.children[58] = Transform119;

let Transform121 = browser.currentScene.createNode("Transform");
Transform121.translation = new SFVec3f(new float[1,2.5,7]);
let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "COLUMN";
Transform121.children = new MFNode();

Transform121.children[0] = Shape122;

browser.currentScene.children[59] = Transform121;

let Transform123 = browser.currentScene.createNode("Transform");
Transform123.translation = new SFVec3f(new float[3,2.5,7]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "COLUMN";
Transform123.children = new MFNode();

Transform123.children[0] = Shape124;

browser.currentScene.children[60] = Transform123;

let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new SFVec3f(new float[5,2.5,7]);
let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "COLUMN";
Transform125.children = new MFNode();

Transform125.children[0] = Shape126;

browser.currentScene.children[61] = Transform125;

let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[7,2.5,7]);
let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "COLUMN";
Transform127.children = new MFNode();

Transform127.children[0] = Shape128;

browser.currentScene.children[62] = Transform127;

let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new SFVec3f(new float[9,2.5,7]);
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "COLUMN";
Transform129.children = new MFNode();

Transform129.children[0] = Shape130;

browser.currentScene.children[63] = Transform129;

let Transform131 = browser.currentScene.createNode("Transform");
Transform131.translation = new SFVec3f(new float[-11,2.5,9]);
let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "COLUMN";
Transform131.children = new MFNode();

Transform131.children[0] = Shape132;

browser.currentScene.children[64] = Transform131;

let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new SFVec3f(new float[-9,2.5,9]);
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "COLUMN";
Transform133.children = new MFNode();

Transform133.children[0] = Shape134;

browser.currentScene.children[65] = Transform133;

let Transform135 = browser.currentScene.createNode("Transform");
Transform135.translation = new SFVec3f(new float[-7,2.5,9]);
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "COLUMN";
Transform135.children = new MFNode();

Transform135.children[0] = Shape136;

browser.currentScene.children[66] = Transform135;

let Transform137 = browser.currentScene.createNode("Transform");
Transform137.translation = new SFVec3f(new float[-5,2.5,9]);
let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "COLUMN";
Transform137.children = new MFNode();

Transform137.children[0] = Shape138;

browser.currentScene.children[67] = Transform137;

let Transform139 = browser.currentScene.createNode("Transform");
Transform139.translation = new SFVec3f(new float[-3,2.5,9]);
let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "COLUMN";
Transform139.children = new MFNode();

Transform139.children[0] = Shape140;

browser.currentScene.children[68] = Transform139;

let Transform141 = browser.currentScene.createNode("Transform");
Transform141.translation = new SFVec3f(new float[-1,2.5,9]);
let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "COLUMN";
Transform141.children = new MFNode();

Transform141.children[0] = Shape142;

browser.currentScene.children[69] = Transform141;

let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new SFVec3f(new float[1,2.5,9]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "COLUMN";
Transform143.children = new MFNode();

Transform143.children[0] = Shape144;

browser.currentScene.children[70] = Transform143;

let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[3,2.5,9]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "COLUMN";
Transform145.children = new MFNode();

Transform145.children[0] = Shape146;

browser.currentScene.children[71] = Transform145;

let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new SFVec3f(new float[5,2.5,9]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "COLUMN";
Transform147.children = new MFNode();

Transform147.children[0] = Shape148;

browser.currentScene.children[72] = Transform147;

let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new SFVec3f(new float[7,2.5,9]);
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "COLUMN";
Transform149.children = new MFNode();

Transform149.children[0] = Shape150;

browser.currentScene.children[73] = Transform149;

let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new SFVec3f(new float[9,2.5,9]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "COLUMN";
Transform151.children = new MFNode();

Transform151.children[0] = Shape152;

browser.currentScene.children[74] = Transform151;

let Transform153 = browser.currentScene.createNode("Transform");
Transform153.translation = new SFVec3f(new float[-1,-0.5,-1]);
let Transform154 = browser.currentScene.createNode("Transform");
let Shape155 = browser.currentScene.createNode("Shape");
let Appearance156 = browser.currentScene.createNode("Appearance");
let Material157 = browser.currentScene.createNode("Material");
Material157.diffuseColor = new SFColor(new float[1,1,1]);
Appearance156.material = Material157;

let ImageTexture158 = browser.currentScene.createNode("ImageTexture");
ImageTexture158.DEF = "stone5";
ImageTexture158.url = new MFString(new java.lang.String["images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"]);
Appearance156.texture = ImageTexture158;

Shape155.appearance = Appearance156;

let Box159 = browser.currentScene.createNode("Box");
Box159.size = new SFVec3f(new float[22,1,22]);
Shape155.geometry = Box159;

Transform154.children = new MFNode();

Transform154.children[0] = Shape155;

Transform153.children = new MFNode();

Transform153.children[0] = Transform154;

browser.currentScene.children[75] = Transform153;

let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new SFVec3f(new float[-1,-1.5,-1]);
let Transform161 = browser.currentScene.createNode("Transform");
let Shape162 = browser.currentScene.createNode("Shape");
let Appearance163 = browser.currentScene.createNode("Appearance");
let Material164 = browser.currentScene.createNode("Material");
Material164.diffuseColor = new SFColor(new float[1,1,1]);
Appearance163.material = Material164;

let ImageTexture165 = browser.currentScene.createNode("ImageTexture");
ImageTexture165.USE = "stone5";
Appearance163.texture = ImageTexture165;

Shape162.appearance = Appearance163;

let Box166 = browser.currentScene.createNode("Box");
Box166.size = new SFVec3f(new float[24,1,24]);
Shape162.geometry = Box166;

Transform161.children = new MFNode();

Transform161.children[0] = Shape162;

Transform160.children = new MFNode();

Transform160.children[0] = Transform161;

browser.currentScene.children[76] = Transform160;

let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new SFVec3f(new float[-1,-2.5,-1]);
let Transform168 = browser.currentScene.createNode("Transform");
let Shape169 = browser.currentScene.createNode("Shape");
let Appearance170 = browser.currentScene.createNode("Appearance");
let Material171 = browser.currentScene.createNode("Material");
Material171.diffuseColor = new SFColor(new float[1,1,1]);
Appearance170.material = Material171;

let ImageTexture172 = browser.currentScene.createNode("ImageTexture");
ImageTexture172.USE = "stone5";
Appearance170.texture = ImageTexture172;

Shape169.appearance = Appearance170;

let Box173 = browser.currentScene.createNode("Box");
Box173.size = new SFVec3f(new float[26,1,26]);
Shape169.geometry = Box173;

Transform168.children = new MFNode();

Transform168.children[0] = Shape169;

Transform167.children = new MFNode();

Transform167.children[0] = Transform168;

browser.currentScene.children[77] = Transform167;

