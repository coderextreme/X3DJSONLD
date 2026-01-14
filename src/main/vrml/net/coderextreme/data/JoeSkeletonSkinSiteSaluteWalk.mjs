const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 2));
scene.addMetaData("title", "JoeSkeletonSkinSaluteSiteWalk.x3d");
scene.addMetaData("description", "Comprehensive example showing skeleton, skin, sites and interpolator animation together.");
scene.addMetaData("creator", "Joe D. Williams");
scene.addMetaData("created", "9 January 2004");
scene.addMetaData("translated", "4 December 2022");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:38:38 GMT");
scene.addMetaData("warning", "Under development, numerous errors and warnings");
scene.addMetaData("TODO", "This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value");
scene.addMetaData("TODO", "Provide feedback to tovrmlx3d converter");
scene.addMetaData("TODO", "HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics.");
scene.addMetaData("TODO", "ensure name prefix "Joe_" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy");
scene.addMetaData("reference", "JoeSkeletonSkinSaluteSiteWalk.original.x3dv");
scene.addMetaData("reference", "JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv");
scene.addMetaData("reference", "JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv");
scene.addMetaData("reference", "https://castle-engine.io/view3dscene.php#section_converting");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_Octaga.png");
scene.addMetaData("Image", "JoeSkeletonSkinSiteSaluteWalk_vivaty.png");
scene.addMetaData("drawing", "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx");
scene.addMetaData("generator", "tovrmlx3d, https://castle-engine.io/convert.php");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("translator", "Michalis Kamburelis");
scene.addMetaData("translator", "Don Brutzman");
await browser .loadComponents (scene);
let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.title = "HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3";
WorldInfo34.info = new X3D.MFString([new X3D.SFString("By Joe for Joe")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo34;

let WorldInfo35 = browser.currentScene.createNode("WorldInfo");
WorldInfo35.title = "HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3";
WorldInfo35.info = new X3D.MFString([new X3D.SFString("By Joe for Joe")]);
browser.currentScene.children[1] = WorldInfo35;

let NavigationInfo36 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo36.DEF = "HeadlightOnRevealsSkinTextureAndColors";
browser.currentScene.children[2] = NavigationInfo36;

let Background37 = browser.currentScene.createNode("Background");
Background37.skyColor = new X3D.MFColor([0,0,0.1]);
Background37.groundAngle = new X3D.MFFloat([1.57]);
Background37.groundColor = new X3D.MFColor([0,0.1,0,0,0.1,0]);
browser.currentScene.children[3] = Background37;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "cordsysfloor";
Transform38.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Inline39 = browser.currentScene.createNode("Inline");
Inline39.DEF = "CoordinateAxes";
Inline39.url = new X3D.MFString([new X3D.SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), new X3D.SFString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), new X3D.SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), new X3D.SFString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")]);
Transform38YYY.children = new X3D.MFNode();

Transform38ZZZ.children[0] = Inline39;

browser.currentScene.children[4] = Transform38;

let Group40 = browser.currentScene.createNode("Group");
Group40.DEF = "ViewpointGroup";
let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "Front Up View";
Viewpoint41.position = new X3D.SFVec3f([-1,2,2.5]);
Viewpoint41.orientation = new X3D.SFRotation([-1,-1,0,0.55]);
Group40YYY.children = new X3D.MFNode();

Group40ZZZ.children[0] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.description = "From Left View";
Viewpoint42.position = new X3D.SFVec3f([-2.5,1.5,0]);
Viewpoint42.orientation = new X3D.SFRotation([0.3,1,0,-1.57]);
Group40ZZZ.children[1] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.description = "Front Mid View";
Viewpoint43.position = new X3D.SFVec3f([0,0.5,1.25]);
Group40ZZZ.children[2] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.description = "Front Feet View";
Viewpoint44.position = new X3D.SFVec3f([0,0,0.75]);
Group40ZZZ.children[3] = Viewpoint44;

let Viewpoint45 = browser.currentScene.createNode("Viewpoint");
Viewpoint45.description = "From Right View";
Viewpoint45.position = new X3D.SFVec3f([1,1,0]);
Viewpoint45.orientation = new X3D.SFRotation([0,1,0,1.57]);
Group40ZZZ.children[4] = Viewpoint45;

let Viewpoint46 = browser.currentScene.createNode("Viewpoint");
Viewpoint46.description = "Front Head View";
Viewpoint46.position = new X3D.SFVec3f([0,1.65,0.75]);
Viewpoint46.centerOfRotation = new X3D.SFVec3f([0,1.65,0]);
Group40ZZZ.children[5] = Viewpoint46;

let Viewpoint47 = browser.currentScene.createNode("Viewpoint");
Viewpoint47.description = "Front Mid View";
Viewpoint47.position = new X3D.SFVec3f([0,1,1.75]);
Group40ZZZ.children[6] = Viewpoint47;

let Viewpoint48 = browser.currentScene.createNode("Viewpoint");
Viewpoint48.description = "Rear View";
Viewpoint48.position = new X3D.SFVec3f([0,1.5,-4]);
Viewpoint48.orientation = new X3D.SFRotation([0,1,0,3.14]);
Group40ZZZ.children[7] = Viewpoint48;

let Viewpoint49 = browser.currentScene.createNode("Viewpoint");
Viewpoint49.description = "Top View";
Viewpoint49.position = new X3D.SFVec3f([0,4,0]);
Viewpoint49.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Group40ZZZ.children[8] = Viewpoint49;

let Viewpoint50 = browser.currentScene.createNode("Viewpoint");
Viewpoint50.description = "Bottom View";
Viewpoint50.position = new X3D.SFVec3f([0,-4,0]);
Viewpoint50.orientation = new X3D.SFRotation([1,0,0,1.57]);
Group40ZZZ.children[9] = Viewpoint50;

let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.description = "Right View";
Viewpoint51.position = new X3D.SFVec3f([4,1.5,0]);
Viewpoint51.orientation = new X3D.SFRotation([0,1,0,1.57]);
Group40ZZZ.children[10] = Viewpoint51;

browser.currentScene.children[5] = Group40;

let Group52 = browser.currentScene.createNode("Group");
Group52.DEF = "VisualizationShapes";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new X3D.SFVec3f([0,2.1,0]);
Transform53.scale = new X3D.SFVec3f([5,5,5]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.DEF = "jointbox";
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.ambientIntensity = 0.5;
Material56.diffuseColor = new X3D.SFColor([0,0,0]);
Material56.shininess = 1;
material = Material56;

appearance = Appearance55;

let IndexedFaceSet57 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet57.creaseAngle = 0.1;
IndexedFaceSet57.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Color58 = browser.currentScene.createNode("Color");
Color58.color = new X3D.MFColor([1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
color = Color58;

let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.DEF = "boxCoords";
Coordinate59.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate59;

geometry = IndexedFaceSet57;

Transform53YYY.child = new X3D.undefined();

Transform53ZZZ.child[0] = Shape54;

Group52YYY.children = new X3D.MFNode();

Group52ZZZ.children[0] = Transform53;

let Transform60 = browser.currentScene.createNode("Transform");
Transform60.translation = new X3D.SFVec3f([-0.2,0.773,-0.016]);
Transform60.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let Shape61 = browser.currentScene.createNode("Shape");
Shape61.DEF = "sitebox";
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.ambientIntensity = 1;
Material63.diffuseColor = new X3D.SFColor([1,0,0]);
Material63.specularColor = new X3D.SFColor([1,0,0]);
Material63.emissiveColor = new X3D.SFColor([1,0,0]);
Material63.shininess = 0.7;
material = Material63;

appearance = Appearance62;

let IndexedFaceSet64 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet64.creaseAngle = 0.1;
IndexedFaceSet64.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate65 = browser.currentScene.createNode("Coordinate");
Coordinate65.USE = "boxCoords";
coord = Coordinate65;

geometry = IndexedFaceSet64;

Transform60YYY.child = new X3D.undefined();

Transform60ZZZ.child[0] = Shape61;

Group52ZZZ.children[1] = Transform60;

let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new X3D.SFVec3f([0,0.2,0]);
Transform66.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let Shape67 = browser.currentScene.createNode("Shape");
let Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.DEF = "SegmentLine";
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new X3D.SFColor([0,1,0]);
Material69.specularColor = new X3D.SFColor([0,1,0]);
Material69.emissiveColor = new X3D.SFColor([0,1,0]);
material = Material69;

appearance = Appearance68;

let IndexedLineSet70 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet70.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new X3D.MFVec3f([0,0,0,0,0.0001,0]);
coord = Coordinate71;

geometry = IndexedLineSet70;

Transform66YYY.child = new X3D.undefined();

Transform66ZZZ.child[0] = Shape67;

Group52ZZZ.children[2] = Transform66;

let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new X3D.SFVec3f([-0.2,0.773,-0.016]);
Transform72.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let Shape73 = browser.currentScene.createNode("Shape");
Shape73.DEF = "skinsphere";
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.ambientIntensity = 0.5;
Material75.diffuseColor = new X3D.SFColor([0,1,0]);
Material75.specularColor = new X3D.SFColor([0,1,0]);
Material75.emissiveColor = new X3D.SFColor([0,1,0]);
Material75.shininess = 1;
material = Material75;

appearance = Appearance74;

let Sphere76 = browser.currentScene.createNode("Sphere");
Sphere76.radius = 0.005;
geometry = Sphere76;

Transform72YYY.child = new X3D.undefined();

Transform72ZZZ.child[0] = Shape73;

Group52ZZZ.children[3] = Transform72;

browser.currentScene.children[6] = Group52;

let Group77 = browser.currentScene.createNode("Group");
Group77.DEF = "SpecHumanoid";
let Group78 = browser.currentScene.createNode("Group");
Group78.DEF = "JoeISOHumanoid";
let HAnimHumanoid79 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid79.DEF = "Joe_Human";
HAnimHumanoid79.name = "Human";
HAnimHumanoid79.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.DEF = "Joe_HumanoidRoot";
HAnimJoint80.name = "humanoid_root";
HAnimJoint80.translation = new X3D.SFVec3f([0,-0.0293965,0]);
HAnimJoint80.center = new X3D.SFVec3f([0,0.875,0]);
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.DEF = "Joe_sacrum";
HAnimSegment81.name = "sacrum";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new X3D.SFVec3f([0,0.875,0]);
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "jointbox";
Transform82YYY.child = new X3D.undefined();

Transform82ZZZ.child[0] = Shape83;

HAnimSegment81YYY.children = new X3D.MFNode();

HAnimSegment81ZZZ.children[0] = Transform82;

let Shape84 = browser.currentScene.createNode("Shape");
let Appearance85 = browser.currentScene.createNode("Appearance");
Appearance85.USE = "SegmentLine";
appearance = Appearance85;

let IndexedLineSet86 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet86.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate87 = browser.currentScene.createNode("Coordinate");
Coordinate87.point = new X3D.MFVec3f([0,0.875,0,0,0.92,0]);
coord = Coordinate87;

geometry = IndexedLineSet86;

HAnimSegment81ZZZ.children[1] = Shape84;

let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new X3D.SFVec3f([0,0.92,0.08]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "skinsphere";
Transform88YYY.child = new X3D.undefined();

Transform88ZZZ.child[0] = Shape89;

HAnimSegment81ZZZ.children[2] = Transform88;

let Transform90 = browser.currentScene.createNode("Transform");
Transform90.translation = new X3D.SFVec3f([0,0.87,-0.022]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "skinsphere";
Transform90YYY.child = new X3D.undefined();

Transform90ZZZ.child[0] = Shape91;

HAnimSegment81ZZZ.children[3] = Transform90;

HAnimJoint80YYY.children = new X3D.MFNode();

HAnimJoint80ZZZ.children[0] = HAnimSegment81;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "Joe_sacroiliac";
HAnimJoint92.name = "sacroiliac";
HAnimJoint92.center = new X3D.SFVec3f([0,0.92,0]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.DEF = "Joe_pelvis";
HAnimSegment93.name = "pelvis";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Transform95 = browser.currentScene.createNode("Transform");
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "jointbox";
Transform95YYY.child = new X3D.undefined();

Transform95ZZZ.child[0] = Shape96;

Transform94YYY.children = new X3D.MFNode();

Transform94ZZZ.children[0] = Transform95;

HAnimSegment93YYY.children = new X3D.MFNode();

HAnimSegment93ZZZ.children[0] = Transform94;

let Shape97 = browser.currentScene.createNode("Shape");
let Appearance98 = browser.currentScene.createNode("Appearance");
Appearance98.USE = "SegmentLine";
appearance = Appearance98;

let IndexedLineSet99 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet99.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.point = new X3D.MFVec3f([0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
coord = Coordinate100;

geometry = IndexedLineSet99;

HAnimSegment93ZZZ.children[1] = Shape97;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.DEF = "Joe_l_iliocristale";
HAnimSite101.name = "l_iliocristale";
HAnimSite101.translation = new X3D.SFVec3f([0.1425,1.065,0.0033]);
let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "sitebox";
HAnimSite101YYY.children = new X3D.MFNode();

HAnimSite101ZZZ.children[0] = Shape102;

HAnimSegment93ZZZ.children[2] = HAnimSite101;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.DEF = "Joe_l_trochanterion";
HAnimSite103.name = "l_trochanterion";
HAnimSite103.translation = new X3D.SFVec3f([0.15,0.9,-0.01]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "sitebox";
HAnimSite103YYY.children = new X3D.MFNode();

HAnimSite103ZZZ.children[0] = Shape104;

HAnimSegment93ZZZ.children[3] = HAnimSite103;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.DEF = "Joe_r_iliocristale";
HAnimSite105.name = "r_iliocristale";
HAnimSite105.translation = new X3D.SFVec3f([-0.1425,1.065,0.0033]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "sitebox";
HAnimSite105YYY.children = new X3D.MFNode();

HAnimSite105ZZZ.children[0] = Shape106;

HAnimSegment93ZZZ.children[4] = HAnimSite105;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.DEF = "Joe_r_trochanterion";
HAnimSite107.name = "r_trochanterion";
HAnimSite107.translation = new X3D.SFVec3f([-0.15,0.9,-0.01]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "sitebox";
HAnimSite107YYY.children = new X3D.MFNode();

HAnimSite107ZZZ.children[0] = Shape108;

HAnimSegment93ZZZ.children[5] = HAnimSite107;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.DEF = "Joe_l_asis";
HAnimSite109.name = "l_asis";
HAnimSite109.translation = new X3D.SFVec3f([0.0935,1.03,0.075]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "sitebox";
HAnimSite109YYY.children = new X3D.MFNode();

HAnimSite109ZZZ.children[0] = Shape110;

HAnimSegment93ZZZ.children[6] = HAnimSite109;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.DEF = "Joe_r_asis";
HAnimSite111.name = "r_asis";
HAnimSite111.translation = new X3D.SFVec3f([-0.0935,1.03,0.075]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "sitebox";
HAnimSite111YYY.children = new X3D.MFNode();

HAnimSite111ZZZ.children[0] = Shape112;

HAnimSegment93ZZZ.children[7] = HAnimSite111;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.DEF = "Joe_l_psis";
HAnimSite113.name = "l_psis";
HAnimSite113.translation = new X3D.SFVec3f([0.0773,1.019,-0.12]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "sitebox";
HAnimSite113YYY.children = new X3D.MFNode();

HAnimSite113ZZZ.children[0] = Shape114;

HAnimSegment93ZZZ.children[8] = HAnimSite113;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.DEF = "Joe_r_psis";
HAnimSite115.name = "r_psis";
HAnimSite115.translation = new X3D.SFVec3f([-0.0773,1.019,-0.12]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "sitebox";
HAnimSite115YYY.children = new X3D.MFNode();

HAnimSite115ZZZ.children[0] = Shape116;

HAnimSegment93ZZZ.children[9] = HAnimSite115;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.DEF = "Joe_floormarker";
HAnimSite117.name = "floormarker";
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.scale = new X3D.SFVec3f([3,3,3]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "sitebox";
Transform118YYY.child = new X3D.undefined();

Transform118ZZZ.child[0] = Shape119;

HAnimSite117YYY.children = new X3D.MFNode();

HAnimSite117ZZZ.children[0] = Transform118;

HAnimSegment93ZZZ.children[10] = HAnimSite117;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.DEF = "Joe_crotch";
HAnimSite120.name = "crotch";
HAnimSite120.translation = new X3D.SFVec3f([0,0.87,-0.022]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "sitebox";
HAnimSite120YYY.children = new X3D.MFNode();

HAnimSite120ZZZ.children[0] = Shape121;

HAnimSegment93ZZZ.children[11] = HAnimSite120;

HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimSegment93;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "Joe_l_hip";
HAnimJoint122.name = "l_hip";
HAnimJoint122.rotation = new X3D.SFRotation([-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996]);
HAnimJoint122.center = new X3D.SFVec3f([0.1,0.92,0]);
HAnimJoint122.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint122.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.DEF = "Joe_l_thigh";
HAnimSegment123.name = "l_thigh";
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.translation = new X3D.SFVec3f([0.1,0.92,0]);
let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "jointbox";
Transform124YYY.child = new X3D.undefined();

Transform124ZZZ.child[0] = Shape125;

HAnimSegment123YYY.children = new X3D.MFNode();

HAnimSegment123ZZZ.children[0] = Transform124;

let Shape126 = browser.currentScene.createNode("Shape");
let Appearance127 = browser.currentScene.createNode("Appearance");
Appearance127.USE = "SegmentLine";
appearance = Appearance127;

let IndexedLineSet128 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet128.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new X3D.MFVec3f([0.1,0.92,0,0.115,0.466,0]);
coord = Coordinate129;

geometry = IndexedLineSet128;

HAnimSegment123ZZZ.children[1] = Shape126;

let Transform130 = browser.currentScene.createNode("Transform");
Transform130.translation = new X3D.SFVec3f([0.1,0.9,0.0775]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "skinsphere";
Transform130YYY.child = new X3D.undefined();

Transform130ZZZ.child[0] = Shape131;

HAnimSegment123ZZZ.children[2] = Transform130;

let Transform132 = browser.currentScene.createNode("Transform");
Transform132.translation = new X3D.SFVec3f([0.079,0.92,-0.14]);
let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "skinsphere";
Transform132YYY.child = new X3D.undefined();

Transform132ZZZ.child[0] = Shape133;

HAnimSegment123ZZZ.children[3] = Transform132;

let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new X3D.SFVec3f([0.171,0.65,0]);
let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "skinsphere";
Transform134YYY.child = new X3D.undefined();

Transform134ZZZ.child[0] = Shape135;

HAnimSegment123ZZZ.children[4] = Transform134;

let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new X3D.SFVec3f([0.02,0.65,0]);
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "skinsphere";
Transform136YYY.child = new X3D.undefined();

Transform136ZZZ.child[0] = Shape137;

HAnimSegment123ZZZ.children[5] = Transform136;

let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new X3D.SFVec3f([0.1,0.65,-0.08]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "skinsphere";
Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape139;

HAnimSegment123ZZZ.children[6] = Transform138;

let Transform140 = browser.currentScene.createNode("Transform");
Transform140.translation = new X3D.SFVec3f([0.1,0.65,0.07]);
let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "skinsphere";
Transform140YYY.child = new X3D.undefined();

Transform140ZZZ.child[0] = Shape141;

HAnimSegment123ZZZ.children[7] = Transform140;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.DEF = "Joe_l_knee_crease";
HAnimSite142.name = "l_knee_crease";
HAnimSite142.translation = new X3D.SFVec3f([0.115,0.466,-0.055]);
let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "sitebox";
HAnimSite142YYY.children = new X3D.MFNode();

HAnimSite142ZZZ.children[0] = Shape143;

HAnimSegment123ZZZ.children[8] = HAnimSite142;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.DEF = "Joe_l_femoral_lateral_epicn";
HAnimSite144.name = "l_femoral_lateral_epicn";
HAnimSite144.translation = new X3D.SFVec3f([0.17,0.466,0]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "sitebox";
HAnimSite144YYY.children = new X3D.MFNode();

HAnimSite144ZZZ.children[0] = Shape145;

HAnimSegment123ZZZ.children[9] = HAnimSite144;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.DEF = "Joe_l_femoral_medial_epicn";
HAnimSite146.name = "l_femoral_medial_epicn";
HAnimSite146.translation = new X3D.SFVec3f([0.05,0.466,0]);
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "sitebox";
HAnimSite146YYY.children = new X3D.MFNode();

HAnimSite146ZZZ.children[0] = Shape147;

HAnimSegment123ZZZ.children[10] = HAnimSite146;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimSegment123;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.DEF = "Joe_l_knee";
HAnimJoint148.name = "l_knee";
HAnimJoint148.rotation = new X3D.SFRotation([1.00000000000001,0,0,0.224421281773429]);
HAnimJoint148.center = new X3D.SFVec3f([0.115,0.466,0]);
HAnimJoint148.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint148.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.DEF = "Joe_l_calf";
HAnimSegment149.name = "l_calf";
let Transform150 = browser.currentScene.createNode("Transform");
Transform150.translation = new X3D.SFVec3f([0.115,0.466,0]);
let Shape151 = browser.currentScene.createNode("Shape");
Shape151.USE = "jointbox";
Transform150YYY.child = new X3D.undefined();

Transform150ZZZ.child[0] = Shape151;

HAnimSegment149YYY.children = new X3D.MFNode();

HAnimSegment149ZZZ.children[0] = Transform150;

let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
Appearance153.USE = "SegmentLine";
appearance = Appearance153;

let IndexedLineSet154 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet154.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate155 = browser.currentScene.createNode("Coordinate");
Coordinate155.point = new X3D.MFVec3f([0.115,0.466,0,0.1,0.069,0]);
coord = Coordinate155;

geometry = IndexedLineSet154;

HAnimSegment149ZZZ.children[1] = Shape152;

let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new X3D.SFVec3f([0.115,0.466,0.06]);
let Shape157 = browser.currentScene.createNode("Shape");
Shape157.USE = "skinsphere";
Transform156YYY.child = new X3D.undefined();

Transform156ZZZ.child[0] = Shape157;

HAnimSegment149ZZZ.children[2] = Transform156;

let Transform158 = browser.currentScene.createNode("Transform");
Transform158.translation = new X3D.SFVec3f([0.115,0.466,-0.055]);
let Shape159 = browser.currentScene.createNode("Shape");
Shape159.USE = "skinsphere";
Transform158YYY.child = new X3D.undefined();

Transform158ZZZ.child[0] = Shape159;

HAnimSegment149ZZZ.children[3] = Transform158;

let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new X3D.SFVec3f([0.17,0.466,0]);
let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "skinsphere";
Transform160YYY.child = new X3D.undefined();

Transform160ZZZ.child[0] = Shape161;

HAnimSegment149ZZZ.children[4] = Transform160;

let Transform162 = browser.currentScene.createNode("Transform");
Transform162.translation = new X3D.SFVec3f([0.05,0.466,0]);
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "skinsphere";
Transform162YYY.child = new X3D.undefined();

Transform162ZZZ.child[0] = Shape163;

HAnimSegment149ZZZ.children[5] = Transform162;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.translation = new X3D.SFVec3f([0.17,0.3,0]);
let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "skinsphere";
Transform164YYY.child = new X3D.undefined();

Transform164ZZZ.child[0] = Shape165;

HAnimSegment149ZZZ.children[6] = Transform164;

let Transform166 = browser.currentScene.createNode("Transform");
Transform166.translation = new X3D.SFVec3f([0.06,0.3,0]);
let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "skinsphere";
Transform166YYY.child = new X3D.undefined();

Transform166ZZZ.child[0] = Shape167;

HAnimSegment149ZZZ.children[7] = Transform166;

let Transform168 = browser.currentScene.createNode("Transform");
Transform168.translation = new X3D.SFVec3f([0.1,0.3,-0.05]);
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "skinsphere";
Transform168YYY.child = new X3D.undefined();

Transform168ZZZ.child[0] = Shape169;

HAnimSegment149ZZZ.children[8] = Transform168;

let Transform170 = browser.currentScene.createNode("Transform");
Transform170.translation = new X3D.SFVec3f([0.1,0.3,0.05]);
let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "skinsphere";
Transform170YYY.child = new X3D.undefined();

Transform170ZZZ.child[0] = Shape171;

HAnimSegment149ZZZ.children[9] = Transform170;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.DEF = "Joe_l_lateral_malleolus";
HAnimSite172.name = "l_lateral_malleolus";
HAnimSite172.translation = new X3D.SFVec3f([0.15,0.07,0]);
let Shape173 = browser.currentScene.createNode("Shape");
Shape173.USE = "sitebox";
HAnimSite172YYY.children = new X3D.MFNode();

HAnimSite172ZZZ.children[0] = Shape173;

HAnimSegment149ZZZ.children[10] = HAnimSite172;

let HAnimSite174 = browser.currentScene.createNode("HAnimSite");
HAnimSite174.DEF = "Joe_l_medial_malleolus";
HAnimSite174.name = "l_medial_malleolus";
HAnimSite174.translation = new X3D.SFVec3f([0.085,0.086,0.0125]);
let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "sitebox";
HAnimSite174YYY.children = new X3D.MFNode();

HAnimSite174ZZZ.children[0] = Shape175;

HAnimSegment149ZZZ.children[11] = HAnimSite174;

HAnimJoint148YYY.children = new X3D.MFNode();

HAnimJoint148ZZZ.children[0] = HAnimSegment149;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.DEF = "Joe_l_ankle";
HAnimJoint176.name = "l_ankle";
HAnimJoint176.rotation = new X3D.SFRotation([-1.00000000000007,0,0,0.0655639608914055]);
HAnimJoint176.center = new X3D.SFVec3f([0.115,0.069,0]);
HAnimJoint176.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint176.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.DEF = "Joe_l_hindfoot";
HAnimSegment177.name = "l_hindfoot";
let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new X3D.SFVec3f([0.115,0.069,0]);
let Shape179 = browser.currentScene.createNode("Shape");
Shape179.USE = "jointbox";
Transform178YYY.child = new X3D.undefined();

Transform178ZZZ.child[0] = Shape179;

HAnimSegment177YYY.children = new X3D.MFNode();

HAnimSegment177ZZZ.children[0] = Transform178;

let Shape180 = browser.currentScene.createNode("Shape");
let Appearance181 = browser.currentScene.createNode("Appearance");
Appearance181.USE = "SegmentLine";
appearance = Appearance181;

let IndexedLineSet182 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet182.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new X3D.MFVec3f([0.1,0.069,0,0.115,0.031,0.03]);
coord = Coordinate183;

geometry = IndexedLineSet182;

HAnimSegment177ZZZ.children[1] = Shape180;

let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new X3D.SFVec3f([0.15,0.07,0]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "skinsphere";
Transform184YYY.child = new X3D.undefined();

Transform184ZZZ.child[0] = Shape185;

HAnimSegment177ZZZ.children[2] = Transform184;

let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new X3D.SFVec3f([0.085,0.086,0.0125]);
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "skinsphere";
Transform186YYY.child = new X3D.undefined();

Transform186ZZZ.child[0] = Shape187;

HAnimSegment177ZZZ.children[3] = Transform186;

let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new X3D.SFVec3f([0.115,0.069,-0.045]);
let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "skinsphere";
Transform188YYY.child = new X3D.undefined();

Transform188ZZZ.child[0] = Shape189;

HAnimSegment177ZZZ.children[4] = Transform188;

let Transform190 = browser.currentScene.createNode("Transform");
Transform190.translation = new X3D.SFVec3f([0.117,0.0975,0.0615]);
let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "skinsphere";
Transform190YYY.child = new X3D.undefined();

Transform190ZZZ.child[0] = Shape191;

HAnimSegment177ZZZ.children[5] = Transform190;

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.DEF = "Joe_l_sphyrion";
HAnimSite192.name = "l_sphyrion";
HAnimSite192.translation = new X3D.SFVec3f([0.09,0.056,0.0125]);
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "sitebox";
HAnimSite192YYY.children = new X3D.MFNode();

HAnimSite192ZZZ.children[0] = Shape193;

HAnimSegment177ZZZ.children[6] = HAnimSite192;

let HAnimSite194 = browser.currentScene.createNode("HAnimSite");
HAnimSite194.DEF = "Joe_l_calcaneous_post";
HAnimSite194.name = "l_calcaneous_post";
HAnimSite194.translation = new X3D.SFVec3f([0.115,0.04,-0.055]);
let Shape195 = browser.currentScene.createNode("Shape");
Shape195.USE = "sitebox";
HAnimSite194YYY.children = new X3D.MFNode();

HAnimSite194ZZZ.children[0] = Shape195;

HAnimSegment177ZZZ.children[7] = HAnimSite194;

HAnimJoint176YYY.children = new X3D.MFNode();

HAnimJoint176ZZZ.children[0] = HAnimSegment177;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.DEF = "Joe_l_subtalar";
HAnimJoint196.name = "l_subtalar";
HAnimJoint196.center = new X3D.SFVec3f([0.115,0.031,0.03]);
HAnimJoint196.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint196.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.DEF = "Joe_l_midproximal";
HAnimSegment197.name = "l_midproximal";
let Transform198 = browser.currentScene.createNode("Transform");
Transform198.translation = new X3D.SFVec3f([0.115,0.031,0.03]);
let Shape199 = browser.currentScene.createNode("Shape");
Shape199.USE = "jointbox";
Transform198YYY.child = new X3D.undefined();

Transform198ZZZ.child[0] = Shape199;

HAnimSegment197YYY.children = new X3D.MFNode();

HAnimSegment197ZZZ.children[0] = Transform198;

let Shape200 = browser.currentScene.createNode("Shape");
let Appearance201 = browser.currentScene.createNode("Appearance");
Appearance201.USE = "SegmentLine";
appearance = Appearance201;

let IndexedLineSet202 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet202.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new X3D.MFVec3f([0.115,0.031,0.03,0.115,0.037,0.09]);
coord = Coordinate203;

geometry = IndexedLineSet202;

HAnimSegment197ZZZ.children[1] = Shape200;

let Transform204 = browser.currentScene.createNode("Transform");
Transform204.translation = new X3D.SFVec3f([0.1375,0.006,-0.03]);
let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "skinsphere";
Transform204YYY.child = new X3D.undefined();

Transform204ZZZ.child[0] = Shape205;

HAnimSegment197ZZZ.children[2] = Transform204;

let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new X3D.SFVec3f([0.095,0.006,-0.03]);
let Shape207 = browser.currentScene.createNode("Shape");
Shape207.USE = "skinsphere";
Transform206YYY.child = new X3D.undefined();

Transform206ZZZ.child[0] = Shape207;

HAnimSegment197ZZZ.children[3] = Transform206;

let Transform208 = browser.currentScene.createNode("Transform");
Transform208.translation = new X3D.SFVec3f([0.115,0.015,-0.045]);
let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "skinsphere";
Transform208YYY.child = new X3D.undefined();

Transform208ZZZ.child[0] = Shape209;

HAnimSegment197ZZZ.children[4] = Transform208;

HAnimJoint196YYY.children = new X3D.MFNode();

HAnimJoint196ZZZ.children[0] = HAnimSegment197;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.DEF = "Joe_l_midtarsal";
HAnimJoint210.name = "l_midtarsal";
HAnimJoint210.rotation = new X3D.SFRotation([1.00000000000005,0,0,6.19381467367623]);
HAnimJoint210.center = new X3D.SFVec3f([0.115,0.037,0.09]);
HAnimJoint210.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint210.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.DEF = "Joe_l_middistal";
HAnimSegment211.name = "l_middistal";
let Transform212 = browser.currentScene.createNode("Transform");
Transform212.translation = new X3D.SFVec3f([0.115,0.037,0.09]);
let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "jointbox";
Transform212YYY.child = new X3D.undefined();

Transform212ZZZ.child[0] = Shape213;

HAnimSegment211YYY.children = new X3D.MFNode();

HAnimSegment211ZZZ.children[0] = Transform212;

let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
Appearance215.USE = "SegmentLine";
appearance = Appearance215;

let IndexedLineSet216 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet216.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new X3D.MFVec3f([0.115,0.037,0.09,0.115,0.02,0.122]);
coord = Coordinate217;

geometry = IndexedLineSet216;

HAnimSegment211ZZZ.children[1] = Shape214;

let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new X3D.SFVec3f([0.115,0.06,0.1]);
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "skinsphere";
Transform218YYY.child = new X3D.undefined();

Transform218ZZZ.child[0] = Shape219;

HAnimSegment211ZZZ.children[2] = Transform218;

let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new X3D.SFVec3f([0.115,0,0.07]);
let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "skinsphere";
Transform220YYY.child = new X3D.undefined();

Transform220ZZZ.child[0] = Shape221;

HAnimSegment211ZZZ.children[3] = Transform220;

let Transform222 = browser.currentScene.createNode("Transform");
Transform222.translation = new X3D.SFVec3f([0.165,0,0.07]);
let Shape223 = browser.currentScene.createNode("Shape");
Shape223.USE = "skinsphere";
Transform222YYY.child = new X3D.undefined();

Transform222ZZZ.child[0] = Shape223;

HAnimSegment211ZZZ.children[4] = Transform222;

let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new X3D.SFVec3f([0.095,0,0.07]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "skinsphere";
Transform224YYY.child = new X3D.undefined();

Transform224ZZZ.child[0] = Shape225;

HAnimSegment211ZZZ.children[5] = Transform224;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.DEF = "Joe_l_metatarsal_pha1";
HAnimSite226.name = "l_metatarsal_pha1";
HAnimSite226.translation = new X3D.SFVec3f([0.087,0.01,0.122]);
let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "sitebox";
HAnimSite226YYY.children = new X3D.MFNode();

HAnimSite226ZZZ.children[0] = Shape227;

HAnimSegment211ZZZ.children[6] = HAnimSite226;

HAnimJoint210YYY.children = new X3D.MFNode();

HAnimJoint210ZZZ.children[0] = HAnimSegment211;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.DEF = "Joe_l_metatarsal";
HAnimJoint228.name = "l_metatarsal";
HAnimJoint228.rotation = new X3D.SFRotation([1.00000000000253,0,0,0.0175699446988144]);
HAnimJoint228.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint228.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint228.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.DEF = "Joe_l_forefoot";
HAnimSegment229.name = "l_forefoot";
let Transform230 = browser.currentScene.createNode("Transform");
Transform230.translation = new X3D.SFVec3f([0.115,0.02,0.13]);
let Shape231 = browser.currentScene.createNode("Shape");
Shape231.USE = "jointbox";
Transform230YYY.child = new X3D.undefined();

Transform230ZZZ.child[0] = Shape231;

HAnimSegment229YYY.children = new X3D.MFNode();

HAnimSegment229ZZZ.children[0] = Transform230;

let Shape232 = browser.currentScene.createNode("Shape");
let Appearance233 = browser.currentScene.createNode("Appearance");
Appearance233.USE = "SegmentLine";
appearance = Appearance233;

let IndexedLineSet234 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet234.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new X3D.MFVec3f([0.115,0.02,0.122,0.132,0.013,0.19]);
coord = Coordinate235;

geometry = IndexedLineSet234;

HAnimSegment229ZZZ.children[1] = Shape232;

let Transform236 = browser.currentScene.createNode("Transform");
Transform236.translation = new X3D.SFVec3f([0.115,0.04,0.13]);
let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "skinsphere";
Transform236YYY.child = new X3D.undefined();

Transform236ZZZ.child[0] = Shape237;

HAnimSegment229ZZZ.children[2] = Transform236;

let Transform238 = browser.currentScene.createNode("Transform");
Transform238.translation = new X3D.SFVec3f([0.125,0,0.12]);
let Shape239 = browser.currentScene.createNode("Shape");
Shape239.USE = "skinsphere";
Transform238YYY.child = new X3D.undefined();

Transform238ZZZ.child[0] = Shape239;

HAnimSegment229ZZZ.children[3] = Transform238;

let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new X3D.SFVec3f([0.165,0,0.12]);
let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "skinsphere";
Transform240YYY.child = new X3D.undefined();

Transform240ZZZ.child[0] = Shape241;

HAnimSegment229ZZZ.children[4] = Transform240;

let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new X3D.SFVec3f([0.087,0,0.122]);
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "skinsphere";
Transform242YYY.child = new X3D.undefined();

Transform242ZZZ.child[0] = Shape243;

HAnimSegment229ZZZ.children[5] = Transform242;

let Transform244 = browser.currentScene.createNode("Transform");
Transform244.translation = new X3D.SFVec3f([0.09,0.012,0.188]);
let Shape245 = browser.currentScene.createNode("Shape");
Shape245.USE = "skinsphere";
Transform244YYY.child = new X3D.undefined();

Transform244ZZZ.child[0] = Shape245;

HAnimSegment229ZZZ.children[6] = Transform244;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new X3D.SFVec3f([0.11,0.011,0.19]);
let Shape247 = browser.currentScene.createNode("Shape");
Shape247.USE = "skinsphere";
Transform246YYY.child = new X3D.undefined();

Transform246ZZZ.child[0] = Shape247;

HAnimSegment229ZZZ.children[7] = Transform246;

let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new X3D.SFVec3f([0.128,0.011,0.185]);
let Shape249 = browser.currentScene.createNode("Shape");
Shape249.USE = "skinsphere";
Transform248YYY.child = new X3D.undefined();

Transform248ZZZ.child[0] = Shape249;

HAnimSegment229ZZZ.children[8] = Transform248;

let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new X3D.SFVec3f([0.142,0.011,0.178]);
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "skinsphere";
Transform250YYY.child = new X3D.undefined();

Transform250ZZZ.child[0] = Shape251;

HAnimSegment229ZZZ.children[9] = Transform250;

let Transform252 = browser.currentScene.createNode("Transform");
Transform252.translation = new X3D.SFVec3f([0.154,0.01,0.168]);
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "skinsphere";
Transform252YYY.child = new X3D.undefined();

Transform252ZZZ.child[0] = Shape253;

HAnimSegment229ZZZ.children[10] = Transform252;

let HAnimSite254 = browser.currentScene.createNode("HAnimSite");
HAnimSite254.DEF = "Joe_l_metatarsal_pha5";
HAnimSite254.name = "l_metatarsal_pha5";
HAnimSite254.translation = new X3D.SFVec3f([0.165,0.01,0.12]);
let Shape255 = browser.currentScene.createNode("Shape");
Shape255.USE = "sitebox";
HAnimSite254YYY.children = new X3D.MFNode();

HAnimSite254ZZZ.children[0] = Shape255;

HAnimSegment229ZZZ.children[11] = HAnimSite254;

let HAnimSite256 = browser.currentScene.createNode("HAnimSite");
HAnimSite256.DEF = "Joe_l_digit2";
HAnimSite256.name = "l_digit2";
HAnimSite256.translation = new X3D.SFVec3f([0.11,0.011,0.19]);
let Shape257 = browser.currentScene.createNode("Shape");
Shape257.USE = "sitebox";
HAnimSite256YYY.children = new X3D.MFNode();

HAnimSite256ZZZ.children[0] = Shape257;

HAnimSegment229ZZZ.children[12] = HAnimSite256;

HAnimJoint228YYY.children = new X3D.MFNode();

HAnimJoint228ZZZ.children[0] = HAnimSegment229;

HAnimJoint210ZZZ.children[1] = HAnimJoint228;

HAnimJoint196ZZZ.children[1] = HAnimJoint210;

HAnimJoint176ZZZ.children[1] = HAnimJoint196;

HAnimJoint148ZZZ.children[1] = HAnimJoint176;

HAnimJoint122ZZZ.children[1] = HAnimJoint148;

HAnimJoint92ZZZ.children[1] = HAnimJoint122;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.DEF = "Joe_r_hip";
HAnimJoint258.name = "r_hip";
HAnimJoint258.rotation = new X3D.SFRotation([0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696]);
HAnimJoint258.center = new X3D.SFVec3f([-0.1,0.92,0]);
HAnimJoint258.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101]);
HAnimJoint258.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.DEF = "Joe_r_thigh";
HAnimSegment259.name = "r_thigh";
let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new X3D.SFVec3f([-0.1,0.92,0]);
let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "jointbox";
Transform260YYY.child = new X3D.undefined();

Transform260ZZZ.child[0] = Shape261;

HAnimSegment259YYY.children = new X3D.MFNode();

HAnimSegment259ZZZ.children[0] = Transform260;

let Shape262 = browser.currentScene.createNode("Shape");
let Appearance263 = browser.currentScene.createNode("Appearance");
Appearance263.USE = "SegmentLine";
appearance = Appearance263;

let IndexedLineSet264 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet264.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate265 = browser.currentScene.createNode("Coordinate");
Coordinate265.point = new X3D.MFVec3f([-0.1,0.92,0,-0.1,0.4913,0]);
coord = Coordinate265;

geometry = IndexedLineSet264;

HAnimSegment259ZZZ.children[1] = Shape262;

let Transform266 = browser.currentScene.createNode("Transform");
Transform266.translation = new X3D.SFVec3f([-0.079,0.92,-0.14]);
let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "skinsphere";
Transform266YYY.child = new X3D.undefined();

Transform266ZZZ.child[0] = Shape267;

HAnimSegment259ZZZ.children[2] = Transform266;

let Transform268 = browser.currentScene.createNode("Transform");
Transform268.translation = new X3D.SFVec3f([-0.1,0.9,0.075]);
let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "skinsphere";
Transform268YYY.child = new X3D.undefined();

Transform268ZZZ.child[0] = Shape269;

HAnimSegment259ZZZ.children[3] = Transform268;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new X3D.SFVec3f([-0.171,0.65,0]);
let Shape271 = browser.currentScene.createNode("Shape");
Shape271.USE = "skinsphere";
Transform270YYY.child = new X3D.undefined();

Transform270ZZZ.child[0] = Shape271;

HAnimSegment259ZZZ.children[4] = Transform270;

let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new X3D.SFVec3f([-0.02,0.65,0]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "skinsphere";
Transform272YYY.child = new X3D.undefined();

Transform272ZZZ.child[0] = Shape273;

HAnimSegment259ZZZ.children[5] = Transform272;

let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new X3D.SFVec3f([-0.1,0.65,-0.08]);
let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "skinsphere";
Transform274YYY.child = new X3D.undefined();

Transform274ZZZ.child[0] = Shape275;

HAnimSegment259ZZZ.children[6] = Transform274;

let Transform276 = browser.currentScene.createNode("Transform");
Transform276.translation = new X3D.SFVec3f([-0.1,0.65,0.07]);
let Shape277 = browser.currentScene.createNode("Shape");
Shape277.USE = "skinsphere";
Transform276YYY.child = new X3D.undefined();

Transform276ZZZ.child[0] = Shape277;

HAnimSegment259ZZZ.children[7] = Transform276;

let HAnimSite278 = browser.currentScene.createNode("HAnimSite");
HAnimSite278.DEF = "Joe_r_knee_crease";
HAnimSite278.name = "r_knee_crease";
HAnimSite278.translation = new X3D.SFVec3f([-0.115,0.466,-0.055]);
let Shape279 = browser.currentScene.createNode("Shape");
Shape279.USE = "sitebox";
HAnimSite278YYY.children = new X3D.MFNode();

HAnimSite278ZZZ.children[0] = Shape279;

HAnimSegment259ZZZ.children[8] = HAnimSite278;

let HAnimSite280 = browser.currentScene.createNode("HAnimSite");
HAnimSite280.DEF = "Joe_r_femoral_lateral_epicn";
HAnimSite280.name = "r_femoral_lateral_epicn";
HAnimSite280.translation = new X3D.SFVec3f([-0.17,0.466,0]);
let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "sitebox";
HAnimSite280YYY.children = new X3D.MFNode();

HAnimSite280ZZZ.children[0] = Shape281;

HAnimSegment259ZZZ.children[9] = HAnimSite280;

let HAnimSite282 = browser.currentScene.createNode("HAnimSite");
HAnimSite282.DEF = "Joe_r_femoral_medial_epicn";
HAnimSite282.name = "r_femoral_medial_epicn";
HAnimSite282.translation = new X3D.SFVec3f([-0.05,0.466,0]);
let Shape283 = browser.currentScene.createNode("Shape");
Shape283.USE = "sitebox";
HAnimSite282YYY.children = new X3D.MFNode();

HAnimSite282ZZZ.children[0] = Shape283;

HAnimSegment259ZZZ.children[10] = HAnimSite282;

HAnimJoint258YYY.children = new X3D.MFNode();

HAnimJoint258ZZZ.children[0] = HAnimSegment259;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.DEF = "Joe_r_knee";
HAnimJoint284.name = "r_knee";
HAnimJoint284.rotation = new X3D.SFRotation([0.999999999999952,0,0,0.086543259681602]);
HAnimJoint284.center = new X3D.SFVec3f([-0.05,0.466,0]);
HAnimJoint284.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369]);
HAnimJoint284.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.DEF = "Joe_r_calf";
HAnimSegment285.name = "r_calf";
let Transform286 = browser.currentScene.createNode("Transform");
Transform286.translation = new X3D.SFVec3f([-0.1,0.4913,0]);
let Shape287 = browser.currentScene.createNode("Shape");
Shape287.USE = "jointbox";
Transform286YYY.child = new X3D.undefined();

Transform286ZZZ.child[0] = Shape287;

HAnimSegment285YYY.children = new X3D.MFNode();

HAnimSegment285ZZZ.children[0] = Transform286;

let Shape288 = browser.currentScene.createNode("Shape");
let Appearance289 = browser.currentScene.createNode("Appearance");
Appearance289.USE = "SegmentLine";
appearance = Appearance289;

let IndexedLineSet290 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet290.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate291 = browser.currentScene.createNode("Coordinate");
Coordinate291.point = new X3D.MFVec3f([-0.1,0.4913,0,-0.1,0.0712,0]);
coord = Coordinate291;

geometry = IndexedLineSet290;

HAnimSegment285ZZZ.children[1] = Shape288;

let Transform292 = browser.currentScene.createNode("Transform");
Transform292.translation = new X3D.SFVec3f([-0.115,0.466,0.06]);
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "skinsphere";
Transform292YYY.child = new X3D.undefined();

Transform292ZZZ.child[0] = Shape293;

HAnimSegment285ZZZ.children[2] = Transform292;

let Transform294 = browser.currentScene.createNode("Transform");
Transform294.translation = new X3D.SFVec3f([-0.115,0.466,-0.055]);
let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "skinsphere";
Transform294YYY.child = new X3D.undefined();

Transform294ZZZ.child[0] = Shape295;

HAnimSegment285ZZZ.children[3] = Transform294;

let Transform296 = browser.currentScene.createNode("Transform");
Transform296.translation = new X3D.SFVec3f([-0.17,0.466,0]);
let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "skinsphere";
Transform296YYY.child = new X3D.undefined();

Transform296ZZZ.child[0] = Shape297;

HAnimSegment285ZZZ.children[4] = Transform296;

let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new X3D.SFVec3f([-0.05,0.466,0]);
let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "skinsphere";
Transform298YYY.child = new X3D.undefined();

Transform298ZZZ.child[0] = Shape299;

HAnimSegment285ZZZ.children[5] = Transform298;

let Transform300 = browser.currentScene.createNode("Transform");
Transform300.translation = new X3D.SFVec3f([-0.17,0.3,0]);
let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "skinsphere";
Transform300YYY.child = new X3D.undefined();

Transform300ZZZ.child[0] = Shape301;

HAnimSegment285ZZZ.children[6] = Transform300;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new X3D.SFVec3f([-0.06,0.3,0]);
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.USE = "skinsphere";
Transform302YYY.child = new X3D.undefined();

Transform302ZZZ.child[0] = Shape303;

HAnimSegment285ZZZ.children[7] = Transform302;

let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new X3D.SFVec3f([-0.1,0.3,-0.05]);
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "skinsphere";
Transform304YYY.child = new X3D.undefined();

Transform304ZZZ.child[0] = Shape305;

HAnimSegment285ZZZ.children[8] = Transform304;

let Transform306 = browser.currentScene.createNode("Transform");
Transform306.translation = new X3D.SFVec3f([-0.1,0.3,0.05]);
let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "skinsphere";
Transform306YYY.child = new X3D.undefined();

Transform306ZZZ.child[0] = Shape307;

HAnimSegment285ZZZ.children[9] = Transform306;

let HAnimSite308 = browser.currentScene.createNode("HAnimSite");
HAnimSite308.DEF = "Joe_r_lateral_malleolus";
HAnimSite308.name = "r_lateral_malleolus";
HAnimSite308.translation = new X3D.SFVec3f([-0.15,0.07,0]);
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "sitebox";
HAnimSite308YYY.children = new X3D.MFNode();

HAnimSite308ZZZ.children[0] = Shape309;

HAnimSegment285ZZZ.children[10] = HAnimSite308;

let HAnimSite310 = browser.currentScene.createNode("HAnimSite");
HAnimSite310.DEF = "Joe_r_medial_malleolus";
HAnimSite310.name = "r_medial_malleolus";
HAnimSite310.translation = new X3D.SFVec3f([-0.085,0.086,0.0125]);
let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "sitebox";
HAnimSite310YYY.children = new X3D.MFNode();

HAnimSite310ZZZ.children[0] = Shape311;

HAnimSegment285ZZZ.children[11] = HAnimSite310;

HAnimJoint284YYY.children = new X3D.MFNode();

HAnimJoint284ZZZ.children[0] = HAnimSegment285;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.DEF = "Joe_r_ankle";
HAnimJoint312.name = "r_ankle";
HAnimJoint312.rotation = new X3D.SFRotation([-1.00000000000001,0,0,0.337435958789841]);
HAnimJoint312.center = new X3D.SFVec3f([-0.115,0.069,0]);
HAnimJoint312.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint312.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.DEF = "Joe_r_hindfoot";
HAnimSegment313.name = "r_hindfoot";
let Transform314 = browser.currentScene.createNode("Transform");
Transform314.translation = new X3D.SFVec3f([-0.1,0.0712,0]);
let Shape315 = browser.currentScene.createNode("Shape");
Shape315.USE = "jointbox";
Transform314YYY.child = new X3D.undefined();

Transform314ZZZ.child[0] = Shape315;

HAnimSegment313YYY.children = new X3D.MFNode();

HAnimSegment313ZZZ.children[0] = Transform314;

let Shape316 = browser.currentScene.createNode("Shape");
let Appearance317 = browser.currentScene.createNode("Appearance");
Appearance317.USE = "SegmentLine";
appearance = Appearance317;

let IndexedLineSet318 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet318.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate319 = browser.currentScene.createNode("Coordinate");
Coordinate319.point = new X3D.MFVec3f([-0.1,0.0712,0,-0.1,0.015,-0.01]);
coord = Coordinate319;

geometry = IndexedLineSet318;

HAnimSegment313ZZZ.children[1] = Shape316;

let Transform320 = browser.currentScene.createNode("Transform");
Transform320.translation = new X3D.SFVec3f([-0.15,0.07,0]);
let Shape321 = browser.currentScene.createNode("Shape");
Shape321.USE = "skinsphere";
Transform320YYY.child = new X3D.undefined();

Transform320ZZZ.child[0] = Shape321;

HAnimSegment313ZZZ.children[2] = Transform320;

let Transform322 = browser.currentScene.createNode("Transform");
Transform322.translation = new X3D.SFVec3f([-0.085,0.086,0.0125]);
let Shape323 = browser.currentScene.createNode("Shape");
Shape323.USE = "skinsphere";
Transform322YYY.child = new X3D.undefined();

Transform322ZZZ.child[0] = Shape323;

HAnimSegment313ZZZ.children[3] = Transform322;

let Transform324 = browser.currentScene.createNode("Transform");
Transform324.translation = new X3D.SFVec3f([-0.115,0.069,-0.045]);
let Shape325 = browser.currentScene.createNode("Shape");
Shape325.USE = "skinsphere";
Transform324YYY.child = new X3D.undefined();

Transform324ZZZ.child[0] = Shape325;

HAnimSegment313ZZZ.children[4] = Transform324;

let Transform326 = browser.currentScene.createNode("Transform");
Transform326.translation = new X3D.SFVec3f([-0.117,0.0975,0.0615]);
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "skinsphere";
Transform326YYY.child = new X3D.undefined();

Transform326ZZZ.child[0] = Shape327;

HAnimSegment313ZZZ.children[5] = Transform326;

let HAnimSite328 = browser.currentScene.createNode("HAnimSite");
HAnimSite328.DEF = "Joe_r_sphyrion";
HAnimSite328.name = "r_sphyrion";
HAnimSite328.translation = new X3D.SFVec3f([-0.09,0.056,0.0125]);
let Shape329 = browser.currentScene.createNode("Shape");
Shape329.USE = "sitebox";
HAnimSite328YYY.children = new X3D.MFNode();

HAnimSite328ZZZ.children[0] = Shape329;

HAnimSegment313ZZZ.children[6] = HAnimSite328;

let HAnimSite330 = browser.currentScene.createNode("HAnimSite");
HAnimSite330.DEF = "Joe_r_calcaneous_post";
HAnimSite330.name = "r_calcaneous_post";
HAnimSite330.translation = new X3D.SFVec3f([-0.115,0.04,-0.055]);
let Shape331 = browser.currentScene.createNode("Shape");
Shape331.USE = "sitebox";
HAnimSite330YYY.children = new X3D.MFNode();

HAnimSite330ZZZ.children[0] = Shape331;

HAnimSegment313ZZZ.children[7] = HAnimSite330;

HAnimJoint312YYY.children = new X3D.MFNode();

HAnimJoint312ZZZ.children[0] = HAnimSegment313;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.DEF = "Joe_r_subtalar";
HAnimJoint332.name = "r_subtalar";
HAnimJoint332.rotation = new X3D.SFRotation([1.00000000000014,0,0,0.0816433505734676]);
HAnimJoint332.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint332.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint332.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.DEF = "Joe_r_midproximal";
HAnimSegment333.name = "r_midproximal";
let Transform334 = browser.currentScene.createNode("Transform");
Transform334.translation = new X3D.SFVec3f([-0.1,0.015,-0.01]);
let Shape335 = browser.currentScene.createNode("Shape");
Shape335.USE = "jointbox";
Transform334YYY.child = new X3D.undefined();

Transform334ZZZ.child[0] = Shape335;

HAnimSegment333YYY.children = new X3D.MFNode();

HAnimSegment333ZZZ.children[0] = Transform334;

let Shape336 = browser.currentScene.createNode("Shape");
let Appearance337 = browser.currentScene.createNode("Appearance");
Appearance337.USE = "SegmentLine";
appearance = Appearance337;

let IndexedLineSet338 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet338.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new X3D.MFVec3f([-0.1,0.015,-0.01,-0.1,0.02,0.07]);
coord = Coordinate339;

geometry = IndexedLineSet338;

HAnimSegment333ZZZ.children[1] = Shape336;

let Transform340 = browser.currentScene.createNode("Transform");
Transform340.translation = new X3D.SFVec3f([-0.1375,0.006,-0.03]);
let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "skinsphere";
Transform340YYY.child = new X3D.undefined();

Transform340ZZZ.child[0] = Shape341;

HAnimSegment333ZZZ.children[2] = Transform340;

let Transform342 = browser.currentScene.createNode("Transform");
Transform342.translation = new X3D.SFVec3f([-0.095,0.006,-0.03]);
let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "skinsphere";
Transform342YYY.child = new X3D.undefined();

Transform342ZZZ.child[0] = Shape343;

HAnimSegment333ZZZ.children[3] = Transform342;

let Transform344 = browser.currentScene.createNode("Transform");
Transform344.translation = new X3D.SFVec3f([-0.095,0.006,-0.03]);
let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "skinsphere";
Transform344YYY.child = new X3D.undefined();

Transform344ZZZ.child[0] = Shape345;

HAnimSegment333ZZZ.children[4] = Transform344;

HAnimJoint332YYY.children = new X3D.MFNode();

HAnimJoint332ZZZ.children[0] = HAnimSegment333;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.DEF = "Joe_r_midtarsal";
HAnimJoint346.name = "r_midtarsal";
HAnimJoint346.rotation = new X3D.SFRotation([-1.00000000000001,0,0,0.14271113543743]);
HAnimJoint346.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint346.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint346.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment347.DEF = "Joe_r_middistal";
HAnimSegment347.name = "r_middistal";
let Transform348 = browser.currentScene.createNode("Transform");
Transform348.translation = new X3D.SFVec3f([-0.1,0.02,0.07]);
let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "jointbox";
Transform348YYY.child = new X3D.undefined();

Transform348ZZZ.child[0] = Shape349;

HAnimSegment347YYY.children = new X3D.MFNode();

HAnimSegment347ZZZ.children[0] = Transform348;

let Shape350 = browser.currentScene.createNode("Shape");
let Appearance351 = browser.currentScene.createNode("Appearance");
Appearance351.USE = "SegmentLine";
appearance = Appearance351;

let IndexedLineSet352 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet352.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate353 = browser.currentScene.createNode("Coordinate");
Coordinate353.point = new X3D.MFVec3f([-0.1,0.02,0.07,-0.1,0.01,0.14]);
coord = Coordinate353;

geometry = IndexedLineSet352;

HAnimSegment347ZZZ.children[1] = Shape350;

let Transform354 = browser.currentScene.createNode("Transform");
Transform354.translation = new X3D.SFVec3f([-0.115,0.06,0.1]);
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "skinsphere";
Transform354YYY.child = new X3D.undefined();

Transform354ZZZ.child[0] = Shape355;

HAnimSegment347ZZZ.children[2] = Transform354;

let Transform356 = browser.currentScene.createNode("Transform");
Transform356.translation = new X3D.SFVec3f([-0.115,0,0.07]);
let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "skinsphere";
Transform356YYY.child = new X3D.undefined();

Transform356ZZZ.child[0] = Shape357;

HAnimSegment347ZZZ.children[3] = Transform356;

let Transform358 = browser.currentScene.createNode("Transform");
Transform358.translation = new X3D.SFVec3f([-0.165,0,0.07]);
let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "skinsphere";
Transform358YYY.child = new X3D.undefined();

Transform358ZZZ.child[0] = Shape359;

HAnimSegment347ZZZ.children[4] = Transform358;

let Transform360 = browser.currentScene.createNode("Transform");
Transform360.translation = new X3D.SFVec3f([-0.165,0,0.07]);
let Shape361 = browser.currentScene.createNode("Shape");
Shape361.USE = "skinsphere";
Transform360YYY.child = new X3D.undefined();

Transform360ZZZ.child[0] = Shape361;

HAnimSegment347ZZZ.children[5] = Transform360;

let HAnimSite362 = browser.currentScene.createNode("HAnimSite");
HAnimSite362.DEF = "Joe_r_metatarsal_pha1";
HAnimSite362.name = "r_metatarsal_pha1";
HAnimSite362.translation = new X3D.SFVec3f([-0.115,0.02,0.122]);
let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "sitebox";
HAnimSite362YYY.children = new X3D.MFNode();

HAnimSite362ZZZ.children[0] = Shape363;

HAnimSegment347ZZZ.children[6] = HAnimSite362;

HAnimJoint346YYY.children = new X3D.MFNode();

HAnimJoint346ZZZ.children[0] = HAnimSegment347;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.DEF = "Joe_r_metatarsal";
HAnimJoint364.name = "r_metatarsal";
HAnimJoint364.rotation = new X3D.SFRotation([-1.00000000000001,0,0,0.264860122523209]);
HAnimJoint364.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint364.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint364.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment365 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment365.DEF = "Joe_r_forefoot";
HAnimSegment365.name = "r_forefoot";
let Transform366 = browser.currentScene.createNode("Transform");
Transform366.translation = new X3D.SFVec3f([-0.1086,0.01,0.14]);
let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "jointbox";
Transform366YYY.child = new X3D.undefined();

Transform366ZZZ.child[0] = Shape367;

HAnimSegment365YYY.children = new X3D.MFNode();

HAnimSegment365ZZZ.children[0] = Transform366;

let Shape368 = browser.currentScene.createNode("Shape");
let Appearance369 = browser.currentScene.createNode("Appearance");
Appearance369.USE = "SegmentLine";
appearance = Appearance369;

let IndexedLineSet370 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet370.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate371 = browser.currentScene.createNode("Coordinate");
Coordinate371.point = new X3D.MFVec3f([-0.1,0.01,0.14,-0.1043,0.0016,0.2]);
coord = Coordinate371;

geometry = IndexedLineSet370;

HAnimSegment365ZZZ.children[1] = Shape368;

let Transform372 = browser.currentScene.createNode("Transform");
Transform372.translation = new X3D.SFVec3f([-0.115,0.04,0.13]);
let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "skinsphere";
Transform372YYY.child = new X3D.undefined();

Transform372ZZZ.child[0] = Shape373;

HAnimSegment365ZZZ.children[2] = Transform372;

let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new X3D.SFVec3f([-0.125,0,0.12]);
let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "skinsphere";
Transform374YYY.child = new X3D.undefined();

Transform374ZZZ.child[0] = Shape375;

HAnimSegment365ZZZ.children[3] = Transform374;

let Transform376 = browser.currentScene.createNode("Transform");
Transform376.translation = new X3D.SFVec3f([-0.165,0,0.12]);
let Shape377 = browser.currentScene.createNode("Shape");
Shape377.USE = "skinsphere";
Transform376YYY.child = new X3D.undefined();

Transform376ZZZ.child[0] = Shape377;

HAnimSegment365ZZZ.children[4] = Transform376;

let Transform378 = browser.currentScene.createNode("Transform");
Transform378.translation = new X3D.SFVec3f([-0.087,0,0.122]);
let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "skinsphere";
Transform378YYY.child = new X3D.undefined();

Transform378ZZZ.child[0] = Shape379;

HAnimSegment365ZZZ.children[5] = Transform378;

let Transform380 = browser.currentScene.createNode("Transform");
Transform380.translation = new X3D.SFVec3f([-0.09,0.012,0.188]);
let Shape381 = browser.currentScene.createNode("Shape");
Shape381.USE = "skinsphere";
Transform380YYY.child = new X3D.undefined();

Transform380ZZZ.child[0] = Shape381;

HAnimSegment365ZZZ.children[6] = Transform380;

let Transform382 = browser.currentScene.createNode("Transform");
Transform382.translation = new X3D.SFVec3f([-0.11,0.011,0.19]);
let Shape383 = browser.currentScene.createNode("Shape");
Shape383.USE = "skinsphere";
Transform382YYY.child = new X3D.undefined();

Transform382ZZZ.child[0] = Shape383;

HAnimSegment365ZZZ.children[7] = Transform382;

let Transform384 = browser.currentScene.createNode("Transform");
Transform384.translation = new X3D.SFVec3f([-0.128,0.011,0.185]);
let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "skinsphere";
Transform384YYY.child = new X3D.undefined();

Transform384ZZZ.child[0] = Shape385;

HAnimSegment365ZZZ.children[8] = Transform384;

let Transform386 = browser.currentScene.createNode("Transform");
Transform386.translation = new X3D.SFVec3f([-0.142,0.011,0.178]);
let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "skinsphere";
Transform386YYY.child = new X3D.undefined();

Transform386ZZZ.child[0] = Shape387;

HAnimSegment365ZZZ.children[9] = Transform386;

let Transform388 = browser.currentScene.createNode("Transform");
Transform388.translation = new X3D.SFVec3f([-0.154,0.01,0.168]);
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "skinsphere";
Transform388YYY.child = new X3D.undefined();

Transform388ZZZ.child[0] = Shape389;

HAnimSegment365ZZZ.children[10] = Transform388;

let HAnimSite390 = browser.currentScene.createNode("HAnimSite");
HAnimSite390.DEF = "Joe_r_metatarsal_pha5";
HAnimSite390.name = "r_metatarsal_pha5";
HAnimSite390.translation = new X3D.SFVec3f([-0.165,0.01,0.12]);
let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "sitebox";
HAnimSite390YYY.children = new X3D.MFNode();

HAnimSite390ZZZ.children[0] = Shape391;

HAnimSegment365ZZZ.children[11] = HAnimSite390;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.DEF = "Joe_r_digit2";
HAnimSite392.name = "r_digit2";
HAnimSite392.translation = new X3D.SFVec3f([-0.11,0.011,0.19]);
let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "sitebox";
HAnimSite392YYY.children = new X3D.MFNode();

HAnimSite392ZZZ.children[0] = Shape393;

HAnimSegment365ZZZ.children[12] = HAnimSite392;

HAnimJoint364YYY.children = new X3D.MFNode();

HAnimJoint364ZZZ.children[0] = HAnimSegment365;

HAnimJoint346ZZZ.children[1] = HAnimJoint364;

HAnimJoint332ZZZ.children[1] = HAnimJoint346;

HAnimJoint312ZZZ.children[1] = HAnimJoint332;

HAnimJoint284ZZZ.children[1] = HAnimJoint312;

HAnimJoint258ZZZ.children[1] = HAnimJoint284;

HAnimJoint92ZZZ.children[2] = HAnimJoint258;

HAnimJoint80ZZZ.children[1] = HAnimJoint92;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.DEF = "Joe_vl5";
HAnimJoint394.name = "vl5";
HAnimJoint394.rotation = new X3D.SFRotation([-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253]);
HAnimJoint394.center = new X3D.SFVec3f([0,1.045,-0.095]);
HAnimJoint394.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint394.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment395.DEF = "Joe_toPelvisMarker";
HAnimSegment395.name = "toPelvis";
let Shape396 = browser.currentScene.createNode("Shape");
let Appearance397 = browser.currentScene.createNode("Appearance");
Appearance397.USE = "SegmentLine";
appearance = Appearance397;

let IndexedLineSet398 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet398.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate399 = browser.currentScene.createNode("Coordinate");
Coordinate399.point = new X3D.MFVec3f([0,1.045,-0.095,0,0.9149,0.0016]);
coord = Coordinate399;

geometry = IndexedLineSet398;

HAnimSegment395YYY.children = new X3D.MFNode();

HAnimSegment395ZZZ.children[0] = Shape396;

HAnimJoint394YYY.children = new X3D.MFNode();

HAnimJoint394ZZZ.children[0] = HAnimSegment395;

let HAnimSegment400 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment400.DEF = "Joe_l5";
HAnimSegment400.name = "l5";
let Shape401 = browser.currentScene.createNode("Shape");
let Appearance402 = browser.currentScene.createNode("Appearance");
Appearance402.USE = "SegmentLine";
appearance = Appearance402;

let IndexedLineSet403 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet403.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new X3D.MFVec3f([0,1.045,-0.095,0,1.068,-0.085]);
coord = Coordinate404;

geometry = IndexedLineSet403;

HAnimSegment400YYY.children = new X3D.MFNode();

HAnimSegment400ZZZ.children[0] = Shape401;

let HAnimSite405 = browser.currentScene.createNode("HAnimSite");
HAnimSite405.DEF = "Joe_waist_preferred_post";
HAnimSite405.name = "waist_preferred_post";
HAnimSite405.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
let Shape406 = browser.currentScene.createNode("Shape");
Shape406.USE = "sitebox";
HAnimSite405YYY.children = new X3D.MFNode();

HAnimSite405ZZZ.children[0] = Shape406;

HAnimSegment400ZZZ.children[1] = HAnimSite405;

let HAnimSite407 = browser.currentScene.createNode("HAnimSite");
HAnimSite407.DEF = "Joe_navel";
HAnimSite407.name = "navel";
HAnimSite407.translation = new X3D.SFVec3f([0,1.07225,0.09]);
let Shape408 = browser.currentScene.createNode("Shape");
Shape408.USE = "sitebox";
HAnimSite407YYY.children = new X3D.MFNode();

HAnimSite407ZZZ.children[0] = Shape408;

HAnimSegment400ZZZ.children[2] = HAnimSite407;

HAnimJoint394ZZZ.children[1] = HAnimSegment400;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.DEF = "Joe_vl4";
HAnimJoint409.name = "vl4";
HAnimJoint409.center = new X3D.SFVec3f([0,1.068,-0.085]);
let HAnimSegment410 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment410.DEF = "Joe_l4";
HAnimSegment410.name = "l4";
let Shape411 = browser.currentScene.createNode("Shape");
let Appearance412 = browser.currentScene.createNode("Appearance");
Appearance412.USE = "SegmentLine";
appearance = Appearance412;

let IndexedLineSet413 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet413.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate414 = browser.currentScene.createNode("Coordinate");
Coordinate414.point = new X3D.MFVec3f([0,1.068,-0.085,0,1.092,-0.0725]);
coord = Coordinate414;

geometry = IndexedLineSet413;

HAnimSegment410YYY.children = new X3D.MFNode();

HAnimSegment410ZZZ.children[0] = Shape411;

let Transform415 = browser.currentScene.createNode("Transform");
Transform415.translation = new X3D.SFVec3f([0,1.068,-0.085]);
let Shape416 = browser.currentScene.createNode("Shape");
Shape416.USE = "jointbox";
Transform415YYY.child = new X3D.undefined();

Transform415ZZZ.child[0] = Shape416;

HAnimSegment410ZZZ.children[1] = Transform415;

HAnimJoint409YYY.children = new X3D.MFNode();

HAnimJoint409ZZZ.children[0] = HAnimSegment410;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.DEF = "Joe_vl3";
HAnimJoint417.name = "vl3";
HAnimJoint417.center = new X3D.SFVec3f([0,1.092,-0.0725]);
let HAnimSegment418 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment418.DEF = "Joe_l3";
HAnimSegment418.name = "l3";
let Shape419 = browser.currentScene.createNode("Shape");
let Appearance420 = browser.currentScene.createNode("Appearance");
Appearance420.USE = "SegmentLine";
appearance = Appearance420;

let IndexedLineSet421 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet421.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate422 = browser.currentScene.createNode("Coordinate");
Coordinate422.point = new X3D.MFVec3f([0,1.092,-0.0725,0,1.12,-0.065]);
coord = Coordinate422;

geometry = IndexedLineSet421;

HAnimSegment418YYY.children = new X3D.MFNode();

HAnimSegment418ZZZ.children[0] = Shape419;

let Transform423 = browser.currentScene.createNode("Transform");
Transform423.translation = new X3D.SFVec3f([0,1.092,-0.0725]);
let Shape424 = browser.currentScene.createNode("Shape");
Shape424.USE = "jointbox";
Transform423YYY.child = new X3D.undefined();

Transform423ZZZ.child[0] = Shape424;

HAnimSegment418ZZZ.children[1] = Transform423;

HAnimJoint417YYY.children = new X3D.MFNode();

HAnimJoint417ZZZ.children[0] = HAnimSegment418;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.DEF = "Joe_vl2";
HAnimJoint425.name = "vl2";
HAnimJoint425.center = new X3D.SFVec3f([0,1.12,-0.065]);
HAnimJoint425.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint425.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.7,1,0.8]);
let HAnimSegment426 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment426.DEF = "Joe_l2";
HAnimSegment426.name = "l2";
let Shape427 = browser.currentScene.createNode("Shape");
let Appearance428 = browser.currentScene.createNode("Appearance");
Appearance428.USE = "SegmentLine";
appearance = Appearance428;

let IndexedLineSet429 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet429.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate430 = browser.currentScene.createNode("Coordinate");
Coordinate430.point = new X3D.MFVec3f([0,1.12,-0.065,0,1.1459,-0.0625]);
coord = Coordinate430;

geometry = IndexedLineSet429;

HAnimSegment426YYY.children = new X3D.MFNode();

HAnimSegment426ZZZ.children[0] = Shape427;

let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new X3D.SFVec3f([0,1.12,-0.065]);
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "jointbox";
Transform431YYY.child = new X3D.undefined();

Transform431ZZZ.child[0] = Shape432;

HAnimSegment426ZZZ.children[1] = Transform431;

let Transform433 = browser.currentScene.createNode("Transform");
Transform433.translation = new X3D.SFVec3f([-0.087,1.19,-0.09]);
let Shape434 = browser.currentScene.createNode("Shape");
Shape434.USE = "skinsphere";
Transform433YYY.child = new X3D.undefined();

Transform433ZZZ.child[0] = Shape434;

HAnimSegment426ZZZ.children[2] = Transform433;

let Transform435 = browser.currentScene.createNode("Transform");
Transform435.translation = new X3D.SFVec3f([0.087,1.19,-0.09]);
let Shape436 = browser.currentScene.createNode("Shape");
Shape436.USE = "skinsphere";
Transform435YYY.child = new X3D.undefined();

Transform435ZZZ.child[0] = Shape436;

HAnimSegment426ZZZ.children[3] = Transform435;

let Transform437 = browser.currentScene.createNode("Transform");
Transform437.translation = new X3D.SFVec3f([0.172,1.32,-0.03]);
let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "skinsphere";
Transform437YYY.child = new X3D.undefined();

Transform437ZZZ.child[0] = Shape438;

HAnimSegment426ZZZ.children[4] = Transform437;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new X3D.SFVec3f([-0.172,1.32,-0.03]);
let Shape440 = browser.currentScene.createNode("Shape");
Shape440.USE = "skinsphere";
Transform439YYY.child = new X3D.undefined();

Transform439ZZZ.child[0] = Shape440;

HAnimSegment426ZZZ.children[5] = Transform439;

let Transform441 = browser.currentScene.createNode("Transform");
Transform441.translation = new X3D.SFVec3f([0.15,1.23,-0.015]);
let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "skinsphere";
Transform441YYY.child = new X3D.undefined();

Transform441ZZZ.child[0] = Shape442;

HAnimSegment426ZZZ.children[6] = Transform441;

let Transform443 = browser.currentScene.createNode("Transform");
Transform443.translation = new X3D.SFVec3f([-0.15,1.23,-0.015]);
let Shape444 = browser.currentScene.createNode("Shape");
Shape444.USE = "skinsphere";
Transform443YYY.child = new X3D.undefined();

Transform443ZZZ.child[0] = Shape444;

HAnimSegment426ZZZ.children[7] = Transform443;

let HAnimSite445 = browser.currentScene.createNode("HAnimSite");
HAnimSite445.DEF = "Joe_r_rib10";
HAnimSite445.name = "r_rib10";
HAnimSite445.translation = new X3D.SFVec3f([-0.087,1.19,0.09]);
let Shape446 = browser.currentScene.createNode("Shape");
Shape446.USE = "sitebox";
HAnimSite445YYY.children = new X3D.MFNode();

HAnimSite445ZZZ.children[0] = Shape446;

HAnimSegment426ZZZ.children[8] = HAnimSite445;

let HAnimSite447 = browser.currentScene.createNode("HAnimSite");
HAnimSite447.DEF = "Joe_l_rib10";
HAnimSite447.name = "l_rib10";
HAnimSite447.translation = new X3D.SFVec3f([0.087,1.19,0.09]);
let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "sitebox";
HAnimSite447YYY.children = new X3D.MFNode();

HAnimSite447ZZZ.children[0] = Shape448;

HAnimSegment426ZZZ.children[9] = HAnimSite447;

let HAnimSite449 = browser.currentScene.createNode("HAnimSite");
HAnimSite449.DEF = "Joe_rib10_midspine";
HAnimSite449.name = "rib10_midspine";
HAnimSite449.translation = new X3D.SFVec3f([0,1.1908,-0.1113]);
let Shape450 = browser.currentScene.createNode("Shape");
Shape450.USE = "sitebox";
HAnimSite449YYY.children = new X3D.MFNode();

HAnimSite449ZZZ.children[0] = Shape450;

HAnimSegment426ZZZ.children[10] = HAnimSite449;

HAnimJoint425YYY.children = new X3D.MFNode();

HAnimJoint425ZZZ.children[0] = HAnimSegment426;

let HAnimJoint451 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint451.DEF = "Joe_vl1";
HAnimJoint451.name = "vl1";
HAnimJoint451.center = new X3D.SFVec3f([0,1.1459,-0.0625]);
let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.DEF = "Joe_l1";
HAnimSegment452.name = "l1";
let Shape453 = browser.currentScene.createNode("Shape");
let Appearance454 = browser.currentScene.createNode("Appearance");
Appearance454.USE = "SegmentLine";
appearance = Appearance454;

let IndexedLineSet455 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet455.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate456 = browser.currentScene.createNode("Coordinate");
Coordinate456.point = new X3D.MFVec3f([0,1.1459,-0.0625,0,1.179,-0.068]);
coord = Coordinate456;

geometry = IndexedLineSet455;

HAnimSegment452YYY.children = new X3D.MFNode();

HAnimSegment452ZZZ.children[0] = Shape453;

let Transform457 = browser.currentScene.createNode("Transform");
Transform457.translation = new X3D.SFVec3f([0,1.1459,-0.0625]);
let Shape458 = browser.currentScene.createNode("Shape");
Shape458.USE = "jointbox";
Transform457YYY.child = new X3D.undefined();

Transform457ZZZ.child[0] = Shape458;

HAnimSegment452ZZZ.children[1] = Transform457;

HAnimJoint451YYY.children = new X3D.MFNode();

HAnimJoint451ZZZ.children[0] = HAnimSegment452;

let HAnimJoint459 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint459.DEF = "Joe_vt12";
HAnimJoint459.name = "vt12";
HAnimJoint459.center = new X3D.SFVec3f([0,1.179,-0.068]);
let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.DEF = "Joe_t12";
HAnimSegment460.name = "t12";
let Shape461 = browser.currentScene.createNode("Shape");
let Appearance462 = browser.currentScene.createNode("Appearance");
Appearance462.USE = "SegmentLine";
appearance = Appearance462;

let IndexedLineSet463 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet463.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate464 = browser.currentScene.createNode("Coordinate");
Coordinate464.point = new X3D.MFVec3f([0,1.179,-0.068,0,1.242,-0.09]);
coord = Coordinate464;

geometry = IndexedLineSet463;

HAnimSegment460YYY.children = new X3D.MFNode();

HAnimSegment460ZZZ.children[0] = Shape461;

let Transform465 = browser.currentScene.createNode("Transform");
Transform465.translation = new X3D.SFVec3f([0,1.179,-0.068]);
let Shape466 = browser.currentScene.createNode("Shape");
Shape466.USE = "jointbox";
Transform465YYY.child = new X3D.undefined();

Transform465ZZZ.child[0] = Shape466;

HAnimSegment460ZZZ.children[1] = Transform465;

HAnimJoint459YYY.children = new X3D.MFNode();

HAnimJoint459ZZZ.children[0] = HAnimSegment460;

let HAnimJoint467 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint467.DEF = "Joe_vt11";
HAnimJoint467.name = "vt11";
HAnimJoint467.center = new X3D.SFVec3f([0,1.2679,-0.081]);
let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.DEF = "Joe_t11";
HAnimSegment468.name = "t11";
let Shape469 = browser.currentScene.createNode("Shape");
let Appearance470 = browser.currentScene.createNode("Appearance");
Appearance470.USE = "SegmentLine";
appearance = Appearance470;

let IndexedLineSet471 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet471.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate472 = browser.currentScene.createNode("Coordinate");
Coordinate472.point = new X3D.MFVec3f([0,1.2145,-0.0755,0,1.242,-0.09]);
coord = Coordinate472;

geometry = IndexedLineSet471;

HAnimSegment468YYY.children = new X3D.MFNode();

HAnimSegment468ZZZ.children[0] = Shape469;

let Transform473 = browser.currentScene.createNode("Transform");
Transform473.translation = new X3D.SFVec3f([0,1.2145,-0.0755]);
let Shape474 = browser.currentScene.createNode("Shape");
Shape474.USE = "jointbox";
Transform473YYY.child = new X3D.undefined();

Transform473ZZZ.child[0] = Shape474;

HAnimSegment468ZZZ.children[1] = Transform473;

HAnimJoint467YYY.children = new X3D.MFNode();

HAnimJoint467ZZZ.children[0] = HAnimSegment468;

let HAnimJoint475 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint475.DEF = "Joe_vt10";
HAnimJoint475.name = "vt10";
HAnimJoint475.center = new X3D.SFVec3f([0,1.242,-0.09]);
HAnimJoint475.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint475.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.DEF = "Joe_t10";
HAnimSegment476.name = "t10";
let Shape477 = browser.currentScene.createNode("Shape");
let Appearance478 = browser.currentScene.createNode("Appearance");
Appearance478.USE = "SegmentLine";
appearance = Appearance478;

let IndexedLineSet479 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet479.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate480 = browser.currentScene.createNode("Coordinate");
Coordinate480.point = new X3D.MFVec3f([0,1.242,-0.09,0,1.268,-0.1]);
coord = Coordinate480;

geometry = IndexedLineSet479;

HAnimSegment476YYY.children = new X3D.MFNode();

HAnimSegment476ZZZ.children[0] = Shape477;

let Transform481 = browser.currentScene.createNode("Transform");
Transform481.translation = new X3D.SFVec3f([0,1.242,-0.09]);
let Shape482 = browser.currentScene.createNode("Shape");
Shape482.USE = "jointbox";
Transform481YYY.child = new X3D.undefined();

Transform481ZZZ.child[0] = Shape482;

HAnimSegment476ZZZ.children[1] = Transform481;

let HAnimSite483 = browser.currentScene.createNode("HAnimSite");
HAnimSite483.DEF = "Joe_substernale";
HAnimSite483.name = "substernale";
HAnimSite483.translation = new X3D.SFVec3f([0,1.25,0.113]);
let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "sitebox";
HAnimSite483YYY.children = new X3D.MFNode();

HAnimSite483ZZZ.children[0] = Shape484;

HAnimSegment476ZZZ.children[2] = HAnimSite483;

HAnimJoint475YYY.children = new X3D.MFNode();

HAnimJoint475ZZZ.children[0] = HAnimSegment476;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.DEF = "Joe_vt9";
HAnimJoint485.name = "vt9";
HAnimJoint485.center = new X3D.SFVec3f([0,1.268,-0.1]);
HAnimJoint485.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint485.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.DEF = "Joe_t9";
HAnimSegment486.name = "t9";
let Shape487 = browser.currentScene.createNode("Shape");
let Appearance488 = browser.currentScene.createNode("Appearance");
Appearance488.USE = "SegmentLine";
appearance = Appearance488;

let IndexedLineSet489 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet489.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate490 = browser.currentScene.createNode("Coordinate");
Coordinate490.point = new X3D.MFVec3f([0,1.268,-0.1,0,1.294,-0.11]);
coord = Coordinate490;

geometry = IndexedLineSet489;

HAnimSegment486YYY.children = new X3D.MFNode();

HAnimSegment486ZZZ.children[0] = Shape487;

let Transform491 = browser.currentScene.createNode("Transform");
Transform491.translation = new X3D.SFVec3f([0,1.268,-0.1]);
let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "jointbox";
Transform491YYY.child = new X3D.undefined();

Transform491ZZZ.child[0] = Shape492;

HAnimSegment486ZZZ.children[1] = Transform491;

let HAnimSite493 = browser.currentScene.createNode("HAnimSite");
HAnimSite493.DEF = "Joe_r_thelion";
HAnimSite493.name = "r_thelion";
HAnimSite493.translation = new X3D.SFVec3f([-0.1135,1.318,0.095]);
let Shape494 = browser.currentScene.createNode("Shape");
Shape494.USE = "sitebox";
HAnimSite493YYY.children = new X3D.MFNode();

HAnimSite493ZZZ.children[0] = Shape494;

HAnimSegment486ZZZ.children[2] = HAnimSite493;

let HAnimSite495 = browser.currentScene.createNode("HAnimSite");
HAnimSite495.DEF = "Joe_l_thelion";
HAnimSite495.name = "l_thelion";
HAnimSite495.translation = new X3D.SFVec3f([0.1135,1.318,0.095]);
let Shape496 = browser.currentScene.createNode("Shape");
Shape496.USE = "sitebox";
HAnimSite495YYY.children = new X3D.MFNode();

HAnimSite495ZZZ.children[0] = Shape496;

HAnimSegment486ZZZ.children[3] = HAnimSite495;

HAnimJoint485YYY.children = new X3D.MFNode();

HAnimJoint485ZZZ.children[0] = HAnimSegment486;

let HAnimJoint497 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint497.DEF = "Joe_vt8";
HAnimJoint497.name = "vt8";
HAnimJoint497.center = new X3D.SFVec3f([0,1.294,-0.11]);
let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.DEF = "Joe_t8";
HAnimSegment498.name = "t8";
let Shape499 = browser.currentScene.createNode("Shape");
let Appearance500 = browser.currentScene.createNode("Appearance");
Appearance500.USE = "SegmentLine";
appearance = Appearance500;

let IndexedLineSet501 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet501.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate502 = browser.currentScene.createNode("Coordinate");
Coordinate502.point = new X3D.MFVec3f([0,1.294,-0.11,0,1.352,-0.12]);
coord = Coordinate502;

geometry = IndexedLineSet501;

HAnimSegment498YYY.children = new X3D.MFNode();

HAnimSegment498ZZZ.children[0] = Shape499;

let Transform503 = browser.currentScene.createNode("Transform");
Transform503.translation = new X3D.SFVec3f([0,1.294,-0.11]);
let Shape504 = browser.currentScene.createNode("Shape");
Shape504.USE = "jointbox";
Transform503YYY.child = new X3D.undefined();

Transform503ZZZ.child[0] = Shape504;

HAnimSegment498ZZZ.children[1] = Transform503;

HAnimJoint497YYY.children = new X3D.MFNode();

HAnimJoint497ZZZ.children[0] = HAnimSegment498;

let HAnimJoint505 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint505.DEF = "Joe_vt7";
HAnimJoint505.name = "vt7";
HAnimJoint505.center = new X3D.SFVec3f([0,1.323,-0.1155]);
let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.DEF = "Joe_t7";
HAnimSegment506.name = "t7";
let Shape507 = browser.currentScene.createNode("Shape");
let Appearance508 = browser.currentScene.createNode("Appearance");
Appearance508.USE = "SegmentLine";
appearance = Appearance508;

let IndexedLineSet509 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet509.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new X3D.MFVec3f([0,1.352,-0.12,0,1.381,-0.1235]);
coord = Coordinate510;

geometry = IndexedLineSet509;

HAnimSegment506YYY.children = new X3D.MFNode();

HAnimSegment506ZZZ.children[0] = Shape507;

let Transform511 = browser.currentScene.createNode("Transform");
Transform511.translation = new X3D.SFVec3f([0,1.323,-0.1155]);
let Shape512 = browser.currentScene.createNode("Shape");
Shape512.USE = "jointbox";
Transform511YYY.child = new X3D.undefined();

Transform511ZZZ.child[0] = Shape512;

HAnimSegment506ZZZ.children[1] = Transform511;

HAnimJoint505YYY.children = new X3D.MFNode();

HAnimJoint505ZZZ.children[0] = HAnimSegment506;

let HAnimJoint513 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint513.DEF = "Joe_vt6";
HAnimJoint513.name = "vt6";
HAnimJoint513.center = new X3D.SFVec3f([0,1.352,-0.12]);
let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.DEF = "Joe_t6";
HAnimSegment514.name = "t6";
let Shape515 = browser.currentScene.createNode("Shape");
let Appearance516 = browser.currentScene.createNode("Appearance");
Appearance516.USE = "SegmentLine";
appearance = Appearance516;

let IndexedLineSet517 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet517.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new X3D.MFVec3f([0,1.381,-0.1235,0,1.41,-0.1235]);
coord = Coordinate518;

geometry = IndexedLineSet517;

HAnimSegment514YYY.children = new X3D.MFNode();

HAnimSegment514ZZZ.children[0] = Shape515;

let Transform519 = browser.currentScene.createNode("Transform");
Transform519.translation = new X3D.SFVec3f([0,1.352,-0.12]);
let Shape520 = browser.currentScene.createNode("Shape");
Shape520.USE = "jointbox";
Transform519YYY.child = new X3D.undefined();

Transform519ZZZ.child[0] = Shape520;

HAnimSegment514ZZZ.children[1] = Transform519;

HAnimJoint513YYY.children = new X3D.MFNode();

HAnimJoint513ZZZ.children[0] = HAnimSegment514;

let HAnimJoint521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint521.DEF = "Joe_vt5";
HAnimJoint521.name = "vt5";
HAnimJoint521.center = new X3D.SFVec3f([0,1.381,-0.1235]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.DEF = "Joe_t5";
HAnimSegment522.name = "t5";
let Shape523 = browser.currentScene.createNode("Shape");
let Appearance524 = browser.currentScene.createNode("Appearance");
Appearance524.USE = "SegmentLine";
appearance = Appearance524;

let IndexedLineSet525 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet525.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate526 = browser.currentScene.createNode("Coordinate");
Coordinate526.point = new X3D.MFVec3f([0,1.41,-0.1235,0,1.438,-0.12]);
coord = Coordinate526;

geometry = IndexedLineSet525;

HAnimSegment522YYY.children = new X3D.MFNode();

HAnimSegment522ZZZ.children[0] = Shape523;

let Transform527 = browser.currentScene.createNode("Transform");
Transform527.translation = new X3D.SFVec3f([0,1.381,-0.1235]);
let Shape528 = browser.currentScene.createNode("Shape");
Shape528.USE = "jointbox";
Transform527YYY.child = new X3D.undefined();

Transform527ZZZ.child[0] = Shape528;

HAnimSegment522ZZZ.children[1] = Transform527;

HAnimJoint521YYY.children = new X3D.MFNode();

HAnimJoint521ZZZ.children[0] = HAnimSegment522;

let HAnimJoint529 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint529.DEF = "Joe_vt4";
HAnimJoint529.name = "vt4";
HAnimJoint529.center = new X3D.SFVec3f([0,1.41,-0.1235]);
HAnimJoint529.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint529.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.DEF = "Joe_t4";
HAnimSegment530.name = "t4";
let Shape531 = browser.currentScene.createNode("Shape");
let Appearance532 = browser.currentScene.createNode("Appearance");
Appearance532.USE = "SegmentLine";
appearance = Appearance532;

let IndexedLineSet533 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet533.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate534 = browser.currentScene.createNode("Coordinate");
Coordinate534.point = new X3D.MFVec3f([0,1.41,-0.1235,0,1.438,-0.12]);
coord = Coordinate534;

geometry = IndexedLineSet533;

HAnimSegment530YYY.children = new X3D.MFNode();

HAnimSegment530ZZZ.children[0] = Shape531;

let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new X3D.SFVec3f([0,1.41,-0.1235]);
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "jointbox";
Transform535YYY.child = new X3D.undefined();

Transform535ZZZ.child[0] = Shape536;

HAnimSegment530ZZZ.children[1] = Transform535;

let Transform537 = browser.currentScene.createNode("Transform");
Transform537.translation = new X3D.SFVec3f([0,1.41,-0.145]);
let Shape538 = browser.currentScene.createNode("Shape");
Shape538.USE = "skinsphere";
Transform537YYY.child = new X3D.undefined();

Transform537ZZZ.child[0] = Shape538;

HAnimSegment530ZZZ.children[2] = Transform537;

HAnimJoint529YYY.children = new X3D.MFNode();

HAnimJoint529ZZZ.children[0] = HAnimSegment530;

let HAnimJoint539 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint539.DEF = "Joe_vt3";
HAnimJoint539.name = "vt3";
HAnimJoint539.center = new X3D.SFVec3f([0,1.438,-0.12]);
let HAnimSegment540 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment540.DEF = "Joe_t3";
HAnimSegment540.name = "t3";
let Shape541 = browser.currentScene.createNode("Shape");
let Appearance542 = browser.currentScene.createNode("Appearance");
Appearance542.USE = "SegmentLine";
appearance = Appearance542;

let IndexedLineSet543 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet543.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate544 = browser.currentScene.createNode("Coordinate");
Coordinate544.point = new X3D.MFVec3f([0,1.438,-0.12,0,1.468,-0.105]);
coord = Coordinate544;

geometry = IndexedLineSet543;

HAnimSegment540YYY.children = new X3D.MFNode();

HAnimSegment540ZZZ.children[0] = Shape541;

let Transform545 = browser.currentScene.createNode("Transform");
Transform545.translation = new X3D.SFVec3f([0,1.438,-0.12]);
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "jointbox";
Transform545YYY.child = new X3D.undefined();

Transform545ZZZ.child[0] = Shape546;

HAnimSegment540ZZZ.children[1] = Transform545;

HAnimJoint539YYY.children = new X3D.MFNode();

HAnimJoint539ZZZ.children[0] = HAnimSegment540;

let HAnimJoint547 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint547.DEF = "Joe_vt2";
HAnimJoint547.name = "vt2";
HAnimJoint547.center = new X3D.SFVec3f([0,1.468,-0.105]);
let HAnimSegment548 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment548.DEF = "Joe_t2";
HAnimSegment548.name = "t2";
let Shape549 = browser.currentScene.createNode("Shape");
let Appearance550 = browser.currentScene.createNode("Appearance");
Appearance550.USE = "SegmentLine";
appearance = Appearance550;

let IndexedLineSet551 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet551.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate552 = browser.currentScene.createNode("Coordinate");
Coordinate552.point = new X3D.MFVec3f([0,1.468,-0.105,0,1.497,-0.09]);
coord = Coordinate552;

geometry = IndexedLineSet551;

HAnimSegment548YYY.children = new X3D.MFNode();

HAnimSegment548ZZZ.children[0] = Shape549;

let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new X3D.SFVec3f([0,1.468,-0.105]);
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "jointbox";
Transform553YYY.child = new X3D.undefined();

Transform553ZZZ.child[0] = Shape554;

HAnimSegment548ZZZ.children[1] = Transform553;

HAnimJoint547YYY.children = new X3D.MFNode();

HAnimJoint547ZZZ.children[0] = HAnimSegment548;

let HAnimJoint555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint555.DEF = "Joe_vt1";
HAnimJoint555.name = "vt1";
HAnimJoint555.center = new X3D.SFVec3f([0,1.497,-0.09]);
HAnimJoint555.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint555.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment556.DEF = "Joe_t1";
HAnimSegment556.name = "t1";
let Shape557 = browser.currentScene.createNode("Shape");
let Appearance558 = browser.currentScene.createNode("Appearance");
Appearance558.USE = "SegmentLine";
appearance = Appearance558;

let IndexedLineSet559 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet559.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate560 = browser.currentScene.createNode("Coordinate");
Coordinate560.point = new X3D.MFVec3f([0,1.497,-0.09,0,1.525,-0.072]);
coord = Coordinate560;

geometry = IndexedLineSet559;

HAnimSegment556YYY.children = new X3D.MFNode();

HAnimSegment556ZZZ.children[0] = Shape557;

let Transform561 = browser.currentScene.createNode("Transform");
Transform561.translation = new X3D.SFVec3f([0,1.497,-0.09]);
let Shape562 = browser.currentScene.createNode("Shape");
Shape562.USE = "jointbox";
Transform561YYY.child = new X3D.undefined();

Transform561ZZZ.child[0] = Shape562;

HAnimSegment556ZZZ.children[1] = Transform561;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.DEF = "Joe_suprasternale";
HAnimSite563.name = "suprasternale";
HAnimSite563.translation = new X3D.SFVec3f([0,1.44,0.03]);
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "sitebox";
HAnimSite563YYY.children = new X3D.MFNode();

HAnimSite563ZZZ.children[0] = Shape564;

HAnimSegment556ZZZ.children[2] = HAnimSite563;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.DEF = "Joe_cervicale";
HAnimSite565.name = "cervicale";
HAnimSite565.translation = new X3D.SFVec3f([0,1.53,-0.084]);
let Shape566 = browser.currentScene.createNode("Shape");
Shape566.USE = "sitebox";
HAnimSite565YYY.children = new X3D.MFNode();

HAnimSite565ZZZ.children[0] = Shape566;

HAnimSegment556ZZZ.children[3] = HAnimSite565;

HAnimJoint555YYY.children = new X3D.MFNode();

HAnimJoint555ZZZ.children[0] = HAnimSegment556;

let HAnimJoint567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint567.DEF = "Joe_vc7";
HAnimJoint567.name = "vc7";
HAnimJoint567.center = new X3D.SFVec3f([0,1.525,-0.072]);
HAnimJoint567.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint567.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment568 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment568.DEF = "Joe_c7";
HAnimSegment568.name = "c7";
let Shape569 = browser.currentScene.createNode("Shape");
let Appearance570 = browser.currentScene.createNode("Appearance");
Appearance570.USE = "SegmentLine";
appearance = Appearance570;

let IndexedLineSet571 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet571.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate572 = browser.currentScene.createNode("Coordinate");
Coordinate572.point = new X3D.MFVec3f([0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]);
coord = Coordinate572;

geometry = IndexedLineSet571;

HAnimSegment568YYY.children = new X3D.MFNode();

HAnimSegment568ZZZ.children[0] = Shape569;

let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new X3D.SFVec3f([0,1.525,-0.072]);
let Shape574 = browser.currentScene.createNode("Shape");
Shape574.USE = "jointbox";
Transform573YYY.child = new X3D.undefined();

Transform573ZZZ.child[0] = Shape574;

HAnimSegment568ZZZ.children[1] = Transform573;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.DEF = "Joe_r_neck_base";
HAnimSite575.name = "r_neck_base";
HAnimSite575.translation = new X3D.SFVec3f([-0.0646,1.5149,-0.0385]);
let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "sitebox";
HAnimSite575YYY.children = new X3D.MFNode();

HAnimSite575ZZZ.children[0] = Shape576;

HAnimSegment568ZZZ.children[2] = HAnimSite575;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.DEF = "Joe_l_neck_base";
HAnimSite577.name = "l_neck_base";
HAnimSite577.translation = new X3D.SFVec3f([0.0646,1.5149,-0.0385]);
let Shape578 = browser.currentScene.createNode("Shape");
Shape578.USE = "sitebox";
HAnimSite577YYY.children = new X3D.MFNode();

HAnimSite577ZZZ.children[0] = Shape578;

HAnimSegment568ZZZ.children[3] = HAnimSite577;

HAnimJoint567YYY.children = new X3D.MFNode();

HAnimJoint567ZZZ.children[0] = HAnimSegment568;

let HAnimJoint579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint579.DEF = "Joe_vc6";
HAnimJoint579.name = "vc6";
HAnimJoint579.rotation = new X3D.SFRotation([-0.37139068112485,-0.928476688976744,0,0.0468530829448654]);
HAnimJoint579.center = new X3D.SFVec3f([0,1.54,-0.05]);
let HAnimSegment580 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment580.DEF = "Joe_c6";
HAnimSegment580.name = "c6";
let Shape581 = browser.currentScene.createNode("Shape");
let Appearance582 = browser.currentScene.createNode("Appearance");
Appearance582.USE = "SegmentLine";
appearance = Appearance582;

let IndexedLineSet583 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet583.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.point = new X3D.MFVec3f([0,1.54,-0.05,0,1.5675,-0.0256]);
coord = Coordinate584;

geometry = IndexedLineSet583;

HAnimSegment580YYY.children = new X3D.MFNode();

HAnimSegment580ZZZ.children[0] = Shape581;

let Transform585 = browser.currentScene.createNode("Transform");
Transform585.translation = new X3D.SFVec3f([0,1.54,-0.05]);
let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "jointbox";
Transform585YYY.child = new X3D.undefined();

Transform585ZZZ.child[0] = Shape586;

HAnimSegment580ZZZ.children[1] = Transform585;

HAnimJoint579YYY.children = new X3D.MFNode();

HAnimJoint579ZZZ.children[0] = HAnimSegment580;

let HAnimJoint587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint587.DEF = "Joe_vc5";
HAnimJoint587.name = "vc5";
HAnimJoint587.center = new X3D.SFVec3f([0,1.552,-0.035]);
let HAnimSegment588 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment588.DEF = "Joe_c5";
HAnimSegment588.name = "c5";
let Transform589 = browser.currentScene.createNode("Transform");
Transform589.translation = new X3D.SFVec3f([0,1.552,-0.035]);
let Shape590 = browser.currentScene.createNode("Shape");
Shape590.USE = "jointbox";
Transform589YYY.child = new X3D.undefined();

Transform589ZZZ.child[0] = Shape590;

HAnimSegment588YYY.children = new X3D.MFNode();

HAnimSegment588ZZZ.children[0] = Transform589;

let Shape591 = browser.currentScene.createNode("Shape");
let Appearance592 = browser.currentScene.createNode("Appearance");
Appearance592.USE = "SegmentLine";
appearance = Appearance592;

let IndexedLineSet593 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet593.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate594 = browser.currentScene.createNode("Coordinate");
Coordinate594.point = new X3D.MFVec3f([0,1.5675,-0.0256,0,1.58225,-0.0185]);
coord = Coordinate594;

geometry = IndexedLineSet593;

HAnimSegment588ZZZ.children[1] = Shape591;

HAnimJoint587YYY.children = new X3D.MFNode();

HAnimJoint587ZZZ.children[0] = HAnimSegment588;

let HAnimJoint595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint595.DEF = "Joe_vc4";
HAnimJoint595.name = "vc4";
HAnimJoint595.center = new X3D.SFVec3f([0,1.5675,-0.0256]);
let HAnimSegment596 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment596.DEF = "Joe_c4";
HAnimSegment596.name = "c4";
let Shape597 = browser.currentScene.createNode("Shape");
let Appearance598 = browser.currentScene.createNode("Appearance");
Appearance598.USE = "SegmentLine";
appearance = Appearance598;

let IndexedLineSet599 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet599.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate600 = browser.currentScene.createNode("Coordinate");
Coordinate600.point = new X3D.MFVec3f([0,1.58225,-0.0185,0,1.595,-0.0175]);
coord = Coordinate600;

geometry = IndexedLineSet599;

HAnimSegment596YYY.children = new X3D.MFNode();

HAnimSegment596ZZZ.children[0] = Shape597;

let Transform601 = browser.currentScene.createNode("Transform");
Transform601.translation = new X3D.SFVec3f([0,1.5675,-0.0256]);
let Shape602 = browser.currentScene.createNode("Shape");
Shape602.USE = "jointbox";
Transform601YYY.child = new X3D.undefined();

Transform601ZZZ.child[0] = Shape602;

HAnimSegment596ZZZ.children[1] = Transform601;

HAnimJoint595YYY.children = new X3D.MFNode();

HAnimJoint595ZZZ.children[0] = HAnimSegment596;

let HAnimJoint603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint603.DEF = "Joe_vc3";
HAnimJoint603.name = "vc3";
HAnimJoint603.center = new X3D.SFVec3f([0,1.58225,-0.0185]);
let HAnimSegment604 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment604.DEF = "Joe_c3";
HAnimSegment604.name = "c3";
let Shape605 = browser.currentScene.createNode("Shape");
let Appearance606 = browser.currentScene.createNode("Appearance");
Appearance606.USE = "SegmentLine";
appearance = Appearance606;

let IndexedLineSet607 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet607.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new X3D.MFVec3f([0,1.595,-0.0175,0,1.61,-0.015]);
coord = Coordinate608;

geometry = IndexedLineSet607;

HAnimSegment604YYY.children = new X3D.MFNode();

HAnimSegment604ZZZ.children[0] = Shape605;

let Transform609 = browser.currentScene.createNode("Transform");
Transform609.translation = new X3D.SFVec3f([0,1.58225,-0.0185]);
let Shape610 = browser.currentScene.createNode("Shape");
Shape610.USE = "jointbox";
Transform609YYY.child = new X3D.undefined();

Transform609ZZZ.child[0] = Shape610;

HAnimSegment604ZZZ.children[1] = Transform609;

HAnimJoint603YYY.children = new X3D.MFNode();

HAnimJoint603ZZZ.children[0] = HAnimSegment604;

let HAnimJoint611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint611.DEF = "Joe_vc2";
HAnimJoint611.name = "vc2";
HAnimJoint611.center = new X3D.SFVec3f([0,1.595,-0.0175]);
let HAnimSegment612 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment612.DEF = "Joe_c2";
HAnimSegment612.name = "c2";
let Shape613 = browser.currentScene.createNode("Shape");
let Appearance614 = browser.currentScene.createNode("Appearance");
Appearance614.USE = "SegmentLine";
appearance = Appearance614;

let IndexedLineSet615 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet615.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate616 = browser.currentScene.createNode("Coordinate");
Coordinate616.point = new X3D.MFVec3f([0,1.61,-0.015,0,1.6144,-0.0034]);
coord = Coordinate616;

geometry = IndexedLineSet615;

HAnimSegment612YYY.children = new X3D.MFNode();

HAnimSegment612ZZZ.children[0] = Shape613;

let Transform617 = browser.currentScene.createNode("Transform");
Transform617.translation = new X3D.SFVec3f([0,1.595,-0.0175]);
let Shape618 = browser.currentScene.createNode("Shape");
Shape618.USE = "jointbox";
Transform617YYY.child = new X3D.undefined();

Transform617ZZZ.child[0] = Shape618;

HAnimSegment612ZZZ.children[1] = Transform617;

HAnimJoint611YYY.children = new X3D.MFNode();

HAnimJoint611ZZZ.children[0] = HAnimSegment612;

let HAnimJoint619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint619.DEF = "Joe_vc1";
HAnimJoint619.name = "vc1";
HAnimJoint619.center = new X3D.SFVec3f([0,1.61,-0.015]);
let HAnimSegment620 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment620.DEF = "Joe_c1";
HAnimSegment620.name = "c1";
let Shape621 = browser.currentScene.createNode("Shape");
let Appearance622 = browser.currentScene.createNode("Appearance");
Appearance622.USE = "SegmentLine";
appearance = Appearance622;

let IndexedLineSet623 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet623.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate624 = browser.currentScene.createNode("Coordinate");
Coordinate624.point = new X3D.MFVec3f([0,1.6144,-0.0034,0,1.63,-0.01]);
coord = Coordinate624;

geometry = IndexedLineSet623;

HAnimSegment620YYY.children = new X3D.MFNode();

HAnimSegment620ZZZ.children[0] = Shape621;

let Transform625 = browser.currentScene.createNode("Transform");
Transform625.translation = new X3D.SFVec3f([0,1.61,-0.015]);
let Shape626 = browser.currentScene.createNode("Shape");
Shape626.USE = "jointbox";
Transform625YYY.child = new X3D.undefined();

Transform625ZZZ.child[0] = Shape626;

HAnimSegment620ZZZ.children[1] = Transform625;

HAnimJoint619YYY.children = new X3D.MFNode();

HAnimJoint619ZZZ.children[0] = HAnimSegment620;

let HAnimJoint627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint627.DEF = "Joe_skullbase";
HAnimJoint627.name = "skullbase";
HAnimJoint627.rotation = new X3D.SFRotation([0,-1,0,0.105595270685895]);
HAnimJoint627.center = new X3D.SFVec3f([0,1.63,-0.01]);
HAnimJoint627.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint627.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment628 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment628.DEF = "Joe_skull";
HAnimSegment628.name = "skull";
let Shape629 = browser.currentScene.createNode("Shape");
let Appearance630 = browser.currentScene.createNode("Appearance");
Appearance630.USE = "SegmentLine";
appearance = Appearance630;

let IndexedLineSet631 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet631.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1]);
let Coordinate632 = browser.currentScene.createNode("Coordinate");
Coordinate632.point = new X3D.MFVec3f([0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]);
coord = Coordinate632;

geometry = IndexedLineSet631;

HAnimSegment628YYY.children = new X3D.MFNode();

HAnimSegment628ZZZ.children[0] = Shape629;

let Transform633 = browser.currentScene.createNode("Transform");
Transform633.translation = new X3D.SFVec3f([0,1.63,-0.01]);
let Shape634 = browser.currentScene.createNode("Shape");
Shape634.USE = "jointbox";
Transform633YYY.child = new X3D.undefined();

Transform633ZZZ.child[0] = Shape634;

HAnimSegment628ZZZ.children[1] = Transform633;

let HAnimSite635 = browser.currentScene.createNode("HAnimSite");
HAnimSite635.DEF = "Joe_skull_tip";
HAnimSite635.name = "skull_tip";
HAnimSite635.translation = new X3D.SFVec3f([0,1.77,0]);
let Shape636 = browser.currentScene.createNode("Shape");
Shape636.USE = "sitebox";
HAnimSite635YYY.children = new X3D.MFNode();

HAnimSite635ZZZ.children[0] = Shape636;

HAnimSegment628ZZZ.children[2] = HAnimSite635;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.DEF = "Joe_sellion";
HAnimSite637.name = "sellion";
HAnimSite637.translation = new X3D.SFVec3f([0,1.665,0.09]);
let Shape638 = browser.currentScene.createNode("Shape");
Shape638.USE = "sitebox";
HAnimSite637YYY.children = new X3D.MFNode();

HAnimSite637ZZZ.children[0] = Shape638;

HAnimSegment628ZZZ.children[3] = HAnimSite637;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.DEF = "Joe_r_infraorbitale";
HAnimSite639.name = "r_infraorbitale";
HAnimSite639.translation = new X3D.SFVec3f([-0.033,1.62,0.087]);
let Shape640 = browser.currentScene.createNode("Shape");
Shape640.USE = "sitebox";
HAnimSite639YYY.children = new X3D.MFNode();

HAnimSite639ZZZ.children[0] = Shape640;

HAnimSegment628ZZZ.children[4] = HAnimSite639;

let HAnimSite641 = browser.currentScene.createNode("HAnimSite");
HAnimSite641.DEF = "Joe_l_infraorbitale";
HAnimSite641.name = "l_infraorbitale";
HAnimSite641.translation = new X3D.SFVec3f([0.033,1.62,0.087]);
let Shape642 = browser.currentScene.createNode("Shape");
Shape642.USE = "sitebox";
HAnimSite641YYY.children = new X3D.MFNode();

HAnimSite641ZZZ.children[0] = Shape642;

HAnimSegment628ZZZ.children[5] = HAnimSite641;

let HAnimSite643 = browser.currentScene.createNode("HAnimSite");
HAnimSite643.DEF = "Joe_supramenton";
HAnimSite643.name = "supramenton";
HAnimSite643.translation = new X3D.SFVec3f([0,1.55,0.097]);
let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "sitebox";
HAnimSite643YYY.children = new X3D.MFNode();

HAnimSite643ZZZ.children[0] = Shape644;

HAnimSegment628ZZZ.children[6] = HAnimSite643;

let HAnimSite645 = browser.currentScene.createNode("HAnimSite");
HAnimSite645.DEF = "Joe_r_tragion";
HAnimSite645.name = "r_tragion";
HAnimSite645.translation = new X3D.SFVec3f([-0.077,1.64,-0.01]);
let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "sitebox";
HAnimSite645YYY.children = new X3D.MFNode();

HAnimSite645ZZZ.children[0] = Shape646;

HAnimSegment628ZZZ.children[7] = HAnimSite645;

let HAnimSite647 = browser.currentScene.createNode("HAnimSite");
HAnimSite647.DEF = "Joe_r_gonion";
HAnimSite647.name = "r_gonion";
HAnimSite647.translation = new X3D.SFVec3f([-0.052,1.58,0.015]);
let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "sitebox";
HAnimSite647YYY.children = new X3D.MFNode();

HAnimSite647ZZZ.children[0] = Shape648;

HAnimSegment628ZZZ.children[8] = HAnimSite647;

let HAnimSite649 = browser.currentScene.createNode("HAnimSite");
HAnimSite649.DEF = "Joe_l_tragion";
HAnimSite649.name = "l_tragion";
HAnimSite649.translation = new X3D.SFVec3f([0.077,1.64,-0.01]);
let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "sitebox";
HAnimSite649YYY.children = new X3D.MFNode();

HAnimSite649ZZZ.children[0] = Shape650;

HAnimSegment628ZZZ.children[9] = HAnimSite649;

let HAnimSite651 = browser.currentScene.createNode("HAnimSite");
HAnimSite651.DEF = "Joe_l_gonion";
HAnimSite651.name = "l_gonion";
HAnimSite651.translation = new X3D.SFVec3f([0.0631,1.58,0.015]);
let Shape652 = browser.currentScene.createNode("Shape");
Shape652.USE = "sitebox";
HAnimSite651YYY.children = new X3D.MFNode();

HAnimSite651ZZZ.children[0] = Shape652;

HAnimSegment628ZZZ.children[10] = HAnimSite651;

let HAnimSite653 = browser.currentScene.createNode("HAnimSite");
HAnimSite653.DEF = "Joe_nuchale";
HAnimSite653.name = "nuchale";
HAnimSite653.translation = new X3D.SFVec3f([0,1.625,-0.0925]);
let Shape654 = browser.currentScene.createNode("Shape");
Shape654.USE = "sitebox";
HAnimSite653YYY.children = new X3D.MFNode();

HAnimSite653ZZZ.children[0] = Shape654;

HAnimSegment628ZZZ.children[11] = HAnimSite653;

HAnimJoint627YYY.children = new X3D.MFNode();

HAnimJoint627ZZZ.children[0] = HAnimSegment628;

let HAnimJoint655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint655.DEF = "Joe_l_eyeball_joint";
HAnimJoint655.name = "l_eyeball_joint";
HAnimJoint655.center = new X3D.SFVec3f([0.034,1.659,0.06]);
let HAnimSegment656 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment656.DEF = "Joe_l_eyeball";
HAnimSegment656.name = "l_eyeball";
let Shape657 = browser.currentScene.createNode("Shape");
let Appearance658 = browser.currentScene.createNode("Appearance");
Appearance658.USE = "SegmentLine";
appearance = Appearance658;

let IndexedLineSet659 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet659.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate660 = browser.currentScene.createNode("Coordinate");
Coordinate660.point = new X3D.MFVec3f([0.034,1.655,0.065,-0.034,1.655,0.065]);
coord = Coordinate660;

geometry = IndexedLineSet659;

HAnimSegment656YYY.children = new X3D.MFNode();

HAnimSegment656ZZZ.children[0] = Shape657;

let Transform661 = browser.currentScene.createNode("Transform");
Transform661.translation = new X3D.SFVec3f([0.034,1.655,0.065]);
Transform661.scale = new X3D.SFVec3f([1,1,1.4]);
let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "jointbox";
Transform661YYY.child = new X3D.undefined();

Transform661ZZZ.child[0] = Shape662;

HAnimSegment656ZZZ.children[1] = Transform661;

HAnimJoint655YYY.children = new X3D.MFNode();

HAnimJoint655ZZZ.children[0] = HAnimSegment656;

HAnimJoint627ZZZ.children[1] = HAnimJoint655;

let HAnimJoint663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint663.DEF = "Joe_r_eyeball_joint";
HAnimJoint663.name = "r_eyeball_joint";
HAnimJoint663.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
let HAnimSegment664 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment664.DEF = "Joe_r_eyeball";
HAnimSegment664.name = "r_eyeball";
let Shape665 = browser.currentScene.createNode("Shape");
let Appearance666 = browser.currentScene.createNode("Appearance");
Appearance666.USE = "SegmentLine";
appearance = Appearance666;

let IndexedLineSet667 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet667.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate668 = browser.currentScene.createNode("Coordinate");
Coordinate668.point = new X3D.MFVec3f([0.034,1.655,0.065,-0.034,1.655,0.065]);
coord = Coordinate668;

geometry = IndexedLineSet667;

HAnimSegment664YYY.children = new X3D.MFNode();

HAnimSegment664ZZZ.children[0] = Shape665;

let Transform669 = browser.currentScene.createNode("Transform");
Transform669.translation = new X3D.SFVec3f([-0.034,1.655,0.065]);
Transform669.scale = new X3D.SFVec3f([1,1,1.4]);
let Shape670 = browser.currentScene.createNode("Shape");
Shape670.USE = "jointbox";
Transform669YYY.child = new X3D.undefined();

Transform669ZZZ.child[0] = Shape670;

HAnimSegment664ZZZ.children[1] = Transform669;

HAnimJoint663YYY.children = new X3D.MFNode();

HAnimJoint663ZZZ.children[0] = HAnimSegment664;

HAnimJoint627ZZZ.children[2] = HAnimJoint663;

HAnimJoint619ZZZ.children[1] = HAnimJoint627;

HAnimJoint611ZZZ.children[1] = HAnimJoint619;

HAnimJoint603ZZZ.children[1] = HAnimJoint611;

HAnimJoint595ZZZ.children[1] = HAnimJoint603;

HAnimJoint587ZZZ.children[1] = HAnimJoint595;

HAnimJoint579ZZZ.children[1] = HAnimJoint587;

HAnimJoint567ZZZ.children[1] = HAnimJoint579;

HAnimJoint555ZZZ.children[1] = HAnimJoint567;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.DEF = "Joe_l_sternoclavicular";
HAnimJoint671.name = "l_sternoclavicular";
HAnimJoint671.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint671.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint671.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.DEF = "Joe_l_clavicle";
HAnimSegment672.name = "l_clavicle";
let Shape673 = browser.currentScene.createNode("Shape");
let Appearance674 = browser.currentScene.createNode("Appearance");
Appearance674.USE = "SegmentLine";
appearance = Appearance674;

let IndexedLineSet675 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet675.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate676 = browser.currentScene.createNode("Coordinate");
Coordinate676.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate676;

geometry = IndexedLineSet675;

HAnimSegment672YYY.children = new X3D.MFNode();

HAnimSegment672ZZZ.children[0] = Shape673;

let Transform677 = browser.currentScene.createNode("Transform");
Transform677.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "jointbox";
Transform677YYY.child = new X3D.undefined();

Transform677ZZZ.child[0] = Shape678;

HAnimSegment672ZZZ.children[1] = Transform677;

let HAnimSite679 = browser.currentScene.createNode("HAnimSite");
HAnimSite679.DEF = "Joe_l_clavicale";
HAnimSite679.name = "l_clavicale";
HAnimSite679.translation = new X3D.SFVec3f([0.03,1.46,0.035]);
let Shape680 = browser.currentScene.createNode("Shape");
Shape680.USE = "sitebox";
HAnimSite679YYY.children = new X3D.MFNode();

HAnimSite679ZZZ.children[0] = Shape680;

HAnimSegment672ZZZ.children[2] = HAnimSite679;

HAnimJoint671YYY.children = new X3D.MFNode();

HAnimJoint671ZZZ.children[0] = HAnimSegment672;

let HAnimJoint681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint681.DEF = "Joe_l_acromioclavicular";
HAnimJoint681.name = "l_acromioclavicular";
HAnimJoint681.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint681.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint681.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment682.DEF = "Joe_l_scapula";
HAnimSegment682.name = "l_scapula";
let Shape683 = browser.currentScene.createNode("Shape");
let Appearance684 = browser.currentScene.createNode("Appearance");
Appearance684.USE = "SegmentLine";
appearance = Appearance684;

let IndexedLineSet685 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet685.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate686 = browser.currentScene.createNode("Coordinate");
Coordinate686.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2,1.44,-0.04]);
coord = Coordinate686;

geometry = IndexedLineSet685;

HAnimSegment682YYY.children = new X3D.MFNode();

HAnimSegment682ZZZ.children[0] = Shape683;

let Transform687 = browser.currentScene.createNode("Transform");
Transform687.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "jointbox";
Transform687YYY.child = new X3D.undefined();

Transform687ZZZ.child[0] = Shape688;

HAnimSegment682ZZZ.children[1] = Transform687;

let Transform689 = browser.currentScene.createNode("Transform");
Transform689.translation = new X3D.SFVec3f([0.11,1.427,-0.1375]);
let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "skinsphere";
Transform689YYY.child = new X3D.undefined();

Transform689ZZZ.child[0] = Shape690;

HAnimSegment682ZZZ.children[2] = Transform689;

let HAnimSite691 = browser.currentScene.createNode("HAnimSite");
HAnimSite691.DEF = "Joe_l_acromion";
HAnimSite691.name = "l_acromion";
HAnimSite691.translation = new X3D.SFVec3f([0.175,1.4825,-0.06]);
let Shape692 = browser.currentScene.createNode("Shape");
Shape692.USE = "sitebox";
HAnimSite691YYY.children = new X3D.MFNode();

HAnimSite691ZZZ.children[0] = Shape692;

HAnimSegment682ZZZ.children[3] = HAnimSite691;

let HAnimSite693 = browser.currentScene.createNode("HAnimSite");
HAnimSite693.DEF = "Joe_l_axilla_ant";
HAnimSite693.name = "l_axilla_ant";
HAnimSite693.translation = new X3D.SFVec3f([0.17,1.38,0.007]);
let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "sitebox";
HAnimSite693YYY.children = new X3D.MFNode();

HAnimSite693ZZZ.children[0] = Shape694;

HAnimSegment682ZZZ.children[4] = HAnimSite693;

let HAnimSite695 = browser.currentScene.createNode("HAnimSite");
HAnimSite695.DEF = "Joe_l_axilla_post";
HAnimSite695.name = "l_axilla_post";
HAnimSite695.translation = new X3D.SFVec3f([0.16,1.38,-0.125]);
let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "sitebox";
HAnimSite695YYY.children = new X3D.MFNode();

HAnimSite695ZZZ.children[0] = Shape696;

HAnimSegment682ZZZ.children[5] = HAnimSite695;

HAnimJoint681YYY.children = new X3D.MFNode();

HAnimJoint681ZZZ.children[0] = HAnimSegment682;

let HAnimJoint697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint697.DEF = "Joe_l_shoulder";
HAnimJoint697.name = "l_shoulder";
HAnimJoint697.rotation = new X3D.SFRotation([0.978440403355312,0,0.206529361307055,0.207668332501419]);
HAnimJoint697.center = new X3D.SFVec3f([0.2,1.44,-0.04]);
HAnimJoint697.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint697.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment698.DEF = "Joe_l_upperarm";
HAnimSegment698.name = "l_upperarm";
let Shape699 = browser.currentScene.createNode("Shape");
let Appearance700 = browser.currentScene.createNode("Appearance");
Appearance700.USE = "SegmentLine";
appearance = Appearance700;

let IndexedLineSet701 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet701.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate702 = browser.currentScene.createNode("Coordinate");
Coordinate702.point = new X3D.MFVec3f([0.2029,1.44,-0.0387,0.2,1.1388,-0.04]);
coord = Coordinate702;

geometry = IndexedLineSet701;

HAnimSegment698YYY.children = new X3D.MFNode();

HAnimSegment698ZZZ.children[0] = Shape699;

let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new X3D.SFVec3f([0.2,1.44,-0.04]);
let Shape704 = browser.currentScene.createNode("Shape");
Shape704.USE = "jointbox";
Transform703YYY.child = new X3D.undefined();

Transform703ZZZ.child[0] = Shape704;

HAnimSegment698ZZZ.children[1] = Transform703;

let Transform705 = browser.currentScene.createNode("Transform");
Transform705.translation = new X3D.SFVec3f([0.235,1.42,-0.0625]);
let Shape706 = browser.currentScene.createNode("Shape");
Shape706.USE = "skinsphere";
Transform705YYY.child = new X3D.undefined();

Transform705ZZZ.child[0] = Shape706;

HAnimSegment698ZZZ.children[2] = Transform705;

let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new X3D.SFVec3f([0.25,1.27,-0.04]);
let Shape708 = browser.currentScene.createNode("Shape");
Shape708.USE = "skinsphere";
Transform707YYY.child = new X3D.undefined();

Transform707ZZZ.child[0] = Shape708;

HAnimSegment698ZZZ.children[3] = Transform707;

let Transform709 = browser.currentScene.createNode("Transform");
Transform709.translation = new X3D.SFVec3f([0.17,1.27,-0.04]);
let Shape710 = browser.currentScene.createNode("Shape");
Shape710.USE = "skinsphere";
Transform709YYY.child = new X3D.undefined();

Transform709ZZZ.child[0] = Shape710;

HAnimSegment698ZZZ.children[4] = Transform709;

let Transform711 = browser.currentScene.createNode("Transform");
Transform711.translation = new X3D.SFVec3f([0.2,1.27,-0.09]);
let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "skinsphere";
Transform711YYY.child = new X3D.undefined();

Transform711ZZZ.child[0] = Shape712;

HAnimSegment698ZZZ.children[5] = Transform711;

let Transform713 = browser.currentScene.createNode("Transform");
Transform713.translation = new X3D.SFVec3f([0.2,1.27,0.02]);
let Shape714 = browser.currentScene.createNode("Shape");
Shape714.USE = "skinsphere";
Transform713YYY.child = new X3D.undefined();

Transform713ZZZ.child[0] = Shape714;

HAnimSegment698ZZZ.children[6] = Transform713;

let HAnimSite715 = browser.currentScene.createNode("HAnimSite");
HAnimSite715.DEF = "Joe_l_humeral_medial_epicn";
HAnimSite715.name = "l_humeral_medial_epicn";
HAnimSite715.translation = new X3D.SFVec3f([0.165,1.1388,-0.04]);
let Shape716 = browser.currentScene.createNode("Shape");
Shape716.USE = "sitebox";
HAnimSite715YYY.children = new X3D.MFNode();

HAnimSite715ZZZ.children[0] = Shape716;

HAnimSegment698ZZZ.children[7] = HAnimSite715;

let HAnimSite717 = browser.currentScene.createNode("HAnimSite");
HAnimSite717.DEF = "Joe_l_radiale";
HAnimSite717.name = "l_radiale";
HAnimSite717.translation = new X3D.SFVec3f([0.23,1.133,-0.055]);
let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "sitebox";
HAnimSite717YYY.children = new X3D.MFNode();

HAnimSite717ZZZ.children[0] = Shape718;

HAnimSegment698ZZZ.children[8] = HAnimSite717;

let HAnimSite719 = browser.currentScene.createNode("HAnimSite");
HAnimSite719.DEF = "Joe_l_humeral_lateral_epicn";
HAnimSite719.name = "l_humeral_lateral_epicn";
HAnimSite719.translation = new X3D.SFVec3f([0.244,1.1388,-0.04]);
let Shape720 = browser.currentScene.createNode("Shape");
Shape720.USE = "sitebox";
HAnimSite719YYY.children = new X3D.MFNode();

HAnimSite719ZZZ.children[0] = Shape720;

HAnimSegment698ZZZ.children[9] = HAnimSite719;

HAnimJoint697YYY.children = new X3D.MFNode();

HAnimJoint697ZZZ.children[0] = HAnimSegment698;

let HAnimJoint721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint721.DEF = "Joe_l_elbow";
HAnimJoint721.name = "l_elbow";
HAnimJoint721.rotation = new X3D.SFRotation([-0.999999999999982,0,0,0.139356882713934]);
HAnimJoint721.center = new X3D.SFVec3f([0.2,1.1388,-0.04]);
HAnimJoint721.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint721.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment722.DEF = "Joe_l_forearm";
HAnimSegment722.name = "l_forearm";
let Shape723 = browser.currentScene.createNode("Shape");
let Appearance724 = browser.currentScene.createNode("Appearance");
Appearance724.USE = "SegmentLine";
appearance = Appearance724;

let IndexedLineSet725 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet725.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate726 = browser.currentScene.createNode("Coordinate");
Coordinate726.point = new X3D.MFVec3f([0.2,1.1388,-0.04,0.2,0.87,-0.04]);
coord = Coordinate726;

geometry = IndexedLineSet725;

HAnimSegment722YYY.children = new X3D.MFNode();

HAnimSegment722ZZZ.children[0] = Shape723;

let Transform727 = browser.currentScene.createNode("Transform");
Transform727.translation = new X3D.SFVec3f([0.2,1.1388,-0.04]);
let Shape728 = browser.currentScene.createNode("Shape");
Shape728.USE = "jointbox";
Transform727YYY.child = new X3D.undefined();

Transform727ZZZ.child[0] = Shape728;

HAnimSegment722ZZZ.children[1] = Transform727;

let Transform729 = browser.currentScene.createNode("Transform");
Transform729.translation = new X3D.SFVec3f([0.2,1.1388,-0.013]);
let Shape730 = browser.currentScene.createNode("Shape");
Shape730.USE = "skinsphere";
Transform729YYY.child = new X3D.undefined();

Transform729ZZZ.child[0] = Shape730;

HAnimSegment722ZZZ.children[2] = Transform729;

let Transform731 = browser.currentScene.createNode("Transform");
Transform731.translation = new X3D.SFVec3f([0.225,1,-0.01]);
let Shape732 = browser.currentScene.createNode("Shape");
Shape732.USE = "skinsphere";
Transform731YYY.child = new X3D.undefined();

Transform731ZZZ.child[0] = Shape732;

HAnimSegment722ZZZ.children[3] = Transform731;

let Transform733 = browser.currentScene.createNode("Transform");
Transform733.translation = new X3D.SFVec3f([0.225,1,-0.07]);
let Shape734 = browser.currentScene.createNode("Shape");
Shape734.USE = "skinsphere";
Transform733YYY.child = new X3D.undefined();

Transform733ZZZ.child[0] = Shape734;

HAnimSegment722ZZZ.children[4] = Transform733;

let Transform735 = browser.currentScene.createNode("Transform");
Transform735.translation = new X3D.SFVec3f([0.185,1,-0.01]);
let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "skinsphere";
Transform735YYY.child = new X3D.undefined();

Transform735ZZZ.child[0] = Shape736;

HAnimSegment722ZZZ.children[5] = Transform735;

let Transform737 = browser.currentScene.createNode("Transform");
Transform737.translation = new X3D.SFVec3f([0.185,1,-0.07]);
let Shape738 = browser.currentScene.createNode("Shape");
Shape738.USE = "skinsphere";
Transform737YYY.child = new X3D.undefined();

Transform737ZZZ.child[0] = Shape738;

HAnimSegment722ZZZ.children[6] = Transform737;

let HAnimSite739 = browser.currentScene.createNode("HAnimSite");
HAnimSite739.DEF = "Joe_l_radial_styloid";
HAnimSite739.name = "l_radial_styloid";
HAnimSite739.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "sitebox";
HAnimSite739YYY.children = new X3D.MFNode();

HAnimSite739ZZZ.children[0] = Shape740;

HAnimSegment722ZZZ.children[7] = HAnimSite739;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.DEF = "Joe_l_olecranon";
HAnimSite741.name = "l_olecranon";
HAnimSite741.translation = new X3D.SFVec3f([0.2,1.1388,-0.08]);
let Shape742 = browser.currentScene.createNode("Shape");
Shape742.USE = "sitebox";
HAnimSite741YYY.children = new X3D.MFNode();

HAnimSite741ZZZ.children[0] = Shape742;

HAnimSegment722ZZZ.children[8] = HAnimSite741;

HAnimJoint721YYY.children = new X3D.MFNode();

HAnimJoint721ZZZ.children[0] = HAnimSegment722;

let HAnimJoint743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint743.DEF = "Joe_l_wrist";
HAnimJoint743.name = "l_wrist";
HAnimJoint743.rotation = new X3D.SFRotation([-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821]);
HAnimJoint743.center = new X3D.SFVec3f([0.2,0.87,-0.04]);
HAnimJoint743.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint743.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment744.DEF = "Joe_l_hand";
HAnimSegment744.name = "l_hand";
let Shape745 = browser.currentScene.createNode("Shape");
let Appearance746 = browser.currentScene.createNode("Appearance");
Appearance746.USE = "SegmentLine";
appearance = Appearance746;

let IndexedLineSet747 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet747.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate748 = browser.currentScene.createNode("Coordinate");
Coordinate748.point = new X3D.MFVec3f([0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
coord = Coordinate748;

geometry = IndexedLineSet747;

HAnimSegment744YYY.children = new X3D.MFNode();

HAnimSegment744ZZZ.children[0] = Shape745;

let Transform749 = browser.currentScene.createNode("Transform");
Transform749.translation = new X3D.SFVec3f([0.2,0.87,-0.04]);
let Shape750 = browser.currentScene.createNode("Shape");
Shape750.USE = "jointbox";
Transform749YYY.child = new X3D.undefined();

Transform749ZZZ.child[0] = Shape750;

HAnimSegment744ZZZ.children[1] = Transform749;

let HAnimSite751 = browser.currentScene.createNode("HAnimSite");
HAnimSite751.DEF = "Joe_l_metacarpal_pha2";
HAnimSite751.name = "l_metacarpal_pha2";
HAnimSite751.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let Shape752 = browser.currentScene.createNode("Shape");
Shape752.USE = "sitebox";
HAnimSite751YYY.children = new X3D.MFNode();

HAnimSite751ZZZ.children[0] = Shape752;

HAnimSegment744ZZZ.children[2] = HAnimSite751;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.DEF = "Joe_l_ulnar_styloid";
HAnimSite753.name = "l_ulnar_styloid";
HAnimSite753.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
let Shape754 = browser.currentScene.createNode("Shape");
Shape754.USE = "sitebox";
HAnimSite753YYY.children = new X3D.MFNode();

HAnimSite753ZZZ.children[0] = Shape754;

HAnimSegment744ZZZ.children[3] = HAnimSite753;

let HAnimSite755 = browser.currentScene.createNode("HAnimSite");
HAnimSite755.DEF = "Joe_l_metacarpal_pha5";
HAnimSite755.name = "l_metacarpal_pha5";
HAnimSite755.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let Shape756 = browser.currentScene.createNode("Shape");
Shape756.USE = "sitebox";
HAnimSite755YYY.children = new X3D.MFNode();

HAnimSite755ZZZ.children[0] = Shape756;

HAnimSegment744ZZZ.children[4] = HAnimSite755;

HAnimJoint743YYY.children = new X3D.MFNode();

HAnimJoint743ZZZ.children[0] = HAnimSegment744;

let HAnimJoint757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint757.DEF = "Joe_l_thumb1";
HAnimJoint757.name = "l_thumb1";
HAnimJoint757.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint757.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint757.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment758.DEF = "Joe_l_thumb_metacarpal";
HAnimSegment758.name = "l_thumb_metacarpal";
let Shape759 = browser.currentScene.createNode("Shape");
let Appearance760 = browser.currentScene.createNode("Appearance");
Appearance760.USE = "SegmentLine";
appearance = Appearance760;

let IndexedLineSet761 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet761.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate762 = browser.currentScene.createNode("Coordinate");
Coordinate762.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate762;

geometry = IndexedLineSet761;

HAnimSegment758YYY.children = new X3D.MFNode();

HAnimSegment758ZZZ.children[0] = Shape759;

let Transform763 = browser.currentScene.createNode("Transform");
Transform763.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "jointbox";
Transform763YYY.child = new X3D.undefined();

Transform763ZZZ.child[0] = Shape764;

HAnimSegment758ZZZ.children[1] = Transform763;

HAnimJoint757YYY.children = new X3D.MFNode();

HAnimJoint757ZZZ.children[0] = HAnimSegment758;

let HAnimJoint765 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint765.DEF = "Joe_l_thumb2";
HAnimJoint765.name = "l_thumb2";
HAnimJoint765.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint765.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint765.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimSegment766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment766.DEF = "Joe_l_thumb_proximal";
HAnimSegment766.name = "l_thumb_distal";
let Shape767 = browser.currentScene.createNode("Shape");
let Appearance768 = browser.currentScene.createNode("Appearance");
Appearance768.USE = "SegmentLine";
appearance = Appearance768;

let IndexedLineSet769 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet769.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate770 = browser.currentScene.createNode("Coordinate");
Coordinate770.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate770;

geometry = IndexedLineSet769;

HAnimSegment766YYY.children = new X3D.MFNode();

HAnimSegment766ZZZ.children[0] = Shape767;

let Transform771 = browser.currentScene.createNode("Transform");
Transform771.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape772 = browser.currentScene.createNode("Shape");
Shape772.USE = "jointbox";
Transform771YYY.child = new X3D.undefined();

Transform771ZZZ.child[0] = Shape772;

HAnimSegment766ZZZ.children[1] = Transform771;

HAnimJoint765YYY.children = new X3D.MFNode();

HAnimJoint765ZZZ.children[0] = HAnimSegment766;

let HAnimJoint773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint773.DEF = "Joe_l_thumb3";
HAnimJoint773.name = "l_thumb3";
HAnimJoint773.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint773.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint773.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment774.DEF = "Joe_l_thumb_distal";
HAnimSegment774.name = "l_thumb_distal";
let Shape775 = browser.currentScene.createNode("Shape");
let Appearance776 = browser.currentScene.createNode("Appearance");
Appearance776.USE = "SegmentLine";
appearance = Appearance776;

let IndexedLineSet777 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet777.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate778 = browser.currentScene.createNode("Coordinate");
Coordinate778.point = new X3D.MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
coord = Coordinate778;

geometry = IndexedLineSet777;

HAnimSegment774YYY.children = new X3D.MFNode();

HAnimSegment774ZZZ.children[0] = Shape775;

let Transform779 = browser.currentScene.createNode("Transform");
Transform779.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape780 = browser.currentScene.createNode("Shape");
Shape780.USE = "jointbox";
Transform779YYY.child = new X3D.undefined();

Transform779ZZZ.child[0] = Shape780;

HAnimSegment774ZZZ.children[1] = Transform779;

let HAnimSite781 = browser.currentScene.createNode("HAnimSite");
HAnimSite781.DEF = "Joe_l_thumb_distal_tip";
HAnimSite781.name = "l_thumb_distal_tip";
HAnimSite781.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "sitebox";
HAnimSite781YYY.children = new X3D.MFNode();

HAnimSite781ZZZ.children[0] = Shape782;

HAnimSegment774ZZZ.children[2] = HAnimSite781;

HAnimJoint773YYY.children = new X3D.MFNode();

HAnimJoint773ZZZ.children[0] = HAnimSegment774;

HAnimJoint765ZZZ.children[1] = HAnimJoint773;

HAnimJoint757ZZZ.children[1] = HAnimJoint765;

HAnimJoint743ZZZ.children[1] = HAnimJoint757;

let HAnimJoint783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint783.DEF = "Joe_l_index0";
HAnimJoint783.name = "l_index0";
HAnimJoint783.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint783.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint783.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment784.DEF = "Joe_l_index_metacarpal";
HAnimSegment784.name = "l_index_metacarpal";
let Shape785 = browser.currentScene.createNode("Shape");
let Appearance786 = browser.currentScene.createNode("Appearance");
Appearance786.USE = "SegmentLine";
appearance = Appearance786;

let IndexedLineSet787 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet787.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate788 = browser.currentScene.createNode("Coordinate");
Coordinate788.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate788;

geometry = IndexedLineSet787;

HAnimSegment784YYY.children = new X3D.MFNode();

HAnimSegment784ZZZ.children[0] = Shape785;

let Transform789 = browser.currentScene.createNode("Transform");
Transform789.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "jointbox";
Transform789YYY.child = new X3D.undefined();

Transform789ZZZ.child[0] = Shape790;

HAnimSegment784ZZZ.children[1] = Transform789;

HAnimJoint783YYY.children = new X3D.MFNode();

HAnimJoint783ZZZ.children[0] = HAnimSegment784;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.DEF = "Joe_l_index1";
HAnimJoint791.name = "l_index1";
HAnimJoint791.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint791.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint791.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimSegment792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment792.DEF = "Joe_l_index_proximal";
HAnimSegment792.name = "l_index_proximal";
let Shape793 = browser.currentScene.createNode("Shape");
let Appearance794 = browser.currentScene.createNode("Appearance");
Appearance794.USE = "SegmentLine";
appearance = Appearance794;

let IndexedLineSet795 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet795.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate796 = browser.currentScene.createNode("Coordinate");
Coordinate796.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate796;

geometry = IndexedLineSet795;

HAnimSegment792YYY.children = new X3D.MFNode();

HAnimSegment792ZZZ.children[0] = Shape793;

let Transform797 = browser.currentScene.createNode("Transform");
Transform797.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "jointbox";
Transform797YYY.child = new X3D.undefined();

Transform797ZZZ.child[0] = Shape798;

HAnimSegment792ZZZ.children[1] = Transform797;

HAnimJoint791YYY.children = new X3D.MFNode();

HAnimJoint791ZZZ.children[0] = HAnimSegment792;

let HAnimJoint799 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint799.DEF = "Joe_l_index2";
HAnimJoint799.name = "l_index2";
HAnimJoint799.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint799.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint799.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment800.DEF = "Joe_l_index_middle";
HAnimSegment800.name = "l_index_middle";
let Shape801 = browser.currentScene.createNode("Shape");
let Appearance802 = browser.currentScene.createNode("Appearance");
Appearance802.USE = "SegmentLine";
appearance = Appearance802;

let IndexedLineSet803 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet803.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate804 = browser.currentScene.createNode("Coordinate");
Coordinate804.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate804;

geometry = IndexedLineSet803;

HAnimSegment800YYY.children = new X3D.MFNode();

HAnimSegment800ZZZ.children[0] = Shape801;

let Transform805 = browser.currentScene.createNode("Transform");
Transform805.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape806 = browser.currentScene.createNode("Shape");
Shape806.USE = "jointbox";
Transform805YYY.child = new X3D.undefined();

Transform805ZZZ.child[0] = Shape806;

HAnimSegment800ZZZ.children[1] = Transform805;

HAnimJoint799YYY.children = new X3D.MFNode();

HAnimJoint799ZZZ.children[0] = HAnimSegment800;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.DEF = "Joe_l_index3";
HAnimJoint807.name = "l_index3";
HAnimJoint807.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint807.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint807.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment808.DEF = "Joe_l_index_distal";
HAnimSegment808.name = "l_index_distal";
let Shape809 = browser.currentScene.createNode("Shape");
let Appearance810 = browser.currentScene.createNode("Appearance");
Appearance810.USE = "SegmentLine";
appearance = Appearance810;

let IndexedLineSet811 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet811.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
coord = Coordinate812;

geometry = IndexedLineSet811;

HAnimSegment808YYY.children = new X3D.MFNode();

HAnimSegment808ZZZ.children[0] = Shape809;

let Transform813 = browser.currentScene.createNode("Transform");
Transform813.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape814 = browser.currentScene.createNode("Shape");
Shape814.USE = "jointbox";
Transform813YYY.child = new X3D.undefined();

Transform813ZZZ.child[0] = Shape814;

HAnimSegment808ZZZ.children[1] = Transform813;

let HAnimSite815 = browser.currentScene.createNode("HAnimSite");
HAnimSite815.DEF = "Joe_l_index_distal_tip";
HAnimSite815.name = "l_index_distal_tip";
HAnimSite815.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let Shape816 = browser.currentScene.createNode("Shape");
Shape816.USE = "sitebox";
HAnimSite815YYY.children = new X3D.MFNode();

HAnimSite815ZZZ.children[0] = Shape816;

HAnimSegment808ZZZ.children[2] = HAnimSite815;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.DEF = "Joe_l_dactylion";
HAnimSite817.name = "l_dactylion";
HAnimSite817.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let Shape818 = browser.currentScene.createNode("Shape");
Shape818.USE = "sitebox";
HAnimSite817YYY.children = new X3D.MFNode();

HAnimSite817ZZZ.children[0] = Shape818;

HAnimSegment808ZZZ.children[3] = HAnimSite817;

HAnimJoint807YYY.children = new X3D.MFNode();

HAnimJoint807ZZZ.children[0] = HAnimSegment808;

HAnimJoint799ZZZ.children[1] = HAnimJoint807;

HAnimJoint791ZZZ.children[1] = HAnimJoint799;

HAnimJoint783ZZZ.children[1] = HAnimJoint791;

HAnimJoint743ZZZ.children[2] = HAnimJoint783;

let HAnimJoint819 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint819.DEF = "Joe_l_middle0";
HAnimJoint819.name = "l_middle0";
HAnimJoint819.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint819.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint819.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment820.DEF = "Joe_l_middle_metacarpal";
HAnimSegment820.name = "l_middle_metacarpal";
let Shape821 = browser.currentScene.createNode("Shape");
let Appearance822 = browser.currentScene.createNode("Appearance");
Appearance822.USE = "SegmentLine";
appearance = Appearance822;

let IndexedLineSet823 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet823.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate824 = browser.currentScene.createNode("Coordinate");
Coordinate824.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate824;

geometry = IndexedLineSet823;

HAnimSegment820YYY.children = new X3D.MFNode();

HAnimSegment820ZZZ.children[0] = Shape821;

let Transform825 = browser.currentScene.createNode("Transform");
Transform825.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Shape826 = browser.currentScene.createNode("Shape");
Shape826.USE = "jointbox";
Transform825YYY.child = new X3D.undefined();

Transform825ZZZ.child[0] = Shape826;

HAnimSegment820ZZZ.children[1] = Transform825;

HAnimJoint819YYY.children = new X3D.MFNode();

HAnimJoint819ZZZ.children[0] = HAnimSegment820;

let HAnimJoint827 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint827.DEF = "Joe_l_middle1";
HAnimJoint827.name = "l_middle1";
HAnimJoint827.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint827.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint827.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment828.DEF = "Joe_l_middle_proximal";
HAnimSegment828.name = "l_middle_proximal";
let Shape829 = browser.currentScene.createNode("Shape");
let Appearance830 = browser.currentScene.createNode("Appearance");
Appearance830.USE = "SegmentLine";
appearance = Appearance830;

let IndexedLineSet831 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet831.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate832;

geometry = IndexedLineSet831;

HAnimSegment828YYY.children = new X3D.MFNode();

HAnimSegment828ZZZ.children[0] = Shape829;

let Transform833 = browser.currentScene.createNode("Transform");
Transform833.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "jointbox";
Transform833YYY.child = new X3D.undefined();

Transform833ZZZ.child[0] = Shape834;

HAnimSegment828ZZZ.children[1] = Transform833;

HAnimJoint827YYY.children = new X3D.MFNode();

HAnimJoint827ZZZ.children[0] = HAnimSegment828;

let HAnimJoint835 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint835.DEF = "Joe_l_middle2";
HAnimJoint835.name = "l_middle2";
HAnimJoint835.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint835.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint835.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment836.DEF = "Joe_l_middle_middle";
HAnimSegment836.name = "l_middle_middle";
let Shape837 = browser.currentScene.createNode("Shape");
let Appearance838 = browser.currentScene.createNode("Appearance");
Appearance838.USE = "SegmentLine";
appearance = Appearance838;

let IndexedLineSet839 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet839.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate840 = browser.currentScene.createNode("Coordinate");
Coordinate840.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate840;

geometry = IndexedLineSet839;

HAnimSegment836YYY.children = new X3D.MFNode();

HAnimSegment836ZZZ.children[0] = Shape837;

let Transform841 = browser.currentScene.createNode("Transform");
Transform841.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Shape842 = browser.currentScene.createNode("Shape");
Shape842.USE = "jointbox";
Transform841YYY.child = new X3D.undefined();

Transform841ZZZ.child[0] = Shape842;

HAnimSegment836ZZZ.children[1] = Transform841;

HAnimJoint835YYY.children = new X3D.MFNode();

HAnimJoint835ZZZ.children[0] = HAnimSegment836;

let HAnimJoint843 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint843.DEF = "Joe_l_middle3";
HAnimJoint843.name = "l_middle3";
HAnimJoint843.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint843.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint843.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment844.DEF = "Joe_l_middle_distal";
HAnimSegment844.name = "l_middle_distal";
let Shape845 = browser.currentScene.createNode("Shape");
let Appearance846 = browser.currentScene.createNode("Appearance");
Appearance846.USE = "SegmentLine";
appearance = Appearance846;

let IndexedLineSet847 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet847.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate848 = browser.currentScene.createNode("Coordinate");
Coordinate848.point = new X3D.MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
coord = Coordinate848;

geometry = IndexedLineSet847;

HAnimSegment844YYY.children = new X3D.MFNode();

HAnimSegment844ZZZ.children[0] = Shape845;

let HAnimSite849 = browser.currentScene.createNode("HAnimSite");
HAnimSite849.DEF = "Joe_l_middle_distal_tip";
HAnimSite849.name = "l_middle_distal_tip";
HAnimSite849.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "sitebox";
HAnimSite849YYY.children = new X3D.MFNode();

HAnimSite849ZZZ.children[0] = Shape850;

HAnimSegment844ZZZ.children[1] = HAnimSite849;

let Transform851 = browser.currentScene.createNode("Transform");
Transform851.translation = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let Shape852 = browser.currentScene.createNode("Shape");
Shape852.USE = "jointbox";
Transform851YYY.child = new X3D.undefined();

Transform851ZZZ.child[0] = Shape852;

HAnimSegment844ZZZ.children[2] = Transform851;

HAnimJoint843YYY.children = new X3D.MFNode();

HAnimJoint843ZZZ.children[0] = HAnimSegment844;

HAnimJoint835ZZZ.children[1] = HAnimJoint843;

HAnimJoint827ZZZ.children[1] = HAnimJoint835;

HAnimJoint819ZZZ.children[1] = HAnimJoint827;

HAnimJoint743ZZZ.children[3] = HAnimJoint819;

let HAnimJoint853 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint853.DEF = "Joe_l_ring0";
HAnimJoint853.name = "l_ring0";
HAnimJoint853.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint853.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint853.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment854.DEF = "Joe_l_ring_metacarpal";
HAnimSegment854.name = "l_ring_metacarpal";
let Shape855 = browser.currentScene.createNode("Shape");
let Appearance856 = browser.currentScene.createNode("Appearance");
Appearance856.USE = "SegmentLine";
appearance = Appearance856;

let IndexedLineSet857 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet857.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate858 = browser.currentScene.createNode("Coordinate");
Coordinate858.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate858;

geometry = IndexedLineSet857;

HAnimSegment854YYY.children = new X3D.MFNode();

HAnimSegment854ZZZ.children[0] = Shape855;

let Transform859 = browser.currentScene.createNode("Transform");
Transform859.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Shape860 = browser.currentScene.createNode("Shape");
Shape860.USE = "jointbox";
Transform859YYY.child = new X3D.undefined();

Transform859ZZZ.child[0] = Shape860;

HAnimSegment854ZZZ.children[1] = Transform859;

HAnimJoint853YYY.children = new X3D.MFNode();

HAnimJoint853ZZZ.children[0] = HAnimSegment854;

let HAnimJoint861 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint861.DEF = "Joe_l_ring1";
HAnimJoint861.name = "l_ring1";
HAnimJoint861.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint861.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint861.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment862.DEF = "Joe_l_ring_proximal";
HAnimSegment862.name = "l_ring_proximal";
let Shape863 = browser.currentScene.createNode("Shape");
let Appearance864 = browser.currentScene.createNode("Appearance");
Appearance864.USE = "SegmentLine";
appearance = Appearance864;

let IndexedLineSet865 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet865.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate866 = browser.currentScene.createNode("Coordinate");
Coordinate866.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate866;

geometry = IndexedLineSet865;

HAnimSegment862YYY.children = new X3D.MFNode();

HAnimSegment862ZZZ.children[0] = Shape863;

let Transform867 = browser.currentScene.createNode("Transform");
Transform867.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "jointbox";
Transform867YYY.child = new X3D.undefined();

Transform867ZZZ.child[0] = Shape868;

HAnimSegment862ZZZ.children[1] = Transform867;

HAnimJoint861YYY.children = new X3D.MFNode();

HAnimJoint861ZZZ.children[0] = HAnimSegment862;

let HAnimJoint869 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint869.DEF = "Joe_l_ring2";
HAnimJoint869.name = "l_ring2";
HAnimJoint869.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint869.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint869.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment870.DEF = "Joe_l_ring_middle";
HAnimSegment870.name = "l_ring_middle";
let Shape871 = browser.currentScene.createNode("Shape");
let Appearance872 = browser.currentScene.createNode("Appearance");
Appearance872.USE = "SegmentLine";
appearance = Appearance872;

let IndexedLineSet873 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet873.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate874 = browser.currentScene.createNode("Coordinate");
Coordinate874.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate874;

geometry = IndexedLineSet873;

HAnimSegment870YYY.children = new X3D.MFNode();

HAnimSegment870ZZZ.children[0] = Shape871;

let Transform875 = browser.currentScene.createNode("Transform");
Transform875.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "jointbox";
Transform875YYY.child = new X3D.undefined();

Transform875ZZZ.child[0] = Shape876;

HAnimSegment870ZZZ.children[1] = Transform875;

HAnimJoint869YYY.children = new X3D.MFNode();

HAnimJoint869ZZZ.children[0] = HAnimSegment870;

let HAnimJoint877 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint877.DEF = "Joe_l_ring3";
HAnimJoint877.name = "l_ring3";
HAnimJoint877.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint877.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint877.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment878 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment878.DEF = "Joe_l_ring_distal";
HAnimSegment878.name = "l_ring_distal";
let Shape879 = browser.currentScene.createNode("Shape");
let Appearance880 = browser.currentScene.createNode("Appearance");
Appearance880.USE = "SegmentLine";
appearance = Appearance880;

let IndexedLineSet881 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet881.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate882 = browser.currentScene.createNode("Coordinate");
Coordinate882.point = new X3D.MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
coord = Coordinate882;

geometry = IndexedLineSet881;

HAnimSegment878YYY.children = new X3D.MFNode();

HAnimSegment878ZZZ.children[0] = Shape879;

let Transform883 = browser.currentScene.createNode("Transform");
Transform883.translation = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "jointbox";
Transform883YYY.child = new X3D.undefined();

Transform883ZZZ.child[0] = Shape884;

HAnimSegment878ZZZ.children[1] = Transform883;

let HAnimSite885 = browser.currentScene.createNode("HAnimSite");
HAnimSite885.DEF = "Joe_l_ring_distal_tip";
HAnimSite885.name = "l_ring_distal_tip";
HAnimSite885.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
let Shape886 = browser.currentScene.createNode("Shape");
Shape886.USE = "sitebox";
HAnimSite885YYY.children = new X3D.MFNode();

HAnimSite885ZZZ.children[0] = Shape886;

HAnimSegment878ZZZ.children[2] = HAnimSite885;

HAnimJoint877YYY.children = new X3D.MFNode();

HAnimJoint877ZZZ.children[0] = HAnimSegment878;

HAnimJoint869ZZZ.children[1] = HAnimJoint877;

HAnimJoint861ZZZ.children[1] = HAnimJoint869;

HAnimJoint853ZZZ.children[1] = HAnimJoint861;

HAnimJoint743ZZZ.children[4] = HAnimJoint853;

let HAnimJoint887 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint887.DEF = "Joe_l_pinky0";
HAnimJoint887.name = "l_pinky0";
HAnimJoint887.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint887.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint887.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimSegment888 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment888.DEF = "Joe_l_pinky_metacarpal";
HAnimSegment888.name = "l_pinky_metacarpal";
let Shape889 = browser.currentScene.createNode("Shape");
let Appearance890 = browser.currentScene.createNode("Appearance");
Appearance890.USE = "SegmentLine";
appearance = Appearance890;

let IndexedLineSet891 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet891.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate892 = browser.currentScene.createNode("Coordinate");
Coordinate892.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate892;

geometry = IndexedLineSet891;

HAnimSegment888YYY.children = new X3D.MFNode();

HAnimSegment888ZZZ.children[0] = Shape889;

let Transform893 = browser.currentScene.createNode("Transform");
Transform893.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Shape894 = browser.currentScene.createNode("Shape");
Shape894.USE = "jointbox";
Transform893YYY.child = new X3D.undefined();

Transform893ZZZ.child[0] = Shape894;

HAnimSegment888ZZZ.children[1] = Transform893;

HAnimJoint887YYY.children = new X3D.MFNode();

HAnimJoint887ZZZ.children[0] = HAnimSegment888;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.DEF = "Joe_l_pinky1";
HAnimJoint895.name = "l_pinky1";
HAnimJoint895.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint895.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint895.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment896 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment896.DEF = "Joe_l_pinky_proximal";
HAnimSegment896.name = "l_pinky_proximal";
let Shape897 = browser.currentScene.createNode("Shape");
let Appearance898 = browser.currentScene.createNode("Appearance");
Appearance898.USE = "SegmentLine";
appearance = Appearance898;

let IndexedLineSet899 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet899.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate900 = browser.currentScene.createNode("Coordinate");
Coordinate900.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate900;

geometry = IndexedLineSet899;

HAnimSegment896YYY.children = new X3D.MFNode();

HAnimSegment896ZZZ.children[0] = Shape897;

let Transform901 = browser.currentScene.createNode("Transform");
Transform901.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Shape902 = browser.currentScene.createNode("Shape");
Shape902.USE = "jointbox";
Transform901YYY.child = new X3D.undefined();

Transform901ZZZ.child[0] = Shape902;

HAnimSegment896ZZZ.children[1] = Transform901;

HAnimJoint895YYY.children = new X3D.MFNode();

HAnimJoint895ZZZ.children[0] = HAnimSegment896;

let HAnimJoint903 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint903.DEF = "Joe_l_pinky2";
HAnimJoint903.name = "l_pinky2";
HAnimJoint903.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint903.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint903.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment904 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment904.DEF = "Joe_l_pinky_middle";
HAnimSegment904.name = "l_pinky_middle";
let Transform905 = browser.currentScene.createNode("Transform");
Transform905.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Shape906 = browser.currentScene.createNode("Shape");
Shape906.USE = "jointbox";
Transform905YYY.child = new X3D.undefined();

Transform905ZZZ.child[0] = Shape906;

HAnimSegment904YYY.children = new X3D.MFNode();

HAnimSegment904ZZZ.children[0] = Transform905;

let Shape907 = browser.currentScene.createNode("Shape");
let Appearance908 = browser.currentScene.createNode("Appearance");
Appearance908.USE = "SegmentLine";
appearance = Appearance908;

let IndexedLineSet909 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet909.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate910 = browser.currentScene.createNode("Coordinate");
Coordinate910.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate910;

geometry = IndexedLineSet909;

HAnimSegment904ZZZ.children[1] = Shape907;

HAnimJoint903YYY.children = new X3D.MFNode();

HAnimJoint903ZZZ.children[0] = HAnimSegment904;

let HAnimJoint911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint911.DEF = "Joe_l_pinky3";
HAnimJoint911.name = "l_pinky3";
HAnimJoint911.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint911.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint911.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment912 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment912.DEF = "Joe_l_pinky_distal";
HAnimSegment912.name = "l_pinky_distal";
let Shape913 = browser.currentScene.createNode("Shape");
let Appearance914 = browser.currentScene.createNode("Appearance");
Appearance914.USE = "SegmentLine";
appearance = Appearance914;

let IndexedLineSet915 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet915.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate916 = browser.currentScene.createNode("Coordinate");
Coordinate916.point = new X3D.MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
coord = Coordinate916;

geometry = IndexedLineSet915;

HAnimSegment912YYY.children = new X3D.MFNode();

HAnimSegment912ZZZ.children[0] = Shape913;

let Transform917 = browser.currentScene.createNode("Transform");
Transform917.translation = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "jointbox";
Transform917YYY.child = new X3D.undefined();

Transform917ZZZ.child[0] = Shape918;

HAnimSegment912ZZZ.children[1] = Transform917;

let HAnimSite919 = browser.currentScene.createNode("HAnimSite");
HAnimSite919.DEF = "Joe_l_pinky_distal_tip";
HAnimSite919.name = "l_pinky_distal_tip";
HAnimSite919.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "sitebox";
HAnimSite919YYY.children = new X3D.MFNode();

HAnimSite919ZZZ.children[0] = Shape920;

HAnimSegment912ZZZ.children[2] = HAnimSite919;

HAnimJoint911YYY.children = new X3D.MFNode();

HAnimJoint911ZZZ.children[0] = HAnimSegment912;

HAnimJoint903ZZZ.children[1] = HAnimJoint911;

HAnimJoint895ZZZ.children[1] = HAnimJoint903;

HAnimJoint887ZZZ.children[1] = HAnimJoint895;

HAnimJoint743ZZZ.children[5] = HAnimJoint887;

HAnimJoint721ZZZ.children[1] = HAnimJoint743;

HAnimJoint697ZZZ.children[1] = HAnimJoint721;

HAnimJoint681ZZZ.children[1] = HAnimJoint697;

HAnimJoint671ZZZ.children[1] = HAnimJoint681;

HAnimJoint555ZZZ.children[2] = HAnimJoint671;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.DEF = "Joe_r_sternoclavicular";
HAnimJoint921.name = "r_sternoclavicular";
HAnimJoint921.center = new X3D.SFVec3f([-0.03,1.46,0]);
HAnimJoint921.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint921.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment922 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment922.DEF = "Joe_r_clavicle";
HAnimSegment922.name = "r_clavicle";
let Shape923 = browser.currentScene.createNode("Shape");
let Appearance924 = browser.currentScene.createNode("Appearance");
Appearance924.USE = "SegmentLine";
appearance = Appearance924;

let IndexedLineSet925 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet925.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate926 = browser.currentScene.createNode("Coordinate");
Coordinate926.point = new X3D.MFVec3f([-0.03,1.46,0.02,-0.09,1.41,-0.09]);
coord = Coordinate926;

geometry = IndexedLineSet925;

HAnimSegment922YYY.children = new X3D.MFNode();

HAnimSegment922ZZZ.children[0] = Shape923;

let Transform927 = browser.currentScene.createNode("Transform");
Transform927.translation = new X3D.SFVec3f([-0.03,1.46,0.02]);
let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "jointbox";
Transform927YYY.child = new X3D.undefined();

Transform927ZZZ.child[0] = Shape928;

HAnimSegment922ZZZ.children[1] = Transform927;

let HAnimSite929 = browser.currentScene.createNode("HAnimSite");
HAnimSite929.DEF = "Joe_r_clavicale";
HAnimSite929.name = "r_clavicale";
HAnimSite929.translation = new X3D.SFVec3f([-0.03,1.46,0.035]);
let Shape930 = browser.currentScene.createNode("Shape");
Shape930.USE = "sitebox";
HAnimSite929YYY.children = new X3D.MFNode();

HAnimSite929ZZZ.children[0] = Shape930;

HAnimSegment922ZZZ.children[2] = HAnimSite929;

HAnimJoint921YYY.children = new X3D.MFNode();

HAnimJoint921ZZZ.children[0] = HAnimSegment922;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.DEF = "Joe_r_acromioclavicular";
HAnimJoint931.name = "r_acromioclavicular";
HAnimJoint931.center = new X3D.SFVec3f([-0.09,1.41,-0.11]);
HAnimJoint931.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint931.skinCoordWeight = new X3D.MFFloat([1,0.9]);
let HAnimSegment932 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment932.DEF = "Joe_r_scapula";
HAnimSegment932.name = "r_scapula";
let Shape933 = browser.currentScene.createNode("Shape");
let Appearance934 = browser.currentScene.createNode("Appearance");
Appearance934.USE = "SegmentLine";
appearance = Appearance934;

let IndexedLineSet935 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet935.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate936 = browser.currentScene.createNode("Coordinate");
Coordinate936.point = new X3D.MFVec3f([-0.09,1.41,-0.09,-0.2,1.44,-0.04]);
coord = Coordinate936;

geometry = IndexedLineSet935;

HAnimSegment932YYY.children = new X3D.MFNode();

HAnimSegment932ZZZ.children[0] = Shape933;

let Transform937 = browser.currentScene.createNode("Transform");
Transform937.translation = new X3D.SFVec3f([-0.09,1.41,-0.09]);
let Shape938 = browser.currentScene.createNode("Shape");
Shape938.USE = "jointbox";
Transform937YYY.child = new X3D.undefined();

Transform937ZZZ.child[0] = Shape938;

HAnimSegment932ZZZ.children[1] = Transform937;

let Transform939 = browser.currentScene.createNode("Transform");
Transform939.translation = new X3D.SFVec3f([-0.11,1.427,-0.1375]);
let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "skinsphere";
Transform939YYY.child = new X3D.undefined();

Transform939ZZZ.child[0] = Shape940;

HAnimSegment932ZZZ.children[2] = Transform939;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.DEF = "Joe_r_acromion";
HAnimSite941.name = "r_acromion";
HAnimSite941.translation = new X3D.SFVec3f([-0.178,1.4825,-0.0625]);
let Shape942 = browser.currentScene.createNode("Shape");
Shape942.USE = "sitebox";
HAnimSite941YYY.children = new X3D.MFNode();

HAnimSite941ZZZ.children[0] = Shape942;

HAnimSegment932ZZZ.children[3] = HAnimSite941;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.DEF = "Joe_r_axilla_ant";
HAnimSite943.name = "r_axilla_ant";
HAnimSite943.translation = new X3D.SFVec3f([-0.17,1.38,0.007]);
let Shape944 = browser.currentScene.createNode("Shape");
Shape944.USE = "sitebox";
HAnimSite943YYY.children = new X3D.MFNode();

HAnimSite943ZZZ.children[0] = Shape944;

HAnimSegment932ZZZ.children[4] = HAnimSite943;

let HAnimSite945 = browser.currentScene.createNode("HAnimSite");
HAnimSite945.DEF = "Joe_r_axilla_post";
HAnimSite945.name = "r_axilla_post";
HAnimSite945.translation = new X3D.SFVec3f([-0.16,1.38,-0.127]);
let Shape946 = browser.currentScene.createNode("Shape");
Shape946.USE = "sitebox";
HAnimSite945YYY.children = new X3D.MFNode();

HAnimSite945ZZZ.children[0] = Shape946;

HAnimSegment932ZZZ.children[5] = HAnimSite945;

HAnimJoint931YYY.children = new X3D.MFNode();

HAnimJoint931ZZZ.children[0] = HAnimSegment932;

let HAnimJoint947 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint947.DEF = "Joe_r_shoulder";
HAnimJoint947.name = "r_shoulder";
HAnimJoint947.rotation = new X3D.SFRotation([0,0,-0.999999999999779,0.0372377698785245]);
HAnimJoint947.center = new X3D.SFVec3f([-0.2,1.44,-0.04]);
HAnimJoint947.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint947.skinCoordWeight = new X3D.MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]);
let HAnimSegment948 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment948.DEF = "Joe_r_upperarm";
HAnimSegment948.name = "r_upperarm";
let Transform949 = browser.currentScene.createNode("Transform");
Transform949.translation = new X3D.SFVec3f([-0.2,1.44,-0.04]);
let Shape950 = browser.currentScene.createNode("Shape");
Shape950.USE = "jointbox";
Transform949YYY.child = new X3D.undefined();

Transform949ZZZ.child[0] = Shape950;

HAnimSegment948YYY.children = new X3D.MFNode();

HAnimSegment948ZZZ.children[0] = Transform949;

let Shape951 = browser.currentScene.createNode("Shape");
let Appearance952 = browser.currentScene.createNode("Appearance");
Appearance952.USE = "SegmentLine";
appearance = Appearance952;

let IndexedLineSet953 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet953.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate954 = browser.currentScene.createNode("Coordinate");
Coordinate954.point = new X3D.MFVec3f([-0.2,1.44,-0.04,-0.2,1.1388,-0.04]);
coord = Coordinate954;

geometry = IndexedLineSet953;

HAnimSegment948ZZZ.children[1] = Shape951;

let Transform955 = browser.currentScene.createNode("Transform");
Transform955.translation = new X3D.SFVec3f([-0.178,1.4825,-0.0625]);
let Shape956 = browser.currentScene.createNode("Shape");
Shape956.USE = "skinsphere";
Transform955YYY.child = new X3D.undefined();

Transform955ZZZ.child[0] = Shape956;

HAnimSegment948ZZZ.children[2] = Transform955;

let Transform957 = browser.currentScene.createNode("Transform");
Transform957.translation = new X3D.SFVec3f([-0.17,1.38,0.007]);
let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "skinsphere";
Transform957YYY.child = new X3D.undefined();

Transform957ZZZ.child[0] = Shape958;

HAnimSegment948ZZZ.children[3] = Transform957;

let Transform959 = browser.currentScene.createNode("Transform");
Transform959.translation = new X3D.SFVec3f([-0.16,1.38,-0.127]);
let Shape960 = browser.currentScene.createNode("Shape");
Shape960.USE = "skinsphere";
Transform959YYY.child = new X3D.undefined();

Transform959ZZZ.child[0] = Shape960;

HAnimSegment948ZZZ.children[4] = Transform959;

let Transform961 = browser.currentScene.createNode("Transform");
Transform961.translation = new X3D.SFVec3f([-0.235,1.42,-0.0625]);
let Shape962 = browser.currentScene.createNode("Shape");
Shape962.USE = "skinsphere";
Transform961YYY.child = new X3D.undefined();

Transform961ZZZ.child[0] = Shape962;

HAnimSegment948ZZZ.children[5] = Transform961;

let Transform963 = browser.currentScene.createNode("Transform");
Transform963.translation = new X3D.SFVec3f([-0.23,1.235,-0.04]);
let Shape964 = browser.currentScene.createNode("Shape");
Shape964.USE = "skinsphere";
Transform963YYY.child = new X3D.undefined();

Transform963ZZZ.child[0] = Shape964;

HAnimSegment948ZZZ.children[6] = Transform963;

let Transform965 = browser.currentScene.createNode("Transform");
Transform965.translation = new X3D.SFVec3f([-0.16,1.23,-0.04]);
let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "skinsphere";
Transform965YYY.child = new X3D.undefined();

Transform965ZZZ.child[0] = Shape966;

HAnimSegment948ZZZ.children[7] = Transform965;

let Transform967 = browser.currentScene.createNode("Transform");
Transform967.translation = new X3D.SFVec3f([-0.2,1.23,-0.105]);
let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "skinsphere";
Transform967YYY.child = new X3D.undefined();

Transform967ZZZ.child[0] = Shape968;

HAnimSegment948ZZZ.children[8] = Transform967;

let Transform969 = browser.currentScene.createNode("Transform");
Transform969.translation = new X3D.SFVec3f([-0.2,1.235,0.02]);
let Shape970 = browser.currentScene.createNode("Shape");
Shape970.USE = "skinsphere";
Transform969YYY.child = new X3D.undefined();

Transform969ZZZ.child[0] = Shape970;

HAnimSegment948ZZZ.children[9] = Transform969;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.DEF = "Joe_r_humeral_medial_epicn";
HAnimSite971.name = "r_humeral_medial_epicn";
HAnimSite971.translation = new X3D.SFVec3f([-0.165,1.1388,-0.04]);
let Shape972 = browser.currentScene.createNode("Shape");
Shape972.USE = "sitebox";
HAnimSite971YYY.children = new X3D.MFNode();

HAnimSite971ZZZ.children[0] = Shape972;

HAnimSegment948ZZZ.children[10] = HAnimSite971;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.DEF = "Joe_r_radiale";
HAnimSite973.name = "r_radiale";
HAnimSite973.translation = new X3D.SFVec3f([-0.23,1.133,-0.055]);
let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "sitebox";
HAnimSite973YYY.children = new X3D.MFNode();

HAnimSite973ZZZ.children[0] = Shape974;

HAnimSegment948ZZZ.children[11] = HAnimSite973;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.DEF = "Joe_r_humeral_lateral_epicn";
HAnimSite975.name = "r_humeral_lateral_epicn";
HAnimSite975.translation = new X3D.SFVec3f([-0.244,1.1388,-0.04]);
let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "sitebox";
HAnimSite975YYY.children = new X3D.MFNode();

HAnimSite975ZZZ.children[0] = Shape976;

HAnimSegment948ZZZ.children[12] = HAnimSite975;

HAnimJoint947YYY.children = new X3D.MFNode();

HAnimJoint947ZZZ.children[0] = HAnimSegment948;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.DEF = "Joe_r_elbow";
HAnimJoint977.name = "r_elbow";
HAnimJoint977.rotation = new X3D.SFRotation([-0.970142500145333,-0.242535625036333,0,0.149344152360623]);
HAnimJoint977.center = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
HAnimJoint977.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint977.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.DEF = "Joe_r_forearm";
HAnimSegment978.name = "r_forearm";
let Shape979 = browser.currentScene.createNode("Shape");
let Appearance980 = browser.currentScene.createNode("Appearance");
Appearance980.USE = "SegmentLine";
appearance = Appearance980;

let IndexedLineSet981 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet981.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate982 = browser.currentScene.createNode("Coordinate");
Coordinate982.point = new X3D.MFVec3f([-0.2,1.1388,-0.04,-0.2,0.89,-0.04]);
coord = Coordinate982;

geometry = IndexedLineSet981;

HAnimSegment978YYY.children = new X3D.MFNode();

HAnimSegment978ZZZ.children[0] = Shape979;

let Transform983 = browser.currentScene.createNode("Transform");
Transform983.translation = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
let Shape984 = browser.currentScene.createNode("Shape");
Shape984.USE = "jointbox";
Transform983YYY.child = new X3D.undefined();

Transform983ZZZ.child[0] = Shape984;

HAnimSegment978ZZZ.children[1] = Transform983;

let Transform985 = browser.currentScene.createNode("Transform");
Transform985.translation = new X3D.SFVec3f([-0.2,1.1388,0.013]);
let Shape986 = browser.currentScene.createNode("Shape");
Shape986.USE = "skinsphere";
Transform985YYY.child = new X3D.undefined();

Transform985ZZZ.child[0] = Shape986;

HAnimSegment978ZZZ.children[2] = Transform985;

let Transform987 = browser.currentScene.createNode("Transform");
Transform987.translation = new X3D.SFVec3f([-0.225,1,-0.01]);
let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "skinsphere";
Transform987YYY.child = new X3D.undefined();

Transform987ZZZ.child[0] = Shape988;

HAnimSegment978ZZZ.children[3] = Transform987;

let Transform989 = browser.currentScene.createNode("Transform");
Transform989.translation = new X3D.SFVec3f([-0.225,1,-0.07]);
let Shape990 = browser.currentScene.createNode("Shape");
Shape990.USE = "skinsphere";
Transform989YYY.child = new X3D.undefined();

Transform989ZZZ.child[0] = Shape990;

HAnimSegment978ZZZ.children[4] = Transform989;

let Transform991 = browser.currentScene.createNode("Transform");
Transform991.translation = new X3D.SFVec3f([-0.185,1,-0.01]);
let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "skinsphere";
Transform991YYY.child = new X3D.undefined();

Transform991ZZZ.child[0] = Shape992;

HAnimSegment978ZZZ.children[5] = Transform991;

let Transform993 = browser.currentScene.createNode("Transform");
Transform993.translation = new X3D.SFVec3f([-0.185,1,-0.07]);
let Shape994 = browser.currentScene.createNode("Shape");
Shape994.USE = "skinsphere";
Transform993YYY.child = new X3D.undefined();

Transform993ZZZ.child[0] = Shape994;

HAnimSegment978ZZZ.children[6] = Transform993;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.DEF = "Joe_r_radial_styloid";
HAnimSite995.name = "r_radial_styloid";
HAnimSite995.translation = new X3D.SFVec3f([-0.2,0.9,-0.015]);
let Shape996 = browser.currentScene.createNode("Shape");
Shape996.USE = "sitebox";
HAnimSite995YYY.children = new X3D.MFNode();

HAnimSite995ZZZ.children[0] = Shape996;

HAnimSegment978ZZZ.children[7] = HAnimSite995;

let HAnimSite997 = browser.currentScene.createNode("HAnimSite");
HAnimSite997.DEF = "Joe_r_olecranon";
HAnimSite997.name = "r_olecranon";
HAnimSite997.translation = new X3D.SFVec3f([-0.2,1.1388,-0.08]);
let Shape998 = browser.currentScene.createNode("Shape");
Shape998.USE = "sitebox";
HAnimSite997YYY.children = new X3D.MFNode();

HAnimSite997ZZZ.children[0] = Shape998;

HAnimSegment978ZZZ.children[8] = HAnimSite997;

HAnimJoint977YYY.children = new X3D.MFNode();

HAnimJoint977ZZZ.children[0] = HAnimSegment978;

let HAnimJoint999 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint999.DEF = "Joe_r_wrist";
HAnimJoint999.name = "r_wrist";
HAnimJoint999.center = new X3D.SFVec3f([-0.2,0.89,-0.04]);
HAnimJoint999.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint999.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment1000 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1000.DEF = "Joe_r_hand";
HAnimSegment1000.name = "r_hand";
let Shape1001 = browser.currentScene.createNode("Shape");
let Appearance1002 = browser.currentScene.createNode("Appearance");
Appearance1002.USE = "SegmentLine";
appearance = Appearance1002;

let IndexedLineSet1003 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1003.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate1004 = browser.currentScene.createNode("Coordinate");
Coordinate1004.point = new X3D.MFVec3f([-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]);
coord = Coordinate1004;

geometry = IndexedLineSet1003;

HAnimSegment1000YYY.children = new X3D.MFNode();

HAnimSegment1000ZZZ.children[0] = Shape1001;

let Transform1005 = browser.currentScene.createNode("Transform");
Transform1005.translation = new X3D.SFVec3f([-0.2,0.89,-0.04]);
let Shape1006 = browser.currentScene.createNode("Shape");
Shape1006.USE = "jointbox";
Transform1005YYY.child = new X3D.undefined();

Transform1005ZZZ.child[0] = Shape1006;

HAnimSegment1000ZZZ.children[1] = Transform1005;

let HAnimSite1007 = browser.currentScene.createNode("HAnimSite");
HAnimSite1007.DEF = "Joe_r_ulnar_styloid";
HAnimSite1007.name = "r_ulnar_styloid";
HAnimSite1007.translation = new X3D.SFVec3f([-0.2,0.9,-0.085]);
let Shape1008 = browser.currentScene.createNode("Shape");
Shape1008.USE = "sitebox";
HAnimSite1007YYY.children = new X3D.MFNode();

HAnimSite1007ZZZ.children[0] = Shape1008;

HAnimSegment1000ZZZ.children[2] = HAnimSite1007;

HAnimJoint999YYY.children = new X3D.MFNode();

HAnimJoint999ZZZ.children[0] = HAnimSegment1000;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.DEF = "Joe_r_thumb1";
HAnimJoint1009.name = "r_thumb1";
HAnimJoint1009.rotation = new X3D.SFRotation([0.999999999999976,0,0,0.11171329853783]);
HAnimJoint1009.center = new X3D.SFVec3f([-0.2,0.85,0]);
HAnimJoint1009.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint1009.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.DEF = "Joe_r_thumb_metacarpal";
HAnimSegment1010.name = "r_thumb_metacarpal";
let Shape1011 = browser.currentScene.createNode("Shape");
let Appearance1012 = browser.currentScene.createNode("Appearance");
Appearance1012.USE = "SegmentLine";
appearance = Appearance1012;

let IndexedLineSet1013 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1013.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1014 = browser.currentScene.createNode("Coordinate");
Coordinate1014.point = new X3D.MFVec3f([-0.2,0.85,0,-0.2,0.82,0.03]);
coord = Coordinate1014;

geometry = IndexedLineSet1013;

HAnimSegment1010YYY.children = new X3D.MFNode();

HAnimSegment1010ZZZ.children[0] = Shape1011;

let Transform1015 = browser.currentScene.createNode("Transform");
Transform1015.translation = new X3D.SFVec3f([-0.2,0.85,0]);
let Shape1016 = browser.currentScene.createNode("Shape");
Shape1016.USE = "jointbox";
Transform1015YYY.child = new X3D.undefined();

Transform1015ZZZ.child[0] = Shape1016;

HAnimSegment1010ZZZ.children[1] = Transform1015;

HAnimJoint1009YYY.children = new X3D.MFNode();

HAnimJoint1009ZZZ.children[0] = HAnimSegment1010;

let HAnimJoint1017 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1017.DEF = "Joe_r_thumb2";
HAnimJoint1017.name = "r_thumb2";
HAnimJoint1017.rotation = new X3D.SFRotation([0.707106781186553,0.707106781186553,0,0.167569951968385]);
HAnimJoint1017.center = new X3D.SFVec3f([-0.2,0.82,0.03]);
HAnimJoint1017.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint1017.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimSegment1018 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1018.DEF = "Joe_r_thumb_proximal";
HAnimSegment1018.name = "r_thumb_proximal";
let Shape1019 = browser.currentScene.createNode("Shape");
let Appearance1020 = browser.currentScene.createNode("Appearance");
Appearance1020.USE = "SegmentLine";
appearance = Appearance1020;

let IndexedLineSet1021 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1021.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1022 = browser.currentScene.createNode("Coordinate");
Coordinate1022.point = new X3D.MFVec3f([-0.2,0.82,0.03,-0.2,0.8,0.05]);
coord = Coordinate1022;

geometry = IndexedLineSet1021;

HAnimSegment1018YYY.children = new X3D.MFNode();

HAnimSegment1018ZZZ.children[0] = Shape1019;

let Transform1023 = browser.currentScene.createNode("Transform");
Transform1023.translation = new X3D.SFVec3f([-0.2,0.82,0.03]);
let Shape1024 = browser.currentScene.createNode("Shape");
Shape1024.USE = "jointbox";
Transform1023YYY.child = new X3D.undefined();

Transform1023ZZZ.child[0] = Shape1024;

HAnimSegment1018ZZZ.children[1] = Transform1023;

HAnimJoint1017YYY.children = new X3D.MFNode();

HAnimJoint1017ZZZ.children[0] = HAnimSegment1018;

let HAnimJoint1025 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1025.DEF = "Joe_r_thumb3";
HAnimJoint1025.name = "r_thumb3";
HAnimJoint1025.rotation = new X3D.SFRotation([0.707106781186553,0.707106781186553,0,0.167569951968385]);
HAnimJoint1025.center = new X3D.SFVec3f([-0.2,0.8,0.05]);
HAnimJoint1025.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint1025.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1026 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1026.DEF = "Joe_r_thumb_distal";
HAnimSegment1026.name = "r_thumb_distal";
let Shape1027 = browser.currentScene.createNode("Shape");
let Appearance1028 = browser.currentScene.createNode("Appearance");
Appearance1028.USE = "SegmentLine";
appearance = Appearance1028;

let IndexedLineSet1029 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1029.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1030 = browser.currentScene.createNode("Coordinate");
Coordinate1030.point = new X3D.MFVec3f([-0.2,0.8,0.05,-0.2,0.78,0.07]);
coord = Coordinate1030;

geometry = IndexedLineSet1029;

HAnimSegment1026YYY.children = new X3D.MFNode();

HAnimSegment1026ZZZ.children[0] = Shape1027;

let Transform1031 = browser.currentScene.createNode("Transform");
Transform1031.DEF = "Thumbnail";
Transform1031.translation = new X3D.SFVec3f([-0.2,0.785,0.075]);
let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "skinsphere";
Transform1031YYY.child = new X3D.undefined();

Transform1031ZZZ.child[0] = Shape1032;

HAnimSegment1026ZZZ.children[1] = Transform1031;

let Transform1033 = browser.currentScene.createNode("Transform");
Transform1033.translation = new X3D.SFVec3f([-0.2,0.8,0.05]);
let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "jointbox";
Transform1033YYY.child = new X3D.undefined();

Transform1033ZZZ.child[0] = Shape1034;

HAnimSegment1026ZZZ.children[2] = Transform1033;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.DEF = "Joe_r_thumb_distal_tip";
HAnimSite1035.name = "r_thumb_distal_tip";
HAnimSite1035.translation = new X3D.SFVec3f([-0.2,0.78,0.07]);
let Shape1036 = browser.currentScene.createNode("Shape");
Shape1036.USE = "sitebox";
HAnimSite1035YYY.children = new X3D.MFNode();

HAnimSite1035ZZZ.children[0] = Shape1036;

HAnimSegment1026ZZZ.children[3] = HAnimSite1035;

HAnimJoint1025YYY.children = new X3D.MFNode();

HAnimJoint1025ZZZ.children[0] = HAnimSegment1026;

HAnimJoint1017ZZZ.children[1] = HAnimJoint1025;

HAnimJoint1009ZZZ.children[1] = HAnimJoint1017;

HAnimJoint999ZZZ.children[1] = HAnimJoint1009;

let HAnimJoint1037 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1037.DEF = "Joe_r_index0";
HAnimJoint1037.name = "r_index0";
HAnimJoint1037.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1037.center = new X3D.SFVec3f([-0.2,0.84,-0.015]);
HAnimJoint1037.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint1037.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1038 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1038.DEF = "Joe_r_index_metacarpal";
HAnimSegment1038.name = "r_index_metacarpal";
let Shape1039 = browser.currentScene.createNode("Shape");
let Appearance1040 = browser.currentScene.createNode("Appearance");
Appearance1040.USE = "SegmentLine";
appearance = Appearance1040;

let IndexedLineSet1041 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1041.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1042 = browser.currentScene.createNode("Coordinate");
Coordinate1042.point = new X3D.MFVec3f([-0.2,0.84,-0.015,-0.2,0.793,-0.015]);
coord = Coordinate1042;

geometry = IndexedLineSet1041;

HAnimSegment1038YYY.children = new X3D.MFNode();

HAnimSegment1038ZZZ.children[0] = Shape1039;

let Transform1043 = browser.currentScene.createNode("Transform");
Transform1043.translation = new X3D.SFVec3f([-0.2,0.84,-0.015]);
let Shape1044 = browser.currentScene.createNode("Shape");
Shape1044.USE = "jointbox";
Transform1043YYY.child = new X3D.undefined();

Transform1043ZZZ.child[0] = Shape1044;

HAnimSegment1038ZZZ.children[1] = Transform1043;

let HAnimSite1045 = browser.currentScene.createNode("HAnimSite");
HAnimSite1045.DEF = "Joe_r_metacarpal_pha2";
HAnimSite1045.name = "r_metacarpal_pha2";
HAnimSite1045.translation = new X3D.SFVec3f([-0.2,0.793,-0.005]);
let Shape1046 = browser.currentScene.createNode("Shape");
Shape1046.USE = "sitebox";
HAnimSite1045YYY.children = new X3D.MFNode();

HAnimSite1045ZZZ.children[0] = Shape1046;

HAnimSegment1038ZZZ.children[2] = HAnimSite1045;

HAnimJoint1037YYY.children = new X3D.MFNode();

HAnimJoint1037ZZZ.children[0] = HAnimSegment1038;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1047.DEF = "Joe_r_index1";
HAnimJoint1047.name = "r_index1";
HAnimJoint1047.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1047.center = new X3D.SFVec3f([-0.2,0.793,-0.015]);
HAnimJoint1047.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint1047.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimSegment1048 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1048.DEF = "Joe_r_index_proximal";
HAnimSegment1048.name = "r_index_proximal";
let Shape1049 = browser.currentScene.createNode("Shape");
let Appearance1050 = browser.currentScene.createNode("Appearance");
Appearance1050.USE = "SegmentLine";
appearance = Appearance1050;

let IndexedLineSet1051 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1051.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1052 = browser.currentScene.createNode("Coordinate");
Coordinate1052.point = new X3D.MFVec3f([-0.2,0.793,-0.015,-0.2,0.745,-0.015]);
coord = Coordinate1052;

geometry = IndexedLineSet1051;

HAnimSegment1048YYY.children = new X3D.MFNode();

HAnimSegment1048ZZZ.children[0] = Shape1049;

let Transform1053 = browser.currentScene.createNode("Transform");
Transform1053.translation = new X3D.SFVec3f([-0.2,0.793,-0.015]);
let Shape1054 = browser.currentScene.createNode("Shape");
Shape1054.USE = "jointbox";
Transform1053YYY.child = new X3D.undefined();

Transform1053ZZZ.child[0] = Shape1054;

HAnimSegment1048ZZZ.children[1] = Transform1053;

HAnimJoint1047YYY.children = new X3D.MFNode();

HAnimJoint1047ZZZ.children[0] = HAnimSegment1048;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.DEF = "Joe_r_index2";
HAnimJoint1055.name = "r_index2";
HAnimJoint1055.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1055.center = new X3D.SFVec3f([-0.2,0.745,-0.015]);
HAnimJoint1055.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint1055.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1056 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1056.DEF = "Joe_r_index_middle";
HAnimSegment1056.name = "r_index_middle";
let Shape1057 = browser.currentScene.createNode("Shape");
let Appearance1058 = browser.currentScene.createNode("Appearance");
Appearance1058.USE = "SegmentLine";
appearance = Appearance1058;

let IndexedLineSet1059 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1059.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1060 = browser.currentScene.createNode("Coordinate");
Coordinate1060.point = new X3D.MFVec3f([-0.2,0.745,-0.015,-0.2,0.72,-0.015]);
coord = Coordinate1060;

geometry = IndexedLineSet1059;

HAnimSegment1056YYY.children = new X3D.MFNode();

HAnimSegment1056ZZZ.children[0] = Shape1057;

let Transform1061 = browser.currentScene.createNode("Transform");
Transform1061.translation = new X3D.SFVec3f([-0.2,0.745,-0.015]);
let Shape1062 = browser.currentScene.createNode("Shape");
Shape1062.USE = "jointbox";
Transform1061YYY.child = new X3D.undefined();

Transform1061ZZZ.child[0] = Shape1062;

HAnimSegment1056ZZZ.children[1] = Transform1061;

HAnimJoint1055YYY.children = new X3D.MFNode();

HAnimJoint1055ZZZ.children[0] = HAnimSegment1056;

let HAnimJoint1063 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1063.DEF = "Joe_r_index3";
HAnimJoint1063.name = "r_index3";
HAnimJoint1063.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1063.center = new X3D.SFVec3f([-0.2,0.72,-0.015]);
HAnimJoint1063.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint1063.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1064 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1064.DEF = "Joe_r_index_distal";
HAnimSegment1064.name = "r_index_distal";
let Shape1065 = browser.currentScene.createNode("Shape");
let Appearance1066 = browser.currentScene.createNode("Appearance");
Appearance1066.USE = "SegmentLine";
appearance = Appearance1066;

let IndexedLineSet1067 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1067.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1068 = browser.currentScene.createNode("Coordinate");
Coordinate1068.point = new X3D.MFVec3f([-0.2,0.72,-0.015,-0.2,0.695,-0.015]);
coord = Coordinate1068;

geometry = IndexedLineSet1067;

HAnimSegment1064YYY.children = new X3D.MFNode();

HAnimSegment1064ZZZ.children[0] = Shape1065;

let Transform1069 = browser.currentScene.createNode("Transform");
Transform1069.translation = new X3D.SFVec3f([-0.2,0.72,-0.015]);
let Shape1070 = browser.currentScene.createNode("Shape");
Shape1070.USE = "jointbox";
Transform1069YYY.child = new X3D.undefined();

Transform1069ZZZ.child[0] = Shape1070;

HAnimSegment1064ZZZ.children[1] = Transform1069;

let HAnimSite1071 = browser.currentScene.createNode("HAnimSite");
HAnimSite1071.DEF = "Joe_r_index_distal_tip";
HAnimSite1071.name = "r_index_distal_tip";
HAnimSite1071.translation = new X3D.SFVec3f([-0.2,0.695,-0.015]);
let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "sitebox";
HAnimSite1071YYY.children = new X3D.MFNode();

HAnimSite1071ZZZ.children[0] = Shape1072;

HAnimSegment1064ZZZ.children[2] = HAnimSite1071;

HAnimJoint1063YYY.children = new X3D.MFNode();

HAnimJoint1063ZZZ.children[0] = HAnimSegment1064;

HAnimJoint1055ZZZ.children[1] = HAnimJoint1063;

HAnimJoint1047ZZZ.children[1] = HAnimJoint1055;

HAnimJoint1037ZZZ.children[1] = HAnimJoint1047;

HAnimJoint999ZZZ.children[2] = HAnimJoint1037;

let HAnimJoint1073 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1073.DEF = "Joe_r_middle0";
HAnimJoint1073.name = "r_middle0";
HAnimJoint1073.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1073.center = new X3D.SFVec3f([-0.2,0.835,-0.04]);
HAnimJoint1073.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint1073.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1074.DEF = "Joe_r_middle_metacarpal";
HAnimSegment1074.name = "r_middle_metacarpal";
let Shape1075 = browser.currentScene.createNode("Shape");
let Appearance1076 = browser.currentScene.createNode("Appearance");
Appearance1076.USE = "SegmentLine";
appearance = Appearance1076;

let IndexedLineSet1077 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1077.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1078 = browser.currentScene.createNode("Coordinate");
Coordinate1078.point = new X3D.MFVec3f([-0.2,0.835,-0.04,-0.2,0.788,-0.04]);
coord = Coordinate1078;

geometry = IndexedLineSet1077;

HAnimSegment1074YYY.children = new X3D.MFNode();

HAnimSegment1074ZZZ.children[0] = Shape1075;

let Transform1079 = browser.currentScene.createNode("Transform");
Transform1079.translation = new X3D.SFVec3f([-0.2,0.835,-0.04]);
let Shape1080 = browser.currentScene.createNode("Shape");
Shape1080.USE = "jointbox";
Transform1079YYY.child = new X3D.undefined();

Transform1079ZZZ.child[0] = Shape1080;

HAnimSegment1074ZZZ.children[1] = Transform1079;

HAnimJoint1073YYY.children = new X3D.MFNode();

HAnimJoint1073ZZZ.children[0] = HAnimSegment1074;

let HAnimJoint1081 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1081.DEF = "Joe_r_middle1";
HAnimJoint1081.name = "r_middle1";
HAnimJoint1081.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1081.center = new X3D.SFVec3f([-0.2,0.788,-0.04]);
HAnimJoint1081.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint1081.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment1082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1082.DEF = "Joe_r_middle_proximal";
HAnimSegment1082.name = "r_middle_proximal";
let Shape1083 = browser.currentScene.createNode("Shape");
let Appearance1084 = browser.currentScene.createNode("Appearance");
Appearance1084.USE = "SegmentLine";
appearance = Appearance1084;

let IndexedLineSet1085 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1085.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1086 = browser.currentScene.createNode("Coordinate");
Coordinate1086.point = new X3D.MFVec3f([-0.2,0.788,-0.04,-0.2,0.74,-0.04]);
coord = Coordinate1086;

geometry = IndexedLineSet1085;

HAnimSegment1082YYY.children = new X3D.MFNode();

HAnimSegment1082ZZZ.children[0] = Shape1083;

let Transform1087 = browser.currentScene.createNode("Transform");
Transform1087.translation = new X3D.SFVec3f([-0.2,0.788,-0.04]);
let Shape1088 = browser.currentScene.createNode("Shape");
Shape1088.USE = "jointbox";
Transform1087YYY.child = new X3D.undefined();

Transform1087ZZZ.child[0] = Shape1088;

HAnimSegment1082ZZZ.children[1] = Transform1087;

HAnimJoint1081YYY.children = new X3D.MFNode();

HAnimJoint1081ZZZ.children[0] = HAnimSegment1082;

let HAnimJoint1089 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1089.DEF = "Joe_r_middle2";
HAnimJoint1089.name = "r_middle2";
HAnimJoint1089.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1089.center = new X3D.SFVec3f([-0.2,0.74,-0.04]);
HAnimJoint1089.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint1089.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1090 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1090.DEF = "Joe_r_middle_middle";
HAnimSegment1090.name = "r_middle_middle";
let Shape1091 = browser.currentScene.createNode("Shape");
let Appearance1092 = browser.currentScene.createNode("Appearance");
Appearance1092.USE = "SegmentLine";
appearance = Appearance1092;

let IndexedLineSet1093 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1093.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1094 = browser.currentScene.createNode("Coordinate");
Coordinate1094.point = new X3D.MFVec3f([-0.2,0.74,-0.04,-0.2,0.7142,-0.04]);
coord = Coordinate1094;

geometry = IndexedLineSet1093;

HAnimSegment1090YYY.children = new X3D.MFNode();

HAnimSegment1090ZZZ.children[0] = Shape1091;

let Transform1095 = browser.currentScene.createNode("Transform");
Transform1095.translation = new X3D.SFVec3f([-0.2,0.74,-0.04]);
let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "jointbox";
Transform1095YYY.child = new X3D.undefined();

Transform1095ZZZ.child[0] = Shape1096;

HAnimSegment1090ZZZ.children[1] = Transform1095;

HAnimJoint1089YYY.children = new X3D.MFNode();

HAnimJoint1089ZZZ.children[0] = HAnimSegment1090;

let HAnimJoint1097 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1097.DEF = "Joe_r_middle3";
HAnimJoint1097.name = "r_middle3";
HAnimJoint1097.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1097.center = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
HAnimJoint1097.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint1097.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1098 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1098.DEF = "Joe_r_middle_distal";
HAnimSegment1098.name = "r_middle_distal";
let Shape1099 = browser.currentScene.createNode("Shape");
let Appearance1100 = browser.currentScene.createNode("Appearance");
Appearance1100.USE = "SegmentLine";
appearance = Appearance1100;

let IndexedLineSet1101 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1101.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1102 = browser.currentScene.createNode("Coordinate");
Coordinate1102.point = new X3D.MFVec3f([-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]);
coord = Coordinate1102;

geometry = IndexedLineSet1101;

HAnimSegment1098YYY.children = new X3D.MFNode();

HAnimSegment1098ZZZ.children[0] = Shape1099;

let Transform1103 = browser.currentScene.createNode("Transform");
Transform1103.translation = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
let Shape1104 = browser.currentScene.createNode("Shape");
Shape1104.USE = "jointbox";
Transform1103YYY.child = new X3D.undefined();

Transform1103ZZZ.child[0] = Shape1104;

HAnimSegment1098ZZZ.children[1] = Transform1103;

let HAnimSite1105 = browser.currentScene.createNode("HAnimSite");
HAnimSite1105.DEF = "Joe_r_dactylion";
HAnimSite1105.name = "r_dactylion";
HAnimSite1105.translation = new X3D.SFVec3f([-0.2,0.68,-0.04]);
let Shape1106 = browser.currentScene.createNode("Shape");
Shape1106.USE = "sitebox";
HAnimSite1105YYY.children = new X3D.MFNode();

HAnimSite1105ZZZ.children[0] = Shape1106;

HAnimSegment1098ZZZ.children[2] = HAnimSite1105;

let HAnimSite1107 = browser.currentScene.createNode("HAnimSite");
HAnimSite1107.DEF = "Joe_r_middle_distal_tip";
HAnimSite1107.name = "r_middle_distal_tip";
HAnimSite1107.translation = new X3D.SFVec3f([-0.2,0.68,-0.04]);
let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "sitebox";
HAnimSite1107YYY.children = new X3D.MFNode();

HAnimSite1107ZZZ.children[0] = Shape1108;

HAnimSegment1098ZZZ.children[3] = HAnimSite1107;

HAnimJoint1097YYY.children = new X3D.MFNode();

HAnimJoint1097ZZZ.children[0] = HAnimSegment1098;

HAnimJoint1089ZZZ.children[1] = HAnimJoint1097;

HAnimJoint1081ZZZ.children[1] = HAnimJoint1089;

HAnimJoint1073ZZZ.children[1] = HAnimJoint1081;

HAnimJoint999ZZZ.children[3] = HAnimJoint1073;

let HAnimJoint1109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1109.DEF = "Joe_r_ring0";
HAnimJoint1109.name = "r_ring0";
HAnimJoint1109.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1109.center = new X3D.SFVec3f([-0.2,0.835,-0.065]);
HAnimJoint1109.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint1109.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1110.DEF = "Joe_r_ring_metacarpal";
HAnimSegment1110.name = "r_ring_metacarpal";
let Shape1111 = browser.currentScene.createNode("Shape");
let Appearance1112 = browser.currentScene.createNode("Appearance");
Appearance1112.USE = "SegmentLine";
appearance = Appearance1112;

let IndexedLineSet1113 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1113.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1114 = browser.currentScene.createNode("Coordinate");
Coordinate1114.point = new X3D.MFVec3f([-0.2,0.835,-0.065,-0.2,0.793,-0.065]);
coord = Coordinate1114;

geometry = IndexedLineSet1113;

HAnimSegment1110YYY.children = new X3D.MFNode();

HAnimSegment1110ZZZ.children[0] = Shape1111;

let Transform1115 = browser.currentScene.createNode("Transform");
Transform1115.translation = new X3D.SFVec3f([-0.2,0.835,-0.065]);
let Shape1116 = browser.currentScene.createNode("Shape");
Shape1116.USE = "jointbox";
Transform1115YYY.child = new X3D.undefined();

Transform1115ZZZ.child[0] = Shape1116;

HAnimSegment1110ZZZ.children[1] = Transform1115;

HAnimJoint1109YYY.children = new X3D.MFNode();

HAnimJoint1109ZZZ.children[0] = HAnimSegment1110;

let HAnimJoint1117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1117.DEF = "Joe_r_ring1";
HAnimJoint1117.name = "r_ring1";
HAnimJoint1117.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1117.center = new X3D.SFVec3f([-0.2,0.793,-0.065]);
HAnimJoint1117.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint1117.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment1118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1118.DEF = "Joe_r_ring_proximal";
HAnimSegment1118.name = "r_ring_proximal";
let Shape1119 = browser.currentScene.createNode("Shape");
let Appearance1120 = browser.currentScene.createNode("Appearance");
Appearance1120.USE = "SegmentLine";
appearance = Appearance1120;

let IndexedLineSet1121 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1121.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1122 = browser.currentScene.createNode("Coordinate");
Coordinate1122.point = new X3D.MFVec3f([-0.2,0.793,-0.065,-0.2,0.74,-0.065]);
coord = Coordinate1122;

geometry = IndexedLineSet1121;

HAnimSegment1118YYY.children = new X3D.MFNode();

HAnimSegment1118ZZZ.children[0] = Shape1119;

let Transform1123 = browser.currentScene.createNode("Transform");
Transform1123.translation = new X3D.SFVec3f([-0.2,0.793,-0.065]);
let Shape1124 = browser.currentScene.createNode("Shape");
Shape1124.USE = "jointbox";
Transform1123YYY.child = new X3D.undefined();

Transform1123ZZZ.child[0] = Shape1124;

HAnimSegment1118ZZZ.children[1] = Transform1123;

HAnimJoint1117YYY.children = new X3D.MFNode();

HAnimJoint1117ZZZ.children[0] = HAnimSegment1118;

let HAnimJoint1125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1125.DEF = "Joe_r_ring2";
HAnimJoint1125.name = "r_ring2";
HAnimJoint1125.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1125.center = new X3D.SFVec3f([-0.2,0.74,-0.065]);
HAnimJoint1125.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint1125.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1126.DEF = "Joe_r_ring_middle";
HAnimSegment1126.name = "r_ring_middle";
let Shape1127 = browser.currentScene.createNode("Shape");
let Appearance1128 = browser.currentScene.createNode("Appearance");
Appearance1128.USE = "SegmentLine";
appearance = Appearance1128;

let IndexedLineSet1129 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1129.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1130 = browser.currentScene.createNode("Coordinate");
Coordinate1130.point = new X3D.MFVec3f([-0.2,0.74,-0.065,-0.2,0.7177,-0.065]);
coord = Coordinate1130;

geometry = IndexedLineSet1129;

HAnimSegment1126YYY.children = new X3D.MFNode();

HAnimSegment1126ZZZ.children[0] = Shape1127;

let Transform1131 = browser.currentScene.createNode("Transform");
Transform1131.translation = new X3D.SFVec3f([-0.2,0.74,-0.065]);
let Shape1132 = browser.currentScene.createNode("Shape");
Shape1132.USE = "jointbox";
Transform1131YYY.child = new X3D.undefined();

Transform1131ZZZ.child[0] = Shape1132;

HAnimSegment1126ZZZ.children[1] = Transform1131;

HAnimJoint1125YYY.children = new X3D.MFNode();

HAnimJoint1125ZZZ.children[0] = HAnimSegment1126;

let HAnimJoint1133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1133.DEF = "Joe_r_ring3";
HAnimJoint1133.name = "r_ring3";
HAnimJoint1133.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1133.center = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
HAnimJoint1133.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint1133.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1134.DEF = "Joe_r_ring_distal";
HAnimSegment1134.name = "r_ring_distal";
let Shape1135 = browser.currentScene.createNode("Shape");
let Appearance1136 = browser.currentScene.createNode("Appearance");
Appearance1136.USE = "SegmentLine";
appearance = Appearance1136;

let IndexedLineSet1137 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1137.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1138 = browser.currentScene.createNode("Coordinate");
Coordinate1138.point = new X3D.MFVec3f([-0.2,0.7177,-0.065,-0.2,0.695,-0.065]);
coord = Coordinate1138;

geometry = IndexedLineSet1137;

HAnimSegment1134YYY.children = new X3D.MFNode();

HAnimSegment1134ZZZ.children[0] = Shape1135;

let Transform1139 = browser.currentScene.createNode("Transform");
Transform1139.translation = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
let Shape1140 = browser.currentScene.createNode("Shape");
Shape1140.USE = "jointbox";
Transform1139YYY.child = new X3D.undefined();

Transform1139ZZZ.child[0] = Shape1140;

HAnimSegment1134ZZZ.children[1] = Transform1139;

let HAnimSite1141 = browser.currentScene.createNode("HAnimSite");
HAnimSite1141.DEF = "Joe_r_ring_distal_tip";
HAnimSite1141.name = "r_ring_distal_tip";
HAnimSite1141.translation = new X3D.SFVec3f([-0.2,0.695,-0.065]);
let Shape1142 = browser.currentScene.createNode("Shape");
Shape1142.USE = "sitebox";
HAnimSite1141YYY.children = new X3D.MFNode();

HAnimSite1141ZZZ.children[0] = Shape1142;

HAnimSegment1134ZZZ.children[2] = HAnimSite1141;

HAnimJoint1133YYY.children = new X3D.MFNode();

HAnimJoint1133ZZZ.children[0] = HAnimSegment1134;

HAnimJoint1125ZZZ.children[1] = HAnimJoint1133;

HAnimJoint1117ZZZ.children[1] = HAnimJoint1125;

HAnimJoint1109ZZZ.children[1] = HAnimJoint1117;

HAnimJoint999ZZZ.children[4] = HAnimJoint1109;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.DEF = "Joe_r_pinky0";
HAnimJoint1143.name = "r_pinky0";
HAnimJoint1143.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1143.center = new X3D.SFVec3f([-0.2,0.84,-0.085]);
HAnimJoint1143.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint1143.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimSegment1144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1144.DEF = "Joe_r_pinky_metacarpal";
HAnimSegment1144.name = "r_pinky_metacarpal";
let Shape1145 = browser.currentScene.createNode("Shape");
let Appearance1146 = browser.currentScene.createNode("Appearance");
Appearance1146.USE = "SegmentLine";
appearance = Appearance1146;

let IndexedLineSet1147 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1147.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1148 = browser.currentScene.createNode("Coordinate");
Coordinate1148.point = new X3D.MFVec3f([-0.2,0.84,-0.085,-0.2,0.79,-0.085]);
coord = Coordinate1148;

geometry = IndexedLineSet1147;

HAnimSegment1144YYY.children = new X3D.MFNode();

HAnimSegment1144ZZZ.children[0] = Shape1145;

let Transform1149 = browser.currentScene.createNode("Transform");
Transform1149.translation = new X3D.SFVec3f([-0.2,0.84,-0.085]);
let Shape1150 = browser.currentScene.createNode("Shape");
Shape1150.USE = "jointbox";
Transform1149YYY.child = new X3D.undefined();

Transform1149ZZZ.child[0] = Shape1150;

HAnimSegment1144ZZZ.children[1] = Transform1149;

let HAnimSite1151 = browser.currentScene.createNode("HAnimSite");
HAnimSite1151.DEF = "Joe_r_metacarpal_pha5";
HAnimSite1151.name = "r_metacarpal_pha5";
HAnimSite1151.translation = new X3D.SFVec3f([-0.2,0.79,-0.095]);
let Shape1152 = browser.currentScene.createNode("Shape");
Shape1152.USE = "sitebox";
HAnimSite1151YYY.children = new X3D.MFNode();

HAnimSite1151ZZZ.children[0] = Shape1152;

HAnimSegment1144ZZZ.children[2] = HAnimSite1151;

HAnimJoint1143YYY.children = new X3D.MFNode();

HAnimJoint1143ZZZ.children[0] = HAnimSegment1144;

let HAnimJoint1153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1153.DEF = "Joe_r_pinky1";
HAnimJoint1153.name = "r_pinky1";
HAnimJoint1153.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1153.center = new X3D.SFVec3f([-0.2,0.79,-0.085]);
HAnimJoint1153.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint1153.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment1154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1154.DEF = "Joe_r_pinky_proximal";
HAnimSegment1154.name = "r_pinky_proximal";
let Shape1155 = browser.currentScene.createNode("Shape");
let Appearance1156 = browser.currentScene.createNode("Appearance");
Appearance1156.USE = "SegmentLine";
appearance = Appearance1156;

let IndexedLineSet1157 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1157.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1158 = browser.currentScene.createNode("Coordinate");
Coordinate1158.point = new X3D.MFVec3f([-0.2,0.79,-0.085,-0.2,0.755,-0.085]);
coord = Coordinate1158;

geometry = IndexedLineSet1157;

HAnimSegment1154YYY.children = new X3D.MFNode();

HAnimSegment1154ZZZ.children[0] = Shape1155;

let Transform1159 = browser.currentScene.createNode("Transform");
Transform1159.translation = new X3D.SFVec3f([-0.2,0.79,-0.085]);
let Shape1160 = browser.currentScene.createNode("Shape");
Shape1160.USE = "jointbox";
Transform1159YYY.child = new X3D.undefined();

Transform1159ZZZ.child[0] = Shape1160;

HAnimSegment1154ZZZ.children[1] = Transform1159;

HAnimJoint1153YYY.children = new X3D.MFNode();

HAnimJoint1153ZZZ.children[0] = HAnimSegment1154;

let HAnimJoint1161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1161.DEF = "Joe_r_pinky2";
HAnimJoint1161.name = "r_pinky2";
HAnimJoint1161.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1161.center = new X3D.SFVec3f([-0.2,0.755,-0.085]);
HAnimJoint1161.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint1161.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1162.DEF = "Joe_r_pinky_middle";
HAnimSegment1162.name = "r_pinky_middle";
let Shape1163 = browser.currentScene.createNode("Shape");
let Appearance1164 = browser.currentScene.createNode("Appearance");
Appearance1164.USE = "SegmentLine";
appearance = Appearance1164;

let IndexedLineSet1165 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1165.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1166 = browser.currentScene.createNode("Coordinate");
Coordinate1166.point = new X3D.MFVec3f([-0.2,0.755,-0.085,-0.2,0.735,-0.085]);
coord = Coordinate1166;

geometry = IndexedLineSet1165;

HAnimSegment1162YYY.children = new X3D.MFNode();

HAnimSegment1162ZZZ.children[0] = Shape1163;

let Transform1167 = browser.currentScene.createNode("Transform");
Transform1167.translation = new X3D.SFVec3f([-0.2,0.755,-0.085]);
let Shape1168 = browser.currentScene.createNode("Shape");
Shape1168.USE = "jointbox";
Transform1167YYY.child = new X3D.undefined();

Transform1167ZZZ.child[0] = Shape1168;

HAnimSegment1162ZZZ.children[1] = Transform1167;

HAnimJoint1161YYY.children = new X3D.MFNode();

HAnimJoint1161ZZZ.children[0] = HAnimSegment1162;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.DEF = "Joe_r_pinky3";
HAnimJoint1169.name = "r_pinky3";
HAnimJoint1169.rotation = new X3D.SFRotation([0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1169.center = new X3D.SFVec3f([-0.2,0.735,-0.09]);
HAnimJoint1169.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint1169.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1170.DEF = "Joe_r_pinky_distal";
HAnimSegment1170.name = "r_pinky_distal";
let Shape1171 = browser.currentScene.createNode("Shape");
let Appearance1172 = browser.currentScene.createNode("Appearance");
Appearance1172.USE = "SegmentLine";
appearance = Appearance1172;

let IndexedLineSet1173 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1173.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1174 = browser.currentScene.createNode("Coordinate");
Coordinate1174.point = new X3D.MFVec3f([-0.2,0.735,-0.085,-0.2,0.72,-0.085]);
coord = Coordinate1174;

geometry = IndexedLineSet1173;

HAnimSegment1170YYY.children = new X3D.MFNode();

HAnimSegment1170ZZZ.children[0] = Shape1171;

let Transform1175 = browser.currentScene.createNode("Transform");
Transform1175.translation = new X3D.SFVec3f([-0.2,0.735,-0.085]);
let Shape1176 = browser.currentScene.createNode("Shape");
Shape1176.USE = "jointbox";
Transform1175YYY.child = new X3D.undefined();

Transform1175ZZZ.child[0] = Shape1176;

HAnimSegment1170ZZZ.children[1] = Transform1175;

let HAnimSite1177 = browser.currentScene.createNode("HAnimSite");
HAnimSite1177.DEF = "Joe_r_pinky_distal_tip";
HAnimSite1177.name = "r_pinky_distal_tip";
HAnimSite1177.translation = new X3D.SFVec3f([-0.2,0.72,-0.085]);
let Shape1178 = browser.currentScene.createNode("Shape");
Shape1178.USE = "sitebox";
HAnimSite1177YYY.children = new X3D.MFNode();

HAnimSite1177ZZZ.children[0] = Shape1178;

HAnimSegment1170ZZZ.children[2] = HAnimSite1177;

HAnimJoint1169YYY.children = new X3D.MFNode();

HAnimJoint1169ZZZ.children[0] = HAnimSegment1170;

HAnimJoint1161ZZZ.children[1] = HAnimJoint1169;

HAnimJoint1153ZZZ.children[1] = HAnimJoint1161;

HAnimJoint1143ZZZ.children[1] = HAnimJoint1153;

HAnimJoint999ZZZ.children[5] = HAnimJoint1143;

HAnimJoint977ZZZ.children[1] = HAnimJoint999;

HAnimJoint947ZZZ.children[1] = HAnimJoint977;

HAnimJoint931ZZZ.children[1] = HAnimJoint947;

HAnimJoint921ZZZ.children[1] = HAnimJoint931;

HAnimJoint555ZZZ.children[3] = HAnimJoint921;

HAnimJoint547ZZZ.children[1] = HAnimJoint555;

HAnimJoint539ZZZ.children[1] = HAnimJoint547;

HAnimJoint529ZZZ.children[1] = HAnimJoint539;

HAnimJoint521ZZZ.children[1] = HAnimJoint529;

HAnimJoint513ZZZ.children[1] = HAnimJoint521;

HAnimJoint505ZZZ.children[1] = HAnimJoint513;

HAnimJoint497ZZZ.children[1] = HAnimJoint505;

HAnimJoint485ZZZ.children[1] = HAnimJoint497;

HAnimJoint475ZZZ.children[1] = HAnimJoint485;

HAnimJoint467ZZZ.children[1] = HAnimJoint475;

HAnimJoint459ZZZ.children[1] = HAnimJoint467;

HAnimJoint451ZZZ.children[1] = HAnimJoint459;

HAnimJoint425ZZZ.children[1] = HAnimJoint451;

HAnimJoint417ZZZ.children[1] = HAnimJoint425;

HAnimJoint409ZZZ.children[1] = HAnimJoint417;

HAnimJoint394ZZZ.children[2] = HAnimJoint409;

HAnimJoint80ZZZ.children[2] = HAnimJoint394;

HAnimHumanoid79.joints = new X3D.MFNode();

HAnimHumanoid79XXX.joints[0] = HAnimJoint80;

let HAnimJoint1179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1179.USE = "Joe_HumanoidRoot";
joints[1] = HAnimJoint1179;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.USE = "Joe_sacroiliac";
joints[2] = HAnimJoint1180;

let HAnimJoint1181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1181.USE = "Joe_l_hip";
joints[3] = HAnimJoint1181;

let HAnimJoint1182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1182.USE = "Joe_l_knee";
joints[4] = HAnimJoint1182;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.USE = "Joe_l_ankle";
joints[5] = HAnimJoint1183;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.USE = "Joe_l_subtalar";
joints[6] = HAnimJoint1184;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.USE = "Joe_l_midtarsal";
joints[7] = HAnimJoint1185;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.USE = "Joe_l_metatarsal";
joints[8] = HAnimJoint1186;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.USE = "Joe_r_hip";
joints[9] = HAnimJoint1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_r_knee";
joints[10] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_r_ankle";
joints[11] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_r_subtalar";
joints[12] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_r_midtarsal";
joints[13] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_r_metatarsal";
joints[14] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_vl5";
joints[15] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_vl4";
joints[16] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_vl3";
joints[17] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_vl2";
joints[18] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_vl1";
joints[19] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_vt12";
joints[20] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_vt11";
joints[21] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_vt10";
joints[22] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_vt9";
joints[23] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_vt8";
joints[24] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vt7";
joints[25] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vt6";
joints[26] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vt5";
joints[27] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vt4";
joints[28] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vt3";
joints[29] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vt2";
joints[30] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vt1";
joints[31] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vc7";
joints[32] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_vc6";
joints[33] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_vc5";
joints[34] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_vc4";
joints[35] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_vc3";
joints[36] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_vc2";
joints[37] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_vc1";
joints[38] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_skullbase";
joints[39] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_l_eyeball_joint";
joints[40] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_r_eyeball_joint";
joints[41] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_l_sternoclavicular";
joints[42] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_l_acromioclavicular";
joints[43] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_l_shoulder";
joints[44] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_l_elbow";
joints[45] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_l_wrist";
joints[46] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_l_thumb1";
joints[47] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_l_thumb2";
joints[48] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_l_thumb3";
joints[49] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_l_index0";
joints[50] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_l_index1";
joints[51] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_l_index2";
joints[52] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_l_index3";
joints[53] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_l_middle0";
joints[54] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_l_middle1";
joints[55] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_l_middle2";
joints[56] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_l_middle3";
joints[57] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_l_ring0";
joints[58] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_l_ring1";
joints[59] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_l_ring2";
joints[60] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_l_ring3";
joints[61] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_l_pinky0";
joints[62] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_l_pinky1";
joints[63] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_l_pinky2";
joints[64] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_l_pinky3";
joints[65] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_r_sternoclavicular";
joints[66] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_r_acromioclavicular";
joints[67] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_r_shoulder";
joints[68] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_r_elbow";
joints[69] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_r_wrist";
joints[70] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_r_thumb1";
joints[71] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_r_thumb2";
joints[72] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_r_thumb3";
joints[73] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_r_index0";
joints[74] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_r_index1";
joints[75] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_r_index2";
joints[76] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_r_index3";
joints[77] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_r_middle0";
joints[78] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_r_middle1";
joints[79] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_r_middle2";
joints[80] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_r_middle3";
joints[81] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_r_ring0";
joints[82] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_r_ring1";
joints[83] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_ring2";
joints[84] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_r_ring3";
joints[85] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_r_pinky0";
joints[86] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_r_pinky1";
joints[87] = HAnimJoint1265;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_r_pinky2";
joints[88] = HAnimJoint1266;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_r_pinky3";
joints[89] = HAnimJoint1267;

let Coordinate1268 = browser.currentScene.createNode("Coordinate");
Coordinate1268.DEF = "TheSkinCoord";
Coordinate1268.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
skinCoord = Coordinate1268;

let Shape1269 = browser.currentScene.createNode("Shape");
Shape1269.DEF = "SkinShape";
let Appearance1270 = browser.currentScene.createNode("Appearance");
Appearance1270.DEF = "SkinAppearance";
let Material1271 = browser.currentScene.createNode("Material");
Material1271.DEF = "SkinMaterial";
Material1271.ambientIntensity = 0.6;
Material1271.diffuseColor = new X3D.SFColor([1,1,1]);
Material1271.shininess = 0.6;
Material1271.transparency = 0.2;
material = Material1271;

let ImageTexture1272 = browser.currentScene.createNode("ImageTexture");
ImageTexture1272.DEF = "zBlueSpiralBkg2";
ImageTexture1272.description = "Blue Spiral Pattern";
ImageTexture1272.url = new X3D.MFString([new X3D.SFString("zBlueSpiralBkg2.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")]);
texture = ImageTexture1272;

appearance = Appearance1270;

let IndexedFaceSet1273 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1273.creaseAngle = 3.1;
IndexedFaceSet1273.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
let Color1274 = browser.currentScene.createNode("Color");
Color1274.color = new X3D.MFColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
color = Color1274;

let Coordinate1275 = browser.currentScene.createNode("Coordinate");
Coordinate1275.USE = "TheSkinCoord";
coord = Coordinate1275;

geometry = IndexedFaceSet1273;

skin[90] = Shape1269;

Group78YYY.children = new X3D.MFNode();

Group78ZZZ.children[0] = HAnimHumanoid79;

Group77YYY.children = new X3D.MFNode();

Group77ZZZ.children[0] = Group78;

browser.currentScene.children[7] = Group77;

let TimeSensor1276 = browser.currentScene.createNode("TimeSensor");
TimeSensor1276.DEF = "Time1";
TimeSensor1276.cycleInterval = 2.86;
TimeSensor1276.loop = True;
browser.currentScene.children[8] = TimeSensor1276;

let TimeSensor1277 = browser.currentScene.createNode("TimeSensor");
TimeSensor1277.DEF = "Time2";
TimeSensor1277.cycleInterval = 5.72;
TimeSensor1277.loop = True;
browser.currentScene.children[9] = TimeSensor1277;

let TimeSensor1278 = browser.currentScene.createNode("TimeSensor");
TimeSensor1278.DEF = "Time3";
TimeSensor1278.cycleInterval = 5.8;
TimeSensor1278.loop = True;
browser.currentScene.children[10] = TimeSensor1278;

let OrientationInterpolator1279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1279.DEF = "Pitch";
OrientationInterpolator1279.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1279.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.76799988746643,1,0,0,5.02400016784668,1,0,0,6.28000020980835]);
browser.currentScene.children[11] = OrientationInterpolator1279;

let OrientationInterpolator1280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1280.DEF = "Yaw";
OrientationInterpolator1280.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1280.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.76799988746643,0,1,0,5.02400016784668,0,1,0,6.28000020980835]);
browser.currentScene.children[12] = OrientationInterpolator1280;

let OrientationInterpolator1281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1281.DEF = "Roll";
OrientationInterpolator1281.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1281.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.76799988746643,0,0,1,5.02400016784668,0,0,1,6.28000020980835]);
browser.currentScene.children[13] = OrientationInterpolator1281;

let OrientationInterpolator1282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "vc6Yaw";
OrientationInterpolator1282.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1282.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.400000005960465,-1,0,0.699999988079071,-0.400000005960465,-1,0,0.400000005960465,0,1,0,0,0,1,0,0]);
browser.currentScene.children[14] = OrientationInterpolator1282;

let OrientationInterpolator1283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1283.DEF = "EyeballsRotation";
OrientationInterpolator1283.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1283.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0,0,1,0,0,0,1,0]);
browser.currentScene.children[15] = OrientationInterpolator1283;

let OrientationInterpolator1284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1284.DEF = "r_sternoclavicularRelax";
OrientationInterpolator1284.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1284.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.200000002980232,-1,0,0.109999999403954,0.200000002980232,-1,0,0.109999999403954,0.100000001490116,-1,0,0.100000001490116,0,0,1,0]);
browser.currentScene.children[16] = OrientationInterpolator1284;

let OrientationInterpolator1285 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1285.DEF = "r_acromioclavicularRelax";
OrientationInterpolator1285.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1285.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
browser.currentScene.children[17] = OrientationInterpolator1285;

let OrientationInterpolator1286 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1286.DEF = "r_shoulderRelax";
OrientationInterpolator1286.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1286.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0,0,1,0]);
browser.currentScene.children[18] = OrientationInterpolator1286;

let OrientationInterpolator1287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1287.DEF = "r_elbowRelax";
OrientationInterpolator1287.key = new X3D.MFFloat([0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1287.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,0,0,1,0]);
browser.currentScene.children[19] = OrientationInterpolator1287;

let OrientationInterpolator1288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1288.DEF = "r_wristRelax";
OrientationInterpolator1288.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1288.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0,1,0]);
browser.currentScene.children[20] = OrientationInterpolator1288;

let OrientationInterpolator1289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1289.DEF = "r_index0Relax";
OrientationInterpolator1289.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1289.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]);
browser.currentScene.children[21] = OrientationInterpolator1289;

