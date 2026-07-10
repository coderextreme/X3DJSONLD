const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 2));
scene.addMetaData("title", "JoeSkeletonSkinSiteSaluteWalk.x3d");
scene.addMetaData("description", "Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.");
scene.addMetaData("creator", "Joe D. Williams");
scene.addMetaData("translator", "Michalis Kamburelis");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("translator", "Joe D. Williams");
scene.addMetaData("created", "9 January 2004");
scene.addMetaData("translated", "4 December 2022");
scene.addMetaData("modified", "16 March 2026");
scene.addMetaData("TODO", "X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal");
scene.addMetaData("reference", "JoeSkeletonSkinSiteSaluteWalk.original.x3dv");
scene.addMetaData("reference", "JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv");
scene.addMetaData("reference", "JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv");
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
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d");
scene.addMetaData("license", "../license.html");
scene.addMetaData("generator", "X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html");
await browser .loadComponents (scene);
let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.info = new X3D.MFString([new X3D.SFString("By Joe for Joe"), new X3D.SFString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")]);
WorldInfo34.title = "JoeSkeletonSkinSiteSaluteWalk.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo34;

let NavigationInfo35 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo35.DEF = "HeadlightOnRevealsSkinTextureAndColors";
browser.currentScene.children[1] = NavigationInfo35;

let Background36 = browser.currentScene.createNode("Background");
Background36.groundAngle = new X3D.MFFloat([1.57]);
Background36.groundColor = new X3D.MFColor([0,0.1,0,0,0.1,0]);
Background36.skyColor = new X3D.MFColor([0,0,0.1]);
browser.currentScene.children[2] = Background36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "cordsysfloor";
Transform37.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Inline38 = browser.currentScene.createNode("Inline");
Inline38.DEF = "CoordinateAxes";
Inline38.url = new X3D.MFString([new X3D.SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), new X3D.SFString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), new X3D.SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), new X3D.SFString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")]);
Transform37YYY.children = new X3D.MFNode();

Transform37ZZZ.children[0] = Inline38;

browser.currentScene.children[3] = Transform37;

//Authoring hint: these axes are aligned within local coordinate system
let Group39 = browser.currentScene.createNode("Group");
Group39.DEF = "ViewpointGroup";
let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Front Up View";
Viewpoint40.orientation = new X3D.SFRotation([-1,-1,0,0.55]);
Viewpoint40.position = new X3D.SFVec3f([-1,2,2.5]);
Group39YYY.children = new X3D.MFNode();

Group39ZZZ.children[0] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "From Left View";
Viewpoint41.orientation = new X3D.SFRotation([0.3,1,0,-1.57]);
Viewpoint41.position = new X3D.SFVec3f([-2.5,1.5,0]);
Group39ZZZ.children[1] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.description = "Front Mid View";
Viewpoint42.position = new X3D.SFVec3f([0,0.5,1.25]);
Group39ZZZ.children[2] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.description = "Front Feet View";
Viewpoint43.position = new X3D.SFVec3f([0,0,0.75]);
Group39ZZZ.children[3] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.description = "From Right View";
Viewpoint44.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint44.position = new X3D.SFVec3f([1,1,0]);
Group39ZZZ.children[4] = Viewpoint44;

let Viewpoint45 = browser.currentScene.createNode("Viewpoint");
Viewpoint45.centerOfRotation = new X3D.SFVec3f([0,1.65,0]);
Viewpoint45.description = "Front Head View";
Viewpoint45.position = new X3D.SFVec3f([0,1.65,0.75]);
Group39ZZZ.children[5] = Viewpoint45;

let Viewpoint46 = browser.currentScene.createNode("Viewpoint");
Viewpoint46.description = "Front Mid View";
Viewpoint46.position = new X3D.SFVec3f([0,1,1.75]);
Group39ZZZ.children[6] = Viewpoint46;

let Viewpoint47 = browser.currentScene.createNode("Viewpoint");
Viewpoint47.description = "Rear View";
Viewpoint47.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint47.position = new X3D.SFVec3f([0,1.5,-4]);
Group39ZZZ.children[7] = Viewpoint47;

let Viewpoint48 = browser.currentScene.createNode("Viewpoint");
Viewpoint48.description = "Top View";
Viewpoint48.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Viewpoint48.position = new X3D.SFVec3f([0,4,0]);
Group39ZZZ.children[8] = Viewpoint48;

let Viewpoint49 = browser.currentScene.createNode("Viewpoint");
Viewpoint49.description = "Bottom View";
Viewpoint49.orientation = new X3D.SFRotation([1,0,0,1.57]);
Viewpoint49.position = new X3D.SFVec3f([0,-4,0]);
Group39ZZZ.children[9] = Viewpoint49;

let Viewpoint50 = browser.currentScene.createNode("Viewpoint");
Viewpoint50.description = "Right View";
Viewpoint50.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint50.position = new X3D.SFVec3f([4,1.5,0]);
Group39ZZZ.children[10] = Viewpoint50;

browser.currentScene.children[4] = Group39;

let Group51 = browser.currentScene.createNode("Group");
Group51.DEF = "VisualizationShapes";
Group51.visible = False;
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.scale = new X3D.SFVec3f([5,5,5]);
Transform52.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape53 = browser.currentScene.createNode("Shape");
Shape53.DEF = "jointbox";
let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.ambientIntensity = 0.5;
Material55.diffuseColor = new X3D.SFColor([0,0,0]);
Material55.shininess = 1;
material = Material55;

appearance = Appearance54;

let IndexedFaceSet56 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet56.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet56.creaseAngle = 0.1;
let Color57 = browser.currentScene.createNode("Color");
Color57.color = new X3D.MFColor([1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
color = Color57;

let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.DEF = "boxCoords";
Coordinate58.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate58;

geometry = IndexedFaceSet56;

Transform52YYY.child = new X3D.undefined();

Transform52ZZZ.child[0] = Shape53;

Group51YYY.children = new X3D.MFNode();

Group51ZZZ.children[0] = Transform52;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
Transform59.translation = new X3D.SFVec3f([-0.2,0.773,-0.016]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.DEF = "sitebox";
let Appearance61 = browser.currentScene.createNode("Appearance");
let Material62 = browser.currentScene.createNode("Material");
Material62.ambientIntensity = 1;
Material62.diffuseColor = new X3D.SFColor([1,0,0]);
Material62.emissiveColor = new X3D.SFColor([1,0,0]);
Material62.shininess = 0.7;
Material62.specularColor = new X3D.SFColor([1,0,0]);
material = Material62;

appearance = Appearance61;

let IndexedFaceSet63 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet63.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet63.creaseAngle = 0.1;
let Coordinate64 = browser.currentScene.createNode("Coordinate");
Coordinate64.USE = "boxCoords";
coord = Coordinate64;

geometry = IndexedFaceSet63;

Transform59YYY.child = new X3D.undefined();

Transform59ZZZ.child[0] = Shape60;

Group51ZZZ.children[1] = Transform59;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
Transform65.translation = new X3D.SFVec3f([0,0.2,0]);
let Shape66 = browser.currentScene.createNode("Shape");
let Appearance67 = browser.currentScene.createNode("Appearance");
Appearance67.DEF = "SegmentLine";
let Material68 = browser.currentScene.createNode("Material");
Material68.diffuseColor = new X3D.SFColor([0,1,0]);
Material68.emissiveColor = new X3D.SFColor([0,1,0]);
Material68.specularColor = new X3D.SFColor([0,1,0]);
material = Material68;

appearance = Appearance67;

let IndexedLineSet69 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet69.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new X3D.MFVec3f([0,0,0,0,0.0001,0]);
coord = Coordinate70;

geometry = IndexedLineSet69;

Transform65YYY.child = new X3D.undefined();

Transform65ZZZ.child[0] = Shape66;

Group51ZZZ.children[2] = Transform65;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
Transform71.translation = new X3D.SFVec3f([-0.2,0.773,-0.016]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.DEF = "skinsphere";
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.ambientIntensity = 0.5;
Material74.diffuseColor = new X3D.SFColor([0,1,0]);
Material74.emissiveColor = new X3D.SFColor([0,1,0]);
Material74.shininess = 1;
Material74.specularColor = new X3D.SFColor([0,1,0]);
material = Material74;

appearance = Appearance73;

let Sphere75 = browser.currentScene.createNode("Sphere");
Sphere75.radius = 0.005;
geometry = Sphere75;

Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

Group51ZZZ.children[3] = Transform71;

browser.currentScene.children[5] = Group51;

let Group76 = browser.currentScene.createNode("Group");
Group76.DEF = "SpecHumanoid";
let Group77 = browser.currentScene.createNode("Group");
Group77.DEF = "JoeISOHumanoid";
let HAnimHumanoid78 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid78.name = "Human";
HAnimHumanoid78.DEF = "Joe_Human";
HAnimHumanoid78.loa = 4;
HAnimHumanoid78.version = "2.0";
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
let MetadataSet79 = browser.currentScene.createNode("MetadataSet");
MetadataSet79.name = "HAnimHumanoid.info";
MetadataSet79.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString80 = browser.currentScene.createNode("MetadataString");
MetadataString80.name = "humanoidVersion";
MetadataString80.value = new X3D.MFString([new X3D.SFString("2.0")]);
MetadataSet79.value = new X3D.MFNode();

MetadataSet79XXX.value[0] = MetadataString80;

HAnimHumanoid78.metadata = new X3D.SFNode();

HAnimHumanoid78XXX.metadata[0] = MetadataSet79;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "humanoid_root";
HAnimJoint81.DEF = "Joe_humanoid_root";
HAnimJoint81.center = new X3D.SFVec3f([0,0.875,0]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.name = "sacrum";
HAnimSegment82.DEF = "Joe_sacrum";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.translation = new X3D.SFVec3f([0,0.875,0]);
let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "jointbox";
Transform83YYY.child = new X3D.undefined();

Transform83ZZZ.child[0] = Shape84;

HAnimSegment82YYY.children = new X3D.MFNode();

HAnimSegment82ZZZ.children[0] = Transform83;

let Shape85 = browser.currentScene.createNode("Shape");
let Appearance86 = browser.currentScene.createNode("Appearance");
Appearance86.USE = "SegmentLine";
appearance = Appearance86;

let IndexedLineSet87 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet87.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new X3D.MFVec3f([0,0.875,0,0,0.92,0]);
coord = Coordinate88;

geometry = IndexedLineSet87;

HAnimSegment82ZZZ.children[1] = Shape85;

let Transform89 = browser.currentScene.createNode("Transform");
Transform89.translation = new X3D.SFVec3f([0,0.92,0.08]);
let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "skinsphere";
Transform89YYY.child = new X3D.undefined();

Transform89ZZZ.child[0] = Shape90;

HAnimSegment82ZZZ.children[2] = Transform89;

let Transform91 = browser.currentScene.createNode("Transform");
Transform91.translation = new X3D.SFVec3f([0,0.87,-0.022]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "skinsphere";
Transform91YYY.child = new X3D.undefined();

Transform91ZZZ.child[0] = Shape92;

HAnimSegment82ZZZ.children[3] = Transform91;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimSegment82;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "sacroiliac";
HAnimJoint93.DEF = "Joe_sacroiliac";
HAnimJoint93.center = new X3D.SFVec3f([0,0.92,0]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
let HAnimSegment94 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment94.name = "pelvis";
HAnimSegment94.DEF = "Joe_pelvis";
let Transform95 = browser.currentScene.createNode("Transform");
Transform95.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Transform96 = browser.currentScene.createNode("Transform");
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "jointbox";
Transform96YYY.child = new X3D.undefined();

Transform96ZZZ.child[0] = Shape97;

Transform95YYY.children = new X3D.MFNode();

Transform95ZZZ.children[0] = Transform96;

HAnimSegment94YYY.children = new X3D.MFNode();

HAnimSegment94ZZZ.children[0] = Transform95;

let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.USE = "SegmentLine";
appearance = Appearance99;

let IndexedLineSet100 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet100.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate101 = browser.currentScene.createNode("Coordinate");
Coordinate101.point = new X3D.MFVec3f([0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
coord = Coordinate101;

geometry = IndexedLineSet100;

HAnimSegment94ZZZ.children[1] = Shape98;

let HAnimSite102 = browser.currentScene.createNode("HAnimSite");
HAnimSite102.name = "l_iliocristale_pt";
HAnimSite102.DEF = "Joe_l_iliocristale_pt";
HAnimSite102.translation = new X3D.SFVec3f([0.1425,1.065,0.0033]);
let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "sitebox";
HAnimSite102YYY.children = new X3D.MFNode();

HAnimSite102ZZZ.children[0] = Shape103;

HAnimSegment94ZZZ.children[2] = HAnimSite102;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.name = "l_trochanterion_pt";
HAnimSite104.DEF = "Joe_l_trochanterion_pt";
HAnimSite104.translation = new X3D.SFVec3f([0.15,0.9,-0.01]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "sitebox";
HAnimSite104YYY.children = new X3D.MFNode();

HAnimSite104ZZZ.children[0] = Shape105;

HAnimSegment94ZZZ.children[3] = HAnimSite104;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "r_iliocristale_pt";
HAnimSite106.DEF = "Joe_r_iliocristale_pt";
HAnimSite106.translation = new X3D.SFVec3f([-0.1425,1.065,0.0033]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "sitebox";
HAnimSite106YYY.children = new X3D.MFNode();

HAnimSite106ZZZ.children[0] = Shape107;

HAnimSegment94ZZZ.children[4] = HAnimSite106;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.name = "r_trochanterion_pt";
HAnimSite108.DEF = "Joe_r_trochanterion_pt";
HAnimSite108.translation = new X3D.SFVec3f([-0.15,0.9,-0.01]);
let Shape109 = browser.currentScene.createNode("Shape");
Shape109.USE = "sitebox";
HAnimSite108YYY.children = new X3D.MFNode();

HAnimSite108ZZZ.children[0] = Shape109;

HAnimSegment94ZZZ.children[5] = HAnimSite108;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.name = "l_asis_pt";
HAnimSite110.DEF = "Joe_l_asis_pt";
HAnimSite110.translation = new X3D.SFVec3f([0.0935,1.03,0.075]);
let Shape111 = browser.currentScene.createNode("Shape");
Shape111.USE = "sitebox";
HAnimSite110YYY.children = new X3D.MFNode();

HAnimSite110ZZZ.children[0] = Shape111;

HAnimSegment94ZZZ.children[6] = HAnimSite110;

let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.name = "r_asis_pt";
HAnimSite112.DEF = "Joe_r_asis_pt";
HAnimSite112.translation = new X3D.SFVec3f([-0.0935,1.03,0.075]);
let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "sitebox";
HAnimSite112YYY.children = new X3D.MFNode();

HAnimSite112ZZZ.children[0] = Shape113;

HAnimSegment94ZZZ.children[7] = HAnimSite112;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "l_psis_pt";
HAnimSite114.DEF = "Joe_l_psis_pt";
HAnimSite114.translation = new X3D.SFVec3f([0.0773,1.019,-0.12]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "sitebox";
HAnimSite114YYY.children = new X3D.MFNode();

HAnimSite114ZZZ.children[0] = Shape115;

HAnimSegment94ZZZ.children[8] = HAnimSite114;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.name = "r_psis_pt";
HAnimSite116.DEF = "Joe_r_psis_pt";
HAnimSite116.translation = new X3D.SFVec3f([-0.0773,1.019,-0.12]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "sitebox";
HAnimSite116YYY.children = new X3D.MFNode();

HAnimSite116ZZZ.children[0] = Shape117;

HAnimSegment94ZZZ.children[9] = HAnimSite116;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "floormarker_pt";
HAnimSite118.DEF = "Joe_floormarker_pt";
let Transform119 = browser.currentScene.createNode("Transform");
Transform119.scale = new X3D.SFVec3f([3,3,3]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "sitebox";
Transform119YYY.child = new X3D.undefined();

Transform119ZZZ.child[0] = Shape120;

HAnimSite118YYY.children = new X3D.MFNode();

HAnimSite118ZZZ.children[0] = Transform119;

HAnimSegment94ZZZ.children[10] = HAnimSite118;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "crotch_pt";
HAnimSite121.DEF = "Joe_crotch_pt";
HAnimSite121.translation = new X3D.SFVec3f([0,0.87,-0.022]);
let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "sitebox";
HAnimSite121YYY.children = new X3D.MFNode();

HAnimSite121ZZZ.children[0] = Shape122;

HAnimSegment94ZZZ.children[11] = HAnimSite121;

HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimSegment94;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "l_hip";
HAnimJoint123.DEF = "Joe_l_hip";
HAnimJoint123.center = new X3D.SFVec3f([0.1,0.92,0]);
HAnimJoint123.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint123.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "l_thigh";
HAnimSegment124.DEF = "Joe_l_thigh";
let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new X3D.SFVec3f([0.1,0.92,0]);
let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "jointbox";
Transform125YYY.child = new X3D.undefined();

Transform125ZZZ.child[0] = Shape126;

HAnimSegment124YYY.children = new X3D.MFNode();

HAnimSegment124ZZZ.children[0] = Transform125;

let Shape127 = browser.currentScene.createNode("Shape");
let Appearance128 = browser.currentScene.createNode("Appearance");
Appearance128.USE = "SegmentLine";
appearance = Appearance128;

let IndexedLineSet129 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet129.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new X3D.MFVec3f([0.1,0.92,0,0.115,0.466,0]);
coord = Coordinate130;

geometry = IndexedLineSet129;

HAnimSegment124ZZZ.children[1] = Shape127;

let Transform131 = browser.currentScene.createNode("Transform");
Transform131.translation = new X3D.SFVec3f([0.1,0.9,0.0775]);
let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "skinsphere";
Transform131YYY.child = new X3D.undefined();

Transform131ZZZ.child[0] = Shape132;

HAnimSegment124ZZZ.children[2] = Transform131;

let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new X3D.SFVec3f([0.079,0.92,-0.14]);
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "skinsphere";
Transform133YYY.child = new X3D.undefined();

Transform133ZZZ.child[0] = Shape134;

HAnimSegment124ZZZ.children[3] = Transform133;

let Transform135 = browser.currentScene.createNode("Transform");
Transform135.translation = new X3D.SFVec3f([0.171,0.65,0]);
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "skinsphere";
Transform135YYY.child = new X3D.undefined();

Transform135ZZZ.child[0] = Shape136;

HAnimSegment124ZZZ.children[4] = Transform135;

let Transform137 = browser.currentScene.createNode("Transform");
Transform137.translation = new X3D.SFVec3f([0.02,0.65,0]);
let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "skinsphere";
Transform137YYY.child = new X3D.undefined();

Transform137ZZZ.child[0] = Shape138;

HAnimSegment124ZZZ.children[5] = Transform137;

let Transform139 = browser.currentScene.createNode("Transform");
Transform139.translation = new X3D.SFVec3f([0.1,0.65,-0.08]);
let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "skinsphere";
Transform139YYY.child = new X3D.undefined();

Transform139ZZZ.child[0] = Shape140;

HAnimSegment124ZZZ.children[6] = Transform139;

let Transform141 = browser.currentScene.createNode("Transform");
Transform141.translation = new X3D.SFVec3f([0.1,0.65,0.07]);
let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "skinsphere";
Transform141YYY.child = new X3D.undefined();

Transform141ZZZ.child[0] = Shape142;

HAnimSegment124ZZZ.children[7] = Transform141;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.name = "l_knee_crease_pt";
HAnimSite143.DEF = "Joe_l_knee_crease_pt";
HAnimSite143.translation = new X3D.SFVec3f([0.115,0.466,-0.055]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "sitebox";
HAnimSite143YYY.children = new X3D.MFNode();

HAnimSite143ZZZ.children[0] = Shape144;

HAnimSegment124ZZZ.children[8] = HAnimSite143;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite145.DEF = "Joe_l_femoral_lateral_epicondyle_pt";
HAnimSite145.translation = new X3D.SFVec3f([0.17,0.466,0]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "sitebox";
HAnimSite145YYY.children = new X3D.MFNode();

HAnimSite145ZZZ.children[0] = Shape146;

HAnimSegment124ZZZ.children[9] = HAnimSite145;

let HAnimSite147 = browser.currentScene.createNode("HAnimSite");
HAnimSite147.name = "l_femoral_medial_epicondyle_pt";
HAnimSite147.DEF = "Joe_l_femoral_medial_epicondyle_pt";
HAnimSite147.translation = new X3D.SFVec3f([0.05,0.466,0]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "sitebox";
HAnimSite147YYY.children = new X3D.MFNode();

HAnimSite147ZZZ.children[0] = Shape148;

HAnimSegment124ZZZ.children[10] = HAnimSite147;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimSegment124;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "l_knee";
HAnimJoint149.DEF = "Joe_l_knee";
HAnimJoint149.center = new X3D.SFVec3f([0.115,0.466,0]);
HAnimJoint149.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint149.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.name = "l_calf";
HAnimSegment150.DEF = "Joe_l_calf";
let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new X3D.SFVec3f([0.115,0.466,0]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "jointbox";
Transform151YYY.child = new X3D.undefined();

Transform151ZZZ.child[0] = Shape152;

HAnimSegment150YYY.children = new X3D.MFNode();

HAnimSegment150ZZZ.children[0] = Transform151;

let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
Appearance154.USE = "SegmentLine";
appearance = Appearance154;

let IndexedLineSet155 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet155.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate156 = browser.currentScene.createNode("Coordinate");
Coordinate156.point = new X3D.MFVec3f([0.115,0.466,0,0.1,0.069,0]);
coord = Coordinate156;

geometry = IndexedLineSet155;

HAnimSegment150ZZZ.children[1] = Shape153;

let Transform157 = browser.currentScene.createNode("Transform");
Transform157.translation = new X3D.SFVec3f([0.115,0.466,0.06]);
let Shape158 = browser.currentScene.createNode("Shape");
Shape158.USE = "skinsphere";
Transform157YYY.child = new X3D.undefined();

Transform157ZZZ.child[0] = Shape158;

HAnimSegment150ZZZ.children[2] = Transform157;

let Transform159 = browser.currentScene.createNode("Transform");
Transform159.translation = new X3D.SFVec3f([0.115,0.466,-0.055]);
let Shape160 = browser.currentScene.createNode("Shape");
Shape160.USE = "skinsphere";
Transform159YYY.child = new X3D.undefined();

Transform159ZZZ.child[0] = Shape160;

HAnimSegment150ZZZ.children[3] = Transform159;

let Transform161 = browser.currentScene.createNode("Transform");
Transform161.translation = new X3D.SFVec3f([0.17,0.466,0]);
let Shape162 = browser.currentScene.createNode("Shape");
Shape162.USE = "skinsphere";
Transform161YYY.child = new X3D.undefined();

Transform161ZZZ.child[0] = Shape162;

HAnimSegment150ZZZ.children[4] = Transform161;

let Transform163 = browser.currentScene.createNode("Transform");
Transform163.translation = new X3D.SFVec3f([0.05,0.466,0]);
let Shape164 = browser.currentScene.createNode("Shape");
Shape164.USE = "skinsphere";
Transform163YYY.child = new X3D.undefined();

Transform163ZZZ.child[0] = Shape164;

HAnimSegment150ZZZ.children[5] = Transform163;

let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new X3D.SFVec3f([0.17,0.3,0]);
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "skinsphere";
Transform165YYY.child = new X3D.undefined();

Transform165ZZZ.child[0] = Shape166;

HAnimSegment150ZZZ.children[6] = Transform165;

let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new X3D.SFVec3f([0.06,0.3,0]);
let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "skinsphere";
Transform167YYY.child = new X3D.undefined();

Transform167ZZZ.child[0] = Shape168;

HAnimSegment150ZZZ.children[7] = Transform167;

let Transform169 = browser.currentScene.createNode("Transform");
Transform169.translation = new X3D.SFVec3f([0.1,0.3,-0.05]);
let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "skinsphere";
Transform169YYY.child = new X3D.undefined();

Transform169ZZZ.child[0] = Shape170;

HAnimSegment150ZZZ.children[8] = Transform169;

let Transform171 = browser.currentScene.createNode("Transform");
Transform171.translation = new X3D.SFVec3f([0.1,0.3,0.05]);
let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "skinsphere";
Transform171YYY.child = new X3D.undefined();

Transform171ZZZ.child[0] = Shape172;

HAnimSegment150ZZZ.children[9] = Transform171;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "l_lateral_malleolus_pt";
HAnimSite173.DEF = "Joe_l_lateral_malleolus_pt";
HAnimSite173.translation = new X3D.SFVec3f([0.15,0.07,0]);
let Shape174 = browser.currentScene.createNode("Shape");
Shape174.USE = "sitebox";
HAnimSite173YYY.children = new X3D.MFNode();

HAnimSite173ZZZ.children[0] = Shape174;

HAnimSegment150ZZZ.children[10] = HAnimSite173;

let HAnimSite175 = browser.currentScene.createNode("HAnimSite");
HAnimSite175.name = "l_medial_malleolus_pt";
HAnimSite175.DEF = "Joe_l_medial_malleolus_pt";
HAnimSite175.translation = new X3D.SFVec3f([0.085,0.086,0.0125]);
let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "sitebox";
HAnimSite175YYY.children = new X3D.MFNode();

HAnimSite175ZZZ.children[0] = Shape176;

HAnimSegment150ZZZ.children[11] = HAnimSite175;

HAnimJoint149YYY.children = new X3D.MFNode();

HAnimJoint149ZZZ.children[0] = HAnimSegment150;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "l_talocrural";
HAnimJoint177.DEF = "Joe_l_talocrural";
HAnimJoint177.center = new X3D.SFVec3f([0.115,0.069,0]);
HAnimJoint177.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint177.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.name = "l_talus";
HAnimSegment178.DEF = "Joe_l_talus";
let Transform179 = browser.currentScene.createNode("Transform");
Transform179.translation = new X3D.SFVec3f([0.115,0.069,0]);
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "jointbox";
Transform179YYY.child = new X3D.undefined();

Transform179ZZZ.child[0] = Shape180;

HAnimSegment178YYY.children = new X3D.MFNode();

HAnimSegment178ZZZ.children[0] = Transform179;

let Shape181 = browser.currentScene.createNode("Shape");
let Appearance182 = browser.currentScene.createNode("Appearance");
Appearance182.USE = "SegmentLine";
appearance = Appearance182;

let IndexedLineSet183 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet183.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate184 = browser.currentScene.createNode("Coordinate");
Coordinate184.point = new X3D.MFVec3f([0.1,0.069,0,0.115,0.031,0.03]);
coord = Coordinate184;

geometry = IndexedLineSet183;

HAnimSegment178ZZZ.children[1] = Shape181;

let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new X3D.SFVec3f([0.15,0.07,0]);
let Shape186 = browser.currentScene.createNode("Shape");
Shape186.USE = "skinsphere";
Transform185YYY.child = new X3D.undefined();

Transform185ZZZ.child[0] = Shape186;

HAnimSegment178ZZZ.children[2] = Transform185;

let Transform187 = browser.currentScene.createNode("Transform");
Transform187.translation = new X3D.SFVec3f([0.085,0.086,0.0125]);
let Shape188 = browser.currentScene.createNode("Shape");
Shape188.USE = "skinsphere";
Transform187YYY.child = new X3D.undefined();

Transform187ZZZ.child[0] = Shape188;

HAnimSegment178ZZZ.children[3] = Transform187;

let Transform189 = browser.currentScene.createNode("Transform");
Transform189.translation = new X3D.SFVec3f([0.115,0.069,-0.045]);
let Shape190 = browser.currentScene.createNode("Shape");
Shape190.USE = "skinsphere";
Transform189YYY.child = new X3D.undefined();

Transform189ZZZ.child[0] = Shape190;

HAnimSegment178ZZZ.children[4] = Transform189;

let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new X3D.SFVec3f([0.117,0.0975,0.0615]);
let Shape192 = browser.currentScene.createNode("Shape");
Shape192.USE = "skinsphere";
Transform191YYY.child = new X3D.undefined();

Transform191ZZZ.child[0] = Shape192;

HAnimSegment178ZZZ.children[5] = Transform191;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.name = "l_sphyrion_pt";
HAnimSite193.DEF = "Joe_l_sphyrion_pt";
HAnimSite193.translation = new X3D.SFVec3f([0.09,0.056,0.0125]);
let Shape194 = browser.currentScene.createNode("Shape");
Shape194.USE = "sitebox";
HAnimSite193YYY.children = new X3D.MFNode();

HAnimSite193ZZZ.children[0] = Shape194;

HAnimSegment178ZZZ.children[6] = HAnimSite193;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
HAnimSite195.name = "l_calcaneus_posterior_pt";
HAnimSite195.DEF = "Joe_l_calcaneus_posterior_pt";
HAnimSite195.translation = new X3D.SFVec3f([0.115,0.04,-0.055]);
let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "sitebox";
HAnimSite195YYY.children = new X3D.MFNode();

HAnimSite195ZZZ.children[0] = Shape196;

HAnimSegment178ZZZ.children[7] = HAnimSite195;

HAnimJoint177YYY.children = new X3D.MFNode();

HAnimJoint177ZZZ.children[0] = HAnimSegment178;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "l_tarsometatarsal_2";
HAnimJoint197.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint197.center = new X3D.SFVec3f([0.115,0.031,0.03]);
HAnimJoint197.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint197.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.name = "l_metatarsal_2";
HAnimSegment198.DEF = "Joe_l_metatarsal_2";
let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new X3D.SFVec3f([0.115,0.031,0.03]);
let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "jointbox";
Transform199YYY.child = new X3D.undefined();

Transform199ZZZ.child[0] = Shape200;

HAnimSegment198YYY.children = new X3D.MFNode();

HAnimSegment198ZZZ.children[0] = Transform199;

let Shape201 = browser.currentScene.createNode("Shape");
let Appearance202 = browser.currentScene.createNode("Appearance");
Appearance202.USE = "SegmentLine";
appearance = Appearance202;

let IndexedLineSet203 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet203.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new X3D.MFVec3f([0.115,0.031,0.03,0.115,0.037,0.09]);
coord = Coordinate204;

geometry = IndexedLineSet203;

HAnimSegment198ZZZ.children[1] = Shape201;

let Transform205 = browser.currentScene.createNode("Transform");
Transform205.translation = new X3D.SFVec3f([0.1375,0.006,-0.03]);
let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "skinsphere";
Transform205YYY.child = new X3D.undefined();

Transform205ZZZ.child[0] = Shape206;

HAnimSegment198ZZZ.children[2] = Transform205;

let Transform207 = browser.currentScene.createNode("Transform");
Transform207.translation = new X3D.SFVec3f([0.095,0.006,-0.03]);
let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "skinsphere";
Transform207YYY.child = new X3D.undefined();

Transform207ZZZ.child[0] = Shape208;

HAnimSegment198ZZZ.children[3] = Transform207;

let Transform209 = browser.currentScene.createNode("Transform");
Transform209.translation = new X3D.SFVec3f([0.115,0.015,-0.045]);
let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "skinsphere";
Transform209YYY.child = new X3D.undefined();

Transform209ZZZ.child[0] = Shape210;

HAnimSegment198ZZZ.children[4] = Transform209;

HAnimJoint197YYY.children = new X3D.MFNode();

HAnimJoint197ZZZ.children[0] = HAnimSegment198;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.name = "l_metatarsophalangeal_2";
HAnimJoint211.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint211.center = new X3D.SFVec3f([0.115,0.037,0.09]);
HAnimJoint211.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint211.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment212.DEF = "Joe_l_tarsal_proximal_phalanx_2";
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new X3D.SFVec3f([0.115,0.037,0.09]);
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "jointbox";
Transform213YYY.child = new X3D.undefined();

Transform213ZZZ.child[0] = Shape214;

HAnimSegment212YYY.children = new X3D.MFNode();

HAnimSegment212ZZZ.children[0] = Transform213;

let Shape215 = browser.currentScene.createNode("Shape");
let Appearance216 = browser.currentScene.createNode("Appearance");
Appearance216.USE = "SegmentLine";
appearance = Appearance216;

let IndexedLineSet217 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet217.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate218 = browser.currentScene.createNode("Coordinate");
Coordinate218.point = new X3D.MFVec3f([0.115,0.037,0.09,0.115,0.02,0.122]);
coord = Coordinate218;

geometry = IndexedLineSet217;

HAnimSegment212ZZZ.children[1] = Shape215;

let Transform219 = browser.currentScene.createNode("Transform");
Transform219.translation = new X3D.SFVec3f([0.115,0.06,0.1]);
let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "skinsphere";
Transform219YYY.child = new X3D.undefined();

Transform219ZZZ.child[0] = Shape220;

HAnimSegment212ZZZ.children[2] = Transform219;

let Transform221 = browser.currentScene.createNode("Transform");
Transform221.translation = new X3D.SFVec3f([0.115,0,0.07]);
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "skinsphere";
Transform221YYY.child = new X3D.undefined();

Transform221ZZZ.child[0] = Shape222;

HAnimSegment212ZZZ.children[3] = Transform221;

let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new X3D.SFVec3f([0.165,0,0.07]);
let Shape224 = browser.currentScene.createNode("Shape");
Shape224.USE = "skinsphere";
Transform223YYY.child = new X3D.undefined();

Transform223ZZZ.child[0] = Shape224;

HAnimSegment212ZZZ.children[4] = Transform223;

let Transform225 = browser.currentScene.createNode("Transform");
Transform225.translation = new X3D.SFVec3f([0.095,0,0.07]);
let Shape226 = browser.currentScene.createNode("Shape");
Shape226.USE = "skinsphere";
Transform225YYY.child = new X3D.undefined();

Transform225ZZZ.child[0] = Shape226;

HAnimSegment212ZZZ.children[5] = Transform225;

let HAnimSite227 = browser.currentScene.createNode("HAnimSite");
HAnimSite227.name = "l_metatarsal_phalanx_1_pt";
HAnimSite227.DEF = "Joe_l_metatarsal_phalanx_1_pt";
HAnimSite227.translation = new X3D.SFVec3f([0.087,0.01,0.122]);
let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "sitebox";
HAnimSite227YYY.children = new X3D.MFNode();

HAnimSite227ZZZ.children[0] = Shape228;

HAnimSegment212ZZZ.children[6] = HAnimSite227;

HAnimJoint211YYY.children = new X3D.MFNode();

HAnimJoint211ZZZ.children[0] = HAnimSegment212;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_metatarsal";
HAnimJoint229.DEF = "Joe_l_metatarsal";
HAnimJoint229.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint229.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint229.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.name = "l_tarsal_distal_phalanx_2";
HAnimSegment230.DEF = "Joe_l_tarsal_distal_phalanx_2";
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new X3D.SFVec3f([0.115,0.02,0.13]);
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "jointbox";
Transform231YYY.child = new X3D.undefined();

Transform231ZZZ.child[0] = Shape232;

HAnimSegment230YYY.children = new X3D.MFNode();

HAnimSegment230ZZZ.children[0] = Transform231;

let Shape233 = browser.currentScene.createNode("Shape");
let Appearance234 = browser.currentScene.createNode("Appearance");
Appearance234.USE = "SegmentLine";
appearance = Appearance234;

let IndexedLineSet235 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet235.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate236 = browser.currentScene.createNode("Coordinate");
Coordinate236.point = new X3D.MFVec3f([0.115,0.02,0.122,0.132,0.013,0.19]);
coord = Coordinate236;

geometry = IndexedLineSet235;

HAnimSegment230ZZZ.children[1] = Shape233;

let Transform237 = browser.currentScene.createNode("Transform");
Transform237.translation = new X3D.SFVec3f([0.115,0.04,0.13]);
let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "skinsphere";
Transform237YYY.child = new X3D.undefined();

Transform237ZZZ.child[0] = Shape238;

HAnimSegment230ZZZ.children[2] = Transform237;

let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new X3D.SFVec3f([0.125,0,0.12]);
let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "skinsphere";
Transform239YYY.child = new X3D.undefined();

Transform239ZZZ.child[0] = Shape240;

HAnimSegment230ZZZ.children[3] = Transform239;

let Transform241 = browser.currentScene.createNode("Transform");
Transform241.translation = new X3D.SFVec3f([0.165,0,0.12]);
let Shape242 = browser.currentScene.createNode("Shape");
Shape242.USE = "skinsphere";
Transform241YYY.child = new X3D.undefined();

Transform241ZZZ.child[0] = Shape242;

HAnimSegment230ZZZ.children[4] = Transform241;

let Transform243 = browser.currentScene.createNode("Transform");
Transform243.translation = new X3D.SFVec3f([0.087,0,0.122]);
let Shape244 = browser.currentScene.createNode("Shape");
Shape244.USE = "skinsphere";
Transform243YYY.child = new X3D.undefined();

Transform243ZZZ.child[0] = Shape244;

HAnimSegment230ZZZ.children[5] = Transform243;

let Transform245 = browser.currentScene.createNode("Transform");
Transform245.translation = new X3D.SFVec3f([0.09,0.012,0.188]);
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "skinsphere";
Transform245YYY.child = new X3D.undefined();

Transform245ZZZ.child[0] = Shape246;

HAnimSegment230ZZZ.children[6] = Transform245;

let Transform247 = browser.currentScene.createNode("Transform");
Transform247.translation = new X3D.SFVec3f([0.11,0.011,0.19]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "skinsphere";
Transform247YYY.child = new X3D.undefined();

Transform247ZZZ.child[0] = Shape248;

HAnimSegment230ZZZ.children[7] = Transform247;

let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new X3D.SFVec3f([0.128,0.011,0.185]);
let Shape250 = browser.currentScene.createNode("Shape");
Shape250.USE = "skinsphere";
Transform249YYY.child = new X3D.undefined();

Transform249ZZZ.child[0] = Shape250;

HAnimSegment230ZZZ.children[8] = Transform249;

let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new X3D.SFVec3f([0.142,0.011,0.178]);
let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "skinsphere";
Transform251YYY.child = new X3D.undefined();

Transform251ZZZ.child[0] = Shape252;

HAnimSegment230ZZZ.children[9] = Transform251;

let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new X3D.SFVec3f([0.154,0.01,0.168]);
let Shape254 = browser.currentScene.createNode("Shape");
Shape254.USE = "skinsphere";
Transform253YYY.child = new X3D.undefined();

Transform253ZZZ.child[0] = Shape254;

HAnimSegment230ZZZ.children[10] = Transform253;

let HAnimSite255 = browser.currentScene.createNode("HAnimSite");
HAnimSite255.name = "l_metatarsal_phalanx_5_pt";
HAnimSite255.DEF = "Joe_l_metatarsal_phalanx_5_pt";
HAnimSite255.translation = new X3D.SFVec3f([0.165,0.01,0.12]);
let Shape256 = browser.currentScene.createNode("Shape");
Shape256.USE = "sitebox";
HAnimSite255YYY.children = new X3D.MFNode();

HAnimSite255ZZZ.children[0] = Shape256;

HAnimSegment230ZZZ.children[11] = HAnimSite255;

let HAnimSite257 = browser.currentScene.createNode("HAnimSite");
HAnimSite257.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite257.DEF = "Joe_l_tarsal_distal_phalanx_2_pt";
HAnimSite257.translation = new X3D.SFVec3f([0.11,0.011,0.19]);
let Shape258 = browser.currentScene.createNode("Shape");
Shape258.USE = "sitebox";
HAnimSite257YYY.children = new X3D.MFNode();

HAnimSite257ZZZ.children[0] = Shape258;

HAnimSegment230ZZZ.children[12] = HAnimSite257;

HAnimJoint229YYY.children = new X3D.MFNode();

HAnimJoint229ZZZ.children[0] = HAnimSegment230;

HAnimJoint211ZZZ.children[1] = HAnimJoint229;

HAnimJoint197ZZZ.children[1] = HAnimJoint211;

HAnimJoint177ZZZ.children[1] = HAnimJoint197;

HAnimJoint149ZZZ.children[1] = HAnimJoint177;

HAnimJoint123ZZZ.children[1] = HAnimJoint149;

HAnimJoint93ZZZ.children[1] = HAnimJoint123;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.name = "r_hip";
HAnimJoint259.DEF = "Joe_r_hip";
HAnimJoint259.center = new X3D.SFVec3f([-0.1,0.92,0]);
HAnimJoint259.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101]);
HAnimJoint259.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimSegment260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment260.name = "r_thigh";
HAnimSegment260.DEF = "Joe_r_thigh";
let Transform261 = browser.currentScene.createNode("Transform");
Transform261.translation = new X3D.SFVec3f([-0.1,0.92,0]);
let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "jointbox";
Transform261YYY.child = new X3D.undefined();

Transform261ZZZ.child[0] = Shape262;

HAnimSegment260YYY.children = new X3D.MFNode();

HAnimSegment260ZZZ.children[0] = Transform261;

let Shape263 = browser.currentScene.createNode("Shape");
let Appearance264 = browser.currentScene.createNode("Appearance");
Appearance264.USE = "SegmentLine";
appearance = Appearance264;

let IndexedLineSet265 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet265.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new X3D.MFVec3f([-0.1,0.92,0,-0.1,0.4913,0]);
coord = Coordinate266;

geometry = IndexedLineSet265;

HAnimSegment260ZZZ.children[1] = Shape263;

let Transform267 = browser.currentScene.createNode("Transform");
Transform267.translation = new X3D.SFVec3f([-0.079,0.92,-0.14]);
let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "skinsphere";
Transform267YYY.child = new X3D.undefined();

Transform267ZZZ.child[0] = Shape268;

HAnimSegment260ZZZ.children[2] = Transform267;

let Transform269 = browser.currentScene.createNode("Transform");
Transform269.translation = new X3D.SFVec3f([-0.1,0.9,0.075]);
let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "skinsphere";
Transform269YYY.child = new X3D.undefined();

Transform269ZZZ.child[0] = Shape270;

HAnimSegment260ZZZ.children[3] = Transform269;

let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new X3D.SFVec3f([-0.171,0.65,0]);
let Shape272 = browser.currentScene.createNode("Shape");
Shape272.USE = "skinsphere";
Transform271YYY.child = new X3D.undefined();

Transform271ZZZ.child[0] = Shape272;

HAnimSegment260ZZZ.children[4] = Transform271;

let Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = new X3D.SFVec3f([-0.02,0.65,0]);
let Shape274 = browser.currentScene.createNode("Shape");
Shape274.USE = "skinsphere";
Transform273YYY.child = new X3D.undefined();

Transform273ZZZ.child[0] = Shape274;

HAnimSegment260ZZZ.children[5] = Transform273;

let Transform275 = browser.currentScene.createNode("Transform");
Transform275.translation = new X3D.SFVec3f([-0.1,0.65,-0.08]);
let Shape276 = browser.currentScene.createNode("Shape");
Shape276.USE = "skinsphere";
Transform275YYY.child = new X3D.undefined();

Transform275ZZZ.child[0] = Shape276;

HAnimSegment260ZZZ.children[6] = Transform275;

let Transform277 = browser.currentScene.createNode("Transform");
Transform277.translation = new X3D.SFVec3f([-0.1,0.65,0.07]);
let Shape278 = browser.currentScene.createNode("Shape");
Shape278.USE = "skinsphere";
Transform277YYY.child = new X3D.undefined();

Transform277ZZZ.child[0] = Shape278;

HAnimSegment260ZZZ.children[7] = Transform277;

let HAnimSite279 = browser.currentScene.createNode("HAnimSite");
HAnimSite279.name = "r_knee_crease_pt";
HAnimSite279.DEF = "Joe_r_knee_crease_pt";
HAnimSite279.translation = new X3D.SFVec3f([-0.115,0.466,-0.055]);
let Shape280 = browser.currentScene.createNode("Shape");
Shape280.USE = "sitebox";
HAnimSite279YYY.children = new X3D.MFNode();

HAnimSite279ZZZ.children[0] = Shape280;

HAnimSegment260ZZZ.children[8] = HAnimSite279;

let HAnimSite281 = browser.currentScene.createNode("HAnimSite");
HAnimSite281.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite281.DEF = "Joe_r_femoral_lateral_epicondyle_pt";
HAnimSite281.translation = new X3D.SFVec3f([-0.17,0.466,0]);
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "sitebox";
HAnimSite281YYY.children = new X3D.MFNode();

HAnimSite281ZZZ.children[0] = Shape282;

HAnimSegment260ZZZ.children[9] = HAnimSite281;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.name = "r_femoral_medial_epicondyle_pt";
HAnimSite283.DEF = "Joe_r_femoral_medial_epicondyle_pt";
HAnimSite283.translation = new X3D.SFVec3f([-0.05,0.466,0]);
let Shape284 = browser.currentScene.createNode("Shape");
Shape284.USE = "sitebox";
HAnimSite283YYY.children = new X3D.MFNode();

HAnimSite283ZZZ.children[0] = Shape284;

HAnimSegment260ZZZ.children[10] = HAnimSite283;

HAnimJoint259YYY.children = new X3D.MFNode();

HAnimJoint259ZZZ.children[0] = HAnimSegment260;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.name = "r_knee";
HAnimJoint285.DEF = "Joe_r_knee";
HAnimJoint285.center = new X3D.SFVec3f([-0.05,0.466,0]);
HAnimJoint285.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369]);
HAnimJoint285.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.name = "r_calf";
HAnimSegment286.DEF = "Joe_r_calf";
let Transform287 = browser.currentScene.createNode("Transform");
Transform287.translation = new X3D.SFVec3f([-0.1,0.4913,0]);
let Shape288 = browser.currentScene.createNode("Shape");
Shape288.USE = "jointbox";
Transform287YYY.child = new X3D.undefined();

Transform287ZZZ.child[0] = Shape288;

HAnimSegment286YYY.children = new X3D.MFNode();

HAnimSegment286ZZZ.children[0] = Transform287;

let Shape289 = browser.currentScene.createNode("Shape");
let Appearance290 = browser.currentScene.createNode("Appearance");
Appearance290.USE = "SegmentLine";
appearance = Appearance290;

let IndexedLineSet291 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet291.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate292 = browser.currentScene.createNode("Coordinate");
Coordinate292.point = new X3D.MFVec3f([-0.1,0.4913,0,-0.1,0.0712,0]);
coord = Coordinate292;

geometry = IndexedLineSet291;

HAnimSegment286ZZZ.children[1] = Shape289;

let Transform293 = browser.currentScene.createNode("Transform");
Transform293.translation = new X3D.SFVec3f([-0.115,0.466,0.06]);
let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "skinsphere";
Transform293YYY.child = new X3D.undefined();

Transform293ZZZ.child[0] = Shape294;

HAnimSegment286ZZZ.children[2] = Transform293;

let Transform295 = browser.currentScene.createNode("Transform");
Transform295.translation = new X3D.SFVec3f([-0.115,0.466,-0.055]);
let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "skinsphere";
Transform295YYY.child = new X3D.undefined();

Transform295ZZZ.child[0] = Shape296;

HAnimSegment286ZZZ.children[3] = Transform295;

let Transform297 = browser.currentScene.createNode("Transform");
Transform297.translation = new X3D.SFVec3f([-0.17,0.466,0]);
let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "skinsphere";
Transform297YYY.child = new X3D.undefined();

Transform297ZZZ.child[0] = Shape298;

HAnimSegment286ZZZ.children[4] = Transform297;

let Transform299 = browser.currentScene.createNode("Transform");
Transform299.translation = new X3D.SFVec3f([-0.05,0.466,0]);
let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "skinsphere";
Transform299YYY.child = new X3D.undefined();

Transform299ZZZ.child[0] = Shape300;

HAnimSegment286ZZZ.children[5] = Transform299;

let Transform301 = browser.currentScene.createNode("Transform");
Transform301.translation = new X3D.SFVec3f([-0.17,0.3,0]);
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "skinsphere";
Transform301YYY.child = new X3D.undefined();

Transform301ZZZ.child[0] = Shape302;

HAnimSegment286ZZZ.children[6] = Transform301;

let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new X3D.SFVec3f([-0.06,0.3,0]);
let Shape304 = browser.currentScene.createNode("Shape");
Shape304.USE = "skinsphere";
Transform303YYY.child = new X3D.undefined();

Transform303ZZZ.child[0] = Shape304;

HAnimSegment286ZZZ.children[7] = Transform303;

let Transform305 = browser.currentScene.createNode("Transform");
Transform305.translation = new X3D.SFVec3f([-0.1,0.3,-0.05]);
let Shape306 = browser.currentScene.createNode("Shape");
Shape306.USE = "skinsphere";
Transform305YYY.child = new X3D.undefined();

Transform305ZZZ.child[0] = Shape306;

HAnimSegment286ZZZ.children[8] = Transform305;

let Transform307 = browser.currentScene.createNode("Transform");
Transform307.translation = new X3D.SFVec3f([-0.1,0.3,0.05]);
let Shape308 = browser.currentScene.createNode("Shape");
Shape308.USE = "skinsphere";
Transform307YYY.child = new X3D.undefined();

Transform307ZZZ.child[0] = Shape308;

HAnimSegment286ZZZ.children[9] = Transform307;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.name = "r_lateral_malleolus_pt";
HAnimSite309.DEF = "Joe_r_lateral_malleolus_pt";
HAnimSite309.translation = new X3D.SFVec3f([-0.15,0.07,0]);
let Shape310 = browser.currentScene.createNode("Shape");
Shape310.USE = "sitebox";
HAnimSite309YYY.children = new X3D.MFNode();

HAnimSite309ZZZ.children[0] = Shape310;

HAnimSegment286ZZZ.children[10] = HAnimSite309;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "r_medial_malleolus_pt";
HAnimSite311.DEF = "Joe_r_medial_malleolus_pt";
HAnimSite311.translation = new X3D.SFVec3f([-0.085,0.086,0.0125]);
let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "sitebox";
HAnimSite311YYY.children = new X3D.MFNode();

HAnimSite311ZZZ.children[0] = Shape312;

HAnimSegment286ZZZ.children[11] = HAnimSite311;

HAnimJoint285YYY.children = new X3D.MFNode();

HAnimJoint285ZZZ.children[0] = HAnimSegment286;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.name = "r_talocrural";
HAnimJoint313.DEF = "Joe_r_talocrural";
HAnimJoint313.center = new X3D.SFVec3f([-0.115,0.069,0]);
HAnimJoint313.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint313.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.name = "r_talus";
HAnimSegment314.DEF = "Joe_r_talus";
let Transform315 = browser.currentScene.createNode("Transform");
Transform315.translation = new X3D.SFVec3f([-0.1,0.0712,0]);
let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "jointbox";
Transform315YYY.child = new X3D.undefined();

Transform315ZZZ.child[0] = Shape316;

HAnimSegment314YYY.children = new X3D.MFNode();

HAnimSegment314ZZZ.children[0] = Transform315;

let Shape317 = browser.currentScene.createNode("Shape");
let Appearance318 = browser.currentScene.createNode("Appearance");
Appearance318.USE = "SegmentLine";
appearance = Appearance318;

let IndexedLineSet319 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet319.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.point = new X3D.MFVec3f([-0.1,0.0712,0,-0.1,0.015,-0.01]);
coord = Coordinate320;

geometry = IndexedLineSet319;

HAnimSegment314ZZZ.children[1] = Shape317;

let Transform321 = browser.currentScene.createNode("Transform");
Transform321.translation = new X3D.SFVec3f([-0.15,0.07,0]);
let Shape322 = browser.currentScene.createNode("Shape");
Shape322.USE = "skinsphere";
Transform321YYY.child = new X3D.undefined();

Transform321ZZZ.child[0] = Shape322;

HAnimSegment314ZZZ.children[2] = Transform321;

let Transform323 = browser.currentScene.createNode("Transform");
Transform323.translation = new X3D.SFVec3f([-0.085,0.086,0.0125]);
let Shape324 = browser.currentScene.createNode("Shape");
Shape324.USE = "skinsphere";
Transform323YYY.child = new X3D.undefined();

Transform323ZZZ.child[0] = Shape324;

HAnimSegment314ZZZ.children[3] = Transform323;

let Transform325 = browser.currentScene.createNode("Transform");
Transform325.translation = new X3D.SFVec3f([-0.115,0.069,-0.045]);
let Shape326 = browser.currentScene.createNode("Shape");
Shape326.USE = "skinsphere";
Transform325YYY.child = new X3D.undefined();

Transform325ZZZ.child[0] = Shape326;

HAnimSegment314ZZZ.children[4] = Transform325;

let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new X3D.SFVec3f([-0.117,0.0975,0.0615]);
let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "skinsphere";
Transform327YYY.child = new X3D.undefined();

Transform327ZZZ.child[0] = Shape328;

HAnimSegment314ZZZ.children[5] = Transform327;

let HAnimSite329 = browser.currentScene.createNode("HAnimSite");
HAnimSite329.name = "r_sphyrion_pt";
HAnimSite329.DEF = "Joe_r_sphyrion_pt";
HAnimSite329.translation = new X3D.SFVec3f([-0.09,0.056,0.0125]);
let Shape330 = browser.currentScene.createNode("Shape");
Shape330.USE = "sitebox";
HAnimSite329YYY.children = new X3D.MFNode();

HAnimSite329ZZZ.children[0] = Shape330;

HAnimSegment314ZZZ.children[6] = HAnimSite329;

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.name = "r_calcaneus_posterior_pt";
HAnimSite331.DEF = "Joe_r_calcaneus_posterior_pt";
HAnimSite331.translation = new X3D.SFVec3f([-0.115,0.04,-0.055]);
let Shape332 = browser.currentScene.createNode("Shape");
Shape332.USE = "sitebox";
HAnimSite331YYY.children = new X3D.MFNode();

HAnimSite331ZZZ.children[0] = Shape332;

HAnimSegment314ZZZ.children[7] = HAnimSite331;

HAnimJoint313YYY.children = new X3D.MFNode();

HAnimJoint313ZZZ.children[0] = HAnimSegment314;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.name = "r_tarsometatarsal_2";
HAnimJoint333.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint333.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint333.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint333.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment334.name = "r_metatarsal_2";
HAnimSegment334.DEF = "Joe_r_metatarsal_2";
let Transform335 = browser.currentScene.createNode("Transform");
Transform335.translation = new X3D.SFVec3f([-0.1,0.015,-0.01]);
let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "jointbox";
Transform335YYY.child = new X3D.undefined();

Transform335ZZZ.child[0] = Shape336;

HAnimSegment334YYY.children = new X3D.MFNode();

HAnimSegment334ZZZ.children[0] = Transform335;

let Shape337 = browser.currentScene.createNode("Shape");
let Appearance338 = browser.currentScene.createNode("Appearance");
Appearance338.USE = "SegmentLine";
appearance = Appearance338;

let IndexedLineSet339 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet339.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate340 = browser.currentScene.createNode("Coordinate");
Coordinate340.point = new X3D.MFVec3f([-0.1,0.015,-0.01,-0.1,0.02,0.07]);
coord = Coordinate340;

geometry = IndexedLineSet339;

HAnimSegment334ZZZ.children[1] = Shape337;

let Transform341 = browser.currentScene.createNode("Transform");
Transform341.translation = new X3D.SFVec3f([-0.1375,0.006,-0.03]);
let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "skinsphere";
Transform341YYY.child = new X3D.undefined();

Transform341ZZZ.child[0] = Shape342;

HAnimSegment334ZZZ.children[2] = Transform341;

let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new X3D.SFVec3f([-0.095,0.006,-0.03]);
let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "skinsphere";
Transform343YYY.child = new X3D.undefined();

Transform343ZZZ.child[0] = Shape344;

HAnimSegment334ZZZ.children[3] = Transform343;

let Transform345 = browser.currentScene.createNode("Transform");
Transform345.translation = new X3D.SFVec3f([-0.095,0.006,-0.03]);
let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "skinsphere";
Transform345YYY.child = new X3D.undefined();

Transform345ZZZ.child[0] = Shape346;

HAnimSegment334ZZZ.children[4] = Transform345;

HAnimJoint333YYY.children = new X3D.MFNode();

HAnimJoint333ZZZ.children[0] = HAnimSegment334;

let HAnimJoint347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint347.name = "r_metatarsophalangeal_2";
HAnimJoint347.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint347.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint347.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint347.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment348 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment348.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment348.DEF = "Joe_r_tarsal_proximal_phalanx_2";
let Transform349 = browser.currentScene.createNode("Transform");
Transform349.translation = new X3D.SFVec3f([-0.1,0.02,0.07]);
let Shape350 = browser.currentScene.createNode("Shape");
Shape350.USE = "jointbox";
Transform349YYY.child = new X3D.undefined();

Transform349ZZZ.child[0] = Shape350;

HAnimSegment348YYY.children = new X3D.MFNode();

HAnimSegment348ZZZ.children[0] = Transform349;

let Shape351 = browser.currentScene.createNode("Shape");
let Appearance352 = browser.currentScene.createNode("Appearance");
Appearance352.USE = "SegmentLine";
appearance = Appearance352;

let IndexedLineSet353 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet353.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate354 = browser.currentScene.createNode("Coordinate");
Coordinate354.point = new X3D.MFVec3f([-0.1,0.02,0.07,-0.1,0.01,0.14]);
coord = Coordinate354;

geometry = IndexedLineSet353;

HAnimSegment348ZZZ.children[1] = Shape351;

let Transform355 = browser.currentScene.createNode("Transform");
Transform355.translation = new X3D.SFVec3f([-0.115,0.06,0.1]);
let Shape356 = browser.currentScene.createNode("Shape");
Shape356.USE = "skinsphere";
Transform355YYY.child = new X3D.undefined();

Transform355ZZZ.child[0] = Shape356;

HAnimSegment348ZZZ.children[2] = Transform355;

let Transform357 = browser.currentScene.createNode("Transform");
Transform357.translation = new X3D.SFVec3f([-0.115,0,0.07]);
let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "skinsphere";
Transform357YYY.child = new X3D.undefined();

Transform357ZZZ.child[0] = Shape358;

HAnimSegment348ZZZ.children[3] = Transform357;

let Transform359 = browser.currentScene.createNode("Transform");
Transform359.translation = new X3D.SFVec3f([-0.165,0,0.07]);
let Shape360 = browser.currentScene.createNode("Shape");
Shape360.USE = "skinsphere";
Transform359YYY.child = new X3D.undefined();

Transform359ZZZ.child[0] = Shape360;

HAnimSegment348ZZZ.children[4] = Transform359;

let Transform361 = browser.currentScene.createNode("Transform");
Transform361.translation = new X3D.SFVec3f([-0.165,0,0.07]);
let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "skinsphere";
Transform361YYY.child = new X3D.undefined();

Transform361ZZZ.child[0] = Shape362;

HAnimSegment348ZZZ.children[5] = Transform361;

let HAnimSite363 = browser.currentScene.createNode("HAnimSite");
HAnimSite363.name = "r_metatarsal_phalanx_1_pt";
HAnimSite363.DEF = "Joe_r_metatarsal_phalanx_1_pt";
HAnimSite363.translation = new X3D.SFVec3f([-0.115,0.02,0.122]);
let Shape364 = browser.currentScene.createNode("Shape");
Shape364.USE = "sitebox";
HAnimSite363YYY.children = new X3D.MFNode();

HAnimSite363ZZZ.children[0] = Shape364;

HAnimSegment348ZZZ.children[6] = HAnimSite363;

HAnimJoint347YYY.children = new X3D.MFNode();

HAnimJoint347ZZZ.children[0] = HAnimSegment348;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint365.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint365.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint365.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint365.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment366 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment366.name = "r_tarsal_distal_phalanx_2";
HAnimSegment366.DEF = "Joe_r_tarsal_distal_phalanx_2";
let Transform367 = browser.currentScene.createNode("Transform");
Transform367.translation = new X3D.SFVec3f([-0.1086,0.01,0.14]);
let Shape368 = browser.currentScene.createNode("Shape");
Shape368.USE = "jointbox";
Transform367YYY.child = new X3D.undefined();

Transform367ZZZ.child[0] = Shape368;

HAnimSegment366YYY.children = new X3D.MFNode();

HAnimSegment366ZZZ.children[0] = Transform367;

let Shape369 = browser.currentScene.createNode("Shape");
let Appearance370 = browser.currentScene.createNode("Appearance");
Appearance370.USE = "SegmentLine";
appearance = Appearance370;

let IndexedLineSet371 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet371.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate372 = browser.currentScene.createNode("Coordinate");
Coordinate372.point = new X3D.MFVec3f([-0.1,0.01,0.14,-0.1043,0.0016,0.2]);
coord = Coordinate372;

geometry = IndexedLineSet371;

HAnimSegment366ZZZ.children[1] = Shape369;

let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new X3D.SFVec3f([-0.115,0.04,0.13]);
let Shape374 = browser.currentScene.createNode("Shape");
Shape374.USE = "skinsphere";
Transform373YYY.child = new X3D.undefined();

Transform373ZZZ.child[0] = Shape374;

HAnimSegment366ZZZ.children[2] = Transform373;

let Transform375 = browser.currentScene.createNode("Transform");
Transform375.translation = new X3D.SFVec3f([-0.125,0,0.12]);
let Shape376 = browser.currentScene.createNode("Shape");
Shape376.USE = "skinsphere";
Transform375YYY.child = new X3D.undefined();

Transform375ZZZ.child[0] = Shape376;

HAnimSegment366ZZZ.children[3] = Transform375;

let Transform377 = browser.currentScene.createNode("Transform");
Transform377.translation = new X3D.SFVec3f([-0.165,0,0.12]);
let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "skinsphere";
Transform377YYY.child = new X3D.undefined();

Transform377ZZZ.child[0] = Shape378;

HAnimSegment366ZZZ.children[4] = Transform377;

let Transform379 = browser.currentScene.createNode("Transform");
Transform379.translation = new X3D.SFVec3f([-0.087,0,0.122]);
let Shape380 = browser.currentScene.createNode("Shape");
Shape380.USE = "skinsphere";
Transform379YYY.child = new X3D.undefined();

Transform379ZZZ.child[0] = Shape380;

HAnimSegment366ZZZ.children[5] = Transform379;

let Transform381 = browser.currentScene.createNode("Transform");
Transform381.translation = new X3D.SFVec3f([-0.09,0.012,0.188]);
let Shape382 = browser.currentScene.createNode("Shape");
Shape382.USE = "skinsphere";
Transform381YYY.child = new X3D.undefined();

Transform381ZZZ.child[0] = Shape382;

HAnimSegment366ZZZ.children[6] = Transform381;

let Transform383 = browser.currentScene.createNode("Transform");
Transform383.translation = new X3D.SFVec3f([-0.11,0.011,0.19]);
let Shape384 = browser.currentScene.createNode("Shape");
Shape384.USE = "skinsphere";
Transform383YYY.child = new X3D.undefined();

Transform383ZZZ.child[0] = Shape384;

HAnimSegment366ZZZ.children[7] = Transform383;

let Transform385 = browser.currentScene.createNode("Transform");
Transform385.translation = new X3D.SFVec3f([-0.128,0.011,0.185]);
let Shape386 = browser.currentScene.createNode("Shape");
Shape386.USE = "skinsphere";
Transform385YYY.child = new X3D.undefined();

Transform385ZZZ.child[0] = Shape386;

HAnimSegment366ZZZ.children[8] = Transform385;

let Transform387 = browser.currentScene.createNode("Transform");
Transform387.translation = new X3D.SFVec3f([-0.142,0.011,0.178]);
let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "skinsphere";
Transform387YYY.child = new X3D.undefined();

Transform387ZZZ.child[0] = Shape388;

HAnimSegment366ZZZ.children[9] = Transform387;

let Transform389 = browser.currentScene.createNode("Transform");
Transform389.translation = new X3D.SFVec3f([-0.154,0.01,0.168]);
let Shape390 = browser.currentScene.createNode("Shape");
Shape390.USE = "skinsphere";
Transform389YYY.child = new X3D.undefined();

Transform389ZZZ.child[0] = Shape390;

HAnimSegment366ZZZ.children[10] = Transform389;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.name = "r_metatarsal_phalanx_5_pt";
HAnimSite391.DEF = "Joe_r_metatarsal_phalanx_5_pt";
HAnimSite391.translation = new X3D.SFVec3f([-0.165,0.01,0.12]);
let Shape392 = browser.currentScene.createNode("Shape");
Shape392.USE = "sitebox";
HAnimSite391YYY.children = new X3D.MFNode();

HAnimSite391ZZZ.children[0] = Shape392;

HAnimSegment366ZZZ.children[11] = HAnimSite391;

let HAnimSite393 = browser.currentScene.createNode("HAnimSite");
HAnimSite393.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite393.DEF = "Joe_r_tarsal_distal_phalanx_2_pt";
HAnimSite393.translation = new X3D.SFVec3f([-0.11,0.011,0.19]);
let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "sitebox";
HAnimSite393YYY.children = new X3D.MFNode();

HAnimSite393ZZZ.children[0] = Shape394;

HAnimSegment366ZZZ.children[12] = HAnimSite393;

HAnimJoint365YYY.children = new X3D.MFNode();

HAnimJoint365ZZZ.children[0] = HAnimSegment366;

HAnimJoint347ZZZ.children[1] = HAnimJoint365;

HAnimJoint333ZZZ.children[1] = HAnimJoint347;

HAnimJoint313ZZZ.children[1] = HAnimJoint333;

HAnimJoint285ZZZ.children[1] = HAnimJoint313;

HAnimJoint259ZZZ.children[1] = HAnimJoint285;

HAnimJoint93ZZZ.children[2] = HAnimJoint259;

HAnimJoint81ZZZ.children[1] = HAnimJoint93;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.name = "vl5";
HAnimJoint395.DEF = "Joe_vl5";
HAnimJoint395.center = new X3D.SFVec3f([0,1.045,-0.095]);
HAnimJoint395.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint395.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment396 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment396.name = "toPelvis";
HAnimSegment396.DEF = "Joe_toPelvis";
let Shape397 = browser.currentScene.createNode("Shape");
let Appearance398 = browser.currentScene.createNode("Appearance");
Appearance398.USE = "SegmentLine";
appearance = Appearance398;

let IndexedLineSet399 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet399.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate400 = browser.currentScene.createNode("Coordinate");
Coordinate400.point = new X3D.MFVec3f([0,1.045,-0.095,0,0.9149,0.0016]);
coord = Coordinate400;

geometry = IndexedLineSet399;

HAnimSegment396YYY.children = new X3D.MFNode();

HAnimSegment396ZZZ.children[0] = Shape397;

HAnimJoint395YYY.children = new X3D.MFNode();

HAnimJoint395ZZZ.children[0] = HAnimSegment396;

let HAnimSegment401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment401.name = "l5";
HAnimSegment401.DEF = "Joe_l5";
let Shape402 = browser.currentScene.createNode("Shape");
let Appearance403 = browser.currentScene.createNode("Appearance");
Appearance403.USE = "SegmentLine";
appearance = Appearance403;

let IndexedLineSet404 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet404.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new X3D.MFVec3f([0,1.045,-0.095,0,1.068,-0.085]);
coord = Coordinate405;

geometry = IndexedLineSet404;

HAnimSegment401YYY.children = new X3D.MFNode();

HAnimSegment401ZZZ.children[0] = Shape402;

let HAnimSite406 = browser.currentScene.createNode("HAnimSite");
HAnimSite406.name = "waist_preferred_posterior_pt";
HAnimSite406.DEF = "Joe_waist_preferred_posterior_pt";
HAnimSite406.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
let Shape407 = browser.currentScene.createNode("Shape");
Shape407.USE = "sitebox";
HAnimSite406YYY.children = new X3D.MFNode();

HAnimSite406ZZZ.children[0] = Shape407;

HAnimSegment401ZZZ.children[1] = HAnimSite406;

let HAnimSite408 = browser.currentScene.createNode("HAnimSite");
HAnimSite408.name = "navel_pt";
HAnimSite408.DEF = "Joe_navel_pt";
HAnimSite408.translation = new X3D.SFVec3f([0,1.0723,0.09]);
let Shape409 = browser.currentScene.createNode("Shape");
Shape409.USE = "sitebox";
HAnimSite408YYY.children = new X3D.MFNode();

HAnimSite408ZZZ.children[0] = Shape409;

HAnimSegment401ZZZ.children[2] = HAnimSite408;

HAnimJoint395ZZZ.children[1] = HAnimSegment401;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.name = "vl4";
HAnimJoint410.DEF = "Joe_vl4";
HAnimJoint410.center = new X3D.SFVec3f([0,1.068,-0.085]);
let HAnimSegment411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment411.name = "l4";
HAnimSegment411.DEF = "Joe_l4";
let Shape412 = browser.currentScene.createNode("Shape");
let Appearance413 = browser.currentScene.createNode("Appearance");
Appearance413.USE = "SegmentLine";
appearance = Appearance413;

let IndexedLineSet414 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet414.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate415 = browser.currentScene.createNode("Coordinate");
Coordinate415.point = new X3D.MFVec3f([0,1.068,-0.085,0,1.092,-0.0725]);
coord = Coordinate415;

geometry = IndexedLineSet414;

HAnimSegment411YYY.children = new X3D.MFNode();

HAnimSegment411ZZZ.children[0] = Shape412;

let Transform416 = browser.currentScene.createNode("Transform");
Transform416.translation = new X3D.SFVec3f([0,1.068,-0.085]);
let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "jointbox";
Transform416YYY.child = new X3D.undefined();

Transform416ZZZ.child[0] = Shape417;

HAnimSegment411ZZZ.children[1] = Transform416;

HAnimJoint410YYY.children = new X3D.MFNode();

HAnimJoint410ZZZ.children[0] = HAnimSegment411;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.name = "vl3";
HAnimJoint418.DEF = "Joe_vl3";
HAnimJoint418.center = new X3D.SFVec3f([0,1.092,-0.0725]);
let HAnimSegment419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment419.name = "l3";
HAnimSegment419.DEF = "Joe_l3";
let Shape420 = browser.currentScene.createNode("Shape");
let Appearance421 = browser.currentScene.createNode("Appearance");
Appearance421.USE = "SegmentLine";
appearance = Appearance421;

let IndexedLineSet422 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet422.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate423 = browser.currentScene.createNode("Coordinate");
Coordinate423.point = new X3D.MFVec3f([0,1.092,-0.0725,0,1.12,-0.065]);
coord = Coordinate423;

geometry = IndexedLineSet422;

HAnimSegment419YYY.children = new X3D.MFNode();

HAnimSegment419ZZZ.children[0] = Shape420;

let Transform424 = browser.currentScene.createNode("Transform");
Transform424.translation = new X3D.SFVec3f([0,1.092,-0.0725]);
let Shape425 = browser.currentScene.createNode("Shape");
Shape425.USE = "jointbox";
Transform424YYY.child = new X3D.undefined();

Transform424ZZZ.child[0] = Shape425;

HAnimSegment419ZZZ.children[1] = Transform424;

HAnimJoint418YYY.children = new X3D.MFNode();

HAnimJoint418ZZZ.children[0] = HAnimSegment419;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.name = "vl2";
HAnimJoint426.DEF = "Joe_vl2";
HAnimJoint426.center = new X3D.SFVec3f([0,1.12,-0.065]);
HAnimJoint426.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint426.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.7,1,0.8]);
let HAnimSegment427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment427.name = "l2";
HAnimSegment427.DEF = "Joe_l2";
let Shape428 = browser.currentScene.createNode("Shape");
let Appearance429 = browser.currentScene.createNode("Appearance");
Appearance429.USE = "SegmentLine";
appearance = Appearance429;

let IndexedLineSet430 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet430.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate431 = browser.currentScene.createNode("Coordinate");
Coordinate431.point = new X3D.MFVec3f([0,1.12,-0.065,0,1.1459,-0.0625]);
coord = Coordinate431;

geometry = IndexedLineSet430;

HAnimSegment427YYY.children = new X3D.MFNode();

HAnimSegment427ZZZ.children[0] = Shape428;

let Transform432 = browser.currentScene.createNode("Transform");
Transform432.translation = new X3D.SFVec3f([0,1.12,-0.065]);
let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "jointbox";
Transform432YYY.child = new X3D.undefined();

Transform432ZZZ.child[0] = Shape433;

HAnimSegment427ZZZ.children[1] = Transform432;

let Transform434 = browser.currentScene.createNode("Transform");
Transform434.translation = new X3D.SFVec3f([-0.087,1.19,-0.09]);
let Shape435 = browser.currentScene.createNode("Shape");
Shape435.USE = "skinsphere";
Transform434YYY.child = new X3D.undefined();

Transform434ZZZ.child[0] = Shape435;

HAnimSegment427ZZZ.children[2] = Transform434;

let Transform436 = browser.currentScene.createNode("Transform");
Transform436.translation = new X3D.SFVec3f([0.087,1.19,-0.09]);
let Shape437 = browser.currentScene.createNode("Shape");
Shape437.USE = "skinsphere";
Transform436YYY.child = new X3D.undefined();

Transform436ZZZ.child[0] = Shape437;

HAnimSegment427ZZZ.children[3] = Transform436;

let Transform438 = browser.currentScene.createNode("Transform");
Transform438.translation = new X3D.SFVec3f([0.172,1.32,-0.03]);
let Shape439 = browser.currentScene.createNode("Shape");
Shape439.USE = "skinsphere";
Transform438YYY.child = new X3D.undefined();

Transform438ZZZ.child[0] = Shape439;

HAnimSegment427ZZZ.children[4] = Transform438;

let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new X3D.SFVec3f([-0.172,1.32,-0.03]);
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "skinsphere";
Transform440YYY.child = new X3D.undefined();

Transform440ZZZ.child[0] = Shape441;

HAnimSegment427ZZZ.children[5] = Transform440;

let Transform442 = browser.currentScene.createNode("Transform");
Transform442.translation = new X3D.SFVec3f([0.15,1.23,-0.015]);
let Shape443 = browser.currentScene.createNode("Shape");
Shape443.USE = "skinsphere";
Transform442YYY.child = new X3D.undefined();

Transform442ZZZ.child[0] = Shape443;

HAnimSegment427ZZZ.children[6] = Transform442;

let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new X3D.SFVec3f([-0.15,1.23,-0.015]);
let Shape445 = browser.currentScene.createNode("Shape");
Shape445.USE = "skinsphere";
Transform444YYY.child = new X3D.undefined();

Transform444ZZZ.child[0] = Shape445;

HAnimSegment427ZZZ.children[7] = Transform444;

let HAnimSite446 = browser.currentScene.createNode("HAnimSite");
HAnimSite446.name = "r_rib10_pt";
HAnimSite446.DEF = "Joe_r_rib10_pt";
HAnimSite446.translation = new X3D.SFVec3f([-0.087,1.19,0.09]);
let Shape447 = browser.currentScene.createNode("Shape");
Shape447.USE = "sitebox";
HAnimSite446YYY.children = new X3D.MFNode();

HAnimSite446ZZZ.children[0] = Shape447;

HAnimSegment427ZZZ.children[8] = HAnimSite446;

let HAnimSite448 = browser.currentScene.createNode("HAnimSite");
HAnimSite448.name = "l_rib10_pt";
HAnimSite448.DEF = "Joe_l_rib10_pt";
HAnimSite448.translation = new X3D.SFVec3f([0.087,1.19,0.09]);
let Shape449 = browser.currentScene.createNode("Shape");
Shape449.USE = "sitebox";
HAnimSite448YYY.children = new X3D.MFNode();

HAnimSite448ZZZ.children[0] = Shape449;

HAnimSegment427ZZZ.children[9] = HAnimSite448;

let HAnimSite450 = browser.currentScene.createNode("HAnimSite");
HAnimSite450.name = "rib10_midspine_pt";
HAnimSite450.DEF = "Joe_rib10_midspine_pt";
HAnimSite450.translation = new X3D.SFVec3f([0,1.1908,-0.1113]);
let Shape451 = browser.currentScene.createNode("Shape");
Shape451.USE = "sitebox";
HAnimSite450YYY.children = new X3D.MFNode();

HAnimSite450ZZZ.children[0] = Shape451;

HAnimSegment427ZZZ.children[10] = HAnimSite450;

HAnimJoint426YYY.children = new X3D.MFNode();

HAnimJoint426ZZZ.children[0] = HAnimSegment427;

let HAnimJoint452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint452.name = "vl1";
HAnimJoint452.DEF = "Joe_vl1";
HAnimJoint452.center = new X3D.SFVec3f([0,1.1459,-0.0625]);
let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.name = "l1";
HAnimSegment453.DEF = "Joe_l1";
let Shape454 = browser.currentScene.createNode("Shape");
let Appearance455 = browser.currentScene.createNode("Appearance");
Appearance455.USE = "SegmentLine";
appearance = Appearance455;

let IndexedLineSet456 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet456.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate457 = browser.currentScene.createNode("Coordinate");
Coordinate457.point = new X3D.MFVec3f([0,1.1459,-0.0625,0,1.179,-0.068]);
coord = Coordinate457;

geometry = IndexedLineSet456;

HAnimSegment453YYY.children = new X3D.MFNode();

HAnimSegment453ZZZ.children[0] = Shape454;

let Transform458 = browser.currentScene.createNode("Transform");
Transform458.translation = new X3D.SFVec3f([0,1.1459,-0.0625]);
let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "jointbox";
Transform458YYY.child = new X3D.undefined();

Transform458ZZZ.child[0] = Shape459;

HAnimSegment453ZZZ.children[1] = Transform458;

HAnimJoint452YYY.children = new X3D.MFNode();

HAnimJoint452ZZZ.children[0] = HAnimSegment453;

let HAnimJoint460 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint460.name = "vt12";
HAnimJoint460.DEF = "Joe_vt12";
HAnimJoint460.center = new X3D.SFVec3f([0,1.179,-0.068]);
let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.name = "t12";
HAnimSegment461.DEF = "Joe_t12";
let Shape462 = browser.currentScene.createNode("Shape");
let Appearance463 = browser.currentScene.createNode("Appearance");
Appearance463.USE = "SegmentLine";
appearance = Appearance463;

let IndexedLineSet464 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet464.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate465 = browser.currentScene.createNode("Coordinate");
Coordinate465.point = new X3D.MFVec3f([0,1.179,-0.068,0,1.242,-0.09]);
coord = Coordinate465;

geometry = IndexedLineSet464;

HAnimSegment461YYY.children = new X3D.MFNode();

HAnimSegment461ZZZ.children[0] = Shape462;

let Transform466 = browser.currentScene.createNode("Transform");
Transform466.translation = new X3D.SFVec3f([0,1.179,-0.068]);
let Shape467 = browser.currentScene.createNode("Shape");
Shape467.USE = "jointbox";
Transform466YYY.child = new X3D.undefined();

Transform466ZZZ.child[0] = Shape467;

HAnimSegment461ZZZ.children[1] = Transform466;

HAnimJoint460YYY.children = new X3D.MFNode();

HAnimJoint460ZZZ.children[0] = HAnimSegment461;

let HAnimJoint468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint468.name = "vt11";
HAnimJoint468.DEF = "Joe_vt11";
HAnimJoint468.center = new X3D.SFVec3f([0,1.2679,-0.081]);
let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.name = "t11";
HAnimSegment469.DEF = "Joe_t11";
let Shape470 = browser.currentScene.createNode("Shape");
let Appearance471 = browser.currentScene.createNode("Appearance");
Appearance471.USE = "SegmentLine";
appearance = Appearance471;

let IndexedLineSet472 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet472.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate473 = browser.currentScene.createNode("Coordinate");
Coordinate473.point = new X3D.MFVec3f([0,1.2145,-0.0755,0,1.242,-0.09]);
coord = Coordinate473;

geometry = IndexedLineSet472;

HAnimSegment469YYY.children = new X3D.MFNode();

HAnimSegment469ZZZ.children[0] = Shape470;

let Transform474 = browser.currentScene.createNode("Transform");
Transform474.translation = new X3D.SFVec3f([0,1.2145,-0.0755]);
let Shape475 = browser.currentScene.createNode("Shape");
Shape475.USE = "jointbox";
Transform474YYY.child = new X3D.undefined();

Transform474ZZZ.child[0] = Shape475;

HAnimSegment469ZZZ.children[1] = Transform474;

HAnimJoint468YYY.children = new X3D.MFNode();

HAnimJoint468ZZZ.children[0] = HAnimSegment469;

let HAnimJoint476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint476.name = "vt10";
HAnimJoint476.DEF = "Joe_vt10";
HAnimJoint476.center = new X3D.SFVec3f([0,1.242,-0.09]);
HAnimJoint476.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint476.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.name = "t10";
HAnimSegment477.DEF = "Joe_t10";
let Shape478 = browser.currentScene.createNode("Shape");
let Appearance479 = browser.currentScene.createNode("Appearance");
Appearance479.USE = "SegmentLine";
appearance = Appearance479;

let IndexedLineSet480 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet480.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate481 = browser.currentScene.createNode("Coordinate");
Coordinate481.point = new X3D.MFVec3f([0,1.242,-0.09,0,1.268,-0.1]);
coord = Coordinate481;

geometry = IndexedLineSet480;

HAnimSegment477YYY.children = new X3D.MFNode();

HAnimSegment477ZZZ.children[0] = Shape478;

let Transform482 = browser.currentScene.createNode("Transform");
Transform482.translation = new X3D.SFVec3f([0,1.242,-0.09]);
let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "jointbox";
Transform482YYY.child = new X3D.undefined();

Transform482ZZZ.child[0] = Shape483;

HAnimSegment477ZZZ.children[1] = Transform482;

let HAnimSite484 = browser.currentScene.createNode("HAnimSite");
HAnimSite484.name = "substernale_pt";
HAnimSite484.DEF = "Joe_substernale_pt";
HAnimSite484.translation = new X3D.SFVec3f([0,1.25,0.113]);
let Shape485 = browser.currentScene.createNode("Shape");
Shape485.USE = "sitebox";
HAnimSite484YYY.children = new X3D.MFNode();

HAnimSite484ZZZ.children[0] = Shape485;

HAnimSegment477ZZZ.children[2] = HAnimSite484;

HAnimJoint476YYY.children = new X3D.MFNode();

HAnimJoint476ZZZ.children[0] = HAnimSegment477;

let HAnimJoint486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint486.name = "vt9";
HAnimJoint486.DEF = "Joe_vt9";
HAnimJoint486.center = new X3D.SFVec3f([0,1.268,-0.1]);
HAnimJoint486.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint486.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.name = "t9";
HAnimSegment487.DEF = "Joe_t9";
let Shape488 = browser.currentScene.createNode("Shape");
let Appearance489 = browser.currentScene.createNode("Appearance");
Appearance489.USE = "SegmentLine";
appearance = Appearance489;

let IndexedLineSet490 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet490.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate491 = browser.currentScene.createNode("Coordinate");
Coordinate491.point = new X3D.MFVec3f([0,1.268,-0.1,0,1.294,-0.11]);
coord = Coordinate491;

geometry = IndexedLineSet490;

HAnimSegment487YYY.children = new X3D.MFNode();

HAnimSegment487ZZZ.children[0] = Shape488;

let Transform492 = browser.currentScene.createNode("Transform");
Transform492.translation = new X3D.SFVec3f([0,1.268,-0.1]);
let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "jointbox";
Transform492YYY.child = new X3D.undefined();

Transform492ZZZ.child[0] = Shape493;

HAnimSegment487ZZZ.children[1] = Transform492;

let HAnimSite494 = browser.currentScene.createNode("HAnimSite");
HAnimSite494.name = "r_thelion_pt";
HAnimSite494.DEF = "Joe_r_thelion_pt";
HAnimSite494.translation = new X3D.SFVec3f([-0.1135,1.318,0.095]);
let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "sitebox";
HAnimSite494YYY.children = new X3D.MFNode();

HAnimSite494ZZZ.children[0] = Shape495;

HAnimSegment487ZZZ.children[2] = HAnimSite494;

let HAnimSite496 = browser.currentScene.createNode("HAnimSite");
HAnimSite496.name = "l_thelion_pt";
HAnimSite496.DEF = "Joe_l_thelion_pt";
HAnimSite496.translation = new X3D.SFVec3f([0.1135,1.318,0.095]);
let Shape497 = browser.currentScene.createNode("Shape");
Shape497.USE = "sitebox";
HAnimSite496YYY.children = new X3D.MFNode();

HAnimSite496ZZZ.children[0] = Shape497;

HAnimSegment487ZZZ.children[3] = HAnimSite496;

HAnimJoint486YYY.children = new X3D.MFNode();

HAnimJoint486ZZZ.children[0] = HAnimSegment487;

let HAnimJoint498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint498.name = "vt8";
HAnimJoint498.DEF = "Joe_vt8";
HAnimJoint498.center = new X3D.SFVec3f([0,1.294,-0.11]);
let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.name = "t8";
HAnimSegment499.DEF = "Joe_t8";
let Shape500 = browser.currentScene.createNode("Shape");
let Appearance501 = browser.currentScene.createNode("Appearance");
Appearance501.USE = "SegmentLine";
appearance = Appearance501;

let IndexedLineSet502 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet502.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate503 = browser.currentScene.createNode("Coordinate");
Coordinate503.point = new X3D.MFVec3f([0,1.294,-0.11,0,1.352,-0.12]);
coord = Coordinate503;

geometry = IndexedLineSet502;

HAnimSegment499YYY.children = new X3D.MFNode();

HAnimSegment499ZZZ.children[0] = Shape500;

let Transform504 = browser.currentScene.createNode("Transform");
Transform504.translation = new X3D.SFVec3f([0,1.294,-0.11]);
let Shape505 = browser.currentScene.createNode("Shape");
Shape505.USE = "jointbox";
Transform504YYY.child = new X3D.undefined();

Transform504ZZZ.child[0] = Shape505;

HAnimSegment499ZZZ.children[1] = Transform504;

HAnimJoint498YYY.children = new X3D.MFNode();

HAnimJoint498ZZZ.children[0] = HAnimSegment499;

let HAnimJoint506 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint506.name = "vt7";
HAnimJoint506.DEF = "Joe_vt7";
HAnimJoint506.center = new X3D.SFVec3f([0,1.323,-0.1155]);
let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.name = "t7";
HAnimSegment507.DEF = "Joe_t7";
let Shape508 = browser.currentScene.createNode("Shape");
let Appearance509 = browser.currentScene.createNode("Appearance");
Appearance509.USE = "SegmentLine";
appearance = Appearance509;

let IndexedLineSet510 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet510.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate511 = browser.currentScene.createNode("Coordinate");
Coordinate511.point = new X3D.MFVec3f([0,1.352,-0.12,0,1.381,-0.1235]);
coord = Coordinate511;

geometry = IndexedLineSet510;

HAnimSegment507YYY.children = new X3D.MFNode();

HAnimSegment507ZZZ.children[0] = Shape508;

let Transform512 = browser.currentScene.createNode("Transform");
Transform512.translation = new X3D.SFVec3f([0,1.323,-0.1155]);
let Shape513 = browser.currentScene.createNode("Shape");
Shape513.USE = "jointbox";
Transform512YYY.child = new X3D.undefined();

Transform512ZZZ.child[0] = Shape513;

HAnimSegment507ZZZ.children[1] = Transform512;

HAnimJoint506YYY.children = new X3D.MFNode();

HAnimJoint506ZZZ.children[0] = HAnimSegment507;

let HAnimJoint514 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint514.name = "vt6";
HAnimJoint514.DEF = "Joe_vt6";
HAnimJoint514.center = new X3D.SFVec3f([0,1.352,-0.12]);
let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.name = "t6";
HAnimSegment515.DEF = "Joe_t6";
let Shape516 = browser.currentScene.createNode("Shape");
let Appearance517 = browser.currentScene.createNode("Appearance");
Appearance517.USE = "SegmentLine";
appearance = Appearance517;

let IndexedLineSet518 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet518.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new X3D.MFVec3f([0,1.381,-0.1235,0,1.41,-0.1235]);
coord = Coordinate519;

geometry = IndexedLineSet518;

HAnimSegment515YYY.children = new X3D.MFNode();

HAnimSegment515ZZZ.children[0] = Shape516;

let Transform520 = browser.currentScene.createNode("Transform");
Transform520.translation = new X3D.SFVec3f([0,1.352,-0.12]);
let Shape521 = browser.currentScene.createNode("Shape");
Shape521.USE = "jointbox";
Transform520YYY.child = new X3D.undefined();

Transform520ZZZ.child[0] = Shape521;

HAnimSegment515ZZZ.children[1] = Transform520;

HAnimJoint514YYY.children = new X3D.MFNode();

HAnimJoint514ZZZ.children[0] = HAnimSegment515;

let HAnimJoint522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint522.name = "vt5";
HAnimJoint522.DEF = "Joe_vt5";
HAnimJoint522.center = new X3D.SFVec3f([0,1.381,-0.1235]);
let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.name = "t5";
HAnimSegment523.DEF = "Joe_t5";
let Shape524 = browser.currentScene.createNode("Shape");
let Appearance525 = browser.currentScene.createNode("Appearance");
Appearance525.USE = "SegmentLine";
appearance = Appearance525;

let IndexedLineSet526 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet526.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate527 = browser.currentScene.createNode("Coordinate");
Coordinate527.point = new X3D.MFVec3f([0,1.41,-0.1235,0,1.438,-0.12]);
coord = Coordinate527;

geometry = IndexedLineSet526;

HAnimSegment523YYY.children = new X3D.MFNode();

HAnimSegment523ZZZ.children[0] = Shape524;

let Transform528 = browser.currentScene.createNode("Transform");
Transform528.translation = new X3D.SFVec3f([0,1.381,-0.1235]);
let Shape529 = browser.currentScene.createNode("Shape");
Shape529.USE = "jointbox";
Transform528YYY.child = new X3D.undefined();

Transform528ZZZ.child[0] = Shape529;

HAnimSegment523ZZZ.children[1] = Transform528;

HAnimJoint522YYY.children = new X3D.MFNode();

HAnimJoint522ZZZ.children[0] = HAnimSegment523;

let HAnimJoint530 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint530.name = "vt4";
HAnimJoint530.DEF = "Joe_vt4";
HAnimJoint530.center = new X3D.SFVec3f([0,1.41,-0.1235]);
HAnimJoint530.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint530.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment531.name = "t4";
HAnimSegment531.DEF = "Joe_t4";
let Shape532 = browser.currentScene.createNode("Shape");
let Appearance533 = browser.currentScene.createNode("Appearance");
Appearance533.USE = "SegmentLine";
appearance = Appearance533;

let IndexedLineSet534 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet534.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate535 = browser.currentScene.createNode("Coordinate");
Coordinate535.point = new X3D.MFVec3f([0,1.41,-0.1235,0,1.438,-0.12]);
coord = Coordinate535;

geometry = IndexedLineSet534;

HAnimSegment531YYY.children = new X3D.MFNode();

HAnimSegment531ZZZ.children[0] = Shape532;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new X3D.SFVec3f([0,1.41,-0.1235]);
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "jointbox";
Transform536YYY.child = new X3D.undefined();

Transform536ZZZ.child[0] = Shape537;

HAnimSegment531ZZZ.children[1] = Transform536;

let Transform538 = browser.currentScene.createNode("Transform");
Transform538.translation = new X3D.SFVec3f([0,1.41,-0.145]);
let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "skinsphere";
Transform538YYY.child = new X3D.undefined();

Transform538ZZZ.child[0] = Shape539;

HAnimSegment531ZZZ.children[2] = Transform538;

HAnimJoint530YYY.children = new X3D.MFNode();

HAnimJoint530ZZZ.children[0] = HAnimSegment531;

let HAnimJoint540 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint540.name = "vt3";
HAnimJoint540.DEF = "Joe_vt3";
HAnimJoint540.center = new X3D.SFVec3f([0,1.438,-0.12]);
let HAnimSegment541 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment541.name = "t3";
HAnimSegment541.DEF = "Joe_t3";
let Shape542 = browser.currentScene.createNode("Shape");
let Appearance543 = browser.currentScene.createNode("Appearance");
Appearance543.USE = "SegmentLine";
appearance = Appearance543;

let IndexedLineSet544 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet544.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate545 = browser.currentScene.createNode("Coordinate");
Coordinate545.point = new X3D.MFVec3f([0,1.438,-0.12,0,1.468,-0.105]);
coord = Coordinate545;

geometry = IndexedLineSet544;

HAnimSegment541YYY.children = new X3D.MFNode();

HAnimSegment541ZZZ.children[0] = Shape542;

let Transform546 = browser.currentScene.createNode("Transform");
Transform546.translation = new X3D.SFVec3f([0,1.438,-0.12]);
let Shape547 = browser.currentScene.createNode("Shape");
Shape547.USE = "jointbox";
Transform546YYY.child = new X3D.undefined();

Transform546ZZZ.child[0] = Shape547;

HAnimSegment541ZZZ.children[1] = Transform546;

HAnimJoint540YYY.children = new X3D.MFNode();

HAnimJoint540ZZZ.children[0] = HAnimSegment541;

let HAnimJoint548 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint548.name = "vt2";
HAnimJoint548.DEF = "Joe_vt2";
HAnimJoint548.center = new X3D.SFVec3f([0,1.468,-0.105]);
let HAnimSegment549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment549.name = "t2";
HAnimSegment549.DEF = "Joe_t2";
let Shape550 = browser.currentScene.createNode("Shape");
let Appearance551 = browser.currentScene.createNode("Appearance");
Appearance551.USE = "SegmentLine";
appearance = Appearance551;

let IndexedLineSet552 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet552.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate553 = browser.currentScene.createNode("Coordinate");
Coordinate553.point = new X3D.MFVec3f([0,1.468,-0.105,0,1.497,-0.09]);
coord = Coordinate553;

geometry = IndexedLineSet552;

HAnimSegment549YYY.children = new X3D.MFNode();

HAnimSegment549ZZZ.children[0] = Shape550;

let Transform554 = browser.currentScene.createNode("Transform");
Transform554.translation = new X3D.SFVec3f([0,1.468,-0.105]);
let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "jointbox";
Transform554YYY.child = new X3D.undefined();

Transform554ZZZ.child[0] = Shape555;

HAnimSegment549ZZZ.children[1] = Transform554;

HAnimJoint548YYY.children = new X3D.MFNode();

HAnimJoint548ZZZ.children[0] = HAnimSegment549;

let HAnimJoint556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint556.name = "vt1";
HAnimJoint556.DEF = "Joe_vt1";
HAnimJoint556.center = new X3D.SFVec3f([0,1.497,-0.09]);
HAnimJoint556.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint556.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment557 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment557.name = "t1";
HAnimSegment557.DEF = "Joe_t1";
let Shape558 = browser.currentScene.createNode("Shape");
let Appearance559 = browser.currentScene.createNode("Appearance");
Appearance559.USE = "SegmentLine";
appearance = Appearance559;

let IndexedLineSet560 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet560.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate561 = browser.currentScene.createNode("Coordinate");
Coordinate561.point = new X3D.MFVec3f([0,1.497,-0.09,0,1.525,-0.072]);
coord = Coordinate561;

geometry = IndexedLineSet560;

HAnimSegment557YYY.children = new X3D.MFNode();

HAnimSegment557ZZZ.children[0] = Shape558;

let Transform562 = browser.currentScene.createNode("Transform");
Transform562.translation = new X3D.SFVec3f([0,1.497,-0.09]);
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "jointbox";
Transform562YYY.child = new X3D.undefined();

Transform562ZZZ.child[0] = Shape563;

HAnimSegment557ZZZ.children[1] = Transform562;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.name = "suprasternale_pt";
HAnimSite564.DEF = "Joe_suprasternale_pt";
HAnimSite564.translation = new X3D.SFVec3f([0,1.44,0.03]);
let Shape565 = browser.currentScene.createNode("Shape");
Shape565.USE = "sitebox";
HAnimSite564YYY.children = new X3D.MFNode();

HAnimSite564ZZZ.children[0] = Shape565;

HAnimSegment557ZZZ.children[2] = HAnimSite564;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.name = "cervicale_pt";
HAnimSite566.DEF = "Joe_cervicale_pt";
HAnimSite566.translation = new X3D.SFVec3f([0,1.53,-0.084]);
let Shape567 = browser.currentScene.createNode("Shape");
Shape567.USE = "sitebox";
HAnimSite566YYY.children = new X3D.MFNode();

HAnimSite566ZZZ.children[0] = Shape567;

HAnimSegment557ZZZ.children[3] = HAnimSite566;

HAnimJoint556YYY.children = new X3D.MFNode();

HAnimJoint556ZZZ.children[0] = HAnimSegment557;

let HAnimJoint568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint568.name = "vc7";
HAnimJoint568.DEF = "Joe_vc7";
HAnimJoint568.center = new X3D.SFVec3f([0,1.525,-0.072]);
HAnimJoint568.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint568.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment569 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment569.name = "c7";
HAnimSegment569.DEF = "Joe_c7";
let Shape570 = browser.currentScene.createNode("Shape");
let Appearance571 = browser.currentScene.createNode("Appearance");
Appearance571.USE = "SegmentLine";
appearance = Appearance571;

let IndexedLineSet572 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet572.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate573 = browser.currentScene.createNode("Coordinate");
Coordinate573.point = new X3D.MFVec3f([0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]);
coord = Coordinate573;

geometry = IndexedLineSet572;

HAnimSegment569YYY.children = new X3D.MFNode();

HAnimSegment569ZZZ.children[0] = Shape570;

let Transform574 = browser.currentScene.createNode("Transform");
Transform574.translation = new X3D.SFVec3f([0,1.525,-0.072]);
let Shape575 = browser.currentScene.createNode("Shape");
Shape575.USE = "jointbox";
Transform574YYY.child = new X3D.undefined();

Transform574ZZZ.child[0] = Shape575;

HAnimSegment569ZZZ.children[1] = Transform574;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.name = "r_neck_base_pt";
HAnimSite576.DEF = "Joe_r_neck_base_pt";
HAnimSite576.translation = new X3D.SFVec3f([-0.0646,1.5149,-0.0385]);
let Shape577 = browser.currentScene.createNode("Shape");
Shape577.USE = "sitebox";
HAnimSite576YYY.children = new X3D.MFNode();

HAnimSite576ZZZ.children[0] = Shape577;

HAnimSegment569ZZZ.children[2] = HAnimSite576;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.name = "l_neck_base_pt";
HAnimSite578.DEF = "Joe_l_neck_base_pt";
HAnimSite578.translation = new X3D.SFVec3f([0.0646,1.5149,-0.0385]);
let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "sitebox";
HAnimSite578YYY.children = new X3D.MFNode();

HAnimSite578ZZZ.children[0] = Shape579;

HAnimSegment569ZZZ.children[3] = HAnimSite578;

HAnimJoint568YYY.children = new X3D.MFNode();

HAnimJoint568ZZZ.children[0] = HAnimSegment569;

let HAnimJoint580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint580.name = "vc6";
HAnimJoint580.DEF = "Joe_vc6";
HAnimJoint580.center = new X3D.SFVec3f([0,1.54,-0.05]);
let HAnimSegment581 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment581.name = "c6";
HAnimSegment581.DEF = "Joe_c6";
let Shape582 = browser.currentScene.createNode("Shape");
let Appearance583 = browser.currentScene.createNode("Appearance");
Appearance583.USE = "SegmentLine";
appearance = Appearance583;

let IndexedLineSet584 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet584.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate585 = browser.currentScene.createNode("Coordinate");
Coordinate585.point = new X3D.MFVec3f([0,1.54,-0.05,0,1.5675,-0.0256]);
coord = Coordinate585;

geometry = IndexedLineSet584;

HAnimSegment581YYY.children = new X3D.MFNode();

HAnimSegment581ZZZ.children[0] = Shape582;

let Transform586 = browser.currentScene.createNode("Transform");
Transform586.translation = new X3D.SFVec3f([0,1.54,-0.05]);
let Shape587 = browser.currentScene.createNode("Shape");
Shape587.USE = "jointbox";
Transform586YYY.child = new X3D.undefined();

Transform586ZZZ.child[0] = Shape587;

HAnimSegment581ZZZ.children[1] = Transform586;

HAnimJoint580YYY.children = new X3D.MFNode();

HAnimJoint580ZZZ.children[0] = HAnimSegment581;

let HAnimJoint588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint588.name = "vc5";
HAnimJoint588.DEF = "Joe_vc5";
HAnimJoint588.center = new X3D.SFVec3f([0,1.552,-0.035]);
let HAnimSegment589 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment589.name = "c5";
HAnimSegment589.DEF = "Joe_c5";
let Transform590 = browser.currentScene.createNode("Transform");
Transform590.translation = new X3D.SFVec3f([0,1.552,-0.035]);
let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "jointbox";
Transform590YYY.child = new X3D.undefined();

Transform590ZZZ.child[0] = Shape591;

HAnimSegment589YYY.children = new X3D.MFNode();

HAnimSegment589ZZZ.children[0] = Transform590;

let Shape592 = browser.currentScene.createNode("Shape");
let Appearance593 = browser.currentScene.createNode("Appearance");
Appearance593.USE = "SegmentLine";
appearance = Appearance593;

let IndexedLineSet594 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet594.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new X3D.MFVec3f([0,1.5675,-0.0256,0,1.5823,-0.0185]);
coord = Coordinate595;

geometry = IndexedLineSet594;

HAnimSegment589ZZZ.children[1] = Shape592;

HAnimJoint588YYY.children = new X3D.MFNode();

HAnimJoint588ZZZ.children[0] = HAnimSegment589;

let HAnimJoint596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint596.name = "vc4";
HAnimJoint596.DEF = "Joe_vc4";
HAnimJoint596.center = new X3D.SFVec3f([0,1.5675,-0.0256]);
let HAnimSegment597 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment597.name = "c4";
HAnimSegment597.DEF = "Joe_c4";
let Shape598 = browser.currentScene.createNode("Shape");
let Appearance599 = browser.currentScene.createNode("Appearance");
Appearance599.USE = "SegmentLine";
appearance = Appearance599;

let IndexedLineSet600 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet600.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate601 = browser.currentScene.createNode("Coordinate");
Coordinate601.point = new X3D.MFVec3f([0,1.5823,-0.0185,0,1.595,-0.0175]);
coord = Coordinate601;

geometry = IndexedLineSet600;

HAnimSegment597YYY.children = new X3D.MFNode();

HAnimSegment597ZZZ.children[0] = Shape598;

let Transform602 = browser.currentScene.createNode("Transform");
Transform602.translation = new X3D.SFVec3f([0,1.5675,-0.0256]);
let Shape603 = browser.currentScene.createNode("Shape");
Shape603.USE = "jointbox";
Transform602YYY.child = new X3D.undefined();

Transform602ZZZ.child[0] = Shape603;

HAnimSegment597ZZZ.children[1] = Transform602;

HAnimJoint596YYY.children = new X3D.MFNode();

HAnimJoint596ZZZ.children[0] = HAnimSegment597;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.name = "vc3";
HAnimJoint604.DEF = "Joe_vc3";
HAnimJoint604.center = new X3D.SFVec3f([0,1.5823,-0.0185]);
let HAnimSegment605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment605.name = "c3";
HAnimSegment605.DEF = "Joe_c3";
let Shape606 = browser.currentScene.createNode("Shape");
let Appearance607 = browser.currentScene.createNode("Appearance");
Appearance607.USE = "SegmentLine";
appearance = Appearance607;

let IndexedLineSet608 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet608.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.point = new X3D.MFVec3f([0,1.595,-0.0175,0,1.61,-0.015]);
coord = Coordinate609;

geometry = IndexedLineSet608;

HAnimSegment605YYY.children = new X3D.MFNode();

HAnimSegment605ZZZ.children[0] = Shape606;

let Transform610 = browser.currentScene.createNode("Transform");
Transform610.translation = new X3D.SFVec3f([0,1.5823,-0.0185]);
let Shape611 = browser.currentScene.createNode("Shape");
Shape611.USE = "jointbox";
Transform610YYY.child = new X3D.undefined();

Transform610ZZZ.child[0] = Shape611;

HAnimSegment605ZZZ.children[1] = Transform610;

HAnimJoint604YYY.children = new X3D.MFNode();

HAnimJoint604ZZZ.children[0] = HAnimSegment605;

let HAnimJoint612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint612.name = "vc2";
HAnimJoint612.DEF = "Joe_vc2";
HAnimJoint612.center = new X3D.SFVec3f([0,1.595,-0.0175]);
let HAnimSegment613 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment613.name = "c2";
HAnimSegment613.DEF = "Joe_c2";
let Shape614 = browser.currentScene.createNode("Shape");
let Appearance615 = browser.currentScene.createNode("Appearance");
Appearance615.USE = "SegmentLine";
appearance = Appearance615;

let IndexedLineSet616 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet616.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate617 = browser.currentScene.createNode("Coordinate");
Coordinate617.point = new X3D.MFVec3f([0,1.61,-0.015,0,1.6144,-0.0034]);
coord = Coordinate617;

geometry = IndexedLineSet616;

HAnimSegment613YYY.children = new X3D.MFNode();

HAnimSegment613ZZZ.children[0] = Shape614;

let Transform618 = browser.currentScene.createNode("Transform");
Transform618.translation = new X3D.SFVec3f([0,1.595,-0.0175]);
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "jointbox";
Transform618YYY.child = new X3D.undefined();

Transform618ZZZ.child[0] = Shape619;

HAnimSegment613ZZZ.children[1] = Transform618;

HAnimJoint612YYY.children = new X3D.MFNode();

HAnimJoint612ZZZ.children[0] = HAnimSegment613;

let HAnimJoint620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint620.name = "vc1";
HAnimJoint620.DEF = "Joe_vc1";
HAnimJoint620.center = new X3D.SFVec3f([0,1.61,-0.015]);
let HAnimSegment621 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment621.name = "c1";
HAnimSegment621.DEF = "Joe_c1";
let Shape622 = browser.currentScene.createNode("Shape");
let Appearance623 = browser.currentScene.createNode("Appearance");
Appearance623.USE = "SegmentLine";
appearance = Appearance623;

let IndexedLineSet624 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet624.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate625 = browser.currentScene.createNode("Coordinate");
Coordinate625.point = new X3D.MFVec3f([0,1.6144,-0.0034,0,1.63,-0.01]);
coord = Coordinate625;

geometry = IndexedLineSet624;

HAnimSegment621YYY.children = new X3D.MFNode();

HAnimSegment621ZZZ.children[0] = Shape622;

let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new X3D.SFVec3f([0,1.61,-0.015]);
let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "jointbox";
Transform626YYY.child = new X3D.undefined();

Transform626ZZZ.child[0] = Shape627;

HAnimSegment621ZZZ.children[1] = Transform626;

HAnimJoint620YYY.children = new X3D.MFNode();

HAnimJoint620ZZZ.children[0] = HAnimSegment621;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.name = "skullbase";
HAnimJoint628.DEF = "Joe_skullbase";
HAnimJoint628.center = new X3D.SFVec3f([0,1.63,-0.01]);
HAnimJoint628.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint628.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment629 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment629.name = "skull";
HAnimSegment629.DEF = "Joe_skull";
let Shape630 = browser.currentScene.createNode("Shape");
let Appearance631 = browser.currentScene.createNode("Appearance");
Appearance631.USE = "SegmentLine";
appearance = Appearance631;

let IndexedLineSet632 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet632.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1]);
let Coordinate633 = browser.currentScene.createNode("Coordinate");
Coordinate633.point = new X3D.MFVec3f([0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]);
coord = Coordinate633;

geometry = IndexedLineSet632;

HAnimSegment629YYY.children = new X3D.MFNode();

HAnimSegment629ZZZ.children[0] = Shape630;

let Transform634 = browser.currentScene.createNode("Transform");
Transform634.translation = new X3D.SFVec3f([0,1.63,-0.01]);
let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "jointbox";
Transform634YYY.child = new X3D.undefined();

Transform634ZZZ.child[0] = Shape635;

HAnimSegment629ZZZ.children[1] = Transform634;

let HAnimSite636 = browser.currentScene.createNode("HAnimSite");
HAnimSite636.name = "skull_vertex_tip";
HAnimSite636.DEF = "Joe_skull_vertex_tip";
HAnimSite636.translation = new X3D.SFVec3f([0,1.77,0]);
let Shape637 = browser.currentScene.createNode("Shape");
Shape637.USE = "sitebox";
HAnimSite636YYY.children = new X3D.MFNode();

HAnimSite636ZZZ.children[0] = Shape637;

HAnimSegment629ZZZ.children[2] = HAnimSite636;

let HAnimSite638 = browser.currentScene.createNode("HAnimSite");
HAnimSite638.name = "sellion_pt";
HAnimSite638.DEF = "Joe_sellion_pt";
HAnimSite638.translation = new X3D.SFVec3f([0,1.665,0.09]);
let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "sitebox";
HAnimSite638YYY.children = new X3D.MFNode();

HAnimSite638ZZZ.children[0] = Shape639;

HAnimSegment629ZZZ.children[3] = HAnimSite638;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.name = "r_infraorbitale_pt";
HAnimSite640.DEF = "Joe_r_infraorbitale_pt";
HAnimSite640.translation = new X3D.SFVec3f([-0.033,1.62,0.087]);
let Shape641 = browser.currentScene.createNode("Shape");
Shape641.USE = "sitebox";
HAnimSite640YYY.children = new X3D.MFNode();

HAnimSite640ZZZ.children[0] = Shape641;

HAnimSegment629ZZZ.children[4] = HAnimSite640;

let HAnimSite642 = browser.currentScene.createNode("HAnimSite");
HAnimSite642.name = "l_infraorbitale_pt";
HAnimSite642.DEF = "Joe_l_infraorbitale_pt";
HAnimSite642.translation = new X3D.SFVec3f([0.033,1.62,0.087]);
let Shape643 = browser.currentScene.createNode("Shape");
Shape643.USE = "sitebox";
HAnimSite642YYY.children = new X3D.MFNode();

HAnimSite642ZZZ.children[0] = Shape643;

HAnimSegment629ZZZ.children[5] = HAnimSite642;

let HAnimSite644 = browser.currentScene.createNode("HAnimSite");
HAnimSite644.name = "supramenton_pt";
HAnimSite644.DEF = "Joe_supramenton_pt";
HAnimSite644.translation = new X3D.SFVec3f([0,1.55,0.097]);
let Shape645 = browser.currentScene.createNode("Shape");
Shape645.USE = "sitebox";
HAnimSite644YYY.children = new X3D.MFNode();

HAnimSite644ZZZ.children[0] = Shape645;

HAnimSegment629ZZZ.children[6] = HAnimSite644;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.name = "r_tragion_pt";
HAnimSite646.DEF = "Joe_r_tragion_pt";
HAnimSite646.translation = new X3D.SFVec3f([-0.077,1.64,-0.01]);
let Shape647 = browser.currentScene.createNode("Shape");
Shape647.USE = "sitebox";
HAnimSite646YYY.children = new X3D.MFNode();

HAnimSite646ZZZ.children[0] = Shape647;

HAnimSegment629ZZZ.children[7] = HAnimSite646;

let HAnimSite648 = browser.currentScene.createNode("HAnimSite");
HAnimSite648.name = "r_gonion_pt";
HAnimSite648.DEF = "Joe_r_gonion_pt";
HAnimSite648.translation = new X3D.SFVec3f([-0.052,1.58,0.015]);
let Shape649 = browser.currentScene.createNode("Shape");
Shape649.USE = "sitebox";
HAnimSite648YYY.children = new X3D.MFNode();

HAnimSite648ZZZ.children[0] = Shape649;

HAnimSegment629ZZZ.children[8] = HAnimSite648;

let HAnimSite650 = browser.currentScene.createNode("HAnimSite");
HAnimSite650.name = "l_tragion_pt";
HAnimSite650.DEF = "Joe_l_tragion_pt";
HAnimSite650.translation = new X3D.SFVec3f([0.077,1.64,-0.01]);
let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "sitebox";
HAnimSite650YYY.children = new X3D.MFNode();

HAnimSite650ZZZ.children[0] = Shape651;

HAnimSegment629ZZZ.children[9] = HAnimSite650;

let HAnimSite652 = browser.currentScene.createNode("HAnimSite");
HAnimSite652.name = "l_gonion_pt";
HAnimSite652.DEF = "Joe_l_gonion_pt";
HAnimSite652.translation = new X3D.SFVec3f([0.0631,1.58,0.015]);
let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "sitebox";
HAnimSite652YYY.children = new X3D.MFNode();

HAnimSite652ZZZ.children[0] = Shape653;

HAnimSegment629ZZZ.children[10] = HAnimSite652;

let HAnimSite654 = browser.currentScene.createNode("HAnimSite");
HAnimSite654.name = "nuchale_pt";
HAnimSite654.DEF = "Joe_nuchale_pt";
HAnimSite654.translation = new X3D.SFVec3f([0,1.625,-0.0925]);
let Shape655 = browser.currentScene.createNode("Shape");
Shape655.USE = "sitebox";
HAnimSite654YYY.children = new X3D.MFNode();

HAnimSite654ZZZ.children[0] = Shape655;

HAnimSegment629ZZZ.children[11] = HAnimSite654;

HAnimJoint628YYY.children = new X3D.MFNode();

HAnimJoint628ZZZ.children[0] = HAnimSegment629;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.name = "l_eyeball_joint";
HAnimJoint656.DEF = "Joe_l_eyeball_joint";
HAnimJoint656.center = new X3D.SFVec3f([0.034,1.659,0.06]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "l_eyeball";
HAnimSegment657.DEF = "Joe_l_eyeball";
let Shape658 = browser.currentScene.createNode("Shape");
let Appearance659 = browser.currentScene.createNode("Appearance");
Appearance659.USE = "SegmentLine";
appearance = Appearance659;

let IndexedLineSet660 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet660.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate661 = browser.currentScene.createNode("Coordinate");
Coordinate661.point = new X3D.MFVec3f([0.034,1.655,0.065,-0.034,1.655,0.065]);
coord = Coordinate661;

geometry = IndexedLineSet660;

HAnimSegment657YYY.children = new X3D.MFNode();

HAnimSegment657ZZZ.children[0] = Shape658;

let Transform662 = browser.currentScene.createNode("Transform");
Transform662.scale = new X3D.SFVec3f([1,1,1.4]);
Transform662.translation = new X3D.SFVec3f([0.034,1.655,0.065]);
let Shape663 = browser.currentScene.createNode("Shape");
Shape663.USE = "jointbox";
Transform662YYY.child = new X3D.undefined();

Transform662ZZZ.child[0] = Shape663;

HAnimSegment657ZZZ.children[1] = Transform662;

HAnimJoint656YYY.children = new X3D.MFNode();

HAnimJoint656ZZZ.children[0] = HAnimSegment657;

HAnimJoint628ZZZ.children[1] = HAnimJoint656;

let HAnimJoint664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint664.name = "r_eyeball_joint";
HAnimJoint664.DEF = "Joe_r_eyeball_joint";
HAnimJoint664.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
let HAnimSegment665 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment665.name = "r_eyeball";
HAnimSegment665.DEF = "Joe_r_eyeball";
let Shape666 = browser.currentScene.createNode("Shape");
let Appearance667 = browser.currentScene.createNode("Appearance");
Appearance667.USE = "SegmentLine";
appearance = Appearance667;

let IndexedLineSet668 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet668.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate669 = browser.currentScene.createNode("Coordinate");
Coordinate669.point = new X3D.MFVec3f([0.034,1.655,0.065,-0.034,1.655,0.065]);
coord = Coordinate669;

geometry = IndexedLineSet668;

HAnimSegment665YYY.children = new X3D.MFNode();

HAnimSegment665ZZZ.children[0] = Shape666;

let Transform670 = browser.currentScene.createNode("Transform");
Transform670.scale = new X3D.SFVec3f([1,1,1.4]);
Transform670.translation = new X3D.SFVec3f([-0.034,1.655,0.065]);
let Shape671 = browser.currentScene.createNode("Shape");
Shape671.USE = "jointbox";
Transform670YYY.child = new X3D.undefined();

Transform670ZZZ.child[0] = Shape671;

HAnimSegment665ZZZ.children[1] = Transform670;

HAnimJoint664YYY.children = new X3D.MFNode();

HAnimJoint664ZZZ.children[0] = HAnimSegment665;

HAnimJoint628ZZZ.children[2] = HAnimJoint664;

HAnimJoint620ZZZ.children[1] = HAnimJoint628;

HAnimJoint612ZZZ.children[1] = HAnimJoint620;

HAnimJoint604ZZZ.children[1] = HAnimJoint612;

HAnimJoint596ZZZ.children[1] = HAnimJoint604;

HAnimJoint588ZZZ.children[1] = HAnimJoint596;

HAnimJoint580ZZZ.children[1] = HAnimJoint588;

HAnimJoint568ZZZ.children[1] = HAnimJoint580;

HAnimJoint556ZZZ.children[1] = HAnimJoint568;

let HAnimJoint672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint672.name = "l_sternoclavicular";
HAnimJoint672.DEF = "Joe_l_sternoclavicular";
HAnimJoint672.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint672.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint672.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment673 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment673.name = "l_clavicle";
HAnimSegment673.DEF = "Joe_l_clavicle";
let Shape674 = browser.currentScene.createNode("Shape");
let Appearance675 = browser.currentScene.createNode("Appearance");
Appearance675.USE = "SegmentLine";
appearance = Appearance675;

let IndexedLineSet676 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet676.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate677 = browser.currentScene.createNode("Coordinate");
Coordinate677.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate677;

geometry = IndexedLineSet676;

HAnimSegment673YYY.children = new X3D.MFNode();

HAnimSegment673ZZZ.children[0] = Shape674;

let Transform678 = browser.currentScene.createNode("Transform");
Transform678.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Shape679 = browser.currentScene.createNode("Shape");
Shape679.USE = "jointbox";
Transform678YYY.child = new X3D.undefined();

Transform678ZZZ.child[0] = Shape679;

HAnimSegment673ZZZ.children[1] = Transform678;

let HAnimSite680 = browser.currentScene.createNode("HAnimSite");
HAnimSite680.name = "l_clavicle_pt";
HAnimSite680.DEF = "Joe_l_clavicle_pt";
HAnimSite680.translation = new X3D.SFVec3f([0.03,1.46,0.035]);
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "sitebox";
HAnimSite680YYY.children = new X3D.MFNode();

HAnimSite680ZZZ.children[0] = Shape681;

HAnimSegment673ZZZ.children[2] = HAnimSite680;

HAnimJoint672YYY.children = new X3D.MFNode();

HAnimJoint672ZZZ.children[0] = HAnimSegment673;

let HAnimJoint682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint682.name = "l_acromioclavicular";
HAnimJoint682.DEF = "Joe_l_acromioclavicular";
HAnimJoint682.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint682.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint682.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment683.name = "l_scapula";
HAnimSegment683.DEF = "Joe_l_scapula";
let Shape684 = browser.currentScene.createNode("Shape");
let Appearance685 = browser.currentScene.createNode("Appearance");
Appearance685.USE = "SegmentLine";
appearance = Appearance685;

let IndexedLineSet686 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet686.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate687 = browser.currentScene.createNode("Coordinate");
Coordinate687.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2,1.44,-0.04]);
coord = Coordinate687;

geometry = IndexedLineSet686;

HAnimSegment683YYY.children = new X3D.MFNode();

HAnimSegment683ZZZ.children[0] = Shape684;

let Transform688 = browser.currentScene.createNode("Transform");
Transform688.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Shape689 = browser.currentScene.createNode("Shape");
Shape689.USE = "jointbox";
Transform688YYY.child = new X3D.undefined();

Transform688ZZZ.child[0] = Shape689;

HAnimSegment683ZZZ.children[1] = Transform688;

let Transform690 = browser.currentScene.createNode("Transform");
Transform690.translation = new X3D.SFVec3f([0.11,1.427,-0.1375]);
let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "skinsphere";
Transform690YYY.child = new X3D.undefined();

Transform690ZZZ.child[0] = Shape691;

HAnimSegment683ZZZ.children[2] = Transform690;

let HAnimSite692 = browser.currentScene.createNode("HAnimSite");
HAnimSite692.name = "l_acromion_pt";
HAnimSite692.DEF = "Joe_l_acromion_pt";
HAnimSite692.translation = new X3D.SFVec3f([0.175,1.4825,-0.06]);
let Shape693 = browser.currentScene.createNode("Shape");
Shape693.USE = "sitebox";
HAnimSite692YYY.children = new X3D.MFNode();

HAnimSite692ZZZ.children[0] = Shape693;

HAnimSegment683ZZZ.children[3] = HAnimSite692;

let HAnimSite694 = browser.currentScene.createNode("HAnimSite");
HAnimSite694.name = "l_axilla_proximal_pt";
HAnimSite694.DEF = "Joe_l_axilla_proximal_pt";
HAnimSite694.translation = new X3D.SFVec3f([0.17,1.38,0.007]);
let Shape695 = browser.currentScene.createNode("Shape");
Shape695.USE = "sitebox";
HAnimSite694YYY.children = new X3D.MFNode();

HAnimSite694ZZZ.children[0] = Shape695;

HAnimSegment683ZZZ.children[4] = HAnimSite694;

let HAnimSite696 = browser.currentScene.createNode("HAnimSite");
HAnimSite696.name = "l_axilla_distal_pt";
HAnimSite696.DEF = "Joe_l_axilla_distal_pt";
HAnimSite696.translation = new X3D.SFVec3f([0.16,1.38,-0.125]);
let Shape697 = browser.currentScene.createNode("Shape");
Shape697.USE = "sitebox";
HAnimSite696YYY.children = new X3D.MFNode();

HAnimSite696ZZZ.children[0] = Shape697;

HAnimSegment683ZZZ.children[5] = HAnimSite696;

HAnimJoint682YYY.children = new X3D.MFNode();

HAnimJoint682ZZZ.children[0] = HAnimSegment683;

let HAnimJoint698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint698.name = "l_shoulder";
HAnimJoint698.DEF = "Joe_l_shoulder";
HAnimJoint698.center = new X3D.SFVec3f([0.2,1.44,-0.04]);
HAnimJoint698.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint698.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment699 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment699.name = "l_upperarm";
HAnimSegment699.DEF = "Joe_l_upperarm";
let Shape700 = browser.currentScene.createNode("Shape");
let Appearance701 = browser.currentScene.createNode("Appearance");
Appearance701.USE = "SegmentLine";
appearance = Appearance701;

let IndexedLineSet702 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet702.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate703 = browser.currentScene.createNode("Coordinate");
Coordinate703.point = new X3D.MFVec3f([0.2029,1.44,-0.0387,0.2,1.1388,-0.04]);
coord = Coordinate703;

geometry = IndexedLineSet702;

HAnimSegment699YYY.children = new X3D.MFNode();

HAnimSegment699ZZZ.children[0] = Shape700;

let Transform704 = browser.currentScene.createNode("Transform");
Transform704.translation = new X3D.SFVec3f([0.2,1.44,-0.04]);
let Shape705 = browser.currentScene.createNode("Shape");
Shape705.USE = "jointbox";
Transform704YYY.child = new X3D.undefined();

Transform704ZZZ.child[0] = Shape705;

HAnimSegment699ZZZ.children[1] = Transform704;

let Transform706 = browser.currentScene.createNode("Transform");
Transform706.translation = new X3D.SFVec3f([0.235,1.42,-0.0625]);
let Shape707 = browser.currentScene.createNode("Shape");
Shape707.USE = "skinsphere";
Transform706YYY.child = new X3D.undefined();

Transform706ZZZ.child[0] = Shape707;

HAnimSegment699ZZZ.children[2] = Transform706;

let Transform708 = browser.currentScene.createNode("Transform");
Transform708.translation = new X3D.SFVec3f([0.25,1.27,-0.04]);
let Shape709 = browser.currentScene.createNode("Shape");
Shape709.USE = "skinsphere";
Transform708YYY.child = new X3D.undefined();

Transform708ZZZ.child[0] = Shape709;

HAnimSegment699ZZZ.children[3] = Transform708;

let Transform710 = browser.currentScene.createNode("Transform");
Transform710.translation = new X3D.SFVec3f([0.17,1.27,-0.04]);
let Shape711 = browser.currentScene.createNode("Shape");
Shape711.USE = "skinsphere";
Transform710YYY.child = new X3D.undefined();

Transform710ZZZ.child[0] = Shape711;

HAnimSegment699ZZZ.children[4] = Transform710;

let Transform712 = browser.currentScene.createNode("Transform");
Transform712.translation = new X3D.SFVec3f([0.2,1.27,-0.09]);
let Shape713 = browser.currentScene.createNode("Shape");
Shape713.USE = "skinsphere";
Transform712YYY.child = new X3D.undefined();

Transform712ZZZ.child[0] = Shape713;

HAnimSegment699ZZZ.children[5] = Transform712;

let Transform714 = browser.currentScene.createNode("Transform");
Transform714.translation = new X3D.SFVec3f([0.2,1.27,0.02]);
let Shape715 = browser.currentScene.createNode("Shape");
Shape715.USE = "skinsphere";
Transform714YYY.child = new X3D.undefined();

Transform714ZZZ.child[0] = Shape715;

HAnimSegment699ZZZ.children[6] = Transform714;

let HAnimSite716 = browser.currentScene.createNode("HAnimSite");
HAnimSite716.name = "l_humeral_medial_epicondyle_pt";
HAnimSite716.DEF = "Joe_l_humeral_medial_epicondyle_pt";
HAnimSite716.translation = new X3D.SFVec3f([0.165,1.1388,-0.04]);
let Shape717 = browser.currentScene.createNode("Shape");
Shape717.USE = "sitebox";
HAnimSite716YYY.children = new X3D.MFNode();

HAnimSite716ZZZ.children[0] = Shape717;

HAnimSegment699ZZZ.children[7] = HAnimSite716;

let HAnimSite718 = browser.currentScene.createNode("HAnimSite");
HAnimSite718.name = "l_radiale_pt";
HAnimSite718.DEF = "Joe_l_radiale_pt";
HAnimSite718.translation = new X3D.SFVec3f([0.23,1.133,-0.055]);
let Shape719 = browser.currentScene.createNode("Shape");
Shape719.USE = "sitebox";
HAnimSite718YYY.children = new X3D.MFNode();

HAnimSite718ZZZ.children[0] = Shape719;

HAnimSegment699ZZZ.children[8] = HAnimSite718;

let HAnimSite720 = browser.currentScene.createNode("HAnimSite");
HAnimSite720.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite720.DEF = "Joe_l_humeral_lateral_epicondyle_pt";
HAnimSite720.translation = new X3D.SFVec3f([0.244,1.1388,-0.04]);
let Shape721 = browser.currentScene.createNode("Shape");
Shape721.USE = "sitebox";
HAnimSite720YYY.children = new X3D.MFNode();

HAnimSite720ZZZ.children[0] = Shape721;

HAnimSegment699ZZZ.children[9] = HAnimSite720;

HAnimJoint698YYY.children = new X3D.MFNode();

HAnimJoint698ZZZ.children[0] = HAnimSegment699;

let HAnimJoint722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint722.name = "l_elbow";
HAnimJoint722.DEF = "Joe_l_elbow";
HAnimJoint722.center = new X3D.SFVec3f([0.2,1.1388,-0.04]);
HAnimJoint722.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint722.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment723.name = "l_forearm";
HAnimSegment723.DEF = "Joe_l_forearm";
let Shape724 = browser.currentScene.createNode("Shape");
let Appearance725 = browser.currentScene.createNode("Appearance");
Appearance725.USE = "SegmentLine";
appearance = Appearance725;

let IndexedLineSet726 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet726.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate727 = browser.currentScene.createNode("Coordinate");
Coordinate727.point = new X3D.MFVec3f([0.2,1.1388,-0.04,0.2,0.87,-0.04]);
coord = Coordinate727;

geometry = IndexedLineSet726;

HAnimSegment723YYY.children = new X3D.MFNode();

HAnimSegment723ZZZ.children[0] = Shape724;

let Transform728 = browser.currentScene.createNode("Transform");
Transform728.translation = new X3D.SFVec3f([0.2,1.1388,-0.04]);
let Shape729 = browser.currentScene.createNode("Shape");
Shape729.USE = "jointbox";
Transform728YYY.child = new X3D.undefined();

Transform728ZZZ.child[0] = Shape729;

HAnimSegment723ZZZ.children[1] = Transform728;

let Transform730 = browser.currentScene.createNode("Transform");
Transform730.translation = new X3D.SFVec3f([0.2,1.1388,-0.013]);
let Shape731 = browser.currentScene.createNode("Shape");
Shape731.USE = "skinsphere";
Transform730YYY.child = new X3D.undefined();

Transform730ZZZ.child[0] = Shape731;

HAnimSegment723ZZZ.children[2] = Transform730;

let Transform732 = browser.currentScene.createNode("Transform");
Transform732.translation = new X3D.SFVec3f([0.225,1,-0.01]);
let Shape733 = browser.currentScene.createNode("Shape");
Shape733.USE = "skinsphere";
Transform732YYY.child = new X3D.undefined();

Transform732ZZZ.child[0] = Shape733;

HAnimSegment723ZZZ.children[3] = Transform732;

let Transform734 = browser.currentScene.createNode("Transform");
Transform734.translation = new X3D.SFVec3f([0.225,1,-0.07]);
let Shape735 = browser.currentScene.createNode("Shape");
Shape735.USE = "skinsphere";
Transform734YYY.child = new X3D.undefined();

Transform734ZZZ.child[0] = Shape735;

HAnimSegment723ZZZ.children[4] = Transform734;

let Transform736 = browser.currentScene.createNode("Transform");
Transform736.translation = new X3D.SFVec3f([0.185,1,-0.01]);
let Shape737 = browser.currentScene.createNode("Shape");
Shape737.USE = "skinsphere";
Transform736YYY.child = new X3D.undefined();

Transform736ZZZ.child[0] = Shape737;

HAnimSegment723ZZZ.children[5] = Transform736;

let Transform738 = browser.currentScene.createNode("Transform");
Transform738.translation = new X3D.SFVec3f([0.185,1,-0.07]);
let Shape739 = browser.currentScene.createNode("Shape");
Shape739.USE = "skinsphere";
Transform738YYY.child = new X3D.undefined();

Transform738ZZZ.child[0] = Shape739;

HAnimSegment723ZZZ.children[6] = Transform738;

let HAnimSite740 = browser.currentScene.createNode("HAnimSite");
HAnimSite740.name = "l_radial_styloid_pt";
HAnimSite740.DEF = "Joe_l_radial_styloid_pt";
HAnimSite740.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let Shape741 = browser.currentScene.createNode("Shape");
Shape741.USE = "sitebox";
HAnimSite740YYY.children = new X3D.MFNode();

HAnimSite740ZZZ.children[0] = Shape741;

HAnimSegment723ZZZ.children[7] = HAnimSite740;

let HAnimSite742 = browser.currentScene.createNode("HAnimSite");
HAnimSite742.name = "l_olecranon_pt";
HAnimSite742.DEF = "Joe_l_olecranon_pt";
HAnimSite742.translation = new X3D.SFVec3f([0.2,1.1388,-0.08]);
let Shape743 = browser.currentScene.createNode("Shape");
Shape743.USE = "sitebox";
HAnimSite742YYY.children = new X3D.MFNode();

HAnimSite742ZZZ.children[0] = Shape743;

HAnimSegment723ZZZ.children[8] = HAnimSite742;

HAnimJoint722YYY.children = new X3D.MFNode();

HAnimJoint722ZZZ.children[0] = HAnimSegment723;

let HAnimJoint744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint744.name = "l_radiocarpal";
HAnimJoint744.DEF = "Joe_l_radiocarpal";
HAnimJoint744.center = new X3D.SFVec3f([0.2,0.87,-0.04]);
HAnimJoint744.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint744.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment745.name = "l_carpal";
HAnimSegment745.DEF = "Joe_l_carpal";
let Shape746 = browser.currentScene.createNode("Shape");
let Appearance747 = browser.currentScene.createNode("Appearance");
Appearance747.USE = "SegmentLine";
appearance = Appearance747;

let IndexedLineSet748 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet748.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate749 = browser.currentScene.createNode("Coordinate");
Coordinate749.point = new X3D.MFVec3f([0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
coord = Coordinate749;

geometry = IndexedLineSet748;

HAnimSegment745YYY.children = new X3D.MFNode();

HAnimSegment745ZZZ.children[0] = Shape746;

let Transform750 = browser.currentScene.createNode("Transform");
Transform750.translation = new X3D.SFVec3f([0.2,0.87,-0.04]);
let Shape751 = browser.currentScene.createNode("Shape");
Shape751.USE = "jointbox";
Transform750YYY.child = new X3D.undefined();

Transform750ZZZ.child[0] = Shape751;

HAnimSegment745ZZZ.children[1] = Transform750;

let HAnimSite752 = browser.currentScene.createNode("HAnimSite");
HAnimSite752.name = "l_metacarpal_phalanx_2_pt";
HAnimSite752.DEF = "Joe_l_metacarpal_phalanx_2_pt";
HAnimSite752.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let Shape753 = browser.currentScene.createNode("Shape");
Shape753.USE = "sitebox";
HAnimSite752YYY.children = new X3D.MFNode();

HAnimSite752ZZZ.children[0] = Shape753;

HAnimSegment745ZZZ.children[2] = HAnimSite752;

let HAnimSite754 = browser.currentScene.createNode("HAnimSite");
HAnimSite754.name = "l_ulnar_styloid_pt";
HAnimSite754.DEF = "Joe_l_ulnar_styloid_pt";
HAnimSite754.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
let Shape755 = browser.currentScene.createNode("Shape");
Shape755.USE = "sitebox";
HAnimSite754YYY.children = new X3D.MFNode();

HAnimSite754ZZZ.children[0] = Shape755;

HAnimSegment745ZZZ.children[3] = HAnimSite754;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.name = "l_metacarpal_phalanx_5_pt";
HAnimSite756.DEF = "Joe_l_metacarpal_phalanx_5_pt";
HAnimSite756.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let Shape757 = browser.currentScene.createNode("Shape");
Shape757.USE = "sitebox";
HAnimSite756YYY.children = new X3D.MFNode();

HAnimSite756ZZZ.children[0] = Shape757;

HAnimSegment745ZZZ.children[4] = HAnimSite756;

HAnimJoint744YYY.children = new X3D.MFNode();

HAnimJoint744ZZZ.children[0] = HAnimSegment745;

let HAnimJoint758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint758.name = "l_carpometacarpal_1";
HAnimJoint758.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint758.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint758.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint758.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment759.name = "l_metacarpal_1";
HAnimSegment759.DEF = "Joe_l_metacarpal_1";
let Shape760 = browser.currentScene.createNode("Shape");
let Appearance761 = browser.currentScene.createNode("Appearance");
Appearance761.USE = "SegmentLine";
appearance = Appearance761;

let IndexedLineSet762 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet762.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate763 = browser.currentScene.createNode("Coordinate");
Coordinate763.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate763;

geometry = IndexedLineSet762;

HAnimSegment759YYY.children = new X3D.MFNode();

HAnimSegment759ZZZ.children[0] = Shape760;

let Transform764 = browser.currentScene.createNode("Transform");
Transform764.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape765 = browser.currentScene.createNode("Shape");
Shape765.USE = "jointbox";
Transform764YYY.child = new X3D.undefined();

Transform764ZZZ.child[0] = Shape765;

HAnimSegment759ZZZ.children[1] = Transform764;

HAnimJoint758YYY.children = new X3D.MFNode();

HAnimJoint758ZZZ.children[0] = HAnimSegment759;

let HAnimJoint766 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint766.name = "l_metacarpophalangeal_1";
HAnimJoint766.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint766.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint766.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint766.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimSegment767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment767.name = "l_carpal_proximal_phalanx_1";
HAnimSegment767.DEF = "Joe_l_carpal_proximal_phalanx_1";
let Shape768 = browser.currentScene.createNode("Shape");
let Appearance769 = browser.currentScene.createNode("Appearance");
Appearance769.USE = "SegmentLine";
appearance = Appearance769;

let IndexedLineSet770 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet770.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate771 = browser.currentScene.createNode("Coordinate");
Coordinate771.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate771;

geometry = IndexedLineSet770;

HAnimSegment767YYY.children = new X3D.MFNode();

HAnimSegment767ZZZ.children[0] = Shape768;

let Transform772 = browser.currentScene.createNode("Transform");
Transform772.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "jointbox";
Transform772YYY.child = new X3D.undefined();

Transform772ZZZ.child[0] = Shape773;

HAnimSegment767ZZZ.children[1] = Transform772;

HAnimJoint766YYY.children = new X3D.MFNode();

HAnimJoint766ZZZ.children[0] = HAnimSegment767;

let HAnimJoint774 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint774.name = "l_carpal_interphalangeal_1";
HAnimJoint774.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint774.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint774.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint774.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment775.name = "l_carpal_distal_phalanx_1";
HAnimSegment775.DEF = "Joe_l_carpal_distal_phalanx_1";
let Shape776 = browser.currentScene.createNode("Shape");
let Appearance777 = browser.currentScene.createNode("Appearance");
Appearance777.USE = "SegmentLine";
appearance = Appearance777;

let IndexedLineSet778 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet778.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate779 = browser.currentScene.createNode("Coordinate");
Coordinate779.point = new X3D.MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
coord = Coordinate779;

geometry = IndexedLineSet778;

HAnimSegment775YYY.children = new X3D.MFNode();

HAnimSegment775ZZZ.children[0] = Shape776;

let Transform780 = browser.currentScene.createNode("Transform");
Transform780.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "jointbox";
Transform780YYY.child = new X3D.undefined();

Transform780ZZZ.child[0] = Shape781;

HAnimSegment775ZZZ.children[1] = Transform780;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite782.DEF = "Joe_l_carpal_distal_phalanx_1_tip";
HAnimSite782.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "sitebox";
HAnimSite782YYY.children = new X3D.MFNode();

HAnimSite782ZZZ.children[0] = Shape783;

HAnimSegment775ZZZ.children[2] = HAnimSite782;

HAnimJoint774YYY.children = new X3D.MFNode();

HAnimJoint774ZZZ.children[0] = HAnimSegment775;

HAnimJoint766ZZZ.children[1] = HAnimJoint774;

HAnimJoint758ZZZ.children[1] = HAnimJoint766;

HAnimJoint744ZZZ.children[1] = HAnimJoint758;

let HAnimJoint784 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint784.name = "l_carpometacarpal_2";
HAnimJoint784.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint784.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint784.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint784.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment785.name = "l_metacarpal_2";
HAnimSegment785.DEF = "Joe_l_metacarpal_2";
let Shape786 = browser.currentScene.createNode("Shape");
let Appearance787 = browser.currentScene.createNode("Appearance");
Appearance787.USE = "SegmentLine";
appearance = Appearance787;

let IndexedLineSet788 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet788.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate789 = browser.currentScene.createNode("Coordinate");
Coordinate789.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate789;

geometry = IndexedLineSet788;

HAnimSegment785YYY.children = new X3D.MFNode();

HAnimSegment785ZZZ.children[0] = Shape786;

let Transform790 = browser.currentScene.createNode("Transform");
Transform790.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape791 = browser.currentScene.createNode("Shape");
Shape791.USE = "jointbox";
Transform790YYY.child = new X3D.undefined();

Transform790ZZZ.child[0] = Shape791;

HAnimSegment785ZZZ.children[1] = Transform790;

HAnimJoint784YYY.children = new X3D.MFNode();

HAnimJoint784ZZZ.children[0] = HAnimSegment785;

let HAnimJoint792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint792.name = "l_metacarpophalangeal_2";
HAnimJoint792.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint792.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint792.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint792.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimSegment793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment793.name = "l_carpal_proximal_phalanx_2";
HAnimSegment793.DEF = "Joe_l_carpal_proximal_phalanx_2";
let Shape794 = browser.currentScene.createNode("Shape");
let Appearance795 = browser.currentScene.createNode("Appearance");
Appearance795.USE = "SegmentLine";
appearance = Appearance795;

let IndexedLineSet796 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet796.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate797 = browser.currentScene.createNode("Coordinate");
Coordinate797.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate797;

geometry = IndexedLineSet796;

HAnimSegment793YYY.children = new X3D.MFNode();

HAnimSegment793ZZZ.children[0] = Shape794;

let Transform798 = browser.currentScene.createNode("Transform");
Transform798.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape799 = browser.currentScene.createNode("Shape");
Shape799.USE = "jointbox";
Transform798YYY.child = new X3D.undefined();

Transform798ZZZ.child[0] = Shape799;

HAnimSegment793ZZZ.children[1] = Transform798;

HAnimJoint792YYY.children = new X3D.MFNode();

HAnimJoint792ZZZ.children[0] = HAnimSegment793;

let HAnimJoint800 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint800.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint800.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint800.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint800.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint800.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment801.name = "l_carpal_middle_phalanx_2";
HAnimSegment801.DEF = "Joe_l_carpal_middle_phalanx_2";
let Shape802 = browser.currentScene.createNode("Shape");
let Appearance803 = browser.currentScene.createNode("Appearance");
Appearance803.USE = "SegmentLine";
appearance = Appearance803;

let IndexedLineSet804 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet804.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate805 = browser.currentScene.createNode("Coordinate");
Coordinate805.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate805;

geometry = IndexedLineSet804;

HAnimSegment801YYY.children = new X3D.MFNode();

HAnimSegment801ZZZ.children[0] = Shape802;

let Transform806 = browser.currentScene.createNode("Transform");
Transform806.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "jointbox";
Transform806YYY.child = new X3D.undefined();

Transform806ZZZ.child[0] = Shape807;

HAnimSegment801ZZZ.children[1] = Transform806;

HAnimJoint800YYY.children = new X3D.MFNode();

HAnimJoint800ZZZ.children[0] = HAnimSegment801;

let HAnimJoint808 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint808.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint808.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint808.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint808.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint808.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment809.name = "l_carpal_distal_phalanx_2";
HAnimSegment809.DEF = "Joe_l_carpal_distal_phalanx_2";
let Shape810 = browser.currentScene.createNode("Shape");
let Appearance811 = browser.currentScene.createNode("Appearance");
Appearance811.USE = "SegmentLine";
appearance = Appearance811;

let IndexedLineSet812 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet812.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
coord = Coordinate813;

geometry = IndexedLineSet812;

HAnimSegment809YYY.children = new X3D.MFNode();

HAnimSegment809ZZZ.children[0] = Shape810;

let Transform814 = browser.currentScene.createNode("Transform");
Transform814.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape815 = browser.currentScene.createNode("Shape");
Shape815.USE = "jointbox";
Transform814YYY.child = new X3D.undefined();

Transform814ZZZ.child[0] = Shape815;

HAnimSegment809ZZZ.children[1] = Transform814;

let HAnimSite816 = browser.currentScene.createNode("HAnimSite");
HAnimSite816.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite816.DEF = "Joe_l_carpal_distal_phalanx_2_tip";
HAnimSite816.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let Shape817 = browser.currentScene.createNode("Shape");
Shape817.USE = "sitebox";
HAnimSite816YYY.children = new X3D.MFNode();

HAnimSite816ZZZ.children[0] = Shape817;

HAnimSegment809ZZZ.children[2] = HAnimSite816;

let HAnimSite818 = browser.currentScene.createNode("HAnimSite");
HAnimSite818.name = "l_dactylion_pt";
HAnimSite818.DEF = "Joe_l_dactylion_pt";
HAnimSite818.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "sitebox";
HAnimSite818YYY.children = new X3D.MFNode();

HAnimSite818ZZZ.children[0] = Shape819;

HAnimSegment809ZZZ.children[3] = HAnimSite818;

HAnimJoint808YYY.children = new X3D.MFNode();

HAnimJoint808ZZZ.children[0] = HAnimSegment809;

HAnimJoint800ZZZ.children[1] = HAnimJoint808;

HAnimJoint792ZZZ.children[1] = HAnimJoint800;

HAnimJoint784ZZZ.children[1] = HAnimJoint792;

HAnimJoint744ZZZ.children[2] = HAnimJoint784;

let HAnimJoint820 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint820.name = "l_carpometacarpal_3";
HAnimJoint820.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint820.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint820.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint820.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment821.name = "l_metacarpal_3";
HAnimSegment821.DEF = "Joe_l_metacarpal_3";
let Shape822 = browser.currentScene.createNode("Shape");
let Appearance823 = browser.currentScene.createNode("Appearance");
Appearance823.USE = "SegmentLine";
appearance = Appearance823;

let IndexedLineSet824 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet824.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate825 = browser.currentScene.createNode("Coordinate");
Coordinate825.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate825;

geometry = IndexedLineSet824;

HAnimSegment821YYY.children = new X3D.MFNode();

HAnimSegment821ZZZ.children[0] = Shape822;

let Transform826 = browser.currentScene.createNode("Transform");
Transform826.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Shape827 = browser.currentScene.createNode("Shape");
Shape827.USE = "jointbox";
Transform826YYY.child = new X3D.undefined();

Transform826ZZZ.child[0] = Shape827;

HAnimSegment821ZZZ.children[1] = Transform826;

HAnimJoint820YYY.children = new X3D.MFNode();

HAnimJoint820ZZZ.children[0] = HAnimSegment821;

let HAnimJoint828 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint828.name = "l_metacarpophalangeal_3";
HAnimJoint828.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint828.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint828.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint828.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment829.name = "l_carpal_proximal_phalanx_3";
HAnimSegment829.DEF = "Joe_l_carpal_proximal_phalanx_3";
let Shape830 = browser.currentScene.createNode("Shape");
let Appearance831 = browser.currentScene.createNode("Appearance");
Appearance831.USE = "SegmentLine";
appearance = Appearance831;

let IndexedLineSet832 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet832.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate833 = browser.currentScene.createNode("Coordinate");
Coordinate833.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate833;

geometry = IndexedLineSet832;

HAnimSegment829YYY.children = new X3D.MFNode();

HAnimSegment829ZZZ.children[0] = Shape830;

let Transform834 = browser.currentScene.createNode("Transform");
Transform834.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Shape835 = browser.currentScene.createNode("Shape");
Shape835.USE = "jointbox";
Transform834YYY.child = new X3D.undefined();

Transform834ZZZ.child[0] = Shape835;

HAnimSegment829ZZZ.children[1] = Transform834;

HAnimJoint828YYY.children = new X3D.MFNode();

HAnimJoint828ZZZ.children[0] = HAnimSegment829;

let HAnimJoint836 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint836.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint836.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint836.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint836.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint836.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment837.name = "l_carpal_middle_phalanx_3";
HAnimSegment837.DEF = "Joe_l_carpal_middle_phalanx_3";
let Shape838 = browser.currentScene.createNode("Shape");
let Appearance839 = browser.currentScene.createNode("Appearance");
Appearance839.USE = "SegmentLine";
appearance = Appearance839;

let IndexedLineSet840 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet840.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate841 = browser.currentScene.createNode("Coordinate");
Coordinate841.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate841;

geometry = IndexedLineSet840;

HAnimSegment837YYY.children = new X3D.MFNode();

HAnimSegment837ZZZ.children[0] = Shape838;

let Transform842 = browser.currentScene.createNode("Transform");
Transform842.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Shape843 = browser.currentScene.createNode("Shape");
Shape843.USE = "jointbox";
Transform842YYY.child = new X3D.undefined();

Transform842ZZZ.child[0] = Shape843;

HAnimSegment837ZZZ.children[1] = Transform842;

HAnimJoint836YYY.children = new X3D.MFNode();

HAnimJoint836ZZZ.children[0] = HAnimSegment837;

let HAnimJoint844 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint844.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint844.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint844.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint844.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint844.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment845.name = "l_carpal_distal_phalanx_3";
HAnimSegment845.DEF = "Joe_l_carpal_distal_phalanx_3";
let Shape846 = browser.currentScene.createNode("Shape");
let Appearance847 = browser.currentScene.createNode("Appearance");
Appearance847.USE = "SegmentLine";
appearance = Appearance847;

let IndexedLineSet848 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet848.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate849 = browser.currentScene.createNode("Coordinate");
Coordinate849.point = new X3D.MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
coord = Coordinate849;

geometry = IndexedLineSet848;

HAnimSegment845YYY.children = new X3D.MFNode();

HAnimSegment845ZZZ.children[0] = Shape846;

let HAnimSite850 = browser.currentScene.createNode("HAnimSite");
HAnimSite850.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite850.DEF = "Joe_l_carpal_distal_phalanx_3_tip";
HAnimSite850.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let Shape851 = browser.currentScene.createNode("Shape");
Shape851.USE = "sitebox";
HAnimSite850YYY.children = new X3D.MFNode();

HAnimSite850ZZZ.children[0] = Shape851;

HAnimSegment845ZZZ.children[1] = HAnimSite850;

let Transform852 = browser.currentScene.createNode("Transform");
Transform852.translation = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "jointbox";
Transform852YYY.child = new X3D.undefined();

Transform852ZZZ.child[0] = Shape853;

HAnimSegment845ZZZ.children[2] = Transform852;

HAnimJoint844YYY.children = new X3D.MFNode();

HAnimJoint844ZZZ.children[0] = HAnimSegment845;

HAnimJoint836ZZZ.children[1] = HAnimJoint844;

HAnimJoint828ZZZ.children[1] = HAnimJoint836;

HAnimJoint820ZZZ.children[1] = HAnimJoint828;

HAnimJoint744ZZZ.children[3] = HAnimJoint820;

let HAnimJoint854 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint854.name = "l_carpometacarpal_4";
HAnimJoint854.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint854.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint854.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint854.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment855.name = "l_metacarpal_4";
HAnimSegment855.DEF = "Joe_l_metacarpal_4";
let Shape856 = browser.currentScene.createNode("Shape");
let Appearance857 = browser.currentScene.createNode("Appearance");
Appearance857.USE = "SegmentLine";
appearance = Appearance857;

let IndexedLineSet858 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet858.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate859 = browser.currentScene.createNode("Coordinate");
Coordinate859.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate859;

geometry = IndexedLineSet858;

HAnimSegment855YYY.children = new X3D.MFNode();

HAnimSegment855ZZZ.children[0] = Shape856;

let Transform860 = browser.currentScene.createNode("Transform");
Transform860.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Shape861 = browser.currentScene.createNode("Shape");
Shape861.USE = "jointbox";
Transform860YYY.child = new X3D.undefined();

Transform860ZZZ.child[0] = Shape861;

HAnimSegment855ZZZ.children[1] = Transform860;

HAnimJoint854YYY.children = new X3D.MFNode();

HAnimJoint854ZZZ.children[0] = HAnimSegment855;

let HAnimJoint862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint862.name = "l_metacarpophalangeal_4";
HAnimJoint862.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint862.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint862.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint862.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.name = "l_carpal_proximal_phalanx_4";
HAnimSegment863.DEF = "Joe_l_carpal_proximal_phalanx_4";
let Shape864 = browser.currentScene.createNode("Shape");
let Appearance865 = browser.currentScene.createNode("Appearance");
Appearance865.USE = "SegmentLine";
appearance = Appearance865;

let IndexedLineSet866 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet866.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate867 = browser.currentScene.createNode("Coordinate");
Coordinate867.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate867;

geometry = IndexedLineSet866;

HAnimSegment863YYY.children = new X3D.MFNode();

HAnimSegment863ZZZ.children[0] = Shape864;

let Transform868 = browser.currentScene.createNode("Transform");
Transform868.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "jointbox";
Transform868YYY.child = new X3D.undefined();

Transform868ZZZ.child[0] = Shape869;

HAnimSegment863ZZZ.children[1] = Transform868;

HAnimJoint862YYY.children = new X3D.MFNode();

HAnimJoint862ZZZ.children[0] = HAnimSegment863;

let HAnimJoint870 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint870.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint870.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint870.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint870.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint870.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment871.name = "l_carpal_middle_phalanx_4";
HAnimSegment871.DEF = "Joe_l_carpal_middle_phalanx_4";
let Shape872 = browser.currentScene.createNode("Shape");
let Appearance873 = browser.currentScene.createNode("Appearance");
Appearance873.USE = "SegmentLine";
appearance = Appearance873;

let IndexedLineSet874 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet874.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate875 = browser.currentScene.createNode("Coordinate");
Coordinate875.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate875;

geometry = IndexedLineSet874;

HAnimSegment871YYY.children = new X3D.MFNode();

HAnimSegment871ZZZ.children[0] = Shape872;

let Transform876 = browser.currentScene.createNode("Transform");
Transform876.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Shape877 = browser.currentScene.createNode("Shape");
Shape877.USE = "jointbox";
Transform876YYY.child = new X3D.undefined();

Transform876ZZZ.child[0] = Shape877;

HAnimSegment871ZZZ.children[1] = Transform876;

HAnimJoint870YYY.children = new X3D.MFNode();

HAnimJoint870ZZZ.children[0] = HAnimSegment871;

let HAnimJoint878 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint878.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint878.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint878.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint878.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint878.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment879 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment879.name = "l_carpal_distal_phalanx_4";
HAnimSegment879.DEF = "Joe_l_carpal_distal_phalanx_4";
let Shape880 = browser.currentScene.createNode("Shape");
let Appearance881 = browser.currentScene.createNode("Appearance");
Appearance881.USE = "SegmentLine";
appearance = Appearance881;

let IndexedLineSet882 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet882.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate883 = browser.currentScene.createNode("Coordinate");
Coordinate883.point = new X3D.MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
coord = Coordinate883;

geometry = IndexedLineSet882;

HAnimSegment879YYY.children = new X3D.MFNode();

HAnimSegment879ZZZ.children[0] = Shape880;

let Transform884 = browser.currentScene.createNode("Transform");
Transform884.translation = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let Shape885 = browser.currentScene.createNode("Shape");
Shape885.USE = "jointbox";
Transform884YYY.child = new X3D.undefined();

Transform884ZZZ.child[0] = Shape885;

HAnimSegment879ZZZ.children[1] = Transform884;

let HAnimSite886 = browser.currentScene.createNode("HAnimSite");
HAnimSite886.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite886.DEF = "Joe_l_carpal_distal_phalanx_4_tip";
HAnimSite886.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "sitebox";
HAnimSite886YYY.children = new X3D.MFNode();

HAnimSite886ZZZ.children[0] = Shape887;

HAnimSegment879ZZZ.children[2] = HAnimSite886;

HAnimJoint878YYY.children = new X3D.MFNode();

HAnimJoint878ZZZ.children[0] = HAnimSegment879;

HAnimJoint870ZZZ.children[1] = HAnimJoint878;

HAnimJoint862ZZZ.children[1] = HAnimJoint870;

HAnimJoint854ZZZ.children[1] = HAnimJoint862;

HAnimJoint744ZZZ.children[4] = HAnimJoint854;

let HAnimJoint888 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint888.name = "l_carpometacarpal_5";
HAnimJoint888.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint888.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint888.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint888.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimSegment889 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment889.name = "l_metacarpal_5";
HAnimSegment889.DEF = "Joe_l_metacarpal_5";
let Shape890 = browser.currentScene.createNode("Shape");
let Appearance891 = browser.currentScene.createNode("Appearance");
Appearance891.USE = "SegmentLine";
appearance = Appearance891;

let IndexedLineSet892 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet892.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate893 = browser.currentScene.createNode("Coordinate");
Coordinate893.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate893;

geometry = IndexedLineSet892;

HAnimSegment889YYY.children = new X3D.MFNode();

HAnimSegment889ZZZ.children[0] = Shape890;

let Transform894 = browser.currentScene.createNode("Transform");
Transform894.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Shape895 = browser.currentScene.createNode("Shape");
Shape895.USE = "jointbox";
Transform894YYY.child = new X3D.undefined();

Transform894ZZZ.child[0] = Shape895;

HAnimSegment889ZZZ.children[1] = Transform894;

HAnimJoint888YYY.children = new X3D.MFNode();

HAnimJoint888ZZZ.children[0] = HAnimSegment889;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.name = "l_metacarpophalangeal_5";
HAnimJoint896.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint896.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint896.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint896.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment897 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment897.name = "l_carpal_proximal_phalanx_5";
HAnimSegment897.DEF = "Joe_l_carpal_proximal_phalanx_5";
let Shape898 = browser.currentScene.createNode("Shape");
let Appearance899 = browser.currentScene.createNode("Appearance");
Appearance899.USE = "SegmentLine";
appearance = Appearance899;

let IndexedLineSet900 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet900.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate901 = browser.currentScene.createNode("Coordinate");
Coordinate901.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate901;

geometry = IndexedLineSet900;

HAnimSegment897YYY.children = new X3D.MFNode();

HAnimSegment897ZZZ.children[0] = Shape898;

let Transform902 = browser.currentScene.createNode("Transform");
Transform902.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Shape903 = browser.currentScene.createNode("Shape");
Shape903.USE = "jointbox";
Transform902YYY.child = new X3D.undefined();

Transform902ZZZ.child[0] = Shape903;

HAnimSegment897ZZZ.children[1] = Transform902;

HAnimJoint896YYY.children = new X3D.MFNode();

HAnimJoint896ZZZ.children[0] = HAnimSegment897;

let HAnimJoint904 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint904.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint904.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint904.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint904.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint904.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment905 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment905.name = "l_carpal_middle_phalanx_5";
HAnimSegment905.DEF = "Joe_l_carpal_middle_phalanx_5";
let Transform906 = browser.currentScene.createNode("Transform");
Transform906.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Shape907 = browser.currentScene.createNode("Shape");
Shape907.USE = "jointbox";
Transform906YYY.child = new X3D.undefined();

Transform906ZZZ.child[0] = Shape907;

HAnimSegment905YYY.children = new X3D.MFNode();

HAnimSegment905ZZZ.children[0] = Transform906;

let Shape908 = browser.currentScene.createNode("Shape");
let Appearance909 = browser.currentScene.createNode("Appearance");
Appearance909.USE = "SegmentLine";
appearance = Appearance909;

let IndexedLineSet910 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet910.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate911 = browser.currentScene.createNode("Coordinate");
Coordinate911.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate911;

geometry = IndexedLineSet910;

HAnimSegment905ZZZ.children[1] = Shape908;

HAnimJoint904YYY.children = new X3D.MFNode();

HAnimJoint904ZZZ.children[0] = HAnimSegment905;

let HAnimJoint912 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint912.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint912.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint912.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint912.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint912.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment913 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment913.name = "l_carpal_distal_phalanx_5";
HAnimSegment913.DEF = "Joe_l_carpal_distal_phalanx_5";
let Shape914 = browser.currentScene.createNode("Shape");
let Appearance915 = browser.currentScene.createNode("Appearance");
Appearance915.USE = "SegmentLine";
appearance = Appearance915;

let IndexedLineSet916 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet916.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate917 = browser.currentScene.createNode("Coordinate");
Coordinate917.point = new X3D.MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
coord = Coordinate917;

geometry = IndexedLineSet916;

HAnimSegment913YYY.children = new X3D.MFNode();

HAnimSegment913ZZZ.children[0] = Shape914;

let Transform918 = browser.currentScene.createNode("Transform");
Transform918.translation = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let Shape919 = browser.currentScene.createNode("Shape");
Shape919.USE = "jointbox";
Transform918YYY.child = new X3D.undefined();

Transform918ZZZ.child[0] = Shape919;

HAnimSegment913ZZZ.children[1] = Transform918;

let HAnimSite920 = browser.currentScene.createNode("HAnimSite");
HAnimSite920.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite920.DEF = "Joe_l_carpal_distal_phalanx_5_tip";
HAnimSite920.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
let Shape921 = browser.currentScene.createNode("Shape");
Shape921.USE = "sitebox";
HAnimSite920YYY.children = new X3D.MFNode();

HAnimSite920ZZZ.children[0] = Shape921;

HAnimSegment913ZZZ.children[2] = HAnimSite920;

HAnimJoint912YYY.children = new X3D.MFNode();

HAnimJoint912ZZZ.children[0] = HAnimSegment913;

HAnimJoint904ZZZ.children[1] = HAnimJoint912;

HAnimJoint896ZZZ.children[1] = HAnimJoint904;

HAnimJoint888ZZZ.children[1] = HAnimJoint896;

HAnimJoint744ZZZ.children[5] = HAnimJoint888;

HAnimJoint722ZZZ.children[1] = HAnimJoint744;

HAnimJoint698ZZZ.children[1] = HAnimJoint722;

HAnimJoint682ZZZ.children[1] = HAnimJoint698;

HAnimJoint672ZZZ.children[1] = HAnimJoint682;

HAnimJoint556ZZZ.children[2] = HAnimJoint672;

let HAnimJoint922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint922.name = "r_sternoclavicular";
HAnimJoint922.DEF = "Joe_r_sternoclavicular";
HAnimJoint922.center = new X3D.SFVec3f([-0.03,1.46,0]);
HAnimJoint922.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint922.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimSegment923 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment923.name = "r_clavicle";
HAnimSegment923.DEF = "Joe_r_clavicle";
let Shape924 = browser.currentScene.createNode("Shape");
let Appearance925 = browser.currentScene.createNode("Appearance");
Appearance925.USE = "SegmentLine";
appearance = Appearance925;

let IndexedLineSet926 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet926.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new X3D.MFVec3f([-0.03,1.46,0.02,-0.09,1.41,-0.09]);
coord = Coordinate927;

geometry = IndexedLineSet926;

HAnimSegment923YYY.children = new X3D.MFNode();

HAnimSegment923ZZZ.children[0] = Shape924;

let Transform928 = browser.currentScene.createNode("Transform");
Transform928.translation = new X3D.SFVec3f([-0.03,1.46,0.02]);
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "jointbox";
Transform928YYY.child = new X3D.undefined();

Transform928ZZZ.child[0] = Shape929;

HAnimSegment923ZZZ.children[1] = Transform928;

let HAnimSite930 = browser.currentScene.createNode("HAnimSite");
HAnimSite930.name = "r_clavicle_pt";
HAnimSite930.DEF = "Joe_r_clavicle_pt";
HAnimSite930.translation = new X3D.SFVec3f([-0.03,1.46,0.035]);
let Shape931 = browser.currentScene.createNode("Shape");
Shape931.USE = "sitebox";
HAnimSite930YYY.children = new X3D.MFNode();

HAnimSite930ZZZ.children[0] = Shape931;

HAnimSegment923ZZZ.children[2] = HAnimSite930;

HAnimJoint922YYY.children = new X3D.MFNode();

HAnimJoint922ZZZ.children[0] = HAnimSegment923;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.name = "r_acromioclavicular";
HAnimJoint932.DEF = "Joe_r_acromioclavicular";
HAnimJoint932.center = new X3D.SFVec3f([-0.09,1.41,-0.11]);
HAnimJoint932.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint932.skinCoordWeight = new X3D.MFFloat([1,0.9]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.name = "r_scapula";
HAnimSegment933.DEF = "Joe_r_scapula";
let Shape934 = browser.currentScene.createNode("Shape");
let Appearance935 = browser.currentScene.createNode("Appearance");
Appearance935.USE = "SegmentLine";
appearance = Appearance935;

let IndexedLineSet936 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet936.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate937 = browser.currentScene.createNode("Coordinate");
Coordinate937.point = new X3D.MFVec3f([-0.09,1.41,-0.09,-0.2,1.44,-0.04]);
coord = Coordinate937;

geometry = IndexedLineSet936;

HAnimSegment933YYY.children = new X3D.MFNode();

HAnimSegment933ZZZ.children[0] = Shape934;

let Transform938 = browser.currentScene.createNode("Transform");
Transform938.translation = new X3D.SFVec3f([-0.09,1.41,-0.09]);
let Shape939 = browser.currentScene.createNode("Shape");
Shape939.USE = "jointbox";
Transform938YYY.child = new X3D.undefined();

Transform938ZZZ.child[0] = Shape939;

HAnimSegment933ZZZ.children[1] = Transform938;

let Transform940 = browser.currentScene.createNode("Transform");
Transform940.translation = new X3D.SFVec3f([-0.11,1.427,-0.1375]);
let Shape941 = browser.currentScene.createNode("Shape");
Shape941.USE = "skinsphere";
Transform940YYY.child = new X3D.undefined();

Transform940ZZZ.child[0] = Shape941;

HAnimSegment933ZZZ.children[2] = Transform940;

let HAnimSite942 = browser.currentScene.createNode("HAnimSite");
HAnimSite942.name = "r_acromion_pt";
HAnimSite942.DEF = "Joe_r_acromion_pt";
HAnimSite942.translation = new X3D.SFVec3f([-0.178,1.4825,-0.0625]);
let Shape943 = browser.currentScene.createNode("Shape");
Shape943.USE = "sitebox";
HAnimSite942YYY.children = new X3D.MFNode();

HAnimSite942ZZZ.children[0] = Shape943;

HAnimSegment933ZZZ.children[3] = HAnimSite942;

let HAnimSite944 = browser.currentScene.createNode("HAnimSite");
HAnimSite944.name = "r_axilla_proximal_pt";
HAnimSite944.DEF = "Joe_r_axilla_proximal_pt";
HAnimSite944.translation = new X3D.SFVec3f([-0.17,1.38,0.007]);
let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "sitebox";
HAnimSite944YYY.children = new X3D.MFNode();

HAnimSite944ZZZ.children[0] = Shape945;

HAnimSegment933ZZZ.children[4] = HAnimSite944;

let HAnimSite946 = browser.currentScene.createNode("HAnimSite");
HAnimSite946.name = "r_axilla_distal_pt";
HAnimSite946.DEF = "Joe_r_axilla_distal_pt";
HAnimSite946.translation = new X3D.SFVec3f([-0.16,1.38,-0.127]);
let Shape947 = browser.currentScene.createNode("Shape");
Shape947.USE = "sitebox";
HAnimSite946YYY.children = new X3D.MFNode();

HAnimSite946ZZZ.children[0] = Shape947;

HAnimSegment933ZZZ.children[5] = HAnimSite946;

HAnimJoint932YYY.children = new X3D.MFNode();

HAnimJoint932ZZZ.children[0] = HAnimSegment933;

let HAnimJoint948 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint948.name = "r_shoulder";
HAnimJoint948.DEF = "Joe_r_shoulder";
HAnimJoint948.center = new X3D.SFVec3f([-0.2,1.44,-0.04]);
HAnimJoint948.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint948.skinCoordWeight = new X3D.MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]);
let HAnimSegment949 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment949.name = "r_upperarm";
HAnimSegment949.DEF = "Joe_r_upperarm";
let Transform950 = browser.currentScene.createNode("Transform");
Transform950.translation = new X3D.SFVec3f([-0.2,1.44,-0.04]);
let Shape951 = browser.currentScene.createNode("Shape");
Shape951.USE = "jointbox";
Transform950YYY.child = new X3D.undefined();

Transform950ZZZ.child[0] = Shape951;

HAnimSegment949YYY.children = new X3D.MFNode();

HAnimSegment949ZZZ.children[0] = Transform950;

let Shape952 = browser.currentScene.createNode("Shape");
let Appearance953 = browser.currentScene.createNode("Appearance");
Appearance953.USE = "SegmentLine";
appearance = Appearance953;

let IndexedLineSet954 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet954.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate955 = browser.currentScene.createNode("Coordinate");
Coordinate955.point = new X3D.MFVec3f([-0.2,1.44,-0.04,-0.2,1.1388,-0.04]);
coord = Coordinate955;

geometry = IndexedLineSet954;

HAnimSegment949ZZZ.children[1] = Shape952;

let Transform956 = browser.currentScene.createNode("Transform");
Transform956.translation = new X3D.SFVec3f([-0.178,1.4825,-0.0625]);
let Shape957 = browser.currentScene.createNode("Shape");
Shape957.USE = "skinsphere";
Transform956YYY.child = new X3D.undefined();

Transform956ZZZ.child[0] = Shape957;

HAnimSegment949ZZZ.children[2] = Transform956;

let Transform958 = browser.currentScene.createNode("Transform");
Transform958.translation = new X3D.SFVec3f([-0.17,1.38,0.007]);
let Shape959 = browser.currentScene.createNode("Shape");
Shape959.USE = "skinsphere";
Transform958YYY.child = new X3D.undefined();

Transform958ZZZ.child[0] = Shape959;

HAnimSegment949ZZZ.children[3] = Transform958;

let Transform960 = browser.currentScene.createNode("Transform");
Transform960.translation = new X3D.SFVec3f([-0.16,1.38,-0.127]);
let Shape961 = browser.currentScene.createNode("Shape");
Shape961.USE = "skinsphere";
Transform960YYY.child = new X3D.undefined();

Transform960ZZZ.child[0] = Shape961;

HAnimSegment949ZZZ.children[4] = Transform960;

let Transform962 = browser.currentScene.createNode("Transform");
Transform962.translation = new X3D.SFVec3f([-0.235,1.42,-0.0625]);
let Shape963 = browser.currentScene.createNode("Shape");
Shape963.USE = "skinsphere";
Transform962YYY.child = new X3D.undefined();

Transform962ZZZ.child[0] = Shape963;

HAnimSegment949ZZZ.children[5] = Transform962;

let Transform964 = browser.currentScene.createNode("Transform");
Transform964.translation = new X3D.SFVec3f([-0.23,1.235,-0.04]);
let Shape965 = browser.currentScene.createNode("Shape");
Shape965.USE = "skinsphere";
Transform964YYY.child = new X3D.undefined();

Transform964ZZZ.child[0] = Shape965;

HAnimSegment949ZZZ.children[6] = Transform964;

let Transform966 = browser.currentScene.createNode("Transform");
Transform966.translation = new X3D.SFVec3f([-0.16,1.23,-0.04]);
let Shape967 = browser.currentScene.createNode("Shape");
Shape967.USE = "skinsphere";
Transform966YYY.child = new X3D.undefined();

Transform966ZZZ.child[0] = Shape967;

HAnimSegment949ZZZ.children[7] = Transform966;

let Transform968 = browser.currentScene.createNode("Transform");
Transform968.translation = new X3D.SFVec3f([-0.2,1.23,-0.105]);
let Shape969 = browser.currentScene.createNode("Shape");
Shape969.USE = "skinsphere";
Transform968YYY.child = new X3D.undefined();

Transform968ZZZ.child[0] = Shape969;

HAnimSegment949ZZZ.children[8] = Transform968;

let Transform970 = browser.currentScene.createNode("Transform");
Transform970.translation = new X3D.SFVec3f([-0.2,1.235,0.02]);
let Shape971 = browser.currentScene.createNode("Shape");
Shape971.USE = "skinsphere";
Transform970YYY.child = new X3D.undefined();

Transform970ZZZ.child[0] = Shape971;

HAnimSegment949ZZZ.children[9] = Transform970;

let HAnimSite972 = browser.currentScene.createNode("HAnimSite");
HAnimSite972.name = "r_humeral_medial_epicondyle_pt";
HAnimSite972.DEF = "Joe_r_humeral_medial_epicondyle_pt";
HAnimSite972.translation = new X3D.SFVec3f([-0.165,1.1388,-0.04]);
let Shape973 = browser.currentScene.createNode("Shape");
Shape973.USE = "sitebox";
HAnimSite972YYY.children = new X3D.MFNode();

HAnimSite972ZZZ.children[0] = Shape973;

HAnimSegment949ZZZ.children[10] = HAnimSite972;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.name = "r_radiale_pt";
HAnimSite974.DEF = "Joe_r_radiale_pt";
HAnimSite974.translation = new X3D.SFVec3f([-0.23,1.133,-0.055]);
let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "sitebox";
HAnimSite974YYY.children = new X3D.MFNode();

HAnimSite974ZZZ.children[0] = Shape975;

HAnimSegment949ZZZ.children[11] = HAnimSite974;

let HAnimSite976 = browser.currentScene.createNode("HAnimSite");
HAnimSite976.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite976.DEF = "Joe_r_humeral_lateral_epicondyle_pt";
HAnimSite976.translation = new X3D.SFVec3f([-0.244,1.1388,-0.04]);
let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "sitebox";
HAnimSite976YYY.children = new X3D.MFNode();

HAnimSite976ZZZ.children[0] = Shape977;

HAnimSegment949ZZZ.children[12] = HAnimSite976;

HAnimJoint948YYY.children = new X3D.MFNode();

HAnimJoint948ZZZ.children[0] = HAnimSegment949;

let HAnimJoint978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint978.name = "r_elbow";
HAnimJoint978.DEF = "Joe_r_elbow";
HAnimJoint978.center = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
HAnimJoint978.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint978.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment979 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment979.name = "r_forearm";
HAnimSegment979.DEF = "Joe_r_forearm";
let Shape980 = browser.currentScene.createNode("Shape");
let Appearance981 = browser.currentScene.createNode("Appearance");
Appearance981.USE = "SegmentLine";
appearance = Appearance981;

let IndexedLineSet982 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet982.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate983 = browser.currentScene.createNode("Coordinate");
Coordinate983.point = new X3D.MFVec3f([-0.2,1.1388,-0.04,-0.2,0.89,-0.04]);
coord = Coordinate983;

geometry = IndexedLineSet982;

HAnimSegment979YYY.children = new X3D.MFNode();

HAnimSegment979ZZZ.children[0] = Shape980;

let Transform984 = browser.currentScene.createNode("Transform");
Transform984.translation = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
let Shape985 = browser.currentScene.createNode("Shape");
Shape985.USE = "jointbox";
Transform984YYY.child = new X3D.undefined();

Transform984ZZZ.child[0] = Shape985;

HAnimSegment979ZZZ.children[1] = Transform984;

let Transform986 = browser.currentScene.createNode("Transform");
Transform986.translation = new X3D.SFVec3f([-0.2,1.1388,0.013]);
let Shape987 = browser.currentScene.createNode("Shape");
Shape987.USE = "skinsphere";
Transform986YYY.child = new X3D.undefined();

Transform986ZZZ.child[0] = Shape987;

HAnimSegment979ZZZ.children[2] = Transform986;

let Transform988 = browser.currentScene.createNode("Transform");
Transform988.translation = new X3D.SFVec3f([-0.225,1,-0.01]);
let Shape989 = browser.currentScene.createNode("Shape");
Shape989.USE = "skinsphere";
Transform988YYY.child = new X3D.undefined();

Transform988ZZZ.child[0] = Shape989;

HAnimSegment979ZZZ.children[3] = Transform988;

let Transform990 = browser.currentScene.createNode("Transform");
Transform990.translation = new X3D.SFVec3f([-0.225,1,-0.07]);
let Shape991 = browser.currentScene.createNode("Shape");
Shape991.USE = "skinsphere";
Transform990YYY.child = new X3D.undefined();

Transform990ZZZ.child[0] = Shape991;

HAnimSegment979ZZZ.children[4] = Transform990;

let Transform992 = browser.currentScene.createNode("Transform");
Transform992.translation = new X3D.SFVec3f([-0.185,1,-0.01]);
let Shape993 = browser.currentScene.createNode("Shape");
Shape993.USE = "skinsphere";
Transform992YYY.child = new X3D.undefined();

Transform992ZZZ.child[0] = Shape993;

HAnimSegment979ZZZ.children[5] = Transform992;

let Transform994 = browser.currentScene.createNode("Transform");
Transform994.translation = new X3D.SFVec3f([-0.185,1,-0.07]);
let Shape995 = browser.currentScene.createNode("Shape");
Shape995.USE = "skinsphere";
Transform994YYY.child = new X3D.undefined();

Transform994ZZZ.child[0] = Shape995;

HAnimSegment979ZZZ.children[6] = Transform994;

let HAnimSite996 = browser.currentScene.createNode("HAnimSite");
HAnimSite996.name = "r_radial_styloid_pt";
HAnimSite996.DEF = "Joe_r_radial_styloid_pt";
HAnimSite996.translation = new X3D.SFVec3f([-0.2,0.9,-0.015]);
let Shape997 = browser.currentScene.createNode("Shape");
Shape997.USE = "sitebox";
HAnimSite996YYY.children = new X3D.MFNode();

HAnimSite996ZZZ.children[0] = Shape997;

HAnimSegment979ZZZ.children[7] = HAnimSite996;

let HAnimSite998 = browser.currentScene.createNode("HAnimSite");
HAnimSite998.name = "r_olecranon_pt";
HAnimSite998.DEF = "Joe_r_olecranon_pt";
HAnimSite998.translation = new X3D.SFVec3f([-0.2,1.1388,-0.08]);
let Shape999 = browser.currentScene.createNode("Shape");
Shape999.USE = "sitebox";
HAnimSite998YYY.children = new X3D.MFNode();

HAnimSite998ZZZ.children[0] = Shape999;

HAnimSegment979ZZZ.children[8] = HAnimSite998;

HAnimJoint978YYY.children = new X3D.MFNode();

HAnimJoint978ZZZ.children[0] = HAnimSegment979;

let HAnimJoint1000 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1000.name = "r_radiocarpal";
HAnimJoint1000.DEF = "Joe_r_radiocarpal";
HAnimJoint1000.center = new X3D.SFVec3f([-0.2,0.89,-0.04]);
HAnimJoint1000.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint1000.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment1001 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1001.name = "r_carpal";
HAnimSegment1001.DEF = "Joe_r_carpal";
let Shape1002 = browser.currentScene.createNode("Shape");
let Appearance1003 = browser.currentScene.createNode("Appearance");
Appearance1003.USE = "SegmentLine";
appearance = Appearance1003;

let IndexedLineSet1004 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1004.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate1005 = browser.currentScene.createNode("Coordinate");
Coordinate1005.point = new X3D.MFVec3f([-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]);
coord = Coordinate1005;

geometry = IndexedLineSet1004;

HAnimSegment1001YYY.children = new X3D.MFNode();

HAnimSegment1001ZZZ.children[0] = Shape1002;

let Transform1006 = browser.currentScene.createNode("Transform");
Transform1006.translation = new X3D.SFVec3f([-0.2,0.89,-0.04]);
let Shape1007 = browser.currentScene.createNode("Shape");
Shape1007.USE = "jointbox";
Transform1006YYY.child = new X3D.undefined();

Transform1006ZZZ.child[0] = Shape1007;

HAnimSegment1001ZZZ.children[1] = Transform1006;

let HAnimSite1008 = browser.currentScene.createNode("HAnimSite");
HAnimSite1008.name = "r_ulnar_styloid_pt";
HAnimSite1008.DEF = "Joe_r_ulnar_styloid_pt";
HAnimSite1008.translation = new X3D.SFVec3f([-0.2,0.9,-0.085]);
let Shape1009 = browser.currentScene.createNode("Shape");
Shape1009.USE = "sitebox";
HAnimSite1008YYY.children = new X3D.MFNode();

HAnimSite1008ZZZ.children[0] = Shape1009;

HAnimSegment1001ZZZ.children[2] = HAnimSite1008;

HAnimJoint1000YYY.children = new X3D.MFNode();

HAnimJoint1000ZZZ.children[0] = HAnimSegment1001;

let HAnimJoint1010 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1010.name = "r_carpometacarpal_1";
HAnimJoint1010.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint1010.center = new X3D.SFVec3f([-0.2,0.85,0]);
HAnimJoint1010.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint1010.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1011 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1011.name = "r_metacarpal_1";
HAnimSegment1011.DEF = "Joe_r_metacarpal_1";
let Shape1012 = browser.currentScene.createNode("Shape");
let Appearance1013 = browser.currentScene.createNode("Appearance");
Appearance1013.USE = "SegmentLine";
appearance = Appearance1013;

let IndexedLineSet1014 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1014.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new X3D.MFVec3f([-0.2,0.85,0,-0.2,0.82,0.03]);
coord = Coordinate1015;

geometry = IndexedLineSet1014;

HAnimSegment1011YYY.children = new X3D.MFNode();

HAnimSegment1011ZZZ.children[0] = Shape1012;

let Transform1016 = browser.currentScene.createNode("Transform");
Transform1016.translation = new X3D.SFVec3f([-0.2,0.85,0]);
let Shape1017 = browser.currentScene.createNode("Shape");
Shape1017.USE = "jointbox";
Transform1016YYY.child = new X3D.undefined();

Transform1016ZZZ.child[0] = Shape1017;

HAnimSegment1011ZZZ.children[1] = Transform1016;

HAnimJoint1010YYY.children = new X3D.MFNode();

HAnimJoint1010ZZZ.children[0] = HAnimSegment1011;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.name = "r_metacarpophalangeal_1";
HAnimJoint1018.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint1018.center = new X3D.SFVec3f([-0.2,0.82,0.03]);
HAnimJoint1018.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint1018.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1019.DEF = "Joe_r_carpal_proximal_phalanx_1";
let Shape1020 = browser.currentScene.createNode("Shape");
let Appearance1021 = browser.currentScene.createNode("Appearance");
Appearance1021.USE = "SegmentLine";
appearance = Appearance1021;

let IndexedLineSet1022 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1022.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new X3D.MFVec3f([-0.2,0.82,0.03,-0.2,0.8,0.05]);
coord = Coordinate1023;

geometry = IndexedLineSet1022;

HAnimSegment1019YYY.children = new X3D.MFNode();

HAnimSegment1019ZZZ.children[0] = Shape1020;

let Transform1024 = browser.currentScene.createNode("Transform");
Transform1024.translation = new X3D.SFVec3f([-0.2,0.82,0.03]);
let Shape1025 = browser.currentScene.createNode("Shape");
Shape1025.USE = "jointbox";
Transform1024YYY.child = new X3D.undefined();

Transform1024ZZZ.child[0] = Shape1025;

HAnimSegment1019ZZZ.children[1] = Transform1024;

HAnimJoint1018YYY.children = new X3D.MFNode();

HAnimJoint1018ZZZ.children[0] = HAnimSegment1019;

let HAnimJoint1026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1026.name = "r_carpal_interphalangeal_1";
HAnimJoint1026.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint1026.center = new X3D.SFVec3f([-0.2,0.8,0.05]);
HAnimJoint1026.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint1026.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1027.name = "r_carpal_distal_phalanx_1";
HAnimSegment1027.DEF = "Joe_r_carpal_distal_phalanx_1";
let Shape1028 = browser.currentScene.createNode("Shape");
let Appearance1029 = browser.currentScene.createNode("Appearance");
Appearance1029.USE = "SegmentLine";
appearance = Appearance1029;

let IndexedLineSet1030 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1030.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1031 = browser.currentScene.createNode("Coordinate");
Coordinate1031.point = new X3D.MFVec3f([-0.2,0.8,0.05,-0.2,0.78,0.07]);
coord = Coordinate1031;

geometry = IndexedLineSet1030;

HAnimSegment1027YYY.children = new X3D.MFNode();

HAnimSegment1027ZZZ.children[0] = Shape1028;

let Transform1032 = browser.currentScene.createNode("Transform");
Transform1032.DEF = "Thumbnail";
Transform1032.translation = new X3D.SFVec3f([-0.2,0.785,0.075]);
let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "skinsphere";
Transform1032YYY.child = new X3D.undefined();

Transform1032ZZZ.child[0] = Shape1033;

HAnimSegment1027ZZZ.children[1] = Transform1032;

let Transform1034 = browser.currentScene.createNode("Transform");
Transform1034.translation = new X3D.SFVec3f([-0.2,0.8,0.05]);
let Shape1035 = browser.currentScene.createNode("Shape");
Shape1035.USE = "jointbox";
Transform1034YYY.child = new X3D.undefined();

Transform1034ZZZ.child[0] = Shape1035;

HAnimSegment1027ZZZ.children[2] = Transform1034;

let HAnimSite1036 = browser.currentScene.createNode("HAnimSite");
HAnimSite1036.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1036.DEF = "Joe_r_carpal_distal_phalanx_1_tip";
HAnimSite1036.translation = new X3D.SFVec3f([-0.2,0.78,0.07]);
let Shape1037 = browser.currentScene.createNode("Shape");
Shape1037.USE = "sitebox";
HAnimSite1036YYY.children = new X3D.MFNode();

HAnimSite1036ZZZ.children[0] = Shape1037;

HAnimSegment1027ZZZ.children[3] = HAnimSite1036;

HAnimJoint1026YYY.children = new X3D.MFNode();

HAnimJoint1026ZZZ.children[0] = HAnimSegment1027;

HAnimJoint1018ZZZ.children[1] = HAnimJoint1026;

HAnimJoint1010ZZZ.children[1] = HAnimJoint1018;

HAnimJoint1000ZZZ.children[1] = HAnimJoint1010;

let HAnimJoint1038 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1038.name = "r_carpometacarpal_2";
HAnimJoint1038.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint1038.center = new X3D.SFVec3f([-0.2,0.84,-0.015]);
HAnimJoint1038.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint1038.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1039 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1039.name = "r_metacarpal_2";
HAnimSegment1039.DEF = "Joe_r_metacarpal_2";
let Shape1040 = browser.currentScene.createNode("Shape");
let Appearance1041 = browser.currentScene.createNode("Appearance");
Appearance1041.USE = "SegmentLine";
appearance = Appearance1041;

let IndexedLineSet1042 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1042.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1043 = browser.currentScene.createNode("Coordinate");
Coordinate1043.point = new X3D.MFVec3f([-0.2,0.84,-0.015,-0.2,0.793,-0.015]);
coord = Coordinate1043;

geometry = IndexedLineSet1042;

HAnimSegment1039YYY.children = new X3D.MFNode();

HAnimSegment1039ZZZ.children[0] = Shape1040;

let Transform1044 = browser.currentScene.createNode("Transform");
Transform1044.translation = new X3D.SFVec3f([-0.2,0.84,-0.015]);
let Shape1045 = browser.currentScene.createNode("Shape");
Shape1045.USE = "jointbox";
Transform1044YYY.child = new X3D.undefined();

Transform1044ZZZ.child[0] = Shape1045;

HAnimSegment1039ZZZ.children[1] = Transform1044;

let HAnimSite1046 = browser.currentScene.createNode("HAnimSite");
HAnimSite1046.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1046.DEF = "Joe_r_metacarpal_phalanx_2_pt";
HAnimSite1046.translation = new X3D.SFVec3f([-0.2,0.793,-0.005]);
let Shape1047 = browser.currentScene.createNode("Shape");
Shape1047.USE = "sitebox";
HAnimSite1046YYY.children = new X3D.MFNode();

HAnimSite1046ZZZ.children[0] = Shape1047;

HAnimSegment1039ZZZ.children[2] = HAnimSite1046;

HAnimJoint1038YYY.children = new X3D.MFNode();

HAnimJoint1038ZZZ.children[0] = HAnimSegment1039;

let HAnimJoint1048 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1048.name = "r_metacarpophalangeal_2";
HAnimJoint1048.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint1048.center = new X3D.SFVec3f([-0.2,0.793,-0.015]);
HAnimJoint1048.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint1048.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimSegment1049 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1049.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1049.DEF = "Joe_r_carpal_proximal_phalanx_2";
let Shape1050 = browser.currentScene.createNode("Shape");
let Appearance1051 = browser.currentScene.createNode("Appearance");
Appearance1051.USE = "SegmentLine";
appearance = Appearance1051;

let IndexedLineSet1052 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1052.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1053 = browser.currentScene.createNode("Coordinate");
Coordinate1053.point = new X3D.MFVec3f([-0.2,0.793,-0.015,-0.2,0.745,-0.015]);
coord = Coordinate1053;

geometry = IndexedLineSet1052;

HAnimSegment1049YYY.children = new X3D.MFNode();

HAnimSegment1049ZZZ.children[0] = Shape1050;

let Transform1054 = browser.currentScene.createNode("Transform");
Transform1054.translation = new X3D.SFVec3f([-0.2,0.793,-0.015]);
let Shape1055 = browser.currentScene.createNode("Shape");
Shape1055.USE = "jointbox";
Transform1054YYY.child = new X3D.undefined();

Transform1054ZZZ.child[0] = Shape1055;

HAnimSegment1049ZZZ.children[1] = Transform1054;

HAnimJoint1048YYY.children = new X3D.MFNode();

HAnimJoint1048ZZZ.children[0] = HAnimSegment1049;

let HAnimJoint1056 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1056.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1056.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint1056.center = new X3D.SFVec3f([-0.2,0.745,-0.015]);
HAnimJoint1056.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint1056.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1057 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1057.name = "r_carpal_middle_phalanx_2";
HAnimSegment1057.DEF = "Joe_r_carpal_middle_phalanx_2";
let Shape1058 = browser.currentScene.createNode("Shape");
let Appearance1059 = browser.currentScene.createNode("Appearance");
Appearance1059.USE = "SegmentLine";
appearance = Appearance1059;

let IndexedLineSet1060 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1060.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1061 = browser.currentScene.createNode("Coordinate");
Coordinate1061.point = new X3D.MFVec3f([-0.2,0.745,-0.015,-0.2,0.72,-0.015]);
coord = Coordinate1061;

geometry = IndexedLineSet1060;

HAnimSegment1057YYY.children = new X3D.MFNode();

HAnimSegment1057ZZZ.children[0] = Shape1058;

let Transform1062 = browser.currentScene.createNode("Transform");
Transform1062.translation = new X3D.SFVec3f([-0.2,0.745,-0.015]);
let Shape1063 = browser.currentScene.createNode("Shape");
Shape1063.USE = "jointbox";
Transform1062YYY.child = new X3D.undefined();

Transform1062ZZZ.child[0] = Shape1063;

HAnimSegment1057ZZZ.children[1] = Transform1062;

HAnimJoint1056YYY.children = new X3D.MFNode();

HAnimJoint1056ZZZ.children[0] = HAnimSegment1057;

let HAnimJoint1064 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1064.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1064.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint1064.center = new X3D.SFVec3f([-0.2,0.72,-0.015]);
HAnimJoint1064.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint1064.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1065 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1065.name = "r_carpal_distal_phalanx_2";
HAnimSegment1065.DEF = "Joe_r_carpal_distal_phalanx_2";
let Shape1066 = browser.currentScene.createNode("Shape");
let Appearance1067 = browser.currentScene.createNode("Appearance");
Appearance1067.USE = "SegmentLine";
appearance = Appearance1067;

let IndexedLineSet1068 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1068.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1069 = browser.currentScene.createNode("Coordinate");
Coordinate1069.point = new X3D.MFVec3f([-0.2,0.72,-0.015,-0.2,0.695,-0.015]);
coord = Coordinate1069;

geometry = IndexedLineSet1068;

HAnimSegment1065YYY.children = new X3D.MFNode();

HAnimSegment1065ZZZ.children[0] = Shape1066;

let Transform1070 = browser.currentScene.createNode("Transform");
Transform1070.translation = new X3D.SFVec3f([-0.2,0.72,-0.015]);
let Shape1071 = browser.currentScene.createNode("Shape");
Shape1071.USE = "jointbox";
Transform1070YYY.child = new X3D.undefined();

Transform1070ZZZ.child[0] = Shape1071;

HAnimSegment1065ZZZ.children[1] = Transform1070;

let HAnimSite1072 = browser.currentScene.createNode("HAnimSite");
HAnimSite1072.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1072.DEF = "Joe_r_carpal_distal_phalanx_2_tip";
HAnimSite1072.translation = new X3D.SFVec3f([-0.2,0.695,-0.015]);
let Shape1073 = browser.currentScene.createNode("Shape");
Shape1073.USE = "sitebox";
HAnimSite1072YYY.children = new X3D.MFNode();

HAnimSite1072ZZZ.children[0] = Shape1073;

HAnimSegment1065ZZZ.children[2] = HAnimSite1072;

HAnimJoint1064YYY.children = new X3D.MFNode();

HAnimJoint1064ZZZ.children[0] = HAnimSegment1065;

HAnimJoint1056ZZZ.children[1] = HAnimJoint1064;

HAnimJoint1048ZZZ.children[1] = HAnimJoint1056;

HAnimJoint1038ZZZ.children[1] = HAnimJoint1048;

HAnimJoint1000ZZZ.children[2] = HAnimJoint1038;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpometacarpal_3";
HAnimJoint1074.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint1074.center = new X3D.SFVec3f([-0.2,0.835,-0.04]);
HAnimJoint1074.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint1074.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.name = "r_metacarpal_3";
HAnimSegment1075.DEF = "Joe_r_metacarpal_3";
let Shape1076 = browser.currentScene.createNode("Shape");
let Appearance1077 = browser.currentScene.createNode("Appearance");
Appearance1077.USE = "SegmentLine";
appearance = Appearance1077;

let IndexedLineSet1078 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1078.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1079 = browser.currentScene.createNode("Coordinate");
Coordinate1079.point = new X3D.MFVec3f([-0.2,0.835,-0.04,-0.2,0.788,-0.04]);
coord = Coordinate1079;

geometry = IndexedLineSet1078;

HAnimSegment1075YYY.children = new X3D.MFNode();

HAnimSegment1075ZZZ.children[0] = Shape1076;

let Transform1080 = browser.currentScene.createNode("Transform");
Transform1080.translation = new X3D.SFVec3f([-0.2,0.835,-0.04]);
let Shape1081 = browser.currentScene.createNode("Shape");
Shape1081.USE = "jointbox";
Transform1080YYY.child = new X3D.undefined();

Transform1080ZZZ.child[0] = Shape1081;

HAnimSegment1075ZZZ.children[1] = Transform1080;

HAnimJoint1074YYY.children = new X3D.MFNode();

HAnimJoint1074ZZZ.children[0] = HAnimSegment1075;

let HAnimJoint1082 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1082.name = "r_metacarpophalangeal_3";
HAnimJoint1082.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint1082.center = new X3D.SFVec3f([-0.2,0.788,-0.04]);
HAnimJoint1082.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint1082.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment1083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1083.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1083.DEF = "Joe_r_carpal_proximal_phalanx_3";
let Shape1084 = browser.currentScene.createNode("Shape");
let Appearance1085 = browser.currentScene.createNode("Appearance");
Appearance1085.USE = "SegmentLine";
appearance = Appearance1085;

let IndexedLineSet1086 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1086.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1087 = browser.currentScene.createNode("Coordinate");
Coordinate1087.point = new X3D.MFVec3f([-0.2,0.788,-0.04,-0.2,0.74,-0.04]);
coord = Coordinate1087;

geometry = IndexedLineSet1086;

HAnimSegment1083YYY.children = new X3D.MFNode();

HAnimSegment1083ZZZ.children[0] = Shape1084;

let Transform1088 = browser.currentScene.createNode("Transform");
Transform1088.translation = new X3D.SFVec3f([-0.2,0.788,-0.04]);
let Shape1089 = browser.currentScene.createNode("Shape");
Shape1089.USE = "jointbox";
Transform1088YYY.child = new X3D.undefined();

Transform1088ZZZ.child[0] = Shape1089;

HAnimSegment1083ZZZ.children[1] = Transform1088;

HAnimJoint1082YYY.children = new X3D.MFNode();

HAnimJoint1082ZZZ.children[0] = HAnimSegment1083;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1090.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint1090.center = new X3D.SFVec3f([-0.2,0.74,-0.04]);
HAnimJoint1090.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint1090.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.name = "r_carpal_middle_phalanx_3";
HAnimSegment1091.DEF = "Joe_r_carpal_middle_phalanx_3";
let Shape1092 = browser.currentScene.createNode("Shape");
let Appearance1093 = browser.currentScene.createNode("Appearance");
Appearance1093.USE = "SegmentLine";
appearance = Appearance1093;

let IndexedLineSet1094 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1094.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1095 = browser.currentScene.createNode("Coordinate");
Coordinate1095.point = new X3D.MFVec3f([-0.2,0.74,-0.04,-0.2,0.7142,-0.04]);
coord = Coordinate1095;

geometry = IndexedLineSet1094;

HAnimSegment1091YYY.children = new X3D.MFNode();

HAnimSegment1091ZZZ.children[0] = Shape1092;

let Transform1096 = browser.currentScene.createNode("Transform");
Transform1096.translation = new X3D.SFVec3f([-0.2,0.74,-0.04]);
let Shape1097 = browser.currentScene.createNode("Shape");
Shape1097.USE = "jointbox";
Transform1096YYY.child = new X3D.undefined();

Transform1096ZZZ.child[0] = Shape1097;

HAnimSegment1091ZZZ.children[1] = Transform1096;

HAnimJoint1090YYY.children = new X3D.MFNode();

HAnimJoint1090ZZZ.children[0] = HAnimSegment1091;

let HAnimJoint1098 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1098.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1098.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint1098.center = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
HAnimJoint1098.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint1098.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1099 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1099.name = "r_carpal_distal_phalanx_3";
HAnimSegment1099.DEF = "Joe_r_carpal_distal_phalanx_3";
let Shape1100 = browser.currentScene.createNode("Shape");
let Appearance1101 = browser.currentScene.createNode("Appearance");
Appearance1101.USE = "SegmentLine";
appearance = Appearance1101;

let IndexedLineSet1102 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1102.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1103 = browser.currentScene.createNode("Coordinate");
Coordinate1103.point = new X3D.MFVec3f([-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]);
coord = Coordinate1103;

geometry = IndexedLineSet1102;

HAnimSegment1099YYY.children = new X3D.MFNode();

HAnimSegment1099ZZZ.children[0] = Shape1100;

let Transform1104 = browser.currentScene.createNode("Transform");
Transform1104.translation = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "jointbox";
Transform1104YYY.child = new X3D.undefined();

Transform1104ZZZ.child[0] = Shape1105;

HAnimSegment1099ZZZ.children[1] = Transform1104;

let HAnimSite1106 = browser.currentScene.createNode("HAnimSite");
HAnimSite1106.name = "r_dactylion_pt";
HAnimSite1106.DEF = "Joe_r_dactylion_pt";
HAnimSite1106.translation = new X3D.SFVec3f([-0.2,0.68,-0.04]);
let Shape1107 = browser.currentScene.createNode("Shape");
Shape1107.USE = "sitebox";
HAnimSite1106YYY.children = new X3D.MFNode();

HAnimSite1106ZZZ.children[0] = Shape1107;

HAnimSegment1099ZZZ.children[2] = HAnimSite1106;

let HAnimSite1108 = browser.currentScene.createNode("HAnimSite");
HAnimSite1108.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1108.DEF = "Joe_r_carpal_distal_phalanx_3_tip";
HAnimSite1108.translation = new X3D.SFVec3f([-0.2,0.68,-0.04]);
let Shape1109 = browser.currentScene.createNode("Shape");
Shape1109.USE = "sitebox";
HAnimSite1108YYY.children = new X3D.MFNode();

HAnimSite1108ZZZ.children[0] = Shape1109;

HAnimSegment1099ZZZ.children[3] = HAnimSite1108;

HAnimJoint1098YYY.children = new X3D.MFNode();

HAnimJoint1098ZZZ.children[0] = HAnimSegment1099;

HAnimJoint1090ZZZ.children[1] = HAnimJoint1098;

HAnimJoint1082ZZZ.children[1] = HAnimJoint1090;

HAnimJoint1074ZZZ.children[1] = HAnimJoint1082;

HAnimJoint1000ZZZ.children[3] = HAnimJoint1074;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpometacarpal_4";
HAnimJoint1110.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint1110.center = new X3D.SFVec3f([-0.2,0.835,-0.065]);
HAnimJoint1110.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint1110.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimSegment1111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1111.name = "r_metacarpal_4";
HAnimSegment1111.DEF = "Joe_r_metacarpal_4";
let Shape1112 = browser.currentScene.createNode("Shape");
let Appearance1113 = browser.currentScene.createNode("Appearance");
Appearance1113.USE = "SegmentLine";
appearance = Appearance1113;

let IndexedLineSet1114 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1114.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1115 = browser.currentScene.createNode("Coordinate");
Coordinate1115.point = new X3D.MFVec3f([-0.2,0.835,-0.065,-0.2,0.793,-0.065]);
coord = Coordinate1115;

geometry = IndexedLineSet1114;

HAnimSegment1111YYY.children = new X3D.MFNode();

HAnimSegment1111ZZZ.children[0] = Shape1112;

let Transform1116 = browser.currentScene.createNode("Transform");
Transform1116.translation = new X3D.SFVec3f([-0.2,0.835,-0.065]);
let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "jointbox";
Transform1116YYY.child = new X3D.undefined();

Transform1116ZZZ.child[0] = Shape1117;

HAnimSegment1111ZZZ.children[1] = Transform1116;

HAnimJoint1110YYY.children = new X3D.MFNode();

HAnimJoint1110ZZZ.children[0] = HAnimSegment1111;

let HAnimJoint1118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1118.name = "r_metacarpophalangeal_4";
HAnimJoint1118.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint1118.center = new X3D.SFVec3f([-0.2,0.793,-0.065]);
HAnimJoint1118.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint1118.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimSegment1119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1119.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1119.DEF = "Joe_r_carpal_proximal_phalanx_4";
let Shape1120 = browser.currentScene.createNode("Shape");
let Appearance1121 = browser.currentScene.createNode("Appearance");
Appearance1121.USE = "SegmentLine";
appearance = Appearance1121;

let IndexedLineSet1122 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1122.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1123 = browser.currentScene.createNode("Coordinate");
Coordinate1123.point = new X3D.MFVec3f([-0.2,0.793,-0.065,-0.2,0.74,-0.065]);
coord = Coordinate1123;

geometry = IndexedLineSet1122;

HAnimSegment1119YYY.children = new X3D.MFNode();

HAnimSegment1119ZZZ.children[0] = Shape1120;

let Transform1124 = browser.currentScene.createNode("Transform");
Transform1124.translation = new X3D.SFVec3f([-0.2,0.793,-0.065]);
let Shape1125 = browser.currentScene.createNode("Shape");
Shape1125.USE = "jointbox";
Transform1124YYY.child = new X3D.undefined();

Transform1124ZZZ.child[0] = Shape1125;

HAnimSegment1119ZZZ.children[1] = Transform1124;

HAnimJoint1118YYY.children = new X3D.MFNode();

HAnimJoint1118ZZZ.children[0] = HAnimSegment1119;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1126.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint1126.center = new X3D.SFVec3f([-0.2,0.74,-0.065]);
HAnimJoint1126.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint1126.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1127.name = "r_carpal_middle_phalanx_4";
HAnimSegment1127.DEF = "Joe_r_carpal_middle_phalanx_4";
let Shape1128 = browser.currentScene.createNode("Shape");
let Appearance1129 = browser.currentScene.createNode("Appearance");
Appearance1129.USE = "SegmentLine";
appearance = Appearance1129;

let IndexedLineSet1130 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1130.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1131 = browser.currentScene.createNode("Coordinate");
Coordinate1131.point = new X3D.MFVec3f([-0.2,0.74,-0.065,-0.2,0.7177,-0.065]);
coord = Coordinate1131;

geometry = IndexedLineSet1130;

HAnimSegment1127YYY.children = new X3D.MFNode();

HAnimSegment1127ZZZ.children[0] = Shape1128;

let Transform1132 = browser.currentScene.createNode("Transform");
Transform1132.translation = new X3D.SFVec3f([-0.2,0.74,-0.065]);
let Shape1133 = browser.currentScene.createNode("Shape");
Shape1133.USE = "jointbox";
Transform1132YYY.child = new X3D.undefined();

Transform1132ZZZ.child[0] = Shape1133;

HAnimSegment1127ZZZ.children[1] = Transform1132;

HAnimJoint1126YYY.children = new X3D.MFNode();

HAnimJoint1126ZZZ.children[0] = HAnimSegment1127;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1134.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint1134.center = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
HAnimJoint1134.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint1134.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1135.name = "r_carpal_distal_phalanx_4";
HAnimSegment1135.DEF = "Joe_r_carpal_distal_phalanx_4";
let Shape1136 = browser.currentScene.createNode("Shape");
let Appearance1137 = browser.currentScene.createNode("Appearance");
Appearance1137.USE = "SegmentLine";
appearance = Appearance1137;

let IndexedLineSet1138 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1138.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1139 = browser.currentScene.createNode("Coordinate");
Coordinate1139.point = new X3D.MFVec3f([-0.2,0.7177,-0.065,-0.2,0.695,-0.065]);
coord = Coordinate1139;

geometry = IndexedLineSet1138;

HAnimSegment1135YYY.children = new X3D.MFNode();

HAnimSegment1135ZZZ.children[0] = Shape1136;

let Transform1140 = browser.currentScene.createNode("Transform");
Transform1140.translation = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
let Shape1141 = browser.currentScene.createNode("Shape");
Shape1141.USE = "jointbox";
Transform1140YYY.child = new X3D.undefined();

Transform1140ZZZ.child[0] = Shape1141;

HAnimSegment1135ZZZ.children[1] = Transform1140;

let HAnimSite1142 = browser.currentScene.createNode("HAnimSite");
HAnimSite1142.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1142.DEF = "Joe_r_carpal_distal_phalanx_4_tip";
HAnimSite1142.translation = new X3D.SFVec3f([-0.2,0.695,-0.065]);
let Shape1143 = browser.currentScene.createNode("Shape");
Shape1143.USE = "sitebox";
HAnimSite1142YYY.children = new X3D.MFNode();

HAnimSite1142ZZZ.children[0] = Shape1143;

HAnimSegment1135ZZZ.children[2] = HAnimSite1142;

HAnimJoint1134YYY.children = new X3D.MFNode();

HAnimJoint1134ZZZ.children[0] = HAnimSegment1135;

HAnimJoint1126ZZZ.children[1] = HAnimJoint1134;

HAnimJoint1118ZZZ.children[1] = HAnimJoint1126;

HAnimJoint1110ZZZ.children[1] = HAnimJoint1118;

HAnimJoint1000ZZZ.children[4] = HAnimJoint1110;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.name = "r_carpometacarpal_5";
HAnimJoint1144.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint1144.center = new X3D.SFVec3f([-0.2,0.84,-0.085]);
HAnimJoint1144.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint1144.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimSegment1145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1145.name = "r_metacarpal_5";
HAnimSegment1145.DEF = "Joe_r_metacarpal_5";
let Shape1146 = browser.currentScene.createNode("Shape");
let Appearance1147 = browser.currentScene.createNode("Appearance");
Appearance1147.USE = "SegmentLine";
appearance = Appearance1147;

let IndexedLineSet1148 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1148.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1149 = browser.currentScene.createNode("Coordinate");
Coordinate1149.point = new X3D.MFVec3f([-0.2,0.84,-0.085,-0.2,0.79,-0.085]);
coord = Coordinate1149;

geometry = IndexedLineSet1148;

HAnimSegment1145YYY.children = new X3D.MFNode();

HAnimSegment1145ZZZ.children[0] = Shape1146;

let Transform1150 = browser.currentScene.createNode("Transform");
Transform1150.translation = new X3D.SFVec3f([-0.2,0.84,-0.085]);
let Shape1151 = browser.currentScene.createNode("Shape");
Shape1151.USE = "jointbox";
Transform1150YYY.child = new X3D.undefined();

Transform1150ZZZ.child[0] = Shape1151;

HAnimSegment1145ZZZ.children[1] = Transform1150;

let HAnimSite1152 = browser.currentScene.createNode("HAnimSite");
HAnimSite1152.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1152.DEF = "Joe_r_metacarpal_phalanx_5_pt";
HAnimSite1152.translation = new X3D.SFVec3f([-0.2,0.79,-0.095]);
let Shape1153 = browser.currentScene.createNode("Shape");
Shape1153.USE = "sitebox";
HAnimSite1152YYY.children = new X3D.MFNode();

HAnimSite1152ZZZ.children[0] = Shape1153;

HAnimSegment1145ZZZ.children[2] = HAnimSite1152;

HAnimJoint1144YYY.children = new X3D.MFNode();

HAnimJoint1144ZZZ.children[0] = HAnimSegment1145;

let HAnimJoint1154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1154.name = "r_metacarpophalangeal_5";
HAnimJoint1154.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint1154.center = new X3D.SFVec3f([-0.2,0.79,-0.085]);
HAnimJoint1154.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint1154.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimSegment1155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1155.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1155.DEF = "Joe_r_carpal_proximal_phalanx_5";
let Shape1156 = browser.currentScene.createNode("Shape");
let Appearance1157 = browser.currentScene.createNode("Appearance");
Appearance1157.USE = "SegmentLine";
appearance = Appearance1157;

let IndexedLineSet1158 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1158.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1159 = browser.currentScene.createNode("Coordinate");
Coordinate1159.point = new X3D.MFVec3f([-0.2,0.79,-0.085,-0.2,0.755,-0.085]);
coord = Coordinate1159;

geometry = IndexedLineSet1158;

HAnimSegment1155YYY.children = new X3D.MFNode();

HAnimSegment1155ZZZ.children[0] = Shape1156;

let Transform1160 = browser.currentScene.createNode("Transform");
Transform1160.translation = new X3D.SFVec3f([-0.2,0.79,-0.085]);
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "jointbox";
Transform1160YYY.child = new X3D.undefined();

Transform1160ZZZ.child[0] = Shape1161;

HAnimSegment1155ZZZ.children[1] = Transform1160;

HAnimJoint1154YYY.children = new X3D.MFNode();

HAnimJoint1154ZZZ.children[0] = HAnimSegment1155;

let HAnimJoint1162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1162.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1162.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint1162.center = new X3D.SFVec3f([-0.2,0.755,-0.085]);
HAnimJoint1162.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint1162.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimSegment1163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1163.name = "r_carpal_middle_phalanx_5";
HAnimSegment1163.DEF = "Joe_r_carpal_middle_phalanx_5";
let Shape1164 = browser.currentScene.createNode("Shape");
let Appearance1165 = browser.currentScene.createNode("Appearance");
Appearance1165.USE = "SegmentLine";
appearance = Appearance1165;

let IndexedLineSet1166 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1166.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1167 = browser.currentScene.createNode("Coordinate");
Coordinate1167.point = new X3D.MFVec3f([-0.2,0.755,-0.085,-0.2,0.735,-0.085]);
coord = Coordinate1167;

geometry = IndexedLineSet1166;

HAnimSegment1163YYY.children = new X3D.MFNode();

HAnimSegment1163ZZZ.children[0] = Shape1164;

let Transform1168 = browser.currentScene.createNode("Transform");
Transform1168.translation = new X3D.SFVec3f([-0.2,0.755,-0.085]);
let Shape1169 = browser.currentScene.createNode("Shape");
Shape1169.USE = "jointbox";
Transform1168YYY.child = new X3D.undefined();

Transform1168ZZZ.child[0] = Shape1169;

HAnimSegment1163ZZZ.children[1] = Transform1168;

HAnimJoint1162YYY.children = new X3D.MFNode();

HAnimJoint1162ZZZ.children[0] = HAnimSegment1163;

let HAnimJoint1170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1170.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1170.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint1170.center = new X3D.SFVec3f([-0.2,0.735,-0.09]);
HAnimJoint1170.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint1170.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
let HAnimSegment1171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1171.name = "r_carpal_distal_phalanx_5";
HAnimSegment1171.DEF = "Joe_r_carpal_distal_phalanx_5";
let Shape1172 = browser.currentScene.createNode("Shape");
let Appearance1173 = browser.currentScene.createNode("Appearance");
Appearance1173.USE = "SegmentLine";
appearance = Appearance1173;

let IndexedLineSet1174 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1174.coordIndex = new X3D.MFInt32([0,1,-1]);
let Coordinate1175 = browser.currentScene.createNode("Coordinate");
Coordinate1175.point = new X3D.MFVec3f([-0.2,0.735,-0.085,-0.2,0.72,-0.085]);
coord = Coordinate1175;

geometry = IndexedLineSet1174;

HAnimSegment1171YYY.children = new X3D.MFNode();

HAnimSegment1171ZZZ.children[0] = Shape1172;

let Transform1176 = browser.currentScene.createNode("Transform");
Transform1176.translation = new X3D.SFVec3f([-0.2,0.735,-0.085]);
let Shape1177 = browser.currentScene.createNode("Shape");
Shape1177.USE = "jointbox";
Transform1176YYY.child = new X3D.undefined();

Transform1176ZZZ.child[0] = Shape1177;

HAnimSegment1171ZZZ.children[1] = Transform1176;

let HAnimSite1178 = browser.currentScene.createNode("HAnimSite");
HAnimSite1178.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1178.DEF = "Joe_r_carpal_distal_phalanx_5_tip";
HAnimSite1178.translation = new X3D.SFVec3f([-0.2,0.72,-0.085]);
let Shape1179 = browser.currentScene.createNode("Shape");
Shape1179.USE = "sitebox";
HAnimSite1178YYY.children = new X3D.MFNode();

HAnimSite1178ZZZ.children[0] = Shape1179;

HAnimSegment1171ZZZ.children[2] = HAnimSite1178;

HAnimJoint1170YYY.children = new X3D.MFNode();

HAnimJoint1170ZZZ.children[0] = HAnimSegment1171;

HAnimJoint1162ZZZ.children[1] = HAnimJoint1170;

HAnimJoint1154ZZZ.children[1] = HAnimJoint1162;

HAnimJoint1144ZZZ.children[1] = HAnimJoint1154;

HAnimJoint1000ZZZ.children[5] = HAnimJoint1144;

HAnimJoint978ZZZ.children[1] = HAnimJoint1000;

HAnimJoint948ZZZ.children[1] = HAnimJoint978;

HAnimJoint932ZZZ.children[1] = HAnimJoint948;

HAnimJoint922ZZZ.children[1] = HAnimJoint932;

HAnimJoint556ZZZ.children[3] = HAnimJoint922;

HAnimJoint548ZZZ.children[1] = HAnimJoint556;

HAnimJoint540ZZZ.children[1] = HAnimJoint548;

HAnimJoint530ZZZ.children[1] = HAnimJoint540;

HAnimJoint522ZZZ.children[1] = HAnimJoint530;

HAnimJoint514ZZZ.children[1] = HAnimJoint522;

HAnimJoint506ZZZ.children[1] = HAnimJoint514;

HAnimJoint498ZZZ.children[1] = HAnimJoint506;

HAnimJoint486ZZZ.children[1] = HAnimJoint498;

HAnimJoint476ZZZ.children[1] = HAnimJoint486;

HAnimJoint468ZZZ.children[1] = HAnimJoint476;

HAnimJoint460ZZZ.children[1] = HAnimJoint468;

HAnimJoint452ZZZ.children[1] = HAnimJoint460;

HAnimJoint426ZZZ.children[1] = HAnimJoint452;

HAnimJoint418ZZZ.children[1] = HAnimJoint426;

HAnimJoint410ZZZ.children[1] = HAnimJoint418;

HAnimJoint395ZZZ.children[2] = HAnimJoint410;

HAnimJoint81ZZZ.children[2] = HAnimJoint395;

joints[1] = HAnimJoint81;

let Shape1180 = browser.currentScene.createNode("Shape");
Shape1180.DEF = "SkinShape";
let Appearance1181 = browser.currentScene.createNode("Appearance");
Appearance1181.DEF = "SkinAppearance";
let Material1182 = browser.currentScene.createNode("Material");
Material1182.DEF = "SkinMaterial";
Material1182.ambientIntensity = 0.6;
Material1182.diffuseColor = new X3D.SFColor([1,1,1]);
Material1182.shininess = 0.6;
Material1182.transparency = 0.2;
material = Material1182;

let ImageTexture1183 = browser.currentScene.createNode("ImageTexture");
ImageTexture1183.DEF = "zBlueSpiralBkg2";
ImageTexture1183.description = "Blue Spiral Pattern";
ImageTexture1183.url = new X3D.MFString([new X3D.SFString("zBlueSpiralBkg2.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")]);
texture = ImageTexture1183;

appearance = Appearance1181;

let IndexedFaceSet1184 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1184.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1184.creaseAngle = 3.1;
let Color1185 = browser.currentScene.createNode("Color");
Color1185.color = new X3D.MFColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
color = Color1185;

let Coordinate1186 = browser.currentScene.createNode("Coordinate");
Coordinate1186.DEF = "TheSkinCoord";
Coordinate1186.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
coord = Coordinate1186;

geometry = IndexedFaceSet1184;

skin[2] = Shape1180;

let Coordinate1187 = browser.currentScene.createNode("Coordinate");
Coordinate1187.USE = "TheSkinCoord";
skinCoord = Coordinate1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_humanoid_root";
joints[3] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_sacroiliac";
joints[4] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_vl5";
joints[5] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_vl4";
joints[6] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_vl3";
joints[7] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_vl2";
joints[8] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_vl1";
joints[9] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_vt12";
joints[10] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_vt11";
joints[11] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_vt10";
joints[12] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_vt9";
joints[13] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_vt8";
joints[14] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_vt7";
joints[15] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_vt6";
joints[16] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_vt5";
joints[17] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vt4";
joints[18] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vt3";
joints[19] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vt2";
joints[20] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vt1";
joints[21] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vc7";
joints[22] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vc6";
joints[23] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vc5";
joints[24] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vc4";
joints[25] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_vc3";
joints[26] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_vc2";
joints[27] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_vc1";
joints[28] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_skullbase";
joints[29] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_l_acromioclavicular";
joints[30] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_r_acromioclavicular";
joints[31] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_l_carpal_distal_interphalangeal_2";
joints[32] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_r_carpal_distal_interphalangeal_2";
joints[33] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_l_carpal_distal_interphalangeal_3";
joints[34] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_r_carpal_distal_interphalangeal_3";
joints[35] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_l_carpal_distal_interphalangeal_4";
joints[36] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_r_carpal_distal_interphalangeal_4";
joints[37] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_l_carpal_distal_interphalangeal_5";
joints[38] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_r_carpal_distal_interphalangeal_5";
joints[39] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_l_carpal_interphalangeal_1";
joints[40] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_r_carpal_interphalangeal_1";
joints[41] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_l_carpal_proximal_interphalangeal_2";
joints[42] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_r_carpal_proximal_interphalangeal_2";
joints[43] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_l_carpal_proximal_interphalangeal_3";
joints[44] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_r_carpal_proximal_interphalangeal_3";
joints[45] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_l_carpal_proximal_interphalangeal_4";
joints[46] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_r_carpal_proximal_interphalangeal_4";
joints[47] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_l_carpal_proximal_interphalangeal_5";
joints[48] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_r_carpal_proximal_interphalangeal_5";
joints[49] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_l_carpometacarpal_1";
joints[50] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_r_carpometacarpal_1";
joints[51] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_l_carpometacarpal_2";
joints[52] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_r_carpometacarpal_2";
joints[53] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_l_carpometacarpal_3";
joints[54] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_r_carpometacarpal_3";
joints[55] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_l_carpometacarpal_4";
joints[56] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_r_carpometacarpal_4";
joints[57] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_l_carpometacarpal_5";
joints[58] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_r_carpometacarpal_5";
joints[59] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_l_elbow";
joints[60] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_r_elbow";
joints[61] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_l_eyeball_joint";
joints[62] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_r_eyeball_joint";
joints[63] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_l_hip";
joints[64] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_r_hip";
joints[65] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_l_knee";
joints[66] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_r_knee";
joints[67] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_l_metacarpophalangeal_1";
joints[68] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_r_metacarpophalangeal_1";
joints[69] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_l_metacarpophalangeal_2";
joints[70] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_r_metacarpophalangeal_2";
joints[71] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_l_metacarpophalangeal_3";
joints[72] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_r_metacarpophalangeal_3";
joints[73] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_l_metacarpophalangeal_4";
joints[74] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_r_metacarpophalangeal_4";
joints[75] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_l_metacarpophalangeal_5";
joints[76] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_metacarpophalangeal_5";
joints[77] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_l_metatarsal";
joints[78] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_l_metatarsophalangeal_2";
joints[79] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_r_metatarsophalangeal_2";
joints[80] = HAnimJoint1265;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_l_radiocarpal";
joints[81] = HAnimJoint1266;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_r_radiocarpal";
joints[82] = HAnimJoint1267;

let HAnimJoint1268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1268.USE = "Joe_l_shoulder";
joints[83] = HAnimJoint1268;

let HAnimJoint1269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1269.USE = "Joe_r_shoulder";
joints[84] = HAnimJoint1269;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.USE = "Joe_l_sternoclavicular";
joints[85] = HAnimJoint1270;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.USE = "Joe_r_sternoclavicular";
joints[86] = HAnimJoint1271;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.USE = "Joe_l_talocrural";
joints[87] = HAnimJoint1272;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.USE = "Joe_r_talocrural";
joints[88] = HAnimJoint1273;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.USE = "Joe_r_tarsal_distal_interphalangeal_2";
joints[89] = HAnimJoint1274;

let HAnimJoint1275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1275.USE = "Joe_l_tarsometatarsal_2";
joints[90] = HAnimJoint1275;

let HAnimJoint1276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1276.USE = "Joe_r_tarsometatarsal_2";
joints[91] = HAnimJoint1276;

let HAnimSegment1277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1277.USE = "Joe_c1";
segments[92] = HAnimSegment1277;

let HAnimSegment1278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1278.USE = "Joe_c2";
segments[93] = HAnimSegment1278;

let HAnimSegment1279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1279.USE = "Joe_c3";
segments[94] = HAnimSegment1279;

let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.USE = "Joe_c4";
segments[95] = HAnimSegment1280;

let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.USE = "Joe_c5";
segments[96] = HAnimSegment1281;

let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.USE = "Joe_c6";
segments[97] = HAnimSegment1282;

let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.USE = "Joe_c7";
segments[98] = HAnimSegment1283;

let HAnimSegment1284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1284.USE = "Joe_l1";
segments[99] = HAnimSegment1284;

let HAnimSegment1285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1285.USE = "Joe_l2";
segments[100] = HAnimSegment1285;

let HAnimSegment1286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1286.USE = "Joe_l3";
segments[101] = HAnimSegment1286;

let HAnimSegment1287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1287.USE = "Joe_l4";
segments[102] = HAnimSegment1287;

let HAnimSegment1288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1288.USE = "Joe_l5";
segments[103] = HAnimSegment1288;

let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.USE = "Joe_pelvis";
segments[104] = HAnimSegment1289;

let HAnimSegment1290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1290.USE = "Joe_sacrum";
segments[105] = HAnimSegment1290;

let HAnimSegment1291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1291.USE = "Joe_skull";
segments[106] = HAnimSegment1291;

let HAnimSegment1292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1292.USE = "Joe_t1";
segments[107] = HAnimSegment1292;

let HAnimSegment1293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1293.USE = "Joe_t10";
segments[108] = HAnimSegment1293;

let HAnimSegment1294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1294.USE = "Joe_t11";
segments[109] = HAnimSegment1294;

let HAnimSegment1295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1295.USE = "Joe_t12";
segments[110] = HAnimSegment1295;

let HAnimSegment1296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1296.USE = "Joe_t2";
segments[111] = HAnimSegment1296;

let HAnimSegment1297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1297.USE = "Joe_t3";
segments[112] = HAnimSegment1297;

let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.USE = "Joe_t4";
segments[113] = HAnimSegment1298;

let HAnimSegment1299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1299.USE = "Joe_t5";
segments[114] = HAnimSegment1299;

let HAnimSegment1300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1300.USE = "Joe_t6";
segments[115] = HAnimSegment1300;

let HAnimSegment1301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1301.USE = "Joe_t7";
segments[116] = HAnimSegment1301;

let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.USE = "Joe_t8";
segments[117] = HAnimSegment1302;

let HAnimSegment1303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1303.USE = "Joe_t9";
segments[118] = HAnimSegment1303;

let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.USE = "Joe_toPelvis";
segments[119] = HAnimSegment1304;

let HAnimSegment1305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1305.USE = "Joe_l_calf";
segments[120] = HAnimSegment1305;

let HAnimSegment1306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1306.USE = "Joe_r_calf";
segments[121] = HAnimSegment1306;

let HAnimSegment1307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1307.USE = "Joe_l_carpal";
segments[122] = HAnimSegment1307;

let HAnimSegment1308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1308.USE = "Joe_r_carpal";
segments[123] = HAnimSegment1308;

let HAnimSegment1309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1309.USE = "Joe_l_carpal_distal_phalanx_1";
segments[124] = HAnimSegment1309;

let HAnimSegment1310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1310.USE = "Joe_r_carpal_distal_phalanx_1";
segments[125] = HAnimSegment1310;

let HAnimSegment1311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1311.USE = "Joe_l_carpal_distal_phalanx_2";
segments[126] = HAnimSegment1311;

let HAnimSegment1312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1312.USE = "Joe_r_carpal_distal_phalanx_2";
segments[127] = HAnimSegment1312;

let HAnimSegment1313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1313.USE = "Joe_l_carpal_distal_phalanx_3";
segments[128] = HAnimSegment1313;

let HAnimSegment1314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1314.USE = "Joe_r_carpal_distal_phalanx_3";
segments[129] = HAnimSegment1314;

let HAnimSegment1315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1315.USE = "Joe_l_carpal_distal_phalanx_4";
segments[130] = HAnimSegment1315;

let HAnimSegment1316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1316.USE = "Joe_r_carpal_distal_phalanx_4";
segments[131] = HAnimSegment1316;

let HAnimSegment1317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1317.USE = "Joe_l_carpal_distal_phalanx_5";
segments[132] = HAnimSegment1317;

let HAnimSegment1318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1318.USE = "Joe_r_carpal_distal_phalanx_5";
segments[133] = HAnimSegment1318;

let HAnimSegment1319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1319.USE = "Joe_l_carpal_middle_phalanx_2";
segments[134] = HAnimSegment1319;

let HAnimSegment1320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1320.USE = "Joe_r_carpal_middle_phalanx_2";
segments[135] = HAnimSegment1320;

let HAnimSegment1321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1321.USE = "Joe_l_carpal_middle_phalanx_3";
segments[136] = HAnimSegment1321;

let HAnimSegment1322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1322.USE = "Joe_r_carpal_middle_phalanx_3";
segments[137] = HAnimSegment1322;

let HAnimSegment1323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1323.USE = "Joe_l_carpal_middle_phalanx_4";
segments[138] = HAnimSegment1323;

let HAnimSegment1324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1324.USE = "Joe_r_carpal_middle_phalanx_4";
segments[139] = HAnimSegment1324;

let HAnimSegment1325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1325.USE = "Joe_l_carpal_middle_phalanx_5";
segments[140] = HAnimSegment1325;

let HAnimSegment1326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1326.USE = "Joe_r_carpal_middle_phalanx_5";
segments[141] = HAnimSegment1326;

let HAnimSegment1327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1327.USE = "Joe_l_carpal_proximal_phalanx_1";
segments[142] = HAnimSegment1327;

let HAnimSegment1328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1328.USE = "Joe_r_carpal_proximal_phalanx_1";
segments[143] = HAnimSegment1328;

let HAnimSegment1329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1329.USE = "Joe_l_carpal_proximal_phalanx_2";
segments[144] = HAnimSegment1329;

let HAnimSegment1330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1330.USE = "Joe_r_carpal_proximal_phalanx_2";
segments[145] = HAnimSegment1330;

let HAnimSegment1331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1331.USE = "Joe_l_carpal_proximal_phalanx_3";
segments[146] = HAnimSegment1331;

let HAnimSegment1332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1332.USE = "Joe_r_carpal_proximal_phalanx_3";
segments[147] = HAnimSegment1332;

let HAnimSegment1333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1333.USE = "Joe_l_carpal_proximal_phalanx_4";
segments[148] = HAnimSegment1333;

let HAnimSegment1334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1334.USE = "Joe_r_carpal_proximal_phalanx_4";
segments[149] = HAnimSegment1334;

let HAnimSegment1335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1335.USE = "Joe_l_carpal_proximal_phalanx_5";
segments[150] = HAnimSegment1335;

let HAnimSegment1336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1336.USE = "Joe_r_carpal_proximal_phalanx_5";
segments[151] = HAnimSegment1336;

let HAnimSegment1337 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1337.USE = "Joe_l_clavicle";
segments[152] = HAnimSegment1337;

let HAnimSegment1338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1338.USE = "Joe_r_clavicle";
segments[153] = HAnimSegment1338;

let HAnimSegment1339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1339.USE = "Joe_l_eyeball";
segments[154] = HAnimSegment1339;

let HAnimSegment1340 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1340.USE = "Joe_r_eyeball";
segments[155] = HAnimSegment1340;

let HAnimSegment1341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1341.USE = "Joe_l_forearm";
segments[156] = HAnimSegment1341;

let HAnimSegment1342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1342.USE = "Joe_r_forearm";
segments[157] = HAnimSegment1342;

let HAnimSegment1343 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1343.USE = "Joe_l_metacarpal_1";
segments[158] = HAnimSegment1343;

let HAnimSegment1344 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1344.USE = "Joe_r_metacarpal_1";
segments[159] = HAnimSegment1344;

let HAnimSegment1345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1345.USE = "Joe_l_metacarpal_2";
segments[160] = HAnimSegment1345;

let HAnimSegment1346 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1346.USE = "Joe_r_metacarpal_2";
segments[161] = HAnimSegment1346;

let HAnimSegment1347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1347.USE = "Joe_l_metacarpal_3";
segments[162] = HAnimSegment1347;

let HAnimSegment1348 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1348.USE = "Joe_r_metacarpal_3";
segments[163] = HAnimSegment1348;

let HAnimSegment1349 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1349.USE = "Joe_l_metacarpal_4";
segments[164] = HAnimSegment1349;

let HAnimSegment1350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1350.USE = "Joe_r_metacarpal_4";
segments[165] = HAnimSegment1350;

let HAnimSegment1351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1351.USE = "Joe_l_metacarpal_5";
segments[166] = HAnimSegment1351;

let HAnimSegment1352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1352.USE = "Joe_r_metacarpal_5";
segments[167] = HAnimSegment1352;

let HAnimSegment1353 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1353.USE = "Joe_l_metatarsal_2";
segments[168] = HAnimSegment1353;

let HAnimSegment1354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1354.USE = "Joe_r_metatarsal_2";
segments[169] = HAnimSegment1354;

let HAnimSegment1355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1355.USE = "Joe_l_scapula";
segments[170] = HAnimSegment1355;

let HAnimSegment1356 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1356.USE = "Joe_r_scapula";
segments[171] = HAnimSegment1356;

let HAnimSegment1357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1357.USE = "Joe_l_talus";
segments[172] = HAnimSegment1357;

let HAnimSegment1358 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1358.USE = "Joe_r_talus";
segments[173] = HAnimSegment1358;

let HAnimSegment1359 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1359.USE = "Joe_l_tarsal_distal_phalanx_2";
segments[174] = HAnimSegment1359;

let HAnimSegment1360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1360.USE = "Joe_r_tarsal_distal_phalanx_2";
segments[175] = HAnimSegment1360;

let HAnimSegment1361 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1361.USE = "Joe_l_tarsal_proximal_phalanx_2";
segments[176] = HAnimSegment1361;

let HAnimSegment1362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1362.USE = "Joe_r_tarsal_proximal_phalanx_2";
segments[177] = HAnimSegment1362;

let HAnimSegment1363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1363.USE = "Joe_l_thigh";
segments[178] = HAnimSegment1363;

let HAnimSegment1364 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1364.USE = "Joe_r_thigh";
segments[179] = HAnimSegment1364;

let HAnimSegment1365 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1365.USE = "Joe_l_upperarm";
segments[180] = HAnimSegment1365;

let HAnimSegment1366 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1366.USE = "Joe_r_upperarm";
segments[181] = HAnimSegment1366;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.USE = "Joe_cervicale_pt";
viewpoints[182] = HAnimSite1367;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.USE = "Joe_crotch_pt";
viewpoints[183] = HAnimSite1368;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.USE = "Joe_floormarker_pt";
viewpoints[184] = HAnimSite1369;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.USE = "Joe_navel_pt";
viewpoints[185] = HAnimSite1370;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.USE = "Joe_nuchale_pt";
viewpoints[186] = HAnimSite1371;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.USE = "Joe_rib10_midspine_pt";
viewpoints[187] = HAnimSite1372;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.USE = "Joe_sellion_pt";
viewpoints[188] = HAnimSite1373;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.USE = "Joe_skull_vertex_tip";
viewpoints[189] = HAnimSite1374;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.USE = "Joe_substernale_pt";
viewpoints[190] = HAnimSite1375;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.USE = "Joe_supramenton_pt";
viewpoints[191] = HAnimSite1376;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.USE = "Joe_suprasternale_pt";
viewpoints[192] = HAnimSite1377;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.USE = "Joe_waist_preferred_posterior_pt";
viewpoints[193] = HAnimSite1378;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.USE = "Joe_l_acromion_pt";
viewpoints[194] = HAnimSite1379;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.USE = "Joe_r_acromion_pt";
viewpoints[195] = HAnimSite1380;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.USE = "Joe_l_asis_pt";
viewpoints[196] = HAnimSite1381;

let HAnimSite1382 = browser.currentScene.createNode("HAnimSite");
HAnimSite1382.USE = "Joe_r_asis_pt";
viewpoints[197] = HAnimSite1382;

let HAnimSite1383 = browser.currentScene.createNode("HAnimSite");
HAnimSite1383.USE = "Joe_l_axilla_distal_pt";
viewpoints[198] = HAnimSite1383;

let HAnimSite1384 = browser.currentScene.createNode("HAnimSite");
HAnimSite1384.USE = "Joe_r_axilla_distal_pt";
viewpoints[199] = HAnimSite1384;

let HAnimSite1385 = browser.currentScene.createNode("HAnimSite");
HAnimSite1385.USE = "Joe_l_axilla_proximal_pt";
viewpoints[200] = HAnimSite1385;

let HAnimSite1386 = browser.currentScene.createNode("HAnimSite");
HAnimSite1386.USE = "Joe_r_axilla_proximal_pt";
viewpoints[201] = HAnimSite1386;

let HAnimSite1387 = browser.currentScene.createNode("HAnimSite");
HAnimSite1387.USE = "Joe_l_calcaneus_posterior_pt";
viewpoints[202] = HAnimSite1387;

let HAnimSite1388 = browser.currentScene.createNode("HAnimSite");
HAnimSite1388.USE = "Joe_r_calcaneus_posterior_pt";
viewpoints[203] = HAnimSite1388;

let HAnimSite1389 = browser.currentScene.createNode("HAnimSite");
HAnimSite1389.USE = "Joe_l_carpal_distal_phalanx_1_tip";
viewpoints[204] = HAnimSite1389;

let HAnimSite1390 = browser.currentScene.createNode("HAnimSite");
HAnimSite1390.USE = "Joe_r_carpal_distal_phalanx_1_tip";
viewpoints[205] = HAnimSite1390;

let HAnimSite1391 = browser.currentScene.createNode("HAnimSite");
HAnimSite1391.USE = "Joe_l_carpal_distal_phalanx_2_tip";
viewpoints[206] = HAnimSite1391;

let HAnimSite1392 = browser.currentScene.createNode("HAnimSite");
HAnimSite1392.USE = "Joe_r_carpal_distal_phalanx_2_tip";
viewpoints[207] = HAnimSite1392;

let HAnimSite1393 = browser.currentScene.createNode("HAnimSite");
HAnimSite1393.USE = "Joe_l_carpal_distal_phalanx_3_tip";
viewpoints[208] = HAnimSite1393;

let HAnimSite1394 = browser.currentScene.createNode("HAnimSite");
HAnimSite1394.USE = "Joe_r_carpal_distal_phalanx_3_tip";
viewpoints[209] = HAnimSite1394;

let HAnimSite1395 = browser.currentScene.createNode("HAnimSite");
HAnimSite1395.USE = "Joe_l_carpal_distal_phalanx_4_tip";
viewpoints[210] = HAnimSite1395;

let HAnimSite1396 = browser.currentScene.createNode("HAnimSite");
HAnimSite1396.USE = "Joe_r_carpal_distal_phalanx_4_tip";
viewpoints[211] = HAnimSite1396;

let HAnimSite1397 = browser.currentScene.createNode("HAnimSite");
HAnimSite1397.USE = "Joe_l_carpal_distal_phalanx_5_tip";
viewpoints[212] = HAnimSite1397;

let HAnimSite1398 = browser.currentScene.createNode("HAnimSite");
HAnimSite1398.USE = "Joe_r_carpal_distal_phalanx_5_tip";
viewpoints[213] = HAnimSite1398;

let HAnimSite1399 = browser.currentScene.createNode("HAnimSite");
HAnimSite1399.USE = "Joe_l_clavicle_pt";
viewpoints[214] = HAnimSite1399;

let HAnimSite1400 = browser.currentScene.createNode("HAnimSite");
HAnimSite1400.USE = "Joe_r_clavicle_pt";
viewpoints[215] = HAnimSite1400;

let HAnimSite1401 = browser.currentScene.createNode("HAnimSite");
HAnimSite1401.USE = "Joe_l_dactylion_pt";
viewpoints[216] = HAnimSite1401;

let HAnimSite1402 = browser.currentScene.createNode("HAnimSite");
HAnimSite1402.USE = "Joe_r_dactylion_pt";
viewpoints[217] = HAnimSite1402;

let HAnimSite1403 = browser.currentScene.createNode("HAnimSite");
HAnimSite1403.USE = "Joe_l_femoral_lateral_epicondyle_pt";
viewpoints[218] = HAnimSite1403;

let HAnimSite1404 = browser.currentScene.createNode("HAnimSite");
HAnimSite1404.USE = "Joe_r_femoral_lateral_epicondyle_pt";
viewpoints[219] = HAnimSite1404;

let HAnimSite1405 = browser.currentScene.createNode("HAnimSite");
HAnimSite1405.USE = "Joe_l_femoral_medial_epicondyle_pt";
viewpoints[220] = HAnimSite1405;

let HAnimSite1406 = browser.currentScene.createNode("HAnimSite");
HAnimSite1406.USE = "Joe_r_femoral_medial_epicondyle_pt";
viewpoints[221] = HAnimSite1406;

let HAnimSite1407 = browser.currentScene.createNode("HAnimSite");
HAnimSite1407.USE = "Joe_l_gonion_pt";
viewpoints[222] = HAnimSite1407;

let HAnimSite1408 = browser.currentScene.createNode("HAnimSite");
HAnimSite1408.USE = "Joe_r_gonion_pt";
viewpoints[223] = HAnimSite1408;

let HAnimSite1409 = browser.currentScene.createNode("HAnimSite");
HAnimSite1409.USE = "Joe_l_humeral_lateral_epicondyle_pt";
viewpoints[224] = HAnimSite1409;

let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.USE = "Joe_r_humeral_lateral_epicondyle_pt";
viewpoints[225] = HAnimSite1410;

let HAnimSite1411 = browser.currentScene.createNode("HAnimSite");
HAnimSite1411.USE = "Joe_l_humeral_medial_epicondyle_pt";
viewpoints[226] = HAnimSite1411;

let HAnimSite1412 = browser.currentScene.createNode("HAnimSite");
HAnimSite1412.USE = "Joe_r_humeral_medial_epicondyle_pt";
viewpoints[227] = HAnimSite1412;

let HAnimSite1413 = browser.currentScene.createNode("HAnimSite");
HAnimSite1413.USE = "Joe_l_iliocristale_pt";
viewpoints[228] = HAnimSite1413;

let HAnimSite1414 = browser.currentScene.createNode("HAnimSite");
HAnimSite1414.USE = "Joe_r_iliocristale_pt";
viewpoints[229] = HAnimSite1414;

let HAnimSite1415 = browser.currentScene.createNode("HAnimSite");
HAnimSite1415.USE = "Joe_l_infraorbitale_pt";
viewpoints[230] = HAnimSite1415;

let HAnimSite1416 = browser.currentScene.createNode("HAnimSite");
HAnimSite1416.USE = "Joe_r_infraorbitale_pt";
viewpoints[231] = HAnimSite1416;

let HAnimSite1417 = browser.currentScene.createNode("HAnimSite");
HAnimSite1417.USE = "Joe_l_knee_crease_pt";
viewpoints[232] = HAnimSite1417;

let HAnimSite1418 = browser.currentScene.createNode("HAnimSite");
HAnimSite1418.USE = "Joe_r_knee_crease_pt";
viewpoints[233] = HAnimSite1418;

let HAnimSite1419 = browser.currentScene.createNode("HAnimSite");
HAnimSite1419.USE = "Joe_l_lateral_malleolus_pt";
viewpoints[234] = HAnimSite1419;

let HAnimSite1420 = browser.currentScene.createNode("HAnimSite");
HAnimSite1420.USE = "Joe_r_lateral_malleolus_pt";
viewpoints[235] = HAnimSite1420;

let HAnimSite1421 = browser.currentScene.createNode("HAnimSite");
HAnimSite1421.USE = "Joe_l_medial_malleolus_pt";
viewpoints[236] = HAnimSite1421;

let HAnimSite1422 = browser.currentScene.createNode("HAnimSite");
HAnimSite1422.USE = "Joe_r_medial_malleolus_pt";
viewpoints[237] = HAnimSite1422;

let HAnimSite1423 = browser.currentScene.createNode("HAnimSite");
HAnimSite1423.USE = "Joe_l_metacarpal_phalanx_2_pt";
viewpoints[238] = HAnimSite1423;

let HAnimSite1424 = browser.currentScene.createNode("HAnimSite");
HAnimSite1424.USE = "Joe_r_metacarpal_phalanx_2_pt";
viewpoints[239] = HAnimSite1424;

let HAnimSite1425 = browser.currentScene.createNode("HAnimSite");
HAnimSite1425.USE = "Joe_l_metacarpal_phalanx_5_pt";
viewpoints[240] = HAnimSite1425;

let HAnimSite1426 = browser.currentScene.createNode("HAnimSite");
HAnimSite1426.USE = "Joe_r_metacarpal_phalanx_5_pt";
viewpoints[241] = HAnimSite1426;

let HAnimSite1427 = browser.currentScene.createNode("HAnimSite");
HAnimSite1427.USE = "Joe_l_metatarsal_phalanx_1_pt";
viewpoints[242] = HAnimSite1427;

let HAnimSite1428 = browser.currentScene.createNode("HAnimSite");
HAnimSite1428.USE = "Joe_r_metatarsal_phalanx_1_pt";
viewpoints[243] = HAnimSite1428;

let HAnimSite1429 = browser.currentScene.createNode("HAnimSite");
HAnimSite1429.USE = "Joe_l_metatarsal_phalanx_5_pt";
viewpoints[244] = HAnimSite1429;

let HAnimSite1430 = browser.currentScene.createNode("HAnimSite");
HAnimSite1430.USE = "Joe_r_metatarsal_phalanx_5_pt";
viewpoints[245] = HAnimSite1430;

let HAnimSite1431 = browser.currentScene.createNode("HAnimSite");
HAnimSite1431.USE = "Joe_l_neck_base_pt";
viewpoints[246] = HAnimSite1431;

let HAnimSite1432 = browser.currentScene.createNode("HAnimSite");
HAnimSite1432.USE = "Joe_r_neck_base_pt";
viewpoints[247] = HAnimSite1432;

let HAnimSite1433 = browser.currentScene.createNode("HAnimSite");
HAnimSite1433.USE = "Joe_l_olecranon_pt";
viewpoints[248] = HAnimSite1433;

let HAnimSite1434 = browser.currentScene.createNode("HAnimSite");
HAnimSite1434.USE = "Joe_r_olecranon_pt";
viewpoints[249] = HAnimSite1434;

let HAnimSite1435 = browser.currentScene.createNode("HAnimSite");
HAnimSite1435.USE = "Joe_l_psis_pt";
viewpoints[250] = HAnimSite1435;

let HAnimSite1436 = browser.currentScene.createNode("HAnimSite");
HAnimSite1436.USE = "Joe_r_psis_pt";
viewpoints[251] = HAnimSite1436;

let HAnimSite1437 = browser.currentScene.createNode("HAnimSite");
HAnimSite1437.USE = "Joe_l_radial_styloid_pt";
viewpoints[252] = HAnimSite1437;

let HAnimSite1438 = browser.currentScene.createNode("HAnimSite");
HAnimSite1438.USE = "Joe_r_radial_styloid_pt";
viewpoints[253] = HAnimSite1438;

let HAnimSite1439 = browser.currentScene.createNode("HAnimSite");
HAnimSite1439.USE = "Joe_l_radiale_pt";
viewpoints[254] = HAnimSite1439;

let HAnimSite1440 = browser.currentScene.createNode("HAnimSite");
HAnimSite1440.USE = "Joe_r_radiale_pt";
viewpoints[255] = HAnimSite1440;

let HAnimSite1441 = browser.currentScene.createNode("HAnimSite");
HAnimSite1441.USE = "Joe_l_rib10_pt";
viewpoints[256] = HAnimSite1441;

let HAnimSite1442 = browser.currentScene.createNode("HAnimSite");
HAnimSite1442.USE = "Joe_r_rib10_pt";
viewpoints[257] = HAnimSite1442;

let HAnimSite1443 = browser.currentScene.createNode("HAnimSite");
HAnimSite1443.USE = "Joe_l_sphyrion_pt";
viewpoints[258] = HAnimSite1443;

let HAnimSite1444 = browser.currentScene.createNode("HAnimSite");
HAnimSite1444.USE = "Joe_r_sphyrion_pt";
viewpoints[259] = HAnimSite1444;

let HAnimSite1445 = browser.currentScene.createNode("HAnimSite");
HAnimSite1445.USE = "Joe_l_tarsal_distal_phalanx_2_pt";
viewpoints[260] = HAnimSite1445;

let HAnimSite1446 = browser.currentScene.createNode("HAnimSite");
HAnimSite1446.USE = "Joe_r_tarsal_distal_phalanx_2_pt";
viewpoints[261] = HAnimSite1446;

let HAnimSite1447 = browser.currentScene.createNode("HAnimSite");
HAnimSite1447.USE = "Joe_l_thelion_pt";
viewpoints[262] = HAnimSite1447;

let HAnimSite1448 = browser.currentScene.createNode("HAnimSite");
HAnimSite1448.USE = "Joe_r_thelion_pt";
viewpoints[263] = HAnimSite1448;

let HAnimSite1449 = browser.currentScene.createNode("HAnimSite");
HAnimSite1449.USE = "Joe_l_tragion_pt";
viewpoints[264] = HAnimSite1449;

let HAnimSite1450 = browser.currentScene.createNode("HAnimSite");
HAnimSite1450.USE = "Joe_r_tragion_pt";
viewpoints[265] = HAnimSite1450;

let HAnimSite1451 = browser.currentScene.createNode("HAnimSite");
HAnimSite1451.USE = "Joe_l_trochanterion_pt";
viewpoints[266] = HAnimSite1451;

let HAnimSite1452 = browser.currentScene.createNode("HAnimSite");
HAnimSite1452.USE = "Joe_r_trochanterion_pt";
viewpoints[267] = HAnimSite1452;

let HAnimSite1453 = browser.currentScene.createNode("HAnimSite");
HAnimSite1453.USE = "Joe_l_ulnar_styloid_pt";
viewpoints[268] = HAnimSite1453;

let HAnimSite1454 = browser.currentScene.createNode("HAnimSite");
HAnimSite1454.USE = "Joe_r_ulnar_styloid_pt";
viewpoints[269] = HAnimSite1454;

Group77YYY.children = new X3D.MFNode();

Group77ZZZ.children[0] = HAnimHumanoid78;

Group76YYY.children = new X3D.MFNode();

Group76ZZZ.children[0] = Group77;

browser.currentScene.children[6] = Group76;

let TimeSensor1455 = browser.currentScene.createNode("TimeSensor");
TimeSensor1455.DEF = "Time1";
TimeSensor1455.cycleInterval = 2.86;
TimeSensor1455.loop = True;
browser.currentScene.children[7] = TimeSensor1455;

let TimeSensor1456 = browser.currentScene.createNode("TimeSensor");
TimeSensor1456.DEF = "Time2";
TimeSensor1456.cycleInterval = 5.72;
TimeSensor1456.loop = True;
browser.currentScene.children[8] = TimeSensor1456;

let TimeSensor1457 = browser.currentScene.createNode("TimeSensor");
TimeSensor1457.DEF = "Time3";
TimeSensor1457.cycleInterval = 5.8;
TimeSensor1457.loop = True;
browser.currentScene.children[9] = TimeSensor1457;

let OrientationInterpolator1458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1458.DEF = "Pitch";
OrientationInterpolator1458.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1458.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,1.256,1,0,0,2.512,1,0,0,3.768,1,0,0,5.024,1,0,0,6.28]);
browser.currentScene.children[10] = OrientationInterpolator1458;

let OrientationInterpolator1459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1459.DEF = "Yaw";
OrientationInterpolator1459.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1459.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,1.256,0,1,0,2.512,0,1,0,3.768,0,1,0,5.024,0,1,0,6.28]);
browser.currentScene.children[11] = OrientationInterpolator1459;

let OrientationInterpolator1460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1460.DEF = "Roll";
OrientationInterpolator1460.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1460.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.256,0,0,1,2.512,0,0,1,3.768,0,0,1,5.024,0,0,1,6.28]);
browser.currentScene.children[12] = OrientationInterpolator1460;

let OrientationInterpolator1461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1461.DEF = "vc6Yaw";
OrientationInterpolator1461.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1461.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0.7,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4,-1,0,0.7,-0.4,-1,0,0.4,0,1,0,0,0,1,0,0]);
browser.currentScene.children[13] = OrientationInterpolator1461;

let ROUTE1462 = browser.currentScene.createNode("ROUTE");
ROUTE1462.fromField = "fraction_changed";
ROUTE1462.fromNode = "Time2";
ROUTE1462.toField = "set_fraction";
ROUTE1462.toNode = "vc6Yaw";
browser.currentScene.children[14] = ROUTE1462;

let ROUTE1463 = browser.currentScene.createNode("ROUTE");
ROUTE1463.fromField = "value_changed";
ROUTE1463.fromNode = "vc6Yaw";
ROUTE1463.toField = "set_rotation";
ROUTE1463.toNode = "Joe_vc6";
browser.currentScene.children[15] = ROUTE1463;

let OrientationInterpolator1464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1464.DEF = "EyeballsRotation";
OrientationInterpolator1464.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1464.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.2,0.2,0.2,0.2,-0.2,0.2,0.2,0.2,-0.2,-0.2,0.2,0.2,0.2,-0.2,0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,0,0,1,0,0,0,1,0]);
browser.currentScene.children[16] = OrientationInterpolator1464;

let ROUTE1465 = browser.currentScene.createNode("ROUTE");
ROUTE1465.fromField = "fraction_changed";
ROUTE1465.fromNode = "Time3";
ROUTE1465.toField = "set_fraction";
ROUTE1465.toNode = "EyeballsRotation";
browser.currentScene.children[17] = ROUTE1465;

let ROUTE1466 = browser.currentScene.createNode("ROUTE");
ROUTE1466.fromField = "value_changed";
ROUTE1466.fromNode = "EyeballsRotation";
ROUTE1466.toField = "set_rotation";
ROUTE1466.toNode = "Joe_r_eyeball_joint";
browser.currentScene.children[18] = ROUTE1466;

let ROUTE1467 = browser.currentScene.createNode("ROUTE");
ROUTE1467.fromField = "value_changed";
ROUTE1467.fromNode = "EyeballsRotation";
ROUTE1467.toField = "set_rotation";
ROUTE1467.toNode = "Joe_l_eyeball_joint";
browser.currentScene.children[19] = ROUTE1467;

let OrientationInterpolator1468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "r_sternoclavicularRelax";
OrientationInterpolator1468.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1468.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.2,-1,0,0.11,0.2,-1,0,0.11,0.1,-1,0,0.1,0,0,1,0]);
browser.currentScene.children[20] = OrientationInterpolator1468;

