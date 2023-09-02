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
meta3.content = "WinterAndSpringTest.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "May through September 2023";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "2 June 2023";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "license";
meta12.content = "../license.html";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.info = new MFString(new java.lang.String["X3D Humanoid LOA3 skeleton plus others","Lots points"]);
WorldInfo14.title = "X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo15.DEF = "Start_NavigationInfo";
NavigationInfo15.headlight = False;
browser.currentScene.children[1] = NavigationInfo15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint16.description = "Male";
Viewpoint16.position = new SFVec3f(new float[0,1,-2]);
browser.currentScene.children[2] = Viewpoint16;

let Background17 = browser.currentScene.createNode("Background");
Background17.DEF = "gray_Background";
browser.currentScene.children[3] = Background17;

let Background18 = browser.currentScene.createNode("Background");
Background18.DEF = "dark_gray_Background";
browser.currentScene.children[4] = Background18;

let Background19 = browser.currentScene.createNode("Background");
Background19.DEF = "black_Background";
browser.currentScene.children[5] = Background19;

let Background20 = browser.currentScene.createNode("Background");
Background20.DEF = "blue_Background";
browser.currentScene.children[6] = Background20;

let SpotLight21 = browser.currentScene.createNode("SpotLight");
SpotLight21.DEF = "light1";
SpotLight21.ambientIntensity = 0.7;
SpotLight21.beamWidth = 1.5;
SpotLight21.color = new SFColor(new float[0.8,0.8,1]);
SpotLight21.cutOffAngle = 0.6;
SpotLight21.direction = new SFVec3f(new float[0,0,0]);
SpotLight21.location = new SFVec3f(new float[0,3,3]);
SpotLight21.radius = 10;
browser.currentScene.children[7] = SpotLight21;

let PointLight22 = browser.currentScene.createNode("PointLight");
PointLight22.DEF = "light2";
PointLight22.ambientIntensity = 0.7;
PointLight22.color = new SFColor(new float[0.8,0.8,1]);
PointLight22.location = new SFVec3f(new float[0,10,-7]);
browser.currentScene.children[8] = PointLight22;

//External from the Humanoid viewpoints
let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "Scene_InclinedView";
Viewpoint23.centerOfRotation = new SFVec3f(new float[0,0.85,0]);
Viewpoint23.description = "Scene_Inclined View";
Viewpoint23.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint23.position = new SFVec3f(new float[1.62,1.05,3.06]);
browser.currentScene.children[9] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.DEF = "Scene_IFrontView";
Viewpoint24.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint24.description = "Scene_Front View";
Viewpoint24.position = new SFVec3f(new float[0,0.8,2.58]);
browser.currentScene.children[10] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "Scene_OldMan_ISideView";
Viewpoint25.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint25.description = "Scene_Side View";
Viewpoint25.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint25.position = new SFVec3f(new float[-2.6,1.5,1]);
browser.currentScene.children[11] = Viewpoint25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.DEF = "Scene_ISideView";
Viewpoint26.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint26.description = "Scene_Side View";
Viewpoint26.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint26.position = new SFVec3f(new float[-5,1.5,1]);
browser.currentScene.children[12] = Viewpoint26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.DEF = "Scene_Full_ISideView";
Viewpoint27.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint27.description = "Scene_Side View";
Viewpoint27.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint27.position = new SFVec3f(new float[-10,1.5,1]);
browser.currentScene.children[13] = Viewpoint27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.DEF = "Scene_OneBush_ISideView";
Viewpoint28.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint28.description = "Scene_Side View";
Viewpoint28.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint28.position = new SFVec3f(new float[-20,1.5,1]);
browser.currentScene.children[14] = Viewpoint28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.DEF = "Scene_TwoBush_ISideView";
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint29.description = "Scene_Side View";
Viewpoint29.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint29.position = new SFVec3f(new float[-10,1.5,1]);
browser.currentScene.children[15] = Viewpoint29;

let Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.DEF = "Scene_BackView";
Viewpoint30.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint30.description = "Scene_Back View";
Viewpoint30.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint30.position = new SFVec3f(new float[0,1.5,-5]);
browser.currentScene.children[16] = Viewpoint30;

let Viewpoint31 = browser.currentScene.createNode("Viewpoint");
Viewpoint31.DEF = "Scene_OldMan_BackView";
Viewpoint31.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint31.description = "Scene_Back View";
Viewpoint31.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint31.position = new SFVec3f(new float[0,1.5,-2.5]);
browser.currentScene.children[17] = Viewpoint31;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "Scene_Full_BackView";
Viewpoint32.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint32.description = "Scene_Back View";
Viewpoint32.orientation = new SFRotation(new float[0,1,15,3.14]);
Viewpoint32.position = new SFVec3f(new float[0,1.5,-20]);
browser.currentScene.children[18] = Viewpoint32;

let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.DEF = "Scene_TopView";
Viewpoint33.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint33.description = "Scene_Top View";
Viewpoint33.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint33.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[19] = Viewpoint33;

let Group34 = browser.currentScene.createNode("Group");
Group34.DEF = "OldMan_Humanoid";
let HAnimHumanoid35 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid35.name = "Walk";
HAnimHumanoid35.DEF = "OldMan";
HAnimHumanoid35.loa = 3;
HAnimHumanoid35.version = "2.0";
let MetadataSet36 = browser.currentScene.createNode("MetadataSet");
MetadataSet36.name = "warnings";
MetadataSet36.reference = "HAnim";
let MetadataString37 = browser.currentScene.createNode("MetadataString");
MetadataString37.name = "SymmetricalLeftRight";
MetadataString37.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString37.value = new MFString(new java.lang.String["ignore"]);
MetadataSet36.value = new MFNode();

MetadataSet36.value[0] = MetadataString37;

HAnimHumanoid35.metadata = new SFNode();

HAnimHumanoid35.metadata[0] = MetadataSet36;

let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.DEF = "OldMan_humanoid_root";
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
//TODO center='x 0.9155 z'
let HAnimSegment39 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment39.name = "sacrum";
HAnimSegment39.DEF = "OldMan_sacrum";
let HAnimSite40 = browser.currentScene.createNode("HAnimSite");
HAnimSite40.name = "RootBack_view";
HAnimSite40.DEF = "OldMan_RootBack_view";
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "hanimcordsys";
Transform41.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.DEF = "ViewBodyRootAxes";
Viewpoint42.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform41.children = new MFNode();

Transform41.children[0] = Viewpoint42;

let Shape43 = browser.currentScene.createNode("Shape");
Shape43.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet44 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet44.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet44.colorPerVertex = False;
IndexedLineSet44.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate45 = browser.currentScene.createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet44.coord = Coordinate45;

let Color46 = browser.currentScene.createNode("Color");
Color46.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet44.color = Color46;

Shape43.geometry = IndexedLineSet44;

Transform41.child[1] = Shape43;

let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "OldMan_Shape";
let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.DEF = "OldMan_skin_Appearance";
let Material49 = browser.currentScene.createNode("Material");
Material49.DEF = "OldMan_skin_Material";
Material49.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material49.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance48.material = Material49;