let OrientationInterpolator1290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1290.DEF = "r_index1Relax";
OrientationInterpolator1290.key = new X3D.MFFloat([0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1290.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,-0.135000005364418,-0.135000005364418,1,0.35699999332428,-0.158999994397163,-0.152999997138977,1,0.354999989271164,-0.158999994397163,-0.152999997138977,1,0.35699999332428,0,0,1,0]);
browser.currentScene.children[22] = OrientationInterpolator1290;

let OrientationInterpolator1291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1291.DEF = "r_middle0Relax";
OrientationInterpolator1291.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1291.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,1,0]);
browser.currentScene.children[23] = OrientationInterpolator1291;

let OrientationInterpolator1292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1292.DEF = "r_middle1Relax";
OrientationInterpolator1292.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1292.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,0.300000011920929,0.256999999284744,0,0,0.300000011920929,0.370000004768372,0,0,0.300000011920929,0.389999985694885,0,0,0.300000011920929,0.310000002384186,0,0,0.300000011920929,0.319999992847443,0,0,0.300000011920929,0.340000003576279,0,0,0.300000011920929,0.280000001192093,0,0,1,0,0,0,1,0]);
browser.currentScene.children[24] = OrientationInterpolator1292;

let OrientationInterpolator1293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1293.DEF = "r_ring0Relax";
OrientationInterpolator1293.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1293.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0,0,1,0]);
browser.currentScene.children[25] = OrientationInterpolator1293;

