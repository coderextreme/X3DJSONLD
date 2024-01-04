let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "JohnJoint.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "h6.pl";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "created";
meta8.content = "12 January 2023";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

let Transform11 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet13 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet13.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet13.colorPerVertex = False;
IndexedLineSet13.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet13.coord = Coordinate14;

let Color15 = browser.currentScene.createNode("Color");
Color15.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet13.color = Color15;

Shape12.geometry = IndexedLineSet13;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform11;

let Group16 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform17 = browser.currentScene.createNode("Transform");
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,2.1,0]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.DEF = "HAnimJointShape";
let Sphere20 = browser.currentScene.createNode("Sphere");
Sphere20.radius = 0.02;
Shape19.geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.DEF = "HAnimJointMaterial";
Material22.diffuseColor = new SFColor(new float[0,0,0.8]);
Material22.transparency = 0.3;
Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,2.05,0]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "HAnimSegmentLine";
let LineSet25 = browser.currentScene.createNode("LineSet");
LineSet25.vertexCount = new MFInt32(new int[2]);
let ColorRGBA26 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA26.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA26.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet25.color = ColorRGBA26;

let Coordinate27 = browser.currentScene.createNode("Coordinate");
Coordinate27.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet25.coord = Coordinate27;

Shape24.geometry = LineSet25;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform17.children[1] = Transform23;

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group16.children = new MFNode();

Group16.children[0] = Transform17;

browser.currentScene.children[1] = Group16;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "default";
browser.currentScene.children[3] = Viewpoint29;

