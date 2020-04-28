let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "KeyFobWeb3d2013BasqueCountry.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.3,0.4,0.5]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "WEB3D 2013 conference";
Viewpoint4.fieldOfView = 0.16628;
Viewpoint4.orientation = new SFRotation(new float[0.89,-0.132,-0.435,0.657]);
Viewpoint4.position = new SFVec3f(new float[-0.061445,-0.20256,0.31679]);
browser.currentScene.children[2] = Viewpoint4;

//The following transform converts the original coordinate space in inches (as prepared by the Ashlar-Vellum ARGON CAD application to meters
let Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = new SFVec3f(new float[0.0254,0.0254,0.0254]);
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
Appearance7.DEF = "charactersWebAppearance";
let Material8 = browser.currentScene.createNode("Material");
Material8.ambientIntensity = 1;
Material8.diffuseColor = new SFColor(new float[0.863,0.141,0.122]);
Material8.shininess = 1;
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let IndexedFaceSet9 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet9.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet9.solid = False;
let Coordinate10 = browser.currentScene.createNode("Coordinate");
Coordinate10.point = new MFVec3f(new float[-0.14408,0.06378,0.1,-0.13208,0.06378,0.1,-0.13208,0.06378,0,-0.14408,0.06378,0]);
IndexedFaceSet9.coord = Coordinate10;

let Normal11 = browser.currentScene.createNode("Normal");
Normal11.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet9.normal = Normal11;

Shape6.geometry = IndexedFaceSet9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
Appearance13.USE = "charactersWebAppearance";
Shape12.appearance = Appearance13;

let IndexedFaceSet14 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet14.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet14.solid = False;
let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[-0.13208,0.06378,0.1,-0.13808,-0.01122,0.1,-0.13808,-0.01122,0,-0.13208,0.06378,0]);
IndexedFaceSet14.coord = Coordinate15;

let Normal16 = browser.currentScene.createNode("Normal");
Normal16.vector = new MFVec3f(new float[0.99682,-0.07975,0,0.99682,-0.07975,0,0.99682,-0.07975,0,0.99682,-0.07975,0]);
IndexedFaceSet14.normal = Normal16;

Shape12.geometry = IndexedFaceSet14;

Transform5.children[1] = Shape12;

let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
Appearance18.USE = "charactersWebAppearance";
Shape17.appearance = Appearance18;

let IndexedFaceSet19 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet19.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet19.solid = False;
let Coordinate20 = browser.currentScene.createNode("Coordinate");
Coordinate20.point = new MFVec3f(new float[-0.13808,-0.01122,0.1,-0.34208,-0.01122,0.1,-0.34208,-0.01122,0,-0.13808,-0.01122,0]);
IndexedFaceSet19.coord = Coordinate20;

let Normal21 = browser.currentScene.createNode("Normal");
Normal21.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet19.normal = Normal21;

Shape17.geometry = IndexedFaceSet19;

Transform5.children[2] = Shape17;

let Shape22 = browser.currentScene.createNode("Shape");
let Appearance23 = browser.currentScene.createNode("Appearance");
Appearance23.USE = "charactersWebAppearance";
Shape22.appearance = Appearance23;

let IndexedFaceSet24 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet24.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet24.solid = False;
let Coordinate25 = browser.currentScene.createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[-0.34208,-0.01122,0.1,-0.34208,0.00078,0.1,-0.34208,0.00078,0,-0.34208,-0.01122,0]);
IndexedFaceSet24.coord = Coordinate25;

let Normal26 = browser.currentScene.createNode("Normal");
Normal26.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet24.normal = Normal26;

Shape22.geometry = IndexedFaceSet24;

Transform5.children[3] = Shape22;

let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.USE = "charactersWebAppearance";
Shape27.appearance = Appearance28;

let IndexedFaceSet29 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet29.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet29.solid = False;
let Coordinate30 = browser.currentScene.createNode("Coordinate");
Coordinate30.point = new MFVec3f(new float[-0.34208,0.00078,0.1,-0.33608,0.00078,0.1,-0.33008,0.00078,0.1,-0.33008,0.00078,0,-0.34208,0.00078,0]);
IndexedFaceSet29.coord = Coordinate30;

let Normal31 = browser.currentScene.createNode("Normal");
Normal31.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet29.normal = Normal31;

Shape27.geometry = IndexedFaceSet29;

Transform5.children[4] = Shape27;

let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.USE = "charactersWebAppearance";
Shape32.appearance = Appearance33;

let IndexedFaceSet34 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet34.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet34.solid = False;
let Coordinate35 = browser.currentScene.createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-0.33008,0.00078,0.1,-0.32688,0.00084,0.1,-0.32524,0.00096,0.1,-0.32363,0.00118,0.1,-0.32207,0.00155,0.1,-0.32132,0.00179,0.1,-0.32061,0.00208,0.1,-0.31992,0.00242,0.1,-0.31926,0.00281,0.1,-0.31865,0.00326,0.1,-0.31808,0.00378,0.1,-0.31808,0.00378,0,-0.31865,0.00326,0,-0.31926,0.00281,0,-0.31992,0.00242,0,-0.32061,0.00208,0,-0.32132,0.00179,0,-0.32207,0.00155,0,-0.32363,0.00118,0,-0.32524,0.00096,0,-0.32688,0.00084,0,-0.33008,0.00078,0]);
IndexedFaceSet34.coord = Coordinate35;

let Normal36 = browser.currentScene.createNode("Normal");
Normal36.vector = new MFVec3f(new float[0,1,0,-0.04898,0.9988,0,-0.1029,0.99469,0,-0.17892,0.98386,0,-0.27976,0.96007,0,-0.33996,0.94044,0,-0.40641,0.91369,0,-0.47828,0.87821,0,-0.55403,0.8325,0,-0.63131,0.77553,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.63131,0.77553,0,-0.55403,0.8325,0,-0.47828,0.87821,0,-0.40641,0.91369,0,-0.33996,0.94044,0,-0.27976,0.96007,0,-0.17892,0.98386,0,-0.1029,0.99469,0,-0.04898,0.9988,0,0,1,0]);
IndexedFaceSet34.normal = Normal36;

Shape32.geometry = IndexedFaceSet34;

Transform5.children[5] = Shape32;

let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
Appearance38.USE = "charactersWebAppearance";
Shape37.appearance = Appearance38;

let IndexedFaceSet39 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1]);
IndexedFaceSet39.solid = False;
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-0.31808,0.00378,0.1,-0.31333,0.00643,0.1,-0.31111,0.00799,0.1,-0.30908,0.00978,0.1,-0.30908,0.00978,0,-0.31111,0.00799,0,-0.31333,0.00643,0,-0.31808,0.00378,0]);
IndexedFaceSet39.coord = Coordinate40;

let Normal41 = browser.currentScene.createNode("Normal");
Normal41.vector = new MFVec3f(new float[-0.44721,0.89443,0,-0.53972,0.84184,0,-0.61587,0.78785,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.61587,0.78785,0,-0.53972,0.84184,0,-0.44721,0.89443,0]);
IndexedFaceSet39.normal = Normal41;

Shape37.geometry = IndexedFaceSet39;

Transform5.children[6] = Shape37;

let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
Appearance43.USE = "charactersWebAppearance";
Shape42.appearance = Appearance43;

let IndexedFaceSet44 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet44.coordIndex = new MFInt32(new int[21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet44.solid = False;
let Coordinate45 = browser.currentScene.createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[-0.30908,0.00978,0.1,-0.30857,0.01035,0.1,-0.30811,0.01096,0.1,-0.30772,0.01161,0.1,-0.30738,0.0123,0.1,-0.30709,0.01302,0.1,-0.30685,0.01377,0.1,-0.30649,0.01532,0.1,-0.30626,0.01694,0.1,-0.30614,0.01857,0.1,-0.30608,0.02178,0.1,-0.30608,0.02178,0,-0.30614,0.01857,0,-0.30626,0.01694,0,-0.30649,0.01532,0,-0.30685,0.01377,0,-0.30709,0.01302,0,-0.30738,0.0123,0,-0.30772,0.01161,0,-0.30811,0.01096,0,-0.30857,0.01035,0,-0.30908,0.00978,0]);
IndexedFaceSet44.coord = Coordinate45;

let Normal46 = browser.currentScene.createNode("Normal");
Normal46.vector = new MFVec3f(new float[-0.7071,0.70711,0,-0.77553,0.63132,0,-0.8325,0.55403,0,-0.87821,0.47828,0,-0.91369,0.40641,0,-0.94044,0.33996,0,-0.96007,0.27976,0,-0.98386,0.17892,0,-0.99469,0.1029,0,-0.9988,0.04898,0,-1,0,0,-1,0,0,-0.9988,0.04898,0,-0.99469,0.1029,0,-0.98386,0.17892,0,-0.96007,0.27976,0,-0.94044,0.33996,0,-0.91369,0.40641,0,-0.87821,0.47828,0,-0.8325,0.55403,0,-0.77553,0.63132,0,-0.7071,0.70711,0]);
IndexedFaceSet44.normal = Normal46;

Shape42.geometry = IndexedFaceSet44;

Transform5.children[7] = Shape42;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "charactersWebAppearance";
Shape47.appearance = Appearance48;

let IndexedFaceSet49 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet49.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet49.solid = False;
let Coordinate50 = browser.currentScene.createNode("Coordinate");
Coordinate50.point = new MFVec3f(new float[-0.30608,0.02178,0.1,-0.30608,0.20178,0.1,-0.30608,0.20178,0,-0.30608,0.02178,0]);
IndexedFaceSet49.coord = Coordinate50;

let Normal51 = browser.currentScene.createNode("Normal");
Normal51.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet49.normal = Normal51;

Shape47.geometry = IndexedFaceSet49;

Transform5.children[8] = Shape47;

let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
Appearance53.USE = "charactersWebAppearance";
Shape52.appearance = Appearance53;

let IndexedFaceSet54 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet54.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet54.solid = False;
let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[-0.30608,0.20178,0.1,-0.30612,0.20298,0.1,-0.30623,0.2042,0.1,-0.30644,0.20543,0.1,-0.30674,0.20662,0.1,-0.30715,0.20778,0.1,-0.30767,0.20887,0.1,-0.30831,0.20988,0.1,-0.30908,0.21078,0.1,-0.30908,0.21078,0,-0.30831,0.20988,0,-0.30767,0.20887,0,-0.30715,0.20778,0,-0.30674,0.20662,0,-0.30644,0.20543,0,-0.30623,0.2042,0,-0.30612,0.20298,0,-0.30608,0.20178,0]);
IndexedFaceSet54.coord = Coordinate55;

let Normal56 = browser.currentScene.createNode("Normal");
Normal56.vector = new MFVec3f(new float[-1,0,0,-0.99807,-0.06217,0,-0.99161,-0.12929,0,-0.9791,-0.20336,0,-0.95817,-0.28619,0,-0.92537,-0.37907,0,-0.87609,-0.48215,0,-0.80495,-0.59334,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.80495,-0.59334,0,-0.87609,-0.48215,0,-0.92537,-0.37907,0,-0.95817,-0.28619,0,-0.9791,-0.20336,0,-0.99161,-0.12929,0,-0.99807,-0.06217,0,-1,0,0]);
IndexedFaceSet54.normal = Normal56;

Shape52.geometry = IndexedFaceSet54;

Transform5.children[9] = Shape52;

let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.USE = "charactersWebAppearance";
Shape57.appearance = Appearance58;

let IndexedFaceSet59 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet59.coordIndex = new MFInt32(new int[23,0,22,-1,22,0,1,-1,2,22,1,-1,2,21,22,-1,2,3,21,-1,21,3,20,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet59.solid = False;
let Coordinate60 = browser.currentScene.createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[-0.30908,0.21078,0.1,-0.30978,0.21196,0.1,-0.3102,0.21253,0.1,-0.31066,0.21308,0.1,-0.31169,0.21409,0.1,-0.31283,0.21499,0.1,-0.31344,0.21538,0.1,-0.31407,0.21573,0.1,-0.31472,0.21604,0.1,-0.31538,0.21629,0.1,-0.31672,0.21665,0.1,-0.31808,0.21678,0.1,-0.31808,0.21678,0,-0.31672,0.21665,0,-0.31538,0.21629,0,-0.31472,0.21604,0,-0.31407,0.21573,0,-0.31344,0.21538,0,-0.31283,0.21499,0,-0.31169,0.21409,0,-0.31066,0.21308,0,-0.3102,0.21253,0,-0.30978,0.21196,0,-0.30908,0.21078,0]);
IndexedFaceSet59.coord = Coordinate60;

let Normal61 = browser.currentScene.createNode("Normal");
Normal61.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.82362,-0.56714,0,-0.78549,-0.61888,0,-0.74571,-0.66628,0,-0.66063,-0.75071,0,-0.56598,-0.82442,0,-0.51385,-0.85788,0,-0.45769,-0.88911,0,-0.39682,-0.9179,0,-0.33052,-0.9438,0,-0.17903,-0.98384,0,0,-1,0,0,-1,0,-0.17903,-0.98384,0,-0.33052,-0.9438,0,-0.39682,-0.9179,0,-0.45769,-0.88911,0,-0.51385,-0.85788,0,-0.56598,-0.82442,0,-0.66063,-0.75071,0,-0.74571,-0.66628,0,-0.78549,-0.61888,0,-0.82362,-0.56714,0,-0.89443,-0.44721,0]);
IndexedFaceSet59.normal = Normal61;

Shape57.geometry = IndexedFaceSet59;

Transform5.children[10] = Shape57;

let Shape62 = browser.currentScene.createNode("Shape");
let Appearance63 = browser.currentScene.createNode("Appearance");
Appearance63.USE = "charactersWebAppearance";
Shape62.appearance = Appearance63;

let IndexedFaceSet64 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet64.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet64.solid = False;
let Coordinate65 = browser.currentScene.createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[-0.31808,0.21678,0.1,-0.31933,0.21789,0.1,-0.32069,0.21885,0.1,-0.32215,0.21969,0.1,-0.32367,0.22043,0.1,-0.33008,0.22278,0.1,-0.33008,0.22278,0,-0.32367,0.22043,0,-0.32215,0.21969,0,-0.32069,0.21885,0,-0.31933,0.21789,0,-0.31808,0.21678,0]);
IndexedFaceSet64.coord = Coordinate65;

let Normal66 = browser.currentScene.createNode("Normal");
Normal66.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.61927,-0.78518,0,-0.53747,-0.84328,0,-0.46637,-0.88459,0,-0.40834,-0.91283,0,-0.31623,-0.94868,0,-0.31623,-0.94868,0,-0.40834,-0.91283,0,-0.46637,-0.88459,0,-0.53747,-0.84328,0,-0.61927,-0.78518,0,-0.70711,-0.70711,0]);
IndexedFaceSet64.normal = Normal66;

Shape62.geometry = IndexedFaceSet64;

Transform5.children[11] = Shape62;

let Shape67 = browser.currentScene.createNode("Shape");
let Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.USE = "charactersWebAppearance";
Shape67.appearance = Appearance68;

let IndexedFaceSet69 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet69.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,15,-1,16,17,5,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,5,6,15,-1,15,6,14,-1,14,6,7,-1,13,7,8,-1,12,8,9,-1,11,9,10,-1,11,12,9,-1,14,7,13,-1,13,8,12,-1]);
IndexedFaceSet69.solid = False;
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[-0.33008,0.22278,0.1,-0.33328,0.22284,0.1,-0.33492,0.22296,0.1,-0.33653,0.22318,0.1,-0.33809,0.22355,0.1,-0.33884,0.22379,0.1,-0.33955,0.22408,0.1,-0.34024,0.22442,0.1,-0.3409,0.22481,0.1,-0.34151,0.22526,0.1,-0.34208,0.22578,0.1,-0.34208,0.22578,0,-0.34151,0.22526,0,-0.3409,0.22481,0,-0.34024,0.22442,0,-0.33955,0.22408,0,-0.33884,0.22379,0,-0.33809,0.22355,0,-0.33653,0.22318,0,-0.33492,0.22296,0,-0.33328,0.22284,0,-0.33008,0.22278,0]);
IndexedFaceSet69.coord = Coordinate70;

let Normal71 = browser.currentScene.createNode("Normal");
Normal71.vector = new MFVec3f(new float[0,-1,0,-0.04898,-0.9988,0,-0.1029,-0.99469,0,-0.17892,-0.98386,0,-0.27976,-0.96007,0,-0.33996,-0.94044,0,-0.40641,-0.91369,0,-0.47828,-0.87821,0,-0.55403,-0.8325,0,-0.63131,-0.77553,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.63131,-0.77553,0,-0.55403,-0.8325,0,-0.47828,-0.87821,0,-0.40641,-0.91369,0,-0.33996,-0.94044,0,-0.27976,-0.96007,0,-0.17892,-0.98386,0,-0.1029,-0.99469,0,-0.04898,-0.9988,0,0,-1,0]);
IndexedFaceSet69.normal = Normal71;

Shape67.geometry = IndexedFaceSet69;

Transform5.children[12] = Shape67;

let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
Appearance73.USE = "charactersWebAppearance";
Shape72.appearance = Appearance73;

let IndexedFaceSet74 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet74.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet74.solid = False;
let Coordinate75 = browser.currentScene.createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[-0.34208,0.22578,0.1,-0.34208,0.23778,0.1,-0.34208,0.23778,0,-0.34208,0.22578,0]);
IndexedFaceSet74.coord = Coordinate75;

let Normal76 = browser.currentScene.createNode("Normal");
Normal76.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet74.normal = Normal76;

Shape72.geometry = IndexedFaceSet74;

Transform5.children[13] = Shape72;

let Shape77 = browser.currentScene.createNode("Shape");
let Appearance78 = browser.currentScene.createNode("Appearance");
Appearance78.USE = "charactersWebAppearance";
Shape77.appearance = Appearance78;

let IndexedFaceSet79 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet79.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet79.solid = False;
let Coordinate80 = browser.currentScene.createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[-0.34208,0.23778,0.1,-0.15008,0.23778,0.1,-0.15008,0.23778,0,-0.34208,0.23778,0]);
IndexedFaceSet79.coord = Coordinate80;

let Normal81 = browser.currentScene.createNode("Normal");
Normal81.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet79.normal = Normal81;

Shape77.geometry = IndexedFaceSet79;

Transform5.children[14] = Shape77;

let Shape82 = browser.currentScene.createNode("Shape");
let Appearance83 = browser.currentScene.createNode("Appearance");
Appearance83.USE = "charactersWebAppearance";
Shape82.appearance = Appearance83;

let IndexedFaceSet84 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet84.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet84.solid = False;
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[-0.15008,0.23778,0.1,-0.15008,0.17778,0.1,-0.15008,0.17778,0,-0.15008,0.23778,0]);
IndexedFaceSet84.coord = Coordinate85;

let Normal86 = browser.currentScene.createNode("Normal");
Normal86.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet84.normal = Normal86;

Shape82.geometry = IndexedFaceSet84;

Transform5.children[15] = Shape82;

let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
Appearance88.USE = "charactersWebAppearance";
Shape87.appearance = Appearance88;

let IndexedFaceSet89 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet89.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet89.solid = False;
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[-0.15008,0.17778,0.1,-0.16208,0.17778,0.1,-0.16208,0.17778,0,-0.15008,0.17778,0]);
IndexedFaceSet89.coord = Coordinate90;

let Normal91 = browser.currentScene.createNode("Normal");
Normal91.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet89.normal = Normal91;

Shape87.geometry = IndexedFaceSet89;

Transform5.children[16] = Shape87;

let Shape92 = browser.currentScene.createNode("Shape");
let Appearance93 = browser.currentScene.createNode("Appearance");
Appearance93.USE = "charactersWebAppearance";
Shape92.appearance = Appearance93;

let IndexedFaceSet94 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet94.coordIndex = new MFInt32(new int[7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1]);
IndexedFaceSet94.solid = False;
let Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[-0.16208,0.17778,0.1,-0.16598,0.18489,0.1,-0.17036,0.19174,0.1,-0.18008,0.20478,0.1,-0.18008,0.20478,0,-0.17036,0.19174,0,-0.16598,0.18489,0,-0.16208,0.17778,0]);
IndexedFaceSet94.coord = Coordinate95;

let Normal96 = browser.currentScene.createNode("Normal");
Normal96.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.85889,-0.51216,0,-0.82684,-0.56243,0,-0.78087,-0.6247,0,-0.78087,-0.6247,0,-0.82684,-0.56243,0,-0.85889,-0.51216,0,-0.89443,-0.44721,0]);
IndexedFaceSet94.normal = Normal96;

Shape92.geometry = IndexedFaceSet94;

Transform5.children[17] = Shape92;

let Shape97 = browser.currentScene.createNode("Shape");
let Appearance98 = browser.currentScene.createNode("Appearance");
Appearance98.USE = "charactersWebAppearance";
Shape97.appearance = Appearance98;

let IndexedFaceSet99 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet99.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,15,-1,16,17,5,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,5,6,15,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,11,-1,12,13,9,-1,15,7,14,-1,14,8,13,-1,9,10,11,-1]);
IndexedFaceSet99.solid = False;
let Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[-0.18008,0.20478,0.1,-0.18442,0.20995,0.1,-0.18682,0.21248,0.1,-0.18937,0.2148,0.1,-0.19207,0.2168,0.1,-0.19348,0.21765,0.1,-0.19493,0.21838,0.1,-0.19641,0.21897,0.1,-0.19793,0.21941,0.1,-0.19949,0.21968,0.1,-0.20108,0.21978,0.1,-0.20108,0.21978,0,-0.19949,0.21968,0,-0.19793,0.21941,0,-0.19641,0.21897,0,-0.19493,0.21838,0,-0.19348,0.21765,0,-0.19207,0.2168,0,-0.18937,0.2148,0,-0.18682,0.21248,0,-0.18442,0.20995,0,-0.18008,0.20478,0]);
IndexedFaceSet99.coord = Coordinate100;

let Normal101 = browser.currentScene.createNode("Normal");
Normal101.vector = new MFVec3f(new float[-0.78087,-0.62469,0,-0.74338,-0.66886,0,-0.70197,-0.7122,0,-0.63904,-0.76917,0,-0.54592,-0.83784,0,-0.48458,-0.87475,0,-0.41153,-0.9114,0,-0.32583,-0.94543,0,-0.22745,-0.97379,0,-0.11778,-0.99304,0,0,-1,0,0,-1,0,-0.11778,-0.99304,0,-0.22745,-0.97379,0,-0.32583,-0.94543,0,-0.41153,-0.9114,0,-0.48458,-0.87475,0,-0.54592,-0.83784,0,-0.63904,-0.76917,0,-0.70197,-0.7122,0,-0.74338,-0.66886,0,-0.78087,-0.62469,0]);
IndexedFaceSet99.normal = Normal101;

Shape97.geometry = IndexedFaceSet99;

Transform5.children[18] = Shape97;

let Shape102 = browser.currentScene.createNode("Shape");
let Appearance103 = browser.currentScene.createNode("Appearance");
Appearance103.USE = "charactersWebAppearance";
Shape102.appearance = Appearance103;

let IndexedFaceSet104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet104.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet104.solid = False;
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[-0.20108,0.21978,0.1,-0.20708,0.21978,0.1,-0.21308,0.21978,0.1,-0.21308,0.21978,0,-0.20108,0.21978,0]);
IndexedFaceSet104.coord = Coordinate105;

let Normal106 = browser.currentScene.createNode("Normal");
Normal106.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet104.normal = Normal106;

Shape102.geometry = IndexedFaceSet104;

Transform5.children[19] = Shape102;

let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
Appearance108.USE = "charactersWebAppearance";
Shape107.appearance = Appearance108;

let IndexedFaceSet109 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet109.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet109.solid = False;
let Coordinate110 = browser.currentScene.createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[-0.21308,0.21978,0.1,-0.21747,0.22106,0.1,-0.22196,0.222,0.1,-0.22651,0.22258,0.1,-0.23108,0.22278,0.1,-0.23108,0.22278,0,-0.22651,0.22258,0,-0.22196,0.222,0,-0.21747,0.22106,0,-0.21308,0.21978,0]);
IndexedFaceSet109.coord = Coordinate110;

let Normal111 = browser.currentScene.createNode("Normal");
Normal111.vector = new MFVec3f(new float[-0.31623,-0.94868,0,-0.24298,-0.97003,0,-0.16647,-0.98605,0,-0.08575,-0.99632,0,0,-1,0,0,-1,0,-0.08575,-0.99632,0,-0.16647,-0.98605,0,-0.24298,-0.97003,0,-0.31623,-0.94868,0]);
IndexedFaceSet109.normal = Normal111;

Shape107.geometry = IndexedFaceSet109;

Transform5.children[20] = Shape107;

let Shape112 = browser.currentScene.createNode("Shape");
let Appearance113 = browser.currentScene.createNode("Appearance");
Appearance113.USE = "charactersWebAppearance";
Shape112.appearance = Appearance113;

let IndexedFaceSet114 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet114.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet114.solid = False;
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[-0.23108,0.22278,0.1,-0.27008,0.22278,0.1,-0.27008,0.22278,0,-0.23108,0.22278,0]);
IndexedFaceSet114.coord = Coordinate115;

let Normal116 = browser.currentScene.createNode("Normal");
Normal116.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet114.normal = Normal116;

Shape112.geometry = IndexedFaceSet114;

Transform5.children[21] = Shape112;

let Shape117 = browser.currentScene.createNode("Shape");
let Appearance118 = browser.currentScene.createNode("Appearance");
Appearance118.USE = "charactersWebAppearance";
Shape117.appearance = Appearance118;

let IndexedFaceSet119 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet119.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet119.solid = False;
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[-0.27008,0.22278,0.1,-0.27008,0.12378,0.1,-0.27008,0.12378,0,-0.27008,0.22278,0]);
IndexedFaceSet119.coord = Coordinate120;

let Normal121 = browser.currentScene.createNode("Normal");
Normal121.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet119.normal = Normal121;

Shape117.geometry = IndexedFaceSet119;

Transform5.children[22] = Shape117;

let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
Appearance123.USE = "charactersWebAppearance";
Shape122.appearance = Appearance123;

let IndexedFaceSet124 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet124.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet124.solid = False;
let Coordinate125 = browser.currentScene.createNode("Coordinate");
Coordinate125.point = new MFVec3f(new float[-0.27008,0.12378,0.1,-0.24308,0.12378,0.1,-0.24308,0.12378,0,-0.27008,0.12378,0]);
IndexedFaceSet124.coord = Coordinate125;

let Normal126 = browser.currentScene.createNode("Normal");
Normal126.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet124.normal = Normal126;

Shape122.geometry = IndexedFaceSet124;

Transform5.children[23] = Shape122;

let Shape127 = browser.currentScene.createNode("Shape");
let Appearance128 = browser.currentScene.createNode("Appearance");
Appearance128.USE = "charactersWebAppearance";
Shape127.appearance = Appearance128;

let IndexedFaceSet129 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet129.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet129.solid = False;
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[-0.24308,0.12378,0.1,-0.23408,0.12378,0.1,-0.22508,0.12378,0.1,-0.22508,0.12378,0,-0.24308,0.12378,0]);
IndexedFaceSet129.coord = Coordinate130;

let Normal131 = browser.currentScene.createNode("Normal");
Normal131.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet129.normal = Normal131;

Shape127.geometry = IndexedFaceSet129;

Transform5.children[24] = Shape127;

let Shape132 = browser.currentScene.createNode("Shape");
let Appearance133 = browser.currentScene.createNode("Appearance");
Appearance133.USE = "charactersWebAppearance";
Shape132.appearance = Appearance133;

let IndexedFaceSet134 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet134.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet134.solid = False;
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[-0.22508,0.12378,0.1,-0.22329,0.12443,0.1,-0.22152,0.12522,0.1,-0.21979,0.12614,0.1,-0.21814,0.12719,0.1,-0.21661,0.12838,0.1,-0.21523,0.12971,0.1,-0.21461,0.13042,0.1,-0.21404,0.13117,0.1,-0.21353,0.13196,0.1,-0.21308,0.13278,0.1,-0.21308,0.13278,0,-0.21353,0.13196,0,-0.21404,0.13117,0,-0.21461,0.13042,0,-0.21523,0.12971,0,-0.21661,0.12838,0,-0.21814,0.12719,0,-0.21979,0.12614,0,-0.22152,0.12522,0,-0.22329,0.12443,0,-0.22508,0.12378,0]);
IndexedFaceSet134.coord = Coordinate135;

let Normal136 = browser.currentScene.createNode("Normal");
Normal136.vector = new MFVec3f(new float[-0.31623,0.94868,0,-0.37459,0.92719,0,-0.43622,0.89984,0,-0.50255,0.86455,0,-0.57451,0.8185,0,-0.65224,0.75801,0,-0.73445,0.67867,0,-0.77619,0.6305,0,-0.81744,0.57601,0,-0.85723,0.51493,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.85723,0.51493,0,-0.81744,0.57601,0,-0.77619,0.6305,0,-0.73445,0.67867,0,-0.65224,0.75801,0,-0.57451,0.8185,0,-0.50255,0.86455,0,-0.43622,0.89984,0,-0.37459,0.92719,0,-0.31623,0.94868,0]);
IndexedFaceSet134.normal = Normal136;

Shape132.geometry = IndexedFaceSet134;

Transform5.children[25] = Shape132;

let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
Appearance138.USE = "charactersWebAppearance";
Shape137.appearance = Appearance138;

let IndexedFaceSet139 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet139.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet139.solid = False;
let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[-0.21308,0.13278,0.1,-0.20982,0.14017,0.1,-0.20708,0.14778,0.1,-0.20708,0.14778,0,-0.20982,0.14017,0,-0.21308,0.13278,0]);
IndexedFaceSet139.coord = Coordinate140;

let Normal141 = browser.currentScene.createNode("Normal");
Normal141.vector = new MFVec3f(new float[-0.89443,0.44721,0,-0.93071,0.36575,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.93071,0.36575,0,-0.89443,0.44721,0]);
IndexedFaceSet139.normal = Normal141;

Shape137.geometry = IndexedFaceSet139;

Transform5.children[26] = Shape137;

let Shape142 = browser.currentScene.createNode("Shape");
let Appearance143 = browser.currentScene.createNode("Appearance");
Appearance143.USE = "charactersWebAppearance";
Shape142.appearance = Appearance143;

let IndexedFaceSet144 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet144.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet144.solid = False;
let Coordinate145 = browser.currentScene.createNode("Coordinate");
Coordinate145.point = new MFVec3f(new float[-0.20708,0.14778,0.1,-0.20408,0.15678,0.1,-0.20108,0.16578,0.1,-0.20108,0.16578,0,-0.20408,0.15678,0,-0.20708,0.14778,0]);
IndexedFaceSet144.coord = Coordinate145;

let Normal146 = browser.currentScene.createNode("Normal");
Normal146.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.94868,0.31623,0]);
IndexedFaceSet144.normal = Normal146;

Shape142.geometry = IndexedFaceSet144;

Transform5.children[27] = Shape142;

let Shape147 = browser.currentScene.createNode("Shape");
let Appearance148 = browser.currentScene.createNode("Appearance");
Appearance148.USE = "charactersWebAppearance";
Shape147.appearance = Appearance148;

let IndexedFaceSet149 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet149.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet149.solid = False;
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[-0.20108,0.16578,0.1,-0.18908,0.16578,0.1,-0.18908,0.16578,0,-0.20108,0.16578,0]);
IndexedFaceSet149.coord = Coordinate150;

let Normal151 = browser.currentScene.createNode("Normal");
Normal151.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet149.normal = Normal151;

Shape147.geometry = IndexedFaceSet149;

Transform5.children[28] = Shape147;

let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
Appearance153.USE = "charactersWebAppearance";
Shape152.appearance = Appearance153;

let IndexedFaceSet154 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet154.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet154.solid = False;
let Coordinate155 = browser.currentScene.createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[-0.18908,0.16578,0.1,-0.18908,0.06678,0.1,-0.18908,0.06678,0,-0.18908,0.16578,0]);
IndexedFaceSet154.coord = Coordinate155;

let Normal156 = browser.currentScene.createNode("Normal");
Normal156.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet154.normal = Normal156;

Shape152.geometry = IndexedFaceSet154;

Transform5.children[29] = Shape152;

let Shape157 = browser.currentScene.createNode("Shape");
let Appearance158 = browser.currentScene.createNode("Appearance");
Appearance158.USE = "charactersWebAppearance";
Shape157.appearance = Appearance158;

let IndexedFaceSet159 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet159.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet159.solid = False;
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[-0.18908,0.06678,0.1,-0.20108,0.06678,0.1,-0.20108,0.06678,0,-0.18908,0.06678,0]);
IndexedFaceSet159.coord = Coordinate160;

let Normal161 = browser.currentScene.createNode("Normal");
Normal161.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet159.normal = Normal161;

Shape157.geometry = IndexedFaceSet159;

Transform5.children[30] = Shape157;

let Shape162 = browser.currentScene.createNode("Shape");
let Appearance163 = browser.currentScene.createNode("Appearance");
Appearance163.USE = "charactersWebAppearance";
Shape162.appearance = Appearance163;

let IndexedFaceSet164 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet164.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet164.solid = False;
let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[-0.20108,0.06678,0.1,-0.20434,0.07417,0.1,-0.20708,0.08178,0.1,-0.20708,0.08178,0,-0.20434,0.07417,0,-0.20108,0.06678,0]);
IndexedFaceSet164.coord = Coordinate165;

let Normal166 = browser.currentScene.createNode("Normal");
Normal166.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.93072,-0.36575,0,-0.94868,-0.31623,0,-0.94868,-0.31623,0,-0.93072,-0.36575,0,-0.89443,-0.44721,0]);
IndexedFaceSet164.normal = Normal166;

Shape162.geometry = IndexedFaceSet164;

Transform5.children[31] = Shape162;

let Shape167 = browser.currentScene.createNode("Shape");
let Appearance168 = browser.currentScene.createNode("Appearance");
Appearance168.USE = "charactersWebAppearance";
Shape167.appearance = Appearance168;

let IndexedFaceSet169 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet169.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet169.solid = False;
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[-0.20708,0.08178,0.1,-0.20982,0.08939,0.1,-0.21308,0.09678,0.1,-0.21308,0.09678,0,-0.20982,0.08939,0,-0.20708,0.08178,0]);
IndexedFaceSet169.coord = Coordinate170;

let Normal171 = browser.currentScene.createNode("Normal");
Normal171.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.93072,-0.36575,0,-0.89443,-0.44721,0,-0.89443,-0.44721,0,-0.93072,-0.36575,0,-0.94868,-0.31623,0]);
IndexedFaceSet169.normal = Normal171;

Shape167.geometry = IndexedFaceSet169;

Transform5.children[32] = Shape167;

let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
Appearance173.USE = "charactersWebAppearance";
Shape172.appearance = Appearance173;

let IndexedFaceSet174 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet174.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet174.solid = False;
let Coordinate175 = browser.currentScene.createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[-0.21308,0.09678,0.1,-0.21582,0.09936,0.1,-0.21873,0.10176,0.1,-0.22182,0.10392,0.1,-0.22508,0.10578,0.1,-0.22508,0.10578,0,-0.22182,0.10392,0,-0.21873,0.10176,0,-0.21582,0.09936,0,-0.21308,0.09678,0]);
IndexedFaceSet174.coord = Coordinate175;

let Normal176 = browser.currentScene.createNode("Normal");
Normal176.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.66349,-0.74818,0,-0.60742,-0.79438,0,-0.5362,-0.84409,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.5362,-0.84409,0,-0.60742,-0.79438,0,-0.66349,-0.74818,0,-0.70711,-0.70711,0]);
IndexedFaceSet174.normal = Normal176;

Shape172.geometry = IndexedFaceSet174;

Transform5.children[33] = Shape172;

let Shape177 = browser.currentScene.createNode("Shape");
let Appearance178 = browser.currentScene.createNode("Appearance");
Appearance178.USE = "charactersWebAppearance";
Shape177.appearance = Appearance178;

let IndexedFaceSet179 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet179.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,10,-1,11,12,2,-1,2,3,10,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet179.solid = False;
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[-0.22508,0.10578,0.1,-0.22717,0.10669,0.1,-0.22933,0.10739,0.1,-0.23156,0.10792,0.1,-0.23384,0.1083,0.1,-0.23847,0.10869,0.1,-0.24308,0.10878,0.1,-0.24308,0.10878,0,-0.23847,0.10869,0,-0.23384,0.1083,0,-0.23156,0.10792,0,-0.22933,0.10739,0,-0.22717,0.10669,0,-0.22508,0.10578,0]);
IndexedFaceSet179.coord = Coordinate180;

let Normal181 = browser.currentScene.createNode("Normal");
Normal181.vector = new MFVec3f(new float[-0.44721,-0.89443,0,-0.35328,-0.93552,0,-0.26836,-0.96332,0,-0.19461,-0.98088,0,-0.13281,-0.99114,0,-0.04437,-0.99902,0,0,-1,0,0,-1,0,-0.04437,-0.99902,0,-0.13281,-0.99114,0,-0.19461,-0.98088,0,-0.26836,-0.96332,0,-0.35328,-0.93552,0,-0.44721,-0.89443,0]);
IndexedFaceSet179.normal = Normal181;

Shape177.geometry = IndexedFaceSet179;

Transform5.children[34] = Shape177;

let Shape182 = browser.currentScene.createNode("Shape");
let Appearance183 = browser.currentScene.createNode("Appearance");
Appearance183.USE = "charactersWebAppearance";
Shape182.appearance = Appearance183;

let IndexedFaceSet184 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet184.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet184.solid = False;
let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[-0.24308,0.10878,0.1,-0.27008,0.10878,0.1,-0.27008,0.10878,0,-0.24308,0.10878,0]);
IndexedFaceSet184.coord = Coordinate185;

let Normal186 = browser.currentScene.createNode("Normal");
Normal186.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet184.normal = Normal186;

Shape182.geometry = IndexedFaceSet184;

Transform5.children[35] = Shape182;

let Shape187 = browser.currentScene.createNode("Shape");
let Appearance188 = browser.currentScene.createNode("Appearance");
Appearance188.USE = "charactersWebAppearance";
Shape187.appearance = Appearance188;

let IndexedFaceSet189 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet189.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet189.solid = False;
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[-0.27008,0.10878,0.1,-0.27008,0.03378,0.1,-0.27008,0.03378,0,-0.27008,0.10878,0]);
IndexedFaceSet189.coord = Coordinate190;

let Normal191 = browser.currentScene.createNode("Normal");
Normal191.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet189.normal = Normal191;

Shape187.geometry = IndexedFaceSet189;

Transform5.children[36] = Shape187;

let Shape192 = browser.currentScene.createNode("Shape");
let Appearance193 = browser.currentScene.createNode("Appearance");
Appearance193.USE = "charactersWebAppearance";
Shape192.appearance = Appearance193;

let IndexedFaceSet194 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet194.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet194.solid = False;
let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[-0.27008,0.03378,0.1,-0.27008,0.02478,0.1,-0.27008,0.01578,0.1,-0.27008,0.01578,0,-0.27008,0.03378,0]);
IndexedFaceSet194.coord = Coordinate195;

let Normal196 = browser.currentScene.createNode("Normal");
Normal196.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet194.normal = Normal196;

Shape192.geometry = IndexedFaceSet194;

Transform5.children[37] = Shape192;

let Shape197 = browser.currentScene.createNode("Shape");
let Appearance198 = browser.currentScene.createNode("Appearance");
Appearance198.USE = "charactersWebAppearance";
Shape197.appearance = Appearance198;

let IndexedFaceSet199 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet199.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet199.solid = False;
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[-0.27008,0.01578,0.1,-0.26743,0.01102,0.1,-0.26587,0.00881,0.1,-0.26408,0.00678,0.1,-0.26408,0.00678,0,-0.26587,0.00881,0,-0.26743,0.01102,0,-0.27008,0.01578,0]);
IndexedFaceSet199.coord = Coordinate200;

let Normal201 = browser.currentScene.createNode("Normal");
Normal201.vector = new MFVec3f(new float[0.89443,0.44721,0,0.84184,0.53972,0,0.78785,0.61587,0,0.7071,0.70711,0,0.7071,0.70711,0,0.78785,0.61587,0,0.84184,0.53972,0,0.89443,0.44721,0]);
IndexedFaceSet199.normal = Normal201;

Shape197.geometry = IndexedFaceSet199;

Transform5.children[38] = Shape197;

let Shape202 = browser.currentScene.createNode("Shape");
let Appearance203 = browser.currentScene.createNode("Appearance");
Appearance203.USE = "charactersWebAppearance";
Shape202.appearance = Appearance203;

let IndexedFaceSet204 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet204.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet204.solid = False;
let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[-0.26408,0.00678,0.1,-0.26123,0.00553,0.1,-0.25824,0.00459,0.1,-0.25518,0.00399,0.1,-0.25363,0.00383,0.1,-0.25208,0.00378,0.1,-0.25208,0.00378,0,-0.25363,0.00383,0,-0.25518,0.00399,0,-0.25824,0.00459,0,-0.26123,0.00553,0,-0.26408,0.00678,0]);
IndexedFaceSet204.coord = Coordinate205;

let Normal206 = browser.currentScene.createNode("Normal");
Normal206.vector = new MFVec3f(new float[0.44721,0.89443,0,0.35262,0.93577,0,0.24866,0.96859,0,0.13201,0.99125,0,0.06804,0.99768,0,0,1,0,0,1,0,0.06804,0.99768,0,0.13201,0.99125,0,0.24866,0.96859,0,0.35262,0.93577,0,0.44721,0.89443,0]);
IndexedFaceSet204.normal = Normal206;

Shape202.geometry = IndexedFaceSet204;

Transform5.children[39] = Shape202;

let Shape207 = browser.currentScene.createNode("Shape");
let Appearance208 = browser.currentScene.createNode("Appearance");
Appearance208.USE = "charactersWebAppearance";
Shape207.appearance = Appearance208;

let IndexedFaceSet209 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet209.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet209.solid = False;
let Coordinate210 = browser.currentScene.createNode("Coordinate");
Coordinate210.point = new MFVec3f(new float[-0.25208,0.00378,0.1,-0.24008,0.00378,0.1,-0.22808,0.00378,0.1,-0.22808,0.00378,0,-0.25208,0.00378,0]);
IndexedFaceSet209.coord = Coordinate210;

let Normal211 = browser.currentScene.createNode("Normal");
Normal211.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet209.normal = Normal211;

Shape207.geometry = IndexedFaceSet209;

Transform5.children[40] = Shape207;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
Appearance213.USE = "charactersWebAppearance";
Shape212.appearance = Appearance213;

let IndexedFaceSet214 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet214.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet214.solid = False;
let Coordinate215 = browser.currentScene.createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[-0.22808,0.00378,0.1,-0.22058,0.00378,0.1,-0.21308,0.00378,0.1,-0.21308,0.00378,0,-0.22808,0.00378,0]);
IndexedFaceSet214.coord = Coordinate215;

let Normal216 = browser.currentScene.createNode("Normal");
Normal216.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet214.normal = Normal216;

Shape212.geometry = IndexedFaceSet214;

Transform5.children[41] = Shape212;

let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
Appearance218.USE = "charactersWebAppearance";
Shape217.appearance = Appearance218;

let IndexedFaceSet219 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet219.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet219.solid = False;
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[-0.21308,0.00378,0.1,-0.20558,0.00378,0.1,-0.19808,0.00378,0.1,-0.19808,0.00378,0,-0.21308,0.00378,0]);
IndexedFaceSet219.coord = Coordinate220;

let Normal221 = browser.currentScene.createNode("Normal");
Normal221.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet219.normal = Normal221;

Shape217.geometry = IndexedFaceSet219;

Transform5.children[42] = Shape217;

let Shape222 = browser.currentScene.createNode("Shape");
let Appearance223 = browser.currentScene.createNode("Appearance");
Appearance223.USE = "charactersWebAppearance";
Shape222.appearance = Appearance223;

let IndexedFaceSet224 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet224.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet224.solid = False;
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[-0.19808,0.00378,0.1,-0.19427,0.00402,0.1,-0.19048,0.00467,0.1,-0.18308,0.00678,0.1,-0.18308,0.00678,0,-0.19048,0.00467,0,-0.19427,0.00402,0,-0.19808,0.00378,0]);
IndexedFaceSet224.coord = Coordinate225;

let Normal226 = browser.currentScene.createNode("Normal");
Normal226.vector = new MFVec3f(new float[0,1,0,-0.12161,0.99258,0,-0.21363,0.97691,0,-0.31623,0.94868,0,-0.31623,0.94868,0,-0.21363,0.97691,0,-0.12161,0.99258,0,0,1,0]);
IndexedFaceSet224.normal = Normal226;

Shape222.geometry = IndexedFaceSet224;

Transform5.children[43] = Shape222;

let Shape227 = browser.currentScene.createNode("Shape");
let Appearance228 = browser.currentScene.createNode("Appearance");
Appearance228.USE = "charactersWebAppearance";
Shape227.appearance = Appearance228;

let IndexedFaceSet229 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet229.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,11,-1,12,13,5,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,5,6,11,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,11,7,10,-1]);
IndexedFaceSet229.solid = False;
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.18308,0.00678,0.1,-0.18188,0.00681,0.1,-0.18065,0.00693,0.1,-0.17943,0.00714,0.1,-0.17823,0.00744,0.1,-0.17708,0.00785,0.1,-0.17599,0.00837,0.1,-0.17498,0.00901,0.1,-0.17408,0.00978,0.1,-0.17408,0.00978,0,-0.17498,0.00901,0,-0.17599,0.00837,0,-0.17708,0.00785,0,-0.17823,0.00744,0,-0.17943,0.00714,0,-0.18065,0.00693,0,-0.18188,0.00681,0,-0.18308,0.00678,0]);
IndexedFaceSet229.coord = Coordinate230;

let Normal231 = browser.currentScene.createNode("Normal");
Normal231.vector = new MFVec3f(new float[0,1,0,-0.06216,0.99807,0,-0.12928,0.99161,0,-0.20336,0.9791,0,-0.28619,0.95817,0,-0.37907,0.92537,0,-0.48214,0.87609,0,-0.59334,0.80495,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.59334,0.80495,0,-0.48214,0.87609,0,-0.37907,0.92537,0,-0.28619,0.95817,0,-0.20336,0.9791,0,-0.12928,0.99161,0,-0.06216,0.99807,0,0,1,0]);
IndexedFaceSet229.normal = Normal231;

Shape227.geometry = IndexedFaceSet229;

Transform5.children[44] = Shape227;

let Shape232 = browser.currentScene.createNode("Shape");
let Appearance233 = browser.currentScene.createNode("Appearance");
Appearance233.USE = "charactersWebAppearance";
Shape232.appearance = Appearance233;

let IndexedFaceSet234 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet234.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet234.solid = False;
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[-0.17408,0.00978,0.1,-0.16872,0.01586,0.1,-0.16403,0.02252,0.1,-0.15608,0.03678,0.1,-0.15608,0.03678,0,-0.16403,0.02252,0,-0.16872,0.01586,0,-0.17408,0.00978,0]);
IndexedFaceSet234.coord = Coordinate235;

let Normal236 = browser.currentScene.createNode("Normal");
Normal236.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.78785,0.61587,0,-0.84184,0.53972,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.84184,0.53972,0,-0.78785,0.61587,0,-0.70711,0.70711,0]);
IndexedFaceSet234.normal = Normal236;

Shape232.geometry = IndexedFaceSet234;

Transform5.children[45] = Shape232;

let Shape237 = browser.currentScene.createNode("Shape");
let Appearance238 = browser.currentScene.createNode("Appearance");
Appearance238.USE = "charactersWebAppearance";
Shape237.appearance = Appearance238;

let IndexedFaceSet239 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet239.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet239.solid = False;
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[-0.15608,0.03678,0.1,-0.1496,0.05008,0.1,-0.14408,0.06378,0.1,-0.14408,0.06378,0,-0.1496,0.05008,0,-0.15608,0.03678,0]);
IndexedFaceSet239.coord = Coordinate240;

let Normal241 = browser.currentScene.createNode("Normal");
Normal241.vector = new MFVec3f(new float[-0.89443,0.44721,0,-0.90858,0.41772,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.90858,0.41772,0,-0.89443,0.44721,0]);
IndexedFaceSet239.normal = Normal241;

Shape237.geometry = IndexedFaceSet239;

Transform5.children[46] = Shape237;

let Shape242 = browser.currentScene.createNode("Shape");
let Appearance243 = browser.currentScene.createNode("Appearance");
Appearance243.USE = "charactersWebAppearance";
Shape242.appearance = Appearance243;

let IndexedFaceSet244 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet244.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,156,-1,156,2,3,-1,4,156,3,-1,4,5,156,-1,156,5,6,-1,7,156,6,-1,7,8,156,-1,156,8,9,-1,10,156,9,-1,10,11,156,-1,156,11,12,-1,15,12,13,-1,14,15,13,-1,156,12,15,-1,16,156,15,-1,16,17,156,-1,156,17,18,-1,19,156,18,-1,19,20,156,-1,156,20,21,-1,22,156,21,-1,22,155,156,-1,22,23,155,-1,155,23,24,-1,25,155,24,-1,25,26,155,-1,155,26,27,-1,146,27,145,-1,146,155,27,-1,146,147,155,-1,155,147,148,-1,149,155,148,-1,149,150,155,-1,155,150,151,-1,152,155,151,-1,152,153,155,-1,155,153,154,-1,27,28,145,-1,145,28,144,-1,144,28,141,-1,143,141,142,-1,143,144,141,-1,29,139,28,-1,29,138,139,-1,29,30,138,-1,138,30,137,-1,137,30,136,-1,136,30,135,-1,135,30,31,-1,134,31,133,-1,134,135,31,-1,32,129,31,-1,32,33,129,-1,129,33,34,-1,128,34,69,-1,70,128,69,-1,70,127,128,-1,70,126,127,-1,70,125,126,-1,70,124,125,-1,70,123,124,-1,70,122,123,-1,70,121,122,-1,70,119,121,-1,70,118,119,-1,70,117,118,-1,70,116,117,-1,70,115,116,-1,70,114,115,-1,70,113,114,-1,70,112,113,-1,70,107,112,-1,70,106,107,-1,70,93,106,-1,70,71,93,-1,93,71,92,-1,92,71,72,-1,73,92,72,-1,73,74,92,-1,92,74,77,-1,78,92,77,-1,78,79,92,-1,92,79,80,-1,81,92,80,-1,81,82,92,-1,92,82,83,-1,84,92,83,-1,84,85,92,-1,92,85,86,-1,87,92,86,-1,87,88,92,-1,92,88,91,-1,91,88,89,-1,90,91,89,-1,34,35,69,-1,69,35,68,-1,68,35,36,-1,67,36,37,-1,38,67,37,-1,38,66,67,-1,38,39,66,-1,66,39,40,-1,41,66,40,-1,41,65,66,-1,41,42,65,-1,65,42,64,-1,64,42,63,-1,63,42,43,-1,62,43,61,-1,62,63,43,-1,68,36,67,-1,43,44,61,-1,61,44,60,-1,60,44,45,-1,59,45,58,-1,59,60,45,-1,46,56,45,-1,46,55,56,-1,46,50,55,-1,46,47,50,-1,50,47,48,-1,49,50,48,-1,50,51,55,-1,55,51,54,-1,54,51,53,-1,53,51,52,-1,56,57,45,-1,45,57,58,-1,75,76,74,-1,74,76,77,-1,94,95,93,-1,93,95,96,-1,97,93,96,-1,97,98,93,-1,93,98,99,-1,100,93,99,-1,100,101,93,-1,93,101,102,-1,103,93,102,-1,103,104,93,-1,93,104,105,-1,106,93,105,-1,108,110,107,-1,108,109,110,-1,110,111,107,-1,107,111,112,-1,119,120,121,-1,128,129,34,-1,129,130,31,-1,31,130,131,-1,132,31,131,-1,132,133,31,-1,139,140,28,-1,28,140,141,-1]);
IndexedFaceSet244.solid = False;
let Coordinate245 = browser.currentScene.createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[-0.13208,0.06378,0.1,-0.14408,0.06378,0.1,-0.1496,0.05008,0.1,-0.15608,0.03678,0.1,-0.16403,0.02252,0.1,-0.16872,0.01586,0.1,-0.17408,0.00978,0.1,-0.17498,0.00901,0.1,-0.17599,0.00837,0.1,-0.17708,0.00785,0.1,-0.17823,0.00744,0.1,-0.17943,0.00714,0.1,-0.18065,0.00693,0.1,-0.18188,0.00681,0.1,-0.18308,0.00678,0.1,-0.19048,0.00467,0.1,-0.19427,0.00402,0.1,-0.19808,0.00378,0.1,-0.20558,0.00378,0.1,-0.21308,0.00378,0.1,-0.22058,0.00378,0.1,-0.22808,0.00378,0.1,-0.24008,0.00378,0.1,-0.25208,0.00378,0.1,-0.25363,0.00383,0.1,-0.25518,0.00399,0.1,-0.25824,0.00459,0.1,-0.26123,0.00553,0.1,-0.26408,0.00678,0.1,-0.26587,0.00881,0.1,-0.26743,0.01102,0.1,-0.27008,0.01578,0.1,-0.27008,0.02478,0.1,-0.27008,0.03378,0.1,-0.27008,0.10878,0.1,-0.24308,0.10878,0.1,-0.23847,0.10869,0.1,-0.23384,0.1083,0.1,-0.23156,0.10792,0.1,-0.22933,0.10739,0.1,-0.22717,0.10669,0.1,-0.22508,0.10578,0.1,-0.22182,0.10392,0.1,-0.21873,0.10176,0.1,-0.21582,0.09936,0.1,-0.21308,0.09678,0.1,-0.20982,0.08939,0.1,-0.20708,0.08178,0.1,-0.20434,0.07417,0.1,-0.20108,0.06678,0.1,-0.18908,0.06678,0.1,-0.18908,0.16578,0.1,-0.20108,0.16578,0.1,-0.20408,0.15678,0.1,-0.20708,0.14778,0.1,-0.20982,0.14017,0.1,-0.21308,0.13278,0.1,-0.21353,0.13196,0.1,-0.21404,0.13117,0.1,-0.21461,0.13042,0.1,-0.21523,0.12971,0.1,-0.21661,0.12838,0.1,-0.21814,0.12719,0.1,-0.21979,0.12614,0.1,-0.22152,0.12522,0.1,-0.22329,0.12443,0.1,-0.22508,0.12378,0.1,-0.23408,0.12378,0.1,-0.24308,0.12378,0.1,-0.27008,0.12378,0.1,-0.27008,0.22278,0.1,-0.23108,0.22278,0.1,-0.22651,0.22258,0.1,-0.22196,0.222,0.1,-0.21747,0.22106,0.1,-0.21308,0.21978,0.1,-0.20708,0.21978,0.1,-0.20108,0.21978,0.1,-0.19949,0.21968,0.1,-0.19793,0.21941,0.1,-0.19641,0.21897,0.1,-0.19493,0.21838,0.1,-0.19348,0.21765,0.1,-0.19207,0.2168,0.1,-0.18937,0.2148,0.1,-0.18682,0.21248,0.1,-0.18442,0.20995,0.1,-0.18008,0.20478,0.1,-0.17036,0.19174,0.1,-0.16598,0.18489,0.1,-0.16208,0.17778,0.1,-0.15008,0.17778,0.1,-0.15008,0.23778,0.1,-0.34208,0.23778,0.1,-0.34208,0.22578,0.1,-0.34151,0.22526,0.1,-0.3409,0.22481,0.1,-0.34024,0.22442,0.1,-0.33955,0.22408,0.1,-0.33884,0.22379,0.1,-0.33809,0.22355,0.1,-0.33653,0.22318,0.1,-0.33492,0.22296,0.1,-0.33328,0.22284,0.1,-0.33008,0.22278,0.1,-0.32367,0.22043,0.1,-0.32215,0.21969,0.1,-0.32069,0.21885,0.1,-0.31933,0.21789,0.1,-0.31808,0.21678,0.1,-0.31672,0.21665,0.1,-0.31538,0.21629,0.1,-0.31472,0.21604,0.1,-0.31407,0.21573,0.1,-0.31344,0.21538,0.1,-0.31283,0.21499,0.1,-0.31169,0.21409,0.1,-0.31066,0.21308,0.1,-0.3102,0.21253,0.1,-0.30978,0.21196,0.1,-0.30908,0.21078,0.1,-0.30831,0.20988,0.1,-0.30767,0.20887,0.1,-0.30715,0.20778,0.1,-0.30674,0.20662,0.1,-0.30644,0.20543,0.1,-0.30623,0.2042,0.1,-0.30612,0.20298,0.1,-0.30608,0.20178,0.1,-0.30608,0.02178,0.1,-0.30614,0.01857,0.1,-0.30626,0.01694,0.1,-0.30649,0.01532,0.1,-0.30685,0.01377,0.1,-0.30709,0.01302,0.1,-0.30738,0.0123,0.1,-0.30772,0.01161,0.1,-0.30811,0.01096,0.1,-0.30857,0.01035,0.1,-0.30908,0.00978,0.1,-0.31111,0.00799,0.1,-0.31333,0.00643,0.1,-0.31808,0.00378,0.1,-0.31865,0.00326,0.1,-0.31926,0.00281,0.1,-0.31992,0.00242,0.1,-0.32061,0.00208,0.1,-0.32132,0.00179,0.1,-0.32207,0.00155,0.1,-0.32363,0.00118,0.1,-0.32524,0.00096,0.1,-0.32688,0.00084,0.1,-0.33008,0.00078,0.1,-0.33608,0.00078,0.1,-0.34208,0.00078,0.1,-0.34208,-0.01122,0.1,-0.13808,-0.01122,0.1]);
IndexedFaceSet244.coord = Coordinate245;

let Normal246 = browser.currentScene.createNode("Normal");
Normal246.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet244.normal = Normal246;

Shape242.geometry = IndexedFaceSet244;

Transform5.children[47] = Shape242;

let Shape247 = browser.currentScene.createNode("Shape");
let Appearance248 = browser.currentScene.createNode("Appearance");
Appearance248.USE = "charactersWebAppearance";
Shape247.appearance = Appearance248;

let IndexedFaceSet249 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet249.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet249.solid = False;
let Coordinate250 = browser.currentScene.createNode("Coordinate");
Coordinate250.point = new MFVec3f(new float[-0.35108,0.23778,0.1,-0.35108,0.22578,0.1,-0.35108,0.22578,0,-0.35108,0.23778,0]);
IndexedFaceSet249.coord = Coordinate250;

let Normal251 = browser.currentScene.createNode("Normal");
Normal251.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet249.normal = Normal251;

Shape247.geometry = IndexedFaceSet249;

Transform5.children[48] = Shape247;

let Shape252 = browser.currentScene.createNode("Shape");
let Appearance253 = browser.currentScene.createNode("Appearance");
Appearance253.USE = "charactersWebAppearance";
Shape252.appearance = Appearance253;

let IndexedFaceSet254 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet254.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,6,-1,7,8,4,-1,10,2,9,-1,9,3,8,-1,4,5,6,-1]);
IndexedFaceSet254.solid = False;
let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[-0.35108,0.22578,0.1,-0.35393,0.22453,0.1,-0.35692,0.22359,0.1,-0.35998,0.22299,0.1,-0.36153,0.22283,0.1,-0.36308,0.22278,0.1,-0.36308,0.22278,0,-0.36153,0.22283,0,-0.35998,0.22299,0,-0.35692,0.22359,0,-0.35393,0.22453,0,-0.35108,0.22578,0]);
IndexedFaceSet254.coord = Coordinate255;

let Normal256 = browser.currentScene.createNode("Normal");
Normal256.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.35262,-0.93577,0,0.24866,-0.96859,0,0.13201,-0.99125,0,0.06804,-0.99768,0,0,-1,0,0,-1,0,0.06804,-0.99768,0,0.13201,-0.99125,0,0.24866,-0.96859,0,0.35262,-0.93577,0,0.44721,-0.89443,0]);
IndexedFaceSet254.normal = Normal256;

Shape252.geometry = IndexedFaceSet254;

Transform5.children[49] = Shape252;

let Shape257 = browser.currentScene.createNode("Shape");
let Appearance258 = browser.currentScene.createNode("Appearance");
Appearance258.USE = "charactersWebAppearance";
Shape257.appearance = Appearance258;

let IndexedFaceSet259 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet259.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1]);
IndexedFaceSet259.solid = False;
let Coordinate260 = browser.currentScene.createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[-0.36308,0.22278,0.1,-0.36783,0.22013,0.1,-0.37005,0.21856,0.1,-0.37208,0.21678,0.1,-0.37208,0.21678,0,-0.37005,0.21856,0,-0.36783,0.22013,0,-0.36308,0.22278,0]);
IndexedFaceSet259.coord = Coordinate260;

let Normal261 = browser.currentScene.createNode("Normal");
Normal261.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.53972,-0.84184,0,0.61587,-0.78785,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.61587,-0.78785,0,0.53972,-0.84184,0,0.44721,-0.89443,0]);
IndexedFaceSet259.normal = Normal261;

Shape257.geometry = IndexedFaceSet259;

Transform5.children[50] = Shape257;

let Shape262 = browser.currentScene.createNode("Shape");
let Appearance263 = browser.currentScene.createNode("Appearance");
Appearance263.USE = "charactersWebAppearance";
Shape262.appearance = Appearance263;

let IndexedFaceSet264 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet264.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,11,-1,12,13,9,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,9,10,11,-1]);
IndexedFaceSet264.solid = False;
let Coordinate265 = browser.currentScene.createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[-0.37208,0.21678,0.1,-0.37387,0.21612,0.1,-0.37564,0.21533,0.1,-0.37737,0.21441,0.1,-0.37902,0.21336,0.1,-0.38055,0.21217,0.1,-0.38193,0.21085,0.1,-0.38255,0.21013,0.1,-0.38312,0.20938,0.1,-0.38363,0.2086,0.1,-0.38408,0.20778,0.1,-0.38408,0.20778,0,-0.38363,0.2086,0,-0.38312,0.20938,0,-0.38255,0.21013,0,-0.38193,0.21085,0,-0.38055,0.21217,0,-0.37902,0.21336,0,-0.37737,0.21441,0,-0.37564,0.21533,0,-0.37387,0.21612,0,-0.37208,0.21678,0]);
IndexedFaceSet264.coord = Coordinate265;

let Normal266 = browser.currentScene.createNode("Normal");
Normal266.vector = new MFVec3f(new float[0.31623,-0.94868,0,0.37459,-0.92719,0,0.43622,-0.89984,0,0.50255,-0.86455,0,0.57451,-0.8185,0,0.65224,-0.75801,0,0.73445,-0.67867,0,0.77619,-0.6305,0,0.81744,-0.57601,0,0.85724,-0.51492,0,0.89443,-0.44721,0,0.89443,-0.44721,0,0.85724,-0.51492,0,0.81744,-0.57601,0,0.77619,-0.6305,0,0.73445,-0.67867,0,0.65224,-0.75801,0,0.57451,-0.8185,0,0.50255,-0.86455,0,0.43622,-0.89984,0,0.37459,-0.92719,0,0.31623,-0.94868,0]);
IndexedFaceSet264.normal = Normal266;

Shape262.geometry = IndexedFaceSet264;

Transform5.children[51] = Shape262;

let Shape267 = browser.currentScene.createNode("Shape");
let Appearance268 = browser.currentScene.createNode("Appearance");
Appearance268.USE = "charactersWebAppearance";
Shape267.appearance = Appearance268;

let IndexedFaceSet269 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet269.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet269.solid = False;
let Coordinate270 = browser.currentScene.createNode("Coordinate");
Coordinate270.point = new MFVec3f(new float[-0.38408,0.20778,0.1,-0.38519,0.20653,0.1,-0.38615,0.20516,0.1,-0.387,0.20371,0.1,-0.38774,0.20218,0.1,-0.39008,0.19578,0.1,-0.39008,0.19578,0,-0.38774,0.20218,0,-0.387,0.20371,0,-0.38615,0.20516,0,-0.38519,0.20653,0,-0.38408,0.20778,0]);
IndexedFaceSet269.coord = Coordinate270;

let Normal271 = browser.currentScene.createNode("Normal");
Normal271.vector = new MFVec3f(new float[0.7071,-0.70711,0,0.78518,-0.61927,0,0.84328,-0.53747,0,0.88459,-0.46637,0,0.91283,-0.40834,0,0.94868,-0.31623,0,0.94868,-0.31623,0,0.91283,-0.40834,0,0.88459,-0.46637,0,0.84328,-0.53747,0,0.78518,-0.61927,0,0.7071,-0.70711,0]);
IndexedFaceSet269.normal = Normal271;

Shape267.geometry = IndexedFaceSet269;

Transform5.children[52] = Shape267;

let Shape272 = browser.currentScene.createNode("Shape");
let Appearance273 = browser.currentScene.createNode("Appearance");
Appearance273.USE = "charactersWebAppearance";
Shape272.appearance = Appearance273;

let IndexedFaceSet274 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet274.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet274.solid = False;
let Coordinate275 = browser.currentScene.createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[-0.39008,0.19578,0.1,-0.40456,0.14762,0.1,-0.42008,0.09978,0.1,-0.42008,0.09978,0,-0.40456,0.14762,0,-0.39008,0.19578,0]);
IndexedFaceSet274.coord = Coordinate275;

let Normal276 = browser.currentScene.createNode("Normal");
Normal276.vector = new MFVec3f(new float[0.96152,-0.27472,0,0.95405,-0.29964,0,0.94868,-0.31623,0,0.94868,-0.31623,0,0.95405,-0.29964,0,0.96152,-0.27472,0]);
IndexedFaceSet274.normal = Normal276;

Shape272.geometry = IndexedFaceSet274;

Transform5.children[53] = Shape272;

let Shape277 = browser.currentScene.createNode("Shape");
let Appearance278 = browser.currentScene.createNode("Appearance");
Appearance278.USE = "charactersWebAppearance";
Shape277.appearance = Appearance278;

let IndexedFaceSet279 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet279.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet279.solid = False;
let Coordinate280 = browser.currentScene.createNode("Coordinate");
Coordinate280.point = new MFVec3f(new float[-0.42008,0.09978,0.1,-0.43714,0.04248,0.1,-0.45608,-0.01422,0.1,-0.45608,-0.01422,0,-0.43714,0.04248,0,-0.42008,0.09978,0]);
IndexedFaceSet279.coord = Coordinate280;

let Normal281 = browser.currentScene.createNode("Normal");
Normal281.vector = new MFVec3f(new float[0.96352,-0.26764,0,0.95327,-0.30212,0,0.94386,-0.33035,0,0.94386,-0.33035,0,0.95327,-0.30212,0,0.96352,-0.26764,0]);
IndexedFaceSet279.normal = Normal281;

Shape277.geometry = IndexedFaceSet279;

Transform5.children[54] = Shape277;

let Shape282 = browser.currentScene.createNode("Shape");
let Appearance283 = browser.currentScene.createNode("Appearance");
Appearance283.USE = "charactersWebAppearance";
Shape282.appearance = Appearance283;

let IndexedFaceSet284 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet284.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet284.solid = False;
let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.45608,-0.01422,0.1,-0.47108,-0.01422,0.1,-0.47108,-0.01422,0,-0.45608,-0.01422,0]);
IndexedFaceSet284.coord = Coordinate285;

let Normal286 = browser.currentScene.createNode("Normal");
Normal286.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet284.normal = Normal286;

Shape282.geometry = IndexedFaceSet284;

Transform5.children[55] = Shape282;

let Shape287 = browser.currentScene.createNode("Shape");
let Appearance288 = browser.currentScene.createNode("Appearance");
Appearance288.USE = "charactersWebAppearance";
Shape287.appearance = Appearance288;

let IndexedFaceSet289 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet289.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet289.solid = False;
let Coordinate290 = browser.currentScene.createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[-0.47108,-0.01422,0.1,-0.53408,0.17478,0.1,-0.53408,0.17478,0,-0.47108,-0.01422,0]);
IndexedFaceSet289.coord = Coordinate290;

let Normal291 = browser.currentScene.createNode("Normal");
Normal291.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.94868,-0.31623,0,-0.94868,-0.31623,0,-0.94868,-0.31623,0]);
IndexedFaceSet289.normal = Normal291;

Shape287.geometry = IndexedFaceSet289;

Transform5.children[56] = Shape287;

let Shape292 = browser.currentScene.createNode("Shape");
let Appearance293 = browser.currentScene.createNode("Appearance");
Appearance293.USE = "charactersWebAppearance";
Shape292.appearance = Appearance293;

let IndexedFaceSet294 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet294.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet294.solid = False;
let Coordinate295 = browser.currentScene.createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[-0.53408,0.17478,0.1,-0.60008,-0.01422,0.1,-0.60008,-0.01422,0,-0.53408,0.17478,0]);
IndexedFaceSet294.coord = Coordinate295;

let Normal296 = browser.currentScene.createNode("Normal");
Normal296.vector = new MFVec3f(new float[0.94409,-0.32968,0,0.94409,-0.32968,0,0.94409,-0.32968,0,0.94409,-0.32968,0]);
IndexedFaceSet294.normal = Normal296;

Shape292.geometry = IndexedFaceSet294;

Transform5.children[57] = Shape292;

let Shape297 = browser.currentScene.createNode("Shape");
let Appearance298 = browser.currentScene.createNode("Appearance");
Appearance298.USE = "charactersWebAppearance";
Shape297.appearance = Appearance298;

let IndexedFaceSet299 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet299.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet299.solid = False;
let Coordinate300 = browser.currentScene.createNode("Coordinate");
Coordinate300.point = new MFVec3f(new float[-0.60008,-0.01422,0.1,-0.61508,-0.01422,0.1,-0.61508,-0.01422,0,-0.60008,-0.01422,0]);
IndexedFaceSet299.coord = Coordinate300;

let Normal301 = browser.currentScene.createNode("Normal");
Normal301.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet299.normal = Normal301;

Shape297.geometry = IndexedFaceSet299;

Transform5.children[58] = Shape297;

let Shape302 = browser.currentScene.createNode("Shape");
let Appearance303 = browser.currentScene.createNode("Appearance");
Appearance303.USE = "charactersWebAppearance";
Shape302.appearance = Appearance303;

let IndexedFaceSet304 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet304.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet304.solid = False;
let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[-0.61508,-0.01422,0.1,-0.63348,0.04866,0.1,-0.65108,0.11178,0.1,-0.65108,0.11178,0,-0.63348,0.04866,0,-0.61508,-0.01422,0]);
IndexedFaceSet304.coord = Coordinate305;

let Normal306 = browser.currentScene.createNode("Normal");
Normal306.vector = new MFVec3f(new float[-0.95783,-0.28735,0,-0.9616,-0.27445,0,-0.96476,-0.26312,0,-0.96476,-0.26312,0,-0.9616,-0.27445,0,-0.95783,-0.28735,0]);
IndexedFaceSet304.normal = Normal306;

Shape302.geometry = IndexedFaceSet304;

Transform5.children[59] = Shape302;

let Shape307 = browser.currentScene.createNode("Shape");
let Appearance308 = browser.currentScene.createNode("Appearance");
Appearance308.USE = "charactersWebAppearance";
Shape307.appearance = Appearance308;

let IndexedFaceSet309 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet309.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet309.solid = False;
let Coordinate310 = browser.currentScene.createNode("Coordinate");
Coordinate310.point = new MFVec3f(new float[-0.65108,0.11178,0.1,-0.66332,0.15671,0.1,-0.67508,0.20178,0.1,-0.67508,0.20178,0,-0.66332,0.15671,0,-0.65108,0.11178,0]);
IndexedFaceSet309.coord = Coordinate310;

let Normal311 = browser.currentScene.createNode("Normal");
Normal311.vector = new MFVec3f(new float[-0.96476,-0.26312,0,-0.96559,-0.26007,0,-0.97014,-0.24253,0,-0.97014,-0.24253,0,-0.96559,-0.26007,0,-0.96476,-0.26312,0]);
IndexedFaceSet309.normal = Normal311;

Shape307.geometry = IndexedFaceSet309;

Transform5.children[60] = Shape307;

let Shape312 = browser.currentScene.createNode("Shape");
let Appearance313 = browser.currentScene.createNode("Appearance");
Appearance313.USE = "charactersWebAppearance";
Shape312.appearance = Appearance313;

let IndexedFaceSet314 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet314.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet314.solid = False;
let Coordinate315 = browser.currentScene.createNode("Coordinate");
Coordinate315.point = new MFVec3f(new float[-0.67508,0.20178,0.1,-0.67687,0.20381,0.1,-0.67843,0.20602,0.1,-0.68108,0.21078,0.1,-0.68108,0.21078,0,-0.67843,0.20602,0,-0.67687,0.20381,0,-0.67508,0.20178,0]);
IndexedFaceSet314.coord = Coordinate315;

let Normal316 = browser.currentScene.createNode("Normal");
Normal316.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.78785,-0.61587,0,-0.84184,-0.53972,0,-0.89443,-0.44721,0,-0.89443,-0.44721,0,-0.84184,-0.53972,0,-0.78785,-0.61587,0,-0.70711,-0.70711,0]);
IndexedFaceSet314.normal = Normal316;

Shape312.geometry = IndexedFaceSet314;

Transform5.children[61] = Shape312;

let Shape317 = browser.currentScene.createNode("Shape");
let Appearance318 = browser.currentScene.createNode("Appearance");
Appearance318.USE = "charactersWebAppearance";
Shape317.appearance = Appearance318;

let IndexedFaceSet319 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet319.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet319.solid = False;
let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.68108,0.21078,0.1,-0.68311,0.21256,0.1,-0.68533,0.21413,0.1,-0.69008,0.21678,0.1,-0.69008,0.21678,0,-0.68533,0.21413,0,-0.68311,0.21256,0,-0.68108,0.21078,0]);
IndexedFaceSet319.coord = Coordinate320;

let Normal321 = browser.currentScene.createNode("Normal");
Normal321.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.61587,-0.78785,0,-0.53972,-0.84184,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.53972,-0.84184,0,-0.61587,-0.78785,0,-0.70711,-0.70711,0]);
IndexedFaceSet319.normal = Normal321;

Shape317.geometry = IndexedFaceSet319;

Transform5.children[62] = Shape317;

let Shape322 = browser.currentScene.createNode("Shape");
let Appearance323 = browser.currentScene.createNode("Appearance");
Appearance323.USE = "charactersWebAppearance";
Shape322.appearance = Appearance323;

let IndexedFaceSet324 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet324.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet324.solid = False;
let Coordinate325 = browser.currentScene.createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[-0.69008,0.21678,0.1,-0.69211,0.21856,0.1,-0.69433,0.22013,0.1,-0.69908,0.22278,0.1,-0.69908,0.22278,0,-0.69433,0.22013,0,-0.69211,0.21856,0,-0.69008,0.21678,0]);
IndexedFaceSet324.coord = Coordinate325;

let Normal326 = browser.currentScene.createNode("Normal");
Normal326.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.61587,-0.78785,0,-0.53972,-0.84184,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.53972,-0.84184,0,-0.61587,-0.78785,0,-0.70711,-0.70711,0]);
IndexedFaceSet324.normal = Normal326;

Shape322.geometry = IndexedFaceSet324;

Transform5.children[63] = Shape322;

let Shape327 = browser.currentScene.createNode("Shape");
let Appearance328 = browser.currentScene.createNode("Appearance");
Appearance328.USE = "charactersWebAppearance";
Shape327.appearance = Appearance328;

let IndexedFaceSet329 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet329.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet329.solid = False;
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[-0.69908,0.22278,0.1,-0.70028,0.22281,0.1,-0.70151,0.22293,0.1,-0.70273,0.22314,0.1,-0.70393,0.22344,0.1,-0.70508,0.22385,0.1,-0.70618,0.22437,0.1,-0.70718,0.22501,0.1,-0.70808,0.22578,0.1,-0.70808,0.22578,0,-0.70718,0.22501,0,-0.70618,0.22437,0,-0.70508,0.22385,0,-0.70393,0.22344,0,-0.70273,0.22314,0,-0.70151,0.22293,0,-0.70028,0.22281,0,-0.69908,0.22278,0]);
IndexedFaceSet329.coord = Coordinate330;

let Normal331 = browser.currentScene.createNode("Normal");
Normal331.vector = new MFVec3f(new float[0,-1,0,-0.06216,-0.99807,0,-0.12928,-0.99161,0,-0.20336,-0.9791,0,-0.28619,-0.95817,0,-0.37907,-0.92537,0,-0.48214,-0.87609,0,-0.59334,-0.80495,0,-0.70711,-0.7071,0,-0.70711,-0.7071,0,-0.59334,-0.80495,0,-0.48214,-0.87609,0,-0.37907,-0.92537,0,-0.28619,-0.95817,0,-0.20336,-0.9791,0,-0.12928,-0.99161,0,-0.06216,-0.99807,0,0,-1,0]);
IndexedFaceSet329.normal = Normal331;

Shape327.geometry = IndexedFaceSet329;

Transform5.children[64] = Shape327;

let Shape332 = browser.currentScene.createNode("Shape");
let Appearance333 = browser.currentScene.createNode("Appearance");
Appearance333.USE = "charactersWebAppearance";
Shape332.appearance = Appearance333;

let IndexedFaceSet334 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet334.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet334.solid = False;
let Coordinate335 = browser.currentScene.createNode("Coordinate");
Coordinate335.point = new MFVec3f(new float[-0.70808,0.22578,0.1,-0.70808,0.23778,0.1,-0.70808,0.23778,0,-0.70808,0.22578,0]);
IndexedFaceSet334.coord = Coordinate335;

let Normal336 = browser.currentScene.createNode("Normal");
Normal336.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet334.normal = Normal336;

Shape332.geometry = IndexedFaceSet334;

Transform5.children[65] = Shape332;

let Shape337 = browser.currentScene.createNode("Shape");
let Appearance338 = browser.currentScene.createNode("Appearance");
Appearance338.USE = "charactersWebAppearance";
Shape337.appearance = Appearance338;

let IndexedFaceSet339 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet339.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet339.solid = False;
let Coordinate340 = browser.currentScene.createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[-0.70808,0.23778,0.1,-0.60908,0.23778,0.1,-0.60908,0.23778,0,-0.70808,0.23778,0]);
IndexedFaceSet339.coord = Coordinate340;

let Normal341 = browser.currentScene.createNode("Normal");
Normal341.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet339.normal = Normal341;

Shape337.geometry = IndexedFaceSet339;

Transform5.children[66] = Shape337;

let Shape342 = browser.currentScene.createNode("Shape");
let Appearance343 = browser.currentScene.createNode("Appearance");
Appearance343.USE = "charactersWebAppearance";
Shape342.appearance = Appearance343;

let IndexedFaceSet344 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet344.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet344.solid = False;
let Coordinate345 = browser.currentScene.createNode("Coordinate");
Coordinate345.point = new MFVec3f(new float[-0.60908,0.23778,0.1,-0.60908,0.22578,0.1,-0.60908,0.22578,0,-0.60908,0.23778,0]);
IndexedFaceSet344.coord = Coordinate345;

let Normal346 = browser.currentScene.createNode("Normal");
Normal346.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet344.normal = Normal346;

Shape342.geometry = IndexedFaceSet344;

Transform5.children[67] = Shape342;

let Shape347 = browser.currentScene.createNode("Shape");
let Appearance348 = browser.currentScene.createNode("Appearance");
Appearance348.USE = "charactersWebAppearance";
Shape347.appearance = Appearance348;

let IndexedFaceSet349 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet349.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1]);
IndexedFaceSet349.solid = False;
let Coordinate350 = browser.currentScene.createNode("Coordinate");
Coordinate350.point = new MFVec3f(new float[-0.60908,0.22578,0.1,-0.6195,0.22363,0.1,-0.62478,0.223,0.1,-0.63008,0.22278,0.1,-0.63008,0.22278,0,-0.62478,0.223,0,-0.6195,0.22363,0,-0.60908,0.22578,0]);
IndexedFaceSet349.coord = Coordinate350;

let Normal351 = browser.currentScene.createNode("Normal");
Normal351.vector = new MFVec3f(new float[0.24254,-0.97014,0,0.15091,-0.98855,0,0.08318,-0.99653,0,0,-1,0,0,-1,0,0.08318,-0.99653,0,0.15091,-0.98855,0,0.24254,-0.97014,0]);
IndexedFaceSet349.normal = Normal351;

Shape347.geometry = IndexedFaceSet349;

Transform5.children[68] = Shape347;

let Shape352 = browser.currentScene.createNode("Shape");
let Appearance353 = browser.currentScene.createNode("Appearance");
Appearance353.USE = "charactersWebAppearance";
Shape352.appearance = Appearance353;

let IndexedFaceSet354 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet354.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,12,-1,13,14,10,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,10,11,12,-1]);
IndexedFaceSet354.solid = False;
let Coordinate355 = browser.currentScene.createNode("Coordinate");
Coordinate355.point = new MFVec3f(new float[-0.63008,0.22278,0.1,-0.634,0.22156,0.1,-0.63601,0.22072,0.1,-0.6379,0.2197,0.1,-0.63877,0.21912,0.1,-0.63956,0.2185,0.1,-0.64027,0.21784,0.1,-0.64089,0.21712,0.1,-0.64139,0.21636,0.1,-0.64176,0.21555,0.1,-0.642,0.21469,0.1,-0.64208,0.21378,0.1,-0.64208,0.21378,0,-0.642,0.21469,0,-0.64176,0.21555,0,-0.64139,0.21636,0,-0.64089,0.21712,0,-0.64027,0.21784,0,-0.63956,0.2185,0,-0.63877,0.21912,0,-0.6379,0.2197,0,-0.63601,0.22072,0,-0.634,0.22156,0,-0.63008,0.22278,0]);
IndexedFaceSet354.coord = Coordinate355;

let Normal356 = browser.currentScene.createNode("Normal");
Normal356.vector = new MFVec3f(new float[0.24253,-0.97014,0,0.35284,-0.93568,0,0.42786,-0.90384,0,0.5242,-0.8516,0,0.58238,-0.81292,0,0.64785,-0.76177,0,0.72007,-0.6939,0,0.79668,-0.6044,0,0.87242,-0.48875,0,0.9385,-0.34528,0,0.98396,-0.17838,0,1,0,0,1,0,0,0.98396,-0.17838,0,0.9385,-0.34528,0,0.87242,-0.48875,0,0.79668,-0.6044,0,0.72007,-0.6939,0,0.64785,-0.76177,0,0.58238,-0.81292,0,0.5242,-0.8516,0,0.42786,-0.90384,0,0.35284,-0.93568,0,0.24253,-0.97014,0]);
IndexedFaceSet354.normal = Normal356;

Shape352.geometry = IndexedFaceSet354;

Transform5.children[69] = Shape352;

let Shape357 = browser.currentScene.createNode("Shape");
let Appearance358 = browser.currentScene.createNode("Appearance");
Appearance358.USE = "charactersWebAppearance";
Shape357.appearance = Appearance358;

let IndexedFaceSet359 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet359.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet359.solid = False;
let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.point = new MFVec3f(new float[-0.64208,0.21378,0.1,-0.64058,0.21228,0.1,-0.63908,0.21078,0.1,-0.63908,0.21078,0,-0.64058,0.21228,0,-0.64208,0.21378,0]);
IndexedFaceSet359.coord = Coordinate360;

let Normal361 = browser.currentScene.createNode("Normal");
Normal361.vector = new MFVec3f(new float[0.70711,0.70711,0,0.70711,0.70711,0,0.70711,0.70711,0,0.70711,0.70711,0,0.70711,0.70711,0,0.70711,0.70711,0]);
IndexedFaceSet359.normal = Normal361;

Shape357.geometry = IndexedFaceSet359;

Transform5.children[70] = Shape357;

let Shape362 = browser.currentScene.createNode("Shape");
let Appearance363 = browser.currentScene.createNode("Appearance");
Appearance363.USE = "charactersWebAppearance";
Shape362.appearance = Appearance363;

let IndexedFaceSet364 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet364.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet364.solid = False;
let Coordinate365 = browser.currentScene.createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[-0.63908,0.21078,0.1,-0.63908,0.20778,0.1,-0.63908,0.20478,0.1,-0.63908,0.20478,0,-0.63908,0.21078,0]);
IndexedFaceSet364.coord = Coordinate365;

let Normal366 = browser.currentScene.createNode("Normal");
Normal366.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet364.normal = Normal366;

Shape362.geometry = IndexedFaceSet364;

Transform5.children[71] = Shape362;

let Shape367 = browser.currentScene.createNode("Shape");
let Appearance368 = browser.currentScene.createNode("Appearance");
Appearance368.USE = "charactersWebAppearance";
Shape367.appearance = Appearance368;

let IndexedFaceSet369 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet369.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet369.solid = False;
let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[-0.63908,0.20478,0.1,-0.63238,0.17907,0.1,-0.62408,0.15378,0.1,-0.62408,0.15378,0,-0.63238,0.17907,0,-0.63908,0.20478,0]);
IndexedFaceSet369.coord = Coordinate370;

let Normal371 = browser.currentScene.createNode("Normal");
Normal371.vector = new MFVec3f(new float[0.98058,0.19611,0,0.95556,0.2948,0,0.94868,0.31623,0,0.94868,0.31623,0,0.95556,0.2948,0,0.98058,0.19611,0]);
IndexedFaceSet369.normal = Normal371;

Shape367.geometry = IndexedFaceSet369;

Transform5.children[72] = Shape367;

let Shape372 = browser.currentScene.createNode("Shape");
let Appearance373 = browser.currentScene.createNode("Appearance");
Appearance373.USE = "charactersWebAppearance";
Shape372.appearance = Appearance373;

let IndexedFaceSet374 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet374.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet374.solid = False;
let Coordinate375 = browser.currentScene.createNode("Coordinate");
Coordinate375.point = new MFVec3f(new float[-0.62408,0.15378,0.1,-0.60931,0.10121,0.1,-0.59408,0.04878,0.1,-0.59408,0.04878,0,-0.60931,0.10121,0,-0.62408,0.15378,0]);
IndexedFaceSet374.coord = Coordinate375;

let Normal376 = browser.currentScene.createNode("Normal");
Normal376.vector = new MFVec3f(new float[0.96476,0.26312,0,0.96107,0.2763,0,0.96,0.28,0,0.96,0.28,0,0.96107,0.2763,0,0.96476,0.26312,0]);
IndexedFaceSet374.normal = Normal376;

Shape372.geometry = IndexedFaceSet374;

Transform5.children[73] = Shape372;

let Shape377 = browser.currentScene.createNode("Shape");
let Appearance378 = browser.currentScene.createNode("Appearance");
Appearance378.USE = "charactersWebAppearance";
Shape377.appearance = Appearance378;

let IndexedFaceSet379 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet379.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet379.solid = False;
let Coordinate380 = browser.currentScene.createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[-0.59408,0.04878,0.1,-0.53408,0.23478,0.1,-0.53408,0.23478,0,-0.59408,0.04878,0]);
IndexedFaceSet379.coord = Coordinate380;

let Normal381 = browser.currentScene.createNode("Normal");
Normal381.vector = new MFVec3f(new float[-0.95171,0.307,0,-0.95171,0.307,0,-0.95171,0.307,0,-0.95171,0.307,0]);
IndexedFaceSet379.normal = Normal381;

Shape377.geometry = IndexedFaceSet379;

Transform5.children[74] = Shape377;

let Shape382 = browser.currentScene.createNode("Shape");
let Appearance383 = browser.currentScene.createNode("Appearance");
Appearance383.USE = "charactersWebAppearance";
Shape382.appearance = Appearance383;

let IndexedFaceSet384 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet384.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet384.solid = False;
let Coordinate385 = browser.currentScene.createNode("Coordinate");
Coordinate385.point = new MFVec3f(new float[-0.53408,0.23478,0.1,-0.51608,0.23478,0.1,-0.51608,0.23478,0,-0.53408,0.23478,0]);
IndexedFaceSet384.coord = Coordinate385;

let Normal386 = browser.currentScene.createNode("Normal");
Normal386.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet384.normal = Normal386;

Shape382.geometry = IndexedFaceSet384;

Transform5.children[75] = Shape382;

let Shape387 = browser.currentScene.createNode("Shape");
let Appearance388 = browser.currentScene.createNode("Appearance");
Appearance388.USE = "charactersWebAppearance";
Shape387.appearance = Appearance388;

let IndexedFaceSet389 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet389.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet389.solid = False;
let Coordinate390 = browser.currentScene.createNode("Coordinate");
Coordinate390.point = new MFVec3f(new float[-0.51608,0.23478,0.1,-0.45008,0.04278,0.1,-0.45008,0.04278,0,-0.51608,0.23478,0]);
IndexedFaceSet389.coord = Coordinate390;

let Normal391 = browser.currentScene.createNode("Normal");
Normal391.vector = new MFVec3f(new float[0.94569,0.32508,0,0.94569,0.32508,0,0.94569,0.32508,0,0.94569,0.32508,0]);
IndexedFaceSet389.normal = Normal391;

Shape387.geometry = IndexedFaceSet389;

Transform5.children[76] = Shape387;

let Shape392 = browser.currentScene.createNode("Shape");
let Appearance393 = browser.currentScene.createNode("Appearance");
Appearance393.USE = "charactersWebAppearance";
Shape392.appearance = Appearance393;

let IndexedFaceSet394 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet394.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet394.solid = False;
let Coordinate395 = browser.currentScene.createNode("Coordinate");
Coordinate395.point = new MFVec3f(new float[-0.45008,0.04278,0.1,-0.43964,0.08179,0.1,-0.42908,0.12078,0.1,-0.42908,0.12078,0,-0.43964,0.08179,0,-0.45008,0.04278,0]);
IndexedFaceSet394.coord = Coordinate395;

let Normal396 = browser.currentScene.createNode("Normal");
Normal396.vector = new MFVec3f(new float[-0.96623,0.25766,0,-0.96567,0.25976,0,-0.96476,0.26312,0,-0.96476,0.26312,0,-0.96567,0.25976,0,-0.96623,0.25766,0]);
IndexedFaceSet394.normal = Normal396;

Shape392.geometry = IndexedFaceSet394;

Transform5.children[77] = Shape392;

let Shape397 = browser.currentScene.createNode("Shape");
let Appearance398 = browser.currentScene.createNode("Appearance");
Appearance398.USE = "charactersWebAppearance";
Shape397.appearance = Appearance398;

let IndexedFaceSet399 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet399.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet399.solid = False;
let Coordinate400 = browser.currentScene.createNode("Coordinate");
Coordinate400.point = new MFVec3f(new float[-0.42908,0.12078,0.1,-0.42166,0.1478,0.1,-0.41408,0.17478,0.1,-0.41408,0.17478,0,-0.42166,0.1478,0,-0.42908,0.12078,0]);
IndexedFaceSet399.coord = Coordinate400;

let Normal401 = browser.currentScene.createNode("Normal");
Normal401.vector = new MFVec3f(new float[-0.96476,0.26312,0,-0.9637,0.267,0,-0.96152,0.27472,0,-0.96152,0.27472,0,-0.9637,0.267,0,-0.96476,0.26312,0]);
IndexedFaceSet399.normal = Normal401;

Shape397.geometry = IndexedFaceSet399;

Transform5.children[78] = Shape397;

let Shape402 = browser.currentScene.createNode("Shape");
let Appearance403 = browser.currentScene.createNode("Appearance");
Appearance403.USE = "charactersWebAppearance";
Shape402.appearance = Appearance403;

let IndexedFaceSet404 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet404.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet404.solid = False;
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[-0.41408,0.17478,0.1,-0.4101,0.18662,0.1,-0.40865,0.19265,0.1,-0.40823,0.1957,0.1,-0.40808,0.19878,0.1,-0.40808,0.19878,0,-0.40823,0.1957,0,-0.40865,0.19265,0,-0.4101,0.18662,0,-0.41408,0.17478,0]);
IndexedFaceSet404.coord = Coordinate405;

let Normal406 = browser.currentScene.createNode("Normal");
Normal406.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.95936,0.28219,0,-0.98467,0.17442,0,-0.99544,0.09537,0,-1,0,0,-1,0,0,-0.99544,0.09537,0,-0.98467,0.17442,0,-0.95936,0.28219,0,-0.94868,0.31623,0]);
IndexedFaceSet404.normal = Normal406;

Shape402.geometry = IndexedFaceSet404;

Transform5.children[79] = Shape402;

let Shape407 = browser.currentScene.createNode("Shape");
let Appearance408 = browser.currentScene.createNode("Appearance");
Appearance408.USE = "charactersWebAppearance";
Shape407.appearance = Appearance408;

let IndexedFaceSet409 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet409.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet409.solid = False;
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[-0.40808,0.19878,0.1,-0.40808,0.20328,0.1,-0.40808,0.20778,0.1,-0.40808,0.20778,0,-0.40808,0.19878,0]);
IndexedFaceSet409.coord = Coordinate410;

let Normal411 = browser.currentScene.createNode("Normal");
Normal411.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet409.normal = Normal411;

Shape407.geometry = IndexedFaceSet409;

Transform5.children[80] = Shape407;

let Shape412 = browser.currentScene.createNode("Shape");
let Appearance413 = browser.currentScene.createNode("Appearance");
Appearance413.USE = "charactersWebAppearance";
Shape412.appearance = Appearance413;

let IndexedFaceSet414 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet414.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet414.solid = False;
let Coordinate415 = browser.currentScene.createNode("Coordinate");
Coordinate415.point = new MFVec3f(new float[-0.40808,0.20778,0.1,-0.40811,0.20861,0.1,-0.40821,0.20945,0.1,-0.40836,0.21027,0.1,-0.40857,0.21109,0.1,-0.40914,0.21271,0.1,-0.40989,0.21427,0.1,-0.41079,0.21577,0.1,-0.41181,0.2172,0.1,-0.41291,0.21854,0.1,-0.41408,0.21978,0.1,-0.41408,0.21978,0,-0.41291,0.21854,0,-0.41181,0.2172,0,-0.41079,0.21577,0,-0.40989,0.21427,0,-0.40914,0.21271,0,-0.40857,0.21109,0,-0.40836,0.21027,0,-0.40821,0.20945,0,-0.40811,0.20861,0,-0.40808,0.20778,0]);
IndexedFaceSet414.coord = Coordinate415;

let Normal416 = browser.currentScene.createNode("Normal");
Normal416.vector = new MFVec3f(new float[-1,0,0,-0.99702,-0.07719,0,-0.98874,-0.14963,0,-0.97621,-0.21681,0,-0.96042,-0.27856,0,-0.92238,-0.38629,0,-0.8799,-0.47516,0,-0.83613,-0.54853,0,-0.79259,-0.60975,0,-0.7497,-0.66178,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.7497,-0.66178,0,-0.79259,-0.60975,0,-0.83613,-0.54853,0,-0.8799,-0.47516,0,-0.92238,-0.38629,0,-0.96042,-0.27856,0,-0.97621,-0.21681,0,-0.98874,-0.14963,0,-0.99702,-0.07719,0,-1,0,0]);
IndexedFaceSet414.normal = Normal416;

Shape412.geometry = IndexedFaceSet414;

Transform5.children[81] = Shape412;

let Shape417 = browser.currentScene.createNode("Shape");
let Appearance418 = browser.currentScene.createNode("Appearance");
Appearance418.USE = "charactersWebAppearance";
Shape417.appearance = Appearance418;

let IndexedFaceSet419 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet419.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet419.solid = False;
let Coordinate420 = browser.currentScene.createNode("Coordinate");
Coordinate420.point = new MFVec3f(new float[-0.41408,0.21978,0.1,-0.42745,0.2233,0.1,-0.44108,0.22578,0.1,-0.44108,0.22578,0,-0.42745,0.2233,0,-0.41408,0.21978,0]);
IndexedFaceSet419.coord = Coordinate420;

let Normal421 = browser.currentScene.createNode("Normal");
Normal421.vector = new MFVec3f(new float[-0.31623,-0.94868,0,-0.20488,-0.97879,0,-0.1644,-0.98639,0,-0.1644,-0.98639,0,-0.20488,-0.97879,0,-0.31623,-0.94868,0]);
IndexedFaceSet419.normal = Normal421;

Shape417.geometry = IndexedFaceSet419;

Transform5.children[82] = Shape417;

let Shape422 = browser.currentScene.createNode("Shape");
let Appearance423 = browser.currentScene.createNode("Appearance");
Appearance423.USE = "charactersWebAppearance";
Shape422.appearance = Appearance423;

let IndexedFaceSet424 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet424.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet424.solid = False;
let Coordinate425 = browser.currentScene.createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[-0.44108,0.22578,0.1,-0.44108,0.23778,0.1,-0.44108,0.23778,0,-0.44108,0.22578,0]);
IndexedFaceSet424.coord = Coordinate425;

let Normal426 = browser.currentScene.createNode("Normal");
Normal426.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet424.normal = Normal426;

Shape422.geometry = IndexedFaceSet424;

Transform5.children[83] = Shape422;

let Shape427 = browser.currentScene.createNode("Shape");
let Appearance428 = browser.currentScene.createNode("Appearance");
Appearance428.USE = "charactersWebAppearance";
Shape427.appearance = Appearance428;

let IndexedFaceSet429 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet429.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet429.solid = False;
let Coordinate430 = browser.currentScene.createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[-0.44108,0.23778,0.1,-0.35108,0.23778,0.1,-0.35108,0.23778,0,-0.44108,0.23778,0]);
IndexedFaceSet429.coord = Coordinate430;

let Normal431 = browser.currentScene.createNode("Normal");
Normal431.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet429.normal = Normal431;

Shape427.geometry = IndexedFaceSet429;

Transform5.children[84] = Shape427;

let Shape432 = browser.currentScene.createNode("Shape");
let Appearance433 = browser.currentScene.createNode("Appearance");
Appearance433.USE = "charactersWebAppearance";
Shape432.appearance = Appearance433;

let IndexedFaceSet434 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet434.coordIndex = new MFInt32(new int[0,1,104,-1,104,1,103,-1,103,1,102,-1,102,1,101,-1,101,1,100,-1,100,1,99,-1,99,1,5,-1,98,5,95,-1,96,98,95,-1,96,97,98,-1,1,2,5,-1,5,2,4,-1,4,2,3,-1,95,5,94,-1,94,5,6,-1,7,94,6,-1,7,93,94,-1,7,8,93,-1,93,8,92,-1,92,8,9,-1,91,9,10,-1,90,10,89,-1,90,91,10,-1,92,9,91,-1,10,11,89,-1,89,11,88,-1,88,11,12,-1,86,12,13,-1,14,86,13,-1,14,85,86,-1,14,15,85,-1,85,15,84,-1,84,15,16,-1,83,16,17,-1,82,17,18,-1,19,82,18,-1,19,20,82,-1,82,20,21,-1,81,21,22,-1,23,81,22,-1,23,80,81,-1,23,24,80,-1,80,24,79,-1,79,24,25,-1,78,25,77,-1,78,79,25,-1,88,12,86,-1,87,88,86,-1,84,16,83,-1,83,17,82,-1,82,21,81,-1,77,25,76,-1,76,25,26,-1,27,76,26,-1,27,28,76,-1,76,28,75,-1,75,28,74,-1,74,28,73,-1,73,28,29,-1,72,29,30,-1,71,30,31,-1,70,31,32,-1,33,70,32,-1,33,36,70,-1,33,35,36,-1,33,34,35,-1,73,29,72,-1,72,30,71,-1,71,31,70,-1,37,67,36,-1,37,38,67,-1,67,38,39,-1,66,39,40,-1,65,40,41,-1,42,65,41,-1,42,63,65,-1,42,43,63,-1,63,43,62,-1,62,43,44,-1,52,44,45,-1,46,52,45,-1,46,51,52,-1,46,47,51,-1,51,47,48,-1,49,51,48,-1,49,50,51,-1,67,39,66,-1,66,40,65,-1,62,44,52,-1,61,52,60,-1,61,62,52,-1,53,54,52,-1,52,54,55,-1,56,52,55,-1,56,57,52,-1,52,57,58,-1,59,52,58,-1,59,60,52,-1,63,64,65,-1,67,68,36,-1,36,68,69,-1,70,36,69,-1,98,99,5,-1]);
IndexedFaceSet434.solid = False;
let Coordinate435 = browser.currentScene.createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[-0.35108,0.22578,0.1,-0.35108,0.23778,0.1,-0.44108,0.23778,0.1,-0.44108,0.22578,0.1,-0.42745,0.2233,0.1,-0.41408,0.21978,0.1,-0.41291,0.21854,0.1,-0.41181,0.2172,0.1,-0.41079,0.21577,0.1,-0.40989,0.21427,0.1,-0.40914,0.21271,0.1,-0.40857,0.21109,0.1,-0.40836,0.21027,0.1,-0.40821,0.20945,0.1,-0.40811,0.20861,0.1,-0.40808,0.20778,0.1,-0.40808,0.20328,0.1,-0.40808,0.19878,0.1,-0.40823,0.1957,0.1,-0.40865,0.19265,0.1,-0.4101,0.18662,0.1,-0.41408,0.17478,0.1,-0.42166,0.1478,0.1,-0.42908,0.12078,0.1,-0.43964,0.08179,0.1,-0.45008,0.04278,0.1,-0.51608,0.23478,0.1,-0.53408,0.23478,0.1,-0.59408,0.04878,0.1,-0.60931,0.10121,0.1,-0.62408,0.15378,0.1,-0.63238,0.17907,0.1,-0.63908,0.20478,0.1,-0.63908,0.20778,0.1,-0.63908,0.21078,0.1,-0.64058,0.21228,0.1,-0.64208,0.21378,0.1,-0.642,0.21469,0.1,-0.64176,0.21555,0.1,-0.64139,0.21636,0.1,-0.64089,0.21712,0.1,-0.64027,0.21784,0.1,-0.63956,0.2185,0.1,-0.63877,0.21912,0.1,-0.6379,0.2197,0.1,-0.63601,0.22072,0.1,-0.634,0.22156,0.1,-0.63008,0.22278,0.1,-0.62478,0.223,0.1,-0.6195,0.22363,0.1,-0.60908,0.22578,0.1,-0.60908,0.23778,0.1,-0.70808,0.23778,0.1,-0.70808,0.22578,0.1,-0.70718,0.22501,0.1,-0.70618,0.22437,0.1,-0.70508,0.22385,0.1,-0.70393,0.22344,0.1,-0.70273,0.22314,0.1,-0.70151,0.22293,0.1,-0.70028,0.22281,0.1,-0.69908,0.22278,0.1,-0.69433,0.22013,0.1,-0.69211,0.21856,0.1,-0.69008,0.21678,0.1,-0.68533,0.21413,0.1,-0.68311,0.21256,0.1,-0.68108,0.21078,0.1,-0.67843,0.20602,0.1,-0.67687,0.20381,0.1,-0.67508,0.20178,0.1,-0.66332,0.15671,0.1,-0.65108,0.11178,0.1,-0.63348,0.04866,0.1,-0.61508,-0.01422,0.1,-0.60008,-0.01422,0.1,-0.53408,0.17478,0.1,-0.47108,-0.01422,0.1,-0.45608,-0.01422,0.1,-0.43714,0.04248,0.1,-0.42008,0.09978,0.1,-0.40456,0.14762,0.1,-0.39008,0.19578,0.1,-0.38774,0.20218,0.1,-0.387,0.20371,0.1,-0.38615,0.20516,0.1,-0.38519,0.20653,0.1,-0.38408,0.20778,0.1,-0.38363,0.2086,0.1,-0.38312,0.20938,0.1,-0.38255,0.21013,0.1,-0.38193,0.21085,0.1,-0.38055,0.21217,0.1,-0.37902,0.21336,0.1,-0.37737,0.21441,0.1,-0.37564,0.21533,0.1,-0.37387,0.21612,0.1,-0.37208,0.21678,0.1,-0.37005,0.21856,0.1,-0.36783,0.22013,0.1,-0.36308,0.22278,0.1,-0.36153,0.22283,0.1,-0.35998,0.22299,0.1,-0.35692,0.22359,0.1,-0.35393,0.22453,0.1]);
IndexedFaceSet434.coord = Coordinate435;

let Normal436 = browser.currentScene.createNode("Normal");
Normal436.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet434.normal = Normal436;

Shape432.geometry = IndexedFaceSet434;

Transform5.children[85] = Shape432;

let Shape437 = browser.currentScene.createNode("Shape");
let Appearance438 = browser.currentScene.createNode("Appearance");
Appearance438.USE = "charactersWebAppearance";
Shape437.appearance = Appearance438;

let IndexedFaceSet439 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet439.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet439.solid = False;
let Coordinate440 = browser.currentScene.createNode("Coordinate");
Coordinate440.point = new MFVec3f(new float[-0.00308,0.00378,0.1,0.00803,0.00437,0.1,0.01361,0.00518,0.1,0.01912,0.00637,0.1,0.02447,0.00798,0.1,0.02961,0.01007,0.1,0.03445,0.01265,0.1,0.03673,0.01414,0.1,0.03892,0.01578,0.1,0.03892,0.01578,0,0.03673,0.01414,0,0.03445,0.01265,0,0.02961,0.01007,0,0.02447,0.00798,0,0.01912,0.00637,0,0.01361,0.00518,0,0.00803,0.00437,0,-0.00308,0.00378,0]);
IndexedFaceSet439.coord = Coordinate440;

let Normal441 = browser.currentScene.createNode("Normal");
Normal441.vector = new MFVec3f(new float[0,1,0,-0.11037,0.99389,0,-0.17542,0.98449,0,-0.2486,0.96861,0,-0.33076,0.94372,0,-0.42199,0.9066,0,-0.52106,0.85352,0,-0.57261,0.81983,0,-0.6247,0.78087,0,-0.6247,0.78087,0,-0.57261,0.81983,0,-0.52106,0.85352,0,-0.42199,0.9066,0,-0.33076,0.94372,0,-0.2486,0.96861,0,-0.17542,0.98449,0,-0.11037,0.99389,0,0,1,0]);
IndexedFaceSet439.normal = Normal441;

Shape437.geometry = IndexedFaceSet439;

Transform5.children[86] = Shape437;

let Shape442 = browser.currentScene.createNode("Shape");
let Appearance443 = browser.currentScene.createNode("Appearance");
Appearance443.USE = "charactersWebAppearance";
Shape442.appearance = Appearance443;

let IndexedFaceSet444 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet444.coordIndex = new MFInt32(new int[7,0,6,-1,6,0,1,-1,2,6,1,-1,2,5,6,-1,2,4,5,-1,2,3,4,-1]);
IndexedFaceSet444.solid = False;
let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[-0.02708,0.00678,0.1,-0.02124,0.00523,0.1,-0.01524,0.00432,0.1,-0.00308,0.00378,0.1,-0.00308,0.00378,0,-0.01524,0.00432,0,-0.02124,0.00523,0,-0.02708,0.00678,0]);
IndexedFaceSet444.coord = Coordinate445;

let Normal446 = browser.currentScene.createNode("Normal");
Normal446.vector = new MFVec3f(new float[0.31623,0.94868,0,0.19851,0.9801,0,0.10626,0.99434,0,0,1,0,0,1,0,0.10626,0.99434,0,0.19851,0.9801,0,0.31623,0.94868,0]);
IndexedFaceSet444.normal = Normal446;

Shape442.geometry = IndexedFaceSet444;

Transform5.children[87] = Shape442;

let Shape447 = browser.currentScene.createNode("Shape");
let Appearance448 = browser.currentScene.createNode("Appearance");
Appearance448.USE = "charactersWebAppearance";
Shape447.appearance = Appearance448;

let IndexedFaceSet449 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet449.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,16,-1,17,18,6,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,6,7,16,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,12,-1,13,14,10,-1,16,8,15,-1,15,9,14,-1,10,11,12,-1]);
IndexedFaceSet449.solid = False;
let Coordinate450 = browser.currentScene.createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[-0.03608,0.02478,0.1,-0.03592,0.02223,0.1,-0.03546,0.01966,0.1,-0.0347,0.01712,0.1,-0.03367,0.01466,0.1,-0.03238,0.01234,0.1,-0.03164,0.01125,0.1,-0.03084,0.01022,0.1,-0.02998,0.00925,0.1,-0.02907,0.00834,0.1,-0.0281,0.00752,0.1,-0.02708,0.00678,0.1,-0.02708,0.00678,0,-0.0281,0.00752,0,-0.02907,0.00834,0,-0.02998,0.00925,0,-0.03084,0.01022,0,-0.03164,0.01125,0,-0.03238,0.01234,0,-0.03367,0.01466,0,-0.0347,0.01712,0,-0.03546,0.01966,0,-0.03592,0.02223,0,-0.03608,0.02478,0]);
IndexedFaceSet449.coord = Coordinate450;

let Normal451 = browser.currentScene.createNode("Normal");
Normal451.vector = new MFVec3f(new float[1,0,0,0.99265,0.121,0,0.97277,0.23176,0,0.94187,0.33598,0,0.89953,0.43686,0,0.84372,0.53678,0,0.80971,0.58683,0,0.7709,0.63695,0,0.72665,0.687,0,0.67629,0.73663,0,0.61916,0.78526,0,0.5547,0.83205,0,0.5547,0.83205,0,0.61916,0.78526,0,0.67629,0.73663,0,0.72665,0.687,0,0.7709,0.63695,0,0.80971,0.58683,0,0.84372,0.53678,0,0.89953,0.43686,0,0.94187,0.33598,0,0.97277,0.23176,0,0.99265,0.121,0,1,0,0]);
IndexedFaceSet449.normal = Normal451;

Shape447.geometry = IndexedFaceSet449;

Transform5.children[88] = Shape447;

let Shape452 = browser.currentScene.createNode("Shape");
let Appearance453 = browser.currentScene.createNode("Appearance");
Appearance453.USE = "charactersWebAppearance";
Shape452.appearance = Appearance453;

let IndexedFaceSet454 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet454.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet454.solid = False;
let Coordinate455 = browser.currentScene.createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[-0.03608,0.11178,0.1,-0.03608,0.02478,0.1,-0.03608,0.02478,0,-0.03608,0.11178,0]);
IndexedFaceSet454.coord = Coordinate455;

let Normal456 = browser.currentScene.createNode("Normal");
Normal456.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet454.normal = Normal456;

Shape452.geometry = IndexedFaceSet454;

Transform5.children[89] = Shape452;

let Shape457 = browser.currentScene.createNode("Shape");
let Appearance458 = browser.currentScene.createNode("Appearance");
Appearance458.USE = "charactersWebAppearance";
Shape457.appearance = Appearance458;

let IndexedFaceSet459 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet459.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet459.solid = False;
let Coordinate460 = browser.currentScene.createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[-0.02708,0.11178,0.1,-0.03608,0.11178,0.1,-0.03608,0.11178,0,-0.02708,0.11178,0]);
IndexedFaceSet459.coord = Coordinate460;

let Normal461 = browser.currentScene.createNode("Normal");
Normal461.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet459.normal = Normal461;

Shape457.geometry = IndexedFaceSet459;

Transform5.children[90] = Shape457;

let Shape462 = browser.currentScene.createNode("Shape");
let Appearance463 = browser.currentScene.createNode("Appearance");
Appearance463.USE = "charactersWebAppearance";
Shape462.appearance = Appearance463;

let IndexedFaceSet464 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet464.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet464.solid = False;
let Coordinate465 = browser.currentScene.createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[-0.00608,0.11178,0.1,-0.02708,0.11178,0.1,-0.02708,0.11178,0,-0.00608,0.11178,0]);
IndexedFaceSet464.coord = Coordinate465;

let Normal466 = browser.currentScene.createNode("Normal");
Normal466.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet464.normal = Normal466;

Shape462.geometry = IndexedFaceSet464;

Transform5.children[91] = Shape462;

let Shape467 = browser.currentScene.createNode("Shape");
let Appearance468 = browser.currentScene.createNode("Appearance");
Appearance468.USE = "charactersWebAppearance";
Shape467.appearance = Appearance468;

let IndexedFaceSet469 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet469.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet469.solid = False;
let Coordinate470 = browser.currentScene.createNode("Coordinate");
Coordinate470.point = new MFVec3f(new float[0.03592,0.09678,0.1,0.03388,0.09868,0.1,0.03171,0.10044,0.1,0.02701,0.10356,0.1,0.02193,0.10614,0.1,0.01655,0.10822,0.1,0.01097,0.1098,0.1,0.00528,0.11091,0.1,-0.00044,0.11156,0.1,-0.00608,0.11178,0.1,-0.00608,0.11178,0,-0.00044,0.11156,0,0.00528,0.11091,0,0.01097,0.1098,0,0.01655,0.10822,0,0.02193,0.10614,0,0.02701,0.10356,0,0.03171,0.10044,0,0.03388,0.09868,0,0.03592,0.09678,0]);
IndexedFaceSet469.coord = Coordinate470;

let Normal471 = browser.currentScene.createNode("Normal");
Normal471.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.65567,-0.75505,0,-0.60395,-0.79702,0,-0.50233,-0.86468,0,-0.40576,-0.91398,0,-0.31546,-0.94894,0,-0.23115,-0.97292,0,-0.15165,-0.98843,0,-0.07527,-0.99716,0,0,-1,0,0,-1,0,-0.07527,-0.99716,0,-0.15165,-0.98843,0,-0.23115,-0.97292,0,-0.31546,-0.94894,0,-0.40576,-0.91398,0,-0.50233,-0.86468,0,-0.60395,-0.79702,0,-0.65567,-0.75505,0,-0.70711,-0.70711,0]);
IndexedFaceSet469.normal = Normal471;

Shape467.geometry = IndexedFaceSet469;

Transform5.children[92] = Shape467;

let Shape472 = browser.currentScene.createNode("Shape");
let Appearance473 = browser.currentScene.createNode("Appearance");
Appearance473.USE = "charactersWebAppearance";
Shape472.appearance = Appearance473;

let IndexedFaceSet474 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet474.coordIndex = new MFInt32(new int[21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet474.solid = False;
let Coordinate475 = browser.currentScene.createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0.05392,0.06078,0.1,0.05383,0.0633,0.1,0.05357,0.06582,0.1,0.05314,0.06835,0.1,0.05256,0.07085,0.1,0.05094,0.0758,0.1,0.04878,0.08059,0.1,0.04614,0.08515,0.1,0.04308,0.08942,0.1,0.03965,0.09331,0.1,0.03592,0.09678,0.1,0.03592,0.09678,0,0.03965,0.09331,0,0.04308,0.08942,0,0.04614,0.08515,0,0.04878,0.08059,0,0.05094,0.0758,0,0.05256,0.07085,0,0.05314,0.06835,0,0.05357,0.06582,0,0.05383,0.0633,0,0.05392,0.06078,0]);
IndexedFaceSet474.coord = Coordinate475;

let Normal476 = browser.currentScene.createNode("Normal");
Normal476.vector = new MFVec3f(new float[-1,0,0,-0.99756,-0.06977,0,-0.99076,-0.13565,0,-0.98027,-0.19765,0,-0.9667,-0.25591,0,-0.93208,-0.36224,0,-0.88942,-0.45709,0,-0.8397,-0.54304,0,-0.78267,-0.62243,0,-0.71697,-0.6971,0,-0.64018,-0.76822,0,-0.64018,-0.76822,0,-0.71697,-0.6971,0,-0.78267,-0.62243,0,-0.8397,-0.54304,0,-0.88942,-0.45709,0,-0.93208,-0.36224,0,-0.9667,-0.25591,0,-0.98027,-0.19765,0,-0.99076,-0.13565,0,-0.99756,-0.06977,0,-1,0,0]);
IndexedFaceSet474.normal = Normal476;

Shape472.geometry = IndexedFaceSet474;

Transform5.children[93] = Shape472;

let Shape477 = browser.currentScene.createNode("Shape");
let Appearance478 = browser.currentScene.createNode("Appearance");
Appearance478.USE = "charactersWebAppearance";
Shape477.appearance = Appearance478;

let IndexedFaceSet479 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet479.coordIndex = new MFInt32(new int[21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet479.solid = False;
let Coordinate480 = browser.currentScene.createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0.03892,0.01578,0.1,0.04093,0.01795,0.1,0.04277,0.02027,0.1,0.04446,0.02273,0.1,0.04598,0.0253,0.1,0.04858,0.03076,0.1,0.05061,0.03654,0.1,0.05212,0.04254,0.1,0.05315,0.04865,0.1,0.05373,0.05476,0.1,0.05392,0.06078,0.1,0.05392,0.06078,0,0.05373,0.05476,0,0.05315,0.04865,0,0.05212,0.04254,0,0.05061,0.03654,0,0.04858,0.03076,0,0.04598,0.0253,0,0.04446,0.02273,0,0.04277,0.02027,0,0.04093,0.01795,0,0.03892,0.01578,0]);
IndexedFaceSet479.coord = Coordinate480;

let Normal481 = browser.currentScene.createNode("Normal");
Normal481.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.75958,0.65041,0,-0.80495,0.59334,0,-0.8436,0.53698,0,-0.87609,0.48214,0,-0.92537,0.37907,0,-0.95817,0.28619,0,-0.9791,0.20336,0,-0.99161,0.12928,0,-0.99807,0.06216,0,-1,0,0,-1,0,0,-0.99807,0.06216,0,-0.99161,0.12928,0,-0.9791,0.20336,0,-0.95817,0.28619,0,-0.92537,0.37907,0,-0.87609,0.48214,0,-0.8436,0.53698,0,-0.80495,0.59334,0,-0.75958,0.65041,0,-0.70711,0.70711,0]);
IndexedFaceSet479.normal = Normal481;

Shape477.geometry = IndexedFaceSet479;

Transform5.children[94] = Shape477;

let Shape482 = browser.currentScene.createNode("Shape");
let Appearance483 = browser.currentScene.createNode("Appearance");
Appearance483.USE = "charactersWebAppearance";
Shape482.appearance = Appearance483;

let IndexedFaceSet484 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet484.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet484.solid = False;
let Coordinate485 = browser.currentScene.createNode("Coordinate");
Coordinate485.point = new MFVec3f(new float[-0.01508,0.12678,0.1,-0.00292,0.12732,0.1,0.00308,0.12823,0.1,0.00892,0.12978,0.1,0.00892,0.12978,0,0.00308,0.12823,0,-0.00292,0.12732,0,-0.01508,0.12678,0]);
IndexedFaceSet484.coord = Coordinate485;

let Normal486 = browser.currentScene.createNode("Normal");
Normal486.vector = new MFVec3f(new float[0,1,0,-0.10626,0.99434,0,-0.19851,0.9801,0,-0.31623,0.94868,0,-0.31623,0.94868,0,-0.19851,0.9801,0,-0.10626,0.99434,0,0,1,0]);
IndexedFaceSet484.normal = Normal486;

Shape482.geometry = IndexedFaceSet484;

Transform5.children[95] = Shape482;

let Shape487 = browser.currentScene.createNode("Shape");
let Appearance488 = browser.currentScene.createNode("Appearance");
Appearance488.USE = "charactersWebAppearance";
Shape487.appearance = Appearance488;

let IndexedFaceSet489 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet489.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet489.solid = False;
let Coordinate490 = browser.currentScene.createNode("Coordinate");
Coordinate490.point = new MFVec3f(new float[-0.03608,0.12678,0.1,-0.01508,0.12678,0.1,-0.01508,0.12678,0,-0.03608,0.12678,0]);
IndexedFaceSet489.coord = Coordinate490;

let Normal491 = browser.currentScene.createNode("Normal");
Normal491.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet489.normal = Normal491;

Shape487.geometry = IndexedFaceSet489;

Transform5.children[96] = Shape487;

let Shape492 = browser.currentScene.createNode("Shape");
let Appearance493 = browser.currentScene.createNode("Appearance");
Appearance493.USE = "charactersWebAppearance";
Shape492.appearance = Appearance493;

let IndexedFaceSet494 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet494.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet494.solid = False;
let Coordinate495 = browser.currentScene.createNode("Coordinate");
Coordinate495.point = new MFVec3f(new float[-0.03608,0.22278,0.1,-0.03608,0.12678,0.1,-0.03608,0.12678,0,-0.03608,0.22278,0]);
IndexedFaceSet494.coord = Coordinate495;

let Normal496 = browser.currentScene.createNode("Normal");
Normal496.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet494.normal = Normal496;

Shape492.geometry = IndexedFaceSet494;

Transform5.children[97] = Shape492;

let Shape497 = browser.currentScene.createNode("Shape");
let Appearance498 = browser.currentScene.createNode("Appearance");
Appearance498.USE = "charactersWebAppearance";
Shape497.appearance = Appearance498;

let IndexedFaceSet499 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet499.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet499.solid = False;
let Coordinate500 = browser.currentScene.createNode("Coordinate");
Coordinate500.point = new MFVec3f(new float[-0.02408,0.22278,0.1,-0.03608,0.22278,0.1,-0.03608,0.22278,0,-0.02408,0.22278,0]);
IndexedFaceSet499.coord = Coordinate500;

let Normal501 = browser.currentScene.createNode("Normal");
Normal501.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet499.normal = Normal501;

Shape497.geometry = IndexedFaceSet499;

Transform5.children[98] = Shape497;

let Shape502 = browser.currentScene.createNode("Shape");
let Appearance503 = browser.currentScene.createNode("Appearance");
Appearance503.USE = "charactersWebAppearance";
Shape502.appearance = Appearance503;

let IndexedFaceSet504 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet504.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet504.solid = False;
let Coordinate505 = browser.currentScene.createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[-0.00908,0.22278,0.1,-0.02408,0.22278,0.1,-0.02408,0.22278,0,-0.00908,0.22278,0]);
IndexedFaceSet504.coord = Coordinate505;

let Normal506 = browser.currentScene.createNode("Normal");
Normal506.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet504.normal = Normal506;

Shape502.geometry = IndexedFaceSet504;

Transform5.children[99] = Shape502;

let Shape507 = browser.currentScene.createNode("Shape");
let Appearance508 = browser.currentScene.createNode("Appearance");
Appearance508.USE = "charactersWebAppearance";
Shape507.appearance = Appearance508;

let IndexedFaceSet509 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet509.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,18,-1,19,20,2,-1,2,3,18,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet509.solid = False;
let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[0.02692,0.21078,0.1,0.02518,0.21239,0.1,0.02332,0.21386,0.1,0.02136,0.21521,0.1,0.0193,0.21643,0.1,0.01493,0.2185,0.1,0.01031,0.22013,0.1,0.00551,0.22134,0.1,0.00062,0.22216,0.1,-0.00427,0.22263,0.1,-0.00908,0.22278,0.1,-0.00908,0.22278,0,-0.00427,0.22263,0,0.00062,0.22216,0,0.00551,0.22134,0,0.01031,0.22013,0,0.01493,0.2185,0,0.0193,0.21643,0,0.02136,0.21521,0,0.02332,0.21386,0,0.02518,0.21239,0,0.02692,0.21078,0]);
IndexedFaceSet509.coord = Coordinate510;

let Normal511 = browser.currentScene.createNode("Normal");
Normal511.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.65041,-0.75958,0,-0.59334,-0.80495,0,-0.53698,-0.8436,0,-0.48214,-0.87609,0,-0.37907,-0.92537,0,-0.28619,-0.95817,0,-0.20336,-0.9791,0,-0.12928,-0.99161,0,-0.06216,-0.99807,0,0,-1,0,0,-1,0,-0.06216,-0.99807,0,-0.12928,-0.99161,0,-0.20336,-0.9791,0,-0.28619,-0.95817,0,-0.37907,-0.92537,0,-0.48214,-0.87609,0,-0.53698,-0.8436,0,-0.59334,-0.80495,0,-0.65041,-0.75958,0,-0.70711,-0.70711,0]);
IndexedFaceSet509.normal = Normal511;

Shape507.geometry = IndexedFaceSet509;

Transform5.children[100] = Shape507;

let Shape512 = browser.currentScene.createNode("Shape");
let Appearance513 = browser.currentScene.createNode("Appearance");
Appearance513.USE = "charactersWebAppearance";
Shape512.appearance = Appearance513;

let IndexedFaceSet514 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet514.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet514.solid = False;
let Coordinate515 = browser.currentScene.createNode("Coordinate");
Coordinate515.point = new MFVec3f(new float[0.03892,0.17778,0.1,0.03874,0.18222,0.1,0.03821,0.18671,0.1,0.03731,0.19118,0.1,0.03602,0.19556,0.1,0.03435,0.19979,0.1,0.03229,0.20378,0.1,0.02981,0.20746,0.1,0.02842,0.20917,0.1,0.02692,0.21078,0.1,0.02692,0.21078,0,0.02842,0.20917,0,0.02981,0.20746,0,0.03229,0.20378,0,0.03435,0.19979,0,0.03602,0.19556,0,0.03731,0.19118,0,0.03821,0.18671,0,0.03874,0.18222,0,0.03892,0.17778,0]);
IndexedFaceSet514.coord = Coordinate515;

let Normal516 = browser.currentScene.createNode("Normal");
Normal516.vector = new MFVec3f(new float[-1,0,0,-0.99689,-0.07881,0,-0.98749,-0.15769,0,-0.97111,-0.23864,0,-0.94629,-0.32332,0,-0.91078,-0.41289,0,-0.86152,-0.50772,0,-0.79485,-0.6068,0,-0.75381,-0.65709,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.75381,-0.65709,0,-0.79485,-0.6068,0,-0.86152,-0.50772,0,-0.91078,-0.41289,0,-0.94629,-0.32332,0,-0.97111,-0.23864,0,-0.98749,-0.15769,0,-0.99689,-0.07881,0,-1,0,0]);
IndexedFaceSet514.normal = Normal516;

Shape512.geometry = IndexedFaceSet514;

Transform5.children[101] = Shape512;

let Shape517 = browser.currentScene.createNode("Shape");
let Appearance518 = browser.currentScene.createNode("Appearance");
Appearance518.USE = "charactersWebAppearance";
Shape517.appearance = Appearance518;

let IndexedFaceSet519 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet519.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1]);
IndexedFaceSet519.solid = False;
let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[0.03592,0.15678,0.1,0.03733,0.16189,0.1,0.03826,0.16714,0.1,0.03877,0.17246,0.1,0.03892,0.17778,0.1,0.03892,0.17778,0,0.03877,0.17246,0,0.03826,0.16714,0,0.03733,0.16189,0,0.03592,0.15678,0]);
IndexedFaceSet519.coord = Coordinate520;

let Normal521 = browser.currentScene.createNode("Normal");
Normal521.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.97601,0.21771,0,-0.99122,0.1322,0,-0.99821,0.05989,0,-1,0,0,-1,0,0,-0.99821,0.05989,0,-0.99122,0.1322,0,-0.97601,0.21771,0,-0.94868,0.31623,0]);
IndexedFaceSet519.normal = Normal521;

Shape517.geometry = IndexedFaceSet519;

Transform5.children[102] = Shape517;

let Shape522 = browser.currentScene.createNode("Shape");
let Appearance523 = browser.currentScene.createNode("Appearance");
Appearance523.USE = "charactersWebAppearance";
Shape522.appearance = Appearance523;

let IndexedFaceSet524 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet524.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet524.solid = False;
let Coordinate525 = browser.currentScene.createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.02692,0.13878,0.1,0.03202,0.14748,0.1,0.03414,0.15206,0.1,0.03592,0.15678,0.1,0.03592,0.15678,0,0.03414,0.15206,0,0.03202,0.14748,0,0.02692,0.13878,0]);
IndexedFaceSet524.coord = Coordinate525;

let Normal526 = browser.currentScene.createNode("Normal");
Normal526.vector = new MFVec3f(new float[-0.83205,0.5547,0,-0.89248,0.45108,0,-0.92165,0.38803,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.92165,0.38803,0,-0.89248,0.45108,0,-0.83205,0.5547,0]);
IndexedFaceSet524.normal = Normal526;

Shape522.geometry = IndexedFaceSet524;

Transform5.children[103] = Shape522;

let Shape527 = browser.currentScene.createNode("Shape");
let Appearance528 = browser.currentScene.createNode("Appearance");
Appearance528.USE = "charactersWebAppearance";
Shape527.appearance = Appearance528;

let IndexedFaceSet529 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet529.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet529.solid = False;
let Coordinate530 = browser.currentScene.createNode("Coordinate");
Coordinate530.point = new MFVec3f(new float[0.00892,0.12978,0.1,0.01381,0.1312,0.1,0.01858,0.13311,0.1,0.02086,0.13427,0.1,0.02302,0.1356,0.1,0.02505,0.1371,0.1,0.02692,0.13878,0.1,0.02692,0.13878,0,0.02505,0.1371,0,0.02302,0.1356,0,0.02086,0.13427,0,0.01858,0.13311,0,0.01381,0.1312,0,0.00892,0.12978,0]);
IndexedFaceSet529.coord = Coordinate530;

let Normal531 = browser.currentScene.createNode("Normal");
Normal531.vector = new MFVec3f(new float[-0.24253,0.97014,0,-0.32084,0.94713,0,-0.42529,0.90506,0,-0.48778,0.87297,0,-0.55663,0.83076,0,-0.63055,0.77615,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.63055,0.77615,0,-0.55663,0.83076,0,-0.48778,0.87297,0,-0.42529,0.90506,0,-0.32084,0.94713,0,-0.24253,0.97014,0]);
IndexedFaceSet529.normal = Normal531;

Shape527.geometry = IndexedFaceSet529;

Transform5.children[104] = Shape527;

let Shape532 = browser.currentScene.createNode("Shape");
let Appearance533 = browser.currentScene.createNode("Appearance");
Appearance533.USE = "charactersWebAppearance";
Shape532.appearance = Appearance533;

let IndexedFaceSet534 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet534.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1]);
IndexedFaceSet534.solid = False;
let Coordinate535 = browser.currentScene.createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0.06892,0.10278,0.1,0.07393,0.09881,0.1,0.0787,0.09452,0.1,0.08308,0.08985,0.1,0.08692,0.08478,0.1,0.08692,0.08478,0,0.08308,0.08985,0,0.0787,0.09452,0,0.07393,0.09881,0,0.06892,0.10278,0]);
IndexedFaceSet534.coord = Coordinate535;

let Normal536 = browser.currentScene.createNode("Normal");
Normal536.vector = new MFVec3f(new float[0.6,0.8,0,0.64283,0.76601,0,0.69744,0.71664,0,0.76189,0.6477,0,0.83205,0.5547,0,0.83205,0.5547,0,0.76189,0.6477,0,0.69744,0.71664,0,0.64283,0.76601,0,0.6,0.8,0]);
IndexedFaceSet534.normal = Normal536;

Shape532.geometry = IndexedFaceSet534;

Transform5.children[105] = Shape532;

let Shape537 = browser.currentScene.createNode("Shape");
let Appearance538 = browser.currentScene.createNode("Appearance");
Appearance538.USE = "charactersWebAppearance";
Shape537.appearance = Appearance538;

let IndexedFaceSet539 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet539.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,10,-1,11,12,6,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1]);
IndexedFaceSet539.solid = False;
let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.08692,0.08478,0.1,0.08911,0.08152,0.1,0.09097,0.07803,0.1,0.09252,0.07437,0.1,0.09377,0.07056,0.1,0.09472,0.06666,0.1,0.09539,0.06269,0.1,0.09579,0.05872,0.1,0.09592,0.05478,0.1,0.09592,0.05478,0,0.09579,0.05872,0,0.09539,0.06269,0,0.09472,0.06666,0,0.09377,0.07056,0,0.09252,0.07437,0,0.09097,0.07803,0,0.08911,0.08152,0,0.08692,0.08478,0]);
IndexedFaceSet539.coord = Coordinate540;

let Normal541 = browser.currentScene.createNode("Normal");
Normal541.vector = new MFVec3f(new float[0.8,0.6,0,0.85796,0.51371,0,0.90285,0.42995,0,0.93678,0.34991,0,0.96176,0.27391,0,0.97945,0.20168,0,0.99117,0.13257,0,0.99784,0.0657,0,1,0,0,1,0,0,0.99784,0.0657,0,0.99117,0.13257,0,0.97945,0.20168,0,0.96176,0.27391,0,0.93678,0.34991,0,0.90285,0.42995,0,0.85796,0.51371,0,0.8,0.6,0]);
IndexedFaceSet539.normal = Normal541;

Shape537.geometry = IndexedFaceSet539;

Transform5.children[106] = Shape537;

let Shape542 = browser.currentScene.createNode("Shape");
let Appearance543 = browser.currentScene.createNode("Appearance");
Appearance543.USE = "charactersWebAppearance";
Shape542.appearance = Appearance543;

let IndexedFaceSet544 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet544.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet544.solid = False;
let Coordinate545 = browser.currentScene.createNode("Coordinate");
Coordinate545.point = new MFVec3f(new float[0.09592,0.05478,0.1,0.09579,0.05083,0.1,0.09539,0.04686,0.1,0.09472,0.0429,0.1,0.09377,0.03899,0.1,0.09252,0.03519,0.1,0.09097,0.03152,0.1,0.08911,0.02804,0.1,0.08692,0.02478,0.1,0.08692,0.02478,0,0.08911,0.02804,0,0.09097,0.03152,0,0.09252,0.03519,0,0.09377,0.03899,0,0.09472,0.0429,0,0.09539,0.04686,0,0.09579,0.05083,0,0.09592,0.05478,0]);
IndexedFaceSet544.coord = Coordinate545;

let Normal546 = browser.currentScene.createNode("Normal");
Normal546.vector = new MFVec3f(new float[1,0,0,0.99784,-0.0657,0,0.99117,-0.13257,0,0.97945,-0.20168,0,0.96176,-0.27391,0,0.93678,-0.34991,0,0.90285,-0.42995,0,0.85796,-0.51371,0,0.8,-0.6,0,0.8,-0.6,0,0.85796,-0.51371,0,0.90285,-0.42995,0,0.93678,-0.34991,0,0.96176,-0.27391,0,0.97945,-0.20168,0,0.99117,-0.13257,0,0.99784,-0.0657,0,1,0,0]);
IndexedFaceSet544.normal = Normal546;

Shape542.geometry = IndexedFaceSet544;

Transform5.children[107] = Shape542;

let Shape547 = browser.currentScene.createNode("Shape");
let Appearance548 = browser.currentScene.createNode("Appearance");
Appearance548.USE = "charactersWebAppearance";
Shape547.appearance = Appearance548;

let IndexedFaceSet549 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet549.coordIndex = new MFInt32(new int[11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1]);
IndexedFaceSet549.solid = False;
let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0.08692,0.02478,0.1,0.08527,0.02173,0.1,0.08341,0.0188,0.1,0.07914,0.01326,0.1,0.07426,0.00823,0.1,0.06892,0.00378,0.1,0.06892,0.00378,0,0.07426,0.00823,0,0.07914,0.01326,0,0.08341,0.0188,0,0.08527,0.02173,0,0.08692,0.02478,0]);
IndexedFaceSet549.coord = Coordinate550;

let Normal551 = browser.currentScene.createNode("Normal");
Normal551.vector = new MFVec3f(new float[0.89443,-0.44721,0,0.86193,-0.50703,0,0.82756,-0.56138,0,0.75513,-0.65557,0,0.67928,-0.73388,0,0.6,-0.8,0,0.6,-0.8,0,0.67928,-0.73388,0,0.75513,-0.65557,0,0.82756,-0.56138,0,0.86193,-0.50703,0,0.89443,-0.44721,0]);
IndexedFaceSet549.normal = Normal551;

Shape547.geometry = IndexedFaceSet549;

Transform5.children[108] = Shape547;

let Shape552 = browser.currentScene.createNode("Shape");
let Appearance553 = browser.currentScene.createNode("Appearance");
Appearance553.USE = "charactersWebAppearance";
Shape552.appearance = Appearance553;

let IndexedFaceSet554 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet554.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet554.solid = False;
let Coordinate555 = browser.currentScene.createNode("Coordinate");
Coordinate555.point = new MFVec3f(new float[0.06892,0.00378,0.1,0.06274,-0.00032,0.1,0.05609,-0.00371,0.1,0.0491,-0.00636,0.1,0.04192,-0.00822,0.1,0.04192,-0.00822,0,0.0491,-0.00636,0,0.05609,-0.00371,0,0.06274,-0.00032,0,0.06892,0.00378,0]);
IndexedFaceSet554.coord = Coordinate555;

let Normal556 = browser.currentScene.createNode("Normal");
Normal556.vector = new MFVec3f(new float[0.6,-0.8,0,0.50364,-0.86392,0,0.40516,-0.91425,0,0.30331,-0.95289,0,0.19612,-0.98058,0,0.19612,-0.98058,0,0.30331,-0.95289,0,0.40516,-0.91425,0,0.50364,-0.86392,0,0.6,-0.8,0]);
IndexedFaceSet554.normal = Normal556;

Shape552.geometry = IndexedFaceSet554;

Transform5.children[109] = Shape552;

let Shape557 = browser.currentScene.createNode("Shape");
let Appearance558 = browser.currentScene.createNode("Appearance");
Appearance558.USE = "charactersWebAppearance";
Shape557.appearance = Appearance558;

let IndexedFaceSet559 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet559.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet559.solid = False;
let Coordinate560 = browser.currentScene.createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0.04192,-0.00822,0.1,0.02699,-0.01046,0.1,0.01192,-0.01122,0.1,0.01192,-0.01122,0,0.02699,-0.01046,0,0.04192,-0.00822,0]);
IndexedFaceSet559.coord = Coordinate560;

let Normal561 = browser.currentScene.createNode("Normal");
Normal561.vector = new MFVec3f(new float[0.19612,-0.98058,0,0.09998,-0.99499,0,0,-1,0,0,-1,0,0.09998,-0.99499,0,0.19612,-0.98058,0]);
IndexedFaceSet559.normal = Normal561;

Shape557.geometry = IndexedFaceSet559;

Transform5.children[110] = Shape557;

let Shape562 = browser.currentScene.createNode("Shape");
let Appearance563 = browser.currentScene.createNode("Appearance");
Appearance563.USE = "charactersWebAppearance";
Shape562.appearance = Appearance563;

let IndexedFaceSet564 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet564.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet564.solid = False;
let Coordinate565 = browser.currentScene.createNode("Coordinate");
Coordinate565.point = new MFVec3f(new float[0.01192,-0.01122,0.1,-0.10508,-0.01122,0.1,-0.10508,-0.01122,0,0.01192,-0.01122,0]);
IndexedFaceSet564.coord = Coordinate565;

let Normal566 = browser.currentScene.createNode("Normal");
Normal566.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet564.normal = Normal566;

Shape562.geometry = IndexedFaceSet564;

Transform5.children[111] = Shape562;

let Shape567 = browser.currentScene.createNode("Shape");
let Appearance568 = browser.currentScene.createNode("Appearance");
Appearance568.USE = "charactersWebAppearance";
Shape567.appearance = Appearance568;

let IndexedFaceSet569 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet569.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet569.solid = False;
let Coordinate570 = browser.currentScene.createNode("Coordinate");
Coordinate570.point = new MFVec3f(new float[-0.10508,-0.01122,0.1,-0.10508,0.00078,0.1,-0.10508,0.00078,0,-0.10508,-0.01122,0]);
IndexedFaceSet569.coord = Coordinate570;

let Normal571 = browser.currentScene.createNode("Normal");
Normal571.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet569.normal = Normal571;

Shape567.geometry = IndexedFaceSet569;

Transform5.children[112] = Shape567;

let Shape572 = browser.currentScene.createNode("Shape");
let Appearance573 = browser.currentScene.createNode("Appearance");
Appearance573.USE = "charactersWebAppearance";
Shape572.appearance = Appearance573;

let IndexedFaceSet574 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet574.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet574.solid = False;
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[-0.10508,0.00078,0.1,-0.10058,0.00078,0.1,-0.09608,0.00078,0.1,-0.09608,0.00078,0,-0.10508,0.00078,0]);
IndexedFaceSet574.coord = Coordinate575;

let Normal576 = browser.currentScene.createNode("Normal");
Normal576.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet574.normal = Normal576;

Shape572.geometry = IndexedFaceSet574;

Transform5.children[113] = Shape572;

let Shape577 = browser.currentScene.createNode("Shape");
let Appearance578 = browser.currentScene.createNode("Appearance");
Appearance578.USE = "charactersWebAppearance";
Shape577.appearance = Appearance578;

let IndexedFaceSet579 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet579.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,15,-1,16,17,5,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,5,6,15,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet579.solid = False;
let Coordinate580 = browser.currentScene.createNode("Coordinate");
Coordinate580.point = new MFVec3f(new float[-0.09608,0.00078,0.1,-0.09288,0.00084,0.1,-0.09124,0.00096,0.1,-0.08963,0.00118,0.1,-0.08807,0.00155,0.1,-0.08732,0.00179,0.1,-0.08661,0.00208,0.1,-0.08592,0.00242,0.1,-0.08526,0.00281,0.1,-0.08465,0.00326,0.1,-0.08408,0.00378,0.1,-0.08408,0.00378,0,-0.08465,0.00326,0,-0.08526,0.00281,0,-0.08592,0.00242,0,-0.08661,0.00208,0,-0.08732,0.00179,0,-0.08807,0.00155,0,-0.08963,0.00118,0,-0.09124,0.00096,0,-0.09288,0.00084,0,-0.09608,0.00078,0]);
IndexedFaceSet579.coord = Coordinate580;

let Normal581 = browser.currentScene.createNode("Normal");
Normal581.vector = new MFVec3f(new float[0,1,0,-0.04898,0.9988,0,-0.1029,0.99469,0,-0.17892,0.98386,0,-0.27976,0.96007,0,-0.33996,0.94044,0,-0.40641,0.91369,0,-0.47828,0.87821,0,-0.55403,0.8325,0,-0.63131,0.77553,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.63131,0.77553,0,-0.55403,0.8325,0,-0.47828,0.87821,0,-0.40641,0.91369,0,-0.33996,0.94044,0,-0.27976,0.96007,0,-0.17892,0.98386,0,-0.1029,0.99469,0,-0.04898,0.9988,0,0,1,0]);
IndexedFaceSet579.normal = Normal581;

Shape577.geometry = IndexedFaceSet579;

Transform5.children[114] = Shape577;

let Shape582 = browser.currentScene.createNode("Shape");
let Appearance583 = browser.currentScene.createNode("Appearance");
Appearance583.USE = "charactersWebAppearance";
Shape582.appearance = Appearance583;

let IndexedFaceSet584 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet584.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet584.solid = False;
let Coordinate585 = browser.currentScene.createNode("Coordinate");
Coordinate585.point = new MFVec3f(new float[-0.08408,0.00378,0.1,-0.07933,0.00643,0.1,-0.07711,0.00799,0.1,-0.07508,0.00978,0.1,-0.07508,0.00978,0,-0.07711,0.00799,0,-0.07933,0.00643,0,-0.08408,0.00378,0]);
IndexedFaceSet584.coord = Coordinate585;

let Normal586 = browser.currentScene.createNode("Normal");
Normal586.vector = new MFVec3f(new float[-0.44721,0.89443,0,-0.53972,0.84184,0,-0.61587,0.78785,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.61587,0.78785,0,-0.53972,0.84184,0,-0.44721,0.89443,0]);
IndexedFaceSet584.normal = Normal586;

Shape582.geometry = IndexedFaceSet584;

Transform5.children[115] = Shape582;

let Shape587 = browser.currentScene.createNode("Shape");
let Appearance588 = browser.currentScene.createNode("Appearance");
Appearance588.USE = "charactersWebAppearance";
Shape587.appearance = Appearance588;

let IndexedFaceSet589 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet589.coordIndex = new MFInt32(new int[21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet589.solid = False;
let Coordinate590 = browser.currentScene.createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[-0.07508,0.00978,0.1,-0.07457,0.01035,0.1,-0.07411,0.01096,0.1,-0.07372,0.01161,0.1,-0.07338,0.0123,0.1,-0.07309,0.01302,0.1,-0.07285,0.01377,0.1,-0.07249,0.01532,0.1,-0.07226,0.01694,0.1,-0.07214,0.01857,0.1,-0.07208,0.02178,0.1,-0.07208,0.02178,0,-0.07214,0.01857,0,-0.07226,0.01694,0,-0.07249,0.01532,0,-0.07285,0.01377,0,-0.07309,0.01302,0,-0.07338,0.0123,0,-0.07372,0.01161,0,-0.07411,0.01096,0,-0.07457,0.01035,0,-0.07508,0.00978,0]);
IndexedFaceSet589.coord = Coordinate590;

let Normal591 = browser.currentScene.createNode("Normal");
Normal591.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.77553,0.63131,0,-0.8325,0.55403,0,-0.87821,0.47828,0,-0.91369,0.40641,0,-0.94044,0.33996,0,-0.96007,0.27976,0,-0.98386,0.17892,0,-0.99469,0.1029,0,-0.9988,0.04898,0,-1,0,0,-1,0,0,-0.9988,0.04898,0,-0.99469,0.1029,0,-0.98386,0.17892,0,-0.96007,0.27976,0,-0.94044,0.33996,0,-0.91369,0.40641,0,-0.87821,0.47828,0,-0.8325,0.55403,0,-0.77553,0.63131,0,-0.70711,0.70711,0]);
IndexedFaceSet589.normal = Normal591;

Shape587.geometry = IndexedFaceSet589;

Transform5.children[116] = Shape587;

let Shape592 = browser.currentScene.createNode("Shape");
let Appearance593 = browser.currentScene.createNode("Appearance");
Appearance593.USE = "charactersWebAppearance";
Shape592.appearance = Appearance593;

let IndexedFaceSet594 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet594.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet594.solid = False;
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[-0.07208,0.02178,0.1,-0.07208,0.20178,0.1,-0.07208,0.20178,0,-0.07208,0.02178,0]);
IndexedFaceSet594.coord = Coordinate595;

let Normal596 = browser.currentScene.createNode("Normal");
Normal596.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet594.normal = Normal596;

Shape592.geometry = IndexedFaceSet594;

Transform5.children[117] = Shape592;

let Shape597 = browser.currentScene.createNode("Shape");
let Appearance598 = browser.currentScene.createNode("Appearance");
Appearance598.USE = "charactersWebAppearance";
Shape597.appearance = Appearance598;

let IndexedFaceSet599 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet599.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet599.solid = False;
let Coordinate600 = browser.currentScene.createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[-0.07208,0.20178,0.1,-0.07212,0.20298,0.1,-0.07223,0.2042,0.1,-0.07244,0.20543,0.1,-0.07274,0.20662,0.1,-0.07315,0.20778,0.1,-0.07367,0.20887,0.1,-0.07431,0.20988,0.1,-0.07508,0.21078,0.1,-0.07508,0.21078,0,-0.07431,0.20988,0,-0.07367,0.20887,0,-0.07315,0.20778,0,-0.07274,0.20662,0,-0.07244,0.20543,0,-0.07223,0.2042,0,-0.07212,0.20298,0,-0.07208,0.20178,0]);
IndexedFaceSet599.coord = Coordinate600;

let Normal601 = browser.currentScene.createNode("Normal");
Normal601.vector = new MFVec3f(new float[-1,0,0,-0.99807,-0.06217,0,-0.99161,-0.12929,0,-0.9791,-0.20336,0,-0.95817,-0.28619,0,-0.92537,-0.37907,0,-0.87609,-0.48214,0,-0.80495,-0.59334,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.80495,-0.59334,0,-0.87609,-0.48214,0,-0.92537,-0.37907,0,-0.95817,-0.28619,0,-0.9791,-0.20336,0,-0.99161,-0.12929,0,-0.99807,-0.06217,0,-1,0,0]);
IndexedFaceSet599.normal = Normal601;

Shape597.geometry = IndexedFaceSet599;

Transform5.children[118] = Shape597;

let Shape602 = browser.currentScene.createNode("Shape");
let Appearance603 = browser.currentScene.createNode("Appearance");
Appearance603.USE = "charactersWebAppearance";
Shape602.appearance = Appearance603;

let IndexedFaceSet604 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet604.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,11,-1,12,13,5,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,5,6,11,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,11,7,10,-1]);
IndexedFaceSet604.solid = False;
let Coordinate605 = browser.currentScene.createNode("Coordinate");
Coordinate605.point = new MFVec3f(new float[-0.07508,0.21078,0.1,-0.07586,0.21218,0.1,-0.07675,0.21352,0.1,-0.07776,0.21479,0.1,-0.07887,0.21599,0.1,-0.08007,0.2171,0.1,-0.08134,0.2181,0.1,-0.08268,0.219,0.1,-0.08408,0.21978,0.1,-0.08408,0.21978,0,-0.08268,0.219,0,-0.08134,0.2181,0,-0.08007,0.2171,0,-0.07887,0.21599,0,-0.07776,0.21479,0,-0.07675,0.21352,0,-0.07586,0.21218,0,-0.07508,0.21078,0]);
IndexedFaceSet604.coord = Coordinate605;

let Normal606 = browser.currentScene.createNode("Normal");
Normal606.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.85331,-0.52141,0,-0.80828,-0.58879,0,-0.75959,-0.6504,0,-0.70711,-0.70711,0,-0.6504,-0.75959,0,-0.58879,-0.80828,0,-0.52141,-0.85331,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.52141,-0.85331,0,-0.58879,-0.80828,0,-0.6504,-0.75959,0,-0.70711,-0.70711,0,-0.75959,-0.6504,0,-0.80828,-0.58879,0,-0.85331,-0.52141,0,-0.89443,-0.44721,0]);
IndexedFaceSet604.normal = Normal606;

Shape602.geometry = IndexedFaceSet604;

Transform5.children[119] = Shape602;

let Shape607 = browser.currentScene.createNode("Shape");
let Appearance608 = browser.currentScene.createNode("Appearance");
Appearance608.USE = "charactersWebAppearance";
Shape607.appearance = Appearance608;

let IndexedFaceSet609 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet609.coordIndex = new MFInt32(new int[11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1]);
IndexedFaceSet609.solid = False;
let Coordinate610 = browser.currentScene.createNode("Coordinate");
Coordinate610.point = new MFVec3f(new float[-0.08408,0.21978,0.1,-0.08563,0.21983,0.1,-0.08718,0.21999,0.1,-0.09024,0.22059,0.1,-0.09323,0.22153,0.1,-0.09608,0.22278,0.1,-0.09608,0.22278,0,-0.09323,0.22153,0,-0.09024,0.22059,0,-0.08718,0.21999,0,-0.08563,0.21983,0,-0.08408,0.21978,0]);
IndexedFaceSet609.coord = Coordinate610;

let Normal611 = browser.currentScene.createNode("Normal");
Normal611.vector = new MFVec3f(new float[0,-1,0,-0.06804,-0.99768,0,-0.13201,-0.99125,0,-0.24866,-0.96859,0,-0.35262,-0.93577,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.35262,-0.93577,0,-0.24866,-0.96859,0,-0.13201,-0.99125,0,-0.06804,-0.99768,0,0,-1,0]);
IndexedFaceSet609.normal = Normal611;

Shape607.geometry = IndexedFaceSet609;

Transform5.children[120] = Shape607;

let Shape612 = browser.currentScene.createNode("Shape");
let Appearance613 = browser.currentScene.createNode("Appearance");
Appearance613.USE = "charactersWebAppearance";
Shape612.appearance = Appearance613;

let IndexedFaceSet614 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet614.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet614.solid = False;
let Coordinate615 = browser.currentScene.createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[-0.09608,0.22278,0.1,-0.09728,0.22281,0.1,-0.09851,0.22293,0.1,-0.09973,0.22314,0.1,-0.10093,0.22344,0.1,-0.10208,0.22385,0.1,-0.10318,0.22437,0.1,-0.10418,0.22501,0.1,-0.10508,0.22578,0.1,-0.10508,0.22578,0,-0.10418,0.22501,0,-0.10318,0.22437,0,-0.10208,0.22385,0,-0.10093,0.22344,0,-0.09973,0.22314,0,-0.09851,0.22293,0,-0.09728,0.22281,0,-0.09608,0.22278,0]);
IndexedFaceSet614.coord = Coordinate615;

let Normal616 = browser.currentScene.createNode("Normal");
Normal616.vector = new MFVec3f(new float[0,-1,0,-0.06217,-0.99807,0,-0.12929,-0.99161,0,-0.20336,-0.9791,0,-0.28619,-0.95817,0,-0.37907,-0.92537,0,-0.48214,-0.87609,0,-0.59334,-0.80495,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.59334,-0.80495,0,-0.48214,-0.87609,0,-0.37907,-0.92537,0,-0.28619,-0.95817,0,-0.20336,-0.9791,0,-0.12929,-0.99161,0,-0.06217,-0.99807,0,0,-1,0]);
IndexedFaceSet614.normal = Normal616;

Shape612.geometry = IndexedFaceSet614;

Transform5.children[121] = Shape612;

let Shape617 = browser.currentScene.createNode("Shape");
let Appearance618 = browser.currentScene.createNode("Appearance");
Appearance618.USE = "charactersWebAppearance";
Shape617.appearance = Appearance618;

let IndexedFaceSet619 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet619.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet619.solid = False;
let Coordinate620 = browser.currentScene.createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[-0.10508,0.22578,0.1,-0.10508,0.23778,0.1,-0.10508,0.23778,0,-0.10508,0.22578,0]);
IndexedFaceSet619.coord = Coordinate620;

let Normal621 = browser.currentScene.createNode("Normal");
Normal621.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet619.normal = Normal621;

Shape617.geometry = IndexedFaceSet619;

Transform5.children[122] = Shape617;

let Shape622 = browser.currentScene.createNode("Shape");
let Appearance623 = browser.currentScene.createNode("Appearance");
Appearance623.USE = "charactersWebAppearance";
Shape622.appearance = Appearance623;

let IndexedFaceSet624 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet624.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet624.solid = False;
let Coordinate625 = browser.currentScene.createNode("Coordinate");
Coordinate625.point = new MFVec3f(new float[-0.10508,0.23778,0.1,0.00892,0.23778,0.1,0.00892,0.23778,0,-0.10508,0.23778,0]);
IndexedFaceSet624.coord = Coordinate625;

let Normal626 = browser.currentScene.createNode("Normal");
Normal626.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet624.normal = Normal626;

Shape622.geometry = IndexedFaceSet624;

Transform5.children[123] = Shape622;

let Shape627 = browser.currentScene.createNode("Shape");
let Appearance628 = browser.currentScene.createNode("Appearance");
Appearance628.USE = "charactersWebAppearance";
Shape627.appearance = Appearance628;

let IndexedFaceSet629 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet629.coordIndex = new MFInt32(new int[7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1]);
IndexedFaceSet629.solid = False;
let Coordinate630 = browser.currentScene.createNode("Coordinate");
Coordinate630.point = new MFVec3f(new float[0.00892,0.23778,0.1,0.01497,0.23758,0.1,0.02101,0.23701,0.1,0.03292,0.23478,0.1,0.03292,0.23478,0,0.02101,0.23701,0,0.01497,0.23758,0,0.00892,0.23778,0]);
IndexedFaceSet629.coord = Coordinate630;

let Normal631 = browser.currentScene.createNode("Normal");
Normal631.vector = new MFVec3f(new float[0,1,0,0.06358,0.99798,0,0.12495,0.99216,0,0.24253,0.97014,0,0.24253,0.97014,0,0.12495,0.99216,0,0.06358,0.99798,0,0,1,0]);
IndexedFaceSet629.normal = Normal631;

Shape627.geometry = IndexedFaceSet629;

Transform5.children[124] = Shape627;

let Shape632 = browser.currentScene.createNode("Shape");
let Appearance633 = browser.currentScene.createNode("Appearance");
Appearance633.USE = "charactersWebAppearance";
Shape632.appearance = Appearance633;

let IndexedFaceSet634 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet634.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet634.solid = False;
let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.03292,0.23478,0.1,0.04516,0.23093,0.1,0.05692,0.22578,0.1,0.05692,0.22578,0,0.04516,0.23093,0,0.03292,0.23478,0]);
IndexedFaceSet634.coord = Coordinate635;

let Normal636 = browser.currentScene.createNode("Normal");
Normal636.vector = new MFVec3f(new float[0.24254,0.97014,0,0.35319,0.93555,0,0.44721,0.89443,0,0.44721,0.89443,0,0.35319,0.93555,0,0.24254,0.97014,0]);
IndexedFaceSet634.normal = Normal636;

Shape632.geometry = IndexedFaceSet634;

Transform5.children[125] = Shape632;

let Shape637 = browser.currentScene.createNode("Shape");
let Appearance638 = browser.currentScene.createNode("Appearance");
Appearance638.USE = "charactersWebAppearance";
Shape637.appearance = Appearance638;

let IndexedFaceSet639 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet639.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet639.solid = False;
let Coordinate640 = browser.currentScene.createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.05692,0.22578,0.1,0.06487,0.21714,0.1,0.07192,0.20778,0.1,0.07192,0.20778,0,0.06487,0.21714,0,0.05692,0.22578,0]);
IndexedFaceSet639.coord = Coordinate640;

let Normal641 = browser.currentScene.createNode("Normal");
Normal641.vector = new MFVec3f(new float[0.70711,0.70711,0,0.76566,0.64324,0,0.83205,0.5547,0,0.83205,0.5547,0,0.76566,0.64324,0,0.70711,0.70711,0]);
IndexedFaceSet639.normal = Normal641;

Shape637.geometry = IndexedFaceSet639;

Transform5.children[126] = Shape637;

let Shape642 = browser.currentScene.createNode("Shape");
let Appearance643 = browser.currentScene.createNode("Appearance");
Appearance643.USE = "charactersWebAppearance";
Shape642.appearance = Appearance643;

let IndexedFaceSet644 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet644.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet644.solid = False;
let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.07192,0.20778,0.1,0.07394,0.20483,0.1,0.07573,0.20169,0.1,0.07727,0.1984,0.1,0.07855,0.19499,0.1,0.07957,0.19149,0.1,0.08031,0.18793,0.1,0.08077,0.18435,0.1,0.08092,0.18078,0.1,0.08092,0.18078,0,0.08077,0.18435,0,0.08031,0.18793,0,0.07957,0.19149,0,0.07855,0.19499,0,0.07727,0.1984,0,0.07573,0.20169,0,0.07394,0.20483,0,0.07192,0.20778,0]);
IndexedFaceSet644.coord = Coordinate645;

let Normal646 = browser.currentScene.createNode("Normal");
Normal646.vector = new MFVec3f(new float[0.8,0.6,0,0.84797,0.53004,0,0.88811,0.45963,0,0.92143,0.38853,0,0.94868,0.31623,0,0.97027,0.24203,0,0.98627,0.16516,0,0.9964,0.08475,0,1,0,0,1,0,0,0.9964,0.08475,0,0.98627,0.16516,0,0.97027,0.24203,0,0.94868,0.31623,0,0.92143,0.38853,0,0.88811,0.45963,0,0.84797,0.53004,0,0.8,0.6,0]);
IndexedFaceSet644.normal = Normal646;

Shape642.geometry = IndexedFaceSet644;

Transform5.children[127] = Shape642;

let Shape647 = browser.currentScene.createNode("Shape");
let Appearance648 = browser.currentScene.createNode("Appearance");
Appearance648.USE = "charactersWebAppearance";
Shape647.appearance = Appearance648;

let IndexedFaceSet649 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet649.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet649.solid = False;
let Coordinate650 = browser.currentScene.createNode("Coordinate");
Coordinate650.point = new MFVec3f(new float[0.08092,0.18078,0.1,0.08081,0.17768,0.1,0.0805,0.17459,0.1,0.0793,0.16845,0.1,0.07741,0.16248,0.1,0.07492,0.15678,0.1,0.07492,0.15678,0,0.07741,0.16248,0,0.0793,0.16845,0,0.0805,0.17459,0,0.08081,0.17768,0,0.08092,0.18078,0]);
IndexedFaceSet649.coord = Coordinate650;

let Normal651 = browser.currentScene.createNode("Normal");
Normal651.vector = new MFVec3f(new float[1,0,0,0.99768,-0.06804,0,0.99125,-0.13201,0,0.96859,-0.24866,0,0.93577,-0.35262,0,0.89443,-0.44721,0,0.89443,-0.44721,0,0.93577,-0.35262,0,0.96859,-0.24866,0,0.99125,-0.13201,0,0.99768,-0.06804,0,1,0,0]);
IndexedFaceSet649.normal = Normal651;

Shape647.geometry = IndexedFaceSet649;

Transform5.children[128] = Shape647;

let Shape652 = browser.currentScene.createNode("Shape");
let Appearance653 = browser.currentScene.createNode("Appearance");
Appearance653.USE = "charactersWebAppearance";
Shape652.appearance = Appearance653;

let IndexedFaceSet654 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet654.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet654.solid = False;
let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0.07492,0.15678,0.1,0.06929,0.14898,0.1,0.06292,0.14178,0.1,0.06292,0.14178,0,0.06929,0.14898,0,0.07492,0.15678,0]);
IndexedFaceSet654.coord = Coordinate655;

let Normal656 = browser.currentScene.createNode("Normal");
Normal656.vector = new MFVec3f(new float[0.83205,-0.5547,0,0.78456,-0.62005,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.78456,-0.62005,0,0.83205,-0.5547,0]);
IndexedFaceSet654.normal = Normal656;

Shape652.geometry = IndexedFaceSet654;

Transform5.children[129] = Shape652;

let Shape657 = browser.currentScene.createNode("Shape");
let Appearance658 = browser.currentScene.createNode("Appearance");
Appearance658.USE = "charactersWebAppearance";
Shape657.appearance = Appearance658;

let IndexedFaceSet659 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet659.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet659.solid = False;
let Coordinate660 = browser.currentScene.createNode("Coordinate");
Coordinate660.point = new MFVec3f(new float[0.06292,0.14178,0.1,0.0607,0.13971,0.1,0.05833,0.13777,0.1,0.05583,0.13599,0.1,0.05322,0.13437,0.1,0.0505,0.13293,0.1,0.0477,0.13168,0.1,0.04483,0.13062,0.1,0.04192,0.12978,0.1,0.04192,0.12978,0,0.04483,0.13062,0,0.0477,0.13168,0,0.0505,0.13293,0,0.05322,0.13437,0,0.05583,0.13599,0,0.05833,0.13777,0,0.0607,0.13971,0,0.06292,0.14178,0]);
IndexedFaceSet659.coord = Coordinate660;

let Normal661 = browser.currentScene.createNode("Normal");
Normal661.vector = new MFVec3f(new float[0.70711,-0.70711,0,0.65768,-0.7533,0,0.60649,-0.79509,0,0.5533,-0.83298,0,0.49776,-0.86731,0,0.43945,-0.89827,0,0.37783,-0.92587,0,0.31238,-0.94996,0,0.24253,-0.97014,0,0.24253,-0.97014,0,0.31238,-0.94996,0,0.37783,-0.92587,0,0.43945,-0.89827,0,0.49776,-0.86731,0,0.5533,-0.83298,0,0.60649,-0.79509,0,0.65768,-0.7533,0,0.70711,-0.70711,0]);
IndexedFaceSet659.normal = Normal661;

Shape657.geometry = IndexedFaceSet659;

Transform5.children[130] = Shape657;

let Shape662 = browser.currentScene.createNode("Shape");
let Appearance663 = browser.currentScene.createNode("Appearance");
Appearance663.USE = "charactersWebAppearance";
Shape662.appearance = Appearance663;

let IndexedFaceSet664 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet664.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet664.solid = False;
let Coordinate665 = browser.currentScene.createNode("Coordinate");
Coordinate665.point = new MFVec3f(new float[0.04192,0.12978,0.1,0.037,0.12685,0.1,0.03181,0.12439,0.1,0.02643,0.12237,0.1,0.02092,0.12078,0.1,0.02092,0.12078,0,0.02643,0.12237,0,0.03181,0.12439,0,0.037,0.12685,0,0.04192,0.12978,0]);
IndexedFaceSet664.coord = Coordinate665;

let Normal666 = browser.currentScene.createNode("Normal");
Normal666.vector = new MFVec3f(new float[0.5547,-0.83205,0,0.46933,-0.88303,0,0.3887,-0.92136,0,0.31323,-0.94968,0,0.24254,-0.97014,0,0.24254,-0.97014,0,0.31323,-0.94968,0,0.3887,-0.92136,0,0.46933,-0.88303,0,0.5547,-0.83205,0]);
IndexedFaceSet664.normal = Normal666;

Shape662.geometry = IndexedFaceSet664;

Transform5.children[131] = Shape662;

let Shape667 = browser.currentScene.createNode("Shape");
let Appearance668 = browser.currentScene.createNode("Appearance");
Appearance668.USE = "charactersWebAppearance";
Shape667.appearance = Appearance668;

let IndexedFaceSet669 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet669.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet669.solid = False;
let Coordinate670 = browser.currentScene.createNode("Coordinate");
Coordinate670.point = new MFVec3f(new float[0.02092,0.12078,0.1,0.03292,0.11778,0.1,0.04492,0.11478,0.1,0.04492,0.11478,0,0.03292,0.11778,0,0.02092,0.12078,0]);
IndexedFaceSet669.coord = Coordinate670;

let Normal671 = browser.currentScene.createNode("Normal");
Normal671.vector = new MFVec3f(new float[0.24254,0.97014,0,0.24254,0.97014,0,0.24254,0.97014,0,0.24254,0.97014,0,0.24254,0.97014,0,0.24254,0.97014,0]);
IndexedFaceSet669.normal = Normal671;

Shape667.geometry = IndexedFaceSet669;

Transform5.children[132] = Shape667;

let Shape672 = browser.currentScene.createNode("Shape");
let Appearance673 = browser.currentScene.createNode("Appearance");
Appearance673.USE = "charactersWebAppearance";
Shape672.appearance = Appearance673;

let IndexedFaceSet674 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet674.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet674.solid = False;
let Coordinate675 = browser.currentScene.createNode("Coordinate");
Coordinate675.point = new MFVec3f(new float[0.04492,0.11478,0.1,0.05724,0.10939,0.1,0.0632,0.10628,0.1,0.06892,0.10278,0.1,0.06892,0.10278,0,0.0632,0.10628,0,0.05724,0.10939,0,0.04492,0.11478,0]);
IndexedFaceSet674.coord = Coordinate675;

let Normal676 = browser.currentScene.createNode("Normal");
Normal676.vector = new MFVec3f(new float[0.37139,0.92848,0,0.43805,0.89895,0,0.49065,0.87136,0,0.5547,0.83205,0,0.5547,0.83205,0,0.49065,0.87136,0,0.43805,0.89895,0,0.37139,0.92848,0]);
IndexedFaceSet674.normal = Normal676;

Shape672.geometry = IndexedFaceSet674;

Transform5.children[133] = Shape672;

let Shape677 = browser.currentScene.createNode("Shape");
let Appearance678 = browser.currentScene.createNode("Appearance");
Appearance678.USE = "charactersWebAppearance";
Shape677.appearance = Appearance678;

let IndexedFaceSet679 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet679.coordIndex = new MFInt32(new int[128,0,210,-1,211,128,210,-1,211,127,128,-1,211,126,127,-1,211,212,126,-1,126,212,125,-1,125,212,124,-1,124,212,123,-1,123,212,122,-1,122,212,213,-1,121,213,120,-1,121,122,213,-1,2,208,1,-1,2,3,208,-1,208,3,207,-1,207,3,4,-1,206,4,5,-1,205,5,6,-1,204,6,203,-1,204,205,6,-1,207,4,206,-1,206,5,205,-1,6,7,203,-1,203,7,202,-1,202,7,201,-1,201,7,200,-1,200,7,199,-1,199,7,198,-1,198,7,197,-1,197,7,196,-1,196,7,195,-1,195,7,194,-1,194,7,193,-1,193,7,8,-1,9,193,8,-1,9,133,193,-1,9,10,133,-1,133,10,11,-1,132,11,131,-1,132,133,11,-1,12,162,11,-1,12,161,162,-1,12,13,161,-1,161,13,14,-1,160,14,15,-1,16,160,15,-1,16,159,160,-1,16,17,159,-1,159,17,18,-1,19,159,18,-1,19,158,159,-1,19,20,158,-1,158,20,21,-1,157,21,22,-1,156,22,23,-1,24,156,23,-1,24,155,156,-1,24,25,155,-1,155,25,26,-1,27,155,26,-1,27,28,155,-1,155,28,29,-1,154,29,30,-1,31,154,30,-1,31,32,154,-1,154,32,33,-1,34,154,33,-1,34,153,154,-1,34,35,153,-1,153,35,36,-1,152,36,37,-1,151,37,38,-1,150,38,39,-1,149,39,148,-1,149,150,39,-1,161,14,160,-1,158,21,157,-1,157,22,156,-1,155,29,154,-1,153,36,152,-1,152,37,151,-1,151,38,150,-1,148,39,147,-1,147,39,40,-1,146,40,145,-1,146,147,40,-1,41,143,40,-1,41,142,143,-1,41,141,142,-1,41,42,141,-1,141,42,140,-1,140,42,43,-1,139,43,138,-1,139,140,43,-1,44,136,43,-1,44,52,136,-1,44,51,52,-1,44,50,51,-1,44,49,50,-1,44,48,49,-1,44,47,48,-1,44,46,47,-1,44,45,46,-1,53,134,52,-1,53,58,134,-1,53,54,58,-1,58,54,57,-1,57,54,56,-1,56,54,55,-1,58,59,134,-1,134,59,60,-1,61,134,60,-1,61,62,134,-1,134,62,63,-1,64,134,63,-1,64,65,134,-1,134,65,67,-1,68,134,67,-1,68,69,134,-1,134,69,70,-1,71,134,70,-1,71,72,134,-1,134,72,73,-1,74,134,73,-1,74,133,134,-1,74,191,133,-1,74,75,191,-1,191,75,190,-1,190,75,189,-1,189,75,76,-1,188,76,77,-1,78,188,77,-1,78,187,188,-1,78,79,187,-1,187,79,186,-1,186,79,80,-1,81,186,80,-1,81,185,186,-1,81,82,185,-1,185,82,83,-1,184,83,84,-1,183,84,85,-1,182,85,181,-1,182,183,85,-1,65,66,67,-1,189,76,188,-1,185,83,184,-1,184,84,183,-1,85,86,181,-1,181,86,180,-1,180,86,179,-1,179,86,87,-1,88,179,87,-1,88,178,179,-1,88,177,178,-1,88,176,177,-1,88,89,176,-1,176,89,90,-1,91,176,90,-1,91,101,176,-1,91,92,101,-1,101,92,93,-1,94,101,93,-1,94,95,101,-1,101,95,96,-1,97,101,96,-1,97,98,101,-1,101,98,99,-1,100,101,99,-1,102,103,101,-1,101,103,104,-1,176,104,175,-1,176,101,104,-1,105,168,104,-1,105,221,168,-1,105,106,221,-1,221,106,220,-1,220,106,219,-1,219,106,107,-1,218,107,108,-1,217,108,109,-1,216,109,110,-1,111,216,110,-1,111,215,216,-1,111,112,215,-1,215,112,113,-1,214,113,114,-1,115,214,114,-1,115,116,214,-1,214,116,117,-1,118,214,117,-1,118,213,214,-1,118,119,213,-1,213,119,120,-1,219,107,218,-1,218,108,217,-1,217,109,216,-1,215,113,214,-1,167,129,11,-1,166,11,165,-1,166,167,11,-1,129,130,11,-1,11,130,131,-1,134,135,52,-1,52,135,136,-1,136,137,43,-1,43,137,138,-1,143,144,40,-1,40,144,145,-1,162,163,11,-1,11,163,164,-1,165,11,164,-1,168,169,104,-1,104,169,170,-1,171,104,170,-1,171,172,104,-1,104,172,173,-1,174,104,173,-1,174,175,104,-1,191,192,133,-1,133,192,193,-1,208,209,1,-1,1,209,210,-1,0,1,210,-1]);
IndexedFaceSet679.solid = False;
let Coordinate680 = browser.currentScene.createNode("Coordinate");
Coordinate680.point = new MFVec3f(new float[0.08692,0.08478,0.1,0.08308,0.08985,0.1,0.0787,0.09452,0.1,0.07393,0.09881,0.1,0.06892,0.10278,0.1,0.0632,0.10628,0.1,0.05724,0.10939,0.1,0.04492,0.11478,0.1,0.03292,0.11778,0.1,0.02092,0.12078,0.1,0.02643,0.12237,0.1,0.03181,0.12439,0.1,0.037,0.12685,0.1,0.04192,0.12978,0.1,0.04483,0.13062,0.1,0.0477,0.13168,0.1,0.0505,0.13293,0.1,0.05322,0.13437,0.1,0.05583,0.13599,0.1,0.05833,0.13777,0.1,0.0607,0.13971,0.1,0.06292,0.14178,0.1,0.06929,0.14898,0.1,0.07492,0.15678,0.1,0.07741,0.16248,0.1,0.0793,0.16845,0.1,0.0805,0.17459,0.1,0.08081,0.17768,0.1,0.08092,0.18078,0.1,0.08077,0.18435,0.1,0.08031,0.18793,0.1,0.07957,0.19149,0.1,0.07855,0.19499,0.1,0.07727,0.1984,0.1,0.07573,0.20169,0.1,0.07394,0.20483,0.1,0.07192,0.20778,0.1,0.06487,0.21714,0.1,0.05692,0.22578,0.1,0.04516,0.23093,0.1,0.03292,0.23478,0.1,0.02101,0.23701,0.1,0.01497,0.23758,0.1,0.00892,0.23778,0.1,-0.10508,0.23778,0.1,-0.10508,0.22578,0.1,-0.10418,0.22501,0.1,-0.10318,0.22437,0.1,-0.10208,0.22385,0.1,-0.10093,0.22344,0.1,-0.09973,0.22314,0.1,-0.09851,0.22293,0.1,-0.09728,0.22281,0.1,-0.09608,0.22278,0.1,-0.09323,0.22153,0.1,-0.09024,0.22059,0.1,-0.08718,0.21999,0.1,-0.08563,0.21983,0.1,-0.08408,0.21978,0.1,-0.08268,0.219,0.1,-0.08134,0.2181,0.1,-0.08007,0.2171,0.1,-0.07887,0.21599,0.1,-0.07776,0.21479,0.1,-0.07675,0.21352,0.1,-0.07586,0.21218,0.1,-0.07508,0.21078,0.1,-0.07431,0.20988,0.1,-0.07367,0.20887,0.1,-0.07315,0.20778,0.1,-0.07274,0.20662,0.1,-0.07244,0.20543,0.1,-0.07223,0.2042,0.1,-0.07212,0.20298,0.1,-0.07208,0.20178,0.1,-0.07208,0.02178,0.1,-0.07214,0.01857,0.1,-0.07226,0.01694,0.1,-0.07249,0.01532,0.1,-0.07285,0.01377,0.1,-0.07309,0.01302,0.1,-0.07338,0.0123,0.1,-0.07372,0.01161,0.1,-0.07411,0.01096,0.1,-0.07457,0.01035,0.1,-0.07508,0.00978,0.1,-0.07711,0.00799,0.1,-0.07933,0.00643,0.1,-0.08408,0.00378,0.1,-0.08465,0.00326,0.1,-0.08526,0.00281,0.1,-0.08592,0.00242,0.1,-0.08661,0.00208,0.1,-0.08732,0.00179,0.1,-0.08807,0.00155,0.1,-0.08963,0.00118,0.1,-0.09124,0.00096,0.1,-0.09288,0.00084,0.1,-0.09608,0.00078,0.1,-0.10058,0.00078,0.1,-0.10508,0.00078,0.1,-0.10508,-0.01122,0.1,0.01192,-0.01122,0.1,0.02699,-0.01046,0.1,0.04192,-0.00822,0.1,0.0491,-0.00636,0.1,0.05609,-0.00371,0.1,0.06274,-0.00032,0.1,0.06892,0.00378,0.1,0.07426,0.00823,0.1,0.07914,0.01326,0.1,0.08341,0.0188,0.1,0.08527,0.02173,0.1,0.08692,0.02478,0.1,0.08911,0.02804,0.1,0.09097,0.03152,0.1,0.09252,0.03519,0.1,0.09377,0.03899,0.1,0.09472,0.0429,0.1,0.09539,0.04686,0.1,0.09579,0.05083,0.1,0.09592,0.05478,0.1,0.09579,0.05872,0.1,0.09539,0.06269,0.1,0.09472,0.06666,0.1,0.09377,0.07056,0.1,0.09252,0.07437,0.1,0.09097,0.07803,0.1,0.08911,0.08152,0.1,0.00892,0.12978,0.1,0.00308,0.12823,0.1,-0.00292,0.12732,0.1,-0.01508,0.12678,0.1,-0.03608,0.12678,0.1,-0.03608,0.22278,0.1,-0.02408,0.22278,0.1,-0.00908,0.22278,0.1,-0.00427,0.22263,0.1,0.00062,0.22216,0.1,0.00551,0.22134,0.1,0.01031,0.22013,0.1,0.01493,0.2185,0.1,0.0193,0.21643,0.1,0.02136,0.21521,0.1,0.02332,0.21386,0.1,0.02518,0.21239,0.1,0.02692,0.21078,0.1,0.02842,0.20917,0.1,0.02981,0.20746,0.1,0.03229,0.20378,0.1,0.03435,0.19979,0.1,0.03602,0.19556,0.1,0.03731,0.19118,0.1,0.03821,0.18671,0.1,0.03874,0.18222,0.1,0.03892,0.17778,0.1,0.03877,0.17246,0.1,0.03826,0.16714,0.1,0.03733,0.16189,0.1,0.03592,0.15678,0.1,0.03414,0.15206,0.1,0.03202,0.14748,0.1,0.02692,0.13878,0.1,0.02505,0.1371,0.1,0.02302,0.1356,0.1,0.02086,0.13427,0.1,0.01858,0.13311,0.1,0.01381,0.1312,0.1,0.03892,0.01578,0.1,0.03673,0.01414,0.1,0.03445,0.01265,0.1,0.02961,0.01007,0.1,0.02447,0.00798,0.1,0.01912,0.00637,0.1,0.01361,0.00518,0.1,0.00803,0.00437,0.1,-0.00308,0.00378,0.1,-0.01524,0.00432,0.1,-0.02124,0.00523,0.1,-0.02708,0.00678,0.1,-0.0281,0.00752,0.1,-0.02907,0.00834,0.1,-0.02998,0.00925,0.1,-0.03084,0.01022,0.1,-0.03164,0.01125,0.1,-0.03238,0.01234,0.1,-0.03367,0.01466,0.1,-0.0347,0.01712,0.1,-0.03546,0.01966,0.1,-0.03592,0.02223,0.1,-0.03608,0.02478,0.1,-0.03608,0.11178,0.1,-0.02708,0.11178,0.1,-0.00608,0.11178,0.1,-0.00044,0.11156,0.1,0.00528,0.11091,0.1,0.01097,0.1098,0.1,0.01655,0.10822,0.1,0.02193,0.10614,0.1,0.02701,0.10356,0.1,0.03171,0.10044,0.1,0.03388,0.09868,0.1,0.03592,0.09678,0.1,0.03965,0.09331,0.1,0.04308,0.08942,0.1,0.04614,0.08515,0.1,0.04878,0.08059,0.1,0.05094,0.0758,0.1,0.05256,0.07085,0.1,0.05314,0.06835,0.1,0.05357,0.06582,0.1,0.05383,0.0633,0.1,0.05392,0.06078,0.1,0.05373,0.05476,0.1,0.05315,0.04865,0.1,0.05212,0.04254,0.1,0.05061,0.03654,0.1,0.04858,0.03076,0.1,0.04598,0.0253,0.1,0.04446,0.02273,0.1,0.04277,0.02027,0.1,0.04093,0.01795,0.1]);
IndexedFaceSet679.coord = Coordinate680;

let Normal681 = browser.currentScene.createNode("Normal");
Normal681.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet679.normal = Normal681;

Shape677.geometry = IndexedFaceSet679;

Transform5.children[134] = Shape677;

let Shape682 = browser.currentScene.createNode("Shape");
let Appearance683 = browser.currentScene.createNode("Appearance");
Appearance683.DEF = "baseplateAppearance";
let Material684 = browser.currentScene.createNode("Material");
Material684.ambientIntensity = 1;
Material684.diffuseColor = new SFColor(new float[1,1,1]);
Material684.shininess = 1;
Appearance683.material = Material684;

Shape682.appearance = Appearance683;

let IndexedFaceSet685 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet685.coordIndex = new MFInt32(new int[102,0,105,-1,101,105,100,-1,101,102,105,-1,2,104,1,-1,2,3,104,-1,104,3,4,-1,138,4,5,-1,137,5,6,-1,136,6,7,-1,135,7,8,-1,134,8,9,-1,133,9,10,-1,11,133,10,-1,11,132,133,-1,11,12,132,-1,132,12,131,-1,131,12,13,-1,130,13,14,-1,129,14,15,-1,128,15,16,-1,127,16,17,-1,18,127,17,-1,18,19,127,-1,127,19,1169,-1,500,1169,1170,-1,1171,500,1170,-1,1171,850,500,-1,500,850,499,-1,499,850,498,-1,498,850,497,-1,497,850,496,-1,496,850,851,-1,852,496,851,-1,852,853,496,-1,496,853,854,-1,832,854,831,-1,832,496,854,-1,832,495,496,-1,832,494,495,-1,832,493,494,-1,832,492,493,-1,832,491,492,-1,832,490,491,-1,832,489,490,-1,832,833,489,-1,489,833,488,-1,488,833,834,-1,835,488,834,-1,835,487,488,-1,835,486,487,-1,835,836,486,-1,486,836,485,-1,485,836,484,-1,484,836,483,-1,483,836,482,-1,482,836,481,-1,481,836,480,-1,480,836,479,-1,479,836,478,-1,478,836,477,-1,477,836,476,-1,476,836,475,-1,475,836,474,-1,474,836,837,-1,473,837,472,-1,473,474,837,-1,104,4,138,-1,139,104,138,-1,139,140,104,-1,104,140,141,-1,142,104,141,-1,142,143,104,-1,104,143,144,-1,145,104,144,-1,145,146,104,-1,104,146,147,-1,148,104,147,-1,148,149,104,-1,104,149,150,-1,151,104,150,-1,151,152,104,-1,104,152,153,-1,154,104,153,-1,154,155,104,-1,104,155,267,-1,268,104,267,-1,268,103,104,-1,268,269,103,-1,103,269,270,-1,597,270,596,-1,597,103,270,-1,597,637,103,-1,597,598,637,-1,637,598,599,-1,636,599,600,-1,601,636,600,-1,601,602,636,-1,636,602,603,-1,604,636,603,-1,604,635,636,-1,604,605,635,-1,635,605,606,-1,607,635,606,-1,607,608,635,-1,635,608,782,-1,783,635,782,-1,783,784,635,-1,635,784,785,-1,786,635,785,-1,786,787,635,-1,635,787,788,-1,789,635,788,-1,789,790,635,-1,635,790,791,-1,792,635,791,-1,138,5,137,-1,137,6,136,-1,136,7,135,-1,135,8,134,-1,134,9,133,-1,131,13,130,-1,130,14,129,-1,129,15,128,-1,128,16,127,-1,20,1163,19,-1,20,1162,1163,-1,20,1161,1162,-1,20,1160,1161,-1,20,1159,1160,-1,20,48,1159,-1,20,47,48,-1,20,46,47,-1,20,45,46,-1,20,44,45,-1,20,40,44,-1,20,29,40,-1,20,21,29,-1,29,21,22,-1,23,29,22,-1,23,24,29,-1,29,24,25,-1,26,29,25,-1,26,28,29,-1,26,27,28,-1,30,31,29,-1,29,31,32,-1,33,29,32,-1,33,34,29,-1,29,34,35,-1,36,29,35,-1,36,37,29,-1,29,37,38,-1,39,29,38,-1,39,40,29,-1,41,42,40,-1,40,42,43,-1,44,40,43,-1,49,1149,48,-1,49,1148,1149,-1,49,1147,1148,-1,49,1146,1147,-1,49,1145,1146,-1,49,1128,1145,-1,49,1127,1128,-1,49,1126,1127,-1,49,1125,1126,-1,49,1124,1125,-1,49,1123,1124,-1,49,1122,1123,-1,49,1121,1122,-1,49,1120,1121,-1,49,1119,1120,-1,49,73,1119,-1,49,72,73,-1,49,50,72,-1,72,50,57,-1,71,57,58,-1,59,71,58,-1,59,60,71,-1,71,60,61,-1,62,71,61,-1,62,63,71,-1,71,63,64,-1,65,71,64,-1,65,70,71,-1,65,66,70,-1,70,66,69,-1,69,66,68,-1,68,66,67,-1,50,51,57,-1,57,51,52,-1,53,57,52,-1,53,54,57,-1,57,54,55,-1,56,57,55,-1,72,57,71,-1,73,74,1119,-1,1119,74,1118,-1,1118,74,75,-1,1117,75,76,-1,1116,76,77,-1,1115,77,78,-1,1114,78,1113,-1,1114,1115,78,-1,1118,75,1117,-1,1117,76,1116,-1,1116,77,1115,-1,79,1111,78,-1,79,1110,1111,-1,79,1109,1110,-1,79,1107,1109,-1,79,1106,1107,-1,79,1105,1106,-1,79,1104,1105,-1,79,1103,1104,-1,79,1102,1103,-1,79,1101,1102,-1,79,1261,1101,-1,79,106,1261,-1,79,80,106,-1,106,80,105,-1,105,80,81,-1,82,105,81,-1,82,83,105,-1,105,83,85,-1,86,105,85,-1,86,87,105,-1,105,87,88,-1,89,105,88,-1,89,90,105,-1,105,90,91,-1,92,105,91,-1,92,93,105,-1,105,93,94,-1,95,105,94,-1,95,96,105,-1,105,96,97,-1,98,105,97,-1,98,99,105,-1,105,99,100,-1,83,84,85,-1,104,105,1,-1,1,105,0,-1,103,1353,106,-1,103,1333,1353,-1,103,1332,1333,-1,103,254,1332,-1,103,253,254,-1,103,252,253,-1,103,251,252,-1,103,250,251,-1,103,249,250,-1,103,248,249,-1,103,247,248,-1,103,246,247,-1,103,245,246,-1,103,244,245,-1,103,243,244,-1,103,242,243,-1,103,241,242,-1,103,240,241,-1,103,637,240,-1,240,637,638,-1,639,240,638,-1,639,640,240,-1,240,640,641,-1,642,240,641,-1,642,643,240,-1,240,643,645,-1,646,240,645,-1,646,649,240,-1,646,647,649,-1,649,647,648,-1,108,560,107,-1,108,559,560,-1,108,558,559,-1,108,109,558,-1,558,109,557,-1,557,109,556,-1,556,109,110,-1,555,110,554,-1,555,556,110,-1,110,111,554,-1,554,111,553,-1,553,111,552,-1,552,111,112,-1,551,112,550,-1,551,552,112,-1,550,112,185,-1,186,550,185,-1,186,549,550,-1,186,548,549,-1,186,547,548,-1,186,546,547,-1,186,545,546,-1,186,544,545,-1,186,543,544,-1,186,542,543,-1,186,541,542,-1,186,540,541,-1,186,539,540,-1,186,538,539,-1,186,537,538,-1,186,536,537,-1,186,535,536,-1,186,534,535,-1,186,533,534,-1,186,532,533,-1,186,187,532,-1,532,187,188,-1,189,532,188,-1,189,190,532,-1,532,190,530,-1,531,532,530,-1,112,113,185,-1,185,113,114,-1,184,114,183,-1,184,185,114,-1,183,114,182,-1,182,114,115,-1,181,115,180,-1,181,182,115,-1,116,176,115,-1,116,175,176,-1,116,174,175,-1,116,173,174,-1,116,172,173,-1,116,171,172,-1,116,170,171,-1,116,169,170,-1,116,117,169,-1,169,117,168,-1,168,117,167,-1,167,117,166,-1,166,117,165,-1,165,117,164,-1,164,117,163,-1,163,117,162,-1,162,117,161,-1,161,117,160,-1,160,117,159,-1,159,117,118,-1,119,159,118,-1,119,120,159,-1,159,120,509,-1,510,159,509,-1,510,511,159,-1,159,511,512,-1,212,512,513,-1,514,212,513,-1,514,515,212,-1,212,515,516,-1,517,212,516,-1,517,211,212,-1,517,518,211,-1,211,518,210,-1,210,518,519,-1,520,210,519,-1,520,209,210,-1,520,208,209,-1,520,521,208,-1,208,521,207,-1,207,521,522,-1,206,522,205,-1,206,207,522,-1,120,121,509,-1,509,121,508,-1,508,121,507,-1,507,121,122,-1,506,122,505,-1,506,507,122,-1,122,123,505,-1,505,123,504,-1,504,123,502,-1,503,504,502,-1,502,123,501,-1,501,123,124,-1,500,124,125,-1,126,500,125,-1,126,127,500,-1,500,127,1169,-1,501,124,500,-1,155,156,267,-1,267,156,157,-1,158,267,157,-1,158,107,267,-1,267,107,566,-1,566,107,565,-1,565,107,564,-1,564,107,563,-1,563,107,562,-1,562,107,561,-1,561,107,560,-1,176,177,115,-1,115,177,178,-1,179,115,178,-1,179,180,115,-1,530,190,529,-1,529,190,191,-1,528,191,192,-1,193,528,192,-1,193,194,528,-1,528,194,527,-1,527,194,195,-1,196,527,195,-1,196,526,527,-1,196,197,526,-1,526,197,198,-1,525,198,199,-1,200,525,199,-1,200,524,525,-1,200,201,524,-1,524,201,202,-1,523,202,203,-1,204,523,203,-1,204,205,523,-1,523,205,522,-1,529,191,528,-1,526,198,525,-1,524,202,523,-1,212,159,512,-1,214,657,213,-1,214,215,657,-1,657,215,216,-1,217,657,216,-1,217,218,657,-1,657,218,219,-1,220,657,219,-1,220,655,657,-1,220,653,655,-1,220,652,653,-1,220,221,652,-1,652,221,222,-1,223,652,222,-1,223,224,652,-1,652,224,225,-1,226,652,225,-1,226,227,652,-1,652,227,228,-1,229,652,228,-1,229,230,652,-1,652,230,231,-1,232,652,231,-1,232,233,652,-1,652,233,234,-1,235,652,234,-1,235,236,652,-1,652,236,237,-1,238,652,237,-1,238,239,652,-1,652,239,240,-1,651,240,650,-1,651,652,240,-1,254,255,1332,-1,1332,255,256,-1,257,1332,256,-1,257,258,1332,-1,1332,258,259,-1,260,1332,259,-1,260,261,1332,-1,1332,261,262,-1,263,1332,262,-1,263,264,1332,-1,1332,264,265,-1,266,1332,265,-1,266,213,1332,-1,1332,213,731,-1,732,1332,731,-1,732,734,1332,-1,732,733,734,-1,271,272,270,-1,270,272,596,-1,596,272,273,-1,274,596,273,-1,274,275,596,-1,596,275,276,-1,277,596,276,-1,277,278,596,-1,596,278,279,-1,280,596,279,-1,280,281,596,-1,596,281,282,-1,283,596,282,-1,283,284,596,-1,596,284,285,-1,286,596,285,-1,286,595,596,-1,286,795,595,-1,286,794,795,-1,286,287,794,-1,794,287,288,-1,289,794,288,-1,289,290,794,-1,794,290,291,-1,292,794,291,-1,292,793,794,-1,292,293,793,-1,793,293,294,-1,295,793,294,-1,295,296,793,-1,793,296,297,-1,298,793,297,-1,298,299,793,-1,793,299,300,-1,369,300,301,-1,302,369,301,-1,302,303,369,-1,369,303,304,-1,305,369,304,-1,305,306,369,-1,369,306,307,-1,308,369,307,-1,308,310,369,-1,308,309,310,-1,793,300,369,-1,370,793,369,-1,370,371,793,-1,793,371,392,-1,837,392,393,-1,472,393,471,-1,472,837,393,-1,310,311,369,-1,369,311,312,-1,313,369,312,-1,313,368,369,-1,313,314,368,-1,368,314,367,-1,367,314,315,-1,366,315,365,-1,366,367,315,-1,365,315,364,-1,364,315,316,-1,363,316,362,-1,363,364,316,-1,316,317,362,-1,362,317,318,-1,361,318,360,-1,361,362,318,-1,360,318,359,-1,359,318,319,-1,358,319,357,-1,358,359,319,-1,320,348,319,-1,320,334,348,-1,320,333,334,-1,320,321,333,-1,333,321,322,-1,332,322,323,-1,328,323,327,-1,328,332,323,-1,328,329,332,-1,332,329,331,-1,331,329,330,-1,333,322,332,-1,327,323,326,-1,326,323,324,-1,325,326,324,-1,334,335,348,-1,348,335,347,-1,347,335,346,-1,346,335,336,-1,337,346,336,-1,337,338,346,-1,346,338,339,-1,340,346,339,-1,340,345,346,-1,340,344,345,-1,340,341,344,-1,344,341,343,-1,343,341,342,-1,349,350,348,-1,348,350,351,-1,352,348,351,-1,352,353,348,-1,348,353,354,-1,355,348,354,-1,355,319,348,-1,355,356,319,-1,319,356,357,-1,371,372,392,-1,392,372,373,-1,374,392,373,-1,374,375,392,-1,392,375,376,-1,384,376,383,-1,384,392,376,-1,384,390,392,-1,384,389,390,-1,384,388,389,-1,384,387,388,-1,384,386,387,-1,384,385,386,-1,377,378,376,-1,376,378,379,-1,380,376,379,-1,380,381,376,-1,376,381,382,-1,383,376,382,-1,390,391,392,-1,793,392,837,-1,848,837,838,-1,839,848,838,-1,839,840,848,-1,848,840,847,-1,847,840,841,-1,842,847,841,-1,842,843,847,-1,847,843,844,-1,845,847,844,-1,845,846,847,-1,394,464,393,-1,394,395,464,-1,464,395,396,-1,397,464,396,-1,397,398,464,-1,464,398,399,-1,400,464,399,-1,400,401,464,-1,464,401,402,-1,403,464,402,-1,403,404,464,-1,464,404,405,-1,463,405,462,-1,463,464,405,-1,405,406,462,-1,462,406,407,-1,461,407,408,-1,460,408,409,-1,459,409,410,-1,458,410,457,-1,458,459,410,-1,462,407,461,-1,461,408,460,-1,460,409,459,-1,410,411,457,-1,457,411,456,-1,456,411,455,-1,455,411,412,-1,454,412,413,-1,453,413,414,-1,452,414,415,-1,451,415,416,-1,450,416,417,-1,449,417,418,-1,448,418,419,-1,441,419,420,-1,421,441,420,-1,421,422,441,-1,441,422,423,-1,424,441,423,-1,424,425,441,-1,441,425,426,-1,427,441,426,-1,427,440,441,-1,427,428,440,-1,440,428,439,-1,439,428,429,-1,430,439,429,-1,430,431,439,-1,439,431,432,-1,438,432,437,-1,438,439,432,-1,455,412,454,-1,454,413,453,-1,453,414,452,-1,452,415,451,-1,451,416,450,-1,450,417,449,-1,449,418,448,-1,448,419,441,-1,442,448,441,-1,442,443,448,-1,448,443,447,-1,447,443,444,-1,445,447,444,-1,445,446,447,-1,433,434,432,-1,432,434,435,-1,436,432,435,-1,436,437,432,-1,464,465,393,-1,393,465,466,-1,467,393,466,-1,467,468,393,-1,393,468,469,-1,470,393,469,-1,470,471,393,-1,634,567,821,-1,633,821,632,-1,633,634,821,-1,569,820,568,-1,569,570,820,-1,820,570,571,-1,572,820,571,-1,572,573,820,-1,820,573,819,-1,819,573,574,-1,575,819,574,-1,575,576,819,-1,819,576,818,-1,818,576,577,-1,578,818,577,-1,578,579,818,-1,818,579,580,-1,581,818,580,-1,581,582,818,-1,818,582,796,-1,797,818,796,-1,797,817,818,-1,797,816,817,-1,797,815,816,-1,797,814,815,-1,797,811,814,-1,797,803,811,-1,797,802,803,-1,797,801,802,-1,797,800,801,-1,797,799,800,-1,797,798,799,-1,582,583,796,-1,796,583,584,-1,585,796,584,-1,585,586,796,-1,796,586,587,-1,795,587,588,-1,589,795,588,-1,589,590,795,-1,795,590,591,-1,592,795,591,-1,592,593,795,-1,795,593,594,-1,595,795,594,-1,796,587,795,-1,637,599,636,-1,782,608,781,-1,781,608,609,-1,780,609,779,-1,780,781,609,-1,779,609,778,-1,778,609,610,-1,777,610,776,-1,777,778,610,-1,611,772,610,-1,611,771,772,-1,611,770,771,-1,611,769,770,-1,611,768,769,-1,611,767,768,-1,611,766,767,-1,611,612,766,-1,766,612,765,-1,765,612,764,-1,764,612,763,-1,763,612,613,-1,762,613,761,-1,762,763,613,-1,761,613,760,-1,760,613,614,-1,759,614,758,-1,759,760,614,-1,614,615,758,-1,758,615,757,-1,757,615,756,-1,756,615,616,-1,755,616,617,-1,754,617,753,-1,754,755,617,-1,756,616,755,-1,617,618,753,-1,753,618,752,-1,752,618,751,-1,751,618,750,-1,750,618,749,-1,749,618,619,-1,748,619,620,-1,747,620,621,-1,622,747,621,-1,622,746,747,-1,622,623,746,-1,746,623,745,-1,745,623,744,-1,744,623,624,-1,743,624,625,-1,742,625,854,-1,1332,854,1331,-1,1332,742,854,-1,1332,741,742,-1,1332,740,741,-1,1332,739,740,-1,1332,738,739,-1,1332,737,738,-1,1332,736,737,-1,1332,735,736,-1,1332,734,735,-1,749,619,748,-1,748,620,747,-1,744,624,743,-1,854,625,831,-1,831,625,626,-1,627,831,626,-1,627,628,831,-1,831,628,629,-1,630,831,629,-1,630,821,831,-1,630,631,821,-1,821,631,632,-1,643,644,645,-1,649,650,240,-1,653,654,655,-1,655,656,657,-1,213,657,712,-1,713,213,712,-1,713,714,213,-1,213,714,715,-1,716,213,715,-1,716,717,213,-1,213,717,718,-1,719,213,718,-1,719,720,213,-1,213,720,721,-1,722,213,721,-1,722,723,213,-1,213,723,724,-1,725,213,724,-1,725,726,213,-1,213,726,727,-1,728,213,727,-1,728,729,213,-1,213,729,730,-1,731,213,730,-1,657,658,712,-1,712,658,659,-1,711,659,710,-1,711,712,659,-1,660,701,659,-1,660,700,701,-1,660,699,700,-1,660,661,699,-1,699,661,698,-1,698,661,697,-1,697,661,662,-1,696,662,663,-1,695,663,664,-1,694,664,665,-1,693,665,666,-1,692,666,667,-1,668,692,667,-1,668,669,692,-1,692,669,670,-1,671,692,670,-1,671,672,692,-1,692,672,691,-1,691,672,688,-1,690,688,689,-1,690,691,688,-1,697,662,696,-1,696,663,695,-1,695,664,694,-1,694,665,693,-1,693,666,692,-1,672,673,688,-1,688,673,674,-1,687,674,675,-1,676,687,675,-1,676,686,687,-1,676,677,686,-1,686,677,678,-1,679,686,678,-1,679,680,686,-1,686,680,685,-1,685,680,684,-1,684,680,683,-1,683,680,681,-1,682,683,681,-1,688,674,687,-1,701,702,659,-1,659,702,703,-1,704,659,703,-1,704,705,659,-1,659,705,706,-1,707,659,706,-1,707,708,659,-1,659,708,709,-1,710,659,709,-1,742,743,625,-1,772,773,610,-1,610,773,774,-1,775,610,774,-1,775,776,610,-1,804,805,803,-1,803,805,806,-1,807,803,806,-1,807,808,803,-1,803,808,809,-1,810,803,809,-1,810,811,803,-1,812,813,811,-1,811,813,814,-1,820,821,568,-1,568,821,567,-1,822,829,821,-1,822,828,829,-1,822,827,828,-1,822,826,827,-1,822,823,826,-1,826,823,824,-1,825,826,824,-1,829,830,821,-1,821,830,831,-1,793,837,848,-1,849,793,848,-1,855,1406,854,-1,855,856,1406,-1,1406,856,1405,-1,1405,856,1204,-1,1205,1405,1204,-1,1205,1404,1405,-1,1205,1229,1404,-1,1205,1228,1229,-1,1205,1227,1228,-1,1205,1217,1227,-1,1205,1216,1217,-1,1205,1206,1216,-1,1216,1206,1207,-1,1208,1216,1207,-1,1208,1215,1216,-1,1208,1214,1215,-1,1208,1213,1214,-1,1208,1212,1213,-1,1208,1211,1212,-1,1208,1210,1211,-1,1208,1209,1210,-1,857,1200,856,-1,857,1199,1200,-1,857,858,1199,-1,1199,858,1198,-1,1198,858,859,-1,1197,859,860,-1,861,1197,860,-1,861,1196,1197,-1,861,862,1196,-1,1196,862,1195,-1,1195,862,863,-1,1194,863,1193,-1,1194,1195,863,-1,1198,859,1197,-1,863,864,1193,-1,1193,864,1192,-1,1192,864,1191,-1,1191,864,865,-1,1190,865,866,-1,1189,866,867,-1,1188,867,868,-1,1187,868,869,-1,870,1187,869,-1,870,1186,1187,-1,870,871,1186,-1,1186,871,872,-1,1185,872,873,-1,874,1185,873,-1,874,1184,1185,-1,874,875,1184,-1,1184,875,879,-1,1183,879,880,-1,881,1183,880,-1,881,1182,1183,-1,881,882,1182,-1,1182,882,883,-1,1181,883,884,-1,885,1181,884,-1,885,1180,1181,-1,885,886,1180,-1,1180,886,1179,-1,1179,886,887,-1,1178,887,888,-1,889,1178,888,-1,889,1177,1178,-1,889,991,1177,-1,889,890,991,-1,991,890,891,-1,892,991,891,-1,892,893,991,-1,991,893,989,-1,990,991,989,-1,1191,865,1190,-1,1190,866,1189,-1,1189,867,1188,-1,1188,868,1187,-1,1186,872,1185,-1,879,875,878,-1,878,875,876,-1,877,878,876,-1,1184,879,1183,-1,1182,883,1181,-1,1179,887,1178,-1,894,966,893,-1,894,895,966,-1,966,895,896,-1,897,966,896,-1,897,898,966,-1,966,898,899,-1,900,966,899,-1,900,901,966,-1,966,901,902,-1,904,902,903,-1,904,966,902,-1,904,905,966,-1,966,905,906,-1,907,966,906,-1,907,908,966,-1,966,908,965,-1,965,908,909,-1,910,965,909,-1,910,964,965,-1,910,911,964,-1,964,911,963,-1,963,911,912,-1,962,912,961,-1,962,963,912,-1,912,913,961,-1,961,913,960,-1,960,913,959,-1,959,913,914,-1,915,959,914,-1,915,958,959,-1,915,957,958,-1,915,956,957,-1,915,916,956,-1,956,916,955,-1,955,916,954,-1,954,916,953,-1,953,916,952,-1,952,916,945,-1,951,945,950,-1,951,952,945,-1,916,917,945,-1,945,917,931,-1,932,945,931,-1,932,944,945,-1,932,943,944,-1,932,933,943,-1,943,933,934,-1,935,943,934,-1,935,936,943,-1,943,936,937,-1,942,937,941,-1,942,943,937,-1,931,917,930,-1,930,917,918,-1,919,930,918,-1,919,929,930,-1,919,920,929,-1,929,920,925,-1,926,929,925,-1,926,928,929,-1,926,927,928,-1,921,923,920,-1,921,922,923,-1,923,924,920,-1,920,924,925,-1,937,938,941,-1,941,938,940,-1,940,938,939,-1,946,947,945,-1,945,947,948,-1,949,945,948,-1,949,950,945,-1,966,967,893,-1,893,967,968,-1,969,893,968,-1,969,970,893,-1,893,970,971,-1,972,893,971,-1,972,973,893,-1,893,973,983,-1,989,983,988,-1,989,893,983,-1,974,975,973,-1,973,975,976,-1,977,973,976,-1,977,978,973,-1,973,978,979,-1,980,973,979,-1,980,981,973,-1,973,981,982,-1,983,973,982,-1,984,985,983,-1,983,985,986,-1,987,983,986,-1,987,988,983,-1,992,1070,991,-1,992,1069,1070,-1,992,1068,1069,-1,992,1067,1068,-1,992,1066,1067,-1,992,1065,1066,-1,992,1064,1065,-1,992,993,1064,-1,1064,993,994,-1,995,1064,994,-1,995,996,1064,-1,1064,996,997,-1,998,1064,997,-1,998,999,1064,-1,1064,999,1000,-1,1001,1064,1000,-1,1001,1002,1064,-1,1064,1002,1003,-1,1004,1064,1003,-1,1004,1063,1064,-1,1004,1005,1063,-1,1063,1005,1006,-1,1062,1006,1007,-1,1061,1007,1008,-1,1060,1008,1009,-1,1059,1009,1058,-1,1059,1060,1009,-1,1063,1006,1062,-1,1062,1007,1061,-1,1061,1008,1060,-1,1009,1010,1058,-1,1058,1010,1057,-1,1057,1010,1056,-1,1056,1010,1055,-1,1055,1010,1011,-1,1054,1011,1053,-1,1054,1055,1011,-1,1011,1012,1053,-1,1053,1012,1052,-1,1052,1012,1013,-1,1051,1013,1014,-1,1050,1014,1015,-1,1049,1015,1016,-1,1048,1016,1017,-1,1047,1017,1018,-1,1040,1018,1019,-1,1020,1040,1019,-1,1020,1021,1040,-1,1040,1021,1022,-1,1023,1040,1022,-1,1023,1024,1040,-1,1040,1024,1025,-1,1026,1040,1025,-1,1026,1039,1040,-1,1026,1027,1039,-1,1039,1027,1038,-1,1038,1027,1028,-1,1029,1038,1028,-1,1029,1030,1038,-1,1038,1030,1031,-1,1037,1031,1036,-1,1037,1038,1031,-1,1052,1013,1051,-1,1051,1014,1050,-1,1050,1015,1049,-1,1049,1016,1048,-1,1048,1017,1047,-1,1047,1018,1040,-1,1041,1047,1040,-1,1041,1042,1047,-1,1047,1042,1046,-1,1046,1042,1043,-1,1044,1046,1043,-1,1044,1045,1046,-1,1032,1033,1031,-1,1031,1033,1034,-1,1035,1031,1034,-1,1035,1036,1031,-1,1071,1281,1070,-1,1071,1072,1281,-1,1281,1072,1073,-1,1074,1281,1073,-1,1074,1075,1281,-1,1281,1075,1076,-1,1077,1281,1076,-1,1077,1078,1281,-1,1281,1078,1079,-1,1080,1281,1079,-1,1080,1081,1281,-1,1281,1081,1280,-1,1280,1081,1082,-1,1083,1280,1082,-1,1083,1279,1280,-1,1083,1084,1279,-1,1279,1084,1085,-1,1086,1279,1085,-1,1086,1278,1279,-1,1086,1087,1278,-1,1278,1087,1277,-1,1277,1087,1088,-1,1276,1088,1275,-1,1276,1277,1088,-1,1088,1089,1275,-1,1275,1089,1274,-1,1274,1089,1090,-1,1273,1090,1091,-1,1272,1091,1092,-1,1271,1092,1270,-1,1271,1272,1092,-1,1274,1090,1273,-1,1273,1091,1272,-1,1270,1092,1269,-1,1269,1092,1093,-1,1268,1093,1267,-1,1268,1269,1093,-1,1093,1094,1267,-1,1267,1094,1266,-1,1266,1094,1095,-1,1096,1266,1095,-1,1096,1265,1266,-1,1096,1097,1265,-1,1265,1097,1264,-1,1264,1097,1098,-1,1099,1264,1098,-1,1099,1263,1264,-1,1099,1100,1263,-1,1263,1100,1262,-1,1262,1100,1101,-1,1261,1262,1101,-1,1107,1108,1109,-1,1111,1112,78,-1,78,1112,1113,-1,1128,1129,1145,-1,1145,1129,1144,-1,1144,1129,1143,-1,1143,1129,1130,-1,1131,1143,1130,-1,1131,1142,1143,-1,1131,1132,1142,-1,1142,1132,1141,-1,1141,1132,1133,-1,1140,1133,1134,-1,1139,1134,1135,-1,1138,1135,1136,-1,1137,1138,1136,-1,1141,1133,1140,-1,1140,1134,1139,-1,1139,1135,1138,-1,1149,1150,48,-1,48,1150,1151,-1,1152,48,1151,-1,1152,1153,48,-1,48,1153,1154,-1,1155,48,1154,-1,1155,1156,48,-1,48,1156,1157,-1,1158,48,1157,-1,1158,1159,48,-1,1163,1164,19,-1,19,1164,1165,-1,1166,19,1165,-1,1166,1167,19,-1,19,1167,1168,-1,1169,19,1168,-1,1173,1283,1172,-1,1173,1282,1283,-1,1173,1174,1282,-1,1282,1174,1070,-1,1281,1282,1070,-1,1174,1175,1070,-1,1070,1175,1176,-1,991,1176,1177,-1,991,1070,1176,-1,1200,1201,856,-1,856,1201,1202,-1,1203,856,1202,-1,1203,1204,856,-1,1218,1225,1217,-1,1218,1224,1225,-1,1218,1223,1224,-1,1218,1222,1223,-1,1218,1221,1222,-1,1218,1219,1221,-1,1221,1219,1220,-1,1225,1226,1217,-1,1217,1226,1227,-1,1229,1230,1404,-1,1404,1230,1469,-1,1507,1469,1470,-1,1471,1507,1470,-1,1471,1472,1507,-1,1507,1472,1506,-1,1506,1472,1473,-1,1484,1473,1474,-1,1475,1484,1474,-1,1475,1476,1484,-1,1484,1476,1477,-1,1483,1477,1478,-1,1479,1483,1478,-1,1479,1480,1483,-1,1483,1480,1481,-1,1482,1483,1481,-1,1231,1249,1230,-1,1231,1232,1249,-1,1249,1232,1238,-1,1239,1249,1238,-1,1239,1240,1249,-1,1249,1240,1241,-1,1248,1241,1242,-1,1243,1248,1242,-1,1243,1244,1248,-1,1248,1244,1247,-1,1247,1244,1245,-1,1246,1247,1245,-1,1232,1233,1238,-1,1238,1233,1234,-1,1235,1238,1234,-1,1235,1236,1238,-1,1238,1236,1237,-1,1249,1241,1248,-1,1249,1250,1230,-1,1230,1250,1254,-1,1469,1254,1255,-1,1256,1469,1255,-1,1256,1257,1469,-1,1469,1257,1258,-1,1468,1258,1259,-1,1260,1468,1259,-1,1260,106,1468,-1,1260,1261,106,-1,1251,1252,1250,-1,1250,1252,1253,-1,1254,1250,1253,-1,1230,1254,1469,-1,1469,1258,1468,-1,1283,1284,1172,-1,1172,1284,1299,-1,1299,1284,1285,-1,1286,1299,1285,-1,1286,1298,1299,-1,1286,1287,1298,-1,1298,1287,1288,-1,1297,1288,1289,-1,1290,1297,1289,-1,1290,1291,1297,-1,1297,1291,1292,-1,1296,1292,1293,-1,1294,1296,1293,-1,1294,1295,1296,-1,1298,1288,1297,-1,1297,1292,1296,-1,1301,1466,1300,-1,1301,1465,1466,-1,1301,1464,1465,-1,1301,1302,1464,-1,1464,1302,1463,-1,1463,1302,1462,-1,1462,1302,1461,-1,1461,1302,1303,-1,1460,1303,1459,-1,1460,1461,1303,-1,1459,1303,1309,-1,1451,1309,1432,-1,1433,1451,1432,-1,1433,1434,1451,-1,1451,1434,1435,-1,1436,1451,1435,-1,1436,1440,1451,-1,1436,1437,1440,-1,1440,1437,1438,-1,1439,1440,1438,-1,1305,1307,1304,-1,1305,1306,1307,-1,1307,1308,1304,-1,1304,1308,1309,-1,1303,1304,1309,-1,1432,1309,1319,-1,1322,1319,1321,-1,1322,1432,1319,-1,1322,1323,1432,-1,1432,1323,1324,-1,1325,1432,1324,-1,1325,1431,1432,-1,1325,1326,1431,-1,1431,1326,1327,-1,1407,1327,1328,-1,1406,1328,854,-1,1406,1407,1328,-1,1309,1310,1319,-1,1319,1310,1311,-1,1312,1319,1311,-1,1312,1313,1319,-1,1319,1313,1314,-1,1315,1319,1314,-1,1315,1316,1319,-1,1319,1316,1317,-1,1318,1319,1317,-1,1319,1320,1321,-1,1431,1327,1407,-1,1430,1407,1429,-1,1430,1431,1407,-1,1328,1329,854,-1,854,1329,1331,-1,1331,1329,1330,-1,1333,1334,1353,-1,1353,1334,1335,-1,1352,1335,1351,-1,1352,1353,1335,-1,1335,1336,1351,-1,1351,1336,1350,-1,1350,1336,1337,-1,1338,1350,1337,-1,1338,1349,1350,-1,1338,1342,1349,-1,1338,1341,1342,-1,1338,1340,1341,-1,1338,1339,1340,-1,1349,1342,1348,-1,1348,1342,1343,-1,1344,1348,1343,-1,1344,1347,1348,-1,1344,1346,1347,-1,1344,1345,1346,-1,1353,1354,106,-1,106,1354,1355,-1,1402,1355,1379,-1,1401,1379,1384,-1,1385,1401,1384,-1,1385,1386,1401,-1,1401,1386,1387,-1,1388,1401,1387,-1,1388,1400,1401,-1,1388,1389,1400,-1,1400,1389,1390,-1,1391,1400,1390,-1,1391,1392,1400,-1,1400,1392,1393,-1,1394,1400,1393,-1,1394,1395,1400,-1,1400,1395,1396,-1,1397,1400,1396,-1,1397,1398,1400,-1,1400,1398,1399,-1,1379,1355,1378,-1,1378,1355,1356,-1,1374,1356,1373,-1,1374,1378,1356,-1,1374,1375,1378,-1,1378,1375,1376,-1,1377,1378,1376,-1,1356,1357,1373,-1,1373,1357,1372,-1,1372,1357,1358,-1,1359,1372,1358,-1,1359,1360,1372,-1,1372,1360,1361,-1,1362,1372,1361,-1,1362,1363,1372,-1,1372,1363,1364,-1,1371,1364,1365,-1,1366,1371,1365,-1,1366,1367,1371,-1,1371,1367,1368,-1,1369,1371,1368,-1,1369,1370,1371,-1,1372,1364,1371,-1,1380,1381,1379,-1,1379,1381,1382,-1,1383,1379,1382,-1,1383,1384,1379,-1,1401,1402,1379,-1,1355,1402,106,-1,106,1402,1300,-1,1467,1300,1466,-1,1467,106,1300,-1,1467,1468,106,-1,1552,1403,1509,-1,1551,1509,1550,-1,1551,1552,1509,-1,1408,1418,1407,-1,1408,1409,1418,-1,1418,1409,1410,-1,1417,1410,1416,-1,1417,1418,1410,-1,1411,1412,1410,-1,1410,1412,1413,-1,1414,1410,1413,-1,1414,1415,1410,-1,1410,1415,1416,-1,1418,1419,1407,-1,1407,1419,1429,-1,1429,1419,1428,-1,1428,1419,1427,-1,1427,1419,1420,-1,1426,1420,1425,-1,1426,1427,1420,-1,1421,1423,1420,-1,1421,1422,1423,-1,1423,1424,1420,-1,1420,1424,1425,-1,1440,1441,1451,-1,1451,1441,1442,-1,1443,1451,1442,-1,1443,1444,1451,-1,1451,1444,1445,-1,1446,1451,1445,-1,1446,1447,1451,-1,1451,1447,1448,-1,1449,1451,1448,-1,1449,1450,1451,-1,1452,1457,1451,-1,1452,1453,1457,-1,1457,1453,1454,-1,1455,1457,1454,-1,1455,1456,1457,-1,1457,1458,1451,-1,1451,1458,1459,-1,1309,1451,1459,-1,1404,1469,1507,-1,1508,1404,1507,-1,1508,1509,1404,-1,1404,1509,1403,-1,1506,1473,1484,-1,1488,1484,1485,-1,1486,1488,1485,-1,1486,1487,1488,-1,1484,1477,1483,-1,1506,1484,1488,-1,1489,1506,1488,-1,1489,1490,1506,-1,1506,1490,1505,-1,1505,1490,1504,-1,1504,1490,1491,-1,1503,1491,1502,-1,1503,1504,1491,-1,1492,1493,1491,-1,1491,1493,1494,-1,1495,1491,1494,-1,1495,1496,1491,-1,1491,1496,1497,-1,1498,1491,1497,-1,1498,1499,1491,-1,1491,1499,1500,-1,1501,1491,1500,-1,1501,1502,1491,-1,1510,1525,1509,-1,1510,1511,1525,-1,1525,1511,1524,-1,1524,1511,1512,-1,1523,1512,1514,-1,1515,1523,1514,-1,1515,1522,1523,-1,1515,1516,1522,-1,1522,1516,1521,-1,1521,1516,1520,-1,1520,1516,1519,-1,1519,1516,1517,-1,1518,1519,1517,-1,1512,1513,1514,-1,1523,1524,1512,-1,1526,1535,1525,-1,1526,1534,1535,-1,1526,1527,1534,-1,1534,1527,1528,-1,1533,1528,1532,-1,1533,1534,1528,-1,1529,1530,1528,-1,1528,1530,1531,-1,1532,1528,1531,-1,1535,1536,1525,-1,1525,1536,1509,-1,1509,1536,1550,-1,1550,1536,1549,-1,1549,1536,1537,-1,1539,1537,1538,-1,1539,1549,1537,-1,1539,1540,1549,-1,1549,1540,1548,-1,1548,1540,1541,-1,1542,1548,1541,-1,1542,1543,1548,-1,1548,1543,1544,-1,1545,1548,1544,-1,1545,1547,1548,-1,1545,1546,1547,-1]);
IndexedFaceSet685.solid = False;
let Coordinate686 = browser.currentScene.createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.66964,0.11214,0,0.66899,0.09749,0,0.6669,0.08287,0,0.66526,0.07569,0,0.66318,0.06865,0,0.66065,0.06178,0,0.65764,0.05514,0,0.65122,0.04402,0,0.64348,0.03364,0,0.63457,0.02427,0,0.62973,0.02004,0,0.62464,0.01614,0,0.61514,0.00917,0,0.60483,0.00331,0,0.59392,-0.00138,0,0.58264,-0.00486,0,0.55882,-0.00932,0,0.54675,-0.01047,0,0.53464,-0.01086,0,0.43264,-0.01086,0,0.43264,0.00114,0,0.44464,0.00114,0,0.44585,0.00118,0,0.44707,0.0013,0,0.44829,0.0015,0,0.44949,0.0018,0,0.45065,0.00221,0,0.45174,0.00273,0,0.45274,0.00337,0,0.45364,0.00414,0,0.455,0.00427,0,0.45634,0.00463,0,0.457,0.00489,0,0.45765,0.00519,0,0.45828,0.00554,0,0.45889,0.00593,0,0.46004,0.00683,0,0.46106,0.00785,0,0.46152,0.00839,0,0.46194,0.00896,0,0.46264,0.01014,0,0.46341,0.01104,0,0.46406,0.01205,0,0.46458,0.01314,0,0.46498,0.0143,0,0.46528,0.0155,0,0.46549,0.01672,0,0.46561,0.01794,0,0.46564,0.01914,0,0.46564,0.20214,0,0.46561,0.20335,0,0.46549,0.20457,0,0.46528,0.20579,0,0.46498,0.20699,0,0.46458,0.20815,0,0.46406,0.20924,0,0.46341,0.21024,0,0.46264,0.21114,0,0.46187,0.21254,0,0.46097,0.21388,0,0.45996,0.21516,0,0.45885,0.21635,0,0.45766,0.21746,0,0.45638,0.21847,0,0.45504,0.21937,0,0.45364,0.22014,0,0.45079,0.22139,0,0.44781,0.22233,0,0.44474,0.22293,0,0.44319,0.22309,0,0.44164,0.22314,0,0.44044,0.22318,0,0.43922,0.2233,0,0.438,0.2235,0,0.4368,0.2238,0,0.43564,0.22421,0,0.43455,0.22473,0,0.43354,0.22537,0,0.43264,0.22614,0,0.43264,0.23814,0,0.54064,0.23814,0,0.5514,0.23753,0,0.56208,0.23576,0,0.57254,0.23293,0,0.58264,0.22914,0,0.59302,0.22612,0,0.60316,0.2222,0,0.61279,0.21724,0,0.61733,0.21434,0,0.62164,0.21114,0,0.62692,0.20703,0,0.63189,0.2025,0,0.63654,0.1976,0,0.64086,0.19236,0,0.64484,0.18685,0,0.64847,0.18111,0,0.65464,0.16914,0,0.65828,0.16272,0,0.66138,0.15597,0,0.66397,0.14897,0,0.66605,0.14176,0,0.66764,0.13442,0,0.66876,0.127,0,-0.75,-0.45,0,0.75,-0.45,0,0.75,0.45,0,-0.75,0.45,0,0.47443,-0.31008,0,0.46642,-0.30104,0,0.45956,-0.2911,0,0.45395,-0.28041,0,0.44967,-0.26912,0,0.44678,-0.25739,0,0.44532,-0.24541,0,0.44532,-0.23333,0,0.44678,-0.22134,0,0.44967,-0.20962,0,0.45395,-0.19833,0,0.45956,-0.18763,0,0.46642,-0.1777,0,0.47443,-0.16866,0,0.48347,-0.16065,0,0.49341,-0.15379,0,0.5041,-0.14818,0,0.51539,-0.1439,0,0.52711,-0.14101,0,0.5391,-0.13955,0,0.55118,-0.13955,0,0.56316,-0.14101,0,0.57489,-0.1439,0,0.58618,-0.14818,0,0.59687,-0.15379,0,0.60681,-0.16065,0,0.61585,-0.16866,0,0.62386,-0.1777,0,0.63072,-0.18763,0,0.63633,-0.19833,0,0.64061,-0.20962,0,0.6435,-0.22134,0,0.64496,-0.23333,0,0.64496,-0.24541,0,0.6435,-0.25739,0,0.64061,-0.26912,0,0.63633,-0.28041,0,0.63072,-0.2911,0,0.62386,-0.30104,0,0.61585,-0.31008,0,0.60681,-0.31809,0,0.59687,-0.32495,0,0.58618,-0.33056,0,0.57489,-0.33484,0,0.56316,-0.33773,0,0.55118,-0.33918,0,0.5391,-0.33918,0,0.52711,-0.33773,0,0.51539,-0.33484,0,0.5041,-0.33056,0,0.49341,-0.32495,0,0.48347,-0.31809,0,0.40463,-0.19956,0,0.40553,-0.19961,0,0.40642,-0.19977,0,0.40729,-0.20004,0,0.40811,-0.20042,0,0.40889,-0.20088,0,0.4096,-0.20144,0,0.41024,-0.20208,0,0.4108,-0.2028,0,0.41127,-0.20357,0,0.41164,-0.2044,0,0.41191,-0.20526,0,0.41207,-0.20615,0,0.41213,-0.20706,0,0.41207,-0.20796,0,0.41191,-0.20885,0,0.41164,-0.20972,0,0.41127,-0.21054,0,0.4108,-0.21132,0,0.41024,-0.21203,0,0.4096,-0.21267,0,0.40889,-0.21323,0,0.40811,-0.2137,0,0.40729,-0.21407,0,0.40642,-0.21434,0,0.40553,-0.2145,0,0.40463,-0.21456,0,0.28941,-0.21456,0,0.28851,-0.2145,0,0.28762,-0.21434,0,0.28675,-0.21407,0,0.28593,-0.2137,0,0.28515,-0.21323,0,0.28444,-0.21267,0,0.2838,-0.21203,0,0.28324,-0.21132,0,0.28277,-0.21054,0,0.2824,-0.20972,0,0.28213,-0.20885,0,0.28197,-0.20796,0,0.28191,-0.20706,0,0.28197,-0.20615,0,0.28213,-0.20526,0,0.2824,-0.2044,0,0.28277,-0.20357,0,0.28324,-0.2028,0,0.2838,-0.20208,0,0.28444,-0.20144,0,0.28515,-0.20088,0,0.28593,-0.20042,0,0.28675,-0.20004,0,0.28762,-0.19977,0,0.28851,-0.19961,0,0.28941,-0.19956,0,-0.30459,-0.19956,0,-0.30368,-0.19961,0,-0.30279,-0.19977,0,-0.30193,-0.20004,0,-0.3011,-0.20042,0,-0.30033,-0.20088,0,-0.29962,-0.20144,0,-0.29898,-0.20208,0,-0.29842,-0.2028,0,-0.29795,-0.20357,0,-0.29758,-0.2044,0,-0.29731,-0.20526,0,-0.29714,-0.20615,0,-0.29709,-0.20706,0,-0.29714,-0.20796,0,-0.29731,-0.20885,0,-0.29758,-0.20972,0,-0.29795,-0.21054,0,-0.29842,-0.21132,0,-0.29898,-0.21203,0,-0.29962,-0.21267,0,-0.30033,-0.21323,0,-0.3011,-0.2137,0,-0.30193,-0.21407,0,-0.30279,-0.21434,0,-0.30368,-0.2145,0,-0.30459,-0.21456,0,-0.56642,-0.21456,0,-0.56732,-0.2145,0,-0.56822,-0.21434,0,-0.56908,-0.21407,0,-0.56991,-0.2137,0,-0.57068,-0.21323,0,-0.57139,-0.21267,0,-0.57203,-0.21203,0,-0.57259,-0.21132,0,-0.57306,-0.21054,0,-0.57343,-0.20972,0,-0.5737,-0.20885,0,-0.57387,-0.20796,0,-0.57392,-0.20706,0,-0.57387,-0.20615,0,-0.5737,-0.20526,0,-0.57343,-0.2044,0,-0.57306,-0.20357,0,-0.57259,-0.2028,0,-0.57203,-0.20208,0,-0.57139,-0.20144,0,-0.57068,-0.20088,0,-0.56991,-0.20042,0,-0.56908,-0.20004,0,-0.56822,-0.19977,0,-0.56732,-0.19961,0,-0.56642,-0.19956,0,0.18261,-0.30602,0,0.17759,-0.30575,0,0.17259,-0.30498,0,0.16768,-0.30375,0,0.16293,-0.30208,0,0.16081,-0.30148,0,0.15872,-0.30075,0,0.15468,-0.29893,0,0.15082,-0.29672,0,0.14718,-0.29421,0,0.14437,-0.29213,0,0.14177,-0.28977,0,0.13941,-0.28717,0,0.13733,-0.28436,0,0.13649,-0.28148,0,0.13587,-0.27853,0,0.13549,-0.27555,0,0.13536,-0.27255,0,0.1354,-0.27045,0,0.13548,-0.26937,0,0.13563,-0.26832,0,0.13587,-0.26729,0,0.13622,-0.26633,0,0.1367,-0.26545,0,0.13733,-0.26467,0,0.13783,-0.26353,0,0.13854,-0.26244,0,0.13941,-0.26144,0,0.14043,-0.26055,0,0.14155,-0.25982,0,0.14274,-0.25925,0,0.14397,-0.25889,0,0.14521,-0.25877,0,0.14679,-0.25882,0,0.14839,-0.25897,0,0.14999,-0.25924,0,0.15157,-0.25964,0,0.15309,-0.26017,0,0.15452,-0.26085,0,0.1552,-0.26125,0,0.15584,-0.26169,0,0.15645,-0.26218,0,0.15702,-0.26271,0,0.1578,-0.26317,0,0.15853,-0.26374,0,0.1592,-0.26442,0,0.15978,-0.26517,0,0.16027,-0.26598,0,0.16064,-0.26684,0,0.16087,-0.26772,0,0.16096,-0.26861,0,0.1608,-0.27112,0,0.16037,-0.2736,0,0.15899,-0.27846,0,0.15817,-0.28033,0,0.15755,-0.28229,0,0.15716,-0.2843,0,0.15705,-0.28532,0,0.15702,-0.28633,0,0.158,-0.28732,0,0.15899,-0.2883,0,0.16032,-0.28947,0,0.16178,-0.2905,0,0.16489,-0.29224,0,0.16591,-0.29227,0,0.16693,-0.29237,0,0.16894,-0.29277,0,0.1709,-0.29339,0,0.17277,-0.29421,0,0.17414,-0.2948,0,0.17556,-0.29527,0,0.17702,-0.29561,0,0.17852,-0.29586,0,0.18155,-0.29612,0,0.18458,-0.29618,0,0.18614,-0.2961,0,0.18769,-0.29588,0,0.18923,-0.29554,0,0.19075,-0.29507,0,0.19223,-0.2945,0,0.19368,-0.29382,0,0.19639,-0.29224,0,0.1996,-0.2913,0,0.20274,-0.29005,0,0.20423,-0.28929,0,0.20565,-0.28842,0,0.20698,-0.28743,0,0.20821,-0.28633,0,0.20957,-0.28488,0,0.21084,-0.28332,0,0.212,-0.28168,0,0.21307,-0.27996,0,0.21401,-0.27818,0,0.21484,-0.27634,0,0.21553,-0.27446,0,0.21608,-0.27255,0,0.21711,-0.2708,0,0.21796,-0.26895,0,0.21865,-0.26701,0,0.21918,-0.26502,0,0.21957,-0.26297,0,0.21983,-0.26091,0,0.22002,-0.2568,0,0.21989,-0.2538,0,0.21951,-0.25082,0,0.21889,-0.24787,0,0.21805,-0.24499,0,0.21688,-0.24189,0,0.21549,-0.23889,0,0.21214,-0.23317,0,0.21151,-0.23212,0,0.21073,-0.23116,0,0.20983,-0.23029,0,0.20882,-0.22951,0,0.20774,-0.22882,0,0.20661,-0.22822,0,0.20544,-0.2277,0,0.20427,-0.22727,0,0.20252,-0.22624,0,0.20067,-0.22539,0,0.19873,-0.2247,0,0.19674,-0.22417,0,0.19469,-0.22379,0,0.19263,-0.22352,0,0.18852,-0.22333,0,0.17474,-0.22333,0,0.17474,-0.20955,0,0.18458,-0.20955,0,0.1875,-0.20943,0,0.19044,-0.20908,0,0.19338,-0.20849,0,0.19625,-0.20765,0,0.19902,-0.20655,0,0.20164,-0.2052,0,0.20406,-0.20357,0,0.20518,-0.20266,0,0.20624,-0.20167,0,0.20737,-0.20045,0,0.20839,-0.19913,0,0.20931,-0.19773,0,0.21013,-0.19627,0,0.2115,-0.19316,0,0.21254,-0.18986,0,0.21329,-0.18644,0,0.21377,-0.18296,0,0.21411,-0.17608,0,0.214,-0.17317,0,0.21365,-0.17022,0,0.21305,-0.16729,0,0.21221,-0.16441,0,0.21112,-0.16164,0,0.20976,-0.15902,0,0.20814,-0.1566,0,0.20722,-0.15548,0,0.20624,-0.15442,0,0.2054,-0.1534,0,0.20446,-0.15246,0,0.20345,-0.1516,0,0.20237,-0.15081,0,0.20122,-0.15009,0,0.20001,-0.14945,0,0.19746,-0.14837,0,0.19477,-0.14755,0,0.19201,-0.14699,0,0.18925,-0.14666,0,0.18655,-0.14655,0,0.18402,-0.14665,0,0.1815,-0.14697,0,0.18025,-0.14724,0,0.17904,-0.14758,0,0.17785,-0.148,0,0.17671,-0.14852,0,0.17359,-0.15026,0,0.17213,-0.15128,0,0.1708,-0.15246,0,0.16768,-0.15419,0,0.16623,-0.15522,0,0.16489,-0.15639,0,0.16391,-0.15738,0,0.16293,-0.15836,0,0.16308,-0.16087,0,0.16351,-0.16335,0,0.16489,-0.16821,0,0.16541,-0.16935,0,0.16583,-0.17054,0,0.16618,-0.17175,0,0.16644,-0.173,0,0.16677,-0.17552,0,0.16686,-0.17805,0,0.16678,-0.17915,0,0.16654,-0.18023,0,0.16616,-0.18128,0,0.16567,-0.18231,0,0.16508,-0.1833,0,0.16442,-0.18423,0,0.16369,-0.18511,0,0.16293,-0.18592,0,0.16156,-0.18652,0,0.16014,-0.18699,0,0.15867,-0.18733,0,0.15718,-0.18758,0,0.15414,-0.18784,0,0.15111,-0.18789,0,0.14999,-0.18783,0,0.14883,-0.18765,0,0.14768,-0.18734,0,0.14657,-0.18691,0,0.14553,-0.18636,0,0.14461,-0.18568,0,0.14383,-0.18488,0,0.14324,-0.18396,0,0.14272,-0.18281,0,0.1423,-0.18163,0,0.14196,-0.18041,0,0.14169,-0.17917,0,0.14137,-0.17664,0,0.14127,-0.17411,0,0.1414,-0.17112,0,0.14178,-0.16813,0,0.1424,-0.16518,0,0.14324,-0.1623,0,0.14787,-0.15615,0,0.15308,-0.15049,0,0.16074,-0.14521,0,0.16883,-0.14064,0,0.17165,-0.13962,0,0.17453,-0.13878,0,0.18043,-0.13756,0,0.18644,-0.1369,0,0.19246,-0.13671,0,0.19816,-0.137,0,0.20102,-0.13739,0,0.20385,-0.13798,0,0.2066,-0.13877,0,0.20926,-0.1398,0,0.21177,-0.14107,0,0.21411,-0.14261,0,0.21838,-0.1445,0,0.2225,-0.14675,0,0.22636,-0.14939,0,0.22817,-0.15087,0,0.22986,-0.15246,0,0.2323,-0.15508,0,0.23449,-0.15793,0,0.23547,-0.15944,0,0.23635,-0.161,0,0.23711,-0.16261,0,0.23774,-0.16427,0,0.23858,-0.16715,0,0.2392,-0.1701,0,0.23958,-0.17308,0,0.23971,-0.17608,0,0.23955,-0.17858,0,0.23912,-0.18107,0,0.23774,-0.18592,0,0.23657,-0.18902,0,0.23518,-0.19202,0,0.23183,-0.19774,0,0.22975,-0.20054,0,0.22739,-0.20314,0,0.22479,-0.2055,0,0.22199,-0.20758,0,0.21773,-0.20951,0,0.21333,-0.21112,0,0.20427,-0.21349,0,0.20427,-0.21546,0,0.21112,-0.21756,0,0.21805,-0.21939,0,0.22167,-0.22044,0,0.2252,-0.22176,0,0.22861,-0.22338,0,0.23183,-0.2253,0,0.2347,-0.22843,0,0.2373,-0.23179,0,0.23963,-0.23536,0,0.24168,-0.23908,0,0.24227,-0.24004,0,0.24281,-0.24104,0,0.24371,-0.24312,0,0.2444,-0.2453,0,0.2449,-0.24756,0,0.24547,-0.25219,0,0.24561,-0.2568,0,0.24552,-0.25917,0,0.24526,-0.26154,0,0.24483,-0.26391,0,0.24425,-0.26627,0,0.24263,-0.27089,0,0.24049,-0.27536,0,0.23788,-0.2796,0,0.23487,-0.28354,0,0.23152,-0.28712,0,0.22789,-0.29027,0,0.22318,-0.29399,0,0.21803,-0.29721,0,0.21253,-0.29992,0,0.20677,-0.30213,0,0.20081,-0.30383,0,0.19475,-0.30505,0,0.18866,-0.30578,0,-0.00048,-0.15836,0,0.00148,-0.16046,0,0.00331,-0.1627,0,0.00655,-0.16751,0,0.00923,-0.17267,0,0.01133,-0.17805,0,0.0131,-0.18429,0,0.01432,-0.19068,0,0.01504,-0.19715,0,0.01527,-0.20364,0,0.01494,-0.21073,0,0.01389,-0.2178,0,0.01206,-0.22468,0,0.01082,-0.22799,0,0.00936,-0.23121,0,0.00738,-0.23711,0,0.00479,-0.24282,0,0.00325,-0.24554,0,0.00153,-0.24814,0,-0.00036,-0.25059,0,-0.00245,-0.25286,0,-0.00455,-0.25482,0,-0.00679,-0.25665,0,-0.0116,-0.25989,0,-0.01676,-0.26257,0,-0.02214,-0.26467,0,-0.02838,-0.26644,0,-0.03477,-0.26767,0,-0.04124,-0.26838,0,-0.04773,-0.26861,0,-0.05422,-0.26838,0,-0.06069,-0.26767,0,-0.06708,-0.26644,0,-0.07332,-0.26467,0,-0.07863,-0.26181,0,-0.08373,-0.25857,0,-0.08855,-0.25493,0,-0.09301,-0.25089,0,-0.09666,-0.2459,0,-0.09987,-0.24058,0,-0.1026,-0.23501,0,-0.10482,-0.22924,0,-0.10634,-0.21648,0,-0.10679,-0.20364,0,-0.10634,-0.1908,0,-0.10482,-0.17805,0,-0.1026,-0.17228,0,-0.09987,-0.1667,0,-0.09666,-0.16139,0,-0.09301,-0.15639,0,-0.08855,-0.15235,0,-0.08373,-0.14872,0,-0.07863,-0.14548,0,-0.07332,-0.14261,0,-0.07011,-0.14115,0,-0.06679,-0.13992,0,-0.05991,-0.13808,0,-0.05285,-0.13704,0,-0.04576,-0.13671,0,-0.03912,-0.137,0,-0.0325,-0.13797,0,-0.02926,-0.13876,0,-0.0261,-0.13979,0,-0.02306,-0.14107,0,-0.02017,-0.14261,0,-0.01466,-0.14574,0,-0.00947,-0.14944,0,-0.00471,-0.15366,0,-0.13042,-0.24499,0,-0.13042,-0.26467,0,-0.2387,-0.26467,0,-0.2387,-0.25089,0,-0.23801,-0.24969,0,-0.2372,-0.24855,0,-0.23629,-0.24749,0,-0.2353,-0.24648,0,-0.23312,-0.24465,0,-0.23082,-0.24302,0,-0.2277,-0.24015,0,-0.22433,-0.23755,0,-0.22076,-0.23522,0,-0.21704,-0.23317,0,-0.21232,-0.229,0,-0.2072,-0.2253,0,-0.19932,-0.22136,0,-0.19145,-0.21742,0,-0.18443,-0.2137,0,-0.17767,-0.20955,0,-0.17275,-0.20463,0,-0.16782,-0.19971,0,-0.16586,-0.19577,0,-0.16389,-0.19183,0,-0.16287,-0.188,0,-0.16227,-0.18406,0,-0.16192,-0.17608,0,-0.162,-0.17313,0,-0.16228,-0.17011,0,-0.16279,-0.16707,0,-0.16355,-0.1641,0,-0.1646,-0.16128,0,-0.16524,-0.15994,0,-0.16597,-0.15867,0,-0.16678,-0.15748,0,-0.16769,-0.15636,0,-0.16869,-0.15534,0,-0.16979,-0.15442,0,-0.17085,-0.15344,0,-0.17197,-0.15253,0,-0.17439,-0.1509,0,-0.17701,-0.14955,0,-0.17978,-0.14845,0,-0.18265,-0.14761,0,-0.18559,-0.14702,0,-0.18854,-0.14667,0,-0.19145,-0.14655,0,-0.19324,-0.14663,0,-0.19502,-0.14686,0,-0.19678,-0.14723,0,-0.19853,-0.14772,0,-0.20195,-0.14897,0,-0.20523,-0.15049,0,-0.21035,-0.15418,0,-0.21507,-0.15836,0,-0.21492,-0.16087,0,-0.21449,-0.16335,0,-0.21311,-0.16821,0,-0.21259,-0.16935,0,-0.21217,-0.17054,0,-0.21182,-0.17175,0,-0.21156,-0.173,0,-0.21123,-0.17552,0,-0.21114,-0.17805,0,-0.21122,-0.17915,0,-0.21146,-0.18023,0,-0.21184,-0.18128,0,-0.21233,-0.18231,0,-0.21292,-0.1833,0,-0.21358,-0.18423,0,-0.21431,-0.18511,0,-0.21507,-0.18592,0,-0.21644,-0.18652,0,-0.21786,-0.18699,0,-0.21933,-0.18733,0,-0.22082,-0.18758,0,-0.22386,-0.18784,0,-0.22689,-0.18789,0,-0.22798,-0.18781,0,-0.22906,-0.18757,0,-0.23012,-0.1872,0,-0.23115,-0.1867,0,-0.23213,-0.18611,0,-0.23307,-0.18545,0,-0.23395,-0.18472,0,-0.23476,-0.18396,0,-0.23528,-0.18281,0,-0.2357,-0.18163,0,-0.23604,-0.18041,0,-0.23631,-0.17917,0,-0.23663,-0.17664,0,-0.23673,-0.17411,0,-0.23658,-0.17063,0,-0.23617,-0.16717,0,-0.23476,-0.16033,0,-0.23268,-0.15753,0,-0.23032,-0.15493,0,-0.22772,-0.15257,0,-0.22492,-0.15049,0,-0.22322,-0.1489,0,-0.22142,-0.14743,0,-0.21756,-0.14479,0,-0.21344,-0.14254,0,-0.20917,-0.14064,0,-0.20441,-0.13898,0,-0.1995,-0.13774,0,-0.19451,-0.13697,0,-0.18948,-0.13671,0,-0.18453,-0.13686,0,-0.17952,-0.13736,0,-0.17452,-0.1382,0,-0.1696,-0.13942,0,-0.16482,-0.14104,0,-0.16027,-0.14308,0,-0.156,-0.14557,0,-0.15399,-0.14698,0,-0.15207,-0.14852,0,-0.15042,-0.14964,0,-0.14882,-0.15088,0,-0.14729,-0.15224,0,-0.14583,-0.1537,0,-0.14315,-0.15691,0,-0.14083,-0.16043,0,-0.13894,-0.16419,0,-0.13817,-0.16613,0,-0.13752,-0.1681,0,-0.13701,-0.17009,0,-0.13663,-0.17209,0,-0.1364,-0.17409,0,-0.13632,-0.17608,0,-0.13652,-0.18019,0,-0.13678,-0.18226,0,-0.13717,-0.1843,0,-0.1377,-0.1863,0,-0.13838,-0.18823,0,-0.13923,-0.19008,0,-0.14026,-0.19183,0,-0.14081,-0.19374,0,-0.14151,-0.19562,0,-0.14233,-0.19746,0,-0.14328,-0.19924,0,-0.14434,-0.20096,0,-0.14551,-0.2026,0,-0.14678,-0.20416,0,-0.14814,-0.20561,0,-0.15126,-0.20848,0,-0.15463,-0.21108,0,-0.1582,-0.21341,0,-0.16192,-0.21546,0,-0.17465,-0.22151,0,-0.18751,-0.22727,0,-0.19217,-0.2293,0,-0.1967,-0.23161,0,-0.20106,-0.23422,0,-0.20523,-0.23711,0,-0.21332,-0.24065,0,-0.21723,-0.24269,0,-0.22098,-0.24499,0,0.11961,-0.2568,0,0.11961,-0.26467,0,0.04283,-0.26467,0,0.04283,-0.2568,0,0.05268,-0.2568,0,0.0552,-0.2567,0,0.05773,-0.25638,0,0.05897,-0.25611,0,0.06019,-0.25577,0,0.06137,-0.25535,0,0.06252,-0.25483,0,0.06341,-0.25475,0,0.06429,-0.25451,0,0.06515,-0.25414,0,0.06596,-0.25366,0,0.06672,-0.25307,0,0.06739,-0.2524,0,0.06797,-0.25167,0,0.06843,-0.25089,0,0.06906,-0.25012,0,0.06954,-0.24924,0,0.06989,-0.24827,0,0.07013,-0.24725,0,0.07028,-0.2462,0,0.07036,-0.24512,0,0.07039,-0.24302,0,0.07039,-0.16033,0,0.04086,-0.16033,0,0.04086,-0.15049,0,0.04677,-0.15049,0,0.05229,-0.15026,0,0.05779,-0.14954,0,0.0632,-0.14831,0,0.06843,-0.14655,0,0.0727,-0.14466,0,0.07681,-0.14241,0,0.08068,-0.13977,0,0.08248,-0.13829,0,0.08418,-0.13671,0,0.09402,-0.13671,0,0.0931,-0.14107,0,0.09249,-0.1455,0,0.09205,-0.15442,0,0.09205,-0.17411,0,0.09205,-0.24302,0,0.09205,-0.24893,0,0.09256,-0.24984,0,0.09315,-0.25072,0,0.09381,-0.25156,0,0.09454,-0.25235,0,0.09532,-0.25307,0,0.09616,-0.25373,0,0.09704,-0.25432,0,0.09796,-0.25483,0,0.10046,-0.25499,0,0.10294,-0.25542,0,0.1078,-0.2568,0,0.29253,-0.02042,0,0.28487,-0.02001,0,0.27725,-0.01884,0,0.26978,-0.01695,0,0.26253,-0.01442,0,0.2593,-0.0135,0,0.25612,-0.01238,0,0.24996,-0.00962,0,0.24408,-0.00625,0,0.23853,-0.00242,0,0.23425,0.00075,0,0.23029,0.00435,0,0.2267,0.00831,0,0.22353,0.01258,0,0.22225,0.01697,0,0.22131,0.02146,0,0.22073,0.02601,0,0.22053,0.03058,0,0.22059,0.03379,0,0.22071,0.03542,0,0.22093,0.03703,0,0.2213,0.03859,0,0.22154,0.03934,0,0.22183,0.04006,0,0.22217,0.04074,0,0.22256,0.0414,0,0.22301,0.04201,0,0.22353,0.04258,0,0.22387,0.04346,0,0.22429,0.04433,0,0.22479,0.04517,0,0.22537,0.04599,0,0.226,0.04677,0,0.2267,0.04751,0,0.22745,0.04821,0,0.22825,0.04886,0,0.22908,0.04945,0,0.22995,0.04998,0,0.23085,0.05045,0,0.23177,0.05084,0,0.2327,0.05116,0,0.23364,0.05139,0,0.23459,0.05153,0,0.23553,0.05158,0,0.23793,0.05151,0,0.24038,0.05127,0,0.24282,0.05086,0,0.24522,0.05026,0,0.24753,0.04944,0,0.24972,0.04841,0,0.25075,0.0478,0,0.25173,0.04712,0,0.25266,0.04639,0,0.25353,0.04558,0,0.25471,0.04488,0,0.25528,0.04446,0,0.25583,0.044,0,0.25684,0.04298,0,0.25774,0.04183,0,0.25813,0.04122,0,0.25848,0.04059,0,0.25879,0.03994,0,0.25904,0.03928,0,0.2594,0.03794,0,0.25953,0.03658,0,0.25929,0.03277,0,0.25863,0.02898,0,0.25653,0.02158,0,0.25528,0.01873,0,0.25434,0.01574,0,0.25374,0.01268,0,0.25358,0.01113,0,0.25353,0.00958,0,0.25503,0.00808,0,0.25653,0.00658,0,0.25856,0.00479,0,0.26077,0.00323,0,0.26553,0.00058,0,0.26708,0.00053,0,0.26862,0.00037,0,0.27169,-0.00023,0,0.27468,-0.00117,0,0.27753,-0.00242,0,0.27961,-0.00333,0,0.28178,-0.00404,0,0.28401,-0.00456,0,0.28629,-0.00494,0,0.29091,-0.00533,0,0.29553,-0.00542,0,0.2979,-0.00531,0,0.30027,-0.00497,0,0.30261,-0.00445,0,0.30493,-0.00373,0,0.30719,-0.00286,0,0.30938,-0.00184,0,0.31353,0.00058,0,0.31842,0.00201,0,0.32319,0.00391,0,0.32546,0.00508,0,0.32763,0.0064,0,0.32966,0.0079,0,0.33153,0.00958,0,0.3336,0.0118,0,0.33553,0.01417,0,0.33731,0.01667,0,0.33893,0.01929,0,0.34037,0.022,0,0.34163,0.0248,0,0.34268,0.02767,0,0.34353,0.03058,0,0.3451,0.03324,0,0.34639,0.03607,0,0.34744,0.03902,0,0.34824,0.04206,0,0.34883,0.04517,0,0.34923,0.04832,0,0.34953,0.05458,0,0.34933,0.05915,0,0.34875,0.0637,0,0.34781,0.06819,0,0.34653,0.07258,0,0.34475,0.07729,0,0.34263,0.08187,0,0.33753,0.09058,0,0.33708,0.0914,0,0.33656,0.09219,0,0.336,0.09294,0,0.33538,0.09365,0,0.334,0.09498,0,0.33247,0.09617,0,0.33082,0.09722,0,0.32909,0.09814,0,0.32731,0.09892,0,0.32553,0.09958,0,0.32286,0.10115,0,0.32004,0.10245,0,0.31709,0.10349,0,0.31405,0.1043,0,0.31094,0.10489,0,0.30779,0.10529,0,0.30153,0.10558,0,0.28053,0.10558,0,0.28053,0.12658,0,0.29553,0.12658,0,0.29997,0.12676,0,0.30446,0.12729,0,0.30893,0.1282,0,0.31331,0.12948,0,0.31753,0.13115,0,0.32153,0.13321,0,0.32521,0.13569,0,0.32692,0.13708,0,0.32853,0.13858,0,0.33025,0.14045,0,0.3318,0.14246,0,0.33321,0.14459,0,0.33446,0.14682,0,0.33655,0.15156,0,0.33813,0.15659,0,0.33927,0.1618,0,0.34,0.1671,0,0.34053,0.17758,0,0.34035,0.18202,0,0.33982,0.18651,0,0.33891,0.19098,0,0.33763,0.19537,0,0.33596,0.19959,0,0.33389,0.20358,0,0.33142,0.20727,0,0.33003,0.20898,0,0.32853,0.21058,0,0.32724,0.21214,0,0.32582,0.21357,0,0.32428,0.21489,0,0.32263,0.21609,0,0.32087,0.21718,0,0.31903,0.21816,0,0.31514,0.21981,0,0.31105,0.22106,0,0.30685,0.22192,0,0.30264,0.22242,0,0.29853,0.22258,0,0.29467,0.22243,0,0.29083,0.22194,0,0.28893,0.22153,0,0.28708,0.22101,0,0.28527,0.22036,0,0.28353,0.21958,0,0.27877,0.21693,0,0.27656,0.21537,0,0.27453,0.21358,0,0.26977,0.21093,0,0.26756,0.20937,0,0.26553,0.20758,0,0.26403,0.20608,0,0.26253,0.20458,0,0.26277,0.20077,0,0.26342,0.19698,0,0.26553,0.18958,0,0.26631,0.18784,0,0.26696,0.18603,0,0.26748,0.18418,0,0.26788,0.18228,0,0.26838,0.17843,0,0.26853,0.17458,0,0.26849,0.17374,0,0.2684,0.17291,0,0.26824,0.17208,0,0.26803,0.17126,0,0.26746,0.16965,0,0.26671,0.16809,0,0.26582,0.16659,0,0.2648,0.16516,0,0.26369,0.16382,0,0.26253,0.16258,0,0.26044,0.16167,0,0.25827,0.16096,0,0.25604,0.16044,0,0.25377,0.16006,0,0.24914,0.15967,0,0.24453,0.15958,0,0.24281,0.15967,0,0.24105,0.15996,0,0.23929,0.16042,0,0.2376,0.16108,0,0.23679,0.16148,0,0.23602,0.16192,0,0.2353,0.16242,0,0.23462,0.16296,0,0.23399,0.16354,0,0.23343,0.16417,0,0.23294,0.16485,0,0.23253,0.16558,0,0.23174,0.16733,0,0.2311,0.16913,0,0.23058,0.17099,0,0.23017,0.17288,0,0.22968,0.17673,0,0.22953,0.18058,0,0.22973,0.18515,0,0.23031,0.1897,0,0.23125,0.19419,0,0.23253,0.19858,0,0.23958,0.20795,0,0.24753,0.21658,0,0.25919,0.22462,0,0.27153,0.23158,0,0.27582,0.23314,0,0.28021,0.23442,0,0.2892,0.23628,0,0.29836,0.23728,0,0.30753,0.23758,0,0.31621,0.23714,0,0.32057,0.23654,0,0.32488,0.23565,0,0.32908,0.23443,0,0.33313,0.23287,0,0.33696,0.23093,0,0.34053,0.22858,0,0.34703,0.2257,0,0.35331,0.22227,0,0.35919,0.21825,0,0.36194,0.216,0,0.36453,0.21358,0,0.36823,0.20958,0,0.37158,0.20523,0,0.37307,0.20294,0,0.37441,0.20056,0,0.37557,0.19811,0,0.37653,0.19558,0,0.37781,0.19119,0,0.37875,0.1867,0,0.37933,0.18215,0,0.37953,0.17758,0,0.37929,0.17377,0,0.37863,0.16998,0,0.37653,0.16258,0,0.37475,0.15787,0,0.37263,0.15329,0,0.36753,0.14458,0,0.36436,0.14031,0,0.36076,0.13635,0,0.3568,0.13275,0,0.35253,0.12958,0,0.34604,0.12665,0,0.33933,0.12419,0,0.32553,0.12058,0,0.32553,0.11758,0,0.33597,0.11438,0,0.34653,0.11158,0,0.35203,0.10999,0,0.35742,0.10797,0,0.36261,0.10551,0,0.36753,0.10258,0,0.3719,0.09782,0,0.37587,0.09269,0,0.37942,0.08725,0,0.38253,0.08158,0,0.38344,0.08011,0,0.38425,0.0786,0,0.38562,0.07542,0,0.38667,0.0721,0,0.38744,0.06866,0,0.38831,0.06161,0,0.38853,0.05458,0,0.38839,0.05097,0,0.38799,0.04735,0,0.38734,0.04374,0,0.38644,0.04016,0,0.38399,0.0331,0,0.38072,0.0263,0,0.37674,0.01984,0,0.37215,0.01383,0,0.36705,0.00837,0,0.36153,0.00358,0,0.35434,-0.0021,0,0.34649,-0.00699,0,0.33812,-0.01112,0,0.32933,-0.01449,0,0.32026,-0.01709,0,0.31102,-0.01894,0,0.30174,-0.02005,0,0.06892,0.10278,0,0.07393,0.09881,0,0.0787,0.09452,0,0.08308,0.08985,0,0.08692,0.08478,0,0.08911,0.08152,0,0.09097,0.07803,0,0.09252,0.07437,0,0.09377,0.07056,0,0.09472,0.06666,0,0.09539,0.06269,0,0.09579,0.05872,0,0.09592,0.05478,0,0.09579,0.05083,0,0.09539,0.04686,0,0.09472,0.0429,0,0.09377,0.03899,0,0.09252,0.03519,0,0.09097,0.03152,0,0.08911,0.02804,0,0.08692,0.02478,0,0.08527,0.02173,0,0.08341,0.0188,0,0.07914,0.01326,0,0.07426,0.00823,0,0.06892,0.00378,0,0.06274,-0.00032,0,0.05609,-0.00371,0,0.0491,-0.00636,0,0.04192,-0.00822,0,0.02699,-0.01046,0,0.01192,-0.01122,0,-0.10508,-0.01122,0,-0.10508,0.00078,0,-0.09608,0.00078,0,-0.09288,0.00084,0,-0.09124,0.00096,0,-0.08963,0.00118,0,-0.08807,0.00155,0,-0.08732,0.00179,0,-0.08661,0.00208,0,-0.08592,0.00242,0,-0.08526,0.00281,0,-0.08465,0.00326,0,-0.08408,0.00378,0,-0.07933,0.00643,0,-0.07711,0.00799,0,-0.07508,0.00978,0,-0.07457,0.01035,0,-0.07411,0.01096,0,-0.07372,0.01161,0,-0.07338,0.0123,0,-0.07309,0.01302,0,-0.07285,0.01377,0,-0.07249,0.01532,0,-0.07226,0.01694,0,-0.07214,0.01857,0,-0.07208,0.02178,0,-0.07208,0.20178,0,-0.07212,0.20298,0,-0.07223,0.2042,0,-0.07244,0.20543,0,-0.07274,0.20662,0,-0.07315,0.20778,0,-0.07367,0.20887,0,-0.07431,0.20988,0,-0.07508,0.21078,0,-0.07586,0.21218,0,-0.07675,0.21352,0,-0.07776,0.21479,0,-0.07887,0.21599,0,-0.08007,0.2171,0,-0.08134,0.2181,0,-0.08268,0.219,0,-0.08408,0.21978,0,-0.08563,0.21983,0,-0.08718,0.21999,0,-0.09024,0.22059,0,-0.09323,0.22153,0,-0.09608,0.22278,0,-0.09728,0.22281,0,-0.09851,0.22293,0,-0.09973,0.22314,0,-0.10093,0.22344,0,-0.10208,0.22385,0,-0.10318,0.22437,0,-0.10418,0.22501,0,-0.10508,0.22578,0,-0.10508,0.23778,0,0.00892,0.23778,0,0.01497,0.23758,0,0.02101,0.23701,0,0.03292,0.23478,0,0.04516,0.23093,0,0.05692,0.22578,0,0.06487,0.21714,0,0.07192,0.20778,0,0.07394,0.20483,0,0.07573,0.20169,0,0.07727,0.1984,0,0.07855,0.19499,0,0.07957,0.19149,0,0.08031,0.18793,0,0.08077,0.18435,0,0.08092,0.18078,0,0.08081,0.17768,0,0.0805,0.17459,0,0.0793,0.16845,0,0.07741,0.16248,0,0.07492,0.15678,0,0.06929,0.14898,0,0.06292,0.14178,0,0.0607,0.13971,0,0.05833,0.13777,0,0.05583,0.13599,0,0.05322,0.13437,0,0.0505,0.13293,0,0.0477,0.13168,0,0.04483,0.13062,0,0.04192,0.12978,0,0.037,0.12685,0,0.03181,0.12439,0,0.02643,0.12237,0,0.02092,0.12078,0,0.03292,0.11778,0,0.04492,0.11478,0,0.05724,0.10939,0,0.0632,0.10628,0,-0.35108,0.23778,0,-0.35108,0.22578,0,-0.35393,0.22453,0,-0.35692,0.22359,0,-0.35998,0.22299,0,-0.36153,0.22283,0,-0.36308,0.22278,0,-0.36783,0.22013,0,-0.37005,0.21856,0,-0.37208,0.21678,0,-0.37387,0.21612,0,-0.37564,0.21533,0,-0.37737,0.21441,0,-0.37902,0.21336,0,-0.38055,0.21217,0,-0.38193,0.21085,0,-0.38255,0.21013,0,-0.38312,0.20938,0,-0.38363,0.2086,0,-0.38408,0.20778,0,-0.38519,0.20653,0,-0.38615,0.20516,0,-0.387,0.20371,0,-0.38774,0.20218,0,-0.39008,0.19578,0,-0.40456,0.14762,0,-0.42008,0.09978,0,-0.43714,0.04248,0,-0.45608,-0.01422,0,-0.47108,-0.01422,0,-0.53408,0.17478,0,-0.60008,-0.01422,0,-0.61508,-0.01422,0,-0.63348,0.04866,0,-0.65108,0.11178,0,-0.66332,0.15671,0,-0.67508,0.20178,0,-0.67687,0.20381,0,-0.67843,0.20602,0,-0.68108,0.21078,0,-0.68311,0.21256,0,-0.68533,0.21413,0,-0.69008,0.21678,0,-0.69211,0.21856,0,-0.69433,0.22013,0,-0.69908,0.22278,0,-0.70028,0.22281,0,-0.70151,0.22293,0,-0.70273,0.22314,0,-0.70393,0.22344,0,-0.70508,0.22385,0,-0.70618,0.22437,0,-0.70718,0.22501,0,-0.70808,0.22578,0,-0.70808,0.23778,0,-0.60908,0.23778,0,-0.60908,0.22578,0,-0.6195,0.22363,0,-0.62478,0.223,0,-0.63008,0.22278,0,-0.634,0.22156,0,-0.63601,0.22072,0,-0.6379,0.2197,0,-0.63877,0.21912,0,-0.63956,0.2185,0,-0.64027,0.21784,0,-0.64089,0.21712,0,-0.64139,0.21636,0,-0.64176,0.21555,0,-0.642,0.21469,0,-0.64208,0.21378,0,-0.64058,0.21228,0,-0.63908,0.21078,0,-0.63908,0.20478,0,-0.63238,0.17907,0,-0.62408,0.15378,0,-0.60931,0.10121,0,-0.59408,0.04878,0,-0.53408,0.23478,0,-0.51608,0.23478,0,-0.45008,0.04278,0,-0.43964,0.08179,0,-0.42908,0.12078,0,-0.42166,0.1478,0,-0.41408,0.17478,0,-0.4101,0.18662,0,-0.40865,0.19265,0,-0.40823,0.1957,0,-0.40808,0.19878,0,-0.40808,0.20778,0,-0.40811,0.20861,0,-0.40821,0.20945,0,-0.40836,0.21027,0,-0.40857,0.21109,0,-0.40914,0.21271,0,-0.40989,0.21427,0,-0.41079,0.21577,0,-0.41181,0.2172,0,-0.41291,0.21854,0,-0.41408,0.21978,0,-0.42745,0.2233,0,-0.44108,0.22578,0,-0.44108,0.23778,0,-0.14408,0.06378,0,-0.13208,0.06378,0,-0.13808,-0.01122,0,-0.34208,-0.01122,0,-0.34208,0.00078,0,-0.33008,0.00078,0,-0.32688,0.00084,0,-0.32524,0.00096,0,-0.32363,0.00118,0,-0.32207,0.00155,0,-0.32132,0.00179,0,-0.32061,0.00208,0,-0.31992,0.00242,0,-0.31926,0.00281,0,-0.31865,0.00326,0,-0.31808,0.00378,0,-0.31333,0.00643,0,-0.31111,0.00799,0,-0.30908,0.00978,0,-0.30857,0.01035,0,-0.30811,0.01096,0,-0.30772,0.01161,0,-0.30738,0.0123,0,-0.30709,0.01302,0,-0.30685,0.01377,0,-0.30649,0.01532,0,-0.30626,0.01694,0,-0.30614,0.01857,0,-0.30608,0.02178,0,-0.30608,0.20178,0,-0.30612,0.20298,0,-0.30623,0.2042,0,-0.30644,0.20543,0,-0.30674,0.20662,0,-0.30715,0.20778,0,-0.30767,0.20887,0,-0.30831,0.20988,0,-0.30908,0.21078,0,-0.30978,0.21196,0,-0.3102,0.21253,0,-0.31066,0.21308,0,-0.31169,0.21409,0,-0.31283,0.21499,0,-0.31344,0.21538,0,-0.31407,0.21573,0,-0.31472,0.21604,0,-0.31538,0.21629,0,-0.31672,0.21665,0,-0.31808,0.21678,0,-0.31933,0.21789,0,-0.32069,0.21885,0,-0.32215,0.21969,0,-0.32367,0.22043,0,-0.33008,0.22278,0,-0.33328,0.22284,0,-0.33492,0.22296,0,-0.33653,0.22318,0,-0.33809,0.22355,0,-0.33884,0.22379,0,-0.33955,0.22408,0,-0.34024,0.22442,0,-0.3409,0.22481,0,-0.34151,0.22526,0,-0.34208,0.22578,0,-0.34208,0.23778,0,-0.15008,0.23778,0,-0.15008,0.17778,0,-0.16208,0.17778,0,-0.16598,0.18489,0,-0.17036,0.19174,0,-0.18008,0.20478,0,-0.18442,0.20995,0,-0.18682,0.21248,0,-0.18937,0.2148,0,-0.19207,0.2168,0,-0.19348,0.21765,0,-0.19493,0.21838,0,-0.19641,0.21897,0,-0.19793,0.21941,0,-0.19949,0.21968,0,-0.20108,0.21978,0,-0.21308,0.21978,0,-0.21747,0.22106,0,-0.22196,0.222,0,-0.22651,0.22258,0,-0.23108,0.22278,0,-0.27008,0.22278,0,-0.27008,0.12378,0,-0.24308,0.12378,0,-0.22508,0.12378,0,-0.22329,0.12443,0,-0.22152,0.12522,0,-0.21979,0.12614,0,-0.21814,0.12719,0,-0.21661,0.12838,0,-0.21523,0.12971,0,-0.21461,0.13042,0,-0.21404,0.13117,0,-0.21353,0.13196,0,-0.21308,0.13278,0,-0.20982,0.14017,0,-0.20708,0.14778,0,-0.20408,0.15678,0,-0.20108,0.16578,0,-0.18908,0.16578,0,-0.18908,0.06678,0,-0.20108,0.06678,0,-0.20434,0.07417,0,-0.20708,0.08178,0,-0.20982,0.08939,0,-0.21308,0.09678,0,-0.21582,0.09936,0,-0.21873,0.10176,0,-0.22182,0.10392,0,-0.22508,0.10578,0,-0.22717,0.10669,0,-0.22933,0.10739,0,-0.23156,0.10792,0,-0.23384,0.1083,0,-0.23847,0.10869,0,-0.24308,0.10878,0,-0.27008,0.10878,0,-0.27008,0.03378,0,-0.27008,0.01578,0,-0.26743,0.01102,0,-0.26587,0.00881,0,-0.26408,0.00678,0,-0.26123,0.00553,0,-0.25824,0.00459,0,-0.25518,0.00399,0,-0.25363,0.00383,0,-0.25208,0.00378,0,-0.22808,0.00378,0,-0.21308,0.00378,0,-0.19808,0.00378,0,-0.19427,0.00402,0,-0.19048,0.00467,0,-0.18308,0.00678,0,-0.18188,0.00681,0,-0.18065,0.00693,0,-0.17943,0.00714,0,-0.17823,0.00744,0,-0.17708,0.00785,0,-0.17599,0.00837,0,-0.17498,0.00901,0,-0.17408,0.00978,0,-0.16872,0.01586,0,-0.16403,0.02252,0,-0.15608,0.03678,0,-0.1496,0.05008,0]);
IndexedFaceSet685.coord = Coordinate686;

let Normal687 = browser.currentScene.createNode("Normal");
Normal687.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet685.normal = Normal687;

Shape682.geometry = IndexedFaceSet685;

Transform5.children[135] = Shape682;

let Shape688 = browser.currentScene.createNode("Shape");
let Appearance689 = browser.currentScene.createNode("Appearance");
Appearance689.USE = "baseplateAppearance";
Shape688.appearance = Appearance689;

let IndexedFaceSet690 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet690.coordIndex = new MFInt32(new int[38,0,37,-1,37,0,1,-1,25,1,2,-1,3,25,2,-1,3,15,25,-1,3,14,15,-1,3,13,14,-1,3,12,13,-1,3,11,12,-1,3,4,11,-1,11,4,10,-1,10,4,5,-1,6,10,5,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1,37,1,25,-1,26,37,25,-1,26,27,37,-1,37,27,28,-1,29,37,28,-1,29,30,37,-1,37,30,31,-1,32,37,31,-1,32,33,37,-1,37,33,34,-1,36,34,35,-1,36,37,34,-1,15,16,25,-1,25,16,17,-1,18,25,17,-1,18,19,25,-1,25,19,20,-1,21,25,20,-1,21,24,25,-1,21,23,24,-1,21,22,23,-1]);
IndexedFaceSet690.solid = False;
let Coordinate691 = browser.currentScene.createNode("Coordinate");
Coordinate691.point = new MFVec3f(new float[-0.01508,0.12678,0,-0.00292,0.12732,0,0.00308,0.12823,0,0.00892,0.12978,0,0.01381,0.1312,0,0.01858,0.13311,0,0.02086,0.13427,0,0.02302,0.1356,0,0.02505,0.1371,0,0.02692,0.13878,0,0.03202,0.14748,0,0.03414,0.15206,0,0.03592,0.15678,0,0.03733,0.16189,0,0.03826,0.16714,0,0.03877,0.17246,0,0.03892,0.17778,0,0.03874,0.18222,0,0.03821,0.18671,0,0.03731,0.19118,0,0.03602,0.19556,0,0.03435,0.19979,0,0.03229,0.20378,0,0.02981,0.20746,0,0.02842,0.20917,0,0.02692,0.21078,0,0.02518,0.21239,0,0.02332,0.21386,0,0.02136,0.21521,0,0.0193,0.21643,0,0.01493,0.2185,0,0.01031,0.22013,0,0.00551,0.22134,0,0.00062,0.22216,0,-0.00427,0.22263,0,-0.00908,0.22278,0,-0.02408,0.22278,0,-0.03608,0.22278,0,-0.03608,0.12678,0]);
IndexedFaceSet690.coord = Coordinate691;

let Normal692 = browser.currentScene.createNode("Normal");
Normal692.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet690.normal = Normal692;

Shape688.geometry = IndexedFaceSet690;

Transform5.children[136] = Shape688;

let Shape693 = browser.currentScene.createNode("Shape");
let Appearance694 = browser.currentScene.createNode("Appearance");
Appearance694.DEF = "character3Appearance";
let Material695 = browser.currentScene.createNode("Material");
Material695.ambientIntensity = 1;
Material695.diffuseColor = new SFColor(new float[0.863,0.141,0.122]);
Material695.shininess = 1;
Appearance694.material = Material695;

Shape693.appearance = Appearance694;

let IndexedFaceSet696 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet696.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet696.solid = False;
let Coordinate697 = browser.currentScene.createNode("Coordinate");
Coordinate697.point = new MFVec3f(new float[0.29253,-0.02042,0.1,0.28487,-0.02001,0.1,0.27725,-0.01884,0.1,0.26978,-0.01695,0.1,0.26253,-0.01442,0.1,0.26253,-0.01442,0,0.26978,-0.01695,0,0.27725,-0.01884,0,0.28487,-0.02001,0,0.29253,-0.02042,0]);
IndexedFaceSet696.coord = Coordinate697;

let Normal698 = browser.currentScene.createNode("Normal");
Normal698.vector = new MFVec3f(new float[0,-1,0,-0.10395,-0.99458,0,-0.19952,-0.97989,0,-0.28812,-0.9576,0,-0.37139,-0.92848,0,-0.37139,-0.92848,0,-0.28812,-0.9576,0,-0.19952,-0.97989,0,-0.10395,-0.99458,0,0,-1,0]);
IndexedFaceSet696.normal = Normal698;

Shape693.geometry = IndexedFaceSet696;

Transform5.children[137] = Shape693;

let Shape699 = browser.currentScene.createNode("Shape");
let Appearance700 = browser.currentScene.createNode("Appearance");
Appearance700.USE = "character3Appearance";
Shape699.appearance = Appearance700;

let IndexedFaceSet701 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet701.coordIndex = new MFInt32(new int[11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1]);
IndexedFaceSet701.solid = False;
let Coordinate702 = browser.currentScene.createNode("Coordinate");
Coordinate702.point = new MFVec3f(new float[0.26253,-0.01442,0.1,0.2593,-0.0135,0.1,0.25612,-0.01238,0.1,0.24996,-0.00962,0.1,0.24408,-0.00625,0.1,0.23853,-0.00242,0.1,0.23853,-0.00242,0,0.24408,-0.00625,0,0.24996,-0.00962,0,0.25612,-0.01238,0,0.2593,-0.0135,0,0.26253,-0.01442,0]);
IndexedFaceSet701.coord = Coordinate702;

let Normal703 = browser.currentScene.createNode("Normal");
Normal703.vector = new MFVec3f(new float[-0.24254,-0.97014,0,-0.30355,-0.95282,0,-0.35921,-0.93326,0,-0.45562,-0.89018,0,-0.53473,-0.84502,0,-0.6,-0.8,0,-0.6,-0.8,0,-0.53473,-0.84502,0,-0.45562,-0.89018,0,-0.35921,-0.93326,0,-0.30355,-0.95282,0,-0.24254,-0.97014,0]);
IndexedFaceSet701.normal = Normal703;

Shape699.geometry = IndexedFaceSet701;

Transform5.children[138] = Shape699;

let Shape704 = browser.currentScene.createNode("Shape");
let Appearance705 = browser.currentScene.createNode("Appearance");
Appearance705.USE = "character3Appearance";
Shape704.appearance = Appearance705;

let IndexedFaceSet706 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet706.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet706.solid = False;
let Coordinate707 = browser.currentScene.createNode("Coordinate");
Coordinate707.point = new MFVec3f(new float[0.23853,-0.00242,0.1,0.23425,0.00075,0.1,0.23029,0.00435,0.1,0.2267,0.00831,0.1,0.22353,0.01258,0.1,0.22353,0.01258,0,0.2267,0.00831,0,0.23029,0.00435,0,0.23425,0.00075,0,0.23853,-0.00242,0]);
IndexedFaceSet706.coord = Coordinate707;

let Normal708 = browser.currentScene.createNode("Normal");
Normal708.vector = new MFVec3f(new float[-0.5547,-0.83205,0,-0.63491,-0.77259,0,-0.70711,-0.70711,0,-0.77259,-0.63491,0,-0.83205,-0.5547,0,-0.83205,-0.5547,0,-0.77259,-0.63491,0,-0.70711,-0.70711,0,-0.63491,-0.77259,0,-0.5547,-0.83205,0]);
IndexedFaceSet706.normal = Normal708;

Shape704.geometry = IndexedFaceSet706;

Transform5.children[139] = Shape704;

let Shape709 = browser.currentScene.createNode("Shape");
let Appearance710 = browser.currentScene.createNode("Appearance");
Appearance710.USE = "character3Appearance";
Shape709.appearance = Appearance710;

let IndexedFaceSet711 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet711.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet711.solid = False;
let Coordinate712 = browser.currentScene.createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.22353,0.01258,0.1,0.22225,0.01697,0.1,0.22131,0.02146,0.1,0.22073,0.02601,0.1,0.22053,0.03058,0.1,0.22053,0.03058,0,0.22073,0.02601,0,0.22131,0.02146,0,0.22225,0.01697,0,0.22353,0.01258,0]);
IndexedFaceSet711.coord = Coordinate712;

let Normal713 = browser.currentScene.createNode("Normal");
Normal713.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.97003,-0.24298,0,-0.98605,-0.16647,0,-0.99632,-0.08575,0,-1,0,0,-1,0,0,-0.99632,-0.08575,0,-0.98605,-0.16647,0,-0.97003,-0.24298,0,-0.94868,-0.31623,0]);
IndexedFaceSet711.normal = Normal713;

Shape709.geometry = IndexedFaceSet711;

Transform5.children[140] = Shape709;

let Shape714 = browser.currentScene.createNode("Shape");
let Appearance715 = browser.currentScene.createNode("Appearance");
Appearance715.USE = "character3Appearance";
Shape714.appearance = Appearance715;

let IndexedFaceSet716 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet716.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet716.solid = False;
let Coordinate717 = browser.currentScene.createNode("Coordinate");
Coordinate717.point = new MFVec3f(new float[0.22053,0.03058,0.1,0.22059,0.03379,0.1,0.22071,0.03542,0.1,0.22093,0.03703,0.1,0.2213,0.03859,0.1,0.22154,0.03934,0.1,0.22183,0.04006,0.1,0.22217,0.04074,0.1,0.22256,0.0414,0.1,0.22301,0.04201,0.1,0.22353,0.04258,0.1,0.22353,0.04258,0,0.22301,0.04201,0,0.22256,0.0414,0,0.22217,0.04074,0,0.22183,0.04006,0,0.22154,0.03934,0,0.2213,0.03859,0,0.22093,0.03703,0,0.22071,0.03542,0,0.22059,0.03379,0,0.22053,0.03058,0]);
IndexedFaceSet716.coord = Coordinate717;

let Normal718 = browser.currentScene.createNode("Normal");
Normal718.vector = new MFVec3f(new float[-1,0,0,-0.9988,0.04898,0,-0.99469,0.1029,0,-0.98386,0.17892,0,-0.96007,0.27976,0,-0.94044,0.33996,0,-0.91369,0.40641,0,-0.87821,0.47828,0,-0.8325,0.55403,0,-0.77553,0.63131,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.77553,0.63131,0,-0.8325,0.55403,0,-0.87821,0.47828,0,-0.91369,0.40641,0,-0.94044,0.33996,0,-0.96007,0.27976,0,-0.98386,0.17892,0,-0.99469,0.1029,0,-0.9988,0.04898,0,-1,0,0]);
IndexedFaceSet716.normal = Normal718;

Shape714.geometry = IndexedFaceSet716;

Transform5.children[141] = Shape714;

let Shape719 = browser.currentScene.createNode("Shape");
let Appearance720 = browser.currentScene.createNode("Appearance");
Appearance720.USE = "character3Appearance";
Shape719.appearance = Appearance720;

let IndexedFaceSet721 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet721.coordIndex = new MFInt32(new int[0,1,33,-1,33,1,32,-1,32,1,2,-1,31,2,3,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,17,-1,18,19,15,-1,32,2,31,-1,31,3,30,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,15,16,17,-1]);
IndexedFaceSet721.solid = False;
let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.22353,0.04258,0.1,0.22387,0.04346,0.1,0.22429,0.04433,0.1,0.22479,0.04517,0.1,0.22537,0.04599,0.1,0.226,0.04677,0.1,0.2267,0.04751,0.1,0.22745,0.04821,0.1,0.22825,0.04886,0.1,0.22908,0.04945,0.1,0.22995,0.04998,0.1,0.23085,0.05045,0.1,0.23177,0.05084,0.1,0.2327,0.05116,0.1,0.23364,0.05139,0.1,0.23459,0.05153,0.1,0.23553,0.05158,0.1,0.23553,0.05158,0,0.23459,0.05153,0,0.23364,0.05139,0,0.2327,0.05116,0,0.23177,0.05084,0,0.23085,0.05045,0,0.22995,0.04998,0,0.22908,0.04945,0,0.22825,0.04886,0,0.22745,0.04821,0,0.2267,0.04751,0,0.226,0.04677,0,0.22537,0.04599,0,0.22479,0.04517,0,0.22429,0.04433,0,0.22387,0.04346,0,0.22353,0.04258,0]);
IndexedFaceSet721.coord = Coordinate722;

let Normal723 = browser.currentScene.createNode("Normal");
Normal723.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.91601,0.40116,0,-0.87909,0.47666,0,-0.83912,0.54395,0,-0.79679,0.60426,0,-0.7524,0.6587,0,-0.70594,0.70827,0,-0.65716,0.75375,0,-0.60561,0.79576,0,-0.55069,0.83471,0,-0.49164,0.8708,0,-0.42758,0.90398,0,-0.35756,0.93389,0,-0.28056,0.95984,0,-0.19567,0.98067,0,-0.1022,0.99476,0,0,1,0,0,1,0,-0.1022,0.99476,0,-0.19567,0.98067,0,-0.28056,0.95984,0,-0.35756,0.93389,0,-0.42758,0.90398,0,-0.49164,0.8708,0,-0.55069,0.83471,0,-0.60561,0.79576,0,-0.65716,0.75375,0,-0.70594,0.70827,0,-0.7524,0.6587,0,-0.79679,0.60426,0,-0.83912,0.54395,0,-0.87909,0.47666,0,-0.91601,0.40116,0,-0.94868,0.31623,0]);
IndexedFaceSet721.normal = Normal723;

Shape719.geometry = IndexedFaceSet721;

Transform5.children[142] = Shape719;

let Shape724 = browser.currentScene.createNode("Shape");
let Appearance725 = browser.currentScene.createNode("Appearance");
Appearance725.USE = "character3Appearance";
Shape724.appearance = Appearance725;

let IndexedFaceSet726 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet726.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet726.solid = False;
let Coordinate727 = browser.currentScene.createNode("Coordinate");
Coordinate727.point = new MFVec3f(new float[0.23553,0.05158,0.1,0.23793,0.05151,0.1,0.24038,0.05127,0.1,0.24282,0.05086,0.1,0.24522,0.05026,0.1,0.24753,0.04944,0.1,0.24972,0.04841,0.1,0.25075,0.0478,0.1,0.25173,0.04712,0.1,0.25266,0.04639,0.1,0.25353,0.04558,0.1,0.25353,0.04558,0,0.25266,0.04639,0,0.25173,0.04712,0,0.25075,0.0478,0,0.24972,0.04841,0,0.24753,0.04944,0,0.24522,0.05026,0,0.24282,0.05086,0,0.24038,0.05127,0,0.23793,0.05151,0,0.23553,0.05158,0]);
IndexedFaceSet726.coord = Coordinate727;

let Normal728 = browser.currentScene.createNode("Normal");
Normal728.vector = new MFVec3f(new float[0,1,0,0.06216,0.99807,0,0.12928,0.99161,0,0.20336,0.9791,0,0.28619,0.95817,0,0.37907,0.92537,0,0.48214,0.87609,0,0.53698,0.84359,0,0.59334,0.80495,0,0.65041,0.75958,0,0.70711,0.70711,0,0.70711,0.70711,0,0.65041,0.75958,0,0.59334,0.80495,0,0.53698,0.84359,0,0.48214,0.87609,0,0.37907,0.92537,0,0.28619,0.95817,0,0.20336,0.9791,0,0.12928,0.99161,0,0.06216,0.99807,0,0,1,0]);
IndexedFaceSet726.normal = Normal728;

Shape724.geometry = IndexedFaceSet726;

Transform5.children[143] = Shape724;

let Shape729 = browser.currentScene.createNode("Shape");
let Appearance730 = browser.currentScene.createNode("Appearance");
Appearance730.USE = "character3Appearance";
Shape729.appearance = Appearance730;

let IndexedFaceSet731 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet731.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,19,-1,20,21,3,-1,22,2,21,-1,3,4,19,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet731.solid = False;
let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.25353,0.04558,0.1,0.25471,0.04488,0.1,0.25528,0.04446,0.1,0.25583,0.044,0.1,0.25684,0.04298,0.1,0.25774,0.04183,0.1,0.25813,0.04122,0.1,0.25848,0.04059,0.1,0.25879,0.03994,0.1,0.25904,0.03928,0.1,0.2594,0.03794,0.1,0.25953,0.03658,0.1,0.25953,0.03658,0,0.2594,0.03794,0,0.25904,0.03928,0,0.25879,0.03994,0,0.25848,0.04059,0,0.25813,0.04122,0,0.25774,0.04183,0,0.25684,0.04298,0,0.25583,0.044,0,0.25528,0.04446,0,0.25471,0.04488,0,0.25353,0.04558,0]);
IndexedFaceSet731.coord = Coordinate732;

let Normal733 = browser.currentScene.createNode("Normal");
Normal733.vector = new MFVec3f(new float[0.44721,0.89443,0,0.56714,0.82362,0,0.61888,0.78549,0,0.66627,0.74571,0,0.75071,0.66063,0,0.82442,0.56598,0,0.85788,0.51385,0,0.88911,0.45769,0,0.9179,0.39682,0,0.9438,0.33052,0,0.98384,0.17903,0,1,0,0,1,0,0,0.98384,0.17903,0,0.9438,0.33052,0,0.9179,0.39682,0,0.88911,0.45769,0,0.85788,0.51385,0,0.82442,0.56598,0,0.75071,0.66063,0,0.66627,0.74571,0,0.61888,0.78549,0,0.56714,0.82362,0,0.44721,0.89443,0]);
IndexedFaceSet731.normal = Normal733;

Shape729.geometry = IndexedFaceSet731;

Transform5.children[144] = Shape729;

let Shape734 = browser.currentScene.createNode("Shape");
let Appearance735 = browser.currentScene.createNode("Appearance");
Appearance735.USE = "character3Appearance";
Shape734.appearance = Appearance735;

let IndexedFaceSet736 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet736.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet736.solid = False;
let Coordinate737 = browser.currentScene.createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[0.25953,0.03658,0.1,0.25929,0.03277,0.1,0.25863,0.02898,0.1,0.25653,0.02158,0.1,0.25653,0.02158,0,0.25863,0.02898,0,0.25929,0.03277,0,0.25953,0.03658,0]);
IndexedFaceSet736.coord = Coordinate737;

let Normal738 = browser.currentScene.createNode("Normal");
Normal738.vector = new MFVec3f(new float[1,0,0,0.99258,-0.12161,0,0.97691,-0.21363,0,0.94868,-0.31623,0,0.94868,-0.31623,0,0.97691,-0.21363,0,0.99258,-0.12161,0,1,0,0]);
IndexedFaceSet736.normal = Normal738;

Shape734.geometry = IndexedFaceSet736;

Transform5.children[145] = Shape734;

let Shape739 = browser.currentScene.createNode("Shape");
let Appearance740 = browser.currentScene.createNode("Appearance");
Appearance740.USE = "character3Appearance";
Shape739.appearance = Appearance740;

let IndexedFaceSet741 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet741.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet741.solid = False;
let Coordinate742 = browser.currentScene.createNode("Coordinate");
Coordinate742.point = new MFVec3f(new float[0.25653,0.02158,0.1,0.25528,0.01873,0.1,0.25434,0.01574,0.1,0.25374,0.01268,0.1,0.25358,0.01113,0.1,0.25353,0.00958,0.1,0.25353,0.00958,0,0.25358,0.01113,0,0.25374,0.01268,0,0.25434,0.01574,0,0.25528,0.01873,0,0.25653,0.02158,0]);
IndexedFaceSet741.coord = Coordinate742;

let Normal743 = browser.currentScene.createNode("Normal");
Normal743.vector = new MFVec3f(new float[0.89443,-0.44722,0,0.93577,-0.35262,0,0.96859,-0.24866,0,0.99125,-0.13201,0,0.99768,-0.06804,0,1,0,0,1,0,0,0.99768,-0.06804,0,0.99125,-0.13201,0,0.96859,-0.24866,0,0.93577,-0.35262,0,0.89443,-0.44722,0]);
IndexedFaceSet741.normal = Normal743;

Shape739.geometry = IndexedFaceSet741;

Transform5.children[146] = Shape739;

let Shape744 = browser.currentScene.createNode("Shape");
let Appearance745 = browser.currentScene.createNode("Appearance");
Appearance745.USE = "character3Appearance";
Shape744.appearance = Appearance745;

let IndexedFaceSet746 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet746.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet746.solid = False;
let Coordinate747 = browser.currentScene.createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.25353,0.00958,0.1,0.25503,0.00808,0.1,0.25653,0.00658,0.1,0.25653,0.00658,0,0.25503,0.00808,0,0.25353,0.00958,0]);
IndexedFaceSet746.coord = Coordinate747;

let Normal748 = browser.currentScene.createNode("Normal");
Normal748.vector = new MFVec3f(new float[0.7071,0.70711,0,0.7071,0.70711,0,0.7071,0.70711,0,0.7071,0.70711,0,0.7071,0.70711,0,0.7071,0.70711,0]);
IndexedFaceSet746.normal = Normal748;

Shape744.geometry = IndexedFaceSet746;

Transform5.children[147] = Shape744;

let Shape749 = browser.currentScene.createNode("Shape");
let Appearance750 = browser.currentScene.createNode("Appearance");
Appearance750.USE = "character3Appearance";
Shape749.appearance = Appearance750;

let IndexedFaceSet751 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet751.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet751.solid = False;
let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.25653,0.00658,0.1,0.25856,0.00479,0.1,0.26077,0.00323,0.1,0.26553,0.00058,0.1,0.26553,0.00058,0,0.26077,0.00323,0,0.25856,0.00479,0,0.25653,0.00658,0]);
IndexedFaceSet751.coord = Coordinate752;

let Normal753 = browser.currentScene.createNode("Normal");
Normal753.vector = new MFVec3f(new float[0.70711,0.70711,0,0.61587,0.78785,0,0.53972,0.84184,0,0.44721,0.89443,0,0.44721,0.89443,0,0.53972,0.84184,0,0.61587,0.78785,0,0.70711,0.70711,0]);
IndexedFaceSet751.normal = Normal753;

Shape749.geometry = IndexedFaceSet751;

Transform5.children[148] = Shape749;

let Shape754 = browser.currentScene.createNode("Shape");
let Appearance755 = browser.currentScene.createNode("Appearance");
Appearance755.USE = "character3Appearance";
Shape754.appearance = Appearance755;

let IndexedFaceSet756 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet756.coordIndex = new MFInt32(new int[11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1]);
IndexedFaceSet756.solid = False;
let Coordinate757 = browser.currentScene.createNode("Coordinate");
Coordinate757.point = new MFVec3f(new float[0.26553,0.00058,0.1,0.26708,0.00053,0.1,0.26862,0.00037,0.1,0.27169,-0.00023,0.1,0.27468,-0.00117,0.1,0.27753,-0.00242,0.1,0.27753,-0.00242,0,0.27468,-0.00117,0,0.27169,-0.00023,0,0.26862,0.00037,0,0.26708,0.00053,0,0.26553,0.00058,0]);
IndexedFaceSet756.coord = Coordinate757;

let Normal758 = browser.currentScene.createNode("Normal");
Normal758.vector = new MFVec3f(new float[0,1,0,0.06804,0.99768,0,0.13201,0.99125,0,0.24866,0.96859,0,0.35262,0.93577,0,0.44721,0.89443,0,0.44721,0.89443,0,0.35262,0.93577,0,0.24866,0.96859,0,0.13201,0.99125,0,0.06804,0.99768,0,0,1,0]);
IndexedFaceSet756.normal = Normal758;

Shape754.geometry = IndexedFaceSet756;

Transform5.children[149] = Shape754;

let Shape759 = browser.currentScene.createNode("Shape");
let Appearance760 = browser.currentScene.createNode("Appearance");
Appearance760.USE = "character3Appearance";
Shape759.appearance = Appearance760;

let IndexedFaceSet761 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet761.coordIndex = new MFInt32(new int[13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1]);
IndexedFaceSet761.solid = False;
let Coordinate762 = browser.currentScene.createNode("Coordinate");
Coordinate762.point = new MFVec3f(new float[0.27753,-0.00242,0.1,0.27961,-0.00333,0.1,0.28178,-0.00404,0.1,0.28401,-0.00456,0.1,0.28629,-0.00494,0.1,0.29091,-0.00533,0.1,0.29553,-0.00542,0.1,0.29553,-0.00542,0,0.29091,-0.00533,0,0.28629,-0.00494,0,0.28401,-0.00456,0,0.28178,-0.00404,0,0.27961,-0.00333,0,0.27753,-0.00242,0]);
IndexedFaceSet761.coord = Coordinate762;

let Normal763 = browser.currentScene.createNode("Normal");
Normal763.vector = new MFVec3f(new float[0.44721,0.89443,0,0.35328,0.93552,0,0.26836,0.96332,0,0.19461,0.98088,0,0.13281,0.99114,0,0.04437,0.99902,0,0,1,0,0,1,0,0.04437,0.99902,0,0.13281,0.99114,0,0.19461,0.98088,0,0.26836,0.96332,0,0.35328,0.93552,0,0.44721,0.89443,0]);
IndexedFaceSet761.normal = Normal763;

Shape759.geometry = IndexedFaceSet761;

Transform5.children[150] = Shape759;

let Shape764 = browser.currentScene.createNode("Shape");
let Appearance765 = browser.currentScene.createNode("Appearance");
Appearance765.USE = "character3Appearance";
Shape764.appearance = Appearance765;

let IndexedFaceSet766 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet766.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet766.solid = False;
let Coordinate767 = browser.currentScene.createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.29553,-0.00542,0.1,0.2979,-0.00531,0.1,0.30027,-0.00497,0.1,0.30261,-0.00445,0.1,0.30493,-0.00373,0.1,0.30719,-0.00286,0.1,0.30938,-0.00184,0.1,0.31353,0.00058,0.1,0.31353,0.00058,0,0.30938,-0.00184,0,0.30719,-0.00286,0,0.30493,-0.00373,0,0.30261,-0.00445,0,0.30027,-0.00497,0,0.2979,-0.00531,0,0.29553,-0.00542,0]);
IndexedFaceSet766.coord = Coordinate767;

let Normal768 = browser.currentScene.createNode("Normal");
Normal768.vector = new MFVec3f(new float[0,1,0,-0.09439,0.99554,0,-0.18037,0.9836,0,-0.25818,0.9661,0,-0.32853,0.94449,0,-0.39234,0.91982,0,-0.45064,0.89271,0,-0.5547,0.83205,0,-0.5547,0.83205,0,-0.45064,0.89271,0,-0.39234,0.91982,0,-0.32853,0.94449,0,-0.25818,0.9661,0,-0.18037,0.9836,0,-0.09439,0.99554,0,0,1,0]);
IndexedFaceSet766.normal = Normal768;

Shape764.geometry = IndexedFaceSet766;

Transform5.children[151] = Shape764;

let Shape769 = browser.currentScene.createNode("Shape");
let Appearance770 = browser.currentScene.createNode("Appearance");
Appearance770.USE = "character3Appearance";
Shape769.appearance = Appearance770;

let IndexedFaceSet771 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet771.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet771.solid = False;
let Coordinate772 = browser.currentScene.createNode("Coordinate");
Coordinate772.point = new MFVec3f(new float[0.31353,0.00058,0.1,0.31842,0.00201,0.1,0.32319,0.00391,0.1,0.32546,0.00508,0.1,0.32763,0.0064,0.1,0.32966,0.0079,0.1,0.33153,0.00958,0.1,0.33153,0.00958,0,0.32966,0.0079,0,0.32763,0.0064,0,0.32546,0.00508,0,0.32319,0.00391,0,0.31842,0.00201,0,0.31353,0.00058,0]);
IndexedFaceSet771.coord = Coordinate772;

let Normal773 = browser.currentScene.createNode("Normal");
Normal773.vector = new MFVec3f(new float[-0.24254,0.97014,0,-0.32084,0.94713,0,-0.42529,0.90506,0,-0.48778,0.87297,0,-0.55663,0.83076,0,-0.63055,0.77615,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.63055,0.77615,0,-0.55663,0.83076,0,-0.48778,0.87297,0,-0.42529,0.90506,0,-0.32084,0.94713,0,-0.24254,0.97014,0]);
IndexedFaceSet771.normal = Normal773;

Shape769.geometry = IndexedFaceSet771;

Transform5.children[152] = Shape769;

let Shape774 = browser.currentScene.createNode("Shape");
let Appearance775 = browser.currentScene.createNode("Appearance");
Appearance775.USE = "character3Appearance";
Shape774.appearance = Appearance775;

let IndexedFaceSet776 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet776.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet776.solid = False;
let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.33153,0.00958,0.1,0.3336,0.0118,0.1,0.33553,0.01417,0.1,0.33731,0.01667,0.1,0.33893,0.01929,0.1,0.34037,0.022,0.1,0.34163,0.0248,0.1,0.34268,0.02767,0.1,0.34353,0.03058,0.1,0.34353,0.03058,0,0.34268,0.02767,0,0.34163,0.0248,0,0.34037,0.022,0,0.33893,0.01929,0,0.33731,0.01667,0,0.33553,0.01417,0,0.3336,0.0118,0,0.33153,0.00958,0]);
IndexedFaceSet776.coord = Coordinate777;

let Normal778 = browser.currentScene.createNode("Normal");
Normal778.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.7533,0.65768,0,-0.79509,0.60649,0,-0.83298,0.5533,0,-0.86731,0.49776,0,-0.89827,0.43945,0,-0.92587,0.37783,0,-0.94996,0.31238,0,-0.97014,0.24253,0,-0.97014,0.24253,0,-0.94996,0.31238,0,-0.92587,0.37783,0,-0.89827,0.43945,0,-0.86731,0.49776,0,-0.83298,0.5533,0,-0.79509,0.60649,0,-0.7533,0.65768,0,-0.70711,0.70711,0]);
IndexedFaceSet776.normal = Normal778;

Shape774.geometry = IndexedFaceSet776;

Transform5.children[153] = Shape774;

let Shape779 = browser.currentScene.createNode("Shape");
let Appearance780 = browser.currentScene.createNode("Appearance");
Appearance780.USE = "character3Appearance";
Shape779.appearance = Appearance780;

let IndexedFaceSet781 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet781.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet781.solid = False;
let Coordinate782 = browser.currentScene.createNode("Coordinate");
Coordinate782.point = new MFVec3f(new float[0.34353,0.03058,0.1,0.3451,0.03324,0.1,0.34639,0.03607,0.1,0.34744,0.03902,0.1,0.34824,0.04206,0.1,0.34883,0.04517,0.1,0.34923,0.04832,0.1,0.34953,0.05458,0.1,0.34953,0.05458,0,0.34923,0.04832,0,0.34883,0.04517,0,0.34824,0.04206,0,0.34744,0.03902,0,0.34639,0.03607,0,0.3451,0.03324,0,0.34353,0.03058,0]);
IndexedFaceSet781.coord = Coordinate782;

let Normal783 = browser.currentScene.createNode("Normal");
Normal783.vector = new MFVec3f(new float[-0.83205,0.5547,0,-0.88703,0.46172,0,-0.92748,0.37386,0,-0.95608,0.29311,0,-0.97545,0.22022,0,-0.9879,0.1551,0,-0.99526,0.0972,0,-1,0,0,-1,0,0,-0.99526,0.0972,0,-0.9879,0.1551,0,-0.97545,0.22022,0,-0.95608,0.29311,0,-0.92748,0.37386,0,-0.88703,0.46172,0,-0.83205,0.5547,0]);
IndexedFaceSet781.normal = Normal783;

Shape779.geometry = IndexedFaceSet781;

Transform5.children[154] = Shape779;

let Shape784 = browser.currentScene.createNode("Shape");
let Appearance785 = browser.currentScene.createNode("Appearance");
Appearance785.USE = "character3Appearance";
Shape784.appearance = Appearance785;

let IndexedFaceSet786 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet786.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet786.solid = False;
let Coordinate787 = browser.currentScene.createNode("Coordinate");
Coordinate787.point = new MFVec3f(new float[0.34953,0.05458,0.1,0.34933,0.05915,0.1,0.34875,0.0637,0.1,0.34781,0.06819,0.1,0.34653,0.07258,0.1,0.34653,0.07258,0,0.34781,0.06819,0,0.34875,0.0637,0,0.34933,0.05915,0,0.34953,0.05458,0]);
IndexedFaceSet786.coord = Coordinate787;

let Normal788 = browser.currentScene.createNode("Normal");
Normal788.vector = new MFVec3f(new float[-1,0,0,-0.99632,-0.08575,0,-0.98605,-0.16647,0,-0.97003,-0.24298,0,-0.94868,-0.31623,0,-0.94868,-0.31623,0,-0.97003,-0.24298,0,-0.98605,-0.16647,0,-0.99632,-0.08575,0,-1,0,0]);
IndexedFaceSet786.normal = Normal788;

Shape784.geometry = IndexedFaceSet786;

Transform5.children[155] = Shape784;

let Shape789 = browser.currentScene.createNode("Shape");
let Appearance790 = browser.currentScene.createNode("Appearance");
Appearance790.USE = "character3Appearance";
Shape789.appearance = Appearance790;

let IndexedFaceSet791 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet791.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet791.solid = False;
let Coordinate792 = browser.currentScene.createNode("Coordinate");
Coordinate792.point = new MFVec3f(new float[0.34653,0.07258,0.1,0.34475,0.07729,0.1,0.34263,0.08187,0.1,0.33753,0.09058,0.1,0.33753,0.09058,0,0.34263,0.08187,0,0.34475,0.07729,0,0.34653,0.07258,0]);
IndexedFaceSet791.coord = Coordinate792;

let Normal793 = browser.currentScene.createNode("Normal");
Normal793.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.92164,-0.38803,0,-0.89248,-0.45108,0,-0.83205,-0.5547,0,-0.83205,-0.5547,0,-0.89248,-0.45108,0,-0.92164,-0.38803,0,-0.94868,-0.31623,0]);
IndexedFaceSet791.normal = Normal793;

Shape789.geometry = IndexedFaceSet791;

Transform5.children[156] = Shape789;

let Shape794 = browser.currentScene.createNode("Shape");
let Appearance795 = browser.currentScene.createNode("Appearance");
Appearance795.USE = "character3Appearance";
Shape794.appearance = Appearance795;

let IndexedFaceSet796 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet796.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,18,-1,19,20,2,-1,2,3,18,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet796.solid = False;
let Coordinate797 = browser.currentScene.createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.33753,0.09058,0.1,0.33708,0.0914,0.1,0.33656,0.09219,0.1,0.336,0.09294,0.1,0.33538,0.09365,0.1,0.334,0.09498,0.1,0.33247,0.09617,0.1,0.33082,0.09722,0.1,0.32909,0.09814,0.1,0.32731,0.09892,0.1,0.32553,0.09958,0.1,0.32553,0.09958,0,0.32731,0.09892,0,0.32909,0.09814,0,0.33082,0.09722,0,0.33247,0.09617,0,0.334,0.09498,0,0.33538,0.09365,0,0.336,0.09294,0,0.33656,0.09219,0,0.33708,0.0914,0,0.33753,0.09058,0]);
IndexedFaceSet796.coord = Coordinate797;

let Normal798 = browser.currentScene.createNode("Normal");
Normal798.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.85724,-0.51492,0,-0.81744,-0.57601,0,-0.77619,-0.6305,0,-0.73445,-0.67867,0,-0.65224,-0.75801,0,-0.57451,-0.8185,0,-0.50255,-0.86455,0,-0.43622,-0.89984,0,-0.37459,-0.92719,0,-0.31623,-0.94868,0,-0.31623,-0.94868,0,-0.37459,-0.92719,0,-0.43622,-0.89984,0,-0.50255,-0.86455,0,-0.57451,-0.8185,0,-0.65224,-0.75801,0,-0.73445,-0.67867,0,-0.77619,-0.6305,0,-0.81744,-0.57601,0,-0.85724,-0.51492,0,-0.89443,-0.44721,0]);
IndexedFaceSet796.normal = Normal798;

Shape794.geometry = IndexedFaceSet796;

Transform5.children[157] = Shape794;

let Shape799 = browser.currentScene.createNode("Shape");
let Appearance800 = browser.currentScene.createNode("Appearance");
Appearance800.USE = "character3Appearance";
Shape799.appearance = Appearance800;

let IndexedFaceSet801 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet801.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet801.solid = False;
let Coordinate802 = browser.currentScene.createNode("Coordinate");
Coordinate802.point = new MFVec3f(new float[0.32553,0.09958,0.1,0.32286,0.10115,0.1,0.32004,0.10245,0.1,0.31709,0.10349,0.1,0.31405,0.1043,0.1,0.31094,0.10489,0.1,0.30779,0.10529,0.1,0.30153,0.10558,0.1,0.30153,0.10558,0,0.30779,0.10529,0,0.31094,0.10489,0,0.31405,0.1043,0,0.31709,0.10349,0,0.32004,0.10245,0,0.32286,0.10115,0,0.32553,0.09958,0]);
IndexedFaceSet801.coord = Coordinate802;

let Normal803 = browser.currentScene.createNode("Normal");
Normal803.vector = new MFVec3f(new float[-0.5547,-0.83205,0,-0.46172,-0.88703,0,-0.37386,-0.92748,0,-0.29311,-0.95608,0,-0.22022,-0.97545,0,-0.15509,-0.9879,0,-0.0972,-0.99526,0,0,-1,0,0,-1,0,-0.0972,-0.99526,0,-0.15509,-0.9879,0,-0.22022,-0.97545,0,-0.29311,-0.95608,0,-0.37386,-0.92748,0,-0.46172,-0.88703,0,-0.5547,-0.83205,0]);
IndexedFaceSet801.normal = Normal803;

Shape799.geometry = IndexedFaceSet801;

Transform5.children[158] = Shape799;

let Shape804 = browser.currentScene.createNode("Shape");
let Appearance805 = browser.currentScene.createNode("Appearance");
Appearance805.USE = "character3Appearance";
Shape804.appearance = Appearance805;

let IndexedFaceSet806 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet806.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet806.solid = False;
let Coordinate807 = browser.currentScene.createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[0.30153,0.10558,0.1,0.28053,0.10558,0.1,0.28053,0.10558,0,0.30153,0.10558,0]);
IndexedFaceSet806.coord = Coordinate807;

let Normal808 = browser.currentScene.createNode("Normal");
Normal808.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet806.normal = Normal808;

Shape804.geometry = IndexedFaceSet806;

Transform5.children[159] = Shape804;

let Shape809 = browser.currentScene.createNode("Shape");
let Appearance810 = browser.currentScene.createNode("Appearance");
Appearance810.USE = "character3Appearance";
Shape809.appearance = Appearance810;

let IndexedFaceSet811 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet811.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet811.solid = False;
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.28053,0.10558,0.1,0.28053,0.12658,0.1,0.28053,0.12658,0,0.28053,0.10558,0]);
IndexedFaceSet811.coord = Coordinate812;

let Normal813 = browser.currentScene.createNode("Normal");
Normal813.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet811.normal = Normal813;

Shape809.geometry = IndexedFaceSet811;

Transform5.children[160] = Shape809;

let Shape814 = browser.currentScene.createNode("Shape");
let Appearance815 = browser.currentScene.createNode("Appearance");
Appearance815.USE = "character3Appearance";
Shape814.appearance = Appearance815;

let IndexedFaceSet816 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet816.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet816.solid = False;
let Coordinate817 = browser.currentScene.createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[0.28053,0.12658,0.1,0.29553,0.12658,0.1,0.29553,0.12658,0,0.28053,0.12658,0]);
IndexedFaceSet816.coord = Coordinate817;

let Normal818 = browser.currentScene.createNode("Normal");
Normal818.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet816.normal = Normal818;

Shape814.geometry = IndexedFaceSet816;

Transform5.children[161] = Shape814;

let Shape819 = browser.currentScene.createNode("Shape");
let Appearance820 = browser.currentScene.createNode("Appearance");
Appearance820.USE = "character3Appearance";
Shape819.appearance = Appearance820;

let IndexedFaceSet821 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet821.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet821.solid = False;
let Coordinate822 = browser.currentScene.createNode("Coordinate");
Coordinate822.point = new MFVec3f(new float[0.29553,0.12658,0.1,0.29997,0.12676,0.1,0.30446,0.12729,0.1,0.30893,0.1282,0.1,0.31331,0.12948,0.1,0.31753,0.13115,0.1,0.32153,0.13321,0.1,0.32521,0.13569,0.1,0.32692,0.13708,0.1,0.32853,0.13858,0.1,0.32853,0.13858,0,0.32692,0.13708,0,0.32521,0.13569,0,0.32153,0.13321,0,0.31753,0.13115,0,0.31331,0.12948,0,0.30893,0.1282,0,0.30446,0.12729,0,0.29997,0.12676,0,0.29553,0.12658,0]);
IndexedFaceSet821.coord = Coordinate822;

let Normal823 = browser.currentScene.createNode("Normal");
Normal823.vector = new MFVec3f(new float[0,1,0,-0.07881,0.99689,0,-0.15769,0.98749,0,-0.23865,0.97111,0,-0.32332,0.94629,0,-0.4129,0.91078,0,-0.50772,0.86152,0,-0.6068,0.79485,0,-0.65709,0.75381,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.65709,0.75381,0,-0.6068,0.79485,0,-0.50772,0.86152,0,-0.4129,0.91078,0,-0.32332,0.94629,0,-0.23865,0.97111,0,-0.15769,0.98749,0,-0.07881,0.99689,0,0,1,0]);
IndexedFaceSet821.normal = Normal823;

Shape819.geometry = IndexedFaceSet821;

Transform5.children[162] = Shape819;

let Shape824 = browser.currentScene.createNode("Shape");
let Appearance825 = browser.currentScene.createNode("Appearance");
Appearance825.USE = "character3Appearance";
Shape824.appearance = Appearance825;

let IndexedFaceSet826 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet826.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet826.solid = False;
let Coordinate827 = browser.currentScene.createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0.32853,0.13858,0.1,0.33025,0.14045,0.1,0.3318,0.14246,0.1,0.33321,0.14459,0.1,0.33446,0.14682,0.1,0.33655,0.15156,0.1,0.33813,0.15659,0.1,0.33927,0.1618,0.1,0.34,0.1671,0.1,0.34053,0.17758,0.1,0.34053,0.17758,0,0.34,0.1671,0,0.33927,0.1618,0,0.33813,0.15659,0,0.33655,0.15156,0,0.33446,0.14682,0,0.33321,0.14459,0,0.3318,0.14246,0,0.33025,0.14045,0,0.32853,0.13858,0]);
IndexedFaceSet826.coord = Coordinate827;

let Normal828 = browser.currentScene.createNode("Normal");
Normal828.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.76448,0.64465,0,-0.81347,0.5816,0,-0.85444,0.51955,0,-0.88809,0.45968,0,-0.93695,0.34946,0,-0.96722,0.25394,0,-0.98493,0.17294,0,-0.99448,0.10489,0,-1,0,0,-1,0,0,-0.99448,0.10489,0,-0.98493,0.17294,0,-0.96722,0.25394,0,-0.93695,0.34946,0,-0.88809,0.45968,0,-0.85444,0.51955,0,-0.81347,0.5816,0,-0.76448,0.64465,0,-0.70711,0.70711,0]);
IndexedFaceSet826.normal = Normal828;

Shape824.geometry = IndexedFaceSet826;

Transform5.children[163] = Shape824;

let Shape829 = browser.currentScene.createNode("Shape");
let Appearance830 = browser.currentScene.createNode("Appearance");
Appearance830.USE = "character3Appearance";
Shape829.appearance = Appearance830;

let IndexedFaceSet831 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet831.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,10,-1,11,12,8,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,8,9,10,-1]);
IndexedFaceSet831.solid = False;
let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[0.34053,0.17758,0.1,0.34035,0.18202,0.1,0.33982,0.18651,0.1,0.33891,0.19098,0.1,0.33763,0.19537,0.1,0.33596,0.19959,0.1,0.33389,0.20358,0.1,0.33142,0.20727,0.1,0.33003,0.20898,0.1,0.32853,0.21058,0.1,0.32853,0.21058,0,0.33003,0.20898,0,0.33142,0.20727,0,0.33389,0.20358,0,0.33596,0.19959,0,0.33763,0.19537,0,0.33891,0.19098,0,0.33982,0.18651,0,0.34035,0.18202,0,0.34053,0.17758,0]);
IndexedFaceSet831.coord = Coordinate832;

let Normal833 = browser.currentScene.createNode("Normal");
Normal833.vector = new MFVec3f(new float[-1,0,0,-0.99689,-0.07881,0,-0.98749,-0.15769,0,-0.97111,-0.23864,0,-0.94629,-0.32332,0,-0.91078,-0.41289,0,-0.86152,-0.50772,0,-0.79485,-0.6068,0,-0.75381,-0.65709,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.75381,-0.65709,0,-0.79485,-0.6068,0,-0.86152,-0.50772,0,-0.91078,-0.41289,0,-0.94629,-0.32332,0,-0.97111,-0.23864,0,-0.98749,-0.15769,0,-0.99689,-0.07881,0,-1,0,0]);
IndexedFaceSet831.normal = Normal833;

Shape829.geometry = IndexedFaceSet831;

Transform5.children[164] = Shape829;

let Shape834 = browser.currentScene.createNode("Shape");
let Appearance835 = browser.currentScene.createNode("Appearance");
Appearance835.USE = "character3Appearance";
Shape834.appearance = Appearance835;

let IndexedFaceSet836 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet836.coordIndex = new MFInt32(new int[23,0,22,-1,22,0,1,-1,21,1,2,-1,3,21,2,-1,3,20,21,-1,3,4,20,-1,20,4,19,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,1,21,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet836.solid = False;
let Coordinate837 = browser.currentScene.createNode("Coordinate");
Coordinate837.point = new MFVec3f(new float[0.32853,0.21058,0.1,0.32724,0.21214,0.1,0.32582,0.21357,0.1,0.32428,0.21489,0.1,0.32263,0.21609,0.1,0.32087,0.21718,0.1,0.31903,0.21816,0.1,0.31514,0.21981,0.1,0.31105,0.22106,0.1,0.30685,0.22192,0.1,0.30264,0.22242,0.1,0.29853,0.22258,0.1,0.29853,0.22258,0,0.30264,0.22242,0,0.30685,0.22192,0,0.31105,0.22106,0,0.31514,0.21981,0,0.31903,0.21816,0,0.32087,0.21718,0,0.32263,0.21609,0,0.32428,0.21489,0,0.32582,0.21357,0,0.32724,0.21214,0,0.32853,0.21058,0]);
IndexedFaceSet836.coord = Coordinate837;

let Normal838 = browser.currentScene.createNode("Normal");
Normal838.vector = new MFVec3f(new float[-0.8,-0.6,0,-0.74119,-0.6713,0,-0.68011,-0.73311,0,-0.61857,-0.78573,0,-0.55795,-0.82987,0,-0.49922,-0.86648,0,-0.44292,-0.89656,0,-0.33848,-0.94098,0,-0.2444,-0.96968,0,-0.15863,-0.98734,0,-0.07829,-0.99693,0,0,-1,0,0,-1,0,-0.07829,-0.99693,0,-0.15863,-0.98734,0,-0.2444,-0.96968,0,-0.33848,-0.94098,0,-0.44292,-0.89656,0,-0.49922,-0.86648,0,-0.55795,-0.82987,0,-0.61857,-0.78573,0,-0.68011,-0.73311,0,-0.74119,-0.6713,0,-0.8,-0.6,0]);
IndexedFaceSet836.normal = Normal838;

Shape834.geometry = IndexedFaceSet836;

Transform5.children[165] = Shape834;

let Shape839 = browser.currentScene.createNode("Shape");
let Appearance840 = browser.currentScene.createNode("Appearance");
Appearance840.USE = "character3Appearance";
Shape839.appearance = Appearance840;

let IndexedFaceSet841 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet841.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet841.solid = False;
let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0.29853,0.22258,0.1,0.29467,0.22243,0.1,0.29083,0.22194,0.1,0.28893,0.22153,0.1,0.28708,0.22101,0.1,0.28527,0.22036,0.1,0.28353,0.21958,0.1,0.28353,0.21958,0,0.28527,0.22036,0,0.28708,0.22101,0,0.28893,0.22153,0,0.29083,0.22194,0,0.29467,0.22243,0,0.29853,0.22258,0]);
IndexedFaceSet841.coord = Coordinate842;

let Normal843 = browser.currentScene.createNode("Normal");
Normal843.vector = new MFVec3f(new float[0,-1,0,0.07973,-0.99682,0,0.17989,-0.98369,0,0.23845,-0.97116,0,0.3028,-0.95305,0,0.37265,-0.92797,0,0.44721,-0.89443,0,0.44721,-0.89443,0,0.37265,-0.92797,0,0.3028,-0.95305,0,0.23845,-0.97116,0,0.17989,-0.98369,0,0.07973,-0.99682,0,0,-1,0]);
IndexedFaceSet841.normal = Normal843;

Shape839.geometry = IndexedFaceSet841;

Transform5.children[166] = Shape839;

let Shape844 = browser.currentScene.createNode("Shape");
let Appearance845 = browser.currentScene.createNode("Appearance");
Appearance845.USE = "character3Appearance";
Shape844.appearance = Appearance845;

let IndexedFaceSet846 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet846.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet846.solid = False;
let Coordinate847 = browser.currentScene.createNode("Coordinate");
Coordinate847.point = new MFVec3f(new float[0.28353,0.21958,0.1,0.27877,0.21693,0.1,0.27656,0.21537,0.1,0.27453,0.21358,0.1,0.27453,0.21358,0,0.27656,0.21537,0,0.27877,0.21693,0,0.28353,0.21958,0]);
IndexedFaceSet846.coord = Coordinate847;

let Normal848 = browser.currentScene.createNode("Normal");
Normal848.vector = new MFVec3f(new float[0.44722,-0.89443,0,0.53972,-0.84184,0,0.61587,-0.78785,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.61587,-0.78785,0,0.53972,-0.84184,0,0.44722,-0.89443,0]);
IndexedFaceSet846.normal = Normal848;

Shape844.geometry = IndexedFaceSet846;

Transform5.children[167] = Shape844;

let Shape849 = browser.currentScene.createNode("Shape");
let Appearance850 = browser.currentScene.createNode("Appearance");
Appearance850.USE = "character3Appearance";
Shape849.appearance = Appearance850;

let IndexedFaceSet851 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet851.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1]);
IndexedFaceSet851.solid = False;
let Coordinate852 = browser.currentScene.createNode("Coordinate");
Coordinate852.point = new MFVec3f(new float[0.27453,0.21358,0.1,0.26977,0.21093,0.1,0.26756,0.20937,0.1,0.26553,0.20758,0.1,0.26553,0.20758,0,0.26756,0.20937,0,0.26977,0.21093,0,0.27453,0.21358,0]);
IndexedFaceSet851.coord = Coordinate852;

let Normal853 = browser.currentScene.createNode("Normal");
Normal853.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.53972,-0.84184,0,0.61587,-0.78785,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.61587,-0.78785,0,0.53972,-0.84184,0,0.44721,-0.89443,0]);
IndexedFaceSet851.normal = Normal853;

Shape849.geometry = IndexedFaceSet851;

Transform5.children[168] = Shape849;

let Shape854 = browser.currentScene.createNode("Shape");
let Appearance855 = browser.currentScene.createNode("Appearance");
Appearance855.USE = "character3Appearance";
Shape854.appearance = Appearance855;

let IndexedFaceSet856 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet856.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet856.solid = False;
let Coordinate857 = browser.currentScene.createNode("Coordinate");
Coordinate857.point = new MFVec3f(new float[0.26553,0.20758,0.1,0.26403,0.20608,0.1,0.26253,0.20458,0.1,0.26253,0.20458,0,0.26403,0.20608,0,0.26553,0.20758,0]);
IndexedFaceSet856.coord = Coordinate857;

let Normal858 = browser.currentScene.createNode("Normal");
Normal858.vector = new MFVec3f(new float[0.70711,-0.70711,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.70711,-0.70711,0]);
IndexedFaceSet856.normal = Normal858;

Shape854.geometry = IndexedFaceSet856;

Transform5.children[169] = Shape854;

let Shape859 = browser.currentScene.createNode("Shape");
let Appearance860 = browser.currentScene.createNode("Appearance");
Appearance860.USE = "character3Appearance";
Shape859.appearance = Appearance860;

let IndexedFaceSet861 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet861.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet861.solid = False;
let Coordinate862 = browser.currentScene.createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[0.26253,0.20458,0.1,0.26277,0.20077,0.1,0.26342,0.19698,0.1,0.26553,0.18958,0.1,0.26553,0.18958,0,0.26342,0.19698,0,0.26277,0.20077,0,0.26253,0.20458,0]);
IndexedFaceSet861.coord = Coordinate862;

let Normal863 = browser.currentScene.createNode("Normal");
Normal863.vector = new MFVec3f(new float[1,0,0,0.99258,0.12161,0,0.97691,0.21363,0,0.94868,0.31623,0,0.94868,0.31623,0,0.97691,0.21363,0,0.99258,0.12161,0,1,0,0]);
IndexedFaceSet861.normal = Normal863;

Shape859.geometry = IndexedFaceSet861;

Transform5.children[170] = Shape859;

let Shape864 = browser.currentScene.createNode("Shape");
let Appearance865 = browser.currentScene.createNode("Appearance");
Appearance865.USE = "character3Appearance";
Shape864.appearance = Appearance865;

let IndexedFaceSet866 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet866.coordIndex = new MFInt32(new int[13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1]);
IndexedFaceSet866.solid = False;
let Coordinate867 = browser.currentScene.createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0.26553,0.18958,0.1,0.26631,0.18784,0.1,0.26696,0.18603,0.1,0.26748,0.18418,0.1,0.26788,0.18228,0.1,0.26838,0.17843,0.1,0.26853,0.17458,0.1,0.26853,0.17458,0,0.26838,0.17843,0,0.26788,0.18228,0,0.26748,0.18418,0,0.26696,0.18603,0,0.26631,0.18784,0,0.26553,0.18958,0]);
IndexedFaceSet866.coord = Coordinate867;

let Normal868 = browser.currentScene.createNode("Normal");
Normal868.vector = new MFVec3f(new float[0.89443,0.44721,0,0.92797,0.37265,0,0.95305,0.3028,0,0.97116,0.23845,0,0.98369,0.17989,0,0.99682,0.07973,0,1,0,0,1,0,0,0.99682,0.07973,0,0.98369,0.17989,0,0.97116,0.23845,0,0.95305,0.3028,0,0.92797,0.37265,0,0.89443,0.44721,0]);
IndexedFaceSet866.normal = Normal868;

Shape864.geometry = IndexedFaceSet866;

Transform5.children[171] = Shape864;

let Shape869 = browser.currentScene.createNode("Shape");
let Appearance870 = browser.currentScene.createNode("Appearance");
Appearance870.USE = "character3Appearance";
Shape869.appearance = Appearance870;

let IndexedFaceSet871 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet871.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,13,-1,14,15,7,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,7,8,13,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,13,9,12,-1]);
IndexedFaceSet871.solid = False;
let Coordinate872 = browser.currentScene.createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0.26853,0.17458,0.1,0.26849,0.17374,0.1,0.2684,0.17291,0.1,0.26824,0.17208,0.1,0.26803,0.17126,0.1,0.26746,0.16965,0.1,0.26671,0.16809,0.1,0.26582,0.16659,0.1,0.2648,0.16516,0.1,0.26369,0.16382,0.1,0.26253,0.16258,0.1,0.26253,0.16258,0,0.26369,0.16382,0,0.2648,0.16516,0,0.26582,0.16659,0,0.26671,0.16809,0,0.26746,0.16965,0,0.26803,0.17126,0,0.26824,0.17208,0,0.2684,0.17291,0,0.26849,0.17374,0,0.26853,0.17458,0]);
IndexedFaceSet871.coord = Coordinate872;

let Normal873 = browser.currentScene.createNode("Normal");
Normal873.vector = new MFVec3f(new float[1,0,0,0.99702,-0.0772,0,0.98874,-0.14963,0,0.97621,-0.21681,0,0.96042,-0.27857,0,0.92238,-0.38629,0,0.8799,-0.47516,0,0.83613,-0.54853,0,0.79259,-0.60976,0,0.7497,-0.66178,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.7497,-0.66178,0,0.79259,-0.60976,0,0.83613,-0.54853,0,0.8799,-0.47516,0,0.92238,-0.38629,0,0.96042,-0.27857,0,0.97621,-0.21681,0,0.98874,-0.14963,0,0.99702,-0.0772,0,1,0,0]);
IndexedFaceSet871.normal = Normal873;

Shape869.geometry = IndexedFaceSet871;

Transform5.children[172] = Shape869;

let Shape874 = browser.currentScene.createNode("Shape");
let Appearance875 = browser.currentScene.createNode("Appearance");
Appearance875.USE = "character3Appearance";
Shape874.appearance = Appearance875;

let IndexedFaceSet876 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet876.coordIndex = new MFInt32(new int[13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1]);
IndexedFaceSet876.solid = False;
let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0.26253,0.16258,0.1,0.26044,0.16167,0.1,0.25827,0.16096,0.1,0.25604,0.16044,0.1,0.25377,0.16006,0.1,0.24914,0.15967,0.1,0.24453,0.15958,0.1,0.24453,0.15958,0,0.24914,0.15967,0,0.25377,0.16006,0,0.25604,0.16044,0,0.25827,0.16096,0,0.26044,0.16167,0,0.26253,0.16258,0]);
IndexedFaceSet876.coord = Coordinate877;

let Normal878 = browser.currentScene.createNode("Normal");
Normal878.vector = new MFVec3f(new float[0.44722,-0.89443,0,0.35328,-0.93552,0,0.26836,-0.96332,0,0.19461,-0.98088,0,0.13281,-0.99114,0,0.04437,-0.99902,0,0,-1,0,0,-1,0,0.04437,-0.99902,0,0.13281,-0.99114,0,0.19461,-0.98088,0,0.26836,-0.96332,0,0.35328,-0.93552,0,0.44722,-0.89443,0]);
IndexedFaceSet876.normal = Normal878;

Shape874.geometry = IndexedFaceSet876;

Transform5.children[173] = Shape874;

let Shape879 = browser.currentScene.createNode("Shape");
let Appearance880 = browser.currentScene.createNode("Appearance");
Appearance880.USE = "character3Appearance";
Shape879.appearance = Appearance880;

let IndexedFaceSet881 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet881.coordIndex = new MFInt32(new int[25,0,24,-1,24,0,1,-1,23,1,2,-1,3,23,2,-1,3,22,23,-1,3,4,22,-1,22,4,21,-1,21,4,5,-1,20,5,6,-1,19,6,7,-1,18,7,8,-1,17,8,9,-1,16,9,10,-1,15,10,11,-1,14,11,12,-1,13,14,12,-1,24,1,23,-1,21,5,20,-1,20,6,19,-1,19,7,18,-1,18,8,17,-1,17,9,16,-1,16,10,15,-1,15,11,14,-1]);
IndexedFaceSet881.solid = False;
let Coordinate882 = browser.currentScene.createNode("Coordinate");
Coordinate882.point = new MFVec3f(new float[0.24453,0.15958,0.1,0.24281,0.15967,0.1,0.24105,0.15996,0.1,0.23929,0.16042,0.1,0.2376,0.16108,0.1,0.23679,0.16148,0.1,0.23602,0.16192,0.1,0.2353,0.16242,0.1,0.23462,0.16296,0.1,0.23399,0.16354,0.1,0.23343,0.16417,0.1,0.23294,0.16485,0.1,0.23253,0.16558,0.1,0.23253,0.16558,0,0.23294,0.16485,0,0.23343,0.16417,0,0.23399,0.16354,0,0.23462,0.16296,0,0.2353,0.16242,0,0.23602,0.16192,0,0.23679,0.16148,0,0.2376,0.16108,0,0.23929,0.16042,0,0.24105,0.15996,0,0.24281,0.15967,0,0.24453,0.15958,0]);
IndexedFaceSet881.coord = Coordinate882;

let Normal883 = browser.currentScene.createNode("Normal");
Normal883.vector = new MFVec3f(new float[0,-1,0,-0.10658,-0.9943,0,-0.20754,-0.97823,0,-0.30884,-0.95111,0,-0.41521,-0.90972,0,-0.47139,-0.88193,0,-0.52987,-0.84808,0,-0.59062,-0.80695,0,-0.65321,-0.75717,0,-0.71677,-0.69731,0,-0.77974,-0.6261,0,-0.83992,-0.54271,0,-0.89443,-0.44721,0,-0.89443,-0.44721,0,-0.83992,-0.54271,0,-0.77974,-0.6261,0,-0.71677,-0.69731,0,-0.65321,-0.75717,0,-0.59062,-0.80695,0,-0.52987,-0.84808,0,-0.47139,-0.88193,0,-0.41521,-0.90972,0,-0.30884,-0.95111,0,-0.20754,-0.97823,0,-0.10658,-0.9943,0,0,-1,0]);
IndexedFaceSet881.normal = Normal883;

Shape879.geometry = IndexedFaceSet881;

Transform5.children[174] = Shape879;

let Shape884 = browser.currentScene.createNode("Shape");
let Appearance885 = browser.currentScene.createNode("Appearance");
Appearance885.USE = "character3Appearance";
Shape884.appearance = Appearance885;

let IndexedFaceSet886 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet886.coordIndex = new MFInt32(new int[13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1]);
IndexedFaceSet886.solid = False;
let Coordinate887 = browser.currentScene.createNode("Coordinate");
Coordinate887.point = new MFVec3f(new float[0.23253,0.16558,0.1,0.23174,0.16733,0.1,0.2311,0.16913,0.1,0.23058,0.17099,0.1,0.23017,0.17288,0.1,0.22968,0.17673,0.1,0.22953,0.18058,0.1,0.22953,0.18058,0,0.22968,0.17673,0,0.23017,0.17288,0,0.23058,0.17099,0,0.2311,0.16913,0,0.23174,0.16733,0,0.23253,0.16558,0]);
IndexedFaceSet886.coord = Coordinate887;

let Normal888 = browser.currentScene.createNode("Normal");
Normal888.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.92797,-0.37265,0,-0.95305,-0.3028,0,-0.97116,-0.23845,0,-0.98369,-0.17989,0,-0.99682,-0.07973,0,-1,0,0,-1,0,0,-0.99682,-0.07973,0,-0.98369,-0.17989,0,-0.97116,-0.23845,0,-0.95305,-0.3028,0,-0.92797,-0.37265,0,-0.89443,-0.44721,0]);
IndexedFaceSet886.normal = Normal888;

Shape884.geometry = IndexedFaceSet886;

Transform5.children[175] = Shape884;

let Shape889 = browser.currentScene.createNode("Shape");
let Appearance890 = browser.currentScene.createNode("Appearance");
Appearance890.USE = "character3Appearance";
Shape889.appearance = Appearance890;

let IndexedFaceSet891 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet891.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1]);
IndexedFaceSet891.solid = False;
let Coordinate892 = browser.currentScene.createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.22953,0.18058,0.1,0.22973,0.18515,0.1,0.23031,0.1897,0.1,0.23125,0.19419,0.1,0.23253,0.19858,0.1,0.23253,0.19858,0,0.23125,0.19419,0,0.23031,0.1897,0,0.22973,0.18515,0,0.22953,0.18058,0]);
IndexedFaceSet891.coord = Coordinate892;

let Normal893 = browser.currentScene.createNode("Normal");
Normal893.vector = new MFVec3f(new float[-1,0,0,-0.99632,0.08575,0,-0.98605,0.16647,0,-0.97003,0.24298,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.97003,0.24298,0,-0.98605,0.16647,0,-0.99632,0.08575,0,-1,0,0]);
IndexedFaceSet891.normal = Normal893;

Shape889.geometry = IndexedFaceSet891;

Transform5.children[176] = Shape889;

let Shape894 = browser.currentScene.createNode("Shape");
let Appearance895 = browser.currentScene.createNode("Appearance");
Appearance895.USE = "character3Appearance";
Shape894.appearance = Appearance895;

let IndexedFaceSet896 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet896.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet896.solid = False;
let Coordinate897 = browser.currentScene.createNode("Coordinate");
Coordinate897.point = new MFVec3f(new float[0.23253,0.19858,0.1,0.23958,0.20795,0.1,0.24753,0.21658,0.1,0.24753,0.21658,0,0.23958,0.20795,0,0.23253,0.19858,0]);
IndexedFaceSet896.coord = Coordinate897;

let Normal898 = browser.currentScene.createNode("Normal");
Normal898.vector = new MFVec3f(new float[-0.83205,0.5547,0,-0.76566,0.64324,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.76566,0.64324,0,-0.83205,0.5547,0]);
IndexedFaceSet896.normal = Normal898;

Shape894.geometry = IndexedFaceSet896;

Transform5.children[177] = Shape894;

let Shape899 = browser.currentScene.createNode("Shape");
let Appearance900 = browser.currentScene.createNode("Appearance");
Appearance900.USE = "character3Appearance";
Shape899.appearance = Appearance900;

let IndexedFaceSet901 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet901.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet901.solid = False;
let Coordinate902 = browser.currentScene.createNode("Coordinate");
Coordinate902.point = new MFVec3f(new float[0.24753,0.21658,0.1,0.25919,0.22462,0.1,0.27153,0.23158,0.1,0.27153,0.23158,0,0.25919,0.22462,0,0.24753,0.21658,0]);
IndexedFaceSet901.coord = Coordinate902;

let Normal903 = browser.currentScene.createNode("Normal");
Normal903.vector = new MFVec3f(new float[-0.6,0.8,0,-0.53212,0.84667,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.53212,0.84667,0,-0.6,0.8,0]);
IndexedFaceSet901.normal = Normal903;

Shape899.geometry = IndexedFaceSet901;

Transform5.children[178] = Shape899;

let Shape904 = browser.currentScene.createNode("Shape");
let Appearance905 = browser.currentScene.createNode("Appearance");
Appearance905.USE = "character3Appearance";
Shape904.appearance = Appearance905;

let IndexedFaceSet906 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet906.coordIndex = new MFInt32(new int[11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1]);
IndexedFaceSet906.solid = False;
let Coordinate907 = browser.currentScene.createNode("Coordinate");
Coordinate907.point = new MFVec3f(new float[0.27153,0.23158,0.1,0.27582,0.23314,0.1,0.28021,0.23442,0.1,0.2892,0.23628,0.1,0.29836,0.23728,0.1,0.30753,0.23758,0.1,0.30753,0.23758,0,0.29836,0.23728,0,0.2892,0.23628,0,0.28021,0.23442,0,0.27582,0.23314,0,0.27153,0.23158,0]);
IndexedFaceSet906.coord = Coordinate907;

let Normal908 = browser.currentScene.createNode("Normal");
Normal908.vector = new MFVec3f(new float[-0.37139,0.92848,0,-0.31054,0.95056,0,-0.25355,0.96732,0,-0.15234,0.98833,0,-0.06825,0.99767,0,0,1,0,0,1,0,-0.06825,0.99767,0,-0.15234,0.98833,0,-0.25355,0.96732,0,-0.31054,0.95056,0,-0.37139,0.92848,0]);
IndexedFaceSet906.normal = Normal908;

Shape904.geometry = IndexedFaceSet906;

Transform5.children[179] = Shape904;

let Shape909 = browser.currentScene.createNode("Shape");
let Appearance910 = browser.currentScene.createNode("Appearance");
Appearance910.USE = "character3Appearance";
Shape909.appearance = Appearance910;

let IndexedFaceSet911 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet911.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet911.solid = False;
let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.30753,0.23758,0.1,0.31621,0.23714,0.1,0.32057,0.23654,0.1,0.32488,0.23565,0.1,0.32908,0.23443,0.1,0.33313,0.23287,0.1,0.33696,0.23093,0.1,0.34053,0.22858,0.1,0.34053,0.22858,0,0.33696,0.23093,0,0.33313,0.23287,0,0.32908,0.23443,0,0.32488,0.23565,0,0.32057,0.23654,0,0.31621,0.23714,0,0.30753,0.23758,0]);
IndexedFaceSet911.coord = Coordinate912;

let Normal913 = browser.currentScene.createNode("Normal");
Normal913.vector = new MFVec3f(new float[0,1,0,0.10549,0.99442,0,0.16797,0.98579,0,0.23831,0.97119,0,0.31721,0.94836,0,0.40477,0.91442,0,0.49996,0.86605,0,0.6,0.8,0,0.6,0.8,0,0.49996,0.86605,0,0.40477,0.91442,0,0.31721,0.94836,0,0.23831,0.97119,0,0.16797,0.98579,0,0.10549,0.99442,0,0,1,0]);
IndexedFaceSet911.normal = Normal913;

Shape909.geometry = IndexedFaceSet911;

Transform5.children[180] = Shape909;

let Shape914 = browser.currentScene.createNode("Shape");
let Appearance915 = browser.currentScene.createNode("Appearance");
Appearance915.USE = "character3Appearance";
Shape914.appearance = Appearance915;

let IndexedFaceSet916 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet916.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet916.solid = False;
let Coordinate917 = browser.currentScene.createNode("Coordinate");
Coordinate917.point = new MFVec3f(new float[0.34053,0.22858,0.1,0.34703,0.2257,0.1,0.35331,0.22227,0.1,0.35919,0.21825,0.1,0.36194,0.216,0.1,0.36453,0.21358,0.1,0.36453,0.21358,0,0.36194,0.216,0,0.35919,0.21825,0,0.35331,0.22227,0,0.34703,0.2257,0,0.34053,0.22858,0]);
IndexedFaceSet916.coord = Coordinate917;

let Normal918 = browser.currentScene.createNode("Normal");
Normal918.vector = new MFVec3f(new float[0.37139,0.92848,0,0.44036,0.89782,0,0.51995,0.8542,0,0.60979,0.79256,0,0.65782,0.75317,0,0.70711,0.70711,0,0.70711,0.70711,0,0.65782,0.75317,0,0.60979,0.79256,0,0.51995,0.8542,0,0.44036,0.89782,0,0.37139,0.92848,0]);
IndexedFaceSet916.normal = Normal918;

Shape914.geometry = IndexedFaceSet916;

Transform5.children[181] = Shape914;

let Shape919 = browser.currentScene.createNode("Shape");
let Appearance920 = browser.currentScene.createNode("Appearance");
Appearance920.USE = "character3Appearance";
Shape919.appearance = Appearance920;

let IndexedFaceSet921 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet921.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1]);
IndexedFaceSet921.solid = False;
let Coordinate922 = browser.currentScene.createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.36453,0.21358,0.1,0.36823,0.20958,0.1,0.37158,0.20523,0.1,0.37307,0.20294,0.1,0.37441,0.20056,0.1,0.37557,0.19811,0.1,0.37653,0.19558,0.1,0.37653,0.19558,0,0.37557,0.19811,0,0.37441,0.20056,0,0.37307,0.20294,0,0.37158,0.20523,0,0.36823,0.20958,0,0.36453,0.21358,0]);
IndexedFaceSet921.coord = Coordinate922;

let Normal923 = browser.currentScene.createNode("Normal");
Normal923.vector = new MFVec3f(new float[0.70711,0.70711,0,0.76123,0.64848,0,0.82277,0.56837,0,0.85532,0.5181,0,0.88802,0.4598,0,0.91968,0.39267,0,0.94868,0.31623,0,0.94868,0.31623,0,0.91968,0.39267,0,0.88802,0.4598,0,0.85532,0.5181,0,0.82277,0.56837,0,0.76123,0.64848,0,0.70711,0.70711,0]);
IndexedFaceSet921.normal = Normal923;

Shape919.geometry = IndexedFaceSet921;

Transform5.children[182] = Shape919;

let Shape924 = browser.currentScene.createNode("Shape");
let Appearance925 = browser.currentScene.createNode("Appearance");
Appearance925.USE = "character3Appearance";
Shape924.appearance = Appearance925;

let IndexedFaceSet926 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet926.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet926.solid = False;
let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[0.37653,0.19558,0.1,0.37781,0.19119,0.1,0.37875,0.1867,0.1,0.37933,0.18215,0.1,0.37953,0.17758,0.1,0.37953,0.17758,0,0.37933,0.18215,0,0.37875,0.1867,0,0.37781,0.19119,0,0.37653,0.19558,0]);
IndexedFaceSet926.coord = Coordinate927;

let Normal928 = browser.currentScene.createNode("Normal");
Normal928.vector = new MFVec3f(new float[0.94868,0.31623,0,0.97003,0.24298,0,0.98605,0.16647,0,0.99632,0.08575,0,1,0,0,1,0,0,0.99632,0.08575,0,0.98605,0.16647,0,0.97003,0.24298,0,0.94868,0.31623,0]);
IndexedFaceSet926.normal = Normal928;

Shape924.geometry = IndexedFaceSet926;

Transform5.children[183] = Shape924;

let Shape929 = browser.currentScene.createNode("Shape");
let Appearance930 = browser.currentScene.createNode("Appearance");
Appearance930.USE = "character3Appearance";
Shape929.appearance = Appearance930;

let IndexedFaceSet931 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet931.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet931.solid = False;
let Coordinate932 = browser.currentScene.createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.37953,0.17758,0.1,0.37929,0.17377,0.1,0.37863,0.16998,0.1,0.37653,0.16258,0.1,0.37653,0.16258,0,0.37863,0.16998,0,0.37929,0.17377,0,0.37953,0.17758,0]);
IndexedFaceSet931.coord = Coordinate932;

let Normal933 = browser.currentScene.createNode("Normal");
Normal933.vector = new MFVec3f(new float[1,0,0,0.99258,-0.12161,0,0.97691,-0.21363,0,0.94868,-0.31623,0,0.94868,-0.31623,0,0.97691,-0.21363,0,0.99258,-0.12161,0,1,0,0]);
IndexedFaceSet931.normal = Normal933;

Shape929.geometry = IndexedFaceSet931;

Transform5.children[184] = Shape929;

let Shape934 = browser.currentScene.createNode("Shape");
let Appearance935 = browser.currentScene.createNode("Appearance");
Appearance935.USE = "character3Appearance";
Shape934.appearance = Appearance935;

let IndexedFaceSet936 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet936.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet936.solid = False;
let Coordinate937 = browser.currentScene.createNode("Coordinate");
Coordinate937.point = new MFVec3f(new float[0.37653,0.16258,0.1,0.37475,0.15787,0.1,0.37263,0.15329,0.1,0.36753,0.14458,0.1,0.36753,0.14458,0,0.37263,0.15329,0,0.37475,0.15787,0,0.37653,0.16258,0]);
IndexedFaceSet936.coord = Coordinate937;

let Normal938 = browser.currentScene.createNode("Normal");
Normal938.vector = new MFVec3f(new float[0.94868,-0.31623,0,0.92164,-0.38803,0,0.89248,-0.45108,0,0.83205,-0.5547,0,0.83205,-0.5547,0,0.89248,-0.45108,0,0.92164,-0.38803,0,0.94868,-0.31623,0]);
IndexedFaceSet936.normal = Normal938;

Shape934.geometry = IndexedFaceSet936;

Transform5.children[185] = Shape934;

let Shape939 = browser.currentScene.createNode("Shape");
let Appearance940 = browser.currentScene.createNode("Appearance");
Appearance940.USE = "character3Appearance";
Shape939.appearance = Appearance940;

let IndexedFaceSet941 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet941.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet941.solid = False;
let Coordinate942 = browser.currentScene.createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.36753,0.14458,0.1,0.36436,0.14031,0.1,0.36076,0.13635,0.1,0.3568,0.13275,0.1,0.35253,0.12958,0.1,0.35253,0.12958,0,0.3568,0.13275,0,0.36076,0.13635,0,0.36436,0.14031,0,0.36753,0.14458,0]);
IndexedFaceSet941.coord = Coordinate942;

let Normal943 = browser.currentScene.createNode("Normal");
Normal943.vector = new MFVec3f(new float[0.83205,-0.5547,0,0.77259,-0.63491,0,0.70711,-0.70711,0,0.63491,-0.77259,0,0.5547,-0.83205,0,0.5547,-0.83205,0,0.63491,-0.77259,0,0.70711,-0.70711,0,0.77259,-0.63491,0,0.83205,-0.5547,0]);
IndexedFaceSet941.normal = Normal943;

Shape939.geometry = IndexedFaceSet941;

Transform5.children[186] = Shape939;

let Shape944 = browser.currentScene.createNode("Shape");
let Appearance945 = browser.currentScene.createNode("Appearance");
Appearance945.USE = "character3Appearance";
Shape944.appearance = Appearance945;

let IndexedFaceSet946 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet946.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet946.solid = False;
let Coordinate947 = browser.currentScene.createNode("Coordinate");
Coordinate947.point = new MFVec3f(new float[0.35253,0.12958,0.1,0.34604,0.12665,0.1,0.33933,0.12419,0.1,0.32553,0.12058,0.1,0.32553,0.12058,0,0.33933,0.12419,0,0.34604,0.12665,0,0.35253,0.12958,0]);
IndexedFaceSet946.coord = Coordinate947;

let Normal948 = browser.currentScene.createNode("Normal");
Normal948.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.37732,-0.92608,0,0.31212,-0.95004,0,0.19612,-0.98058,0,0.19612,-0.98058,0,0.31212,-0.95004,0,0.37732,-0.92608,0,0.44721,-0.89443,0]);
IndexedFaceSet946.normal = Normal948;

Shape944.geometry = IndexedFaceSet946;

Transform5.children[187] = Shape944;

let Shape949 = browser.currentScene.createNode("Shape");
let Appearance950 = browser.currentScene.createNode("Appearance");
Appearance950.USE = "character3Appearance";
Shape949.appearance = Appearance950;

let IndexedFaceSet951 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet951.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet951.solid = False;
let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.32553,0.12058,0.1,0.32553,0.11758,0.1,0.32553,0.11758,0,0.32553,0.12058,0]);
IndexedFaceSet951.coord = Coordinate952;

let Normal953 = browser.currentScene.createNode("Normal");
Normal953.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet951.normal = Normal953;

Shape949.geometry = IndexedFaceSet951;

Transform5.children[188] = Shape949;

let Shape954 = browser.currentScene.createNode("Shape");
let Appearance955 = browser.currentScene.createNode("Appearance");
Appearance955.USE = "character3Appearance";
Shape954.appearance = Appearance955;

let IndexedFaceSet956 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet956.coordIndex = new MFInt32(new int[5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1]);
IndexedFaceSet956.solid = False;
let Coordinate957 = browser.currentScene.createNode("Coordinate");
Coordinate957.point = new MFVec3f(new float[0.32553,0.11758,0.1,0.33597,0.11438,0.1,0.34653,0.11158,0.1,0.34653,0.11158,0,0.33597,0.11438,0,0.32553,0.11758,0]);
IndexedFaceSet956.coord = Coordinate957;

let Normal958 = browser.currentScene.createNode("Normal");
Normal958.vector = new MFVec3f(new float[0.31623,0.94868,0,0.27229,0.96222,0,0.24254,0.97014,0,0.24254,0.97014,0,0.27229,0.96222,0,0.31623,0.94868,0]);
IndexedFaceSet956.normal = Normal958;

Shape954.geometry = IndexedFaceSet956;

Transform5.children[189] = Shape954;

let Shape959 = browser.currentScene.createNode("Shape");
let Appearance960 = browser.currentScene.createNode("Appearance");
Appearance960.USE = "character3Appearance";
Shape959.appearance = Appearance960;

let IndexedFaceSet961 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet961.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet961.solid = False;
let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.34653,0.11158,0.1,0.35203,0.10999,0.1,0.35742,0.10797,0.1,0.36261,0.10551,0.1,0.36753,0.10258,0.1,0.36753,0.10258,0,0.36261,0.10551,0,0.35742,0.10797,0,0.35203,0.10999,0,0.34653,0.11158,0]);
IndexedFaceSet961.coord = Coordinate962;

let Normal963 = browser.currentScene.createNode("Normal");
Normal963.vector = new MFVec3f(new float[0.24254,0.97014,0,0.31323,0.94968,0,0.3887,0.92136,0,0.46933,0.88303,0,0.5547,0.83205,0,0.5547,0.83205,0,0.46933,0.88303,0,0.3887,0.92136,0,0.31323,0.94968,0,0.24254,0.97014,0]);
IndexedFaceSet961.normal = Normal963;

Shape959.geometry = IndexedFaceSet961;

Transform5.children[190] = Shape959;

let Shape964 = browser.currentScene.createNode("Shape");
let Appearance965 = browser.currentScene.createNode("Appearance");
Appearance965.USE = "character3Appearance";
Shape964.appearance = Appearance965;

let IndexedFaceSet966 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet966.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet966.solid = False;
let Coordinate967 = browser.currentScene.createNode("Coordinate");
Coordinate967.point = new MFVec3f(new float[0.36753,0.10258,0.1,0.3719,0.09782,0.1,0.37587,0.09269,0.1,0.37942,0.08725,0.1,0.38253,0.08158,0.1,0.38253,0.08158,0,0.37942,0.08725,0,0.37587,0.09269,0,0.3719,0.09782,0,0.36753,0.10258,0]);
IndexedFaceSet966.coord = Coordinate967;

let Normal968 = browser.currentScene.createNode("Normal");
Normal968.vector = new MFVec3f(new float[0.70711,0.70711,0,0.76514,0.64387,0,0.81495,0.57953,0,0.85773,0.5141,0,0.89443,0.44721,0,0.89443,0.44721,0,0.85773,0.5141,0,0.81495,0.57953,0,0.76514,0.64387,0,0.70711,0.70711,0]);
IndexedFaceSet966.normal = Normal968;

Shape964.geometry = IndexedFaceSet966;

Transform5.children[191] = Shape964;

let Shape969 = browser.currentScene.createNode("Shape");
let Appearance970 = browser.currentScene.createNode("Appearance");
Appearance970.USE = "character3Appearance";
Shape969.appearance = Appearance970;

let IndexedFaceSet971 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet971.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet971.solid = False;
let Coordinate972 = browser.currentScene.createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[0.38253,0.08158,0.1,0.38344,0.08011,0.1,0.38425,0.0786,0.1,0.38562,0.07542,0.1,0.38667,0.0721,0.1,0.38744,0.06866,0.1,0.38831,0.06161,0.1,0.38853,0.05458,0.1,0.38853,0.05458,0,0.38831,0.06161,0,0.38744,0.06866,0,0.38667,0.0721,0,0.38562,0.07542,0,0.38425,0.0786,0,0.38344,0.08011,0,0.38253,0.08158,0]);
IndexedFaceSet971.coord = Coordinate972;

let Normal973 = browser.currentScene.createNode("Normal");
Normal973.vector = new MFVec3f(new float[0.83205,0.5547,0,0.86597,0.5001,0,0.89465,0.44677,0,0.93799,0.34667,0,0.96612,0.25811,0,0.98322,0.18244,0,0.99763,0.06877,0,1,0,0,1,0,0,0.99763,0.06877,0,0.98322,0.18244,0,0.96612,0.25811,0,0.93799,0.34667,0,0.89465,0.44677,0,0.86597,0.5001,0,0.83205,0.5547,0]);
IndexedFaceSet971.normal = Normal973;

Shape969.geometry = IndexedFaceSet971;

Transform5.children[192] = Shape969;

let Shape974 = browser.currentScene.createNode("Shape");
let Appearance975 = browser.currentScene.createNode("Appearance");
Appearance975.USE = "character3Appearance";
Shape974.appearance = Appearance975;

let IndexedFaceSet976 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet976.coordIndex = new MFInt32(new int[21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet976.solid = False;
let Coordinate977 = browser.currentScene.createNode("Coordinate");
Coordinate977.point = new MFVec3f(new float[0.38853,0.05458,0.1,0.38839,0.05097,0.1,0.38799,0.04735,0.1,0.38734,0.04374,0.1,0.38644,0.04016,0.1,0.38399,0.0331,0.1,0.38072,0.0263,0.1,0.37674,0.01984,0.1,0.37215,0.01383,0.1,0.36705,0.00837,0.1,0.36153,0.00358,0.1,0.36153,0.00358,0,0.36705,0.00837,0,0.37215,0.01383,0,0.37674,0.01984,0,0.38072,0.0263,0,0.38399,0.0331,0,0.38644,0.04016,0,0.38734,0.04374,0,0.38799,0.04735,0,0.38839,0.05097,0,0.38853,0.05458,0]);
IndexedFaceSet976.coord = Coordinate977;

let Normal978 = browser.currentScene.createNode("Normal");
Normal978.vector = new MFVec3f(new float[1,0,0,0.99721,-0.07465,0,0.98945,-0.14485,0,0.97758,-0.21056,0,0.96232,-0.27191,0,0.92389,-0.38266,0,0.8773,-0.47993,0,0.82386,-0.5668,0,0.76334,-0.646,0,0.69427,-0.71972,0,0.61394,-0.78935,0,0.61394,-0.78935,0,0.69427,-0.71972,0,0.76334,-0.646,0,0.82386,-0.5668,0,0.8773,-0.47993,0,0.92389,-0.38266,0,0.96232,-0.27191,0,0.97758,-0.21056,0,0.98945,-0.14485,0,0.99721,-0.07465,0,1,0,0]);
IndexedFaceSet976.normal = Normal978;

Shape974.geometry = IndexedFaceSet976;

Transform5.children[193] = Shape974;

let Shape979 = browser.currentScene.createNode("Shape");
let Appearance980 = browser.currentScene.createNode("Appearance");
Appearance980.USE = "character3Appearance";
Shape979.appearance = Appearance980;

let IndexedFaceSet981 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet981.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet981.solid = False;
let Coordinate982 = browser.currentScene.createNode("Coordinate");
Coordinate982.point = new MFVec3f(new float[0.36153,0.00358,0.1,0.35434,-0.0021,0.1,0.34649,-0.00699,0.1,0.33812,-0.01112,0.1,0.32933,-0.01449,0.1,0.32026,-0.01709,0.1,0.31102,-0.01894,0.1,0.30174,-0.02005,0.1,0.29253,-0.02042,0.1,0.29253,-0.02042,0,0.30174,-0.02005,0,0.31102,-0.01894,0,0.32026,-0.01709,0,0.32933,-0.01449,0,0.33812,-0.01112,0,0.34649,-0.00699,0,0.35434,-0.0021,0,0.36153,0.00358,0]);
IndexedFaceSet981.coord = Coordinate982;

let Normal983 = browser.currentScene.createNode("Normal");
Normal983.vector = new MFVec3f(new float[0.66436,-0.74741,0,0.5742,-0.81872,0,0.48534,-0.87432,0,0.39926,-0.91684,0,0.31628,-0.94867,0,0.23596,-0.97176,0,0.15736,-0.98754,0,0.07921,-0.99686,0,0,-1,0,0,-1,0,0.07921,-0.99686,0,0.15736,-0.98754,0,0.23596,-0.97176,0,0.31628,-0.94867,0,0.39926,-0.91684,0,0.48534,-0.87432,0,0.5742,-0.81872,0,0.66436,-0.74741,0]);
IndexedFaceSet981.normal = Normal983;

Shape979.geometry = IndexedFaceSet981;

Transform5.children[194] = Shape979;

let Shape984 = browser.currentScene.createNode("Shape");
let Appearance985 = browser.currentScene.createNode("Appearance");
Appearance985.USE = "character3Appearance";
Shape984.appearance = Appearance985;

let IndexedFaceSet986 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet986.coordIndex = new MFInt32(new int[321,0,8,-1,320,8,9,-1,319,9,10,-1,318,10,238,-1,239,318,238,-1,239,240,318,-1,318,240,241,-1,242,318,241,-1,242,243,318,-1,318,243,244,-1,249,244,248,-1,249,318,244,-1,249,250,318,-1,318,250,251,-1,252,318,251,-1,252,253,318,-1,318,253,254,-1,317,254,255,-1,256,317,255,-1,256,316,317,-1,256,257,316,-1,316,257,315,-1,315,257,281,-1,282,315,281,-1,282,314,315,-1,282,312,314,-1,282,311,312,-1,282,283,311,-1,311,283,310,-1,310,283,284,-1,285,310,284,-1,285,286,310,-1,310,286,287,-1,288,310,287,-1,288,309,310,-1,288,299,309,-1,288,289,299,-1,299,289,290,-1,291,299,290,-1,291,292,299,-1,299,292,293,-1,294,299,293,-1,294,295,299,-1,299,295,296,-1,297,299,296,-1,297,298,299,-1,2,7,1,-1,2,6,7,-1,2,3,6,-1,6,3,5,-1,5,3,4,-1,7,8,1,-1,1,8,0,-1,321,8,320,-1,320,9,319,-1,11,233,10,-1,11,232,233,-1,11,231,232,-1,11,230,231,-1,11,12,230,-1,230,12,229,-1,229,12,228,-1,228,12,227,-1,227,12,226,-1,226,12,13,-1,225,13,224,-1,225,226,13,-1,13,14,224,-1,224,14,223,-1,223,14,222,-1,222,14,221,-1,221,14,15,-1,220,15,219,-1,220,221,15,-1,15,16,219,-1,219,16,218,-1,218,16,217,-1,217,16,17,-1,216,17,215,-1,216,217,17,-1,215,17,214,-1,214,17,18,-1,213,18,19,-1,212,19,20,-1,211,20,21,-1,210,21,22,-1,209,22,23,-1,208,23,207,-1,208,209,23,-1,214,18,213,-1,213,19,212,-1,212,20,211,-1,211,21,210,-1,210,22,209,-1,23,24,207,-1,207,24,25,-1,206,25,26,-1,205,26,27,-1,28,205,27,-1,28,29,205,-1,205,29,204,-1,204,29,30,-1,203,30,202,-1,203,204,30,-1,207,25,206,-1,206,26,205,-1,202,30,201,-1,201,30,31,-1,200,31,199,-1,200,201,31,-1,32,196,31,-1,32,195,196,-1,32,194,195,-1,32,193,194,-1,32,192,193,-1,32,191,192,-1,32,33,191,-1,191,33,190,-1,190,33,189,-1,189,33,188,-1,188,33,187,-1,187,33,34,-1,186,34,35,-1,185,35,36,-1,37,185,36,-1,37,38,185,-1,185,38,39,-1,40,185,39,-1,40,184,185,-1,40,41,184,-1,184,41,183,-1,183,41,42,-1,182,42,181,-1,182,183,42,-1,187,34,186,-1,186,35,185,-1,43,179,42,-1,43,178,179,-1,43,44,178,-1,178,44,177,-1,177,44,176,-1,176,44,45,-1,175,45,174,-1,175,176,45,-1,45,46,174,-1,174,46,173,-1,173,46,172,-1,172,46,47,-1,171,47,170,-1,171,172,47,-1,170,47,169,-1,169,47,48,-1,168,48,49,-1,167,49,50,-1,166,50,51,-1,52,166,51,-1,52,165,166,-1,52,53,165,-1,165,53,164,-1,164,53,54,-1,163,54,55,-1,162,55,56,-1,161,56,57,-1,58,161,57,-1,58,160,161,-1,58,59,160,-1,160,59,60,-1,159,60,61,-1,158,61,157,-1,158,159,61,-1,169,48,168,-1,168,49,167,-1,167,50,166,-1,164,54,163,-1,163,55,162,-1,162,56,161,-1,160,60,159,-1,61,62,157,-1,157,62,156,-1,156,62,155,-1,155,62,154,-1,154,62,63,-1,153,63,64,-1,152,64,151,-1,152,153,64,-1,154,63,153,-1,151,64,150,-1,150,64,65,-1,149,65,148,-1,149,150,65,-1,148,65,147,-1,147,65,66,-1,146,66,145,-1,146,147,66,-1,66,67,145,-1,145,67,68,-1,69,145,68,-1,69,70,145,-1,145,70,71,-1,72,145,71,-1,72,73,145,-1,145,73,74,-1,75,145,74,-1,75,76,145,-1,145,76,77,-1,78,145,77,-1,78,79,145,-1,145,79,80,-1,81,145,80,-1,81,144,145,-1,81,143,144,-1,81,142,143,-1,81,141,142,-1,81,140,141,-1,81,139,140,-1,81,138,139,-1,81,137,138,-1,81,136,137,-1,81,135,136,-1,81,134,135,-1,81,133,134,-1,81,132,133,-1,81,131,132,-1,81,82,131,-1,131,82,130,-1,130,82,83,-1,129,83,107,-1,108,129,107,-1,108,128,129,-1,108,109,128,-1,128,109,110,-1,127,110,126,-1,127,128,110,-1,84,85,83,-1,83,85,106,-1,107,83,106,-1,85,86,106,-1,106,86,87,-1,105,87,88,-1,104,88,89,-1,103,89,102,-1,103,104,89,-1,106,87,105,-1,105,88,104,-1,89,90,102,-1,102,90,91,-1,101,91,92,-1,100,92,99,-1,100,101,92,-1,102,91,101,-1,92,93,99,-1,99,93,98,-1,98,93,97,-1,97,93,96,-1,96,93,94,-1,95,96,94,-1,126,110,125,-1,125,110,111,-1,124,111,123,-1,124,125,111,-1,112,113,111,-1,111,113,114,-1,123,114,115,-1,116,123,115,-1,116,117,123,-1,123,117,118,-1,122,118,119,-1,120,122,119,-1,120,121,122,-1,111,114,123,-1,123,118,122,-1,129,130,83,-1,179,180,42,-1,42,180,181,-1,196,197,31,-1,31,197,198,-1,199,31,198,-1,233,234,10,-1,10,234,235,-1,236,10,235,-1,236,237,10,-1,10,237,238,-1,248,244,247,-1,247,244,245,-1,246,247,245,-1,318,254,317,-1,281,257,280,-1,280,257,258,-1,279,258,278,-1,279,280,258,-1,278,258,277,-1,277,258,259,-1,276,259,275,-1,276,277,259,-1,260,273,259,-1,260,272,273,-1,260,261,272,-1,272,261,271,-1,271,261,270,-1,270,261,269,-1,269,261,268,-1,268,261,267,-1,267,261,262,-1,266,262,265,-1,266,267,262,-1,263,264,262,-1,262,264,265,-1,273,274,259,-1,259,274,275,-1,300,302,299,-1,300,301,302,-1,302,303,299,-1,299,303,304,-1,305,299,304,-1,305,306,299,-1,299,306,307,-1,308,299,307,-1,308,309,299,-1,312,313,314,-1,318,319,10,-1]);
IndexedFaceSet986.solid = False;
let Coordinate987 = browser.currentScene.createNode("Coordinate");
Coordinate987.point = new MFVec3f(new float[0.26253,-0.01442,0.1,0.26978,-0.01695,0.1,0.27725,-0.01884,0.1,0.28487,-0.02001,0.1,0.29253,-0.02042,0.1,0.30174,-0.02005,0.1,0.31102,-0.01894,0.1,0.32026,-0.01709,0.1,0.32933,-0.01449,0.1,0.33812,-0.01112,0.1,0.34649,-0.00699,0.1,0.35434,-0.0021,0.1,0.36153,0.00358,0.1,0.36705,0.00837,0.1,0.37215,0.01383,0.1,0.37674,0.01984,0.1,0.38072,0.0263,0.1,0.38399,0.0331,0.1,0.38644,0.04016,0.1,0.38734,0.04374,0.1,0.38799,0.04735,0.1,0.38839,0.05097,0.1,0.38853,0.05458,0.1,0.38831,0.06161,0.1,0.38744,0.06866,0.1,0.38667,0.0721,0.1,0.38562,0.07542,0.1,0.38425,0.0786,0.1,0.38344,0.08011,0.1,0.38253,0.08158,0.1,0.37942,0.08725,0.1,0.37587,0.09269,0.1,0.3719,0.09782,0.1,0.36753,0.10258,0.1,0.36261,0.10551,0.1,0.35742,0.10797,0.1,0.35203,0.10999,0.1,0.34653,0.11158,0.1,0.33597,0.11438,0.1,0.32553,0.11758,0.1,0.32553,0.12058,0.1,0.33933,0.12419,0.1,0.34604,0.12665,0.1,0.35253,0.12958,0.1,0.3568,0.13275,0.1,0.36076,0.13635,0.1,0.36436,0.14031,0.1,0.36753,0.14458,0.1,0.37263,0.15329,0.1,0.37475,0.15787,0.1,0.37653,0.16258,0.1,0.37863,0.16998,0.1,0.37929,0.17377,0.1,0.37953,0.17758,0.1,0.37933,0.18215,0.1,0.37875,0.1867,0.1,0.37781,0.19119,0.1,0.37653,0.19558,0.1,0.37557,0.19811,0.1,0.37441,0.20056,0.1,0.37307,0.20294,0.1,0.37158,0.20523,0.1,0.36823,0.20958,0.1,0.36453,0.21358,0.1,0.36194,0.216,0.1,0.35919,0.21825,0.1,0.35331,0.22227,0.1,0.34703,0.2257,0.1,0.34053,0.22858,0.1,0.33696,0.23093,0.1,0.33313,0.23287,0.1,0.32908,0.23443,0.1,0.32488,0.23565,0.1,0.32057,0.23654,0.1,0.31621,0.23714,0.1,0.30753,0.23758,0.1,0.29836,0.23728,0.1,0.2892,0.23628,0.1,0.28021,0.23442,0.1,0.27582,0.23314,0.1,0.27153,0.23158,0.1,0.25919,0.22462,0.1,0.24753,0.21658,0.1,0.23958,0.20795,0.1,0.23253,0.19858,0.1,0.23125,0.19419,0.1,0.23031,0.1897,0.1,0.22973,0.18515,0.1,0.22953,0.18058,0.1,0.22968,0.17673,0.1,0.23017,0.17288,0.1,0.23058,0.17099,0.1,0.2311,0.16913,0.1,0.23174,0.16733,0.1,0.23253,0.16558,0.1,0.23294,0.16485,0.1,0.23343,0.16417,0.1,0.23399,0.16354,0.1,0.23462,0.16296,0.1,0.2353,0.16242,0.1,0.23602,0.16192,0.1,0.23679,0.16148,0.1,0.2376,0.16108,0.1,0.23929,0.16042,0.1,0.24105,0.15996,0.1,0.24281,0.15967,0.1,0.24453,0.15958,0.1,0.24914,0.15967,0.1,0.25377,0.16006,0.1,0.25604,0.16044,0.1,0.25827,0.16096,0.1,0.26044,0.16167,0.1,0.26253,0.16258,0.1,0.26369,0.16382,0.1,0.2648,0.16516,0.1,0.26582,0.16659,0.1,0.26671,0.16809,0.1,0.26746,0.16965,0.1,0.26803,0.17126,0.1,0.26824,0.17208,0.1,0.2684,0.17291,0.1,0.26849,0.17374,0.1,0.26853,0.17458,0.1,0.26838,0.17843,0.1,0.26788,0.18228,0.1,0.26748,0.18418,0.1,0.26696,0.18603,0.1,0.26631,0.18784,0.1,0.26553,0.18958,0.1,0.26342,0.19698,0.1,0.26277,0.20077,0.1,0.26253,0.20458,0.1,0.26403,0.20608,0.1,0.26553,0.20758,0.1,0.26756,0.20937,0.1,0.26977,0.21093,0.1,0.27453,0.21358,0.1,0.27656,0.21537,0.1,0.27877,0.21693,0.1,0.28353,0.21958,0.1,0.28527,0.22036,0.1,0.28708,0.22101,0.1,0.28893,0.22153,0.1,0.29083,0.22194,0.1,0.29467,0.22243,0.1,0.29853,0.22258,0.1,0.30264,0.22242,0.1,0.30685,0.22192,0.1,0.31105,0.22106,0.1,0.31514,0.21981,0.1,0.31903,0.21816,0.1,0.32087,0.21718,0.1,0.32263,0.21609,0.1,0.32428,0.21489,0.1,0.32582,0.21357,0.1,0.32724,0.21214,0.1,0.32853,0.21058,0.1,0.33003,0.20898,0.1,0.33142,0.20727,0.1,0.33389,0.20358,0.1,0.33596,0.19959,0.1,0.33763,0.19537,0.1,0.33891,0.19098,0.1,0.33982,0.18651,0.1,0.34035,0.18202,0.1,0.34053,0.17758,0.1,0.34,0.1671,0.1,0.33927,0.1618,0.1,0.33813,0.15659,0.1,0.33655,0.15156,0.1,0.33446,0.14682,0.1,0.33321,0.14459,0.1,0.3318,0.14246,0.1,0.33025,0.14045,0.1,0.32853,0.13858,0.1,0.32692,0.13708,0.1,0.32521,0.13569,0.1,0.32153,0.13321,0.1,0.31753,0.13115,0.1,0.31331,0.12948,0.1,0.30893,0.1282,0.1,0.30446,0.12729,0.1,0.29997,0.12676,0.1,0.29553,0.12658,0.1,0.28053,0.12658,0.1,0.28053,0.10558,0.1,0.30153,0.10558,0.1,0.30779,0.10529,0.1,0.31094,0.10489,0.1,0.31405,0.1043,0.1,0.31709,0.10349,0.1,0.32004,0.10245,0.1,0.32286,0.10115,0.1,0.32553,0.09958,0.1,0.32731,0.09892,0.1,0.32909,0.09814,0.1,0.33082,0.09722,0.1,0.33247,0.09617,0.1,0.334,0.09498,0.1,0.33538,0.09365,0.1,0.336,0.09294,0.1,0.33656,0.09219,0.1,0.33708,0.0914,0.1,0.33753,0.09058,0.1,0.34263,0.08187,0.1,0.34475,0.07729,0.1,0.34653,0.07258,0.1,0.34781,0.06819,0.1,0.34875,0.0637,0.1,0.34933,0.05915,0.1,0.34953,0.05458,0.1,0.34923,0.04832,0.1,0.34883,0.04517,0.1,0.34824,0.04206,0.1,0.34744,0.03902,0.1,0.34639,0.03607,0.1,0.3451,0.03324,0.1,0.34353,0.03058,0.1,0.34268,0.02767,0.1,0.34163,0.0248,0.1,0.34037,0.022,0.1,0.33893,0.01929,0.1,0.33731,0.01667,0.1,0.33553,0.01417,0.1,0.3336,0.0118,0.1,0.33153,0.00958,0.1,0.32966,0.0079,0.1,0.32763,0.0064,0.1,0.32546,0.00508,0.1,0.32319,0.00391,0.1,0.31842,0.00201,0.1,0.31353,0.00058,0.1,0.30938,-0.00184,0.1,0.30719,-0.00286,0.1,0.30493,-0.00373,0.1,0.30261,-0.00445,0.1,0.30027,-0.00497,0.1,0.2979,-0.00531,0.1,0.29553,-0.00542,0.1,0.29091,-0.00533,0.1,0.28629,-0.00494,0.1,0.28401,-0.00456,0.1,0.28178,-0.00404,0.1,0.27961,-0.00333,0.1,0.27753,-0.00242,0.1,0.27468,-0.00117,0.1,0.27169,-0.00023,0.1,0.26862,0.00037,0.1,0.26708,0.00053,0.1,0.26553,0.00058,0.1,0.26077,0.00323,0.1,0.25856,0.00479,0.1,0.25653,0.00658,0.1,0.25503,0.00808,0.1,0.25353,0.00958,0.1,0.25358,0.01113,0.1,0.25374,0.01268,0.1,0.25434,0.01574,0.1,0.25528,0.01873,0.1,0.25653,0.02158,0.1,0.25863,0.02898,0.1,0.25929,0.03277,0.1,0.25953,0.03658,0.1,0.2594,0.03794,0.1,0.25904,0.03928,0.1,0.25879,0.03994,0.1,0.25848,0.04059,0.1,0.25813,0.04122,0.1,0.25774,0.04183,0.1,0.25684,0.04298,0.1,0.25583,0.044,0.1,0.25528,0.04446,0.1,0.25471,0.04488,0.1,0.25353,0.04558,0.1,0.25266,0.04639,0.1,0.25173,0.04712,0.1,0.25075,0.0478,0.1,0.24972,0.04841,0.1,0.24753,0.04944,0.1,0.24522,0.05026,0.1,0.24282,0.05086,0.1,0.24038,0.05127,0.1,0.23793,0.05151,0.1,0.23553,0.05158,0.1,0.23459,0.05153,0.1,0.23364,0.05139,0.1,0.2327,0.05116,0.1,0.23177,0.05084,0.1,0.23085,0.05045,0.1,0.22995,0.04998,0.1,0.22908,0.04945,0.1,0.22825,0.04886,0.1,0.22745,0.04821,0.1,0.2267,0.04751,0.1,0.226,0.04677,0.1,0.22537,0.04599,0.1,0.22479,0.04517,0.1,0.22429,0.04433,0.1,0.22387,0.04346,0.1,0.22353,0.04258,0.1,0.22301,0.04201,0.1,0.22256,0.0414,0.1,0.22217,0.04074,0.1,0.22183,0.04006,0.1,0.22154,0.03934,0.1,0.2213,0.03859,0.1,0.22093,0.03703,0.1,0.22071,0.03542,0.1,0.22059,0.03379,0.1,0.22053,0.03058,0.1,0.22073,0.02601,0.1,0.22131,0.02146,0.1,0.22225,0.01697,0.1,0.22353,0.01258,0.1,0.2267,0.00831,0.1,0.23029,0.00435,0.1,0.23425,0.00075,0.1,0.23853,-0.00242,0.1,0.24408,-0.00625,0.1,0.24996,-0.00962,0.1,0.25612,-0.01238,0.1,0.2593,-0.0135,0.1]);
IndexedFaceSet986.coord = Coordinate987;

let Normal988 = browser.currentScene.createNode("Normal");
Normal988.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet986.normal = Normal988;

Shape984.geometry = IndexedFaceSet986;

Transform5.children[195] = Shape984;

let Shape989 = browser.currentScene.createNode("Shape");
let Appearance990 = browser.currentScene.createNode("Appearance");
Appearance990.DEF = "characterDAppearance";
let Material991 = browser.currentScene.createNode("Material");
Material991.ambientIntensity = 1;
Material991.diffuseColor = new SFColor(new float[0.863,0.141,0.122]);
Material991.shininess = 1;
Appearance990.material = Material991;

Shape989.appearance = Appearance990;

let IndexedFaceSet992 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet992.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet992.solid = False;
let Coordinate993 = browser.currentScene.createNode("Coordinate");
Coordinate993.point = new MFVec3f(new float[0.60364,0.03114,0.1,0.60947,0.03937,0.1,0.6144,0.04823,0.1,0.61845,0.05755,0.1,0.62164,0.06714,0.1,0.62164,0.06714,0,0.61845,0.05755,0,0.6144,0.04823,0,0.60947,0.03937,0,0.60364,0.03114,0]);
IndexedFaceSet992.coord = Coordinate993;

let Normal994 = browser.currentScene.createNode("Normal");
Normal994.vector = new MFVec3f(new float[-0.78087,0.6247,0,-0.8472,0.53128,0,-0.8972,0.44162,0,-0.93437,0.35631,0,-0.96152,0.27472,0,-0.96152,0.27472,0,-0.93437,0.35631,0,-0.8972,0.44162,0,-0.8472,0.53128,0,-0.78087,0.6247,0]);
IndexedFaceSet992.normal = Normal994;

Shape989.geometry = IndexedFaceSet992;

Transform5.children[196] = Shape989;

let Shape995 = browser.currentScene.createNode("Shape");
let Appearance996 = browser.currentScene.createNode("Appearance");
Appearance996.USE = "characterDAppearance";
Shape995.appearance = Appearance996;

let IndexedFaceSet997 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet997.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet997.solid = False;
let Coordinate998 = browser.currentScene.createNode("Coordinate");
Coordinate998.point = new MFVec3f(new float[0.57664,0.01014,0.1,0.5842,0.01429,0.1,0.5914,0.01914,0.1,0.59478,0.02183,0.1,0.59797,0.02473,0.1,0.60094,0.02783,0.1,0.60364,0.03114,0.1,0.60364,0.03114,0,0.60094,0.02783,0,0.59797,0.02473,0,0.59478,0.02183,0,0.5914,0.01914,0,0.5842,0.01429,0,0.57664,0.01014,0]);
IndexedFaceSet997.coord = Coordinate998;

let Normal999 = browser.currentScene.createNode("Normal");
Normal999.vector = new MFVec3f(new float[-0.44721,0.89443,0,-0.5171,0.85592,0,-0.60081,0.79939,0,-0.64759,0.76199,0,-0.69705,0.71702,0,-0.74831,0.66335,0,-0.8,0.6,0,-0.8,0.6,0,-0.74831,0.66335,0,-0.69705,0.71702,0,-0.64759,0.76199,0,-0.60081,0.79939,0,-0.5171,0.85592,0,-0.44721,0.89443,0]);
IndexedFaceSet997.normal = Normal999;

Shape995.geometry = IndexedFaceSet997;

Transform5.children[197] = Shape995;

let Shape1000 = browser.currentScene.createNode("Shape");
let Appearance1001 = browser.currentScene.createNode("Appearance");
Appearance1001.USE = "characterDAppearance";
Shape1000.appearance = Appearance1001;

let IndexedFaceSet1002 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1002.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1002.solid = False;
let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.53764,0.00414,0.1,0.54757,0.00439,0.1,0.5575,0.00531,0.1,0.56725,0.00715,0.1,0.572,0.00848,0.1,0.57664,0.01014,0.1,0.57664,0.01014,0,0.572,0.00848,0,0.56725,0.00715,0,0.5575,0.00531,0,0.54757,0.00439,0,0.53764,0.00414,0]);
IndexedFaceSet1002.coord = Coordinate1003;

let Normal1004 = browser.currentScene.createNode("Normal");
Normal1004.vector = new MFVec3f(new float[0,1,0,-0.05442,0.99852,0,-0.13396,0.99099,0,-0.24002,0.97077,0,-0.30283,0.95305,0,-0.37139,0.92848,0,-0.37139,0.92848,0,-0.30283,0.95305,0,-0.24002,0.97077,0,-0.13396,0.99099,0,-0.05442,0.99852,0,0,1,0]);
IndexedFaceSet1002.normal = Normal1004;

Shape1000.geometry = IndexedFaceSet1002;

Transform5.children[198] = Shape1000;

let Shape1005 = browser.currentScene.createNode("Shape");
let Appearance1006 = browser.currentScene.createNode("Appearance");
Appearance1006.USE = "characterDAppearance";
Shape1005.appearance = Appearance1006;

let IndexedFaceSet1007 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1007.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1007.solid = False;
let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[0.51064,0.01014,0.1,0.51211,0.00923,0.1,0.51363,0.00842,0.1,0.5168,0.00705,0.1,0.52013,0.006,0.1,0.52356,0.00523,0.1,0.53061,0.00436,0.1,0.53764,0.00414,0.1,0.53764,0.00414,0,0.53061,0.00436,0,0.52356,0.00523,0,0.52013,0.006,0,0.5168,0.00705,0,0.51363,0.00842,0,0.51211,0.00923,0,0.51064,0.01014,0]);
IndexedFaceSet1007.coord = Coordinate1008;

let Normal1009 = browser.currentScene.createNode("Normal");
Normal1009.vector = new MFVec3f(new float[0.5547,0.83205,0,0.5001,0.86597,0,0.44677,0.89465,0,0.34667,0.93799,0,0.25811,0.96612,0,0.18244,0.98322,0,0.06877,0.99763,0,0,1,0,0,1,0,0.06877,0.99763,0,0.18244,0.98322,0,0.25811,0.96612,0,0.34667,0.93799,0,0.44677,0.89465,0,0.5001,0.86597,0,0.5547,0.83205,0]);
IndexedFaceSet1007.normal = Normal1009;

Shape1005.geometry = IndexedFaceSet1007;

Transform5.children[199] = Shape1005;

let Shape1010 = browser.currentScene.createNode("Shape");
let Appearance1011 = browser.currentScene.createNode("Appearance");
Appearance1011.USE = "characterDAppearance";
Shape1010.appearance = Appearance1011;

let IndexedFaceSet1012 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1012.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,17,-1,18,19,5,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,5,6,17,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,13,-1,14,15,9,-1,17,7,16,-1,16,8,15,-1,9,10,13,-1,13,10,11,-1,12,13,11,-1]);
IndexedFaceSet1012.solid = False;
let Coordinate1013 = browser.currentScene.createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[0.50164,0.03114,0.1,0.50177,0.02823,0.1,0.50216,0.02524,0.1,0.50282,0.02227,0.1,0.50377,0.01937,0.1,0.50501,0.01664,0.1,0.50575,0.01535,0.1,0.50656,0.01414,0.1,0.50746,0.013,0.1,0.50844,0.01195,0.1,0.5095,0.01099,0.1,0.51064,0.01014,0.1,0.51064,0.01014,0,0.5095,0.01099,0,0.50844,0.01195,0,0.50746,0.013,0,0.50656,0.01414,0,0.50575,0.01535,0,0.50501,0.01664,0,0.50377,0.01937,0,0.50282,0.02227,0,0.50216,0.02524,0,0.50177,0.02823,0,0.50164,0.03114,0]);
IndexedFaceSet1012.coord = Coordinate1013;

let Normal1014 = browser.currentScene.createNode("Normal");
Normal1014.vector = new MFVec3f(new float[1,0,0,0.9963,0.08595,0,0.98508,0.17212,0,0.96491,0.26257,0,0.93269,0.36069,0,0.88327,0.46887,0,0.84989,0.52696,0,0.80931,0.58738,0,0.76037,0.64949,0,0.70204,0.71214,0,0.63355,0.7737,0,0.5547,0.83205,0,0.5547,0.83205,0,0.63355,0.7737,0,0.70204,0.71214,0,0.76037,0.64949,0,0.80931,0.58738,0,0.84989,0.52696,0,0.88327,0.46887,0,0.93269,0.36069,0,0.96491,0.26257,0,0.98508,0.17212,0,0.9963,0.08595,0,1,0,0]);
IndexedFaceSet1012.normal = Normal1014;

Shape1010.geometry = IndexedFaceSet1012;

Transform5.children[200] = Shape1010;

let Shape1015 = browser.currentScene.createNode("Shape");
let Appearance1016 = browser.currentScene.createNode("Appearance");
Appearance1016.USE = "characterDAppearance";
Shape1015.appearance = Appearance1016;

let IndexedFaceSet1017 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1017.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1017.solid = False;
let Coordinate1018 = browser.currentScene.createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[0.50164,0.22014,0.1,0.50164,0.03114,0.1,0.50164,0.03114,0,0.50164,0.22014,0]);
IndexedFaceSet1017.coord = Coordinate1018;

let Normal1019 = browser.currentScene.createNode("Normal");
Normal1019.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1017.normal = Normal1019;

Shape1015.geometry = IndexedFaceSet1017;

Transform5.children[201] = Shape1015;

let Shape1020 = browser.currentScene.createNode("Shape");
let Appearance1021 = browser.currentScene.createNode("Appearance");
Appearance1021.USE = "characterDAppearance";
Shape1020.appearance = Appearance1021;

let IndexedFaceSet1022 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1022.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet1022.solid = False;
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.51364,0.22014,0.1,0.50164,0.22014,0.1,0.50164,0.22014,0,0.51364,0.22014,0]);
IndexedFaceSet1022.coord = Coordinate1023;

let Normal1024 = browser.currentScene.createNode("Normal");
Normal1024.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1022.normal = Normal1024;

Shape1020.geometry = IndexedFaceSet1022;

Transform5.children[202] = Shape1020;

let Shape1025 = browser.currentScene.createNode("Shape");
let Appearance1026 = browser.currentScene.createNode("Appearance");
Appearance1026.USE = "characterDAppearance";
Shape1025.appearance = Appearance1026;

let IndexedFaceSet1027 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1027.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1027.solid = False;
let Coordinate1028 = browser.currentScene.createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[0.52864,0.22314,0.1,0.52483,0.2229,0.1,0.52105,0.22225,0.1,0.51364,0.22014,0.1,0.51364,0.22014,0,0.52105,0.22225,0,0.52483,0.2229,0,0.52864,0.22314,0]);
IndexedFaceSet1027.coord = Coordinate1028;

let Normal1029 = browser.currentScene.createNode("Normal");
Normal1029.vector = new MFVec3f(new float[0,-1,0,0.12161,-0.99258,0,0.21363,-0.97691,0,0.31623,-0.94868,0,0.31623,-0.94868,0,0.21363,-0.97691,0,0.12161,-0.99258,0,0,-1,0]);
IndexedFaceSet1027.normal = Normal1029;

Shape1025.geometry = IndexedFaceSet1027;

Transform5.children[203] = Shape1025;

let Shape1030 = browser.currentScene.createNode("Shape");
let Appearance1031 = browser.currentScene.createNode("Appearance");
Appearance1031.USE = "characterDAppearance";
Shape1030.appearance = Appearance1031;

let IndexedFaceSet1032 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1032.coordIndex = new MFInt32(new int[11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1]);
IndexedFaceSet1032.solid = False;
let Coordinate1033 = browser.currentScene.createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[0.57064,0.21414,0.1,0.56575,0.21637,0.1,0.56069,0.21825,0.1,0.55021,0.22104,0.1,0.53945,0.22264,0.1,0.52864,0.22314,0.1,0.52864,0.22314,0,0.53945,0.22264,0,0.55021,0.22104,0,0.56069,0.21825,0,0.56575,0.21637,0,0.57064,0.21414,0]);
IndexedFaceSet1032.coord = Coordinate1033;

let Normal1034 = browser.currentScene.createNode("Normal");
Normal1034.vector = new MFVec3f(new float[-0.44721,-0.89443,0,-0.38082,-0.92465,0,-0.31727,-0.94834,0,-0.19979,-0.97984,0,-0.09477,-0.9955,0,0,-1,0,0,-1,0,-0.09477,-0.9955,0,-0.19979,-0.97984,0,-0.31727,-0.94834,0,-0.38082,-0.92465,0,-0.44721,-0.89443,0]);
IndexedFaceSet1032.normal = Normal1034;

Shape1030.geometry = IndexedFaceSet1032;

Transform5.children[204] = Shape1030;

let Shape1035 = browser.currentScene.createNode("Shape");
let Appearance1036 = browser.currentScene.createNode("Appearance");
Appearance1036.USE = "characterDAppearance";
Shape1035.appearance = Appearance1036;

let IndexedFaceSet1037 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1037.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1037.solid = False;
let Coordinate1038 = browser.currentScene.createNode("Coordinate");
Coordinate1038.point = new MFVec3f(new float[0.60064,0.19014,0.1,0.59419,0.19731,0.1,0.58694,0.20375,0.1,0.57904,0.20938,0.1,0.57064,0.21414,0.1,0.57064,0.21414,0,0.57904,0.20938,0,0.58694,0.20375,0,0.59419,0.19731,0,0.60064,0.19014,0]);
IndexedFaceSet1037.coord = Coordinate1038;

let Normal1039 = browser.currentScene.createNode("Normal");
Normal1039.vector = new MFVec3f(new float[-0.78087,-0.62469,0,-0.7038,-0.7104,0,-0.62277,-0.78241,0,-0.53764,-0.84317,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.53764,-0.84317,0,-0.62277,-0.78241,0,-0.7038,-0.7104,0,-0.78087,-0.62469,0]);
IndexedFaceSet1037.normal = Normal1039;

Shape1035.geometry = IndexedFaceSet1037;

Transform5.children[205] = Shape1035;

let Shape1040 = browser.currentScene.createNode("Shape");
let Appearance1041 = browser.currentScene.createNode("Appearance");
Appearance1041.USE = "characterDAppearance";
Shape1040.appearance = Appearance1041;

let IndexedFaceSet1042 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1042.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1]);
IndexedFaceSet1042.solid = False;
let Coordinate1043 = browser.currentScene.createNode("Coordinate");
Coordinate1043.point = new MFVec3f(new float[0.61864,0.15714,0.1,0.61526,0.16594,0.1,0.61109,0.17443,0.1,0.6062,0.18253,0.1,0.60064,0.19014,0.1,0.60064,0.19014,0,0.6062,0.18253,0,0.61109,0.17443,0,0.61526,0.16594,0,0.61864,0.15714,0]);
IndexedFaceSet1042.coord = Coordinate1043;

let Normal1044 = browser.currentScene.createNode("Normal");
Normal1044.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.91629,-0.40051,0,-0.87764,-0.47932,0,-0.83268,-0.55376,0,-0.78087,-0.6247,0,-0.78087,-0.6247,0,-0.83268,-0.55376,0,-0.87764,-0.47932,0,-0.91629,-0.40051,0,-0.94868,-0.31623,0]);
IndexedFaceSet1042.normal = Normal1044;

Shape1040.geometry = IndexedFaceSet1042;

Transform5.children[206] = Shape1040;

let Shape1045 = browser.currentScene.createNode("Shape");
let Appearance1046 = browser.currentScene.createNode("Appearance");
Appearance1046.USE = "characterDAppearance";
Shape1045.appearance = Appearance1046;

let IndexedFaceSet1047 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1047.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1047.solid = False;
let Coordinate1048 = browser.currentScene.createNode("Coordinate");
Coordinate1048.point = new MFVec3f(new float[0.62764,0.11214,0.1,0.62708,0.12365,0.1,0.6254,0.13511,0.1,0.62259,0.14633,0.1,0.61864,0.15714,0.1,0.61864,0.15714,0,0.62259,0.14633,0,0.6254,0.13511,0,0.62708,0.12365,0,0.62764,0.11214,0]);
IndexedFaceSet1047.coord = Coordinate1048;

let Normal1049 = browser.currentScene.createNode("Normal");
Normal1049.vector = new MFVec3f(new float[-1,0,0,-0.99531,-0.09674,0,-0.98106,-0.19371,0,-0.95628,-0.29244,0,-0.91914,-0.39392,0,-0.91914,-0.39392,0,-0.95628,-0.29244,0,-0.98106,-0.19371,0,-0.99531,-0.09674,0,-1,0,0]);
IndexedFaceSet1047.normal = Normal1049;

Shape1045.geometry = IndexedFaceSet1047;

Transform5.children[207] = Shape1045;

let Shape1050 = browser.currentScene.createNode("Shape");
let Appearance1051 = browser.currentScene.createNode("Appearance");
Appearance1051.USE = "characterDAppearance";
Shape1050.appearance = Appearance1051;

let IndexedFaceSet1052 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1052.coordIndex = new MFInt32(new int[7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1]);
IndexedFaceSet1052.solid = False;
let Coordinate1053 = browser.currentScene.createNode("Coordinate");
Coordinate1053.point = new MFVec3f(new float[0.62164,0.06714,0.1,0.6246,0.0781,0.1,0.62644,0.08935,0.1,0.62764,0.11214,0.1,0.62764,0.11214,0,0.62644,0.08935,0,0.6246,0.0781,0,0.62164,0.06714,0]);
IndexedFaceSet1052.coord = Coordinate1053;

let Normal1054 = browser.currentScene.createNode("Normal");
Normal1054.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.97824,0.20749,0,-0.99297,0.11839,0,-1,0,0,-1,0,0,-0.99297,0.11839,0,-0.97824,0.20749,0,-0.94868,0.31623,0]);
IndexedFaceSet1052.normal = Normal1054;

Shape1050.geometry = IndexedFaceSet1052;

Transform5.children[208] = Shape1050;

let Shape1055 = browser.currentScene.createNode("Shape");
let Appearance1056 = browser.currentScene.createNode("Appearance");
Appearance1056.USE = "characterDAppearance";
Shape1055.appearance = Appearance1056;

let IndexedFaceSet1057 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1057.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1]);
IndexedFaceSet1057.solid = False;
let Coordinate1058 = browser.currentScene.createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[0.66964,0.11214,0.1,0.66899,0.09749,0.1,0.6669,0.08287,0.1,0.66526,0.07569,0.1,0.66318,0.06865,0.1,0.66065,0.06178,0.1,0.65764,0.05514,0.1,0.65764,0.05514,0,0.66065,0.06178,0,0.66318,0.06865,0,0.66526,0.07569,0,0.6669,0.08287,0,0.66899,0.09749,0,0.66964,0.11214,0]);
IndexedFaceSet1057.coord = Coordinate1058;

let Normal1059 = browser.currentScene.createNode("Normal");
Normal1059.vector = new MFVec3f(new float[1,0,0,0.99587,-0.09082,0,0.98089,-0.19457,0,0.96771,-0.25206,0,0.9496,-0.31348,0,0.92553,-0.37868,0,0.89443,-0.44721,0,0.89443,-0.44721,0,0.92553,-0.37868,0,0.9496,-0.31348,0,0.96771,-0.25206,0,0.98089,-0.19457,0,0.99587,-0.09082,0,1,0,0]);
IndexedFaceSet1057.normal = Normal1059;

Shape1055.geometry = IndexedFaceSet1057;

Transform5.children[209] = Shape1055;

let Shape1060 = browser.currentScene.createNode("Shape");
let Appearance1061 = browser.currentScene.createNode("Appearance");
Appearance1061.USE = "characterDAppearance";
Shape1060.appearance = Appearance1061;

let IndexedFaceSet1062 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1062.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,7,-1,8,9,3,-1,10,2,9,-1,3,4,7,-1,7,4,5,-1,6,7,5,-1]);
IndexedFaceSet1062.solid = False;
let Coordinate1063 = browser.currentScene.createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[0.65764,0.05514,0.1,0.65122,0.04402,0.1,0.64348,0.03364,0.1,0.63457,0.02427,0.1,0.62973,0.02004,0.1,0.62464,0.01614,0.1,0.62464,0.01614,0,0.62973,0.02004,0,0.63457,0.02427,0,0.64348,0.03364,0,0.65122,0.04402,0,0.65764,0.05514,0]);
IndexedFaceSet1062.coord = Coordinate1063;

let Normal1064 = browser.currentScene.createNode("Normal");
Normal1064.vector = new MFVec3f(new float[0.89443,-0.44721,0,0.83523,-0.5499,0,0.76488,-0.64417,0,0.6813,-0.732,0,0.63357,-0.77369,0,0.58124,-0.81373,0,0.58124,-0.81373,0,0.63357,-0.77369,0,0.6813,-0.732,0,0.76488,-0.64417,0,0.83523,-0.5499,0,0.89443,-0.44721,0]);
IndexedFaceSet1062.normal = Normal1064;

Shape1060.geometry = IndexedFaceSet1062;

Transform5.children[210] = Shape1060;

let Shape1065 = browser.currentScene.createNode("Shape");
let Appearance1066 = browser.currentScene.createNode("Appearance");
Appearance1066.USE = "characterDAppearance";
Shape1065.appearance = Appearance1066;

let IndexedFaceSet1067 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1067.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1067.solid = False;
let Coordinate1068 = browser.currentScene.createNode("Coordinate");
Coordinate1068.point = new MFVec3f(new float[0.62464,0.01614,0.1,0.61514,0.00917,0.1,0.60483,0.00331,0.1,0.59392,-0.00138,0.1,0.58264,-0.00486,0.1,0.58264,-0.00486,0,0.59392,-0.00138,0,0.60483,0.00331,0,0.61514,0.00917,0,0.62464,0.01614,0]);
IndexedFaceSet1067.coord = Coordinate1068;

let Normal1069 = browser.currentScene.createNode("Normal");
Normal1069.vector = new MFVec3f(new float[0.64018,-0.76822,0,0.54271,-0.83992,0,0.44454,-0.89576,0,0.34505,-0.93858,0,0.24254,-0.97014,0,0.24254,-0.97014,0,0.34505,-0.93858,0,0.44454,-0.89576,0,0.54271,-0.83992,0,0.64018,-0.76822,0]);
IndexedFaceSet1067.normal = Normal1069;

Shape1065.geometry = IndexedFaceSet1067;

Transform5.children[211] = Shape1065;

let Shape1070 = browser.currentScene.createNode("Shape");
let Appearance1071 = browser.currentScene.createNode("Appearance");
Appearance1071.USE = "characterDAppearance";
Shape1070.appearance = Appearance1071;

let IndexedFaceSet1072 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1072.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1072.solid = False;
let Coordinate1073 = browser.currentScene.createNode("Coordinate");
Coordinate1073.point = new MFVec3f(new float[0.58264,-0.00486,0.1,0.55882,-0.00932,0.1,0.54675,-0.01047,0.1,0.53464,-0.01086,0.1,0.53464,-0.01086,0,0.54675,-0.01047,0,0.55882,-0.00932,0,0.58264,-0.00486,0]);
IndexedFaceSet1072.coord = Coordinate1073;

let Normal1074 = browser.currentScene.createNode("Normal");
Normal1074.vector = new MFVec3f(new float[0.24254,-0.97014,0,0.12495,-0.99216,0,0.06358,-0.99798,0,0,-1,0,0,-1,0,0.06358,-0.99798,0,0.12495,-0.99216,0,0.24254,-0.97014,0]);
IndexedFaceSet1072.normal = Normal1074;

Shape1070.geometry = IndexedFaceSet1072;

Transform5.children[212] = Shape1070;

let Shape1075 = browser.currentScene.createNode("Shape");
let Appearance1076 = browser.currentScene.createNode("Appearance");
Appearance1076.USE = "characterDAppearance";
Shape1075.appearance = Appearance1076;

let IndexedFaceSet1077 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1077.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1077.solid = False;
let Coordinate1078 = browser.currentScene.createNode("Coordinate");
Coordinate1078.point = new MFVec3f(new float[0.53464,-0.01086,0.1,0.43264,-0.01086,0.1,0.43264,-0.01086,0,0.53464,-0.01086,0]);
IndexedFaceSet1077.coord = Coordinate1078;

let Normal1079 = browser.currentScene.createNode("Normal");
Normal1079.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1077.normal = Normal1079;

Shape1075.geometry = IndexedFaceSet1077;

Transform5.children[213] = Shape1075;

let Shape1080 = browser.currentScene.createNode("Shape");
let Appearance1081 = browser.currentScene.createNode("Appearance");
Appearance1081.USE = "characterDAppearance";
Shape1080.appearance = Appearance1081;

let IndexedFaceSet1082 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1082.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1082.solid = False;
let Coordinate1083 = browser.currentScene.createNode("Coordinate");
Coordinate1083.point = new MFVec3f(new float[0.43264,-0.01086,0.1,0.43264,0.00114,0.1,0.43264,0.00114,0,0.43264,-0.01086,0]);
IndexedFaceSet1082.coord = Coordinate1083;

let Normal1084 = browser.currentScene.createNode("Normal");
Normal1084.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1082.normal = Normal1084;

Shape1080.geometry = IndexedFaceSet1082;

Transform5.children[214] = Shape1080;

let Shape1085 = browser.currentScene.createNode("Shape");
let Appearance1086 = browser.currentScene.createNode("Appearance");
Appearance1086.USE = "characterDAppearance";
Shape1085.appearance = Appearance1086;

let IndexedFaceSet1087 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1087.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet1087.solid = False;
let Coordinate1088 = browser.currentScene.createNode("Coordinate");
Coordinate1088.point = new MFVec3f(new float[0.43264,0.00114,0.1,0.43864,0.00114,0.1,0.44464,0.00114,0.1,0.44464,0.00114,0,0.43264,0.00114,0]);
IndexedFaceSet1087.coord = Coordinate1088;

let Normal1089 = browser.currentScene.createNode("Normal");
Normal1089.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1087.normal = Normal1089;

Shape1085.geometry = IndexedFaceSet1087;

Transform5.children[215] = Shape1085;

let Shape1090 = browser.currentScene.createNode("Shape");
let Appearance1091 = browser.currentScene.createNode("Appearance");
Appearance1091.USE = "characterDAppearance";
Shape1090.appearance = Appearance1091;

let IndexedFaceSet1092 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1092.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,10,-1,11,12,6,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1]);
IndexedFaceSet1092.solid = False;
let Coordinate1093 = browser.currentScene.createNode("Coordinate");
Coordinate1093.point = new MFVec3f(new float[0.44464,0.00114,0.1,0.44585,0.00118,0.1,0.44707,0.0013,0.1,0.44829,0.0015,0.1,0.44949,0.0018,0.1,0.45065,0.00221,0.1,0.45174,0.00273,0.1,0.45274,0.00337,0.1,0.45364,0.00414,0.1,0.45364,0.00414,0,0.45274,0.00337,0,0.45174,0.00273,0,0.45065,0.00221,0,0.44949,0.0018,0,0.44829,0.0015,0,0.44707,0.0013,0,0.44585,0.00118,0,0.44464,0.00114,0]);
IndexedFaceSet1092.coord = Coordinate1093;

let Normal1094 = browser.currentScene.createNode("Normal");
Normal1094.vector = new MFVec3f(new float[0,1,0,-0.06216,0.99807,0,-0.12928,0.99161,0,-0.20336,0.9791,0,-0.28619,0.95817,0,-0.37907,0.92537,0,-0.48214,0.87609,0,-0.59334,0.80495,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.59334,0.80495,0,-0.48214,0.87609,0,-0.37907,0.92537,0,-0.28619,0.95817,0,-0.20336,0.9791,0,-0.12928,0.99161,0,-0.06216,0.99807,0,0,1,0]);
IndexedFaceSet1092.normal = Normal1094;

Shape1090.geometry = IndexedFaceSet1092;

Transform5.children[216] = Shape1090;

let Shape1095 = browser.currentScene.createNode("Shape");
let Appearance1096 = browser.currentScene.createNode("Appearance");
Appearance1096.USE = "characterDAppearance";
Shape1095.appearance = Appearance1096;

let IndexedFaceSet1097 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1097.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet1097.solid = False;
let Coordinate1098 = browser.currentScene.createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[0.45364,0.00414,0.1,0.455,0.00427,0.1,0.45634,0.00463,0.1,0.457,0.00489,0.1,0.45765,0.00519,0.1,0.45828,0.00554,0.1,0.45889,0.00593,0.1,0.46004,0.00683,0.1,0.46106,0.00785,0.1,0.46152,0.00839,0.1,0.46194,0.00896,0.1,0.46264,0.01014,0.1,0.46264,0.01014,0,0.46194,0.00896,0,0.46152,0.00839,0,0.46106,0.00785,0,0.46004,0.00683,0,0.45889,0.00593,0,0.45828,0.00554,0,0.45765,0.00519,0,0.457,0.00489,0,0.45634,0.00463,0,0.455,0.00427,0,0.45364,0.00414,0]);
IndexedFaceSet1097.coord = Coordinate1098;

let Normal1099 = browser.currentScene.createNode("Normal");
Normal1099.vector = new MFVec3f(new float[0,1,0,-0.17903,0.98384,0,-0.33052,0.9438,0,-0.39682,0.9179,0,-0.45769,0.88911,0,-0.51385,0.85788,0,-0.56598,0.82442,0,-0.66063,0.75071,0,-0.74571,0.66628,0,-0.78549,0.61888,0,-0.82362,0.56714,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.82362,0.56714,0,-0.78549,0.61888,0,-0.74571,0.66628,0,-0.66063,0.75071,0,-0.56598,0.82442,0,-0.51385,0.85788,0,-0.45769,0.88911,0,-0.39682,0.9179,0,-0.33052,0.9438,0,-0.17903,0.98384,0,0,1,0]);
IndexedFaceSet1097.normal = Normal1099;

Shape1095.geometry = IndexedFaceSet1097;

Transform5.children[217] = Shape1095;

let Shape1100 = browser.currentScene.createNode("Shape");
let Appearance1101 = browser.currentScene.createNode("Appearance");
Appearance1101.USE = "characterDAppearance";
Shape1100.appearance = Appearance1101;

let IndexedFaceSet1102 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1102.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1102.solid = False;
let Coordinate1103 = browser.currentScene.createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[0.46264,0.01014,0.1,0.46341,0.01104,0.1,0.46406,0.01205,0.1,0.46458,0.01314,0.1,0.46498,0.0143,0.1,0.46528,0.0155,0.1,0.46549,0.01672,0.1,0.46561,0.01794,0.1,0.46564,0.01914,0.1,0.46564,0.01914,0,0.46561,0.01794,0,0.46549,0.01672,0,0.46528,0.0155,0,0.46498,0.0143,0,0.46458,0.01314,0,0.46406,0.01205,0,0.46341,0.01104,0,0.46264,0.01014,0]);
IndexedFaceSet1102.coord = Coordinate1103;

let Normal1104 = browser.currentScene.createNode("Normal");
Normal1104.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.80495,0.59334,0,-0.87609,0.48214,0,-0.92537,0.37907,0,-0.95817,0.28619,0,-0.9791,0.20336,0,-0.99161,0.12928,0,-0.99807,0.06216,0,-1,0,0,-1,0,0,-0.99807,0.06216,0,-0.99161,0.12928,0,-0.9791,0.20336,0,-0.95817,0.28619,0,-0.92537,0.37907,0,-0.87609,0.48214,0,-0.80495,0.59334,0,-0.70711,0.70711,0]);
IndexedFaceSet1102.normal = Normal1104;

Shape1100.geometry = IndexedFaceSet1102;

Transform5.children[218] = Shape1100;

let Shape1105 = browser.currentScene.createNode("Shape");
let Appearance1106 = browser.currentScene.createNode("Appearance");
Appearance1106.USE = "characterDAppearance";
Shape1105.appearance = Appearance1106;

let IndexedFaceSet1107 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1107.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1107.solid = False;
let Coordinate1108 = browser.currentScene.createNode("Coordinate");
Coordinate1108.point = new MFVec3f(new float[0.46564,0.01914,0.1,0.46564,0.20214,0.1,0.46564,0.20214,0,0.46564,0.01914,0]);
IndexedFaceSet1107.coord = Coordinate1108;

let Normal1109 = browser.currentScene.createNode("Normal");
Normal1109.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1107.normal = Normal1109;

Shape1105.geometry = IndexedFaceSet1107;

Transform5.children[219] = Shape1105;

let Shape1110 = browser.currentScene.createNode("Shape");
let Appearance1111 = browser.currentScene.createNode("Appearance");
Appearance1111.USE = "characterDAppearance";
Shape1110.appearance = Appearance1111;

let IndexedFaceSet1112 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1112.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1112.solid = False;
let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[0.46564,0.20214,0.1,0.46561,0.20335,0.1,0.46549,0.20457,0.1,0.46528,0.20579,0.1,0.46498,0.20699,0.1,0.46458,0.20815,0.1,0.46406,0.20924,0.1,0.46341,0.21024,0.1,0.46264,0.21114,0.1,0.46264,0.21114,0,0.46341,0.21024,0,0.46406,0.20924,0,0.46458,0.20815,0,0.46498,0.20699,0,0.46528,0.20579,0,0.46549,0.20457,0,0.46561,0.20335,0,0.46564,0.20214,0]);
IndexedFaceSet1112.coord = Coordinate1113;

let Normal1114 = browser.currentScene.createNode("Normal");
Normal1114.vector = new MFVec3f(new float[-1,0,0,-0.99807,-0.06216,0,-0.99161,-0.12928,0,-0.9791,-0.20336,0,-0.95817,-0.28619,0,-0.92537,-0.37907,0,-0.87609,-0.48214,0,-0.80495,-0.59334,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.80495,-0.59334,0,-0.87609,-0.48214,0,-0.92537,-0.37907,0,-0.95817,-0.28619,0,-0.9791,-0.20336,0,-0.99161,-0.12928,0,-0.99807,-0.06216,0,-1,0,0]);
IndexedFaceSet1112.normal = Normal1114;

Shape1110.geometry = IndexedFaceSet1112;

Transform5.children[220] = Shape1110;

let Shape1115 = browser.currentScene.createNode("Shape");
let Appearance1116 = browser.currentScene.createNode("Appearance");
Appearance1116.USE = "characterDAppearance";
Shape1115.appearance = Appearance1116;

let IndexedFaceSet1117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1117.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,10,-1,11,12,6,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1]);
IndexedFaceSet1117.solid = False;
let Coordinate1118 = browser.currentScene.createNode("Coordinate");
Coordinate1118.point = new MFVec3f(new float[0.46264,0.21114,0.1,0.46187,0.21254,0.1,0.46097,0.21388,0.1,0.45996,0.21516,0.1,0.45885,0.21635,0.1,0.45766,0.21746,0.1,0.45638,0.21847,0.1,0.45504,0.21937,0.1,0.45364,0.22014,0.1,0.45364,0.22014,0,0.45504,0.21937,0,0.45638,0.21847,0,0.45766,0.21746,0,0.45885,0.21635,0,0.45996,0.21516,0,0.46097,0.21388,0,0.46187,0.21254,0,0.46264,0.21114,0]);
IndexedFaceSet1117.coord = Coordinate1118;

let Normal1119 = browser.currentScene.createNode("Normal");
Normal1119.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.85331,-0.52141,0,-0.80828,-0.58879,0,-0.75959,-0.6504,0,-0.70711,-0.70711,0,-0.6504,-0.75959,0,-0.58879,-0.80828,0,-0.52141,-0.85331,0,-0.44721,-0.89443,0,-0.44721,-0.89443,0,-0.52141,-0.85331,0,-0.58879,-0.80828,0,-0.6504,-0.75959,0,-0.70711,-0.70711,0,-0.75959,-0.6504,0,-0.80828,-0.58879,0,-0.85331,-0.52141,0,-0.89443,-0.44721,0]);
IndexedFaceSet1117.normal = Normal1119;

Shape1115.geometry = IndexedFaceSet1117;

Transform5.children[221] = Shape1115;

let Shape1120 = browser.currentScene.createNode("Shape");
let Appearance1121 = browser.currentScene.createNode("Appearance");
Appearance1121.USE = "characterDAppearance";
Shape1120.appearance = Appearance1121;

let IndexedFaceSet1122 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1122.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,8,-1,9,10,2,-1,2,3,8,-1,8,3,4,-1,7,4,6,-1,7,8,4,-1,4,5,6,-1]);
IndexedFaceSet1122.solid = False;
let Coordinate1123 = browser.currentScene.createNode("Coordinate");
Coordinate1123.point = new MFVec3f(new float[0.45364,0.22014,0.1,0.45079,0.22139,0.1,0.44781,0.22233,0.1,0.44474,0.22293,0.1,0.44319,0.22309,0.1,0.44164,0.22314,0.1,0.44164,0.22314,0,0.44319,0.22309,0,0.44474,0.22293,0,0.44781,0.22233,0,0.45079,0.22139,0,0.45364,0.22014,0]);
IndexedFaceSet1122.coord = Coordinate1123;

let Normal1124 = browser.currentScene.createNode("Normal");
Normal1124.vector = new MFVec3f(new float[-0.44722,-0.89443,0,-0.35262,-0.93577,0,-0.24866,-0.96859,0,-0.13201,-0.99125,0,-0.06804,-0.99768,0,0,-1,0,0,-1,0,-0.06804,-0.99768,0,-0.13201,-0.99125,0,-0.24866,-0.96859,0,-0.35262,-0.93577,0,-0.44722,-0.89443,0]);
IndexedFaceSet1122.normal = Normal1124;

Shape1120.geometry = IndexedFaceSet1122;

Transform5.children[222] = Shape1120;

let Shape1125 = browser.currentScene.createNode("Shape");
let Appearance1126 = browser.currentScene.createNode("Appearance");
Appearance1126.USE = "characterDAppearance";
Shape1125.appearance = Appearance1126;

let IndexedFaceSet1127 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1127.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1127.solid = False;
let Coordinate1128 = browser.currentScene.createNode("Coordinate");
Coordinate1128.point = new MFVec3f(new float[0.44164,0.22314,0.1,0.44044,0.22318,0.1,0.43922,0.2233,0.1,0.438,0.2235,0.1,0.4368,0.2238,0.1,0.43564,0.22421,0.1,0.43455,0.22473,0.1,0.43354,0.22537,0.1,0.43264,0.22614,0.1,0.43264,0.22614,0,0.43354,0.22537,0,0.43455,0.22473,0,0.43564,0.22421,0,0.4368,0.2238,0,0.438,0.2235,0,0.43922,0.2233,0,0.44044,0.22318,0,0.44164,0.22314,0]);
IndexedFaceSet1127.coord = Coordinate1128;

let Normal1129 = browser.currentScene.createNode("Normal");
Normal1129.vector = new MFVec3f(new float[0,-1,0,-0.06216,-0.99807,0,-0.12928,-0.99161,0,-0.20336,-0.9791,0,-0.28619,-0.95817,0,-0.37907,-0.92537,0,-0.48214,-0.87609,0,-0.59334,-0.80495,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.59334,-0.80495,0,-0.48214,-0.87609,0,-0.37907,-0.92537,0,-0.28619,-0.95817,0,-0.20336,-0.9791,0,-0.12928,-0.99161,0,-0.06216,-0.99807,0,0,-1,0]);
IndexedFaceSet1127.normal = Normal1129;

Shape1125.geometry = IndexedFaceSet1127;

Transform5.children[223] = Shape1125;

let Shape1130 = browser.currentScene.createNode("Shape");
let Appearance1131 = browser.currentScene.createNode("Appearance");
Appearance1131.USE = "characterDAppearance";
Shape1130.appearance = Appearance1131;

let IndexedFaceSet1132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1132.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1132.solid = False;
let Coordinate1133 = browser.currentScene.createNode("Coordinate");
Coordinate1133.point = new MFVec3f(new float[0.43264,0.22614,0.1,0.43264,0.23814,0.1,0.43264,0.23814,0,0.43264,0.22614,0]);
IndexedFaceSet1132.coord = Coordinate1133;

let Normal1134 = browser.currentScene.createNode("Normal");
Normal1134.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1132.normal = Normal1134;

Shape1130.geometry = IndexedFaceSet1132;

Transform5.children[224] = Shape1130;

let Shape1135 = browser.currentScene.createNode("Shape");
let Appearance1136 = browser.currentScene.createNode("Appearance");
Appearance1136.USE = "characterDAppearance";
Shape1135.appearance = Appearance1136;

let IndexedFaceSet1137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1137.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1137.solid = False;
let Coordinate1138 = browser.currentScene.createNode("Coordinate");
Coordinate1138.point = new MFVec3f(new float[0.43264,0.23814,0.1,0.54064,0.23814,0.1,0.54064,0.23814,0,0.43264,0.23814,0]);
IndexedFaceSet1137.coord = Coordinate1138;

let Normal1139 = browser.currentScene.createNode("Normal");
Normal1139.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1137.normal = Normal1139;

Shape1135.geometry = IndexedFaceSet1137;

Transform5.children[225] = Shape1135;

let Shape1140 = browser.currentScene.createNode("Shape");
let Appearance1141 = browser.currentScene.createNode("Appearance");
Appearance1141.USE = "characterDAppearance";
Shape1140.appearance = Appearance1141;

let IndexedFaceSet1142 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1142.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1142.solid = False;
let Coordinate1143 = browser.currentScene.createNode("Coordinate");
Coordinate1143.point = new MFVec3f(new float[0.54064,0.23814,0.1,0.5514,0.23753,0.1,0.56208,0.23576,0.1,0.57254,0.23293,0.1,0.58264,0.22914,0.1,0.58264,0.22914,0,0.57254,0.23293,0,0.56208,0.23576,0,0.5514,0.23753,0,0.54064,0.23814,0]);
IndexedFaceSet1142.coord = Coordinate1143;

let Normal1144 = browser.currentScene.createNode("Normal");
Normal1144.vector = new MFVec3f(new float[0,1,0,0.11188,0.99372,0,0.21363,0.97692,0,0.30695,0.95172,0,0.39392,0.91915,0,0.39392,0.91915,0,0.30695,0.95172,0,0.21363,0.97692,0,0.11188,0.99372,0,0,1,0]);
IndexedFaceSet1142.normal = Normal1144;

Shape1140.geometry = IndexedFaceSet1142;

Transform5.children[226] = Shape1140;

let Shape1145 = browser.currentScene.createNode("Shape");
let Appearance1146 = browser.currentScene.createNode("Appearance");
Appearance1146.USE = "characterDAppearance";
Shape1145.appearance = Appearance1146;

let IndexedFaceSet1147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1147.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1147.solid = False;
let Coordinate1148 = browser.currentScene.createNode("Coordinate");
Coordinate1148.point = new MFVec3f(new float[0.58264,0.22914,0.1,0.59302,0.22612,0.1,0.60316,0.2222,0.1,0.61279,0.21724,0.1,0.61733,0.21434,0.1,0.62164,0.21114,0.1,0.62164,0.21114,0,0.61733,0.21434,0,0.61279,0.21724,0,0.60316,0.2222,0,0.59302,0.22612,0,0.58264,0.22914,0]);
IndexedFaceSet1147.coord = Coordinate1148;

let Normal1149 = browser.currentScene.createNode("Normal");
Normal1149.vector = new MFVec3f(new float[0.24254,0.97014,0,0.31794,0.94811,0,0.40699,0.91343,0,0.51007,0.86013,0,0.56627,0.82422,0,0.6247,0.78087,0,0.6247,0.78087,0,0.56627,0.82422,0,0.51007,0.86013,0,0.40699,0.91343,0,0.31794,0.94811,0,0.24254,0.97014,0]);
IndexedFaceSet1147.normal = Normal1149;

Shape1145.geometry = IndexedFaceSet1147;

Transform5.children[227] = Shape1145;

let Shape1150 = browser.currentScene.createNode("Shape");
let Appearance1151 = browser.currentScene.createNode("Appearance");
Appearance1151.USE = "characterDAppearance";
Shape1150.appearance = Appearance1151;

let IndexedFaceSet1152 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1152.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1152.solid = False;
let Coordinate1153 = browser.currentScene.createNode("Coordinate");
Coordinate1153.point = new MFVec3f(new float[0.62164,0.21114,0.1,0.62692,0.20703,0.1,0.63189,0.2025,0.1,0.63654,0.1976,0.1,0.64086,0.19236,0.1,0.64484,0.18685,0.1,0.64847,0.18111,0.1,0.65464,0.16914,0.1,0.65464,0.16914,0,0.64847,0.18111,0,0.64484,0.18685,0,0.64086,0.19236,0,0.63654,0.1976,0,0.63189,0.2025,0,0.62692,0.20703,0,0.62164,0.21114,0]);
IndexedFaceSet1152.coord = Coordinate1153;

let Normal1154 = browser.currentScene.createNode("Normal");
Normal1154.vector = new MFVec3f(new float[0.58124,0.81373,0,0.64505,0.76414,0,0.7008,0.71336,0,0.74938,0.66214,0,0.79168,0.61093,0,0.82857,0.55989,0,0.86081,0.50893,0,0.91381,0.40614,0,0.91381,0.40614,0,0.86081,0.50893,0,0.82857,0.55989,0,0.79168,0.61093,0,0.74938,0.66214,0,0.7008,0.71336,0,0.64505,0.76414,0,0.58124,0.81373,0]);
IndexedFaceSet1152.normal = Normal1154;

Shape1150.geometry = IndexedFaceSet1152;

Transform5.children[228] = Shape1150;

let Shape1155 = browser.currentScene.createNode("Shape");
let Appearance1156 = browser.currentScene.createNode("Appearance");
Appearance1156.USE = "characterDAppearance";
Shape1155.appearance = Appearance1156;

let IndexedFaceSet1157 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1157.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1157.solid = False;
let Coordinate1158 = browser.currentScene.createNode("Coordinate");
Coordinate1158.point = new MFVec3f(new float[0.65464,0.16914,0.1,0.65828,0.16272,0.1,0.66138,0.15597,0.1,0.66397,0.14897,0.1,0.66605,0.14176,0.1,0.66764,0.13442,0.1,0.66876,0.127,0.1,0.66964,0.11214,0.1,0.66964,0.11214,0,0.66876,0.127,0,0.66764,0.13442,0,0.66605,0.14176,0,0.66397,0.14897,0,0.66138,0.15597,0,0.65828,0.16272,0,0.65464,0.16914,0]);
IndexedFaceSet1157.coord = Coordinate1158;

let Normal1159 = browser.currentScene.createNode("Normal");
Normal1159.vector = new MFVec3f(new float[0.848,0.53,0,0.89073,0.45454,0,0.92436,0.38151,0,0.95026,0.31146,0,0.96966,0.24446,0,0.98361,0.18032,0,0.99294,0.11859,0,1,0,0,1,0,0,0.99294,0.11859,0,0.98361,0.18032,0,0.96966,0.24446,0,0.95026,0.31146,0,0.92436,0.38151,0,0.89073,0.45454,0,0.848,0.53,0]);
IndexedFaceSet1157.normal = Normal1159;

Shape1155.geometry = IndexedFaceSet1157;

Transform5.children[229] = Shape1155;

let Shape1160 = browser.currentScene.createNode("Shape");
let Appearance1161 = browser.currentScene.createNode("Appearance");
Appearance1161.USE = "characterDAppearance";
Shape1160.appearance = Appearance1161;

let IndexedFaceSet1162 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1162.coordIndex = new MFInt32(new int[1,161,0,-1,1,2,161,-1,161,2,3,-1,160,3,4,-1,5,160,4,-1,5,159,160,-1,5,6,159,-1,159,6,7,-1,158,7,8,-1,157,8,9,-1,10,157,9,-1,10,11,157,-1,157,11,156,-1,156,11,12,-1,13,156,12,-1,13,155,156,-1,13,14,155,-1,155,14,154,-1,154,14,15,-1,16,154,15,-1,16,153,154,-1,16,17,153,-1,153,17,18,-1,152,18,19,-1,151,19,20,-1,21,151,20,-1,21,22,151,-1,151,22,150,-1,150,22,23,-1,149,23,24,-1,148,24,25,-1,147,25,26,-1,146,26,145,-1,146,147,26,-1,161,3,160,-1,159,7,158,-1,158,8,157,-1,153,18,152,-1,152,19,151,-1,150,23,149,-1,149,24,148,-1,148,25,147,-1,26,27,145,-1,145,27,144,-1,144,27,28,-1,143,28,29,-1,142,29,141,-1,142,143,29,-1,144,28,143,-1,30,138,29,-1,30,44,138,-1,30,43,44,-1,30,42,43,-1,30,41,42,-1,30,40,41,-1,30,39,40,-1,30,38,39,-1,30,37,38,-1,30,36,37,-1,30,35,36,-1,30,34,35,-1,30,33,34,-1,30,32,33,-1,30,31,32,-1,44,45,138,-1,138,45,46,-1,47,138,46,-1,47,48,138,-1,138,48,49,-1,50,138,49,-1,50,51,138,-1,138,51,53,-1,54,138,53,-1,54,55,138,-1,138,55,56,-1,57,138,56,-1,57,58,138,-1,138,58,59,-1,60,138,59,-1,60,137,138,-1,60,61,137,-1,137,61,136,-1,136,61,135,-1,135,61,134,-1,134,61,62,-1,63,134,62,-1,63,133,134,-1,63,64,133,-1,133,64,65,-1,132,65,66,-1,131,66,67,-1,130,67,68,-1,129,68,70,-1,128,70,71,-1,72,128,71,-1,72,127,128,-1,72,73,127,-1,127,73,126,-1,126,73,125,-1,125,73,74,-1,124,74,92,-1,123,92,122,-1,123,124,92,-1,51,52,53,-1,133,65,132,-1,132,66,131,-1,131,67,130,-1,68,69,70,-1,129,70,128,-1,74,75,92,-1,92,75,76,-1,77,92,76,-1,77,91,92,-1,77,78,91,-1,91,78,83,-1,84,91,83,-1,84,85,91,-1,91,85,86,-1,87,91,86,-1,87,88,91,-1,91,88,89,-1,90,91,89,-1,83,78,82,-1,82,78,79,-1,81,79,80,-1,81,82,79,-1,93,119,92,-1,93,118,119,-1,93,94,118,-1,118,94,117,-1,117,94,116,-1,116,94,95,-1,115,95,114,-1,115,116,95,-1,114,95,113,-1,113,95,96,-1,112,96,97,-1,111,97,110,-1,111,112,97,-1,113,96,112,-1,97,98,110,-1,110,98,109,-1,109,98,108,-1,108,98,99,-1,107,99,100,-1,101,107,100,-1,101,106,107,-1,101,102,106,-1,106,102,105,-1,105,102,103,-1,104,103,0,-1,161,104,0,-1,108,99,107,-1,105,103,104,-1,119,120,92,-1,92,120,121,-1,122,92,121,-1,124,125,74,-1,129,130,68,-1,138,139,29,-1,29,139,140,-1,141,29,140,-1]);
IndexedFaceSet1162.solid = False;
let Coordinate1163 = browser.currentScene.createNode("Coordinate");
Coordinate1163.point = new MFVec3f(new float[0.65764,0.05514,0.1,0.66065,0.06178,0.1,0.66318,0.06865,0.1,0.66526,0.07569,0.1,0.6669,0.08287,0.1,0.66899,0.09749,0.1,0.66964,0.11214,0.1,0.66876,0.127,0.1,0.66764,0.13442,0.1,0.66605,0.14176,0.1,0.66397,0.14897,0.1,0.66138,0.15597,0.1,0.65828,0.16272,0.1,0.65464,0.16914,0.1,0.64847,0.18111,0.1,0.64484,0.18685,0.1,0.64086,0.19236,0.1,0.63654,0.1976,0.1,0.63189,0.2025,0.1,0.62692,0.20703,0.1,0.62164,0.21114,0.1,0.61733,0.21434,0.1,0.61279,0.21724,0.1,0.60316,0.2222,0.1,0.59302,0.22612,0.1,0.58264,0.22914,0.1,0.57254,0.23293,0.1,0.56208,0.23576,0.1,0.5514,0.23753,0.1,0.54064,0.23814,0.1,0.43264,0.23814,0.1,0.43264,0.22614,0.1,0.43354,0.22537,0.1,0.43455,0.22473,0.1,0.43564,0.22421,0.1,0.4368,0.2238,0.1,0.438,0.2235,0.1,0.43922,0.2233,0.1,0.44044,0.22318,0.1,0.44164,0.22314,0.1,0.44319,0.22309,0.1,0.44474,0.22293,0.1,0.44781,0.22233,0.1,0.45079,0.22139,0.1,0.45364,0.22014,0.1,0.45504,0.21937,0.1,0.45638,0.21847,0.1,0.45766,0.21746,0.1,0.45885,0.21635,0.1,0.45996,0.21516,0.1,0.46097,0.21388,0.1,0.46187,0.21254,0.1,0.46264,0.21114,0.1,0.46341,0.21024,0.1,0.46406,0.20924,0.1,0.46458,0.20815,0.1,0.46498,0.20699,0.1,0.46528,0.20579,0.1,0.46549,0.20457,0.1,0.46561,0.20335,0.1,0.46564,0.20214,0.1,0.46564,0.01914,0.1,0.46561,0.01794,0.1,0.46549,0.01672,0.1,0.46528,0.0155,0.1,0.46498,0.0143,0.1,0.46458,0.01314,0.1,0.46406,0.01205,0.1,0.46341,0.01104,0.1,0.46264,0.01014,0.1,0.46194,0.00896,0.1,0.46152,0.00839,0.1,0.46106,0.00785,0.1,0.46004,0.00683,0.1,0.45889,0.00593,0.1,0.45828,0.00554,0.1,0.45765,0.00519,0.1,0.457,0.00489,0.1,0.45634,0.00463,0.1,0.455,0.00427,0.1,0.45364,0.00414,0.1,0.45274,0.00337,0.1,0.45174,0.00273,0.1,0.45065,0.00221,0.1,0.44949,0.0018,0.1,0.44829,0.0015,0.1,0.44707,0.0013,0.1,0.44585,0.00118,0.1,0.44464,0.00114,0.1,0.43864,0.00114,0.1,0.43264,0.00114,0.1,0.43264,-0.01086,0.1,0.53464,-0.01086,0.1,0.54675,-0.01047,0.1,0.55882,-0.00932,0.1,0.58264,-0.00486,0.1,0.59392,-0.00138,0.1,0.60483,0.00331,0.1,0.61514,0.00917,0.1,0.62464,0.01614,0.1,0.62973,0.02004,0.1,0.63457,0.02427,0.1,0.64348,0.03364,0.1,0.65122,0.04402,0.1,0.62164,0.06714,0.1,0.61845,0.05755,0.1,0.6144,0.04823,0.1,0.60947,0.03937,0.1,0.60364,0.03114,0.1,0.60094,0.02783,0.1,0.59797,0.02473,0.1,0.59478,0.02183,0.1,0.5914,0.01914,0.1,0.5842,0.01429,0.1,0.57664,0.01014,0.1,0.572,0.00848,0.1,0.56725,0.00715,0.1,0.5575,0.00531,0.1,0.54757,0.00439,0.1,0.53764,0.00414,0.1,0.53061,0.00436,0.1,0.52356,0.00523,0.1,0.52013,0.006,0.1,0.5168,0.00705,0.1,0.51363,0.00842,0.1,0.51211,0.00923,0.1,0.51064,0.01014,0.1,0.5095,0.01099,0.1,0.50844,0.01195,0.1,0.50746,0.013,0.1,0.50656,0.01414,0.1,0.50575,0.01535,0.1,0.50501,0.01664,0.1,0.50377,0.01937,0.1,0.50282,0.02227,0.1,0.50216,0.02524,0.1,0.50177,0.02823,0.1,0.50164,0.03114,0.1,0.50164,0.22014,0.1,0.51364,0.22014,0.1,0.52105,0.22225,0.1,0.52483,0.2229,0.1,0.52864,0.22314,0.1,0.53945,0.22264,0.1,0.55021,0.22104,0.1,0.56069,0.21825,0.1,0.56575,0.21637,0.1,0.57064,0.21414,0.1,0.57904,0.20938,0.1,0.58694,0.20375,0.1,0.59419,0.19731,0.1,0.60064,0.19014,0.1,0.6062,0.18253,0.1,0.61109,0.17443,0.1,0.61526,0.16594,0.1,0.61864,0.15714,0.1,0.62259,0.14633,0.1,0.6254,0.13511,0.1,0.62708,0.12365,0.1,0.62764,0.11214,0.1,0.62644,0.08935,0.1,0.6246,0.0781,0.1]);
IndexedFaceSet1162.coord = Coordinate1163;

let Normal1164 = browser.currentScene.createNode("Normal");
Normal1164.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1162.normal = Normal1164;

Shape1160.geometry = IndexedFaceSet1162;

Transform5.children[230] = Shape1160;

let Shape1165 = browser.currentScene.createNode("Shape");
let Appearance1166 = browser.currentScene.createNode("Appearance");
Appearance1166.USE = "baseplateAppearance";
Shape1165.appearance = Appearance1166;

let IndexedFaceSet1167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1167.coordIndex = new MFInt32(new int[53,0,40,-1,41,53,40,-1,41,52,53,-1,41,42,52,-1,52,42,43,-1,44,52,43,-1,44,45,52,-1,52,45,46,-1,47,52,46,-1,47,48,52,-1,52,48,49,-1,50,52,49,-1,50,51,52,-1,0,1,40,-1,40,1,2,-1,11,2,3,-1,4,11,3,-1,4,5,11,-1,11,5,6,-1,10,6,7,-1,9,7,8,-1,9,10,7,-1,40,2,11,-1,12,40,11,-1,12,39,40,-1,12,13,39,-1,39,13,14,-1,15,39,14,-1,15,16,39,-1,39,16,17,-1,18,39,17,-1,18,19,39,-1,39,19,20,-1,21,39,20,-1,21,22,39,-1,39,22,23,-1,24,39,23,-1,24,25,39,-1,39,25,26,-1,27,39,26,-1,27,28,39,-1,39,28,29,-1,30,39,29,-1,30,31,39,-1,39,31,32,-1,33,39,32,-1,33,34,39,-1,39,34,35,-1,36,39,35,-1,36,38,39,-1,36,37,38,-1,11,6,10,-1]);
IndexedFaceSet1167.solid = False;
let Coordinate1168 = browser.currentScene.createNode("Coordinate");
Coordinate1168.point = new MFVec3f(new float[-0.00308,0.00378,0,0.00803,0.00437,0,0.01361,0.00518,0,0.01912,0.00637,0,0.02447,0.00798,0,0.02961,0.01007,0,0.03445,0.01265,0,0.03673,0.01414,0,0.03892,0.01578,0,0.04093,0.01795,0,0.04277,0.02027,0,0.04446,0.02273,0,0.04598,0.0253,0,0.04858,0.03076,0,0.05061,0.03654,0,0.05212,0.04254,0,0.05315,0.04865,0,0.05373,0.05476,0,0.05392,0.06078,0,0.05383,0.0633,0,0.05357,0.06582,0,0.05314,0.06835,0,0.05256,0.07085,0,0.05094,0.0758,0,0.04878,0.08059,0,0.04614,0.08515,0,0.04308,0.08942,0,0.03965,0.09331,0,0.03592,0.09678,0,0.03388,0.09868,0,0.03171,0.10044,0,0.02701,0.10356,0,0.02193,0.10614,0,0.01655,0.10822,0,0.01097,0.1098,0,0.00528,0.11091,0,-0.00044,0.11156,0,-0.00608,0.11178,0,-0.02708,0.11178,0,-0.03608,0.11178,0,-0.03608,0.02478,0,-0.03592,0.02223,0,-0.03546,0.01966,0,-0.0347,0.01712,0,-0.03367,0.01466,0,-0.03238,0.01234,0,-0.03164,0.01125,0,-0.03084,0.01022,0,-0.02998,0.00925,0,-0.02907,0.00834,0,-0.0281,0.00752,0,-0.02708,0.00678,0,-0.02124,0.00523,0,-0.01524,0.00432,0]);
IndexedFaceSet1167.coord = Coordinate1168;

let Normal1169 = browser.currentScene.createNode("Normal");
Normal1169.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1167.normal = Normal1169;

Shape1165.geometry = IndexedFaceSet1167;

Transform5.children[231] = Shape1165;

let Shape1170 = browser.currentScene.createNode("Shape");
let Appearance1171 = browser.currentScene.createNode("Appearance");
Appearance1171.DEF = "characters2013Appearance";
let Material1172 = browser.currentScene.createNode("Material");
Material1172.ambientIntensity = 1;
Material1172.diffuseColor = new SFColor(new float[0,0.584,0.263]);
Material1172.shininess = 1;
Appearance1171.material = Material1172;

Shape1170.appearance = Appearance1171;

let IndexedFaceSet1173 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1173.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1173.solid = False;
let Coordinate1174 = browser.currentScene.createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.11961,-0.2568,0.07,0.11961,-0.26467,0.07,0.11961,-0.26467,0,0.11961,-0.2568,0]);
IndexedFaceSet1173.coord = Coordinate1174;

let Normal1175 = browser.currentScene.createNode("Normal");
Normal1175.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1173.normal = Normal1175;

Shape1170.geometry = IndexedFaceSet1173;

Transform5.children[232] = Shape1170;

let Shape1176 = browser.currentScene.createNode("Shape");
let Appearance1177 = browser.currentScene.createNode("Appearance");
Appearance1177.USE = "characters2013Appearance";
Shape1176.appearance = Appearance1177;

let IndexedFaceSet1178 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1178.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1178.solid = False;
let Coordinate1179 = browser.currentScene.createNode("Coordinate");
Coordinate1179.point = new MFVec3f(new float[0.11961,-0.26467,0.07,0.04283,-0.26467,0.07,0.04283,-0.26467,0,0.11961,-0.26467,0]);
IndexedFaceSet1178.coord = Coordinate1179;

let Normal1180 = browser.currentScene.createNode("Normal");
Normal1180.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1178.normal = Normal1180;

Shape1176.geometry = IndexedFaceSet1178;

Transform5.children[233] = Shape1176;

let Shape1181 = browser.currentScene.createNode("Shape");
let Appearance1182 = browser.currentScene.createNode("Appearance");
Appearance1182.USE = "characters2013Appearance";
Shape1181.appearance = Appearance1182;

let IndexedFaceSet1183 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1183.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1183.solid = False;
let Coordinate1184 = browser.currentScene.createNode("Coordinate");
Coordinate1184.point = new MFVec3f(new float[0.04283,-0.26467,0.07,0.04283,-0.2568,0.07,0.04283,-0.2568,0,0.04283,-0.26467,0]);
IndexedFaceSet1183.coord = Coordinate1184;

let Normal1185 = browser.currentScene.createNode("Normal");
Normal1185.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1183.normal = Normal1185;

Shape1181.geometry = IndexedFaceSet1183;

Transform5.children[234] = Shape1181;

let Shape1186 = browser.currentScene.createNode("Shape");
let Appearance1187 = browser.currentScene.createNode("Appearance");
Appearance1187.USE = "characters2013Appearance";
Shape1186.appearance = Appearance1187;

let IndexedFaceSet1188 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1188.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet1188.solid = False;
let Coordinate1189 = browser.currentScene.createNode("Coordinate");
Coordinate1189.point = new MFVec3f(new float[0.04283,-0.2568,0.07,0.04775,-0.2568,0.07,0.05268,-0.2568,0.07,0.05268,-0.2568,0,0.04283,-0.2568,0]);
IndexedFaceSet1188.coord = Coordinate1189;

let Normal1190 = browser.currentScene.createNode("Normal");
Normal1190.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1188.normal = Normal1190;

Shape1186.geometry = IndexedFaceSet1188;

Transform5.children[235] = Shape1186;

let Shape1191 = browser.currentScene.createNode("Shape");
let Appearance1192 = browser.currentScene.createNode("Appearance");
Appearance1192.USE = "characters2013Appearance";
Shape1191.appearance = Appearance1192;

let IndexedFaceSet1193 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1193.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1]);
IndexedFaceSet1193.solid = False;
let Coordinate1194 = browser.currentScene.createNode("Coordinate");
Coordinate1194.point = new MFVec3f(new float[0.05268,-0.2568,0.07,0.0552,-0.2567,0.07,0.05773,-0.25638,0.07,0.05897,-0.25611,0.07,0.06019,-0.25577,0.07,0.06137,-0.25535,0.07,0.06252,-0.25483,0.07,0.06252,-0.25483,0,0.06137,-0.25535,0,0.06019,-0.25577,0,0.05897,-0.25611,0,0.05773,-0.25638,0,0.0552,-0.2567,0,0.05268,-0.2568,0]);
IndexedFaceSet1193.coord = Coordinate1194;

let Normal1195 = browser.currentScene.createNode("Normal");
Normal1195.vector = new MFVec3f(new float[0,1,0,-0.07973,0.99682,0,-0.17989,0.98369,0,-0.23845,0.97116,0,-0.3028,0.95306,0,-0.37265,0.92797,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.37265,0.92797,0,-0.3028,0.95306,0,-0.23845,0.97116,0,-0.17989,0.98369,0,-0.07973,0.99682,0,0,1,0]);
IndexedFaceSet1193.normal = Normal1195;

Shape1191.geometry = IndexedFaceSet1193;

Transform5.children[236] = Shape1191;

let Shape1196 = browser.currentScene.createNode("Shape");
let Appearance1197 = browser.currentScene.createNode("Appearance");
Appearance1197.USE = "characters2013Appearance";
Shape1196.appearance = Appearance1197;

let IndexedFaceSet1198 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1198.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1198.solid = False;
let Coordinate1199 = browser.currentScene.createNode("Coordinate");
Coordinate1199.point = new MFVec3f(new float[0.06252,-0.25483,0.07,0.06341,-0.25475,0.07,0.06429,-0.25451,0.07,0.06515,-0.25414,0.07,0.06596,-0.25366,0.07,0.06672,-0.25307,0.07,0.06739,-0.2524,0.07,0.06797,-0.25167,0.07,0.06843,-0.25089,0.07,0.06843,-0.25089,0,0.06797,-0.25167,0,0.06739,-0.2524,0,0.06672,-0.25307,0,0.06596,-0.25366,0,0.06515,-0.25414,0,0.06429,-0.25451,0,0.06341,-0.25475,0,0.06252,-0.25483,0]);
IndexedFaceSet1198.coord = Coordinate1199;

let Normal1200 = browser.currentScene.createNode("Normal");
Normal1200.vector = new MFVec3f(new float[0,1,0,-0.17903,0.98384,0,-0.33052,0.9438,0,-0.45769,0.88911,0,-0.56598,0.82442,0,-0.66063,0.75071,0,-0.74571,0.66627,0,-0.82362,0.56714,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.82362,0.56714,0,-0.74571,0.66627,0,-0.66063,0.75071,0,-0.56598,0.82442,0,-0.45769,0.88911,0,-0.33052,0.9438,0,-0.17903,0.98384,0,0,1,0]);
IndexedFaceSet1198.normal = Normal1200;

Shape1196.geometry = IndexedFaceSet1198;

Transform5.children[237] = Shape1196;

let Shape1201 = browser.currentScene.createNode("Shape");
let Appearance1202 = browser.currentScene.createNode("Appearance");
Appearance1202.USE = "characters2013Appearance";
Shape1201.appearance = Appearance1202;

let IndexedFaceSet1203 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1203.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1203.solid = False;
let Coordinate1204 = browser.currentScene.createNode("Coordinate");
Coordinate1204.point = new MFVec3f(new float[0.06843,-0.25089,0.07,0.06906,-0.25012,0.07,0.06954,-0.24924,0.07,0.06989,-0.24827,0.07,0.07013,-0.24725,0.07,0.07028,-0.2462,0.07,0.07036,-0.24512,0.07,0.07039,-0.24302,0.07,0.07039,-0.24302,0,0.07036,-0.24512,0,0.07028,-0.2462,0,0.07013,-0.24725,0,0.06989,-0.24827,0,0.06954,-0.24924,0,0.06906,-0.25012,0,0.06843,-0.25089,0]);
IndexedFaceSet1203.coord = Coordinate1204;

let Normal1205 = browser.currentScene.createNode("Normal");
Normal1205.vector = new MFVec3f(new float[-0.7071,0.70711,0,-0.8325,0.55403,0,-0.91369,0.40641,0,-0.96007,0.27976,0,-0.98386,0.17892,0,-0.99469,0.1029,0,-0.9988,0.04898,0,-1,0,0,-1,0,0,-0.9988,0.04898,0,-0.99469,0.1029,0,-0.98386,0.17892,0,-0.96007,0.27976,0,-0.91369,0.40641,0,-0.8325,0.55403,0,-0.7071,0.70711,0]);
IndexedFaceSet1203.normal = Normal1205;

Shape1201.geometry = IndexedFaceSet1203;

Transform5.children[238] = Shape1201;

let Shape1206 = browser.currentScene.createNode("Shape");
let Appearance1207 = browser.currentScene.createNode("Appearance");
Appearance1207.USE = "characters2013Appearance";
Shape1206.appearance = Appearance1207;

let IndexedFaceSet1208 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1208.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1208.solid = False;
let Coordinate1209 = browser.currentScene.createNode("Coordinate");
Coordinate1209.point = new MFVec3f(new float[0.07039,-0.24302,0.07,0.07039,-0.16033,0.07,0.07039,-0.16033,0,0.07039,-0.24302,0]);
IndexedFaceSet1208.coord = Coordinate1209;

let Normal1210 = browser.currentScene.createNode("Normal");
Normal1210.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1208.normal = Normal1210;

Shape1206.geometry = IndexedFaceSet1208;

Transform5.children[239] = Shape1206;

let Shape1211 = browser.currentScene.createNode("Shape");
let Appearance1212 = browser.currentScene.createNode("Appearance");
Appearance1212.USE = "characters2013Appearance";
Shape1211.appearance = Appearance1212;

let IndexedFaceSet1213 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1213.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1213.solid = False;
let Coordinate1214 = browser.currentScene.createNode("Coordinate");
Coordinate1214.point = new MFVec3f(new float[0.07039,-0.16033,0.07,0.04086,-0.16033,0.07,0.04086,-0.16033,0,0.07039,-0.16033,0]);
IndexedFaceSet1213.coord = Coordinate1214;

let Normal1215 = browser.currentScene.createNode("Normal");
Normal1215.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1213.normal = Normal1215;

Shape1211.geometry = IndexedFaceSet1213;

Transform5.children[240] = Shape1211;

let Shape1216 = browser.currentScene.createNode("Shape");
let Appearance1217 = browser.currentScene.createNode("Appearance");
Appearance1217.USE = "characters2013Appearance";
Shape1216.appearance = Appearance1217;

let IndexedFaceSet1218 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1218.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1218.solid = False;
let Coordinate1219 = browser.currentScene.createNode("Coordinate");
Coordinate1219.point = new MFVec3f(new float[0.04086,-0.16033,0.07,0.04086,-0.15049,0.07,0.04086,-0.15049,0,0.04086,-0.16033,0]);
IndexedFaceSet1218.coord = Coordinate1219;

let Normal1220 = browser.currentScene.createNode("Normal");
Normal1220.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1218.normal = Normal1220;

Shape1216.geometry = IndexedFaceSet1218;

Transform5.children[241] = Shape1216;

let Shape1221 = browser.currentScene.createNode("Shape");
let Appearance1222 = browser.currentScene.createNode("Appearance");
Appearance1222.USE = "characters2013Appearance";
Shape1221.appearance = Appearance1222;

let IndexedFaceSet1223 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1223.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1223.solid = False;
let Coordinate1224 = browser.currentScene.createNode("Coordinate");
Coordinate1224.point = new MFVec3f(new float[0.04086,-0.15049,0.07,0.04677,-0.15049,0.07,0.04677,-0.15049,0,0.04086,-0.15049,0]);
IndexedFaceSet1223.coord = Coordinate1224;

let Normal1225 = browser.currentScene.createNode("Normal");
Normal1225.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1223.normal = Normal1225;

Shape1221.geometry = IndexedFaceSet1223;

Transform5.children[242] = Shape1221;

let Shape1226 = browser.currentScene.createNode("Shape");
let Appearance1227 = browser.currentScene.createNode("Appearance");
Appearance1227.USE = "characters2013Appearance";
Shape1226.appearance = Appearance1227;

let IndexedFaceSet1228 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1228.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1228.solid = False;
let Coordinate1229 = browser.currentScene.createNode("Coordinate");
Coordinate1229.point = new MFVec3f(new float[0.04677,-0.15049,0.07,0.05229,-0.15026,0.07,0.05779,-0.14954,0.07,0.0632,-0.14831,0.07,0.06843,-0.14655,0.07,0.06843,-0.14655,0,0.0632,-0.14831,0,0.05779,-0.14954,0,0.05229,-0.15026,0,0.04677,-0.15049,0]);
IndexedFaceSet1228.coord = Coordinate1229;

let Normal1230 = browser.currentScene.createNode("Normal");
Normal1230.vector = new MFVec3f(new float[0,1,0,-0.08453,0.99642,0,-0.1739,0.98476,0,-0.26937,0.96304,0,-0.37139,0.92848,0,-0.37139,0.92848,0,-0.26937,0.96304,0,-0.1739,0.98476,0,-0.08453,0.99642,0,0,1,0]);
IndexedFaceSet1228.normal = Normal1230;

Shape1226.geometry = IndexedFaceSet1228;

Transform5.children[243] = Shape1226;

let Shape1231 = browser.currentScene.createNode("Shape");
let Appearance1232 = browser.currentScene.createNode("Appearance");
Appearance1232.USE = "characters2013Appearance";
Shape1231.appearance = Appearance1232;

let IndexedFaceSet1233 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1233.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1233.solid = False;
let Coordinate1234 = browser.currentScene.createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[0.06843,-0.14655,0.07,0.0727,-0.14466,0.07,0.07681,-0.14241,0.07,0.08068,-0.13977,0.07,0.08248,-0.13829,0.07,0.08418,-0.13671,0.07,0.08418,-0.13671,0,0.08248,-0.13829,0,0.08068,-0.13977,0,0.07681,-0.14241,0,0.0727,-0.14466,0,0.06843,-0.14655,0]);
IndexedFaceSet1233.coord = Coordinate1234;

let Normal1235 = browser.currentScene.createNode("Normal");
Normal1235.vector = new MFVec3f(new float[-0.37139,0.92848,0,-0.44036,0.89782,0,-0.51995,0.8542,0,-0.60979,0.79256,0,-0.65782,0.75317,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.65782,0.75317,0,-0.60979,0.79256,0,-0.51995,0.8542,0,-0.44036,0.89782,0,-0.37139,0.92848,0]);
IndexedFaceSet1233.normal = Normal1235;

Shape1231.geometry = IndexedFaceSet1233;

Transform5.children[244] = Shape1231;

let Shape1236 = browser.currentScene.createNode("Shape");
let Appearance1237 = browser.currentScene.createNode("Appearance");
Appearance1237.USE = "characters2013Appearance";
Shape1236.appearance = Appearance1237;

let IndexedFaceSet1238 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1238.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1238.solid = False;
let Coordinate1239 = browser.currentScene.createNode("Coordinate");
Coordinate1239.point = new MFVec3f(new float[0.08418,-0.13671,0.07,0.09402,-0.13671,0.07,0.09402,-0.13671,0,0.08418,-0.13671,0]);
IndexedFaceSet1238.coord = Coordinate1239;

let Normal1240 = browser.currentScene.createNode("Normal");
Normal1240.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1238.normal = Normal1240;

Shape1236.geometry = IndexedFaceSet1238;

Transform5.children[245] = Shape1236;

let Shape1241 = browser.currentScene.createNode("Shape");
let Appearance1242 = browser.currentScene.createNode("Appearance");
Appearance1242.USE = "characters2013Appearance";
Shape1241.appearance = Appearance1242;

let IndexedFaceSet1243 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1243.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1243.solid = False;
let Coordinate1244 = browser.currentScene.createNode("Coordinate");
Coordinate1244.point = new MFVec3f(new float[0.09402,-0.13671,0.07,0.0931,-0.14107,0.07,0.09249,-0.1455,0.07,0.09205,-0.15442,0.07,0.09205,-0.15442,0,0.09249,-0.1455,0,0.0931,-0.14107,0,0.09402,-0.13671,0]);
IndexedFaceSet1243.coord = Coordinate1244;

let Normal1245 = browser.currentScene.createNode("Normal");
Normal1245.vector = new MFVec3f(new float[0.97014,-0.24254,0,0.98555,-0.16937,0,0.99451,-0.10462,0,1,0,0,1,0,0,0.99451,-0.10462,0,0.98555,-0.16937,0,0.97014,-0.24254,0]);
IndexedFaceSet1243.normal = Normal1245;

Shape1241.geometry = IndexedFaceSet1243;

Transform5.children[246] = Shape1241;

let Shape1246 = browser.currentScene.createNode("Shape");
let Appearance1247 = browser.currentScene.createNode("Appearance");
Appearance1247.USE = "characters2013Appearance";
Shape1246.appearance = Appearance1247;

let IndexedFaceSet1248 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1248.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet1248.solid = False;
let Coordinate1249 = browser.currentScene.createNode("Coordinate");
Coordinate1249.point = new MFVec3f(new float[0.09205,-0.15442,0.07,0.09205,-0.16427,0.07,0.09205,-0.17411,0.07,0.09205,-0.17411,0,0.09205,-0.15442,0]);
IndexedFaceSet1248.coord = Coordinate1249;

let Normal1250 = browser.currentScene.createNode("Normal");
Normal1250.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1248.normal = Normal1250;

Shape1246.geometry = IndexedFaceSet1248;

Transform5.children[247] = Shape1246;

let Shape1251 = browser.currentScene.createNode("Shape");
let Appearance1252 = browser.currentScene.createNode("Appearance");
Appearance1252.USE = "characters2013Appearance";
Shape1251.appearance = Appearance1252;

let IndexedFaceSet1253 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1253.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1253.solid = False;
let Coordinate1254 = browser.currentScene.createNode("Coordinate");
Coordinate1254.point = new MFVec3f(new float[0.09205,-0.17411,0.07,0.09205,-0.24302,0.07,0.09205,-0.24302,0,0.09205,-0.17411,0]);
IndexedFaceSet1253.coord = Coordinate1254;

let Normal1255 = browser.currentScene.createNode("Normal");
Normal1255.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1253.normal = Normal1255;

Shape1251.geometry = IndexedFaceSet1253;

Transform5.children[248] = Shape1251;

let Shape1256 = browser.currentScene.createNode("Shape");
let Appearance1257 = browser.currentScene.createNode("Appearance");
Appearance1257.USE = "characters2013Appearance";
Shape1256.appearance = Appearance1257;

let IndexedFaceSet1258 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1258.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet1258.solid = False;
let Coordinate1259 = browser.currentScene.createNode("Coordinate");
Coordinate1259.point = new MFVec3f(new float[0.09205,-0.24302,0.07,0.09205,-0.24597,0.07,0.09205,-0.24893,0.07,0.09205,-0.24893,0,0.09205,-0.24302,0]);
IndexedFaceSet1258.coord = Coordinate1259;

let Normal1260 = browser.currentScene.createNode("Normal");
Normal1260.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1258.normal = Normal1260;

Shape1256.geometry = IndexedFaceSet1258;

Transform5.children[249] = Shape1256;

let Shape1261 = browser.currentScene.createNode("Shape");
let Appearance1262 = browser.currentScene.createNode("Appearance");
Appearance1262.USE = "characters2013Appearance";
Shape1261.appearance = Appearance1262;

let IndexedFaceSet1263 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1263.coordIndex = new MFInt32(new int[17,0,16,-1,16,0,1,-1,15,1,2,-1,3,15,2,-1,3,14,15,-1,3,4,14,-1,14,4,13,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,1,15,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1263.solid = False;
let Coordinate1264 = browser.currentScene.createNode("Coordinate");
Coordinate1264.point = new MFVec3f(new float[0.09205,-0.24893,0.07,0.09256,-0.24984,0.07,0.09315,-0.25072,0.07,0.09381,-0.25156,0.07,0.09454,-0.25235,0.07,0.09532,-0.25307,0.07,0.09616,-0.25373,0.07,0.09704,-0.25432,0.07,0.09796,-0.25483,0.07,0.09796,-0.25483,0,0.09704,-0.25432,0,0.09616,-0.25373,0,0.09532,-0.25307,0,0.09454,-0.25235,0,0.09381,-0.25156,0,0.09315,-0.25072,0,0.09256,-0.24984,0,0.09205,-0.24893,0]);
IndexedFaceSet1263.coord = Coordinate1264;

let Normal1265 = browser.currentScene.createNode("Normal");
Normal1265.vector = new MFVec3f(new float[0.89443,0.44722,0,0.85331,0.52141,0,0.80828,0.5888,0,0.75959,0.6504,0,0.70711,0.70711,0,0.6504,0.75959,0,0.5888,0.80828,0,0.52141,0.85331,0,0.44722,0.89443,0,0.44722,0.89443,0,0.52141,0.85331,0,0.5888,0.80828,0,0.6504,0.75959,0,0.70711,0.70711,0,0.75959,0.6504,0,0.80828,0.5888,0,0.85331,0.52141,0,0.89443,0.44722,0]);
IndexedFaceSet1263.normal = Normal1265;

Shape1261.geometry = IndexedFaceSet1263;

Transform5.children[250] = Shape1261;

let Shape1266 = browser.currentScene.createNode("Shape");
let Appearance1267 = browser.currentScene.createNode("Appearance");
Appearance1267.USE = "characters2013Appearance";
Shape1266.appearance = Appearance1267;

let IndexedFaceSet1268 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1268.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1268.solid = False;
let Coordinate1269 = browser.currentScene.createNode("Coordinate");
Coordinate1269.point = new MFVec3f(new float[0.09796,-0.25483,0.07,0.10046,-0.25499,0.07,0.10294,-0.25542,0.07,0.1078,-0.2568,0.07,0.1078,-0.2568,0,0.10294,-0.25542,0,0.10046,-0.25499,0,0.09796,-0.25483,0]);
IndexedFaceSet1268.coord = Coordinate1269;

let Normal1270 = browser.currentScene.createNode("Normal");
Normal1270.vector = new MFVec3f(new float[0,1,0,0.12161,0.99258,0,0.21363,0.97691,0,0.31623,0.94868,0,0.31623,0.94868,0,0.21363,0.97691,0,0.12161,0.99258,0,0,1,0]);
IndexedFaceSet1268.normal = Normal1270;

Shape1266.geometry = IndexedFaceSet1268;

Transform5.children[251] = Shape1266;

let Shape1271 = browser.currentScene.createNode("Shape");
let Appearance1272 = browser.currentScene.createNode("Appearance");
Appearance1272.USE = "characters2013Appearance";
Shape1271.appearance = Appearance1272;

let IndexedFaceSet1273 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1273.coordIndex = new MFInt32(new int[0,1,4,-1,4,1,3,-1,3,1,2,-1]);
IndexedFaceSet1273.solid = False;
let Coordinate1274 = browser.currentScene.createNode("Coordinate");
Coordinate1274.point = new MFVec3f(new float[0.1078,-0.2568,0.07,0.11371,-0.2568,0.07,0.11961,-0.2568,0.07,0.11961,-0.2568,0,0.1078,-0.2568,0]);
IndexedFaceSet1273.coord = Coordinate1274;

let Normal1275 = browser.currentScene.createNode("Normal");
Normal1275.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1273.normal = Normal1275;

Shape1271.geometry = IndexedFaceSet1273;

Transform5.children[252] = Shape1271;

let Shape1276 = browser.currentScene.createNode("Shape");
let Appearance1277 = browser.currentScene.createNode("Appearance");
Appearance1277.USE = "characters2013Appearance";
Shape1276.appearance = Appearance1277;

let IndexedFaceSet1278 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1278.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1,4,0,3,-1,4,5,0,-1,0,5,6,-1,53,6,49,-1,50,53,49,-1,50,52,53,-1,50,51,52,-1,49,6,48,-1,48,6,7,-1,47,7,8,-1,46,8,9,-1,10,46,9,-1,10,45,46,-1,10,11,45,-1,45,11,44,-1,44,11,12,-1,42,12,13,-1,41,13,14,-1,40,14,39,-1,40,41,14,-1,48,7,47,-1,47,8,46,-1,44,12,42,-1,43,44,42,-1,42,13,41,-1,15,37,14,-1,15,36,37,-1,15,16,36,-1,36,16,17,-1,35,17,18,-1,19,35,18,-1,19,26,35,-1,19,25,26,-1,19,24,25,-1,19,20,24,-1,24,20,23,-1,23,20,21,-1,22,23,21,-1,36,17,35,-1,26,27,35,-1,35,27,28,-1,29,35,28,-1,29,30,35,-1,35,30,31,-1,34,31,32,-1,33,34,32,-1,35,31,34,-1,37,38,14,-1,14,38,39,-1,54,60,53,-1,54,55,60,-1,60,55,56,-1,57,60,56,-1,57,58,60,-1,60,58,59,-1,60,0,53,-1,53,0,6,-1]);
IndexedFaceSet1278.solid = False;
let Coordinate1279 = browser.currentScene.createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[0.11961,-0.26467,0.07,0.11961,-0.2568,0.07,0.11371,-0.2568,0.07,0.1078,-0.2568,0.07,0.10294,-0.25542,0.07,0.10046,-0.25499,0.07,0.09796,-0.25483,0.07,0.09704,-0.25432,0.07,0.09616,-0.25373,0.07,0.09532,-0.25307,0.07,0.09454,-0.25235,0.07,0.09381,-0.25156,0.07,0.09315,-0.25072,0.07,0.09256,-0.24984,0.07,0.09205,-0.24893,0.07,0.09205,-0.24597,0.07,0.09205,-0.24302,0.07,0.09205,-0.17411,0.07,0.09205,-0.16427,0.07,0.09205,-0.15442,0.07,0.09249,-0.1455,0.07,0.0931,-0.14107,0.07,0.09402,-0.13671,0.07,0.08418,-0.13671,0.07,0.08248,-0.13829,0.07,0.08068,-0.13977,0.07,0.07681,-0.14241,0.07,0.0727,-0.14466,0.07,0.06843,-0.14655,0.07,0.0632,-0.14831,0.07,0.05779,-0.14954,0.07,0.05229,-0.15026,0.07,0.04677,-0.15049,0.07,0.04086,-0.15049,0.07,0.04086,-0.16033,0.07,0.07039,-0.16033,0.07,0.07039,-0.24302,0.07,0.07036,-0.24512,0.07,0.07028,-0.2462,0.07,0.07013,-0.24725,0.07,0.06989,-0.24827,0.07,0.06954,-0.24924,0.07,0.06906,-0.25012,0.07,0.06843,-0.25089,0.07,0.06797,-0.25167,0.07,0.06739,-0.2524,0.07,0.06672,-0.25307,0.07,0.06596,-0.25366,0.07,0.06515,-0.25414,0.07,0.06429,-0.25451,0.07,0.06341,-0.25475,0.07,0.06252,-0.25483,0.07,0.06137,-0.25535,0.07,0.06019,-0.25577,0.07,0.05897,-0.25611,0.07,0.05773,-0.25638,0.07,0.0552,-0.2567,0.07,0.05268,-0.2568,0.07,0.04775,-0.2568,0.07,0.04283,-0.2568,0.07,0.04283,-0.26467,0.07]);
IndexedFaceSet1278.coord = Coordinate1279;

let Normal1280 = browser.currentScene.createNode("Normal");
Normal1280.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1278.normal = Normal1280;

Shape1276.geometry = IndexedFaceSet1278;

Transform5.children[253] = Shape1276;

let Shape1281 = browser.currentScene.createNode("Shape");
let Appearance1282 = browser.currentScene.createNode("Appearance");
Appearance1282.USE = "characters2013Appearance";
Shape1281.appearance = Appearance1282;

let IndexedFaceSet1283 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1283.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1283.solid = False;
let Coordinate1284 = browser.currentScene.createNode("Coordinate");
Coordinate1284.point = new MFVec3f(new float[-0.13042,-0.24499,0.07,-0.13042,-0.26467,0.07,-0.13042,-0.26467,0,-0.13042,-0.24499,0]);
IndexedFaceSet1283.coord = Coordinate1284;

let Normal1285 = browser.currentScene.createNode("Normal");
Normal1285.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1283.normal = Normal1285;

Shape1281.geometry = IndexedFaceSet1283;

Transform5.children[254] = Shape1281;

let Shape1286 = browser.currentScene.createNode("Shape");
let Appearance1287 = browser.currentScene.createNode("Appearance");
Appearance1287.USE = "characters2013Appearance";
Shape1286.appearance = Appearance1287;

let IndexedFaceSet1288 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1288.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1288.solid = False;
let Coordinate1289 = browser.currentScene.createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[-0.13042,-0.26467,0.07,-0.2387,-0.26467,0.07,-0.2387,-0.26467,0,-0.13042,-0.26467,0]);
IndexedFaceSet1288.coord = Coordinate1289;

let Normal1290 = browser.currentScene.createNode("Normal");
Normal1290.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1288.normal = Normal1290;

Shape1286.geometry = IndexedFaceSet1288;

Transform5.children[255] = Shape1286;

let Shape1291 = browser.currentScene.createNode("Shape");
let Appearance1292 = browser.currentScene.createNode("Appearance");
Appearance1292.USE = "characters2013Appearance";
Shape1291.appearance = Appearance1292;

let IndexedFaceSet1293 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1293.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1293.solid = False;
let Coordinate1294 = browser.currentScene.createNode("Coordinate");
Coordinate1294.point = new MFVec3f(new float[-0.2387,-0.26467,0.07,-0.2387,-0.25089,0.07,-0.2387,-0.25089,0,-0.2387,-0.26467,0]);
IndexedFaceSet1293.coord = Coordinate1294;

let Normal1295 = browser.currentScene.createNode("Normal");
Normal1295.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1293.normal = Normal1295;

Shape1291.geometry = IndexedFaceSet1293;

Transform5.children[256] = Shape1291;

let Shape1296 = browser.currentScene.createNode("Shape");
let Appearance1297 = browser.currentScene.createNode("Appearance");
Appearance1297.USE = "characters2013Appearance";
Shape1296.appearance = Appearance1297;

let IndexedFaceSet1298 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1298.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1298.solid = False;
let Coordinate1299 = browser.currentScene.createNode("Coordinate");
Coordinate1299.point = new MFVec3f(new float[-0.2387,-0.25089,0.07,-0.23801,-0.24969,0.07,-0.2372,-0.24855,0.07,-0.23629,-0.24749,0.07,-0.2353,-0.24648,0.07,-0.23312,-0.24465,0.07,-0.23082,-0.24302,0.07,-0.23082,-0.24302,0,-0.23312,-0.24465,0,-0.2353,-0.24648,0,-0.23629,-0.24749,0,-0.2372,-0.24855,0,-0.23801,-0.24969,0,-0.2387,-0.25089,0]);
IndexedFaceSet1298.coord = Coordinate1299;

let Normal1300 = browser.currentScene.createNode("Normal");
Normal1300.vector = new MFVec3f(new float[-0.89443,0.44721,0,-0.84151,0.54024,0,-0.78693,0.61704,0,-0.73429,0.67884,0,-0.68594,0.72765,0,-0.60698,0.79472,0,-0.5547,0.83205,0,-0.5547,0.83205,0,-0.60698,0.79472,0,-0.68594,0.72765,0,-0.73429,0.67884,0,-0.78693,0.61704,0,-0.84151,0.54024,0,-0.89443,0.44721,0]);
IndexedFaceSet1298.normal = Normal1300;

Shape1296.geometry = IndexedFaceSet1298;

Transform5.children[257] = Shape1296;

let Shape1301 = browser.currentScene.createNode("Shape");
let Appearance1302 = browser.currentScene.createNode("Appearance");
Appearance1302.USE = "characters2013Appearance";
Shape1301.appearance = Appearance1302;

let IndexedFaceSet1303 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1303.coordIndex = new MFInt32(new int[9,0,8,-1,8,0,1,-1,7,1,2,-1,3,7,2,-1,3,6,7,-1,3,4,6,-1,6,4,5,-1,8,1,7,-1]);
IndexedFaceSet1303.solid = False;
let Coordinate1304 = browser.currentScene.createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.23082,-0.24302,0.07,-0.2277,-0.24015,0.07,-0.22433,-0.23755,0.07,-0.22076,-0.23522,0.07,-0.21704,-0.23317,0.07,-0.21704,-0.23317,0,-0.22076,-0.23522,0,-0.22433,-0.23755,0,-0.2277,-0.24015,0,-0.23082,-0.24302,0]);
IndexedFaceSet1303.coord = Coordinate1304;

let Normal1305 = browser.currentScene.createNode("Normal");
Normal1305.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.64387,0.76514,0,-0.57953,0.81495,0,-0.5141,0.85773,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.5141,0.85773,0,-0.57953,0.81495,0,-0.64387,0.76514,0,-0.70711,0.70711,0]);
IndexedFaceSet1303.normal = Normal1305;

Shape1301.geometry = IndexedFaceSet1303;

Transform5.children[258] = Shape1301;

let Shape1306 = browser.currentScene.createNode("Shape");
let Appearance1307 = browser.currentScene.createNode("Appearance");
Appearance1307.USE = "characters2013Appearance";
Shape1306.appearance = Appearance1307;

let IndexedFaceSet1308 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1308.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1308.solid = False;
let Coordinate1309 = browser.currentScene.createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[-0.21704,-0.23317,0.07,-0.21232,-0.229,0.07,-0.2072,-0.2253,0.07,-0.2072,-0.2253,0,-0.21232,-0.229,0,-0.21704,-0.23317,0]);
IndexedFaceSet1308.coord = Coordinate1309;

let Normal1310 = browser.currentScene.createNode("Normal");
Normal1310.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.62005,0.78456,0,-0.5547,0.83205,0,-0.5547,0.83205,0,-0.62005,0.78456,0,-0.70711,0.70711,0]);
IndexedFaceSet1308.normal = Normal1310;

Shape1306.geometry = IndexedFaceSet1308;

Transform5.children[259] = Shape1306;

let Shape1311 = browser.currentScene.createNode("Shape");
let Appearance1312 = browser.currentScene.createNode("Appearance");
Appearance1312.USE = "characters2013Appearance";
Shape1311.appearance = Appearance1312;

let IndexedFaceSet1313 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1313.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1313.solid = False;
let Coordinate1314 = browser.currentScene.createNode("Coordinate");
Coordinate1314.point = new MFVec3f(new float[-0.2072,-0.2253,0.07,-0.19932,-0.22136,0.07,-0.19145,-0.21742,0.07,-0.19145,-0.21742,0,-0.19932,-0.22136,0,-0.2072,-0.2253,0]);
IndexedFaceSet1313.coord = Coordinate1314;

let Normal1315 = browser.currentScene.createNode("Normal");
Normal1315.vector = new MFVec3f(new float[-0.44721,0.89443,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.44721,0.89443,0]);
IndexedFaceSet1313.normal = Normal1315;

Shape1311.geometry = IndexedFaceSet1313;

Transform5.children[260] = Shape1311;

let Shape1316 = browser.currentScene.createNode("Shape");
let Appearance1317 = browser.currentScene.createNode("Appearance");
Appearance1317.USE = "characters2013Appearance";
Shape1316.appearance = Appearance1317;

let IndexedFaceSet1318 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1318.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1318.solid = False;
let Coordinate1319 = browser.currentScene.createNode("Coordinate");
Coordinate1319.point = new MFVec3f(new float[-0.19145,-0.21742,0.07,-0.18443,-0.2137,0.07,-0.17767,-0.20955,0.07,-0.17767,-0.20955,0,-0.18443,-0.2137,0,-0.19145,-0.21742,0]);
IndexedFaceSet1318.coord = Coordinate1319;

let Normal1320 = browser.currentScene.createNode("Normal");
Normal1320.vector = new MFVec3f(new float[-0.44721,0.89443,0,-0.49324,0.86989,0,-0.5547,0.83205,0,-0.5547,0.83205,0,-0.49324,0.86989,0,-0.44721,0.89443,0]);
IndexedFaceSet1318.normal = Normal1320;

Shape1316.geometry = IndexedFaceSet1318;

Transform5.children[261] = Shape1316;

let Shape1321 = browser.currentScene.createNode("Shape");
let Appearance1322 = browser.currentScene.createNode("Appearance");
Appearance1322.USE = "characters2013Appearance";
Shape1321.appearance = Appearance1322;

let IndexedFaceSet1323 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1323.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1323.solid = False;
let Coordinate1324 = browser.currentScene.createNode("Coordinate");
Coordinate1324.point = new MFVec3f(new float[-0.17767,-0.20955,0.07,-0.17275,-0.20463,0.07,-0.16782,-0.19971,0.07,-0.16782,-0.19971,0,-0.17275,-0.20463,0,-0.17767,-0.20955,0]);
IndexedFaceSet1323.coord = Coordinate1324;

let Normal1325 = browser.currentScene.createNode("Normal");
Normal1325.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.70711,0.70711,0]);
IndexedFaceSet1323.normal = Normal1325;

Shape1321.geometry = IndexedFaceSet1323;

Transform5.children[262] = Shape1321;

let Shape1326 = browser.currentScene.createNode("Shape");
let Appearance1327 = browser.currentScene.createNode("Appearance");
Appearance1327.USE = "characters2013Appearance";
Shape1326.appearance = Appearance1327;

let IndexedFaceSet1328 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1328.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1328.solid = False;
let Coordinate1329 = browser.currentScene.createNode("Coordinate");
Coordinate1329.point = new MFVec3f(new float[-0.16782,-0.19971,0.07,-0.16586,-0.19577,0.07,-0.16389,-0.19183,0.07,-0.16389,-0.19183,0,-0.16586,-0.19577,0,-0.16782,-0.19971,0]);
IndexedFaceSet1328.coord = Coordinate1329;

let Normal1330 = browser.currentScene.createNode("Normal");
Normal1330.vector = new MFVec3f(new float[-0.89443,0.44721,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.89443,0.44721,0,-0.89443,0.44721,0]);
IndexedFaceSet1328.normal = Normal1330;

Shape1326.geometry = IndexedFaceSet1328;

Transform5.children[263] = Shape1326;

let Shape1331 = browser.currentScene.createNode("Shape");
let Appearance1332 = browser.currentScene.createNode("Appearance");
Appearance1332.USE = "characters2013Appearance";
Shape1331.appearance = Appearance1332;

let IndexedFaceSet1333 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1333.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1333.solid = False;
let Coordinate1334 = browser.currentScene.createNode("Coordinate");
Coordinate1334.point = new MFVec3f(new float[-0.16389,-0.19183,0.07,-0.16287,-0.188,0.07,-0.16227,-0.18406,0.07,-0.16192,-0.17608,0.07,-0.16192,-0.17608,0,-0.16227,-0.18406,0,-0.16287,-0.188,0,-0.16389,-0.19183,0]);
IndexedFaceSet1333.coord = Coordinate1334;

let Normal1335 = browser.currentScene.createNode("Normal");
Normal1335.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.9801,0.19851,0,-0.99434,0.10626,0,-1,0,0,-1,0,0,-0.99434,0.10626,0,-0.9801,0.19851,0,-0.94868,0.31623,0]);
IndexedFaceSet1333.normal = Normal1335;

Shape1331.geometry = IndexedFaceSet1333;

Transform5.children[264] = Shape1331;

let Shape1336 = browser.currentScene.createNode("Shape");
let Appearance1337 = browser.currentScene.createNode("Appearance");
Appearance1337.USE = "characters2013Appearance";
Shape1336.appearance = Appearance1337;

let IndexedFaceSet1338 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1338.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,20,-1,21,22,2,-1,2,3,20,-1,20,3,19,-1,19,3,4,-1,18,4,5,-1,17,5,6,-1,16,6,7,-1,8,16,7,-1,8,15,16,-1,8,14,15,-1,8,9,14,-1,14,9,13,-1,13,9,10,-1,11,13,10,-1,11,12,13,-1,19,4,18,-1,18,5,17,-1,17,6,16,-1]);
IndexedFaceSet1338.solid = False;
let Coordinate1339 = browser.currentScene.createNode("Coordinate");
Coordinate1339.point = new MFVec3f(new float[-0.16192,-0.17608,0.07,-0.162,-0.17313,0.07,-0.16228,-0.17011,0.07,-0.16279,-0.16707,0.07,-0.16355,-0.1641,0.07,-0.1646,-0.16128,0.07,-0.16524,-0.15994,0.07,-0.16597,-0.15867,0.07,-0.16678,-0.15748,0.07,-0.16769,-0.15636,0.07,-0.16869,-0.15534,0.07,-0.16979,-0.15442,0.07,-0.16979,-0.15442,0,-0.16869,-0.15534,0,-0.16769,-0.15636,0,-0.16678,-0.15748,0,-0.16597,-0.15867,0,-0.16524,-0.15994,0,-0.1646,-0.16128,0,-0.16355,-0.1641,0,-0.16279,-0.16707,0,-0.16228,-0.17011,0,-0.162,-0.17313,0,-0.16192,-0.17608,0]);
IndexedFaceSet1338.coord = Coordinate1339;

let Normal1340 = browser.currentScene.createNode("Normal");
Normal1340.vector = new MFVec3f(new float[-1,0,0,-0.99825,-0.05919,0,-0.99201,-0.12616,0,-0.97897,-0.20399,0,-0.95526,-0.29576,0,-0.91475,-0.40402,0,-0.88553,-0.46458,0,-0.84859,-0.52905,0,-0.80255,-0.59658,0,-0.74619,-0.66574,0,-0.67868,-0.73443,0,-0.6,-0.8,0,-0.6,-0.8,0,-0.67868,-0.73443,0,-0.74619,-0.66574,0,-0.80255,-0.59658,0,-0.84859,-0.52905,0,-0.88553,-0.46458,0,-0.91475,-0.40402,0,-0.95526,-0.29576,0,-0.97897,-0.20399,0,-0.99201,-0.12616,0,-0.99825,-0.05919,0,-1,0,0]);
IndexedFaceSet1338.normal = Normal1340;

Shape1336.geometry = IndexedFaceSet1338;

Transform5.children[265] = Shape1336;

let Shape1341 = browser.currentScene.createNode("Shape");
let Appearance1342 = browser.currentScene.createNode("Appearance");
Appearance1342.USE = "characters2013Appearance";
Shape1341.appearance = Appearance1342;

let IndexedFaceSet1343 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1343.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet1343.solid = False;
let Coordinate1344 = browser.currentScene.createNode("Coordinate");
Coordinate1344.point = new MFVec3f(new float[-0.16979,-0.15442,0.07,-0.17085,-0.15344,0.07,-0.17197,-0.15253,0.07,-0.17439,-0.1509,0.07,-0.17701,-0.14955,0.07,-0.17978,-0.14845,0.07,-0.18265,-0.14761,0.07,-0.18559,-0.14702,0.07,-0.18854,-0.14667,0.07,-0.19145,-0.14655,0.07,-0.19145,-0.14655,0,-0.18854,-0.14667,0,-0.18559,-0.14702,0,-0.18265,-0.14761,0,-0.17978,-0.14845,0,-0.17701,-0.14955,0,-0.17439,-0.1509,0,-0.17197,-0.15253,0,-0.17085,-0.15344,0,-0.16979,-0.15442,0]);
IndexedFaceSet1343.coord = Coordinate1344;

let Normal1345 = browser.currentScene.createNode("Normal");
Normal1345.vector = new MFVec3f(new float[-0.70711,-0.70711,0,-0.65709,-0.75381,0,-0.6068,-0.79485,0,-0.50772,-0.86152,0,-0.4129,-0.91078,0,-0.32332,-0.94629,0,-0.23865,-0.97111,0,-0.15769,-0.98749,0,-0.07881,-0.99689,0,0,-1,0,0,-1,0,-0.07881,-0.99689,0,-0.15769,-0.98749,0,-0.23865,-0.97111,0,-0.32332,-0.94629,0,-0.4129,-0.91078,0,-0.50772,-0.86152,0,-0.6068,-0.79485,0,-0.65709,-0.75381,0,-0.70711,-0.70711,0]);
IndexedFaceSet1343.normal = Normal1345;

Shape1341.geometry = IndexedFaceSet1343;

Transform5.children[266] = Shape1341;

let Shape1346 = browser.currentScene.createNode("Shape");
let Appearance1347 = browser.currentScene.createNode("Appearance");
Appearance1347.USE = "characters2013Appearance";
Shape1346.appearance = Appearance1347;

let IndexedFaceSet1348 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1348.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1348.solid = False;
let Coordinate1349 = browser.currentScene.createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.19145,-0.14655,0.07,-0.19324,-0.14663,0.07,-0.19502,-0.14686,0.07,-0.19678,-0.14723,0.07,-0.19853,-0.14772,0.07,-0.20195,-0.14897,0.07,-0.20523,-0.15049,0.07,-0.20523,-0.15049,0,-0.20195,-0.14897,0,-0.19853,-0.14772,0,-0.19678,-0.14723,0,-0.19502,-0.14686,0,-0.19324,-0.14663,0,-0.19145,-0.14655,0]);
IndexedFaceSet1348.coord = Coordinate1349;

let Normal1350 = browser.currentScene.createNode("Normal");
Normal1350.vector = new MFVec3f(new float[0,-1,0,0.08943,-0.99599,0,0.16862,-0.98568,0,0.23736,-0.97142,0,0.29609,-0.95516,0,0.38674,-0.92219,0,0.44721,-0.89443,0,0.44721,-0.89443,0,0.38674,-0.92219,0,0.29609,-0.95516,0,0.23736,-0.97142,0,0.16862,-0.98568,0,0.08943,-0.99599,0,0,-1,0]);
IndexedFaceSet1348.normal = Normal1350;

Shape1346.geometry = IndexedFaceSet1348;

Transform5.children[267] = Shape1346;

let Shape1351 = browser.currentScene.createNode("Shape");
let Appearance1352 = browser.currentScene.createNode("Appearance");
Appearance1352.USE = "characters2013Appearance";
Shape1351.appearance = Appearance1352;

let IndexedFaceSet1353 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1353.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1353.solid = False;
let Coordinate1354 = browser.currentScene.createNode("Coordinate");
Coordinate1354.point = new MFVec3f(new float[-0.20523,-0.15049,0.07,-0.21035,-0.15418,0.07,-0.21507,-0.15836,0.07,-0.21507,-0.15836,0,-0.21035,-0.15418,0,-0.20523,-0.15049,0]);
IndexedFaceSet1353.coord = Coordinate1354;

let Normal1355 = browser.currentScene.createNode("Normal");
Normal1355.vector = new MFVec3f(new float[0.5547,-0.83205,0,0.62005,-0.78456,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.62005,-0.78456,0,0.5547,-0.83205,0]);
IndexedFaceSet1353.normal = Normal1355;

Shape1351.geometry = IndexedFaceSet1353;

Transform5.children[268] = Shape1351;

let Shape1356 = browser.currentScene.createNode("Shape");
let Appearance1357 = browser.currentScene.createNode("Appearance");
Appearance1357.USE = "characters2013Appearance";
Shape1356.appearance = Appearance1357;

let IndexedFaceSet1358 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1358.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1358.solid = False;
let Coordinate1359 = browser.currentScene.createNode("Coordinate");
Coordinate1359.point = new MFVec3f(new float[-0.21507,-0.15836,0.07,-0.21492,-0.16087,0.07,-0.21449,-0.16335,0.07,-0.21311,-0.16821,0.07,-0.21311,-0.16821,0,-0.21449,-0.16335,0,-0.21492,-0.16087,0,-0.21507,-0.15836,0]);
IndexedFaceSet1358.coord = Coordinate1359;

let Normal1360 = browser.currentScene.createNode("Normal");
Normal1360.vector = new MFVec3f(new float[1,0,0,0.99258,0.12161,0,0.97691,0.21363,0,0.94868,0.31623,0,0.94868,0.31623,0,0.97691,0.21363,0,0.99258,0.12161,0,1,0,0]);
IndexedFaceSet1358.normal = Normal1360;

Shape1356.geometry = IndexedFaceSet1358;

Transform5.children[269] = Shape1356;

let Shape1361 = browser.currentScene.createNode("Shape");
let Appearance1362 = browser.currentScene.createNode("Appearance");
Appearance1362.USE = "characters2013Appearance";
Shape1361.appearance = Appearance1362;

let IndexedFaceSet1363 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1363.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1363.solid = False;
let Coordinate1364 = browser.currentScene.createNode("Coordinate");
Coordinate1364.point = new MFVec3f(new float[-0.21311,-0.16821,0.07,-0.21259,-0.16935,0.07,-0.21217,-0.17054,0.07,-0.21182,-0.17175,0.07,-0.21156,-0.173,0.07,-0.21123,-0.17552,0.07,-0.21114,-0.17805,0.07,-0.21114,-0.17805,0,-0.21123,-0.17552,0,-0.21156,-0.173,0,-0.21182,-0.17175,0,-0.21217,-0.17054,0,-0.21259,-0.16935,0,-0.21311,-0.16821,0]);
IndexedFaceSet1363.coord = Coordinate1364;

let Normal1365 = browser.currentScene.createNode("Normal");
Normal1365.vector = new MFVec3f(new float[0.89443,0.44721,0,0.92797,0.37265,0,0.95305,0.3028,0,0.97116,0.23845,0,0.98369,0.17989,0,0.99682,0.07973,0,1,0,0,1,0,0,0.99682,0.07973,0,0.98369,0.17989,0,0.97116,0.23845,0,0.95305,0.3028,0,0.92797,0.37265,0,0.89443,0.44721,0]);
IndexedFaceSet1363.normal = Normal1365;

Shape1361.geometry = IndexedFaceSet1363;

Transform5.children[270] = Shape1361;

let Shape1366 = browser.currentScene.createNode("Shape");
let Appearance1367 = browser.currentScene.createNode("Appearance");
Appearance1367.USE = "characters2013Appearance";
Shape1366.appearance = Appearance1367;

let IndexedFaceSet1368 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1368.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1368.solid = False;
let Coordinate1369 = browser.currentScene.createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.21114,-0.17805,0.07,-0.21122,-0.17915,0.07,-0.21146,-0.18023,0.07,-0.21184,-0.18128,0.07,-0.21233,-0.18231,0.07,-0.21292,-0.1833,0.07,-0.21358,-0.18423,0.07,-0.21431,-0.18511,0.07,-0.21507,-0.18592,0.07,-0.21507,-0.18592,0,-0.21431,-0.18511,0,-0.21358,-0.18423,0,-0.21292,-0.1833,0,-0.21233,-0.18231,0,-0.21184,-0.18128,0,-0.21146,-0.18023,0,-0.21122,-0.17915,0,-0.21114,-0.17805,0]);
IndexedFaceSet1368.coord = Coordinate1369;

let Normal1370 = browser.currentScene.createNode("Normal");
Normal1370.vector = new MFVec3f(new float[1,0,0,0.98874,-0.14963,0,0.96042,-0.27856,0,0.92238,-0.38629,0,0.8799,-0.47516,0,0.83613,-0.54853,0,0.79259,-0.60975,0,0.7497,-0.66178,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.7497,-0.66178,0,0.79259,-0.60975,0,0.83613,-0.54853,0,0.8799,-0.47516,0,0.92238,-0.38629,0,0.96042,-0.27856,0,0.98874,-0.14963,0,1,0,0]);
IndexedFaceSet1368.normal = Normal1370;

Shape1366.geometry = IndexedFaceSet1368;

Transform5.children[271] = Shape1366;

let Shape1371 = browser.currentScene.createNode("Shape");
let Appearance1372 = browser.currentScene.createNode("Appearance");
Appearance1372.USE = "characters2013Appearance";
Shape1371.appearance = Appearance1372;

let IndexedFaceSet1373 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1373.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1373.solid = False;
let Coordinate1374 = browser.currentScene.createNode("Coordinate");
Coordinate1374.point = new MFVec3f(new float[-0.21507,-0.18592,0.07,-0.21644,-0.18652,0.07,-0.21786,-0.18699,0.07,-0.21933,-0.18733,0.07,-0.22082,-0.18758,0.07,-0.22386,-0.18784,0.07,-0.22689,-0.18789,0.07,-0.22689,-0.18789,0,-0.22386,-0.18784,0,-0.22082,-0.18758,0,-0.21933,-0.18733,0,-0.21786,-0.18699,0,-0.21644,-0.18652,0,-0.21507,-0.18592,0]);
IndexedFaceSet1373.coord = Coordinate1374;

let Normal1375 = browser.currentScene.createNode("Normal");
Normal1375.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.35328,-0.93552,0,0.26836,-0.96332,0,0.19461,-0.98088,0,0.13281,-0.99114,0,0.04437,-0.99902,0,0,-1,0,0,-1,0,0.04437,-0.99902,0,0.13281,-0.99114,0,0.19461,-0.98088,0,0.26836,-0.96332,0,0.35328,-0.93552,0,0.44721,-0.89443,0]);
IndexedFaceSet1373.normal = Normal1375;

Shape1371.geometry = IndexedFaceSet1373;

Transform5.children[272] = Shape1371;

let Shape1376 = browser.currentScene.createNode("Shape");
let Appearance1377 = browser.currentScene.createNode("Appearance");
Appearance1377.USE = "characters2013Appearance";
Shape1376.appearance = Appearance1377;

let IndexedFaceSet1378 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1378.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1378.solid = False;
let Coordinate1379 = browser.currentScene.createNode("Coordinate");
Coordinate1379.point = new MFVec3f(new float[-0.22689,-0.18789,0.07,-0.22798,-0.18781,0.07,-0.22906,-0.18757,0.07,-0.23012,-0.1872,0.07,-0.23115,-0.1867,0.07,-0.23213,-0.18611,0.07,-0.23307,-0.18545,0.07,-0.23395,-0.18472,0.07,-0.23476,-0.18396,0.07,-0.23476,-0.18396,0,-0.23395,-0.18472,0,-0.23307,-0.18545,0,-0.23213,-0.18611,0,-0.23115,-0.1867,0,-0.23012,-0.1872,0,-0.22906,-0.18757,0,-0.22798,-0.18781,0,-0.22689,-0.18789,0]);
IndexedFaceSet1378.coord = Coordinate1379;

let Normal1380 = browser.currentScene.createNode("Normal");
Normal1380.vector = new MFVec3f(new float[0,-1,0,-0.14963,-0.98874,0,-0.27856,-0.96042,0,-0.38629,-0.92238,0,-0.47516,-0.8799,0,-0.54853,-0.83613,0,-0.60975,-0.79259,0,-0.66178,-0.7497,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.66178,-0.7497,0,-0.60975,-0.79259,0,-0.54853,-0.83613,0,-0.47516,-0.8799,0,-0.38629,-0.92238,0,-0.27856,-0.96042,0,-0.14963,-0.98874,0,0,-1,0]);
IndexedFaceSet1378.normal = Normal1380;

Shape1376.geometry = IndexedFaceSet1378;

Transform5.children[273] = Shape1376;

let Shape1381 = browser.currentScene.createNode("Shape");
let Appearance1382 = browser.currentScene.createNode("Appearance");
Appearance1382.USE = "characters2013Appearance";
Shape1381.appearance = Appearance1382;

let IndexedFaceSet1383 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1383.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1383.solid = False;
let Coordinate1384 = browser.currentScene.createNode("Coordinate");
Coordinate1384.point = new MFVec3f(new float[-0.23476,-0.18396,0.07,-0.23528,-0.18281,0.07,-0.2357,-0.18163,0.07,-0.23604,-0.18041,0.07,-0.23631,-0.17917,0.07,-0.23663,-0.17664,0.07,-0.23673,-0.17411,0.07,-0.23673,-0.17411,0,-0.23663,-0.17664,0,-0.23631,-0.17917,0,-0.23604,-0.18041,0,-0.2357,-0.18163,0,-0.23528,-0.18281,0,-0.23476,-0.18396,0]);
IndexedFaceSet1383.coord = Coordinate1384;

let Normal1385 = browser.currentScene.createNode("Normal");
Normal1385.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.92797,-0.37265,0,-0.95305,-0.3028,0,-0.97116,-0.23845,0,-0.98369,-0.17989,0,-0.99682,-0.07973,0,-1,0,0,-1,0,0,-0.99682,-0.07973,0,-0.98369,-0.17989,0,-0.97116,-0.23845,0,-0.95305,-0.3028,0,-0.92797,-0.37265,0,-0.89443,-0.44721,0]);
IndexedFaceSet1383.normal = Normal1385;

Shape1381.geometry = IndexedFaceSet1383;

Transform5.children[274] = Shape1381;

let Shape1386 = browser.currentScene.createNode("Shape");
let Appearance1387 = browser.currentScene.createNode("Appearance");
Appearance1387.USE = "characters2013Appearance";
Shape1386.appearance = Appearance1387;

let IndexedFaceSet1388 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1388.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1388.solid = False;
let Coordinate1389 = browser.currentScene.createNode("Coordinate");
Coordinate1389.point = new MFVec3f(new float[-0.23673,-0.17411,0.07,-0.23658,-0.17063,0.07,-0.23617,-0.16717,0.07,-0.23476,-0.16033,0.07,-0.23476,-0.16033,0,-0.23617,-0.16717,0,-0.23658,-0.17063,0,-0.23673,-0.17411,0]);
IndexedFaceSet1388.coord = Coordinate1389;

let Normal1390 = browser.currentScene.createNode("Normal");
Normal1390.vector = new MFVec3f(new float[-1,0,0,-0.99653,0.08318,0,-0.98855,0.15091,0,-0.97014,0.24254,0,-0.97014,0.24254,0,-0.98855,0.15091,0,-0.99653,0.08318,0,-1,0,0]);
IndexedFaceSet1388.normal = Normal1390;

Shape1386.geometry = IndexedFaceSet1388;

Transform5.children[275] = Shape1386;

let Shape1391 = browser.currentScene.createNode("Shape");
let Appearance1392 = browser.currentScene.createNode("Appearance");
Appearance1392.USE = "characters2013Appearance";
Shape1391.appearance = Appearance1392;

let IndexedFaceSet1393 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1393.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1393.solid = False;
let Coordinate1394 = browser.currentScene.createNode("Coordinate");
Coordinate1394.point = new MFVec3f(new float[-0.23476,-0.16033,0.07,-0.23268,-0.15753,0.07,-0.23032,-0.15493,0.07,-0.22772,-0.15257,0.07,-0.22492,-0.15049,0.07,-0.22492,-0.15049,0,-0.22772,-0.15257,0,-0.23032,-0.15493,0,-0.23268,-0.15753,0,-0.23476,-0.16033,0]);
IndexedFaceSet1393.coord = Coordinate1394;

let Normal1395 = browser.currentScene.createNode("Normal");
Normal1395.vector = new MFVec3f(new float[-0.83205,0.5547,0,-0.77259,0.63491,0,-0.70711,0.70711,0,-0.63491,0.77259,0,-0.5547,0.83205,0,-0.5547,0.83205,0,-0.63491,0.77259,0,-0.70711,0.70711,0,-0.77259,0.63491,0,-0.83205,0.5547,0]);
IndexedFaceSet1393.normal = Normal1395;

Shape1391.geometry = IndexedFaceSet1393;

Transform5.children[276] = Shape1391;

let Shape1396 = browser.currentScene.createNode("Shape");
let Appearance1397 = browser.currentScene.createNode("Appearance");
Appearance1397.USE = "characters2013Appearance";
Shape1396.appearance = Appearance1397;

let IndexedFaceSet1398 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1398.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1398.solid = False;
let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.22492,-0.15049,0.07,-0.22322,-0.1489,0.07,-0.22142,-0.14743,0.07,-0.21756,-0.14479,0.07,-0.21344,-0.14254,0.07,-0.20917,-0.14064,0.07,-0.20917,-0.14064,0,-0.21344,-0.14254,0,-0.21756,-0.14479,0,-0.22142,-0.14743,0,-0.22322,-0.1489,0,-0.22492,-0.15049,0]);
IndexedFaceSet1398.coord = Coordinate1399;

let Normal1400 = browser.currentScene.createNode("Normal");
Normal1400.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.65782,0.75317,0,-0.60979,0.79256,0,-0.51995,0.85419,0,-0.44036,0.89782,0,-0.37139,0.92848,0,-0.37139,0.92848,0,-0.44036,0.89782,0,-0.51995,0.85419,0,-0.60979,0.79256,0,-0.65782,0.75317,0,-0.70711,0.70711,0]);
IndexedFaceSet1398.normal = Normal1400;

Shape1396.geometry = IndexedFaceSet1398;

Transform5.children[277] = Shape1396;

let Shape1401 = browser.currentScene.createNode("Shape");
let Appearance1402 = browser.currentScene.createNode("Appearance");
Appearance1402.USE = "characters2013Appearance";
Shape1401.appearance = Appearance1402;

let IndexedFaceSet1403 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1403.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1403.solid = False;
let Coordinate1404 = browser.currentScene.createNode("Coordinate");
Coordinate1404.point = new MFVec3f(new float[-0.20917,-0.14064,0.07,-0.20441,-0.13898,0.07,-0.1995,-0.13774,0.07,-0.19451,-0.13697,0.07,-0.18948,-0.13671,0.07,-0.18948,-0.13671,0,-0.19451,-0.13697,0,-0.1995,-0.13774,0,-0.20441,-0.13898,0,-0.20917,-0.14064,0]);
IndexedFaceSet1403.coord = Coordinate1404;

let Normal1405 = browser.currentScene.createNode("Normal");
Normal1405.vector = new MFVec3f(new float[-0.37139,0.92848,0,-0.28812,0.9576,0,-0.19952,0.97989,0,-0.10395,0.99458,0,0,1,0,0,1,0,-0.10395,0.99458,0,-0.19952,0.97989,0,-0.28812,0.9576,0,-0.37139,0.92848,0]);
IndexedFaceSet1403.normal = Normal1405;

Shape1401.geometry = IndexedFaceSet1403;

Transform5.children[278] = Shape1401;

let Shape1406 = browser.currentScene.createNode("Shape");
let Appearance1407 = browser.currentScene.createNode("Appearance");
Appearance1407.USE = "characters2013Appearance";
Shape1406.appearance = Appearance1407;

let IndexedFaceSet1408 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1408.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet1408.solid = False;
let Coordinate1409 = browser.currentScene.createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-0.18948,-0.13671,0.07,-0.18453,-0.13686,0.07,-0.17952,-0.13736,0.07,-0.17452,-0.1382,0.07,-0.1696,-0.13942,0.07,-0.16482,-0.14104,0.07,-0.16027,-0.14308,0.07,-0.156,-0.14557,0.07,-0.15399,-0.14698,0.07,-0.15207,-0.14852,0.07,-0.15207,-0.14852,0,-0.15399,-0.14698,0,-0.156,-0.14557,0,-0.16027,-0.14308,0,-0.16482,-0.14104,0,-0.1696,-0.13942,0,-0.17452,-0.1382,0,-0.17952,-0.13736,0,-0.18453,-0.13686,0,-0.18948,-0.13671,0]);
IndexedFaceSet1408.coord = Coordinate1409;

let Normal1410 = browser.currentScene.createNode("Normal");
Normal1410.vector = new MFVec3f(new float[0,1,0,0.06411,0.99794,0,0.13121,0.99135,0,0.20278,0.97922,0,0.28008,0.95998,0,0.36398,0.93141,0,0.45468,0.89066,0,0.5512,0.83437,0,0.60087,0.79935,0,0.65079,0.75926,0,0.65079,0.75926,0,0.60087,0.79935,0,0.5512,0.83437,0,0.45468,0.89066,0,0.36398,0.93141,0,0.28008,0.95998,0,0.20278,0.97922,0,0.13121,0.99135,0,0.06411,0.99794,0,0,1,0]);
IndexedFaceSet1408.normal = Normal1410;

Shape1406.geometry = IndexedFaceSet1408;

Transform5.children[279] = Shape1406;

let Shape1411 = browser.currentScene.createNode("Shape");
let Appearance1412 = browser.currentScene.createNode("Appearance");
Appearance1412.USE = "characters2013Appearance";
Shape1411.appearance = Appearance1412;

let IndexedFaceSet1413 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1413.coordIndex = new MFInt32(new int[0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,23,-1,24,25,3,-1,26,2,25,-1,3,4,23,-1,23,4,5,-1,22,5,6,-1,21,6,7,-1,20,7,19,-1,20,21,7,-1,23,5,22,-1,22,6,21,-1,7,8,19,-1,19,8,18,-1,18,8,9,-1,10,18,9,-1,10,17,18,-1,10,11,17,-1,17,11,16,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,16,12,15,-1]);
IndexedFaceSet1413.solid = False;
let Coordinate1414 = browser.currentScene.createNode("Coordinate");
Coordinate1414.point = new MFVec3f(new float[-0.15207,-0.14852,0.07,-0.15042,-0.14964,0.07,-0.14882,-0.15088,0.07,-0.14729,-0.15224,0.07,-0.14583,-0.1537,0.07,-0.14315,-0.15691,0.07,-0.14083,-0.16043,0.07,-0.13894,-0.16419,0.07,-0.13817,-0.16613,0.07,-0.13752,-0.1681,0.07,-0.13701,-0.17009,0.07,-0.13663,-0.17209,0.07,-0.1364,-0.17409,0.07,-0.13632,-0.17608,0.07,-0.13632,-0.17608,0,-0.1364,-0.17409,0,-0.13663,-0.17209,0,-0.13701,-0.17009,0,-0.13752,-0.1681,0,-0.13817,-0.16613,0,-0.13894,-0.16419,0,-0.14083,-0.16043,0,-0.14315,-0.15691,0,-0.14583,-0.1537,0,-0.14729,-0.15224,0,-0.14882,-0.15088,0,-0.15042,-0.14964,0,-0.15207,-0.14852,0]);
IndexedFaceSet1413.coord = Coordinate1414;

let Normal1415 = browser.currentScene.createNode("Normal");
Normal1415.vector = new MFVec3f(new float[0.53,0.848,0,0.58756,0.80918,0,0.63945,0.76883,0,0.68637,0.72725,0,0.72895,0.68457,0,0.80322,0.59569,0,0.86557,0.50079,0,0.9177,0.39727,0,0.93999,0.34121,0,0.95951,0.28167,0,0.97591,0.21816,0,0.98865,0.15025,0,0.99699,0.07759,0,1,0,0,1,0,0,0.99699,0.07759,0,0.98865,0.15025,0,0.97591,0.21816,0,0.95951,0.28167,0,0.93999,0.34121,0,0.9177,0.39727,0,0.86557,0.50079,0,0.80322,0.59569,0,0.72895,0.68457,0,0.68637,0.72725,0,0.63945,0.76883,0,0.58756,0.80918,0,0.53,0.848,0]);
IndexedFaceSet1413.normal = Normal1415;

Shape1411.geometry = IndexedFaceSet1413;

Transform5.children[280] = Shape1411;

let Shape1416 = browser.currentScene.createNode("Shape");
let Appearance1417 = browser.currentScene.createNode("Appearance");
Appearance1417.USE = "characters2013Appearance";
Shape1416.appearance = Appearance1417;

let IndexedFaceSet1418 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1418.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,13,-1,13,1,2,-1,3,13,2,-1,3,12,13,-1,3,4,12,-1,12,4,11,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1418.solid = False;
let Coordinate1419 = browser.currentScene.createNode("Coordinate");
Coordinate1419.point = new MFVec3f(new float[-0.13632,-0.17608,0.07,-0.13652,-0.18019,0.07,-0.13678,-0.18226,0.07,-0.13717,-0.1843,0.07,-0.1377,-0.1863,0.07,-0.13838,-0.18823,0.07,-0.13923,-0.19008,0.07,-0.14026,-0.19183,0.07,-0.14026,-0.19183,0,-0.13923,-0.19008,0,-0.13838,-0.18823,0,-0.1377,-0.1863,0,-0.13717,-0.1843,0,-0.13678,-0.18226,0,-0.13652,-0.18019,0,-0.13632,-0.17608,0]);
IndexedFaceSet1418.coord = Coordinate1419;

let Normal1420 = browser.currentScene.createNode("Normal");
Normal1420.vector = new MFVec3f(new float[1,0,0,0.99526,-0.0972,0,0.9879,-0.15509,0,0.97545,-0.22022,0,0.95608,-0.29311,0,0.92748,-0.37386,0,0.88703,-0.46172,0,0.83205,-0.5547,0,0.83205,-0.5547,0,0.88703,-0.46172,0,0.92748,-0.37386,0,0.95608,-0.29311,0,0.97545,-0.22022,0,0.9879,-0.15509,0,0.99526,-0.0972,0,1,0,0]);
IndexedFaceSet1418.normal = Normal1420;

Shape1416.geometry = IndexedFaceSet1418;

Transform5.children[281] = Shape1416;

let Shape1421 = browser.currentScene.createNode("Shape");
let Appearance1422 = browser.currentScene.createNode("Appearance");
Appearance1422.USE = "characters2013Appearance";
Shape1421.appearance = Appearance1422;

let IndexedFaceSet1423 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1423.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,12,-1,13,14,4,-1,16,2,15,-1,15,3,14,-1,4,5,12,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1423.solid = False;
let Coordinate1424 = browser.currentScene.createNode("Coordinate");
Coordinate1424.point = new MFVec3f(new float[-0.14026,-0.19183,0.07,-0.14081,-0.19374,0.07,-0.14151,-0.19562,0.07,-0.14233,-0.19746,0.07,-0.14328,-0.19924,0.07,-0.14434,-0.20096,0.07,-0.14551,-0.2026,0.07,-0.14678,-0.20416,0.07,-0.14814,-0.20561,0.07,-0.14814,-0.20561,0,-0.14678,-0.20416,0,-0.14551,-0.2026,0,-0.14434,-0.20096,0,-0.14328,-0.19924,0,-0.14233,-0.19746,0,-0.14151,-0.19562,0,-0.14081,-0.19374,0,-0.14026,-0.19183,0]);
IndexedFaceSet1423.coord = Coordinate1424;

let Normal1425 = browser.currentScene.createNode("Normal");
Normal1425.vector = new MFVec3f(new float[0.97014,-0.24254,0,0.94996,-0.31238,0,0.92587,-0.37783,0,0.89827,-0.43945,0,0.86731,-0.49776,0,0.83298,-0.5533,0,0.79509,-0.60649,0,0.7533,-0.65768,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.7533,-0.65768,0,0.79509,-0.60649,0,0.83298,-0.5533,0,0.86731,-0.49776,0,0.89827,-0.43945,0,0.92587,-0.37783,0,0.94996,-0.31238,0,0.97014,-0.24254,0]);
IndexedFaceSet1423.normal = Normal1425;

Shape1421.geometry = IndexedFaceSet1423;

Transform5.children[282] = Shape1421;

let Shape1426 = browser.currentScene.createNode("Shape");
let Appearance1427 = browser.currentScene.createNode("Appearance");
Appearance1427.USE = "characters2013Appearance";
Shape1426.appearance = Appearance1427;

let IndexedFaceSet1428 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1428.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1428.solid = False;
let Coordinate1429 = browser.currentScene.createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.14814,-0.20561,0.07,-0.15126,-0.20848,0.07,-0.15463,-0.21108,0.07,-0.1582,-0.21341,0.07,-0.16192,-0.21546,0.07,-0.16192,-0.21546,0,-0.1582,-0.21341,0,-0.15463,-0.21108,0,-0.15126,-0.20848,0,-0.14814,-0.20561,0]);
IndexedFaceSet1428.coord = Coordinate1429;

let Normal1430 = browser.currentScene.createNode("Normal");
Normal1430.vector = new MFVec3f(new float[0.70711,-0.70711,0,0.64387,-0.76514,0,0.57953,-0.81495,0,0.5141,-0.85773,0,0.44721,-0.89443,0,0.44721,-0.89443,0,0.5141,-0.85773,0,0.57953,-0.81495,0,0.64387,-0.76514,0,0.70711,-0.70711,0]);
IndexedFaceSet1428.normal = Normal1430;

Shape1426.geometry = IndexedFaceSet1428;

Transform5.children[283] = Shape1426;

let Shape1431 = browser.currentScene.createNode("Shape");
let Appearance1432 = browser.currentScene.createNode("Appearance");
Appearance1432.USE = "characters2013Appearance";
Shape1431.appearance = Appearance1432;

let IndexedFaceSet1433 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1433.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1433.solid = False;
let Coordinate1434 = browser.currentScene.createNode("Coordinate");
Coordinate1434.point = new MFVec3f(new float[-0.16192,-0.21546,0.07,-0.17465,-0.22151,0.07,-0.18751,-0.22727,0.07,-0.18751,-0.22727,0,-0.17465,-0.22151,0,-0.16192,-0.21546,0]);
IndexedFaceSet1433.coord = Coordinate1434;

let Normal1435 = browser.currentScene.createNode("Normal");
Normal1435.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.41518,-0.90974,0,0.40614,-0.91381,0,0.40614,-0.91381,0,0.41518,-0.90974,0,0.44721,-0.89443,0]);
IndexedFaceSet1433.normal = Normal1435;

Shape1431.geometry = IndexedFaceSet1433;

Transform5.children[284] = Shape1431;

let Shape1436 = browser.currentScene.createNode("Shape");
let Appearance1437 = browser.currentScene.createNode("Appearance");
Appearance1437.USE = "characters2013Appearance";
Shape1436.appearance = Appearance1437;

let IndexedFaceSet1438 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1438.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1438.solid = False;
let Coordinate1439 = browser.currentScene.createNode("Coordinate");
Coordinate1439.point = new MFVec3f(new float[-0.18751,-0.22727,0.07,-0.19217,-0.2293,0.07,-0.1967,-0.23161,0.07,-0.20106,-0.23422,0.07,-0.20523,-0.23711,0.07,-0.20523,-0.23711,0,-0.20106,-0.23422,0,-0.1967,-0.23161,0,-0.19217,-0.2293,0,-0.18751,-0.22727,0]);
IndexedFaceSet1438.coord = Coordinate1439;

let Normal1440 = browser.currentScene.createNode("Normal");
Normal1440.vector = new MFVec3f(new float[0.37139,-0.92848,0,0.42695,-0.90427,0,0.48353,-0.87533,0,0.54124,-0.84087,0,0.6,-0.8,0,0.6,-0.8,0,0.54124,-0.84087,0,0.48353,-0.87533,0,0.42695,-0.90427,0,0.37139,-0.92848,0]);
IndexedFaceSet1438.normal = Normal1440;

Shape1436.geometry = IndexedFaceSet1438;

Transform5.children[285] = Shape1436;

let Shape1441 = browser.currentScene.createNode("Shape");
let Appearance1442 = browser.currentScene.createNode("Appearance");
Appearance1442.USE = "characters2013Appearance";
Shape1441.appearance = Appearance1442;

let IndexedFaceSet1443 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1443.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1443.solid = False;
let Coordinate1444 = browser.currentScene.createNode("Coordinate");
Coordinate1444.point = new MFVec3f(new float[-0.20523,-0.23711,0.07,-0.21332,-0.24065,0.07,-0.21723,-0.24269,0.07,-0.22098,-0.24499,0.07,-0.22098,-0.24499,0,-0.21723,-0.24269,0,-0.21332,-0.24065,0,-0.20523,-0.23711,0]);
IndexedFaceSet1443.coord = Coordinate1444;

let Normal1445 = browser.currentScene.createNode("Normal");
Normal1445.vector = new MFVec3f(new float[0.37139,-0.92848,0,0.43805,-0.89895,0,0.49065,-0.87136,0,0.5547,-0.83205,0,0.5547,-0.83205,0,0.49065,-0.87136,0,0.43805,-0.89895,0,0.37139,-0.92848,0]);
IndexedFaceSet1443.normal = Normal1445;

Shape1441.geometry = IndexedFaceSet1443;

Transform5.children[286] = Shape1441;

let Shape1446 = browser.currentScene.createNode("Shape");
let Appearance1447 = browser.currentScene.createNode("Appearance");
Appearance1447.USE = "characters2013Appearance";
Shape1446.appearance = Appearance1447;

let IndexedFaceSet1448 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1448.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1448.solid = False;
let Coordinate1449 = browser.currentScene.createNode("Coordinate");
Coordinate1449.point = new MFVec3f(new float[-0.22098,-0.24499,0.07,-0.13042,-0.24499,0.07,-0.13042,-0.24499,0,-0.22098,-0.24499,0]);
IndexedFaceSet1448.coord = Coordinate1449;

let Normal1450 = browser.currentScene.createNode("Normal");
Normal1450.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1448.normal = Normal1450;

Shape1446.geometry = IndexedFaceSet1448;

Transform5.children[287] = Shape1446;

let Shape1451 = browser.currentScene.createNode("Shape");
let Appearance1452 = browser.currentScene.createNode("Appearance");
Appearance1452.USE = "characters2013Appearance";
Shape1451.appearance = Appearance1452;

let IndexedFaceSet1453 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1453.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,152,-1,153,0,152,-1,153,154,0,-1,0,154,155,-1,156,0,155,-1,156,157,0,-1,3,150,2,-1,3,4,150,-1,150,4,149,-1,149,4,148,-1,148,4,5,-1,147,5,6,-1,146,6,7,-1,8,146,7,-1,8,145,146,-1,8,9,145,-1,145,9,144,-1,144,9,10,-1,143,10,142,-1,143,144,10,-1,148,5,147,-1,147,6,146,-1,10,11,142,-1,142,11,141,-1,141,11,12,-1,13,141,12,-1,13,140,141,-1,13,14,140,-1,140,14,15,-1,139,15,16,-1,17,139,16,-1,17,18,139,-1,139,18,138,-1,138,18,19,-1,20,138,19,-1,20,137,138,-1,20,21,137,-1,137,21,22,-1,136,22,23,-1,24,136,23,-1,24,25,136,-1,136,25,135,-1,135,25,26,-1,27,135,26,-1,27,134,135,-1,27,28,134,-1,134,28,29,-1,133,29,30,-1,31,133,30,-1,31,132,133,-1,31,32,132,-1,132,32,131,-1,131,32,33,-1,34,131,33,-1,34,130,131,-1,34,35,130,-1,130,35,36,-1,37,130,36,-1,37,38,130,-1,130,38,39,-1,40,130,39,-1,40,129,130,-1,40,41,129,-1,129,41,42,-1,43,129,42,-1,43,128,129,-1,43,44,128,-1,128,44,127,-1,127,44,45,-1,126,45,125,-1,126,127,45,-1,140,15,139,-1,137,22,136,-1,134,29,133,-1,46,113,45,-1,46,47,113,-1,113,47,48,-1,49,113,48,-1,49,50,113,-1,113,50,51,-1,52,113,51,-1,52,53,113,-1,113,53,112,-1,112,53,111,-1,111,53,54,-1,110,54,109,-1,110,111,54,-1,54,55,109,-1,109,55,108,-1,108,55,107,-1,107,55,56,-1,57,107,56,-1,57,106,107,-1,57,58,106,-1,106,58,105,-1,105,58,59,-1,60,105,59,-1,60,61,105,-1,105,61,62,-1,104,62,63,-1,103,63,64,-1,66,64,65,-1,66,103,64,-1,66,102,103,-1,66,67,102,-1,102,67,68,-1,83,68,69,-1,82,69,81,-1,82,83,69,-1,105,62,104,-1,104,63,103,-1,102,68,83,-1,84,102,83,-1,84,101,102,-1,84,100,101,-1,84,99,100,-1,84,98,99,-1,84,85,98,-1,98,85,97,-1,97,85,86,-1,91,86,90,-1,91,97,86,-1,91,92,97,-1,97,92,96,-1,96,92,93,-1,94,96,93,-1,94,95,96,-1,70,79,69,-1,70,78,79,-1,70,77,78,-1,70,71,77,-1,77,71,76,-1,76,71,72,-1,75,72,73,-1,74,75,73,-1,76,72,75,-1,79,80,69,-1,69,80,81,-1,86,87,90,-1,90,87,89,-1,89,87,88,-1,113,114,45,-1,45,114,115,-1,116,45,115,-1,116,117,45,-1,45,117,118,-1,119,45,118,-1,119,120,45,-1,45,120,121,-1,122,45,121,-1,122,123,45,-1,45,123,124,-1,125,45,124,-1,150,151,2,-1,2,151,152,-1]);
IndexedFaceSet1453.solid = False;
let Coordinate1454 = browser.currentScene.createNode("Coordinate");
Coordinate1454.point = new MFVec3f(new float[-0.13042,-0.26467,0.07,-0.13042,-0.24499,0.07,-0.22098,-0.24499,0.07,-0.21723,-0.24269,0.07,-0.21332,-0.24065,0.07,-0.20523,-0.23711,0.07,-0.20106,-0.23422,0.07,-0.1967,-0.23161,0.07,-0.19217,-0.2293,0.07,-0.18751,-0.22727,0.07,-0.17465,-0.22151,0.07,-0.16192,-0.21546,0.07,-0.1582,-0.21341,0.07,-0.15463,-0.21108,0.07,-0.15126,-0.20848,0.07,-0.14814,-0.20561,0.07,-0.14678,-0.20416,0.07,-0.14551,-0.2026,0.07,-0.14434,-0.20096,0.07,-0.14328,-0.19924,0.07,-0.14233,-0.19746,0.07,-0.14151,-0.19562,0.07,-0.14081,-0.19374,0.07,-0.14026,-0.19183,0.07,-0.13923,-0.19008,0.07,-0.13838,-0.18823,0.07,-0.1377,-0.1863,0.07,-0.13717,-0.1843,0.07,-0.13678,-0.18226,0.07,-0.13652,-0.18019,0.07,-0.13632,-0.17608,0.07,-0.1364,-0.17409,0.07,-0.13663,-0.17209,0.07,-0.13701,-0.17009,0.07,-0.13752,-0.1681,0.07,-0.13817,-0.16613,0.07,-0.13894,-0.16419,0.07,-0.14083,-0.16043,0.07,-0.14315,-0.15691,0.07,-0.14583,-0.1537,0.07,-0.14729,-0.15224,0.07,-0.14882,-0.15088,0.07,-0.15042,-0.14964,0.07,-0.15207,-0.14852,0.07,-0.15399,-0.14698,0.07,-0.156,-0.14557,0.07,-0.16027,-0.14308,0.07,-0.16482,-0.14104,0.07,-0.1696,-0.13942,0.07,-0.17452,-0.1382,0.07,-0.17952,-0.13736,0.07,-0.18453,-0.13686,0.07,-0.18948,-0.13671,0.07,-0.19451,-0.13697,0.07,-0.1995,-0.13774,0.07,-0.20441,-0.13898,0.07,-0.20917,-0.14064,0.07,-0.21344,-0.14254,0.07,-0.21756,-0.14479,0.07,-0.22142,-0.14743,0.07,-0.22322,-0.1489,0.07,-0.22492,-0.15049,0.07,-0.22772,-0.15257,0.07,-0.23032,-0.15493,0.07,-0.23268,-0.15753,0.07,-0.23476,-0.16033,0.07,-0.23617,-0.16717,0.07,-0.23658,-0.17063,0.07,-0.23673,-0.17411,0.07,-0.23663,-0.17664,0.07,-0.23631,-0.17917,0.07,-0.23604,-0.18041,0.07,-0.2357,-0.18163,0.07,-0.23528,-0.18281,0.07,-0.23476,-0.18396,0.07,-0.23395,-0.18472,0.07,-0.23307,-0.18545,0.07,-0.23213,-0.18611,0.07,-0.23115,-0.1867,0.07,-0.23012,-0.1872,0.07,-0.22906,-0.18757,0.07,-0.22798,-0.18781,0.07,-0.22689,-0.18789,0.07,-0.22386,-0.18784,0.07,-0.22082,-0.18758,0.07,-0.21933,-0.18733,0.07,-0.21786,-0.18699,0.07,-0.21644,-0.18652,0.07,-0.21507,-0.18592,0.07,-0.21431,-0.18511,0.07,-0.21358,-0.18423,0.07,-0.21292,-0.1833,0.07,-0.21233,-0.18231,0.07,-0.21184,-0.18128,0.07,-0.21146,-0.18023,0.07,-0.21122,-0.17915,0.07,-0.21114,-0.17805,0.07,-0.21123,-0.17552,0.07,-0.21156,-0.173,0.07,-0.21182,-0.17175,0.07,-0.21217,-0.17054,0.07,-0.21259,-0.16935,0.07,-0.21311,-0.16821,0.07,-0.21449,-0.16335,0.07,-0.21492,-0.16087,0.07,-0.21507,-0.15836,0.07,-0.21035,-0.15418,0.07,-0.20523,-0.15049,0.07,-0.20195,-0.14897,0.07,-0.19853,-0.14772,0.07,-0.19678,-0.14723,0.07,-0.19502,-0.14686,0.07,-0.19324,-0.14663,0.07,-0.19145,-0.14655,0.07,-0.18854,-0.14667,0.07,-0.18559,-0.14702,0.07,-0.18265,-0.14761,0.07,-0.17978,-0.14845,0.07,-0.17701,-0.14955,0.07,-0.17439,-0.1509,0.07,-0.17197,-0.15253,0.07,-0.17085,-0.15344,0.07,-0.16979,-0.15442,0.07,-0.16869,-0.15534,0.07,-0.16769,-0.15636,0.07,-0.16678,-0.15748,0.07,-0.16597,-0.15867,0.07,-0.16524,-0.15994,0.07,-0.1646,-0.16128,0.07,-0.16355,-0.1641,0.07,-0.16279,-0.16707,0.07,-0.16228,-0.17011,0.07,-0.162,-0.17313,0.07,-0.16192,-0.17608,0.07,-0.16227,-0.18406,0.07,-0.16287,-0.188,0.07,-0.16389,-0.19183,0.07,-0.16586,-0.19577,0.07,-0.16782,-0.19971,0.07,-0.17275,-0.20463,0.07,-0.17767,-0.20955,0.07,-0.18443,-0.2137,0.07,-0.19145,-0.21742,0.07,-0.19932,-0.22136,0.07,-0.2072,-0.2253,0.07,-0.21232,-0.229,0.07,-0.21704,-0.23317,0.07,-0.22076,-0.23522,0.07,-0.22433,-0.23755,0.07,-0.2277,-0.24015,0.07,-0.23082,-0.24302,0.07,-0.23312,-0.24465,0.07,-0.2353,-0.24648,0.07,-0.23629,-0.24749,0.07,-0.2372,-0.24855,0.07,-0.23801,-0.24969,0.07,-0.2387,-0.25089,0.07,-0.2387,-0.26467,0.07]);
IndexedFaceSet1453.coord = Coordinate1454;

let Normal1455 = browser.currentScene.createNode("Normal");
Normal1455.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1453.normal = Normal1455;

Shape1451.geometry = IndexedFaceSet1453;

Transform5.children[288] = Shape1451;

let Shape1456 = browser.currentScene.createNode("Shape");
let Appearance1457 = browser.currentScene.createNode("Appearance");
Appearance1457.USE = "characters2013Appearance";
Shape1456.appearance = Appearance1457;

let IndexedFaceSet1458 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1458.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet1458.solid = False;
let Coordinate1459 = browser.currentScene.createNode("Coordinate");
Coordinate1459.point = new MFVec3f(new float[-0.04773,-0.25877,0.07,-0.04579,-0.25871,0.07,-0.04384,-0.25852,0.07,-0.03993,-0.25779,0.07,-0.03607,-0.25661,0.07,-0.03234,-0.25501,0.07,-0.0288,-0.25302,0.07,-0.02555,-0.25067,0.07,-0.02405,-0.24936,0.07,-0.02264,-0.24798,0.07,-0.02135,-0.24652,0.07,-0.02017,-0.24499,0.07,-0.02017,-0.24499,0,-0.02135,-0.24652,0,-0.02264,-0.24798,0,-0.02405,-0.24936,0,-0.02555,-0.25067,0,-0.0288,-0.25302,0,-0.03234,-0.25501,0,-0.03607,-0.25661,0,-0.03993,-0.25779,0,-0.04384,-0.25852,0,-0.04579,-0.25871,0,-0.04773,-0.25877,0]);
IndexedFaceSet1458.coord = Coordinate1459;

let Normal1460 = browser.currentScene.createNode("Normal");
Normal1460.vector = new MFVec3f(new float[0,1,0,-0.06425,0.99793,0,-0.12521,0.99213,0,-0.23874,0.97108,0,-0.34365,0.9391,0,-0.44283,0.89661,0,-0.53865,0.84253,0,-0.63262,0.77447,0,-0.67904,0.7341,0,-0.72493,0.68882,0,-0.76999,0.63805,0,-0.81373,0.58124,0,-0.81373,0.58124,0,-0.76999,0.63805,0,-0.72493,0.68882,0,-0.67904,0.7341,0,-0.63262,0.77447,0,-0.53865,0.84253,0,-0.44283,0.89661,0,-0.34365,0.9391,0,-0.23874,0.97108,0,-0.12521,0.99213,0,-0.06425,0.99793,0,0,1,0]);
IndexedFaceSet1458.normal = Normal1460;

Shape1456.geometry = IndexedFaceSet1458;

Transform5.children[289] = Shape1456;

let Shape1461 = browser.currentScene.createNode("Shape");
let Appearance1462 = browser.currentScene.createNode("Appearance");
Appearance1462.USE = "characters2013Appearance";
Shape1461.appearance = Appearance1462;

let IndexedFaceSet1463 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1463.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,13,-1,14,15,7,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,7,8,13,-1,13,8,12,-1,12,8,9,-1,10,12,9,-1,10,11,12,-1]);
IndexedFaceSet1463.solid = False;
let Coordinate1464 = browser.currentScene.createNode("Coordinate");
Coordinate1464.point = new MFVec3f(new float[-0.07332,-0.24499,0.07,-0.071,-0.24784,0.07,-0.06831,-0.25047,0.07,-0.06531,-0.25281,0.07,-0.06205,-0.25483,0.07,-0.0586,-0.25649,0.07,-0.05502,-0.25772,0.07,-0.05321,-0.25817,0.07,-0.05138,-0.2585,0.07,-0.04955,-0.2587,0.07,-0.04773,-0.25877,0.07,-0.04773,-0.25877,0,-0.04955,-0.2587,0,-0.05138,-0.2585,0,-0.05321,-0.25817,0,-0.05502,-0.25772,0,-0.0586,-0.25649,0,-0.06205,-0.25483,0,-0.06531,-0.25281,0,-0.06831,-0.25047,0,-0.071,-0.24784,0,-0.07332,-0.24499,0]);
IndexedFaceSet1463.coord = Coordinate1464;

let Normal1465 = browser.currentScene.createNode("Normal");
Normal1465.vector = new MFVec3f(new float[0.81373,0.58124,0,0.73743,0.67542,0,0.65704,0.75386,0,0.57212,0.82017,0,0.48101,0.87672,0,0.38121,0.92449,0,0.2697,0.96294,0,0.20857,0.97801,0,0.14338,0.98967,0,0.07389,0.99727,0,0,1,0,0,1,0,0.07389,0.99727,0,0.14338,0.98967,0,0.20857,0.97801,0,0.2697,0.96294,0,0.38121,0.92449,0,0.48101,0.87672,0,0.57212,0.82017,0,0.65704,0.75386,0,0.73743,0.67542,0,0.81373,0.58124,0]);
IndexedFaceSet1463.normal = Normal1465;

Shape1461.geometry = IndexedFaceSet1463;

Transform5.children[290] = Shape1461;

let Shape1466 = browser.currentScene.createNode("Shape");
let Appearance1467 = browser.currentScene.createNode("Appearance");
Appearance1467.USE = "characters2013Appearance";
Shape1466.appearance = Appearance1467;

let IndexedFaceSet1468 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1468.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1468.solid = False;
let Coordinate1469 = browser.currentScene.createNode("Coordinate");
Coordinate1469.point = new MFVec3f(new float[-0.0812,-0.20364,0.07,-0.08085,-0.21426,0.07,-0.07961,-0.22487,0.07,-0.07857,-0.23009,0.07,-0.0772,-0.23521,0.07,-0.07546,-0.24018,0.07,-0.07332,-0.24499,0.07,-0.07332,-0.24499,0,-0.07546,-0.24018,0,-0.0772,-0.23521,0,-0.07857,-0.23009,0,-0.07961,-0.22487,0,-0.08085,-0.21426,0,-0.0812,-0.20364,0]);
IndexedFaceSet1468.coord = Coordinate1469;

let Normal1470 = browser.currentScene.createNode("Normal");
Normal1470.vector = new MFVec3f(new float[1,0,0,0.99757,0.06966,0,0.98604,0.16652,0,0.97412,0.22603,0,0.9561,0.29305,0,0.93016,0.36716,0,0.89443,0.44721,0,0.89443,0.44721,0,0.93016,0.36716,0,0.9561,0.29305,0,0.97412,0.22603,0,0.98604,0.16652,0,0.99757,0.06966,0,1,0,0]);
IndexedFaceSet1468.normal = Normal1470;

Shape1466.geometry = IndexedFaceSet1468;

Transform5.children[291] = Shape1466;

let Shape1471 = browser.currentScene.createNode("Shape");
let Appearance1472 = browser.currentScene.createNode("Appearance");
Appearance1472.USE = "characters2013Appearance";
Shape1471.appearance = Appearance1472;

let IndexedFaceSet1473 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1473.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1473.solid = False;
let Coordinate1474 = browser.currentScene.createNode("Coordinate");
Coordinate1474.point = new MFVec3f(new float[-0.07332,-0.1623,0.07,-0.07566,-0.167,0.07,-0.07749,-0.17193,0.07,-0.07887,-0.17704,0.07,-0.07987,-0.18228,0.07,-0.08095,-0.19298,0.07,-0.0812,-0.20364,0.07,-0.0812,-0.20364,0,-0.08095,-0.19298,0,-0.07987,-0.18228,0,-0.07887,-0.17704,0,-0.07749,-0.17193,0,-0.07566,-0.167,0,-0.07332,-0.1623,0]);
IndexedFaceSet1473.coord = Coordinate1474;

let Normal1475 = browser.currentScene.createNode("Normal");
Normal1475.vector = new MFVec3f(new float[0.86824,-0.49614,0,0.91864,-0.3951,0,0.95306,-0.30278,0,0.97505,-0.222,0,0.98811,-0.15378,0,0.99853,-0.05422,0,1,0,0,1,0,0,0.99853,-0.05422,0,0.98811,-0.15378,0,0.97505,-0.222,0,0.95306,-0.30278,0,0.91864,-0.3951,0,0.86824,-0.49614,0]);
IndexedFaceSet1473.normal = Normal1475;

Shape1471.geometry = IndexedFaceSet1473;

Transform5.children[292] = Shape1471;

let Shape1476 = browser.currentScene.createNode("Shape");
let Appearance1477 = browser.currentScene.createNode("Appearance");
Appearance1477.USE = "characters2013Appearance";
Shape1476.appearance = Appearance1477;

let IndexedFaceSet1478 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1478.coordIndex = new MFInt32(new int[0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,23,-1,24,25,3,-1,26,2,25,-1,3,4,23,-1,23,4,5,-1,22,5,21,-1,22,23,5,-1,5,6,21,-1,21,6,7,-1,20,7,8,-1,19,8,9,-1,18,9,10,-1,17,10,11,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,21,7,20,-1,20,8,19,-1,19,9,18,-1,18,10,17,-1,17,11,16,-1,16,12,15,-1]);
IndexedFaceSet1478.solid = False;
let Coordinate1479 = browser.currentScene.createNode("Coordinate");
Coordinate1479.point = new MFVec3f(new float[-0.04576,-0.14655,0.07,-0.04775,-0.14663,0.07,-0.04975,-0.14686,0.07,-0.05175,-0.14723,0.07,-0.05374,-0.14775,0.07,-0.05571,-0.1484,0.07,-0.05765,-0.14917,0.07,-0.06141,-0.15106,0.07,-0.06493,-0.15337,0.07,-0.06814,-0.15605,0.07,-0.0696,-0.15751,0.07,-0.07096,-0.15905,0.07,-0.07221,-0.16064,0.07,-0.07332,-0.1623,0.07,-0.07332,-0.1623,0,-0.07221,-0.16064,0,-0.07096,-0.15905,0,-0.0696,-0.15751,0,-0.06814,-0.15605,0,-0.06493,-0.15337,0,-0.06141,-0.15106,0,-0.05765,-0.14917,0,-0.05571,-0.1484,0,-0.05374,-0.14775,0,-0.05175,-0.14723,0,-0.04975,-0.14686,0,-0.04775,-0.14663,0,-0.04576,-0.14655,0]);
IndexedFaceSet1478.coord = Coordinate1479;

let Normal1480 = browser.currentScene.createNode("Normal");
Normal1480.vector = new MFVec3f(new float[0,-1,0,0.07759,-0.99699,0,0.15025,-0.98865,0,0.21816,-0.97591,0,0.28167,-0.95951,0,0.34121,-0.93999,0,0.39727,-0.9177,0,0.50079,-0.86557,0,0.59569,-0.80322,0,0.68457,-0.72895,0,0.72725,-0.68637,0,0.76883,-0.63945,0,0.80918,-0.58756,0,0.848,-0.53,0,0.848,-0.53,0,0.80918,-0.58756,0,0.76883,-0.63945,0,0.72725,-0.68637,0,0.68457,-0.72895,0,0.59569,-0.80322,0,0.50079,-0.86557,0,0.39727,-0.9177,0,0.34121,-0.93999,0,0.28167,-0.95951,0,0.21816,-0.97591,0,0.15025,-0.98865,0,0.07759,-0.99699,0,0,-1,0]);
IndexedFaceSet1478.normal = Normal1480;

Shape1476.geometry = IndexedFaceSet1478;

Transform5.children[293] = Shape1476;

let Shape1481 = browser.currentScene.createNode("Shape");
let Appearance1482 = browser.currentScene.createNode("Appearance");
Appearance1482.USE = "characters2013Appearance";
Shape1481.appearance = Appearance1482;

let IndexedFaceSet1483 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1483.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet1483.solid = False;
let Coordinate1484 = browser.currentScene.createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.02017,-0.1623,0.07,-0.02238,-0.15918,0.07,-0.025,-0.15626,0.07,-0.02796,-0.15358,0.07,-0.0312,-0.15124,0.07,-0.03466,-0.14929,0.07,-0.03646,-0.14849,0.07,-0.03828,-0.14782,0.07,-0.04013,-0.14728,0.07,-0.042,-0.14688,0.07,-0.04388,-0.14663,0.07,-0.04576,-0.14655,0.07,-0.04576,-0.14655,0,-0.04388,-0.14663,0,-0.042,-0.14688,0,-0.04013,-0.14728,0,-0.03828,-0.14782,0,-0.03646,-0.14849,0,-0.03466,-0.14929,0,-0.0312,-0.15124,0,-0.02796,-0.15358,0,-0.025,-0.15626,0,-0.02238,-0.15918,0,-0.02017,-0.1623,0]);
IndexedFaceSet1483.coord = Coordinate1484;

let Normal1485 = browser.currentScene.createNode("Normal");
Normal1485.vector = new MFVec3f(new float[-0.848,-0.53,0,-0.78112,-0.62438,0,-0.70882,-0.70539,0,-0.62942,-0.77707,0,-0.53996,-0.84169,0,-0.43649,-0.89971,0,-0.37808,-0.92577,0,-0.31444,-0.94928,0,-0.24504,-0.96951,0,-0.16952,-0.98553,0,-0.08775,-0.99614,0,0,-1,0,0,-1,0,-0.08775,-0.99614,0,-0.16952,-0.98553,0,-0.24504,-0.96951,0,-0.31444,-0.94928,0,-0.37808,-0.92577,0,-0.43649,-0.89971,0,-0.53996,-0.84169,0,-0.62942,-0.77707,0,-0.70882,-0.70539,0,-0.78112,-0.62438,0,-0.848,-0.53,0]);
IndexedFaceSet1483.normal = Normal1485;

Shape1481.geometry = IndexedFaceSet1483;

Transform5.children[294] = Shape1481;

let Shape1486 = browser.currentScene.createNode("Shape");
let Appearance1487 = browser.currentScene.createNode("Appearance");
Appearance1487.USE = "characters2013Appearance";
Shape1486.appearance = Appearance1487;

let IndexedFaceSet1488 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1488.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1488.solid = False;
let Coordinate1489 = browser.currentScene.createNode("Coordinate");
Coordinate1489.point = new MFVec3f(new float[-0.01032,-0.20364,0.07,-0.0107,-0.19283,0.07,-0.01216,-0.18198,0.07,-0.01343,-0.17671,0.07,-0.01516,-0.17163,0.07,-0.01738,-0.16681,0.07,-0.0187,-0.16451,0.07,-0.02017,-0.1623,0.07,-0.02017,-0.1623,0,-0.0187,-0.16451,0,-0.01738,-0.16681,0,-0.01516,-0.17163,0,-0.01343,-0.17671,0,-0.01216,-0.18198,0,-0.0107,-0.19283,0,-0.01032,-0.20364,0]);
IndexedFaceSet1488.coord = Coordinate1489;

let Normal1490 = browser.currentScene.createNode("Normal");
Normal1490.vector = new MFVec3f(new float[-1,0,0,-0.99706,-0.07659,0,-0.9804,-0.19702,0,-0.96117,-0.27596,0,-0.92992,-0.36775,0,-0.8822,-0.47088,0,-0.85077,-0.52554,0,-0.81373,-0.58124,0,-0.81373,-0.58124,0,-0.85077,-0.52554,0,-0.8822,-0.47088,0,-0.92992,-0.36775,0,-0.96117,-0.27596,0,-0.9804,-0.19702,0,-0.99706,-0.07659,0,-1,0,0]);
IndexedFaceSet1488.normal = Normal1490;

Shape1486.geometry = IndexedFaceSet1488;

Transform5.children[295] = Shape1486;

let Shape1491 = browser.currentScene.createNode("Shape");
let Appearance1492 = browser.currentScene.createNode("Appearance");
Appearance1492.USE = "characters2013Appearance";
Shape1491.appearance = Appearance1492;

let IndexedFaceSet1493 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1493.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1493.solid = False;
let Coordinate1494 = browser.currentScene.createNode("Coordinate");
Coordinate1494.point = new MFVec3f(new float[-0.02017,-0.24499,0.07,-0.01759,-0.24034,0.07,-0.01546,-0.23545,0.07,-0.01375,-0.23036,0.07,-0.01243,-0.22512,0.07,-0.01081,-0.21439,0.07,-0.01032,-0.20364,0.07,-0.01032,-0.20364,0,-0.01081,-0.21439,0,-0.01243,-0.22512,0,-0.01375,-0.23036,0,-0.01546,-0.23545,0,-0.01759,-0.24034,0,-0.02017,-0.24499,0]);
IndexedFaceSet1493.coord = Coordinate1494;

let Normal1495 = browser.currentScene.createNode("Normal");
Normal1495.vector = new MFVec3f(new float[-0.848,0.53,0,-0.89747,0.44108,0,-0.93399,0.3573,0,-0.95991,0.2803,0,-0.97755,0.21069,0,-0.99567,0.09297,0,-1,0,0,-1,0,0,-0.99567,0.09297,0,-0.97755,0.21069,0,-0.95991,0.2803,0,-0.93399,0.3573,0,-0.89747,0.44108,0,-0.848,0.53,0]);
IndexedFaceSet1493.normal = Normal1495;

Shape1491.geometry = IndexedFaceSet1493;

Transform5.children[296] = Shape1491;

let Shape1496 = browser.currentScene.createNode("Shape");
let Appearance1497 = browser.currentScene.createNode("Appearance");
Appearance1497.USE = "characters2013Appearance";
Shape1496.appearance = Appearance1497;

let IndexedFaceSet1498 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1498.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1498.solid = False;
let Coordinate1499 = browser.currentScene.createNode("Coordinate");
Coordinate1499.point = new MFVec3f(new float[-0.00048,-0.15836,0.07,0.00148,-0.16046,0.07,0.00331,-0.1627,0.07,0.00655,-0.16751,0.07,0.00923,-0.17267,0.07,0.01133,-0.17805,0.07,0.01133,-0.17805,0,0.00923,-0.17267,0,0.00655,-0.16751,0,0.00331,-0.1627,0,0.00148,-0.16046,0,-0.00048,-0.15836,0]);
IndexedFaceSet1498.coord = Coordinate1499;

let Normal1500 = browser.currentScene.createNode("Normal");
Normal1500.vector = new MFVec3f(new float[0.70711,0.70711,0,0.75358,0.65736,0,0.79427,0.60757,0,0.86073,0.50907,0,0.91103,0.41235,0,0.94868,0.31623,0,0.94868,0.31623,0,0.91103,0.41235,0,0.86073,0.50907,0,0.79427,0.60757,0,0.75358,0.65736,0,0.70711,0.70711,0]);
IndexedFaceSet1498.normal = Normal1500;

Shape1496.geometry = IndexedFaceSet1498;

Transform5.children[297] = Shape1496;

let Shape1501 = browser.currentScene.createNode("Shape");
let Appearance1502 = browser.currentScene.createNode("Appearance");
Appearance1502.USE = "characters2013Appearance";
Shape1501.appearance = Appearance1502;

let IndexedFaceSet1503 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1503.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1503.solid = False;
let Coordinate1504 = browser.currentScene.createNode("Coordinate");
Coordinate1504.point = new MFVec3f(new float[0.01133,-0.17805,0.07,0.0131,-0.18429,0.07,0.01432,-0.19068,0.07,0.01504,-0.19715,0.07,0.01527,-0.20364,0.07,0.01527,-0.20364,0,0.01504,-0.19715,0,0.01432,-0.19068,0,0.0131,-0.18429,0,0.01133,-0.17805,0]);
IndexedFaceSet1503.coord = Coordinate1504;

let Normal1505 = browser.currentScene.createNode("Normal");
Normal1505.vector = new MFVec3f(new float[0.94868,0.31623,0,0.97333,0.22942,0,0.98898,0.14807,0,0.99742,0.07184,0,1,0,0,1,0,0,0.99742,0.07184,0,0.98898,0.14807,0,0.97333,0.22942,0,0.94868,0.31623,0]);
IndexedFaceSet1503.normal = Normal1505;

Shape1501.geometry = IndexedFaceSet1503;

Transform5.children[298] = Shape1501;

let Shape1506 = browser.currentScene.createNode("Shape");
let Appearance1507 = browser.currentScene.createNode("Appearance");
Appearance1507.USE = "characters2013Appearance";
Shape1506.appearance = Appearance1507;

let IndexedFaceSet1508 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1508.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,6,-1,7,8,4,-1,10,2,9,-1,9,3,8,-1,4,5,6,-1]);
IndexedFaceSet1508.solid = False;
let Coordinate1509 = browser.currentScene.createNode("Coordinate");
Coordinate1509.point = new MFVec3f(new float[0.01527,-0.20364,0.07,0.01494,-0.21073,0.07,0.01389,-0.2178,0.07,0.01206,-0.22468,0.07,0.01082,-0.22799,0.07,0.00936,-0.23121,0.07,0.00936,-0.23121,0,0.01082,-0.22799,0,0.01206,-0.22468,0,0.01389,-0.2178,0,0.01494,-0.21073,0,0.01527,-0.20364,0]);
IndexedFaceSet1508.coord = Coordinate1509;

let Normal1510 = browser.currentScene.createNode("Normal");
Normal1510.vector = new MFVec3f(new float[1,0,0,0.9955,-0.09477,0,0.97984,-0.19979,0,0.94834,-0.31727,0,0.92465,-0.38082,0,0.89443,-0.44721,0,0.89443,-0.44721,0,0.92465,-0.38082,0,0.94834,-0.31727,0,0.97984,-0.19979,0,0.9955,-0.09477,0,1,0,0]);
IndexedFaceSet1508.normal = Normal1510;

Shape1506.geometry = IndexedFaceSet1508;

Transform5.children[299] = Shape1506;

let Shape1511 = browser.currentScene.createNode("Shape");
let Appearance1512 = browser.currentScene.createNode("Appearance");
Appearance1512.USE = "characters2013Appearance";
Shape1511.appearance = Appearance1512;

let IndexedFaceSet1513 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1513.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1]);
IndexedFaceSet1513.solid = False;
let Coordinate1514 = browser.currentScene.createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[0.00936,-0.23121,0.07,0.00738,-0.23711,0.07,0.00479,-0.24282,0.07,0.00325,-0.24554,0.07,0.00153,-0.24814,0.07,-0.00036,-0.25059,0.07,-0.00245,-0.25286,0.07,-0.00245,-0.25286,0,-0.00036,-0.25059,0,0.00153,-0.24814,0,0.00325,-0.24554,0,0.00479,-0.24282,0,0.00738,-0.23711,0,0.00936,-0.23121,0]);
IndexedFaceSet1513.coord = Coordinate1514;

let Normal1515 = browser.currentScene.createNode("Normal");
Normal1515.vector = new MFVec3f(new float[0.96152,-0.27472,0,0.93168,-0.36329,0,0.8852,-0.46521,0,0.85323,-0.52154,0,0.81377,-0.58118,0,0.76549,-0.64345,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.76549,-0.64345,0,0.81377,-0.58118,0,0.85323,-0.52154,0,0.8852,-0.46521,0,0.93168,-0.36329,0,0.96152,-0.27472,0]);
IndexedFaceSet1513.normal = Normal1515;

Shape1511.geometry = IndexedFaceSet1513;

Transform5.children[300] = Shape1511;

let Shape1516 = browser.currentScene.createNode("Shape");
let Appearance1517 = browser.currentScene.createNode("Appearance");
Appearance1517.USE = "characters2013Appearance";
Shape1516.appearance = Appearance1517;

let IndexedFaceSet1518 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1518.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1518.solid = False;
let Coordinate1519 = browser.currentScene.createNode("Coordinate");
Coordinate1519.point = new MFVec3f(new float[-0.00245,-0.25286,0.07,-0.00455,-0.25482,0.07,-0.00679,-0.25665,0.07,-0.0116,-0.25989,0.07,-0.01676,-0.26257,0.07,-0.02214,-0.26467,0.07,-0.02214,-0.26467,0,-0.01676,-0.26257,0,-0.0116,-0.25989,0,-0.00679,-0.25665,0,-0.00455,-0.25482,0,-0.00245,-0.25286,0]);
IndexedFaceSet1518.coord = Coordinate1519;

let Normal1520 = browser.currentScene.createNode("Normal");
Normal1520.vector = new MFVec3f(new float[0.70711,-0.70711,0,0.65736,-0.75358,0,0.60757,-0.79426,0,0.50907,-0.86073,0,0.41235,-0.91103,0,0.31623,-0.94868,0,0.31623,-0.94868,0,0.41235,-0.91103,0,0.50907,-0.86073,0,0.60757,-0.79426,0,0.65736,-0.75358,0,0.70711,-0.70711,0]);
IndexedFaceSet1518.normal = Normal1520;

Shape1516.geometry = IndexedFaceSet1518;

Transform5.children[301] = Shape1516;

let Shape1521 = browser.currentScene.createNode("Shape");
let Appearance1522 = browser.currentScene.createNode("Appearance");
Appearance1522.USE = "characters2013Appearance";
Shape1521.appearance = Appearance1522;

let IndexedFaceSet1523 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1523.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1523.solid = False;
let Coordinate1524 = browser.currentScene.createNode("Coordinate");
Coordinate1524.point = new MFVec3f(new float[-0.02214,-0.26467,0.07,-0.02838,-0.26644,0.07,-0.03477,-0.26767,0.07,-0.04124,-0.26838,0.07,-0.04773,-0.26861,0.07,-0.04773,-0.26861,0,-0.04124,-0.26838,0,-0.03477,-0.26767,0,-0.02838,-0.26644,0,-0.02214,-0.26467,0]);
IndexedFaceSet1523.coord = Coordinate1524;

let Normal1525 = browser.currentScene.createNode("Normal");
Normal1525.vector = new MFVec3f(new float[0.31623,-0.94868,0,0.22942,-0.97333,0,0.14807,-0.98898,0,0.07184,-0.99742,0,0,-1,0,0,-1,0,0.07184,-0.99742,0,0.14807,-0.98898,0,0.22942,-0.97333,0,0.31623,-0.94868,0]);
IndexedFaceSet1523.normal = Normal1525;

Shape1521.geometry = IndexedFaceSet1523;

Transform5.children[302] = Shape1521;

let Shape1526 = browser.currentScene.createNode("Shape");
let Appearance1527 = browser.currentScene.createNode("Appearance");
Appearance1527.USE = "characters2013Appearance";
Shape1526.appearance = Appearance1527;

let IndexedFaceSet1528 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1528.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1528.solid = False;
let Coordinate1529 = browser.currentScene.createNode("Coordinate");
Coordinate1529.point = new MFVec3f(new float[-0.04773,-0.26861,0.07,-0.05422,-0.26838,0.07,-0.06069,-0.26767,0.07,-0.06708,-0.26644,0.07,-0.07332,-0.26467,0.07,-0.07332,-0.26467,0,-0.06708,-0.26644,0,-0.06069,-0.26767,0,-0.05422,-0.26838,0,-0.04773,-0.26861,0]);
IndexedFaceSet1528.coord = Coordinate1529;

let Normal1530 = browser.currentScene.createNode("Normal");
Normal1530.vector = new MFVec3f(new float[0,-1,0,-0.07184,-0.99742,0,-0.14807,-0.98898,0,-0.22942,-0.97333,0,-0.31623,-0.94868,0,-0.31623,-0.94868,0,-0.22942,-0.97333,0,-0.14807,-0.98898,0,-0.07184,-0.99742,0,0,-1,0]);
IndexedFaceSet1528.normal = Normal1530;

Shape1526.geometry = IndexedFaceSet1528;

Transform5.children[303] = Shape1526;

let Shape1531 = browser.currentScene.createNode("Shape");
let Appearance1532 = browser.currentScene.createNode("Appearance");
Appearance1532.USE = "characters2013Appearance";
Shape1531.appearance = Appearance1532;

let IndexedFaceSet1533 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1533.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1533.solid = False;
let Coordinate1534 = browser.currentScene.createNode("Coordinate");
Coordinate1534.point = new MFVec3f(new float[-0.07332,-0.26467,0.07,-0.07863,-0.26181,0.07,-0.08373,-0.25857,0.07,-0.08855,-0.25493,0.07,-0.09301,-0.25089,0.07,-0.09301,-0.25089,0,-0.08855,-0.25493,0,-0.08373,-0.25857,0,-0.07863,-0.26181,0,-0.07332,-0.26467,0]);
IndexedFaceSet1533.coord = Coordinate1534;

let Normal1535 = browser.currentScene.createNode("Normal");
Normal1535.vector = new MFVec3f(new float[-0.44721,-0.89443,0,-0.50497,-0.86314,0,-0.56791,-0.82309,0,-0.63569,-0.77194,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.63569,-0.77194,0,-0.56791,-0.82309,0,-0.50497,-0.86314,0,-0.44721,-0.89443,0]);
IndexedFaceSet1533.normal = Normal1535;

Shape1531.geometry = IndexedFaceSet1533;

Transform5.children[304] = Shape1531;

let Shape1536 = browser.currentScene.createNode("Shape");
let Appearance1537 = browser.currentScene.createNode("Appearance");
Appearance1537.USE = "characters2013Appearance";
Shape1536.appearance = Appearance1537;

let IndexedFaceSet1538 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1538.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1538.solid = False;
let Coordinate1539 = browser.currentScene.createNode("Coordinate");
Coordinate1539.point = new MFVec3f(new float[-0.09301,-0.25089,0.07,-0.09666,-0.2459,0.07,-0.09987,-0.24058,0.07,-0.1026,-0.23501,0.07,-0.10482,-0.22924,0.07,-0.10482,-0.22924,0,-0.1026,-0.23501,0,-0.09987,-0.24058,0,-0.09666,-0.2459,0,-0.09301,-0.25089,0]);
IndexedFaceSet1538.coord = Coordinate1539;

let Normal1540 = browser.currentScene.createNode("Normal");
Normal1540.vector = new MFVec3f(new float[-0.78087,-0.6247,0,-0.83268,-0.55376,0,-0.87764,-0.47932,0,-0.91629,-0.40051,0,-0.94868,-0.31623,0,-0.94868,-0.31623,0,-0.91629,-0.40051,0,-0.87764,-0.47932,0,-0.83268,-0.55376,0,-0.78087,-0.6247,0]);
IndexedFaceSet1538.normal = Normal1540;

Shape1536.geometry = IndexedFaceSet1538;

Transform5.children[305] = Shape1536;

let Shape1541 = browser.currentScene.createNode("Shape");
let Appearance1542 = browser.currentScene.createNode("Appearance");
Appearance1542.USE = "characters2013Appearance";
Shape1541.appearance = Appearance1542;

let IndexedFaceSet1543 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1543.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1543.solid = False;
let Coordinate1544 = browser.currentScene.createNode("Coordinate");
Coordinate1544.point = new MFVec3f(new float[-0.10482,-0.22924,0.07,-0.10634,-0.21648,0.07,-0.10679,-0.20364,0.07,-0.10679,-0.20364,0,-0.10634,-0.21648,0,-0.10482,-0.22924,0]);
IndexedFaceSet1543.coord = Coordinate1544;

let Normal1545 = browser.currentScene.createNode("Normal");
Normal1545.vector = new MFVec3f(new float[-0.98639,-0.1644,0,-0.99727,-0.07382,0,-1,0,0,-1,0,0,-0.99727,-0.07382,0,-0.98639,-0.1644,0]);
IndexedFaceSet1543.normal = Normal1545;

Shape1541.geometry = IndexedFaceSet1543;

Transform5.children[306] = Shape1541;

let Shape1546 = browser.currentScene.createNode("Shape");
let Appearance1547 = browser.currentScene.createNode("Appearance");
Appearance1547.USE = "characters2013Appearance";
Shape1546.appearance = Appearance1547;

let IndexedFaceSet1548 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1548.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1548.solid = False;
let Coordinate1549 = browser.currentScene.createNode("Coordinate");
Coordinate1549.point = new MFVec3f(new float[-0.10679,-0.20364,0.07,-0.10634,-0.1908,0.07,-0.10482,-0.17805,0.07,-0.10482,-0.17805,0,-0.10634,-0.1908,0,-0.10679,-0.20364,0]);
IndexedFaceSet1548.coord = Coordinate1549;

let Normal1550 = browser.currentScene.createNode("Normal");
Normal1550.vector = new MFVec3f(new float[-1,0,0,-0.99727,0.07382,0,-0.98639,0.1644,0,-0.98639,0.1644,0,-0.99727,0.07382,0,-1,0,0]);
IndexedFaceSet1548.normal = Normal1550;

Shape1546.geometry = IndexedFaceSet1548;

Transform5.children[307] = Shape1546;

let Shape1551 = browser.currentScene.createNode("Shape");
let Appearance1552 = browser.currentScene.createNode("Appearance");
Appearance1552.USE = "characters2013Appearance";
Shape1551.appearance = Appearance1552;

let IndexedFaceSet1553 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1553.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1553.solid = False;
let Coordinate1554 = browser.currentScene.createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.10482,-0.17805,0.07,-0.1026,-0.17228,0.07,-0.09987,-0.1667,0.07,-0.09666,-0.16139,0.07,-0.09301,-0.15639,0.07,-0.09301,-0.15639,0,-0.09666,-0.16139,0,-0.09987,-0.1667,0,-0.1026,-0.17228,0,-0.10482,-0.17805,0]);
IndexedFaceSet1553.coord = Coordinate1554;

let Normal1555 = browser.currentScene.createNode("Normal");
Normal1555.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.91629,0.40051,0,-0.87764,0.47932,0,-0.83268,0.55376,0,-0.78087,0.6247,0,-0.78087,0.6247,0,-0.83268,0.55376,0,-0.87764,0.47932,0,-0.91629,0.40051,0,-0.94868,0.31623,0]);
IndexedFaceSet1553.normal = Normal1555;

Shape1551.geometry = IndexedFaceSet1553;

Transform5.children[308] = Shape1551;

let Shape1556 = browser.currentScene.createNode("Shape");
let Appearance1557 = browser.currentScene.createNode("Appearance");
Appearance1557.USE = "characters2013Appearance";
Shape1556.appearance = Appearance1557;

let IndexedFaceSet1558 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1558.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1558.solid = False;
let Coordinate1559 = browser.currentScene.createNode("Coordinate");
Coordinate1559.point = new MFVec3f(new float[-0.09301,-0.15639,0.07,-0.08855,-0.15235,0.07,-0.08373,-0.14872,0.07,-0.07863,-0.14548,0.07,-0.07332,-0.14261,0.07,-0.07332,-0.14261,0,-0.07863,-0.14548,0,-0.08373,-0.14872,0,-0.08855,-0.15235,0,-0.09301,-0.15639,0]);
IndexedFaceSet1558.coord = Coordinate1559;

let Normal1560 = browser.currentScene.createNode("Normal");
Normal1560.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.63569,0.77194,0,-0.56791,0.82309,0,-0.50497,0.86314,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.50497,0.86314,0,-0.56791,0.82309,0,-0.63569,0.77194,0,-0.70711,0.70711,0]);
IndexedFaceSet1558.normal = Normal1560;

Shape1556.geometry = IndexedFaceSet1558;

Transform5.children[309] = Shape1556;

let Shape1561 = browser.currentScene.createNode("Shape");
let Appearance1562 = browser.currentScene.createNode("Appearance");
Appearance1562.USE = "characters2013Appearance";
Shape1561.appearance = Appearance1562;

let IndexedFaceSet1563 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1563.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,7,-1,8,9,3,-1,10,2,9,-1,3,4,7,-1,7,4,6,-1,6,4,5,-1]);
IndexedFaceSet1563.solid = False;
let Coordinate1564 = browser.currentScene.createNode("Coordinate");
Coordinate1564.point = new MFVec3f(new float[-0.07332,-0.14261,0.07,-0.07011,-0.14115,0.07,-0.06679,-0.13992,0.07,-0.05991,-0.13808,0.07,-0.05285,-0.13704,0.07,-0.04576,-0.13671,0.07,-0.04576,-0.13671,0,-0.05285,-0.13704,0,-0.05991,-0.13808,0,-0.06679,-0.13992,0,-0.07011,-0.14115,0,-0.07332,-0.14261,0]);
IndexedFaceSet1563.coord = Coordinate1564;

let Normal1565 = browser.currentScene.createNode("Normal");
Normal1565.vector = new MFVec3f(new float[-0.44721,0.89443,0,-0.38082,0.92465,0,-0.31727,0.94834,0,-0.19979,0.97984,0,-0.09477,0.9955,0,0,1,0,0,1,0,-0.09477,0.9955,0,-0.19979,0.97984,0,-0.31727,0.94834,0,-0.38082,0.92465,0,-0.44721,0.89443,0]);
IndexedFaceSet1563.normal = Normal1565;

Shape1561.geometry = IndexedFaceSet1563;

Transform5.children[310] = Shape1561;

let Shape1566 = browser.currentScene.createNode("Shape");
let Appearance1567 = browser.currentScene.createNode("Appearance");
Appearance1567.USE = "characters2013Appearance";
Shape1566.appearance = Appearance1567;

let IndexedFaceSet1568 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1568.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1]);
IndexedFaceSet1568.solid = False;
let Coordinate1569 = browser.currentScene.createNode("Coordinate");
Coordinate1569.point = new MFVec3f(new float[-0.04576,-0.13671,0.07,-0.03912,-0.137,0.07,-0.0325,-0.13797,0.07,-0.02926,-0.13876,0.07,-0.0261,-0.13979,0.07,-0.02306,-0.14107,0.07,-0.02017,-0.14261,0.07,-0.02017,-0.14261,0,-0.02306,-0.14107,0,-0.0261,-0.13979,0,-0.02926,-0.13876,0,-0.0325,-0.13797,0,-0.03912,-0.137,0,-0.04576,-0.13671,0]);
IndexedFaceSet1568.coord = Coordinate1569;

let Normal1570 = browser.currentScene.createNode("Normal");
Normal1570.vector = new MFVec3f(new float[0,1,0,0.09039,0.99591,0,0.20481,0.9788,0,0.27236,0.9622,0,0.34699,0.93787,0,0.42819,0.90369,0,0.5145,0.85749,0,0.5145,0.85749,0,0.42819,0.90369,0,0.34699,0.93787,0,0.27236,0.9622,0,0.20481,0.9788,0,0.09039,0.99591,0,0,1,0]);
IndexedFaceSet1568.normal = Normal1570;

Shape1566.geometry = IndexedFaceSet1568;

Transform5.children[311] = Shape1566;

let Shape1571 = browser.currentScene.createNode("Shape");
let Appearance1572 = browser.currentScene.createNode("Appearance");
Appearance1572.USE = "characters2013Appearance";
Shape1571.appearance = Appearance1572;

let IndexedFaceSet1573 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1573.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1573.solid = False;
let Coordinate1574 = browser.currentScene.createNode("Coordinate");
Coordinate1574.point = new MFVec3f(new float[-0.02017,-0.14261,0.07,-0.01466,-0.14574,0.07,-0.00947,-0.14944,0.07,-0.00471,-0.15366,0.07,-0.00048,-0.15836,0.07,-0.00048,-0.15836,0,-0.00471,-0.15366,0,-0.00947,-0.14944,0,-0.01466,-0.14574,0,-0.02017,-0.14261,0]);
IndexedFaceSet1573.coord = Coordinate1574;

let Normal1575 = browser.currentScene.createNode("Normal");
Normal1575.vector = new MFVec3f(new float[0.44721,0.89443,0,0.53764,0.84317,0,0.62277,0.78241,0,0.7038,0.7104,0,0.78087,0.6247,0,0.78087,0.6247,0,0.7038,0.7104,0,0.62277,0.78241,0,0.53764,0.84317,0,0.44721,0.89443,0]);
IndexedFaceSet1573.normal = Normal1575;

Shape1571.geometry = IndexedFaceSet1573;

Transform5.children[312] = Shape1571;

let Shape1576 = browser.currentScene.createNode("Shape");
let Appearance1577 = browser.currentScene.createNode("Appearance");
Appearance1577.USE = "characters2013Appearance";
Shape1576.appearance = Appearance1577;

let IndexedFaceSet1578 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1578.coordIndex = new MFInt32(new int[67,0,130,-1,131,67,130,-1,131,66,67,-1,131,65,66,-1,131,132,65,-1,65,132,64,-1,64,132,63,-1,63,132,133,-1,62,133,61,-1,62,63,133,-1,2,129,1,-1,2,3,129,-1,129,3,128,-1,128,3,4,-1,5,128,4,-1,5,127,128,-1,5,6,127,-1,127,6,126,-1,126,6,7,-1,125,7,124,-1,125,126,7,-1,7,8,124,-1,124,8,123,-1,123,8,122,-1,122,8,9,-1,121,9,120,-1,121,122,9,-1,10,114,9,-1,10,11,114,-1,114,11,12,-1,13,114,12,-1,13,14,114,-1,114,14,15,-1,113,15,16,-1,112,16,111,-1,112,113,16,-1,114,15,113,-1,111,16,110,-1,110,16,17,-1,109,17,108,-1,109,110,17,-1,17,18,108,-1,108,18,107,-1,107,18,106,-1,106,18,19,-1,20,106,19,-1,20,105,106,-1,20,21,105,-1,105,21,104,-1,104,21,103,-1,103,21,22,-1,102,22,101,-1,102,103,22,-1,22,23,101,-1,101,23,100,-1,100,23,24,-1,99,24,25,-1,26,99,25,-1,26,98,99,-1,26,27,98,-1,98,27,97,-1,97,27,28,-1,29,97,28,-1,29,96,97,-1,29,30,96,-1,96,30,95,-1,95,30,94,-1,94,30,31,-1,32,94,31,-1,32,93,94,-1,32,33,93,-1,93,33,92,-1,92,33,34,-1,91,34,35,-1,36,91,35,-1,36,90,91,-1,36,37,90,-1,90,37,89,-1,89,37,38,-1,88,38,39,-1,87,39,40,-1,86,40,41,-1,85,41,42,-1,84,42,83,-1,84,85,42,-1,100,24,99,-1,92,34,91,-1,89,38,88,-1,88,39,87,-1,87,40,86,-1,86,41,85,-1,42,43,83,-1,83,43,82,-1,82,43,81,-1,81,43,80,-1,80,43,44,-1,79,44,45,-1,46,79,45,-1,46,47,79,-1,79,47,48,-1,49,79,48,-1,49,50,79,-1,79,50,78,-1,78,50,77,-1,77,50,76,-1,76,50,75,-1,75,50,74,-1,74,50,73,-1,73,50,72,-1,72,50,71,-1,71,50,70,-1,70,50,69,-1,69,50,68,-1,68,50,51,-1,52,68,51,-1,52,137,68,-1,52,53,137,-1,137,53,54,-1,136,54,55,-1,56,136,55,-1,56,57,136,-1,136,57,135,-1,135,57,58,-1,134,58,59,-1,60,134,59,-1,60,133,134,-1,60,61,133,-1,80,44,79,-1,137,54,136,-1,135,58,134,-1,114,115,9,-1,9,115,116,-1,117,9,116,-1,117,118,9,-1,9,118,119,-1,120,9,119,-1,129,130,1,-1,1,130,0,-1]);
IndexedFaceSet1578.solid = False;
let Coordinate1579 = browser.currentScene.createNode("Coordinate");
Coordinate1579.point = new MFVec3f(new float[0.01133,-0.17805,0.07,0.00923,-0.17267,0.07,0.00655,-0.16751,0.07,0.00331,-0.1627,0.07,0.00148,-0.16046,0.07,-0.00048,-0.15836,0.07,-0.00471,-0.15366,0.07,-0.00947,-0.14944,0.07,-0.01466,-0.14574,0.07,-0.02017,-0.14261,0.07,-0.02306,-0.14107,0.07,-0.0261,-0.13979,0.07,-0.02926,-0.13876,0.07,-0.0325,-0.13797,0.07,-0.03912,-0.137,0.07,-0.04576,-0.13671,0.07,-0.05285,-0.13704,0.07,-0.05991,-0.13808,0.07,-0.06679,-0.13992,0.07,-0.07011,-0.14115,0.07,-0.07332,-0.14261,0.07,-0.07863,-0.14548,0.07,-0.08373,-0.14872,0.07,-0.08855,-0.15235,0.07,-0.09301,-0.15639,0.07,-0.09666,-0.16139,0.07,-0.09987,-0.1667,0.07,-0.1026,-0.17228,0.07,-0.10482,-0.17805,0.07,-0.10634,-0.1908,0.07,-0.10679,-0.20364,0.07,-0.10634,-0.21648,0.07,-0.10482,-0.22924,0.07,-0.1026,-0.23501,0.07,-0.09987,-0.24058,0.07,-0.09666,-0.2459,0.07,-0.09301,-0.25089,0.07,-0.08855,-0.25493,0.07,-0.08373,-0.25857,0.07,-0.07863,-0.26181,0.07,-0.07332,-0.26467,0.07,-0.06708,-0.26644,0.07,-0.06069,-0.26767,0.07,-0.05422,-0.26838,0.07,-0.04773,-0.26861,0.07,-0.04124,-0.26838,0.07,-0.03477,-0.26767,0.07,-0.02838,-0.26644,0.07,-0.02214,-0.26467,0.07,-0.01676,-0.26257,0.07,-0.0116,-0.25989,0.07,-0.00679,-0.25665,0.07,-0.00455,-0.25482,0.07,-0.00245,-0.25286,0.07,-0.00036,-0.25059,0.07,0.00153,-0.24814,0.07,0.00325,-0.24554,0.07,0.00479,-0.24282,0.07,0.00738,-0.23711,0.07,0.00936,-0.23121,0.07,0.01082,-0.22799,0.07,0.01206,-0.22468,0.07,0.01389,-0.2178,0.07,0.01494,-0.21073,0.07,0.01527,-0.20364,0.07,0.01504,-0.19715,0.07,0.01432,-0.19068,0.07,0.0131,-0.18429,0.07,-0.02017,-0.24499,0.07,-0.02135,-0.24652,0.07,-0.02264,-0.24798,0.07,-0.02405,-0.24936,0.07,-0.02555,-0.25067,0.07,-0.0288,-0.25302,0.07,-0.03234,-0.25501,0.07,-0.03607,-0.25661,0.07,-0.03993,-0.25779,0.07,-0.04384,-0.25852,0.07,-0.04579,-0.25871,0.07,-0.04773,-0.25877,0.07,-0.04955,-0.2587,0.07,-0.05138,-0.2585,0.07,-0.05321,-0.25817,0.07,-0.05502,-0.25772,0.07,-0.0586,-0.25649,0.07,-0.06205,-0.25483,0.07,-0.06531,-0.25281,0.07,-0.06831,-0.25047,0.07,-0.071,-0.24784,0.07,-0.07332,-0.24499,0.07,-0.07546,-0.24018,0.07,-0.0772,-0.23521,0.07,-0.07857,-0.23009,0.07,-0.07961,-0.22487,0.07,-0.08085,-0.21426,0.07,-0.0812,-0.20364,0.07,-0.08095,-0.19298,0.07,-0.07987,-0.18228,0.07,-0.07887,-0.17704,0.07,-0.07749,-0.17193,0.07,-0.07566,-0.167,0.07,-0.07332,-0.1623,0.07,-0.07221,-0.16064,0.07,-0.07096,-0.15905,0.07,-0.0696,-0.15751,0.07,-0.06814,-0.15605,0.07,-0.06493,-0.15337,0.07,-0.06141,-0.15106,0.07,-0.05765,-0.14917,0.07,-0.05571,-0.1484,0.07,-0.05374,-0.14775,0.07,-0.05175,-0.14723,0.07,-0.04975,-0.14686,0.07,-0.04775,-0.14663,0.07,-0.04576,-0.14655,0.07,-0.04388,-0.14663,0.07,-0.042,-0.14688,0.07,-0.04013,-0.14728,0.07,-0.03828,-0.14782,0.07,-0.03646,-0.14849,0.07,-0.03466,-0.14929,0.07,-0.0312,-0.15124,0.07,-0.02796,-0.15358,0.07,-0.025,-0.15626,0.07,-0.02238,-0.15918,0.07,-0.02017,-0.1623,0.07,-0.0187,-0.16451,0.07,-0.01738,-0.16681,0.07,-0.01516,-0.17163,0.07,-0.01343,-0.17671,0.07,-0.01216,-0.18198,0.07,-0.0107,-0.19283,0.07,-0.01032,-0.20364,0.07,-0.01081,-0.21439,0.07,-0.01243,-0.22512,0.07,-0.01375,-0.23036,0.07,-0.01546,-0.23545,0.07,-0.01759,-0.24034,0.07]);
IndexedFaceSet1578.coord = Coordinate1579;

let Normal1580 = browser.currentScene.createNode("Normal");
Normal1580.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1578.normal = Normal1580;

Shape1576.geometry = IndexedFaceSet1578;

Transform5.children[313] = Shape1576;

let Shape1581 = browser.currentScene.createNode("Shape");
let Appearance1582 = browser.currentScene.createNode("Appearance");
Appearance1582.USE = "characters2013Appearance";
Shape1581.appearance = Appearance1582;

let IndexedFaceSet1583 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1583.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1583.solid = False;
let Coordinate1584 = browser.currentScene.createNode("Coordinate");
Coordinate1584.point = new MFVec3f(new float[0.18261,-0.30602,0.07,0.17759,-0.30575,0.07,0.17259,-0.30498,0.07,0.16768,-0.30375,0.07,0.16293,-0.30208,0.07,0.16293,-0.30208,0,0.16768,-0.30375,0,0.17259,-0.30498,0,0.17759,-0.30575,0,0.18261,-0.30602,0]);
IndexedFaceSet1583.coord = Coordinate1584;

let Normal1585 = browser.currentScene.createNode("Normal");
Normal1585.vector = new MFVec3f(new float[0,-1,0,-0.10395,-0.99458,0,-0.19952,-0.97989,0,-0.28811,-0.9576,0,-0.37139,-0.92848,0,-0.37139,-0.92848,0,-0.28811,-0.9576,0,-0.19952,-0.97989,0,-0.10395,-0.99458,0,0,-1,0]);
IndexedFaceSet1583.normal = Normal1585;

Shape1581.geometry = IndexedFaceSet1583;

Transform5.children[314] = Shape1581;

let Shape1586 = browser.currentScene.createNode("Shape");
let Appearance1587 = browser.currentScene.createNode("Appearance");
Appearance1587.USE = "characters2013Appearance";
Shape1586.appearance = Appearance1587;

let IndexedFaceSet1588 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1588.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1588.solid = False;
let Coordinate1589 = browser.currentScene.createNode("Coordinate");
Coordinate1589.point = new MFVec3f(new float[0.16293,-0.30208,0.07,0.16081,-0.30148,0.07,0.15872,-0.30075,0.07,0.15468,-0.29893,0.07,0.15082,-0.29672,0.07,0.14718,-0.29421,0.07,0.14718,-0.29421,0,0.15082,-0.29672,0,0.15468,-0.29893,0,0.15872,-0.30075,0,0.16081,-0.30148,0,0.16293,-0.30208,0]);
IndexedFaceSet1588.coord = Coordinate1589;

let Normal1590 = browser.currentScene.createNode("Normal");
Normal1590.vector = new MFVec3f(new float[-0.24254,-0.97014,0,-0.30355,-0.95282,0,-0.35921,-0.93325,0,-0.45562,-0.89018,0,-0.53474,-0.84502,0,-0.6,-0.8,0,-0.6,-0.8,0,-0.53474,-0.84502,0,-0.45562,-0.89018,0,-0.35921,-0.93325,0,-0.30355,-0.95282,0,-0.24254,-0.97014,0]);
IndexedFaceSet1588.normal = Normal1590;

Shape1586.geometry = IndexedFaceSet1588;

Transform5.children[315] = Shape1586;

let Shape1591 = browser.currentScene.createNode("Shape");
let Appearance1592 = browser.currentScene.createNode("Appearance");
Appearance1592.USE = "characters2013Appearance";
Shape1591.appearance = Appearance1592;

let IndexedFaceSet1593 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1593.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1593.solid = False;
let Coordinate1594 = browser.currentScene.createNode("Coordinate");
Coordinate1594.point = new MFVec3f(new float[0.14718,-0.29421,0.07,0.14437,-0.29213,0.07,0.14177,-0.28977,0.07,0.13941,-0.28717,0.07,0.13733,-0.28436,0.07,0.13733,-0.28436,0,0.13941,-0.28717,0,0.14177,-0.28977,0,0.14437,-0.29213,0,0.14718,-0.29421,0]);
IndexedFaceSet1593.coord = Coordinate1594;

let Normal1595 = browser.currentScene.createNode("Normal");
Normal1595.vector = new MFVec3f(new float[-0.5547,-0.83205,0,-0.63491,-0.77259,0,-0.70711,-0.70711,0,-0.77259,-0.63491,0,-0.83205,-0.5547,0,-0.83205,-0.5547,0,-0.77259,-0.63491,0,-0.70711,-0.70711,0,-0.63491,-0.77259,0,-0.5547,-0.83205,0]);
IndexedFaceSet1593.normal = Normal1595;

Shape1591.geometry = IndexedFaceSet1593;

Transform5.children[316] = Shape1591;

let Shape1596 = browser.currentScene.createNode("Shape");
let Appearance1597 = browser.currentScene.createNode("Appearance");
Appearance1597.USE = "characters2013Appearance";
Shape1596.appearance = Appearance1597;

let IndexedFaceSet1598 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1598.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1598.solid = False;
let Coordinate1599 = browser.currentScene.createNode("Coordinate");
Coordinate1599.point = new MFVec3f(new float[0.13733,-0.28436,0.07,0.13649,-0.28148,0.07,0.13587,-0.27853,0.07,0.13549,-0.27555,0.07,0.13536,-0.27255,0.07,0.13536,-0.27255,0,0.13549,-0.27555,0,0.13587,-0.27853,0,0.13649,-0.28148,0,0.13733,-0.28436,0]);
IndexedFaceSet1598.coord = Coordinate1599;

let Normal1600 = browser.currentScene.createNode("Normal");
Normal1600.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.97003,-0.24298,0,-0.98605,-0.16646,0,-0.99632,-0.08575,0,-1,0,0,-1,0,0,-0.99632,-0.08575,0,-0.98605,-0.16646,0,-0.97003,-0.24298,0,-0.94868,-0.31623,0]);
IndexedFaceSet1598.normal = Normal1600;

Shape1596.geometry = IndexedFaceSet1598;

Transform5.children[317] = Shape1596;

let Shape1601 = browser.currentScene.createNode("Shape");
let Appearance1602 = browser.currentScene.createNode("Appearance");
Appearance1602.USE = "characters2013Appearance";
Shape1601.appearance = Appearance1602;

let IndexedFaceSet1603 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1603.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1603.solid = False;
let Coordinate1604 = browser.currentScene.createNode("Coordinate");
Coordinate1604.point = new MFVec3f(new float[0.13536,-0.27255,0.07,0.1354,-0.27045,0.07,0.13548,-0.26937,0.07,0.13563,-0.26832,0.07,0.13587,-0.26729,0.07,0.13622,-0.26633,0.07,0.1367,-0.26545,0.07,0.13733,-0.26467,0.07,0.13733,-0.26467,0,0.1367,-0.26545,0,0.13622,-0.26633,0,0.13587,-0.26729,0,0.13563,-0.26832,0,0.13548,-0.26937,0,0.1354,-0.27045,0,0.13536,-0.27255,0]);
IndexedFaceSet1603.coord = Coordinate1604;

let Normal1605 = browser.currentScene.createNode("Normal");
Normal1605.vector = new MFVec3f(new float[-1,0,0,-0.9988,0.04898,0,-0.99469,0.1029,0,-0.98386,0.17892,0,-0.96007,0.27975,0,-0.91369,0.40641,0,-0.8325,0.55403,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.8325,0.55403,0,-0.91369,0.40641,0,-0.96007,0.27975,0,-0.98386,0.17892,0,-0.99469,0.1029,0,-0.9988,0.04898,0,-1,0,0]);
IndexedFaceSet1603.normal = Normal1605;

Shape1601.geometry = IndexedFaceSet1603;

Transform5.children[318] = Shape1601;

let Shape1606 = browser.currentScene.createNode("Shape");
let Appearance1607 = browser.currentScene.createNode("Appearance");
Appearance1607.USE = "characters2013Appearance";
Shape1606.appearance = Appearance1607;

let IndexedFaceSet1608 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1608.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1608.solid = False;
let Coordinate1609 = browser.currentScene.createNode("Coordinate");
Coordinate1609.point = new MFVec3f(new float[0.13733,-0.26467,0.07,0.13783,-0.26353,0.07,0.13854,-0.26244,0.07,0.13941,-0.26144,0.07,0.14043,-0.26055,0.07,0.14155,-0.25982,0.07,0.14274,-0.25925,0.07,0.14397,-0.25889,0.07,0.14521,-0.25877,0.07,0.14521,-0.25877,0,0.14397,-0.25889,0,0.14274,-0.25925,0,0.14155,-0.25982,0,0.14043,-0.26055,0,0.13941,-0.26144,0,0.13854,-0.26244,0,0.13783,-0.26353,0,0.13733,-0.26467,0]);
IndexedFaceSet1608.coord = Coordinate1609;

let Normal1610 = browser.currentScene.createNode("Normal");
Normal1610.vector = new MFVec3f(new float[-0.94868,0.31623,0,-0.87909,0.47666,0,-0.79679,0.60426,0,-0.70594,0.70827,0,-0.60561,0.79576,0,-0.49164,0.8708,0,-0.35756,0.93389,0,-0.19567,0.98067,0,0,1,0,0,1,0,-0.19567,0.98067,0,-0.35756,0.93389,0,-0.49164,0.8708,0,-0.60561,0.79576,0,-0.70594,0.70827,0,-0.79679,0.60426,0,-0.87909,0.47666,0,-0.94868,0.31623,0]);
IndexedFaceSet1608.normal = Normal1610;

Shape1606.geometry = IndexedFaceSet1608;

Transform5.children[319] = Shape1606;

let Shape1611 = browser.currentScene.createNode("Shape");
let Appearance1612 = browser.currentScene.createNode("Appearance");
Appearance1612.USE = "characters2013Appearance";
Shape1611.appearance = Appearance1612;

let IndexedFaceSet1613 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1613.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,12,-1,13,14,8,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,8,9,12,-1,12,9,10,-1,11,12,10,-1]);
IndexedFaceSet1613.solid = False;
let Coordinate1614 = browser.currentScene.createNode("Coordinate");
Coordinate1614.point = new MFVec3f(new float[0.14521,-0.25877,0.07,0.14679,-0.25882,0.07,0.14839,-0.25897,0.07,0.14999,-0.25924,0.07,0.15157,-0.25964,0.07,0.15309,-0.26017,0.07,0.15452,-0.26085,0.07,0.1552,-0.26125,0.07,0.15584,-0.26169,0.07,0.15645,-0.26218,0.07,0.15702,-0.26271,0.07,0.15702,-0.26271,0,0.15645,-0.26218,0,0.15584,-0.26169,0,0.1552,-0.26125,0,0.15452,-0.26085,0,0.15309,-0.26017,0,0.15157,-0.25964,0,0.14999,-0.25924,0,0.14839,-0.25897,0,0.14679,-0.25882,0,0.14521,-0.25877,0]);
IndexedFaceSet1613.coord = Coordinate1614;

let Normal1615 = browser.currentScene.createNode("Normal");
Normal1615.vector = new MFVec3f(new float[0,1,0,0.06217,0.99807,0,0.12928,0.99161,0,0.20336,0.9791,0,0.28619,0.95817,0,0.37907,0.92537,0,0.48214,0.87609,0,0.53698,0.84359,0,0.59334,0.80495,0,0.65041,0.75958,0,0.70711,0.70711,0,0.70711,0.70711,0,0.65041,0.75958,0,0.59334,0.80495,0,0.53698,0.84359,0,0.48214,0.87609,0,0.37907,0.92537,0,0.28619,0.95817,0,0.20336,0.9791,0,0.12928,0.99161,0,0.06217,0.99807,0,0,1,0]);
IndexedFaceSet1613.normal = Normal1615;

Shape1611.geometry = IndexedFaceSet1613;

Transform5.children[320] = Shape1611;

let Shape1616 = browser.currentScene.createNode("Shape");
let Appearance1617 = browser.currentScene.createNode("Appearance");
Appearance1617.USE = "characters2013Appearance";
Shape1616.appearance = Appearance1617;

let IndexedFaceSet1618 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1618.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1618.solid = False;
let Coordinate1619 = browser.currentScene.createNode("Coordinate");
Coordinate1619.point = new MFVec3f(new float[0.15702,-0.26271,0.07,0.1578,-0.26317,0.07,0.15853,-0.26374,0.07,0.1592,-0.26442,0.07,0.15978,-0.26517,0.07,0.16027,-0.26598,0.07,0.16064,-0.26684,0.07,0.16087,-0.26772,0.07,0.16096,-0.26861,0.07,0.16096,-0.26861,0,0.16087,-0.26772,0,0.16064,-0.26684,0,0.16027,-0.26598,0,0.15978,-0.26517,0,0.1592,-0.26442,0,0.15853,-0.26374,0,0.1578,-0.26317,0,0.15702,-0.26271,0]);
IndexedFaceSet1618.coord = Coordinate1619;

let Normal1620 = browser.currentScene.createNode("Normal");
Normal1620.vector = new MFVec3f(new float[0.44721,0.89443,0,0.56714,0.82362,0,0.66628,0.74571,0,0.75071,0.66063,0,0.82442,0.56598,0,0.88911,0.45769,0,0.9438,0.33052,0,0.98384,0.17902,0,1,0,0,1,0,0,0.98384,0.17902,0,0.9438,0.33052,0,0.88911,0.45769,0,0.82442,0.56598,0,0.75071,0.66063,0,0.66628,0.74571,0,0.56714,0.82362,0,0.44721,0.89443,0]);
IndexedFaceSet1618.normal = Normal1620;

Shape1616.geometry = IndexedFaceSet1618;

Transform5.children[321] = Shape1616;

let Shape1621 = browser.currentScene.createNode("Shape");
let Appearance1622 = browser.currentScene.createNode("Appearance");
Appearance1622.USE = "characters2013Appearance";
Shape1621.appearance = Appearance1622;

let IndexedFaceSet1623 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1623.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1623.solid = False;
let Coordinate1624 = browser.currentScene.createNode("Coordinate");
Coordinate1624.point = new MFVec3f(new float[0.16096,-0.26861,0.07,0.1608,-0.27112,0.07,0.16037,-0.2736,0.07,0.15899,-0.27846,0.07,0.15899,-0.27846,0,0.16037,-0.2736,0,0.1608,-0.27112,0,0.16096,-0.26861,0]);
IndexedFaceSet1623.coord = Coordinate1624;

let Normal1625 = browser.currentScene.createNode("Normal");
Normal1625.vector = new MFVec3f(new float[1,0,0,0.99258,-0.12161,0,0.97691,-0.21363,0,0.94868,-0.31623,0,0.94868,-0.31623,0,0.97691,-0.21363,0,0.99258,-0.12161,0,1,0,0]);
IndexedFaceSet1623.normal = Normal1625;

Shape1621.geometry = IndexedFaceSet1623;

Transform5.children[322] = Shape1621;

let Shape1626 = browser.currentScene.createNode("Shape");
let Appearance1627 = browser.currentScene.createNode("Appearance");
Appearance1627.USE = "characters2013Appearance";
Shape1626.appearance = Appearance1627;

let IndexedFaceSet1628 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1628.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1628.solid = False;
let Coordinate1629 = browser.currentScene.createNode("Coordinate");
Coordinate1629.point = new MFVec3f(new float[0.15899,-0.27846,0.07,0.15817,-0.28033,0.07,0.15755,-0.28229,0.07,0.15716,-0.2843,0.07,0.15705,-0.28532,0.07,0.15702,-0.28633,0.07,0.15702,-0.28633,0,0.15705,-0.28532,0,0.15716,-0.2843,0,0.15755,-0.28229,0,0.15817,-0.28033,0,0.15899,-0.27846,0]);
IndexedFaceSet1628.coord = Coordinate1629;

let Normal1630 = browser.currentScene.createNode("Normal");
Normal1630.vector = new MFVec3f(new float[0.89443,-0.44721,0,0.93577,-0.35262,0,0.96859,-0.24866,0,0.99125,-0.13201,0,0.99768,-0.06804,0,1,0,0,1,0,0,0.99768,-0.06804,0,0.99125,-0.13201,0,0.96859,-0.24866,0,0.93577,-0.35262,0,0.89443,-0.44721,0]);
IndexedFaceSet1628.normal = Normal1630;

Shape1626.geometry = IndexedFaceSet1628;

Transform5.children[323] = Shape1626;

let Shape1631 = browser.currentScene.createNode("Shape");
let Appearance1632 = browser.currentScene.createNode("Appearance");
Appearance1632.USE = "characters2013Appearance";
Shape1631.appearance = Appearance1632;

let IndexedFaceSet1633 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1633.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1633.solid = False;
let Coordinate1634 = browser.currentScene.createNode("Coordinate");
Coordinate1634.point = new MFVec3f(new float[0.15702,-0.28633,0.07,0.158,-0.28732,0.07,0.15899,-0.2883,0.07,0.15899,-0.2883,0,0.158,-0.28732,0,0.15702,-0.28633,0]);
IndexedFaceSet1633.coord = Coordinate1634;

let Normal1635 = browser.currentScene.createNode("Normal");
Normal1635.vector = new MFVec3f(new float[0.70711,0.7071,0,0.70711,0.7071,0,0.70711,0.7071,0,0.70711,0.7071,0,0.70711,0.7071,0,0.70711,0.7071,0]);
IndexedFaceSet1633.normal = Normal1635;

Shape1631.geometry = IndexedFaceSet1633;

Transform5.children[324] = Shape1631;

let Shape1636 = browser.currentScene.createNode("Shape");
let Appearance1637 = browser.currentScene.createNode("Appearance");
Appearance1637.USE = "characters2013Appearance";
Shape1636.appearance = Appearance1637;

let IndexedFaceSet1638 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1638.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1638.solid = False;
let Coordinate1639 = browser.currentScene.createNode("Coordinate");
Coordinate1639.point = new MFVec3f(new float[0.15899,-0.2883,0.07,0.16032,-0.28947,0.07,0.16178,-0.2905,0.07,0.16489,-0.29224,0.07,0.16489,-0.29224,0,0.16178,-0.2905,0,0.16032,-0.28947,0,0.15899,-0.2883,0]);
IndexedFaceSet1638.coord = Coordinate1639;

let Normal1640 = browser.currentScene.createNode("Normal");
Normal1640.vector = new MFVec3f(new float[0.70711,0.70711,0,0.61587,0.78785,0,0.53972,0.84184,0,0.44721,0.89443,0,0.44721,0.89443,0,0.53972,0.84184,0,0.61587,0.78785,0,0.70711,0.70711,0]);
IndexedFaceSet1638.normal = Normal1640;

Shape1636.geometry = IndexedFaceSet1638;

Transform5.children[325] = Shape1636;

let Shape1641 = browser.currentScene.createNode("Shape");
let Appearance1642 = browser.currentScene.createNode("Appearance");
Appearance1642.USE = "characters2013Appearance";
Shape1641.appearance = Appearance1642;

let IndexedFaceSet1643 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1643.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1643.solid = False;
let Coordinate1644 = browser.currentScene.createNode("Coordinate");
Coordinate1644.point = new MFVec3f(new float[0.16489,-0.29224,0.07,0.16591,-0.29227,0.07,0.16693,-0.29237,0.07,0.16894,-0.29277,0.07,0.1709,-0.29339,0.07,0.17277,-0.29421,0.07,0.17277,-0.29421,0,0.1709,-0.29339,0,0.16894,-0.29277,0,0.16693,-0.29237,0,0.16591,-0.29227,0,0.16489,-0.29224,0]);
IndexedFaceSet1643.coord = Coordinate1644;

let Normal1645 = browser.currentScene.createNode("Normal");
Normal1645.vector = new MFVec3f(new float[0,1,0,0.06804,0.99768,0,0.13201,0.99125,0,0.24866,0.96859,0,0.35262,0.93577,0,0.44721,0.89443,0,0.44721,0.89443,0,0.35262,0.93577,0,0.24866,0.96859,0,0.13201,0.99125,0,0.06804,0.99768,0,0,1,0]);
IndexedFaceSet1643.normal = Normal1645;

Shape1641.geometry = IndexedFaceSet1643;

Transform5.children[326] = Shape1641;

let Shape1646 = browser.currentScene.createNode("Shape");
let Appearance1647 = browser.currentScene.createNode("Appearance");
Appearance1647.USE = "characters2013Appearance";
Shape1646.appearance = Appearance1647;

let IndexedFaceSet1648 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1648.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,8,-1,9,10,4,-1,12,2,11,-1,11,3,10,-1,4,5,8,-1,8,5,7,-1,7,5,6,-1]);
IndexedFaceSet1648.solid = False;
let Coordinate1649 = browser.currentScene.createNode("Coordinate");
Coordinate1649.point = new MFVec3f(new float[0.17277,-0.29421,0.07,0.17414,-0.2948,0.07,0.17556,-0.29527,0.07,0.17702,-0.29561,0.07,0.17852,-0.29586,0.07,0.18155,-0.29612,0.07,0.18458,-0.29618,0.07,0.18458,-0.29618,0,0.18155,-0.29612,0,0.17852,-0.29586,0,0.17702,-0.29561,0,0.17556,-0.29527,0,0.17414,-0.2948,0,0.17277,-0.29421,0]);
IndexedFaceSet1648.coord = Coordinate1649;

let Normal1650 = browser.currentScene.createNode("Normal");
Normal1650.vector = new MFVec3f(new float[0.44722,0.89443,0,0.35328,0.93552,0,0.26836,0.96332,0,0.19462,0.98088,0,0.13281,0.99114,0,0.04437,0.99902,0,0,1,0,0,1,0,0.04437,0.99902,0,0.13281,0.99114,0,0.19462,0.98088,0,0.26836,0.96332,0,0.35328,0.93552,0,0.44722,0.89443,0]);
IndexedFaceSet1648.normal = Normal1650;

Shape1646.geometry = IndexedFaceSet1648;

Transform5.children[327] = Shape1646;

let Shape1651 = browser.currentScene.createNode("Shape");
let Appearance1652 = browser.currentScene.createNode("Appearance");
Appearance1652.USE = "characters2013Appearance";
Shape1651.appearance = Appearance1652;

let IndexedFaceSet1653 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1653.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,10,-1,11,12,4,-1,14,2,13,-1,13,3,12,-1,4,5,10,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,10,6,9,-1]);
IndexedFaceSet1653.solid = False;
let Coordinate1654 = browser.currentScene.createNode("Coordinate");
Coordinate1654.point = new MFVec3f(new float[0.18458,-0.29618,0.07,0.18614,-0.2961,0.07,0.18769,-0.29588,0.07,0.18923,-0.29554,0.07,0.19075,-0.29507,0.07,0.19223,-0.2945,0.07,0.19368,-0.29382,0.07,0.19639,-0.29224,0.07,0.19639,-0.29224,0,0.19368,-0.29382,0,0.19223,-0.2945,0,0.19075,-0.29507,0,0.18923,-0.29554,0,0.18769,-0.29588,0,0.18614,-0.2961,0,0.18458,-0.29618,0]);
IndexedFaceSet1653.coord = Coordinate1654;

let Normal1655 = browser.currentScene.createNode("Normal");
Normal1655.vector = new MFVec3f(new float[0,1,0,-0.09439,0.99554,0,-0.18037,0.9836,0,-0.25818,0.9661,0,-0.32853,0.94449,0,-0.39234,0.91982,0,-0.45064,0.89271,0,-0.5547,0.83205,0,-0.5547,0.83205,0,-0.45064,0.89271,0,-0.39234,0.91982,0,-0.32853,0.94449,0,-0.25818,0.9661,0,-0.18037,0.9836,0,-0.09439,0.99554,0,0,1,0]);
IndexedFaceSet1653.normal = Normal1655;

Shape1651.geometry = IndexedFaceSet1653;

Transform5.children[328] = Shape1651;

let Shape1656 = browser.currentScene.createNode("Shape");
let Appearance1657 = browser.currentScene.createNode("Appearance");
Appearance1657.USE = "characters2013Appearance";
Shape1656.appearance = Appearance1657;

let IndexedFaceSet1658 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1658.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1]);
IndexedFaceSet1658.solid = False;
let Coordinate1659 = browser.currentScene.createNode("Coordinate");
Coordinate1659.point = new MFVec3f(new float[0.19639,-0.29224,0.07,0.1996,-0.2913,0.07,0.20274,-0.29005,0.07,0.20423,-0.28929,0.07,0.20565,-0.28842,0.07,0.20698,-0.28743,0.07,0.20821,-0.28633,0.07,0.20821,-0.28633,0,0.20698,-0.28743,0,0.20565,-0.28842,0,0.20423,-0.28929,0,0.20274,-0.29005,0,0.1996,-0.2913,0,0.19639,-0.29224,0]);
IndexedFaceSet1658.coord = Coordinate1659;

let Normal1660 = browser.currentScene.createNode("Normal");
Normal1660.vector = new MFVec3f(new float[-0.24253,0.97014,0,-0.32084,0.94713,0,-0.42529,0.90506,0,-0.48778,0.87296,0,-0.55663,0.83076,0,-0.63055,0.77615,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.63055,0.77615,0,-0.55663,0.83076,0,-0.48778,0.87296,0,-0.42529,0.90506,0,-0.32084,0.94713,0,-0.24253,0.97014,0]);
IndexedFaceSet1658.normal = Normal1660;

Shape1656.geometry = IndexedFaceSet1658;

Transform5.children[329] = Shape1656;

let Shape1661 = browser.currentScene.createNode("Shape");
let Appearance1662 = browser.currentScene.createNode("Appearance");
Appearance1662.USE = "characters2013Appearance";
Shape1661.appearance = Appearance1662;

let IndexedFaceSet1663 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1663.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,12,-1,13,14,4,-1,16,2,15,-1,15,3,14,-1,4,5,12,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1663.solid = False;
let Coordinate1664 = browser.currentScene.createNode("Coordinate");
Coordinate1664.point = new MFVec3f(new float[0.20821,-0.28633,0.07,0.20957,-0.28488,0.07,0.21084,-0.28332,0.07,0.212,-0.28168,0.07,0.21307,-0.27996,0.07,0.21401,-0.27818,0.07,0.21484,-0.27634,0.07,0.21553,-0.27446,0.07,0.21608,-0.27255,0.07,0.21608,-0.27255,0,0.21553,-0.27446,0,0.21484,-0.27634,0,0.21401,-0.27818,0,0.21307,-0.27996,0,0.212,-0.28168,0,0.21084,-0.28332,0,0.20957,-0.28488,0,0.20821,-0.28633,0]);
IndexedFaceSet1663.coord = Coordinate1664;

let Normal1665 = browser.currentScene.createNode("Normal");
Normal1665.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.7533,0.65768,0,-0.79509,0.60649,0,-0.83298,0.5533,0,-0.86731,0.49776,0,-0.89827,0.43945,0,-0.92587,0.37783,0,-0.94996,0.31238,0,-0.97014,0.24253,0,-0.97014,0.24253,0,-0.94996,0.31238,0,-0.92587,0.37783,0,-0.89827,0.43945,0,-0.86731,0.49776,0,-0.83298,0.5533,0,-0.79509,0.60649,0,-0.7533,0.65768,0,-0.70711,0.70711,0]);
IndexedFaceSet1663.normal = Normal1665;

Shape1661.geometry = IndexedFaceSet1663;

Transform5.children[330] = Shape1661;

let Shape1666 = browser.currentScene.createNode("Shape");
let Appearance1667 = browser.currentScene.createNode("Appearance");
Appearance1667.USE = "characters2013Appearance";
Shape1666.appearance = Appearance1667;

let IndexedFaceSet1668 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1668.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,12,-1,13,14,2,-1,2,3,12,-1,12,3,11,-1,11,3,4,-1,5,11,4,-1,5,10,11,-1,5,6,10,-1,10,6,9,-1,9,6,7,-1,8,9,7,-1]);
IndexedFaceSet1668.solid = False;
let Coordinate1669 = browser.currentScene.createNode("Coordinate");
Coordinate1669.point = new MFVec3f(new float[0.21608,-0.27255,0.07,0.21711,-0.2708,0.07,0.21796,-0.26895,0.07,0.21865,-0.26701,0.07,0.21918,-0.26502,0.07,0.21957,-0.26297,0.07,0.21983,-0.26091,0.07,0.22002,-0.2568,0.07,0.22002,-0.2568,0,0.21983,-0.26091,0,0.21957,-0.26297,0,0.21918,-0.26502,0,0.21865,-0.26701,0,0.21796,-0.26895,0,0.21711,-0.2708,0,0.21608,-0.27255,0]);
IndexedFaceSet1668.coord = Coordinate1669;

let Normal1670 = browser.currentScene.createNode("Normal");
Normal1670.vector = new MFVec3f(new float[-0.83205,0.5547,0,-0.88703,0.46172,0,-0.92748,0.37386,0,-0.95608,0.29311,0,-0.97545,0.22022,0,-0.9879,0.1551,0,-0.99526,0.0972,0,-1,0,0,-1,0,0,-0.99526,0.0972,0,-0.9879,0.1551,0,-0.97545,0.22022,0,-0.95608,0.29311,0,-0.92748,0.37386,0,-0.88703,0.46172,0,-0.83205,0.5547,0]);
IndexedFaceSet1668.normal = Normal1670;

Shape1666.geometry = IndexedFaceSet1668;

Transform5.children[331] = Shape1666;

let Shape1671 = browser.currentScene.createNode("Shape");
let Appearance1672 = browser.currentScene.createNode("Appearance");
Appearance1672.USE = "characters2013Appearance";
Shape1671.appearance = Appearance1672;

let IndexedFaceSet1673 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1673.coordIndex = new MFInt32(new int[9,0,8,-1,8,0,1,-1,7,1,2,-1,3,7,2,-1,3,6,7,-1,3,4,6,-1,6,4,5,-1,8,1,7,-1]);
IndexedFaceSet1673.solid = False;
let Coordinate1674 = browser.currentScene.createNode("Coordinate");
Coordinate1674.point = new MFVec3f(new float[0.22002,-0.2568,0.07,0.21989,-0.2538,0.07,0.21951,-0.25082,0.07,0.21889,-0.24787,0.07,0.21805,-0.24499,0.07,0.21805,-0.24499,0,0.21889,-0.24787,0,0.21951,-0.25082,0,0.21989,-0.2538,0,0.22002,-0.2568,0]);
IndexedFaceSet1673.coord = Coordinate1674;

let Normal1675 = browser.currentScene.createNode("Normal");
Normal1675.vector = new MFVec3f(new float[-1,0,0,-0.99632,-0.08575,0,-0.98605,-0.16647,0,-0.97003,-0.24298,0,-0.94868,-0.31623,0,-0.94868,-0.31623,0,-0.97003,-0.24298,0,-0.98605,-0.16647,0,-0.99632,-0.08575,0,-1,0,0]);
IndexedFaceSet1673.normal = Normal1675;

Shape1671.geometry = IndexedFaceSet1673;

Transform5.children[332] = Shape1671;

let Shape1676 = browser.currentScene.createNode("Shape");
let Appearance1677 = browser.currentScene.createNode("Appearance");
Appearance1677.USE = "characters2013Appearance";
Shape1676.appearance = Appearance1677;

let IndexedFaceSet1678 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1678.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1678.solid = False;
let Coordinate1679 = browser.currentScene.createNode("Coordinate");
Coordinate1679.point = new MFVec3f(new float[0.21805,-0.24499,0.07,0.21688,-0.24189,0.07,0.21549,-0.23889,0.07,0.21214,-0.23317,0.07,0.21214,-0.23317,0,0.21549,-0.23889,0,0.21688,-0.24189,0,0.21805,-0.24499,0]);
IndexedFaceSet1678.coord = Coordinate1679;

let Normal1680 = browser.currentScene.createNode("Normal");
Normal1680.vector = new MFVec3f(new float[-0.94868,-0.31623,0,-0.92164,-0.38803,0,-0.89248,-0.45108,0,-0.83205,-0.5547,0,-0.83205,-0.5547,0,-0.89248,-0.45108,0,-0.92164,-0.38803,0,-0.94868,-0.31623,0]);
IndexedFaceSet1678.normal = Normal1680;

Shape1676.geometry = IndexedFaceSet1678;

Transform5.children[333] = Shape1676;

let Shape1681 = browser.currentScene.createNode("Shape");
let Appearance1682 = browser.currentScene.createNode("Appearance");
Appearance1682.USE = "characters2013Appearance";
Shape1681.appearance = Appearance1682;

let IndexedFaceSet1683 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1683.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1683.solid = False;
let Coordinate1684 = browser.currentScene.createNode("Coordinate");
Coordinate1684.point = new MFVec3f(new float[0.21214,-0.23317,0.07,0.21151,-0.23212,0.07,0.21073,-0.23116,0.07,0.20983,-0.23029,0.07,0.20882,-0.22951,0.07,0.20774,-0.22882,0.07,0.20661,-0.22822,0.07,0.20544,-0.2277,0.07,0.20427,-0.22727,0.07,0.20427,-0.22727,0,0.20544,-0.2277,0,0.20661,-0.22822,0,0.20774,-0.22882,0,0.20882,-0.22951,0,0.20983,-0.23029,0,0.21073,-0.23116,0,0.21151,-0.23212,0,0.21214,-0.23317,0]);
IndexedFaceSet1683.coord = Coordinate1684;

let Normal1685 = browser.currentScene.createNode("Normal");
Normal1685.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.81744,-0.57601,0,-0.73445,-0.67867,0,-0.65224,-0.75801,0,-0.57451,-0.8185,0,-0.50255,-0.86455,0,-0.43622,-0.89984,0,-0.37459,-0.92719,0,-0.31623,-0.94868,0,-0.31623,-0.94868,0,-0.37459,-0.92719,0,-0.43622,-0.89984,0,-0.50255,-0.86455,0,-0.57451,-0.8185,0,-0.65224,-0.75801,0,-0.73445,-0.67867,0,-0.81744,-0.57601,0,-0.89443,-0.44721,0]);
IndexedFaceSet1683.normal = Normal1685;

Shape1681.geometry = IndexedFaceSet1683;

Transform5.children[334] = Shape1681;

let Shape1686 = browser.currentScene.createNode("Shape");
let Appearance1687 = browser.currentScene.createNode("Appearance");
Appearance1687.USE = "characters2013Appearance";
Shape1686.appearance = Appearance1687;

let IndexedFaceSet1688 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1688.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,11,-1,12,13,3,-1,14,2,13,-1,3,4,11,-1,11,4,5,-1,10,5,9,-1,10,11,5,-1,5,6,9,-1,9,6,7,-1,8,9,7,-1]);
IndexedFaceSet1688.solid = False;
let Coordinate1689 = browser.currentScene.createNode("Coordinate");
Coordinate1689.point = new MFVec3f(new float[0.20427,-0.22727,0.07,0.20252,-0.22624,0.07,0.20067,-0.22539,0.07,0.19873,-0.2247,0.07,0.19674,-0.22417,0.07,0.19469,-0.22379,0.07,0.19263,-0.22352,0.07,0.18852,-0.22333,0.07,0.18852,-0.22333,0,0.19263,-0.22352,0,0.19469,-0.22379,0,0.19674,-0.22417,0,0.19873,-0.2247,0,0.20067,-0.22539,0,0.20252,-0.22624,0,0.20427,-0.22727,0]);
IndexedFaceSet1688.coord = Coordinate1689;

let Normal1690 = browser.currentScene.createNode("Normal");
Normal1690.vector = new MFVec3f(new float[-0.5547,-0.83205,0,-0.46172,-0.88703,0,-0.37386,-0.92748,0,-0.29311,-0.95608,0,-0.22022,-0.97545,0,-0.15509,-0.9879,0,-0.0972,-0.99526,0,0,-1,0,0,-1,0,-0.0972,-0.99526,0,-0.15509,-0.9879,0,-0.22022,-0.97545,0,-0.29311,-0.95608,0,-0.37386,-0.92748,0,-0.46172,-0.88703,0,-0.5547,-0.83205,0]);
IndexedFaceSet1688.normal = Normal1690;

Shape1686.geometry = IndexedFaceSet1688;

Transform5.children[335] = Shape1686;

let Shape1691 = browser.currentScene.createNode("Shape");
let Appearance1692 = browser.currentScene.createNode("Appearance");
Appearance1692.USE = "characters2013Appearance";
Shape1691.appearance = Appearance1692;

let IndexedFaceSet1693 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1693.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1693.solid = False;
let Coordinate1694 = browser.currentScene.createNode("Coordinate");
Coordinate1694.point = new MFVec3f(new float[0.18852,-0.22333,0.07,0.17474,-0.22333,0.07,0.17474,-0.22333,0,0.18852,-0.22333,0]);
IndexedFaceSet1693.coord = Coordinate1694;

let Normal1695 = browser.currentScene.createNode("Normal");
Normal1695.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1693.normal = Normal1695;

Shape1691.geometry = IndexedFaceSet1693;

Transform5.children[336] = Shape1691;

let Shape1696 = browser.currentScene.createNode("Shape");
let Appearance1697 = browser.currentScene.createNode("Appearance");
Appearance1697.USE = "characters2013Appearance";
Shape1696.appearance = Appearance1697;

let IndexedFaceSet1698 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1698.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1698.solid = False;
let Coordinate1699 = browser.currentScene.createNode("Coordinate");
Coordinate1699.point = new MFVec3f(new float[0.17474,-0.22333,0.07,0.17474,-0.20955,0.07,0.17474,-0.20955,0,0.17474,-0.22333,0]);
IndexedFaceSet1698.coord = Coordinate1699;

let Normal1700 = browser.currentScene.createNode("Normal");
Normal1700.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1698.normal = Normal1700;

Shape1696.geometry = IndexedFaceSet1698;

Transform5.children[337] = Shape1696;

let Shape1701 = browser.currentScene.createNode("Shape");
let Appearance1702 = browser.currentScene.createNode("Appearance");
Appearance1702.USE = "characters2013Appearance";
Shape1701.appearance = Appearance1702;

let IndexedFaceSet1703 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1703.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1703.solid = False;
let Coordinate1704 = browser.currentScene.createNode("Coordinate");
Coordinate1704.point = new MFVec3f(new float[0.17474,-0.20955,0.07,0.18458,-0.20955,0.07,0.18458,-0.20955,0,0.17474,-0.20955,0]);
IndexedFaceSet1703.coord = Coordinate1704;

let Normal1705 = browser.currentScene.createNode("Normal");
Normal1705.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1703.normal = Normal1705;

Shape1701.geometry = IndexedFaceSet1703;

Transform5.children[338] = Shape1701;

let Shape1706 = browser.currentScene.createNode("Shape");
let Appearance1707 = browser.currentScene.createNode("Appearance");
Appearance1707.USE = "characters2013Appearance";
Shape1706.appearance = Appearance1707;

let IndexedFaceSet1708 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1708.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,10,-1,11,12,8,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,8,9,10,-1]);
IndexedFaceSet1708.solid = False;
let Coordinate1709 = browser.currentScene.createNode("Coordinate");
Coordinate1709.point = new MFVec3f(new float[0.18458,-0.20955,0.07,0.1875,-0.20943,0.07,0.19044,-0.20908,0.07,0.19338,-0.20849,0.07,0.19625,-0.20765,0.07,0.19902,-0.20655,0.07,0.20164,-0.2052,0.07,0.20406,-0.20357,0.07,0.20518,-0.20266,0.07,0.20624,-0.20167,0.07,0.20624,-0.20167,0,0.20518,-0.20266,0,0.20406,-0.20357,0,0.20164,-0.2052,0,0.19902,-0.20655,0,0.19625,-0.20765,0,0.19338,-0.20849,0,0.19044,-0.20908,0,0.1875,-0.20943,0,0.18458,-0.20955,0]);
IndexedFaceSet1708.coord = Coordinate1709;

let Normal1710 = browser.currentScene.createNode("Normal");
Normal1710.vector = new MFVec3f(new float[0,1,0,-0.07881,0.99689,0,-0.15769,0.98749,0,-0.23864,0.97111,0,-0.32332,0.94629,0,-0.41289,0.91078,0,-0.50772,0.86152,0,-0.6068,0.79485,0,-0.65709,0.75381,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.65709,0.75381,0,-0.6068,0.79485,0,-0.50772,0.86152,0,-0.41289,0.91078,0,-0.32332,0.94629,0,-0.23864,0.97111,0,-0.15769,0.98749,0,-0.07881,0.99689,0,0,1,0]);
IndexedFaceSet1708.normal = Normal1710;

Shape1706.geometry = IndexedFaceSet1708;

Transform5.children[339] = Shape1706;

let Shape1711 = browser.currentScene.createNode("Shape");
let Appearance1712 = browser.currentScene.createNode("Appearance");
Appearance1712.USE = "characters2013Appearance";
Shape1711.appearance = Appearance1712;

let IndexedFaceSet1713 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1713.coordIndex = new MFInt32(new int[0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1]);
IndexedFaceSet1713.solid = False;
let Coordinate1714 = browser.currentScene.createNode("Coordinate");
Coordinate1714.point = new MFVec3f(new float[0.20624,-0.20167,0.07,0.20737,-0.20045,0.07,0.20839,-0.19913,0.07,0.20931,-0.19773,0.07,0.21013,-0.19627,0.07,0.2115,-0.19316,0.07,0.21254,-0.18986,0.07,0.21329,-0.18644,0.07,0.21377,-0.18296,0.07,0.21411,-0.17608,0.07,0.21411,-0.17608,0,0.21377,-0.18296,0,0.21329,-0.18644,0,0.21254,-0.18986,0,0.2115,-0.19316,0,0.21013,-0.19627,0,0.20931,-0.19773,0,0.20839,-0.19913,0,0.20737,-0.20045,0,0.20624,-0.20167,0]);
IndexedFaceSet1713.coord = Coordinate1714;

let Normal1715 = browser.currentScene.createNode("Normal");
Normal1715.vector = new MFVec3f(new float[-0.70711,0.70711,0,-0.76448,0.64464,0,-0.81347,0.5816,0,-0.85444,0.51955,0,-0.88809,0.45968,0,-0.93695,0.34946,0,-0.96722,0.25394,0,-0.98493,0.17294,0,-0.99448,0.10489,0,-1,0,0,-1,0,0,-0.99448,0.10489,0,-0.98493,0.17294,0,-0.96722,0.25394,0,-0.93695,0.34946,0,-0.88809,0.45968,0,-0.85444,0.51955,0,-0.81347,0.5816,0,-0.76448,0.64464,0,-0.70711,0.70711,0]);
IndexedFaceSet1713.normal = Normal1715;

Shape1711.geometry = IndexedFaceSet1713;

Transform5.children[340] = Shape1711;

let Shape1716 = browser.currentScene.createNode("Shape");
let Appearance1717 = browser.currentScene.createNode("Appearance");
Appearance1717.USE = "characters2013Appearance";
Shape1716.appearance = Appearance1717;

let IndexedFaceSet1718 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1718.coordIndex = new MFInt32(new int[19,0,18,-1,18,0,1,-1,17,1,2,-1,16,2,3,-1,15,3,4,-1,14,4,5,-1,6,14,5,-1,6,13,14,-1,6,12,13,-1,6,7,12,-1,12,7,11,-1,11,7,8,-1,10,8,9,-1,10,11,8,-1,18,1,17,-1,17,2,16,-1,16,3,15,-1,15,4,14,-1]);
IndexedFaceSet1718.solid = False;
let Coordinate1719 = browser.currentScene.createNode("Coordinate");
Coordinate1719.point = new MFVec3f(new float[0.21411,-0.17608,0.07,0.214,-0.17317,0.07,0.21365,-0.17022,0.07,0.21305,-0.16729,0.07,0.21221,-0.16441,0.07,0.21112,-0.16164,0.07,0.20976,-0.15902,0.07,0.20814,-0.1566,0.07,0.20722,-0.15548,0.07,0.20624,-0.15442,0.07,0.20624,-0.15442,0,0.20722,-0.15548,0,0.20814,-0.1566,0,0.20976,-0.15902,0,0.21112,-0.16164,0,0.21221,-0.16441,0,0.21305,-0.16729,0,0.21365,-0.17022,0,0.214,-0.17317,0,0.21411,-0.17608,0]);
IndexedFaceSet1718.coord = Coordinate1719;

let Normal1720 = browser.currentScene.createNode("Normal");
Normal1720.vector = new MFVec3f(new float[-1,0,0,-0.99689,-0.07881,0,-0.98749,-0.15769,0,-0.97111,-0.23864,0,-0.94629,-0.32332,0,-0.91078,-0.41289,0,-0.86152,-0.50772,0,-0.79485,-0.6068,0,-0.75381,-0.65709,0,-0.70711,-0.70711,0,-0.70711,-0.70711,0,-0.75381,-0.65709,0,-0.79485,-0.6068,0,-0.86152,-0.50772,0,-0.91078,-0.41289,0,-0.94629,-0.32332,0,-0.97111,-0.23864,0,-0.98749,-0.15769,0,-0.99689,-0.07881,0,-1,0,0]);
IndexedFaceSet1718.normal = Normal1720;

Shape1716.geometry = IndexedFaceSet1718;

Transform5.children[341] = Shape1716;

let Shape1721 = browser.currentScene.createNode("Shape");
let Appearance1722 = browser.currentScene.createNode("Appearance");
Appearance1722.USE = "characters2013Appearance";
Shape1721.appearance = Appearance1722;

let IndexedFaceSet1723 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1723.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,18,-1,19,20,4,-1,22,2,21,-1,21,3,20,-1,4,5,18,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet1723.solid = False;
let Coordinate1724 = browser.currentScene.createNode("Coordinate");
Coordinate1724.point = new MFVec3f(new float[0.20624,-0.15442,0.07,0.2054,-0.1534,0.07,0.20446,-0.15246,0.07,0.20345,-0.1516,0.07,0.20237,-0.15081,0.07,0.20122,-0.15009,0.07,0.20001,-0.14945,0.07,0.19746,-0.14837,0.07,0.19477,-0.14755,0.07,0.19201,-0.14699,0.07,0.18925,-0.14666,0.07,0.18655,-0.14655,0.07,0.18655,-0.14655,0,0.18925,-0.14666,0,0.19201,-0.14699,0,0.19477,-0.14755,0,0.19746,-0.14837,0,0.20001,-0.14945,0,0.20122,-0.15009,0,0.20237,-0.15081,0,0.20345,-0.1516,0,0.20446,-0.15246,0,0.2054,-0.1534,0,0.20624,-0.15442,0]);
IndexedFaceSet1723.coord = Coordinate1724;

let Normal1725 = browser.currentScene.createNode("Normal");
Normal1725.vector = new MFVec3f(new float[-0.8,-0.6,0,-0.74119,-0.6713,0,-0.68011,-0.73311,0,-0.61857,-0.78573,0,-0.55796,-0.82987,0,-0.49922,-0.86648,0,-0.44292,-0.89656,0,-0.33848,-0.94098,0,-0.2444,-0.96968,0,-0.15863,-0.98734,0,-0.07829,-0.99693,0,0,-1,0,0,-1,0,-0.07829,-0.99693,0,-0.15863,-0.98734,0,-0.2444,-0.96968,0,-0.33848,-0.94098,0,-0.44292,-0.89656,0,-0.49922,-0.86648,0,-0.55796,-0.82987,0,-0.61857,-0.78573,0,-0.68011,-0.73311,0,-0.74119,-0.6713,0,-0.8,-0.6,0]);
IndexedFaceSet1723.normal = Normal1725;

Shape1721.geometry = IndexedFaceSet1723;

Transform5.children[342] = Shape1721;

let Shape1726 = browser.currentScene.createNode("Shape");
let Appearance1727 = browser.currentScene.createNode("Appearance");
Appearance1727.USE = "characters2013Appearance";
Shape1726.appearance = Appearance1727;

let IndexedFaceSet1728 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1728.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,7,-1,8,9,5,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,5,6,7,-1]);
IndexedFaceSet1728.solid = False;
let Coordinate1729 = browser.currentScene.createNode("Coordinate");
Coordinate1729.point = new MFVec3f(new float[0.18655,-0.14655,0.07,0.18402,-0.14665,0.07,0.1815,-0.14697,0.07,0.18025,-0.14724,0.07,0.17904,-0.14758,0.07,0.17785,-0.148,0.07,0.17671,-0.14852,0.07,0.17671,-0.14852,0,0.17785,-0.148,0,0.17904,-0.14758,0,0.18025,-0.14724,0,0.1815,-0.14697,0,0.18402,-0.14665,0,0.18655,-0.14655,0]);
IndexedFaceSet1728.coord = Coordinate1729;

let Normal1730 = browser.currentScene.createNode("Normal");
Normal1730.vector = new MFVec3f(new float[0,-1,0,0.07973,-0.99682,0,0.17989,-0.98369,0,0.23845,-0.97116,0,0.3028,-0.95305,0,0.37265,-0.92797,0,0.44721,-0.89443,0,0.44721,-0.89443,0,0.37265,-0.92797,0,0.3028,-0.95305,0,0.23845,-0.97116,0,0.17989,-0.98369,0,0.07973,-0.99682,0,0,-1,0]);
IndexedFaceSet1728.normal = Normal1730;

Shape1726.geometry = IndexedFaceSet1728;

Transform5.children[343] = Shape1726;

let Shape1731 = browser.currentScene.createNode("Shape");
let Appearance1732 = browser.currentScene.createNode("Appearance");
Appearance1732.USE = "characters2013Appearance";
Shape1731.appearance = Appearance1732;

let IndexedFaceSet1733 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1733.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1733.solid = False;
let Coordinate1734 = browser.currentScene.createNode("Coordinate");
Coordinate1734.point = new MFVec3f(new float[0.17671,-0.14852,0.07,0.17359,-0.15026,0.07,0.17213,-0.15128,0.07,0.1708,-0.15246,0.07,0.1708,-0.15246,0,0.17213,-0.15128,0,0.17359,-0.15026,0,0.17671,-0.14852,0]);
IndexedFaceSet1733.coord = Coordinate1734;

let Normal1735 = browser.currentScene.createNode("Normal");
Normal1735.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.53972,-0.84184,0,0.61587,-0.78785,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.61587,-0.78785,0,0.53972,-0.84184,0,0.44721,-0.89443,0]);
IndexedFaceSet1733.normal = Normal1735;

Shape1731.geometry = IndexedFaceSet1733;

Transform5.children[344] = Shape1731;

let Shape1736 = browser.currentScene.createNode("Shape");
let Appearance1737 = browser.currentScene.createNode("Appearance");
Appearance1737.USE = "characters2013Appearance";
Shape1736.appearance = Appearance1737;

let IndexedFaceSet1738 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1738.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1738.solid = False;
let Coordinate1739 = browser.currentScene.createNode("Coordinate");
Coordinate1739.point = new MFVec3f(new float[0.1708,-0.15246,0.07,0.16768,-0.15419,0.07,0.16623,-0.15522,0.07,0.16489,-0.15639,0.07,0.16489,-0.15639,0,0.16623,-0.15522,0,0.16768,-0.15419,0,0.1708,-0.15246,0]);
IndexedFaceSet1738.coord = Coordinate1739;

let Normal1740 = browser.currentScene.createNode("Normal");
Normal1740.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.53972,-0.84184,0,0.61586,-0.78785,0,0.7071,-0.70711,0,0.7071,-0.70711,0,0.61586,-0.78785,0,0.53972,-0.84184,0,0.44721,-0.89443,0]);
IndexedFaceSet1738.normal = Normal1740;

Shape1736.geometry = IndexedFaceSet1738;

Transform5.children[345] = Shape1736;

let Shape1741 = browser.currentScene.createNode("Shape");
let Appearance1742 = browser.currentScene.createNode("Appearance");
Appearance1742.USE = "characters2013Appearance";
Shape1741.appearance = Appearance1742;

let IndexedFaceSet1743 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1743.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1743.solid = False;
let Coordinate1744 = browser.currentScene.createNode("Coordinate");
Coordinate1744.point = new MFVec3f(new float[0.16489,-0.15639,0.07,0.16391,-0.15738,0.07,0.16293,-0.15836,0.07,0.16293,-0.15836,0,0.16391,-0.15738,0,0.16489,-0.15639,0]);
IndexedFaceSet1743.coord = Coordinate1744;

let Normal1745 = browser.currentScene.createNode("Normal");
Normal1745.vector = new MFVec3f(new float[0.70711,-0.7071,0,0.70711,-0.7071,0,0.70711,-0.7071,0,0.70711,-0.7071,0,0.70711,-0.7071,0,0.70711,-0.7071,0]);
IndexedFaceSet1743.normal = Normal1745;

Shape1741.geometry = IndexedFaceSet1743;

Transform5.children[346] = Shape1741;

let Shape1746 = browser.currentScene.createNode("Shape");
let Appearance1747 = browser.currentScene.createNode("Appearance");
Appearance1747.USE = "characters2013Appearance";
Shape1746.appearance = Appearance1747;

let IndexedFaceSet1748 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1748.coordIndex = new MFInt32(new int[7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1]);
IndexedFaceSet1748.solid = False;
let Coordinate1749 = browser.currentScene.createNode("Coordinate");
Coordinate1749.point = new MFVec3f(new float[0.16293,-0.15836,0.07,0.16308,-0.16087,0.07,0.16351,-0.16335,0.07,0.16489,-0.16821,0.07,0.16489,-0.16821,0,0.16351,-0.16335,0,0.16308,-0.16087,0,0.16293,-0.15836,0]);
IndexedFaceSet1748.coord = Coordinate1749;

let Normal1750 = browser.currentScene.createNode("Normal");
Normal1750.vector = new MFVec3f(new float[1,0,0,0.99258,0.12161,0,0.97691,0.21363,0,0.94868,0.31623,0,0.94868,0.31623,0,0.97691,0.21363,0,0.99258,0.12161,0,1,0,0]);
IndexedFaceSet1748.normal = Normal1750;

Shape1746.geometry = IndexedFaceSet1748;

Transform5.children[347] = Shape1746;

let Shape1751 = browser.currentScene.createNode("Shape");
let Appearance1752 = browser.currentScene.createNode("Appearance");
Appearance1752.USE = "characters2013Appearance";
Shape1751.appearance = Appearance1752;

let IndexedFaceSet1753 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1753.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1753.solid = False;
let Coordinate1754 = browser.currentScene.createNode("Coordinate");
Coordinate1754.point = new MFVec3f(new float[0.16489,-0.16821,0.07,0.16541,-0.16935,0.07,0.16583,-0.17054,0.07,0.16618,-0.17175,0.07,0.16644,-0.173,0.07,0.16677,-0.17552,0.07,0.16686,-0.17805,0.07,0.16686,-0.17805,0,0.16677,-0.17552,0,0.16644,-0.173,0,0.16618,-0.17175,0,0.16583,-0.17054,0,0.16541,-0.16935,0,0.16489,-0.16821,0]);
IndexedFaceSet1753.coord = Coordinate1754;

let Normal1755 = browser.currentScene.createNode("Normal");
Normal1755.vector = new MFVec3f(new float[0.89443,0.44721,0,0.92797,0.37265,0,0.95305,0.3028,0,0.97116,0.23845,0,0.98369,0.17989,0,0.99682,0.07973,0,1,0,0,1,0,0,0.99682,0.07973,0,0.98369,0.17989,0,0.97116,0.23845,0,0.95305,0.3028,0,0.92797,0.37265,0,0.89443,0.44721,0]);
IndexedFaceSet1753.normal = Normal1755;

Shape1751.geometry = IndexedFaceSet1753;

Transform5.children[348] = Shape1751;

let Shape1756 = browser.currentScene.createNode("Shape");
let Appearance1757 = browser.currentScene.createNode("Appearance");
Appearance1757.USE = "characters2013Appearance";
Shape1756.appearance = Appearance1757;

let IndexedFaceSet1758 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1758.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1758.solid = False;
let Coordinate1759 = browser.currentScene.createNode("Coordinate");
Coordinate1759.point = new MFVec3f(new float[0.16686,-0.17805,0.07,0.16678,-0.17915,0.07,0.16654,-0.18023,0.07,0.16616,-0.18128,0.07,0.16567,-0.18231,0.07,0.16508,-0.1833,0.07,0.16442,-0.18423,0.07,0.16369,-0.18511,0.07,0.16293,-0.18592,0.07,0.16293,-0.18592,0,0.16369,-0.18511,0,0.16442,-0.18423,0,0.16508,-0.1833,0,0.16567,-0.18231,0,0.16616,-0.18128,0,0.16654,-0.18023,0,0.16678,-0.17915,0,0.16686,-0.17805,0]);
IndexedFaceSet1758.coord = Coordinate1759;

let Normal1760 = browser.currentScene.createNode("Normal");
Normal1760.vector = new MFVec3f(new float[1,0,0,0.98874,-0.14963,0,0.96042,-0.27856,0,0.92238,-0.38629,0,0.8799,-0.47516,0,0.83613,-0.54853,0,0.79259,-0.60975,0,0.7497,-0.66178,0,0.70711,-0.70711,0,0.70711,-0.70711,0,0.7497,-0.66178,0,0.79259,-0.60975,0,0.83613,-0.54853,0,0.8799,-0.47516,0,0.92238,-0.38629,0,0.96042,-0.27856,0,0.98874,-0.14963,0,1,0,0]);
IndexedFaceSet1758.normal = Normal1760;

Shape1756.geometry = IndexedFaceSet1758;

Transform5.children[349] = Shape1756;

let Shape1761 = browser.currentScene.createNode("Shape");
let Appearance1762 = browser.currentScene.createNode("Appearance");
Appearance1762.USE = "characters2013Appearance";
Shape1761.appearance = Appearance1762;

let IndexedFaceSet1763 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1763.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1763.solid = False;
let Coordinate1764 = browser.currentScene.createNode("Coordinate");
Coordinate1764.point = new MFVec3f(new float[0.16293,-0.18592,0.07,0.16156,-0.18652,0.07,0.16014,-0.18699,0.07,0.15867,-0.18733,0.07,0.15718,-0.18758,0.07,0.15414,-0.18784,0.07,0.15111,-0.18789,0.07,0.15111,-0.18789,0,0.15414,-0.18784,0,0.15718,-0.18758,0,0.15867,-0.18733,0,0.16014,-0.18699,0,0.16156,-0.18652,0,0.16293,-0.18592,0]);
IndexedFaceSet1763.coord = Coordinate1764;

let Normal1765 = browser.currentScene.createNode("Normal");
Normal1765.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.35328,-0.93552,0,0.26836,-0.96332,0,0.19461,-0.98088,0,0.13281,-0.99114,0,0.04437,-0.99902,0,0,-1,0,0,-1,0,0.04437,-0.99902,0,0.13281,-0.99114,0,0.19461,-0.98088,0,0.26836,-0.96332,0,0.35328,-0.93552,0,0.44721,-0.89443,0]);
IndexedFaceSet1763.normal = Normal1765;

Shape1761.geometry = IndexedFaceSet1763;

Transform5.children[350] = Shape1761;

let Shape1766 = browser.currentScene.createNode("Shape");
let Appearance1767 = browser.currentScene.createNode("Appearance");
Appearance1767.USE = "characters2013Appearance";
Shape1766.appearance = Appearance1767;

let IndexedFaceSet1768 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1768.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1768.solid = False;
let Coordinate1769 = browser.currentScene.createNode("Coordinate");
Coordinate1769.point = new MFVec3f(new float[0.15111,-0.18789,0.07,0.14999,-0.18783,0.07,0.14883,-0.18765,0.07,0.14768,-0.18734,0.07,0.14657,-0.18691,0.07,0.14553,-0.18636,0.07,0.14461,-0.18568,0.07,0.14383,-0.18488,0.07,0.14324,-0.18396,0.07,0.14324,-0.18396,0,0.14383,-0.18488,0,0.14461,-0.18568,0,0.14553,-0.18636,0,0.14657,-0.18691,0,0.14768,-0.18734,0,0.14883,-0.18765,0,0.14999,-0.18783,0,0.15111,-0.18789,0]);
IndexedFaceSet1768.coord = Coordinate1769;

let Normal1770 = browser.currentScene.createNode("Normal");
Normal1770.vector = new MFVec3f(new float[0,-1,0,-0.10658,-0.9943,0,-0.20754,-0.97823,0,-0.30884,-0.95111,0,-0.41521,-0.90972,0,-0.52987,-0.84808,0,-0.65321,-0.75717,0,-0.77974,-0.6261,0,-0.89443,-0.44721,0,-0.89443,-0.44721,0,-0.77974,-0.6261,0,-0.65321,-0.75717,0,-0.52987,-0.84808,0,-0.41521,-0.90972,0,-0.30884,-0.95111,0,-0.20754,-0.97823,0,-0.10658,-0.9943,0,0,-1,0]);
IndexedFaceSet1768.normal = Normal1770;

Shape1766.geometry = IndexedFaceSet1768;

Transform5.children[351] = Shape1766;

let Shape1771 = browser.currentScene.createNode("Shape");
let Appearance1772 = browser.currentScene.createNode("Appearance");
Appearance1772.USE = "characters2013Appearance";
Shape1771.appearance = Appearance1772;

let IndexedFaceSet1773 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1773.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1773.solid = False;
let Coordinate1774 = browser.currentScene.createNode("Coordinate");
Coordinate1774.point = new MFVec3f(new float[0.14324,-0.18396,0.07,0.14272,-0.18281,0.07,0.1423,-0.18163,0.07,0.14196,-0.18041,0.07,0.14169,-0.17917,0.07,0.14137,-0.17664,0.07,0.14127,-0.17411,0.07,0.14127,-0.17411,0,0.14137,-0.17664,0,0.14169,-0.17917,0,0.14196,-0.18041,0,0.1423,-0.18163,0,0.14272,-0.18281,0,0.14324,-0.18396,0]);
IndexedFaceSet1773.coord = Coordinate1774;

let Normal1775 = browser.currentScene.createNode("Normal");
Normal1775.vector = new MFVec3f(new float[-0.89443,-0.44721,0,-0.92797,-0.37265,0,-0.95305,-0.3028,0,-0.97116,-0.23845,0,-0.98369,-0.17989,0,-0.99682,-0.07973,0,-1,0,0,-1,0,0,-0.99682,-0.07973,0,-0.98369,-0.17989,0,-0.97116,-0.23845,0,-0.95305,-0.3028,0,-0.92797,-0.37265,0,-0.89443,-0.44721,0]);
IndexedFaceSet1773.normal = Normal1775;

Shape1771.geometry = IndexedFaceSet1773;

Transform5.children[352] = Shape1771;

let Shape1776 = browser.currentScene.createNode("Shape");
let Appearance1777 = browser.currentScene.createNode("Appearance");
Appearance1777.USE = "characters2013Appearance";
Shape1776.appearance = Appearance1777;

let IndexedFaceSet1778 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1778.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1778.solid = False;
let Coordinate1779 = browser.currentScene.createNode("Coordinate");
Coordinate1779.point = new MFVec3f(new float[0.14127,-0.17411,0.07,0.1414,-0.17112,0.07,0.14178,-0.16813,0.07,0.1424,-0.16518,0.07,0.14324,-0.1623,0.07,0.14324,-0.1623,0,0.1424,-0.16518,0,0.14178,-0.16813,0,0.1414,-0.17112,0,0.14127,-0.17411,0]);
IndexedFaceSet1778.coord = Coordinate1779;

let Normal1780 = browser.currentScene.createNode("Normal");
Normal1780.vector = new MFVec3f(new float[-1,0,0,-0.99632,0.08575,0,-0.98605,0.16647,0,-0.97003,0.24298,0,-0.94868,0.31623,0,-0.94868,0.31623,0,-0.97003,0.24298,0,-0.98605,0.16647,0,-0.99632,0.08575,0,-1,0,0]);
IndexedFaceSet1778.normal = Normal1780;

Shape1776.geometry = IndexedFaceSet1778;

Transform5.children[353] = Shape1776;

let Shape1781 = browser.currentScene.createNode("Shape");
let Appearance1782 = browser.currentScene.createNode("Appearance");
Appearance1782.USE = "characters2013Appearance";
Shape1781.appearance = Appearance1782;

let IndexedFaceSet1783 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1783.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1783.solid = False;
let Coordinate1784 = browser.currentScene.createNode("Coordinate");
Coordinate1784.point = new MFVec3f(new float[0.14324,-0.1623,0.07,0.14787,-0.15615,0.07,0.15308,-0.15049,0.07,0.15308,-0.15049,0,0.14787,-0.15615,0,0.14324,-0.1623,0]);
IndexedFaceSet1783.coord = Coordinate1784;

let Normal1785 = browser.currentScene.createNode("Normal");
Normal1785.vector = new MFVec3f(new float[-0.83205,0.5547,0,-0.76566,0.64324,0,-0.70711,0.70711,0,-0.70711,0.70711,0,-0.76566,0.64324,0,-0.83205,0.5547,0]);
IndexedFaceSet1783.normal = Normal1785;

Shape1781.geometry = IndexedFaceSet1783;

Transform5.children[354] = Shape1781;

let Shape1786 = browser.currentScene.createNode("Shape");
let Appearance1787 = browser.currentScene.createNode("Appearance");
Appearance1787.USE = "characters2013Appearance";
Shape1786.appearance = Appearance1787;

let IndexedFaceSet1788 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1788.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1788.solid = False;
let Coordinate1789 = browser.currentScene.createNode("Coordinate");
Coordinate1789.point = new MFVec3f(new float[0.15308,-0.15049,0.07,0.16074,-0.14521,0.07,0.16883,-0.14064,0.07,0.16883,-0.14064,0,0.16074,-0.14521,0,0.15308,-0.15049,0]);
IndexedFaceSet1788.coord = Coordinate1789;

let Normal1790 = browser.currentScene.createNode("Normal");
Normal1790.vector = new MFVec3f(new float[-0.6,0.8,0,-0.53212,0.84667,0,-0.44721,0.89443,0,-0.44721,0.89443,0,-0.53212,0.84667,0,-0.6,0.8,0]);
IndexedFaceSet1788.normal = Normal1790;

Shape1786.geometry = IndexedFaceSet1788;

Transform5.children[355] = Shape1786;

let Shape1791 = browser.currentScene.createNode("Shape");
let Appearance1792 = browser.currentScene.createNode("Appearance");
Appearance1792.USE = "characters2013Appearance";
Shape1791.appearance = Appearance1792;

let IndexedFaceSet1793 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1793.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1793.solid = False;
let Coordinate1794 = browser.currentScene.createNode("Coordinate");
Coordinate1794.point = new MFVec3f(new float[0.16883,-0.14064,0.07,0.17165,-0.13962,0.07,0.17453,-0.13878,0.07,0.18043,-0.13756,0.07,0.18644,-0.1369,0.07,0.19246,-0.13671,0.07,0.19246,-0.13671,0,0.18644,-0.1369,0,0.18043,-0.13756,0,0.17453,-0.13878,0,0.17165,-0.13962,0,0.16883,-0.14064,0]);
IndexedFaceSet1793.coord = Coordinate1794;

let Normal1795 = browser.currentScene.createNode("Normal");
Normal1795.vector = new MFVec3f(new float[-0.37139,0.92848,0,-0.31054,0.95056,0,-0.25355,0.96732,0,-0.15234,0.98833,0,-0.06825,0.99767,0,0,1,0,0,1,0,-0.06825,0.99767,0,-0.15234,0.98833,0,-0.25355,0.96732,0,-0.31054,0.95056,0,-0.37139,0.92848,0]);
IndexedFaceSet1793.normal = Normal1795;

Shape1791.geometry = IndexedFaceSet1793;

Transform5.children[356] = Shape1791;

let Shape1796 = browser.currentScene.createNode("Shape");
let Appearance1797 = browser.currentScene.createNode("Appearance");
Appearance1797.USE = "characters2013Appearance";
Shape1796.appearance = Appearance1797;

let IndexedFaceSet1798 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1798.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1798.solid = False;
let Coordinate1799 = browser.currentScene.createNode("Coordinate");
Coordinate1799.point = new MFVec3f(new float[0.19246,-0.13671,0.07,0.19816,-0.137,0.07,0.20102,-0.13739,0.07,0.20385,-0.13798,0.07,0.2066,-0.13877,0.07,0.20926,-0.1398,0.07,0.21177,-0.14107,0.07,0.21411,-0.14261,0.07,0.21411,-0.14261,0,0.21177,-0.14107,0,0.20926,-0.1398,0,0.2066,-0.13877,0,0.20385,-0.13798,0,0.20102,-0.13739,0,0.19816,-0.137,0,0.19246,-0.13671,0]);
IndexedFaceSet1798.coord = Coordinate1799;

let Normal1800 = browser.currentScene.createNode("Normal");
Normal1800.vector = new MFVec3f(new float[0,1,0,0.10549,0.99442,0,0.16797,0.98579,0,0.23831,0.97119,0,0.31721,0.94836,0,0.40477,0.91442,0,0.49996,0.86605,0,0.6,0.8,0,0.6,0.8,0,0.49996,0.86605,0,0.40477,0.91442,0,0.31721,0.94836,0,0.23831,0.97119,0,0.16797,0.98579,0,0.10549,0.99442,0,0,1,0]);
IndexedFaceSet1798.normal = Normal1800;

Shape1796.geometry = IndexedFaceSet1798;

Transform5.children[357] = Shape1796;

let Shape1801 = browser.currentScene.createNode("Shape");
let Appearance1802 = browser.currentScene.createNode("Appearance");
Appearance1802.USE = "characters2013Appearance";
Shape1801.appearance = Appearance1802;

let IndexedFaceSet1803 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1803.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet1803.solid = False;
let Coordinate1804 = browser.currentScene.createNode("Coordinate");
Coordinate1804.point = new MFVec3f(new float[0.21411,-0.14261,0.07,0.21838,-0.1445,0.07,0.2225,-0.14675,0.07,0.22636,-0.14939,0.07,0.22817,-0.15087,0.07,0.22986,-0.15246,0.07,0.22986,-0.15246,0,0.22817,-0.15087,0,0.22636,-0.14939,0,0.2225,-0.14675,0,0.21838,-0.1445,0,0.21411,-0.14261,0]);
IndexedFaceSet1803.coord = Coordinate1804;

let Normal1805 = browser.currentScene.createNode("Normal");
Normal1805.vector = new MFVec3f(new float[0.37139,0.92848,0,0.44036,0.89782,0,0.51995,0.8542,0,0.60979,0.79256,0,0.65782,0.75317,0,0.70711,0.70711,0,0.70711,0.70711,0,0.65782,0.75317,0,0.60979,0.79256,0,0.51995,0.8542,0,0.44036,0.89782,0,0.37139,0.92848,0]);
IndexedFaceSet1803.normal = Normal1805;

Shape1801.geometry = IndexedFaceSet1803;

Transform5.children[358] = Shape1801;

let Shape1806 = browser.currentScene.createNode("Shape");
let Appearance1807 = browser.currentScene.createNode("Appearance");
Appearance1807.USE = "characters2013Appearance";
Shape1806.appearance = Appearance1807;

let IndexedFaceSet1808 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1808.coordIndex = new MFInt32(new int[0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1]);
IndexedFaceSet1808.solid = False;
let Coordinate1809 = browser.currentScene.createNode("Coordinate");
Coordinate1809.point = new MFVec3f(new float[0.22986,-0.15246,0.07,0.2323,-0.15508,0.07,0.23449,-0.15793,0.07,0.23547,-0.15944,0.07,0.23635,-0.161,0.07,0.23711,-0.16261,0.07,0.23774,-0.16427,0.07,0.23774,-0.16427,0,0.23711,-0.16261,0,0.23635,-0.161,0,0.23547,-0.15944,0,0.23449,-0.15793,0,0.2323,-0.15508,0,0.22986,-0.15246,0]);
IndexedFaceSet1808.coord = Coordinate1809;

let Normal1810 = browser.currentScene.createNode("Normal");
Normal1810.vector = new MFVec3f(new float[0.70711,0.70711,0,0.76123,0.64848,0,0.82277,0.56837,0,0.85532,0.5181,0,0.88802,0.4598,0,0.91968,0.39267,0,0.94868,0.31623,0,0.94868,0.31623,0,0.91968,0.39267,0,0.88802,0.4598,0,0.85532,0.5181,0,0.82277,0.56837,0,0.76123,0.64848,0,0.70711,0.70711,0]);
IndexedFaceSet1808.normal = Normal1810;

Shape1806.geometry = IndexedFaceSet1808;

Transform5.children[359] = Shape1806;

let Shape1811 = browser.currentScene.createNode("Shape");
let Appearance1812 = browser.currentScene.createNode("Appearance");
Appearance1812.USE = "characters2013Appearance";
Shape1811.appearance = Appearance1812;

let IndexedFaceSet1813 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1813.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1813.solid = False;
let Coordinate1814 = browser.currentScene.createNode("Coordinate");
Coordinate1814.point = new MFVec3f(new float[0.23774,-0.16427,0.07,0.23858,-0.16715,0.07,0.2392,-0.1701,0.07,0.23958,-0.17308,0.07,0.23971,-0.17608,0.07,0.23971,-0.17608,0,0.23958,-0.17308,0,0.2392,-0.1701,0,0.23858,-0.16715,0,0.23774,-0.16427,0]);
IndexedFaceSet1813.coord = Coordinate1814;

let Normal1815 = browser.currentScene.createNode("Normal");
Normal1815.vector = new MFVec3f(new float[0.94868,0.31623,0,0.97003,0.24298,0,0.98605,0.16646,0,0.99632,0.08575,0,1,0,0,1,0,0,0.99632,0.08575,0,0.98605,0.16646,0,0.97003,0.24298,0,0.94868,0.31623,0]);
IndexedFaceSet1813.normal = Normal1815;

Shape1811.geometry = IndexedFaceSet1813;

Transform5.children[360] = Shape1811;

let Shape1816 = browser.currentScene.createNode("Shape");
let Appearance1817 = browser.currentScene.createNode("Appearance");
Appearance1817.USE = "characters2013Appearance";
Shape1816.appearance = Appearance1817;

let IndexedFaceSet1818 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1818.coordIndex = new MFInt32(new int[7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1]);
IndexedFaceSet1818.solid = False;
let Coordinate1819 = browser.currentScene.createNode("Coordinate");
Coordinate1819.point = new MFVec3f(new float[0.23971,-0.17608,0.07,0.23955,-0.17858,0.07,0.23912,-0.18107,0.07,0.23774,-0.18592,0.07,0.23774,-0.18592,0,0.23912,-0.18107,0,0.23955,-0.17858,0,0.23971,-0.17608,0]);
IndexedFaceSet1818.coord = Coordinate1819;

let Normal1820 = browser.currentScene.createNode("Normal");
Normal1820.vector = new MFVec3f(new float[1,0,0,0.99258,-0.12161,0,0.97691,-0.21363,0,0.94868,-0.31623,0,0.94868,-0.31623,0,0.97691,-0.21363,0,0.99258,-0.12161,0,1,0,0]);
IndexedFaceSet1818.normal = Normal1820;

Shape1816.geometry = IndexedFaceSet1818;

Transform5.children[361] = Shape1816;

let Shape1821 = browser.currentScene.createNode("Shape");
let Appearance1822 = browser.currentScene.createNode("Appearance");
Appearance1822.USE = "characters2013Appearance";
Shape1821.appearance = Appearance1822;

let IndexedFaceSet1823 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1823.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1823.solid = False;
let Coordinate1824 = browser.currentScene.createNode("Coordinate");
Coordinate1824.point = new MFVec3f(new float[0.23774,-0.18592,0.07,0.23657,-0.18902,0.07,0.23518,-0.19202,0.07,0.23183,-0.19774,0.07,0.23183,-0.19774,0,0.23518,-0.19202,0,0.23657,-0.18902,0,0.23774,-0.18592,0]);
IndexedFaceSet1823.coord = Coordinate1824;

let Normal1825 = browser.currentScene.createNode("Normal");
Normal1825.vector = new MFVec3f(new float[0.94868,-0.31623,0,0.92164,-0.38803,0,0.89248,-0.45108,0,0.83205,-0.5547,0,0.83205,-0.5547,0,0.89248,-0.45108,0,0.92164,-0.38803,0,0.94868,-0.31623,0]);
IndexedFaceSet1823.normal = Normal1825;

Shape1821.geometry = IndexedFaceSet1823;

Transform5.children[362] = Shape1821;

let Shape1826 = browser.currentScene.createNode("Shape");
let Appearance1827 = browser.currentScene.createNode("Appearance");
Appearance1827.USE = "characters2013Appearance";
Shape1826.appearance = Appearance1827;

let IndexedFaceSet1828 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1828.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1828.solid = False;
let Coordinate1829 = browser.currentScene.createNode("Coordinate");
Coordinate1829.point = new MFVec3f(new float[0.23183,-0.19774,0.07,0.22975,-0.20054,0.07,0.22739,-0.20314,0.07,0.22479,-0.2055,0.07,0.22199,-0.20758,0.07,0.22199,-0.20758,0,0.22479,-0.2055,0,0.22739,-0.20314,0,0.22975,-0.20054,0,0.23183,-0.19774,0]);
IndexedFaceSet1828.coord = Coordinate1829;

let Normal1830 = browser.currentScene.createNode("Normal");
Normal1830.vector = new MFVec3f(new float[0.83205,-0.5547,0,0.77259,-0.63491,0,0.70711,-0.70711,0,0.63491,-0.77259,0,0.5547,-0.83205,0,0.5547,-0.83205,0,0.63491,-0.77259,0,0.70711,-0.70711,0,0.77259,-0.63491,0,0.83205,-0.5547,0]);
IndexedFaceSet1828.normal = Normal1830;

Shape1826.geometry = IndexedFaceSet1828;

Transform5.children[363] = Shape1826;

let Shape1831 = browser.currentScene.createNode("Shape");
let Appearance1832 = browser.currentScene.createNode("Appearance");
Appearance1832.USE = "characters2013Appearance";
Shape1831.appearance = Appearance1832;

let IndexedFaceSet1833 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1833.coordIndex = new MFInt32(new int[0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1]);
IndexedFaceSet1833.solid = False;
let Coordinate1834 = browser.currentScene.createNode("Coordinate");
Coordinate1834.point = new MFVec3f(new float[0.22199,-0.20758,0.07,0.21773,-0.20951,0.07,0.21333,-0.21112,0.07,0.20427,-0.21349,0.07,0.20427,-0.21349,0,0.21333,-0.21112,0,0.21773,-0.20951,0,0.22199,-0.20758,0]);
IndexedFaceSet1833.coord = Coordinate1834;

let Normal1835 = browser.currentScene.createNode("Normal");
Normal1835.vector = new MFVec3f(new float[0.44721,-0.89443,0,0.37732,-0.92608,0,0.31212,-0.95004,0,0.19612,-0.98058,0,0.19612,-0.98058,0,0.31212,-0.95004,0,0.37732,-0.92608,0,0.44721,-0.89443,0]);
IndexedFaceSet1833.normal = Normal1835;

Shape1831.geometry = IndexedFaceSet1833;

Transform5.children[364] = Shape1831;

let Shape1836 = browser.currentScene.createNode("Shape");
let Appearance1837 = browser.currentScene.createNode("Appearance");
Appearance1837.USE = "characters2013Appearance";
Shape1836.appearance = Appearance1837;

let IndexedFaceSet1838 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1838.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1838.solid = False;
let Coordinate1839 = browser.currentScene.createNode("Coordinate");
Coordinate1839.point = new MFVec3f(new float[0.20427,-0.21349,0.07,0.20427,-0.21546,0.07,0.20427,-0.21546,0,0.20427,-0.21349,0]);
IndexedFaceSet1838.coord = Coordinate1839;

let Normal1840 = browser.currentScene.createNode("Normal");
Normal1840.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet1838.normal = Normal1840;

Shape1836.geometry = IndexedFaceSet1838;

Transform5.children[365] = Shape1836;

let Shape1841 = browser.currentScene.createNode("Shape");
let Appearance1842 = browser.currentScene.createNode("Appearance");
Appearance1842.USE = "characters2013Appearance";
Shape1841.appearance = Appearance1842;

let IndexedFaceSet1843 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1843.coordIndex = new MFInt32(new int[0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1]);
IndexedFaceSet1843.solid = False;
let Coordinate1844 = browser.currentScene.createNode("Coordinate");
Coordinate1844.point = new MFVec3f(new float[0.20427,-0.21546,0.07,0.21112,-0.21756,0.07,0.21805,-0.21939,0.07,0.21805,-0.21939,0,0.21112,-0.21756,0,0.20427,-0.21546,0]);
IndexedFaceSet1843.coord = Coordinate1844;

let Normal1845 = browser.currentScene.createNode("Normal");
Normal1845.vector = new MFVec3f(new float[0.31623,0.94868,0,0.27229,0.96222,0,0.24254,0.97014,0,0.24254,0.97014,0,0.27229,0.96222,0,0.31623,0.94868,0]);
IndexedFaceSet1843.normal = Normal1845;

Shape1841.geometry = IndexedFaceSet1843;

Transform5.children[366] = Shape1841;

let Shape1846 = browser.currentScene.createNode("Shape");
let Appearance1847 = browser.currentScene.createNode("Appearance");
Appearance1847.USE = "characters2013Appearance";
Shape1846.appearance = Appearance1847;

let IndexedFaceSet1848 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1848.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1848.solid = False;
let Coordinate1849 = browser.currentScene.createNode("Coordinate");
Coordinate1849.point = new MFVec3f(new float[0.21805,-0.21939,0.07,0.22167,-0.22044,0.07,0.2252,-0.22176,0.07,0.22861,-0.22338,0.07,0.23183,-0.2253,0.07,0.23183,-0.2253,0,0.22861,-0.22338,0,0.2252,-0.22176,0,0.22167,-0.22044,0,0.21805,-0.21939,0]);
IndexedFaceSet1848.coord = Coordinate1849;

let Normal1850 = browser.currentScene.createNode("Normal");
Normal1850.vector = new MFVec3f(new float[0.24253,0.97014,0,0.31323,0.94968,0,0.3887,0.92136,0,0.46933,0.88302,0,0.5547,0.83205,0,0.5547,0.83205,0,0.46933,0.88302,0,0.3887,0.92136,0,0.31323,0.94968,0,0.24253,0.97014,0]);
IndexedFaceSet1848.normal = Normal1850;

Shape1846.geometry = IndexedFaceSet1848;

Transform5.children[367] = Shape1846;

let Shape1851 = browser.currentScene.createNode("Shape");
let Appearance1852 = browser.currentScene.createNode("Appearance");
Appearance1852.USE = "characters2013Appearance";
Shape1851.appearance = Appearance1852;

let IndexedFaceSet1853 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1853.coordIndex = new MFInt32(new int[0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1]);
IndexedFaceSet1853.solid = False;
let Coordinate1854 = browser.currentScene.createNode("Coordinate");
Coordinate1854.point = new MFVec3f(new float[0.23183,-0.2253,0.07,0.2347,-0.22843,0.07,0.2373,-0.23179,0.07,0.23963,-0.23536,0.07,0.24168,-0.23908,0.07,0.24168,-0.23908,0,0.23963,-0.23536,0,0.2373,-0.23179,0,0.2347,-0.22843,0,0.23183,-0.2253,0]);
IndexedFaceSet1853.coord = Coordinate1854;

let Normal1855 = browser.currentScene.createNode("Normal");
Normal1855.vector = new MFVec3f(new float[0.70711,0.70711,0,0.76513,0.64387,0,0.81495,0.57953,0,0.85773,0.5141,0,0.89443,0.44721,0,0.89443,0.44721,0,0.85773,0.5141,0,0.81495,0.57953,0,0.76513,0.64387,0,0.70711,0.70711,0]);
IndexedFaceSet1853.normal = Normal1855;

Shape1851.geometry = IndexedFaceSet1853;

Transform5.children[368] = Shape1851;

let Shape1856 = browser.currentScene.createNode("Shape");
let Appearance1857 = browser.currentScene.createNode("Appearance");
Appearance1857.USE = "characters2013Appearance";
Shape1856.appearance = Appearance1857;

let IndexedFaceSet1858 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1858.coordIndex = new MFInt32(new int[0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1]);
IndexedFaceSet1858.solid = False;
let Coordinate1859 = browser.currentScene.createNode("Coordinate");
Coordinate1859.point = new MFVec3f(new float[0.24168,-0.23908,0.07,0.24227,-0.24004,0.07,0.24281,-0.24104,0.07,0.24371,-0.24312,0.07,0.2444,-0.2453,0.07,0.2449,-0.24756,0.07,0.24547,-0.25219,0.07,0.24561,-0.2568,0.07,0.24561,-0.2568,0,0.24547,-0.25219,0,0.2449,-0.24756,0,0.2444,-0.2453,0,0.24371,-0.24312,0,0.24281,-0.24104,0,0.24227,-0.24004,0,0.24168,-0.23908,0]);
IndexedFaceSet1858.coord = Coordinate1859;

let Normal1860 = browser.currentScene.createNode("Normal");
Normal1860.vector = new MFVec3f(new float[0.83205,0.5547,0,0.86597,0.5001,0,0.89465,0.44677,0,0.93799,0.34667,0,0.96612,0.25811,0,0.98322,0.18244,0,0.99763,0.06877,0,1,0,0,1,0,0,0.99763,0.06877,0,0.98322,0.18244,0,0.96612,0.25811,0,0.93799,0.34667,0,0.89465,0.44677,0,0.86597,0.5001,0,0.83205,0.5547,0]);
IndexedFaceSet1858.normal = Normal1860;

Shape1856.geometry = IndexedFaceSet1858;

Transform5.children[369] = Shape1856;

let Shape1861 = browser.currentScene.createNode("Shape");
let Appearance1862 = browser.currentScene.createNode("Appearance");
Appearance1862.USE = "characters2013Appearance";
Shape1861.appearance = Appearance1862;

let IndexedFaceSet1863 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1863.coordIndex = new MFInt32(new int[0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1]);
IndexedFaceSet1863.solid = False;
let Coordinate1864 = browser.currentScene.createNode("Coordinate");
Coordinate1864.point = new MFVec3f(new float[0.24561,-0.2568,0.07,0.24552,-0.25917,0.07,0.24526,-0.26154,0.07,0.24483,-0.26391,0.07,0.24425,-0.26627,0.07,0.24263,-0.27089,0.07,0.24049,-0.27536,0.07,0.23788,-0.2796,0.07,0.23487,-0.28354,0.07,0.23152,-0.28712,0.07,0.22789,-0.29027,0.07,0.22789,-0.29027,0,0.23152,-0.28712,0,0.23487,-0.28354,0,0.23788,-0.2796,0,0.24049,-0.27536,0,0.24263,-0.27089,0,0.24425,-0.26627,0,0.24483,-0.26391,0,0.24526,-0.26154,0,0.24552,-0.25917,0,0.24561,-0.2568,0]);
IndexedFaceSet1863.coord = Coordinate1864;

let Normal1865 = browser.currentScene.createNode("Normal");
Normal1865.vector = new MFVec3f(new float[1,0,0,0.99721,-0.07465,0,0.98945,-0.14485,0,0.97758,-0.21056,0,0.96232,-0.27191,0,0.92389,-0.38266,0,0.8773,-0.47993,0,0.82386,-0.5668,0,0.76334,-0.646,0,0.69427,-0.71972,0,0.61394,-0.78935,0,0.61394,-0.78935,0,0.69427,-0.71972,0,0.76334,-0.646,0,0.82386,-0.5668,0,0.8773,-0.47993,0,0.92389,-0.38266,0,0.96232,-0.27191,0,0.97758,-0.21056,0,0.98945,-0.14485,0,0.99721,-0.07465,0,1,0,0]);
IndexedFaceSet1863.normal = Normal1865;

Shape1861.geometry = IndexedFaceSet1863;

Transform5.children[370] = Shape1861;

let Shape1866 = browser.currentScene.createNode("Shape");
let Appearance1867 = browser.currentScene.createNode("Appearance");
Appearance1867.USE = "characters2013Appearance";
Shape1866.appearance = Appearance1867;

let IndexedFaceSet1868 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1868.coordIndex = new MFInt32(new int[0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1]);
IndexedFaceSet1868.solid = False;
let Coordinate1869 = browser.currentScene.createNode("Coordinate");
Coordinate1869.point = new MFVec3f(new float[0.22789,-0.29027,0.07,0.22318,-0.29399,0.07,0.21803,-0.29721,0.07,0.21253,-0.29992,0.07,0.20677,-0.30213,0.07,0.20081,-0.30383,0.07,0.19475,-0.30505,0.07,0.18866,-0.30578,0.07,0.18261,-0.30602,0.07,0.18261,-0.30602,0,0.18866,-0.30578,0,0.19475,-0.30505,0,0.20081,-0.30383,0,0.20677,-0.30213,0,0.21253,-0.29992,0,0.21803,-0.29721,0,0.22318,-0.29399,0,0.22789,-0.29027,0]);
IndexedFaceSet1868.coord = Coordinate1869;

let Normal1870 = browser.currentScene.createNode("Normal");
Normal1870.vector = new MFVec3f(new float[0.66436,-0.74741,0,0.5742,-0.81872,0,0.48534,-0.87432,0,0.39926,-0.91684,0,0.31628,-0.94867,0,0.23596,-0.97176,0,0.15736,-0.98754,0,0.07921,-0.99686,0,0,-1,0,0,-1,0,0.07921,-0.99686,0,0.15736,-0.98754,0,0.23596,-0.97176,0,0.31628,-0.94867,0,0.39926,-0.91684,0,0.48534,-0.87432,0,0.5742,-0.81872,0,0.66436,-0.74741,0]);
IndexedFaceSet1868.normal = Normal1870;

Shape1866.geometry = IndexedFaceSet1868;

Transform5.children[371] = Shape1866;

let Shape1871 = browser.currentScene.createNode("Shape");
let Appearance1872 = browser.currentScene.createNode("Appearance");
Appearance1872.USE = "characters2013Appearance";
Shape1871.appearance = Appearance1872;

let IndexedFaceSet1873 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1873.coordIndex = new MFInt32(new int[299,0,8,-1,298,8,9,-1,297,9,10,-1,296,10,230,-1,231,296,230,-1,231,232,296,-1,296,232,233,-1,234,296,233,-1,234,235,296,-1,296,235,236,-1,241,236,240,-1,241,296,236,-1,241,242,296,-1,296,242,243,-1,244,296,243,-1,244,245,296,-1,296,245,246,-1,295,246,247,-1,248,295,247,-1,248,294,295,-1,248,249,294,-1,294,249,293,-1,293,249,270,-1,271,293,270,-1,271,292,293,-1,271,290,292,-1,271,289,290,-1,271,272,289,-1,289,272,288,-1,288,272,273,-1,274,288,273,-1,274,275,288,-1,288,275,287,-1,287,275,280,-1,286,280,285,-1,286,287,280,-1,2,7,1,-1,2,6,7,-1,2,3,6,-1,6,3,5,-1,5,3,4,-1,7,8,1,-1,1,8,0,-1,299,8,298,-1,298,9,297,-1,11,225,10,-1,11,224,225,-1,11,223,224,-1,11,222,223,-1,11,12,222,-1,222,12,221,-1,221,12,220,-1,220,12,219,-1,219,12,218,-1,218,12,13,-1,217,13,216,-1,217,218,13,-1,13,14,216,-1,216,14,215,-1,215,14,214,-1,214,14,213,-1,213,14,15,-1,212,15,211,-1,212,213,15,-1,15,16,211,-1,211,16,210,-1,210,16,209,-1,209,16,17,-1,208,17,207,-1,208,209,17,-1,207,17,206,-1,206,17,18,-1,205,18,19,-1,204,19,20,-1,203,20,21,-1,202,21,22,-1,201,22,23,-1,200,23,199,-1,200,201,23,-1,206,18,205,-1,205,19,204,-1,204,20,203,-1,203,21,202,-1,202,22,201,-1,23,24,199,-1,199,24,25,-1,198,25,26,-1,197,26,27,-1,28,197,27,-1,28,29,197,-1,197,29,196,-1,196,29,30,-1,195,30,194,-1,195,196,30,-1,199,25,198,-1,198,26,197,-1,30,31,194,-1,194,31,193,-1,193,31,192,-1,192,31,191,-1,191,31,190,-1,190,31,32,-1,189,32,188,-1,189,190,32,-1,33,185,32,-1,33,184,185,-1,33,183,184,-1,33,182,183,-1,33,181,182,-1,33,34,181,-1,181,34,180,-1,180,34,35,-1,179,35,36,-1,37,179,36,-1,37,38,179,-1,179,38,39,-1,40,179,39,-1,40,178,179,-1,40,41,178,-1,178,41,177,-1,177,41,42,-1,176,42,175,-1,176,177,42,-1,180,35,179,-1,43,173,42,-1,43,172,173,-1,43,44,172,-1,172,44,171,-1,171,44,170,-1,170,44,45,-1,169,45,168,-1,169,170,45,-1,45,46,168,-1,168,46,167,-1,167,46,166,-1,166,46,47,-1,165,47,164,-1,165,166,47,-1,164,47,163,-1,163,47,48,-1,162,48,49,-1,161,49,50,-1,160,50,51,-1,52,160,51,-1,52,159,160,-1,52,53,159,-1,159,53,158,-1,158,53,54,-1,157,54,55,-1,156,55,56,-1,155,56,57,-1,58,155,57,-1,58,154,155,-1,58,59,154,-1,154,59,60,-1,153,60,61,-1,152,61,62,-1,63,152,62,-1,63,64,152,-1,152,64,65,-1,66,152,65,-1,66,67,152,-1,152,67,68,-1,151,68,69,-1,150,69,149,-1,150,151,69,-1,163,48,162,-1,162,49,161,-1,161,50,160,-1,158,54,157,-1,157,55,156,-1,156,56,155,-1,154,60,153,-1,153,61,152,-1,152,68,151,-1,69,70,149,-1,149,70,148,-1,148,70,71,-1,147,71,146,-1,147,148,71,-1,71,72,146,-1,146,72,145,-1,145,72,144,-1,144,72,73,-1,143,73,74,-1,142,74,75,-1,141,75,140,-1,141,142,75,-1,144,73,143,-1,143,74,142,-1,75,76,140,-1,140,76,139,-1,139,76,77,-1,78,139,77,-1,78,79,139,-1,139,79,80,-1,81,139,80,-1,81,138,139,-1,81,137,138,-1,81,136,137,-1,81,135,136,-1,81,134,135,-1,81,133,134,-1,81,132,133,-1,81,131,132,-1,81,130,131,-1,81,129,130,-1,81,128,129,-1,81,127,128,-1,81,126,127,-1,81,125,126,-1,81,82,125,-1,125,82,124,-1,124,82,83,-1,123,83,103,-1,104,123,103,-1,104,122,123,-1,104,105,122,-1,122,105,106,-1,121,106,120,-1,121,122,106,-1,84,85,83,-1,83,85,102,-1,103,83,102,-1,85,86,102,-1,102,86,87,-1,101,87,88,-1,100,88,89,-1,99,89,98,-1,99,100,89,-1,102,87,101,-1,101,88,100,-1,89,90,98,-1,98,90,91,-1,92,98,91,-1,92,97,98,-1,92,93,97,-1,97,93,96,-1,96,93,94,-1,95,96,94,-1,120,106,119,-1,119,106,107,-1,118,107,117,-1,118,119,107,-1,108,109,107,-1,107,109,110,-1,117,110,111,-1,112,117,111,-1,112,113,117,-1,117,113,114,-1,116,114,115,-1,116,117,114,-1,107,110,117,-1,123,124,83,-1,173,174,42,-1,42,174,175,-1,185,186,32,-1,32,186,187,-1,188,32,187,-1,225,226,10,-1,10,226,227,-1,228,10,227,-1,228,229,10,-1,10,229,230,-1,240,236,239,-1,239,236,237,-1,238,239,237,-1,296,246,295,-1,270,249,269,-1,269,249,250,-1,268,250,267,-1,268,269,250,-1,267,250,266,-1,266,250,251,-1,265,251,264,-1,265,266,251,-1,252,262,251,-1,252,261,262,-1,252,253,261,-1,261,253,260,-1,260,253,259,-1,259,253,258,-1,258,253,257,-1,257,253,256,-1,256,253,254,-1,255,256,254,-1,262,263,251,-1,251,263,264,-1,275,276,280,-1,280,276,277,-1,278,280,277,-1,278,279,280,-1,281,282,280,-1,280,282,283,-1,284,280,283,-1,284,285,280,-1,290,291,292,-1,296,297,10,-1]);
IndexedFaceSet1873.solid = False;
let Coordinate1874 = browser.currentScene.createNode("Coordinate");
Coordinate1874.point = new MFVec3f(new float[0.16293,-0.30208,0.07,0.16768,-0.30375,0.07,0.17259,-0.30498,0.07,0.17759,-0.30575,0.07,0.18261,-0.30602,0.07,0.18866,-0.30578,0.07,0.19475,-0.30505,0.07,0.20081,-0.30383,0.07,0.20677,-0.30213,0.07,0.21253,-0.29992,0.07,0.21803,-0.29721,0.07,0.22318,-0.29399,0.07,0.22789,-0.29027,0.07,0.23152,-0.28712,0.07,0.23487,-0.28354,0.07,0.23788,-0.2796,0.07,0.24049,-0.27536,0.07,0.24263,-0.27089,0.07,0.24425,-0.26627,0.07,0.24483,-0.26391,0.07,0.24526,-0.26154,0.07,0.24552,-0.25917,0.07,0.24561,-0.2568,0.07,0.24547,-0.25219,0.07,0.2449,-0.24756,0.07,0.2444,-0.2453,0.07,0.24371,-0.24312,0.07,0.24281,-0.24104,0.07,0.24227,-0.24004,0.07,0.24168,-0.23908,0.07,0.23963,-0.23536,0.07,0.2373,-0.23179,0.07,0.2347,-0.22843,0.07,0.23183,-0.2253,0.07,0.22861,-0.22338,0.07,0.2252,-0.22176,0.07,0.22167,-0.22044,0.07,0.21805,-0.21939,0.07,0.21112,-0.21756,0.07,0.20427,-0.21546,0.07,0.20427,-0.21349,0.07,0.21333,-0.21112,0.07,0.21773,-0.20951,0.07,0.22199,-0.20758,0.07,0.22479,-0.2055,0.07,0.22739,-0.20314,0.07,0.22975,-0.20054,0.07,0.23183,-0.19774,0.07,0.23518,-0.19202,0.07,0.23657,-0.18902,0.07,0.23774,-0.18592,0.07,0.23912,-0.18107,0.07,0.23955,-0.17858,0.07,0.23971,-0.17608,0.07,0.23958,-0.17308,0.07,0.2392,-0.1701,0.07,0.23858,-0.16715,0.07,0.23774,-0.16427,0.07,0.23711,-0.16261,0.07,0.23635,-0.161,0.07,0.23547,-0.15944,0.07,0.23449,-0.15793,0.07,0.2323,-0.15508,0.07,0.22986,-0.15246,0.07,0.22817,-0.15087,0.07,0.22636,-0.14939,0.07,0.2225,-0.14675,0.07,0.21838,-0.1445,0.07,0.21411,-0.14261,0.07,0.21177,-0.14107,0.07,0.20926,-0.1398,0.07,0.2066,-0.13877,0.07,0.20385,-0.13798,0.07,0.20102,-0.13739,0.07,0.19816,-0.137,0.07,0.19246,-0.13671,0.07,0.18644,-0.1369,0.07,0.18043,-0.13756,0.07,0.17453,-0.13878,0.07,0.17165,-0.13962,0.07,0.16883,-0.14064,0.07,0.16074,-0.14521,0.07,0.15308,-0.15049,0.07,0.14787,-0.15615,0.07,0.14324,-0.1623,0.07,0.1424,-0.16518,0.07,0.14178,-0.16813,0.07,0.1414,-0.17112,0.07,0.14127,-0.17411,0.07,0.14137,-0.17664,0.07,0.14169,-0.17917,0.07,0.14196,-0.18041,0.07,0.1423,-0.18163,0.07,0.14272,-0.18281,0.07,0.14324,-0.18396,0.07,0.14383,-0.18488,0.07,0.14461,-0.18568,0.07,0.14553,-0.18636,0.07,0.14657,-0.18691,0.07,0.14768,-0.18734,0.07,0.14883,-0.18765,0.07,0.14999,-0.18783,0.07,0.15111,-0.18789,0.07,0.15414,-0.18784,0.07,0.15718,-0.18758,0.07,0.15867,-0.18733,0.07,0.16014,-0.18699,0.07,0.16156,-0.18652,0.07,0.16293,-0.18592,0.07,0.16369,-0.18511,0.07,0.16442,-0.18423,0.07,0.16508,-0.1833,0.07,0.16567,-0.18231,0.07,0.16616,-0.18128,0.07,0.16654,-0.18023,0.07,0.16678,-0.17915,0.07,0.16686,-0.17805,0.07,0.16677,-0.17552,0.07,0.16644,-0.173,0.07,0.16618,-0.17175,0.07,0.16583,-0.17054,0.07,0.16541,-0.16935,0.07,0.16489,-0.16821,0.07,0.16351,-0.16335,0.07,0.16308,-0.16087,0.07,0.16293,-0.15836,0.07,0.16391,-0.15738,0.07,0.16489,-0.15639,0.07,0.16623,-0.15522,0.07,0.16768,-0.15419,0.07,0.1708,-0.15246,0.07,0.17213,-0.15128,0.07,0.17359,-0.15026,0.07,0.17671,-0.14852,0.07,0.17785,-0.148,0.07,0.17904,-0.14758,0.07,0.18025,-0.14724,0.07,0.1815,-0.14697,0.07,0.18402,-0.14665,0.07,0.18655,-0.14655,0.07,0.18925,-0.14666,0.07,0.19201,-0.14699,0.07,0.19477,-0.14755,0.07,0.19746,-0.14837,0.07,0.20001,-0.14945,0.07,0.20122,-0.15009,0.07,0.20237,-0.15081,0.07,0.20345,-0.1516,0.07,0.20446,-0.15246,0.07,0.2054,-0.1534,0.07,0.20624,-0.15442,0.07,0.20722,-0.15548,0.07,0.20814,-0.1566,0.07,0.20976,-0.15902,0.07,0.21112,-0.16164,0.07,0.21221,-0.16441,0.07,0.21305,-0.16729,0.07,0.21365,-0.17022,0.07,0.214,-0.17317,0.07,0.21411,-0.17608,0.07,0.21377,-0.18296,0.07,0.21329,-0.18644,0.07,0.21254,-0.18986,0.07,0.2115,-0.19316,0.07,0.21013,-0.19627,0.07,0.20931,-0.19773,0.07,0.20839,-0.19913,0.07,0.20737,-0.20045,0.07,0.20624,-0.20167,0.07,0.20518,-0.20266,0.07,0.20406,-0.20357,0.07,0.20164,-0.2052,0.07,0.19902,-0.20655,0.07,0.19625,-0.20765,0.07,0.19338,-0.20849,0.07,0.19044,-0.20908,0.07,0.1875,-0.20943,0.07,0.18458,-0.20955,0.07,0.17474,-0.20955,0.07,0.17474,-0.22333,0.07,0.18852,-0.22333,0.07,0.19263,-0.22352,0.07,0.19469,-0.22379,0.07,0.19674,-0.22417,0.07,0.19873,-0.2247,0.07,0.20067,-0.22539,0.07,0.20252,-0.22624,0.07,0.20427,-0.22727,0.07,0.20544,-0.2277,0.07,0.20661,-0.22822,0.07,0.20774,-0.22882,0.07,0.20882,-0.22951,0.07,0.20983,-0.23029,0.07,0.21073,-0.23116,0.07,0.21151,-0.23212,0.07,0.21214,-0.23317,0.07,0.21549,-0.23889,0.07,0.21688,-0.24189,0.07,0.21805,-0.24499,0.07,0.21889,-0.24787,0.07,0.21951,-0.25082,0.07,0.21989,-0.2538,0.07,0.22002,-0.2568,0.07,0.21983,-0.26091,0.07,0.21957,-0.26297,0.07,0.21918,-0.26502,0.07,0.21865,-0.26701,0.07,0.21796,-0.26895,0.07,0.21711,-0.2708,0.07,0.21608,-0.27255,0.07,0.21553,-0.27446,0.07,0.21484,-0.27634,0.07,0.21401,-0.27818,0.07,0.21307,-0.27996,0.07,0.212,-0.28168,0.07,0.21084,-0.28332,0.07,0.20957,-0.28488,0.07,0.20821,-0.28633,0.07,0.20698,-0.28743,0.07,0.20565,-0.28842,0.07,0.20423,-0.28929,0.07,0.20274,-0.29005,0.07,0.1996,-0.2913,0.07,0.19639,-0.29224,0.07,0.19368,-0.29382,0.07,0.19223,-0.2945,0.07,0.19075,-0.29507,0.07,0.18923,-0.29554,0.07,0.18769,-0.29588,0.07,0.18614,-0.2961,0.07,0.18458,-0.29618,0.07,0.18155,-0.29612,0.07,0.17852,-0.29586,0.07,0.17702,-0.29561,0.07,0.17556,-0.29527,0.07,0.17414,-0.2948,0.07,0.17277,-0.29421,0.07,0.1709,-0.29339,0.07,0.16894,-0.29277,0.07,0.16693,-0.29237,0.07,0.16591,-0.29227,0.07,0.16489,-0.29224,0.07,0.16178,-0.2905,0.07,0.16032,-0.28947,0.07,0.15899,-0.2883,0.07,0.158,-0.28732,0.07,0.15702,-0.28633,0.07,0.15705,-0.28532,0.07,0.15716,-0.2843,0.07,0.15755,-0.28229,0.07,0.15817,-0.28033,0.07,0.15899,-0.27846,0.07,0.16037,-0.2736,0.07,0.1608,-0.27112,0.07,0.16096,-0.26861,0.07,0.16087,-0.26772,0.07,0.16064,-0.26684,0.07,0.16027,-0.26598,0.07,0.15978,-0.26517,0.07,0.1592,-0.26442,0.07,0.15853,-0.26374,0.07,0.1578,-0.26317,0.07,0.15702,-0.26271,0.07,0.15645,-0.26218,0.07,0.15584,-0.26169,0.07,0.1552,-0.26125,0.07,0.15452,-0.26085,0.07,0.15309,-0.26017,0.07,0.15157,-0.25964,0.07,0.14999,-0.25924,0.07,0.14839,-0.25897,0.07,0.14679,-0.25882,0.07,0.14521,-0.25877,0.07,0.14397,-0.25889,0.07,0.14274,-0.25925,0.07,0.14155,-0.25982,0.07,0.14043,-0.26055,0.07,0.13941,-0.26144,0.07,0.13854,-0.26244,0.07,0.13783,-0.26353,0.07,0.13733,-0.26467,0.07,0.1367,-0.26545,0.07,0.13622,-0.26633,0.07,0.13587,-0.26729,0.07,0.13563,-0.26832,0.07,0.13548,-0.26937,0.07,0.1354,-0.27045,0.07,0.13536,-0.27255,0.07,0.13549,-0.27555,0.07,0.13587,-0.27853,0.07,0.13649,-0.28148,0.07,0.13733,-0.28436,0.07,0.13941,-0.28717,0.07,0.14177,-0.28977,0.07,0.14437,-0.29213,0.07,0.14718,-0.29421,0.07,0.15082,-0.29672,0.07,0.15468,-0.29893,0.07,0.15872,-0.30075,0.07,0.16081,-0.30148,0.07]);
IndexedFaceSet1873.coord = Coordinate1874;

let Normal1875 = browser.currentScene.createNode("Normal");
Normal1875.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1873.normal = Normal1875;

Shape1871.geometry = IndexedFaceSet1873;

Transform5.children[372] = Shape1871;

let Shape1876 = browser.currentScene.createNode("Shape");
let Appearance1877 = browser.currentScene.createNode("Appearance");
Appearance1877.USE = "baseplateAppearance";
Shape1876.appearance = Appearance1877;

let IndexedFaceSet1878 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1878.coordIndex = new MFInt32(new int[1,28,0,-1,1,2,28,-1,28,2,3,-1,4,28,3,-1,4,5,28,-1,28,5,6,-1,7,28,6,-1,7,8,28,-1,28,8,9,-1,10,28,9,-1,10,11,28,-1,28,11,12,-1,13,28,12,-1,13,14,28,-1,28,14,15,-1,16,28,15,-1,16,17,28,-1,28,17,18,-1,19,28,18,-1,19,20,28,-1,28,20,21,-1,27,21,22,-1,26,22,23,-1,25,23,24,-1,25,26,23,-1,28,21,27,-1,27,22,26,-1,28,29,0,-1,0,29,30,-1,57,30,31,-1,56,31,32,-1,55,32,49,-1,54,49,53,-1,54,55,49,-1,0,30,57,-1,57,31,56,-1,33,47,32,-1,33,46,47,-1,33,45,46,-1,33,44,45,-1,33,43,44,-1,33,42,43,-1,33,41,42,-1,33,40,41,-1,33,34,40,-1,40,34,35,-1,36,40,35,-1,36,37,40,-1,40,37,39,-1,39,37,38,-1,47,48,32,-1,32,48,49,-1,49,50,53,-1,53,50,51,-1,52,53,51,-1,55,56,32,-1]);
IndexedFaceSet1878.solid = False;
let Coordinate1879 = browser.currentScene.createNode("Coordinate");
Coordinate1879.point = new MFVec3f(new float[0.60364,0.03114,0,0.60947,0.03937,0,0.6144,0.04823,0,0.61845,0.05755,0,0.62164,0.06714,0,0.6246,0.0781,0,0.62644,0.08935,0,0.62764,0.11214,0,0.62708,0.12365,0,0.6254,0.13511,0,0.62259,0.14633,0,0.61864,0.15714,0,0.61526,0.16594,0,0.61109,0.17443,0,0.6062,0.18253,0,0.60064,0.19014,0,0.59419,0.19731,0,0.58694,0.20375,0,0.57904,0.20938,0,0.57064,0.21414,0,0.56575,0.21637,0,0.56069,0.21825,0,0.55021,0.22104,0,0.53945,0.22264,0,0.52864,0.22314,0,0.52483,0.2229,0,0.52105,0.22225,0,0.51364,0.22014,0,0.50164,0.22014,0,0.50164,0.03114,0,0.50177,0.02823,0,0.50216,0.02524,0,0.50282,0.02227,0,0.50377,0.01937,0,0.50501,0.01664,0,0.50575,0.01535,0,0.50656,0.01414,0,0.50746,0.013,0,0.50844,0.01195,0,0.5095,0.01099,0,0.51064,0.01014,0,0.51211,0.00923,0,0.51363,0.00842,0,0.5168,0.00705,0,0.52013,0.006,0,0.52356,0.00523,0,0.53061,0.00436,0,0.53764,0.00414,0,0.54757,0.00439,0,0.5575,0.00531,0,0.56725,0.00715,0,0.572,0.00848,0,0.57664,0.01014,0,0.5842,0.01429,0,0.5914,0.01914,0,0.59478,0.02183,0,0.59797,0.02473,0,0.60094,0.02783,0]);
IndexedFaceSet1878.coord = Coordinate1879;

let Normal1880 = browser.currentScene.createNode("Normal");
Normal1880.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1878.normal = Normal1880;

Shape1876.geometry = IndexedFaceSet1878;

Transform5.children[373] = Shape1876;

let Shape1881 = browser.currentScene.createNode("Shape");
let Appearance1882 = browser.currentScene.createNode("Appearance");
Appearance1882.DEF = "sidebarAppearance";
let Material1883 = browser.currentScene.createNode("Material");
Material1883.ambientIntensity = 1;
Material1883.diffuseColor = new SFColor(new float[0,0.7686,0.263]);
Material1883.shininess = 1;
Appearance1882.material = Material1883;

Shape1881.appearance = Appearance1882;

let IndexedFaceSet1884 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1884.coordIndex = new MFInt32(new int[53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1]);
IndexedFaceSet1884.solid = False;
let Coordinate1885 = browser.currentScene.createNode("Coordinate");
Coordinate1885.point = new MFVec3f(new float[0.40463,-0.19956,0.05,0.40553,-0.19961,0.05,0.40642,-0.19977,0.05,0.40729,-0.20004,0.05,0.40811,-0.20042,0.05,0.40889,-0.20088,0.05,0.4096,-0.20144,0.05,0.41024,-0.20208,0.05,0.4108,-0.2028,0.05,0.41127,-0.20357,0.05,0.41164,-0.2044,0.05,0.41191,-0.20526,0.05,0.41207,-0.20615,0.05,0.41213,-0.20706,0.05,0.41207,-0.20796,0.05,0.41191,-0.20885,0.05,0.41164,-0.20972,0.05,0.41127,-0.21054,0.05,0.4108,-0.21132,0.05,0.41024,-0.21203,0.05,0.4096,-0.21267,0.05,0.40889,-0.21323,0.05,0.40811,-0.2137,0.05,0.40729,-0.21407,0.05,0.40642,-0.21434,0.05,0.40553,-0.2145,0.05,0.40463,-0.21456,0.05,0.40463,-0.21456,0,0.40553,-0.2145,0,0.40642,-0.21434,0,0.40729,-0.21407,0,0.40811,-0.2137,0,0.40889,-0.21323,0,0.4096,-0.21267,0,0.41024,-0.21203,0,0.4108,-0.21132,0,0.41127,-0.21054,0,0.41164,-0.20972,0,0.41191,-0.20885,0,0.41207,-0.20796,0,0.41213,-0.20706,0,0.41207,-0.20615,0,0.41191,-0.20526,0,0.41164,-0.2044,0,0.41127,-0.20357,0,0.4108,-0.2028,0,0.41024,-0.20208,0,0.4096,-0.20144,0,0.40889,-0.20088,0,0.40811,-0.20042,0,0.40729,-0.20004,0,0.40642,-0.19977,0,0.40553,-0.19961,0,0.40463,-0.19956,0]);
IndexedFaceSet1884.coord = Coordinate1885;

let Normal1886 = browser.currentScene.createNode("Normal");
Normal1886.vector = new MFVec3f(new float[0,1,0,0.12054,0.99271,0,0.23932,0.97094,0,0.3546,0.93502,0,0.46472,0.88546,0,0.56806,0.82298,0,0.66312,0.74851,0,0.74851,0.66312,0,0.82298,0.56806,0,0.88546,0.46472,0,0.93502,0.3546,0,0.97094,0.23932,0,0.99271,0.12054,0,1,0,0,0.99271,-0.12054,0,0.97094,-0.23932,0,0.93502,-0.3546,0,0.88546,-0.46472,0,0.82298,-0.56806,0,0.74851,-0.66312,0,0.66312,-0.74851,0,0.56806,-0.82298,0,0.46472,-0.88546,0,0.3546,-0.93502,0,0.23932,-0.97094,0,0.12054,-0.99271,0,0,-1,0,0,-1,0,0.12054,-0.99271,0,0.23932,-0.97094,0,0.3546,-0.93502,0,0.46472,-0.88546,0,0.56806,-0.82298,0,0.66312,-0.74851,0,0.74851,-0.66312,0,0.82298,-0.56806,0,0.88546,-0.46472,0,0.93502,-0.3546,0,0.97094,-0.23932,0,0.99271,-0.12054,0,1,0,0,0.99271,0.12054,0,0.97094,0.23932,0,0.93502,0.3546,0,0.88546,0.46472,0,0.82298,0.56806,0,0.74851,0.66312,0,0.66312,0.74851,0,0.56806,0.82298,0,0.46472,0.88546,0,0.3546,0.93502,0,0.23932,0.97094,0,0.12054,0.99271,0,0,1,0]);
IndexedFaceSet1884.normal = Normal1886;

Shape1881.geometry = IndexedFaceSet1884;

Transform5.children[374] = Shape1881;

let Shape1887 = browser.currentScene.createNode("Shape");
let Appearance1888 = browser.currentScene.createNode("Appearance");
Appearance1888.USE = "sidebarAppearance";
Shape1887.appearance = Appearance1888;

let IndexedFaceSet1889 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1889.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1889.solid = False;
let Coordinate1890 = browser.currentScene.createNode("Coordinate");
Coordinate1890.point = new MFVec3f(new float[0.40463,-0.21456,0.05,0.28941,-0.21456,0.05,0.28941,-0.21456,0,0.40463,-0.21456,0]);
IndexedFaceSet1889.coord = Coordinate1890;

let Normal1891 = browser.currentScene.createNode("Normal");
Normal1891.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1889.normal = Normal1891;

Shape1887.geometry = IndexedFaceSet1889;

Transform5.children[375] = Shape1887;

let Shape1892 = browser.currentScene.createNode("Shape");
let Appearance1893 = browser.currentScene.createNode("Appearance");
Appearance1893.USE = "sidebarAppearance";
Shape1892.appearance = Appearance1893;

let IndexedFaceSet1894 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1894.coordIndex = new MFInt32(new int[53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1]);
IndexedFaceSet1894.solid = False;
let Coordinate1895 = browser.currentScene.createNode("Coordinate");
Coordinate1895.point = new MFVec3f(new float[0.28941,-0.21456,0.05,0.28851,-0.2145,0.05,0.28762,-0.21434,0.05,0.28675,-0.21407,0.05,0.28593,-0.2137,0.05,0.28515,-0.21323,0.05,0.28444,-0.21267,0.05,0.2838,-0.21203,0.05,0.28324,-0.21132,0.05,0.28277,-0.21054,0.05,0.2824,-0.20972,0.05,0.28213,-0.20885,0.05,0.28197,-0.20796,0.05,0.28191,-0.20706,0.05,0.28197,-0.20615,0.05,0.28213,-0.20526,0.05,0.2824,-0.2044,0.05,0.28277,-0.20357,0.05,0.28324,-0.2028,0.05,0.2838,-0.20208,0.05,0.28444,-0.20144,0.05,0.28515,-0.20088,0.05,0.28593,-0.20042,0.05,0.28675,-0.20004,0.05,0.28762,-0.19977,0.05,0.28851,-0.19961,0.05,0.28941,-0.19956,0.05,0.28941,-0.19956,0,0.28851,-0.19961,0,0.28762,-0.19977,0,0.28675,-0.20004,0,0.28593,-0.20042,0,0.28515,-0.20088,0,0.28444,-0.20144,0,0.2838,-0.20208,0,0.28324,-0.2028,0,0.28277,-0.20357,0,0.2824,-0.2044,0,0.28213,-0.20526,0,0.28197,-0.20615,0,0.28191,-0.20706,0,0.28197,-0.20796,0,0.28213,-0.20885,0,0.2824,-0.20972,0,0.28277,-0.21054,0,0.28324,-0.21132,0,0.2838,-0.21203,0,0.28444,-0.21267,0,0.28515,-0.21323,0,0.28593,-0.2137,0,0.28675,-0.21407,0,0.28762,-0.21434,0,0.28851,-0.2145,0,0.28941,-0.21456,0]);
IndexedFaceSet1894.coord = Coordinate1895;

let Normal1896 = browser.currentScene.createNode("Normal");
Normal1896.vector = new MFVec3f(new float[0,-1,0,-0.12054,-0.99271,0,-0.23932,-0.97094,0,-0.3546,-0.93502,0,-0.46472,-0.88546,0,-0.56806,-0.82298,0,-0.66312,-0.74851,0,-0.74851,-0.66312,0,-0.82298,-0.56806,0,-0.88546,-0.46472,0,-0.93502,-0.3546,0,-0.97094,-0.23932,0,-0.99271,-0.12054,0,-1,0,0,-0.99271,0.12054,0,-0.97094,0.23932,0,-0.93502,0.3546,0,-0.88546,0.46472,0,-0.82298,0.56806,0,-0.74851,0.66312,0,-0.66312,0.74851,0,-0.56806,0.82298,0,-0.46472,0.88546,0,-0.3546,0.93502,0,-0.23932,0.97094,0,-0.12054,0.99271,0,0,1,0,0,1,0,-0.12054,0.99271,0,-0.23932,0.97094,0,-0.3546,0.93502,0,-0.46472,0.88546,0,-0.56806,0.82298,0,-0.66312,0.74851,0,-0.74851,0.66312,0,-0.82298,0.56806,0,-0.88546,0.46472,0,-0.93502,0.3546,0,-0.97094,0.23932,0,-0.99271,0.12054,0,-1,0,0,-0.99271,-0.12054,0,-0.97094,-0.23932,0,-0.93502,-0.3546,0,-0.88546,-0.46472,0,-0.82298,-0.56806,0,-0.74851,-0.66312,0,-0.66312,-0.74851,0,-0.56806,-0.82298,0,-0.46472,-0.88546,0,-0.3546,-0.93502,0,-0.23932,-0.97094,0,-0.12054,-0.99271,0,0,-1,0]);
IndexedFaceSet1894.normal = Normal1896;

Shape1892.geometry = IndexedFaceSet1894;

Transform5.children[376] = Shape1892;

let Shape1897 = browser.currentScene.createNode("Shape");
let Appearance1898 = browser.currentScene.createNode("Appearance");
Appearance1898.USE = "sidebarAppearance";
Shape1897.appearance = Appearance1898;

let IndexedFaceSet1899 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1899.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1899.solid = False;
let Coordinate1900 = browser.currentScene.createNode("Coordinate");
Coordinate1900.point = new MFVec3f(new float[0.28941,-0.19956,0.05,0.40463,-0.19956,0.05,0.40463,-0.19956,0,0.28941,-0.19956,0]);
IndexedFaceSet1899.coord = Coordinate1900;

let Normal1901 = browser.currentScene.createNode("Normal");
Normal1901.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1899.normal = Normal1901;

Shape1897.geometry = IndexedFaceSet1899;

Transform5.children[377] = Shape1897;

let Shape1902 = browser.currentScene.createNode("Shape");
let Appearance1903 = browser.currentScene.createNode("Appearance");
Appearance1903.USE = "sidebarAppearance";
Shape1902.appearance = Appearance1903;

let IndexedFaceSet1904 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1904.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1,4,0,3,-1,4,5,0,-1,0,5,6,-1,47,6,46,-1,47,0,6,-1,47,53,0,-1,47,48,53,-1,53,48,49,-1,50,53,49,-1,50,51,53,-1,53,51,52,-1,6,7,46,-1,46,7,45,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,11,43,10,-1,11,42,43,-1,11,41,42,-1,11,12,41,-1,41,12,13,-1,40,13,39,-1,40,41,13,-1,45,8,44,-1,44,9,43,-1,13,14,39,-1,39,14,15,-1,38,15,37,-1,38,39,15,-1,15,16,37,-1,37,16,17,-1,36,17,35,-1,36,37,17,-1,17,18,35,-1,35,18,34,-1,34,18,19,-1,33,19,20,-1,27,20,26,-1,27,33,20,-1,27,32,33,-1,27,31,32,-1,27,30,31,-1,27,29,30,-1,27,28,29,-1,34,19,33,-1,20,21,26,-1,26,21,22,-1,23,26,22,-1,23,24,26,-1,26,24,25,-1]);
IndexedFaceSet1904.solid = False;
let Coordinate1905 = browser.currentScene.createNode("Coordinate");
Coordinate1905.point = new MFVec3f(new float[0.40463,-0.21456,0.05,0.40553,-0.2145,0.05,0.40642,-0.21434,0.05,0.40729,-0.21407,0.05,0.40811,-0.2137,0.05,0.40889,-0.21323,0.05,0.4096,-0.21267,0.05,0.41024,-0.21203,0.05,0.4108,-0.21132,0.05,0.41127,-0.21054,0.05,0.41164,-0.20972,0.05,0.41191,-0.20885,0.05,0.41207,-0.20796,0.05,0.41213,-0.20706,0.05,0.41207,-0.20615,0.05,0.41191,-0.20526,0.05,0.41164,-0.2044,0.05,0.41127,-0.20357,0.05,0.4108,-0.2028,0.05,0.41024,-0.20208,0.05,0.4096,-0.20144,0.05,0.40889,-0.20088,0.05,0.40811,-0.20042,0.05,0.40729,-0.20004,0.05,0.40642,-0.19977,0.05,0.40553,-0.19961,0.05,0.40463,-0.19956,0.05,0.28941,-0.19956,0.05,0.28851,-0.19961,0.05,0.28762,-0.19977,0.05,0.28675,-0.20004,0.05,0.28593,-0.20042,0.05,0.28515,-0.20088,0.05,0.28444,-0.20144,0.05,0.2838,-0.20208,0.05,0.28324,-0.2028,0.05,0.28277,-0.20357,0.05,0.2824,-0.2044,0.05,0.28213,-0.20526,0.05,0.28197,-0.20615,0.05,0.28191,-0.20706,0.05,0.28197,-0.20796,0.05,0.28213,-0.20885,0.05,0.2824,-0.20972,0.05,0.28277,-0.21054,0.05,0.28324,-0.21132,0.05,0.2838,-0.21203,0.05,0.28444,-0.21267,0.05,0.28515,-0.21323,0.05,0.28593,-0.2137,0.05,0.28675,-0.21407,0.05,0.28762,-0.21434,0.05,0.28851,-0.2145,0.05,0.28941,-0.21456,0.05]);
IndexedFaceSet1904.coord = Coordinate1905;

let Normal1906 = browser.currentScene.createNode("Normal");
Normal1906.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1904.normal = Normal1906;

Shape1902.geometry = IndexedFaceSet1904;

Transform5.children[378] = Shape1902;

let Shape1907 = browser.currentScene.createNode("Shape");
let Appearance1908 = browser.currentScene.createNode("Appearance");
Appearance1908.USE = "sidebarAppearance";
Shape1907.appearance = Appearance1908;

let IndexedFaceSet1909 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1909.coordIndex = new MFInt32(new int[53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1]);
IndexedFaceSet1909.solid = False;
let Coordinate1910 = browser.currentScene.createNode("Coordinate");
Coordinate1910.point = new MFVec3f(new float[-0.29537,-0.19956,0.05,-0.29447,-0.19961,0.05,-0.29358,-0.19977,0.05,-0.29271,-0.20004,0.05,-0.29189,-0.20042,0.05,-0.29111,-0.20088,0.05,-0.2904,-0.20144,0.05,-0.28976,-0.20208,0.05,-0.2892,-0.2028,0.05,-0.28873,-0.20357,0.05,-0.28836,-0.2044,0.05,-0.28809,-0.20526,0.05,-0.28793,-0.20615,0.05,-0.28787,-0.20706,0.05,-0.28793,-0.20796,0.05,-0.28809,-0.20885,0.05,-0.28836,-0.20972,0.05,-0.28873,-0.21054,0.05,-0.2892,-0.21132,0.05,-0.28976,-0.21203,0.05,-0.2904,-0.21267,0.05,-0.29111,-0.21323,0.05,-0.29189,-0.2137,0.05,-0.29271,-0.21407,0.05,-0.29358,-0.21434,0.05,-0.29447,-0.2145,0.05,-0.29537,-0.21456,0.05,-0.29537,-0.21456,0,-0.29447,-0.2145,0,-0.29358,-0.21434,0,-0.29271,-0.21407,0,-0.29189,-0.2137,0,-0.29111,-0.21323,0,-0.2904,-0.21267,0,-0.28976,-0.21203,0,-0.2892,-0.21132,0,-0.28873,-0.21054,0,-0.28836,-0.20972,0,-0.28809,-0.20885,0,-0.28793,-0.20796,0,-0.28787,-0.20706,0,-0.28793,-0.20615,0,-0.28809,-0.20526,0,-0.28836,-0.2044,0,-0.28873,-0.20357,0,-0.2892,-0.2028,0,-0.28976,-0.20208,0,-0.2904,-0.20144,0,-0.29111,-0.20088,0,-0.29189,-0.20042,0,-0.29271,-0.20004,0,-0.29358,-0.19977,0,-0.29447,-0.19961,0,-0.29537,-0.19956,0]);
IndexedFaceSet1909.coord = Coordinate1910;

let Normal1911 = browser.currentScene.createNode("Normal");
Normal1911.vector = new MFVec3f(new float[0,1,0,0.12054,0.99271,0,0.23932,0.97094,0,0.3546,0.93502,0,0.46472,0.88546,0,0.56806,0.82298,0,0.66312,0.74851,0,0.74851,0.66312,0,0.82298,0.56806,0,0.88546,0.46472,0,0.93502,0.3546,0,0.97094,0.23932,0,0.99271,0.12054,0,1,0,0,0.99271,-0.12054,0,0.97094,-0.23932,0,0.93502,-0.3546,0,0.88546,-0.46472,0,0.82298,-0.56806,0,0.74851,-0.66312,0,0.66312,-0.74851,0,0.56806,-0.82298,0,0.46472,-0.88546,0,0.3546,-0.93502,0,0.23932,-0.97094,0,0.12054,-0.99271,0,0,-1,0,0,-1,0,0.12054,-0.99271,0,0.23932,-0.97094,0,0.3546,-0.93502,0,0.46472,-0.88546,0,0.56806,-0.82298,0,0.66312,-0.74851,0,0.74851,-0.66312,0,0.82298,-0.56806,0,0.88546,-0.46472,0,0.93502,-0.3546,0,0.97094,-0.23932,0,0.99271,-0.12054,0,1,0,0,0.99271,0.12054,0,0.97094,0.23932,0,0.93502,0.3546,0,0.88546,0.46472,0,0.82298,0.56806,0,0.74851,0.66312,0,0.66312,0.74851,0,0.56806,0.82298,0,0.46472,0.88546,0,0.3546,0.93502,0,0.23932,0.97094,0,0.12054,0.99271,0,0,1,0]);
IndexedFaceSet1909.normal = Normal1911;

Shape1907.geometry = IndexedFaceSet1909;

Transform5.children[379] = Shape1907;

let Shape1912 = browser.currentScene.createNode("Shape");
let Appearance1913 = browser.currentScene.createNode("Appearance");
Appearance1913.USE = "sidebarAppearance";
Shape1912.appearance = Appearance1913;

let IndexedFaceSet1914 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1914.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1914.solid = False;
let Coordinate1915 = browser.currentScene.createNode("Coordinate");
Coordinate1915.point = new MFVec3f(new float[-0.29537,-0.21456,0.05,-0.41059,-0.21456,0.05,-0.41059,-0.21456,0,-0.29537,-0.21456,0]);
IndexedFaceSet1914.coord = Coordinate1915;

let Normal1916 = browser.currentScene.createNode("Normal");
Normal1916.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1914.normal = Normal1916;

Shape1912.geometry = IndexedFaceSet1914;

Transform5.children[380] = Shape1912;

let Shape1917 = browser.currentScene.createNode("Shape");
let Appearance1918 = browser.currentScene.createNode("Appearance");
Appearance1918.USE = "sidebarAppearance";
Shape1917.appearance = Appearance1918;

let IndexedFaceSet1919 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1919.coordIndex = new MFInt32(new int[53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1]);
IndexedFaceSet1919.solid = False;
let Coordinate1920 = browser.currentScene.createNode("Coordinate");
Coordinate1920.point = new MFVec3f(new float[-0.41059,-0.21456,0.05,-0.41149,-0.2145,0.05,-0.41238,-0.21434,0.05,-0.41325,-0.21407,0.05,-0.41407,-0.2137,0.05,-0.41485,-0.21323,0.05,-0.41556,-0.21267,0.05,-0.4162,-0.21203,0.05,-0.41676,-0.21132,0.05,-0.41723,-0.21054,0.05,-0.4176,-0.20972,0.05,-0.41787,-0.20885,0.05,-0.41803,-0.20796,0.05,-0.41809,-0.20706,0.05,-0.41803,-0.20615,0.05,-0.41787,-0.20526,0.05,-0.4176,-0.2044,0.05,-0.41723,-0.20357,0.05,-0.41676,-0.2028,0.05,-0.4162,-0.20208,0.05,-0.41556,-0.20144,0.05,-0.41485,-0.20088,0.05,-0.41407,-0.20042,0.05,-0.41325,-0.20004,0.05,-0.41238,-0.19977,0.05,-0.41149,-0.19961,0.05,-0.41059,-0.19956,0.05,-0.41059,-0.19956,0,-0.41149,-0.19961,0,-0.41238,-0.19977,0,-0.41325,-0.20004,0,-0.41407,-0.20042,0,-0.41485,-0.20088,0,-0.41556,-0.20144,0,-0.4162,-0.20208,0,-0.41676,-0.2028,0,-0.41723,-0.20357,0,-0.4176,-0.2044,0,-0.41787,-0.20526,0,-0.41803,-0.20615,0,-0.41809,-0.20706,0,-0.41803,-0.20796,0,-0.41787,-0.20885,0,-0.4176,-0.20972,0,-0.41723,-0.21054,0,-0.41676,-0.21132,0,-0.4162,-0.21203,0,-0.41556,-0.21267,0,-0.41485,-0.21323,0,-0.41407,-0.2137,0,-0.41325,-0.21407,0,-0.41238,-0.21434,0,-0.41149,-0.2145,0,-0.41059,-0.21456,0]);
IndexedFaceSet1919.coord = Coordinate1920;

let Normal1921 = browser.currentScene.createNode("Normal");
Normal1921.vector = new MFVec3f(new float[0,-1,0,-0.12054,-0.99271,0,-0.23932,-0.97094,0,-0.3546,-0.93502,0,-0.46472,-0.88546,0,-0.56806,-0.82298,0,-0.66312,-0.74851,0,-0.74851,-0.66312,0,-0.82298,-0.56806,0,-0.88546,-0.46472,0,-0.93502,-0.3546,0,-0.97094,-0.23932,0,-0.99271,-0.12054,0,-1,0,0,-0.99271,0.12054,0,-0.97094,0.23932,0,-0.93502,0.3546,0,-0.88546,0.46472,0,-0.82298,0.56806,0,-0.74851,0.66312,0,-0.66312,0.74851,0,-0.56806,0.82298,0,-0.46472,0.88546,0,-0.3546,0.93502,0,-0.23932,0.97094,0,-0.12054,0.99271,0,0,1,0,0,1,0,-0.12054,0.99271,0,-0.23932,0.97094,0,-0.3546,0.93502,0,-0.46472,0.88546,0,-0.56806,0.82298,0,-0.66312,0.74851,0,-0.74851,0.66312,0,-0.82298,0.56806,0,-0.88546,0.46472,0,-0.93502,0.3546,0,-0.97094,0.23932,0,-0.99271,0.12054,0,-1,0,0,-0.99271,-0.12054,0,-0.97094,-0.23932,0,-0.93502,-0.3546,0,-0.88546,-0.46472,0,-0.82298,-0.56806,0,-0.74851,-0.66312,0,-0.66312,-0.74851,0,-0.56806,-0.82298,0,-0.46472,-0.88546,0,-0.3546,-0.93502,0,-0.23932,-0.97094,0,-0.12054,-0.99271,0,0,-1,0]);
IndexedFaceSet1919.normal = Normal1921;

Shape1917.geometry = IndexedFaceSet1919;

Transform5.children[381] = Shape1917;

let Shape1922 = browser.currentScene.createNode("Shape");
let Appearance1923 = browser.currentScene.createNode("Appearance");
Appearance1923.USE = "sidebarAppearance";
Shape1922.appearance = Appearance1923;

let IndexedFaceSet1924 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1924.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1924.solid = False;
let Coordinate1925 = browser.currentScene.createNode("Coordinate");
Coordinate1925.point = new MFVec3f(new float[-0.41059,-0.19956,0.05,-0.29537,-0.19956,0.05,-0.29537,-0.19956,0,-0.41059,-0.19956,0]);
IndexedFaceSet1924.coord = Coordinate1925;

let Normal1926 = browser.currentScene.createNode("Normal");
Normal1926.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1924.normal = Normal1926;

Shape1922.geometry = IndexedFaceSet1924;

Transform5.children[382] = Shape1922;

let Shape1927 = browser.currentScene.createNode("Shape");
let Appearance1928 = browser.currentScene.createNode("Appearance");
Appearance1928.USE = "sidebarAppearance";
Shape1927.appearance = Appearance1928;

let IndexedFaceSet1929 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1929.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1,4,0,3,-1,4,5,0,-1,0,5,6,-1,47,6,46,-1,47,0,6,-1,47,53,0,-1,47,48,53,-1,53,48,49,-1,50,53,49,-1,50,51,53,-1,53,51,52,-1,6,7,46,-1,46,7,45,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,11,43,10,-1,11,42,43,-1,11,41,42,-1,11,12,41,-1,41,12,13,-1,40,13,39,-1,40,41,13,-1,45,8,44,-1,44,9,43,-1,13,14,39,-1,39,14,15,-1,38,15,37,-1,38,39,15,-1,15,16,37,-1,37,16,17,-1,36,17,35,-1,36,37,17,-1,17,18,35,-1,35,18,34,-1,34,18,19,-1,33,19,20,-1,27,20,26,-1,27,33,20,-1,27,32,33,-1,27,31,32,-1,27,30,31,-1,27,29,30,-1,27,28,29,-1,34,19,33,-1,20,21,26,-1,26,21,22,-1,23,26,22,-1,23,24,26,-1,26,24,25,-1]);
IndexedFaceSet1929.solid = False;
let Coordinate1930 = browser.currentScene.createNode("Coordinate");
Coordinate1930.point = new MFVec3f(new float[-0.29537,-0.21456,0.05,-0.29447,-0.2145,0.05,-0.29358,-0.21434,0.05,-0.29271,-0.21407,0.05,-0.29189,-0.2137,0.05,-0.29111,-0.21323,0.05,-0.2904,-0.21267,0.05,-0.28976,-0.21203,0.05,-0.2892,-0.21132,0.05,-0.28873,-0.21054,0.05,-0.28836,-0.20972,0.05,-0.28809,-0.20885,0.05,-0.28793,-0.20796,0.05,-0.28787,-0.20706,0.05,-0.28793,-0.20615,0.05,-0.28809,-0.20526,0.05,-0.28836,-0.2044,0.05,-0.28873,-0.20357,0.05,-0.2892,-0.2028,0.05,-0.28976,-0.20208,0.05,-0.2904,-0.20144,0.05,-0.29111,-0.20088,0.05,-0.29189,-0.20042,0.05,-0.29271,-0.20004,0.05,-0.29358,-0.19977,0.05,-0.29447,-0.19961,0.05,-0.29537,-0.19956,0.05,-0.41059,-0.19956,0.05,-0.41149,-0.19961,0.05,-0.41238,-0.19977,0.05,-0.41325,-0.20004,0.05,-0.41407,-0.20042,0.05,-0.41485,-0.20088,0.05,-0.41556,-0.20144,0.05,-0.4162,-0.20208,0.05,-0.41676,-0.2028,0.05,-0.41723,-0.20357,0.05,-0.4176,-0.2044,0.05,-0.41787,-0.20526,0.05,-0.41803,-0.20615,0.05,-0.41809,-0.20706,0.05,-0.41803,-0.20796,0.05,-0.41787,-0.20885,0.05,-0.4176,-0.20972,0.05,-0.41723,-0.21054,0.05,-0.41676,-0.21132,0.05,-0.4162,-0.21203,0.05,-0.41556,-0.21267,0.05,-0.41485,-0.21323,0.05,-0.41407,-0.2137,0.05,-0.41325,-0.21407,0.05,-0.41238,-0.21434,0.05,-0.41149,-0.2145,0.05,-0.41059,-0.21456,0.05]);
IndexedFaceSet1929.coord = Coordinate1930;

let Normal1931 = browser.currentScene.createNode("Normal");
Normal1931.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet1929.normal = Normal1931;

Shape1927.geometry = IndexedFaceSet1929;

Transform5.children[383] = Shape1927;

let Shape1932 = browser.currentScene.createNode("Shape");
let Appearance1933 = browser.currentScene.createNode("Appearance");
Appearance1933.USE = "baseplateAppearance";
Shape1932.appearance = Appearance1933;

let IndexedFaceSet1934 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1934.coordIndex = new MFInt32(new int[1,103,0,-1,1,102,103,-1,1,2,102,-1,102,2,101,-1,101,2,3,-1,100,3,4,-1,99,4,5,-1,98,5,6,-1,97,6,7,-1,96,7,8,-1,95,8,9,-1,94,9,10,-1,93,10,11,-1,92,11,12,-1,91,12,13,-1,90,13,14,-1,89,14,15,-1,88,15,16,-1,87,16,17,-1,86,17,18,-1,85,18,19,-1,84,19,20,-1,83,20,21,-1,82,21,22,-1,81,22,23,-1,80,23,24,-1,79,24,25,-1,78,25,26,-1,77,26,27,-1,76,27,28,-1,75,28,29,-1,74,29,30,-1,73,30,31,-1,72,31,32,-1,71,32,33,-1,70,33,34,-1,69,34,35,-1,68,35,36,-1,67,36,37,-1,66,37,38,-1,65,38,39,-1,64,39,40,-1,63,40,41,-1,62,41,42,-1,61,42,43,-1,60,43,44,-1,59,44,45,-1,58,45,46,-1,57,46,47,-1,56,47,48,-1,55,48,49,-1,54,49,50,-1,53,50,51,-1,52,51,0,-1,103,52,0,-1,101,3,100,-1,100,4,99,-1,99,5,98,-1,98,6,97,-1,97,7,96,-1,96,8,95,-1,95,9,94,-1,94,10,93,-1,93,11,92,-1,92,12,91,-1,91,13,90,-1,90,14,89,-1,89,15,88,-1,88,16,87,-1,87,17,86,-1,86,18,85,-1,85,19,84,-1,84,20,83,-1,83,21,82,-1,82,22,81,-1,81,23,80,-1,80,24,79,-1,79,25,78,-1,78,26,77,-1,77,27,76,-1,76,28,75,-1,75,29,74,-1,74,30,73,-1,73,31,72,-1,72,32,71,-1,71,33,70,-1,70,34,69,-1,69,35,68,-1,68,36,67,-1,67,37,66,-1,66,38,65,-1,65,39,64,-1,64,40,63,-1,63,41,62,-1,62,42,61,-1,61,43,60,-1,60,44,59,-1,59,45,58,-1,58,46,57,-1,57,47,56,-1,56,48,55,-1,55,49,54,-1,54,50,53,-1,53,51,52,-1]);
IndexedFaceSet1934.solid = False;
let Coordinate1935 = browser.currentScene.createNode("Coordinate");
Coordinate1935.point = new MFVec3f(new float[0.47443,-0.31008,-0.04,0.46642,-0.30104,-0.04,0.45956,-0.2911,-0.04,0.45395,-0.28041,-0.04,0.44967,-0.26912,-0.04,0.44678,-0.25739,-0.04,0.44532,-0.24541,-0.04,0.44532,-0.23333,-0.04,0.44678,-0.22134,-0.04,0.44967,-0.20962,-0.04,0.45395,-0.19833,-0.04,0.45956,-0.18763,-0.04,0.46642,-0.1777,-0.04,0.47443,-0.16866,-0.04,0.48347,-0.16065,-0.04,0.49341,-0.15379,-0.04,0.5041,-0.14818,-0.04,0.51539,-0.1439,-0.04,0.52711,-0.14101,-0.04,0.5391,-0.13955,-0.04,0.55118,-0.13955,-0.04,0.56316,-0.14101,-0.04,0.57489,-0.1439,-0.04,0.58618,-0.14818,-0.04,0.59687,-0.15379,-0.04,0.60681,-0.16065,-0.04,0.61585,-0.16866,-0.04,0.62386,-0.1777,-0.04,0.63072,-0.18763,-0.04,0.63633,-0.19833,-0.04,0.64061,-0.20962,-0.04,0.6435,-0.22134,-0.04,0.64496,-0.23333,-0.04,0.64496,-0.24541,-0.04,0.6435,-0.25739,-0.04,0.64061,-0.26912,-0.04,0.63633,-0.28041,-0.04,0.63072,-0.2911,-0.04,0.62386,-0.30104,-0.04,0.61585,-0.31008,-0.04,0.60681,-0.31809,-0.04,0.59687,-0.32495,-0.04,0.58618,-0.33056,-0.04,0.57489,-0.33484,-0.04,0.56316,-0.33773,-0.04,0.55118,-0.33918,-0.04,0.5391,-0.33918,-0.04,0.52711,-0.33773,-0.04,0.51539,-0.33484,-0.04,0.5041,-0.33056,-0.04,0.49341,-0.32495,-0.04,0.48347,-0.31809,-0.04,0.47443,-0.31008,0,0.48347,-0.31809,0,0.49341,-0.32495,0,0.5041,-0.33056,0,0.51539,-0.33484,0,0.52711,-0.33773,0,0.5391,-0.33918,0,0.55118,-0.33918,0,0.56316,-0.33773,0,0.57489,-0.33484,0,0.58618,-0.33056,0,0.59687,-0.32495,0,0.60681,-0.31809,0,0.61585,-0.31008,0,0.62386,-0.30104,0,0.63072,-0.2911,0,0.63633,-0.28041,0,0.64061,-0.26912,0,0.6435,-0.25739,0,0.64496,-0.24541,0,0.64496,-0.23333,0,0.6435,-0.22134,0,0.64061,-0.20962,0,0.63633,-0.19833,0,0.63072,-0.18763,0,0.62386,-0.1777,0,0.61585,-0.16866,0,0.60681,-0.16065,0,0.59687,-0.15379,0,0.58618,-0.14818,0,0.57489,-0.1439,0,0.56316,-0.14101,0,0.55118,-0.13955,0,0.5391,-0.13955,0,0.52711,-0.14101,0,0.51539,-0.1439,0,0.5041,-0.14818,0,0.49341,-0.15379,0,0.48347,-0.16065,0,0.47443,-0.16866,0,0.46642,-0.1777,0,0.45956,-0.18763,0,0.45395,-0.19833,0,0.44967,-0.20962,0,0.44678,-0.22134,0,0.44532,-0.23333,0,0.44532,-0.24541,0,0.44678,-0.25739,0,0.44967,-0.26912,0,0.45395,-0.28041,0,0.45956,-0.2911,0,0.46642,-0.30104,0]);
IndexedFaceSet1934.coord = Coordinate1935;

let Normal1936 = browser.currentScene.createNode("Normal");
Normal1936.vector = new MFVec3f(new float[0.70711,0.70711,0,0.78718,0.61672,0,0.85578,0.51734,0,0.9119,0.41041,0,0.95472,0.2975,0,0.98362,0.18026,0,0.99818,0.06038,0,0.99818,-0.06038,0,0.98362,-0.18026,0,0.95472,-0.2975,0,0.9119,-0.41041,0,0.85578,-0.51734,0,0.78718,-0.61672,0,0.70711,-0.70711,0,0.61672,-0.78718,0,0.51734,-0.85578,0,0.41041,-0.9119,0,0.2975,-0.95472,0,0.18026,-0.98362,0,0.06038,-0.99818,0,-0.06038,-0.99818,0,-0.18026,-0.98362,0,-0.2975,-0.95472,0,-0.41041,-0.9119,0,-0.51734,-0.85578,0,-0.61672,-0.78718,0,-0.70711,-0.70711,0,-0.78718,-0.61672,0,-0.85578,-0.51734,0,-0.9119,-0.41041,0,-0.95472,-0.2975,0,-0.98362,-0.18026,0,-0.99818,-0.06038,0,-0.99818,0.06038,0,-0.98362,0.18026,0,-0.95472,0.2975,0,-0.9119,0.41041,0,-0.85578,0.51734,0,-0.78718,0.61672,0,-0.70711,0.70711,0,-0.61672,0.78718,0,-0.51734,0.85578,0,-0.41041,0.9119,0,-0.2975,0.95472,0,-0.18026,0.98362,0,-0.06038,0.99818,0,0.06038,0.99818,0,0.18026,0.98362,0,0.2975,0.95472,0,0.41041,0.9119,0,0.51734,0.85578,0,0.61672,0.78718,0,0.70711,0.70711,0,0.61672,0.78718,0,0.51734,0.85578,0,0.41041,0.9119,0,0.2975,0.95472,0,0.18026,0.98362,0,0.06038,0.99818,0,-0.06038,0.99818,0,-0.18026,0.98362,0,-0.2975,0.95472,0,-0.41041,0.9119,0,-0.51734,0.85578,0,-0.61672,0.78718,0,-0.70711,0.70711,0,-0.78718,0.61672,0,-0.85578,0.51734,0,-0.9119,0.41041,0,-0.95472,0.2975,0,-0.98362,0.18026,0,-0.99818,0.06038,0,-0.99818,-0.06038,0,-0.98362,-0.18026,0,-0.95472,-0.2975,0,-0.9119,-0.41041,0,-0.85578,-0.51734,0,-0.78718,-0.61672,0,-0.70711,-0.70711,0,-0.61672,-0.78718,0,-0.51734,-0.85578,0,-0.41041,-0.9119,0,-0.2975,-0.95472,0,-0.18026,-0.98362,0,-0.06038,-0.99818,0,0.06038,-0.99818,0,0.18026,-0.98362,0,0.2975,-0.95472,0,0.41041,-0.9119,0,0.51734,-0.85578,0,0.61672,-0.78718,0,0.70711,-0.70711,0,0.78718,-0.61672,0,0.85578,-0.51734,0,0.9119,-0.41041,0,0.95472,-0.2975,0,0.98362,-0.18026,0,0.99818,-0.06038,0,0.99818,0.06038,0,0.98362,0.18026,0,0.95472,0.2975,0,0.9119,0.41041,0,0.85578,0.51734,0,0.78718,0.61672,0]);
IndexedFaceSet1934.normal = Normal1936;

Shape1932.geometry = IndexedFaceSet1934;

Transform5.children[384] = Shape1932;

let Shape1937 = browser.currentScene.createNode("Shape");
let Appearance1938 = browser.currentScene.createNode("Appearance");
Appearance1938.USE = "baseplateAppearance";
Shape1937.appearance = Appearance1938;

let IndexedFaceSet1939 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1939.coordIndex = new MFInt32(new int[1,52,0,-1,1,103,52,-1,1,2,103,-1,103,2,102,-1,102,2,3,-1,101,3,4,-1,100,4,5,-1,99,5,6,-1,98,6,7,-1,97,7,8,-1,96,8,9,-1,95,9,10,-1,94,10,11,-1,93,11,12,-1,92,12,13,-1,91,13,14,-1,90,14,15,-1,89,15,16,-1,88,16,17,-1,87,17,18,-1,86,18,19,-1,85,19,20,-1,84,20,21,-1,83,21,22,-1,82,22,23,-1,81,23,24,-1,80,24,25,-1,79,25,26,-1,78,26,27,-1,77,27,28,-1,76,28,29,-1,75,29,30,-1,74,30,31,-1,73,31,32,-1,72,32,33,-1,71,33,34,-1,70,34,35,-1,69,35,36,-1,68,36,37,-1,67,37,38,-1,66,38,39,-1,65,39,40,-1,64,40,41,-1,63,41,42,-1,62,42,43,-1,61,43,44,-1,60,44,45,-1,59,45,46,-1,58,46,47,-1,57,47,48,-1,56,48,49,-1,55,49,50,-1,54,50,51,-1,53,51,0,-1,52,53,0,-1,102,3,101,-1,101,4,100,-1,100,5,99,-1,99,6,98,-1,98,7,97,-1,97,8,96,-1,96,9,95,-1,95,10,94,-1,94,11,93,-1,93,12,92,-1,92,13,91,-1,91,14,90,-1,90,15,89,-1,89,16,88,-1,88,17,87,-1,87,18,86,-1,86,19,85,-1,85,20,84,-1,84,21,83,-1,83,22,82,-1,82,23,81,-1,81,24,80,-1,80,25,79,-1,79,26,78,-1,78,27,77,-1,77,28,76,-1,76,29,75,-1,75,30,74,-1,74,31,73,-1,73,32,72,-1,72,33,71,-1,71,34,70,-1,70,35,69,-1,69,36,68,-1,68,37,67,-1,67,38,66,-1,66,39,65,-1,65,40,64,-1,64,41,63,-1,63,42,62,-1,62,43,61,-1,61,44,60,-1,60,45,59,-1,59,46,58,-1,58,47,57,-1,57,48,56,-1,56,49,55,-1,55,50,54,-1,54,51,53,-1]);
IndexedFaceSet1939.solid = False;
let Coordinate1940 = browser.currentScene.createNode("Coordinate");
Coordinate1940.point = new MFVec3f(new float[0.54514,-0.33937,-0.29819,0.53309,-0.33864,-0.29841,0.52121,-0.33646,-0.29906,0.50968,-0.33287,-0.30014,0.49867,-0.32791,-0.30163,0.48833,-0.32167,-0.3035,0.47883,-0.31422,-0.30573,0.47029,-0.30568,-0.3083,0.46284,-0.29617,-0.31115,0.45659,-0.28584,-0.31425,0.45164,-0.27483,-0.31755,0.44804,-0.2633,-0.32101,0.44587,-0.25142,-0.32457,0.44514,-0.23937,-0.32819,0.44587,-0.22731,-0.33181,0.44804,-0.21544,-0.33537,0.45164,-0.20391,-0.33883,0.45659,-0.1929,-0.34213,0.46284,-0.18256,-0.34523,0.47029,-0.17306,-0.34808,0.47883,-0.16452,-0.35065,0.48833,-0.15707,-0.35288,0.49867,-0.15082,-0.35475,0.50968,-0.14587,-0.35624,0.52121,-0.14227,-0.35732,0.53309,-0.1401,-0.35797,0.54514,-0.13937,-0.35819,0.55719,-0.1401,-0.35797,0.56907,-0.14227,-0.35732,0.5806,-0.14587,-0.35624,0.59161,-0.15082,-0.35475,0.60195,-0.15707,-0.35288,0.61145,-0.16452,-0.35065,0.61999,-0.17306,-0.34808,0.62744,-0.18256,-0.34523,0.63368,-0.1929,-0.34213,0.63864,-0.20391,-0.33883,0.64223,-0.21544,-0.33537,0.64441,-0.22731,-0.33181,0.64514,-0.23937,-0.32819,0.64441,-0.25142,-0.32457,0.64223,-0.2633,-0.32101,0.63864,-0.27483,-0.31755,0.63368,-0.28584,-0.31425,0.62744,-0.29617,-0.31115,0.61999,-0.30568,-0.3083,0.61145,-0.31422,-0.30573,0.60195,-0.32167,-0.3035,0.59161,-0.32791,-0.30163,0.5806,-0.33287,-0.30014,0.56907,-0.33646,-0.29906,0.55719,-0.33864,-0.29841,0.54514,-0.33937,-0.26951,0.55719,-0.33864,-0.2697,0.56907,-0.33646,-0.27028,0.5806,-0.33287,-0.27124,0.59161,-0.32791,-0.27256,0.60195,-0.32167,-0.27423,0.61145,-0.31422,-0.27621,0.61999,-0.30568,-0.27849,0.62744,-0.29617,-0.28102,0.63368,-0.28584,-0.28378,0.63864,-0.27483,-0.28672,0.64223,-0.2633,-0.28979,0.64441,-0.25142,-0.29296,0.64514,-0.23937,-0.29617,0.64441,-0.22731,-0.29939,0.64223,-0.21544,-0.30256,0.63864,-0.20391,-0.30563,0.63368,-0.1929,-0.30857,0.62744,-0.18256,-0.31132,0.61999,-0.17306,-0.31386,0.61145,-0.16452,-0.31613,0.60195,-0.15707,-0.31812,0.59161,-0.15082,-0.31979,0.5806,-0.14587,-0.32111,0.56907,-0.14227,-0.32207,0.55719,-0.1401,-0.32265,0.54514,-0.13937,-0.32284,0.53309,-0.1401,-0.32265,0.52121,-0.14227,-0.32207,0.50968,-0.14587,-0.32111,0.49867,-0.15082,-0.31979,0.48833,-0.15707,-0.31812,0.47883,-0.16452,-0.31613,0.47029,-0.17306,-0.31386,0.46284,-0.18256,-0.31132,0.45659,-0.1929,-0.30857,0.45164,-0.20391,-0.30563,0.44804,-0.21544,-0.30256,0.44587,-0.22731,-0.29939,0.44514,-0.23937,-0.29617,0.44587,-0.25142,-0.29296,0.44804,-0.2633,-0.28979,0.45164,-0.27483,-0.28672,0.45659,-0.28584,-0.28378,0.46284,-0.29617,-0.28102,0.47029,-0.30568,-0.27849,0.47883,-0.31422,-0.27621,0.48833,-0.32167,-0.27423,0.49867,-0.32791,-0.27256,0.50968,-0.33287,-0.27124,0.52121,-0.33646,-0.27028,0.53309,-0.33864,-0.2697]);
IndexedFaceSet1939.coord = Coordinate1940;

let Normal1941 = browser.currentScene.createNode("Normal");
Normal1941.vector = new MFVec3f(new float[0,1,0,0.12054,0.99271,0,0.23932,0.97094,0,0.3546,0.93502,0,0.46472,0.88546,0,0.56806,0.82298,0,0.66312,0.74851,0,0.74851,0.66312,0,0.82298,0.56806,0,0.88546,0.46472,0,0.93502,0.3546,0,0.97094,0.23932,0,0.99271,0.12054,0,1,0,0,0.99271,-0.12054,0,0.97094,-0.23932,0,0.93502,-0.3546,0,0.88546,-0.46472,0,0.82298,-0.56806,0,0.74851,-0.66312,0,0.66312,-0.74851,0,0.56806,-0.82298,0,0.46472,-0.88546,0,0.3546,-0.93502,0,0.23932,-0.97094,0,0.12054,-0.99271,0,0,-1,0,-0.12054,-0.99271,0,-0.23932,-0.97094,0,-0.3546,-0.93502,0,-0.46472,-0.88546,0,-0.56806,-0.82298,0,-0.66312,-0.74851,0,-0.74851,-0.66312,0,-0.82298,-0.56806,0,-0.88546,-0.46472,0,-0.93502,-0.3546,0,-0.97094,-0.23932,0,-0.99271,-0.12054,0,-1,0,0,-0.99271,0.12054,0,-0.97094,0.23932,0,-0.93502,0.3546,0,-0.88546,0.46472,0,-0.82298,0.56806,0,-0.74851,0.66312,0,-0.66312,0.74851,0,-0.56806,0.82298,0,-0.46472,0.88546,0,-0.3546,0.93502,0,-0.23932,0.97094,0,-0.12054,0.99271,0,0,1,0,-0.12054,0.99271,0,-0.23932,0.97094,0,-0.3546,0.93502,0,-0.46472,0.88546,0,-0.56806,0.82298,0,-0.66312,0.74851,0,-0.74851,0.66312,0,-0.82298,0.56806,0,-0.88546,0.46472,0,-0.93502,0.3546,0,-0.97094,0.23932,0,-0.99271,0.12054,0,-1,0,0,-0.99271,-0.12054,0,-0.97094,-0.23932,0,-0.93502,-0.3546,0,-0.88546,-0.46472,0,-0.82298,-0.56806,0,-0.74851,-0.66312,0,-0.66312,-0.74851,0,-0.56806,-0.82298,0,-0.46472,-0.88546,0,-0.3546,-0.93502,0,-0.23932,-0.97094,0,-0.12054,-0.99271,0,0,-1,0,0.12054,-0.99271,0,0.23932,-0.97094,0,0.3546,-0.93502,0,0.46472,-0.88546,0,0.56806,-0.82298,0,0.66312,-0.74851,0,0.74851,-0.66312,0,0.82298,-0.56806,0,0.88546,-0.46472,0,0.93502,-0.3546,0,0.97094,-0.23932,0,0.99271,-0.12054,0,1,0,0,0.99271,0.12054,0,0.97094,0.23932,0,0.93502,0.3546,0,0.88546,0.46472,0,0.82298,0.56806,0,0.74851,0.66312,0,0.66312,0.74851,0,0.56806,0.82298,0,0.46472,0.88546,0,0.3546,0.93502,0,0.23932,0.97094,0,0.12054,0.99271,0]);
IndexedFaceSet1939.normal = Normal1941;

Shape1937.geometry = IndexedFaceSet1939;

Transform5.children[385] = Shape1937;

let Shape1942 = browser.currentScene.createNode("Shape");
let Appearance1943 = browser.currentScene.createNode("Appearance");
Appearance1943.USE = "baseplateAppearance";
Shape1942.appearance = Appearance1943;

let IndexedFaceSet1944 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1944.coordIndex = new MFInt32(new int[33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,4,30,3,-1,4,29,30,-1,4,5,29,-1,29,5,28,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,32,1,31,-1,31,2,30,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1]);
IndexedFaceSet1944.solid = False;
let Coordinate1945 = browser.currentScene.createNode("Coordinate");
Coordinate1945.point = new MFVec3f(new float[-0.75,0.405,-0.04,-0.75,0.40919,-0.04018,-0.75,0.41335,-0.0407,-0.75,0.41745,-0.04157,-0.75,0.42146,-0.04278,-0.75,0.42535,-0.04433,-0.75,0.42909,-0.04622,-0.75,0.43263,-0.04843,-0.75,0.43595,-0.05097,-0.75,0.43901,-0.05381,-0.75,0.44177,-0.05694,-0.75,0.44418,-0.06033,-0.75,0.44622,-0.06395,-0.75,0.44785,-0.06779,-0.75,0.44904,-0.07177,-0.75,0.44976,-0.07585,-0.75,0.45,-0.08,-0.4,0.45,-0.08,-0.4,0.44982,-0.07641,-0.4,0.44925,-0.07273,-0.4,0.44826,-0.069,-0.4,0.44684,-0.06528,-0.4,0.44497,-0.06163,-0.4,0.44266,-0.05812,-0.4,0.43994,-0.05479,-0.4,0.43682,-0.05172,-0.4,0.43336,-0.04895,-0.4,0.42962,-0.04652,-0.4,0.42567,-0.04447,-0.4,0.42156,-0.04281,-0.4,0.41738,-0.04155,-0.4,0.41319,-0.04067,-0.4,0.40904,-0.04017,-0.4,0.405,-0.04]);
IndexedFaceSet1944.coord = Coordinate1945;

let Normal1946 = browser.currentScene.createNode("Normal");
Normal1946.vector = new MFVec3f(new float[0,0,-1,0,-0.08281,-0.99657,0,-0.16549,-0.98621,0,-0.24789,-0.96879,0,-0.32979,-0.94405,0,-0.41092,-0.91167,0,-0.49075,-0.8713,0,-0.56869,-0.82255,0,-0.64408,-0.76496,0,-0.71606,-0.69804,0,-0.78315,-0.62184,0,-0.84391,-0.53649,0,-0.89696,-0.44211,0,-0.94066,-0.33936,0,-0.97311,-0.23036,0,-0.99317,-0.11667,0,-1,0,0,-1,0,0,-0.99489,-0.10098,0,-0.97901,-0.20381,0,-0.95188,-0.30649,0,-0.9135,-0.40685,0,-0.8644,-0.50281,0,-0.80557,-0.5925,0,-0.73837,-0.67439,0,-0.66436,-0.74741,0,-0.58519,-0.81089,0,-0.50245,-0.8646,0,-0.41761,-0.90863,0,-0.33195,-0.9433,0,-0.24655,-0.96913,0,-0.16231,-0.98674,0,-0.07994,-0.9968,0,0,-1]);
IndexedFaceSet1944.normal = Normal1946;

Shape1942.geometry = IndexedFaceSet1944;

Transform5.children[386] = Shape1942;

let Shape1947 = browser.currentScene.createNode("Shape");
let Appearance1948 = browser.currentScene.createNode("Appearance");
Appearance1948.USE = "baseplateAppearance";
Shape1947.appearance = Appearance1948;

let IndexedFaceSet1949 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1949.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1949.solid = False;
let Coordinate1950 = browser.currentScene.createNode("Coordinate");
Coordinate1950.point = new MFVec3f(new float[-0.75,-0.405,-0.04,-0.75,0.405,-0.04,-0.4,0.405,-0.04,-0.4,-0.405,-0.04]);
IndexedFaceSet1949.coord = Coordinate1950;

let Normal1951 = browser.currentScene.createNode("Normal");
Normal1951.vector = new MFVec3f(new float[0,0,-1,0,0,-1,0,0,-1,0,0,-1]);
IndexedFaceSet1949.normal = Normal1951;

Shape1947.geometry = IndexedFaceSet1949;

Transform5.children[387] = Shape1947;

let Shape1952 = browser.currentScene.createNode("Shape");
let Appearance1953 = browser.currentScene.createNode("Appearance");
Appearance1953.USE = "baseplateAppearance";
Shape1952.appearance = Appearance1953;

let IndexedFaceSet1954 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1954.coordIndex = new MFInt32(new int[33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,29,3,4,-1,28,4,5,-1,27,5,6,-1,26,6,7,-1,25,7,8,-1,24,8,9,-1,23,9,10,-1,22,10,11,-1,21,11,12,-1,20,12,13,-1,14,20,13,-1,14,19,20,-1,14,15,19,-1,19,15,18,-1,18,15,16,-1,17,18,16,-1,32,1,31,-1,31,2,30,-1,30,3,29,-1,29,4,28,-1,28,5,27,-1,27,6,26,-1,26,7,25,-1,25,8,24,-1,24,9,23,-1,23,10,22,-1,22,11,21,-1,21,12,20,-1]);
IndexedFaceSet1954.solid = False;
let Coordinate1955 = browser.currentScene.createNode("Coordinate");
Coordinate1955.point = new MFVec3f(new float[-0.75,-0.45,-0.08,-0.75,-0.44976,-0.07585,-0.75,-0.44904,-0.07177,-0.75,-0.44785,-0.06779,-0.75,-0.44622,-0.06395,-0.75,-0.44418,-0.06033,-0.75,-0.44176,-0.05694,-0.75,-0.43901,-0.05381,-0.75,-0.43595,-0.05096,-0.75,-0.43263,-0.04843,-0.75,-0.42909,-0.04622,-0.75,-0.42535,-0.04433,-0.75,-0.42146,-0.04278,-0.75,-0.41745,-0.04157,-0.75,-0.41335,-0.0407,-0.75,-0.40919,-0.04018,-0.75,-0.405,-0.04,-0.4,-0.405,-0.04,-0.4,-0.40904,-0.04017,-0.4,-0.41319,-0.04067,-0.4,-0.41738,-0.04155,-0.4,-0.42156,-0.04281,-0.4,-0.42567,-0.04447,-0.4,-0.42962,-0.04652,-0.4,-0.43336,-0.04895,-0.4,-0.43682,-0.05172,-0.4,-0.43994,-0.05479,-0.4,-0.44266,-0.05812,-0.4,-0.44497,-0.06163,-0.4,-0.44684,-0.06528,-0.4,-0.44826,-0.069,-0.4,-0.44925,-0.07273,-0.4,-0.44982,-0.07641,-0.4,-0.45,-0.08]);
IndexedFaceSet1954.coord = Coordinate1955;

let Normal1956 = browser.currentScene.createNode("Normal");
Normal1956.vector = new MFVec3f(new float[0,1,0,0,0.99317,-0.11669,0,0.97309,-0.23042,0,0.94061,-0.33949,0,0.8969,-0.44224,0,0.84386,-0.53656,0,0.78311,-0.62188,0,0.71603,-0.69807,0,0.64405,-0.76499,0,0.56866,-0.82257,0,0.49074,-0.87131,0,0.41093,-0.91167,0,0.32979,-0.94405,0,0.24794,-0.96877,0,0.1656,-0.98619,0,0.0829,-0.99656,0,0,-1,0,0,-1,0,0.07994,-0.9968,0,0.16231,-0.98674,0,0.24655,-0.96913,0,0.33195,-0.9433,0,0.41761,-0.90863,0,0.50245,-0.8646,0,0.58519,-0.81089,0,0.66436,-0.74741,0,0.73837,-0.67439,0,0.80557,-0.5925,0,0.8644,-0.50281,0,0.9135,-0.40685,0,0.95188,-0.30649,0,0.97901,-0.20381,0,0.99489,-0.10098,0,1,0]);
IndexedFaceSet1954.normal = Normal1956;

Shape1952.geometry = IndexedFaceSet1954;

Transform5.children[388] = Shape1952;

let Shape1957 = browser.currentScene.createNode("Shape");
let Appearance1958 = browser.currentScene.createNode("Appearance");
Appearance1958.USE = "baseplateAppearance";
Shape1957.appearance = Appearance1958;

let IndexedFaceSet1959 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1959.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet1959.solid = False;
let Coordinate1960 = browser.currentScene.createNode("Coordinate");
Coordinate1960.point = new MFVec3f(new float[-0.75,-0.45,-0.21024,-0.75,-0.45,-0.08,-0.4,-0.45,-0.08,-0.4,-0.45,-0.21024]);
IndexedFaceSet1959.coord = Coordinate1960;

let Normal1961 = browser.currentScene.createNode("Normal");
Normal1961.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet1959.normal = Normal1961;

Shape1957.geometry = IndexedFaceSet1959;

Transform5.children[389] = Shape1957;

let Shape1962 = browser.currentScene.createNode("Shape");
let Appearance1963 = browser.currentScene.createNode("Appearance");
Appearance1963.USE = "baseplateAppearance";
Shape1962.appearance = Appearance1963;

let IndexedFaceSet1964 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1964.coordIndex = new MFInt32(new int[33,0,32,-1,32,0,1,-1,2,32,1,-1,2,31,32,-1,2,3,31,-1,31,3,30,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1]);
IndexedFaceSet1964.solid = False;
let Coordinate1965 = browser.currentScene.createNode("Coordinate");
Coordinate1965.point = new MFVec3f(new float[-0.75,-0.41793,-0.24856,-0.75,-0.42116,-0.24758,-0.75,-0.4243,-0.24638,-0.75,-0.42736,-0.24496,-0.75,-0.43031,-0.24332,-0.75,-0.43312,-0.24147,-0.75,-0.43578,-0.23942,-0.75,-0.43828,-0.23716,-0.75,-0.44059,-0.23472,-0.75,-0.44269,-0.2321,-0.75,-0.44455,-0.22932,-0.75,-0.44617,-0.22639,-0.75,-0.44753,-0.22332,-0.75,-0.4486,-0.22014,-0.75,-0.44937,-0.2169,-0.75,-0.44984,-0.21359,-0.75,-0.45,-0.21024,-0.4,-0.45,-0.21024,-0.4,-0.44987,-0.21326,-0.4,-0.44948,-0.21633,-0.4,-0.4488,-0.21942,-0.4,-0.44784,-0.2225,-0.4,-0.44658,-0.22554,-0.4,-0.44503,-0.22852,-0.4,-0.4432,-0.23139,-0.4,-0.4411,-0.23412,-0.4,-0.43876,-0.23669,-0.4,-0.43619,-0.23907,-0.4,-0.43343,-0.24125,-0.4,-0.43052,-0.24319,-0.4,-0.42747,-0.2449,-0.4,-0.42434,-0.24636,-0.4,-0.42115,-0.24758,-0.4,-0.41793,-0.24856]);
IndexedFaceSet1964.coord = Coordinate1965;

let Normal1966 = browser.currentScene.createNode("Normal");
Normal1966.vector = new MFVec3f(new float[0,0.25766,0.96623,0,0.32355,0.94621,0,0.38891,0.92127,0,0.45358,0.89121,0,0.51733,0.85579,0,0.57971,0.81482,0,0.64034,0.76809,0,0.69876,0.71535,0,0.75431,0.65652,0,0.80612,0.59175,0,0.85351,0.52107,0,0.89574,0.44457,0,0.93196,0.36257,0,0.96109,0.27624,0,0.98246,0.18648,0,0.99556,0.09409,0,1,0,0,1,0,0,0.9964,0.08481,0,0.98534,0.17062,0,0.96661,0.25625,0,0.94024,0.34052,0,0.90649,0.42222,0,0.86587,0.50027,0,0.81904,0.57373,0,0.76682,0.64186,0,0.71011,0.7041,0,0.6498,0.7601,0,0.5868,0.80973,0,0.52195,0.85298,0,0.45599,0.88999,0,0.38959,0.92099,0,0.32332,0.94629,0,0.25766,0.96623]);
IndexedFaceSet1964.normal = Normal1966;

Shape1962.geometry = IndexedFaceSet1964;

Transform5.children[390] = Shape1962;

let Shape1967 = browser.currentScene.createNode("Shape");
let Appearance1968 = browser.currentScene.createNode("Appearance");
Appearance1968.USE = "baseplateAppearance";
Shape1967.appearance = Appearance1968;

let IndexedFaceSet1969 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1969.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet1969.solid = False;
let Coordinate1970 = browser.currentScene.createNode("Coordinate");
Coordinate1970.point = new MFVec3f(new float[-0.75,-0.01293,-0.35656,-0.75,-0.41793,-0.24856,-0.4,-0.41793,-0.24856,-0.4,-0.01293,-0.35656]);
IndexedFaceSet1969.coord = Coordinate1970;

let Normal1971 = browser.currentScene.createNode("Normal");
Normal1971.vector = new MFVec3f(new float[0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623]);
IndexedFaceSet1969.normal = Normal1971;

Shape1967.geometry = IndexedFaceSet1969;

Transform5.children[391] = Shape1967;

let Shape1972 = browser.currentScene.createNode("Shape");
let Appearance1973 = browser.currentScene.createNode("Appearance");
Appearance1973.USE = "baseplateAppearance";
Shape1972.appearance = Appearance1973;

let IndexedFaceSet1974 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1974.coordIndex = new MFInt32(new int[17,0,16,-1,16,0,1,-1,15,1,2,-1,14,2,3,-1,13,3,4,-1,5,13,4,-1,5,12,13,-1,5,6,12,-1,12,6,11,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,1,15,-1,15,2,14,-1,14,3,13,-1,11,7,10,-1]);
IndexedFaceSet1974.solid = False;
let Coordinate1975 = browser.currentScene.createNode("Coordinate");
Coordinate1975.point = new MFVec3f(new float[-0.75,0.01293,-0.35656,-0.75,0.00975,-0.35729,-0.75,0.00652,-0.35782,-0.75,0.00327,-0.35814,-0.75,0,-0.35824,-0.75,-0.00327,-0.35814,-0.75,-0.00652,-0.35782,-0.75,-0.00975,-0.35729,-0.75,-0.01293,-0.35656,-0.4,-0.01293,-0.35656,-0.4,-0.00979,-0.35729,-0.4,-0.00657,-0.35781,-0.4,-0.0033,-0.35814,-0.4,0,-0.35824,-0.4,0.0033,-0.35814,-0.4,0.00657,-0.35781,-0.4,0.00979,-0.35729,-0.4,0.01293,-0.35656]);
IndexedFaceSet1974.coord = Coordinate1975;

let Normal1976 = browser.currentScene.createNode("Normal");
Normal1976.vector = new MFVec3f(new float[0,-0.25766,0.96623,0,-0.19347,0.98111,0,-0.12908,0.99163,0,-0.06458,0.99791,0,0,1,0,0.06458,0.99791,0,0.12908,0.99163,0,0.19347,0.98111,0,0.25766,0.96623,0,0.25766,0.96623,0,0.19432,0.98094,0,0.13005,0.99151,0,0.06518,0.99787,0,0,1,0,-0.06518,0.99787,0,-0.13005,0.99151,0,-0.19432,0.98094,0,-0.25766,0.96623]);
IndexedFaceSet1974.normal = Normal1976;

Shape1972.geometry = IndexedFaceSet1974;

Transform5.children[392] = Shape1972;

let Shape1977 = browser.currentScene.createNode("Shape");
let Appearance1978 = browser.currentScene.createNode("Appearance");
Appearance1978.USE = "baseplateAppearance";
Shape1977.appearance = Appearance1978;

let IndexedFaceSet1979 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1979.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet1979.solid = False;
let Coordinate1980 = browser.currentScene.createNode("Coordinate");
Coordinate1980.point = new MFVec3f(new float[-0.75,0.41793,-0.24856,-0.75,0.01293,-0.35656,-0.4,0.01293,-0.35656,-0.4,0.41793,-0.24856]);
IndexedFaceSet1979.coord = Coordinate1980;

let Normal1981 = browser.currentScene.createNode("Normal");
Normal1981.vector = new MFVec3f(new float[0,-0.25766,0.96623,0,-0.25766,0.96623,0,-0.25766,0.96623,0,-0.25766,0.96623]);
IndexedFaceSet1979.normal = Normal1981;

Shape1977.geometry = IndexedFaceSet1979;

Transform5.children[393] = Shape1977;

let Shape1982 = browser.currentScene.createNode("Shape");
let Appearance1983 = browser.currentScene.createNode("Appearance");
Appearance1983.USE = "baseplateAppearance";
Shape1982.appearance = Appearance1983;

let IndexedFaceSet1984 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1984.coordIndex = new MFInt32(new int[33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,29,3,4,-1,28,4,5,-1,27,5,6,-1,26,6,7,-1,25,7,8,-1,24,8,9,-1,23,9,10,-1,22,10,11,-1,21,11,12,-1,20,12,13,-1,19,13,14,-1,18,14,15,-1,16,18,15,-1,16,17,18,-1,32,1,31,-1,31,2,30,-1,30,3,29,-1,29,4,28,-1,28,5,27,-1,27,6,26,-1,26,7,25,-1,25,8,24,-1,24,9,23,-1,23,10,22,-1,22,11,21,-1,21,12,20,-1,20,13,19,-1,19,14,18,-1]);
IndexedFaceSet1984.solid = False;
let Coordinate1985 = browser.currentScene.createNode("Coordinate");
Coordinate1985.point = new MFVec3f(new float[-0.75,0.45,-0.21024,-0.75,0.44984,-0.21359,-0.75,0.44937,-0.21691,-0.75,0.44859,-0.22017,-0.75,0.44752,-0.22335,-0.75,0.44616,-0.22642,-0.75,0.44453,-0.22935,-0.75,0.44266,-0.23214,-0.75,0.44057,-0.23475,-0.75,0.43827,-0.23718,-0.75,0.43577,-0.23943,-0.75,0.4331,-0.24148,-0.75,0.43029,-0.24333,-0.75,0.42735,-0.24496,-0.75,0.4243,-0.24638,-0.75,0.42116,-0.24758,-0.75,0.41793,-0.24856,-0.4,0.41793,-0.24856,-0.4,0.42115,-0.24758,-0.4,0.42434,-0.24636,-0.4,0.42747,-0.2449,-0.4,0.43052,-0.24319,-0.4,0.43343,-0.24125,-0.4,0.43619,-0.23907,-0.4,0.43876,-0.23669,-0.4,0.4411,-0.23412,-0.4,0.4432,-0.23139,-0.4,0.44503,-0.22852,-0.4,0.44658,-0.22554,-0.4,0.44784,-0.2225,-0.4,0.4488,-0.21942,-0.4,0.44948,-0.21633,-0.4,0.44987,-0.21326,-0.4,0.45,-0.21024]);
IndexedFaceSet1984.coord = Coordinate1985;

let Normal1986 = browser.currentScene.createNode("Normal");
Normal1986.vector = new MFVec3f(new float[0,-1,0,0,-0.99556,0.09415,0,-0.98239,0.18682,0,-0.96085,0.27707,0,-0.93159,0.36351,0,-0.89539,0.44529,0,-0.853,0.52191,0,-0.80547,0.59264,0,-0.75367,0.65725,0,-0.69833,0.71578,0,-0.64005,0.76833,0,-0.57938,0.81506,0,-0.51704,0.85596,0,-0.45344,0.89129,0,-0.38888,0.92129,0,-0.32356,0.94621,0,-0.25766,0.96623,0,-0.25766,0.96623,0,-0.32332,0.94629,0,-0.38959,0.92099,0,-0.45599,0.88999,0,-0.52195,0.85298,0,-0.5868,0.80973,0,-0.6498,0.7601,0,-0.71011,0.7041,0,-0.76682,0.64186,0,-0.81904,0.57373,0,-0.86587,0.50027,0,-0.90649,0.42222,0,-0.94024,0.34052,0,-0.96661,0.25625,0,-0.98534,0.17062,0,-0.9964,0.08481,0,-1,0]);
IndexedFaceSet1984.normal = Normal1986;

Shape1982.geometry = IndexedFaceSet1984;

Transform5.children[394] = Shape1982;

let Shape1987 = browser.currentScene.createNode("Shape");
let Appearance1988 = browser.currentScene.createNode("Appearance");
Appearance1988.USE = "baseplateAppearance";
Shape1987.appearance = Appearance1988;

let IndexedFaceSet1989 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1989.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet1989.solid = False;
let Coordinate1990 = browser.currentScene.createNode("Coordinate");
Coordinate1990.point = new MFVec3f(new float[-0.75,0.45,-0.08,-0.75,0.45,-0.21024,-0.4,0.45,-0.21024,-0.4,0.45,-0.08]);
IndexedFaceSet1989.coord = Coordinate1990;

let Normal1991 = browser.currentScene.createNode("Normal");
Normal1991.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet1989.normal = Normal1991;

Shape1987.geometry = IndexedFaceSet1989;

Transform5.children[395] = Shape1987;

let Shape1992 = browser.currentScene.createNode("Shape");
let Appearance1993 = browser.currentScene.createNode("Appearance");
Appearance1993.USE = "baseplateAppearance";
Shape1992.appearance = Appearance1993;

let IndexedFaceSet1994 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1994.coordIndex = new MFInt32(new int[76,0,30,-1,31,76,30,-1,31,32,76,-1,76,32,33,-1,34,76,33,-1,34,75,76,-1,34,74,75,-1,34,73,74,-1,34,72,73,-1,34,71,72,-1,34,70,71,-1,34,69,70,-1,34,68,69,-1,34,67,68,-1,34,35,67,-1,67,35,36,-1,37,67,36,-1,37,38,67,-1,67,38,66,-1,66,38,65,-1,65,38,39,-1,64,39,40,-1,63,40,41,-1,62,41,42,-1,61,42,60,-1,61,62,42,-1,2,29,1,-1,2,28,29,-1,2,3,28,-1,28,3,17,-1,18,28,17,-1,18,19,28,-1,28,19,20,-1,21,28,20,-1,21,22,28,-1,28,22,23,-1,24,28,23,-1,24,25,28,-1,28,25,26,-1,27,28,26,-1,4,5,3,-1,3,5,6,-1,7,3,6,-1,7,8,3,-1,3,8,9,-1,10,3,9,-1,10,11,3,-1,3,11,12,-1,13,3,12,-1,13,14,3,-1,3,14,15,-1,16,3,15,-1,16,17,3,-1,29,30,1,-1,1,30,0,-1,65,39,64,-1,64,40,63,-1,63,41,62,-1,42,43,60,-1,60,43,59,-1,59,43,44,-1,58,44,45,-1,57,45,46,-1,56,46,55,-1,56,57,46,-1,59,44,58,-1,58,45,57,-1,46,47,55,-1,55,47,54,-1,54,47,48,-1,53,48,49,-1,52,49,50,-1,51,52,50,-1,54,48,53,-1,53,49,52,-1]);
IndexedFaceSet1994.solid = False;
let Coordinate1995 = browser.currentScene.createNode("Coordinate");
Coordinate1995.point = new MFVec3f(new float[-0.4,-0.41793,-0.24856,-0.4,-0.42115,-0.24758,-0.4,-0.42434,-0.24636,-0.4,-0.42747,-0.2449,-0.4,-0.43052,-0.24319,-0.4,-0.43343,-0.24125,-0.4,-0.43619,-0.23907,-0.4,-0.43876,-0.23669,-0.4,-0.4411,-0.23412,-0.4,-0.4432,-0.23139,-0.4,-0.44503,-0.22852,-0.4,-0.44658,-0.22554,-0.4,-0.44784,-0.2225,-0.4,-0.4488,-0.21942,-0.4,-0.44948,-0.21633,-0.4,-0.44987,-0.21326,-0.4,-0.45,-0.21024,-0.4,-0.45,-0.08,-0.4,-0.44982,-0.07641,-0.4,-0.44925,-0.07273,-0.4,-0.44826,-0.069,-0.4,-0.44684,-0.06528,-0.4,-0.44497,-0.06163,-0.4,-0.44266,-0.05812,-0.4,-0.43994,-0.05479,-0.4,-0.43682,-0.05172,-0.4,-0.43336,-0.04895,-0.4,-0.42962,-0.04652,-0.4,-0.42567,-0.04447,-0.4,-0.42156,-0.04281,-0.4,-0.41738,-0.04155,-0.4,-0.41319,-0.04067,-0.4,-0.40904,-0.04017,-0.4,-0.405,-0.04,-0.4,0.405,-0.04,-0.4,0.40904,-0.04017,-0.4,0.41319,-0.04067,-0.4,0.41738,-0.04155,-0.4,0.42156,-0.04281,-0.4,0.42567,-0.04447,-0.4,0.42962,-0.04652,-0.4,0.43336,-0.04895,-0.4,0.43682,-0.05172,-0.4,0.43994,-0.05479,-0.4,0.44266,-0.05812,-0.4,0.44497,-0.06163,-0.4,0.44684,-0.06528,-0.4,0.44826,-0.069,-0.4,0.44925,-0.07273,-0.4,0.44982,-0.07641,-0.4,0.45,-0.08,-0.4,0.45,-0.21024,-0.4,0.44987,-0.21326,-0.4,0.44948,-0.21633,-0.4,0.4488,-0.21942,-0.4,0.44784,-0.2225,-0.4,0.44658,-0.22554,-0.4,0.44503,-0.22852,-0.4,0.4432,-0.23139,-0.4,0.4411,-0.23412,-0.4,0.43876,-0.23669,-0.4,0.43619,-0.23907,-0.4,0.43343,-0.24125,-0.4,0.43052,-0.24319,-0.4,0.42747,-0.2449,-0.4,0.42434,-0.24636,-0.4,0.42115,-0.24758,-0.4,0.41793,-0.24856,-0.4,0.01293,-0.35656,-0.4,0.00979,-0.35729,-0.4,0.00657,-0.35781,-0.4,0.0033,-0.35814,-0.4,0,-0.35824,-0.4,-0.0033,-0.35814,-0.4,-0.00657,-0.35781,-0.4,-0.00979,-0.35729,-0.4,-0.01293,-0.35656]);
IndexedFaceSet1994.coord = Coordinate1995;

let Normal1996 = browser.currentScene.createNode("Normal");
Normal1996.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet1994.normal = Normal1996;

Shape1992.geometry = IndexedFaceSet1994;

Transform5.children[396] = Shape1992;

let Shape1997 = browser.currentScene.createNode("Shape");
let Appearance1998 = browser.currentScene.createNode("Appearance");
Appearance1998.USE = "baseplateAppearance";
Shape1997.appearance = Appearance1998;

let IndexedFaceSet1999 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1999.coordIndex = new MFInt32(new int[1,17,0,-1,1,16,17,-1,1,15,16,-1,1,14,15,-1,1,13,14,-1,1,12,13,-1,1,11,12,-1,1,10,11,-1,1,9,10,-1,1,8,9,-1,1,7,8,-1,1,6,7,-1,1,5,6,-1,1,4,5,-1,1,2,4,-1,4,2,55,-1,55,2,54,-1,54,2,53,-1,53,2,52,-1,52,2,51,-1,51,2,50,-1,50,2,49,-1,49,2,48,-1,48,2,47,-1,47,2,46,-1,46,2,45,-1,45,2,44,-1,44,2,43,-1,43,2,42,-1,42,2,3,-1,41,3,40,-1,41,42,3,-1,0,30,3,-1,0,29,30,-1,0,28,29,-1,0,27,28,-1,0,26,27,-1,0,25,26,-1,0,24,25,-1,0,23,24,-1,0,22,23,-1,0,21,22,-1,0,20,21,-1,0,19,20,-1,0,18,19,-1,0,17,18,-1,30,31,3,-1,3,31,32,-1,33,3,32,-1,33,34,3,-1,3,34,35,-1,36,3,35,-1,36,37,3,-1,3,37,38,-1,39,3,38,-1,39,40,3,-1]);
IndexedFaceSet1999.solid = False;
let Coordinate2000 = browser.currentScene.createNode("Coordinate");
Coordinate2000.point = new MFVec3f(new float[0.375,-0.01293,-0.35656,0.375,-0.41793,-0.24856,0.75,-0.41793,-0.24856,0.75,-0.01293,-0.35656,0.54514,-0.33937,-0.26951,0.53309,-0.33864,-0.2697,0.52121,-0.33646,-0.27028,0.50968,-0.33287,-0.27124,0.49867,-0.32791,-0.27256,0.48833,-0.32167,-0.27423,0.47883,-0.31422,-0.27621,0.47029,-0.30568,-0.27849,0.46284,-0.29617,-0.28102,0.45659,-0.28584,-0.28378,0.45164,-0.27483,-0.28672,0.44804,-0.2633,-0.28979,0.44587,-0.25142,-0.29296,0.44514,-0.23937,-0.29617,0.44587,-0.22731,-0.29939,0.44804,-0.21544,-0.30256,0.45164,-0.20391,-0.30563,0.45659,-0.1929,-0.30857,0.46284,-0.18256,-0.31132,0.47029,-0.17306,-0.31386,0.47883,-0.16452,-0.31613,0.48833,-0.15707,-0.31812,0.49867,-0.15082,-0.31979,0.50968,-0.14587,-0.32111,0.52121,-0.14227,-0.32207,0.53309,-0.1401,-0.32265,0.54514,-0.13937,-0.32284,0.55719,-0.1401,-0.32265,0.56907,-0.14227,-0.32207,0.5806,-0.14587,-0.32111,0.59161,-0.15082,-0.31979,0.60195,-0.15707,-0.31812,0.61145,-0.16452,-0.31613,0.61999,-0.17306,-0.31386,0.62744,-0.18256,-0.31132,0.63368,-0.1929,-0.30857,0.63864,-0.20391,-0.30563,0.64223,-0.21544,-0.30256,0.64441,-0.22731,-0.29939,0.64514,-0.23937,-0.29617,0.64441,-0.25142,-0.29296,0.64223,-0.2633,-0.28979,0.63864,-0.27483,-0.28672,0.63368,-0.28584,-0.28378,0.62744,-0.29617,-0.28102,0.61999,-0.30568,-0.27849,0.61145,-0.31422,-0.27621,0.60195,-0.32167,-0.27423,0.59161,-0.32791,-0.27256,0.5806,-0.33287,-0.27124,0.56907,-0.33646,-0.27028,0.55719,-0.33864,-0.2697]);
IndexedFaceSet1999.coord = Coordinate2000;

let Normal2001 = browser.currentScene.createNode("Normal");
Normal2001.vector = new MFVec3f(new float[0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623,0,0.25766,0.96623]);
IndexedFaceSet1999.normal = Normal2001;

Shape1997.geometry = IndexedFaceSet1999;

Transform5.children[397] = Shape1997;

let Shape2002 = browser.currentScene.createNode("Shape");
let Appearance2003 = browser.currentScene.createNode("Appearance");
Appearance2003.USE = "baseplateAppearance";
Shape2002.appearance = Appearance2003;

let IndexedFaceSet2004 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2004.coordIndex = new MFInt32(new int[17,0,16,-1,16,0,1,-1,2,16,1,-1,2,15,16,-1,2,3,15,-1,15,3,14,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,9,-1,10,11,7,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,7,8,9,-1]);
IndexedFaceSet2004.solid = False;
let Coordinate2005 = browser.currentScene.createNode("Coordinate");
Coordinate2005.point = new MFVec3f(new float[0.375,0.01293,-0.35656,0.375,0.00979,-0.35729,0.375,0.00657,-0.35781,0.375,0.0033,-0.35814,0.375,0,-0.35824,0.375,-0.0033,-0.35814,0.375,-0.00657,-0.35781,0.375,-0.00979,-0.35729,0.375,-0.01293,-0.35656,0.75,-0.01293,-0.35656,0.75,-0.00979,-0.35729,0.75,-0.00657,-0.35781,0.75,-0.0033,-0.35814,0.75,0,-0.35824,0.75,0.0033,-0.35814,0.75,0.00657,-0.35781,0.75,0.00979,-0.35729,0.75,0.01293,-0.35656]);
IndexedFaceSet2004.coord = Coordinate2005;

let Normal2006 = browser.currentScene.createNode("Normal");
Normal2006.vector = new MFVec3f(new float[0,-0.25766,0.96623,0,-0.19432,0.98094,0,-0.13005,0.99151,0,-0.06518,0.99787,0,0,1,0,0.06518,0.99787,0,0.13005,0.99151,0,0.19432,0.98094,0,0.25766,0.96623,0,0.25766,0.96623,0,0.19432,0.98094,0,0.13005,0.99151,0,0.06518,0.99787,0,0,1,0,-0.06518,0.99787,0,-0.13005,0.99151,0,-0.19432,0.98094,0,-0.25766,0.96623]);
IndexedFaceSet2004.normal = Normal2006;

Shape2002.geometry = IndexedFaceSet2004;

Transform5.children[398] = Shape2002;

let Shape2007 = browser.currentScene.createNode("Shape");
let Appearance2008 = browser.currentScene.createNode("Appearance");
Appearance2008.USE = "baseplateAppearance";
Shape2007.appearance = Appearance2008;

let IndexedFaceSet2009 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2009.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet2009.solid = False;
let Coordinate2010 = browser.currentScene.createNode("Coordinate");
Coordinate2010.point = new MFVec3f(new float[0.375,0.41793,-0.24856,0.375,0.01293,-0.35656,0.75,0.01293,-0.35656,0.75,0.41793,-0.24856]);
IndexedFaceSet2009.coord = Coordinate2010;

let Normal2011 = browser.currentScene.createNode("Normal");
Normal2011.vector = new MFVec3f(new float[0,-0.25766,0.96623,0,-0.25766,0.96623,0,-0.25766,0.96623,0,-0.25766,0.96623]);
IndexedFaceSet2009.normal = Normal2011;

Shape2007.geometry = IndexedFaceSet2009;

Transform5.children[399] = Shape2007;

let Shape2012 = browser.currentScene.createNode("Shape");
let Appearance2013 = browser.currentScene.createNode("Appearance");
Appearance2013.USE = "baseplateAppearance";
Shape2012.appearance = Appearance2013;

let IndexedFaceSet2014 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2014.coordIndex = new MFInt32(new int[0,1,33,-1,33,1,32,-1,32,1,2,-1,31,2,3,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,32,2,31,-1,31,3,30,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1]);
IndexedFaceSet2014.solid = False;
let Coordinate2015 = browser.currentScene.createNode("Coordinate");
Coordinate2015.point = new MFVec3f(new float[0.375,0.45,-0.21024,0.375,0.44987,-0.21326,0.375,0.44948,-0.21633,0.375,0.4488,-0.21942,0.375,0.44784,-0.2225,0.375,0.44658,-0.22554,0.375,0.44503,-0.22852,0.375,0.4432,-0.23139,0.375,0.4411,-0.23412,0.375,0.43876,-0.23669,0.375,0.43619,-0.23907,0.375,0.43343,-0.24125,0.375,0.43052,-0.24319,0.375,0.42747,-0.2449,0.375,0.42434,-0.24636,0.375,0.42115,-0.24758,0.375,0.41793,-0.24856,0.75,0.41793,-0.24856,0.75,0.42115,-0.24758,0.75,0.42434,-0.24636,0.75,0.42747,-0.2449,0.75,0.43052,-0.24319,0.75,0.43343,-0.24125,0.75,0.43619,-0.23907,0.75,0.43876,-0.23669,0.75,0.4411,-0.23412,0.75,0.4432,-0.23139,0.75,0.44503,-0.22852,0.75,0.44658,-0.22554,0.75,0.44784,-0.2225,0.75,0.4488,-0.21942,0.75,0.44948,-0.21633,0.75,0.44987,-0.21326,0.75,0.45,-0.21024]);
IndexedFaceSet2014.coord = Coordinate2015;

let Normal2016 = browser.currentScene.createNode("Normal");
Normal2016.vector = new MFVec3f(new float[0,-1,0,0,-0.9964,0.08481,0,-0.98534,0.17062,0,-0.96661,0.25625,0,-0.94024,0.34052,0,-0.90649,0.42222,0,-0.86587,0.50027,0,-0.81904,0.57373,0,-0.76682,0.64186,0,-0.71011,0.7041,0,-0.6498,0.7601,0,-0.5868,0.80973,0,-0.52195,0.85298,0,-0.45599,0.88999,0,-0.38959,0.92099,0,-0.32332,0.94629,0,-0.25766,0.96623,0,-0.25766,0.96623,0,-0.32332,0.94629,0,-0.38959,0.92099,0,-0.45599,0.88999,0,-0.52195,0.85298,0,-0.5868,0.80973,0,-0.6498,0.7601,0,-0.71011,0.7041,0,-0.76682,0.64186,0,-0.81904,0.57373,0,-0.86587,0.50027,0,-0.90649,0.42222,0,-0.94024,0.34052,0,-0.96661,0.25625,0,-0.98534,0.17062,0,-0.9964,0.08481,0,-1,0]);
IndexedFaceSet2014.normal = Normal2016;

Shape2012.geometry = IndexedFaceSet2014;

Transform5.children[400] = Shape2012;

let Shape2017 = browser.currentScene.createNode("Shape");
let Appearance2018 = browser.currentScene.createNode("Appearance");
Appearance2018.USE = "baseplateAppearance";
Shape2017.appearance = Appearance2018;

let IndexedFaceSet2019 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2019.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet2019.solid = False;
let Coordinate2020 = browser.currentScene.createNode("Coordinate");
Coordinate2020.point = new MFVec3f(new float[0.375,0.45,-0.08,0.375,0.45,-0.21024,0.75,0.45,-0.21024,0.75,0.45,-0.08]);
IndexedFaceSet2019.coord = Coordinate2020;

let Normal2021 = browser.currentScene.createNode("Normal");
Normal2021.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet2019.normal = Normal2021;

Shape2017.geometry = IndexedFaceSet2019;

Transform5.children[401] = Shape2017;

let Shape2022 = browser.currentScene.createNode("Shape");
let Appearance2023 = browser.currentScene.createNode("Appearance");
Appearance2023.USE = "baseplateAppearance";
Shape2022.appearance = Appearance2023;

let IndexedFaceSet2024 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2024.coordIndex = new MFInt32(new int[33,0,32,-1,32,0,1,-1,31,1,2,-1,3,31,2,-1,3,30,31,-1,3,4,30,-1,30,4,29,-1,29,4,5,-1,28,5,6,-1,27,6,26,-1,27,28,6,-1,32,1,31,-1,29,5,28,-1,6,7,26,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1]);
IndexedFaceSet2024.solid = False;
let Coordinate2025 = browser.currentScene.createNode("Coordinate");
Coordinate2025.point = new MFVec3f(new float[0.375,0.405,-0.04,0.375,0.40904,-0.04017,0.375,0.41319,-0.04067,0.375,0.41738,-0.04155,0.375,0.42156,-0.04281,0.375,0.42567,-0.04447,0.375,0.42962,-0.04652,0.375,0.43336,-0.04895,0.375,0.43682,-0.05172,0.375,0.43994,-0.05479,0.375,0.44266,-0.05812,0.375,0.44497,-0.06163,0.375,0.44684,-0.06528,0.375,0.44826,-0.069,0.375,0.44925,-0.07273,0.375,0.44982,-0.07641,0.375,0.45,-0.08,0.75,0.45,-0.08,0.75,0.44982,-0.07641,0.75,0.44925,-0.07273,0.75,0.44826,-0.069,0.75,0.44684,-0.06528,0.75,0.44497,-0.06163,0.75,0.44266,-0.05812,0.75,0.43994,-0.05479,0.75,0.43682,-0.05172,0.75,0.43336,-0.04895,0.75,0.42962,-0.04652,0.75,0.42567,-0.04447,0.75,0.42156,-0.04281,0.75,0.41738,-0.04155,0.75,0.41319,-0.04067,0.75,0.40904,-0.04017,0.75,0.405,-0.04]);
IndexedFaceSet2024.coord = Coordinate2025;

let Normal2026 = browser.currentScene.createNode("Normal");
Normal2026.vector = new MFVec3f(new float[0,0,-1,0,-0.07994,-0.9968,0,-0.16231,-0.98674,0,-0.24655,-0.96913,0,-0.33195,-0.9433,0,-0.41761,-0.90863,0,-0.50245,-0.8646,0,-0.58519,-0.81089,0,-0.66436,-0.74741,0,-0.73837,-0.67439,0,-0.80557,-0.5925,0,-0.8644,-0.50281,0,-0.9135,-0.40685,0,-0.95188,-0.30649,0,-0.97901,-0.20381,0,-0.99489,-0.10098,0,-1,0,0,-1,0,0,-0.99489,-0.10098,0,-0.97901,-0.20381,0,-0.95188,-0.30649,0,-0.9135,-0.40685,0,-0.8644,-0.50281,0,-0.80557,-0.5925,0,-0.73837,-0.67439,0,-0.66436,-0.74741,0,-0.58519,-0.81089,0,-0.50245,-0.8646,0,-0.41761,-0.90863,0,-0.33195,-0.9433,0,-0.24655,-0.96913,0,-0.16231,-0.98674,0,-0.07994,-0.9968,0,0,-1]);
IndexedFaceSet2024.normal = Normal2026;

Shape2022.geometry = IndexedFaceSet2024;

Transform5.children[402] = Shape2022;

let Shape2027 = browser.currentScene.createNode("Shape");
let Appearance2028 = browser.currentScene.createNode("Appearance");
Appearance2028.USE = "baseplateAppearance";
Shape2027.appearance = Appearance2028;

let IndexedFaceSet2029 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2029.coordIndex = new MFInt32(new int[1,48,0,-1,1,47,48,-1,1,46,47,-1,1,45,46,-1,1,44,45,-1,1,43,44,-1,1,42,43,-1,1,41,42,-1,1,40,41,-1,1,39,40,-1,1,38,39,-1,1,37,38,-1,1,36,37,-1,1,2,36,-1,36,2,35,-1,35,2,34,-1,34,2,33,-1,33,2,32,-1,32,2,31,-1,31,2,30,-1,30,2,29,-1,29,2,28,-1,28,2,27,-1,27,2,26,-1,26,2,3,-1,25,3,24,-1,25,26,3,-1,0,11,3,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,55,4,-1,0,54,55,-1,0,53,54,-1,0,52,53,-1,0,51,52,-1,0,50,51,-1,0,49,50,-1,0,48,49,-1,11,12,3,-1,3,12,13,-1,14,3,13,-1,14,15,3,-1,3,15,16,-1,17,3,16,-1,17,18,3,-1,3,18,19,-1,20,3,19,-1,20,21,3,-1,3,21,22,-1,23,3,22,-1,23,24,3,-1]);
IndexedFaceSet2029.solid = False;
let Coordinate2030 = browser.currentScene.createNode("Coordinate");
Coordinate2030.point = new MFVec3f(new float[0.375,-0.405,-0.04,0.375,0.405,-0.04,0.75,0.405,-0.04,0.75,-0.405,-0.04,0.47443,-0.31008,-0.04,0.48347,-0.31809,-0.04,0.49341,-0.32495,-0.04,0.5041,-0.33056,-0.04,0.51539,-0.33484,-0.04,0.52711,-0.33773,-0.04,0.5391,-0.33918,-0.04,0.55118,-0.33918,-0.04,0.56316,-0.33773,-0.04,0.57489,-0.33484,-0.04,0.58618,-0.33056,-0.04,0.59687,-0.32495,-0.04,0.60681,-0.31809,-0.04,0.61585,-0.31008,-0.04,0.62386,-0.30104,-0.04,0.63072,-0.2911,-0.04,0.63633,-0.28041,-0.04,0.64061,-0.26912,-0.04,0.6435,-0.25739,-0.04,0.64496,-0.24541,-0.04,0.64496,-0.23333,-0.04,0.6435,-0.22134,-0.04,0.64061,-0.20962,-0.04,0.63633,-0.19833,-0.04,0.63072,-0.18763,-0.04,0.62386,-0.1777,-0.04,0.61585,-0.16866,-0.04,0.60681,-0.16065,-0.04,0.59687,-0.15379,-0.04,0.58618,-0.14818,-0.04,0.57489,-0.1439,-0.04,0.56316,-0.14101,-0.04,0.55118,-0.13955,-0.04,0.5391,-0.13955,-0.04,0.52711,-0.14101,-0.04,0.51539,-0.1439,-0.04,0.5041,-0.14818,-0.04,0.49341,-0.15379,-0.04,0.48347,-0.16065,-0.04,0.47443,-0.16866,-0.04,0.46642,-0.1777,-0.04,0.45956,-0.18763,-0.04,0.45395,-0.19833,-0.04,0.44967,-0.20962,-0.04,0.44678,-0.22134,-0.04,0.44532,-0.23333,-0.04,0.44532,-0.24541,-0.04,0.44678,-0.25739,-0.04,0.44967,-0.26912,-0.04,0.45395,-0.28041,-0.04,0.45956,-0.2911,-0.04,0.46642,-0.30104,-0.04]);
IndexedFaceSet2029.coord = Coordinate2030;

let Normal2031 = browser.currentScene.createNode("Normal");
Normal2031.vector = new MFVec3f(new float[0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1]);
IndexedFaceSet2029.normal = Normal2031;

Shape2027.geometry = IndexedFaceSet2029;

Transform5.children[403] = Shape2027;

let Shape2032 = browser.currentScene.createNode("Shape");
let Appearance2033 = browser.currentScene.createNode("Appearance");
Appearance2033.USE = "baseplateAppearance";
Shape2032.appearance = Appearance2033;

let IndexedFaceSet2034 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2034.coordIndex = new MFInt32(new int[33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,29,3,4,-1,5,29,4,-1,5,28,29,-1,5,6,28,-1,28,6,27,-1,27,6,26,-1,26,6,7,-1,8,26,7,-1,8,25,26,-1,8,9,25,-1,25,9,24,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,19,-1,20,21,13,-1,32,1,31,-1,31,2,30,-1,30,3,29,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,13,14,19,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,19,15,18,-1]);
IndexedFaceSet2034.solid = False;
let Coordinate2035 = browser.currentScene.createNode("Coordinate");
Coordinate2035.point = new MFVec3f(new float[0.375,-0.45,-0.08,0.375,-0.44982,-0.07641,0.375,-0.44925,-0.07273,0.375,-0.44826,-0.069,0.375,-0.44684,-0.06528,0.375,-0.44497,-0.06163,0.375,-0.44266,-0.05812,0.375,-0.43994,-0.05479,0.375,-0.43682,-0.05172,0.375,-0.43336,-0.04895,0.375,-0.42962,-0.04652,0.375,-0.42567,-0.04447,0.375,-0.42156,-0.04281,0.375,-0.41738,-0.04155,0.375,-0.41319,-0.04067,0.375,-0.40904,-0.04017,0.375,-0.405,-0.04,0.75,-0.405,-0.04,0.75,-0.40904,-0.04017,0.75,-0.41319,-0.04067,0.75,-0.41738,-0.04155,0.75,-0.42156,-0.04281,0.75,-0.42567,-0.04447,0.75,-0.42962,-0.04652,0.75,-0.43336,-0.04895,0.75,-0.43682,-0.05172,0.75,-0.43994,-0.05479,0.75,-0.44266,-0.05812,0.75,-0.44497,-0.06163,0.75,-0.44684,-0.06528,0.75,-0.44826,-0.069,0.75,-0.44925,-0.07273,0.75,-0.44982,-0.07641,0.75,-0.45,-0.08]);
IndexedFaceSet2034.coord = Coordinate2035;

let Normal2036 = browser.currentScene.createNode("Normal");
Normal2036.vector = new MFVec3f(new float[0,1,0,0,0.99489,-0.10098,0,0.97901,-0.20381,0,0.95188,-0.30649,0,0.9135,-0.40685,0,0.8644,-0.50281,0,0.80557,-0.5925,0,0.73837,-0.67439,0,0.66436,-0.74741,0,0.58519,-0.81089,0,0.50245,-0.8646,0,0.41761,-0.90863,0,0.33195,-0.9433,0,0.24655,-0.96913,0,0.16231,-0.98674,0,0.07994,-0.9968,0,0,-1,0,0,-1,0,0.07994,-0.9968,0,0.16231,-0.98674,0,0.24655,-0.96913,0,0.33195,-0.9433,0,0.41761,-0.90863,0,0.50245,-0.8646,0,0.58519,-0.81089,0,0.66436,-0.74741,0,0.73837,-0.67439,0,0.80557,-0.5925,0,0.8644,-0.50281,0,0.9135,-0.40685,0,0.95188,-0.30649,0,0.97901,-0.20381,0,0.99489,-0.10098,0,1,0]);
IndexedFaceSet2034.normal = Normal2036;

Shape2032.geometry = IndexedFaceSet2034;

Transform5.children[404] = Shape2032;

let Shape2037 = browser.currentScene.createNode("Shape");
let Appearance2038 = browser.currentScene.createNode("Appearance");
Appearance2038.USE = "baseplateAppearance";
Shape2037.appearance = Appearance2038;

let IndexedFaceSet2039 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2039.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet2039.solid = False;
let Coordinate2040 = browser.currentScene.createNode("Coordinate");
Coordinate2040.point = new MFVec3f(new float[0.375,-0.45,-0.21024,0.375,-0.45,-0.08,0.75,-0.45,-0.08,0.75,-0.45,-0.21024]);
IndexedFaceSet2039.coord = Coordinate2040;

let Normal2041 = browser.currentScene.createNode("Normal");
Normal2041.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet2039.normal = Normal2041;

Shape2037.geometry = IndexedFaceSet2039;

Transform5.children[405] = Shape2037;

let Shape2042 = browser.currentScene.createNode("Shape");
let Appearance2043 = browser.currentScene.createNode("Appearance");
Appearance2043.USE = "baseplateAppearance";
Shape2042.appearance = Appearance2043;

let IndexedFaceSet2044 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2044.coordIndex = new MFInt32(new int[0,1,33,-1,33,1,32,-1,32,1,2,-1,31,2,3,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,32,2,31,-1,31,3,30,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1]);
IndexedFaceSet2044.solid = False;
let Coordinate2045 = browser.currentScene.createNode("Coordinate");
Coordinate2045.point = new MFVec3f(new float[0.375,-0.41793,-0.24856,0.375,-0.42115,-0.24758,0.375,-0.42434,-0.24636,0.375,-0.42747,-0.2449,0.375,-0.43052,-0.24319,0.375,-0.43343,-0.24125,0.375,-0.43619,-0.23907,0.375,-0.43876,-0.23669,0.375,-0.4411,-0.23412,0.375,-0.4432,-0.23139,0.375,-0.44503,-0.22852,0.375,-0.44658,-0.22554,0.375,-0.44784,-0.2225,0.375,-0.4488,-0.21942,0.375,-0.44948,-0.21633,0.375,-0.44987,-0.21326,0.375,-0.45,-0.21024,0.75,-0.45,-0.21024,0.75,-0.44987,-0.21326,0.75,-0.44948,-0.21633,0.75,-0.4488,-0.21942,0.75,-0.44784,-0.2225,0.75,-0.44658,-0.22554,0.75,-0.44503,-0.22852,0.75,-0.4432,-0.23139,0.75,-0.4411,-0.23412,0.75,-0.43876,-0.23669,0.75,-0.43619,-0.23907,0.75,-0.43343,-0.24125,0.75,-0.43052,-0.24319,0.75,-0.42747,-0.2449,0.75,-0.42434,-0.24636,0.75,-0.42115,-0.24758,0.75,-0.41793,-0.24856]);
IndexedFaceSet2044.coord = Coordinate2045;

let Normal2046 = browser.currentScene.createNode("Normal");
Normal2046.vector = new MFVec3f(new float[0,0.25766,0.96623,0,0.32332,0.94629,0,0.38959,0.92099,0,0.45599,0.88999,0,0.52195,0.85298,0,0.5868,0.80973,0,0.6498,0.7601,0,0.71011,0.7041,0,0.76682,0.64186,0,0.81904,0.57373,0,0.86587,0.50027,0,0.90649,0.42222,0,0.94024,0.34052,0,0.96661,0.25625,0,0.98534,0.17062,0,0.9964,0.08481,0,1,0,0,1,0,0,0.9964,0.08481,0,0.98534,0.17062,0,0.96661,0.25625,0,0.94024,0.34052,0,0.90649,0.42222,0,0.86587,0.50027,0,0.81904,0.57373,0,0.76682,0.64186,0,0.71011,0.7041,0,0.6498,0.7601,0,0.5868,0.80973,0,0.52195,0.85298,0,0.45599,0.88999,0,0.38959,0.92099,0,0.32332,0.94629,0,0.25766,0.96623]);
IndexedFaceSet2044.normal = Normal2046;

Shape2042.geometry = IndexedFaceSet2044;

Transform5.children[406] = Shape2042;

let Shape2047 = browser.currentScene.createNode("Shape");
let Appearance2048 = browser.currentScene.createNode("Appearance");
Appearance2048.USE = "baseplateAppearance";
Shape2047.appearance = Appearance2048;

let IndexedFaceSet2049 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2049.coordIndex = new MFInt32(new int[76,0,47,-1,48,76,47,-1,48,75,76,-1,48,49,75,-1,75,49,74,-1,74,49,61,-1,62,74,61,-1,62,63,74,-1,74,63,64,-1,65,74,64,-1,65,66,74,-1,74,66,67,-1,68,74,67,-1,68,69,74,-1,74,69,70,-1,71,74,70,-1,71,72,74,-1,74,72,73,-1,2,43,1,-1,2,3,43,-1,43,3,4,-1,5,43,4,-1,5,6,43,-1,43,6,7,-1,8,43,7,-1,8,9,43,-1,43,9,10,-1,42,10,41,-1,42,43,10,-1,11,39,10,-1,11,12,39,-1,39,12,38,-1,38,12,13,-1,37,13,14,-1,36,14,15,-1,35,15,16,-1,17,35,16,-1,17,34,35,-1,17,18,34,-1,34,18,33,-1,33,18,19,-1,32,19,20,-1,31,20,21,-1,22,31,21,-1,22,30,31,-1,22,23,30,-1,30,23,29,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,38,13,37,-1,37,14,36,-1,36,15,35,-1,33,19,32,-1,32,20,31,-1,29,24,28,-1,39,40,10,-1,10,40,41,-1,43,44,1,-1,1,44,45,-1,46,1,45,-1,46,47,1,-1,1,47,0,-1,50,52,49,-1,50,51,52,-1,52,53,49,-1,49,53,54,-1,55,49,54,-1,55,56,49,-1,49,56,57,-1,58,49,57,-1,58,59,49,-1,49,59,60,-1,61,49,60,-1]);
IndexedFaceSet2049.solid = False;
let Coordinate2050 = browser.currentScene.createNode("Coordinate");
Coordinate2050.point = new MFVec3f(new float[0.375,-0.41793,-0.24856,0.375,-0.01293,-0.35656,0.375,-0.00979,-0.35729,0.375,-0.00657,-0.35781,0.375,-0.0033,-0.35814,0.375,0,-0.35824,0.375,0.0033,-0.35814,0.375,0.00657,-0.35781,0.375,0.00979,-0.35729,0.375,0.01293,-0.35656,0.375,0.41793,-0.24856,0.375,0.42115,-0.24758,0.375,0.42434,-0.24636,0.375,0.42747,-0.2449,0.375,0.43052,-0.24319,0.375,0.43343,-0.24125,0.375,0.43619,-0.23907,0.375,0.43876,-0.23669,0.375,0.4411,-0.23412,0.375,0.4432,-0.23139,0.375,0.44503,-0.22852,0.375,0.44658,-0.22554,0.375,0.44784,-0.2225,0.375,0.4488,-0.21942,0.375,0.44948,-0.21633,0.375,0.44987,-0.21326,0.375,0.45,-0.21024,0.375,0.45,-0.08,0.375,0.44982,-0.07641,0.375,0.44925,-0.07273,0.375,0.44826,-0.069,0.375,0.44684,-0.06528,0.375,0.44497,-0.06163,0.375,0.44266,-0.05812,0.375,0.43994,-0.05479,0.375,0.43682,-0.05172,0.375,0.43336,-0.04895,0.375,0.42962,-0.04652,0.375,0.42567,-0.04447,0.375,0.42156,-0.04281,0.375,0.41738,-0.04155,0.375,0.41319,-0.04067,0.375,0.40904,-0.04017,0.375,0.405,-0.04,0.375,-0.405,-0.04,0.375,-0.40904,-0.04017,0.375,-0.41319,-0.04067,0.375,-0.41738,-0.04155,0.375,-0.42156,-0.04281,0.375,-0.42567,-0.04447,0.375,-0.42962,-0.04652,0.375,-0.43336,-0.04895,0.375,-0.43682,-0.05172,0.375,-0.43994,-0.05479,0.375,-0.44266,-0.05812,0.375,-0.44497,-0.06163,0.375,-0.44684,-0.06528,0.375,-0.44826,-0.069,0.375,-0.44925,-0.07273,0.375,-0.44982,-0.07641,0.375,-0.45,-0.08,0.375,-0.45,-0.21024,0.375,-0.44987,-0.21326,0.375,-0.44948,-0.21633,0.375,-0.4488,-0.21942,0.375,-0.44784,-0.2225,0.375,-0.44658,-0.22554,0.375,-0.44503,-0.22852,0.375,-0.4432,-0.23139,0.375,-0.4411,-0.23412,0.375,-0.43876,-0.23669,0.375,-0.43619,-0.23907,0.375,-0.43343,-0.24125,0.375,-0.43052,-0.24319,0.375,-0.42747,-0.2449,0.375,-0.42434,-0.24636,0.375,-0.42115,-0.24758]);
IndexedFaceSet2049.coord = Coordinate2050;

let Normal2051 = browser.currentScene.createNode("Normal");
Normal2051.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet2049.normal = Normal2051;

Shape2047.geometry = IndexedFaceSet2049;

Transform5.children[407] = Shape2047;

let Shape2052 = browser.currentScene.createNode("Shape");
let Appearance2053 = browser.currentScene.createNode("Appearance");
Appearance2053.USE = "baseplateAppearance";
Shape2052.appearance = Appearance2053;

let IndexedFaceSet2054 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2054.coordIndex = new MFInt32(new int[1,54,0,-1,1,53,54,-1,1,52,53,-1,1,51,52,-1,1,50,51,-1,1,49,50,-1,1,48,49,-1,1,47,48,-1,1,46,47,-1,1,45,46,-1,1,44,45,-1,1,43,44,-1,1,2,43,-1,43,2,42,-1,42,2,41,-1,41,2,40,-1,40,2,39,-1,39,2,38,-1,38,2,37,-1,37,2,36,-1,36,2,35,-1,35,2,34,-1,34,2,33,-1,33,2,32,-1,32,2,3,-1,31,3,30,-1,31,32,3,-1,0,17,3,-1,0,16,17,-1,0,15,16,-1,0,14,15,-1,0,13,14,-1,0,12,13,-1,0,11,12,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,55,4,-1,0,54,55,-1,17,18,3,-1,3,18,19,-1,20,3,19,-1,20,21,3,-1,3,21,22,-1,23,3,22,-1,23,24,3,-1,3,24,25,-1,26,3,25,-1,26,27,3,-1,3,27,28,-1,29,3,28,-1,29,30,3,-1]);
IndexedFaceSet2054.solid = False;
let Coordinate2055 = browser.currentScene.createNode("Coordinate");
Coordinate2055.point = new MFVec3f(new float[0.75,-0.46437,-0.26069,-0.75,-0.46437,-0.26069,-0.75,-0.01437,-0.39569,0.75,-0.01437,-0.39569,0.54514,-0.33937,-0.29819,0.55719,-0.33864,-0.29841,0.56907,-0.33646,-0.29906,0.5806,-0.33287,-0.30014,0.59161,-0.32791,-0.30163,0.60195,-0.32167,-0.3035,0.61145,-0.31422,-0.30573,0.61999,-0.30568,-0.3083,0.62744,-0.29617,-0.31115,0.63368,-0.28584,-0.31425,0.63864,-0.27483,-0.31755,0.64223,-0.2633,-0.32101,0.64441,-0.25142,-0.32457,0.64514,-0.23937,-0.32819,0.64441,-0.22731,-0.33181,0.64223,-0.21544,-0.33537,0.63864,-0.20391,-0.33883,0.63368,-0.1929,-0.34213,0.62744,-0.18256,-0.34523,0.61999,-0.17306,-0.34808,0.61145,-0.16452,-0.35065,0.60195,-0.15707,-0.35288,0.59161,-0.15082,-0.35475,0.5806,-0.14587,-0.35624,0.56907,-0.14227,-0.35732,0.55719,-0.1401,-0.35797,0.54514,-0.13937,-0.35819,0.53309,-0.1401,-0.35797,0.52121,-0.14227,-0.35732,0.50968,-0.14587,-0.35624,0.49867,-0.15082,-0.35475,0.48833,-0.15707,-0.35288,0.47883,-0.16452,-0.35065,0.47029,-0.17306,-0.34808,0.46284,-0.18256,-0.34523,0.45659,-0.1929,-0.34213,0.45164,-0.20391,-0.33883,0.44804,-0.21544,-0.33537,0.44587,-0.22731,-0.33181,0.44514,-0.23937,-0.32819,0.44587,-0.25142,-0.32457,0.44804,-0.2633,-0.32101,0.45164,-0.27483,-0.31755,0.45659,-0.28584,-0.31425,0.46284,-0.29617,-0.31115,0.47029,-0.30568,-0.3083,0.47883,-0.31422,-0.30573,0.48833,-0.32167,-0.3035,0.49867,-0.32791,-0.30163,0.50968,-0.33287,-0.30014,0.52121,-0.33646,-0.29906,0.53309,-0.33864,-0.29841]);
IndexedFaceSet2054.coord = Coordinate2055;

let Normal2056 = browser.currentScene.createNode("Normal");
Normal2056.vector = new MFVec3f(new float[0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.28735,-0.95783]);
IndexedFaceSet2054.normal = Normal2056;

Shape2052.geometry = IndexedFaceSet2054;

Transform5.children[408] = Shape2052;

let Shape2057 = browser.currentScene.createNode("Shape");
let Appearance2058 = browser.currentScene.createNode("Appearance");
Appearance2058.USE = "baseplateAppearance";
Shape2057.appearance = Appearance2058;

let IndexedFaceSet2059 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2059.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet2059.solid = False;
let Coordinate2060 = browser.currentScene.createNode("Coordinate");
Coordinate2060.point = new MFVec3f(new float[0.75,-0.46437,-0.26069,0.75,-0.46983,-0.2587,0.75,-0.47502,-0.25609,0.75,-0.47987,-0.25289,0.75,-0.48433,-0.24915,0.75,-0.48831,-0.24493,0.75,-0.49178,-0.24026,0.75,-0.49469,-0.23523,0.75,-0.49699,-0.22989,0.75,-0.49865,-0.22432,0.75,-0.49966,-0.2186,0.75,-0.5,-0.2128,-0.75,-0.5,-0.2128,-0.75,-0.49966,-0.2186,-0.75,-0.49865,-0.22432,-0.75,-0.49699,-0.22989,-0.75,-0.49469,-0.23523,-0.75,-0.49178,-0.24026,-0.75,-0.48831,-0.24493,-0.75,-0.48433,-0.24915,-0.75,-0.47987,-0.25289,-0.75,-0.47502,-0.25609,-0.75,-0.46983,-0.2587,-0.75,-0.46437,-0.26069]);
IndexedFaceSet2059.coord = Coordinate2060;

let Normal2061 = browser.currentScene.createNode("Normal");
Normal2061.vector = new MFVec3f(new float[0,-0.28735,-0.95783,0,-0.39655,-0.91801,0,-0.5004,-0.86579,0,-0.59749,-0.80188,0,-0.6865,-0.72713,0,-0.76624,-0.64255,0,-0.83563,-0.54929,0,-0.89373,-0.44861,0,-0.93975,-0.34187,0,-0.97307,-0.23052,0,-0.99324,-0.11604,0,-1,0,0,-1,0,0,-0.99324,-0.11604,0,-0.97307,-0.23052,0,-0.93975,-0.34187,0,-0.89373,-0.44861,0,-0.83563,-0.54929,0,-0.76624,-0.64255,0,-0.6865,-0.72713,0,-0.59749,-0.80188,0,-0.5004,-0.86579,0,-0.39655,-0.91801,0,-0.28735,-0.95783]);
IndexedFaceSet2059.normal = Normal2061;

Shape2057.geometry = IndexedFaceSet2059;

Transform5.children[409] = Shape2057;

let Shape2062 = browser.currentScene.createNode("Shape");
let Appearance2063 = browser.currentScene.createNode("Appearance");
Appearance2063.USE = "baseplateAppearance";
Shape2062.appearance = Appearance2063;

let IndexedFaceSet2064 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2064.coordIndex = new MFInt32(new int[1,73,0,-1,1,72,73,-1,1,2,72,-1,72,2,71,-1,71,2,70,-1,70,2,3,-1,69,3,4,-1,68,4,5,-1,67,5,66,-1,67,68,5,-1,70,3,69,-1,69,4,68,-1,5,6,66,-1,66,6,65,-1,65,6,7,-1,64,7,8,-1,63,8,9,-1,62,9,10,-1,11,62,10,-1,11,61,62,-1,11,60,61,-1,11,12,60,-1,60,12,59,-1,59,12,58,-1,58,12,13,-1,134,13,133,-1,134,58,13,-1,65,7,64,-1,64,8,63,-1,63,9,62,-1,13,14,133,-1,133,14,132,-1,132,14,131,-1,131,14,15,-1,130,15,16,-1,129,16,128,-1,129,130,16,-1,131,15,130,-1,16,17,128,-1,128,17,127,-1,127,17,126,-1,126,17,18,-1,125,18,124,-1,125,126,18,-1,19,40,18,-1,19,39,40,-1,19,20,39,-1,39,20,38,-1,38,20,21,-1,37,21,22,-1,36,22,23,-1,35,23,24,-1,34,24,25,-1,33,25,26,-1,32,26,27,-1,31,27,28,-1,30,28,29,-1,30,31,28,-1,38,21,37,-1,37,22,36,-1,36,23,35,-1,35,24,34,-1,34,25,33,-1,33,26,32,-1,32,27,31,-1,40,41,18,-1,18,41,42,-1,110,42,109,-1,110,18,42,-1,110,111,18,-1,18,111,112,-1,113,18,112,-1,113,114,18,-1,18,114,115,-1,116,18,115,-1,116,117,18,-1,18,117,118,-1,119,18,118,-1,119,120,18,-1,18,120,121,-1,122,18,121,-1,122,123,18,-1,18,123,124,-1,43,96,42,-1,43,95,96,-1,43,94,95,-1,43,93,94,-1,43,92,93,-1,43,44,92,-1,92,44,91,-1,91,44,90,-1,90,44,89,-1,89,44,88,-1,88,44,87,-1,87,44,86,-1,86,44,85,-1,85,44,84,-1,84,44,83,-1,83,44,82,-1,82,44,81,-1,81,44,80,-1,80,44,79,-1,79,44,78,-1,78,44,77,-1,77,44,76,-1,76,44,45,-1,55,45,54,-1,55,76,45,-1,55,56,76,-1,76,56,57,-1,0,76,57,-1,0,75,76,-1,0,74,75,-1,0,73,74,-1,46,47,45,-1,45,47,48,-1,49,45,48,-1,49,50,45,-1,45,50,51,-1,52,45,51,-1,52,53,45,-1,45,53,54,-1,96,97,42,-1,42,97,98,-1,99,42,98,-1,99,100,42,-1,42,100,101,-1,102,42,101,-1,102,103,42,-1,42,103,104,-1,105,42,104,-1,105,106,42,-1,42,106,107,-1,108,42,107,-1,108,109,42,-1]);
IndexedFaceSet2064.solid = False;
let Coordinate2065 = browser.currentScene.createNode("Coordinate");
Coordinate2065.point = new MFVec3f(new float[0.75,-0.5,-0.2128,0.75,-0.49966,-0.2186,0.75,-0.49865,-0.22432,0.75,-0.49699,-0.22989,0.75,-0.49469,-0.23523,0.75,-0.49178,-0.24026,0.75,-0.48831,-0.24493,0.75,-0.48433,-0.24915,0.75,-0.47987,-0.25289,0.75,-0.47502,-0.25609,0.75,-0.46983,-0.2587,0.75,-0.46437,-0.26069,0.75,-0.01437,-0.39569,0.75,-0.0087,-0.39704,0.75,-0.00291,-0.39771,0.75,0.00291,-0.39771,0.75,0.0087,-0.39704,0.75,0.01437,-0.39569,0.75,0.46437,-0.26069,0.75,0.46983,-0.2587,0.75,0.47502,-0.25609,0.75,0.47987,-0.25289,0.75,0.48433,-0.24915,0.75,0.48831,-0.24493,0.75,0.49178,-0.24026,0.75,0.49469,-0.23523,0.75,0.49699,-0.22989,0.75,0.49865,-0.22432,0.75,0.49966,-0.2186,0.75,0.5,-0.2128,0.75,0.5,-0.05,0.75,0.49964,-0.04397,0.75,0.49855,-0.03803,0.75,0.49675,-0.03227,0.75,0.49427,-0.02676,0.75,0.49115,-0.0216,0.75,0.48743,-0.01684,0.75,0.48316,-0.01257,0.75,0.4784,-0.00885,0.75,0.47324,-0.00573,0.75,0.46773,-0.00325,0.75,0.46197,-0.00145,0.75,0.45603,-0.00036,0.75,0.45,0,0.75,-0.45,0,0.75,-0.45603,-0.00036,0.75,-0.46197,-0.00145,0.75,-0.46773,-0.00325,0.75,-0.47324,-0.00573,0.75,-0.4784,-0.00885,0.75,-0.48316,-0.01257,0.75,-0.48743,-0.01684,0.75,-0.49115,-0.0216,0.75,-0.49427,-0.02676,0.75,-0.49675,-0.03227,0.75,-0.49855,-0.03803,0.75,-0.49964,-0.04397,0.75,-0.5,-0.05,0.75,-0.01293,-0.35656,0.75,-0.41793,-0.24856,0.75,-0.42115,-0.24758,0.75,-0.42434,-0.24636,0.75,-0.42747,-0.2449,0.75,-0.43052,-0.24319,0.75,-0.43343,-0.24125,0.75,-0.43619,-0.23907,0.75,-0.43876,-0.23669,0.75,-0.4411,-0.23412,0.75,-0.4432,-0.23139,0.75,-0.44503,-0.22852,0.75,-0.44658,-0.22554,0.75,-0.44784,-0.2225,0.75,-0.4488,-0.21942,0.75,-0.44948,-0.21633,0.75,-0.44987,-0.21326,0.75,-0.45,-0.21024,0.75,-0.45,-0.08,0.75,-0.44982,-0.07641,0.75,-0.44925,-0.07273,0.75,-0.44826,-0.069,0.75,-0.44684,-0.06528,0.75,-0.44497,-0.06163,0.75,-0.44266,-0.05812,0.75,-0.43994,-0.05479,0.75,-0.43682,-0.05172,0.75,-0.43336,-0.04895,0.75,-0.42962,-0.04652,0.75,-0.42567,-0.04447,0.75,-0.42156,-0.04281,0.75,-0.41738,-0.04155,0.75,-0.41319,-0.04067,0.75,-0.40904,-0.04017,0.75,-0.405,-0.04,0.75,0.405,-0.04,0.75,0.40904,-0.04017,0.75,0.41319,-0.04067,0.75,0.41738,-0.04155,0.75,0.42156,-0.04281,0.75,0.42567,-0.04447,0.75,0.42962,-0.04652,0.75,0.43336,-0.04895,0.75,0.43682,-0.05172,0.75,0.43994,-0.05479,0.75,0.44266,-0.05812,0.75,0.44497,-0.06163,0.75,0.44684,-0.06528,0.75,0.44826,-0.069,0.75,0.44925,-0.07273,0.75,0.44982,-0.07641,0.75,0.45,-0.08,0.75,0.45,-0.21024,0.75,0.44987,-0.21326,0.75,0.44948,-0.21633,0.75,0.4488,-0.21942,0.75,0.44784,-0.2225,0.75,0.44658,-0.22554,0.75,0.44503,-0.22852,0.75,0.4432,-0.23139,0.75,0.4411,-0.23412,0.75,0.43876,-0.23669,0.75,0.43619,-0.23907,0.75,0.43343,-0.24125,0.75,0.43052,-0.24319,0.75,0.42747,-0.2449,0.75,0.42434,-0.24636,0.75,0.42115,-0.24758,0.75,0.41793,-0.24856,0.75,0.01293,-0.35656,0.75,0.00979,-0.35729,0.75,0.00657,-0.35781,0.75,0.0033,-0.35814,0.75,0,-0.35824,0.75,-0.0033,-0.35814,0.75,-0.00657,-0.35781,0.75,-0.00979,-0.35729]);
IndexedFaceSet2064.coord = Coordinate2065;

let Normal2066 = browser.currentScene.createNode("Normal");
Normal2066.vector = new MFVec3f(new float[1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0]);
IndexedFaceSet2064.normal = Normal2066;

Shape2062.geometry = IndexedFaceSet2064;

Transform5.children[410] = Shape2062;

let Shape2067 = browser.currentScene.createNode("Shape");
let Appearance2068 = browser.currentScene.createNode("Appearance");
Appearance2068.USE = "baseplateAppearance";
Shape2067.appearance = Appearance2068;

let IndexedFaceSet2069 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2069.coordIndex = new MFInt32(new int[0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1]);
IndexedFaceSet2069.solid = False;
let Coordinate2070 = browser.currentScene.createNode("Coordinate");
Coordinate2070.point = new MFVec3f(new float[0.75,0.01437,-0.39569,0.75,0.0087,-0.39704,0.75,0.00291,-0.39771,0.75,-0.00291,-0.39771,0.75,-0.0087,-0.39704,0.75,-0.01437,-0.39569,-0.75,-0.01437,-0.39569,-0.75,-0.0087,-0.39704,-0.75,-0.00291,-0.39771,-0.75,0.00291,-0.39771,-0.75,0.0087,-0.39704,-0.75,0.01437,-0.39569]);
IndexedFaceSet2069.coord = Coordinate2070;

let Normal2071 = browser.currentScene.createNode("Normal");
Normal2071.vector = new MFVec3f(new float[0,0.28735,-0.95783,0,0.17398,-0.98475,0,0.05826,-0.9983,0,-0.05826,-0.9983,0,-0.17398,-0.98475,0,-0.28735,-0.95783,0,-0.28735,-0.95783,0,-0.17398,-0.98475,0,-0.05826,-0.9983,0,0.05826,-0.9983,0,0.17398,-0.98475,0,0.28735,-0.95783]);
IndexedFaceSet2069.normal = Normal2071;

Shape2067.geometry = IndexedFaceSet2069;

Transform5.children[411] = Shape2067;

let Shape2072 = browser.currentScene.createNode("Shape");
let Appearance2073 = browser.currentScene.createNode("Appearance");
Appearance2073.USE = "baseplateAppearance";
Shape2072.appearance = Appearance2073;

let IndexedFaceSet2074 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2074.coordIndex = new MFInt32(new int[0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,4,-1,23,4,5,-1,22,5,6,-1,21,6,7,-1,20,7,8,-1,19,8,9,-1,18,9,10,-1,17,10,11,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,26,2,25,-1,25,3,24,-1,24,4,23,-1,23,5,22,-1,22,6,21,-1,21,7,20,-1,20,8,19,-1,19,9,18,-1,18,10,17,-1,17,11,16,-1,16,12,15,-1]);
IndexedFaceSet2074.solid = False;
let Coordinate2075 = browser.currentScene.createNode("Coordinate");
Coordinate2075.point = new MFVec3f(new float[0.75,-0.5,-0.05,0.75,-0.49964,-0.04397,0.75,-0.49855,-0.03803,0.75,-0.49675,-0.03227,0.75,-0.49427,-0.02676,0.75,-0.49115,-0.0216,0.75,-0.48743,-0.01684,0.75,-0.48316,-0.01257,0.75,-0.4784,-0.00885,0.75,-0.47324,-0.00573,0.75,-0.46773,-0.00325,0.75,-0.46197,-0.00145,0.75,-0.45603,-0.00036,0.75,-0.45,0,-0.75,-0.45,0,-0.75,-0.45603,-0.00036,-0.75,-0.46197,-0.00145,-0.75,-0.46773,-0.00325,-0.75,-0.47324,-0.00573,-0.75,-0.4784,-0.00885,-0.75,-0.48316,-0.01257,-0.75,-0.48743,-0.01684,-0.75,-0.49115,-0.0216,-0.75,-0.49427,-0.02676,-0.75,-0.49675,-0.03227,-0.75,-0.49855,-0.03803,-0.75,-0.49964,-0.04397,-0.75,-0.5,-0.05]);
IndexedFaceSet2074.coord = Coordinate2075;

let Normal2076 = browser.currentScene.createNode("Normal");
Normal2076.vector = new MFVec3f(new float[0,-1,0,0,-0.99271,0.12054,0,-0.97094,0.23932,0,-0.93502,0.3546,0,-0.88546,0.46472,0,-0.82298,0.56806,0,-0.74851,0.66312,0,-0.66312,0.74851,0,-0.56806,0.82298,0,-0.46472,0.88546,0,-0.3546,0.93502,0,-0.23932,0.97094,0,-0.12054,0.99271,0,0,1,0,0,1,0,-0.12054,0.99271,0,-0.23932,0.97094,0,-0.3546,0.93502,0,-0.46472,0.88546,0,-0.56806,0.82298,0,-0.66312,0.74851,0,-0.74851,0.66312,0,-0.82298,0.56806,0,-0.88546,0.46472,0,-0.93502,0.3546,0,-0.97094,0.23932,0,-0.99271,0.12054,0,-1,0]);
IndexedFaceSet2074.normal = Normal2076;

Shape2072.geometry = IndexedFaceSet2074;

Transform5.children[412] = Shape2072;

let Shape2077 = browser.currentScene.createNode("Shape");
let Appearance2078 = browser.currentScene.createNode("Appearance");
Appearance2078.USE = "baseplateAppearance";
Shape2077.appearance = Appearance2078;

let IndexedFaceSet2079 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2079.coordIndex = new MFInt32(new int[69,0,54,-1,55,69,54,-1,55,68,69,-1,55,67,68,-1,55,66,67,-1,55,65,66,-1,55,56,65,-1,65,56,64,-1,64,56,57,-1,63,57,58,-1,62,58,59,-1,61,59,60,-1,61,62,59,-1,0,1,54,-1,54,1,2,-1,3,54,2,-1,3,17,54,-1,3,4,17,-1,17,4,16,-1,16,4,5,-1,15,5,14,-1,15,16,5,-1,5,6,14,-1,14,6,13,-1,13,6,7,-1,12,7,8,-1,9,12,8,-1,9,10,12,-1,12,10,11,-1,13,7,12,-1,54,17,53,-1,53,17,18,-1,52,18,19,-1,51,19,20,-1,50,20,21,-1,49,21,22,-1,48,22,23,-1,24,48,23,-1,24,47,48,-1,24,25,47,-1,47,25,46,-1,46,25,26,-1,45,26,44,-1,45,46,26,-1,53,18,52,-1,52,19,51,-1,51,20,50,-1,50,21,49,-1,49,22,48,-1,26,27,44,-1,44,27,43,-1,43,27,28,-1,42,28,29,-1,41,29,30,-1,40,30,31,-1,39,31,32,-1,38,32,33,-1,37,33,34,-1,36,34,35,-1,36,37,34,-1,43,28,42,-1,42,29,41,-1,41,30,40,-1,40,31,39,-1,39,32,38,-1,38,33,37,-1,64,57,63,-1,63,58,62,-1]);
IndexedFaceSet2079.solid = False;
let Coordinate2080 = browser.currentScene.createNode("Coordinate");
Coordinate2080.point = new MFVec3f(new float[-0.04773,-0.25877,0,-0.04579,-0.25871,0,-0.04384,-0.25852,0,-0.03993,-0.25779,0,-0.03607,-0.25661,0,-0.03234,-0.25501,0,-0.0288,-0.25302,0,-0.02555,-0.25067,0,-0.02405,-0.24936,0,-0.02264,-0.24798,0,-0.02135,-0.24652,0,-0.02017,-0.24499,0,-0.01759,-0.24034,0,-0.01546,-0.23545,0,-0.01375,-0.23036,0,-0.01243,-0.22512,0,-0.01081,-0.21439,0,-0.01032,-0.20364,0,-0.0107,-0.19283,0,-0.01216,-0.18198,0,-0.01343,-0.17671,0,-0.01516,-0.17163,0,-0.01738,-0.16681,0,-0.0187,-0.16451,0,-0.02017,-0.1623,0,-0.02238,-0.15918,0,-0.025,-0.15626,0,-0.02796,-0.15358,0,-0.0312,-0.15124,0,-0.03466,-0.14929,0,-0.03646,-0.14849,0,-0.03828,-0.14782,0,-0.04013,-0.14728,0,-0.042,-0.14688,0,-0.04388,-0.14663,0,-0.04576,-0.14655,0,-0.04775,-0.14663,0,-0.04975,-0.14686,0,-0.05175,-0.14723,0,-0.05374,-0.14775,0,-0.05571,-0.1484,0,-0.05765,-0.14917,0,-0.06141,-0.15106,0,-0.06493,-0.15337,0,-0.06814,-0.15605,0,-0.0696,-0.15751,0,-0.07096,-0.15905,0,-0.07221,-0.16064,0,-0.07332,-0.1623,0,-0.07566,-0.167,0,-0.07749,-0.17193,0,-0.07887,-0.17704,0,-0.07987,-0.18228,0,-0.08095,-0.19298,0,-0.0812,-0.20364,0,-0.08085,-0.21426,0,-0.07961,-0.22487,0,-0.07857,-0.23009,0,-0.0772,-0.23521,0,-0.07546,-0.24018,0,-0.07332,-0.24499,0,-0.071,-0.24784,0,-0.06831,-0.25047,0,-0.06531,-0.25281,0,-0.06205,-0.25483,0,-0.0586,-0.25649,0,-0.05502,-0.25772,0,-0.05321,-0.25817,0,-0.05138,-0.2585,0,-0.04955,-0.2587,0]);
IndexedFaceSet2079.coord = Coordinate2080;

let Normal2081 = browser.currentScene.createNode("Normal");
Normal2081.vector = new MFVec3f(new float[0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1]);
IndexedFaceSet2079.normal = Normal2081;

Shape2077.geometry = IndexedFaceSet2079;

Transform5.children[413] = Shape2077;

let Shape2082 = browser.currentScene.createNode("Shape");
let Appearance2083 = browser.currentScene.createNode("Appearance");
Appearance2083.USE = "baseplateAppearance";
Shape2082.appearance = Appearance2083;

let IndexedFaceSet2084 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2084.coordIndex = new MFInt32(new int[0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1]);
IndexedFaceSet2084.solid = False;
let Coordinate2085 = browser.currentScene.createNode("Coordinate");
Coordinate2085.point = new MFVec3f(new float[0.75,0.5,-0.2128,0.75,0.49966,-0.2186,0.75,0.49865,-0.22432,0.75,0.49699,-0.22989,0.75,0.49469,-0.23523,0.75,0.49178,-0.24026,0.75,0.48831,-0.24493,0.75,0.48433,-0.24915,0.75,0.47987,-0.25289,0.75,0.47502,-0.25609,0.75,0.46983,-0.2587,0.75,0.46437,-0.26069,-0.75,0.46437,-0.26069,-0.75,0.46983,-0.2587,-0.75,0.47502,-0.25609,-0.75,0.47987,-0.25289,-0.75,0.48433,-0.24915,-0.75,0.48831,-0.24493,-0.75,0.49178,-0.24026,-0.75,0.49469,-0.23523,-0.75,0.49699,-0.22989,-0.75,0.49865,-0.22432,-0.75,0.49966,-0.2186,-0.75,0.5,-0.2128]);
IndexedFaceSet2084.coord = Coordinate2085;

let Normal2086 = browser.currentScene.createNode("Normal");
Normal2086.vector = new MFVec3f(new float[0,1,0,0,0.99324,-0.11604,0,0.97307,-0.23052,0,0.93975,-0.34187,0,0.89373,-0.44861,0,0.83563,-0.54929,0,0.76624,-0.64255,0,0.6865,-0.72713,0,0.59749,-0.80188,0,0.5004,-0.86579,0,0.39655,-0.91801,0,0.28735,-0.95783,0,0.28735,-0.95783,0,0.39655,-0.91801,0,0.5004,-0.86579,0,0.59749,-0.80188,0,0.6865,-0.72713,0,0.76624,-0.64255,0,0.83563,-0.54929,0,0.89373,-0.44861,0,0.93975,-0.34187,0,0.97307,-0.23052,0,0.99324,-0.11604,0,1,0]);
IndexedFaceSet2084.normal = Normal2086;

Shape2082.geometry = IndexedFaceSet2084;

Transform5.children[414] = Shape2082;

let Shape2087 = browser.currentScene.createNode("Shape");
let Appearance2088 = browser.currentScene.createNode("Appearance");
Appearance2088.USE = "baseplateAppearance";
Shape2087.appearance = Appearance2088;

let IndexedFaceSet2089 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2089.coordIndex = new MFInt32(new int[0,1,3,-1,3,1,2,-1]);
IndexedFaceSet2089.solid = False;
let Coordinate2090 = browser.currentScene.createNode("Coordinate");
Coordinate2090.point = new MFVec3f(new float[0.75,0.01437,-0.39569,-0.75,0.01437,-0.39569,-0.75,0.46437,-0.26069,0.75,0.46437,-0.26069]);
IndexedFaceSet2089.coord = Coordinate2090;

let Normal2091 = browser.currentScene.createNode("Normal");
Normal2091.vector = new MFVec3f(new float[0,0.28735,-0.95783,0,0.28735,-0.95783,0,0.28735,-0.95783,0,0.28735,-0.95783]);
IndexedFaceSet2089.normal = Normal2091;

Shape2087.geometry = IndexedFaceSet2089;

Transform5.children[415] = Shape2087;

let Shape2092 = browser.currentScene.createNode("Shape");
let Appearance2093 = browser.currentScene.createNode("Appearance");
Appearance2093.USE = "baseplateAppearance";
Shape2092.appearance = Appearance2093;

let IndexedFaceSet2094 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2094.coordIndex = new MFInt32(new int[0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,4,-1,23,4,5,-1,22,5,6,-1,21,6,7,-1,20,7,8,-1,19,8,9,-1,18,9,10,-1,17,10,11,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,26,2,25,-1,25,3,24,-1,24,4,23,-1,23,5,22,-1,22,6,21,-1,21,7,20,-1,20,8,19,-1,19,9,18,-1,18,10,17,-1,17,11,16,-1,16,12,15,-1]);
IndexedFaceSet2094.solid = False;
let Coordinate2095 = browser.currentScene.createNode("Coordinate");
Coordinate2095.point = new MFVec3f(new float[0.75,0.45,0,0.75,0.45603,-0.00036,0.75,0.46197,-0.00145,0.75,0.46773,-0.00325,0.75,0.47324,-0.00573,0.75,0.4784,-0.00885,0.75,0.48316,-0.01257,0.75,0.48743,-0.01684,0.75,0.49115,-0.0216,0.75,0.49427,-0.02676,0.75,0.49675,-0.03227,0.75,0.49855,-0.03803,0.75,0.49964,-0.04397,0.75,0.5,-0.05,-0.75,0.5,-0.05,-0.75,0.49964,-0.04397,-0.75,0.49855,-0.03803,-0.75,0.49675,-0.03227,-0.75,0.49427,-0.02676,-0.75,0.49115,-0.0216,-0.75,0.48743,-0.01684,-0.75,0.48316,-0.01257,-0.75,0.4784,-0.00885,-0.75,0.47324,-0.00573,-0.75,0.46773,-0.00325,-0.75,0.46197,-0.00145,-0.75,0.45603,-0.00036,-0.75,0.45,0]);
IndexedFaceSet2094.coord = Coordinate2095;

let Normal2096 = browser.currentScene.createNode("Normal");
Normal2096.vector = new MFVec3f(new float[0,0,1,0,0.12054,0.99271,0,0.23932,0.97094,0,0.3546,0.93502,0,0.46472,0.88546,0,0.56806,0.82298,0,0.66312,0.74851,0,0.74851,0.66312,0,0.82298,0.56806,0,0.88546,0.46472,0,0.93502,0.3546,0,0.97094,0.23932,0,0.99271,0.12054,0,1,0,0,1,0,0,0.99271,0.12054,0,0.97094,0.23932,0,0.93502,0.3546,0,0.88546,0.46472,0,0.82298,0.56806,0,0.74851,0.66312,0,0.66312,0.74851,0,0.56806,0.82298,0,0.46472,0.88546,0,0.3546,0.93502,0,0.23932,0.97094,0,0.12054,0.99271,0,0,1]);
IndexedFaceSet2094.normal = Normal2096;

Shape2092.geometry = IndexedFaceSet2094;

Transform5.children[416] = Shape2092;

let Shape2097 = browser.currentScene.createNode("Shape");
let Appearance2098 = browser.currentScene.createNode("Appearance");
Appearance2098.USE = "baseplateAppearance";
Shape2097.appearance = Appearance2098;

let IndexedFaceSet2099 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2099.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet2099.solid = False;
let Coordinate2100 = browser.currentScene.createNode("Coordinate");
Coordinate2100.point = new MFVec3f(new float[0.75,0.5,-0.2128,-0.75,0.5,-0.2128,-0.75,0.5,-0.05,0.75,0.5,-0.05]);
IndexedFaceSet2099.coord = Coordinate2100;

let Normal2101 = browser.currentScene.createNode("Normal");
Normal2101.vector = new MFVec3f(new float[0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet2099.normal = Normal2101;

Shape2097.geometry = IndexedFaceSet2099;

Transform5.children[417] = Shape2097;

let Shape2102 = browser.currentScene.createNode("Shape");
let Appearance2103 = browser.currentScene.createNode("Appearance");
Appearance2103.USE = "baseplateAppearance";
Shape2102.appearance = Appearance2103;

let IndexedFaceSet2104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2104.coordIndex = new MFInt32(new int[1,2,0,-1,0,2,3,-1]);
IndexedFaceSet2104.solid = False;
let Coordinate2105 = browser.currentScene.createNode("Coordinate");
Coordinate2105.point = new MFVec3f(new float[-0.75,-0.5,-0.2128,0.75,-0.5,-0.2128,0.75,-0.5,-0.05,-0.75,-0.5,-0.05]);
IndexedFaceSet2104.coord = Coordinate2105;

let Normal2106 = browser.currentScene.createNode("Normal");
Normal2106.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0]);
IndexedFaceSet2104.normal = Normal2106;

Shape2102.geometry = IndexedFaceSet2104;

Transform5.children[418] = Shape2102;

let Shape2107 = browser.currentScene.createNode("Shape");
let Appearance2108 = browser.currentScene.createNode("Appearance");
Appearance2108.USE = "baseplateAppearance";
Shape2107.appearance = Appearance2108;

let IndexedFaceSet2109 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2109.coordIndex = new MFInt32(new int[1,132,0,-1,1,2,132,-1,132,2,131,-1,131,2,3,-1,130,3,4,-1,129,4,5,-1,128,5,127,-1,128,129,5,-1,131,3,130,-1,130,4,129,-1,5,6,127,-1,127,6,126,-1,126,6,7,-1,125,7,8,-1,124,8,123,-1,124,125,8,-1,126,7,125,-1,8,9,123,-1,123,9,122,-1,122,9,10,-1,121,10,120,-1,121,122,10,-1,10,11,120,-1,120,11,119,-1,119,11,12,-1,24,12,13,-1,14,24,13,-1,14,15,24,-1,24,15,16,-1,17,24,16,-1,17,18,24,-1,24,18,19,-1,20,24,19,-1,20,21,24,-1,24,21,22,-1,23,24,22,-1,119,12,24,-1,118,24,117,-1,118,119,24,-1,25,105,24,-1,25,104,105,-1,25,103,104,-1,25,102,103,-1,25,26,102,-1,102,26,101,-1,101,26,100,-1,100,26,99,-1,99,26,98,-1,98,26,97,-1,97,26,96,-1,96,26,95,-1,95,26,94,-1,94,26,93,-1,93,26,92,-1,92,26,91,-1,91,26,90,-1,90,26,89,-1,89,26,88,-1,88,26,87,-1,87,26,86,-1,86,26,85,-1,85,26,51,-1,84,51,83,-1,84,85,51,-1,26,27,51,-1,51,27,28,-1,29,51,28,-1,29,50,51,-1,29,30,50,-1,50,30,49,-1,49,30,31,-1,48,31,32,-1,47,32,33,-1,46,33,34,-1,45,34,35,-1,44,35,36,-1,43,36,37,-1,42,37,38,-1,41,38,39,-1,40,41,39,-1,49,31,48,-1,48,32,47,-1,47,33,46,-1,46,34,45,-1,45,35,44,-1,44,36,43,-1,43,37,42,-1,42,38,41,-1,52,68,51,-1,52,67,68,-1,52,66,67,-1,52,53,66,-1,66,53,65,-1,65,53,64,-1,64,53,54,-1,57,54,56,-1,57,64,54,-1,57,63,64,-1,57,62,63,-1,57,61,62,-1,57,60,61,-1,57,59,60,-1,57,0,59,-1,59,0,58,-1,58,0,134,-1,134,0,133,-1,133,0,132,-1,54,55,56,-1,68,69,51,-1,51,69,70,-1,71,51,70,-1,71,72,51,-1,51,72,73,-1,74,51,73,-1,74,75,51,-1,51,75,76,-1,77,51,76,-1,77,78,51,-1,51,78,79,-1,80,51,79,-1,80,81,51,-1,51,81,82,-1,83,51,82,-1,105,106,24,-1,24,106,107,-1,108,24,107,-1,108,109,24,-1,24,109,110,-1,111,24,110,-1,111,112,24,-1,24,112,113,-1,114,24,113,-1,114,115,24,-1,24,115,116,-1,117,24,116,-1]);
IndexedFaceSet2109.solid = False;
let Coordinate2110 = browser.currentScene.createNode("Coordinate");
Coordinate2110.point = new MFVec3f(new float[-0.75,-0.46437,-0.26069,-0.75,-0.46983,-0.2587,-0.75,-0.47502,-0.25609,-0.75,-0.47987,-0.25289,-0.75,-0.48433,-0.24915,-0.75,-0.48831,-0.24493,-0.75,-0.49178,-0.24026,-0.75,-0.49469,-0.23523,-0.75,-0.49699,-0.22989,-0.75,-0.49865,-0.22432,-0.75,-0.49966,-0.2186,-0.75,-0.5,-0.2128,-0.75,-0.5,-0.05,-0.75,-0.49964,-0.04397,-0.75,-0.49855,-0.03803,-0.75,-0.49675,-0.03227,-0.75,-0.49427,-0.02676,-0.75,-0.49115,-0.0216,-0.75,-0.48743,-0.01684,-0.75,-0.48316,-0.01257,-0.75,-0.4784,-0.00885,-0.75,-0.47324,-0.00573,-0.75,-0.46773,-0.00325,-0.75,-0.46197,-0.00145,-0.75,-0.45603,-0.00036,-0.75,-0.45,0,-0.75,0.45,0,-0.75,0.45603,-0.00036,-0.75,0.46197,-0.00145,-0.75,0.46773,-0.00325,-0.75,0.47324,-0.00573,-0.75,0.4784,-0.00885,-0.75,0.48316,-0.01257,-0.75,0.48743,-0.01684,-0.75,0.49115,-0.0216,-0.75,0.49427,-0.02676,-0.75,0.49675,-0.03227,-0.75,0.49855,-0.03803,-0.75,0.49964,-0.04397,-0.75,0.5,-0.05,-0.75,0.5,-0.2128,-0.75,0.49966,-0.2186,-0.75,0.49865,-0.22432,-0.75,0.49699,-0.22989,-0.75,0.49469,-0.23523,-0.75,0.49178,-0.24026,-0.75,0.48831,-0.24493,-0.75,0.48433,-0.24915,-0.75,0.47987,-0.25289,-0.75,0.47502,-0.25609,-0.75,0.46983,-0.2587,-0.75,0.46437,-0.26069,-0.75,0.01437,-0.39569,-0.75,0.0087,-0.39704,-0.75,0.00291,-0.39771,-0.75,-0.00291,-0.39771,-0.75,-0.0087,-0.39704,-0.75,-0.01437,-0.39569,-0.75,-0.41793,-0.24856,-0.75,-0.01293,-0.35656,-0.75,-0.00975,-0.35729,-0.75,-0.00652,-0.35782,-0.75,-0.00327,-0.35814,-0.75,0,-0.35824,-0.75,0.00327,-0.35814,-0.75,0.00652,-0.35782,-0.75,0.00975,-0.35729,-0.75,0.01293,-0.35656,-0.75,0.41793,-0.24856,-0.75,0.42116,-0.24758,-0.75,0.4243,-0.24638,-0.75,0.42735,-0.24496,-0.75,0.43029,-0.24333,-0.75,0.4331,-0.24148,-0.75,0.43577,-0.23943,-0.75,0.43827,-0.23718,-0.75,0.44057,-0.23475,-0.75,0.44266,-0.23214,-0.75,0.44453,-0.22935,-0.75,0.44616,-0.22642,-0.75,0.44752,-0.22335,-0.75,0.44859,-0.22017,-0.75,0.44937,-0.21691,-0.75,0.44984,-0.21359,-0.75,0.45,-0.21024,-0.75,0.45,-0.08,-0.75,0.44976,-0.07585,-0.75,0.44904,-0.07177,-0.75,0.44785,-0.06779,-0.75,0.44622,-0.06395,-0.75,0.44418,-0.06033,-0.75,0.44177,-0.05694,-0.75,0.43901,-0.05381,-0.75,0.43595,-0.05097,-0.75,0.43263,-0.04843,-0.75,0.42909,-0.04622,-0.75,0.42535,-0.04433,-0.75,0.42146,-0.04278,-0.75,0.41745,-0.04157,-0.75,0.41335,-0.0407,-0.75,0.40919,-0.04018,-0.75,0.405,-0.04,-0.75,-0.405,-0.04,-0.75,-0.40919,-0.04018,-0.75,-0.41335,-0.0407,-0.75,-0.41745,-0.04157,-0.75,-0.42146,-0.04278,-0.75,-0.42535,-0.04433,-0.75,-0.42909,-0.04622,-0.75,-0.43263,-0.04843,-0.75,-0.43595,-0.05096,-0.75,-0.43901,-0.05381,-0.75,-0.44176,-0.05694,-0.75,-0.44418,-0.06033,-0.75,-0.44622,-0.06395,-0.75,-0.44785,-0.06779,-0.75,-0.44904,-0.07177,-0.75,-0.44976,-0.07585,-0.75,-0.45,-0.08,-0.75,-0.45,-0.21024,-0.75,-0.44984,-0.21359,-0.75,-0.44937,-0.2169,-0.75,-0.4486,-0.22014,-0.75,-0.44753,-0.22332,-0.75,-0.44617,-0.22639,-0.75,-0.44455,-0.22932,-0.75,-0.44269,-0.2321,-0.75,-0.44059,-0.23472,-0.75,-0.43828,-0.23716,-0.75,-0.43578,-0.23942,-0.75,-0.43312,-0.24147,-0.75,-0.43031,-0.24332,-0.75,-0.42736,-0.24496,-0.75,-0.4243,-0.24638,-0.75,-0.42116,-0.24758]);
IndexedFaceSet2109.coord = Coordinate2110;

let Normal2111 = browser.currentScene.createNode("Normal");
Normal2111.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet2109.normal = Normal2111;

Shape2107.geometry = IndexedFaceSet2109;

Transform5.children[419] = Shape2107;

browser.currentScene.children[3] = Transform5;