let OrientationInterpolator1469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "r_acromioclavicularRelax";
OrientationInterpolator1469.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1469.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
browser.currentScene.children[21] = OrientationInterpolator1469;

let OrientationInterpolator1470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1470.DEF = "r_shoulderRelax";
OrientationInterpolator1470.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1470.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0,0,1,0]);
browser.currentScene.children[22] = OrientationInterpolator1470;

let OrientationInterpolator1471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1471.DEF = "r_elbowRelax";
OrientationInterpolator1471.key = new X3D.MFFloat([0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1471.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,-0.2,0,0.01,0.5,-0.2,0,0.01,0.5,-0.2,0,0.01,0.5,0,0,1,0]);
browser.currentScene.children[23] = OrientationInterpolator1471;

let OrientationInterpolator1472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1472.DEF = "r_wristRelax";
OrientationInterpolator1472.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1472.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0.1,-0.09,0.25,0,0.1,-0.09,0.25,0,0.1,-0.09,0.25,0,0,1,0]);
browser.currentScene.children[24] = OrientationInterpolator1472;

let OrientationInterpolator1473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1473.DEF = "r_index0Relax";
OrientationInterpolator1473.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1473.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]);
browser.currentScene.children[25] = OrientationInterpolator1473;

let OrientationInterpolator1474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "r_index1Relax";
OrientationInterpolator1474.key = new X3D.MFFloat([0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1474.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,-0.135,-0.135,1,0.357,-0.159,-0.153,1,0.355,-0.159,-0.153,1,0.357,0,0,1,0]);
browser.currentScene.children[26] = OrientationInterpolator1474;

