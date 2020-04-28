let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "AdditiveSubtractiveLight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.headlight = False;
NavigationInfo3.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[1] = NavigationInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "entry";
Viewpoint4.jump = False;
Viewpoint4.position = new SFVec3f(new float[0,-1,14]);
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "side";
Viewpoint5.jump = False;
Viewpoint5.orientation = new SFRotation(new float[0,1,0,-0.7]);
Viewpoint5.position = new SFVec3f(new float[-5,-1,3]);
browser.currentScene.children[3] = Viewpoint5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.translation = new SFVec3f(new float[-6.2,0,-1]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform7.translation = new SFVec3f(new float[-3,2.8,0]);
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.ambientIntensity = 1;
Material10.diffuseColor = new SFColor(new float[1,1,1]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let ElevationGrid11 = browser.currentScene.createNode("ElevationGrid");
ElevationGrid11.height = new MFFloat(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
ElevationGrid11.xDimension = 20;
ElevationGrid11.xSpacing = 0.3;
ElevationGrid11.zDimension = 20;
ElevationGrid11.zSpacing = 0.3;
Shape8.geometry = ElevationGrid11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

Transform6.children = new MFNode();

Transform6.children[0] = Transform7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,-4.1,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.ambientIntensity = 0;
Material15.diffuseColor = new SFColor(new float[1,1,1]);
Material15.emissiveColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Text16 = browser.currentScene.createNode("Text");
Text16.string = new MFString(new java.lang.String["additive","(correct)"]);
let FontStyle17 = browser.currentScene.createNode("FontStyle");
FontStyle17.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text16.fontStyle = FontStyle17;

Shape13.geometry = Text16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Transform6.children[1] = Transform12;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,0.6,0.3]);
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[-0.6,0,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.ambientIntensity = 0;
Material22.diffuseColor = new SFColor(new float[0,0,0]);
Material22.emissiveColor = new SFColor(new float[1,0,0]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 0.2;
Shape20.geometry = Sphere23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

let PointLight24 = browser.currentScene.createNode("PointLight");
PointLight24.ambientIntensity = 0.5;
PointLight24.attenuation = new SFVec3f(new float[0,1,0]);
PointLight24.color = new SFColor(new float[1,0,0]);
Transform19.children[1] = PointLight24;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new SFVec3f(new float[0,-1.2,0]);
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.ambientIntensity = 0;
Material28.diffuseColor = new SFColor(new float[0,0,0]);
Material28.emissiveColor = new SFColor(new float[0,1,0]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 0.2;
Shape26.geometry = Sphere29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

let PointLight30 = browser.currentScene.createNode("PointLight");
PointLight30.ambientIntensity = 0.5;
PointLight30.attenuation = new SFVec3f(new float[0,1,0]);
PointLight30.color = new SFColor(new float[0,1,0]);
Transform25.children[1] = PointLight30;

Transform18.children[1] = Transform25;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[0.6,0,0]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.ambientIntensity = 0;
Material34.diffuseColor = new SFColor(new float[0,0,0]);
Material34.emissiveColor = new SFColor(new float[0,0,1]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 0.2;
Shape32.geometry = Sphere35;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

let PointLight36 = browser.currentScene.createNode("PointLight");
PointLight36.ambientIntensity = 0.5;
PointLight36.attenuation = new SFVec3f(new float[0,1,0]);
PointLight36.color = new SFColor(new float[0,0,1]);
Transform31.children[1] = PointLight36;

Transform18.children[2] = Transform31;

Transform6.children[2] = Transform18;

browser.currentScene.children[4] = Transform6;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new SFVec3f(new float[3,-0.1,-1]);
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.ambientIntensity = 0;
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.emissiveColor = new SFColor(new float[1,1,1]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Box41 = browser.currentScene.createNode("Box");
Box41.size = new SFVec3f(new float[13,6,0.01]);
Shape38.geometry = Box41;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.translation = new SFVec3f(new float[0,-4.1,0.1]);
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.ambientIntensity = 0;
Material45.diffuseColor = new SFColor(new float[1,1,1]);
Material45.emissiveColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let Text46 = browser.currentScene.createNode("Text");
Text46.string = new MFString(new java.lang.String["subtractive","(incorrect)"]);
let FontStyle47 = browser.currentScene.createNode("FontStyle");
FontStyle47.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text46.fontStyle = FontStyle47;

Shape43.geometry = Text46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

Transform37.children[1] = Transform42;

browser.currentScene.children[5] = Transform37;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[-1,1,0]);
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,-3,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.ambientIntensity = 0;
Material52.diffuseColor = new SFColor(new float[0,0,0]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Text53 = browser.currentScene.createNode("Text");
Text53.string = new MFString(new java.lang.String["diffuse only"]);
let FontStyle54 = browser.currentScene.createNode("FontStyle");
FontStyle54.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle54.size = 0.6;
Text53.fontStyle = FontStyle54;

Shape50.geometry = Text53;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

let Transform55 = browser.currentScene.createNode("Transform");
Transform55.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform55.translation = new SFVec3f(new float[-0.5,0.2,0]);
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.ambientIntensity = 0;
Material58.diffuseColor = new SFColor(new float[0,1,1]);
Material58.shininess = 0;
Material58.transparency = 0.5;
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Cylinder59 = browser.currentScene.createNode("Cylinder");
Cylinder59.height = 0.01;
Shape56.geometry = Cylinder59;

Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

Transform48.children[1] = Transform55;

let Transform60 = browser.currentScene.createNode("Transform");
Transform60.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform60.translation = new SFVec3f(new float[0.5,0.2,-0.01]);
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.ambientIntensity = 0;
Material63.diffuseColor = new SFColor(new float[1,0,1]);
Material63.shininess = 0;
Material63.transparency = 0.5;
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

let Cylinder64 = browser.currentScene.createNode("Cylinder");
Cylinder64.height = 0.01;
Shape61.geometry = Cylinder64;

Transform60.children = new MFNode();

Transform60.children[0] = Shape61;

Transform48.children[2] = Transform60;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform65.translation = new SFVec3f(new float[0,-0.68,0]);
let Shape66 = browser.currentScene.createNode("Shape");
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.ambientIntensity = 0;
Material68.diffuseColor = new SFColor(new float[1,1,0]);
Material68.shininess = 0;
Material68.transparency = 0.5;
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

let Cylinder69 = browser.currentScene.createNode("Cylinder");
Cylinder69.height = 0.01;
Shape66.geometry = Cylinder69;

Transform65.children = new MFNode();

Transform65.children[0] = Shape66;

Transform48.children[3] = Transform65;

browser.currentScene.children[6] = Transform48;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.translation = new SFVec3f(new float[2.5,1,0]);
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new SFVec3f(new float[0,-3,0]);
let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.ambientIntensity = 0;
Material74.diffuseColor = new SFColor(new float[0,0,0]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let Text75 = browser.currentScene.createNode("Text");
Text75.string = new MFString(new java.lang.String["emissive only"]);
let FontStyle76 = browser.currentScene.createNode("FontStyle");
FontStyle76.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle76.size = 0.6;
Text75.fontStyle = FontStyle76;

Shape72.geometry = Text75;

Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

Transform70.children = new MFNode();

Transform70.children[0] = Transform71;

let Transform77 = browser.currentScene.createNode("Transform");
Transform77.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform77.translation = new SFVec3f(new float[-0.5,0.2,0]);
let Shape78 = browser.currentScene.createNode("Shape");
let Appearance79 = browser.currentScene.createNode("Appearance");
let Material80 = browser.currentScene.createNode("Material");
Material80.ambientIntensity = 0;
Material80.diffuseColor = new SFColor(new float[0,0,0]);
Material80.emissiveColor = new SFColor(new float[0,1,1]);
Material80.shininess = 0;
Material80.transparency = 0.5;
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

let Cylinder81 = browser.currentScene.createNode("Cylinder");
Cylinder81.height = 0.01;
Shape78.geometry = Cylinder81;

Transform77.children = new MFNode();

Transform77.children[0] = Shape78;

Transform70.children[1] = Transform77;

let Transform82 = browser.currentScene.createNode("Transform");
Transform82.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform82.translation = new SFVec3f(new float[0.5,0.2,-0.01]);
let Shape83 = browser.currentScene.createNode("Shape");
let Appearance84 = browser.currentScene.createNode("Appearance");
let Material85 = browser.currentScene.createNode("Material");
Material85.ambientIntensity = 0;
Material85.diffuseColor = new SFColor(new float[0,0,0]);
Material85.emissiveColor = new SFColor(new float[1,0,1]);
Material85.shininess = 0;
Material85.transparency = 0.5;
Appearance84.material = Material85;

Shape83.appearance = Appearance84;

let Cylinder86 = browser.currentScene.createNode("Cylinder");
Cylinder86.height = 0.01;
Shape83.geometry = Cylinder86;

Transform82.children = new MFNode();

Transform82.children[0] = Shape83;

Transform70.children[2] = Transform82;

let Transform87 = browser.currentScene.createNode("Transform");
Transform87.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform87.translation = new SFVec3f(new float[0,-0.68,0]);
let Shape88 = browser.currentScene.createNode("Shape");
let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.ambientIntensity = 0;
Material90.diffuseColor = new SFColor(new float[0,0,0]);
Material90.emissiveColor = new SFColor(new float[1,1,0]);
Material90.shininess = 0;
Material90.transparency = 0.5;
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

let Cylinder91 = browser.currentScene.createNode("Cylinder");
Cylinder91.height = 0.01;
Shape88.geometry = Cylinder91;

Transform87.children = new MFNode();

Transform87.children[0] = Shape88;

Transform70.children[3] = Transform87;

browser.currentScene.children[7] = Transform70;

let Transform92 = browser.currentScene.createNode("Transform");
Transform92.translation = new SFVec3f(new float[6,1,0]);
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[0,-2.5,0]);
let Shape94 = browser.currentScene.createNode("Shape");
let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Material96.ambientIntensity = 0;
Material96.diffuseColor = new SFColor(new float[0,0,0]);
Appearance95.material = Material96;

Shape94.appearance = Appearance95;

let Text97 = browser.currentScene.createNode("Text");
Text97.string = new MFString(new java.lang.String["how it","should look","(faked)"]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle98.size = 0.6;
Text97.fontStyle = FontStyle98;

Shape94.geometry = Text97;

Transform93.children = new MFNode();

Transform93.children[0] = Shape94;

Transform92.children = new MFNode();

Transform92.children[0] = Transform93;

let Transform99 = browser.currentScene.createNode("Transform");
Transform99.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform99.scale = new SFVec3f(new float[2,2,2]);
let Transform100 = browser.currentScene.createNode("Transform");
let Shape101 = browser.currentScene.createNode("Shape");
let Appearance102 = browser.currentScene.createNode("Appearance");
let Material103 = browser.currentScene.createNode("Material");
Material103.ambientIntensity = 0;
Material103.diffuseColor = new SFColor(new float[0,1,1]);
Material103.emissiveColor = new SFColor(new float[0,1,1]);
Material103.shininess = 0;
Appearance102.material = Material103;

Shape101.appearance = Appearance102;

let IndexedFaceSet104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet104.coordIndex = new MFInt32(new int[3,4,5,-1,3,5,2,-1,2,5,1,-1,1,5,0,-1,0,5,13,-1,13,5,14,-1,14,5,15,-1,15,5,16,-1,16,5,17,-1,17,5,18,-1,18,5,19,-1,19,5,20,-1,20,5,21,-1,21,5,22,-1,12,23,22,-1,12,5,11,-1,11,5,10,-1,10,5,9,-1,9,5,8,-1,8,5,7,-1,5,6,7,-1,5,12,22,-1]);
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[0.0013,0,-0.5314,-0.1193,0,-0.5813,-0.2487,0,-0.5983,-0.3781,0,-0.5813,-0.4987,0,-0.5314,-0.6023,0,-0.4519,-0.6818,0,-0.3483,-0.7317,0,-0.2277,-0.7487,0,-0.0983,-0.7317,0,0.0311,-0.6818,0,0.1517,-0.6023,0,0.2552,-0.4987,0,0.3347,0.0029,0,-0.5301,-0.099,0,-0.4519,-0.1785,0,-0.3483,-0.2284,0,-0.2277,-0.2455,0,-0.0983,-0.2453,0,-0.0967,-0.3478,0,-0.018,-0.4272,0,0.0855,-0.4772,0,0.2061,-0.4942,0,0.3355,-0.4941,0,0.3366]);
IndexedFaceSet104.coord = Coordinate105;

Shape101.geometry = IndexedFaceSet104;

Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

Transform99.children = new MFNode();

Transform99.children[0] = Transform100;

let Transform106 = browser.currentScene.createNode("Transform");
let Shape107 = browser.currentScene.createNode("Shape");
let Appearance108 = browser.currentScene.createNode("Appearance");
let Material109 = browser.currentScene.createNode("Material");
Material109.ambientIntensity = 0;
Material109.diffuseColor = new SFColor(new float[1,0,1]);
Material109.emissiveColor = new SFColor(new float[1,0,1]);
Material109.shininess = 0;
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

let IndexedFaceSet110 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet110.coordIndex = new MFInt32(new int[16,4,17,-1,17,6,18,-1,18,12,19,-1,19,12,20,-1,12,21,20,-1,12,18,13,-1,13,7,14,-1,8,15,14,-1,8,14,7,-1,7,18,6,-1,6,17,5,-1,5,17,4,-1,4,16,3,-1,3,16,2,-1,2,16,1,-1,1,16,0,-1,0,16,11,-1,11,16,10,-1,16,9,10,-1,18,7,13,-1]);
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0.7545,0,-0.0983,0.7375,0,-0.2277,0.6875,0,-0.3483,0.6081,0,-0.4519,0.5045,0,-0.5314,0.3839,0,-0.5813,0.2545,0,-0.5983,0.1251,0,-0.5813,0.0045,0,-0.5314,0.6081,0,0.2552,0.6875,0,0.1517,0.7375,0,0.0311,0.2342,0,-0.2277,0.1843,0,-0.3483,0.1048,0,-0.4519,0.0029,0,-0.5301,0.5056,0,0.3339,0.4887,0,0.2061,0.4388,0,0.0855,0.3593,0,-0.018,0.2558,0,-0.0975,0.2511,0,-0.0994]);
IndexedFaceSet110.coord = Coordinate111;

Shape107.geometry = IndexedFaceSet110;

Transform106.children = new MFNode();

Transform106.children[0] = Shape107;

Transform99.children[1] = Transform106;

let Transform112 = browser.currentScene.createNode("Transform");
let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.ambientIntensity = 0;
Material115.diffuseColor = new SFColor(new float[1,1,0]);
Material115.emissiveColor = new SFColor(new float[1,1,0]);
Material115.shininess = 0;
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

let IndexedFaceSet116 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet116.coordIndex = new MFInt32(new int[12,8,13,-1,13,10,14,-1,14,19,15,-1,15,18,16,-1,18,17,16,-1,18,15,19,-1,19,14,20,-1,20,11,21,-1,21,0,22,-1,0,23,22,-1,0,21,11,-1,11,14,10,-1,10,13,9,-1,6,12,5,-1,5,12,4,-1,4,12,3,-1,3,12,2,-1,12,1,2,-1,7,8,12,-1,6,7,12,-1,8,9,13,-1,14,11,20,-1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0.5058,0,0.3355,-0.4772,0,0.4649,-0.4272,0,0.5855,-0.3478,0,0.6891,-0.2442,0,0.7685,-0.1236,0,0.8185,0.0058,0,0.8355,0.1352,0,0.8185,0.2558,0,0.7685,0.3593,0,0.6891,0.4388,0,0.5855,0.4887,0,0.4649,-0.4941,0,0.3366,-0.3781,0,0.3846,-0.2487,0,0.4017,-0.1193,0,0.3846,0.0013,0,0.3347,0.0029,0,0.3334,0.0045,0,0.3347,0.1251,0,0.3846,0.2545,0,0.4017,0.3839,0,0.3846,0.5045,0,0.3347,0.5056,0,0.3339]);
IndexedFaceSet116.coord = Coordinate117;

Shape113.geometry = IndexedFaceSet116;

Transform112.children = new MFNode();

Transform112.children[0] = Shape113;

Transform99.children[2] = Transform112;

let Transform118 = browser.currentScene.createNode("Transform");
let Shape119 = browser.currentScene.createNode("Shape");
let Appearance120 = browser.currentScene.createNode("Appearance");
let Material121 = browser.currentScene.createNode("Material");
Material121.ambientIntensity = 0;
Material121.diffuseColor = new SFColor(new float[1,0,0]);
Material121.emissiveColor = new SFColor(new float[1,0,0]);
Material121.shininess = 0;
Appearance120.material = Material121;

Shape119.appearance = Appearance120;

let IndexedFaceSet122 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet122.coordIndex = new MFInt32(new int[9,8,7,-1,9,7,15,-1,15,7,12,-1,12,7,13,-1,13,7,14,-1,14,7,11,-1,4,10,11,-1,4,7,3,-1,3,7,2,-1,2,7,1,-1,1,7,0,-1,0,7,5,-1,7,6,5,-1,7,4,11,-1]);
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.point = new MFVec3f(new float[0.5056,0,0.3339,0.4887,0,0.2061,0.4388,0,0.0855,0.3593,0,-0.018,0.2558,0,-0.0975,0.5045,0,0.3347,0.3839,0,0.3846,0.2545,0,0.4017,0.1251,0,0.3846,0.0045,0,0.3347,0.2511,0,-0.0994,0.2513,0,-0.0983,0.1048,0,0.2552,0.1843,0,0.1517,0.2342,0,0.0311,0.0029,0,0.3334]);
IndexedFaceSet122.coord = Coordinate123;

Shape119.geometry = IndexedFaceSet122;

Transform118.children = new MFNode();

Transform118.children[0] = Shape119;

Transform99.children[3] = Transform118;

let Transform124 = browser.currentScene.createNode("Transform");
let Shape125 = browser.currentScene.createNode("Shape");
let Appearance126 = browser.currentScene.createNode("Appearance");
let Material127 = browser.currentScene.createNode("Material");
Material127.ambientIntensity = 0;
Material127.diffuseColor = new SFColor(new float[0,1,0]);
Material127.emissiveColor = new SFColor(new float[0,1,0]);
Material127.shininess = 0;
Appearance126.material = Material127;

Shape125.appearance = Appearance126;

let IndexedFaceSet128 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet128.coordIndex = new MFInt32(new int[8,1,9,-1,9,2,10,-1,10,2,11,-1,3,12,11,-1,3,11,2,-1,2,9,1,-1,1,8,0,-1,0,8,13,-1,13,8,7,-1,7,8,6,-1,6,8,5,-1,8,4,5,-1]);
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[-0.3781,0,0.3846,-0.2487,0,0.4017,-0.1193,0,0.3846,0.0013,0,0.3347,-0.3478,0,-0.018,-0.4272,0,0.0855,-0.4772,0,0.2061,-0.4942,0,0.3355,-0.2453,0,-0.0967,-0.2284,0,0.0311,-0.1785,0,0.1517,-0.099,0,0.2552,0.0029,0,0.3334,-0.4941,0,0.3366]);
IndexedFaceSet128.coord = Coordinate129;

Shape125.geometry = IndexedFaceSet128;

Transform124.children = new MFNode();

Transform124.children[0] = Shape125;

Transform99.children[4] = Transform124;

let Transform130 = browser.currentScene.createNode("Transform");
let Shape131 = browser.currentScene.createNode("Shape");
let Appearance132 = browser.currentScene.createNode("Appearance");
let Material133 = browser.currentScene.createNode("Material");
Material133.ambientIntensity = 0;
Material133.diffuseColor = new SFColor(new float[0,0,1]);
Material133.emissiveColor = new SFColor(new float[0,0,1]);
Material133.shininess = 0;
Appearance132.material = Material133;

Shape131.appearance = Appearance132;

let IndexedFaceSet134 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet134.coordIndex = new MFInt32(new int[1,2,11,-1,1,11,0,-1,0,11,12,-1,12,11,7,-1,7,11,8,-1,8,11,9,-1,9,11,10,-1,10,11,13,-1,13,11,6,-1,6,11,5,-1,5,11,4,-1,11,3,4,-1]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[0.2342,0,-0.2277,0.1843,0,-0.3483,0.1048,0,-0.4519,-0.099,0,-0.4519,-0.1785,0,-0.3483,-0.2284,0,-0.2277,-0.2455,0,-0.0983,0.1352,0,-0.1475,0.0058,0,-0.1645,-0.1236,0,-0.1475,-0.2442,0,-0.0975,0.0029,0,-0.5301,0.2511,0,-0.0994,-0.2453,0,-0.0967]);
IndexedFaceSet134.coord = Coordinate135;

Shape131.geometry = IndexedFaceSet134;

Transform130.children = new MFNode();

Transform130.children[0] = Shape131;

Transform99.children[5] = Transform130;

let Transform136 = browser.currentScene.createNode("Transform");
let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
let Material139 = browser.currentScene.createNode("Material");
Material139.ambientIntensity = 0;
Material139.diffuseColor = new SFColor(new float[0,0,0]);
Material139.shininess = 0;
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

let IndexedFaceSet140 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet140.coordIndex = new MFInt32(new int[5,6,7,-1,5,7,4,-1,4,7,13,-1,13,7,11,-1,11,7,10,-1,10,7,9,-1,9,7,8,-1,8,7,12,-1,12,7,0,-1,0,7,3,-1,3,7,2,-1,7,1,2,-1]);
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0.2513,0,-0.0983,0.1048,0,0.2552,0.1843,0,0.1517,0.2342,0,0.0311,-0.2284,0,0.0311,-0.1785,0,0.1517,-0.099,0,0.2552,0.0029,0,0.3334,0.1352,0,-0.1475,0.0058,0,-0.1645,-0.1236,0,-0.1475,-0.2442,0,-0.0975,0.2511,0,-0.0994,-0.2453,0,-0.0967]);
IndexedFaceSet140.coord = Coordinate141;

Shape137.geometry = IndexedFaceSet140;

Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

Transform99.children[6] = Transform136;

Transform92.children[1] = Transform99;

browser.currentScene.children[8] = Transform92;

