let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.DEF = "WORLDINFO";
WorldInfo2.title = "VRML test scene: x3d/content/AllVrml97Nodes.wrl";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let WorldInfo3 = browser.currentScene.createNode("WorldInfo");
WorldInfo3.DEF = "DTD_TAGSET_CANDIDATES";
browser.currentScene.children[1] = WorldInfo3;

let WorldInfo4 = browser.currentScene.createNode("WorldInfo");
WorldInfo4.DEF = "Xj3D_BUGS_AND_ISSUES";
browser.currentScene.children[2] = WorldInfo4;

let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.DEF = "Xj3D_FIXES";
browser.currentScene.children[3] = WorldInfo5;

let WorldInfo6 = browser.currentScene.createNode("WorldInfo");
WorldInfo6.DEF = "XEENA_BUGS_AND_ISSUES";
browser.currentScene.children[4] = WorldInfo6;

let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.DEF = "XEENA_FIXES";
browser.currentScene.children[5] = WorldInfo7;

let Background8 = browser.currentScene.createNode("Background");
Background8.DEF = "BACKGROUND";
Background8.groundColor = new MFColor(new float[0,0,0]);
browser.currentScene.children[6] = Background8;

let Fog9 = browser.currentScene.createNode("Fog");
Fog9.DEF = "FOG";
browser.currentScene.children[7] = Fog9;

let NavigationInfo10 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo10.DEF = "NAVIGATIONINFO";
NavigationInfo10.type = new MFString(new java.lang.String["EXAMINE","WALK","ANY","FLY"]);
browser.currentScene.children[8] = NavigationInfo10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.DEF = "VIEWPOINT";
browser.currentScene.children[9] = Viewpoint11;

let Anchor12 = browser.currentScene.createNode("Anchor");
Anchor12.DEF = "ANCHOR";
let Billboard13 = browser.currentScene.createNode("Billboard");
Billboard13.DEF = "Billboard";
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.DEF = "SHAPE_BOX";
let Box15 = browser.currentScene.createNode("Box");
Box15.DEF = "BOX";
Shape14.geometry = Box15;

let Appearance16 = browser.currentScene.createNode("Appearance");
Appearance16.DEF = "APPEARANCE";
let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.DEF = "IMAGETEXTURE";
ImageTexture17.url = new MFString(new java.lang.String["../icons/cube.gif","https://www.web3d.org/x3d/content/examples/Basic/development/../icons/cube.gif"]);
Appearance16.texture = ImageTexture17;

let Material18 = browser.currentScene.createNode("Material");
Material18.DEF = "MATERIAL";
Appearance16.material = Material18;

Shape14.appearance = Appearance16;

Billboard13.children = new MFNode();

Billboard13.children[0] = Shape14;

Anchor12.children = new MFNode();

Anchor12.children[0] = Billboard13;

let Collision19 = browser.currentScene.createNode("Collision");
Collision19.DEF = "COLLISION";
let Group20 = browser.currentScene.createNode("Group");
Group20.DEF = "PROXY_GROUP";
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.DEF = "PROXY_SHAPE";
let Box22 = browser.currentScene.createNode("Box");
Box22.DEF = "PROXY_BOX";
Shape21.geometry = Box22;

Group20.children = new MFNode();

Group20.children[0] = Shape21;

Collision19.proxy = Group20;

let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "SHAPE_CONE";
let Cone24 = browser.currentScene.createNode("Cone");
Cone24.DEF = "CONE";
Shape23.geometry = Cone24;

let Appearance25 = browser.currentScene.createNode("Appearance");
Shape23.appearance = Appearance25;

Collision19.proxy = Shape23;

Anchor12.children[1] = Collision19;

let Group26 = browser.currentScene.createNode("Group");
Group26.DEF = "GROUP";
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.DEF = "SHAPE_CYLINDER";
let Cylinder28 = browser.currentScene.createNode("Cylinder");
Cylinder28.DEF = "CYLINDER";
Shape27.geometry = Cylinder28;

let Appearance29 = browser.currentScene.createNode("Appearance");
Shape27.appearance = Appearance29;

Group26.children = new MFNode();

Group26.children[0] = Shape27;

Anchor12.children[2] = Group26;