let OrientationInterpolator1294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1294.DEF = "r_ring1Relax";
OrientationInterpolator1294.key = new X3D.MFFloat([0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1294.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.150000005960464,1,0.270000010728836,0,0,1,0]);
browser.currentScene.children[26] = OrientationInterpolator1294;

let OrientationInterpolator1295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1295.DEF = "r_pinky0Relax";
OrientationInterpolator1295.key = new X3D.MFFloat([0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1295.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0.349999994039536,0.349999994039536,-0.899999976158142,0.119999997317791,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0,0,1,0]);
browser.currentScene.children[27] = OrientationInterpolator1295;

let OrientationInterpolator1296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1296.DEF = "r_pinky1Relax";
OrientationInterpolator1296.key = new X3D.MFFloat([0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1296.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.200000002980232,0.25,1,0.270000010728836,0.200000002980232,0.219999998807907,1,0.270000010728836,0.219999998807907,0.200000002980232,1,0.270000010728836,0,0,1,0]);
browser.currentScene.children[28] = OrientationInterpolator1296;

let OrientationInterpolator1297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1297.DEF = "r_thumb1Relax";
OrientationInterpolator1297.key = new X3D.MFFloat([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1297.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]);
browser.currentScene.children[29] = OrientationInterpolator1297;

let OrientationInterpolator1298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1298.DEF = "r_thumb2Relax";
OrientationInterpolator1298.key = new X3D.MFFloat([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1298.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,1,0,0,0.449999988079071,1,0,0,0.449999988079071,0,0,1,0]);
browser.currentScene.children[30] = OrientationInterpolator1298;