let OrientationInterpolator1475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "r_middle0Relax";
OrientationInterpolator1475.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1475.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,-1,0.14,0,0,-1,0.14,0,0,-1,0.14,0,0,1,0]);
browser.currentScene.children[27] = OrientationInterpolator1475;

let OrientationInterpolator1476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1476.DEF = "r_middle1Relax";
OrientationInterpolator1476.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1476.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,0.3,0.257,0,0,0.3,0.37,0,0,0.3,0.39,0,0,0.3,0.31,0,0,0.3,0.32,0,0,0.3,0.34,0,0,0.3,0.28,0,0,1,0,0,0,1,0]);
browser.currentScene.children[28] = OrientationInterpolator1476;

let OrientationInterpolator1477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1477.DEF = "r_ring0Relax";
OrientationInterpolator1477.key = new X3D.MFFloat([0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1477.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.25,0.25,-1,0.1,0.25,0.25,-1,0.1,0.25,0.25,-1,0.1,0,0,1,0]);
browser.currentScene.children[29] = OrientationInterpolator1477;

let OrientationInterpolator1478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1478.DEF = "r_ring1Relax";
OrientationInterpolator1478.key = new X3D.MFFloat([0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1478.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.135,0.135,1,0.27,0.135,0.135,1,0.27,0.135,0.15,1,0.27,0,0,1,0]);
browser.currentScene.children[30] = OrientationInterpolator1478;

