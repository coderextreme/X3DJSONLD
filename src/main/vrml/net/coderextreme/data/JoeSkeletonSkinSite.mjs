const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 2));
scene.addMetaData("title", "JoeSkeletonSkinSite.x3d");
scene.addMetaData("description", "Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.");
scene.addMetaData("creator", "Joe D. Williams");
scene.addMetaData("translator", "Michalis Kamburelis");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("translator", "Joe D. Williams");
scene.addMetaData("created", "9 January 2004");
scene.addMetaData("translated", "4 December 2022");
scene.addMetaData("modified", "16 March 2026");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png");
scene.addMetaData("drawing", "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_Octaga.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_vivaty.png");
scene.addMetaData("generator", "tovrmlx3d, https://castle-engine.io/convert.php");
scene.addMetaData("reference", "https://castle-engine.io/view3dscene.php#section_converting");
scene.addMetaData("translator", "Michalis Kamburelis");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("translator", "Joe D. Williams");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d");
scene.addMetaData("license", "../license.html");
scene.addMetaData("generator", "X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html");
await browser .loadComponents (scene);
let WorldInfo33 = browser.currentScene.createNode("WorldInfo");
WorldInfo33.info = new X3D.MFString([new X3D.SFString("By Joe for Joe"), new X3D.SFString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")]);
WorldInfo33.title = "JoeSkeletonSkinSite.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo33;

let NavigationInfo34 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo34.DEF = "HeadlightOnRevealsSkinTextureAndColors";
browser.currentScene.children[1] = NavigationInfo34;

let Background35 = browser.currentScene.createNode("Background");
Background35.groundAngle = new X3D.MFFloat([1.57]);
Background35.groundColor = new X3D.MFColor([0,0.1,0,0,0.1,0]);
Background35.skyColor = new X3D.MFColor([0,0,0.1]);
browser.currentScene.children[2] = Background35;

//Authoring hint: these axes are aligned within local coordinate system
let Group36 = browser.currentScene.createNode("Group");
Group36.DEF = "ViewpointGroup";
let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Front Up View";
Viewpoint37.orientation = new X3D.SFRotation([-1,-1,0,0.55]);
Viewpoint37.position = new X3D.SFVec3f([-1,2,2.5]);
Group36YYY.children = new X3D.MFNode();

Group36ZZZ.children[0] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "From Left View";
Viewpoint38.orientation = new X3D.SFRotation([0.3,1,0,-1.57]);
Viewpoint38.position = new X3D.SFVec3f([-2.5,1.5,0]);
Group36ZZZ.children[1] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Front Mid View";
Viewpoint39.position = new X3D.SFVec3f([0,0.5,1.25]);
Group36ZZZ.children[2] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Front Feet View";
Viewpoint40.position = new X3D.SFVec3f([0,0,0.75]);
Group36ZZZ.children[3] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "From Right View";
Viewpoint41.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint41.position = new X3D.SFVec3f([1,1,0]);
Group36ZZZ.children[4] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new X3D.SFVec3f([0,1.65,0]);
Viewpoint42.description = "Front Head View";
Viewpoint42.position = new X3D.SFVec3f([0,1.65,0.75]);
Group36ZZZ.children[5] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.description = "Front Mid View";
Viewpoint43.position = new X3D.SFVec3f([0,1,1.75]);
Group36ZZZ.children[6] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.description = "Rear View";
Viewpoint44.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint44.position = new X3D.SFVec3f([0,1.5,-4]);
Group36ZZZ.children[7] = Viewpoint44;

let Viewpoint45 = browser.currentScene.createNode("Viewpoint");
Viewpoint45.description = "Top View";
Viewpoint45.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Viewpoint45.position = new X3D.SFVec3f([0,4,0]);
Group36ZZZ.children[8] = Viewpoint45;

let Viewpoint46 = browser.currentScene.createNode("Viewpoint");
Viewpoint46.description = "Bottom View";
Viewpoint46.orientation = new X3D.SFRotation([1,0,0,1.57]);
Viewpoint46.position = new X3D.SFVec3f([0,-4,0]);
Group36ZZZ.children[9] = Viewpoint46;

let Viewpoint47 = browser.currentScene.createNode("Viewpoint");
Viewpoint47.description = "Right View";
Viewpoint47.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint47.position = new X3D.SFVec3f([4,1.5,0]);
Group36ZZZ.children[10] = Viewpoint47;

browser.currentScene.children[3] = Group36;

let Group48 = browser.currentScene.createNode("Group");
Group48.DEF = "VisualizationShapes";
Group48.visible = False;
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.scale = new X3D.SFVec3f([5,5,5]);
Transform49.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.DEF = "jointbox";
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.ambientIntensity = 0.5;
Material52.diffuseColor = new X3D.SFColor([0,0,0]);
Material52.shininess = 1;
material = Material52;

appearance = Appearance51;

let IndexedFaceSet53 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet53.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet53.creaseAngle = 0.1;
let Color54 = browser.currentScene.createNode("Color");
Color54.color = new X3D.MFColor([1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
color = Color54;

let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.DEF = "boxCoords";
Coordinate55.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate55;

geometry = IndexedFaceSet53;

Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

Group48YYY.children = new X3D.MFNode();

Group48ZZZ.children[0] = Transform49;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
Transform56.translation = new X3D.SFVec3f([-0.2,0.773,-0.016]);
let Shape57 = browser.currentScene.createNode("Shape");
Shape57.DEF = "sitebox";
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.ambientIntensity = 1;
Material59.diffuseColor = new X3D.SFColor([1,0,0]);
Material59.emissiveColor = new X3D.SFColor([1,0,0]);
Material59.shininess = 0.7;
Material59.specularColor = new X3D.SFColor([1,0,0]);
material = Material59;

appearance = Appearance58;

let IndexedFaceSet60 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet60.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet60.creaseAngle = 0.1;
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.USE = "boxCoords";
coord = Coordinate61;

geometry = IndexedFaceSet60;

Transform56YYY.child = new X3D.undefined();

Transform56ZZZ.child[0] = Shape57;

Group48ZZZ.children[1] = Transform56;

let Transform62 = browser.currentScene.createNode("Transform");
Transform62.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
Transform62.translation = new X3D.SFVec3f([0,0.2,0]);
let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
Appearance64.DEF = "SegmentLine";
let Material65 = browser.currentScene.createNode("Material");
Material65.diffuseColor = new X3D.SFColor([0,1,0]);
Material65.emissiveColor = new X3D.SFColor([0,1,0]);
Material65.specularColor = new X3D.SFColor([0,1,0]);
material = Material65;

appearance = Appearance64;

let IndexedLineSet66 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet66.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new X3D.MFVec3f([0,0,0,0,0.0001,0]);
coord = Coordinate67;

geometry = IndexedLineSet66;

Transform62YYY.child = new X3D.undefined();

Transform62ZZZ.child[0] = Shape63;

Group48ZZZ.children[2] = Transform62;

let Transform68 = browser.currentScene.createNode("Transform");
Transform68.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
Transform68.translation = new X3D.SFVec3f([-0.2,0.773,-0.016]);
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.DEF = "skinsphere";
let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.ambientIntensity = 0.5;
Material71.diffuseColor = new X3D.SFColor([0,1,0]);
Material71.emissiveColor = new X3D.SFColor([0,1,0]);
Material71.shininess = 1;
Material71.specularColor = new X3D.SFColor([0,1,0]);
material = Material71;

appearance = Appearance70;

let Sphere72 = browser.currentScene.createNode("Sphere");
Sphere72.radius = 0.005;
geometry = Sphere72;

Transform68YYY.child = new X3D.undefined();

Transform68ZZZ.child[0] = Shape69;

Group48ZZZ.children[3] = Transform68;

browser.currentScene.children[4] = Group48;

let Group73 = browser.currentScene.createNode("Group");
Group73.DEF = "SpecHumanoid";
let Group74 = browser.currentScene.createNode("Group");
Group74.DEF = "JoeISOHumanoid";
let HAnimHumanoid75 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid75.name = "Human";
HAnimHumanoid75.DEF = "Joe_Human";
HAnimHumanoid75.loa = 4;
HAnimHumanoid75.version = "2.0";
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
let MetadataSet76 = browser.currentScene.createNode("MetadataSet");
MetadataSet76.name = "HAnimHumanoid.info";
MetadataSet76.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString77 = browser.currentScene.createNode("MetadataString");
MetadataString77.name = "humanoidVersion";
MetadataString77.value = new X3D.MFString([new X3D.SFString("2.0")]);
MetadataSet76.value = new X3D.MFNode();

MetadataSet76XXX.value[0] = MetadataString77;

HAnimHumanoid75.metadata = new X3D.SFNode();

HAnimHumanoid75XXX.metadata[0] = MetadataSet76;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "humanoid_root";
HAnimJoint78.DEF = "Joe_humanoid_root";
HAnimJoint78.center = new X3D.SFVec3f([0,0.875,0]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.name = "sacrum";
HAnimSegment79.DEF = "Joe_sacrum";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new X3D.SFVec3f([0,0.875,0]);
let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "jointbox";
Transform80YYY.child = new X3D.undefined();

Transform80ZZZ.child[0] = Shape81;

HAnimSegment79YYY.children = new X3D.MFNode();

HAnimSegment79ZZZ.children[0] = Transform80;

let Shape82 = browser.currentScene.createNode("Shape");
let Appearance83 = browser.currentScene.createNode("Appearance");
Appearance83.USE = "SegmentLine";
appearance = Appearance83;

let IndexedLineSet84 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet84.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new X3D.MFVec3f([0,0.875,0,0,0.92,0]);
coord = Coordinate85;

geometry = IndexedLineSet84;

HAnimSegment79ZZZ.children[1] = Shape82;

let Transform86 = browser.currentScene.createNode("Transform");
Transform86.translation = new X3D.SFVec3f([0,0.92,0.08]);
let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "skinsphere";
Transform86YYY.child = new X3D.undefined();

Transform86ZZZ.child[0] = Shape87;

HAnimSegment79ZZZ.children[2] = Transform86;

let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new X3D.SFVec3f([0,0.87,-0.022]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "skinsphere";
Transform88YYY.child = new X3D.undefined();

Transform88ZZZ.child[0] = Shape89;

HAnimSegment79ZZZ.children[3] = Transform88;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimSegment79;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "sacroiliac";
HAnimJoint90.DEF = "Joe_sacroiliac";
HAnimJoint90.center = new X3D.SFVec3f([0,0.92,0]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
let HAnimSegment91 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment91.name = "pelvis";
HAnimSegment91.DEF = "Joe_pelvis";
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Transform93 = browser.currentScene.createNode("Transform");
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "jointbox";
Transform93YYY.child = new X3D.undefined();

Transform93ZZZ.child[0] = Shape94;

Transform92YYY.children = new X3D.MFNode();

Transform92ZZZ.children[0] = Transform93;

HAnimSegment91YYY.children = new X3D.MFNode();

HAnimSegment91ZZZ.children[0] = Transform92;

let Shape95 = browser.currentScene.createNode("Shape");
let Appearance96 = browser.currentScene.createNode("Appearance");
Appearance96.USE = "SegmentLine";
appearance = Appearance96;

let IndexedLineSet97 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet97.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new X3D.MFVec3f([0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
coord = Coordinate98;

geometry = IndexedLineSet97;

HAnimSegment91ZZZ.children[1] = Shape95;

let HAnimSite99 = browser.currentScene.createNode("HAnimSite");
HAnimSite99.name = "l_iliocristale_pt";
HAnimSite99.DEF = "Joe_l_iliocristale_pt";
HAnimSite99.translation = new X3D.SFVec3f([0.1425,1.065,0.0033]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "sitebox";
HAnimSite99YYY.children = new X3D.MFNode();

HAnimSite99ZZZ.children[0] = Shape100;

HAnimSegment91ZZZ.children[2] = HAnimSite99;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "l_trochanterion_pt";
HAnimSite101.DEF = "Joe_l_trochanterion_pt";
HAnimSite101.translation = new X3D.SFVec3f([0.15,0.9,-0.01]);
let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "sitebox";
HAnimSite101YYY.children = new X3D.MFNode();

HAnimSite101ZZZ.children[0] = Shape102;

HAnimSegment91ZZZ.children[3] = HAnimSite101;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "r_iliocristale_pt";
HAnimSite103.DEF = "Joe_r_iliocristale_pt";
HAnimSite103.translation = new X3D.SFVec3f([-0.1425,1.065,0.0033]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "sitebox";
HAnimSite103YYY.children = new X3D.MFNode();

HAnimSite103ZZZ.children[0] = Shape104;

HAnimSegment91ZZZ.children[4] = HAnimSite103;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.name = "r_trochanterion_pt";
HAnimSite105.DEF = "Joe_r_trochanterion_pt";
HAnimSite105.translation = new X3D.SFVec3f([-0.15,0.9,-0.01]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "sitebox";
HAnimSite105YYY.children = new X3D.MFNode();

HAnimSite105ZZZ.children[0] = Shape106;

HAnimSegment91ZZZ.children[5] = HAnimSite105;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.name = "l_asis_pt";
HAnimSite107.DEF = "Joe_l_asis_pt";
HAnimSite107.translation = new X3D.SFVec3f([0.0935,1.03,0.075]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "sitebox";
HAnimSite107YYY.children = new X3D.MFNode();

HAnimSite107ZZZ.children[0] = Shape108;

HAnimSegment91ZZZ.children[6] = HAnimSite107;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.name = "r_asis_pt";
HAnimSite109.DEF = "Joe_r_asis_pt";
HAnimSite109.translation = new X3D.SFVec3f([-0.0935,1.03,0.075]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "sitebox";
HAnimSite109YYY.children = new X3D.MFNode();

HAnimSite109ZZZ.children[0] = Shape110;

HAnimSegment91ZZZ.children[7] = HAnimSite109;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "l_psis_pt";
HAnimSite111.DEF = "Joe_l_psis_pt";
HAnimSite111.translation = new X3D.SFVec3f([0.0773,1.019,-0.12]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "sitebox";
HAnimSite111YYY.children = new X3D.MFNode();

HAnimSite111ZZZ.children[0] = Shape112;

HAnimSegment91ZZZ.children[8] = HAnimSite111;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.name = "r_psis_pt";
HAnimSite113.DEF = "Joe_r_psis_pt";
HAnimSite113.translation = new X3D.SFVec3f([-0.0773,1.019,-0.12]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "sitebox";
HAnimSite113YYY.children = new X3D.MFNode();

HAnimSite113ZZZ.children[0] = Shape114;

HAnimSegment91ZZZ.children[9] = HAnimSite113;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "floormarker_pt";
HAnimSite115.DEF = "Joe_floormarker_pt";
let Transform116 = browser.currentScene.createNode("Transform");
Transform116.scale = new X3D.SFVec3f([3,3,3]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "sitebox";
Transform116YYY.child = new X3D.undefined();

Transform116ZZZ.child[0] = Shape117;

HAnimSite115YYY.children = new X3D.MFNode();

HAnimSite115ZZZ.children[0] = Transform116;

HAnimSegment91ZZZ.children[10] = HAnimSite115;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "crotch_pt";
HAnimSite118.DEF = "Joe_crotch_pt";
HAnimSite118.translation = new X3D.SFVec3f([0,0.87,-0.022]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "sitebox";
HAnimSite118YYY.children = new X3D.MFNode();

HAnimSite118ZZZ.children[0] = Shape119;

HAnimSegment91ZZZ.children[11] = HAnimSite118;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimSegment91;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "l_hip";
HAnimJoint120.DEF = "Joe_l_hip";
HAnimJoint120.center = new X3D.SFVec3f([0.1,0.92,0]);
HAnimJoint120.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint120.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimSegment121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment121.name = "l_thigh";
HAnimSegment121.DEF = "Joe_l_thigh";
let Transform122 = browser.currentScene.createNode("Transform");
Transform122.translation = new X3D.SFVec3f([0.1,0.92,0]);
let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "jointbox";
Transform122YYY.child = new X3D.undefined();

Transform122ZZZ.child[0] = Shape123;

HAnimSegment121YYY.children = new X3D.MFNode();

HAnimSegment121ZZZ.children[0] = Transform122;

let Shape124 = browser.currentScene.createNode("Shape");
let Appearance125 = browser.currentScene.createNode("Appearance");
Appearance125.USE = "SegmentLine";
appearance = Appearance125;

let IndexedLineSet126 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet126.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate127 = browser.currentScene.createNode("Coordinate");
Coordinate127.point = new X3D.MFVec3f([0.1,0.92,0,0.115,0.466,0]);
coord = Coordinate127;

geometry = IndexedLineSet126;

HAnimSegment121ZZZ.children[1] = Shape124;

let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new X3D.SFVec3f([0.1,0.9,0.0775]);
let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "skinsphere";
Transform128YYY.child = new X3D.undefined();

Transform128ZZZ.child[0] = Shape129;

HAnimSegment121ZZZ.children[2] = Transform128;

let Transform130 = browser.currentScene.createNode("Transform");
Transform130.translation = new X3D.SFVec3f([0.079,0.92,-0.14]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "skinsphere";
Transform130YYY.child = new X3D.undefined();

Transform130ZZZ.child[0] = Shape131;

HAnimSegment121ZZZ.children[3] = Transform130;

let Transform132 = browser.currentScene.createNode("Transform");
Transform132.translation = new X3D.SFVec3f([0.171,0.65,0]);
let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "skinsphere";
Transform132YYY.child = new X3D.undefined();

Transform132ZZZ.child[0] = Shape133;

HAnimSegment121ZZZ.children[4] = Transform132;

let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new X3D.SFVec3f([0.02,0.65,0]);
let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "skinsphere";
Transform134YYY.child = new X3D.undefined();

Transform134ZZZ.child[0] = Shape135;

HAnimSegment121ZZZ.children[5] = Transform134;

let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new X3D.SFVec3f([0.1,0.65,-0.08]);
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "skinsphere";
Transform136YYY.child = new X3D.undefined();

Transform136ZZZ.child[0] = Shape137;

HAnimSegment121ZZZ.children[6] = Transform136;

let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new X3D.SFVec3f([0.1,0.65,0.07]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "skinsphere";
Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape139;

HAnimSegment121ZZZ.children[7] = Transform138;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.name = "l_knee_crease_pt";
HAnimSite140.DEF = "Joe_l_knee_crease_pt";
HAnimSite140.translation = new X3D.SFVec3f([0.115,0.466,-0.055]);
let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "sitebox";
HAnimSite140YYY.children = new X3D.MFNode();

HAnimSite140ZZZ.children[0] = Shape141;

HAnimSegment121ZZZ.children[8] = HAnimSite140;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite142.DEF = "Joe_l_femoral_lateral_epicondyle_pt";
HAnimSite142.translation = new X3D.SFVec3f([0.17,0.466,0]);
let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "sitebox";
HAnimSite142YYY.children = new X3D.MFNode();

HAnimSite142ZZZ.children[0] = Shape143;

HAnimSegment121ZZZ.children[9] = HAnimSite142;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.name = "l_femoral_medial_epicondyle_pt";
HAnimSite144.DEF = "Joe_l_femoral_medial_epicondyle_pt";
HAnimSite144.translation = new X3D.SFVec3f([0.05,0.466,0]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "sitebox";
HAnimSite144YYY.children = new X3D.MFNode();

HAnimSite144ZZZ.children[0] = Shape145;

HAnimSegment121ZZZ.children[10] = HAnimSite144;

HAnimJoint120YYY.children = new X3D.MFNode();

HAnimJoint120ZZZ.children[0] = HAnimSegment121;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "l_knee";
HAnimJoint146.DEF = "Joe_l_knee";
HAnimJoint146.center = new X3D.SFVec3f([0.115,0.466,0]);
HAnimJoint146.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint146.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.name = "l_calf";
HAnimSegment147.DEF = "Joe_l_calf";
let Transform148 = browser.currentScene.createNode("Transform");
Transform148.translation = new X3D.SFVec3f([0.115,0.466,0]);
let Shape149 = browser.currentScene.createNode("Shape");
Shape149.USE = "jointbox";
Transform148YYY.child = new X3D.undefined();

Transform148ZZZ.child[0] = Shape149;

HAnimSegment147YYY.children = new X3D.MFNode();

HAnimSegment147ZZZ.children[0] = Transform148;

let Shape150 = browser.currentScene.createNode("Shape");
let Appearance151 = browser.currentScene.createNode("Appearance");
Appearance151.USE = "SegmentLine";
appearance = Appearance151;

let IndexedLineSet152 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet152.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new X3D.MFVec3f([0.115,0.466,0,0.1,0.069,0]);
coord = Coordinate153;

geometry = IndexedLineSet152;

HAnimSegment147ZZZ.children[1] = Shape150;

let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new X3D.SFVec3f([0.115,0.466,0.06]);
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "skinsphere";
Transform154YYY.child = new X3D.undefined();

Transform154ZZZ.child[0] = Shape155;

HAnimSegment147ZZZ.children[2] = Transform154;

let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new X3D.SFVec3f([0.115,0.466,-0.055]);
let Shape157 = browser.currentScene.createNode("Shape");
Shape157.USE = "skinsphere";
Transform156YYY.child = new X3D.undefined();

Transform156ZZZ.child[0] = Shape157;

HAnimSegment147ZZZ.children[3] = Transform156;

let Transform158 = browser.currentScene.createNode("Transform");
Transform158.translation = new X3D.SFVec3f([0.17,0.466,0]);
let Shape159 = browser.currentScene.createNode("Shape");
Shape159.USE = "skinsphere";
Transform158YYY.child = new X3D.undefined();

Transform158ZZZ.child[0] = Shape159;

HAnimSegment147ZZZ.children[4] = Transform158;

let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new X3D.SFVec3f([0.05,0.466,0]);
let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "skinsphere";
Transform160YYY.child = new X3D.undefined();

Transform160ZZZ.child[0] = Shape161;

HAnimSegment147ZZZ.children[5] = Transform160;

let Transform162 = browser.currentScene.createNode("Transform");
Transform162.translation = new X3D.SFVec3f([0.17,0.3,0]);
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "skinsphere";
Transform162YYY.child = new X3D.undefined();

Transform162ZZZ.child[0] = Shape163;

HAnimSegment147ZZZ.children[6] = Transform162;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.translation = new X3D.SFVec3f([0.06,0.3,0]);
let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "skinsphere";
Transform164YYY.child = new X3D.undefined();

Transform164ZZZ.child[0] = Shape165;

HAnimSegment147ZZZ.children[7] = Transform164;

let Transform166 = browser.currentScene.createNode("Transform");
Transform166.translation = new X3D.SFVec3f([0.1,0.3,-0.05]);
let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "skinsphere";
Transform166YYY.child = new X3D.undefined();

Transform166ZZZ.child[0] = Shape167;

HAnimSegment147ZZZ.children[8] = Transform166;

let Transform168 = browser.currentScene.createNode("Transform");
Transform168.translation = new X3D.SFVec3f([0.1,0.3,0.05]);
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "skinsphere";
Transform168YYY.child = new X3D.undefined();

Transform168ZZZ.child[0] = Shape169;

HAnimSegment147ZZZ.children[9] = Transform168;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "l_lateral_malleolus_pt";
HAnimSite170.DEF = "Joe_l_lateral_malleolus_pt";
HAnimSite170.translation = new X3D.SFVec3f([0.15,0.07,0]);
let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "sitebox";
HAnimSite170YYY.children = new X3D.MFNode();

HAnimSite170ZZZ.children[0] = Shape171;

HAnimSegment147ZZZ.children[10] = HAnimSite170;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.name = "l_medial_malleolus_pt";
HAnimSite172.DEF = "Joe_l_medial_malleolus_pt";
HAnimSite172.translation = new X3D.SFVec3f([0.085,0.086,0.0125]);
let Shape173 = browser.currentScene.createNode("Shape");
Shape173.USE = "sitebox";
HAnimSite172YYY.children = new X3D.MFNode();

HAnimSite172ZZZ.children[0] = Shape173;

HAnimSegment147ZZZ.children[11] = HAnimSite172;

HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimSegment147;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "l_talocrural";
HAnimJoint174.DEF = "Joe_l_talocrural";
HAnimJoint174.center = new X3D.SFVec3f([0.115,0.069,0]);
HAnimJoint174.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint174.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.name = "l_talus";
HAnimSegment175.DEF = "Joe_l_talus";
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.translation = new X3D.SFVec3f([0.115,0.069,0]);
let Shape177 = browser.currentScene.createNode("Shape");
Shape177.USE = "jointbox";
Transform176YYY.child = new X3D.undefined();

Transform176ZZZ.child[0] = Shape177;

HAnimSegment175YYY.children = new X3D.MFNode();

HAnimSegment175ZZZ.children[0] = Transform176;

let Shape178 = browser.currentScene.createNode("Shape");
let Appearance179 = browser.currentScene.createNode("Appearance");
Appearance179.USE = "SegmentLine";
appearance = Appearance179;

let IndexedLineSet180 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet180.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate181 = browser.currentScene.createNode("Coordinate");
Coordinate181.point = new X3D.MFVec3f([0.1,0.069,0,0.115,0.031,0.03]);
coord = Coordinate181;

geometry = IndexedLineSet180;

HAnimSegment175ZZZ.children[1] = Shape178;

let Transform182 = browser.currentScene.createNode("Transform");
Transform182.translation = new X3D.SFVec3f([0.15,0.07,0]);
let Shape183 = browser.currentScene.createNode("Shape");
Shape183.USE = "skinsphere";
Transform182YYY.child = new X3D.undefined();

Transform182ZZZ.child[0] = Shape183;

HAnimSegment175ZZZ.children[2] = Transform182;

let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new X3D.SFVec3f([0.085,0.086,0.0125]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "skinsphere";
Transform184YYY.child = new X3D.undefined();

Transform184ZZZ.child[0] = Shape185;

HAnimSegment175ZZZ.children[3] = Transform184;

let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new X3D.SFVec3f([0.115,0.069,-0.045]);
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "skinsphere";
Transform186YYY.child = new X3D.undefined();

Transform186ZZZ.child[0] = Shape187;

HAnimSegment175ZZZ.children[4] = Transform186;

let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new X3D.SFVec3f([0.117,0.0975,0.0615]);
let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "skinsphere";
Transform188YYY.child = new X3D.undefined();

Transform188ZZZ.child[0] = Shape189;

HAnimSegment175ZZZ.children[5] = Transform188;

let HAnimSite190 = browser.currentScene.createNode("HAnimSite");
HAnimSite190.name = "l_sphyrion_pt";
HAnimSite190.DEF = "Joe_l_sphyrion_pt";
HAnimSite190.translation = new X3D.SFVec3f([0.09,0.056,0.0125]);
let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "sitebox";
HAnimSite190YYY.children = new X3D.MFNode();

HAnimSite190ZZZ.children[0] = Shape191;

HAnimSegment175ZZZ.children[6] = HAnimSite190;

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.name = "l_calcaneus_posterior_pt";
HAnimSite192.DEF = "Joe_l_calcaneus_posterior_pt";
HAnimSite192.translation = new X3D.SFVec3f([0.115,0.04,-0.055]);
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "sitebox";
HAnimSite192YYY.children = new X3D.MFNode();

HAnimSite192ZZZ.children[0] = Shape193;

HAnimSegment175ZZZ.children[7] = HAnimSite192;

HAnimJoint174YYY.children = new X3D.MFNode();

HAnimJoint174ZZZ.children[0] = HAnimSegment175;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.name = "l_tarsometatarsal_2";
HAnimJoint194.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint194.center = new X3D.SFVec3f([0.115,0.031,0.03]);
HAnimJoint194.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint194.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment195.name = "l_metatarsal_2";
HAnimSegment195.DEF = "Joe_l_metatarsal_2";
let Transform196 = browser.currentScene.createNode("Transform");
Transform196.translation = new X3D.SFVec3f([0.115,0.031,0.03]);
let Shape197 = browser.currentScene.createNode("Shape");
Shape197.USE = "jointbox";
Transform196YYY.child = new X3D.undefined();

Transform196ZZZ.child[0] = Shape197;

HAnimSegment195YYY.children = new X3D.MFNode();

HAnimSegment195ZZZ.children[0] = Transform196;

let Shape198 = browser.currentScene.createNode("Shape");
let Appearance199 = browser.currentScene.createNode("Appearance");
Appearance199.USE = "SegmentLine";
appearance = Appearance199;

let IndexedLineSet200 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet200.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new X3D.MFVec3f([0.115,0.031,0.03,0.115,0.037,0.09]);
coord = Coordinate201;

geometry = IndexedLineSet200;

HAnimSegment195ZZZ.children[1] = Shape198;

let Transform202 = browser.currentScene.createNode("Transform");
Transform202.translation = new X3D.SFVec3f([0.1375,0.006,-0.03]);
let Shape203 = browser.currentScene.createNode("Shape");
Shape203.USE = "skinsphere";
Transform202YYY.child = new X3D.undefined();

Transform202ZZZ.child[0] = Shape203;

HAnimSegment195ZZZ.children[2] = Transform202;

let Transform204 = browser.currentScene.createNode("Transform");
Transform204.translation = new X3D.SFVec3f([0.095,0.006,-0.03]);
let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "skinsphere";
Transform204YYY.child = new X3D.undefined();

Transform204ZZZ.child[0] = Shape205;

HAnimSegment195ZZZ.children[3] = Transform204;

let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new X3D.SFVec3f([0.115,0.015,-0.045]);
let Shape207 = browser.currentScene.createNode("Shape");
Shape207.USE = "skinsphere";
Transform206YYY.child = new X3D.undefined();

Transform206ZZZ.child[0] = Shape207;

HAnimSegment195ZZZ.children[4] = Transform206;

HAnimJoint194YYY.children = new X3D.MFNode();

HAnimJoint194ZZZ.children[0] = HAnimSegment195;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.name = "l_metatarsophalangeal_2";
HAnimJoint208.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint208.center = new X3D.SFVec3f([0.115,0.037,0.09]);
HAnimJoint208.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint208.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment209.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment209.DEF = "Joe_l_tarsal_proximal_phalanx_2";
let Transform210 = browser.currentScene.createNode("Transform");
Transform210.translation = new X3D.SFVec3f([0.115,0.037,0.09]);
let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "jointbox";
Transform210YYY.child = new X3D.undefined();

Transform210ZZZ.child[0] = Shape211;

HAnimSegment209YYY.children = new X3D.MFNode();

HAnimSegment209ZZZ.children[0] = Transform210;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
Appearance213.USE = "SegmentLine";
appearance = Appearance213;

let IndexedLineSet214 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet214.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate215 = browser.currentScene.createNode("Coordinate");
Coordinate215.point = new X3D.MFVec3f([0.115,0.037,0.09,0.115,0.02,0.122]);
coord = Coordinate215;

geometry = IndexedLineSet214;

HAnimSegment209ZZZ.children[1] = Shape212;

let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new X3D.SFVec3f([0.115,0.06,0.1]);
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "skinsphere";
Transform216YYY.child = new X3D.undefined();

Transform216ZZZ.child[0] = Shape217;

HAnimSegment209ZZZ.children[2] = Transform216;

let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new X3D.SFVec3f([0.115,0,0.07]);
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "skinsphere";
Transform218YYY.child = new X3D.undefined();

Transform218ZZZ.child[0] = Shape219;

HAnimSegment209ZZZ.children[3] = Transform218;

let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new X3D.SFVec3f([0.165,0,0.07]);
let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "skinsphere";
Transform220YYY.child = new X3D.undefined();

Transform220ZZZ.child[0] = Shape221;

HAnimSegment209ZZZ.children[4] = Transform220;

let Transform222 = browser.currentScene.createNode("Transform");
Transform222.translation = new X3D.SFVec3f([0.095,0,0.07]);
let Shape223 = browser.currentScene.createNode("Shape");
Shape223.USE = "skinsphere";
Transform222YYY.child = new X3D.undefined();

Transform222ZZZ.child[0] = Shape223;

HAnimSegment209ZZZ.children[5] = Transform222;

let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.name = "l_metatarsal_phalanx_1_pt";
HAnimSite224.DEF = "Joe_l_metatarsal_phalanx_1_pt";
HAnimSite224.translation = new X3D.SFVec3f([0.087,0.01,0.122]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "sitebox";
HAnimSite224YYY.children = new X3D.MFNode();

HAnimSite224ZZZ.children[0] = Shape225;

HAnimSegment209ZZZ.children[6] = HAnimSite224;

HAnimJoint208YYY.children = new X3D.MFNode();

HAnimJoint208ZZZ.children[0] = HAnimSegment209;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "l_metatarsal";
HAnimJoint226.DEF = "Joe_l_metatarsal";
HAnimJoint226.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint226.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint226.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "l_tarsal_distal_phalanx_2";
HAnimSegment227.DEF = "Joe_l_tarsal_distal_phalanx_2";
let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new X3D.SFVec3f([0.115,0.02,0.13]);
let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "jointbox";
Transform228YYY.child = new X3D.undefined();

Transform228ZZZ.child[0] = Shape229;

HAnimSegment227YYY.children = new X3D.MFNode();

HAnimSegment227ZZZ.children[0] = Transform228;

let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
Appearance231.USE = "SegmentLine";
appearance = Appearance231;

let IndexedLineSet232 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet232.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new X3D.MFVec3f([0.115,0.02,0.122,0.132,0.013,0.19]);
coord = Coordinate233;

geometry = IndexedLineSet232;

HAnimSegment227ZZZ.children[1] = Shape230;

let Transform234 = browser.currentScene.createNode("Transform");
Transform234.translation = new X3D.SFVec3f([0.115,0.04,0.13]);
let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "skinsphere";
Transform234YYY.child = new X3D.undefined();

Transform234ZZZ.child[0] = Shape235;

HAnimSegment227ZZZ.children[2] = Transform234;

let Transform236 = browser.currentScene.createNode("Transform");
Transform236.translation = new X3D.SFVec3f([0.125,0,0.12]);
let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "skinsphere";
Transform236YYY.child = new X3D.undefined();

Transform236ZZZ.child[0] = Shape237;

HAnimSegment227ZZZ.children[3] = Transform236;

let Transform238 = browser.currentScene.createNode("Transform");
Transform238.translation = new X3D.SFVec3f([0.165,0,0.12]);
let Shape239 = browser.currentScene.createNode("Shape");
Shape239.USE = "skinsphere";
Transform238YYY.child = new X3D.undefined();

Transform238ZZZ.child[0] = Shape239;

HAnimSegment227ZZZ.children[4] = Transform238;

let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new X3D.SFVec3f([0.087,0,0.122]);
let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "skinsphere";
Transform240YYY.child = new X3D.undefined();

Transform240ZZZ.child[0] = Shape241;

HAnimSegment227ZZZ.children[5] = Transform240;

let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new X3D.SFVec3f([0.09,0.012,0.188]);
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "skinsphere";
Transform242YYY.child = new X3D.undefined();

Transform242ZZZ.child[0] = Shape243;

HAnimSegment227ZZZ.children[6] = Transform242;

let Transform244 = browser.currentScene.createNode("Transform");
Transform244.translation = new X3D.SFVec3f([0.11,0.011,0.19]);
let Shape245 = browser.currentScene.createNode("Shape");
Shape245.USE = "skinsphere";
Transform244YYY.child = new X3D.undefined();

Transform244ZZZ.child[0] = Shape245;

HAnimSegment227ZZZ.children[7] = Transform244;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new X3D.SFVec3f([0.128,0.011,0.185]);
let Shape247 = browser.currentScene.createNode("Shape");
Shape247.USE = "skinsphere";
Transform246YYY.child = new X3D.undefined();

Transform246ZZZ.child[0] = Shape247;

HAnimSegment227ZZZ.children[8] = Transform246;

let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new X3D.SFVec3f([0.142,0.011,0.178]);
let Shape249 = browser.currentScene.createNode("Shape");
Shape249.USE = "skinsphere";
Transform248YYY.child = new X3D.undefined();

Transform248ZZZ.child[0] = Shape249;

HAnimSegment227ZZZ.children[9] = Transform248;

let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new X3D.SFVec3f([0.154,0.01,0.168]);
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "skinsphere";
Transform250YYY.child = new X3D.undefined();

Transform250ZZZ.child[0] = Shape251;

HAnimSegment227ZZZ.children[10] = Transform250;

let HAnimSite252 = browser.currentScene.createNode("HAnimSite");
HAnimSite252.name = "l_metatarsal_phalanx_5_pt";
HAnimSite252.DEF = "Joe_l_metatarsal_phalanx_5_pt";
HAnimSite252.translation = new X3D.SFVec3f([0.165,0.01,0.12]);
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "sitebox";
HAnimSite252YYY.children = new X3D.MFNode();

HAnimSite252ZZZ.children[0] = Shape253;

HAnimSegment227ZZZ.children[11] = HAnimSite252;

let HAnimSite254 = browser.currentScene.createNode("HAnimSite");
HAnimSite254.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite254.DEF = "Joe_l_tarsal_distal_phalanx_2_pt";
HAnimSite254.translation = new X3D.SFVec3f([0.11,0.011,0.19]);
let Shape255 = browser.currentScene.createNode("Shape");
Shape255.USE = "sitebox";
HAnimSite254YYY.children = new X3D.MFNode();

HAnimSite254ZZZ.children[0] = Shape255;

HAnimSegment227ZZZ.children[12] = HAnimSite254;

HAnimJoint226YYY.children = new X3D.MFNode();

HAnimJoint226ZZZ.children[0] = HAnimSegment227;

HAnimJoint208ZZZ.children[1] = HAnimJoint226;

HAnimJoint194ZZZ.children[1] = HAnimJoint208;

HAnimJoint174ZZZ.children[1] = HAnimJoint194;

HAnimJoint146ZZZ.children[1] = HAnimJoint174;

HAnimJoint120ZZZ.children[1] = HAnimJoint146;

HAnimJoint90ZZZ.children[1] = HAnimJoint120;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.name = "r_hip";
HAnimJoint256.DEF = "Joe_r_hip";
HAnimJoint256.center = new X3D.SFVec3f([-0.1,0.92,0]);
HAnimJoint256.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101]);
HAnimJoint256.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.name = "r_thigh";
HAnimSegment257.DEF = "Joe_r_thigh";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new X3D.SFVec3f([-0.1,0.92,0]);
let Shape259 = browser.currentScene.createNode("Shape");
Shape259.USE = "jointbox";
Transform258YYY.child = new X3D.undefined();

Transform258ZZZ.child[0] = Shape259;

HAnimSegment257YYY.children = new X3D.MFNode();

HAnimSegment257ZZZ.children[0] = Transform258;

let Shape260 = browser.currentScene.createNode("Shape");
let Appearance261 = browser.currentScene.createNode("Appearance");
Appearance261.USE = "SegmentLine";
appearance = Appearance261;

let IndexedLineSet262 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet262.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate263 = browser.currentScene.createNode("Coordinate");
Coordinate263.point = new X3D.MFVec3f([-0.1,0.92,0,-0.1,0.4913,0]);
coord = Coordinate263;

geometry = IndexedLineSet262;

HAnimSegment257ZZZ.children[1] = Shape260;

let Transform264 = browser.currentScene.createNode("Transform");
Transform264.translation = new X3D.SFVec3f([-0.079,0.92,-0.14]);
let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "skinsphere";
Transform264YYY.child = new X3D.undefined();

Transform264ZZZ.child[0] = Shape265;

HAnimSegment257ZZZ.children[2] = Transform264;

let Transform266 = browser.currentScene.createNode("Transform");
Transform266.translation = new X3D.SFVec3f([-0.1,0.9,0.075]);
let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "skinsphere";
Transform266YYY.child = new X3D.undefined();

Transform266ZZZ.child[0] = Shape267;

HAnimSegment257ZZZ.children[3] = Transform266;

let Transform268 = browser.currentScene.createNode("Transform");
Transform268.translation = new X3D.SFVec3f([-0.171,0.65,0]);
let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "skinsphere";
Transform268YYY.child = new X3D.undefined();

Transform268ZZZ.child[0] = Shape269;

HAnimSegment257ZZZ.children[4] = Transform268;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new X3D.SFVec3f([-0.02,0.65,0]);
let Shape271 = browser.currentScene.createNode("Shape");
Shape271.USE = "skinsphere";
Transform270YYY.child = new X3D.undefined();

Transform270ZZZ.child[0] = Shape271;

HAnimSegment257ZZZ.children[5] = Transform270;

let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new X3D.SFVec3f([-0.1,0.65,-0.08]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "skinsphere";
Transform272YYY.child = new X3D.undefined();

Transform272ZZZ.child[0] = Shape273;

HAnimSegment257ZZZ.children[6] = Transform272;

let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new X3D.SFVec3f([-0.1,0.65,0.07]);
let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "skinsphere";
Transform274YYY.child = new X3D.undefined();

Transform274ZZZ.child[0] = Shape275;

HAnimSegment257ZZZ.children[7] = Transform274;

let HAnimSite276 = browser.currentScene.createNode("HAnimSite");
HAnimSite276.name = "r_knee_crease_pt";
HAnimSite276.DEF = "Joe_r_knee_crease_pt";
HAnimSite276.translation = new X3D.SFVec3f([-0.115,0.466,-0.055]);
let Shape277 = browser.currentScene.createNode("Shape");
Shape277.USE = "sitebox";
HAnimSite276YYY.children = new X3D.MFNode();

HAnimSite276ZZZ.children[0] = Shape277;

HAnimSegment257ZZZ.children[8] = HAnimSite276;

let HAnimSite278 = browser.currentScene.createNode("HAnimSite");
HAnimSite278.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite278.DEF = "Joe_r_femoral_lateral_epicondyle_pt";
HAnimSite278.translation = new X3D.SFVec3f([-0.17,0.466,0]);
let Shape279 = browser.currentScene.createNode("Shape");
Shape279.USE = "sitebox";
HAnimSite278YYY.children = new X3D.MFNode();

HAnimSite278ZZZ.children[0] = Shape279;

HAnimSegment257ZZZ.children[9] = HAnimSite278;

let HAnimSite280 = browser.currentScene.createNode("HAnimSite");
HAnimSite280.name = "r_femoral_medial_epicondyle_pt";
HAnimSite280.DEF = "Joe_r_femoral_medial_epicondyle_pt";
HAnimSite280.translation = new X3D.SFVec3f([-0.05,0.466,0]);
let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "sitebox";
HAnimSite280YYY.children = new X3D.MFNode();

HAnimSite280ZZZ.children[0] = Shape281;

HAnimSegment257ZZZ.children[10] = HAnimSite280;

HAnimJoint256YYY.children = new X3D.MFNode();

HAnimJoint256ZZZ.children[0] = HAnimSegment257;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.name = "r_knee";
HAnimJoint282.DEF = "Joe_r_knee";
HAnimJoint282.center = new X3D.SFVec3f([-0.05,0.466,0]);
HAnimJoint282.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369]);
HAnimJoint282.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.name = "r_calf";
HAnimSegment283.DEF = "Joe_r_calf";
let Transform284 = browser.currentScene.createNode("Transform");
Transform284.translation = new X3D.SFVec3f([-0.1,0.4913,0]);
let Shape285 = browser.currentScene.createNode("Shape");
Shape285.USE = "jointbox";
Transform284YYY.child = new X3D.undefined();

Transform284ZZZ.child[0] = Shape285;

HAnimSegment283YYY.children = new X3D.MFNode();

HAnimSegment283ZZZ.children[0] = Transform284;

let Shape286 = browser.currentScene.createNode("Shape");
let Appearance287 = browser.currentScene.createNode("Appearance");
Appearance287.USE = "SegmentLine";
appearance = Appearance287;

let IndexedLineSet288 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet288.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new X3D.MFVec3f([-0.1,0.4913,0,-0.1,0.0712,0]);
coord = Coordinate289;

geometry = IndexedLineSet288;

HAnimSegment283ZZZ.children[1] = Shape286;

let Transform290 = browser.currentScene.createNode("Transform");
Transform290.translation = new X3D.SFVec3f([-0.115,0.466,0.06]);
let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "skinsphere";
Transform290YYY.child = new X3D.undefined();

Transform290ZZZ.child[0] = Shape291;

HAnimSegment283ZZZ.children[2] = Transform290;

let Transform292 = browser.currentScene.createNode("Transform");
Transform292.translation = new X3D.SFVec3f([-0.115,0.466,-0.055]);
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "skinsphere";
Transform292YYY.child = new X3D.undefined();

Transform292ZZZ.child[0] = Shape293;

HAnimSegment283ZZZ.children[3] = Transform292;

let Transform294 = browser.currentScene.createNode("Transform");
Transform294.translation = new X3D.SFVec3f([-0.17,0.466,0]);
let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "skinsphere";
Transform294YYY.child = new X3D.undefined();

Transform294ZZZ.child[0] = Shape295;

HAnimSegment283ZZZ.children[4] = Transform294;

let Transform296 = browser.currentScene.createNode("Transform");
Transform296.translation = new X3D.SFVec3f([-0.05,0.466,0]);
let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "skinsphere";
Transform296YYY.child = new X3D.undefined();

Transform296ZZZ.child[0] = Shape297;

HAnimSegment283ZZZ.children[5] = Transform296;

let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new X3D.SFVec3f([-0.17,0.3,0]);
let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "skinsphere";
Transform298YYY.child = new X3D.undefined();

Transform298ZZZ.child[0] = Shape299;

HAnimSegment283ZZZ.children[6] = Transform298;

let Transform300 = browser.currentScene.createNode("Transform");
Transform300.translation = new X3D.SFVec3f([-0.06,0.3,0]);
let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "skinsphere";
Transform300YYY.child = new X3D.undefined();

Transform300ZZZ.child[0] = Shape301;

HAnimSegment283ZZZ.children[7] = Transform300;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new X3D.SFVec3f([-0.1,0.3,-0.05]);
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.USE = "skinsphere";
Transform302YYY.child = new X3D.undefined();

Transform302ZZZ.child[0] = Shape303;

HAnimSegment283ZZZ.children[8] = Transform302;

let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new X3D.SFVec3f([-0.1,0.3,0.05]);
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "skinsphere";
Transform304YYY.child = new X3D.undefined();

Transform304ZZZ.child[0] = Shape305;

HAnimSegment283ZZZ.children[9] = Transform304;

let HAnimSite306 = browser.currentScene.createNode("HAnimSite");
HAnimSite306.name = "r_lateral_malleolus_pt";
HAnimSite306.DEF = "Joe_r_lateral_malleolus_pt";
HAnimSite306.translation = new X3D.SFVec3f([-0.15,0.07,0]);
let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "sitebox";
HAnimSite306YYY.children = new X3D.MFNode();

HAnimSite306ZZZ.children[0] = Shape307;

HAnimSegment283ZZZ.children[10] = HAnimSite306;

let HAnimSite308 = browser.currentScene.createNode("HAnimSite");
HAnimSite308.name = "r_medial_malleolus_pt";
HAnimSite308.DEF = "Joe_r_medial_malleolus_pt";
HAnimSite308.translation = new X3D.SFVec3f([-0.085,0.086,0.0125]);
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "sitebox";
HAnimSite308YYY.children = new X3D.MFNode();

HAnimSite308ZZZ.children[0] = Shape309;

HAnimSegment283ZZZ.children[11] = HAnimSite308;

HAnimJoint282YYY.children = new X3D.MFNode();

HAnimJoint282ZZZ.children[0] = HAnimSegment283;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.name = "r_talocrural";
HAnimJoint310.DEF = "Joe_r_talocrural";
HAnimJoint310.center = new X3D.SFVec3f([-0.115,0.069,0]);
HAnimJoint310.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint310.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.name = "r_talus";
HAnimSegment311.DEF = "Joe_r_talus";
let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new X3D.SFVec3f([-0.1,0.0712,0]);
let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "jointbox";
Transform312YYY.child = new X3D.undefined();

Transform312ZZZ.child[0] = Shape313;

HAnimSegment311YYY.children = new X3D.MFNode();

HAnimSegment311ZZZ.children[0] = Transform312;

let Shape314 = browser.currentScene.createNode("Shape");
let Appearance315 = browser.currentScene.createNode("Appearance");
Appearance315.USE = "SegmentLine";
appearance = Appearance315;

let IndexedLineSet316 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet316.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate317 = browser.currentScene.createNode("Coordinate");
Coordinate317.point = new X3D.MFVec3f([-0.1,0.0712,0,-0.1,0.015,-0.01]);
coord = Coordinate317;

geometry = IndexedLineSet316;

HAnimSegment311ZZZ.children[1] = Shape314;

let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new X3D.SFVec3f([-0.15,0.07,0]);
let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "skinsphere";
Transform318YYY.child = new X3D.undefined();

Transform318ZZZ.child[0] = Shape319;

HAnimSegment311ZZZ.children[2] = Transform318;

let Transform320 = browser.currentScene.createNode("Transform");
Transform320.translation = new X3D.SFVec3f([-0.085,0.086,0.0125]);
let Shape321 = browser.currentScene.createNode("Shape");
Shape321.USE = "skinsphere";
Transform320YYY.child = new X3D.undefined();

Transform320ZZZ.child[0] = Shape321;

HAnimSegment311ZZZ.children[3] = Transform320;

let Transform322 = browser.currentScene.createNode("Transform");
Transform322.translation = new X3D.SFVec3f([-0.115,0.069,-0.045]);
let Shape323 = browser.currentScene.createNode("Shape");
Shape323.USE = "skinsphere";
Transform322YYY.child = new X3D.undefined();

Transform322ZZZ.child[0] = Shape323;

HAnimSegment311ZZZ.children[4] = Transform322;

let Transform324 = browser.currentScene.createNode("Transform");
Transform324.translation = new X3D.SFVec3f([-0.117,0.0975,0.0615]);
let Shape325 = browser.currentScene.createNode("Shape");
Shape325.USE = "skinsphere";
Transform324YYY.child = new X3D.undefined();

Transform324ZZZ.child[0] = Shape325;

HAnimSegment311ZZZ.children[5] = Transform324;

let HAnimSite326 = browser.currentScene.createNode("HAnimSite");
HAnimSite326.name = "r_sphyrion_pt";
HAnimSite326.DEF = "Joe_r_sphyrion_pt";
HAnimSite326.translation = new X3D.SFVec3f([-0.09,0.056,0.0125]);
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "sitebox";
HAnimSite326YYY.children = new X3D.MFNode();

HAnimSite326ZZZ.children[0] = Shape327;

HAnimSegment311ZZZ.children[6] = HAnimSite326;

let HAnimSite328 = browser.currentScene.createNode("HAnimSite");
HAnimSite328.name = "r_calcaneus_posterior_pt";
HAnimSite328.DEF = "Joe_r_calcaneus_posterior_pt";
HAnimSite328.translation = new X3D.SFVec3f([-0.115,0.04,-0.055]);
let Shape329 = browser.currentScene.createNode("Shape");
Shape329.USE = "sitebox";
HAnimSite328YYY.children = new X3D.MFNode();

HAnimSite328ZZZ.children[0] = Shape329;

HAnimSegment311ZZZ.children[7] = HAnimSite328;

HAnimJoint310YYY.children = new X3D.MFNode();

HAnimJoint310ZZZ.children[0] = HAnimSegment311;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.name = "r_tarsometatarsal_2";
HAnimJoint330.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint330.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint330.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint330.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment331.name = "r_metatarsal_2";
HAnimSegment331.DEF = "Joe_r_metatarsal_2";
let Transform332 = browser.currentScene.createNode("Transform");
Transform332.translation = new X3D.SFVec3f([-0.1,0.015,-0.01]);
let Shape333 = browser.currentScene.createNode("Shape");
Shape333.USE = "jointbox";
Transform332YYY.child = new X3D.undefined();

Transform332ZZZ.child[0] = Shape333;

HAnimSegment331YYY.children = new X3D.MFNode();

HAnimSegment331ZZZ.children[0] = Transform332;

let Shape334 = browser.currentScene.createNode("Shape");
let Appearance335 = browser.currentScene.createNode("Appearance");
Appearance335.USE = "SegmentLine";
appearance = Appearance335;

let IndexedLineSet336 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet336.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate337 = browser.currentScene.createNode("Coordinate");
Coordinate337.point = new X3D.MFVec3f([-0.1,0.015,-0.01,-0.1,0.02,0.07]);
coord = Coordinate337;

geometry = IndexedLineSet336;

HAnimSegment331ZZZ.children[1] = Shape334;

let Transform338 = browser.currentScene.createNode("Transform");
Transform338.translation = new X3D.SFVec3f([-0.1375,0.006,-0.03]);
let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "skinsphere";
Transform338YYY.child = new X3D.undefined();

Transform338ZZZ.child[0] = Shape339;

HAnimSegment331ZZZ.children[2] = Transform338;

let Transform340 = browser.currentScene.createNode("Transform");
Transform340.translation = new X3D.SFVec3f([-0.095,0.006,-0.03]);
let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "skinsphere";
Transform340YYY.child = new X3D.undefined();

Transform340ZZZ.child[0] = Shape341;

HAnimSegment331ZZZ.children[3] = Transform340;

let Transform342 = browser.currentScene.createNode("Transform");
Transform342.translation = new X3D.SFVec3f([-0.095,0.006,-0.03]);
let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "skinsphere";
Transform342YYY.child = new X3D.undefined();

Transform342ZZZ.child[0] = Shape343;

HAnimSegment331ZZZ.children[4] = Transform342;

HAnimJoint330YYY.children = new X3D.MFNode();

HAnimJoint330ZZZ.children[0] = HAnimSegment331;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.name = "r_metatarsophalangeal_2";
HAnimJoint344.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint344.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint344.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint344.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment345.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment345.DEF = "Joe_r_tarsal_proximal_phalanx_2";
let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new X3D.SFVec3f([-0.1,0.02,0.07]);
let Shape347 = browser.currentScene.createNode("Shape");
Shape347.USE = "jointbox";
Transform346YYY.child = new X3D.undefined();

Transform346ZZZ.child[0] = Shape347;

HAnimSegment345YYY.children = new X3D.MFNode();

HAnimSegment345ZZZ.children[0] = Transform346;

let Shape348 = browser.currentScene.createNode("Shape");
let Appearance349 = browser.currentScene.createNode("Appearance");
Appearance349.USE = "SegmentLine";
appearance = Appearance349;

let IndexedLineSet350 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet350.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new X3D.MFVec3f([-0.1,0.02,0.07,-0.1,0.01,0.14]);
coord = Coordinate351;

geometry = IndexedLineSet350;

HAnimSegment345ZZZ.children[1] = Shape348;

let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new X3D.SFVec3f([-0.115,0.06,0.1]);
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "skinsphere";
Transform352YYY.child = new X3D.undefined();

Transform352ZZZ.child[0] = Shape353;

HAnimSegment345ZZZ.children[2] = Transform352;

let Transform354 = browser.currentScene.createNode("Transform");
Transform354.translation = new X3D.SFVec3f([-0.115,0,0.07]);
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "skinsphere";
Transform354YYY.child = new X3D.undefined();

Transform354ZZZ.child[0] = Shape355;

HAnimSegment345ZZZ.children[3] = Transform354;

let Transform356 = browser.currentScene.createNode("Transform");
Transform356.translation = new X3D.SFVec3f([-0.165,0,0.07]);
let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "skinsphere";
Transform356YYY.child = new X3D.undefined();

Transform356ZZZ.child[0] = Shape357;

HAnimSegment345ZZZ.children[4] = Transform356;

let Transform358 = browser.currentScene.createNode("Transform");
Transform358.translation = new X3D.SFVec3f([-0.165,0,0.07]);
let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "skinsphere";
Transform358YYY.child = new X3D.undefined();

Transform358ZZZ.child[0] = Shape359;

HAnimSegment345ZZZ.children[5] = Transform358;

let HAnimSite360 = browser.currentScene.createNode("HAnimSite");
HAnimSite360.name = "r_metatarsal_phalanx_1_pt";
HAnimSite360.DEF = "Joe_r_metatarsal_phalanx_1_pt";
HAnimSite360.translation = new X3D.SFVec3f([-0.115,0.02,0.122]);
let Shape361 = browser.currentScene.createNode("Shape");
Shape361.USE = "sitebox";
HAnimSite360YYY.children = new X3D.MFNode();

HAnimSite360ZZZ.children[0] = Shape361;

HAnimSegment345ZZZ.children[6] = HAnimSite360;

HAnimJoint344YYY.children = new X3D.MFNode();

HAnimJoint344ZZZ.children[0] = HAnimSegment345;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint362.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint362.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint362.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint362.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment363.name = "r_tarsal_distal_phalanx_2";
HAnimSegment363.DEF = "Joe_r_tarsal_distal_phalanx_2";
let Transform364 = browser.currentScene.createNode("Transform");
Transform364.translation = new X3D.SFVec3f([-0.1086,0.01,0.14]);
let Shape365 = browser.currentScene.createNode("Shape");
Shape365.USE = "jointbox";
Transform364YYY.child = new X3D.undefined();

Transform364ZZZ.child[0] = Shape365;

HAnimSegment363YYY.children = new X3D.MFNode();

HAnimSegment363ZZZ.children[0] = Transform364;

let Shape366 = browser.currentScene.createNode("Shape");
let Appearance367 = browser.currentScene.createNode("Appearance");
Appearance367.USE = "SegmentLine";
appearance = Appearance367;

let IndexedLineSet368 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet368.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate369 = browser.currentScene.createNode("Coordinate");
Coordinate369.point = new X3D.MFVec3f([-0.1,0.01,0.14,-0.1043,0.0016,0.2]);
coord = Coordinate369;

geometry = IndexedLineSet368;

HAnimSegment363ZZZ.children[1] = Shape366;

let Transform370 = browser.currentScene.createNode("Transform");
Transform370.translation = new X3D.SFVec3f([-0.115,0.04,0.13]);
let Shape371 = browser.currentScene.createNode("Shape");
Shape371.USE = "skinsphere";
Transform370YYY.child = new X3D.undefined();

Transform370ZZZ.child[0] = Shape371;

HAnimSegment363ZZZ.children[2] = Transform370;

let Transform372 = browser.currentScene.createNode("Transform");
Transform372.translation = new X3D.SFVec3f([-0.125,0,0.12]);
let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "skinsphere";
Transform372YYY.child = new X3D.undefined();

Transform372ZZZ.child[0] = Shape373;

HAnimSegment363ZZZ.children[3] = Transform372;

let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new X3D.SFVec3f([-0.165,0,0.12]);
let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "skinsphere";
Transform374YYY.child = new X3D.undefined();

Transform374ZZZ.child[0] = Shape375;

HAnimSegment363ZZZ.children[4] = Transform374;

let Transform376 = browser.currentScene.createNode("Transform");
Transform376.translation = new X3D.SFVec3f([-0.087,0,0.122]);
let Shape377 = browser.currentScene.createNode("Shape");
Shape377.USE = "skinsphere";
Transform376YYY.child = new X3D.undefined();

Transform376ZZZ.child[0] = Shape377;

HAnimSegment363ZZZ.children[5] = Transform376;

let Transform378 = browser.currentScene.createNode("Transform");
Transform378.translation = new X3D.SFVec3f([-0.09,0.012,0.188]);
let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "skinsphere";
Transform378YYY.child = new X3D.undefined();

Transform378ZZZ.child[0] = Shape379;

HAnimSegment363ZZZ.children[6] = Transform378;

let Transform380 = browser.currentScene.createNode("Transform");
Transform380.translation = new X3D.SFVec3f([-0.11,0.011,0.19]);
let Shape381 = browser.currentScene.createNode("Shape");
Shape381.USE = "skinsphere";
Transform380YYY.child = new X3D.undefined();

Transform380ZZZ.child[0] = Shape381;

HAnimSegment363ZZZ.children[7] = Transform380;

let Transform382 = browser.currentScene.createNode("Transform");
Transform382.translation = new X3D.SFVec3f([-0.128,0.011,0.185]);
let Shape383 = browser.currentScene.createNode("Shape");
Shape383.USE = "skinsphere";
Transform382YYY.child = new X3D.undefined();

Transform382ZZZ.child[0] = Shape383;

HAnimSegment363ZZZ.children[8] = Transform382;

let Transform384 = browser.currentScene.createNode("Transform");
Transform384.translation = new X3D.SFVec3f([-0.142,0.011,0.178]);
let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "skinsphere";
Transform384YYY.child = new X3D.undefined();

Transform384ZZZ.child[0] = Shape385;

HAnimSegment363ZZZ.children[9] = Transform384;

let Transform386 = browser.currentScene.createNode("Transform");
Transform386.translation = new X3D.SFVec3f([-0.154,0.01,0.168]);
let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "skinsphere";
Transform386YYY.child = new X3D.undefined();

Transform386ZZZ.child[0] = Shape387;

HAnimSegment363ZZZ.children[10] = Transform386;

let HAnimSite388 = browser.currentScene.createNode("HAnimSite");
HAnimSite388.name = "r_metatarsal_phalanx_5_pt";
HAnimSite388.DEF = "Joe_r_metatarsal_phalanx_5_pt";
HAnimSite388.translation = new X3D.SFVec3f([-0.165,0.01,0.12]);
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "sitebox";
HAnimSite388YYY.children = new X3D.MFNode();

HAnimSite388ZZZ.children[0] = Shape389;

HAnimSegment363ZZZ.children[11] = HAnimSite388;

let HAnimSite390 = browser.currentScene.createNode("HAnimSite");
HAnimSite390.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite390.DEF = "Joe_r_tarsal_distal_phalanx_2_pt";
HAnimSite390.translation = new X3D.SFVec3f([-0.11,0.011,0.19]);
let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "sitebox";
HAnimSite390YYY.children = new X3D.MFNode();

HAnimSite390ZZZ.children[0] = Shape391;

HAnimSegment363ZZZ.children[12] = HAnimSite390;

HAnimJoint362YYY.children = new X3D.MFNode();

HAnimJoint362ZZZ.children[0] = HAnimSegment363;

HAnimJoint344ZZZ.children[1] = HAnimJoint362;

HAnimJoint330ZZZ.children[1] = HAnimJoint344;

HAnimJoint310ZZZ.children[1] = HAnimJoint330;

HAnimJoint282ZZZ.children[1] = HAnimJoint310;

HAnimJoint256ZZZ.children[1] = HAnimJoint282;

HAnimJoint90ZZZ.children[2] = HAnimJoint256;

HAnimJoint78ZZZ.children[1] = HAnimJoint90;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.name = "vl5";
HAnimJoint392.DEF = "Joe_vl5";
HAnimJoint392.center = new X3D.SFVec3f([0,1.045,-0.095]);
HAnimJoint392.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint392.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment393.name = "toPelvis";
HAnimSegment393.DEF = "Joe_toPelvis";
let Shape394 = browser.currentScene.createNode("Shape");
let Appearance395 = browser.currentScene.createNode("Appearance");
Appearance395.USE = "SegmentLine";
appearance = Appearance395;

let IndexedLineSet396 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet396.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate397 = browser.currentScene.createNode("Coordinate");
Coordinate397.point = new X3D.MFVec3f([0,1.045,-0.095,0,0.9149,0.0016]);
coord = Coordinate397;

geometry = IndexedLineSet396;

HAnimSegment393YYY.children = new X3D.MFNode();

HAnimSegment393ZZZ.children[0] = Shape394;

HAnimJoint392YYY.children = new X3D.MFNode();

HAnimJoint392ZZZ.children[0] = HAnimSegment393;

let HAnimSegment398 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment398.name = "l5";
HAnimSegment398.DEF = "Joe_l5";
let Shape399 = browser.currentScene.createNode("Shape");
let Appearance400 = browser.currentScene.createNode("Appearance");
Appearance400.USE = "SegmentLine";
appearance = Appearance400;

let IndexedLineSet401 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet401.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate402 = browser.currentScene.createNode("Coordinate");
Coordinate402.point = new X3D.MFVec3f([0,1.045,-0.095,0,1.068,-0.085]);
coord = Coordinate402;

geometry = IndexedLineSet401;

HAnimSegment398YYY.children = new X3D.MFNode();

HAnimSegment398ZZZ.children[0] = Shape399;

let HAnimSite403 = browser.currentScene.createNode("HAnimSite");
HAnimSite403.name = "waist_preferred_posterior_pt";
HAnimSite403.DEF = "Joe_waist_preferred_posterior_pt";
HAnimSite403.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
let Shape404 = browser.currentScene.createNode("Shape");
Shape404.USE = "sitebox";
HAnimSite403YYY.children = new X3D.MFNode();

HAnimSite403ZZZ.children[0] = Shape404;

HAnimSegment398ZZZ.children[1] = HAnimSite403;

let HAnimSite405 = browser.currentScene.createNode("HAnimSite");
HAnimSite405.name = "navel_pt";
HAnimSite405.DEF = "Joe_navel_pt";
HAnimSite405.translation = new X3D.SFVec3f([0,1.0723,0.09]);
let Shape406 = browser.currentScene.createNode("Shape");
Shape406.USE = "sitebox";
HAnimSite405YYY.children = new X3D.MFNode();

HAnimSite405ZZZ.children[0] = Shape406;

HAnimSegment398ZZZ.children[2] = HAnimSite405;

HAnimJoint392ZZZ.children[1] = HAnimSegment398;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.name = "vl4";
HAnimJoint407.DEF = "Joe_vl4";
HAnimJoint407.center = new X3D.SFVec3f([0,1.068,-0.085]);
let HAnimSegment408 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment408.name = "l4";
HAnimSegment408.DEF = "Joe_l4";
let Shape409 = browser.currentScene.createNode("Shape");
let Appearance410 = browser.currentScene.createNode("Appearance");
Appearance410.USE = "SegmentLine";
appearance = Appearance410;

let IndexedLineSet411 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet411.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate412 = browser.currentScene.createNode("Coordinate");
Coordinate412.point = new X3D.MFVec3f([0,1.068,-0.085,0,1.092,-0.0725]);
coord = Coordinate412;

geometry = IndexedLineSet411;

HAnimSegment408YYY.children = new X3D.MFNode();

HAnimSegment408ZZZ.children[0] = Shape409;

let Transform413 = browser.currentScene.createNode("Transform");
Transform413.translation = new X3D.SFVec3f([0,1.068,-0.085]);
let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "jointbox";
Transform413YYY.child = new X3D.undefined();

Transform413ZZZ.child[0] = Shape414;

HAnimSegment408ZZZ.children[1] = Transform413;

HAnimJoint407YYY.children = new X3D.MFNode();

HAnimJoint407ZZZ.children[0] = HAnimSegment408;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.name = "vl3";
HAnimJoint415.DEF = "Joe_vl3";
HAnimJoint415.center = new X3D.SFVec3f([0,1.092,-0.0725]);
let HAnimSegment416 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment416.name = "l3";
HAnimSegment416.DEF = "Joe_l3";
let Shape417 = browser.currentScene.createNode("Shape");
let Appearance418 = browser.currentScene.createNode("Appearance");
Appearance418.USE = "SegmentLine";
appearance = Appearance418;

let IndexedLineSet419 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet419.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate420 = browser.currentScene.createNode("Coordinate");
Coordinate420.point = new X3D.MFVec3f([0,1.092,-0.0725,0,1.12,-0.065]);
coord = Coordinate420;

geometry = IndexedLineSet419;

HAnimSegment416YYY.children = new X3D.MFNode();

HAnimSegment416ZZZ.children[0] = Shape417;

let Transform421 = browser.currentScene.createNode("Transform");
Transform421.translation = new X3D.SFVec3f([0,1.092,-0.0725]);
let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "jointbox";
Transform421YYY.child = new X3D.undefined();

Transform421ZZZ.child[0] = Shape422;

HAnimSegment416ZZZ.children[1] = Transform421;

HAnimJoint415YYY.children = new X3D.MFNode();

HAnimJoint415ZZZ.children[0] = HAnimSegment416;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.name = "vl2";
HAnimJoint423.DEF = "Joe_vl2";
HAnimJoint423.center = new X3D.SFVec3f([0,1.12,-0.065]);
HAnimJoint423.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint423.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.7,1,0.8]);
let HAnimSegment424 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment424.name = "l2";
HAnimSegment424.DEF = "Joe_l2";
let Shape425 = browser.currentScene.createNode("Shape");
let Appearance426 = browser.currentScene.createNode("Appearance");
Appearance426.USE = "SegmentLine";
appearance = Appearance426;

let IndexedLineSet427 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet427.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate428 = browser.currentScene.createNode("Coordinate");
Coordinate428.point = new X3D.MFVec3f([0,1.12,-0.065,0,1.1459,-0.0625]);
coord = Coordinate428;

geometry = IndexedLineSet427;

HAnimSegment424YYY.children = new X3D.MFNode();

HAnimSegment424ZZZ.children[0] = Shape425;

let Transform429 = browser.currentScene.createNode("Transform");
Transform429.translation = new X3D.SFVec3f([0,1.12,-0.065]);
let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "jointbox";
Transform429YYY.child = new X3D.undefined();

Transform429ZZZ.child[0] = Shape430;

HAnimSegment424ZZZ.children[1] = Transform429;

let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new X3D.SFVec3f([-0.087,1.19,-0.09]);
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "skinsphere";
Transform431YYY.child = new X3D.undefined();

Transform431ZZZ.child[0] = Shape432;

HAnimSegment424ZZZ.children[2] = Transform431;

let Transform433 = browser.currentScene.createNode("Transform");
Transform433.translation = new X3D.SFVec3f([0.087,1.19,-0.09]);
let Shape434 = browser.currentScene.createNode("Shape");
Shape434.USE = "skinsphere";
Transform433YYY.child = new X3D.undefined();

Transform433ZZZ.child[0] = Shape434;

HAnimSegment424ZZZ.children[3] = Transform433;

let Transform435 = browser.currentScene.createNode("Transform");
Transform435.translation = new X3D.SFVec3f([0.172,1.32,-0.03]);
let Shape436 = browser.currentScene.createNode("Shape");
Shape436.USE = "skinsphere";
Transform435YYY.child = new X3D.undefined();

Transform435ZZZ.child[0] = Shape436;

HAnimSegment424ZZZ.children[4] = Transform435;

let Transform437 = browser.currentScene.createNode("Transform");
Transform437.translation = new X3D.SFVec3f([-0.172,1.32,-0.03]);
let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "skinsphere";
Transform437YYY.child = new X3D.undefined();

Transform437ZZZ.child[0] = Shape438;

HAnimSegment424ZZZ.children[5] = Transform437;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new X3D.SFVec3f([0.15,1.23,-0.015]);
let Shape440 = browser.currentScene.createNode("Shape");
Shape440.USE = "skinsphere";
Transform439YYY.child = new X3D.undefined();

Transform439ZZZ.child[0] = Shape440;

HAnimSegment424ZZZ.children[6] = Transform439;

let Transform441 = browser.currentScene.createNode("Transform");
Transform441.translation = new X3D.SFVec3f([-0.15,1.23,-0.015]);
let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "skinsphere";
Transform441YYY.child = new X3D.undefined();

Transform441ZZZ.child[0] = Shape442;

HAnimSegment424ZZZ.children[7] = Transform441;

let HAnimSite443 = browser.currentScene.createNode("HAnimSite");
HAnimSite443.name = "r_rib10_pt";
HAnimSite443.DEF = "Joe_r_rib10_pt";
HAnimSite443.translation = new X3D.SFVec3f([-0.087,1.19,0.09]);
let Shape444 = browser.currentScene.createNode("Shape");
Shape444.USE = "sitebox";
HAnimSite443YYY.children = new X3D.MFNode();

HAnimSite443ZZZ.children[0] = Shape444;

HAnimSegment424ZZZ.children[8] = HAnimSite443;

let HAnimSite445 = browser.currentScene.createNode("HAnimSite");
HAnimSite445.name = "l_rib10_pt";
HAnimSite445.DEF = "Joe_l_rib10_pt";
HAnimSite445.translation = new X3D.SFVec3f([0.087,1.19,0.09]);
let Shape446 = browser.currentScene.createNode("Shape");
Shape446.USE = "sitebox";
HAnimSite445YYY.children = new X3D.MFNode();

HAnimSite445ZZZ.children[0] = Shape446;

HAnimSegment424ZZZ.children[9] = HAnimSite445;

let HAnimSite447 = browser.currentScene.createNode("HAnimSite");
HAnimSite447.name = "rib10_midspine_pt";
HAnimSite447.DEF = "Joe_rib10_midspine_pt";
HAnimSite447.translation = new X3D.SFVec3f([0,1.1908,-0.1113]);
let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "sitebox";
HAnimSite447YYY.children = new X3D.MFNode();

HAnimSite447ZZZ.children[0] = Shape448;

HAnimSegment424ZZZ.children[10] = HAnimSite447;

HAnimJoint423YYY.children = new X3D.MFNode();

HAnimJoint423ZZZ.children[0] = HAnimSegment424;

let HAnimJoint449 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint449.name = "vl1";
HAnimJoint449.DEF = "Joe_vl1";
HAnimJoint449.center = new X3D.SFVec3f([0,1.1459,-0.0625]);
let HAnimSegment450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment450.name = "l1";
HAnimSegment450.DEF = "Joe_l1";
let Shape451 = browser.currentScene.createNode("Shape");
let Appearance452 = browser.currentScene.createNode("Appearance");
Appearance452.USE = "SegmentLine";
appearance = Appearance452;

let IndexedLineSet453 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet453.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate454 = browser.currentScene.createNode("Coordinate");
Coordinate454.point = new X3D.MFVec3f([0,1.1459,-0.0625,0,1.179,-0.068]);
coord = Coordinate454;

geometry = IndexedLineSet453;

HAnimSegment450YYY.children = new X3D.MFNode();

HAnimSegment450ZZZ.children[0] = Shape451;

let Transform455 = browser.currentScene.createNode("Transform");
Transform455.translation = new X3D.SFVec3f([0,1.1459,-0.0625]);
let Shape456 = browser.currentScene.createNode("Shape");
Shape456.USE = "jointbox";
Transform455YYY.child = new X3D.undefined();

Transform455ZZZ.child[0] = Shape456;

HAnimSegment450ZZZ.children[1] = Transform455;

HAnimJoint449YYY.children = new X3D.MFNode();

HAnimJoint449ZZZ.children[0] = HAnimSegment450;

let HAnimJoint457 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint457.name = "vt12";
HAnimJoint457.DEF = "Joe_vt12";
HAnimJoint457.center = new X3D.SFVec3f([0,1.179,-0.068]);
let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.name = "t12";
HAnimSegment458.DEF = "Joe_t12";
let Shape459 = browser.currentScene.createNode("Shape");
let Appearance460 = browser.currentScene.createNode("Appearance");
Appearance460.USE = "SegmentLine";
appearance = Appearance460;

let IndexedLineSet461 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet461.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate462 = browser.currentScene.createNode("Coordinate");
Coordinate462.point = new X3D.MFVec3f([0,1.179,-0.068,0,1.242,-0.09]);
coord = Coordinate462;

geometry = IndexedLineSet461;

HAnimSegment458YYY.children = new X3D.MFNode();

HAnimSegment458ZZZ.children[0] = Shape459;

let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new X3D.SFVec3f([0,1.179,-0.068]);
let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "jointbox";
Transform463YYY.child = new X3D.undefined();

Transform463ZZZ.child[0] = Shape464;

HAnimSegment458ZZZ.children[1] = Transform463;

HAnimJoint457YYY.children = new X3D.MFNode();

HAnimJoint457ZZZ.children[0] = HAnimSegment458;

let HAnimJoint465 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint465.name = "vt11";
HAnimJoint465.DEF = "Joe_vt11";
HAnimJoint465.center = new X3D.SFVec3f([0,1.2679,-0.081]);
let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.name = "t11";
HAnimSegment466.DEF = "Joe_t11";
let Shape467 = browser.currentScene.createNode("Shape");
let Appearance468 = browser.currentScene.createNode("Appearance");
Appearance468.USE = "SegmentLine";
appearance = Appearance468;

let IndexedLineSet469 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet469.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate470 = browser.currentScene.createNode("Coordinate");
Coordinate470.point = new X3D.MFVec3f([0,1.2145,-0.0755,0,1.242,-0.09]);
coord = Coordinate470;

geometry = IndexedLineSet469;

HAnimSegment466YYY.children = new X3D.MFNode();

HAnimSegment466ZZZ.children[0] = Shape467;

let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new X3D.SFVec3f([0,1.2145,-0.0755]);
let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "jointbox";
Transform471YYY.child = new X3D.undefined();

Transform471ZZZ.child[0] = Shape472;

HAnimSegment466ZZZ.children[1] = Transform471;

HAnimJoint465YYY.children = new X3D.MFNode();

HAnimJoint465ZZZ.children[0] = HAnimSegment466;

let HAnimJoint473 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint473.name = "vt10";
HAnimJoint473.DEF = "Joe_vt10";
HAnimJoint473.center = new X3D.SFVec3f([0,1.242,-0.09]);
HAnimJoint473.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint473.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.name = "t10";
HAnimSegment474.DEF = "Joe_t10";
let Shape475 = browser.currentScene.createNode("Shape");
let Appearance476 = browser.currentScene.createNode("Appearance");
Appearance476.USE = "SegmentLine";
appearance = Appearance476;

let IndexedLineSet477 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet477.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate478 = browser.currentScene.createNode("Coordinate");
Coordinate478.point = new X3D.MFVec3f([0,1.242,-0.09,0,1.268,-0.1]);
coord = Coordinate478;

geometry = IndexedLineSet477;

HAnimSegment474YYY.children = new X3D.MFNode();

HAnimSegment474ZZZ.children[0] = Shape475;

let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new X3D.SFVec3f([0,1.242,-0.09]);
let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "jointbox";
Transform479YYY.child = new X3D.undefined();

Transform479ZZZ.child[0] = Shape480;

HAnimSegment474ZZZ.children[1] = Transform479;

let HAnimSite481 = browser.currentScene.createNode("HAnimSite");
HAnimSite481.name = "substernale_pt";
HAnimSite481.DEF = "Joe_substernale_pt";
HAnimSite481.translation = new X3D.SFVec3f([0,1.25,0.113]);
let Shape482 = browser.currentScene.createNode("Shape");
Shape482.USE = "sitebox";
HAnimSite481YYY.children = new X3D.MFNode();

HAnimSite481ZZZ.children[0] = Shape482;

HAnimSegment474ZZZ.children[2] = HAnimSite481;

HAnimJoint473YYY.children = new X3D.MFNode();

HAnimJoint473ZZZ.children[0] = HAnimSegment474;

let HAnimJoint483 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint483.name = "vt9";
HAnimJoint483.DEF = "Joe_vt9";
HAnimJoint483.center = new X3D.SFVec3f([0,1.268,-0.1]);
HAnimJoint483.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint483.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.name = "t9";
HAnimSegment484.DEF = "Joe_t9";
let Shape485 = browser.currentScene.createNode("Shape");
let Appearance486 = browser.currentScene.createNode("Appearance");
Appearance486.USE = "SegmentLine";
appearance = Appearance486;

let IndexedLineSet487 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet487.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.point = new X3D.MFVec3f([0,1.268,-0.1,0,1.294,-0.11]);
coord = Coordinate488;

geometry = IndexedLineSet487;

HAnimSegment484YYY.children = new X3D.MFNode();

HAnimSegment484ZZZ.children[0] = Shape485;

let Transform489 = browser.currentScene.createNode("Transform");
Transform489.translation = new X3D.SFVec3f([0,1.268,-0.1]);
let Shape490 = browser.currentScene.createNode("Shape");
Shape490.USE = "jointbox";
Transform489YYY.child = new X3D.undefined();

Transform489ZZZ.child[0] = Shape490;

HAnimSegment484ZZZ.children[1] = Transform489;

let HAnimSite491 = browser.currentScene.createNode("HAnimSite");
HAnimSite491.name = "r_thelion_pt";
HAnimSite491.DEF = "Joe_r_thelion_pt";
HAnimSite491.translation = new X3D.SFVec3f([-0.1135,1.318,0.095]);
let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "sitebox";
HAnimSite491YYY.children = new X3D.MFNode();

HAnimSite491ZZZ.children[0] = Shape492;

HAnimSegment484ZZZ.children[2] = HAnimSite491;

let HAnimSite493 = browser.currentScene.createNode("HAnimSite");
HAnimSite493.name = "l_thelion_pt";
HAnimSite493.DEF = "Joe_l_thelion_pt";
HAnimSite493.translation = new X3D.SFVec3f([0.1135,1.318,0.095]);
let Shape494 = browser.currentScene.createNode("Shape");
Shape494.USE = "sitebox";
HAnimSite493YYY.children = new X3D.MFNode();

HAnimSite493ZZZ.children[0] = Shape494;

HAnimSegment484ZZZ.children[3] = HAnimSite493;

HAnimJoint483YYY.children = new X3D.MFNode();

HAnimJoint483ZZZ.children[0] = HAnimSegment484;

let HAnimJoint495 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint495.name = "vt8";
HAnimJoint495.DEF = "Joe_vt8";
HAnimJoint495.center = new X3D.SFVec3f([0,1.294,-0.11]);
let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.name = "t8";
HAnimSegment496.DEF = "Joe_t8";
let Shape497 = browser.currentScene.createNode("Shape");
let Appearance498 = browser.currentScene.createNode("Appearance");
Appearance498.USE = "SegmentLine";
appearance = Appearance498;

let IndexedLineSet499 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet499.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate500 = browser.currentScene.createNode("Coordinate");
Coordinate500.point = new X3D.MFVec3f([0,1.294,-0.11,0,1.352,-0.12]);
coord = Coordinate500;

geometry = IndexedLineSet499;

HAnimSegment496YYY.children = new X3D.MFNode();

HAnimSegment496ZZZ.children[0] = Shape497;

let Transform501 = browser.currentScene.createNode("Transform");
Transform501.translation = new X3D.SFVec3f([0,1.294,-0.11]);
let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "jointbox";
Transform501YYY.child = new X3D.undefined();

Transform501ZZZ.child[0] = Shape502;

HAnimSegment496ZZZ.children[1] = Transform501;

HAnimJoint495YYY.children = new X3D.MFNode();

HAnimJoint495ZZZ.children[0] = HAnimSegment496;

let HAnimJoint503 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint503.name = "vt7";
HAnimJoint503.DEF = "Joe_vt7";
HAnimJoint503.center = new X3D.SFVec3f([0,1.323,-0.1155]);
let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.name = "t7";
HAnimSegment504.DEF = "Joe_t7";
let Shape505 = browser.currentScene.createNode("Shape");
let Appearance506 = browser.currentScene.createNode("Appearance");
Appearance506.USE = "SegmentLine";
appearance = Appearance506;

let IndexedLineSet507 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet507.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate508 = browser.currentScene.createNode("Coordinate");
Coordinate508.point = new X3D.MFVec3f([0,1.352,-0.12,0,1.381,-0.1235]);
coord = Coordinate508;

geometry = IndexedLineSet507;

HAnimSegment504YYY.children = new X3D.MFNode();

HAnimSegment504ZZZ.children[0] = Shape505;

let Transform509 = browser.currentScene.createNode("Transform");
Transform509.translation = new X3D.SFVec3f([0,1.323,-0.1155]);
let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "jointbox";
Transform509YYY.child = new X3D.undefined();

Transform509ZZZ.child[0] = Shape510;

HAnimSegment504ZZZ.children[1] = Transform509;

HAnimJoint503YYY.children = new X3D.MFNode();

HAnimJoint503ZZZ.children[0] = HAnimSegment504;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "vt6";
HAnimJoint511.DEF = "Joe_vt6";
HAnimJoint511.center = new X3D.SFVec3f([0,1.352,-0.12]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.name = "t6";
HAnimSegment512.DEF = "Joe_t6";
let Shape513 = browser.currentScene.createNode("Shape");
let Appearance514 = browser.currentScene.createNode("Appearance");
Appearance514.USE = "SegmentLine";
appearance = Appearance514;

let IndexedLineSet515 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet515.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate516 = browser.currentScene.createNode("Coordinate");
Coordinate516.point = new X3D.MFVec3f([0,1.381,-0.1235,0,1.41,-0.1235]);
coord = Coordinate516;

geometry = IndexedLineSet515;

HAnimSegment512YYY.children = new X3D.MFNode();

HAnimSegment512ZZZ.children[0] = Shape513;

let Transform517 = browser.currentScene.createNode("Transform");
Transform517.translation = new X3D.SFVec3f([0,1.352,-0.12]);
let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "jointbox";
Transform517YYY.child = new X3D.undefined();

Transform517ZZZ.child[0] = Shape518;

HAnimSegment512ZZZ.children[1] = Transform517;

HAnimJoint511YYY.children = new X3D.MFNode();

HAnimJoint511ZZZ.children[0] = HAnimSegment512;

let HAnimJoint519 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint519.name = "vt5";
HAnimJoint519.DEF = "Joe_vt5";
HAnimJoint519.center = new X3D.SFVec3f([0,1.381,-0.1235]);
let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.name = "t5";
HAnimSegment520.DEF = "Joe_t5";
let Shape521 = browser.currentScene.createNode("Shape");
let Appearance522 = browser.currentScene.createNode("Appearance");
Appearance522.USE = "SegmentLine";
appearance = Appearance522;

let IndexedLineSet523 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet523.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate524 = browser.currentScene.createNode("Coordinate");
Coordinate524.point = new X3D.MFVec3f([0,1.41,-0.1235,0,1.438,-0.12]);
coord = Coordinate524;

geometry = IndexedLineSet523;

HAnimSegment520YYY.children = new X3D.MFNode();

HAnimSegment520ZZZ.children[0] = Shape521;

let Transform525 = browser.currentScene.createNode("Transform");
Transform525.translation = new X3D.SFVec3f([0,1.381,-0.1235]);
let Shape526 = browser.currentScene.createNode("Shape");
Shape526.USE = "jointbox";
Transform525YYY.child = new X3D.undefined();

Transform525ZZZ.child[0] = Shape526;

HAnimSegment520ZZZ.children[1] = Transform525;

HAnimJoint519YYY.children = new X3D.MFNode();

HAnimJoint519ZZZ.children[0] = HAnimSegment520;

let HAnimJoint527 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint527.name = "vt4";
HAnimJoint527.DEF = "Joe_vt4";
HAnimJoint527.center = new X3D.SFVec3f([0,1.41,-0.1235]);
HAnimJoint527.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint527.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment528 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment528.name = "t4";
HAnimSegment528.DEF = "Joe_t4";
let Shape529 = browser.currentScene.createNode("Shape");
let Appearance530 = browser.currentScene.createNode("Appearance");
Appearance530.USE = "SegmentLine";
appearance = Appearance530;

let IndexedLineSet531 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet531.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate532 = browser.currentScene.createNode("Coordinate");
Coordinate532.point = new X3D.MFVec3f([0,1.41,-0.1235,0,1.438,-0.12]);
coord = Coordinate532;

geometry = IndexedLineSet531;

HAnimSegment528YYY.children = new X3D.MFNode();

HAnimSegment528ZZZ.children[0] = Shape529;

let Transform533 = browser.currentScene.createNode("Transform");
Transform533.translation = new X3D.SFVec3f([0,1.41,-0.1235]);
let Shape534 = browser.currentScene.createNode("Shape");
Shape534.USE = "jointbox";
Transform533YYY.child = new X3D.undefined();

Transform533ZZZ.child[0] = Shape534;

HAnimSegment528ZZZ.children[1] = Transform533;

let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new X3D.SFVec3f([0,1.41,-0.145]);
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "skinsphere";
Transform535YYY.child = new X3D.undefined();

Transform535ZZZ.child[0] = Shape536;

HAnimSegment528ZZZ.children[2] = Transform535;

HAnimJoint527YYY.children = new X3D.MFNode();

HAnimJoint527ZZZ.children[0] = HAnimSegment528;

let HAnimJoint537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint537.name = "vt3";
HAnimJoint537.DEF = "Joe_vt3";
HAnimJoint537.center = new X3D.SFVec3f([0,1.438,-0.12]);
let HAnimSegment538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment538.name = "t3";
HAnimSegment538.DEF = "Joe_t3";
let Shape539 = browser.currentScene.createNode("Shape");
let Appearance540 = browser.currentScene.createNode("Appearance");
Appearance540.USE = "SegmentLine";
appearance = Appearance540;

let IndexedLineSet541 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet541.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate542 = browser.currentScene.createNode("Coordinate");
Coordinate542.point = new X3D.MFVec3f([0,1.438,-0.12,0,1.468,-0.105]);
coord = Coordinate542;

geometry = IndexedLineSet541;

HAnimSegment538YYY.children = new X3D.MFNode();

HAnimSegment538ZZZ.children[0] = Shape539;

let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new X3D.SFVec3f([0,1.438,-0.12]);
let Shape544 = browser.currentScene.createNode("Shape");
Shape544.USE = "jointbox";
Transform543YYY.child = new X3D.undefined();

Transform543ZZZ.child[0] = Shape544;

HAnimSegment538ZZZ.children[1] = Transform543;

HAnimJoint537YYY.children = new X3D.MFNode();

HAnimJoint537ZZZ.children[0] = HAnimSegment538;

let HAnimJoint545 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint545.name = "vt2";
HAnimJoint545.DEF = "Joe_vt2";
HAnimJoint545.center = new X3D.SFVec3f([0,1.468,-0.105]);
let HAnimSegment546 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment546.name = "t2";
HAnimSegment546.DEF = "Joe_t2";
let Shape547 = browser.currentScene.createNode("Shape");
let Appearance548 = browser.currentScene.createNode("Appearance");
Appearance548.USE = "SegmentLine";
appearance = Appearance548;

let IndexedLineSet549 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet549.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new X3D.MFVec3f([0,1.468,-0.105,0,1.497,-0.09]);
coord = Coordinate550;

geometry = IndexedLineSet549;

HAnimSegment546YYY.children = new X3D.MFNode();

HAnimSegment546ZZZ.children[0] = Shape547;

let Transform551 = browser.currentScene.createNode("Transform");
Transform551.translation = new X3D.SFVec3f([0,1.468,-0.105]);
let Shape552 = browser.currentScene.createNode("Shape");
Shape552.USE = "jointbox";
Transform551YYY.child = new X3D.undefined();

Transform551ZZZ.child[0] = Shape552;

HAnimSegment546ZZZ.children[1] = Transform551;

HAnimJoint545YYY.children = new X3D.MFNode();

HAnimJoint545ZZZ.children[0] = HAnimSegment546;

let HAnimJoint553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint553.name = "vt1";
HAnimJoint553.DEF = "Joe_vt1";
HAnimJoint553.center = new X3D.SFVec3f([0,1.497,-0.09]);
HAnimJoint553.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint553.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment554.name = "t1";
HAnimSegment554.DEF = "Joe_t1";
let Shape555 = browser.currentScene.createNode("Shape");
let Appearance556 = browser.currentScene.createNode("Appearance");
Appearance556.USE = "SegmentLine";
appearance = Appearance556;

let IndexedLineSet557 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet557.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.point = new X3D.MFVec3f([0,1.497,-0.09,0,1.525,-0.072]);
coord = Coordinate558;

geometry = IndexedLineSet557;

HAnimSegment554YYY.children = new X3D.MFNode();

HAnimSegment554ZZZ.children[0] = Shape555;

let Transform559 = browser.currentScene.createNode("Transform");
Transform559.translation = new X3D.SFVec3f([0,1.497,-0.09]);
let Shape560 = browser.currentScene.createNode("Shape");
Shape560.USE = "jointbox";
Transform559YYY.child = new X3D.undefined();

Transform559ZZZ.child[0] = Shape560;

HAnimSegment554ZZZ.children[1] = Transform559;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.name = "suprasternale_pt";
HAnimSite561.DEF = "Joe_suprasternale_pt";
HAnimSite561.translation = new X3D.SFVec3f([0,1.44,0.03]);
let Shape562 = browser.currentScene.createNode("Shape");
Shape562.USE = "sitebox";
HAnimSite561YYY.children = new X3D.MFNode();

HAnimSite561ZZZ.children[0] = Shape562;

HAnimSegment554ZZZ.children[2] = HAnimSite561;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.name = "cervicale_pt";
HAnimSite563.DEF = "Joe_cervicale_pt";
HAnimSite563.translation = new X3D.SFVec3f([0,1.53,-0.084]);
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "sitebox";
HAnimSite563YYY.children = new X3D.MFNode();

HAnimSite563ZZZ.children[0] = Shape564;

HAnimSegment554ZZZ.children[3] = HAnimSite563;

HAnimJoint553YYY.children = new X3D.MFNode();

HAnimJoint553ZZZ.children[0] = HAnimSegment554;

let HAnimJoint565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint565.name = "vc7";
HAnimJoint565.DEF = "Joe_vc7";
HAnimJoint565.center = new X3D.SFVec3f([0,1.525,-0.072]);
HAnimJoint565.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint565.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment566 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment566.name = "c7";
HAnimSegment566.DEF = "Joe_c7";
let Shape567 = browser.currentScene.createNode("Shape");
let Appearance568 = browser.currentScene.createNode("Appearance");
Appearance568.USE = "SegmentLine";
appearance = Appearance568;

let IndexedLineSet569 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet569.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate570 = browser.currentScene.createNode("Coordinate");
Coordinate570.point = new X3D.MFVec3f([0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]);
coord = Coordinate570;

geometry = IndexedLineSet569;

HAnimSegment566YYY.children = new X3D.MFNode();

HAnimSegment566ZZZ.children[0] = Shape567;

let Transform571 = browser.currentScene.createNode("Transform");
Transform571.translation = new X3D.SFVec3f([0,1.525,-0.072]);
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "jointbox";
Transform571YYY.child = new X3D.undefined();

Transform571ZZZ.child[0] = Shape572;

HAnimSegment566ZZZ.children[1] = Transform571;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.name = "r_neck_base_pt";
HAnimSite573.DEF = "Joe_r_neck_base_pt";
HAnimSite573.translation = new X3D.SFVec3f([-0.0646,1.5149,-0.0385]);
let Shape574 = browser.currentScene.createNode("Shape");
Shape574.USE = "sitebox";
HAnimSite573YYY.children = new X3D.MFNode();

HAnimSite573ZZZ.children[0] = Shape574;

HAnimSegment566ZZZ.children[2] = HAnimSite573;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.name = "l_neck_base_pt";
HAnimSite575.DEF = "Joe_l_neck_base_pt";
HAnimSite575.translation = new X3D.SFVec3f([0.0646,1.5149,-0.0385]);
let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "sitebox";
HAnimSite575YYY.children = new X3D.MFNode();

HAnimSite575ZZZ.children[0] = Shape576;

HAnimSegment566ZZZ.children[3] = HAnimSite575;

HAnimJoint565YYY.children = new X3D.MFNode();

HAnimJoint565ZZZ.children[0] = HAnimSegment566;

let HAnimJoint577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint577.name = "vc6";
HAnimJoint577.DEF = "Joe_vc6";
HAnimJoint577.center = new X3D.SFVec3f([0,1.54,-0.05]);
let HAnimSegment578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment578.name = "c6";
HAnimSegment578.DEF = "Joe_c6";
let Shape579 = browser.currentScene.createNode("Shape");
let Appearance580 = browser.currentScene.createNode("Appearance");
Appearance580.USE = "SegmentLine";
appearance = Appearance580;

let IndexedLineSet581 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet581.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate582 = browser.currentScene.createNode("Coordinate");
Coordinate582.point = new X3D.MFVec3f([0,1.54,-0.05,0,1.5675,-0.0256]);
coord = Coordinate582;

geometry = IndexedLineSet581;

HAnimSegment578YYY.children = new X3D.MFNode();

HAnimSegment578ZZZ.children[0] = Shape579;

let Transform583 = browser.currentScene.createNode("Transform");
Transform583.translation = new X3D.SFVec3f([0,1.54,-0.05]);
let Shape584 = browser.currentScene.createNode("Shape");
Shape584.USE = "jointbox";
Transform583YYY.child = new X3D.undefined();

Transform583ZZZ.child[0] = Shape584;

HAnimSegment578ZZZ.children[1] = Transform583;

HAnimJoint577YYY.children = new X3D.MFNode();

HAnimJoint577ZZZ.children[0] = HAnimSegment578;

let HAnimJoint585 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint585.name = "vc5";
HAnimJoint585.DEF = "Joe_vc5";
HAnimJoint585.center = new X3D.SFVec3f([0,1.552,-0.035]);
let HAnimSegment586 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment586.name = "c5";
HAnimSegment586.DEF = "Joe_c5";
let Transform587 = browser.currentScene.createNode("Transform");
Transform587.translation = new X3D.SFVec3f([0,1.552,-0.035]);
let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "jointbox";
Transform587YYY.child = new X3D.undefined();

Transform587ZZZ.child[0] = Shape588;

HAnimSegment586YYY.children = new X3D.MFNode();

HAnimSegment586ZZZ.children[0] = Transform587;

let Shape589 = browser.currentScene.createNode("Shape");
let Appearance590 = browser.currentScene.createNode("Appearance");
Appearance590.USE = "SegmentLine";
appearance = Appearance590;

let IndexedLineSet591 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet591.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate592 = browser.currentScene.createNode("Coordinate");
Coordinate592.point = new X3D.MFVec3f([0,1.5675,-0.0256,0,1.5823,-0.0185]);
coord = Coordinate592;

geometry = IndexedLineSet591;

HAnimSegment586ZZZ.children[1] = Shape589;

HAnimJoint585YYY.children = new X3D.MFNode();

HAnimJoint585ZZZ.children[0] = HAnimSegment586;

let HAnimJoint593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint593.name = "vc4";
HAnimJoint593.DEF = "Joe_vc4";
HAnimJoint593.center = new X3D.SFVec3f([0,1.5675,-0.0256]);
let HAnimSegment594 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment594.name = "c4";
HAnimSegment594.DEF = "Joe_c4";
let Shape595 = browser.currentScene.createNode("Shape");
let Appearance596 = browser.currentScene.createNode("Appearance");
Appearance596.USE = "SegmentLine";
appearance = Appearance596;

let IndexedLineSet597 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet597.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate598 = browser.currentScene.createNode("Coordinate");
Coordinate598.point = new X3D.MFVec3f([0,1.5823,-0.0185,0,1.595,-0.0175]);
coord = Coordinate598;

geometry = IndexedLineSet597;

HAnimSegment594YYY.children = new X3D.MFNode();

HAnimSegment594ZZZ.children[0] = Shape595;

let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new X3D.SFVec3f([0,1.5675,-0.0256]);
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "jointbox";
Transform599YYY.child = new X3D.undefined();

Transform599ZZZ.child[0] = Shape600;

HAnimSegment594ZZZ.children[1] = Transform599;

HAnimJoint593YYY.children = new X3D.MFNode();

HAnimJoint593ZZZ.children[0] = HAnimSegment594;

let HAnimJoint601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint601.name = "vc3";
HAnimJoint601.DEF = "Joe_vc3";
HAnimJoint601.center = new X3D.SFVec3f([0,1.5823,-0.0185]);
let HAnimSegment602 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment602.name = "c3";
HAnimSegment602.DEF = "Joe_c3";
let Shape603 = browser.currentScene.createNode("Shape");
let Appearance604 = browser.currentScene.createNode("Appearance");
Appearance604.USE = "SegmentLine";
appearance = Appearance604;

let IndexedLineSet605 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet605.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate606 = browser.currentScene.createNode("Coordinate");
Coordinate606.point = new X3D.MFVec3f([0,1.595,-0.0175,0,1.61,-0.015]);
coord = Coordinate606;

geometry = IndexedLineSet605;

HAnimSegment602YYY.children = new X3D.MFNode();

HAnimSegment602ZZZ.children[0] = Shape603;

let Transform607 = browser.currentScene.createNode("Transform");
Transform607.translation = new X3D.SFVec3f([0,1.5823,-0.0185]);
let Shape608 = browser.currentScene.createNode("Shape");
Shape608.USE = "jointbox";
Transform607YYY.child = new X3D.undefined();

Transform607ZZZ.child[0] = Shape608;

HAnimSegment602ZZZ.children[1] = Transform607;

HAnimJoint601YYY.children = new X3D.MFNode();

HAnimJoint601ZZZ.children[0] = HAnimSegment602;

let HAnimJoint609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint609.name = "vc2";
HAnimJoint609.DEF = "Joe_vc2";
HAnimJoint609.center = new X3D.SFVec3f([0,1.595,-0.0175]);
let HAnimSegment610 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment610.name = "c2";
HAnimSegment610.DEF = "Joe_c2";
let Shape611 = browser.currentScene.createNode("Shape");
let Appearance612 = browser.currentScene.createNode("Appearance");
Appearance612.USE = "SegmentLine";
appearance = Appearance612;

let IndexedLineSet613 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet613.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate614 = browser.currentScene.createNode("Coordinate");
Coordinate614.point = new X3D.MFVec3f([0,1.61,-0.015,0,1.6144,-0.0034]);
coord = Coordinate614;

geometry = IndexedLineSet613;

HAnimSegment610YYY.children = new X3D.MFNode();

HAnimSegment610ZZZ.children[0] = Shape611;

let Transform615 = browser.currentScene.createNode("Transform");
Transform615.translation = new X3D.SFVec3f([0,1.595,-0.0175]);
let Shape616 = browser.currentScene.createNode("Shape");
Shape616.USE = "jointbox";
Transform615YYY.child = new X3D.undefined();

Transform615ZZZ.child[0] = Shape616;

HAnimSegment610ZZZ.children[1] = Transform615;

HAnimJoint609YYY.children = new X3D.MFNode();

HAnimJoint609ZZZ.children[0] = HAnimSegment610;

let HAnimJoint617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint617.name = "vc1";
HAnimJoint617.DEF = "Joe_vc1";
HAnimJoint617.center = new X3D.SFVec3f([0,1.61,-0.015]);
let HAnimSegment618 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment618.name = "c1";
HAnimSegment618.DEF = "Joe_c1";
let Shape619 = browser.currentScene.createNode("Shape");
let Appearance620 = browser.currentScene.createNode("Appearance");
Appearance620.USE = "SegmentLine";
appearance = Appearance620;

let IndexedLineSet621 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet621.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate622 = browser.currentScene.createNode("Coordinate");
Coordinate622.point = new X3D.MFVec3f([0,1.6144,-0.0034,0,1.63,-0.01]);
coord = Coordinate622;

geometry = IndexedLineSet621;

HAnimSegment618YYY.children = new X3D.MFNode();

HAnimSegment618ZZZ.children[0] = Shape619;

let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new X3D.SFVec3f([0,1.61,-0.015]);
let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "jointbox";
Transform623YYY.child = new X3D.undefined();

Transform623ZZZ.child[0] = Shape624;

HAnimSegment618ZZZ.children[1] = Transform623;

HAnimJoint617YYY.children = new X3D.MFNode();

HAnimJoint617ZZZ.children[0] = HAnimSegment618;

let HAnimJoint625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint625.name = "skullbase";
HAnimJoint625.DEF = "Joe_skullbase";
HAnimJoint625.center = new X3D.SFVec3f([0,1.63,-0.01]);
HAnimJoint625.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint625.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment626 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment626.name = "skull";
HAnimSegment626.DEF = "Joe_skull";
let Shape627 = browser.currentScene.createNode("Shape");
let Appearance628 = browser.currentScene.createNode("Appearance");
Appearance628.USE = "SegmentLine";
appearance = Appearance628;

let IndexedLineSet629 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet629.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1]);
let Coordinate630 = browser.currentScene.createNode("Coordinate");
Coordinate630.point = new X3D.MFVec3f([0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]);
coord = Coordinate630;

geometry = IndexedLineSet629;

HAnimSegment626YYY.children = new X3D.MFNode();

HAnimSegment626ZZZ.children[0] = Shape627;

let Transform631 = browser.currentScene.createNode("Transform");
Transform631.translation = new X3D.SFVec3f([0,1.63,-0.01]);
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "jointbox";
Transform631YYY.child = new X3D.undefined();

Transform631ZZZ.child[0] = Shape632;

HAnimSegment626ZZZ.children[1] = Transform631;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.name = "skull_vertex_tip";
HAnimSite633.DEF = "Joe_skull_vertex_tip";
HAnimSite633.translation = new X3D.SFVec3f([0,1.77,0]);
let Shape634 = browser.currentScene.createNode("Shape");
Shape634.USE = "sitebox";
HAnimSite633YYY.children = new X3D.MFNode();

HAnimSite633ZZZ.children[0] = Shape634;

HAnimSegment626ZZZ.children[2] = HAnimSite633;

let HAnimSite635 = browser.currentScene.createNode("HAnimSite");
HAnimSite635.name = "sellion_pt";
HAnimSite635.DEF = "Joe_sellion_pt";
HAnimSite635.translation = new X3D.SFVec3f([0,1.665,0.09]);
let Shape636 = browser.currentScene.createNode("Shape");
Shape636.USE = "sitebox";
HAnimSite635YYY.children = new X3D.MFNode();

HAnimSite635ZZZ.children[0] = Shape636;

HAnimSegment626ZZZ.children[3] = HAnimSite635;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.name = "r_infraorbitale_pt";
HAnimSite637.DEF = "Joe_r_infraorbitale_pt";
HAnimSite637.translation = new X3D.SFVec3f([-0.033,1.62,0.087]);
let Shape638 = browser.currentScene.createNode("Shape");
Shape638.USE = "sitebox";
HAnimSite637YYY.children = new X3D.MFNode();

HAnimSite637ZZZ.children[0] = Shape638;

HAnimSegment626ZZZ.children[4] = HAnimSite637;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.name = "l_infraorbitale_pt";
HAnimSite639.DEF = "Joe_l_infraorbitale_pt";
HAnimSite639.translation = new X3D.SFVec3f([0.033,1.62,0.087]);
let Shape640 = browser.currentScene.createNode("Shape");
Shape640.USE = "sitebox";
HAnimSite639YYY.children = new X3D.MFNode();

HAnimSite639ZZZ.children[0] = Shape640;

HAnimSegment626ZZZ.children[5] = HAnimSite639;

let HAnimSite641 = browser.currentScene.createNode("HAnimSite");
HAnimSite641.name = "supramenton_pt";
HAnimSite641.DEF = "Joe_supramenton_pt";
HAnimSite641.translation = new X3D.SFVec3f([0,1.55,0.097]);
let Shape642 = browser.currentScene.createNode("Shape");
Shape642.USE = "sitebox";
HAnimSite641YYY.children = new X3D.MFNode();

HAnimSite641ZZZ.children[0] = Shape642;

HAnimSegment626ZZZ.children[6] = HAnimSite641;

let HAnimSite643 = browser.currentScene.createNode("HAnimSite");
HAnimSite643.name = "r_tragion_pt";
HAnimSite643.DEF = "Joe_r_tragion_pt";
HAnimSite643.translation = new X3D.SFVec3f([-0.077,1.64,-0.01]);
let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "sitebox";
HAnimSite643YYY.children = new X3D.MFNode();

HAnimSite643ZZZ.children[0] = Shape644;

HAnimSegment626ZZZ.children[7] = HAnimSite643;

let HAnimSite645 = browser.currentScene.createNode("HAnimSite");
HAnimSite645.name = "r_gonion_pt";
HAnimSite645.DEF = "Joe_r_gonion_pt";
HAnimSite645.translation = new X3D.SFVec3f([-0.052,1.58,0.015]);
let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "sitebox";
HAnimSite645YYY.children = new X3D.MFNode();

HAnimSite645ZZZ.children[0] = Shape646;

HAnimSegment626ZZZ.children[8] = HAnimSite645;

let HAnimSite647 = browser.currentScene.createNode("HAnimSite");
HAnimSite647.name = "l_tragion_pt";
HAnimSite647.DEF = "Joe_l_tragion_pt";
HAnimSite647.translation = new X3D.SFVec3f([0.077,1.64,-0.01]);
let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "sitebox";
HAnimSite647YYY.children = new X3D.MFNode();

HAnimSite647ZZZ.children[0] = Shape648;

HAnimSegment626ZZZ.children[9] = HAnimSite647;

let HAnimSite649 = browser.currentScene.createNode("HAnimSite");
HAnimSite649.name = "l_gonion_pt";
HAnimSite649.DEF = "Joe_l_gonion_pt";
HAnimSite649.translation = new X3D.SFVec3f([0.0631,1.58,0.015]);
let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "sitebox";
HAnimSite649YYY.children = new X3D.MFNode();

HAnimSite649ZZZ.children[0] = Shape650;

HAnimSegment626ZZZ.children[10] = HAnimSite649;

let HAnimSite651 = browser.currentScene.createNode("HAnimSite");
HAnimSite651.name = "nuchale_pt";
HAnimSite651.DEF = "Joe_nuchale_pt";
HAnimSite651.translation = new X3D.SFVec3f([0,1.625,-0.0925]);
let Shape652 = browser.currentScene.createNode("Shape");
Shape652.USE = "sitebox";
HAnimSite651YYY.children = new X3D.MFNode();

HAnimSite651ZZZ.children[0] = Shape652;

HAnimSegment626ZZZ.children[11] = HAnimSite651;

HAnimJoint625YYY.children = new X3D.MFNode();

HAnimJoint625ZZZ.children[0] = HAnimSegment626;

let HAnimJoint653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint653.name = "l_eyeball_joint";
HAnimJoint653.DEF = "Joe_l_eyeball_joint";
HAnimJoint653.center = new X3D.SFVec3f([0.034,1.659,0.06]);
let HAnimSegment654 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment654.name = "l_eyeball";
HAnimSegment654.DEF = "Joe_l_eyeball";
let Shape655 = browser.currentScene.createNode("Shape");
let Appearance656 = browser.currentScene.createNode("Appearance");
Appearance656.USE = "SegmentLine";
appearance = Appearance656;

let IndexedLineSet657 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet657.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate658 = browser.currentScene.createNode("Coordinate");
Coordinate658.point = new X3D.MFVec3f([0.034,1.655,0.065,-0.034,1.655,0.065]);
coord = Coordinate658;

geometry = IndexedLineSet657;

HAnimSegment654YYY.children = new X3D.MFNode();

HAnimSegment654ZZZ.children[0] = Shape655;

let Transform659 = browser.currentScene.createNode("Transform");
Transform659.scale = new X3D.SFVec3f([1,1,1.4]);
Transform659.translation = new X3D.SFVec3f([0.034,1.655,0.065]);
let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "jointbox";
Transform659YYY.child = new X3D.undefined();

Transform659ZZZ.child[0] = Shape660;

HAnimSegment654ZZZ.children[1] = Transform659;

HAnimJoint653YYY.children = new X3D.MFNode();

HAnimJoint653ZZZ.children[0] = HAnimSegment654;

HAnimJoint625ZZZ.children[1] = HAnimJoint653;

let HAnimJoint661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint661.name = "r_eyeball_joint";
HAnimJoint661.DEF = "Joe_r_eyeball_joint";
HAnimJoint661.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
let HAnimSegment662 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment662.name = "r_eyeball";
HAnimSegment662.DEF = "Joe_r_eyeball";
let Shape663 = browser.currentScene.createNode("Shape");
let Appearance664 = browser.currentScene.createNode("Appearance");
Appearance664.USE = "SegmentLine";
appearance = Appearance664;

let IndexedLineSet665 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet665.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate666 = browser.currentScene.createNode("Coordinate");
Coordinate666.point = new X3D.MFVec3f([0.034,1.655,0.065,-0.034,1.655,0.065]);
coord = Coordinate666;

geometry = IndexedLineSet665;

HAnimSegment662YYY.children = new X3D.MFNode();

HAnimSegment662ZZZ.children[0] = Shape663;

let Transform667 = browser.currentScene.createNode("Transform");
Transform667.scale = new X3D.SFVec3f([1,1,1.4]);
Transform667.translation = new X3D.SFVec3f([-0.034,1.655,0.065]);
let Shape668 = browser.currentScene.createNode("Shape");
Shape668.USE = "jointbox";
Transform667YYY.child = new X3D.undefined();

Transform667ZZZ.child[0] = Shape668;

HAnimSegment662ZZZ.children[1] = Transform667;

HAnimJoint661YYY.children = new X3D.MFNode();

HAnimJoint661ZZZ.children[0] = HAnimSegment662;

HAnimJoint625ZZZ.children[2] = HAnimJoint661;

HAnimJoint617ZZZ.children[1] = HAnimJoint625;

HAnimJoint609ZZZ.children[1] = HAnimJoint617;

HAnimJoint601ZZZ.children[1] = HAnimJoint609;

HAnimJoint593ZZZ.children[1] = HAnimJoint601;

HAnimJoint585ZZZ.children[1] = HAnimJoint593;

HAnimJoint577ZZZ.children[1] = HAnimJoint585;

HAnimJoint565ZZZ.children[1] = HAnimJoint577;

HAnimJoint553ZZZ.children[1] = HAnimJoint565;

let HAnimJoint669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint669.name = "l_sternoclavicular";
HAnimJoint669.DEF = "Joe_l_sternoclavicular";
HAnimJoint669.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint669.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint669.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment670.name = "l_clavicle";
HAnimSegment670.DEF = "Joe_l_clavicle";
let Shape671 = browser.currentScene.createNode("Shape");
let Appearance672 = browser.currentScene.createNode("Appearance");
Appearance672.USE = "SegmentLine";
appearance = Appearance672;

let IndexedLineSet673 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet673.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate674 = browser.currentScene.createNode("Coordinate");
Coordinate674.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate674;

geometry = IndexedLineSet673;

HAnimSegment670YYY.children = new X3D.MFNode();

HAnimSegment670ZZZ.children[0] = Shape671;

let Transform675 = browser.currentScene.createNode("Transform");
Transform675.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Shape676 = browser.currentScene.createNode("Shape");
Shape676.USE = "jointbox";
Transform675YYY.child = new X3D.undefined();

Transform675ZZZ.child[0] = Shape676;

HAnimSegment670ZZZ.children[1] = Transform675;

let HAnimSite677 = browser.currentScene.createNode("HAnimSite");
HAnimSite677.name = "l_clavicle_pt";
HAnimSite677.DEF = "Joe_l_clavicle_pt";
HAnimSite677.translation = new X3D.SFVec3f([0.03,1.46,0.035]);
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "sitebox";
HAnimSite677YYY.children = new X3D.MFNode();

HAnimSite677ZZZ.children[0] = Shape678;

HAnimSegment670ZZZ.children[2] = HAnimSite677;

HAnimJoint669YYY.children = new X3D.MFNode();

HAnimJoint669ZZZ.children[0] = HAnimSegment670;

let HAnimJoint679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint679.name = "l_acromioclavicular";
HAnimJoint679.DEF = "Joe_l_acromioclavicular";
HAnimJoint679.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint679.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint679.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment680 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment680.name = "l_scapula";
HAnimSegment680.DEF = "Joe_l_scapula";
let Shape681 = browser.currentScene.createNode("Shape");
let Appearance682 = browser.currentScene.createNode("Appearance");
Appearance682.USE = "SegmentLine";
appearance = Appearance682;

let IndexedLineSet683 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet683.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate684 = browser.currentScene.createNode("Coordinate");
Coordinate684.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2,1.44,-0.04]);
coord = Coordinate684;

geometry = IndexedLineSet683;

HAnimSegment680YYY.children = new X3D.MFNode();

HAnimSegment680ZZZ.children[0] = Shape681;

let Transform685 = browser.currentScene.createNode("Transform");
Transform685.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Shape686 = browser.currentScene.createNode("Shape");
Shape686.USE = "jointbox";
Transform685YYY.child = new X3D.undefined();

Transform685ZZZ.child[0] = Shape686;

HAnimSegment680ZZZ.children[1] = Transform685;

let Transform687 = browser.currentScene.createNode("Transform");
Transform687.translation = new X3D.SFVec3f([0.11,1.427,-0.1375]);
let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "skinsphere";
Transform687YYY.child = new X3D.undefined();

Transform687ZZZ.child[0] = Shape688;

HAnimSegment680ZZZ.children[2] = Transform687;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.name = "l_acromion_pt";
HAnimSite689.DEF = "Joe_l_acromion_pt";
HAnimSite689.translation = new X3D.SFVec3f([0.175,1.4825,-0.06]);
let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "sitebox";
HAnimSite689YYY.children = new X3D.MFNode();

HAnimSite689ZZZ.children[0] = Shape690;

HAnimSegment680ZZZ.children[3] = HAnimSite689;

let HAnimSite691 = browser.currentScene.createNode("HAnimSite");
HAnimSite691.name = "l_axilla_proximal_pt";
HAnimSite691.DEF = "Joe_l_axilla_proximal_pt";
HAnimSite691.translation = new X3D.SFVec3f([0.17,1.38,0.007]);
let Shape692 = browser.currentScene.createNode("Shape");
Shape692.USE = "sitebox";
HAnimSite691YYY.children = new X3D.MFNode();

HAnimSite691ZZZ.children[0] = Shape692;

HAnimSegment680ZZZ.children[4] = HAnimSite691;

let HAnimSite693 = browser.currentScene.createNode("HAnimSite");
HAnimSite693.name = "l_axilla_distal_pt";
HAnimSite693.DEF = "Joe_l_axilla_distal_pt";
HAnimSite693.translation = new X3D.SFVec3f([0.16,1.38,-0.125]);
let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "sitebox";
HAnimSite693YYY.children = new X3D.MFNode();

HAnimSite693ZZZ.children[0] = Shape694;

HAnimSegment680ZZZ.children[5] = HAnimSite693;

HAnimJoint679YYY.children = new X3D.MFNode();

HAnimJoint679ZZZ.children[0] = HAnimSegment680;

let HAnimJoint695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint695.name = "l_shoulder";
HAnimJoint695.DEF = "Joe_l_shoulder";
HAnimJoint695.center = new X3D.SFVec3f([0.2,1.44,-0.04]);
HAnimJoint695.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint695.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment696.name = "l_upperarm";
HAnimSegment696.DEF = "Joe_l_upperarm";
let Shape697 = browser.currentScene.createNode("Shape");
let Appearance698 = browser.currentScene.createNode("Appearance");
Appearance698.USE = "SegmentLine";
appearance = Appearance698;

let IndexedLineSet699 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet699.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate700 = browser.currentScene.createNode("Coordinate");
Coordinate700.point = new X3D.MFVec3f([0.2029,1.44,-0.0387,0.2,1.1388,-0.04]);
coord = Coordinate700;

geometry = IndexedLineSet699;

HAnimSegment696YYY.children = new X3D.MFNode();

HAnimSegment696ZZZ.children[0] = Shape697;

let Transform701 = browser.currentScene.createNode("Transform");
Transform701.translation = new X3D.SFVec3f([0.2,1.44,-0.04]);
let Shape702 = browser.currentScene.createNode("Shape");
Shape702.USE = "jointbox";
Transform701YYY.child = new X3D.undefined();

Transform701ZZZ.child[0] = Shape702;

HAnimSegment696ZZZ.children[1] = Transform701;

let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new X3D.SFVec3f([0.235,1.42,-0.0625]);
let Shape704 = browser.currentScene.createNode("Shape");
Shape704.USE = "skinsphere";
Transform703YYY.child = new X3D.undefined();

Transform703ZZZ.child[0] = Shape704;

HAnimSegment696ZZZ.children[2] = Transform703;

let Transform705 = browser.currentScene.createNode("Transform");
Transform705.translation = new X3D.SFVec3f([0.25,1.27,-0.04]);
let Shape706 = browser.currentScene.createNode("Shape");
Shape706.USE = "skinsphere";
Transform705YYY.child = new X3D.undefined();

Transform705ZZZ.child[0] = Shape706;

HAnimSegment696ZZZ.children[3] = Transform705;

let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new X3D.SFVec3f([0.17,1.27,-0.04]);
let Shape708 = browser.currentScene.createNode("Shape");
Shape708.USE = "skinsphere";
Transform707YYY.child = new X3D.undefined();

Transform707ZZZ.child[0] = Shape708;

HAnimSegment696ZZZ.children[4] = Transform707;

let Transform709 = browser.currentScene.createNode("Transform");
Transform709.translation = new X3D.SFVec3f([0.2,1.27,-0.09]);
let Shape710 = browser.currentScene.createNode("Shape");
Shape710.USE = "skinsphere";
Transform709YYY.child = new X3D.undefined();

Transform709ZZZ.child[0] = Shape710;

HAnimSegment696ZZZ.children[5] = Transform709;

let Transform711 = browser.currentScene.createNode("Transform");
Transform711.translation = new X3D.SFVec3f([0.2,1.27,0.02]);
let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "skinsphere";
Transform711YYY.child = new X3D.undefined();

Transform711ZZZ.child[0] = Shape712;

HAnimSegment696ZZZ.children[6] = Transform711;

let HAnimSite713 = browser.currentScene.createNode("HAnimSite");
HAnimSite713.name = "l_humeral_medial_epicondyle_pt";
HAnimSite713.DEF = "Joe_l_humeral_medial_epicondyle_pt";
HAnimSite713.translation = new X3D.SFVec3f([0.165,1.1388,-0.04]);
let Shape714 = browser.currentScene.createNode("Shape");
Shape714.USE = "sitebox";
HAnimSite713YYY.children = new X3D.MFNode();

HAnimSite713ZZZ.children[0] = Shape714;

HAnimSegment696ZZZ.children[7] = HAnimSite713;

let HAnimSite715 = browser.currentScene.createNode("HAnimSite");
HAnimSite715.name = "l_radiale_pt";
HAnimSite715.DEF = "Joe_l_radiale_pt";
HAnimSite715.translation = new X3D.SFVec3f([0.23,1.133,-0.055]);
let Shape716 = browser.currentScene.createNode("Shape");
Shape716.USE = "sitebox";
HAnimSite715YYY.children = new X3D.MFNode();

HAnimSite715ZZZ.children[0] = Shape716;

HAnimSegment696ZZZ.children[8] = HAnimSite715;

let HAnimSite717 = browser.currentScene.createNode("HAnimSite");
HAnimSite717.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite717.DEF = "Joe_l_humeral_lateral_epicondyle_pt";
HAnimSite717.translation = new X3D.SFVec3f([0.244,1.1388,-0.04]);
let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "sitebox";
HAnimSite717YYY.children = new X3D.MFNode();

HAnimSite717ZZZ.children[0] = Shape718;

HAnimSegment696ZZZ.children[9] = HAnimSite717;

HAnimJoint695YYY.children = new X3D.MFNode();

HAnimJoint695ZZZ.children[0] = HAnimSegment696;

let HAnimJoint719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint719.name = "l_elbow";
HAnimJoint719.DEF = "Joe_l_elbow";
HAnimJoint719.center = new X3D.SFVec3f([0.2,1.1388,-0.04]);
HAnimJoint719.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint719.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment720 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment720.name = "l_forearm";
HAnimSegment720.DEF = "Joe_l_forearm";
let Shape721 = browser.currentScene.createNode("Shape");
let Appearance722 = browser.currentScene.createNode("Appearance");
Appearance722.USE = "SegmentLine";
appearance = Appearance722;

let IndexedLineSet723 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet723.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate724 = browser.currentScene.createNode("Coordinate");
Coordinate724.point = new X3D.MFVec3f([0.2,1.1388,-0.04,0.2,0.87,-0.04]);
coord = Coordinate724;

geometry = IndexedLineSet723;

HAnimSegment720YYY.children = new X3D.MFNode();

HAnimSegment720ZZZ.children[0] = Shape721;

let Transform725 = browser.currentScene.createNode("Transform");
Transform725.translation = new X3D.SFVec3f([0.2,1.1388,-0.04]);
let Shape726 = browser.currentScene.createNode("Shape");
Shape726.USE = "jointbox";
Transform725YYY.child = new X3D.undefined();

Transform725ZZZ.child[0] = Shape726;

HAnimSegment720ZZZ.children[1] = Transform725;

let Transform727 = browser.currentScene.createNode("Transform");
Transform727.translation = new X3D.SFVec3f([0.2,1.1388,-0.013]);
let Shape728 = browser.currentScene.createNode("Shape");
Shape728.USE = "skinsphere";
Transform727YYY.child = new X3D.undefined();

Transform727ZZZ.child[0] = Shape728;

HAnimSegment720ZZZ.children[2] = Transform727;

let Transform729 = browser.currentScene.createNode("Transform");
Transform729.translation = new X3D.SFVec3f([0.225,1,-0.01]);
let Shape730 = browser.currentScene.createNode("Shape");
Shape730.USE = "skinsphere";
Transform729YYY.child = new X3D.undefined();

Transform729ZZZ.child[0] = Shape730;

HAnimSegment720ZZZ.children[3] = Transform729;

let Transform731 = browser.currentScene.createNode("Transform");
Transform731.translation = new X3D.SFVec3f([0.225,1,-0.07]);
let Shape732 = browser.currentScene.createNode("Shape");
Shape732.USE = "skinsphere";
Transform731YYY.child = new X3D.undefined();

Transform731ZZZ.child[0] = Shape732;

HAnimSegment720ZZZ.children[4] = Transform731;

let Transform733 = browser.currentScene.createNode("Transform");
Transform733.translation = new X3D.SFVec3f([0.185,1,-0.01]);
let Shape734 = browser.currentScene.createNode("Shape");
Shape734.USE = "skinsphere";
Transform733YYY.child = new X3D.undefined();

Transform733ZZZ.child[0] = Shape734;

HAnimSegment720ZZZ.children[5] = Transform733;

let Transform735 = browser.currentScene.createNode("Transform");
Transform735.translation = new X3D.SFVec3f([0.185,1,-0.07]);
let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "skinsphere";
Transform735YYY.child = new X3D.undefined();

Transform735ZZZ.child[0] = Shape736;

HAnimSegment720ZZZ.children[6] = Transform735;

let HAnimSite737 = browser.currentScene.createNode("HAnimSite");
HAnimSite737.name = "l_radial_styloid_pt";
HAnimSite737.DEF = "Joe_l_radial_styloid_pt";
HAnimSite737.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let Shape738 = browser.currentScene.createNode("Shape");
Shape738.USE = "sitebox";
HAnimSite737YYY.children = new X3D.MFNode();

HAnimSite737ZZZ.children[0] = Shape738;

HAnimSegment720ZZZ.children[7] = HAnimSite737;

let HAnimSite739 = browser.currentScene.createNode("HAnimSite");
HAnimSite739.name = "l_olecranon_pt";
HAnimSite739.DEF = "Joe_l_olecranon_pt";
HAnimSite739.translation = new X3D.SFVec3f([0.2,1.1388,-0.08]);
let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "sitebox";
HAnimSite739YYY.children = new X3D.MFNode();

HAnimSite739ZZZ.children[0] = Shape740;

HAnimSegment720ZZZ.children[8] = HAnimSite739;

HAnimJoint719YYY.children = new X3D.MFNode();

HAnimJoint719ZZZ.children[0] = HAnimSegment720;

let HAnimJoint741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint741.name = "l_radiocarpal";
HAnimJoint741.DEF = "Joe_l_radiocarpal";
HAnimJoint741.center = new X3D.SFVec3f([0.2,0.87,-0.04]);
HAnimJoint741.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint741.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment742.name = "l_carpal";
HAnimSegment742.DEF = "Joe_l_carpal";
let Shape743 = browser.currentScene.createNode("Shape");
let Appearance744 = browser.currentScene.createNode("Appearance");
Appearance744.USE = "SegmentLine";
appearance = Appearance744;

let IndexedLineSet745 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet745.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate746 = browser.currentScene.createNode("Coordinate");
Coordinate746.point = new X3D.MFVec3f([0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
coord = Coordinate746;

geometry = IndexedLineSet745;

HAnimSegment742YYY.children = new X3D.MFNode();

HAnimSegment742ZZZ.children[0] = Shape743;

let Transform747 = browser.currentScene.createNode("Transform");
Transform747.translation = new X3D.SFVec3f([0.2,0.87,-0.04]);
let Shape748 = browser.currentScene.createNode("Shape");
Shape748.USE = "jointbox";
Transform747YYY.child = new X3D.undefined();

Transform747ZZZ.child[0] = Shape748;

HAnimSegment742ZZZ.children[1] = Transform747;

let HAnimSite749 = browser.currentScene.createNode("HAnimSite");
HAnimSite749.name = "l_metacarpal_phalanx_2_pt";
HAnimSite749.DEF = "Joe_l_metacarpal_phalanx_2_pt";
HAnimSite749.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let Shape750 = browser.currentScene.createNode("Shape");
Shape750.USE = "sitebox";
HAnimSite749YYY.children = new X3D.MFNode();

HAnimSite749ZZZ.children[0] = Shape750;

HAnimSegment742ZZZ.children[2] = HAnimSite749;

let HAnimSite751 = browser.currentScene.createNode("HAnimSite");
HAnimSite751.name = "l_ulnar_styloid_pt";
HAnimSite751.DEF = "Joe_l_ulnar_styloid_pt";
HAnimSite751.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
let Shape752 = browser.currentScene.createNode("Shape");
Shape752.USE = "sitebox";
HAnimSite751YYY.children = new X3D.MFNode();

HAnimSite751ZZZ.children[0] = Shape752;

HAnimSegment742ZZZ.children[3] = HAnimSite751;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.name = "l_metacarpal_phalanx_5_pt";
HAnimSite753.DEF = "Joe_l_metacarpal_phalanx_5_pt";
HAnimSite753.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let Shape754 = browser.currentScene.createNode("Shape");
Shape754.USE = "sitebox";
HAnimSite753YYY.children = new X3D.MFNode();

HAnimSite753ZZZ.children[0] = Shape754;

HAnimSegment742ZZZ.children[4] = HAnimSite753;

HAnimJoint741YYY.children = new X3D.MFNode();

HAnimJoint741ZZZ.children[0] = HAnimSegment742;

let HAnimJoint755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint755.name = "l_carpometacarpal_1";
HAnimJoint755.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint755.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint755.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint755.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment756.name = "l_metacarpal_1";
HAnimSegment756.DEF = "Joe_l_metacarpal_1";
let Shape757 = browser.currentScene.createNode("Shape");
let Appearance758 = browser.currentScene.createNode("Appearance");
Appearance758.USE = "SegmentLine";
appearance = Appearance758;

let IndexedLineSet759 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet759.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate760;

geometry = IndexedLineSet759;

HAnimSegment756YYY.children = new X3D.MFNode();

HAnimSegment756ZZZ.children[0] = Shape757;

let Transform761 = browser.currentScene.createNode("Transform");
Transform761.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape762 = browser.currentScene.createNode("Shape");
Shape762.USE = "jointbox";
Transform761YYY.child = new X3D.undefined();

Transform761ZZZ.child[0] = Shape762;

HAnimSegment756ZZZ.children[1] = Transform761;

HAnimJoint755YYY.children = new X3D.MFNode();

HAnimJoint755ZZZ.children[0] = HAnimSegment756;

let HAnimJoint763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint763.name = "l_metacarpophalangeal_1";
HAnimJoint763.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint763.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint763.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint763.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimSegment764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment764.name = "l_carpal_proximal_phalanx_1";
HAnimSegment764.DEF = "Joe_l_carpal_proximal_phalanx_1";
let Shape765 = browser.currentScene.createNode("Shape");
let Appearance766 = browser.currentScene.createNode("Appearance");
Appearance766.USE = "SegmentLine";
appearance = Appearance766;

let IndexedLineSet767 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet767.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate768;

geometry = IndexedLineSet767;

HAnimSegment764YYY.children = new X3D.MFNode();

HAnimSegment764ZZZ.children[0] = Shape765;

let Transform769 = browser.currentScene.createNode("Transform");
Transform769.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape770 = browser.currentScene.createNode("Shape");
Shape770.USE = "jointbox";
Transform769YYY.child = new X3D.undefined();

Transform769ZZZ.child[0] = Shape770;

HAnimSegment764ZZZ.children[1] = Transform769;

HAnimJoint763YYY.children = new X3D.MFNode();

HAnimJoint763ZZZ.children[0] = HAnimSegment764;

let HAnimJoint771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint771.name = "l_carpal_interphalangeal_1";
HAnimJoint771.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint771.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint771.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint771.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment772.name = "l_carpal_distal_phalanx_1";
HAnimSegment772.DEF = "Joe_l_carpal_distal_phalanx_1";
let Shape773 = browser.currentScene.createNode("Shape");
let Appearance774 = browser.currentScene.createNode("Appearance");
Appearance774.USE = "SegmentLine";
appearance = Appearance774;

let IndexedLineSet775 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet775.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new X3D.MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
coord = Coordinate776;

geometry = IndexedLineSet775;

HAnimSegment772YYY.children = new X3D.MFNode();

HAnimSegment772ZZZ.children[0] = Shape773;

let Transform777 = browser.currentScene.createNode("Transform");
Transform777.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape778 = browser.currentScene.createNode("Shape");
Shape778.USE = "jointbox";
Transform777YYY.child = new X3D.undefined();

Transform777ZZZ.child[0] = Shape778;

HAnimSegment772ZZZ.children[1] = Transform777;

let HAnimSite779 = browser.currentScene.createNode("HAnimSite");
HAnimSite779.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite779.DEF = "Joe_l_carpal_distal_phalanx_1_tip";
HAnimSite779.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let Shape780 = browser.currentScene.createNode("Shape");
Shape780.USE = "sitebox";
HAnimSite779YYY.children = new X3D.MFNode();

HAnimSite779ZZZ.children[0] = Shape780;

HAnimSegment772ZZZ.children[2] = HAnimSite779;

HAnimJoint771YYY.children = new X3D.MFNode();

HAnimJoint771ZZZ.children[0] = HAnimSegment772;

HAnimJoint763ZZZ.children[1] = HAnimJoint771;

HAnimJoint755ZZZ.children[1] = HAnimJoint763;

HAnimJoint741ZZZ.children[1] = HAnimJoint755;

let HAnimJoint781 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint781.name = "l_carpometacarpal_2";
HAnimJoint781.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint781.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint781.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint781.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment782.name = "l_metacarpal_2";
HAnimSegment782.DEF = "Joe_l_metacarpal_2";
let Shape783 = browser.currentScene.createNode("Shape");
let Appearance784 = browser.currentScene.createNode("Appearance");
Appearance784.USE = "SegmentLine";
appearance = Appearance784;

let IndexedLineSet785 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet785.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate786 = browser.currentScene.createNode("Coordinate");
Coordinate786.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate786;

geometry = IndexedLineSet785;

HAnimSegment782YYY.children = new X3D.MFNode();

HAnimSegment782ZZZ.children[0] = Shape783;

let Transform787 = browser.currentScene.createNode("Transform");
Transform787.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "jointbox";
Transform787YYY.child = new X3D.undefined();

Transform787ZZZ.child[0] = Shape788;

HAnimSegment782ZZZ.children[1] = Transform787;

HAnimJoint781YYY.children = new X3D.MFNode();

HAnimJoint781ZZZ.children[0] = HAnimSegment782;

let HAnimJoint789 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint789.name = "l_metacarpophalangeal_2";
HAnimJoint789.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint789.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint789.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint789.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimSegment790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment790.name = "l_carpal_proximal_phalanx_2";
HAnimSegment790.DEF = "Joe_l_carpal_proximal_phalanx_2";
let Shape791 = browser.currentScene.createNode("Shape");
let Appearance792 = browser.currentScene.createNode("Appearance");
Appearance792.USE = "SegmentLine";
appearance = Appearance792;

let IndexedLineSet793 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet793.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate794 = browser.currentScene.createNode("Coordinate");
Coordinate794.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate794;

geometry = IndexedLineSet793;

HAnimSegment790YYY.children = new X3D.MFNode();

HAnimSegment790ZZZ.children[0] = Shape791;

let Transform795 = browser.currentScene.createNode("Transform");
Transform795.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "jointbox";
Transform795YYY.child = new X3D.undefined();

Transform795ZZZ.child[0] = Shape796;

HAnimSegment790ZZZ.children[1] = Transform795;

HAnimJoint789YYY.children = new X3D.MFNode();

HAnimJoint789ZZZ.children[0] = HAnimSegment790;

let HAnimJoint797 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint797.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint797.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint797.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint797.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint797.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment798.name = "l_carpal_middle_phalanx_2";
HAnimSegment798.DEF = "Joe_l_carpal_middle_phalanx_2";
let Shape799 = browser.currentScene.createNode("Shape");
let Appearance800 = browser.currentScene.createNode("Appearance");
Appearance800.USE = "SegmentLine";
appearance = Appearance800;

let IndexedLineSet801 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet801.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate802 = browser.currentScene.createNode("Coordinate");
Coordinate802.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate802;

geometry = IndexedLineSet801;

HAnimSegment798YYY.children = new X3D.MFNode();

HAnimSegment798ZZZ.children[0] = Shape799;

let Transform803 = browser.currentScene.createNode("Transform");
Transform803.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape804 = browser.currentScene.createNode("Shape");
Shape804.USE = "jointbox";
Transform803YYY.child = new X3D.undefined();

Transform803ZZZ.child[0] = Shape804;

HAnimSegment798ZZZ.children[1] = Transform803;

HAnimJoint797YYY.children = new X3D.MFNode();

HAnimJoint797ZZZ.children[0] = HAnimSegment798;

let HAnimJoint805 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint805.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint805.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint805.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint805.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint805.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment806.name = "l_carpal_distal_phalanx_2";
HAnimSegment806.DEF = "Joe_l_carpal_distal_phalanx_2";
let Shape807 = browser.currentScene.createNode("Shape");
let Appearance808 = browser.currentScene.createNode("Appearance");
Appearance808.USE = "SegmentLine";
appearance = Appearance808;

let IndexedLineSet809 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet809.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate810 = browser.currentScene.createNode("Coordinate");
Coordinate810.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
coord = Coordinate810;

geometry = IndexedLineSet809;

HAnimSegment806YYY.children = new X3D.MFNode();

HAnimSegment806ZZZ.children[0] = Shape807;

let Transform811 = browser.currentScene.createNode("Transform");
Transform811.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape812 = browser.currentScene.createNode("Shape");
Shape812.USE = "jointbox";
Transform811YYY.child = new X3D.undefined();

Transform811ZZZ.child[0] = Shape812;

HAnimSegment806ZZZ.children[1] = Transform811;

let HAnimSite813 = browser.currentScene.createNode("HAnimSite");
HAnimSite813.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite813.DEF = "Joe_l_carpal_distal_phalanx_2_tip";
HAnimSite813.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let Shape814 = browser.currentScene.createNode("Shape");
Shape814.USE = "sitebox";
HAnimSite813YYY.children = new X3D.MFNode();

HAnimSite813ZZZ.children[0] = Shape814;

HAnimSegment806ZZZ.children[2] = HAnimSite813;

let HAnimSite815 = browser.currentScene.createNode("HAnimSite");
HAnimSite815.name = "l_dactylion_pt";
HAnimSite815.DEF = "Joe_l_dactylion_pt";
HAnimSite815.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let Shape816 = browser.currentScene.createNode("Shape");
Shape816.USE = "sitebox";
HAnimSite815YYY.children = new X3D.MFNode();

HAnimSite815ZZZ.children[0] = Shape816;

HAnimSegment806ZZZ.children[3] = HAnimSite815;

HAnimJoint805YYY.children = new X3D.MFNode();

HAnimJoint805ZZZ.children[0] = HAnimSegment806;

HAnimJoint797ZZZ.children[1] = HAnimJoint805;

HAnimJoint789ZZZ.children[1] = HAnimJoint797;

HAnimJoint781ZZZ.children[1] = HAnimJoint789;

HAnimJoint741ZZZ.children[2] = HAnimJoint781;

let HAnimJoint817 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint817.name = "l_carpometacarpal_3";
HAnimJoint817.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint817.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint817.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint817.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment818.name = "l_metacarpal_3";
HAnimSegment818.DEF = "Joe_l_metacarpal_3";
let Shape819 = browser.currentScene.createNode("Shape");
let Appearance820 = browser.currentScene.createNode("Appearance");
Appearance820.USE = "SegmentLine";
appearance = Appearance820;

let IndexedLineSet821 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet821.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate822 = browser.currentScene.createNode("Coordinate");
Coordinate822.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate822;

geometry = IndexedLineSet821;

HAnimSegment818YYY.children = new X3D.MFNode();

HAnimSegment818ZZZ.children[0] = Shape819;

let Transform823 = browser.currentScene.createNode("Transform");
Transform823.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Shape824 = browser.currentScene.createNode("Shape");
Shape824.USE = "jointbox";
Transform823YYY.child = new X3D.undefined();

Transform823ZZZ.child[0] = Shape824;

HAnimSegment818ZZZ.children[1] = Transform823;

HAnimJoint817YYY.children = new X3D.MFNode();

HAnimJoint817ZZZ.children[0] = HAnimSegment818;

let HAnimJoint825 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint825.name = "l_metacarpophalangeal_3";
HAnimJoint825.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint825.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint825.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint825.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.name = "l_carpal_proximal_phalanx_3";
HAnimSegment826.DEF = "Joe_l_carpal_proximal_phalanx_3";
let Shape827 = browser.currentScene.createNode("Shape");
let Appearance828 = browser.currentScene.createNode("Appearance");
Appearance828.USE = "SegmentLine";
appearance = Appearance828;

let IndexedLineSet829 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet829.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate830 = browser.currentScene.createNode("Coordinate");
Coordinate830.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate830;

geometry = IndexedLineSet829;

HAnimSegment826YYY.children = new X3D.MFNode();

HAnimSegment826ZZZ.children[0] = Shape827;

let Transform831 = browser.currentScene.createNode("Transform");
Transform831.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "jointbox";
Transform831YYY.child = new X3D.undefined();

Transform831ZZZ.child[0] = Shape832;

HAnimSegment826ZZZ.children[1] = Transform831;

HAnimJoint825YYY.children = new X3D.MFNode();

HAnimJoint825ZZZ.children[0] = HAnimSegment826;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint833.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint833.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint833.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint833.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.name = "l_carpal_middle_phalanx_3";
HAnimSegment834.DEF = "Joe_l_carpal_middle_phalanx_3";
let Shape835 = browser.currentScene.createNode("Shape");
let Appearance836 = browser.currentScene.createNode("Appearance");
Appearance836.USE = "SegmentLine";
appearance = Appearance836;

let IndexedLineSet837 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet837.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate838 = browser.currentScene.createNode("Coordinate");
Coordinate838.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate838;

geometry = IndexedLineSet837;

HAnimSegment834YYY.children = new X3D.MFNode();

HAnimSegment834ZZZ.children[0] = Shape835;

let Transform839 = browser.currentScene.createNode("Transform");
Transform839.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Shape840 = browser.currentScene.createNode("Shape");
Shape840.USE = "jointbox";
Transform839YYY.child = new X3D.undefined();

Transform839ZZZ.child[0] = Shape840;

HAnimSegment834ZZZ.children[1] = Transform839;

HAnimJoint833YYY.children = new X3D.MFNode();

HAnimJoint833ZZZ.children[0] = HAnimSegment834;

let HAnimJoint841 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint841.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint841.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint841.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint841.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint841.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment842.name = "l_carpal_distal_phalanx_3";
HAnimSegment842.DEF = "Joe_l_carpal_distal_phalanx_3";
let Shape843 = browser.currentScene.createNode("Shape");
let Appearance844 = browser.currentScene.createNode("Appearance");
Appearance844.USE = "SegmentLine";
appearance = Appearance844;

let IndexedLineSet845 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet845.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.point = new X3D.MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
coord = Coordinate846;

geometry = IndexedLineSet845;

HAnimSegment842YYY.children = new X3D.MFNode();

HAnimSegment842ZZZ.children[0] = Shape843;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite847.DEF = "Joe_l_carpal_distal_phalanx_3_tip";
HAnimSite847.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "sitebox";
HAnimSite847YYY.children = new X3D.MFNode();

HAnimSite847ZZZ.children[0] = Shape848;

HAnimSegment842ZZZ.children[1] = HAnimSite847;

let Transform849 = browser.currentScene.createNode("Transform");
Transform849.translation = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "jointbox";
Transform849YYY.child = new X3D.undefined();

Transform849ZZZ.child[0] = Shape850;

HAnimSegment842ZZZ.children[2] = Transform849;

HAnimJoint841YYY.children = new X3D.MFNode();

HAnimJoint841ZZZ.children[0] = HAnimSegment842;

HAnimJoint833ZZZ.children[1] = HAnimJoint841;

HAnimJoint825ZZZ.children[1] = HAnimJoint833;

HAnimJoint817ZZZ.children[1] = HAnimJoint825;

HAnimJoint741ZZZ.children[3] = HAnimJoint817;

let HAnimJoint851 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint851.name = "l_carpometacarpal_4";
HAnimJoint851.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint851.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint851.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint851.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment852.name = "l_metacarpal_4";
HAnimSegment852.DEF = "Joe_l_metacarpal_4";
let Shape853 = browser.currentScene.createNode("Shape");
let Appearance854 = browser.currentScene.createNode("Appearance");
Appearance854.USE = "SegmentLine";
appearance = Appearance854;

let IndexedLineSet855 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet855.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate856 = browser.currentScene.createNode("Coordinate");
Coordinate856.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate856;

geometry = IndexedLineSet855;

HAnimSegment852YYY.children = new X3D.MFNode();

HAnimSegment852ZZZ.children[0] = Shape853;

let Transform857 = browser.currentScene.createNode("Transform");
Transform857.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "jointbox";
Transform857YYY.child = new X3D.undefined();

Transform857ZZZ.child[0] = Shape858;

HAnimSegment852ZZZ.children[1] = Transform857;

HAnimJoint851YYY.children = new X3D.MFNode();

HAnimJoint851ZZZ.children[0] = HAnimSegment852;

let HAnimJoint859 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint859.name = "l_metacarpophalangeal_4";
HAnimJoint859.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint859.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint859.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint859.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment860.name = "l_carpal_proximal_phalanx_4";
HAnimSegment860.DEF = "Joe_l_carpal_proximal_phalanx_4";
let Shape861 = browser.currentScene.createNode("Shape");
let Appearance862 = browser.currentScene.createNode("Appearance");
Appearance862.USE = "SegmentLine";
appearance = Appearance862;

let IndexedLineSet863 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet863.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate864 = browser.currentScene.createNode("Coordinate");
Coordinate864.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate864;

geometry = IndexedLineSet863;

HAnimSegment860YYY.children = new X3D.MFNode();

HAnimSegment860ZZZ.children[0] = Shape861;

let Transform865 = browser.currentScene.createNode("Transform");
Transform865.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "jointbox";
Transform865YYY.child = new X3D.undefined();

Transform865ZZZ.child[0] = Shape866;

HAnimSegment860ZZZ.children[1] = Transform865;

HAnimJoint859YYY.children = new X3D.MFNode();

HAnimJoint859ZZZ.children[0] = HAnimSegment860;

let HAnimJoint867 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint867.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint867.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint867.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint867.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint867.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment868.name = "l_carpal_middle_phalanx_4";
HAnimSegment868.DEF = "Joe_l_carpal_middle_phalanx_4";
let Shape869 = browser.currentScene.createNode("Shape");
let Appearance870 = browser.currentScene.createNode("Appearance");
Appearance870.USE = "SegmentLine";
appearance = Appearance870;

let IndexedLineSet871 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet871.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate872 = browser.currentScene.createNode("Coordinate");
Coordinate872.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate872;

geometry = IndexedLineSet871;

HAnimSegment868YYY.children = new X3D.MFNode();

HAnimSegment868ZZZ.children[0] = Shape869;

let Transform873 = browser.currentScene.createNode("Transform");
Transform873.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Shape874 = browser.currentScene.createNode("Shape");
Shape874.USE = "jointbox";
Transform873YYY.child = new X3D.undefined();

Transform873ZZZ.child[0] = Shape874;

HAnimSegment868ZZZ.children[1] = Transform873;

HAnimJoint867YYY.children = new X3D.MFNode();

HAnimJoint867ZZZ.children[0] = HAnimSegment868;

let HAnimJoint875 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint875.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint875.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint875.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint875.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint875.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment876 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment876.name = "l_carpal_distal_phalanx_4";
HAnimSegment876.DEF = "Joe_l_carpal_distal_phalanx_4";
let Shape877 = browser.currentScene.createNode("Shape");
let Appearance878 = browser.currentScene.createNode("Appearance");
Appearance878.USE = "SegmentLine";
appearance = Appearance878;

let IndexedLineSet879 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet879.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate880 = browser.currentScene.createNode("Coordinate");
Coordinate880.point = new X3D.MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
coord = Coordinate880;

geometry = IndexedLineSet879;

HAnimSegment876YYY.children = new X3D.MFNode();

HAnimSegment876ZZZ.children[0] = Shape877;

let Transform881 = browser.currentScene.createNode("Transform");
Transform881.translation = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let Shape882 = browser.currentScene.createNode("Shape");
Shape882.USE = "jointbox";
Transform881YYY.child = new X3D.undefined();

Transform881ZZZ.child[0] = Shape882;

HAnimSegment876ZZZ.children[1] = Transform881;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite883.DEF = "Joe_l_carpal_distal_phalanx_4_tip";
HAnimSite883.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "sitebox";
HAnimSite883YYY.children = new X3D.MFNode();

HAnimSite883ZZZ.children[0] = Shape884;

HAnimSegment876ZZZ.children[2] = HAnimSite883;

HAnimJoint875YYY.children = new X3D.MFNode();

HAnimJoint875ZZZ.children[0] = HAnimSegment876;

HAnimJoint867ZZZ.children[1] = HAnimJoint875;

HAnimJoint859ZZZ.children[1] = HAnimJoint867;

HAnimJoint851ZZZ.children[1] = HAnimJoint859;

HAnimJoint741ZZZ.children[4] = HAnimJoint851;

let HAnimJoint885 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint885.name = "l_carpometacarpal_5";
HAnimJoint885.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint885.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint885.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint885.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimSegment886 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment886.name = "l_metacarpal_5";
HAnimSegment886.DEF = "Joe_l_metacarpal_5";
let Shape887 = browser.currentScene.createNode("Shape");
let Appearance888 = browser.currentScene.createNode("Appearance");
Appearance888.USE = "SegmentLine";
appearance = Appearance888;

let IndexedLineSet889 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet889.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate890 = browser.currentScene.createNode("Coordinate");
Coordinate890.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate890;

geometry = IndexedLineSet889;

HAnimSegment886YYY.children = new X3D.MFNode();

HAnimSegment886ZZZ.children[0] = Shape887;

let Transform891 = browser.currentScene.createNode("Transform");
Transform891.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "jointbox";
Transform891YYY.child = new X3D.undefined();

Transform891ZZZ.child[0] = Shape892;

HAnimSegment886ZZZ.children[1] = Transform891;

HAnimJoint885YYY.children = new X3D.MFNode();

HAnimJoint885ZZZ.children[0] = HAnimSegment886;

let HAnimJoint893 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint893.name = "l_metacarpophalangeal_5";
HAnimJoint893.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint893.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint893.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint893.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment894 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment894.name = "l_carpal_proximal_phalanx_5";
HAnimSegment894.DEF = "Joe_l_carpal_proximal_phalanx_5";
let Shape895 = browser.currentScene.createNode("Shape");
let Appearance896 = browser.currentScene.createNode("Appearance");
Appearance896.USE = "SegmentLine";
appearance = Appearance896;

let IndexedLineSet897 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet897.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate898 = browser.currentScene.createNode("Coordinate");
Coordinate898.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate898;

geometry = IndexedLineSet897;

HAnimSegment894YYY.children = new X3D.MFNode();

HAnimSegment894ZZZ.children[0] = Shape895;

let Transform899 = browser.currentScene.createNode("Transform");
Transform899.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Shape900 = browser.currentScene.createNode("Shape");
Shape900.USE = "jointbox";
Transform899YYY.child = new X3D.undefined();

Transform899ZZZ.child[0] = Shape900;

HAnimSegment894ZZZ.children[1] = Transform899;

HAnimJoint893YYY.children = new X3D.MFNode();

HAnimJoint893ZZZ.children[0] = HAnimSegment894;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint901.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint901.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint901.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint901.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment902 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment902.name = "l_carpal_middle_phalanx_5";
HAnimSegment902.DEF = "Joe_l_carpal_middle_phalanx_5";
let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Shape904 = browser.currentScene.createNode("Shape");
Shape904.USE = "jointbox";
Transform903YYY.child = new X3D.undefined();

Transform903ZZZ.child[0] = Shape904;

HAnimSegment902YYY.children = new X3D.MFNode();

HAnimSegment902ZZZ.children[0] = Transform903;

let Shape905 = browser.currentScene.createNode("Shape");
let Appearance906 = browser.currentScene.createNode("Appearance");
Appearance906.USE = "SegmentLine";
appearance = Appearance906;

let IndexedLineSet907 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet907.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate908;

geometry = IndexedLineSet907;

HAnimSegment902ZZZ.children[1] = Shape905;

HAnimJoint901YYY.children = new X3D.MFNode();

HAnimJoint901ZZZ.children[0] = HAnimSegment902;

let HAnimJoint909 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint909.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint909.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint909.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint909.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint909.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment910 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment910.name = "l_carpal_distal_phalanx_5";
HAnimSegment910.DEF = "Joe_l_carpal_distal_phalanx_5";
let Shape911 = browser.currentScene.createNode("Shape");
let Appearance912 = browser.currentScene.createNode("Appearance");
Appearance912.USE = "SegmentLine";
appearance = Appearance912;

let IndexedLineSet913 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet913.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate914 = browser.currentScene.createNode("Coordinate");
Coordinate914.point = new X3D.MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
coord = Coordinate914;

geometry = IndexedLineSet913;

HAnimSegment910YYY.children = new X3D.MFNode();

HAnimSegment910ZZZ.children[0] = Shape911;

let Transform915 = browser.currentScene.createNode("Transform");
Transform915.translation = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let Shape916 = browser.currentScene.createNode("Shape");
Shape916.USE = "jointbox";
Transform915YYY.child = new X3D.undefined();

Transform915ZZZ.child[0] = Shape916;

HAnimSegment910ZZZ.children[1] = Transform915;

let HAnimSite917 = browser.currentScene.createNode("HAnimSite");
HAnimSite917.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite917.DEF = "Joe_l_carpal_distal_phalanx_5_tip";
HAnimSite917.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "sitebox";
HAnimSite917YYY.children = new X3D.MFNode();

HAnimSite917ZZZ.children[0] = Shape918;

HAnimSegment910ZZZ.children[2] = HAnimSite917;

HAnimJoint909YYY.children = new X3D.MFNode();

HAnimJoint909ZZZ.children[0] = HAnimSegment910;

HAnimJoint901ZZZ.children[1] = HAnimJoint909;

HAnimJoint893ZZZ.children[1] = HAnimJoint901;

HAnimJoint885ZZZ.children[1] = HAnimJoint893;

HAnimJoint741ZZZ.children[5] = HAnimJoint885;

HAnimJoint719ZZZ.children[1] = HAnimJoint741;

HAnimJoint695ZZZ.children[1] = HAnimJoint719;

HAnimJoint679ZZZ.children[1] = HAnimJoint695;

HAnimJoint669ZZZ.children[1] = HAnimJoint679;

HAnimJoint553ZZZ.children[2] = HAnimJoint669;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.name = "r_sternoclavicular";
HAnimJoint919.DEF = "Joe_r_sternoclavicular";
HAnimJoint919.center = new X3D.SFVec3f([-0.03,1.46,0]);
HAnimJoint919.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint919.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment920 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment920.name = "r_clavicle";
HAnimSegment920.DEF = "Joe_r_clavicle";
let Shape921 = browser.currentScene.createNode("Shape");
let Appearance922 = browser.currentScene.createNode("Appearance");
Appearance922.USE = "SegmentLine";
appearance = Appearance922;

let IndexedLineSet923 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet923.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate924 = browser.currentScene.createNode("Coordinate");
Coordinate924.point = new X3D.MFVec3f([-0.03,1.46,0.02,-0.09,1.41,-0.09]);
coord = Coordinate924;

geometry = IndexedLineSet923;

HAnimSegment920YYY.children = new X3D.MFNode();

HAnimSegment920ZZZ.children[0] = Shape921;

let Transform925 = browser.currentScene.createNode("Transform");
Transform925.translation = new X3D.SFVec3f([-0.03,1.46,0.02]);
let Shape926 = browser.currentScene.createNode("Shape");
Shape926.USE = "jointbox";
Transform925YYY.child = new X3D.undefined();

Transform925ZZZ.child[0] = Shape926;

HAnimSegment920ZZZ.children[1] = Transform925;

let HAnimSite927 = browser.currentScene.createNode("HAnimSite");
HAnimSite927.name = "r_clavicle_pt";
HAnimSite927.DEF = "Joe_r_clavicle_pt";
HAnimSite927.translation = new X3D.SFVec3f([-0.03,1.46,0.035]);
let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "sitebox";
HAnimSite927YYY.children = new X3D.MFNode();

HAnimSite927ZZZ.children[0] = Shape928;

HAnimSegment920ZZZ.children[2] = HAnimSite927;

HAnimJoint919YYY.children = new X3D.MFNode();

HAnimJoint919ZZZ.children[0] = HAnimSegment920;

let HAnimJoint929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint929.name = "r_acromioclavicular";
HAnimJoint929.DEF = "Joe_r_acromioclavicular";
HAnimJoint929.center = new X3D.SFVec3f([-0.09,1.41,-0.11]);
HAnimJoint929.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint929.skinCoordWeight = new X3D.MFFloat([1,0.9]);
let HAnimSegment930 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment930.name = "r_scapula";
HAnimSegment930.DEF = "Joe_r_scapula";
let Shape931 = browser.currentScene.createNode("Shape");
let Appearance932 = browser.currentScene.createNode("Appearance");
Appearance932.USE = "SegmentLine";
appearance = Appearance932;

let IndexedLineSet933 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet933.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate934 = browser.currentScene.createNode("Coordinate");
Coordinate934.point = new X3D.MFVec3f([-0.09,1.41,-0.09,-0.2,1.44,-0.04]);
coord = Coordinate934;

geometry = IndexedLineSet933;

HAnimSegment930YYY.children = new X3D.MFNode();

HAnimSegment930ZZZ.children[0] = Shape931;

let Transform935 = browser.currentScene.createNode("Transform");
Transform935.translation = new X3D.SFVec3f([-0.09,1.41,-0.09]);
let Shape936 = browser.currentScene.createNode("Shape");
Shape936.USE = "jointbox";
Transform935YYY.child = new X3D.undefined();

Transform935ZZZ.child[0] = Shape936;

HAnimSegment930ZZZ.children[1] = Transform935;

let Transform937 = browser.currentScene.createNode("Transform");
Transform937.translation = new X3D.SFVec3f([-0.11,1.427,-0.1375]);
let Shape938 = browser.currentScene.createNode("Shape");
Shape938.USE = "skinsphere";
Transform937YYY.child = new X3D.undefined();

Transform937ZZZ.child[0] = Shape938;

HAnimSegment930ZZZ.children[2] = Transform937;

let HAnimSite939 = browser.currentScene.createNode("HAnimSite");
HAnimSite939.name = "r_acromion_pt";
HAnimSite939.DEF = "Joe_r_acromion_pt";
HAnimSite939.translation = new X3D.SFVec3f([-0.178,1.4825,-0.0625]);
let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "sitebox";
HAnimSite939YYY.children = new X3D.MFNode();

HAnimSite939ZZZ.children[0] = Shape940;

HAnimSegment930ZZZ.children[3] = HAnimSite939;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.name = "r_axilla_proximal_pt";
HAnimSite941.DEF = "Joe_r_axilla_proximal_pt";
HAnimSite941.translation = new X3D.SFVec3f([-0.17,1.38,0.007]);
let Shape942 = browser.currentScene.createNode("Shape");
Shape942.USE = "sitebox";
HAnimSite941YYY.children = new X3D.MFNode();

HAnimSite941ZZZ.children[0] = Shape942;

HAnimSegment930ZZZ.children[4] = HAnimSite941;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.name = "r_axilla_distal_pt";
HAnimSite943.DEF = "Joe_r_axilla_distal_pt";
HAnimSite943.translation = new X3D.SFVec3f([-0.16,1.38,-0.127]);
let Shape944 = browser.currentScene.createNode("Shape");
Shape944.USE = "sitebox";
HAnimSite943YYY.children = new X3D.MFNode();

HAnimSite943ZZZ.children[0] = Shape944;

HAnimSegment930ZZZ.children[5] = HAnimSite943;

HAnimJoint929YYY.children = new X3D.MFNode();

HAnimJoint929ZZZ.children[0] = HAnimSegment930;

let HAnimJoint945 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint945.name = "r_shoulder";
HAnimJoint945.DEF = "Joe_r_shoulder";
HAnimJoint945.center = new X3D.SFVec3f([-0.2,1.44,-0.04]);
HAnimJoint945.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint945.skinCoordWeight = new X3D.MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]);
let HAnimSegment946 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment946.name = "r_upperarm";
HAnimSegment946.DEF = "Joe_r_upperarm";
let Transform947 = browser.currentScene.createNode("Transform");
Transform947.translation = new X3D.SFVec3f([-0.2,1.44,-0.04]);
let Shape948 = browser.currentScene.createNode("Shape");
Shape948.USE = "jointbox";
Transform947YYY.child = new X3D.undefined();

Transform947ZZZ.child[0] = Shape948;

HAnimSegment946YYY.children = new X3D.MFNode();

HAnimSegment946ZZZ.children[0] = Transform947;

let Shape949 = browser.currentScene.createNode("Shape");
let Appearance950 = browser.currentScene.createNode("Appearance");
Appearance950.USE = "SegmentLine";
appearance = Appearance950;

let IndexedLineSet951 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet951.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new X3D.MFVec3f([-0.2,1.44,-0.04,-0.2,1.1388,-0.04]);
coord = Coordinate952;

geometry = IndexedLineSet951;

HAnimSegment946ZZZ.children[1] = Shape949;

let Transform953 = browser.currentScene.createNode("Transform");
Transform953.translation = new X3D.SFVec3f([-0.178,1.4825,-0.0625]);
let Shape954 = browser.currentScene.createNode("Shape");
Shape954.USE = "skinsphere";
Transform953YYY.child = new X3D.undefined();

Transform953ZZZ.child[0] = Shape954;

HAnimSegment946ZZZ.children[2] = Transform953;

let Transform955 = browser.currentScene.createNode("Transform");
Transform955.translation = new X3D.SFVec3f([-0.17,1.38,0.007]);
let Shape956 = browser.currentScene.createNode("Shape");
Shape956.USE = "skinsphere";
Transform955YYY.child = new X3D.undefined();

Transform955ZZZ.child[0] = Shape956;

HAnimSegment946ZZZ.children[3] = Transform955;

let Transform957 = browser.currentScene.createNode("Transform");
Transform957.translation = new X3D.SFVec3f([-0.16,1.38,-0.127]);
let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "skinsphere";
Transform957YYY.child = new X3D.undefined();

Transform957ZZZ.child[0] = Shape958;

HAnimSegment946ZZZ.children[4] = Transform957;

let Transform959 = browser.currentScene.createNode("Transform");
Transform959.translation = new X3D.SFVec3f([-0.235,1.42,-0.0625]);
let Shape960 = browser.currentScene.createNode("Shape");
Shape960.USE = "skinsphere";
Transform959YYY.child = new X3D.undefined();

Transform959ZZZ.child[0] = Shape960;

HAnimSegment946ZZZ.children[5] = Transform959;

let Transform961 = browser.currentScene.createNode("Transform");
Transform961.translation = new X3D.SFVec3f([-0.23,1.235,-0.04]);
let Shape962 = browser.currentScene.createNode("Shape");
Shape962.USE = "skinsphere";
Transform961YYY.child = new X3D.undefined();

Transform961ZZZ.child[0] = Shape962;

HAnimSegment946ZZZ.children[6] = Transform961;

let Transform963 = browser.currentScene.createNode("Transform");
Transform963.translation = new X3D.SFVec3f([-0.16,1.23,-0.04]);
let Shape964 = browser.currentScene.createNode("Shape");
Shape964.USE = "skinsphere";
Transform963YYY.child = new X3D.undefined();

Transform963ZZZ.child[0] = Shape964;

HAnimSegment946ZZZ.children[7] = Transform963;

let Transform965 = browser.currentScene.createNode("Transform");
Transform965.translation = new X3D.SFVec3f([-0.2,1.23,-0.105]);
let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "skinsphere";
Transform965YYY.child = new X3D.undefined();

Transform965ZZZ.child[0] = Shape966;

HAnimSegment946ZZZ.children[8] = Transform965;

let Transform967 = browser.currentScene.createNode("Transform");
Transform967.translation = new X3D.SFVec3f([-0.2,1.235,0.02]);
let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "skinsphere";
Transform967YYY.child = new X3D.undefined();

Transform967ZZZ.child[0] = Shape968;

HAnimSegment946ZZZ.children[9] = Transform967;

let HAnimSite969 = browser.currentScene.createNode("HAnimSite");
HAnimSite969.name = "r_humeral_medial_epicondyle_pt";
HAnimSite969.DEF = "Joe_r_humeral_medial_epicondyle_pt";
HAnimSite969.translation = new X3D.SFVec3f([-0.165,1.1388,-0.04]);
let Shape970 = browser.currentScene.createNode("Shape");
Shape970.USE = "sitebox";
HAnimSite969YYY.children = new X3D.MFNode();

HAnimSite969ZZZ.children[0] = Shape970;

HAnimSegment946ZZZ.children[10] = HAnimSite969;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.name = "r_radiale_pt";
HAnimSite971.DEF = "Joe_r_radiale_pt";
HAnimSite971.translation = new X3D.SFVec3f([-0.23,1.133,-0.055]);
let Shape972 = browser.currentScene.createNode("Shape");
Shape972.USE = "sitebox";
HAnimSite971YYY.children = new X3D.MFNode();

HAnimSite971ZZZ.children[0] = Shape972;

HAnimSegment946ZZZ.children[11] = HAnimSite971;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite973.DEF = "Joe_r_humeral_lateral_epicondyle_pt";
HAnimSite973.translation = new X3D.SFVec3f([-0.244,1.1388,-0.04]);
let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "sitebox";
HAnimSite973YYY.children = new X3D.MFNode();

HAnimSite973ZZZ.children[0] = Shape974;

HAnimSegment946ZZZ.children[12] = HAnimSite973;

HAnimJoint945YYY.children = new X3D.MFNode();

HAnimJoint945ZZZ.children[0] = HAnimSegment946;

let HAnimJoint975 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint975.name = "r_elbow";
HAnimJoint975.DEF = "Joe_r_elbow";
HAnimJoint975.center = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
HAnimJoint975.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint975.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment976 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment976.name = "r_forearm";
HAnimSegment976.DEF = "Joe_r_forearm";
let Shape977 = browser.currentScene.createNode("Shape");
let Appearance978 = browser.currentScene.createNode("Appearance");
Appearance978.USE = "SegmentLine";
appearance = Appearance978;

let IndexedLineSet979 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet979.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate980 = browser.currentScene.createNode("Coordinate");
Coordinate980.point = new X3D.MFVec3f([-0.2,1.1388,-0.04,-0.2,0.89,-0.04]);
coord = Coordinate980;

geometry = IndexedLineSet979;

HAnimSegment976YYY.children = new X3D.MFNode();

HAnimSegment976ZZZ.children[0] = Shape977;

let Transform981 = browser.currentScene.createNode("Transform");
Transform981.translation = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "jointbox";
Transform981YYY.child = new X3D.undefined();

Transform981ZZZ.child[0] = Shape982;

HAnimSegment976ZZZ.children[1] = Transform981;

let Transform983 = browser.currentScene.createNode("Transform");
Transform983.translation = new X3D.SFVec3f([-0.2,1.1388,0.013]);
let Shape984 = browser.currentScene.createNode("Shape");
Shape984.USE = "skinsphere";
Transform983YYY.child = new X3D.undefined();

Transform983ZZZ.child[0] = Shape984;

HAnimSegment976ZZZ.children[2] = Transform983;

let Transform985 = browser.currentScene.createNode("Transform");
Transform985.translation = new X3D.SFVec3f([-0.225,1,-0.01]);
let Shape986 = browser.currentScene.createNode("Shape");
Shape986.USE = "skinsphere";
Transform985YYY.child = new X3D.undefined();

Transform985ZZZ.child[0] = Shape986;

HAnimSegment976ZZZ.children[3] = Transform985;

let Transform987 = browser.currentScene.createNode("Transform");
Transform987.translation = new X3D.SFVec3f([-0.225,1,-0.07]);
let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "skinsphere";
Transform987YYY.child = new X3D.undefined();

Transform987ZZZ.child[0] = Shape988;

HAnimSegment976ZZZ.children[4] = Transform987;

let Transform989 = browser.currentScene.createNode("Transform");
Transform989.translation = new X3D.SFVec3f([-0.185,1,-0.01]);
let Shape990 = browser.currentScene.createNode("Shape");
Shape990.USE = "skinsphere";
Transform989YYY.child = new X3D.undefined();

Transform989ZZZ.child[0] = Shape990;

HAnimSegment976ZZZ.children[5] = Transform989;

let Transform991 = browser.currentScene.createNode("Transform");
Transform991.translation = new X3D.SFVec3f([-0.185,1,-0.07]);
let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "skinsphere";
Transform991YYY.child = new X3D.undefined();

Transform991ZZZ.child[0] = Shape992;

HAnimSegment976ZZZ.children[6] = Transform991;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.name = "r_radial_styloid_pt";
HAnimSite993.DEF = "Joe_r_radial_styloid_pt";
HAnimSite993.translation = new X3D.SFVec3f([-0.2,0.9,-0.015]);
let Shape994 = browser.currentScene.createNode("Shape");
Shape994.USE = "sitebox";
HAnimSite993YYY.children = new X3D.MFNode();

HAnimSite993ZZZ.children[0] = Shape994;

HAnimSegment976ZZZ.children[7] = HAnimSite993;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.name = "r_olecranon_pt";
HAnimSite995.DEF = "Joe_r_olecranon_pt";
HAnimSite995.translation = new X3D.SFVec3f([-0.2,1.1388,-0.08]);
let Shape996 = browser.currentScene.createNode("Shape");
Shape996.USE = "sitebox";
HAnimSite995YYY.children = new X3D.MFNode();

HAnimSite995ZZZ.children[0] = Shape996;

HAnimSegment976ZZZ.children[8] = HAnimSite995;

HAnimJoint975YYY.children = new X3D.MFNode();

HAnimJoint975ZZZ.children[0] = HAnimSegment976;

let HAnimJoint997 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint997.name = "r_radiocarpal";
HAnimJoint997.DEF = "Joe_r_radiocarpal";
HAnimJoint997.center = new X3D.SFVec3f([-0.2,0.89,-0.04]);
HAnimJoint997.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint997.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment998 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment998.name = "r_carpal";
HAnimSegment998.DEF = "Joe_r_carpal";
let Shape999 = browser.currentScene.createNode("Shape");
let Appearance1000 = browser.currentScene.createNode("Appearance");
Appearance1000.USE = "SegmentLine";
appearance = Appearance1000;

let IndexedLineSet1001 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1001.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate1002 = browser.currentScene.createNode("Coordinate");
Coordinate1002.point = new X3D.MFVec3f([-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]);
coord = Coordinate1002;

geometry = IndexedLineSet1001;

HAnimSegment998YYY.children = new X3D.MFNode();

HAnimSegment998ZZZ.children[0] = Shape999;

let Transform1003 = browser.currentScene.createNode("Transform");
Transform1003.translation = new X3D.SFVec3f([-0.2,0.89,-0.04]);
let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "jointbox";
Transform1003YYY.child = new X3D.undefined();

Transform1003ZZZ.child[0] = Shape1004;

HAnimSegment998ZZZ.children[1] = Transform1003;

let HAnimSite1005 = browser.currentScene.createNode("HAnimSite");
HAnimSite1005.name = "r_ulnar_styloid_pt";
HAnimSite1005.DEF = "Joe_r_ulnar_styloid_pt";
HAnimSite1005.translation = new X3D.SFVec3f([-0.2,0.9,-0.085]);
let Shape1006 = browser.currentScene.createNode("Shape");
Shape1006.USE = "sitebox";
HAnimSite1005YYY.children = new X3D.MFNode();

HAnimSite1005ZZZ.children[0] = Shape1006;

HAnimSegment998ZZZ.children[2] = HAnimSite1005;

HAnimJoint997YYY.children = new X3D.MFNode();

HAnimJoint997ZZZ.children[0] = HAnimSegment998;

let HAnimJoint1007 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1007.name = "r_carpometacarpal_1";
HAnimJoint1007.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint1007.center = new X3D.SFVec3f([-0.2,0.85,0]);
HAnimJoint1007.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint1007.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1008 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1008.name = "r_metacarpal_1";
HAnimSegment1008.DEF = "Joe_r_metacarpal_1";
let Shape1009 = browser.currentScene.createNode("Shape");
let Appearance1010 = browser.currentScene.createNode("Appearance");
Appearance1010.USE = "SegmentLine";
appearance = Appearance1010;

let IndexedLineSet1011 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1011.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1012 = browser.currentScene.createNode("Coordinate");
Coordinate1012.point = new X3D.MFVec3f([-0.2,0.85,0,-0.2,0.82,0.03]);
coord = Coordinate1012;

geometry = IndexedLineSet1011;

HAnimSegment1008YYY.children = new X3D.MFNode();

HAnimSegment1008ZZZ.children[0] = Shape1009;

let Transform1013 = browser.currentScene.createNode("Transform");
Transform1013.translation = new X3D.SFVec3f([-0.2,0.85,0]);
let Shape1014 = browser.currentScene.createNode("Shape");
Shape1014.USE = "jointbox";
Transform1013YYY.child = new X3D.undefined();

Transform1013ZZZ.child[0] = Shape1014;

HAnimSegment1008ZZZ.children[1] = Transform1013;

HAnimJoint1007YYY.children = new X3D.MFNode();

HAnimJoint1007ZZZ.children[0] = HAnimSegment1008;

let HAnimJoint1015 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1015.name = "r_metacarpophalangeal_1";
HAnimJoint1015.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint1015.center = new X3D.SFVec3f([-0.2,0.82,0.03]);
HAnimJoint1015.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint1015.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimSegment1016 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1016.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1016.DEF = "Joe_r_carpal_proximal_phalanx_1";
let Shape1017 = browser.currentScene.createNode("Shape");
let Appearance1018 = browser.currentScene.createNode("Appearance");
Appearance1018.USE = "SegmentLine";
appearance = Appearance1018;

let IndexedLineSet1019 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1019.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1020 = browser.currentScene.createNode("Coordinate");
Coordinate1020.point = new X3D.MFVec3f([-0.2,0.82,0.03,-0.2,0.8,0.05]);
coord = Coordinate1020;

geometry = IndexedLineSet1019;

HAnimSegment1016YYY.children = new X3D.MFNode();

HAnimSegment1016ZZZ.children[0] = Shape1017;

let Transform1021 = browser.currentScene.createNode("Transform");
Transform1021.translation = new X3D.SFVec3f([-0.2,0.82,0.03]);
let Shape1022 = browser.currentScene.createNode("Shape");
Shape1022.USE = "jointbox";
Transform1021YYY.child = new X3D.undefined();

Transform1021ZZZ.child[0] = Shape1022;

HAnimSegment1016ZZZ.children[1] = Transform1021;

HAnimJoint1015YYY.children = new X3D.MFNode();

HAnimJoint1015ZZZ.children[0] = HAnimSegment1016;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.name = "r_carpal_interphalangeal_1";
HAnimJoint1023.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint1023.center = new X3D.SFVec3f([-0.2,0.8,0.05]);
HAnimJoint1023.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint1023.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1024 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1024.name = "r_carpal_distal_phalanx_1";
HAnimSegment1024.DEF = "Joe_r_carpal_distal_phalanx_1";
let Shape1025 = browser.currentScene.createNode("Shape");
let Appearance1026 = browser.currentScene.createNode("Appearance");
Appearance1026.USE = "SegmentLine";
appearance = Appearance1026;

let IndexedLineSet1027 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1027.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1028 = browser.currentScene.createNode("Coordinate");
Coordinate1028.point = new X3D.MFVec3f([-0.2,0.8,0.05,-0.2,0.78,0.07]);
coord = Coordinate1028;

geometry = IndexedLineSet1027;

HAnimSegment1024YYY.children = new X3D.MFNode();

HAnimSegment1024ZZZ.children[0] = Shape1025;

let Transform1029 = browser.currentScene.createNode("Transform");
Transform1029.DEF = "Thumbnail";
Transform1029.translation = new X3D.SFVec3f([-0.2,0.785,0.075]);
let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "skinsphere";
Transform1029YYY.child = new X3D.undefined();

Transform1029ZZZ.child[0] = Shape1030;

HAnimSegment1024ZZZ.children[1] = Transform1029;

let Transform1031 = browser.currentScene.createNode("Transform");
Transform1031.translation = new X3D.SFVec3f([-0.2,0.8,0.05]);
let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "jointbox";
Transform1031YYY.child = new X3D.undefined();

Transform1031ZZZ.child[0] = Shape1032;

HAnimSegment1024ZZZ.children[2] = Transform1031;

let HAnimSite1033 = browser.currentScene.createNode("HAnimSite");
HAnimSite1033.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1033.DEF = "Joe_r_carpal_distal_phalanx_1_tip";
HAnimSite1033.translation = new X3D.SFVec3f([-0.2,0.78,0.07]);
let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "sitebox";
HAnimSite1033YYY.children = new X3D.MFNode();

HAnimSite1033ZZZ.children[0] = Shape1034;

HAnimSegment1024ZZZ.children[3] = HAnimSite1033;

HAnimJoint1023YYY.children = new X3D.MFNode();

HAnimJoint1023ZZZ.children[0] = HAnimSegment1024;

HAnimJoint1015ZZZ.children[1] = HAnimJoint1023;

HAnimJoint1007ZZZ.children[1] = HAnimJoint1015;

HAnimJoint997ZZZ.children[1] = HAnimJoint1007;

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.name = "r_carpometacarpal_2";
HAnimJoint1035.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint1035.center = new X3D.SFVec3f([-0.2,0.84,-0.015]);
HAnimJoint1035.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint1035.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1036 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1036.name = "r_metacarpal_2";
HAnimSegment1036.DEF = "Joe_r_metacarpal_2";
let Shape1037 = browser.currentScene.createNode("Shape");
let Appearance1038 = browser.currentScene.createNode("Appearance");
Appearance1038.USE = "SegmentLine";
appearance = Appearance1038;

let IndexedLineSet1039 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1039.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1040 = browser.currentScene.createNode("Coordinate");
Coordinate1040.point = new X3D.MFVec3f([-0.2,0.84,-0.015,-0.2,0.793,-0.015]);
coord = Coordinate1040;

geometry = IndexedLineSet1039;

HAnimSegment1036YYY.children = new X3D.MFNode();

HAnimSegment1036ZZZ.children[0] = Shape1037;

let Transform1041 = browser.currentScene.createNode("Transform");
Transform1041.translation = new X3D.SFVec3f([-0.2,0.84,-0.015]);
let Shape1042 = browser.currentScene.createNode("Shape");
Shape1042.USE = "jointbox";
Transform1041YYY.child = new X3D.undefined();

Transform1041ZZZ.child[0] = Shape1042;

HAnimSegment1036ZZZ.children[1] = Transform1041;

let HAnimSite1043 = browser.currentScene.createNode("HAnimSite");
HAnimSite1043.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1043.DEF = "Joe_r_metacarpal_phalanx_2_pt";
HAnimSite1043.translation = new X3D.SFVec3f([-0.2,0.793,-0.005]);
let Shape1044 = browser.currentScene.createNode("Shape");
Shape1044.USE = "sitebox";
HAnimSite1043YYY.children = new X3D.MFNode();

HAnimSite1043ZZZ.children[0] = Shape1044;

HAnimSegment1036ZZZ.children[2] = HAnimSite1043;

HAnimJoint1035YYY.children = new X3D.MFNode();

HAnimJoint1035ZZZ.children[0] = HAnimSegment1036;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.name = "r_metacarpophalangeal_2";
HAnimJoint1045.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint1045.center = new X3D.SFVec3f([-0.2,0.793,-0.015]);
HAnimJoint1045.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint1045.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimSegment1046 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1046.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1046.DEF = "Joe_r_carpal_proximal_phalanx_2";
let Shape1047 = browser.currentScene.createNode("Shape");
let Appearance1048 = browser.currentScene.createNode("Appearance");
Appearance1048.USE = "SegmentLine";
appearance = Appearance1048;

let IndexedLineSet1049 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1049.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1050 = browser.currentScene.createNode("Coordinate");
Coordinate1050.point = new X3D.MFVec3f([-0.2,0.793,-0.015,-0.2,0.745,-0.015]);
coord = Coordinate1050;

geometry = IndexedLineSet1049;

HAnimSegment1046YYY.children = new X3D.MFNode();

HAnimSegment1046ZZZ.children[0] = Shape1047;

let Transform1051 = browser.currentScene.createNode("Transform");
Transform1051.translation = new X3D.SFVec3f([-0.2,0.793,-0.015]);
let Shape1052 = browser.currentScene.createNode("Shape");
Shape1052.USE = "jointbox";
Transform1051YYY.child = new X3D.undefined();

Transform1051ZZZ.child[0] = Shape1052;

HAnimSegment1046ZZZ.children[1] = Transform1051;

HAnimJoint1045YYY.children = new X3D.MFNode();

HAnimJoint1045ZZZ.children[0] = HAnimSegment1046;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1053.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint1053.center = new X3D.SFVec3f([-0.2,0.745,-0.015]);
HAnimJoint1053.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint1053.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1054 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1054.name = "r_carpal_middle_phalanx_2";
HAnimSegment1054.DEF = "Joe_r_carpal_middle_phalanx_2";
let Shape1055 = browser.currentScene.createNode("Shape");
let Appearance1056 = browser.currentScene.createNode("Appearance");
Appearance1056.USE = "SegmentLine";
appearance = Appearance1056;

let IndexedLineSet1057 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1057.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1058 = browser.currentScene.createNode("Coordinate");
Coordinate1058.point = new X3D.MFVec3f([-0.2,0.745,-0.015,-0.2,0.72,-0.015]);
coord = Coordinate1058;

geometry = IndexedLineSet1057;

HAnimSegment1054YYY.children = new X3D.MFNode();

HAnimSegment1054ZZZ.children[0] = Shape1055;

let Transform1059 = browser.currentScene.createNode("Transform");
Transform1059.translation = new X3D.SFVec3f([-0.2,0.745,-0.015]);
let Shape1060 = browser.currentScene.createNode("Shape");
Shape1060.USE = "jointbox";
Transform1059YYY.child = new X3D.undefined();

Transform1059ZZZ.child[0] = Shape1060;

HAnimSegment1054ZZZ.children[1] = Transform1059;

HAnimJoint1053YYY.children = new X3D.MFNode();

HAnimJoint1053ZZZ.children[0] = HAnimSegment1054;

let HAnimJoint1061 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1061.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1061.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint1061.center = new X3D.SFVec3f([-0.2,0.72,-0.015]);
HAnimJoint1061.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint1061.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1062 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1062.name = "r_carpal_distal_phalanx_2";
HAnimSegment1062.DEF = "Joe_r_carpal_distal_phalanx_2";
let Shape1063 = browser.currentScene.createNode("Shape");
let Appearance1064 = browser.currentScene.createNode("Appearance");
Appearance1064.USE = "SegmentLine";
appearance = Appearance1064;

let IndexedLineSet1065 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1065.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1066 = browser.currentScene.createNode("Coordinate");
Coordinate1066.point = new X3D.MFVec3f([-0.2,0.72,-0.015,-0.2,0.695,-0.015]);
coord = Coordinate1066;

geometry = IndexedLineSet1065;

HAnimSegment1062YYY.children = new X3D.MFNode();

HAnimSegment1062ZZZ.children[0] = Shape1063;

let Transform1067 = browser.currentScene.createNode("Transform");
Transform1067.translation = new X3D.SFVec3f([-0.2,0.72,-0.015]);
let Shape1068 = browser.currentScene.createNode("Shape");
Shape1068.USE = "jointbox";
Transform1067YYY.child = new X3D.undefined();

Transform1067ZZZ.child[0] = Shape1068;

HAnimSegment1062ZZZ.children[1] = Transform1067;

let HAnimSite1069 = browser.currentScene.createNode("HAnimSite");
HAnimSite1069.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1069.DEF = "Joe_r_carpal_distal_phalanx_2_tip";
HAnimSite1069.translation = new X3D.SFVec3f([-0.2,0.695,-0.015]);
let Shape1070 = browser.currentScene.createNode("Shape");
Shape1070.USE = "sitebox";
HAnimSite1069YYY.children = new X3D.MFNode();

HAnimSite1069ZZZ.children[0] = Shape1070;

HAnimSegment1062ZZZ.children[2] = HAnimSite1069;

HAnimJoint1061YYY.children = new X3D.MFNode();

HAnimJoint1061ZZZ.children[0] = HAnimSegment1062;

HAnimJoint1053ZZZ.children[1] = HAnimJoint1061;

HAnimJoint1045ZZZ.children[1] = HAnimJoint1053;

HAnimJoint1035ZZZ.children[1] = HAnimJoint1045;

HAnimJoint997ZZZ.children[2] = HAnimJoint1035;

let HAnimJoint1071 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1071.name = "r_carpometacarpal_3";
HAnimJoint1071.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint1071.center = new X3D.SFVec3f([-0.2,0.835,-0.04]);
HAnimJoint1071.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint1071.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1072 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1072.name = "r_metacarpal_3";
HAnimSegment1072.DEF = "Joe_r_metacarpal_3";
let Shape1073 = browser.currentScene.createNode("Shape");
let Appearance1074 = browser.currentScene.createNode("Appearance");
Appearance1074.USE = "SegmentLine";
appearance = Appearance1074;

let IndexedLineSet1075 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1075.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1076 = browser.currentScene.createNode("Coordinate");
Coordinate1076.point = new X3D.MFVec3f([-0.2,0.835,-0.04,-0.2,0.788,-0.04]);
coord = Coordinate1076;

geometry = IndexedLineSet1075;

HAnimSegment1072YYY.children = new X3D.MFNode();

HAnimSegment1072ZZZ.children[0] = Shape1073;

let Transform1077 = browser.currentScene.createNode("Transform");
Transform1077.translation = new X3D.SFVec3f([-0.2,0.835,-0.04]);
let Shape1078 = browser.currentScene.createNode("Shape");
Shape1078.USE = "jointbox";
Transform1077YYY.child = new X3D.undefined();

Transform1077ZZZ.child[0] = Shape1078;

HAnimSegment1072ZZZ.children[1] = Transform1077;

HAnimJoint1071YYY.children = new X3D.MFNode();

HAnimJoint1071ZZZ.children[0] = HAnimSegment1072;

let HAnimJoint1079 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1079.name = "r_metacarpophalangeal_3";
HAnimJoint1079.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint1079.center = new X3D.SFVec3f([-0.2,0.788,-0.04]);
HAnimJoint1079.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint1079.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment1080 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1080.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1080.DEF = "Joe_r_carpal_proximal_phalanx_3";
let Shape1081 = browser.currentScene.createNode("Shape");
let Appearance1082 = browser.currentScene.createNode("Appearance");
Appearance1082.USE = "SegmentLine";
appearance = Appearance1082;

let IndexedLineSet1083 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1083.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1084 = browser.currentScene.createNode("Coordinate");
Coordinate1084.point = new X3D.MFVec3f([-0.2,0.788,-0.04,-0.2,0.74,-0.04]);
coord = Coordinate1084;

geometry = IndexedLineSet1083;

HAnimSegment1080YYY.children = new X3D.MFNode();

HAnimSegment1080ZZZ.children[0] = Shape1081;

let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new X3D.SFVec3f([-0.2,0.788,-0.04]);
let Shape1086 = browser.currentScene.createNode("Shape");
Shape1086.USE = "jointbox";
Transform1085YYY.child = new X3D.undefined();

Transform1085ZZZ.child[0] = Shape1086;

HAnimSegment1080ZZZ.children[1] = Transform1085;

HAnimJoint1079YYY.children = new X3D.MFNode();

HAnimJoint1079ZZZ.children[0] = HAnimSegment1080;

let HAnimJoint1087 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1087.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1087.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint1087.center = new X3D.SFVec3f([-0.2,0.74,-0.04]);
HAnimJoint1087.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint1087.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1088 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1088.name = "r_carpal_middle_phalanx_3";
HAnimSegment1088.DEF = "Joe_r_carpal_middle_phalanx_3";
let Shape1089 = browser.currentScene.createNode("Shape");
let Appearance1090 = browser.currentScene.createNode("Appearance");
Appearance1090.USE = "SegmentLine";
appearance = Appearance1090;

let IndexedLineSet1091 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1091.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1092 = browser.currentScene.createNode("Coordinate");
Coordinate1092.point = new X3D.MFVec3f([-0.2,0.74,-0.04,-0.2,0.7142,-0.04]);
coord = Coordinate1092;

geometry = IndexedLineSet1091;

HAnimSegment1088YYY.children = new X3D.MFNode();

HAnimSegment1088ZZZ.children[0] = Shape1089;

let Transform1093 = browser.currentScene.createNode("Transform");
Transform1093.translation = new X3D.SFVec3f([-0.2,0.74,-0.04]);
let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "jointbox";
Transform1093YYY.child = new X3D.undefined();

Transform1093ZZZ.child[0] = Shape1094;

HAnimSegment1088ZZZ.children[1] = Transform1093;

HAnimJoint1087YYY.children = new X3D.MFNode();

HAnimJoint1087ZZZ.children[0] = HAnimSegment1088;

let HAnimJoint1095 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1095.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1095.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint1095.center = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
HAnimJoint1095.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint1095.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1096 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1096.name = "r_carpal_distal_phalanx_3";
HAnimSegment1096.DEF = "Joe_r_carpal_distal_phalanx_3";
let Shape1097 = browser.currentScene.createNode("Shape");
let Appearance1098 = browser.currentScene.createNode("Appearance");
Appearance1098.USE = "SegmentLine";
appearance = Appearance1098;

let IndexedLineSet1099 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1099.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1100 = browser.currentScene.createNode("Coordinate");
Coordinate1100.point = new X3D.MFVec3f([-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]);
coord = Coordinate1100;

geometry = IndexedLineSet1099;

HAnimSegment1096YYY.children = new X3D.MFNode();

HAnimSegment1096ZZZ.children[0] = Shape1097;

let Transform1101 = browser.currentScene.createNode("Transform");
Transform1101.translation = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
let Shape1102 = browser.currentScene.createNode("Shape");
Shape1102.USE = "jointbox";
Transform1101YYY.child = new X3D.undefined();

Transform1101ZZZ.child[0] = Shape1102;

HAnimSegment1096ZZZ.children[1] = Transform1101;

let HAnimSite1103 = browser.currentScene.createNode("HAnimSite");
HAnimSite1103.name = "r_dactylion_pt";
HAnimSite1103.DEF = "Joe_r_dactylion_pt";
HAnimSite1103.translation = new X3D.SFVec3f([-0.2,0.68,-0.04]);
let Shape1104 = browser.currentScene.createNode("Shape");
Shape1104.USE = "sitebox";
HAnimSite1103YYY.children = new X3D.MFNode();

HAnimSite1103ZZZ.children[0] = Shape1104;

HAnimSegment1096ZZZ.children[2] = HAnimSite1103;

let HAnimSite1105 = browser.currentScene.createNode("HAnimSite");
HAnimSite1105.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1105.DEF = "Joe_r_carpal_distal_phalanx_3_tip";
HAnimSite1105.translation = new X3D.SFVec3f([-0.2,0.68,-0.04]);
let Shape1106 = browser.currentScene.createNode("Shape");
Shape1106.USE = "sitebox";
HAnimSite1105YYY.children = new X3D.MFNode();

HAnimSite1105ZZZ.children[0] = Shape1106;

HAnimSegment1096ZZZ.children[3] = HAnimSite1105;

HAnimJoint1095YYY.children = new X3D.MFNode();

HAnimJoint1095ZZZ.children[0] = HAnimSegment1096;

HAnimJoint1087ZZZ.children[1] = HAnimJoint1095;

HAnimJoint1079ZZZ.children[1] = HAnimJoint1087;

HAnimJoint1071ZZZ.children[1] = HAnimJoint1079;

HAnimJoint997ZZZ.children[3] = HAnimJoint1071;

let HAnimJoint1107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1107.name = "r_carpometacarpal_4";
HAnimJoint1107.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint1107.center = new X3D.SFVec3f([-0.2,0.835,-0.065]);
HAnimJoint1107.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint1107.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1108.name = "r_metacarpal_4";
HAnimSegment1108.DEF = "Joe_r_metacarpal_4";
let Shape1109 = browser.currentScene.createNode("Shape");
let Appearance1110 = browser.currentScene.createNode("Appearance");
Appearance1110.USE = "SegmentLine";
appearance = Appearance1110;

let IndexedLineSet1111 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1111.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1112 = browser.currentScene.createNode("Coordinate");
Coordinate1112.point = new X3D.MFVec3f([-0.2,0.835,-0.065,-0.2,0.793,-0.065]);
coord = Coordinate1112;

geometry = IndexedLineSet1111;

HAnimSegment1108YYY.children = new X3D.MFNode();

HAnimSegment1108ZZZ.children[0] = Shape1109;

let Transform1113 = browser.currentScene.createNode("Transform");
Transform1113.translation = new X3D.SFVec3f([-0.2,0.835,-0.065]);
let Shape1114 = browser.currentScene.createNode("Shape");
Shape1114.USE = "jointbox";
Transform1113YYY.child = new X3D.undefined();

Transform1113ZZZ.child[0] = Shape1114;

HAnimSegment1108ZZZ.children[1] = Transform1113;

HAnimJoint1107YYY.children = new X3D.MFNode();

HAnimJoint1107ZZZ.children[0] = HAnimSegment1108;

let HAnimJoint1115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1115.name = "r_metacarpophalangeal_4";
HAnimJoint1115.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint1115.center = new X3D.SFVec3f([-0.2,0.793,-0.065]);
HAnimJoint1115.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint1115.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment1116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1116.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1116.DEF = "Joe_r_carpal_proximal_phalanx_4";
let Shape1117 = browser.currentScene.createNode("Shape");
let Appearance1118 = browser.currentScene.createNode("Appearance");
Appearance1118.USE = "SegmentLine";
appearance = Appearance1118;

let IndexedLineSet1119 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1119.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1120 = browser.currentScene.createNode("Coordinate");
Coordinate1120.point = new X3D.MFVec3f([-0.2,0.793,-0.065,-0.2,0.74,-0.065]);
coord = Coordinate1120;

geometry = IndexedLineSet1119;

HAnimSegment1116YYY.children = new X3D.MFNode();

HAnimSegment1116ZZZ.children[0] = Shape1117;

let Transform1121 = browser.currentScene.createNode("Transform");
Transform1121.translation = new X3D.SFVec3f([-0.2,0.793,-0.065]);
let Shape1122 = browser.currentScene.createNode("Shape");
Shape1122.USE = "jointbox";
Transform1121YYY.child = new X3D.undefined();

Transform1121ZZZ.child[0] = Shape1122;

HAnimSegment1116ZZZ.children[1] = Transform1121;

HAnimJoint1115YYY.children = new X3D.MFNode();

HAnimJoint1115ZZZ.children[0] = HAnimSegment1116;

let HAnimJoint1123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1123.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1123.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint1123.center = new X3D.SFVec3f([-0.2,0.74,-0.065]);
HAnimJoint1123.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint1123.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1124.name = "r_carpal_middle_phalanx_4";
HAnimSegment1124.DEF = "Joe_r_carpal_middle_phalanx_4";
let Shape1125 = browser.currentScene.createNode("Shape");
let Appearance1126 = browser.currentScene.createNode("Appearance");
Appearance1126.USE = "SegmentLine";
appearance = Appearance1126;

let IndexedLineSet1127 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1127.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1128 = browser.currentScene.createNode("Coordinate");
Coordinate1128.point = new X3D.MFVec3f([-0.2,0.74,-0.065,-0.2,0.7177,-0.065]);
coord = Coordinate1128;

geometry = IndexedLineSet1127;

HAnimSegment1124YYY.children = new X3D.MFNode();

HAnimSegment1124ZZZ.children[0] = Shape1125;

let Transform1129 = browser.currentScene.createNode("Transform");
Transform1129.translation = new X3D.SFVec3f([-0.2,0.74,-0.065]);
let Shape1130 = browser.currentScene.createNode("Shape");
Shape1130.USE = "jointbox";
Transform1129YYY.child = new X3D.undefined();

Transform1129ZZZ.child[0] = Shape1130;

HAnimSegment1124ZZZ.children[1] = Transform1129;

HAnimJoint1123YYY.children = new X3D.MFNode();

HAnimJoint1123ZZZ.children[0] = HAnimSegment1124;

let HAnimJoint1131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1131.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1131.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint1131.center = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
HAnimJoint1131.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint1131.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1132.name = "r_carpal_distal_phalanx_4";
HAnimSegment1132.DEF = "Joe_r_carpal_distal_phalanx_4";
let Shape1133 = browser.currentScene.createNode("Shape");
let Appearance1134 = browser.currentScene.createNode("Appearance");
Appearance1134.USE = "SegmentLine";
appearance = Appearance1134;

let IndexedLineSet1135 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1135.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1136 = browser.currentScene.createNode("Coordinate");
Coordinate1136.point = new X3D.MFVec3f([-0.2,0.7177,-0.065,-0.2,0.695,-0.065]);
coord = Coordinate1136;

geometry = IndexedLineSet1135;

HAnimSegment1132YYY.children = new X3D.MFNode();

HAnimSegment1132ZZZ.children[0] = Shape1133;

let Transform1137 = browser.currentScene.createNode("Transform");
Transform1137.translation = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
let Shape1138 = browser.currentScene.createNode("Shape");
Shape1138.USE = "jointbox";
Transform1137YYY.child = new X3D.undefined();

Transform1137ZZZ.child[0] = Shape1138;

HAnimSegment1132ZZZ.children[1] = Transform1137;

let HAnimSite1139 = browser.currentScene.createNode("HAnimSite");
HAnimSite1139.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1139.DEF = "Joe_r_carpal_distal_phalanx_4_tip";
HAnimSite1139.translation = new X3D.SFVec3f([-0.2,0.695,-0.065]);
let Shape1140 = browser.currentScene.createNode("Shape");
Shape1140.USE = "sitebox";
HAnimSite1139YYY.children = new X3D.MFNode();

HAnimSite1139ZZZ.children[0] = Shape1140;

HAnimSegment1132ZZZ.children[2] = HAnimSite1139;

HAnimJoint1131YYY.children = new X3D.MFNode();

HAnimJoint1131ZZZ.children[0] = HAnimSegment1132;

HAnimJoint1123ZZZ.children[1] = HAnimJoint1131;

HAnimJoint1115ZZZ.children[1] = HAnimJoint1123;

HAnimJoint1107ZZZ.children[1] = HAnimJoint1115;

HAnimJoint997ZZZ.children[4] = HAnimJoint1107;

let HAnimJoint1141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1141.name = "r_carpometacarpal_5";
HAnimJoint1141.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint1141.center = new X3D.SFVec3f([-0.2,0.84,-0.085]);
HAnimJoint1141.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint1141.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimSegment1142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1142.name = "r_metacarpal_5";
HAnimSegment1142.DEF = "Joe_r_metacarpal_5";
let Shape1143 = browser.currentScene.createNode("Shape");
let Appearance1144 = browser.currentScene.createNode("Appearance");
Appearance1144.USE = "SegmentLine";
appearance = Appearance1144;

let IndexedLineSet1145 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1145.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1146 = browser.currentScene.createNode("Coordinate");
Coordinate1146.point = new X3D.MFVec3f([-0.2,0.84,-0.085,-0.2,0.79,-0.085]);
coord = Coordinate1146;

geometry = IndexedLineSet1145;

HAnimSegment1142YYY.children = new X3D.MFNode();

HAnimSegment1142ZZZ.children[0] = Shape1143;

let Transform1147 = browser.currentScene.createNode("Transform");
Transform1147.translation = new X3D.SFVec3f([-0.2,0.84,-0.085]);
let Shape1148 = browser.currentScene.createNode("Shape");
Shape1148.USE = "jointbox";
Transform1147YYY.child = new X3D.undefined();

Transform1147ZZZ.child[0] = Shape1148;

HAnimSegment1142ZZZ.children[1] = Transform1147;

let HAnimSite1149 = browser.currentScene.createNode("HAnimSite");
HAnimSite1149.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1149.DEF = "Joe_r_metacarpal_phalanx_5_pt";
HAnimSite1149.translation = new X3D.SFVec3f([-0.2,0.79,-0.095]);
let Shape1150 = browser.currentScene.createNode("Shape");
Shape1150.USE = "sitebox";
HAnimSite1149YYY.children = new X3D.MFNode();

HAnimSite1149ZZZ.children[0] = Shape1150;

HAnimSegment1142ZZZ.children[2] = HAnimSite1149;

HAnimJoint1141YYY.children = new X3D.MFNode();

HAnimJoint1141ZZZ.children[0] = HAnimSegment1142;

let HAnimJoint1151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1151.name = "r_metacarpophalangeal_5";
HAnimJoint1151.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint1151.center = new X3D.SFVec3f([-0.2,0.79,-0.085]);
HAnimJoint1151.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint1151.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment1152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1152.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1152.DEF = "Joe_r_carpal_proximal_phalanx_5";
let Shape1153 = browser.currentScene.createNode("Shape");
let Appearance1154 = browser.currentScene.createNode("Appearance");
Appearance1154.USE = "SegmentLine";
appearance = Appearance1154;

let IndexedLineSet1155 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1155.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1156 = browser.currentScene.createNode("Coordinate");
Coordinate1156.point = new X3D.MFVec3f([-0.2,0.79,-0.085,-0.2,0.755,-0.085]);
coord = Coordinate1156;

geometry = IndexedLineSet1155;

HAnimSegment1152YYY.children = new X3D.MFNode();

HAnimSegment1152ZZZ.children[0] = Shape1153;

let Transform1157 = browser.currentScene.createNode("Transform");
Transform1157.translation = new X3D.SFVec3f([-0.2,0.79,-0.085]);
let Shape1158 = browser.currentScene.createNode("Shape");
Shape1158.USE = "jointbox";
Transform1157YYY.child = new X3D.undefined();

Transform1157ZZZ.child[0] = Shape1158;

HAnimSegment1152ZZZ.children[1] = Transform1157;

HAnimJoint1151YYY.children = new X3D.MFNode();

HAnimJoint1151ZZZ.children[0] = HAnimSegment1152;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.center = new X3D.SFVec3f([-0.2,0.755,-0.085]);
HAnimJoint1159.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint1159.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1160.name = "r_carpal_middle_phalanx_5";
HAnimSegment1160.DEF = "Joe_r_carpal_middle_phalanx_5";
let Shape1161 = browser.currentScene.createNode("Shape");
let Appearance1162 = browser.currentScene.createNode("Appearance");
Appearance1162.USE = "SegmentLine";
appearance = Appearance1162;

let IndexedLineSet1163 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1163.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new X3D.MFVec3f([-0.2,0.755,-0.085,-0.2,0.735,-0.085]);
coord = Coordinate1164;

geometry = IndexedLineSet1163;

HAnimSegment1160YYY.children = new X3D.MFNode();

HAnimSegment1160ZZZ.children[0] = Shape1161;

let Transform1165 = browser.currentScene.createNode("Transform");
Transform1165.translation = new X3D.SFVec3f([-0.2,0.755,-0.085]);
let Shape1166 = browser.currentScene.createNode("Shape");
Shape1166.USE = "jointbox";
Transform1165YYY.child = new X3D.undefined();

Transform1165ZZZ.child[0] = Shape1166;

HAnimSegment1160ZZZ.children[1] = Transform1165;

HAnimJoint1159YYY.children = new X3D.MFNode();

HAnimJoint1159ZZZ.children[0] = HAnimSegment1160;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1167.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint1167.center = new X3D.SFVec3f([-0.2,0.735,-0.09]);
HAnimJoint1167.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint1167.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1168.name = "r_carpal_distal_phalanx_5";
HAnimSegment1168.DEF = "Joe_r_carpal_distal_phalanx_5";
let Shape1169 = browser.currentScene.createNode("Shape");
let Appearance1170 = browser.currentScene.createNode("Appearance");
Appearance1170.USE = "SegmentLine";
appearance = Appearance1170;

let IndexedLineSet1171 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1171.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1172 = browser.currentScene.createNode("Coordinate");
Coordinate1172.point = new X3D.MFVec3f([-0.2,0.735,-0.085,-0.2,0.72,-0.085]);
coord = Coordinate1172;

geometry = IndexedLineSet1171;

HAnimSegment1168YYY.children = new X3D.MFNode();

HAnimSegment1168ZZZ.children[0] = Shape1169;

let Transform1173 = browser.currentScene.createNode("Transform");
Transform1173.translation = new X3D.SFVec3f([-0.2,0.735,-0.085]);
let Shape1174 = browser.currentScene.createNode("Shape");
Shape1174.USE = "jointbox";
Transform1173YYY.child = new X3D.undefined();

Transform1173ZZZ.child[0] = Shape1174;

HAnimSegment1168ZZZ.children[1] = Transform1173;

let HAnimSite1175 = browser.currentScene.createNode("HAnimSite");
HAnimSite1175.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1175.DEF = "Joe_r_carpal_distal_phalanx_5_tip";
HAnimSite1175.translation = new X3D.SFVec3f([-0.2,0.72,-0.085]);
let Shape1176 = browser.currentScene.createNode("Shape");
Shape1176.USE = "sitebox";
HAnimSite1175YYY.children = new X3D.MFNode();

HAnimSite1175ZZZ.children[0] = Shape1176;

HAnimSegment1168ZZZ.children[2] = HAnimSite1175;

HAnimJoint1167YYY.children = new X3D.MFNode();

HAnimJoint1167ZZZ.children[0] = HAnimSegment1168;

HAnimJoint1159ZZZ.children[1] = HAnimJoint1167;

HAnimJoint1151ZZZ.children[1] = HAnimJoint1159;

HAnimJoint1141ZZZ.children[1] = HAnimJoint1151;

HAnimJoint997ZZZ.children[5] = HAnimJoint1141;

HAnimJoint975ZZZ.children[1] = HAnimJoint997;

HAnimJoint945ZZZ.children[1] = HAnimJoint975;

HAnimJoint929ZZZ.children[1] = HAnimJoint945;

HAnimJoint919ZZZ.children[1] = HAnimJoint929;

HAnimJoint553ZZZ.children[3] = HAnimJoint919;

HAnimJoint545ZZZ.children[1] = HAnimJoint553;

HAnimJoint537ZZZ.children[1] = HAnimJoint545;

HAnimJoint527ZZZ.children[1] = HAnimJoint537;

HAnimJoint519ZZZ.children[1] = HAnimJoint527;

HAnimJoint511ZZZ.children[1] = HAnimJoint519;

HAnimJoint503ZZZ.children[1] = HAnimJoint511;

HAnimJoint495ZZZ.children[1] = HAnimJoint503;

HAnimJoint483ZZZ.children[1] = HAnimJoint495;

HAnimJoint473ZZZ.children[1] = HAnimJoint483;

HAnimJoint465ZZZ.children[1] = HAnimJoint473;

HAnimJoint457ZZZ.children[1] = HAnimJoint465;

HAnimJoint449ZZZ.children[1] = HAnimJoint457;

HAnimJoint423ZZZ.children[1] = HAnimJoint449;

HAnimJoint415ZZZ.children[1] = HAnimJoint423;

HAnimJoint407ZZZ.children[1] = HAnimJoint415;

HAnimJoint392ZZZ.children[2] = HAnimJoint407;

HAnimJoint78ZZZ.children[2] = HAnimJoint392;

joints[1] = HAnimJoint78;

let Shape1177 = browser.currentScene.createNode("Shape");
Shape1177.DEF = "SkinShape";
let Appearance1178 = browser.currentScene.createNode("Appearance");
Appearance1178.DEF = "SkinAppearance";
let Material1179 = browser.currentScene.createNode("Material");
Material1179.DEF = "SkinMaterial";
Material1179.ambientIntensity = 0.6;
Material1179.diffuseColor = new X3D.SFColor([1,1,1]);
Material1179.shininess = 0.6;
Material1179.transparency = 0.2;
material = Material1179;

let ImageTexture1180 = browser.currentScene.createNode("ImageTexture");
ImageTexture1180.DEF = "zBlueSpiralBkg2";
ImageTexture1180.description = "Blue Spiral Pattern";
ImageTexture1180.url = new X3D.MFString([new X3D.SFString("zBlueSpiralBkg2.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")]);
texture = ImageTexture1180;

appearance = Appearance1178;

let IndexedFaceSet1181 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1181.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1181.creaseAngle = 3.1;
let Color1182 = browser.currentScene.createNode("Color");
Color1182.color = new X3D.MFColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
color = Color1182;

let Coordinate1183 = browser.currentScene.createNode("Coordinate");
Coordinate1183.DEF = "TheSkinCoord";
Coordinate1183.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
coord = Coordinate1183;

geometry = IndexedFaceSet1181;

skin[2] = Shape1177;

let Coordinate1184 = browser.currentScene.createNode("Coordinate");
Coordinate1184.USE = "TheSkinCoord";
skinCoord = Coordinate1184;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.USE = "Joe_humanoid_root";
joints[3] = HAnimJoint1185;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.USE = "Joe_sacroiliac";
joints[4] = HAnimJoint1186;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.USE = "Joe_vl5";
joints[5] = HAnimJoint1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_vl4";
joints[6] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_vl3";
joints[7] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_vl2";
joints[8] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_vl1";
joints[9] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_vt12";
joints[10] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_vt11";
joints[11] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_vt10";
joints[12] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_vt9";
joints[13] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_vt8";
joints[14] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_vt7";
joints[15] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_vt6";
joints[16] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_vt5";
joints[17] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_vt4";
joints[18] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_vt3";
joints[19] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_vt2";
joints[20] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vt1";
joints[21] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vc7";
joints[22] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vc6";
joints[23] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vc5";
joints[24] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vc4";
joints[25] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vc3";
joints[26] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vc2";
joints[27] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vc1";
joints[28] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_skullbase";
joints[29] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_l_acromioclavicular";
joints[30] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_r_acromioclavicular";
joints[31] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_l_carpal_distal_interphalangeal_2";
joints[32] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_r_carpal_distal_interphalangeal_2";
joints[33] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_l_carpal_distal_interphalangeal_3";
joints[34] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_r_carpal_distal_interphalangeal_3";
joints[35] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_l_carpal_distal_interphalangeal_4";
joints[36] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_r_carpal_distal_interphalangeal_4";
joints[37] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_l_carpal_distal_interphalangeal_5";
joints[38] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_r_carpal_distal_interphalangeal_5";
joints[39] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_l_carpal_interphalangeal_1";
joints[40] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_r_carpal_interphalangeal_1";
joints[41] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_l_carpal_proximal_interphalangeal_2";
joints[42] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_r_carpal_proximal_interphalangeal_2";
joints[43] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_l_carpal_proximal_interphalangeal_3";
joints[44] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_r_carpal_proximal_interphalangeal_3";
joints[45] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_l_carpal_proximal_interphalangeal_4";
joints[46] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_r_carpal_proximal_interphalangeal_4";
joints[47] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_l_carpal_proximal_interphalangeal_5";
joints[48] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_r_carpal_proximal_interphalangeal_5";
joints[49] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_l_carpometacarpal_1";
joints[50] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_r_carpometacarpal_1";
joints[51] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_l_carpometacarpal_2";
joints[52] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_r_carpometacarpal_2";
joints[53] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_l_carpometacarpal_3";
joints[54] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_r_carpometacarpal_3";
joints[55] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_l_carpometacarpal_4";
joints[56] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_r_carpometacarpal_4";
joints[57] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_l_carpometacarpal_5";
joints[58] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_r_carpometacarpal_5";
joints[59] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_l_elbow";
joints[60] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_r_elbow";
joints[61] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_l_eyeball_joint";
joints[62] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_r_eyeball_joint";
joints[63] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_l_hip";
joints[64] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_r_hip";
joints[65] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_l_knee";
joints[66] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_r_knee";
joints[67] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_l_metacarpophalangeal_1";
joints[68] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_r_metacarpophalangeal_1";
joints[69] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_l_metacarpophalangeal_2";
joints[70] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_r_metacarpophalangeal_2";
joints[71] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_l_metacarpophalangeal_3";
joints[72] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_r_metacarpophalangeal_3";
joints[73] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_l_metacarpophalangeal_4";
joints[74] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_r_metacarpophalangeal_4";
joints[75] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_l_metacarpophalangeal_5";
joints[76] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_r_metacarpophalangeal_5";
joints[77] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_l_metatarsal";
joints[78] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_l_metatarsophalangeal_2";
joints[79] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_metatarsophalangeal_2";
joints[80] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_l_radiocarpal";
joints[81] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_r_radiocarpal";
joints[82] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_l_shoulder";
joints[83] = HAnimJoint1265;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_r_shoulder";
joints[84] = HAnimJoint1266;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_l_sternoclavicular";
joints[85] = HAnimJoint1267;

let HAnimJoint1268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1268.USE = "Joe_r_sternoclavicular";
joints[86] = HAnimJoint1268;

let HAnimJoint1269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1269.USE = "Joe_l_talocrural";
joints[87] = HAnimJoint1269;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.USE = "Joe_r_talocrural";
joints[88] = HAnimJoint1270;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.USE = "Joe_r_tarsal_distal_interphalangeal_2";
joints[89] = HAnimJoint1271;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.USE = "Joe_l_tarsometatarsal_2";
joints[90] = HAnimJoint1272;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.USE = "Joe_r_tarsometatarsal_2";
joints[91] = HAnimJoint1273;

let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.USE = "Joe_c1";
segments[92] = HAnimSegment1274;

let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.USE = "Joe_c2";
segments[93] = HAnimSegment1275;

let HAnimSegment1276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1276.USE = "Joe_c3";
segments[94] = HAnimSegment1276;

let HAnimSegment1277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1277.USE = "Joe_c4";
segments[95] = HAnimSegment1277;

let HAnimSegment1278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1278.USE = "Joe_c5";
segments[96] = HAnimSegment1278;

let HAnimSegment1279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1279.USE = "Joe_c6";
segments[97] = HAnimSegment1279;

let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.USE = "Joe_c7";
segments[98] = HAnimSegment1280;

let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.USE = "Joe_l1";
segments[99] = HAnimSegment1281;

let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.USE = "Joe_l2";
segments[100] = HAnimSegment1282;

let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.USE = "Joe_l3";
segments[101] = HAnimSegment1283;

let HAnimSegment1284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1284.USE = "Joe_l4";
segments[102] = HAnimSegment1284;

let HAnimSegment1285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1285.USE = "Joe_l5";
segments[103] = HAnimSegment1285;

let HAnimSegment1286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1286.USE = "Joe_pelvis";
segments[104] = HAnimSegment1286;

let HAnimSegment1287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1287.USE = "Joe_sacrum";
segments[105] = HAnimSegment1287;

let HAnimSegment1288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1288.USE = "Joe_skull";
segments[106] = HAnimSegment1288;

let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.USE = "Joe_t1";
segments[107] = HAnimSegment1289;

let HAnimSegment1290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1290.USE = "Joe_t10";
segments[108] = HAnimSegment1290;

let HAnimSegment1291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1291.USE = "Joe_t11";
segments[109] = HAnimSegment1291;

let HAnimSegment1292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1292.USE = "Joe_t12";
segments[110] = HAnimSegment1292;

let HAnimSegment1293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1293.USE = "Joe_t2";
segments[111] = HAnimSegment1293;

let HAnimSegment1294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1294.USE = "Joe_t3";
segments[112] = HAnimSegment1294;

let HAnimSegment1295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1295.USE = "Joe_t4";
segments[113] = HAnimSegment1295;

let HAnimSegment1296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1296.USE = "Joe_t5";
segments[114] = HAnimSegment1296;

let HAnimSegment1297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1297.USE = "Joe_t6";
segments[115] = HAnimSegment1297;

let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.USE = "Joe_t7";
segments[116] = HAnimSegment1298;

let HAnimSegment1299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1299.USE = "Joe_t8";
segments[117] = HAnimSegment1299;

let HAnimSegment1300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1300.USE = "Joe_t9";
segments[118] = HAnimSegment1300;

let HAnimSegment1301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1301.USE = "Joe_toPelvis";
segments[119] = HAnimSegment1301;

let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.USE = "Joe_l_calf";
segments[120] = HAnimSegment1302;

let HAnimSegment1303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1303.USE = "Joe_r_calf";
segments[121] = HAnimSegment1303;

let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.USE = "Joe_l_carpal";
segments[122] = HAnimSegment1304;

let HAnimSegment1305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1305.USE = "Joe_r_carpal";
segments[123] = HAnimSegment1305;

let HAnimSegment1306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1306.USE = "Joe_l_carpal_distal_phalanx_1";
segments[124] = HAnimSegment1306;

let HAnimSegment1307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1307.USE = "Joe_r_carpal_distal_phalanx_1";
segments[125] = HAnimSegment1307;

let HAnimSegment1308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1308.USE = "Joe_l_carpal_distal_phalanx_2";
segments[126] = HAnimSegment1308;

let HAnimSegment1309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1309.USE = "Joe_r_carpal_distal_phalanx_2";
segments[127] = HAnimSegment1309;

let HAnimSegment1310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1310.USE = "Joe_l_carpal_distal_phalanx_3";
segments[128] = HAnimSegment1310;

let HAnimSegment1311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1311.USE = "Joe_r_carpal_distal_phalanx_3";
segments[129] = HAnimSegment1311;

let HAnimSegment1312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1312.USE = "Joe_l_carpal_distal_phalanx_4";
segments[130] = HAnimSegment1312;

let HAnimSegment1313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1313.USE = "Joe_r_carpal_distal_phalanx_4";
segments[131] = HAnimSegment1313;

let HAnimSegment1314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1314.USE = "Joe_l_carpal_distal_phalanx_5";
segments[132] = HAnimSegment1314;

let HAnimSegment1315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1315.USE = "Joe_r_carpal_distal_phalanx_5";
segments[133] = HAnimSegment1315;

let HAnimSegment1316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1316.USE = "Joe_l_carpal_middle_phalanx_2";
segments[134] = HAnimSegment1316;

let HAnimSegment1317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1317.USE = "Joe_r_carpal_middle_phalanx_2";
segments[135] = HAnimSegment1317;

let HAnimSegment1318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1318.USE = "Joe_l_carpal_middle_phalanx_3";
segments[136] = HAnimSegment1318;

let HAnimSegment1319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1319.USE = "Joe_r_carpal_middle_phalanx_3";
segments[137] = HAnimSegment1319;

let HAnimSegment1320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1320.USE = "Joe_l_carpal_middle_phalanx_4";
segments[138] = HAnimSegment1320;

let HAnimSegment1321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1321.USE = "Joe_r_carpal_middle_phalanx_4";
segments[139] = HAnimSegment1321;

let HAnimSegment1322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1322.USE = "Joe_l_carpal_middle_phalanx_5";
segments[140] = HAnimSegment1322;

let HAnimSegment1323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1323.USE = "Joe_r_carpal_middle_phalanx_5";
segments[141] = HAnimSegment1323;

let HAnimSegment1324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1324.USE = "Joe_l_carpal_proximal_phalanx_1";
segments[142] = HAnimSegment1324;

let HAnimSegment1325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1325.USE = "Joe_r_carpal_proximal_phalanx_1";
segments[143] = HAnimSegment1325;

let HAnimSegment1326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1326.USE = "Joe_l_carpal_proximal_phalanx_2";
segments[144] = HAnimSegment1326;

let HAnimSegment1327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1327.USE = "Joe_r_carpal_proximal_phalanx_2";
segments[145] = HAnimSegment1327;

let HAnimSegment1328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1328.USE = "Joe_l_carpal_proximal_phalanx_3";
segments[146] = HAnimSegment1328;

let HAnimSegment1329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1329.USE = "Joe_r_carpal_proximal_phalanx_3";
segments[147] = HAnimSegment1329;

let HAnimSegment1330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1330.USE = "Joe_l_carpal_proximal_phalanx_4";
segments[148] = HAnimSegment1330;

let HAnimSegment1331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1331.USE = "Joe_r_carpal_proximal_phalanx_4";
segments[149] = HAnimSegment1331;

let HAnimSegment1332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1332.USE = "Joe_l_carpal_proximal_phalanx_5";
segments[150] = HAnimSegment1332;

let HAnimSegment1333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1333.USE = "Joe_r_carpal_proximal_phalanx_5";
segments[151] = HAnimSegment1333;

let HAnimSegment1334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1334.USE = "Joe_l_clavicle";
segments[152] = HAnimSegment1334;

let HAnimSegment1335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1335.USE = "Joe_r_clavicle";
segments[153] = HAnimSegment1335;

let HAnimSegment1336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1336.USE = "Joe_l_eyeball";
segments[154] = HAnimSegment1336;

let HAnimSegment1337 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1337.USE = "Joe_r_eyeball";
segments[155] = HAnimSegment1337;

let HAnimSegment1338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1338.USE = "Joe_l_forearm";
segments[156] = HAnimSegment1338;

let HAnimSegment1339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1339.USE = "Joe_r_forearm";
segments[157] = HAnimSegment1339;

let HAnimSegment1340 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1340.USE = "Joe_l_metacarpal_1";
segments[158] = HAnimSegment1340;

let HAnimSegment1341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1341.USE = "Joe_r_metacarpal_1";
segments[159] = HAnimSegment1341;

let HAnimSegment1342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1342.USE = "Joe_l_metacarpal_2";
segments[160] = HAnimSegment1342;

let HAnimSegment1343 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1343.USE = "Joe_r_metacarpal_2";
segments[161] = HAnimSegment1343;

let HAnimSegment1344 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1344.USE = "Joe_l_metacarpal_3";
segments[162] = HAnimSegment1344;

let HAnimSegment1345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1345.USE = "Joe_r_metacarpal_3";
segments[163] = HAnimSegment1345;

let HAnimSegment1346 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1346.USE = "Joe_l_metacarpal_4";
segments[164] = HAnimSegment1346;

let HAnimSegment1347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1347.USE = "Joe_r_metacarpal_4";
segments[165] = HAnimSegment1347;

let HAnimSegment1348 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1348.USE = "Joe_l_metacarpal_5";
segments[166] = HAnimSegment1348;

let HAnimSegment1349 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1349.USE = "Joe_r_metacarpal_5";
segments[167] = HAnimSegment1349;

let HAnimSegment1350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1350.USE = "Joe_l_metatarsal_2";
segments[168] = HAnimSegment1350;

let HAnimSegment1351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1351.USE = "Joe_r_metatarsal_2";
segments[169] = HAnimSegment1351;

let HAnimSegment1352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1352.USE = "Joe_l_scapula";
segments[170] = HAnimSegment1352;

let HAnimSegment1353 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1353.USE = "Joe_r_scapula";
segments[171] = HAnimSegment1353;

let HAnimSegment1354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1354.USE = "Joe_l_talus";
segments[172] = HAnimSegment1354;

let HAnimSegment1355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1355.USE = "Joe_r_talus";
segments[173] = HAnimSegment1355;

let HAnimSegment1356 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1356.USE = "Joe_l_tarsal_distal_phalanx_2";
segments[174] = HAnimSegment1356;

let HAnimSegment1357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1357.USE = "Joe_r_tarsal_distal_phalanx_2";
segments[175] = HAnimSegment1357;

let HAnimSegment1358 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1358.USE = "Joe_l_tarsal_proximal_phalanx_2";
segments[176] = HAnimSegment1358;

let HAnimSegment1359 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1359.USE = "Joe_r_tarsal_proximal_phalanx_2";
segments[177] = HAnimSegment1359;

let HAnimSegment1360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1360.USE = "Joe_l_thigh";
segments[178] = HAnimSegment1360;

let HAnimSegment1361 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1361.USE = "Joe_r_thigh";
segments[179] = HAnimSegment1361;

let HAnimSegment1362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1362.USE = "Joe_l_upperarm";
segments[180] = HAnimSegment1362;

let HAnimSegment1363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1363.USE = "Joe_r_upperarm";
segments[181] = HAnimSegment1363;

let HAnimSite1364 = browser.currentScene.createNode("HAnimSite");
HAnimSite1364.USE = "Joe_cervicale_pt";
viewpoints[182] = HAnimSite1364;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.USE = "Joe_crotch_pt";
viewpoints[183] = HAnimSite1365;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.USE = "Joe_floormarker_pt";
viewpoints[184] = HAnimSite1366;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.USE = "Joe_navel_pt";
viewpoints[185] = HAnimSite1367;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.USE = "Joe_nuchale_pt";
viewpoints[186] = HAnimSite1368;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.USE = "Joe_rib10_midspine_pt";
viewpoints[187] = HAnimSite1369;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.USE = "Joe_sellion_pt";
viewpoints[188] = HAnimSite1370;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.USE = "Joe_skull_vertex_tip";
viewpoints[189] = HAnimSite1371;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.USE = "Joe_substernale_pt";
viewpoints[190] = HAnimSite1372;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.USE = "Joe_supramenton_pt";
viewpoints[191] = HAnimSite1373;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.USE = "Joe_suprasternale_pt";
viewpoints[192] = HAnimSite1374;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.USE = "Joe_waist_preferred_posterior_pt";
viewpoints[193] = HAnimSite1375;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.USE = "Joe_l_acromion_pt";
viewpoints[194] = HAnimSite1376;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.USE = "Joe_r_acromion_pt";
viewpoints[195] = HAnimSite1377;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.USE = "Joe_l_asis_pt";
viewpoints[196] = HAnimSite1378;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.USE = "Joe_r_asis_pt";
viewpoints[197] = HAnimSite1379;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.USE = "Joe_l_axilla_distal_pt";
viewpoints[198] = HAnimSite1380;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.USE = "Joe_r_axilla_distal_pt";
viewpoints[199] = HAnimSite1381;

let HAnimSite1382 = browser.currentScene.createNode("HAnimSite");
HAnimSite1382.USE = "Joe_l_axilla_proximal_pt";
viewpoints[200] = HAnimSite1382;

let HAnimSite1383 = browser.currentScene.createNode("HAnimSite");
HAnimSite1383.USE = "Joe_r_axilla_proximal_pt";
viewpoints[201] = HAnimSite1383;

let HAnimSite1384 = browser.currentScene.createNode("HAnimSite");
HAnimSite1384.USE = "Joe_l_calcaneus_posterior_pt";
viewpoints[202] = HAnimSite1384;

let HAnimSite1385 = browser.currentScene.createNode("HAnimSite");
HAnimSite1385.USE = "Joe_r_calcaneus_posterior_pt";
viewpoints[203] = HAnimSite1385;

let HAnimSite1386 = browser.currentScene.createNode("HAnimSite");
HAnimSite1386.USE = "Joe_l_carpal_distal_phalanx_1_tip";
viewpoints[204] = HAnimSite1386;

let HAnimSite1387 = browser.currentScene.createNode("HAnimSite");
HAnimSite1387.USE = "Joe_r_carpal_distal_phalanx_1_tip";
viewpoints[205] = HAnimSite1387;

let HAnimSite1388 = browser.currentScene.createNode("HAnimSite");
HAnimSite1388.USE = "Joe_l_carpal_distal_phalanx_2_tip";
viewpoints[206] = HAnimSite1388;

let HAnimSite1389 = browser.currentScene.createNode("HAnimSite");
HAnimSite1389.USE = "Joe_r_carpal_distal_phalanx_2_tip";
viewpoints[207] = HAnimSite1389;

let HAnimSite1390 = browser.currentScene.createNode("HAnimSite");
HAnimSite1390.USE = "Joe_l_carpal_distal_phalanx_3_tip";
viewpoints[208] = HAnimSite1390;

let HAnimSite1391 = browser.currentScene.createNode("HAnimSite");
HAnimSite1391.USE = "Joe_r_carpal_distal_phalanx_3_tip";
viewpoints[209] = HAnimSite1391;

let HAnimSite1392 = browser.currentScene.createNode("HAnimSite");
HAnimSite1392.USE = "Joe_l_carpal_distal_phalanx_4_tip";
viewpoints[210] = HAnimSite1392;

let HAnimSite1393 = browser.currentScene.createNode("HAnimSite");
HAnimSite1393.USE = "Joe_r_carpal_distal_phalanx_4_tip";
viewpoints[211] = HAnimSite1393;

let HAnimSite1394 = browser.currentScene.createNode("HAnimSite");
HAnimSite1394.USE = "Joe_l_carpal_distal_phalanx_5_tip";
viewpoints[212] = HAnimSite1394;

let HAnimSite1395 = browser.currentScene.createNode("HAnimSite");
HAnimSite1395.USE = "Joe_r_carpal_distal_phalanx_5_tip";
viewpoints[213] = HAnimSite1395;

let HAnimSite1396 = browser.currentScene.createNode("HAnimSite");
HAnimSite1396.USE = "Joe_l_clavicle_pt";
viewpoints[214] = HAnimSite1396;

let HAnimSite1397 = browser.currentScene.createNode("HAnimSite");
HAnimSite1397.USE = "Joe_r_clavicle_pt";
viewpoints[215] = HAnimSite1397;

let HAnimSite1398 = browser.currentScene.createNode("HAnimSite");
HAnimSite1398.USE = "Joe_l_dactylion_pt";
viewpoints[216] = HAnimSite1398;

let HAnimSite1399 = browser.currentScene.createNode("HAnimSite");
HAnimSite1399.USE = "Joe_r_dactylion_pt";
viewpoints[217] = HAnimSite1399;

let HAnimSite1400 = browser.currentScene.createNode("HAnimSite");
HAnimSite1400.USE = "Joe_l_femoral_lateral_epicondyle_pt";
viewpoints[218] = HAnimSite1400;

let HAnimSite1401 = browser.currentScene.createNode("HAnimSite");
HAnimSite1401.USE = "Joe_r_femoral_lateral_epicondyle_pt";
viewpoints[219] = HAnimSite1401;

let HAnimSite1402 = browser.currentScene.createNode("HAnimSite");
HAnimSite1402.USE = "Joe_l_femoral_medial_epicondyle_pt";
viewpoints[220] = HAnimSite1402;

let HAnimSite1403 = browser.currentScene.createNode("HAnimSite");
HAnimSite1403.USE = "Joe_r_femoral_medial_epicondyle_pt";
viewpoints[221] = HAnimSite1403;

let HAnimSite1404 = browser.currentScene.createNode("HAnimSite");
HAnimSite1404.USE = "Joe_l_gonion_pt";
viewpoints[222] = HAnimSite1404;

let HAnimSite1405 = browser.currentScene.createNode("HAnimSite");
HAnimSite1405.USE = "Joe_r_gonion_pt";
viewpoints[223] = HAnimSite1405;

let HAnimSite1406 = browser.currentScene.createNode("HAnimSite");
HAnimSite1406.USE = "Joe_l_humeral_lateral_epicondyle_pt";
viewpoints[224] = HAnimSite1406;

let HAnimSite1407 = browser.currentScene.createNode("HAnimSite");
HAnimSite1407.USE = "Joe_r_humeral_lateral_epicondyle_pt";
viewpoints[225] = HAnimSite1407;

let HAnimSite1408 = browser.currentScene.createNode("HAnimSite");
HAnimSite1408.USE = "Joe_l_humeral_medial_epicondyle_pt";
viewpoints[226] = HAnimSite1408;

let HAnimSite1409 = browser.currentScene.createNode("HAnimSite");
HAnimSite1409.USE = "Joe_r_humeral_medial_epicondyle_pt";
viewpoints[227] = HAnimSite1409;

let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.USE = "Joe_l_iliocristale_pt";
viewpoints[228] = HAnimSite1410;

let HAnimSite1411 = browser.currentScene.createNode("HAnimSite");
HAnimSite1411.USE = "Joe_r_iliocristale_pt";
viewpoints[229] = HAnimSite1411;

let HAnimSite1412 = browser.currentScene.createNode("HAnimSite");
HAnimSite1412.USE = "Joe_l_infraorbitale_pt";
viewpoints[230] = HAnimSite1412;

let HAnimSite1413 = browser.currentScene.createNode("HAnimSite");
HAnimSite1413.USE = "Joe_r_infraorbitale_pt";
viewpoints[231] = HAnimSite1413;

let HAnimSite1414 = browser.currentScene.createNode("HAnimSite");
HAnimSite1414.USE = "Joe_l_knee_crease_pt";
viewpoints[232] = HAnimSite1414;

let HAnimSite1415 = browser.currentScene.createNode("HAnimSite");
HAnimSite1415.USE = "Joe_r_knee_crease_pt";
viewpoints[233] = HAnimSite1415;

let HAnimSite1416 = browser.currentScene.createNode("HAnimSite");
HAnimSite1416.USE = "Joe_l_lateral_malleolus_pt";
viewpoints[234] = HAnimSite1416;

let HAnimSite1417 = browser.currentScene.createNode("HAnimSite");
HAnimSite1417.USE = "Joe_r_lateral_malleolus_pt";
viewpoints[235] = HAnimSite1417;

let HAnimSite1418 = browser.currentScene.createNode("HAnimSite");
HAnimSite1418.USE = "Joe_l_medial_malleolus_pt";
viewpoints[236] = HAnimSite1418;

let HAnimSite1419 = browser.currentScene.createNode("HAnimSite");
HAnimSite1419.USE = "Joe_r_medial_malleolus_pt";
viewpoints[237] = HAnimSite1419;

let HAnimSite1420 = browser.currentScene.createNode("HAnimSite");
HAnimSite1420.USE = "Joe_l_metacarpal_phalanx_2_pt";
viewpoints[238] = HAnimSite1420;

let HAnimSite1421 = browser.currentScene.createNode("HAnimSite");
HAnimSite1421.USE = "Joe_r_metacarpal_phalanx_2_pt";
viewpoints[239] = HAnimSite1421;

let HAnimSite1422 = browser.currentScene.createNode("HAnimSite");
HAnimSite1422.USE = "Joe_l_metacarpal_phalanx_5_pt";
viewpoints[240] = HAnimSite1422;

let HAnimSite1423 = browser.currentScene.createNode("HAnimSite");
HAnimSite1423.USE = "Joe_r_metacarpal_phalanx_5_pt";
viewpoints[241] = HAnimSite1423;

let HAnimSite1424 = browser.currentScene.createNode("HAnimSite");
HAnimSite1424.USE = "Joe_l_metatarsal_phalanx_1_pt";
viewpoints[242] = HAnimSite1424;

let HAnimSite1425 = browser.currentScene.createNode("HAnimSite");
HAnimSite1425.USE = "Joe_r_metatarsal_phalanx_1_pt";
viewpoints[243] = HAnimSite1425;

let HAnimSite1426 = browser.currentScene.createNode("HAnimSite");
HAnimSite1426.USE = "Joe_l_metatarsal_phalanx_5_pt";
viewpoints[244] = HAnimSite1426;

let HAnimSite1427 = browser.currentScene.createNode("HAnimSite");
HAnimSite1427.USE = "Joe_r_metatarsal_phalanx_5_pt";
viewpoints[245] = HAnimSite1427;

let HAnimSite1428 = browser.currentScene.createNode("HAnimSite");
HAnimSite1428.USE = "Joe_l_neck_base_pt";
viewpoints[246] = HAnimSite1428;

let HAnimSite1429 = browser.currentScene.createNode("HAnimSite");
HAnimSite1429.USE = "Joe_r_neck_base_pt";
viewpoints[247] = HAnimSite1429;

let HAnimSite1430 = browser.currentScene.createNode("HAnimSite");
HAnimSite1430.USE = "Joe_l_olecranon_pt";
viewpoints[248] = HAnimSite1430;

let HAnimSite1431 = browser.currentScene.createNode("HAnimSite");
HAnimSite1431.USE = "Joe_r_olecranon_pt";
viewpoints[249] = HAnimSite1431;

let HAnimSite1432 = browser.currentScene.createNode("HAnimSite");
HAnimSite1432.USE = "Joe_l_psis_pt";
viewpoints[250] = HAnimSite1432;

let HAnimSite1433 = browser.currentScene.createNode("HAnimSite");
HAnimSite1433.USE = "Joe_r_psis_pt";
viewpoints[251] = HAnimSite1433;

let HAnimSite1434 = browser.currentScene.createNode("HAnimSite");
HAnimSite1434.USE = "Joe_l_radial_styloid_pt";
viewpoints[252] = HAnimSite1434;

let HAnimSite1435 = browser.currentScene.createNode("HAnimSite");
HAnimSite1435.USE = "Joe_r_radial_styloid_pt";
viewpoints[253] = HAnimSite1435;

let HAnimSite1436 = browser.currentScene.createNode("HAnimSite");
HAnimSite1436.USE = "Joe_l_radiale_pt";
viewpoints[254] = HAnimSite1436;

let HAnimSite1437 = browser.currentScene.createNode("HAnimSite");
HAnimSite1437.USE = "Joe_r_radiale_pt";
viewpoints[255] = HAnimSite1437;

let HAnimSite1438 = browser.currentScene.createNode("HAnimSite");
HAnimSite1438.USE = "Joe_l_rib10_pt";
viewpoints[256] = HAnimSite1438;

let HAnimSite1439 = browser.currentScene.createNode("HAnimSite");
HAnimSite1439.USE = "Joe_r_rib10_pt";
viewpoints[257] = HAnimSite1439;

let HAnimSite1440 = browser.currentScene.createNode("HAnimSite");
HAnimSite1440.USE = "Joe_l_sphyrion_pt";
viewpoints[258] = HAnimSite1440;

let HAnimSite1441 = browser.currentScene.createNode("HAnimSite");
HAnimSite1441.USE = "Joe_r_sphyrion_pt";
viewpoints[259] = HAnimSite1441;

let HAnimSite1442 = browser.currentScene.createNode("HAnimSite");
HAnimSite1442.USE = "Joe_l_tarsal_distal_phalanx_2_pt";
viewpoints[260] = HAnimSite1442;

let HAnimSite1443 = browser.currentScene.createNode("HAnimSite");
HAnimSite1443.USE = "Joe_r_tarsal_distal_phalanx_2_pt";
viewpoints[261] = HAnimSite1443;

let HAnimSite1444 = browser.currentScene.createNode("HAnimSite");
HAnimSite1444.USE = "Joe_l_thelion_pt";
viewpoints[262] = HAnimSite1444;

let HAnimSite1445 = browser.currentScene.createNode("HAnimSite");
HAnimSite1445.USE = "Joe_r_thelion_pt";
viewpoints[263] = HAnimSite1445;

let HAnimSite1446 = browser.currentScene.createNode("HAnimSite");
HAnimSite1446.USE = "Joe_l_tragion_pt";
viewpoints[264] = HAnimSite1446;

let HAnimSite1447 = browser.currentScene.createNode("HAnimSite");
HAnimSite1447.USE = "Joe_r_tragion_pt";
viewpoints[265] = HAnimSite1447;

let HAnimSite1448 = browser.currentScene.createNode("HAnimSite");
HAnimSite1448.USE = "Joe_l_trochanterion_pt";
viewpoints[266] = HAnimSite1448;

let HAnimSite1449 = browser.currentScene.createNode("HAnimSite");
HAnimSite1449.USE = "Joe_r_trochanterion_pt";
viewpoints[267] = HAnimSite1449;

let HAnimSite1450 = browser.currentScene.createNode("HAnimSite");
HAnimSite1450.USE = "Joe_l_ulnar_styloid_pt";
viewpoints[268] = HAnimSite1450;

let HAnimSite1451 = browser.currentScene.createNode("HAnimSite");
HAnimSite1451.USE = "Joe_r_ulnar_styloid_pt";
viewpoints[269] = HAnimSite1451;

Group74YYY.children = new X3D.MFNode();

Group74ZZZ.children[0] = HAnimHumanoid75;

Group73YYY.children = new X3D.MFNode();

Group73ZZZ.children[0] = Group74;

browser.currentScene.children[5] = Group73;

//expected best practice: EXPORT AS='fileName' for clarity
let EXPORT1452 = browser.currentScene.createNode("EXPORT");
EXPORT1452.AS = "JoeSkeletonSkinSite";
EXPORT1452.localDEF = "Joe_Human";
browser.currentScene.children[6] = EXPORT1452;

}
main ();