let OrientationInterpolator1299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1299.DEF = "r_thumb3Relax";
OrientationInterpolator1299.key = new X3D.MFFloat([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1299.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,0,0,1,0,0,0,1,0]);
browser.currentScene.children[31] = OrientationInterpolator1299;

let OrientationInterpolator1300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1300.DEF = "r_fingers2Relax";
OrientationInterpolator1300.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1300.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.430000007152557,0,0,1,0.439999997615814,0,0,1,0.46000000834465,0,0,1,0.439999997615814,0,0,1,0.245000004768372,0,0,1,0.239999994635582,0,0,1,0.209999993443489,0,0,1,0.239999994635582,0,0,1,0]);
browser.currentScene.children[32] = OrientationInterpolator1300;

let OrientationInterpolator1301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1301.DEF = "r_fingers3Relax";
OrientationInterpolator1301.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1301.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.370000004768372,0,0,1,0.379999995231628,0,0,1,0.389999985694885,0,0,1,0.379999995231628,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0]);
browser.currentScene.children[33] = OrientationInterpolator1301;

let OrientationInterpolator1302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1302.DEF = "r_sternoclavicularRoll";
OrientationInterpolator1302.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1302.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,0.100000001490116,0,0,-1,0.219999998807907,0,0.5,-1,0.270000010728836,0,0,-1,0.100000001490116,0,0,1,0,0,0,1,0]);
browser.currentScene.children[34] = OrientationInterpolator1302;