let OrientationInterpolator1479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1479.DEF = "r_pinky0Relax";
OrientationInterpolator1479.key = new X3D.MFFloat([0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1479.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.35,0.35,-0.7,0.12,0.35,0.35,-0.9,0.12,0.35,0.35,-0.7,0.12,0,0,1,0]);
browser.currentScene.children[31] = OrientationInterpolator1479;

let OrientationInterpolator1480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "r_pinky1Relax";
OrientationInterpolator1480.key = new X3D.MFFloat([0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1480.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0.2,0.25,1,0.27,0.2,0.22,1,0.27,0.22,0.2,1,0.27,0,0,1,0]);
browser.currentScene.children[32] = OrientationInterpolator1480;

let OrientationInterpolator1481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "r_thumb1Relax";
OrientationInterpolator1481.key = new X3D.MFFloat([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1481.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.16,0.16,0.785,0.5,-0.16,0.16,0.785,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]);
browser.currentScene.children[33] = OrientationInterpolator1481;

let OrientationInterpolator1482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1482.DEF = "r_thumb2Relax";
OrientationInterpolator1482.key = new X3D.MFFloat([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1482.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.45,1,0,0,0.45,1,0,0,0.45,0,0,1,0]);
browser.currentScene.children[34] = OrientationInterpolator1482;

