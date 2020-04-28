let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//====================
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Geometry2dComponentExamples.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.groundColor = new MFColor(new float[0.3,0.3,0.3]);
Background3.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "Geometry2D Component Examples";
Viewpoint4.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[2] = Viewpoint4;

//====================
//Top row
let Transform5 = browser.currentScene.createNode("Transform");
Transform5.translation = new SFVec3f(new float[-6,2,0]);
let TouchSensor6 = browser.currentScene.createNode("TouchSensor");
TouchSensor6.description = "ArcClose2D";
Transform5.children = new MFNode();

Transform5.children[0] = TouchSensor6;

let Shape7 = browser.currentScene.createNode("Shape");
let ArcClose2D8 = browser.currentScene.createNode("ArcClose2D");
ArcClose2D8.endAngle = 3;
ArcClose2D8.startAngle = 0.7;
Shape7.geometry = ArcClose2D8;

//default radius='1'
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0,0,1]);
Material10.emissiveColor = new SFColor(new float[0,0,1]);
Appearance9.material = Material10;

Shape7.appearance = Appearance9;

Transform5.children[1] = Shape7;

browser.currentScene.children[3] = Transform5;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = new SFVec3f(new float[-2,2,0]);
let TouchSensor12 = browser.currentScene.createNode("TouchSensor");
TouchSensor12.description = "Arc2D";
Transform11.children = new MFNode();

Transform11.children[0] = TouchSensor12;

let Shape13 = browser.currentScene.createNode("Shape");
let Arc2D14 = browser.currentScene.createNode("Arc2D");
Shape13.geometry = Arc2D14;

//default radius='1' startAngle='0'
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.emissiveColor = new SFColor(new float[1,1,0]);
Appearance15.material = Material16;

Shape13.appearance = Appearance15;

Transform11.children[1] = Shape13;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "TransparentBackdropForTouchSensor";
Transform17.translation = new SFVec3f(new float[0,0,-0.5]);
let Shape18 = browser.currentScene.createNode("Shape");
let Rectangle2D19 = browser.currentScene.createNode("Rectangle2D");
Shape18.geometry = Rectangle2D19;

//default
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,0,0]);
Material21.transparency = 1;
Appearance20.material = Material21;

Shape18.appearance = Appearance20;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Transform11.children[2] = Transform17;

browser.currentScene.children[4] = Transform11;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[2,2,0]);
let TouchSensor23 = browser.currentScene.createNode("TouchSensor");
TouchSensor23.description = "Circle2D";
Transform22.children = new MFNode();

Transform22.children[0] = TouchSensor23;

let Shape24 = browser.currentScene.createNode("Shape");
let Circle2D25 = browser.currentScene.createNode("Circle2D");
Shape24.geometry = Circle2D25;

//default radius='1'
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.emissiveColor = new SFColor(new float[1,0,0]);
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform22.children[1] = Shape24;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.USE = "TransparentBackdropForTouchSensor";
Transform22.children[2] = Transform28;

browser.currentScene.children[5] = Transform22;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[6,2,0]);
let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.description = "Disk2D";
Transform29.children = new MFNode();

Transform29.children[0] = TouchSensor30;

let Shape31 = browser.currentScene.createNode("Shape");
let Disk2D32 = browser.currentScene.createNode("Disk2D");
Disk2D32.innerRadius = 0.5;
Shape31.geometry = Disk2D32;

//default outerRadius='1'
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0.5,1,1]);
Appearance33.material = Material34;

Shape31.appearance = Appearance33;

Transform29.children[1] = Shape31;

browser.currentScene.children[6] = Transform29;

//====================
//Bottom row
let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[-6,-2,0]);
let TouchSensor36 = browser.currentScene.createNode("TouchSensor");
TouchSensor36.description = "Rectangle2D";
Transform35.children = new MFNode();

Transform35.children[0] = TouchSensor36;

let Shape37 = browser.currentScene.createNode("Shape");
let Rectangle2D38 = browser.currentScene.createNode("Rectangle2D");
Rectangle2D38.size = new SFVec2f(new float[1,2]);
Shape37.geometry = Rectangle2D38;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,0,0]);
Appearance39.material = Material40;

Shape37.appearance = Appearance39;

Transform35.children[1] = Shape37;