let OrientationInterpolator1303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1303.DEF = "r_acromioclavicularRoll";
OrientationInterpolator1303.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1303.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.0500000007450581,0,0,1,0,0,0,1,0,0,0,1,0]);
browser.currentScene.children[35] = OrientationInterpolator1303;

let OrientationInterpolator1304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1304.DEF = "r_shoulderRoll";
OrientationInterpolator1304.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1304.keyValue = new X3D.MFRotation([1,0,0,0,0,0,-1,1.6599999666214,-0.25,0,-1,1.75999999046326,0,0,-1,1.25600004196167,0,0,-1,0.0500000007450581,1,0,0,0]);
browser.currentScene.children[36] = OrientationInterpolator1304;

let OrientationInterpolator1305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1305.DEF = "r_ForeArmPitch";
OrientationInterpolator1305.key = new X3D.MFFloat([0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1305.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,0,0,1,0,0,0,1,0]);
browser.currentScene.children[37] = OrientationInterpolator1305;

let OrientationInterpolator1306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1306.DEF = "r_wristRoll";
OrientationInterpolator1306.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
OrientationInterpolator1306.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.54999995231628,0,0,-1,1.54999995231628,0,0,1,0,0,0,1,0]);
browser.currentScene.children[38] = OrientationInterpolator1306;