let OrientationInterpolator1483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1483.DEF = "r_thumb3Relax";
OrientationInterpolator1483.key = new X3D.MFFloat([0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1483.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.45,0,0,1,0,0,0,1,0]);
browser.currentScene.children[35] = OrientationInterpolator1483;

let OrientationInterpolator1484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1484.DEF = "r_fingers2Relax";
OrientationInterpolator1484.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1484.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.43,0,0,1,0.44,0,0,1,0.46,0,0,1,0.44,0,0,1,0.245,0,0,1,0.24,0,0,1,0.21,0,0,1,0.24,0,0,1,0]);
browser.currentScene.children[36] = OrientationInterpolator1484;

let OrientationInterpolator1485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1485.DEF = "r_fingers3Relax";
OrientationInterpolator1485.key = new X3D.MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1485.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.37,0,0,1,0.38,0,0,1,0.39,0,0,1,0.38,0,0,1,0.27,0,0,1,0.28,0,0,1,0.27,0,0,1,0.28,0,0,1,0]);
browser.currentScene.children[37] = OrientationInterpolator1485;

let ROUTE1486 = browser.currentScene.createNode("ROUTE");
ROUTE1486.fromField = "value_changed";
ROUTE1486.fromNode = "r_sternoclavicularRelax";
ROUTE1486.toField = "set_rotation";
ROUTE1486.toNode = "Joe_r_sternoclavicular";
browser.currentScene.children[38] = ROUTE1486;

