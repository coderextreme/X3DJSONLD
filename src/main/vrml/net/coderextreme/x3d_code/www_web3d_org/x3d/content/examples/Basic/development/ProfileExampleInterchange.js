let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let Group2 = browser.currentScene.createNode("Group");
let Shape3 = browser.currentScene.createNode("Shape");
let Appearance4 = browser.currentScene.createNode("Appearance");
let ImageTexture5 = browser.currentScene.createNode("ImageTexture");
ImageTexture5.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.gif"]);
Appearance4.texture = ImageTexture5;

let Material6 = browser.currentScene.createNode("Material");
Appearance4.material = Material6;

let TextureTransform7 = browser.currentScene.createNode("TextureTransform");
Appearance4.textureTransform = TextureTransform7;

Shape3.appearance = Appearance4;

let IndexedFaceSet8 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet8.creaseAngle = 3.14159;
let Color9 = browser.currentScene.createNode("Color");
Color9.color = new MFColor(new float[1,1,1]);
IndexedFaceSet8.color = Color9;

let Coordinate10 = browser.currentScene.createNode("Coordinate");
Coordinate10.point = new MFVec3f(new float[0,0,0]);
IndexedFaceSet8.coord = Coordinate10;

let MultiTextureCoordinate11 = browser.currentScene.createNode("MultiTextureCoordinate");
IndexedFaceSet8.texCoord = MultiTextureCoordinate11;

Shape3.geometry = IndexedFaceSet8;

Group2.children = new MFNode();

Group2.children[0] = Shape3;

let Shape12 = browser.currentScene.createNode("Shape");
let IndexedLineSet13 = browser.currentScene.createNode("IndexedLineSet");
let ColorRGBA14 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA14.color = new MFColorRGBA(new float[1,1,1,1]);
IndexedLineSet13.color = ColorRGBA14;

Shape12.geometry = IndexedLineSet13;

Group2.children[1] = Shape12;

let Shape15 = browser.currentScene.createNode("Shape");
let Box16 = browser.currentScene.createNode("Box");
Shape15.geometry = Box16;

let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "SilenceWarnings";
Shape15.appearance = Appearance17;

Group2.children[2] = Shape15;

let Shape18 = browser.currentScene.createNode("Shape");
let Cone19 = browser.currentScene.createNode("Cone");
Shape18.geometry = Cone19;

let Appearance20 = browser.currentScene.createNode("Appearance");
Appearance20.USE = "SilenceWarnings";
Shape18.appearance = Appearance20;

Group2.children[3] = Shape18;

let Shape21 = browser.currentScene.createNode("Shape");
let Cylinder22 = browser.currentScene.createNode("Cylinder");
Shape21.geometry = Cylinder22;

let Appearance23 = browser.currentScene.createNode("Appearance");
Appearance23.USE = "SilenceWarnings";
Shape21.appearance = Appearance23;

Group2.children[4] = Shape21;

let Shape24 = browser.currentScene.createNode("Shape");
let IndexedTriangleFanSet25 = browser.currentScene.createNode("IndexedTriangleFanSet");
let TextureCoordinate26 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate26.point = new MFVec2f(new float[0,0]);
IndexedTriangleFanSet25.texCoord = TextureCoordinate26;

Shape24.geometry = IndexedTriangleFanSet25;

let Appearance27 = browser.currentScene.createNode("Appearance");
Appearance27.USE = "SilenceWarnings";
Shape24.appearance = Appearance27;

Group2.children[5] = Shape24;

let Shape28 = browser.currentScene.createNode("Shape");
let IndexedTriangleSet29 = browser.currentScene.createNode("IndexedTriangleSet");
let TextureCoordinateGenerator30 = browser.currentScene.createNode("TextureCoordinateGenerator");
IndexedTriangleSet29.texCoord = TextureCoordinateGenerator30;

Shape28.geometry = IndexedTriangleSet29;

let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.USE = "SilenceWarnings";
Shape28.appearance = Appearance31;

Group2.children[6] = Shape28;

let Shape32 = browser.currentScene.createNode("Shape");
let IndexedTriangleStripSet33 = browser.currentScene.createNode("IndexedTriangleStripSet");
let Normal34 = browser.currentScene.createNode("Normal");
Normal34.vector = new MFVec3f(new float[0,1,0]);
IndexedTriangleStripSet33.normal = Normal34;

Shape32.geometry = IndexedTriangleStripSet33;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.USE = "SilenceWarnings";
Shape32.appearance = Appearance35;

Group2.children[7] = Shape32;

let Shape36 = browser.currentScene.createNode("Shape");
let LineSet37 = browser.currentScene.createNode("LineSet");
Shape36.geometry = LineSet37;

let Appearance38 = browser.currentScene.createNode("Appearance");
let MultiTexture39 = browser.currentScene.createNode("MultiTexture");
Appearance38.texture = MultiTexture39;

let MultiTextureTransform40 = browser.currentScene.createNode("MultiTextureTransform");
Appearance38.textureTransform = MultiTextureTransform40;

Shape36.appearance = Appearance38;

Group2.children[8] = Shape36;

