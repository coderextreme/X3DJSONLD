let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "World.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Group3 = browser.currentScene.createNode("Group");
let GeoViewpoint4 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint4.description = "Initial GeoViewpoint";
GeoViewpoint4.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint4.position = new SFVec3d(new double[35,-70,13000000]);
Group3.children = new MFNode();

Group3.children[0] = GeoViewpoint4;

let Background5 = browser.currentScene.createNode("Background");
Background5.groundColor = new MFColor(new float[0,0,1]);
Background5.skyAngle = new MFFloat(new float[1.57]);
Background5.skyColor = new MFColor(new float[0,0,1,0,0,0]);
Group3.children[1] = Background5;

let GeoLocation6 = browser.currentScene.createNode("GeoLocation");
GeoLocation6.geoCoords = new SFVec3d(new double[35,-70,10000000]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.translation = new SFVec3f(new float[-1000000,0,-600000]);
let TouchSensor8 = browser.currentScene.createNode("TouchSensor");
TouchSensor8.DEF = "Touch1";
TouchSensor8.description = "x1";
Transform7.children = new MFNode();

Transform7.children[0] = TouchSensor8;

let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["images/x1.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/x1.gif"]);
Appearance10.texture = ImageTexture11;

Shape9.appearance = Appearance10;

let Box12 = browser.currentScene.createNode("Box");
Box12.DEF = "BOX";
Box12.size = new SFVec3f(new float[200000,200000,200000]);
Shape9.geometry = Box12;

Transform7.children[1] = Shape9;

GeoLocation6.children = new MFNode();

GeoLocation6.children[0] = Transform7;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[-1000000,0,-300000]);
let TouchSensor14 = browser.currentScene.createNode("TouchSensor");
TouchSensor14.DEF = "Touch50";
TouchSensor14.description = "x50";
Transform13.children = new MFNode();

Transform13.children[0] = TouchSensor14;

let Shape15 = browser.currentScene.createNode("Shape");
let Appearance16 = browser.currentScene.createNode("Appearance");
let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["images/x50.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/x50.gif"]);
Appearance16.texture = ImageTexture17;

Shape15.appearance = Appearance16;

let Box18 = browser.currentScene.createNode("Box");
Box18.USE = "BOX";
Shape15.geometry = Box18;

Transform13.children[1] = Shape15;

GeoLocation6.children[1] = Transform13;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[-1000000,0,0]);
let TouchSensor20 = browser.currentScene.createNode("TouchSensor");
TouchSensor20.DEF = "Touch200";
TouchSensor20.description = "x200";
Transform19.children = new MFNode();

Transform19.children[0] = TouchSensor20;

let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["images/x200.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/x200.gif"]);
Appearance22.texture = ImageTexture23;

Shape21.appearance = Appearance22;

let Box24 = browser.currentScene.createNode("Box");
Box24.USE = "BOX";
Shape21.geometry = Box24;

Transform19.children[1] = Shape21;

GeoLocation6.children[2] = Transform19;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new SFVec3f(new float[-1000000,0,300000]);
let TouchSensor26 = browser.currentScene.createNode("TouchSensor");
TouchSensor26.DEF = "TouchShaded";
TouchSensor26.description = "Shaded";
Transform25.children = new MFNode();

Transform25.children[0] = TouchSensor26;

let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["images/shaded.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/shaded.gif"]);
Appearance28.texture = ImageTexture29;

Shape27.appearance = Appearance28;

let Box30 = browser.currentScene.createNode("Box");
Box30.USE = "BOX";
Shape27.geometry = Box30;

Transform25.children[1] = Shape27;

GeoLocation6.children[3] = Transform25;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[-1000000,0,600000]);
let TouchSensor32 = browser.currentScene.createNode("TouchSensor");
TouchSensor32.DEF = "TouchTextured";
TouchSensor32.description = "Textured";
Transform31.children = new MFNode();

Transform31.children[0] = TouchSensor32;

let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let ImageTexture35 = browser.currentScene.createNode("ImageTexture");
ImageTexture35.url = new MFString(new java.lang.String["images/textured.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/textured.gif"]);
Appearance34.texture = ImageTexture35;

Shape33.appearance = Appearance34;

let Box36 = browser.currentScene.createNode("Box");
Box36.USE = "BOX";
Shape33.geometry = Box36;

Transform31.children[1] = Shape33;

GeoLocation6.children[4] = Transform31;

Group3.children[2] = GeoLocation6;

let SphereSensor37 = browser.currentScene.createNode("SphereSensor");
SphereSensor37.DEF = "GeoSphere";
SphereSensor37.description = "click and drag to rotate";
Group3.children[3] = SphereSensor37;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "GeoXform";
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.75,0.75,0.75]);
Appearance40.material = Material41;