let ROUTE1487 = browser.currentScene.createNode("ROUTE");
ROUTE1487.fromField = "value_changed";
ROUTE1487.fromNode = "r_acromioclavicularRelax";
ROUTE1487.toField = "set_rotation";
ROUTE1487.toNode = "Joe_r_acromioclavicular";
browser.currentScene.children[39] = ROUTE1487;

let ROUTE1488 = browser.currentScene.createNode("ROUTE");
ROUTE1488.fromField = "value_changed";
ROUTE1488.fromNode = "r_shoulderRelax";
ROUTE1488.toField = "set_rotation";
ROUTE1488.toNode = "Joe_r_shoulder";
browser.currentScene.children[40] = ROUTE1488;

let ROUTE1489 = browser.currentScene.createNode("ROUTE");
ROUTE1489.fromField = "value_changed";
ROUTE1489.fromNode = "r_elbowRelax";
ROUTE1489.toField = "set_rotation";
ROUTE1489.toNode = "Joe_r_elbow";
browser.currentScene.children[41] = ROUTE1489;

let ROUTE1490 = browser.currentScene.createNode("ROUTE");
ROUTE1490.fromField = "value_changed";
ROUTE1490.fromNode = "r_wristRelax";
ROUTE1490.toField = "set_rotation";
ROUTE1490.toNode = "Joe_r_radiocarpal";
browser.currentScene.children[42] = ROUTE1490;