let Inline30 = browser.currentScene.createNode("Inline");
Inline30.DEF = "INLINE";
Inline30.url = new MFString(new java.lang.String["inlineTestFileOne.wrl","inlineTestFileTwo.wrl","inlineTestFileEmbedding%20Blanks%20In%20Name.wrl"]);
Anchor12.children[3] = Inline30;

let Inline31 = browser.currentScene.createNode("Inline");
Inline31.DEF = "INLINE_HELLO_WORLD";
Inline31.url = new MFString(new java.lang.String["HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl"]);
Anchor12.children[4] = Inline31;

let LOD32 = browser.currentScene.createNode("LOD");
LOD32.DEF = "LOD";
LOD32.range = new MFFloat(new float[1]);
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "SHAPE_ELEVATIONGRID";
let ElevationGrid34 = browser.currentScene.createNode("ElevationGrid");
ElevationGrid34.DEF = "ELEVATIONGRID";
ElevationGrid34.height = new MFFloat(new float[1,2,3,4]);
Shape33.geometry = ElevationGrid34;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.USE = "APPEARANCE";
Shape33.appearance = Appearance35;

LOD32.children = new MFNode();

LOD32.children[0] = Shape33;

let Shape36 = browser.currentScene.createNode("Shape");
Shape36.DEF = "SHAPE_EXTRUSION";
let Extrusion37 = browser.currentScene.createNode("Extrusion");
Extrusion37.DEF = "EXTRUSION";
Extrusion37.crossSection = new MFVec2f(new float[1,1,1,-1,-1,-1,-1,1,1,1]);
Extrusion37.scale = new MFVec2f(new float[1,1,1,1]);
Extrusion37.spine = new MFVec3f(new float[0,0,0,0,1,0]);
Shape36.geometry = Extrusion37;

let Appearance38 = browser.currentScene.createNode("Appearance");
Appearance38.USE = "APPEARANCE";
Shape36.appearance = Appearance38;

LOD32.children[1] = Shape36;

Anchor12.children[5] = LOD32;

let Switch39 = browser.currentScene.createNode("Switch");
Switch39.DEF = "SWITCH";
Switch39.whichChoice = -1;
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "SHAPE_TEXTURETRANSFORM_INDEXEDFACESET";
let IndexedFaceSet41 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet41.DEF = "INDEXEDFACESET";
IndexedFaceSet41.colorIndex = new MFInt32(new int[0,1,0,1]);
IndexedFaceSet41.coordIndex = new MFInt32(new int[0,1,2,3]);
IndexedFaceSet41.normalIndex = new MFInt32(new int[0,1,2,3]);
IndexedFaceSet41.texCoordIndex = new MFInt32(new int[0,1,2,3]);
let Color42 = browser.currentScene.createNode("Color");
Color42.DEF = "COLOR";
Color42.color = new MFColor(new float[1,0,0,0,1,0]);
IndexedFaceSet41.color = Color42;

let Coordinate43 = browser.currentScene.createNode("Coordinate");
Coordinate43.DEF = "COORDINATE";
Coordinate43.point = new MFVec3f(new float[1,0,0,0,1,0,0,0,1,1,1,1]);
IndexedFaceSet41.coord = Coordinate43;

let Normal44 = browser.currentScene.createNode("Normal");
Normal44.DEF = "NORMAL";
Normal44.vector = new MFVec3f(new float[1,0,0,0,1,0,0,0,1,0,0,1]);
IndexedFaceSet41.normal = Normal44;

let TextureCoordinate45 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate45.DEF = "TEXTURECOORDINATE";
TextureCoordinate45.point = new MFVec2f(new float[0.1,0.1,0.9,0.1,0.9,0.9,0.1,0.9]);
IndexedFaceSet41.texCoord = TextureCoordinate45;

Shape40.geometry = IndexedFaceSet41;

let Appearance46 = browser.currentScene.createNode("Appearance");
Appearance46.DEF = "APPEARANCE_TEXTURETRANSFORM";
let ImageTexture47 = browser.currentScene.createNode("ImageTexture");
ImageTexture47.USE = "IMAGETEXTURE";
Appearance46.texture = ImageTexture47;

let Material48 = browser.currentScene.createNode("Material");
Appearance46.material = Material48;