browser.currentScene.children[7] = Transform35;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[-2,-2,0]);
let TouchSensor42 = browser.currentScene.createNode("TouchSensor");
TouchSensor42.description = "Polyline2D";
Transform41.children = new MFNode();

Transform41.children[0] = TouchSensor42;

let Shape43 = browser.currentScene.createNode("Shape");
let Polyline2D44 = browser.currentScene.createNode("Polyline2D");
Polyline2D44.lineSegments = new MFVec2f(new float[-1,0,-0.5,1,0,0,0.5,1,1,0]);
Shape43.geometry = Polyline2D44;

let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0,0,0]);
Material46.emissiveColor = new SFColor(new float[1,0.5,1]);
Appearance45.material = Material46;

Shape43.appearance = Appearance45;

Transform41.children[1] = Shape43;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.USE = "TransparentBackdropForTouchSensor";
Transform41.children[2] = Transform47;

browser.currentScene.children[8] = Transform41;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[2,-2,0]);
let TouchSensor49 = browser.currentScene.createNode("TouchSensor");
TouchSensor49.description = "Polypoint2D";
Transform48.children = new MFNode();

Transform48.children[0] = TouchSensor49;

let Shape50 = browser.currentScene.createNode("Shape");
let Polypoint2D51 = browser.currentScene.createNode("Polypoint2D");
Polypoint2D51.point = new MFVec2f(new float[-1,0,-0.5,1,0,0,0.5,1,1,0]);
Shape50.geometry = Polypoint2D51;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.emissiveColor = new SFColor(new float[1,1,1]);
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

Transform48.children[1] = Shape50;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.1,0.4,-0.5]);
let Shape55 = browser.currentScene.createNode("Shape");
let Rectangle2D56 = browser.currentScene.createNode("Rectangle2D");
Rectangle2D56.DEF = "BackDrop";
Rectangle2D56.size = new SFVec2f(new float[2.8,2]);
Shape55.geometry = Rectangle2D56;

let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[0,0,0]);
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new SFVec3f(new float[0,-0.15,0.2]);
let Shape60 = browser.currentScene.createNode("Shape");
let Text61 = browser.currentScene.createNode("Text");
Text61.string = new MFString(new java.lang.String["PolyPoint2D","5 points"]);
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle62.size = 0.25;
FontStyle62.style = "BOLD";
Text61.fontStyle = FontStyle62;

Shape60.geometry = Text61;

let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Appearance63.material = Material64;

Shape60.appearance = Appearance63;

Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

Transform54.children[1] = Transform59;

Transform48.children[2] = Transform54;

browser.currentScene.children[9] = Transform48;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new SFVec3f(new float[6,-2,0]);
let TouchSensor66 = browser.currentScene.createNode("TouchSensor");
TouchSensor66.description = "TriangleSet2D";
Transform65.children = new MFNode();

Transform65.children[0] = TouchSensor66;

let Shape67 = browser.currentScene.createNode("Shape");
let TriangleSet2D68 = browser.currentScene.createNode("TriangleSet2D");
TriangleSet2D68.vertices = new MFVec2f(new float[0,0,1,1,-1,1,0,0,1,-0.5,1,0.5,0,0,-2,-1,-1,-2]);
Shape67.geometry = TriangleSet2D68;

let Appearance69 = browser.currentScene.createNode("Appearance");
let FillProperties70 = browser.currentScene.createNode("FillProperties");
FillProperties70.DEF = "TestFillProperties";
Appearance69.fillProperties = FillProperties70;

let LineProperties71 = browser.currentScene.createNode("LineProperties");
LineProperties71.DEF = "TestLineProperties";
LineProperties71.linewidthScaleFactor = 1;
let MetadataString72 = browser.currentScene.createNode("MetadataString");
MetadataString72.name = "test LineProperties metadata child";
MetadataString72.DEF = "TestLinePropertiesMetaData";
LineProperties71.metadata = MetadataString72;

Appearance69.lineProperties = LineProperties71;

let Material73 = browser.currentScene.createNode("Material");
Material73.diffuseColor = new SFColor(new float[0,1,0]);
Appearance69.material = Material73;

Shape67.appearance = Appearance69;

Transform65.children[1] = Shape67;

browser.currentScene.children[10] = Transform65;