let OrientationInterpolator1307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1307.DEF = "r_handPitch";
OrientationInterpolator1307.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1307.keyValue = new X3D.MFRotation([0,0,1,0,0,0,0.00999999977648258,0.25,0,0,-0.00999999977648258,0.0299999993294477,0,0,0.00999999977648258,0.0500000007450581,0,0,0.00999999977648258,0.00999999977648258,0,0,1,0]);
browser.currentScene.children[39] = OrientationInterpolator1307;

let OrientationInterpolator1308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1308.DEF = "r_thumb1Pitch";
OrientationInterpolator1308.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1308.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.400000005960465,1,0,0,0.200000002980232,1,0,0,0]);
browser.currentScene.children[40] = OrientationInterpolator1308;

let OrientationInterpolator1309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1309.DEF = "r_thumb2Pitch";
OrientationInterpolator1309.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1309.keyValue = new X3D.MFRotation([0,0,1,0,1,1,0,0.300000011920929,1,1,0,0.300000011920929,1,1,0,0.600000023841858,1,1,0,0.300000011920929,0,1,1,0]);
browser.currentScene.children[41] = OrientationInterpolator1309;

let OrientationInterpolator1310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1310.DEF = "l_shoulderRoll";
OrientationInterpolator1310.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1310.keyValue = new X3D.MFRotation([0.25,0,1,1.75999999046326,0,0,1,1.6599999666214,0.25,0,1,1.75999999046326,0,0,1,1.25600004196167,0,0,1,0.0500000007450581,0.25,0,1,1.75999999046326]);
browser.currentScene.children[42] = OrientationInterpolator1310;