let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
let PixelTexture43 = browser.currentScene.createNode("PixelTexture");
Appearance42.texture = PixelTexture43;

Shape41.appearance = Appearance42;

let PointSet44 = browser.currentScene.createNode("PointSet");
Shape41.geometry = PointSet44;

Group2.children[9] = Shape41;

let Shape45 = browser.currentScene.createNode("Shape");
let Sphere46 = browser.currentScene.createNode("Sphere");
Shape45.geometry = Sphere46;

let Appearance47 = browser.currentScene.createNode("Appearance");
Appearance47.USE = "SilenceWarnings";
Shape45.appearance = Appearance47;

Group2.children[10] = Shape45;

let Shape48 = browser.currentScene.createNode("Shape");
let TriangleFanSet49 = browser.currentScene.createNode("TriangleFanSet");
Shape48.geometry = TriangleFanSet49;

let Appearance50 = browser.currentScene.createNode("Appearance");
Appearance50.USE = "SilenceWarnings";
Shape48.appearance = Appearance50;

Group2.children[11] = Shape48;

let Shape51 = browser.currentScene.createNode("Shape");
let TriangleSet52 = browser.currentScene.createNode("TriangleSet");
Shape51.geometry = TriangleSet52;

let Appearance53 = browser.currentScene.createNode("Appearance");
Appearance53.USE = "SilenceWarnings";
Shape51.appearance = Appearance53;

Group2.children[12] = Shape51;

let Shape54 = browser.currentScene.createNode("Shape");
let TriangleStripSet55 = browser.currentScene.createNode("TriangleStripSet");
Shape54.geometry = TriangleStripSet55;

let Appearance56 = browser.currentScene.createNode("Appearance");
Appearance56.USE = "SilenceWarnings";
Shape54.appearance = Appearance56;

Group2.children[13] = Shape54;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;

let Background57 = browser.currentScene.createNode("Background");
Background57.groundColor = new MFColor(new float[0,0,0]);
Background57.skyColor = new MFColor(new float[0,0.2,0.7]);
browser.currentScene.children[1] = Background57;

let CoordinateInterpolator58 = browser.currentScene.createNode("CoordinateInterpolator");
CoordinateInterpolator58.DEF = "CI";
browser.currentScene.children[2] = CoordinateInterpolator58;

let DirectionalLight59 = browser.currentScene.createNode("DirectionalLight");
browser.currentScene.children[3] = DirectionalLight59;

let NavigationInfo60 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[4] = NavigationInfo60;

let NormalInterpolator61 = browser.currentScene.createNode("NormalInterpolator");
NormalInterpolator61.DEF = "NI";
NormalInterpolator61.key = new MFFloat(new float[0,1]);
NormalInterpolator61.keyValue = new MFVec3f(new float[0,1,0,0,1,0]);
browser.currentScene.children[5] = NormalInterpolator61;

let OrientationInterpolator62 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "OI";
OrientationInterpolator62.key = new MFFloat(new float[0,1]);
OrientationInterpolator62.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
browser.currentScene.children[6] = OrientationInterpolator62;

let PositionInterpolator63 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator63.DEF = "PI";
PositionInterpolator63.key = new MFFloat(new float[0,1]);
PositionInterpolator63.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
browser.currentScene.children[7] = PositionInterpolator63;

let ScalarInterpolator64 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator64.DEF = "SI";
ScalarInterpolator64.key = new MFFloat(new float[0,1]);
ScalarInterpolator64.keyValue = new MFFloat(new float[0,0]);
browser.currentScene.children[8] = ScalarInterpolator64;

let TimeSensor65 = browser.currentScene.createNode("TimeSensor");
TimeSensor65.DEF = "TS";
TimeSensor65.enabled = False;
browser.currentScene.children[9] = TimeSensor65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "fraction_changed";
ROUTE66.fromNode = "TS";
ROUTE66.toField = "set_fraction";
ROUTE66.toNode = "NI";
browser.currentScene.children[10] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "fraction_changed";
ROUTE67.fromNode = "TS";
ROUTE67.toField = "set_fraction";
ROUTE67.toNode = "OI";
browser.currentScene.children[11] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "fraction_changed";
ROUTE68.fromNode = "TS";
ROUTE68.toField = "set_fraction";
ROUTE68.toNode = "PI";
browser.currentScene.children[12] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "fraction_changed";
ROUTE69.fromNode = "TS";
ROUTE69.toField = "set_fraction";
ROUTE69.toNode = "SI";
browser.currentScene.children[13] = ROUTE69;

let Transform70 = browser.currentScene.createNode("Transform");
browser.currentScene.children[14] = Transform70;

let Viewpoint71 = browser.currentScene.createNode("Viewpoint");
Viewpoint71.description = "InterchangeProfileExample";
browser.currentScene.children[15] = Viewpoint71;

let WorldInfo72 = browser.currentScene.createNode("WorldInfo");
browser.currentScene.children[16] = WorldInfo72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "fraction_changed";
ROUTE73.fromNode = "TS";
ROUTE73.toField = "set_fraction";
ROUTE73.toNode = "PI";
browser.currentScene.children[17] = ROUTE73;