let ImageTexture42 = browser.currentScene.createNode("ImageTexture");
ImageTexture42.DEF = "TEX";
Appearance40.texture = ImageTexture42;

Shape39.appearance = Appearance40;

let GeoElevationGrid43 = browser.currentScene.createNode("GeoElevationGrid");
GeoElevationGrid43.DEF = "GEOEG";
GeoElevationGrid43.geoGridOrigin = new SFVec3d(new double[-90,-180,0]);
GeoElevationGrid43.height = new MFDouble(new double[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2632,2777,2826,1692,833,858,1097,1115,1255,1812,1168,3404,2970,2584,2389,2397,2504,2550,2040,1980,1913,1563,1636,1389,1332,1419,1562,1748,1767,1788,1799,1854,1923,2042,2126,2169,2308,2405,2484,2531,2576,2604,2634,2666,2697,2710,2727,2770,2858,2968,3093,3160,3202,3242,3278,3296,3305,3312,3309,3300,3291,3274,3247,3218,3186,3152,3114,3098,3085,3051,3017,2996,2942,2893,2854,2817,2807,2772,2681,2543,2497,2401,2567,0,0,0,0,0,0,67,550,435,358,497,677,838,997,1189,1437,1706,1996,2092,2208,2070,1777,1377,942,403,259,315,0,0,0,0,0,0,456,778,839,1069,1288,1609,1800,1939,2012,2114,2292,2463,2524,2611,2769,2968,3075,3239,3411,3524,3626,3700,3744,3796,3891,3963,4002,4031,3983,3869,3755,3667,3598,3446,3358,3236,3141,3034,2914,2709,2637,2524,2371,2216,2044,1652,1981,225,0,0,0,0,0,0,0,0,0,322,0,37,1228,1681,2041,2173,2024,1885,1524,1282,1221,1282,1372,1435,1448,1019,535,717,0,0,0,0,0,0,0,0,0,0,598,1404,1551,1795,1945,2227,2352,2553,2865,2959,3173,3298,3383,3538,3618,3718,3793,3700,3562,3453,3254,3007,2883,2810,2857,2990,3144,3427,3615,3714,3697,3580,3493,3377,3263,3180,3101,3020,2864,2706,2612,2534,2504,2417,2299,1341,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,297,0,0,5,0,0,0,0,0,1443,0,0,0,0,0,0,0,0,0,0,0,39,1220,2018,1763,2713,3086,3016,2961,2668,3135,2431,2599,2898,2976,2987,3121,2927,2529,1546,107,1395,2135,2760,3163,3367,3449,3383,3249,2992,2899,2957,3022,3096,3190,3046,2822,2622,2375,2334,2309,2300,1847,2476,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,1003,1508,1734,2013,2027,1685,1091,0,0,1257,1723,1848,2153,2267,2164,2236,2003,1686,1641,2005,2047,2054,2341,2022,1226,626,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1544,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,295,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1225,930,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,847,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,555,152,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1520,236,60,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0,151,83,69,343,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2080,230,41,152,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,929,1261,1427,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,489,440,234,239,173,6,90,156,570,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3490,939,104,147,677,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1331,959,1146,1572,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,555,486,616,700,168,72,273,504,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2855,2083,142,392,317,589,792,0,0,0,0,0,0,0,0,0,0,0,0,0,1320,1280,969,655,147,0,0,723,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,253,308,495,617,339,298,276,300,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4016,1245,298,121,800,921,773,0,0,0,0,0,0,0,0,0,0,0,0,460,1109,1104,919,850,816,7,0,299,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,133,641,198,235,0,380,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3058,467,139,476,357,359,416,425,187,0,0,0,0,0,0,0,0,0,0,0,0,1580,1303,1125,1275,1197,609,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,167,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4575,219,203,97,97,200,305,316,560,353,0,0,0,0,0,0,0,0,0,0,0,0,1120,934,1129,967,1344,461,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,320,109,87,72,46,91,192,228,60,220,0,0,0,0,0,0,0,0,0,0,0,48,555,609,588,1488,1229,771,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,146,0,0,0,3312,34,0,304,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1988,153,92,57,100,302,195,0,0,0,0,0,0,0,0,0,0,0,0,0,0,520,314,409,457,2134,1133,1487,13,0,0,0,0,0,0,0,0,0,0,0,0,0,105,0,318,614,0,0,437,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,266,91,1005,174,192,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,715,487,456,605,707,847,716,243,177,0,0,0,0,0,0,0,0,0,0,0,1539,1234,0,0,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,51,1823,73,143,37,0,0,0,0,0,0,0,0,0,0,0,583,304,96,305,227,627,549,464,893,393,323,1085,933,725,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0,0,148,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,114,301,309,304,212,601,309,293,449,837,590,439,2082,627,0,0,0,0,0,0,0,880,0,0,0,0,0,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,553,164,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,183,327,337,356,455,436,256,414,652,460,373,499,0,948,939,0,0,0,0,0,579,31,0,0,0,0,860,288,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1874,2200,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,145,282,206,363,608,571,559,1135,573,659,354,329,0,1393,652,208,62,0,0,0,0,293,321,157,0,66,1483,1336,22,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,191,1562,153,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,202,327,304,317,473,1249,820,608,325,304,216,340,497,847,840,88,0,0,0,240,44,253,136,66,26,432,166,1881,496,156,142,506,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,202,1907,1030,298,1,1,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1241,597,400,328,385,644,558,41,6,208,673,803,582,277,0,2354,468,1176,343,109,215,878,4548,4629,5201,4052,4100,373,529,182,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,853,628,2316,1250,362,102,39,176,195,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1343,1084,693,23,0,0,0,0,0,0,796,366,1344,1763,872,1866,2290,3269,909,4633,4397,4795,5100,4767,4470,3575,1189,717,45,14,0,0,0,650,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,943,1481,2986,3002,1219,612,243,254,139,436,91,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,400,38,0,0,0,0,0,0,387,1053,1569,581,1510,-28,59,127,190,578,2985,2929,1214,1252,3839,2668,4832,2986,1262,1107,69,2,0,119,0,0,300,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2092,1768,1648,2027,1313,667,366,180,206,175,365,270,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,770,568,0,0,235,0,362,173,0,0,0,13,3422,-28,164,52,160,230,2431,2131,5436,2864,1453,450,1577,972,1081,1160,1402,795,54,581,0,0,300,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,426,1008,1304,913,854,550,427,287,276,321,365,380,365,29,374,0,0,0,0,0,0,0,0,0,0,0,0,0,100,255,1977,2462,165,88,345,174,31,0,22,1,-28,-8,132,95,230,501,325,405,1907,798,2072,1822,2448,1530,1256,1048,979,181,171,136,340,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1515,922,1163,714,711,578,268,395,381,203,79,232,421,540,609,153,81,0,0,0,0,0,0,0,0,0,0,0,0,16,21,232,310,432,227,225,159,188,146,128,44,27,106,225,220,321,415,346,342,1986,1928,1537,1746,1464,722,1139,819,767,640,130,728,588,680,0,0,0,0,0,0,0,0,0,0,0,0,103,0,0,0,0,0,0,243,623,1219,975,754,618,476,366,252,175,126,65,0,152,426,476,512,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,141,129,206,141,132,134,146,136,530,179,130,112,108,147,201,955,727,684,565,619,973,1419,1076,1122,460,909,0,0,0,0,0,407,746,0,0,0,0,0,0,0,0,129,243,0,0,0,1110,1297,1872,596,448,764,264,210,414,305,0,0,0,0,9,158,0,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,885,146,24,0,56,98,71,184,121,190,178,201,490,72,46,89,92,33,125,118,477,368,351,655,487,1309,441,564,497,208,438,693,0,601,175,0,668,0,0,0,0,0,1,0,0,61,879,1219,706,678,560,1273,1896,319,390,283,464,361,320,158,134,0,0,0,0,0,198,318,0,0,0,2120,2563,0,0,0,0,0,0,0,0,0,0,0,0,600,257,0,143,96,157,92,11,242,197,139,784,143,23,104,88,68,94,273,498,345,451,339,307,347,117,155,108,233,1126,1577,1707,1185,471,1125,576,1009,135,97,546,0,0,0,164,483,1268,1300,856,490,887,218,158,257,548,173,0,121,24,0,75,189,122,0,0,0,365,0,0,0,21,1168,2546,2897,2119,0,0,0,0,0,0,0,0,0,0,0,517,432,184,280,159,262,0,50,41,40,151,148,116,29,25,54,117,442,657,911,206,321,400,362,217,52,251,432,156,316,56,286,38,80,36,203,298,404,0,0,0,0,0,0,0,0,0,0,0,0,0,151,175,198,275,81,0,101,313,0,0,152,0,0,0,0,0,0,1857,2357,2752,3054,3004,2215,1577,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,311,0,0,0,28,0,5,52,18,13,51,71,155,134,115,49,62,214,0,0,15,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,0,0,94,19,100,0,310,0,0,0,278,640,568,1033,1747,2306,2570,2481,2393,2257,2345,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,272,0,0,0,0,0,0,0,11,276,184,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,181,519,600,1844,971,609,378,1194,1228,1152,1378,1783,1183,913,339,967,745,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,276,0,0,41,0,0,0,0,0,0,0,36,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
GeoElevationGrid43.solid = False;
GeoElevationGrid43.xDimension = 84;
GeoElevationGrid43.xSpacing = 4.34;
GeoElevationGrid43.yScale = 200;
GeoElevationGrid43.zDimension = 42;
GeoElevationGrid43.zSpacing = 4.34;
Shape39.geometry = GeoElevationGrid43;

Transform38.children = new MFNode();

Transform38.children[0] = Shape39;

Group3.children[4] = Transform38;

browser.currentScene.children[1] = Group3;

let Script44 = browser.currentScene.createNode("Script");
Script44.DEF = "Return1";
let field45 = browser.currentScene.createNode("field");
field45.name = "value_changed";
field45.accessType = "outputOnly";
field45.type = "SFFloat";
Script44.field = new MFNode();

Script44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "set_value";
field46.accessType = "inputOnly";
field46.type = "SFBool";
Script44.field[1] = field46;


Script44.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = 1.0;\n"+
"}`)
browser.currentScene.children[2] = Script44;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "Return50";
let field48 = browser.currentScene.createNode("field");
field48.name = "value_changed";
field48.accessType = "outputOnly";
field48.type = "SFFloat";
Script47.field = new MFNode();

Script47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "set_value";
field49.accessType = "inputOnly";
field49.type = "SFBool";
Script47.field[1] = field49;


Script47.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = 50.0;\n"+
"}`)
browser.currentScene.children[3] = Script47;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "Return200";
let field51 = browser.currentScene.createNode("field");
field51.name = "value_changed";
field51.accessType = "outputOnly";
field51.type = "SFFloat";
Script50.field = new MFNode();

Script50.field[0] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_value";
field52.accessType = "inputOnly";
field52.type = "SFBool";
Script50.field[1] = field52;


Script50.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = 200.0;\n"+
"}`)
browser.currentScene.children[4] = Script50;

let Script53 = browser.currentScene.createNode("Script");
Script53.DEF = "ReturnShaded";
let field54 = browser.currentScene.createNode("field");
field54.name = "value_changed";
field54.accessType = "outputOnly";
field54.type = "MFString";
Script53.field = new MFNode();

Script53.field[0] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "set_value";
field55.accessType = "inputOnly";
field55.type = "SFBool";
Script53.field[1] = field55;


Script53.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = new MFString('');\n"+
"}`)
browser.currentScene.children[5] = Script53;

let Script56 = browser.currentScene.createNode("Script");
Script56.DEF = "ReturnTextured";
let field57 = browser.currentScene.createNode("field");
field57.name = "value_changed";
field57.accessType = "outputOnly";
field57.type = "MFString";
Script56.field = new MFNode();

Script56.field[0] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "set_value";
field58.accessType = "inputOnly";
field58.type = "SFBool";
Script56.field[1] = field58;


Script56.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = new MFString ('images/earth.gif', 'https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earth.gif'); \n"+
"// Browser.print ('value_changed=' + value_changed);\n"+
"}`)
browser.currentScene.children[6] = Script56;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "rotation_changed";
ROUTE59.fromNode = "GeoSphere";
ROUTE59.toField = "set_rotation";
ROUTE59.toNode = "GeoXform";
browser.currentScene.children[7] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "isActive";
ROUTE60.fromNode = "Touch1";
ROUTE60.toField = "set_value";
ROUTE60.toNode = "Return1";
browser.currentScene.children[8] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "value_changed";
ROUTE61.fromNode = "Return1";
ROUTE61.toField = "set_yScale";
ROUTE61.toNode = "GEOEG";
browser.currentScene.children[9] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "isActive";
ROUTE62.fromNode = "Touch50";
ROUTE62.toField = "set_value";
ROUTE62.toNode = "Return50";
browser.currentScene.children[10] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "value_changed";
ROUTE63.fromNode = "Return50";
ROUTE63.toField = "set_yScale";
ROUTE63.toNode = "GEOEG";
browser.currentScene.children[11] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromField = "isActive";
ROUTE64.fromNode = "Touch200";
ROUTE64.toField = "set_value";
ROUTE64.toNode = "Return200";
browser.currentScene.children[12] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "value_changed";
ROUTE65.fromNode = "Return200";
ROUTE65.toField = "set_yScale";
ROUTE65.toNode = "GEOEG";
browser.currentScene.children[13] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "isActive";
ROUTE66.fromNode = "TouchTextured";
ROUTE66.toField = "set_value";
ROUTE66.toNode = "ReturnTextured";
browser.currentScene.children[14] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "value_changed";
ROUTE67.fromNode = "ReturnTextured";
ROUTE67.toField = "set_url";
ROUTE67.toNode = "TEX";
browser.currentScene.children[15] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "isActive";
ROUTE68.fromNode = "TouchShaded";
ROUTE68.toField = "set_value";
ROUTE68.toNode = "ReturnShaded";
browser.currentScene.children[16] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "ReturnShaded";
ROUTE69.toField = "set_url";
ROUTE69.toNode = "TEX";
browser.currentScene.children[17] = ROUTE69;