let Group1311 = browser.currentScene.createNode("Group");
let PositionInterpolator1312 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1312.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator1312.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1312.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group1311YYY.children = new X3D.MFNode();

Group1311ZZZ.children[0] = PositionInterpolator1312;

let OrientationInterpolator1313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1313.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator1313.key = new X3D.MFFloat([0,1]);
OrientationInterpolator1313.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0]);
Group1311ZZZ.children[1] = OrientationInterpolator1313;

let OrientationInterpolator1314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1314.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator1314.key = new X3D.MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1314.keyValue = new X3D.MFRotation([-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139,0.996299982070923,-0.0105699999257922,0.0848100036382675,0.248799994587898,0.996500015258789,0.0159099996089935,-0.0822200030088425,0.383599996566772,-0.701799988746643,-0.0322300009429455,-0.711700022220612,0.12890000641346,-1,0,0,0.551800012588501,-0.996399998664856,0.0223099999129772,0.0816999971866608,0.535099983215332,-0.98089998960495,0.0491200014948845,0.18809999525547,0.520399987697601,-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139]);
Group1311ZZZ.children[2] = OrientationInterpolator1314;

let OrientationInterpolator1315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1315.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator1315.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1315.keyValue = new X3D.MFRotation([1,0,0,0.32260000705719,1,0,0,0.155599996447563,1,0,0,0.086779996752739,1,0,0,0.875100016593933,1,0,0,1.13100004196167,1,0,0,0.0996100008487701,1,0,0,0.394199997186661,1,0,0,0.32260000705719]);
Group1311ZZZ.children[3] = OrientationInterpolator1315;

let OrientationInterpolator1316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1316.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator1316.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1316.keyValue = new X3D.MFRotation([-1,0,0,0.067100003361702,-1,0,0,0.215200006961823,-1,0,0,0.318399995565414,-1,0,0,0.471700012683868,-1,0,0,0.291200011968613,1,0,0,0.222200006246567,-1,0,0,0.067100003361702]);
Group1311ZZZ.children[4] = OrientationInterpolator1316;

let OrientationInterpolator1317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1317.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator1317.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1317.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.107199996709824,1,0,0,0.400000005960465,1,0,0,0.127000004053116,-1,0,0,0.0179999992251396,-1,0,0,0.0579999983310699,-1,0,0,0.239999994635582,-1,0,0,0.349999994039536,-1,0,0,0.330000013113022,0,0,1,0]);
Group1311ZZZ.children[5] = OrientationInterpolator1317;

let OrientationInterpolator1318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1318.DEF = "L_subtalar_ANIMATOR";
OrientationInterpolator1318.key = new X3D.MFFloat([0,0.3,1]);
OrientationInterpolator1318.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1311ZZZ.children[6] = OrientationInterpolator1318;

let OrientationInterpolator1319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1319.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator1319.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1319.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.200000002980232,1,0,0,0]);
Group1311ZZZ.children[7] = OrientationInterpolator1319;

let OrientationInterpolator1320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1320.DEF = "L_metatarsal_ANIMATOR";
OrientationInterpolator1320.key = new X3D.MFFloat([0,0.2,0.4,0.8,1]);
OrientationInterpolator1320.keyValue = new X3D.MFRotation([-1,0,0,0.300000011920929,-1,0,0,0.150000005960464,1,0,0,0.300000011920929,0,0,1,0,-1,0,0,0.300000011920929]);
Group1311ZZZ.children[8] = OrientationInterpolator1320;

let OrientationInterpolator1321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1321.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator1321.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1321.keyValue = new X3D.MFRotation([-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121,-0.995000004768372,0.0229599997401238,0.0967399999499321,0.468300014734268,-1,0.0019000000320375,0.00796000007539988,0.473199993371964,-0.998000025749207,-0.0157999992370605,-0.0610200017690659,0.50789999961853,-0.991100013256073,-0.0354099981486797,-0.128600001335144,0.541899979114533,-0.913100004196167,-0.0624300017952919,-0.402999997138977,0.33610001206398,-0.430599987506866,-0.0796200037002564,-0.898999989032745,0.0703800022602081,1,0,0,0.257099986076355,0.989099979400635,-0.0280499998480082,0.144400000572205,0.387899994850159,-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121]);
Group1311ZZZ.children[9] = OrientationInterpolator1321;

let OrientationInterpolator1322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1322.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator1322.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1322.keyValue = new X3D.MFRotation([1,0,0,0.857299983501434,1,0,0,0.892599999904633,1,0,0,0.535099983215332,1,0,0,0.175600007176399,1,0,0,0.119400002062321,1,0,0,0.315299987792969,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.247500002384186,1,0,0,0.857299983501434]);
Group1311ZZZ.children[10] = OrientationInterpolator1322;