let TextureTransform49 = browser.currentScene.createNode("TextureTransform");
TextureTransform49.DEF = "TEXTURETRANSFORM";
TextureTransform49.center = new SFVec2f(new float[0.5,0.5]);
Appearance46.textureTransform = TextureTransform49;

Shape40.appearance = Appearance46;

Switch39.children = new MFNode();

Switch39.children[0] = Shape40;

let Shape50 = browser.currentScene.createNode("Shape");
Shape50.DEF = "SHAPE_INDEXEDLINESET";
let IndexedLineSet51 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet51.DEF = "INDEXEDLINESET";
IndexedLineSet51.colorIndex = new MFInt32(new int[0,1,0,1]);
IndexedLineSet51.coordIndex = new MFInt32(new int[0,1,2,3]);
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.USE = "COORDINATE";
IndexedLineSet51.coord = Coordinate52;

let Color53 = browser.currentScene.createNode("Color");
Color53.USE = "COLOR";
IndexedLineSet51.color = Color53;

Shape50.geometry = IndexedLineSet51;

let Appearance54 = browser.currentScene.createNode("Appearance");
Appearance54.USE = "APPEARANCE";
Shape50.appearance = Appearance54;

Switch39.children[1] = Shape50;

let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "SHAPE_POINTSET";
let PointSet56 = browser.currentScene.createNode("PointSet");
PointSet56.DEF = "POINTSET";
let Color57 = browser.currentScene.createNode("Color");
Color57.USE = "COLOR";
PointSet56.color = Color57;

let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.USE = "COORDINATE";
PointSet56.coord = Coordinate58;

Shape55.geometry = PointSet56;

let Appearance59 = browser.currentScene.createNode("Appearance");
Appearance59.USE = "APPEARANCE";
Shape55.appearance = Appearance59;

Switch39.children[2] = Shape55;

let Shape60 = browser.currentScene.createNode("Shape");
Shape60.DEF = "SHAPE_MOVIETEXTURE";
let IndexedFaceSet61 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet61.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet61.solid = False;
let Coordinate62 = browser.currentScene.createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,0,0,1,0,0,1,1,0,0,1,0]);
IndexedFaceSet61.coord = Coordinate62;

Shape60.geometry = IndexedFaceSet61;

let Appearance63 = browser.currentScene.createNode("Appearance");
Shape60.appearance = Appearance63;

Switch39.children[3] = Shape60;

Anchor12.children[6] = Switch39;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.DEF = "TRANSFORM";
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.DEF = "SHAPE_SPHERE";
let Sphere66 = browser.currentScene.createNode("Sphere");
Sphere66.DEF = "SPHERE";
Shape65.geometry = Sphere66;

let Appearance67 = browser.currentScene.createNode("Appearance");
Appearance67.USE = "APPEARANCE";
Shape65.appearance = Appearance67;

Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

let Shape68 = browser.currentScene.createNode("Shape");
Shape68.DEF = "SHAPE_TEXT";
let Text69 = browser.currentScene.createNode("Text");
Text69.DEF = "TEXT";
Text69.string = new MFString(new java.lang.String[" first line of text","second line of text"]);
let FontStyle70 = browser.currentScene.createNode("FontStyle");
FontStyle70.DEF = "FONTSTYLE";
Text69.fontStyle = FontStyle70;

Shape68.geometry = Text69;

let Appearance71 = browser.currentScene.createNode("Appearance");
Appearance71.USE = "APPEARANCE";
Shape68.appearance = Appearance71;

Transform64.children[1] = Shape68;

Anchor12.children[7] = Transform64;

let Sound72 = browser.currentScene.createNode("Sound");
Sound72.DEF = "SOUND";
let AudioClip73 = browser.currentScene.createNode("AudioClip");
AudioClip73.DEF = "AUDIOCLIP";
AudioClip73.description = "AudioClip";
Sound72.source = AudioClip73;

Anchor12.children[8] = Sound72;

let Group74 = browser.currentScene.createNode("Group");
Group74.DEF = "GROUP_LIGHTS";
let DirectionalLight75 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight75.DEF = "DIRECTIONALLIGHT";
Group74.children = new MFNode();

Group74.children[0] = DirectionalLight75;

let PointLight76 = browser.currentScene.createNode("PointLight");
PointLight76.DEF = "POINTLIGHT";
Group74.children[1] = PointLight76;