let ROUTE1491 = browser.currentScene.createNode("ROUTE");
ROUTE1491.fromField = "value_changed";
ROUTE1491.fromNode = "r_thumb1Relax";
ROUTE1491.toField = "set_rotation";
ROUTE1491.toNode = "Joe_r_carpometacarpal_1";
browser.currentScene.children[43] = ROUTE1491;

let ROUTE1492 = browser.currentScene.createNode("ROUTE");
ROUTE1492.fromField = "value_changed";
ROUTE1492.fromNode = "r_thumb2Relax";
ROUTE1492.toField = "set_rotation";
ROUTE1492.toNode = "Joe_r_metacarpophalangeal_1";
browser.currentScene.children[44] = ROUTE1492;

let ROUTE1493 = browser.currentScene.createNode("ROUTE");
ROUTE1493.fromField = "value_changed";
ROUTE1493.fromNode = "r_thumb3Relax";
ROUTE1493.toField = "set_rotation";
ROUTE1493.toNode = "Joe_r_carpal_interphalangeal_1";
browser.currentScene.children[45] = ROUTE1493;

let ROUTE1494 = browser.currentScene.createNode("ROUTE");
ROUTE1494.fromField = "value_changed";
ROUTE1494.fromNode = "r_index0Relax";
ROUTE1494.toField = "set_rotation";
ROUTE1494.toNode = "Joe_r_carpometacarpal_2";
browser.currentScene.children[46] = ROUTE1494;

let ROUTE1495 = browser.currentScene.createNode("ROUTE");
ROUTE1495.fromField = "value_changed";
ROUTE1495.fromNode = "r_index1Relax";
ROUTE1495.toField = "set_rotation";
ROUTE1495.toNode = "Joe_r_metacarpophalangeal_2";
browser.currentScene.children[47] = ROUTE1495;

let ROUTE1496 = browser.currentScene.createNode("ROUTE");
ROUTE1496.fromField = "value_changed";
ROUTE1496.fromNode = "r_fingers2Relax";
ROUTE1496.toField = "set_rotation";
ROUTE1496.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
browser.currentScene.children[48] = ROUTE1496;

let ROUTE1497 = browser.currentScene.createNode("ROUTE");
ROUTE1497.fromField = "value_changed";
ROUTE1497.fromNode = "r_fingers3Relax";
ROUTE1497.toField = "set_rotation";
ROUTE1497.toNode = "Joe_r_carpal_distal_interphalangeal_2";
browser.currentScene.children[49] = ROUTE1497;

let ROUTE1498 = browser.currentScene.createNode("ROUTE");
ROUTE1498.fromField = "value_changed";
ROUTE1498.fromNode = "r_middle0Relax";
ROUTE1498.toField = "set_rotation";
ROUTE1498.toNode = "Joe_r_carpometacarpal_3";
browser.currentScene.children[50] = ROUTE1498;

let ROUTE1499 = browser.currentScene.createNode("ROUTE");
ROUTE1499.fromField = "value_changed";
ROUTE1499.fromNode = "r_middle1Relax";
ROUTE1499.toField = "set_rotation";
ROUTE1499.toNode = "Joe_r_metacarpophalangeal_3";
browser.currentScene.children[51] = ROUTE1499;

let ROUTE1500 = browser.currentScene.createNode("ROUTE");
ROUTE1500.fromField = "value_changed";
ROUTE1500.fromNode = "r_fingers2Relax";
ROUTE1500.toField = "set_rotation";
ROUTE1500.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
browser.currentScene.children[52] = ROUTE1500;