let OrientationInterpolator1323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1323.DEF = "R_subtalar_ANIMATOR";
OrientationInterpolator1323.key = new X3D.MFFloat([0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1323.keyValue = new X3D.MFRotation([-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]);
Group1311ZZZ.children[11] = OrientationInterpolator1323;

let OrientationInterpolator1324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1324.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator1324.key = new X3D.MFFloat([0,0.22,1]);
OrientationInterpolator1324.keyValue = new X3D.MFRotation([1,0,0,-0.200000002980232,0,0,1,0,1,0,0,-0.200000002980232]);
Group1311ZZZ.children[12] = OrientationInterpolator1324;

let OrientationInterpolator1325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1325.DEF = "R_metatarsal_ANIMATOR";
OrientationInterpolator1325.key = new X3D.MFFloat([0,0.2,0.4,0.8,1]);
OrientationInterpolator1325.keyValue = new X3D.MFRotation([-1,0,0,0.150000005960464,0,0,1,0,1,0,0,0.300000011920929,-1,0,0,0.300000011920929,-1,0,0,0.150000005960464]);
Group1311ZZZ.children[13] = OrientationInterpolator1325;

let OrientationInterpolator1326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1326.DEF = "VL5_ANIMATOR";
OrientationInterpolator1326.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1326.keyValue = new X3D.MFRotation([0,1,0,0.0825999975204468,-0.0197199992835522,-0.597400009632111,0.801699995994568,0.0823099985718727,0.0092960000038147,-0.964800000190735,0.262699991464615,0.17339999973774,-0.0123800002038479,0.954900026321411,-0.29679998755455,0.0873199999332428,-0.00812499970197678,0.969099998474121,-0.246299996972084,0.158000007271767,0,1,0,0.0825999975204468]);
Group1311ZZZ.children[14] = OrientationInterpolator1326;

let OrientationInterpolator1327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1327.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator1327.key = new X3D.MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1327.keyValue = new X3D.MFRotation([0,-1,0,0.0864000022411346,0,1,0,0.182500004768372,0,1,0,0.150499999523163,0,1,0,0.10530000180006,0,1,0,0.0439100004732609,0,-1,0,0.031190000474453,0,-1,0,0.0793600007891655,0,-1,0,0.16159999370575,0,-1,0,0.155000001192093,0,-1,0,0.0864199995994568]);
Group1311ZZZ.children[15] = OrientationInterpolator1327;

let OrientationInterpolator1328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1328.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator1328.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1328.keyValue = new X3D.MFRotation([1,0,0.400000005960465,0.119999997317791,-1,0,0.400000005960465,0.186000004410744,1,0,0.100000001490116,0.335999995470047,1,0,0.400000005960465,0.119999997317791]);
Group1311ZZZ.children[16] = OrientationInterpolator1328;

let OrientationInterpolator1329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1329.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator1329.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1329.keyValue = new X3D.MFRotation([-1,0,0,0.0659999996423721,-1,0,0,0.488000005483627,-1,0,0,0.0176999997347593,-1,0,0,0.065987803041935]);
Group1311ZZZ.children[17] = OrientationInterpolator1329;

let OrientationInterpolator1330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1330.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator1330.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1330.keyValue = new X3D.MFRotation([0,-1,0,0.460999995470047,-0.330199986696243,-0.927500009536743,0.175500005483627,0.538800001144409,0.0327773988246918,-0.99931401014328,-0.0172185003757477,0.492033004760742,0,-1,0,0.46110001206398]);
Group1311ZZZ.children[18] = OrientationInterpolator1330;

let OrientationInterpolator1331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1331.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator1331.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1331.keyValue = new X3D.MFRotation([-1,0,-1,0.0920000001788139,1,0,-0.200000002980232,0.319700002670288,-1,0,-0.5,0.156399995088577,-1,0,-1,0.0920000001788139]);
Group1311ZZZ.children[19] = OrientationInterpolator1331;

let OrientationInterpolator1332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1332.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator1332.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1332.keyValue = new X3D.MFRotation([-1,0,0,0.411500006914139,-1,0,0,0.0925000011920929,-1,0,0,0.572567999362946,-1,0,0,0.411507993936539]);
Group1311ZZZ.children[20] = OrientationInterpolator1332;

let OrientationInterpolator1333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1333.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator1333.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1333.keyValue = new X3D.MFRotation([-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333,0.153300002217293,-0.987800002098084,0.0258200000971556,0.390199989080429,-0.570100009441376,0.760399997234345,-0.310999989509583,0.36599999666214,-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333]);
Group1311ZZZ.children[21] = OrientationInterpolator1333;

browser.currentScene.children[43] = Group1311;

let ROUTE1334 = browser.currentScene.createNode("ROUTE");
ROUTE1334.fromNode = "Time2";
ROUTE1334.fromField = "fraction_changed";
ROUTE1334.toNode = "vc6Yaw";
ROUTE1334.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE1334;

let ROUTE1335 = browser.currentScene.createNode("ROUTE");
ROUTE1335.fromNode = "vc6Yaw";
ROUTE1335.fromField = "value_changed";
ROUTE1335.toNode = "Joe_vc6";
ROUTE1335.toField = "set_rotation";
browser.currentScene.children[45] = ROUTE1335;

let ROUTE1336 = browser.currentScene.createNode("ROUTE");
ROUTE1336.fromNode = "Time3";
ROUTE1336.fromField = "fraction_changed";
ROUTE1336.toNode = "EyeballsRotation";
ROUTE1336.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE1336;

let ROUTE1337 = browser.currentScene.createNode("ROUTE");
ROUTE1337.fromNode = "EyeballsRotation";
ROUTE1337.fromField = "value_changed";
ROUTE1337.toNode = "Joe_r_eyeball_joint";
ROUTE1337.toField = "set_rotation";
browser.currentScene.children[47] = ROUTE1337;

let ROUTE1338 = browser.currentScene.createNode("ROUTE");
ROUTE1338.fromNode = "EyeballsRotation";
ROUTE1338.fromField = "value_changed";
ROUTE1338.toNode = "Joe_l_eyeball_joint";
ROUTE1338.toField = "set_rotation";
browser.currentScene.children[48] = ROUTE1338;

let ROUTE1339 = browser.currentScene.createNode("ROUTE");
ROUTE1339.fromNode = "r_sternoclavicularRelax";
ROUTE1339.fromField = "value_changed";
ROUTE1339.toNode = "Joe_r_sternoclavicular";
ROUTE1339.toField = "set_rotation";
browser.currentScene.children[49] = ROUTE1339;

let ROUTE1340 = browser.currentScene.createNode("ROUTE");
ROUTE1340.fromNode = "r_acromioclavicularRelax";
ROUTE1340.fromField = "value_changed";
ROUTE1340.toNode = "Joe_r_acromioclavicular";
ROUTE1340.toField = "set_rotation";
browser.currentScene.children[50] = ROUTE1340;

let ROUTE1341 = browser.currentScene.createNode("ROUTE");
ROUTE1341.fromNode = "r_shoulderRelax";
ROUTE1341.fromField = "value_changed";
ROUTE1341.toNode = "Joe_r_shoulder";
ROUTE1341.toField = "set_rotation";
browser.currentScene.children[51] = ROUTE1341;

let ROUTE1342 = browser.currentScene.createNode("ROUTE");
ROUTE1342.fromNode = "r_elbowRelax";
ROUTE1342.fromField = "value_changed";
ROUTE1342.toNode = "Joe_r_elbow";
ROUTE1342.toField = "set_rotation";
browser.currentScene.children[52] = ROUTE1342;

let ROUTE1343 = browser.currentScene.createNode("ROUTE");
ROUTE1343.fromNode = "r_wristRelax";
ROUTE1343.fromField = "value_changed";
ROUTE1343.toNode = "Joe_r_wrist";
ROUTE1343.toField = "set_rotation";
browser.currentScene.children[53] = ROUTE1343;

let ROUTE1344 = browser.currentScene.createNode("ROUTE");
ROUTE1344.fromNode = "r_thumb1Relax";
ROUTE1344.fromField = "value_changed";
ROUTE1344.toNode = "Joe_r_thumb1";
ROUTE1344.toField = "set_rotation";
browser.currentScene.children[54] = ROUTE1344;

let ROUTE1345 = browser.currentScene.createNode("ROUTE");
ROUTE1345.fromNode = "r_thumb2Relax";
ROUTE1345.fromField = "value_changed";
ROUTE1345.toNode = "Joe_r_thumb2";
ROUTE1345.toField = "set_rotation";
browser.currentScene.children[55] = ROUTE1345;

let ROUTE1346 = browser.currentScene.createNode("ROUTE");
ROUTE1346.fromNode = "r_thumb3Relax";
ROUTE1346.fromField = "value_changed";
ROUTE1346.toNode = "Joe_r_thumb3";
ROUTE1346.toField = "set_rotation";
browser.currentScene.children[56] = ROUTE1346;

let ROUTE1347 = browser.currentScene.createNode("ROUTE");
ROUTE1347.fromNode = "r_index0Relax";
ROUTE1347.fromField = "value_changed";
ROUTE1347.toNode = "Joe_r_index0";
ROUTE1347.toField = "set_rotation";
browser.currentScene.children[57] = ROUTE1347;

let ROUTE1348 = browser.currentScene.createNode("ROUTE");
ROUTE1348.fromNode = "r_index1Relax";
ROUTE1348.fromField = "value_changed";
ROUTE1348.toNode = "Joe_r_index1";
ROUTE1348.toField = "set_rotation";
browser.currentScene.children[58] = ROUTE1348;

let ROUTE1349 = browser.currentScene.createNode("ROUTE");
ROUTE1349.fromNode = "r_fingers2Relax";
ROUTE1349.fromField = "value_changed";
ROUTE1349.toNode = "Joe_r_index2";
ROUTE1349.toField = "set_rotation";
browser.currentScene.children[59] = ROUTE1349;

let ROUTE1350 = browser.currentScene.createNode("ROUTE");
ROUTE1350.fromNode = "r_fingers3Relax";
ROUTE1350.fromField = "value_changed";
ROUTE1350.toNode = "Joe_r_index3";
ROUTE1350.toField = "set_rotation";
browser.currentScene.children[60] = ROUTE1350;

let ROUTE1351 = browser.currentScene.createNode("ROUTE");
ROUTE1351.fromNode = "r_middle0Relax";
ROUTE1351.fromField = "value_changed";
ROUTE1351.toNode = "Joe_r_middle0";
ROUTE1351.toField = "set_rotation";
browser.currentScene.children[61] = ROUTE1351;

let ROUTE1352 = browser.currentScene.createNode("ROUTE");
ROUTE1352.fromNode = "r_middle1Relax";
ROUTE1352.fromField = "value_changed";
ROUTE1352.toNode = "Joe_r_middle1";
ROUTE1352.toField = "set_rotation";
browser.currentScene.children[62] = ROUTE1352;

let ROUTE1353 = browser.currentScene.createNode("ROUTE");
ROUTE1353.fromNode = "r_fingers2Relax";
ROUTE1353.fromField = "value_changed";
ROUTE1353.toNode = "Joe_r_middle2";
ROUTE1353.toField = "set_rotation";
browser.currentScene.children[63] = ROUTE1353;

let ROUTE1354 = browser.currentScene.createNode("ROUTE");
ROUTE1354.fromNode = "r_fingers3Relax";
ROUTE1354.fromField = "value_changed";
ROUTE1354.toNode = "Joe_r_middle3";
ROUTE1354.toField = "set_rotation";
browser.currentScene.children[64] = ROUTE1354;

let ROUTE1355 = browser.currentScene.createNode("ROUTE");
ROUTE1355.fromNode = "r_ring0Relax";
ROUTE1355.fromField = "value_changed";
ROUTE1355.toNode = "Joe_r_ring0";
ROUTE1355.toField = "set_rotation";
browser.currentScene.children[65] = ROUTE1355;

let ROUTE1356 = browser.currentScene.createNode("ROUTE");
ROUTE1356.fromNode = "r_ring1Relax";
ROUTE1356.fromField = "value_changed";
ROUTE1356.toNode = "Joe_r_ring1";
ROUTE1356.toField = "set_rotation";
browser.currentScene.children[66] = ROUTE1356;

let ROUTE1357 = browser.currentScene.createNode("ROUTE");
ROUTE1357.fromNode = "r_fingers2Relax";
ROUTE1357.fromField = "value_changed";
ROUTE1357.toNode = "Joe_r_ring2";
ROUTE1357.toField = "set_rotation";
browser.currentScene.children[67] = ROUTE1357;

let ROUTE1358 = browser.currentScene.createNode("ROUTE");
ROUTE1358.fromNode = "r_fingers3Relax";
ROUTE1358.fromField = "value_changed";
ROUTE1358.toNode = "Joe_r_ring3";
ROUTE1358.toField = "set_rotation";
browser.currentScene.children[68] = ROUTE1358;

let ROUTE1359 = browser.currentScene.createNode("ROUTE");
ROUTE1359.fromNode = "r_pinky0Relax";
ROUTE1359.fromField = "value_changed";
ROUTE1359.toNode = "Joe_r_pinky0";
ROUTE1359.toField = "set_rotation";
browser.currentScene.children[69] = ROUTE1359;

let ROUTE1360 = browser.currentScene.createNode("ROUTE");
ROUTE1360.fromNode = "r_pinky1Relax";
ROUTE1360.fromField = "value_changed";
ROUTE1360.toNode = "Joe_r_pinky1";
ROUTE1360.toField = "set_rotation";
browser.currentScene.children[70] = ROUTE1360;

let ROUTE1361 = browser.currentScene.createNode("ROUTE");
ROUTE1361.fromNode = "r_fingers2Relax";
ROUTE1361.fromField = "value_changed";
ROUTE1361.toNode = "Joe_r_pinky2";
ROUTE1361.toField = "set_rotation";
browser.currentScene.children[71] = ROUTE1361;

let ROUTE1362 = browser.currentScene.createNode("ROUTE");
ROUTE1362.fromNode = "r_fingers3Relax";
ROUTE1362.fromField = "value_changed";
ROUTE1362.toNode = "Joe_r_pinky3";
ROUTE1362.toField = "set_rotation";
browser.currentScene.children[72] = ROUTE1362;

let ROUTE1363 = browser.currentScene.createNode("ROUTE");
ROUTE1363.fromNode = "Time2";
ROUTE1363.fromField = "fraction_changed";
ROUTE1363.toNode = "r_sternoclavicularRoll";
ROUTE1363.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE1363;

let ROUTE1364 = browser.currentScene.createNode("ROUTE");
ROUTE1364.fromNode = "Time2";
ROUTE1364.fromField = "fraction_changed";
ROUTE1364.toNode = "r_acromioclavicularRoll";
ROUTE1364.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE1364;

let ROUTE1365 = browser.currentScene.createNode("ROUTE");
ROUTE1365.fromNode = "Time2";
ROUTE1365.fromField = "fraction_changed";
ROUTE1365.toNode = "r_shoulderRoll";
ROUTE1365.toField = "set_fraction";
browser.currentScene.children[75] = ROUTE1365;

let ROUTE1366 = browser.currentScene.createNode("ROUTE");
ROUTE1366.fromNode = "Time2";
ROUTE1366.fromField = "fraction_changed";
ROUTE1366.toNode = "r_ForeArmPitch";
ROUTE1366.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE1366;

let ROUTE1367 = browser.currentScene.createNode("ROUTE");
ROUTE1367.fromNode = "Time2";
ROUTE1367.fromField = "fraction_changed";
ROUTE1367.toNode = "r_wristRoll";
ROUTE1367.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE1367;

let ROUTE1368 = browser.currentScene.createNode("ROUTE");
ROUTE1368.fromNode = "Time2";
ROUTE1368.fromField = "fraction_changed";
ROUTE1368.toNode = "r_handPitch";
ROUTE1368.toField = "set_fraction";
browser.currentScene.children[78] = ROUTE1368;

let ROUTE1369 = browser.currentScene.createNode("ROUTE");
ROUTE1369.fromNode = "Time2";
ROUTE1369.fromField = "fraction_changed";
ROUTE1369.toNode = "r_thumb1Pitch";
ROUTE1369.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE1369;

let ROUTE1370 = browser.currentScene.createNode("ROUTE");
ROUTE1370.fromNode = "Time2";
ROUTE1370.fromField = "fraction_changed";
ROUTE1370.toNode = "r_thumb2Pitch";
ROUTE1370.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE1370;

let ROUTE1371 = browser.currentScene.createNode("ROUTE");
ROUTE1371.fromNode = "r_sternoclavicularRoll";
ROUTE1371.fromField = "value_changed";
ROUTE1371.toNode = "Joe_r_sternoclavicular";
ROUTE1371.toField = "set_rotation";
browser.currentScene.children[81] = ROUTE1371;

let ROUTE1372 = browser.currentScene.createNode("ROUTE");
ROUTE1372.fromNode = "r_acromioclavicularRoll";
ROUTE1372.fromField = "value_changed";
ROUTE1372.toNode = "Joe_r_acromioclavicular";
ROUTE1372.toField = "set_rotation";
browser.currentScene.children[82] = ROUTE1372;

let ROUTE1373 = browser.currentScene.createNode("ROUTE");
ROUTE1373.fromNode = "r_shoulderRoll";
ROUTE1373.fromField = "value_changed";
ROUTE1373.toNode = "Joe_r_shoulder";
ROUTE1373.toField = "set_rotation";
browser.currentScene.children[83] = ROUTE1373;

let ROUTE1374 = browser.currentScene.createNode("ROUTE");
ROUTE1374.fromNode = "r_ForeArmPitch";
ROUTE1374.fromField = "value_changed";
ROUTE1374.toNode = "Joe_r_elbow";
ROUTE1374.toField = "set_rotation";
browser.currentScene.children[84] = ROUTE1374;

let ROUTE1375 = browser.currentScene.createNode("ROUTE");
ROUTE1375.fromNode = "r_wristRoll";
ROUTE1375.fromField = "value_changed";
ROUTE1375.toNode = "Joe_r_wrist";
ROUTE1375.toField = "set_rotation";
browser.currentScene.children[85] = ROUTE1375;

let ROUTE1376 = browser.currentScene.createNode("ROUTE");
ROUTE1376.fromNode = "r_handPitch";
ROUTE1376.fromField = "value_changed";
ROUTE1376.toNode = "Joe_r_index0";
ROUTE1376.toField = "set_rotation";
browser.currentScene.children[86] = ROUTE1376;

let ROUTE1377 = browser.currentScene.createNode("ROUTE");
ROUTE1377.fromNode = "r_handPitch";
ROUTE1377.fromField = "value_changed";
ROUTE1377.toNode = "Joe_r_index1";
ROUTE1377.toField = "set_rotation";
browser.currentScene.children[87] = ROUTE1377;

let ROUTE1378 = browser.currentScene.createNode("ROUTE");
ROUTE1378.fromNode = "r_handPitch";
ROUTE1378.fromField = "value_changed";
ROUTE1378.toNode = "Joe_r_index2";
ROUTE1378.toField = "set_rotation";
browser.currentScene.children[88] = ROUTE1378;

let ROUTE1379 = browser.currentScene.createNode("ROUTE");
ROUTE1379.fromNode = "r_handPitch";
ROUTE1379.fromField = "value_changed";
ROUTE1379.toNode = "Joe_r_index3";
ROUTE1379.toField = "set_rotation";
browser.currentScene.children[89] = ROUTE1379;

let ROUTE1380 = browser.currentScene.createNode("ROUTE");
ROUTE1380.fromNode = "r_handPitch";
ROUTE1380.fromField = "value_changed";
ROUTE1380.toNode = "Joe_r_middle0";
ROUTE1380.toField = "set_rotation";
browser.currentScene.children[90] = ROUTE1380;

let ROUTE1381 = browser.currentScene.createNode("ROUTE");
ROUTE1381.fromNode = "r_handPitch";
ROUTE1381.fromField = "value_changed";
ROUTE1381.toNode = "Joe_r_middle1";
ROUTE1381.toField = "set_rotation";
browser.currentScene.children[91] = ROUTE1381;

let ROUTE1382 = browser.currentScene.createNode("ROUTE");
ROUTE1382.fromNode = "r_handPitch";
ROUTE1382.fromField = "value_changed";
ROUTE1382.toNode = "Joe_r_middle2";
ROUTE1382.toField = "set_rotation";
browser.currentScene.children[92] = ROUTE1382;

let ROUTE1383 = browser.currentScene.createNode("ROUTE");
ROUTE1383.fromNode = "r_handPitch";
ROUTE1383.fromField = "value_changed";
ROUTE1383.toNode = "Joe_r_middle3";
ROUTE1383.toField = "set_rotation";
browser.currentScene.children[93] = ROUTE1383;

let ROUTE1384 = browser.currentScene.createNode("ROUTE");
ROUTE1384.fromNode = "r_handPitch";
ROUTE1384.fromField = "value_changed";
ROUTE1384.toNode = "Joe_r_ring0";
ROUTE1384.toField = "set_rotation";
browser.currentScene.children[94] = ROUTE1384;

let ROUTE1385 = browser.currentScene.createNode("ROUTE");
ROUTE1385.fromNode = "r_handPitch";
ROUTE1385.fromField = "value_changed";
ROUTE1385.toNode = "Joe_r_ring1";
ROUTE1385.toField = "set_rotation";
browser.currentScene.children[95] = ROUTE1385;

let ROUTE1386 = browser.currentScene.createNode("ROUTE");
ROUTE1386.fromNode = "r_handPitch";
ROUTE1386.fromField = "value_changed";
ROUTE1386.toNode = "Joe_r_ring2";
ROUTE1386.toField = "set_rotation";
browser.currentScene.children[96] = ROUTE1386;

let ROUTE1387 = browser.currentScene.createNode("ROUTE");
ROUTE1387.fromNode = "r_handPitch";
ROUTE1387.fromField = "value_changed";
ROUTE1387.toNode = "Joe_r_ring3";
ROUTE1387.toField = "set_rotation";
browser.currentScene.children[97] = ROUTE1387;

let ROUTE1388 = browser.currentScene.createNode("ROUTE");
ROUTE1388.fromNode = "r_handPitch";
ROUTE1388.fromField = "value_changed";
ROUTE1388.toNode = "Joe_r_pinky0";
ROUTE1388.toField = "set_rotation";
browser.currentScene.children[98] = ROUTE1388;

let ROUTE1389 = browser.currentScene.createNode("ROUTE");
ROUTE1389.fromNode = "r_handPitch";
ROUTE1389.fromField = "value_changed";
ROUTE1389.toNode = "Joe_r_pinky1";
ROUTE1389.toField = "set_rotation";
browser.currentScene.children[99] = ROUTE1389;

let ROUTE1390 = browser.currentScene.createNode("ROUTE");
ROUTE1390.fromNode = "r_handPitch";
ROUTE1390.fromField = "value_changed";
ROUTE1390.toNode = "Joe_r_pinky2";
ROUTE1390.toField = "set_rotation";
browser.currentScene.children[100] = ROUTE1390;

let ROUTE1391 = browser.currentScene.createNode("ROUTE");
ROUTE1391.fromNode = "r_handPitch";
ROUTE1391.fromField = "value_changed";
ROUTE1391.toNode = "Joe_r_pinky3";
ROUTE1391.toField = "set_rotation";
browser.currentScene.children[101] = ROUTE1391;

let ROUTE1392 = browser.currentScene.createNode("ROUTE");
ROUTE1392.fromNode = "r_thumb1Pitch";
ROUTE1392.fromField = "value_changed";
ROUTE1392.toNode = "Joe_r_thumb1";
ROUTE1392.toField = "set_rotation";
browser.currentScene.children[102] = ROUTE1392;

let ROUTE1393 = browser.currentScene.createNode("ROUTE");
ROUTE1393.fromNode = "r_thumb2Pitch";
ROUTE1393.fromField = "value_changed";
ROUTE1393.toNode = "Joe_r_thumb2";
ROUTE1393.toField = "set_rotation";
browser.currentScene.children[103] = ROUTE1393;

let ROUTE1394 = browser.currentScene.createNode("ROUTE");
ROUTE1394.fromNode = "r_thumb2Pitch";
ROUTE1394.fromField = "value_changed";
ROUTE1394.toNode = "Joe_r_thumb3";
ROUTE1394.toField = "set_rotation";
browser.currentScene.children[104] = ROUTE1394;

let ROUTE1395 = browser.currentScene.createNode("ROUTE");
ROUTE1395.fromNode = "l_shoulderRoll";
ROUTE1395.fromField = "value_changed";
ROUTE1395.toNode = "Joe_l_shoulder";
ROUTE1395.toField = "set_rotation";
browser.currentScene.children[105] = ROUTE1395;

let ROUTE1396 = browser.currentScene.createNode("ROUTE");
ROUTE1396.fromNode = "Time1";
ROUTE1396.fromField = "fraction_changed";
ROUTE1396.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1396.toField = "set_fraction";
browser.currentScene.children[106] = ROUTE1396;

let ROUTE1397 = browser.currentScene.createNode("ROUTE");
ROUTE1397.fromNode = "Time1";
ROUTE1397.fromField = "fraction_changed";
ROUTE1397.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1397.toField = "set_fraction";
browser.currentScene.children[107] = ROUTE1397;

let ROUTE1398 = browser.currentScene.createNode("ROUTE");
ROUTE1398.fromNode = "Time1";
ROUTE1398.fromField = "fraction_changed";
ROUTE1398.toNode = "L_HIP_ANIMATOR";
ROUTE1398.toField = "set_fraction";
browser.currentScene.children[108] = ROUTE1398;

let ROUTE1399 = browser.currentScene.createNode("ROUTE");
ROUTE1399.fromNode = "Time1";
ROUTE1399.fromField = "fraction_changed";
ROUTE1399.toNode = "L_KNEE_ANIMATOR";
ROUTE1399.toField = "set_fraction";
browser.currentScene.children[109] = ROUTE1399;

let ROUTE1400 = browser.currentScene.createNode("ROUTE");
ROUTE1400.fromNode = "Time1";
ROUTE1400.fromField = "fraction_changed";
ROUTE1400.toNode = "L_ANKLE_ANIMATOR";
ROUTE1400.toField = "set_fraction";
browser.currentScene.children[110] = ROUTE1400;

let ROUTE1401 = browser.currentScene.createNode("ROUTE");
ROUTE1401.fromNode = "Time1";
ROUTE1401.fromField = "fraction_changed";
ROUTE1401.toNode = "L_subtalar_ANIMATOR";
ROUTE1401.toField = "set_fraction";
browser.currentScene.children[111] = ROUTE1401;

let ROUTE1402 = browser.currentScene.createNode("ROUTE");
ROUTE1402.fromNode = "Time1";
ROUTE1402.fromField = "fraction_changed";
ROUTE1402.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1402.toField = "set_fraction";
browser.currentScene.children[112] = ROUTE1402;

let ROUTE1403 = browser.currentScene.createNode("ROUTE");
ROUTE1403.fromNode = "Time1";
ROUTE1403.fromField = "fraction_changed";
ROUTE1403.toNode = "L_metatarsal_ANIMATOR";
ROUTE1403.toField = "set_fraction";
browser.currentScene.children[113] = ROUTE1403;

let ROUTE1404 = browser.currentScene.createNode("ROUTE");
ROUTE1404.fromNode = "Time1";
ROUTE1404.fromField = "fraction_changed";
ROUTE1404.toNode = "R_HIP_ANIMATOR";
ROUTE1404.toField = "set_fraction";
browser.currentScene.children[114] = ROUTE1404;

let ROUTE1405 = browser.currentScene.createNode("ROUTE");
ROUTE1405.fromNode = "Time1";
ROUTE1405.fromField = "fraction_changed";
ROUTE1405.toNode = "R_KNEE_ANIMATOR";
ROUTE1405.toField = "set_fraction";
browser.currentScene.children[115] = ROUTE1405;

let ROUTE1406 = browser.currentScene.createNode("ROUTE");
ROUTE1406.fromNode = "Time1";
ROUTE1406.fromField = "fraction_changed";
ROUTE1406.toNode = "R_ANKLE_ANIMATOR";
ROUTE1406.toField = "set_fraction";
browser.currentScene.children[116] = ROUTE1406;

let ROUTE1407 = browser.currentScene.createNode("ROUTE");
ROUTE1407.fromNode = "Time1";
ROUTE1407.fromField = "fraction_changed";
ROUTE1407.toNode = "R_subtalar_ANIMATOR";
ROUTE1407.toField = "set_fraction";
browser.currentScene.children[117] = ROUTE1407;

let ROUTE1408 = browser.currentScene.createNode("ROUTE");
ROUTE1408.fromNode = "Time1";
ROUTE1408.fromField = "fraction_changed";
ROUTE1408.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1408.toField = "set_fraction";
browser.currentScene.children[118] = ROUTE1408;

let ROUTE1409 = browser.currentScene.createNode("ROUTE");
ROUTE1409.fromNode = "Time1";
ROUTE1409.fromField = "fraction_changed";
ROUTE1409.toNode = "R_metatarsal_ANIMATOR";
ROUTE1409.toField = "set_fraction";
browser.currentScene.children[119] = ROUTE1409;

let ROUTE1410 = browser.currentScene.createNode("ROUTE");
ROUTE1410.fromNode = "Time1";
ROUTE1410.fromField = "fraction_changed";
ROUTE1410.toNode = "VL5_ANIMATOR";
ROUTE1410.toField = "set_fraction";
browser.currentScene.children[120] = ROUTE1410;

let ROUTE1411 = browser.currentScene.createNode("ROUTE");
ROUTE1411.fromNode = "Time1";
ROUTE1411.fromField = "fraction_changed";
ROUTE1411.toNode = "SKULLBASE_ANIMATOR";
ROUTE1411.toField = "set_fraction";
browser.currentScene.children[121] = ROUTE1411;

let ROUTE1412 = browser.currentScene.createNode("ROUTE");
ROUTE1412.fromNode = "Time1";
ROUTE1412.fromField = "fraction_changed";
ROUTE1412.toNode = "L_SHOULDER_ANIMATOR";
ROUTE1412.toField = "set_fraction";
browser.currentScene.children[122] = ROUTE1412;

let ROUTE1413 = browser.currentScene.createNode("ROUTE");
ROUTE1413.fromNode = "Time1";
ROUTE1413.fromField = "fraction_changed";
ROUTE1413.toNode = "L_ELBOW_ANIMATOR";
ROUTE1413.toField = "set_fraction";
browser.currentScene.children[123] = ROUTE1413;

let ROUTE1414 = browser.currentScene.createNode("ROUTE");
ROUTE1414.fromNode = "Time1";
ROUTE1414.fromField = "fraction_changed";
ROUTE1414.toNode = "L_WRIST_ANIMATOR";
ROUTE1414.toField = "set_fraction";
browser.currentScene.children[124] = ROUTE1414;

let ROUTE1415 = browser.currentScene.createNode("ROUTE");
ROUTE1415.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1415.fromField = "value_changed";
ROUTE1415.toNode = "Joe_HumanoidRoot";
ROUTE1415.toField = "set_translation";
browser.currentScene.children[125] = ROUTE1415;

let ROUTE1416 = browser.currentScene.createNode("ROUTE");
ROUTE1416.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1416.fromField = "value_changed";
ROUTE1416.toNode = "Joe_HumanoidRoot";
ROUTE1416.toField = "set_rotation";
browser.currentScene.children[126] = ROUTE1416;

let ROUTE1417 = browser.currentScene.createNode("ROUTE");
ROUTE1417.fromNode = "L_HIP_ANIMATOR";
ROUTE1417.fromField = "value_changed";
ROUTE1417.toNode = "Joe_l_hip";
ROUTE1417.toField = "set_rotation";
browser.currentScene.children[127] = ROUTE1417;

let ROUTE1418 = browser.currentScene.createNode("ROUTE");
ROUTE1418.fromNode = "L_KNEE_ANIMATOR";
ROUTE1418.fromField = "value_changed";
ROUTE1418.toNode = "Joe_l_knee";
ROUTE1418.toField = "set_rotation";
browser.currentScene.children[128] = ROUTE1418;

let ROUTE1419 = browser.currentScene.createNode("ROUTE");
ROUTE1419.fromNode = "L_ANKLE_ANIMATOR";
ROUTE1419.fromField = "value_changed";
ROUTE1419.toNode = "Joe_l_ankle";
ROUTE1419.toField = "set_rotation";
browser.currentScene.children[129] = ROUTE1419;

let ROUTE1420 = browser.currentScene.createNode("ROUTE");
ROUTE1420.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1420.fromField = "value_changed";
ROUTE1420.toNode = "Joe_l_midtarsal";
ROUTE1420.toField = "set_rotation";
browser.currentScene.children[130] = ROUTE1420;

let ROUTE1421 = browser.currentScene.createNode("ROUTE");
ROUTE1421.fromNode = "L_subtalar_ANIMATOR";
ROUTE1421.fromField = "value_changed";
ROUTE1421.toNode = "Joe_l_subtalar";
ROUTE1421.toField = "set_rotation";
browser.currentScene.children[131] = ROUTE1421;

let ROUTE1422 = browser.currentScene.createNode("ROUTE");
ROUTE1422.fromNode = "L_metatarsal_ANIMATOR";
ROUTE1422.fromField = "value_changed";
ROUTE1422.toNode = "Joe_l_metatarsal";
ROUTE1422.toField = "set_rotation";
browser.currentScene.children[132] = ROUTE1422;

let ROUTE1423 = browser.currentScene.createNode("ROUTE");
ROUTE1423.fromNode = "R_HIP_ANIMATOR";
ROUTE1423.fromField = "value_changed";
ROUTE1423.toNode = "Joe_r_hip";
ROUTE1423.toField = "set_rotation";
browser.currentScene.children[133] = ROUTE1423;

let ROUTE1424 = browser.currentScene.createNode("ROUTE");
ROUTE1424.fromNode = "R_KNEE_ANIMATOR";
ROUTE1424.fromField = "value_changed";
ROUTE1424.toNode = "Joe_r_knee";
ROUTE1424.toField = "set_rotation";
browser.currentScene.children[134] = ROUTE1424;

let ROUTE1425 = browser.currentScene.createNode("ROUTE");
ROUTE1425.fromNode = "R_ANKLE_ANIMATOR";
ROUTE1425.fromField = "value_changed";
ROUTE1425.toNode = "Joe_r_ankle";
ROUTE1425.toField = "set_rotation";
browser.currentScene.children[135] = ROUTE1425;

let ROUTE1426 = browser.currentScene.createNode("ROUTE");
ROUTE1426.fromNode = "R_subtalar_ANIMATOR";
ROUTE1426.fromField = "value_changed";
ROUTE1426.toNode = "Joe_r_subtalar";
ROUTE1426.toField = "set_rotation";
browser.currentScene.children[136] = ROUTE1426;

let ROUTE1427 = browser.currentScene.createNode("ROUTE");
ROUTE1427.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1427.fromField = "value_changed";
ROUTE1427.toNode = "Joe_r_midtarsal";
ROUTE1427.toField = "set_rotation";
browser.currentScene.children[137] = ROUTE1427;

let ROUTE1428 = browser.currentScene.createNode("ROUTE");
ROUTE1428.fromNode = "R_metatarsal_ANIMATOR";
ROUTE1428.fromField = "value_changed";
ROUTE1428.toNode = "Joe_r_metatarsal";
ROUTE1428.toField = "set_rotation";
browser.currentScene.children[138] = ROUTE1428;

let ROUTE1429 = browser.currentScene.createNode("ROUTE");
ROUTE1429.fromNode = "VL5_ANIMATOR";
ROUTE1429.fromField = "value_changed";
ROUTE1429.toNode = "Joe_vl5";
ROUTE1429.toField = "set_rotation";
browser.currentScene.children[139] = ROUTE1429;

let ROUTE1430 = browser.currentScene.createNode("ROUTE");
ROUTE1430.fromNode = "SKULLBASE_ANIMATOR";
ROUTE1430.fromField = "value_changed";
ROUTE1430.toNode = "Joe_skullbase";
ROUTE1430.toField = "set_rotation";
browser.currentScene.children[140] = ROUTE1430;

let ROUTE1431 = browser.currentScene.createNode("ROUTE");
ROUTE1431.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE1431.fromField = "value_changed";
ROUTE1431.toNode = "Joe_l_shoulder";
ROUTE1431.toField = "set_rotation";
browser.currentScene.children[141] = ROUTE1431;

let ROUTE1432 = browser.currentScene.createNode("ROUTE");
ROUTE1432.fromNode = "L_ELBOW_ANIMATOR";
ROUTE1432.fromField = "value_changed";
ROUTE1432.toNode = "Joe_l_elbow";
ROUTE1432.toField = "set_rotation";
browser.currentScene.children[142] = ROUTE1432;

let ROUTE1433 = browser.currentScene.createNode("ROUTE");
ROUTE1433.fromNode = "L_WRIST_ANIMATOR";
ROUTE1433.fromField = "value_changed";
ROUTE1433.toNode = "Joe_l_wrist";
ROUTE1433.toField = "set_rotation";
browser.currentScene.children[143] = ROUTE1433;

let ROUTE1434 = browser.currentScene.createNode("ROUTE");
ROUTE1434.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE1434.fromField = "value_changed";
ROUTE1434.toNode = "Joe_r_shoulder";
ROUTE1434.toField = "set_rotation";
browser.currentScene.children[144] = ROUTE1434;

let ROUTE1435 = browser.currentScene.createNode("ROUTE");
ROUTE1435.fromNode = "R_ELBOW_ANIMATOR";
ROUTE1435.fromField = "value_changed";
ROUTE1435.toNode = "Joe_r_elbow";
ROUTE1435.toField = "set_rotation";
browser.currentScene.children[145] = ROUTE1435;

let ROUTE1436 = browser.currentScene.createNode("ROUTE");
ROUTE1436.fromNode = "R_WRIST_ANIMATOR";
ROUTE1436.fromField = "value_changed";
ROUTE1436.toNode = "Joe_r_wrist";
ROUTE1436.toField = "set_rotation";
browser.currentScene.children[146] = ROUTE1436;

}
main ();