let SpotLight77 = browser.currentScene.createNode("SpotLight");
SpotLight77.DEF = "SPOTLIGHT";
SpotLight77.beamWidth = 1.570796;
SpotLight77.cutOffAngle = 0.785398;
Group74.children[2] = SpotLight77;

Anchor12.children[9] = Group74;

let Group78 = browser.currentScene.createNode("Group");
Group78.DEF = "GROUP_INTERPOLATORS";
let ColorInterpolator79 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator79.DEF = "COLORINTERPOLATOR";
ColorInterpolator79.key = new MFFloat(new float[0]);
ColorInterpolator79.keyValue = new MFColor(new float[0,0,0]);
Group78.children = new MFNode();

Group78.children[0] = ColorInterpolator79;

let CoordinateInterpolator80 = browser.currentScene.createNode("CoordinateInterpolator");
CoordinateInterpolator80.DEF = "COORDINATEINTERPOLATOR";
CoordinateInterpolator80.key = new MFFloat(new float[0]);
CoordinateInterpolator80.keyValue = new MFVec3f(new float[0,0,0]);
Group78.children[1] = CoordinateInterpolator80;

let NormalInterpolator81 = browser.currentScene.createNode("NormalInterpolator");
NormalInterpolator81.DEF = "NORMALINTERPOLATOR";
NormalInterpolator81.key = new MFFloat(new float[0]);
NormalInterpolator81.keyValue = new MFVec3f(new float[0,0,0]);
Group78.children[2] = NormalInterpolator81;

let OrientationInterpolator82 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator82.DEF = "ORIENTATIONINTERPOLATOR";
OrientationInterpolator82.key = new MFFloat(new float[0]);
OrientationInterpolator82.keyValue = new MFRotation(new float[0,0,1,0]);
Group78.children[3] = OrientationInterpolator82;

let PositionInterpolator83 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator83.DEF = "POSITIONINTERPOLATOR";
PositionInterpolator83.key = new MFFloat(new float[0]);
PositionInterpolator83.keyValue = new MFVec3f(new float[0,0,0]);
Group78.children[4] = PositionInterpolator83;

let ScalarInterpolator84 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator84.DEF = "SCALARINTERPOLATOR";
ScalarInterpolator84.key = new MFFloat(new float[0]);
ScalarInterpolator84.keyValue = new MFFloat(new float[0]);
Group78.children[5] = ScalarInterpolator84;

Anchor12.children[10] = Group78;

let Group85 = browser.currentScene.createNode("Group");
Group85.DEF = "GROUP_SENSORS";
let CylinderSensor86 = browser.currentScene.createNode("CylinderSensor");
CylinderSensor86.DEF = "CYLINDERSENSOR";
Group85.children = new MFNode();

Group85.children[0] = CylinderSensor86;

let PlaneSensor87 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor87.DEF = "PLANESENSOR";
Group85.children[1] = PlaneSensor87;

let ProximitySensor88 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor88.DEF = "PROXIMITYSENSOR";
Group85.children[2] = ProximitySensor88;

let SphereSensor89 = browser.currentScene.createNode("SphereSensor");
SphereSensor89.DEF = "SPHERESENSOR";
Group85.children[3] = SphereSensor89;

let TimeSensor90 = browser.currentScene.createNode("TimeSensor");
TimeSensor90.DEF = "TIMESENSOR";
Group85.children[4] = TimeSensor90;

let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.DEF = "TOUCHSENSOR";
Group85.children[5] = TouchSensor91;

let VisibilitySensor92 = browser.currentScene.createNode("VisibilitySensor");
VisibilitySensor92.DEF = "VISIBILITYSENSOR";
Group85.children[6] = VisibilitySensor92;

Anchor12.children[11] = Group85;

browser.currentScene.children[10] = Anchor12;

let WorldInfo93 = browser.currentScene.createNode("WorldInfo");
WorldInfo93.DEF = "Xj3D_NODE_TRANSLATION_STATUS";
browser.currentScene.children[11] = WorldInfo93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "isActive";
ROUTE94.fromNode = "TOUCHSENSOR";
ROUTE94.toField = "enabled";
ROUTE94.toNode = "TOUCHSENSOR";
browser.currentScene.children[12] = ROUTE94;