let ROUTE1501 = browser.currentScene.createNode("ROUTE");
ROUTE1501.fromField = "value_changed";
ROUTE1501.fromNode = "r_fingers3Relax";
ROUTE1501.toField = "set_rotation";
ROUTE1501.toNode = "Joe_r_carpal_distal_interphalangeal_3";
browser.currentScene.children[53] = ROUTE1501;

let ROUTE1502 = browser.currentScene.createNode("ROUTE");
ROUTE1502.fromField = "value_changed";
ROUTE1502.fromNode = "r_ring0Relax";
ROUTE1502.toField = "set_rotation";
ROUTE1502.toNode = "Joe_r_carpometacarpal_4";
browser.currentScene.children[54] = ROUTE1502;

let ROUTE1503 = browser.currentScene.createNode("ROUTE");
ROUTE1503.fromField = "value_changed";
ROUTE1503.fromNode = "r_ring1Relax";
ROUTE1503.toField = "set_rotation";
ROUTE1503.toNode = "Joe_r_metacarpophalangeal_4";
browser.currentScene.children[55] = ROUTE1503;

let ROUTE1504 = browser.currentScene.createNode("ROUTE");
ROUTE1504.fromField = "value_changed";
ROUTE1504.fromNode = "r_fingers2Relax";
ROUTE1504.toField = "set_rotation";
ROUTE1504.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
browser.currentScene.children[56] = ROUTE1504;

let ROUTE1505 = browser.currentScene.createNode("ROUTE");
ROUTE1505.fromField = "value_changed";
ROUTE1505.fromNode = "r_fingers3Relax";
ROUTE1505.toField = "set_rotation";
ROUTE1505.toNode = "Joe_r_carpal_distal_interphalangeal_4";
browser.currentScene.children[57] = ROUTE1505;

let ROUTE1506 = browser.currentScene.createNode("ROUTE");
ROUTE1506.fromField = "value_changed";
ROUTE1506.fromNode = "r_pinky0Relax";
ROUTE1506.toField = "set_rotation";
ROUTE1506.toNode = "Joe_r_carpometacarpal_5";
browser.currentScene.children[58] = ROUTE1506;

let ROUTE1507 = browser.currentScene.createNode("ROUTE");
ROUTE1507.fromField = "value_changed";
ROUTE1507.fromNode = "r_pinky1Relax";
ROUTE1507.toField = "set_rotation";
ROUTE1507.toNode = "Joe_r_metacarpophalangeal_5";
browser.currentScene.children[59] = ROUTE1507;

let ROUTE1508 = browser.currentScene.createNode("ROUTE");
ROUTE1508.fromField = "value_changed";
ROUTE1508.fromNode = "r_fingers2Relax";
ROUTE1508.toField = "set_rotation";
ROUTE1508.toNode = "Joe_r_carpal_proximal_interphalangeal_5";
browser.currentScene.children[60] = ROUTE1508;

let ROUTE1509 = browser.currentScene.createNode("ROUTE");
ROUTE1509.fromField = "value_changed";
ROUTE1509.fromNode = "r_fingers3Relax";
ROUTE1509.toField = "set_rotation";
ROUTE1509.toNode = "Joe_r_carpal_distal_interphalangeal_5";
browser.currentScene.children[61] = ROUTE1509;

let OrientationInterpolator1510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1510.DEF = "r_sternoclavicularRoll";
OrientationInterpolator1510.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1510.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,0.1,0,0,-1,0.22,0,0.5,-1,0.27,0,0,-1,0.1,0,0,1,0,0,0,1,0]);
browser.currentScene.children[62] = OrientationInterpolator1510;

let OrientationInterpolator1511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1511.DEF = "r_acromioclavicularRoll";
OrientationInterpolator1511.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1511.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
browser.currentScene.children[63] = OrientationInterpolator1511;

let OrientationInterpolator1512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1512.DEF = "r_shoulderRoll";
OrientationInterpolator1512.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1512.keyValue = new X3D.MFRotation([1,0,0,0,0,0,-1,1.66,-0.25,0,-1,1.76,0,0,-1,1.256,0,0,-1,0.05,1,0,0,0]);
browser.currentScene.children[64] = OrientationInterpolator1512;

let OrientationInterpolator1513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1513.DEF = "r_ForeArmPitch";
OrientationInterpolator1513.key = new X3D.MFFloat([0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1513.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.55,-1,-0.25,0,2.55,-1,-0.25,0,2.55,-1,-0.25,0,2.55,0,0,1,0,0,0,1,0]);
browser.currentScene.children[65] = OrientationInterpolator1513;

let OrientationInterpolator1514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1514.DEF = "r_wristRoll";
OrientationInterpolator1514.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
OrientationInterpolator1514.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,1,0,1.55,0,0,-1,1.55,0,0,1,0,0,0,1,0]);
browser.currentScene.children[66] = OrientationInterpolator1514;

let OrientationInterpolator1515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1515.DEF = "r_handPitch";
OrientationInterpolator1515.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1515.keyValue = new X3D.MFRotation([0,0,1,0,0,0,0.01,0.25,0,0,-0.01,0.03,0,0,0.01,0.05,0,0,0.01,0.01,0,0,1,0]);
browser.currentScene.children[67] = OrientationInterpolator1515;

let OrientationInterpolator1516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1516.DEF = "r_thumb1Pitch";
OrientationInterpolator1516.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1516.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.4,1,0,0,0.2,1,0,0,0]);
browser.currentScene.children[68] = OrientationInterpolator1516;

let OrientationInterpolator1517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1517.DEF = "r_thumb2Pitch";
OrientationInterpolator1517.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1517.keyValue = new X3D.MFRotation([0,0,1,0,1,1,0,0.3,1,1,0,0.3,1,1,0,0.6,1,1,0,0.3,0,1,1,0]);
browser.currentScene.children[69] = OrientationInterpolator1517;

let OrientationInterpolator1518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1518.DEF = "l_shoulderRoll";
OrientationInterpolator1518.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1518.keyValue = new X3D.MFRotation([0.25,0,1,1.76,0,0,1,1.66,0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0.25,0,1,1.76]);
browser.currentScene.children[70] = OrientationInterpolator1518;

let ROUTE1519 = browser.currentScene.createNode("ROUTE");
ROUTE1519.fromField = "fraction_changed";
ROUTE1519.fromNode = "Time2";
ROUTE1519.toField = "set_fraction";
ROUTE1519.toNode = "r_sternoclavicularRoll";
browser.currentScene.children[71] = ROUTE1519;

let ROUTE1520 = browser.currentScene.createNode("ROUTE");
ROUTE1520.fromField = "fraction_changed";
ROUTE1520.fromNode = "Time2";
ROUTE1520.toField = "set_fraction";
ROUTE1520.toNode = "r_acromioclavicularRoll";
browser.currentScene.children[72] = ROUTE1520;

let ROUTE1521 = browser.currentScene.createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "Time2";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "r_shoulderRoll";
browser.currentScene.children[73] = ROUTE1521;

let ROUTE1522 = browser.currentScene.createNode("ROUTE");
ROUTE1522.fromField = "fraction_changed";
ROUTE1522.fromNode = "Time2";
ROUTE1522.toField = "set_fraction";
ROUTE1522.toNode = "r_ForeArmPitch";
browser.currentScene.children[74] = ROUTE1522;

let ROUTE1523 = browser.currentScene.createNode("ROUTE");
ROUTE1523.fromField = "fraction_changed";
ROUTE1523.fromNode = "Time2";
ROUTE1523.toField = "set_fraction";
ROUTE1523.toNode = "r_wristRoll";
browser.currentScene.children[75] = ROUTE1523;

let ROUTE1524 = browser.currentScene.createNode("ROUTE");
ROUTE1524.fromField = "fraction_changed";
ROUTE1524.fromNode = "Time2";
ROUTE1524.toField = "set_fraction";
ROUTE1524.toNode = "r_handPitch";
browser.currentScene.children[76] = ROUTE1524;

let ROUTE1525 = browser.currentScene.createNode("ROUTE");
ROUTE1525.fromField = "fraction_changed";
ROUTE1525.fromNode = "Time2";
ROUTE1525.toField = "set_fraction";
ROUTE1525.toNode = "r_thumb1Pitch";
browser.currentScene.children[77] = ROUTE1525;

let ROUTE1526 = browser.currentScene.createNode("ROUTE");
ROUTE1526.fromField = "fraction_changed";
ROUTE1526.fromNode = "Time2";
ROUTE1526.toField = "set_fraction";
ROUTE1526.toNode = "r_thumb2Pitch";
browser.currentScene.children[78] = ROUTE1526;

let ROUTE1527 = browser.currentScene.createNode("ROUTE");
ROUTE1527.fromField = "value_changed";
ROUTE1527.fromNode = "r_sternoclavicularRoll";
ROUTE1527.toField = "set_rotation";
ROUTE1527.toNode = "Joe_r_sternoclavicular";
browser.currentScene.children[79] = ROUTE1527;

let ROUTE1528 = browser.currentScene.createNode("ROUTE");
ROUTE1528.fromField = "value_changed";
ROUTE1528.fromNode = "r_acromioclavicularRoll";
ROUTE1528.toField = "set_rotation";
ROUTE1528.toNode = "Joe_r_acromioclavicular";
browser.currentScene.children[80] = ROUTE1528;

let ROUTE1529 = browser.currentScene.createNode("ROUTE");
ROUTE1529.fromField = "value_changed";
ROUTE1529.fromNode = "r_shoulderRoll";
ROUTE1529.toField = "set_rotation";
ROUTE1529.toNode = "Joe_r_shoulder";
browser.currentScene.children[81] = ROUTE1529;

let ROUTE1530 = browser.currentScene.createNode("ROUTE");
ROUTE1530.fromField = "value_changed";
ROUTE1530.fromNode = "r_ForeArmPitch";
ROUTE1530.toField = "set_rotation";
ROUTE1530.toNode = "Joe_r_elbow";
browser.currentScene.children[82] = ROUTE1530;

let ROUTE1531 = browser.currentScene.createNode("ROUTE");
ROUTE1531.fromField = "value_changed";
ROUTE1531.fromNode = "r_wristRoll";
ROUTE1531.toField = "set_rotation";
ROUTE1531.toNode = "Joe_r_radiocarpal";
browser.currentScene.children[83] = ROUTE1531;

let ROUTE1532 = browser.currentScene.createNode("ROUTE");
ROUTE1532.fromField = "value_changed";
ROUTE1532.fromNode = "r_handPitch";
ROUTE1532.toField = "set_rotation";
ROUTE1532.toNode = "Joe_r_carpometacarpal_2";
browser.currentScene.children[84] = ROUTE1532;

let ROUTE1533 = browser.currentScene.createNode("ROUTE");
ROUTE1533.fromField = "value_changed";
ROUTE1533.fromNode = "r_handPitch";
ROUTE1533.toField = "set_rotation";
ROUTE1533.toNode = "Joe_r_metacarpophalangeal_2";
browser.currentScene.children[85] = ROUTE1533;

let ROUTE1534 = browser.currentScene.createNode("ROUTE");
ROUTE1534.fromField = "value_changed";
ROUTE1534.fromNode = "r_handPitch";
ROUTE1534.toField = "set_rotation";
ROUTE1534.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
browser.currentScene.children[86] = ROUTE1534;

let ROUTE1535 = browser.currentScene.createNode("ROUTE");
ROUTE1535.fromField = "value_changed";
ROUTE1535.fromNode = "r_handPitch";
ROUTE1535.toField = "set_rotation";
ROUTE1535.toNode = "Joe_r_carpal_distal_interphalangeal_2";
browser.currentScene.children[87] = ROUTE1535;

let ROUTE1536 = browser.currentScene.createNode("ROUTE");
ROUTE1536.fromField = "value_changed";
ROUTE1536.fromNode = "r_handPitch";
ROUTE1536.toField = "set_rotation";
ROUTE1536.toNode = "Joe_r_carpometacarpal_3";
browser.currentScene.children[88] = ROUTE1536;

let ROUTE1537 = browser.currentScene.createNode("ROUTE");
ROUTE1537.fromField = "value_changed";
ROUTE1537.fromNode = "r_handPitch";
ROUTE1537.toField = "set_rotation";
ROUTE1537.toNode = "Joe_r_metacarpophalangeal_3";
browser.currentScene.children[89] = ROUTE1537;

let ROUTE1538 = browser.currentScene.createNode("ROUTE");
ROUTE1538.fromField = "value_changed";
ROUTE1538.fromNode = "r_handPitch";
ROUTE1538.toField = "set_rotation";
ROUTE1538.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
browser.currentScene.children[90] = ROUTE1538;

let ROUTE1539 = browser.currentScene.createNode("ROUTE");
ROUTE1539.fromField = "value_changed";
ROUTE1539.fromNode = "r_handPitch";
ROUTE1539.toField = "set_rotation";
ROUTE1539.toNode = "Joe_r_carpal_distal_interphalangeal_3";
browser.currentScene.children[91] = ROUTE1539;

let ROUTE1540 = browser.currentScene.createNode("ROUTE");
ROUTE1540.fromField = "value_changed";
ROUTE1540.fromNode = "r_handPitch";
ROUTE1540.toField = "set_rotation";
ROUTE1540.toNode = "Joe_r_carpometacarpal_4";
browser.currentScene.children[92] = ROUTE1540;

let ROUTE1541 = browser.currentScene.createNode("ROUTE");
ROUTE1541.fromField = "value_changed";
ROUTE1541.fromNode = "r_handPitch";
ROUTE1541.toField = "set_rotation";
ROUTE1541.toNode = "Joe_r_metacarpophalangeal_4";
browser.currentScene.children[93] = ROUTE1541;

let ROUTE1542 = browser.currentScene.createNode("ROUTE");
ROUTE1542.fromField = "value_changed";
ROUTE1542.fromNode = "r_handPitch";
ROUTE1542.toField = "set_rotation";
ROUTE1542.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
browser.currentScene.children[94] = ROUTE1542;

let ROUTE1543 = browser.currentScene.createNode("ROUTE");
ROUTE1543.fromField = "value_changed";
ROUTE1543.fromNode = "r_handPitch";
ROUTE1543.toField = "set_rotation";
ROUTE1543.toNode = "Joe_r_carpal_distal_interphalangeal_4";
browser.currentScene.children[95] = ROUTE1543;

let ROUTE1544 = browser.currentScene.createNode("ROUTE");
ROUTE1544.fromField = "value_changed";
ROUTE1544.fromNode = "r_handPitch";
ROUTE1544.toField = "set_rotation";
ROUTE1544.toNode = "Joe_r_carpometacarpal_5";
browser.currentScene.children[96] = ROUTE1544;

let ROUTE1545 = browser.currentScene.createNode("ROUTE");
ROUTE1545.fromField = "value_changed";
ROUTE1545.fromNode = "r_handPitch";
ROUTE1545.toField = "set_rotation";
ROUTE1545.toNode = "Joe_r_metacarpophalangeal_5";
browser.currentScene.children[97] = ROUTE1545;

let ROUTE1546 = browser.currentScene.createNode("ROUTE");
ROUTE1546.fromField = "value_changed";
ROUTE1546.fromNode = "r_handPitch";
ROUTE1546.toField = "set_rotation";
ROUTE1546.toNode = "Joe_r_carpal_proximal_interphalangeal_5";
browser.currentScene.children[98] = ROUTE1546;

let ROUTE1547 = browser.currentScene.createNode("ROUTE");
ROUTE1547.fromField = "value_changed";
ROUTE1547.fromNode = "r_handPitch";
ROUTE1547.toField = "set_rotation";
ROUTE1547.toNode = "Joe_r_carpal_distal_interphalangeal_5";
browser.currentScene.children[99] = ROUTE1547;

let ROUTE1548 = browser.currentScene.createNode("ROUTE");
ROUTE1548.fromField = "value_changed";
ROUTE1548.fromNode = "r_thumb1Pitch";
ROUTE1548.toField = "set_rotation";
ROUTE1548.toNode = "Joe_r_carpometacarpal_1";
browser.currentScene.children[100] = ROUTE1548;

let ROUTE1549 = browser.currentScene.createNode("ROUTE");
ROUTE1549.fromField = "value_changed";
ROUTE1549.fromNode = "r_thumb2Pitch";
ROUTE1549.toField = "set_rotation";
ROUTE1549.toNode = "Joe_r_metacarpophalangeal_1";
browser.currentScene.children[101] = ROUTE1549;

let ROUTE1550 = browser.currentScene.createNode("ROUTE");
ROUTE1550.fromField = "value_changed";
ROUTE1550.fromNode = "r_thumb2Pitch";
ROUTE1550.toField = "set_rotation";
ROUTE1550.toNode = "Joe_r_carpal_interphalangeal_1";
browser.currentScene.children[102] = ROUTE1550;

let ROUTE1551 = browser.currentScene.createNode("ROUTE");
ROUTE1551.fromField = "value_changed";
ROUTE1551.fromNode = "l_shoulderRoll";
ROUTE1551.toField = "set_rotation";
ROUTE1551.toNode = "Joe_l_shoulder";
browser.currentScene.children[103] = ROUTE1551;

let Group1552 = browser.currentScene.createNode("Group");
let PositionInterpolator1553 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1553.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator1553.key = new X3D.MFFloat([0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1553.keyValue = new X3D.MFVec3f([0,-0.0093,0,0,-0.0039,0,0,-0.0088,0,0,-0.0149,0,0,-0.0264,0,0,-0.0393,0,0,-0.0502,0,0,-0.0747,0,0,-0.0273,0,0,-0.0161,0,0,-0.0113,0,0,-0.0058,0,0,-0.002,0,0,-0.0026,0,0,-0.0143,0,0,-0.038,0,0,-0.0565,0,0,-0.045,0,0,-0.0093,0]);
Group1552YYY.children = new X3D.MFNode();

Group1552ZZZ.children[0] = PositionInterpolator1553;

let OrientationInterpolator1554 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1554.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator1554.key = new X3D.MFFloat([0,1]);
OrientationInterpolator1554.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0]);
Group1552ZZZ.children[1] = OrientationInterpolator1554;

let OrientationInterpolator1555 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1555.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator1555.key = new X3D.MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1555.keyValue = new X3D.MFRotation([-0.873,0.0609,0.484,0.2865,0.9963,-0.0106,0.0848,0.2488,0.9965,0.0159,-0.0822,0.3836,-0.7018,-0.0322,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.0223,0.0817,0.5351,-0.9809,0.0491,0.1881,0.5204,-0.873,0.0609,0.484,0.2865]);
Group1552ZZZ.children[2] = OrientationInterpolator1555;

let OrientationInterpolator1556 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1556.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator1556.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1556.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.0868,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.0996,1,0,0,0.3942,1,0,0,0.3226]);
Group1552ZZZ.children[3] = OrientationInterpolator1556;

let OrientationInterpolator1557 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1557.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator1557.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1557.keyValue = new X3D.MFRotation([-1,0,0,0.0671,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.2222,-1,0,0,0.0671]);
Group1552ZZZ.children[4] = OrientationInterpolator1557;

let OrientationInterpolator1558 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1558.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator1558.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1558.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.4,1,0,0,0.127,-1,0,0,0.018,-1,0,0,0.058,-1,0,0,0.24,-1,0,0,0.35,-1,0,0,0.33,0,0,1,0]);
Group1552ZZZ.children[5] = OrientationInterpolator1558;

let OrientationInterpolator1559 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1559.DEF = "L_subtalar_ANIMATOR";
OrientationInterpolator1559.key = new X3D.MFFloat([0,0.3,1]);
OrientationInterpolator1559.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1552ZZZ.children[6] = OrientationInterpolator1559;

let OrientationInterpolator1560 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1560.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator1560.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1560.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.2,1,0,0,0]);
Group1552ZZZ.children[7] = OrientationInterpolator1560;

let OrientationInterpolator1561 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1561.DEF = "L_metatarsal_ANIMATOR";
OrientationInterpolator1561.key = new X3D.MFFloat([0,0.2,0.4,0.8,1]);
OrientationInterpolator1561.keyValue = new X3D.MFRotation([-1,0,0,0.3,-1,0,0,0.15,1,0,0,0.3,0,0,1,0,-1,0,0,0.3]);
Group1552ZZZ.children[8] = OrientationInterpolator1561;

let OrientationInterpolator1562 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1562.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator1562.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1562.keyValue = new X3D.MFRotation([-0.5831,0.0351,0.8116,0.1481,-0.995,0.023,0.0967,0.4683,-1,0.0019,0.008,0.4732,-0.998,-0.0158,-0.061,0.5079,-0.9911,-0.0354,-0.1286,0.5419,-0.9131,-0.0624,-0.403,0.3361,-0.4306,-0.0796,-0.899,0.0704,1,0,0,0.2571,0.9891,-0.0281,0.1444,0.3879,-0.5831,0.0351,0.8116,0.1481]);
Group1552ZZZ.children[9] = OrientationInterpolator1562;

let OrientationInterpolator1563 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1563.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator1563.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1563.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.0935,1,0,0,0.0856,1,0,0,0.2475,1,0,0,0.8573]);
Group1552ZZZ.children[10] = OrientationInterpolator1563;

let OrientationInterpolator1564 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1564.DEF = "R_subtalar_ANIMATOR";
OrientationInterpolator1564.key = new X3D.MFFloat([0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1564.keyValue = new X3D.MFRotation([-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]);
Group1552ZZZ.children[11] = OrientationInterpolator1564;

let OrientationInterpolator1565 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1565.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator1565.key = new X3D.MFFloat([0,0.22,1]);
OrientationInterpolator1565.keyValue = new X3D.MFRotation([1,0,0,-0.2,0,0,1,0,1,0,0,-0.2]);
Group1552ZZZ.children[12] = OrientationInterpolator1565;

let OrientationInterpolator1566 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1566.DEF = "R_metatarsal_ANIMATOR";
OrientationInterpolator1566.key = new X3D.MFFloat([0,0.2,0.4,0.8,1]);
OrientationInterpolator1566.keyValue = new X3D.MFRotation([-1,0,0,0.15,0,0,1,0,1,0,0,0.3,-1,0,0,0.3,-1,0,0,0.15]);
Group1552ZZZ.children[13] = OrientationInterpolator1566;

let OrientationInterpolator1567 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1567.DEF = "VL5_ANIMATOR";
OrientationInterpolator1567.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1567.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.0197,-0.5974,0.8017,0.0823,0.0093,-0.9648,0.2627,0.1734,-0.0124,0.9549,-0.2968,0.0873,-0.0081,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group1552ZZZ.children[14] = OrientationInterpolator1567;

let OrientationInterpolator1568 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1568.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator1568.key = new X3D.MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1568.keyValue = new X3D.MFRotation([0,-1,0,0.0864,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.0439,0,-1,0,0.0312,0,-1,0,0.0794,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.0864]);
Group1552ZZZ.children[15] = OrientationInterpolator1568;

let OrientationInterpolator1569 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1569.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator1569.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1569.keyValue = new X3D.MFRotation([1,0,0.4,0.12,-1,0,0.4,0.186,1,0,0.1,0.336,1,0,0.4,0.12]);
Group1552ZZZ.children[16] = OrientationInterpolator1569;

let OrientationInterpolator1570 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1570.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator1570.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1570.keyValue = new X3D.MFRotation([-1,0,0,0.066,-1,0,0,0.488,-1,0,0,0.0177,-1,0,0,0.066]);
Group1552ZZZ.children[17] = OrientationInterpolator1570;

let OrientationInterpolator1571 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1571.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator1571.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1571.keyValue = new X3D.MFRotation([0,-1,0,0.461,-0.3302,-0.9275,0.1755,0.5388,0.0328,-0.9993,-0.0172,0.492,0,-1,0,0.4611]);
Group1552ZZZ.children[18] = OrientationInterpolator1571;

let OrientationInterpolator1572 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1572.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator1572.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1572.keyValue = new X3D.MFRotation([-1,0,-1,0.092,1,0,-0.2,0.3197,-1,0,-0.5,0.1564,-1,0,-1,0.092]);
Group1552ZZZ.children[19] = OrientationInterpolator1572;

let OrientationInterpolator1573 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1573.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator1573.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1573.keyValue = new X3D.MFRotation([-1,0,0,0.4115,-1,0,0,0.0925,-1,0,0,0.5726,-1,0,0,0.4115]);
Group1552ZZZ.children[20] = OrientationInterpolator1573;

let OrientationInterpolator1574 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1574.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator1574.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator1574.keyValue = new X3D.MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.0258,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group1552ZZZ.children[21] = OrientationInterpolator1574;

browser.currentScene.children[104] = Group1552;

let ROUTE1575 = browser.currentScene.createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "Time1";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
browser.currentScene.children[105] = ROUTE1575;

let ROUTE1576 = browser.currentScene.createNode("ROUTE");
ROUTE1576.fromField = "fraction_changed";
ROUTE1576.fromNode = "Time1";
ROUTE1576.toField = "set_fraction";
ROUTE1576.toNode = "HUMANOIDROOT_ANIMATOR";
browser.currentScene.children[106] = ROUTE1576;

let ROUTE1577 = browser.currentScene.createNode("ROUTE");
ROUTE1577.fromField = "fraction_changed";
ROUTE1577.fromNode = "Time1";
ROUTE1577.toField = "set_fraction";
ROUTE1577.toNode = "L_HIP_ANIMATOR";
browser.currentScene.children[107] = ROUTE1577;

let ROUTE1578 = browser.currentScene.createNode("ROUTE");
ROUTE1578.fromField = "fraction_changed";
ROUTE1578.fromNode = "Time1";
ROUTE1578.toField = "set_fraction";
ROUTE1578.toNode = "L_KNEE_ANIMATOR";
browser.currentScene.children[108] = ROUTE1578;

let ROUTE1579 = browser.currentScene.createNode("ROUTE");
ROUTE1579.fromField = "fraction_changed";
ROUTE1579.fromNode = "Time1";
ROUTE1579.toField = "set_fraction";
ROUTE1579.toNode = "L_ANKLE_ANIMATOR";
browser.currentScene.children[109] = ROUTE1579;

let ROUTE1580 = browser.currentScene.createNode("ROUTE");
ROUTE1580.fromField = "fraction_changed";
ROUTE1580.fromNode = "Time1";
ROUTE1580.toField = "set_fraction";
ROUTE1580.toNode = "L_subtalar_ANIMATOR";
browser.currentScene.children[110] = ROUTE1580;

let ROUTE1581 = browser.currentScene.createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "Time1";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "L_MIDTARSAL_ANIMATOR";
browser.currentScene.children[111] = ROUTE1581;

let ROUTE1582 = browser.currentScene.createNode("ROUTE");
ROUTE1582.fromField = "fraction_changed";
ROUTE1582.fromNode = "Time1";
ROUTE1582.toField = "set_fraction";
ROUTE1582.toNode = "L_metatarsal_ANIMATOR";
browser.currentScene.children[112] = ROUTE1582;

let ROUTE1583 = browser.currentScene.createNode("ROUTE");
ROUTE1583.fromField = "fraction_changed";
ROUTE1583.fromNode = "Time1";
ROUTE1583.toField = "set_fraction";
ROUTE1583.toNode = "R_HIP_ANIMATOR";
browser.currentScene.children[113] = ROUTE1583;

let ROUTE1584 = browser.currentScene.createNode("ROUTE");
ROUTE1584.fromField = "fraction_changed";
ROUTE1584.fromNode = "Time1";
ROUTE1584.toField = "set_fraction";
ROUTE1584.toNode = "R_KNEE_ANIMATOR";
browser.currentScene.children[114] = ROUTE1584;

let ROUTE1585 = browser.currentScene.createNode("ROUTE");
ROUTE1585.fromField = "fraction_changed";
ROUTE1585.fromNode = "Time1";
ROUTE1585.toField = "set_fraction";
ROUTE1585.toNode = "R_ANKLE_ANIMATOR";
browser.currentScene.children[115] = ROUTE1585;

let ROUTE1586 = browser.currentScene.createNode("ROUTE");
ROUTE1586.fromField = "fraction_changed";
ROUTE1586.fromNode = "Time1";
ROUTE1586.toField = "set_fraction";
ROUTE1586.toNode = "R_subtalar_ANIMATOR";
browser.currentScene.children[116] = ROUTE1586;

let ROUTE1587 = browser.currentScene.createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "Time1";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "R_MIDTARSAL_ANIMATOR";
browser.currentScene.children[117] = ROUTE1587;

let ROUTE1588 = browser.currentScene.createNode("ROUTE");
ROUTE1588.fromField = "fraction_changed";
ROUTE1588.fromNode = "Time1";
ROUTE1588.toField = "set_fraction";
ROUTE1588.toNode = "R_metatarsal_ANIMATOR";
browser.currentScene.children[118] = ROUTE1588;

let ROUTE1589 = browser.currentScene.createNode("ROUTE");
ROUTE1589.fromField = "fraction_changed";
ROUTE1589.fromNode = "Time1";
ROUTE1589.toField = "set_fraction";
ROUTE1589.toNode = "VL5_ANIMATOR";
browser.currentScene.children[119] = ROUTE1589;

let ROUTE1590 = browser.currentScene.createNode("ROUTE");
ROUTE1590.fromField = "fraction_changed";
ROUTE1590.fromNode = "Time1";
ROUTE1590.toField = "set_fraction";
ROUTE1590.toNode = "SKULLBASE_ANIMATOR";
browser.currentScene.children[120] = ROUTE1590;

let ROUTE1591 = browser.currentScene.createNode("ROUTE");
ROUTE1591.fromField = "fraction_changed";
ROUTE1591.fromNode = "Time1";
ROUTE1591.toField = "set_fraction";
ROUTE1591.toNode = "L_SHOULDER_ANIMATOR";
browser.currentScene.children[121] = ROUTE1591;

let ROUTE1592 = browser.currentScene.createNode("ROUTE");
ROUTE1592.fromField = "fraction_changed";
ROUTE1592.fromNode = "Time1";
ROUTE1592.toField = "set_fraction";
ROUTE1592.toNode = "L_ELBOW_ANIMATOR";
browser.currentScene.children[122] = ROUTE1592;

let ROUTE1593 = browser.currentScene.createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "Time1";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "L_WRIST_ANIMATOR";
browser.currentScene.children[123] = ROUTE1593;

let ROUTE1594 = browser.currentScene.createNode("ROUTE");
ROUTE1594.fromField = "value_changed";
ROUTE1594.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1594.toField = "set_translation";
ROUTE1594.toNode = "Joe_humanoid_root";
browser.currentScene.children[124] = ROUTE1594;

let ROUTE1595 = browser.currentScene.createNode("ROUTE");
ROUTE1595.fromField = "value_changed";
ROUTE1595.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1595.toField = "set_rotation";
ROUTE1595.toNode = "Joe_humanoid_root";
browser.currentScene.children[125] = ROUTE1595;

let ROUTE1596 = browser.currentScene.createNode("ROUTE");
ROUTE1596.fromField = "value_changed";
ROUTE1596.fromNode = "L_HIP_ANIMATOR";
ROUTE1596.toField = "set_rotation";
ROUTE1596.toNode = "Joe_l_hip";
browser.currentScene.children[126] = ROUTE1596;

let ROUTE1597 = browser.currentScene.createNode("ROUTE");
ROUTE1597.fromField = "value_changed";
ROUTE1597.fromNode = "L_KNEE_ANIMATOR";
ROUTE1597.toField = "set_rotation";
ROUTE1597.toNode = "Joe_l_knee";
browser.currentScene.children[127] = ROUTE1597;

let ROUTE1598 = browser.currentScene.createNode("ROUTE");
ROUTE1598.fromField = "value_changed";
ROUTE1598.fromNode = "L_ANKLE_ANIMATOR";
ROUTE1598.toField = "set_rotation";
ROUTE1598.toNode = "Joe_l_talocrural";
browser.currentScene.children[128] = ROUTE1598;

let ROUTE1599 = browser.currentScene.createNode("ROUTE");
ROUTE1599.fromField = "value_changed";
ROUTE1599.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1599.toField = "set_rotation";
ROUTE1599.toNode = "Joe_l_metatarsophalangeal_2";
browser.currentScene.children[129] = ROUTE1599;

let ROUTE1600 = browser.currentScene.createNode("ROUTE");
ROUTE1600.fromField = "value_changed";
ROUTE1600.fromNode = "L_subtalar_ANIMATOR";
ROUTE1600.toField = "set_rotation";
ROUTE1600.toNode = "Joe_l_tarsometatarsal_2";
browser.currentScene.children[130] = ROUTE1600;

let ROUTE1601 = browser.currentScene.createNode("ROUTE");
ROUTE1601.fromField = "value_changed";
ROUTE1601.fromNode = "L_metatarsal_ANIMATOR";
ROUTE1601.toField = "set_rotation";
ROUTE1601.toNode = "Joe_l_metatarsal";
browser.currentScene.children[131] = ROUTE1601;

let ROUTE1602 = browser.currentScene.createNode("ROUTE");
ROUTE1602.fromField = "value_changed";
ROUTE1602.fromNode = "R_HIP_ANIMATOR";
ROUTE1602.toField = "set_rotation";
ROUTE1602.toNode = "Joe_r_hip";
browser.currentScene.children[132] = ROUTE1602;

let ROUTE1603 = browser.currentScene.createNode("ROUTE");
ROUTE1603.fromField = "value_changed";
ROUTE1603.fromNode = "R_KNEE_ANIMATOR";
ROUTE1603.toField = "set_rotation";
ROUTE1603.toNode = "Joe_r_knee";
browser.currentScene.children[133] = ROUTE1603;

let ROUTE1604 = browser.currentScene.createNode("ROUTE");
ROUTE1604.fromField = "value_changed";
ROUTE1604.fromNode = "R_ANKLE_ANIMATOR";
ROUTE1604.toField = "set_rotation";
ROUTE1604.toNode = "Joe_r_talocrural";
browser.currentScene.children[134] = ROUTE1604;

let ROUTE1605 = browser.currentScene.createNode("ROUTE");
ROUTE1605.fromField = "value_changed";
ROUTE1605.fromNode = "R_subtalar_ANIMATOR";
ROUTE1605.toField = "set_rotation";
ROUTE1605.toNode = "Joe_r_tarsometatarsal_2";
browser.currentScene.children[135] = ROUTE1605;

let ROUTE1606 = browser.currentScene.createNode("ROUTE");
ROUTE1606.fromField = "value_changed";
ROUTE1606.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1606.toField = "set_rotation";
ROUTE1606.toNode = "Joe_r_metatarsophalangeal_2";
browser.currentScene.children[136] = ROUTE1606;

let ROUTE1607 = browser.currentScene.createNode("ROUTE");
ROUTE1607.fromField = "value_changed";
ROUTE1607.fromNode = "R_metatarsal_ANIMATOR";
ROUTE1607.toField = "set_rotation";
ROUTE1607.toNode = "Joe_r_tarsal_distal_interphalangeal_2";
browser.currentScene.children[137] = ROUTE1607;

let ROUTE1608 = browser.currentScene.createNode("ROUTE");
ROUTE1608.fromField = "value_changed";
ROUTE1608.fromNode = "VL5_ANIMATOR";
ROUTE1608.toField = "set_rotation";
ROUTE1608.toNode = "Joe_vl5";
browser.currentScene.children[138] = ROUTE1608;

let ROUTE1609 = browser.currentScene.createNode("ROUTE");
ROUTE1609.fromField = "value_changed";
ROUTE1609.fromNode = "SKULLBASE_ANIMATOR";
ROUTE1609.toField = "set_rotation";
ROUTE1609.toNode = "Joe_skullbase";
browser.currentScene.children[139] = ROUTE1609;

let ROUTE1610 = browser.currentScene.createNode("ROUTE");
ROUTE1610.fromField = "value_changed";
ROUTE1610.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE1610.toField = "set_rotation";
ROUTE1610.toNode = "Joe_l_shoulder";
browser.currentScene.children[140] = ROUTE1610;

let ROUTE1611 = browser.currentScene.createNode("ROUTE");
ROUTE1611.fromField = "value_changed";
ROUTE1611.fromNode = "L_ELBOW_ANIMATOR";
ROUTE1611.toField = "set_rotation";
ROUTE1611.toNode = "Joe_l_elbow";
browser.currentScene.children[141] = ROUTE1611;

let ROUTE1612 = browser.currentScene.createNode("ROUTE");
ROUTE1612.fromField = "value_changed";
ROUTE1612.fromNode = "L_WRIST_ANIMATOR";
ROUTE1612.toField = "set_rotation";
ROUTE1612.toNode = "Joe_l_radiocarpal";
browser.currentScene.children[142] = ROUTE1612;

let ROUTE1613 = browser.currentScene.createNode("ROUTE");
ROUTE1613.fromField = "value_changed";
ROUTE1613.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE1613.toField = "set_rotation";
ROUTE1613.toNode = "Joe_r_shoulder";
browser.currentScene.children[143] = ROUTE1613;

let ROUTE1614 = browser.currentScene.createNode("ROUTE");
ROUTE1614.fromField = "value_changed";
ROUTE1614.fromNode = "R_ELBOW_ANIMATOR";
ROUTE1614.toField = "set_rotation";
ROUTE1614.toNode = "Joe_r_elbow";
browser.currentScene.children[144] = ROUTE1614;

let ROUTE1615 = browser.currentScene.createNode("ROUTE");
ROUTE1615.fromField = "value_changed";
ROUTE1615.fromNode = "R_WRIST_ANIMATOR";
ROUTE1615.toField = "set_rotation";
ROUTE1615.toNode = "Joe_r_radiocarpal";
browser.currentScene.children[145] = ROUTE1615;

}
main ();