let ImageTexture50 = browser.currentScene.createNode("ImageTexture");
ImageTexture50.DEF = "OldManSkinImageTexture";
ImageTexture50.url = new MFString(new java.lang.String["OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]);
Appearance48.texture = ImageTexture50;

let TextureTransform51 = browser.currentScene.createNode("TextureTransform");
TextureTransform51.DEF = "KickTextureTransform";
Appearance48.textureTransform = TextureTransform51;

Shape47.appearance = Appearance48;

let IndexedFaceSet52 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet52.DEF = "OldMan_skin_IndexedFaceSet";
Shape47.geometry = IndexedFaceSet52;

Transform41.child[2] = Shape47;

HAnimSite40.children = new MFNode();

HAnimSite40.children[0] = Transform41;

HAnimSegment39.children = new MFNode();

HAnimSegment39.children[0] = HAnimSite40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimSegment39;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "sacroiliac";
HAnimJoint53.DEF = "OldMan_sacroiliac";
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
//TODO center='x 0.952 z'
//High hip
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_hip";
HAnimJoint54.DEF = "OldMan_l_hip";
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
//TODO center='x 0.879 z' Low hip
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_knee";
HAnimJoint55.DEF = "OldMan_l_knee";
HAnimJoint55.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint55.llimit = new MFFloat(new float[0,0,0]);
//center='x 0.461 z'
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "l_talocrural";
HAnimJoint56.DEF = "OldMan_l_talocrural";
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
//Ankle
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_tarsometatarsal_2";
HAnimJoint57.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_metatarsophalangeal_2";
HAnimJoint58.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint59.DEF = "Joe_l_tarsal_distal_interphalangeal_2";
HAnimJoint59.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimJoint58;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "l_hip";
HAnimJoint60.DEF = "OldMan_r_hip";
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
//Low hip
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "l_knee";
HAnimJoint61.DEF = "OldMan_r_knee";
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_talocrural";
HAnimJoint62.DEF = "OldMan_r_talocrural";
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
//Ankle
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "r_tarsometatarsal_2";
HAnimJoint63.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint63.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "r_metatarsophalangeal_2";
HAnimJoint64.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint64.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint65.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint65.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint60.children[1] = HAnimJoint62;

HAnimJoint54.children[1] = HAnimJoint60;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "vl5";
HAnimJoint66.DEF = "OldMan_vl5";
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
//Abdomen
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "vl4";
HAnimJoint67.DEF = "MeshName_vl4";
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "vl3";
HAnimJoint68.DEF = "OldMan_vl3";
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
//center='x 1.098 z'
//Low=' ist='
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "vl2";
HAnimJoint69.DEF = "MeshName_vl2";
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "vl1";
HAnimJoint70.DEF = "OldMan_vl1";
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
//center='x 1.171 z'
//High waist
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "vt12";
HAnimJoint71.DEF = "MeshName_vt12";
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "vt11";
HAnimJoint72.DEF = "OldMan_vt11";
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
//Ribcage='
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "vt10";
HAnimJoint73.DEF = "MeshName_vt10";
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "vt9";
HAnimJoint74.DEF = "MeshName_vt9";
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "vt8";
HAnimJoint75.DEF = "MeshName_vt8";
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "vt7";
HAnimJoint76.DEF = "OldMan_vt7";
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
//Sternum='
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "vt6";
HAnimJoint77.DEF = "MeshName_vt6";
HAnimJoint77.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint77.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "vt5";
HAnimJoint78.DEF = "MeshName_vt5";
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "vt4";
HAnimJoint79.DEF = "OldMan_vt4";
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
//Chest
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "vt3";
HAnimJoint80.DEF = "MeshName_vt3";
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "vt2";
HAnimJoint81.DEF = "OldMan_vt2";
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
//High Chest
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "vt1";
HAnimJoint82.DEF = "MeshName_vt1";
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "vc7";
HAnimJoint83.DEF = "OldMan_vc7";
HAnimJoint83.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.llimit = new MFFloat(new float[0,0,0]);
//Low neck
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "vc6";
HAnimJoint84.DEF = "MeshName_vc6";
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "vc5";
HAnimJoint85.DEF = "MeshName_vc5";
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "vc4";
HAnimJoint86.DEF = "OldMan_vc4";
HAnimJoint86.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint86.llimit = new MFFloat(new float[0,0,0]);
//Mid=' ck='
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "vc3";
HAnimJoint87.DEF = "MeshName_vc3";
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "vc2";
HAnimJoint88.DEF = "MeshName_vc2";
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "vc1";
HAnimJoint89.DEF = "OldMan_vc1";
HAnimJoint89.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.llimit = new MFFloat(new float[0,0,0]);
//High=' ck='
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "skullbase";
HAnimJoint90.DEF = "OldMan_skullbase";
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
let HAnimDisplacer91 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer91.name = "skull_tip_raiser_action";
HAnimDisplacer91.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer91.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer91.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint90.displacers = new MFNode();

HAnimJoint90.displacers[0] = HAnimDisplacer91;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_eyelid_joint";
HAnimJoint92.DEF = "OldMan_l_eyelid_joint";
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[1] = HAnimJoint92;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "l_eyeball_joint";
HAnimJoint93.DEF = "OldMan_l_eyeball_joint";
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[2] = HAnimJoint93;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "l_eyebrow_joint";
HAnimJoint94.DEF = "OldMan_l_eyebrow_joint";
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[3] = HAnimJoint94;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_eyelid_joint";
HAnimJoint95.DEF = "OldMan_r_eyelid_joint";
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[4] = HAnimJoint95;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "r_eyeball_joint";
HAnimJoint96.DEF = "OldMan_r_eyeball_joint";
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[5] = HAnimJoint96;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_eyebrow_joint";
HAnimJoint97.DEF = "OldMan_r_eyebrow_joint";
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[6] = HAnimJoint97;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "temporomandibular";
HAnimJoint98.DEF = "OldMan_temporomandibular";
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.children[7] = HAnimJoint98;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.DEF = "OldMan_l_acromioclavicular";
HAnimJoint99.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "l_acromioclavicular";
HAnimJoint100.DEF = "OldMan_l_sternoclavicular";
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "l_shoulder";
HAnimJoint101.DEF = "OldMan_l_shoulder";
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "l_elbow";
HAnimJoint102.DEF = "OldMan_l_elbow";
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "l_radiocarpal";
HAnimJoint103.DEF = "OldMan_l_radiocarpal";
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "l_carpometacarpal_1";
HAnimJoint104.DEF = "OldMan_l_carpometacarpal_1";
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "l_metacarpophalangeal_1";
HAnimJoint105.DEF = "OldMan_l_metacarpophalangeal_1";
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "l_carpal_interphalangeal_1";
HAnimJoint106.DEF = "OldMan_l_carpal_interphalangeal_1";
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "l_carpometacarpal_2";
HAnimJoint107.DEF = "OldMan_l_carpometacarpal_2";
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "l_metacarpophalangeal_2";
HAnimJoint108.DEF = "OldMan_l_metacarpophalangeal_2";
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint109.DEF = "OldMan_l_carpal_proximal_interphalangeal_2";
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint110.DEF = "OldMan_l_carpal_distal_interphalangeal_2";
HAnimJoint110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint110.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "l_carpometacarpal_3";
HAnimJoint111.DEF = "OldMan_l_carpometacarpal_3";
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "l_metacarpophalangeal_3";
HAnimJoint112.DEF = "OldMan_l_metacarpophalangeal_3";
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint113.DEF = "OldMan_l_carpal_proximal_interphalangeal_3";
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint114.DEF = "OldMan_l_carpal_distal_interphalangeal_3";
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "l_carpometacarpal_4";
HAnimJoint115.DEF = "OldMan_l_carpometacarpal_4";
HAnimJoint115.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint115.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "l_metacarpophalangeal_4";
HAnimJoint116.DEF = "OldMan_l_metacarpophalangeal_4";
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint117.DEF = "OldMan_l_carpal_proximal_interphalangeal_4";
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint118.DEF = "OldMan_l_carpal_distal_interphalangeal_4";
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimJoint118;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "l_carpometacarpal_5";
HAnimJoint119.DEF = "OldMan_l_carpometacarpal_5";
HAnimJoint119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint119.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "l_metacarpophalangeal_5";
HAnimJoint120.DEF = "OldMan_l_metacarpophalangeal_5";
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint121.DEF = "OldMan_l_carpal_proximal_interphalangeal_5";
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint122.DEF = "OldMan_l_carpal_distal_interphalangeal_5";
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimJoint122;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimJoint121;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint115.children[1] = HAnimJoint119;

HAnimJoint111.children[1] = HAnimJoint115;

HAnimJoint107.children[1] = HAnimJoint111;

HAnimJoint104.children[1] = HAnimJoint107;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "r_sternoclavicular";
HAnimJoint123.DEF = "OldMan_r_sternoclavicular";
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "r_acromioclavicular";
HAnimJoint124.DEF = "OldMan_r_acromioclavicular";
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "r_shoulder";
HAnimJoint125.DEF = "OldMan_r_shoulder";
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "r_elbow";
HAnimJoint126.DEF = "OldMan_r_elbow";
HAnimJoint126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint126.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "r_radiocarpal";
HAnimJoint127.DEF = "OldMan_r_radiocarpal";
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.name = "r_carpometacarpal_1";
HAnimJoint128.DEF = "OldMan_r_carpometacarpal_1";
HAnimJoint128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint128.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "r_metacarpophalangeal_1";
HAnimJoint129.DEF = "OldMan_r_metacarpophalangeal_1";
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "r_carpal_interphalangeal_1";
HAnimJoint130.DEF = "OldMan_r_carpal_interphalangeal_1";
HAnimJoint130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint130.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimJoint130;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimJoint129;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "r_carpometacarpal_2";
HAnimJoint131.DEF = "OldMan_r_carpometacarpal_2";
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "r_metacarpophalangeal_2";
HAnimJoint132.DEF = "OldMan_r_metacarpophalangeal_2";
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint133.DEF = "OldMan_r_carpal_proximal_interphalangeal_2";
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint134.DEF = "OldMan_r_carpal_distal_interphalangeal_2";
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimJoint134;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimJoint133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "r_carpometacarpal_3";
HAnimJoint135.DEF = "OldMan_r_carpometacarpal_3";
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "r_metacarpophalangeal_3";
HAnimJoint136.DEF = "OldMan_r_metacarpophalangeal_3";
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint137.DEF = "OldMan_r_carpal_proximal_interphalangeal_3";
HAnimJoint137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint137.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint138.DEF = "OldMan_r_carpal_distal_interphalangeal_3";
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimJoint138;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimJoint137;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimJoint136;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "r_carpometacarpal_4";
HAnimJoint139.DEF = "OldMan_r_carpometacarpal_4";
HAnimJoint139.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "r_metacarpophalangeal_4";
HAnimJoint140.DEF = "OldMan_r_metacarpophalangeal_4";
HAnimJoint140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint140.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint141.DEF = "OldMan_r_carpal_proximal_interphalangeal_4";
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint142.DEF = "OldMan_r_carpal_distal_interphalangeal_4";
HAnimJoint142.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint142.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimJoint142;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimJoint141;

HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimJoint140;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "r_carpometacarpal_5";
HAnimJoint143.DEF = "OldMan_r_carpometacarpal_5";
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "r_metacarpophalangeal_5";
HAnimJoint144.DEF = "OldMan_r_metacarpophalangeal_5";
HAnimJoint144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint145.DEF = "OldMan_r_carpal_proximal_interphalangeal_5";
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint146.DEF = "OldMan_r_carpal_distal_interphalangeal_5";
HAnimJoint146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint146.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimJoint146;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimJoint145;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimJoint144;

HAnimJoint139.children[1] = HAnimJoint143;

HAnimJoint135.children[1] = HAnimJoint139;

HAnimJoint131.children[1] = HAnimJoint135;

HAnimJoint128.children[1] = HAnimJoint131;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimJoint125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint103.children[1] = HAnimJoint123;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint82.children[1] = HAnimJoint99;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimJoint75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimJoint70;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint53.children[1] = HAnimJoint66;

HAnimJoint38.children[1] = HAnimJoint53;

HAnimHumanoid35.joints[1] = HAnimJoint38;

Group34.children = new MFNode();

Group34.children[0] = HAnimHumanoid35;

browser.currentScene.children[20] = Group34;

