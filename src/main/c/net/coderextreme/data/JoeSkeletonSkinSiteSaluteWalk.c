#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "JoeSkeletonSkinSiteSaluteWalk.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Michalis Kamburelis";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translator";
meta7.content = "Don Brutzman";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translator";
meta8.content = "Joe D. Williams";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "9 January 2004";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "translated";
meta10.content = "4 December 2022";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "modified";
meta11.content = "16 March 2026";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "TODO";
meta12.content = "X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "JoeSkeletonSkinSiteSaluteWalk.original.x3dv";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "drawing";
meta17.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Image";
meta23.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Image";
meta25.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "generator";
meta26.content = "tovrmlx3d, https://castle-engine.io/convert.php";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "reference";
meta27.content = "https://castle-engine.io/view3dscene.php#section_converting";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "generator";
meta28.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "generator";
meta29.content = "X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "identifier";
meta30.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "license";
meta31.content = "../license.html";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "generator";
meta32.content = "X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[30] = meta32;

head = head1;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String["By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"]);
WorldInfo34.title = "JoeSkeletonSkinSiteSaluteWalk.x3d";
children = new MFNode();

children[0] = WorldInfo34;

NavigationInfo NavigationInfo35 = createNode("NavigationInfo");
NavigationInfo35.DEF = "HeadlightOnRevealsSkinTextureAndColors";
children[1] = NavigationInfo35;

Background Background36 = createNode("Background");
Background36.groundAngle = new MFFloat(new float[1.57]);
Background36.groundColor = new MFColor(new float[0,0.1,0,0,0.1,0]);
Background36.skyColor = new MFColor(new float[0,0,0.1]);
children[2] = Background36;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "cordsysfloor";
Transform37.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline38 = createNode("Inline");
Inline38.DEF = "CoordinateAxes";
Inline38.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform37.children = new MFNode();

Transform37.children[0] = Inline38;

children[3] = Transform37;

//Authoring hint: these axes are aligned within local coordinate system
Group Group39 = createNode("Group");
Group39.DEF = "ViewpointGroup";
Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Front Up View";
Viewpoint40.orientation = new SFRotation(new float[-1,-1,0,0.55]);
Viewpoint40.position = new SFVec3f(new float[-1,2,2.5]);
Group39.children = new MFNode();

Group39.children[0] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "From Left View";
Viewpoint41.orientation = new SFRotation(new float[0.3,1,0,-1.57]);
Viewpoint41.position = new SFVec3f(new float[-2.5,1.5,0]);
Group39.children[1] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "Front Mid View";
Viewpoint42.position = new SFVec3f(new float[0,0.5,1.25]);
Group39.children[2] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.description = "Front Feet View";
Viewpoint43.position = new SFVec3f(new float[0,0,0.75]);
Group39.children[3] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "From Right View";
Viewpoint44.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint44.position = new SFVec3f(new float[1,1,0]);
Group39.children[4] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.centerOfRotation = new SFVec3f(new float[0,1.65,0]);
Viewpoint45.description = "Front Head View";
Viewpoint45.position = new SFVec3f(new float[0,1.65,0.75]);
Group39.children[5] = Viewpoint45;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.description = "Front Mid View";
Viewpoint46.position = new SFVec3f(new float[0,1,1.75]);
Group39.children[6] = Viewpoint46;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.description = "Rear View";
Viewpoint47.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint47.position = new SFVec3f(new float[0,1.5,-4]);
Group39.children[7] = Viewpoint47;

Viewpoint Viewpoint48 = createNode("Viewpoint");
Viewpoint48.description = "Top View";
Viewpoint48.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint48.position = new SFVec3f(new float[0,4,0]);
Group39.children[8] = Viewpoint48;

Viewpoint Viewpoint49 = createNode("Viewpoint");
Viewpoint49.description = "Bottom View";
Viewpoint49.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint49.position = new SFVec3f(new float[0,-4,0]);
Group39.children[9] = Viewpoint49;

Viewpoint Viewpoint50 = createNode("Viewpoint");
Viewpoint50.description = "Right View";
Viewpoint50.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint50.position = new SFVec3f(new float[4,1.5,0]);
Group39.children[10] = Viewpoint50;

children[4] = Group39;

Group Group51 = createNode("Group");
Group51.DEF = "VisualizationShapes";
Group51.visible = False;
Transform Transform52 = createNode("Transform");
Transform52.scale = new SFVec3f(new float[5,5,5]);
Transform52.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape53 = createNode("Shape");
Shape53.DEF = "jointbox";
Appearance Appearance54 = createNode("Appearance");
Material Material55 = createNode("Material");
Material55.ambientIntensity = 0.5;
Material55.diffuseColor = new SFColor(new float[0,0,0]);
Material55.shininess = 1;
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

IndexedFaceSet IndexedFaceSet56 = createNode("IndexedFaceSet");
IndexedFaceSet56.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet56.creaseAngle = 0.1;
Color Color57 = createNode("Color");
Color57.color = new MFColor(new float[1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
IndexedFaceSet56.color = Color57;

Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.DEF = "boxCoords";
Coordinate58.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet56.coord = Coordinate58;

Shape53.geometry = IndexedFaceSet56;

Transform52.child = new undefined();

Transform52.child[0] = Shape53;

Group51.children = new MFNode();

Group51.children[0] = Transform52;

Transform Transform59 = createNode("Transform");
Transform59.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform59.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Shape Shape60 = createNode("Shape");
Shape60.DEF = "sitebox";
Appearance Appearance61 = createNode("Appearance");
Material Material62 = createNode("Material");
Material62.ambientIntensity = 1;
Material62.diffuseColor = new SFColor(new float[1,0,0]);
Material62.emissiveColor = new SFColor(new float[1,0,0]);
Material62.shininess = 0.7;
Material62.specularColor = new SFColor(new float[1,0,0]);
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

IndexedFaceSet IndexedFaceSet63 = createNode("IndexedFaceSet");
IndexedFaceSet63.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet63.creaseAngle = 0.1;
Coordinate Coordinate64 = createNode("Coordinate");
Coordinate64.USE = "boxCoords";
IndexedFaceSet63.coord = Coordinate64;

Shape60.geometry = IndexedFaceSet63;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Group51.children[1] = Transform59;

Transform Transform65 = createNode("Transform");
Transform65.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform65.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape66 = createNode("Shape");
Appearance Appearance67 = createNode("Appearance");
Appearance67.DEF = "SegmentLine";
Material Material68 = createNode("Material");
Material68.diffuseColor = new SFColor(new float[0,1,0]);
Material68.emissiveColor = new SFColor(new float[0,1,0]);
Material68.specularColor = new SFColor(new float[0,1,0]);
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

IndexedLineSet IndexedLineSet69 = createNode("IndexedLineSet");
IndexedLineSet69.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate70 = createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0,0,0,0,0.0001,0]);
IndexedLineSet69.coord = Coordinate70;

Shape66.geometry = IndexedLineSet69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Group51.children[2] = Transform65;

Transform Transform71 = createNode("Transform");
Transform71.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform71.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Shape Shape72 = createNode("Shape");
Shape72.DEF = "skinsphere";
Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.ambientIntensity = 0.5;
Material74.diffuseColor = new SFColor(new float[0,1,0]);
Material74.emissiveColor = new SFColor(new float[0,1,0]);
Material74.shininess = 1;
Material74.specularColor = new SFColor(new float[0,1,0]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

Sphere Sphere75 = createNode("Sphere");
Sphere75.radius = 0.005;
Shape72.geometry = Sphere75;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Group51.children[3] = Transform71;

children[5] = Group51;

Group Group76 = createNode("Group");
Group76.DEF = "SpecHumanoid";
Group Group77 = createNode("Group");
Group77.DEF = "JoeISOHumanoid";
HAnimHumanoid HAnimHumanoid78 = createNode("HAnimHumanoid");
HAnimHumanoid78.name = "Human";
HAnimHumanoid78.DEF = "Joe_Human";
HAnimHumanoid78.loa = 4;
HAnimHumanoid78.version = "2.0";
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
MetadataSet MetadataSet79 = createNode("MetadataSet");
MetadataSet79.name = "HAnimHumanoid.info";
MetadataSet79.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString80 = createNode("MetadataString");
MetadataString80.name = "humanoidVersion";
MetadataString80.value = new MFString(new java.lang.String["2.0"]);
MetadataSet79.value = new MFNode();

MetadataSet79.value[0] = MetadataString80;

HAnimHumanoid78.metadata = new SFNode();

HAnimHumanoid78.metadata[0] = MetadataSet79;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.name = "humanoid_root";
HAnimJoint81.DEF = "Joe_humanoid_root";
HAnimJoint81.center = new SFVec3f(new float[0,0.875,0]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.name = "sacrum";
HAnimSegment82.DEF = "Joe_sacrum";
Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[0,0.875,0]);
Shape Shape84 = createNode("Shape");
Shape84.USE = "jointbox";
Transform83.child = new undefined();

Transform83.child[0] = Shape84;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Transform83;

Shape Shape85 = createNode("Shape");
Appearance Appearance86 = createNode("Appearance");
Appearance86.USE = "SegmentLine";
Shape85.appearance = Appearance86;

IndexedLineSet IndexedLineSet87 = createNode("IndexedLineSet");
IndexedLineSet87.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate88 = createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[0,0.875,0,0,0.92,0]);
IndexedLineSet87.coord = Coordinate88;

Shape85.geometry = IndexedLineSet87;

HAnimSegment82.children[1] = Shape85;

Transform Transform89 = createNode("Transform");
Transform89.translation = new SFVec3f(new float[0,0.92,0.08]);
Shape Shape90 = createNode("Shape");
Shape90.USE = "skinsphere";
Transform89.child = new undefined();

Transform89.child[0] = Shape90;

HAnimSegment82.children[2] = Transform89;

Transform Transform91 = createNode("Transform");
Transform91.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape92 = createNode("Shape");
Shape92.USE = "skinsphere";
Transform91.child = new undefined();

Transform91.child[0] = Shape92;

HAnimSegment82.children[3] = Transform91;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "sacroiliac";
HAnimJoint93.DEF = "Joe_sacroiliac";
HAnimJoint93.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment HAnimSegment94 = createNode("HAnimSegment");
HAnimSegment94.name = "pelvis";
HAnimSegment94.DEF = "Joe_pelvis";
Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform96 = createNode("Transform");
Shape Shape97 = createNode("Shape");
Shape97.USE = "jointbox";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

Transform95.children = new MFNode();

Transform95.children[0] = Transform96;

HAnimSegment94.children = new MFNode();

HAnimSegment94.children[0] = Transform95;

Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Appearance99.USE = "SegmentLine";
Shape98.appearance = Appearance99;

IndexedLineSet IndexedLineSet100 = createNode("IndexedLineSet");
IndexedLineSet100.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate101 = createNode("Coordinate");
Coordinate101.point = new MFVec3f(new float[0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
IndexedLineSet100.coord = Coordinate101;

Shape98.geometry = IndexedLineSet100;

HAnimSegment94.children[1] = Shape98;

HAnimSite HAnimSite102 = createNode("HAnimSite");
HAnimSite102.name = "l_iliocristale_pt";
HAnimSite102.DEF = "Joe_l_iliocristale_pt";
HAnimSite102.translation = new SFVec3f(new float[0.1425,1.065,0.0033]);
Shape Shape103 = createNode("Shape");
Shape103.USE = "sitebox";
HAnimSite102.children = new MFNode();

HAnimSite102.children[0] = Shape103;

HAnimSegment94.children[2] = HAnimSite102;

HAnimSite HAnimSite104 = createNode("HAnimSite");
HAnimSite104.name = "l_trochanterion_pt";
HAnimSite104.DEF = "Joe_l_trochanterion_pt";
HAnimSite104.translation = new SFVec3f(new float[0.15,0.9,-0.01]);
Shape Shape105 = createNode("Shape");
Shape105.USE = "sitebox";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = Shape105;

HAnimSegment94.children[3] = HAnimSite104;

HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.name = "r_iliocristale_pt";
HAnimSite106.DEF = "Joe_r_iliocristale_pt";
HAnimSite106.translation = new SFVec3f(new float[-0.1425,1.065,0.0033]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "sitebox";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = Shape107;

HAnimSegment94.children[4] = HAnimSite106;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.name = "r_trochanterion_pt";
HAnimSite108.DEF = "Joe_r_trochanterion_pt";
HAnimSite108.translation = new SFVec3f(new float[-0.15,0.9,-0.01]);
Shape Shape109 = createNode("Shape");
Shape109.USE = "sitebox";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = Shape109;

HAnimSegment94.children[5] = HAnimSite108;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.name = "l_asis_pt";
HAnimSite110.DEF = "Joe_l_asis_pt";
HAnimSite110.translation = new SFVec3f(new float[0.0935,1.03,0.075]);
Shape Shape111 = createNode("Shape");
Shape111.USE = "sitebox";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = Shape111;

HAnimSegment94.children[6] = HAnimSite110;

HAnimSite HAnimSite112 = createNode("HAnimSite");
HAnimSite112.name = "r_asis_pt";
HAnimSite112.DEF = "Joe_r_asis_pt";
HAnimSite112.translation = new SFVec3f(new float[-0.0935,1.03,0.075]);
Shape Shape113 = createNode("Shape");
Shape113.USE = "sitebox";
HAnimSite112.children = new MFNode();

HAnimSite112.children[0] = Shape113;

HAnimSegment94.children[7] = HAnimSite112;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "l_psis_pt";
HAnimSite114.DEF = "Joe_l_psis_pt";
HAnimSite114.translation = new SFVec3f(new float[0.0773,1.019,-0.12]);
Shape Shape115 = createNode("Shape");
Shape115.USE = "sitebox";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = Shape115;

HAnimSegment94.children[8] = HAnimSite114;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.name = "r_psis_pt";
HAnimSite116.DEF = "Joe_r_psis_pt";
HAnimSite116.translation = new SFVec3f(new float[-0.0773,1.019,-0.12]);
Shape Shape117 = createNode("Shape");
Shape117.USE = "sitebox";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = Shape117;

HAnimSegment94.children[9] = HAnimSite116;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "floormarker_pt";
HAnimSite118.DEF = "Joe_floormarker_pt";
Transform Transform119 = createNode("Transform");
Transform119.scale = new SFVec3f(new float[3,3,3]);
Shape Shape120 = createNode("Shape");
Shape120.USE = "sitebox";
Transform119.child = new undefined();

Transform119.child[0] = Shape120;

HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = Transform119;

HAnimSegment94.children[10] = HAnimSite118;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "crotch_pt";
HAnimSite121.DEF = "Joe_crotch_pt";
HAnimSite121.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape122 = createNode("Shape");
Shape122.USE = "sitebox";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Shape122;

HAnimSegment94.children[11] = HAnimSite121;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "l_hip";
HAnimJoint123.DEF = "Joe_l_hip";
HAnimJoint123.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint123.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint123.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimSegment HAnimSegment124 = createNode("HAnimSegment");
HAnimSegment124.name = "l_thigh";
HAnimSegment124.DEF = "Joe_l_thigh";
Transform Transform125 = createNode("Transform");
Transform125.translation = new SFVec3f(new float[0.1,0.92,0]);
Shape Shape126 = createNode("Shape");
Shape126.USE = "jointbox";
Transform125.child = new undefined();

Transform125.child[0] = Shape126;

HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = Transform125;

Shape Shape127 = createNode("Shape");
Appearance Appearance128 = createNode("Appearance");
Appearance128.USE = "SegmentLine";
Shape127.appearance = Appearance128;

IndexedLineSet IndexedLineSet129 = createNode("IndexedLineSet");
IndexedLineSet129.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate130 = createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0.1,0.92,0,0.115,0.466,0]);
IndexedLineSet129.coord = Coordinate130;

Shape127.geometry = IndexedLineSet129;

HAnimSegment124.children[1] = Shape127;

Transform Transform131 = createNode("Transform");
Transform131.translation = new SFVec3f(new float[0.1,0.9,0.0775]);
Shape Shape132 = createNode("Shape");
Shape132.USE = "skinsphere";
Transform131.child = new undefined();

Transform131.child[0] = Shape132;

HAnimSegment124.children[2] = Transform131;

Transform Transform133 = createNode("Transform");
Transform133.translation = new SFVec3f(new float[0.079,0.92,-0.14]);
Shape Shape134 = createNode("Shape");
Shape134.USE = "skinsphere";
Transform133.child = new undefined();

Transform133.child[0] = Shape134;

HAnimSegment124.children[3] = Transform133;

Transform Transform135 = createNode("Transform");
Transform135.translation = new SFVec3f(new float[0.171,0.65,0]);
Shape Shape136 = createNode("Shape");
Shape136.USE = "skinsphere";
Transform135.child = new undefined();

Transform135.child[0] = Shape136;

HAnimSegment124.children[4] = Transform135;

Transform Transform137 = createNode("Transform");
Transform137.translation = new SFVec3f(new float[0.02,0.65,0]);
Shape Shape138 = createNode("Shape");
Shape138.USE = "skinsphere";
Transform137.child = new undefined();

Transform137.child[0] = Shape138;

HAnimSegment124.children[5] = Transform137;

Transform Transform139 = createNode("Transform");
Transform139.translation = new SFVec3f(new float[0.1,0.65,-0.08]);
Shape Shape140 = createNode("Shape");
Shape140.USE = "skinsphere";
Transform139.child = new undefined();

Transform139.child[0] = Shape140;

HAnimSegment124.children[6] = Transform139;

Transform Transform141 = createNode("Transform");
Transform141.translation = new SFVec3f(new float[0.1,0.65,0.07]);
Shape Shape142 = createNode("Shape");
Shape142.USE = "skinsphere";
Transform141.child = new undefined();

Transform141.child[0] = Shape142;

HAnimSegment124.children[7] = Transform141;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.name = "l_knee_crease_pt";
HAnimSite143.DEF = "Joe_l_knee_crease_pt";
HAnimSite143.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape144 = createNode("Shape");
Shape144.USE = "sitebox";
HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = Shape144;

HAnimSegment124.children[8] = HAnimSite143;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite145.DEF = "Joe_l_femoral_lateral_epicondyle_pt";
HAnimSite145.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape146 = createNode("Shape");
Shape146.USE = "sitebox";
HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = Shape146;

HAnimSegment124.children[9] = HAnimSite145;

HAnimSite HAnimSite147 = createNode("HAnimSite");
HAnimSite147.name = "l_femoral_medial_epicondyle_pt";
HAnimSite147.DEF = "Joe_l_femoral_medial_epicondyle_pt";
HAnimSite147.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape148 = createNode("Shape");
Shape148.USE = "sitebox";
HAnimSite147.children = new MFNode();

HAnimSite147.children[0] = Shape148;

HAnimSegment124.children[10] = HAnimSite147;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.name = "l_knee";
HAnimJoint149.DEF = "Joe_l_knee";
HAnimJoint149.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint149.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint149.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment150 = createNode("HAnimSegment");
HAnimSegment150.name = "l_calf";
HAnimSegment150.DEF = "Joe_l_calf";
Transform Transform151 = createNode("Transform");
Transform151.translation = new SFVec3f(new float[0.115,0.466,0]);
Shape Shape152 = createNode("Shape");
Shape152.USE = "jointbox";
Transform151.child = new undefined();

Transform151.child[0] = Shape152;

HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = Transform151;

Shape Shape153 = createNode("Shape");
Appearance Appearance154 = createNode("Appearance");
Appearance154.USE = "SegmentLine";
Shape153.appearance = Appearance154;

IndexedLineSet IndexedLineSet155 = createNode("IndexedLineSet");
IndexedLineSet155.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate156 = createNode("Coordinate");
Coordinate156.point = new MFVec3f(new float[0.115,0.466,0,0.1,0.069,0]);
IndexedLineSet155.coord = Coordinate156;

Shape153.geometry = IndexedLineSet155;

HAnimSegment150.children[1] = Shape153;

Transform Transform157 = createNode("Transform");
Transform157.translation = new SFVec3f(new float[0.115,0.466,0.06]);
Shape Shape158 = createNode("Shape");
Shape158.USE = "skinsphere";
Transform157.child = new undefined();

Transform157.child[0] = Shape158;

HAnimSegment150.children[2] = Transform157;

Transform Transform159 = createNode("Transform");
Transform159.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape160 = createNode("Shape");
Shape160.USE = "skinsphere";
Transform159.child = new undefined();

Transform159.child[0] = Shape160;

HAnimSegment150.children[3] = Transform159;

Transform Transform161 = createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape162 = createNode("Shape");
Shape162.USE = "skinsphere";
Transform161.child = new undefined();

Transform161.child[0] = Shape162;

HAnimSegment150.children[4] = Transform161;

Transform Transform163 = createNode("Transform");
Transform163.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape164 = createNode("Shape");
Shape164.USE = "skinsphere";
Transform163.child = new undefined();

Transform163.child[0] = Shape164;

HAnimSegment150.children[5] = Transform163;

Transform Transform165 = createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.17,0.3,0]);
Shape Shape166 = createNode("Shape");
Shape166.USE = "skinsphere";
Transform165.child = new undefined();

Transform165.child[0] = Shape166;

HAnimSegment150.children[6] = Transform165;

Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[0.06,0.3,0]);
Shape Shape168 = createNode("Shape");
Shape168.USE = "skinsphere";
Transform167.child = new undefined();

Transform167.child[0] = Shape168;

HAnimSegment150.children[7] = Transform167;

Transform Transform169 = createNode("Transform");
Transform169.translation = new SFVec3f(new float[0.1,0.3,-0.05]);
Shape Shape170 = createNode("Shape");
Shape170.USE = "skinsphere";
Transform169.child = new undefined();

Transform169.child[0] = Shape170;

HAnimSegment150.children[8] = Transform169;

Transform Transform171 = createNode("Transform");
Transform171.translation = new SFVec3f(new float[0.1,0.3,0.05]);
Shape Shape172 = createNode("Shape");
Shape172.USE = "skinsphere";
Transform171.child = new undefined();

Transform171.child[0] = Shape172;

HAnimSegment150.children[9] = Transform171;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "l_lateral_malleolus_pt";
HAnimSite173.DEF = "Joe_l_lateral_malleolus_pt";
HAnimSite173.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape174 = createNode("Shape");
Shape174.USE = "sitebox";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = Shape174;

HAnimSegment150.children[10] = HAnimSite173;

HAnimSite HAnimSite175 = createNode("HAnimSite");
HAnimSite175.name = "l_medial_malleolus_pt";
HAnimSite175.DEF = "Joe_l_medial_malleolus_pt";
HAnimSite175.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape176 = createNode("Shape");
Shape176.USE = "sitebox";
HAnimSite175.children = new MFNode();

HAnimSite175.children[0] = Shape176;

HAnimSegment150.children[11] = HAnimSite175;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.name = "l_talocrural";
HAnimJoint177.DEF = "Joe_l_talocrural";
HAnimJoint177.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint177.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint177.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.name = "l_talus";
HAnimSegment178.DEF = "Joe_l_talus";
Transform Transform179 = createNode("Transform");
Transform179.translation = new SFVec3f(new float[0.115,0.069,0]);
Shape Shape180 = createNode("Shape");
Shape180.USE = "jointbox";
Transform179.child = new undefined();

Transform179.child[0] = Shape180;

HAnimSegment178.children = new MFNode();

HAnimSegment178.children[0] = Transform179;

Shape Shape181 = createNode("Shape");
Appearance Appearance182 = createNode("Appearance");
Appearance182.USE = "SegmentLine";
Shape181.appearance = Appearance182;

IndexedLineSet IndexedLineSet183 = createNode("IndexedLineSet");
IndexedLineSet183.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate184 = createNode("Coordinate");
Coordinate184.point = new MFVec3f(new float[0.1,0.069,0,0.115,0.031,0.03]);
IndexedLineSet183.coord = Coordinate184;

Shape181.geometry = IndexedLineSet183;

HAnimSegment178.children[1] = Shape181;

Transform Transform185 = createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape186 = createNode("Shape");
Shape186.USE = "skinsphere";
Transform185.child = new undefined();

Transform185.child[0] = Shape186;

HAnimSegment178.children[2] = Transform185;

Transform Transform187 = createNode("Transform");
Transform187.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape188 = createNode("Shape");
Shape188.USE = "skinsphere";
Transform187.child = new undefined();

Transform187.child[0] = Shape188;

HAnimSegment178.children[3] = Transform187;

Transform Transform189 = createNode("Transform");
Transform189.translation = new SFVec3f(new float[0.115,0.069,-0.045]);
Shape Shape190 = createNode("Shape");
Shape190.USE = "skinsphere";
Transform189.child = new undefined();

Transform189.child[0] = Shape190;

HAnimSegment178.children[4] = Transform189;

Transform Transform191 = createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.117,0.0975,0.0615]);
Shape Shape192 = createNode("Shape");
Shape192.USE = "skinsphere";
Transform191.child = new undefined();

Transform191.child[0] = Shape192;

HAnimSegment178.children[5] = Transform191;

HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.name = "l_sphyrion_pt";
HAnimSite193.DEF = "Joe_l_sphyrion_pt";
HAnimSite193.translation = new SFVec3f(new float[0.09,0.056,0.0125]);
Shape Shape194 = createNode("Shape");
Shape194.USE = "sitebox";
HAnimSite193.children = new MFNode();

HAnimSite193.children[0] = Shape194;

HAnimSegment178.children[6] = HAnimSite193;

HAnimSite HAnimSite195 = createNode("HAnimSite");
HAnimSite195.name = "l_calcaneus_posterior_pt";
HAnimSite195.DEF = "Joe_l_calcaneus_posterior_pt";
HAnimSite195.translation = new SFVec3f(new float[0.115,0.04,-0.055]);
Shape Shape196 = createNode("Shape");
Shape196.USE = "sitebox";
HAnimSite195.children = new MFNode();

HAnimSite195.children[0] = Shape196;

HAnimSegment178.children[7] = HAnimSite195;

HAnimJoint177.children = new MFNode();

HAnimJoint177.children[0] = HAnimSegment178;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.name = "l_tarsometatarsal_2";
HAnimJoint197.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint197.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint197.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint197.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.name = "l_metatarsal_2";
HAnimSegment198.DEF = "Joe_l_metatarsal_2";
Transform Transform199 = createNode("Transform");
Transform199.translation = new SFVec3f(new float[0.115,0.031,0.03]);
Shape Shape200 = createNode("Shape");
Shape200.USE = "jointbox";
Transform199.child = new undefined();

Transform199.child[0] = Shape200;

HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = Transform199;

Shape Shape201 = createNode("Shape");
Appearance Appearance202 = createNode("Appearance");
Appearance202.USE = "SegmentLine";
Shape201.appearance = Appearance202;

IndexedLineSet IndexedLineSet203 = createNode("IndexedLineSet");
IndexedLineSet203.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0.115,0.031,0.03,0.115,0.037,0.09]);
IndexedLineSet203.coord = Coordinate204;

Shape201.geometry = IndexedLineSet203;

HAnimSegment198.children[1] = Shape201;

Transform Transform205 = createNode("Transform");
Transform205.translation = new SFVec3f(new float[0.1375,0.006,-0.03]);
Shape Shape206 = createNode("Shape");
Shape206.USE = "skinsphere";
Transform205.child = new undefined();

Transform205.child[0] = Shape206;

HAnimSegment198.children[2] = Transform205;

Transform Transform207 = createNode("Transform");
Transform207.translation = new SFVec3f(new float[0.095,0.006,-0.03]);
Shape Shape208 = createNode("Shape");
Shape208.USE = "skinsphere";
Transform207.child = new undefined();

Transform207.child[0] = Shape208;

HAnimSegment198.children[3] = Transform207;

Transform Transform209 = createNode("Transform");
Transform209.translation = new SFVec3f(new float[0.115,0.015,-0.045]);
Shape Shape210 = createNode("Shape");
Shape210.USE = "skinsphere";
Transform209.child = new undefined();

Transform209.child[0] = Shape210;

HAnimSegment198.children[4] = Transform209;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.name = "l_metatarsophalangeal_2";
HAnimJoint211.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint211.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint211.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint211.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment212 = createNode("HAnimSegment");
HAnimSegment212.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment212.DEF = "Joe_l_tarsal_proximal_phalanx_2";
Transform Transform213 = createNode("Transform");
Transform213.translation = new SFVec3f(new float[0.115,0.037,0.09]);
Shape Shape214 = createNode("Shape");
Shape214.USE = "jointbox";
Transform213.child = new undefined();

Transform213.child[0] = Shape214;

HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = Transform213;

Shape Shape215 = createNode("Shape");
Appearance Appearance216 = createNode("Appearance");
Appearance216.USE = "SegmentLine";
Shape215.appearance = Appearance216;

IndexedLineSet IndexedLineSet217 = createNode("IndexedLineSet");
IndexedLineSet217.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate218 = createNode("Coordinate");
Coordinate218.point = new MFVec3f(new float[0.115,0.037,0.09,0.115,0.02,0.122]);
IndexedLineSet217.coord = Coordinate218;

Shape215.geometry = IndexedLineSet217;

HAnimSegment212.children[1] = Shape215;

Transform Transform219 = createNode("Transform");
Transform219.translation = new SFVec3f(new float[0.115,0.06,0.1]);
Shape Shape220 = createNode("Shape");
Shape220.USE = "skinsphere";
Transform219.child = new undefined();

Transform219.child[0] = Shape220;

HAnimSegment212.children[2] = Transform219;

Transform Transform221 = createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.115,0,0.07]);
Shape Shape222 = createNode("Shape");
Shape222.USE = "skinsphere";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

HAnimSegment212.children[3] = Transform221;

Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.165,0,0.07]);
Shape Shape224 = createNode("Shape");
Shape224.USE = "skinsphere";
Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment212.children[4] = Transform223;

Transform Transform225 = createNode("Transform");
Transform225.translation = new SFVec3f(new float[0.095,0,0.07]);
Shape Shape226 = createNode("Shape");
Shape226.USE = "skinsphere";
Transform225.child = new undefined();

Transform225.child[0] = Shape226;

HAnimSegment212.children[5] = Transform225;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.name = "l_metatarsal_phalanx_1_pt";
HAnimSite227.DEF = "Joe_l_metatarsal_phalanx_1_pt";
HAnimSite227.translation = new SFVec3f(new float[0.087,0.01,0.122]);
Shape Shape228 = createNode("Shape");
Shape228.USE = "sitebox";
HAnimSite227.children = new MFNode();

HAnimSite227.children[0] = Shape228;

HAnimSegment212.children[6] = HAnimSite227;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.name = "l_metatarsal";
HAnimJoint229.DEF = "Joe_l_metatarsal";
HAnimJoint229.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint229.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint229.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.name = "l_tarsal_distal_phalanx_2";
HAnimSegment230.DEF = "Joe_l_tarsal_distal_phalanx_2";
Transform Transform231 = createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.115,0.02,0.13]);
Shape Shape232 = createNode("Shape");
Shape232.USE = "jointbox";
Transform231.child = new undefined();

Transform231.child[0] = Shape232;

HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = Transform231;

Shape Shape233 = createNode("Shape");
Appearance Appearance234 = createNode("Appearance");
Appearance234.USE = "SegmentLine";
Shape233.appearance = Appearance234;

IndexedLineSet IndexedLineSet235 = createNode("IndexedLineSet");
IndexedLineSet235.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate236 = createNode("Coordinate");
Coordinate236.point = new MFVec3f(new float[0.115,0.02,0.122,0.132,0.013,0.19]);
IndexedLineSet235.coord = Coordinate236;

Shape233.geometry = IndexedLineSet235;

HAnimSegment230.children[1] = Shape233;

Transform Transform237 = createNode("Transform");
Transform237.translation = new SFVec3f(new float[0.115,0.04,0.13]);
Shape Shape238 = createNode("Shape");
Shape238.USE = "skinsphere";
Transform237.child = new undefined();

Transform237.child[0] = Shape238;

HAnimSegment230.children[2] = Transform237;

Transform Transform239 = createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.125,0,0.12]);
Shape Shape240 = createNode("Shape");
Shape240.USE = "skinsphere";
Transform239.child = new undefined();

Transform239.child[0] = Shape240;

HAnimSegment230.children[3] = Transform239;

Transform Transform241 = createNode("Transform");
Transform241.translation = new SFVec3f(new float[0.165,0,0.12]);
Shape Shape242 = createNode("Shape");
Shape242.USE = "skinsphere";
Transform241.child = new undefined();

Transform241.child[0] = Shape242;

HAnimSegment230.children[4] = Transform241;

Transform Transform243 = createNode("Transform");
Transform243.translation = new SFVec3f(new float[0.087,0,0.122]);
Shape Shape244 = createNode("Shape");
Shape244.USE = "skinsphere";
Transform243.child = new undefined();

Transform243.child[0] = Shape244;

HAnimSegment230.children[5] = Transform243;

Transform Transform245 = createNode("Transform");
Transform245.translation = new SFVec3f(new float[0.09,0.012,0.188]);
Shape Shape246 = createNode("Shape");
Shape246.USE = "skinsphere";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

HAnimSegment230.children[6] = Transform245;

Transform Transform247 = createNode("Transform");
Transform247.translation = new SFVec3f(new float[0.11,0.011,0.19]);
Shape Shape248 = createNode("Shape");
Shape248.USE = "skinsphere";
Transform247.child = new undefined();

Transform247.child[0] = Shape248;

HAnimSegment230.children[7] = Transform247;

Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[0.128,0.011,0.185]);
Shape Shape250 = createNode("Shape");
Shape250.USE = "skinsphere";
Transform249.child = new undefined();

Transform249.child[0] = Shape250;

HAnimSegment230.children[8] = Transform249;

Transform Transform251 = createNode("Transform");
Transform251.translation = new SFVec3f(new float[0.142,0.011,0.178]);
Shape Shape252 = createNode("Shape");
Shape252.USE = "skinsphere";
Transform251.child = new undefined();

Transform251.child[0] = Shape252;

HAnimSegment230.children[9] = Transform251;

Transform Transform253 = createNode("Transform");
Transform253.translation = new SFVec3f(new float[0.154,0.01,0.168]);
Shape Shape254 = createNode("Shape");
Shape254.USE = "skinsphere";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment230.children[10] = Transform253;

HAnimSite HAnimSite255 = createNode("HAnimSite");
HAnimSite255.name = "l_metatarsal_phalanx_5_pt";
HAnimSite255.DEF = "Joe_l_metatarsal_phalanx_5_pt";
HAnimSite255.translation = new SFVec3f(new float[0.165,0.01,0.12]);
Shape Shape256 = createNode("Shape");
Shape256.USE = "sitebox";
HAnimSite255.children = new MFNode();

HAnimSite255.children[0] = Shape256;

HAnimSegment230.children[11] = HAnimSite255;

HAnimSite HAnimSite257 = createNode("HAnimSite");
HAnimSite257.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite257.DEF = "Joe_l_tarsal_distal_phalanx_2_pt";
HAnimSite257.translation = new SFVec3f(new float[0.11,0.011,0.19]);
Shape Shape258 = createNode("Shape");
Shape258.USE = "sitebox";
HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = Shape258;

HAnimSegment230.children[12] = HAnimSite257;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint211.children[1] = HAnimJoint229;

HAnimJoint197.children[1] = HAnimJoint211;

HAnimJoint177.children[1] = HAnimJoint197;

HAnimJoint149.children[1] = HAnimJoint177;

HAnimJoint123.children[1] = HAnimJoint149;

HAnimJoint93.children[1] = HAnimJoint123;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.name = "r_hip";
HAnimJoint259.DEF = "Joe_r_hip";
HAnimJoint259.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint259.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101]);
HAnimJoint259.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimSegment HAnimSegment260 = createNode("HAnimSegment");
HAnimSegment260.name = "r_thigh";
HAnimSegment260.DEF = "Joe_r_thigh";
Transform Transform261 = createNode("Transform");
Transform261.translation = new SFVec3f(new float[-0.1,0.92,0]);
Shape Shape262 = createNode("Shape");
Shape262.USE = "jointbox";
Transform261.child = new undefined();

Transform261.child[0] = Shape262;

HAnimSegment260.children = new MFNode();

HAnimSegment260.children[0] = Transform261;

Shape Shape263 = createNode("Shape");
Appearance Appearance264 = createNode("Appearance");
Appearance264.USE = "SegmentLine";
Shape263.appearance = Appearance264;

IndexedLineSet IndexedLineSet265 = createNode("IndexedLineSet");
IndexedLineSet265.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate266 = createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[-0.1,0.92,0,-0.1,0.4913,0]);
IndexedLineSet265.coord = Coordinate266;

Shape263.geometry = IndexedLineSet265;

HAnimSegment260.children[1] = Shape263;

Transform Transform267 = createNode("Transform");
Transform267.translation = new SFVec3f(new float[-0.079,0.92,-0.14]);
Shape Shape268 = createNode("Shape");
Shape268.USE = "skinsphere";
Transform267.child = new undefined();

Transform267.child[0] = Shape268;

HAnimSegment260.children[2] = Transform267;

Transform Transform269 = createNode("Transform");
Transform269.translation = new SFVec3f(new float[-0.1,0.9,0.075]);
Shape Shape270 = createNode("Shape");
Shape270.USE = "skinsphere";
Transform269.child = new undefined();

Transform269.child[0] = Shape270;

HAnimSegment260.children[3] = Transform269;

Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[-0.171,0.65,0]);
Shape Shape272 = createNode("Shape");
Shape272.USE = "skinsphere";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

HAnimSegment260.children[4] = Transform271;

Transform Transform273 = createNode("Transform");
Transform273.translation = new SFVec3f(new float[-0.02,0.65,0]);
Shape Shape274 = createNode("Shape");
Shape274.USE = "skinsphere";
Transform273.child = new undefined();

Transform273.child[0] = Shape274;

HAnimSegment260.children[5] = Transform273;

Transform Transform275 = createNode("Transform");
Transform275.translation = new SFVec3f(new float[-0.1,0.65,-0.08]);
Shape Shape276 = createNode("Shape");
Shape276.USE = "skinsphere";
Transform275.child = new undefined();

Transform275.child[0] = Shape276;

HAnimSegment260.children[6] = Transform275;

Transform Transform277 = createNode("Transform");
Transform277.translation = new SFVec3f(new float[-0.1,0.65,0.07]);
Shape Shape278 = createNode("Shape");
Shape278.USE = "skinsphere";
Transform277.child = new undefined();

Transform277.child[0] = Shape278;

HAnimSegment260.children[7] = Transform277;

HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.name = "r_knee_crease_pt";
HAnimSite279.DEF = "Joe_r_knee_crease_pt";
HAnimSite279.translation = new SFVec3f(new float[-0.115,0.466,-0.055]);
Shape Shape280 = createNode("Shape");
Shape280.USE = "sitebox";
HAnimSite279.children = new MFNode();

HAnimSite279.children[0] = Shape280;

HAnimSegment260.children[8] = HAnimSite279;

HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite281.DEF = "Joe_r_femoral_lateral_epicondyle_pt";
HAnimSite281.translation = new SFVec3f(new float[-0.17,0.466,0]);
Shape Shape282 = createNode("Shape");
Shape282.USE = "sitebox";
HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = Shape282;

HAnimSegment260.children[9] = HAnimSite281;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.name = "r_femoral_medial_epicondyle_pt";
HAnimSite283.DEF = "Joe_r_femoral_medial_epicondyle_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.05,0.466,0]);
Shape Shape284 = createNode("Shape");
Shape284.USE = "sitebox";
HAnimSite283.children = new MFNode();

HAnimSite283.children[0] = Shape284;

HAnimSegment260.children[10] = HAnimSite283;

HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.name = "r_knee";
HAnimJoint285.DEF = "Joe_r_knee";
HAnimJoint285.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint285.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369]);
HAnimJoint285.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment286 = createNode("HAnimSegment");
HAnimSegment286.name = "r_calf";
HAnimSegment286.DEF = "Joe_r_calf";
Transform Transform287 = createNode("Transform");
Transform287.translation = new SFVec3f(new float[-0.1,0.4913,0]);
Shape Shape288 = createNode("Shape");
Shape288.USE = "jointbox";
Transform287.child = new undefined();

Transform287.child[0] = Shape288;

HAnimSegment286.children = new MFNode();

HAnimSegment286.children[0] = Transform287;

Shape Shape289 = createNode("Shape");
Appearance Appearance290 = createNode("Appearance");
Appearance290.USE = "SegmentLine";
Shape289.appearance = Appearance290;

IndexedLineSet IndexedLineSet291 = createNode("IndexedLineSet");
IndexedLineSet291.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate292 = createNode("Coordinate");
Coordinate292.point = new MFVec3f(new float[-0.1,0.4913,0,-0.1,0.0712,0]);
IndexedLineSet291.coord = Coordinate292;

Shape289.geometry = IndexedLineSet291;

HAnimSegment286.children[1] = Shape289;

Transform Transform293 = createNode("Transform");
Transform293.translation = new SFVec3f(new float[-0.115,0.466,0.06]);
Shape Shape294 = createNode("Shape");
Shape294.USE = "skinsphere";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

HAnimSegment286.children[2] = Transform293;

Transform Transform295 = createNode("Transform");
Transform295.translation = new SFVec3f(new float[-0.115,0.466,-0.055]);
Shape Shape296 = createNode("Shape");
Shape296.USE = "skinsphere";
Transform295.child = new undefined();

Transform295.child[0] = Shape296;

HAnimSegment286.children[3] = Transform295;

Transform Transform297 = createNode("Transform");
Transform297.translation = new SFVec3f(new float[-0.17,0.466,0]);
Shape Shape298 = createNode("Shape");
Shape298.USE = "skinsphere";
Transform297.child = new undefined();

Transform297.child[0] = Shape298;

HAnimSegment286.children[4] = Transform297;

Transform Transform299 = createNode("Transform");
Transform299.translation = new SFVec3f(new float[-0.05,0.466,0]);
Shape Shape300 = createNode("Shape");
Shape300.USE = "skinsphere";
Transform299.child = new undefined();

Transform299.child[0] = Shape300;

HAnimSegment286.children[5] = Transform299;

Transform Transform301 = createNode("Transform");
Transform301.translation = new SFVec3f(new float[-0.17,0.3,0]);
Shape Shape302 = createNode("Shape");
Shape302.USE = "skinsphere";
Transform301.child = new undefined();

Transform301.child[0] = Shape302;

HAnimSegment286.children[6] = Transform301;

Transform Transform303 = createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.06,0.3,0]);
Shape Shape304 = createNode("Shape");
Shape304.USE = "skinsphere";
Transform303.child = new undefined();

Transform303.child[0] = Shape304;

HAnimSegment286.children[7] = Transform303;

Transform Transform305 = createNode("Transform");
Transform305.translation = new SFVec3f(new float[-0.1,0.3,-0.05]);
Shape Shape306 = createNode("Shape");
Shape306.USE = "skinsphere";
Transform305.child = new undefined();

Transform305.child[0] = Shape306;

HAnimSegment286.children[8] = Transform305;

Transform Transform307 = createNode("Transform");
Transform307.translation = new SFVec3f(new float[-0.1,0.3,0.05]);
Shape Shape308 = createNode("Shape");
Shape308.USE = "skinsphere";
Transform307.child = new undefined();

Transform307.child[0] = Shape308;

HAnimSegment286.children[9] = Transform307;

HAnimSite HAnimSite309 = createNode("HAnimSite");
HAnimSite309.name = "r_lateral_malleolus_pt";
HAnimSite309.DEF = "Joe_r_lateral_malleolus_pt";
HAnimSite309.translation = new SFVec3f(new float[-0.15,0.07,0]);
Shape Shape310 = createNode("Shape");
Shape310.USE = "sitebox";
HAnimSite309.children = new MFNode();

HAnimSite309.children[0] = Shape310;

HAnimSegment286.children[10] = HAnimSite309;

HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.name = "r_medial_malleolus_pt";
HAnimSite311.DEF = "Joe_r_medial_malleolus_pt";
HAnimSite311.translation = new SFVec3f(new float[-0.085,0.086,0.0125]);
Shape Shape312 = createNode("Shape");
Shape312.USE = "sitebox";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = Shape312;

HAnimSegment286.children[11] = HAnimSite311;

HAnimJoint285.children = new MFNode();

HAnimJoint285.children[0] = HAnimSegment286;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.name = "r_talocrural";
HAnimJoint313.DEF = "Joe_r_talocrural";
HAnimJoint313.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint313.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint313.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment314 = createNode("HAnimSegment");
HAnimSegment314.name = "r_talus";
HAnimSegment314.DEF = "Joe_r_talus";
Transform Transform315 = createNode("Transform");
Transform315.translation = new SFVec3f(new float[-0.1,0.0712,0]);
Shape Shape316 = createNode("Shape");
Shape316.USE = "jointbox";
Transform315.child = new undefined();

Transform315.child[0] = Shape316;

HAnimSegment314.children = new MFNode();

HAnimSegment314.children[0] = Transform315;

Shape Shape317 = createNode("Shape");
Appearance Appearance318 = createNode("Appearance");
Appearance318.USE = "SegmentLine";
Shape317.appearance = Appearance318;

IndexedLineSet IndexedLineSet319 = createNode("IndexedLineSet");
IndexedLineSet319.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate320 = createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.1,0.0712,0,-0.1,0.015,-0.01]);
IndexedLineSet319.coord = Coordinate320;

Shape317.geometry = IndexedLineSet319;

HAnimSegment314.children[1] = Shape317;

Transform Transform321 = createNode("Transform");
Transform321.translation = new SFVec3f(new float[-0.15,0.07,0]);
Shape Shape322 = createNode("Shape");
Shape322.USE = "skinsphere";
Transform321.child = new undefined();

Transform321.child[0] = Shape322;

HAnimSegment314.children[2] = Transform321;

Transform Transform323 = createNode("Transform");
Transform323.translation = new SFVec3f(new float[-0.085,0.086,0.0125]);
Shape Shape324 = createNode("Shape");
Shape324.USE = "skinsphere";
Transform323.child = new undefined();

Transform323.child[0] = Shape324;

HAnimSegment314.children[3] = Transform323;

Transform Transform325 = createNode("Transform");
Transform325.translation = new SFVec3f(new float[-0.115,0.069,-0.045]);
Shape Shape326 = createNode("Shape");
Shape326.USE = "skinsphere";
Transform325.child = new undefined();

Transform325.child[0] = Shape326;

HAnimSegment314.children[4] = Transform325;

Transform Transform327 = createNode("Transform");
Transform327.translation = new SFVec3f(new float[-0.117,0.0975,0.0615]);
Shape Shape328 = createNode("Shape");
Shape328.USE = "skinsphere";
Transform327.child = new undefined();

Transform327.child[0] = Shape328;

HAnimSegment314.children[5] = Transform327;

HAnimSite HAnimSite329 = createNode("HAnimSite");
HAnimSite329.name = "r_sphyrion_pt";
HAnimSite329.DEF = "Joe_r_sphyrion_pt";
HAnimSite329.translation = new SFVec3f(new float[-0.09,0.056,0.0125]);
Shape Shape330 = createNode("Shape");
Shape330.USE = "sitebox";
HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = Shape330;

HAnimSegment314.children[6] = HAnimSite329;

HAnimSite HAnimSite331 = createNode("HAnimSite");
HAnimSite331.name = "r_calcaneus_posterior_pt";
HAnimSite331.DEF = "Joe_r_calcaneus_posterior_pt";
HAnimSite331.translation = new SFVec3f(new float[-0.115,0.04,-0.055]);
Shape Shape332 = createNode("Shape");
Shape332.USE = "sitebox";
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = Shape332;

HAnimSegment314.children[7] = HAnimSite331;

HAnimJoint313.children = new MFNode();

HAnimJoint313.children[0] = HAnimSegment314;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.name = "r_tarsometatarsal_2";
HAnimJoint333.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint333.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint333.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint333.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment334 = createNode("HAnimSegment");
HAnimSegment334.name = "r_metatarsal_2";
HAnimSegment334.DEF = "Joe_r_metatarsal_2";
Transform Transform335 = createNode("Transform");
Transform335.translation = new SFVec3f(new float[-0.1,0.015,-0.01]);
Shape Shape336 = createNode("Shape");
Shape336.USE = "jointbox";
Transform335.child = new undefined();

Transform335.child[0] = Shape336;

HAnimSegment334.children = new MFNode();

HAnimSegment334.children[0] = Transform335;

Shape Shape337 = createNode("Shape");
Appearance Appearance338 = createNode("Appearance");
Appearance338.USE = "SegmentLine";
Shape337.appearance = Appearance338;

IndexedLineSet IndexedLineSet339 = createNode("IndexedLineSet");
IndexedLineSet339.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate340 = createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[-0.1,0.015,-0.01,-0.1,0.02,0.07]);
IndexedLineSet339.coord = Coordinate340;

Shape337.geometry = IndexedLineSet339;

HAnimSegment334.children[1] = Shape337;

Transform Transform341 = createNode("Transform");
Transform341.translation = new SFVec3f(new float[-0.1375,0.006,-0.03]);
Shape Shape342 = createNode("Shape");
Shape342.USE = "skinsphere";
Transform341.child = new undefined();

Transform341.child[0] = Shape342;

HAnimSegment334.children[2] = Transform341;

Transform Transform343 = createNode("Transform");
Transform343.translation = new SFVec3f(new float[-0.095,0.006,-0.03]);
Shape Shape344 = createNode("Shape");
Shape344.USE = "skinsphere";
Transform343.child = new undefined();

Transform343.child[0] = Shape344;

HAnimSegment334.children[3] = Transform343;

Transform Transform345 = createNode("Transform");
Transform345.translation = new SFVec3f(new float[-0.095,0.006,-0.03]);
Shape Shape346 = createNode("Shape");
Shape346.USE = "skinsphere";
Transform345.child = new undefined();

Transform345.child[0] = Shape346;

HAnimSegment334.children[4] = Transform345;

HAnimJoint333.children = new MFNode();

HAnimJoint333.children[0] = HAnimSegment334;

HAnimJoint HAnimJoint347 = createNode("HAnimJoint");
HAnimJoint347.name = "r_metatarsophalangeal_2";
HAnimJoint347.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint347.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint347.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint347.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment348 = createNode("HAnimSegment");
HAnimSegment348.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment348.DEF = "Joe_r_tarsal_proximal_phalanx_2";
Transform Transform349 = createNode("Transform");
Transform349.translation = new SFVec3f(new float[-0.1,0.02,0.07]);
Shape Shape350 = createNode("Shape");
Shape350.USE = "jointbox";
Transform349.child = new undefined();

Transform349.child[0] = Shape350;

HAnimSegment348.children = new MFNode();

HAnimSegment348.children[0] = Transform349;

Shape Shape351 = createNode("Shape");
Appearance Appearance352 = createNode("Appearance");
Appearance352.USE = "SegmentLine";
Shape351.appearance = Appearance352;

IndexedLineSet IndexedLineSet353 = createNode("IndexedLineSet");
IndexedLineSet353.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate354 = createNode("Coordinate");
Coordinate354.point = new MFVec3f(new float[-0.1,0.02,0.07,-0.1,0.01,0.14]);
IndexedLineSet353.coord = Coordinate354;

Shape351.geometry = IndexedLineSet353;

HAnimSegment348.children[1] = Shape351;

Transform Transform355 = createNode("Transform");
Transform355.translation = new SFVec3f(new float[-0.115,0.06,0.1]);
Shape Shape356 = createNode("Shape");
Shape356.USE = "skinsphere";
Transform355.child = new undefined();

Transform355.child[0] = Shape356;

HAnimSegment348.children[2] = Transform355;

Transform Transform357 = createNode("Transform");
Transform357.translation = new SFVec3f(new float[-0.115,0,0.07]);
Shape Shape358 = createNode("Shape");
Shape358.USE = "skinsphere";
Transform357.child = new undefined();

Transform357.child[0] = Shape358;

HAnimSegment348.children[3] = Transform357;

Transform Transform359 = createNode("Transform");
Transform359.translation = new SFVec3f(new float[-0.165,0,0.07]);
Shape Shape360 = createNode("Shape");
Shape360.USE = "skinsphere";
Transform359.child = new undefined();

Transform359.child[0] = Shape360;

HAnimSegment348.children[4] = Transform359;

Transform Transform361 = createNode("Transform");
Transform361.translation = new SFVec3f(new float[-0.165,0,0.07]);
Shape Shape362 = createNode("Shape");
Shape362.USE = "skinsphere";
Transform361.child = new undefined();

Transform361.child[0] = Shape362;

HAnimSegment348.children[5] = Transform361;

HAnimSite HAnimSite363 = createNode("HAnimSite");
HAnimSite363.name = "r_metatarsal_phalanx_1_pt";
HAnimSite363.DEF = "Joe_r_metatarsal_phalanx_1_pt";
HAnimSite363.translation = new SFVec3f(new float[-0.115,0.02,0.122]);
Shape Shape364 = createNode("Shape");
Shape364.USE = "sitebox";
HAnimSite363.children = new MFNode();

HAnimSite363.children[0] = Shape364;

HAnimSegment348.children[6] = HAnimSite363;

HAnimJoint347.children = new MFNode();

HAnimJoint347.children[0] = HAnimSegment348;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint365.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint365.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint365.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint365.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment366 = createNode("HAnimSegment");
HAnimSegment366.name = "r_tarsal_distal_phalanx_2";
HAnimSegment366.DEF = "Joe_r_tarsal_distal_phalanx_2";
Transform Transform367 = createNode("Transform");
Transform367.translation = new SFVec3f(new float[-0.1086,0.01,0.14]);
Shape Shape368 = createNode("Shape");
Shape368.USE = "jointbox";
Transform367.child = new undefined();

Transform367.child[0] = Shape368;

HAnimSegment366.children = new MFNode();

HAnimSegment366.children[0] = Transform367;

Shape Shape369 = createNode("Shape");
Appearance Appearance370 = createNode("Appearance");
Appearance370.USE = "SegmentLine";
Shape369.appearance = Appearance370;

IndexedLineSet IndexedLineSet371 = createNode("IndexedLineSet");
IndexedLineSet371.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate372 = createNode("Coordinate");
Coordinate372.point = new MFVec3f(new float[-0.1,0.01,0.14,-0.1043,0.0016,0.2]);
IndexedLineSet371.coord = Coordinate372;

Shape369.geometry = IndexedLineSet371;

HAnimSegment366.children[1] = Shape369;

Transform Transform373 = createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.115,0.04,0.13]);
Shape Shape374 = createNode("Shape");
Shape374.USE = "skinsphere";
Transform373.child = new undefined();

Transform373.child[0] = Shape374;

HAnimSegment366.children[2] = Transform373;

Transform Transform375 = createNode("Transform");
Transform375.translation = new SFVec3f(new float[-0.125,0,0.12]);
Shape Shape376 = createNode("Shape");
Shape376.USE = "skinsphere";
Transform375.child = new undefined();

Transform375.child[0] = Shape376;

HAnimSegment366.children[3] = Transform375;

Transform Transform377 = createNode("Transform");
Transform377.translation = new SFVec3f(new float[-0.165,0,0.12]);
Shape Shape378 = createNode("Shape");
Shape378.USE = "skinsphere";
Transform377.child = new undefined();

Transform377.child[0] = Shape378;

HAnimSegment366.children[4] = Transform377;

Transform Transform379 = createNode("Transform");
Transform379.translation = new SFVec3f(new float[-0.087,0,0.122]);
Shape Shape380 = createNode("Shape");
Shape380.USE = "skinsphere";
Transform379.child = new undefined();

Transform379.child[0] = Shape380;

HAnimSegment366.children[5] = Transform379;

Transform Transform381 = createNode("Transform");
Transform381.translation = new SFVec3f(new float[-0.09,0.012,0.188]);
Shape Shape382 = createNode("Shape");
Shape382.USE = "skinsphere";
Transform381.child = new undefined();

Transform381.child[0] = Shape382;

HAnimSegment366.children[6] = Transform381;

Transform Transform383 = createNode("Transform");
Transform383.translation = new SFVec3f(new float[-0.11,0.011,0.19]);
Shape Shape384 = createNode("Shape");
Shape384.USE = "skinsphere";
Transform383.child = new undefined();

Transform383.child[0] = Shape384;

HAnimSegment366.children[7] = Transform383;

Transform Transform385 = createNode("Transform");
Transform385.translation = new SFVec3f(new float[-0.128,0.011,0.185]);
Shape Shape386 = createNode("Shape");
Shape386.USE = "skinsphere";
Transform385.child = new undefined();

Transform385.child[0] = Shape386;

HAnimSegment366.children[8] = Transform385;

Transform Transform387 = createNode("Transform");
Transform387.translation = new SFVec3f(new float[-0.142,0.011,0.178]);
Shape Shape388 = createNode("Shape");
Shape388.USE = "skinsphere";
Transform387.child = new undefined();

Transform387.child[0] = Shape388;

HAnimSegment366.children[9] = Transform387;

Transform Transform389 = createNode("Transform");
Transform389.translation = new SFVec3f(new float[-0.154,0.01,0.168]);
Shape Shape390 = createNode("Shape");
Shape390.USE = "skinsphere";
Transform389.child = new undefined();

Transform389.child[0] = Shape390;

HAnimSegment366.children[10] = Transform389;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.name = "r_metatarsal_phalanx_5_pt";
HAnimSite391.DEF = "Joe_r_metatarsal_phalanx_5_pt";
HAnimSite391.translation = new SFVec3f(new float[-0.165,0.01,0.12]);
Shape Shape392 = createNode("Shape");
Shape392.USE = "sitebox";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = Shape392;

HAnimSegment366.children[11] = HAnimSite391;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite393.DEF = "Joe_r_tarsal_distal_phalanx_2_pt";
HAnimSite393.translation = new SFVec3f(new float[-0.11,0.011,0.19]);
Shape Shape394 = createNode("Shape");
Shape394.USE = "sitebox";
HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = Shape394;

HAnimSegment366.children[12] = HAnimSite393;

HAnimJoint365.children = new MFNode();

HAnimJoint365.children[0] = HAnimSegment366;

HAnimJoint347.children[1] = HAnimJoint365;

HAnimJoint333.children[1] = HAnimJoint347;

HAnimJoint313.children[1] = HAnimJoint333;

HAnimJoint285.children[1] = HAnimJoint313;

HAnimJoint259.children[1] = HAnimJoint285;

HAnimJoint93.children[2] = HAnimJoint259;

HAnimJoint81.children[1] = HAnimJoint93;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.name = "vl5";
HAnimJoint395.DEF = "Joe_vl5";
HAnimJoint395.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint395.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint395.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment396 = createNode("HAnimSegment");
HAnimSegment396.name = "toPelvis";
HAnimSegment396.DEF = "Joe_toPelvis";
Shape Shape397 = createNode("Shape");
Appearance Appearance398 = createNode("Appearance");
Appearance398.USE = "SegmentLine";
Shape397.appearance = Appearance398;

IndexedLineSet IndexedLineSet399 = createNode("IndexedLineSet");
IndexedLineSet399.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate400 = createNode("Coordinate");
Coordinate400.point = new MFVec3f(new float[0,1.045,-0.095,0,0.9149,0.0016]);
IndexedLineSet399.coord = Coordinate400;

Shape397.geometry = IndexedLineSet399;

HAnimSegment396.children = new MFNode();

HAnimSegment396.children[0] = Shape397;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

HAnimSegment HAnimSegment401 = createNode("HAnimSegment");
HAnimSegment401.name = "l5";
HAnimSegment401.DEF = "Joe_l5";
Shape Shape402 = createNode("Shape");
Appearance Appearance403 = createNode("Appearance");
Appearance403.USE = "SegmentLine";
Shape402.appearance = Appearance403;

IndexedLineSet IndexedLineSet404 = createNode("IndexedLineSet");
IndexedLineSet404.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate405 = createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0,1.045,-0.095,0,1.068,-0.085]);
IndexedLineSet404.coord = Coordinate405;

Shape402.geometry = IndexedLineSet404;

HAnimSegment401.children = new MFNode();

HAnimSegment401.children[0] = Shape402;

HAnimSite HAnimSite406 = createNode("HAnimSite");
HAnimSite406.name = "waist_preferred_posterior_pt";
HAnimSite406.DEF = "Joe_waist_preferred_posterior_pt";
HAnimSite406.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
Shape Shape407 = createNode("Shape");
Shape407.USE = "sitebox";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = Shape407;

HAnimSegment401.children[1] = HAnimSite406;

HAnimSite HAnimSite408 = createNode("HAnimSite");
HAnimSite408.name = "navel_pt";
HAnimSite408.DEF = "Joe_navel_pt";
HAnimSite408.translation = new SFVec3f(new float[0,1.0723,0.09]);
Shape Shape409 = createNode("Shape");
Shape409.USE = "sitebox";
HAnimSite408.children = new MFNode();

HAnimSite408.children[0] = Shape409;

HAnimSegment401.children[2] = HAnimSite408;

HAnimJoint395.children[1] = HAnimSegment401;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.name = "vl4";
HAnimJoint410.DEF = "Joe_vl4";
HAnimJoint410.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimSegment HAnimSegment411 = createNode("HAnimSegment");
HAnimSegment411.name = "l4";
HAnimSegment411.DEF = "Joe_l4";
Shape Shape412 = createNode("Shape");
Appearance Appearance413 = createNode("Appearance");
Appearance413.USE = "SegmentLine";
Shape412.appearance = Appearance413;

IndexedLineSet IndexedLineSet414 = createNode("IndexedLineSet");
IndexedLineSet414.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate415 = createNode("Coordinate");
Coordinate415.point = new MFVec3f(new float[0,1.068,-0.085,0,1.092,-0.0725]);
IndexedLineSet414.coord = Coordinate415;

Shape412.geometry = IndexedLineSet414;

HAnimSegment411.children = new MFNode();

HAnimSegment411.children[0] = Shape412;

Transform Transform416 = createNode("Transform");
Transform416.translation = new SFVec3f(new float[0,1.068,-0.085]);
Shape Shape417 = createNode("Shape");
Shape417.USE = "jointbox";
Transform416.child = new undefined();

Transform416.child[0] = Shape417;

HAnimSegment411.children[1] = Transform416;

HAnimJoint410.children = new MFNode();

HAnimJoint410.children[0] = HAnimSegment411;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.name = "vl3";
HAnimJoint418.DEF = "Joe_vl3";
HAnimJoint418.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimSegment HAnimSegment419 = createNode("HAnimSegment");
HAnimSegment419.name = "l3";
HAnimSegment419.DEF = "Joe_l3";
Shape Shape420 = createNode("Shape");
Appearance Appearance421 = createNode("Appearance");
Appearance421.USE = "SegmentLine";
Shape420.appearance = Appearance421;

IndexedLineSet IndexedLineSet422 = createNode("IndexedLineSet");
IndexedLineSet422.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate423 = createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[0,1.092,-0.0725,0,1.12,-0.065]);
IndexedLineSet422.coord = Coordinate423;

Shape420.geometry = IndexedLineSet422;

HAnimSegment419.children = new MFNode();

HAnimSegment419.children[0] = Shape420;

Transform Transform424 = createNode("Transform");
Transform424.translation = new SFVec3f(new float[0,1.092,-0.0725]);
Shape Shape425 = createNode("Shape");
Shape425.USE = "jointbox";
Transform424.child = new undefined();

Transform424.child[0] = Shape425;

HAnimSegment419.children[1] = Transform424;

HAnimJoint418.children = new MFNode();

HAnimJoint418.children[0] = HAnimSegment419;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.name = "vl2";
HAnimJoint426.DEF = "Joe_vl2";
HAnimJoint426.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint426.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint426.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment HAnimSegment427 = createNode("HAnimSegment");
HAnimSegment427.name = "l2";
HAnimSegment427.DEF = "Joe_l2";
Shape Shape428 = createNode("Shape");
Appearance Appearance429 = createNode("Appearance");
Appearance429.USE = "SegmentLine";
Shape428.appearance = Appearance429;

IndexedLineSet IndexedLineSet430 = createNode("IndexedLineSet");
IndexedLineSet430.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate431 = createNode("Coordinate");
Coordinate431.point = new MFVec3f(new float[0,1.12,-0.065,0,1.1459,-0.0625]);
IndexedLineSet430.coord = Coordinate431;

Shape428.geometry = IndexedLineSet430;

HAnimSegment427.children = new MFNode();

HAnimSegment427.children[0] = Shape428;

Transform Transform432 = createNode("Transform");
Transform432.translation = new SFVec3f(new float[0,1.12,-0.065]);
Shape Shape433 = createNode("Shape");
Shape433.USE = "jointbox";
Transform432.child = new undefined();

Transform432.child[0] = Shape433;

HAnimSegment427.children[1] = Transform432;

Transform Transform434 = createNode("Transform");
Transform434.translation = new SFVec3f(new float[-0.087,1.19,-0.09]);
Shape Shape435 = createNode("Shape");
Shape435.USE = "skinsphere";
Transform434.child = new undefined();

Transform434.child[0] = Shape435;

HAnimSegment427.children[2] = Transform434;

Transform Transform436 = createNode("Transform");
Transform436.translation = new SFVec3f(new float[0.087,1.19,-0.09]);
Shape Shape437 = createNode("Shape");
Shape437.USE = "skinsphere";
Transform436.child = new undefined();

Transform436.child[0] = Shape437;

HAnimSegment427.children[3] = Transform436;

Transform Transform438 = createNode("Transform");
Transform438.translation = new SFVec3f(new float[0.172,1.32,-0.03]);
Shape Shape439 = createNode("Shape");
Shape439.USE = "skinsphere";
Transform438.child = new undefined();

Transform438.child[0] = Shape439;

HAnimSegment427.children[4] = Transform438;

Transform Transform440 = createNode("Transform");
Transform440.translation = new SFVec3f(new float[-0.172,1.32,-0.03]);
Shape Shape441 = createNode("Shape");
Shape441.USE = "skinsphere";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

HAnimSegment427.children[5] = Transform440;

Transform Transform442 = createNode("Transform");
Transform442.translation = new SFVec3f(new float[0.15,1.23,-0.015]);
Shape Shape443 = createNode("Shape");
Shape443.USE = "skinsphere";
Transform442.child = new undefined();

Transform442.child[0] = Shape443;

HAnimSegment427.children[6] = Transform442;

Transform Transform444 = createNode("Transform");
Transform444.translation = new SFVec3f(new float[-0.15,1.23,-0.015]);
Shape Shape445 = createNode("Shape");
Shape445.USE = "skinsphere";
Transform444.child = new undefined();

Transform444.child[0] = Shape445;

HAnimSegment427.children[7] = Transform444;

HAnimSite HAnimSite446 = createNode("HAnimSite");
HAnimSite446.name = "r_rib10_pt";
HAnimSite446.DEF = "Joe_r_rib10_pt";
HAnimSite446.translation = new SFVec3f(new float[-0.087,1.19,0.09]);
Shape Shape447 = createNode("Shape");
Shape447.USE = "sitebox";
HAnimSite446.children = new MFNode();

HAnimSite446.children[0] = Shape447;

HAnimSegment427.children[8] = HAnimSite446;

HAnimSite HAnimSite448 = createNode("HAnimSite");
HAnimSite448.name = "l_rib10_pt";
HAnimSite448.DEF = "Joe_l_rib10_pt";
HAnimSite448.translation = new SFVec3f(new float[0.087,1.19,0.09]);
Shape Shape449 = createNode("Shape");
Shape449.USE = "sitebox";
HAnimSite448.children = new MFNode();

HAnimSite448.children[0] = Shape449;

HAnimSegment427.children[9] = HAnimSite448;

HAnimSite HAnimSite450 = createNode("HAnimSite");
HAnimSite450.name = "rib10_midspine_pt";
HAnimSite450.DEF = "Joe_rib10_midspine_pt";
HAnimSite450.translation = new SFVec3f(new float[0,1.1908,-0.1113]);
Shape Shape451 = createNode("Shape");
Shape451.USE = "sitebox";
HAnimSite450.children = new MFNode();

HAnimSite450.children[0] = Shape451;

HAnimSegment427.children[10] = HAnimSite450;

HAnimJoint426.children = new MFNode();

HAnimJoint426.children[0] = HAnimSegment427;

HAnimJoint HAnimJoint452 = createNode("HAnimJoint");
HAnimJoint452.name = "vl1";
HAnimJoint452.DEF = "Joe_vl1";
HAnimJoint452.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimSegment HAnimSegment453 = createNode("HAnimSegment");
HAnimSegment453.name = "l1";
HAnimSegment453.DEF = "Joe_l1";
Shape Shape454 = createNode("Shape");
Appearance Appearance455 = createNode("Appearance");
Appearance455.USE = "SegmentLine";
Shape454.appearance = Appearance455;

IndexedLineSet IndexedLineSet456 = createNode("IndexedLineSet");
IndexedLineSet456.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate457 = createNode("Coordinate");
Coordinate457.point = new MFVec3f(new float[0,1.1459,-0.0625,0,1.179,-0.068]);
IndexedLineSet456.coord = Coordinate457;

Shape454.geometry = IndexedLineSet456;

HAnimSegment453.children = new MFNode();

HAnimSegment453.children[0] = Shape454;

Transform Transform458 = createNode("Transform");
Transform458.translation = new SFVec3f(new float[0,1.1459,-0.0625]);
Shape Shape459 = createNode("Shape");
Shape459.USE = "jointbox";
Transform458.child = new undefined();

Transform458.child[0] = Shape459;

HAnimSegment453.children[1] = Transform458;

HAnimJoint452.children = new MFNode();

HAnimJoint452.children[0] = HAnimSegment453;

HAnimJoint HAnimJoint460 = createNode("HAnimJoint");
HAnimJoint460.name = "vt12";
HAnimJoint460.DEF = "Joe_vt12";
HAnimJoint460.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.name = "t12";
HAnimSegment461.DEF = "Joe_t12";
Shape Shape462 = createNode("Shape");
Appearance Appearance463 = createNode("Appearance");
Appearance463.USE = "SegmentLine";
Shape462.appearance = Appearance463;

IndexedLineSet IndexedLineSet464 = createNode("IndexedLineSet");
IndexedLineSet464.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate465 = createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[0,1.179,-0.068,0,1.242,-0.09]);
IndexedLineSet464.coord = Coordinate465;

Shape462.geometry = IndexedLineSet464;

HAnimSegment461.children = new MFNode();

HAnimSegment461.children[0] = Shape462;

Transform Transform466 = createNode("Transform");
Transform466.translation = new SFVec3f(new float[0,1.179,-0.068]);
Shape Shape467 = createNode("Shape");
Shape467.USE = "jointbox";
Transform466.child = new undefined();

Transform466.child[0] = Shape467;

HAnimSegment461.children[1] = Transform466;

HAnimJoint460.children = new MFNode();

HAnimJoint460.children[0] = HAnimSegment461;

HAnimJoint HAnimJoint468 = createNode("HAnimJoint");
HAnimJoint468.name = "vt11";
HAnimJoint468.DEF = "Joe_vt11";
HAnimJoint468.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.name = "t11";
HAnimSegment469.DEF = "Joe_t11";
Shape Shape470 = createNode("Shape");
Appearance Appearance471 = createNode("Appearance");
Appearance471.USE = "SegmentLine";
Shape470.appearance = Appearance471;

IndexedLineSet IndexedLineSet472 = createNode("IndexedLineSet");
IndexedLineSet472.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate473 = createNode("Coordinate");
Coordinate473.point = new MFVec3f(new float[0,1.2145,-0.0755,0,1.242,-0.09]);
IndexedLineSet472.coord = Coordinate473;

Shape470.geometry = IndexedLineSet472;

HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = Shape470;

Transform Transform474 = createNode("Transform");
Transform474.translation = new SFVec3f(new float[0,1.2145,-0.0755]);
Shape Shape475 = createNode("Shape");
Shape475.USE = "jointbox";
Transform474.child = new undefined();

Transform474.child[0] = Shape475;

HAnimSegment469.children[1] = Transform474;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

HAnimJoint HAnimJoint476 = createNode("HAnimJoint");
HAnimJoint476.name = "vt10";
HAnimJoint476.DEF = "Joe_vt10";
HAnimJoint476.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint476.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint476.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.name = "t10";
HAnimSegment477.DEF = "Joe_t10";
Shape Shape478 = createNode("Shape");
Appearance Appearance479 = createNode("Appearance");
Appearance479.USE = "SegmentLine";
Shape478.appearance = Appearance479;

IndexedLineSet IndexedLineSet480 = createNode("IndexedLineSet");
IndexedLineSet480.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate481 = createNode("Coordinate");
Coordinate481.point = new MFVec3f(new float[0,1.242,-0.09,0,1.268,-0.1]);
IndexedLineSet480.coord = Coordinate481;

Shape478.geometry = IndexedLineSet480;

HAnimSegment477.children = new MFNode();

HAnimSegment477.children[0] = Shape478;

Transform Transform482 = createNode("Transform");
Transform482.translation = new SFVec3f(new float[0,1.242,-0.09]);
Shape Shape483 = createNode("Shape");
Shape483.USE = "jointbox";
Transform482.child = new undefined();

Transform482.child[0] = Shape483;

HAnimSegment477.children[1] = Transform482;

HAnimSite HAnimSite484 = createNode("HAnimSite");
HAnimSite484.name = "substernale_pt";
HAnimSite484.DEF = "Joe_substernale_pt";
HAnimSite484.translation = new SFVec3f(new float[0,1.25,0.113]);
Shape Shape485 = createNode("Shape");
Shape485.USE = "sitebox";
HAnimSite484.children = new MFNode();

HAnimSite484.children[0] = Shape485;

HAnimSegment477.children[2] = HAnimSite484;

HAnimJoint476.children = new MFNode();

HAnimJoint476.children[0] = HAnimSegment477;

HAnimJoint HAnimJoint486 = createNode("HAnimJoint");
HAnimJoint486.name = "vt9";
HAnimJoint486.DEF = "Joe_vt9";
HAnimJoint486.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint486.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint486.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.name = "t9";
HAnimSegment487.DEF = "Joe_t9";
Shape Shape488 = createNode("Shape");
Appearance Appearance489 = createNode("Appearance");
Appearance489.USE = "SegmentLine";
Shape488.appearance = Appearance489;

IndexedLineSet IndexedLineSet490 = createNode("IndexedLineSet");
IndexedLineSet490.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate491 = createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0,1.268,-0.1,0,1.294,-0.11]);
IndexedLineSet490.coord = Coordinate491;

Shape488.geometry = IndexedLineSet490;

HAnimSegment487.children = new MFNode();

HAnimSegment487.children[0] = Shape488;

Transform Transform492 = createNode("Transform");
Transform492.translation = new SFVec3f(new float[0,1.268,-0.1]);
Shape Shape493 = createNode("Shape");
Shape493.USE = "jointbox";
Transform492.child = new undefined();

Transform492.child[0] = Shape493;

HAnimSegment487.children[1] = Transform492;

HAnimSite HAnimSite494 = createNode("HAnimSite");
HAnimSite494.name = "r_thelion_pt";
HAnimSite494.DEF = "Joe_r_thelion_pt";
HAnimSite494.translation = new SFVec3f(new float[-0.1135,1.318,0.095]);
Shape Shape495 = createNode("Shape");
Shape495.USE = "sitebox";
HAnimSite494.children = new MFNode();

HAnimSite494.children[0] = Shape495;

HAnimSegment487.children[2] = HAnimSite494;

HAnimSite HAnimSite496 = createNode("HAnimSite");
HAnimSite496.name = "l_thelion_pt";
HAnimSite496.DEF = "Joe_l_thelion_pt";
HAnimSite496.translation = new SFVec3f(new float[0.1135,1.318,0.095]);
Shape Shape497 = createNode("Shape");
Shape497.USE = "sitebox";
HAnimSite496.children = new MFNode();

HAnimSite496.children[0] = Shape497;

HAnimSegment487.children[3] = HAnimSite496;

HAnimJoint486.children = new MFNode();

HAnimJoint486.children[0] = HAnimSegment487;

HAnimJoint HAnimJoint498 = createNode("HAnimJoint");
HAnimJoint498.name = "vt8";
HAnimJoint498.DEF = "Joe_vt8";
HAnimJoint498.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.name = "t8";
HAnimSegment499.DEF = "Joe_t8";
Shape Shape500 = createNode("Shape");
Appearance Appearance501 = createNode("Appearance");
Appearance501.USE = "SegmentLine";
Shape500.appearance = Appearance501;

IndexedLineSet IndexedLineSet502 = createNode("IndexedLineSet");
IndexedLineSet502.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate503 = createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[0,1.294,-0.11,0,1.352,-0.12]);
IndexedLineSet502.coord = Coordinate503;

Shape500.geometry = IndexedLineSet502;

HAnimSegment499.children = new MFNode();

HAnimSegment499.children[0] = Shape500;

Transform Transform504 = createNode("Transform");
Transform504.translation = new SFVec3f(new float[0,1.294,-0.11]);
Shape Shape505 = createNode("Shape");
Shape505.USE = "jointbox";
Transform504.child = new undefined();

Transform504.child[0] = Shape505;

HAnimSegment499.children[1] = Transform504;

HAnimJoint498.children = new MFNode();

HAnimJoint498.children[0] = HAnimSegment499;

HAnimJoint HAnimJoint506 = createNode("HAnimJoint");
HAnimJoint506.name = "vt7";
HAnimJoint506.DEF = "Joe_vt7";
HAnimJoint506.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.name = "t7";
HAnimSegment507.DEF = "Joe_t7";
Shape Shape508 = createNode("Shape");
Appearance Appearance509 = createNode("Appearance");
Appearance509.USE = "SegmentLine";
Shape508.appearance = Appearance509;

IndexedLineSet IndexedLineSet510 = createNode("IndexedLineSet");
IndexedLineSet510.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0,1.352,-0.12,0,1.381,-0.1235]);
IndexedLineSet510.coord = Coordinate511;

Shape508.geometry = IndexedLineSet510;

HAnimSegment507.children = new MFNode();

HAnimSegment507.children[0] = Shape508;

Transform Transform512 = createNode("Transform");
Transform512.translation = new SFVec3f(new float[0,1.323,-0.1155]);
Shape Shape513 = createNode("Shape");
Shape513.USE = "jointbox";
Transform512.child = new undefined();

Transform512.child[0] = Shape513;

HAnimSegment507.children[1] = Transform512;

HAnimJoint506.children = new MFNode();

HAnimJoint506.children[0] = HAnimSegment507;

HAnimJoint HAnimJoint514 = createNode("HAnimJoint");
HAnimJoint514.name = "vt6";
HAnimJoint514.DEF = "Joe_vt6";
HAnimJoint514.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.name = "t6";
HAnimSegment515.DEF = "Joe_t6";
Shape Shape516 = createNode("Shape");
Appearance Appearance517 = createNode("Appearance");
Appearance517.USE = "SegmentLine";
Shape516.appearance = Appearance517;

IndexedLineSet IndexedLineSet518 = createNode("IndexedLineSet");
IndexedLineSet518.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0,1.381,-0.1235,0,1.41,-0.1235]);
IndexedLineSet518.coord = Coordinate519;

Shape516.geometry = IndexedLineSet518;

HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = Shape516;

Transform Transform520 = createNode("Transform");
Transform520.translation = new SFVec3f(new float[0,1.352,-0.12]);
Shape Shape521 = createNode("Shape");
Shape521.USE = "jointbox";
Transform520.child = new undefined();

Transform520.child[0] = Shape521;

HAnimSegment515.children[1] = Transform520;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.name = "vt5";
HAnimJoint522.DEF = "Joe_vt5";
HAnimJoint522.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.name = "t5";
HAnimSegment523.DEF = "Joe_t5";
Shape Shape524 = createNode("Shape");
Appearance Appearance525 = createNode("Appearance");
Appearance525.USE = "SegmentLine";
Shape524.appearance = Appearance525;

IndexedLineSet IndexedLineSet526 = createNode("IndexedLineSet");
IndexedLineSet526.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0,1.41,-0.1235,0,1.438,-0.12]);
IndexedLineSet526.coord = Coordinate527;

Shape524.geometry = IndexedLineSet526;

HAnimSegment523.children = new MFNode();

HAnimSegment523.children[0] = Shape524;

Transform Transform528 = createNode("Transform");
Transform528.translation = new SFVec3f(new float[0,1.381,-0.1235]);
Shape Shape529 = createNode("Shape");
Shape529.USE = "jointbox";
Transform528.child = new undefined();

Transform528.child[0] = Shape529;

HAnimSegment523.children[1] = Transform528;

HAnimJoint522.children = new MFNode();

HAnimJoint522.children[0] = HAnimSegment523;

HAnimJoint HAnimJoint530 = createNode("HAnimJoint");
HAnimJoint530.name = "vt4";
HAnimJoint530.DEF = "Joe_vt4";
HAnimJoint530.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint530.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint530.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment531 = createNode("HAnimSegment");
HAnimSegment531.name = "t4";
HAnimSegment531.DEF = "Joe_t4";
Shape Shape532 = createNode("Shape");
Appearance Appearance533 = createNode("Appearance");
Appearance533.USE = "SegmentLine";
Shape532.appearance = Appearance533;

IndexedLineSet IndexedLineSet534 = createNode("IndexedLineSet");
IndexedLineSet534.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate535 = createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0,1.41,-0.1235,0,1.438,-0.12]);
IndexedLineSet534.coord = Coordinate535;

Shape532.geometry = IndexedLineSet534;

HAnimSegment531.children = new MFNode();

HAnimSegment531.children[0] = Shape532;

Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[0,1.41,-0.1235]);
Shape Shape537 = createNode("Shape");
Shape537.USE = "jointbox";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

HAnimSegment531.children[1] = Transform536;

Transform Transform538 = createNode("Transform");
Transform538.translation = new SFVec3f(new float[0,1.41,-0.145]);
Shape Shape539 = createNode("Shape");
Shape539.USE = "skinsphere";
Transform538.child = new undefined();

Transform538.child[0] = Shape539;

HAnimSegment531.children[2] = Transform538;

HAnimJoint530.children = new MFNode();

HAnimJoint530.children[0] = HAnimSegment531;

HAnimJoint HAnimJoint540 = createNode("HAnimJoint");
HAnimJoint540.name = "vt3";
HAnimJoint540.DEF = "Joe_vt3";
HAnimJoint540.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.name = "t3";
HAnimSegment541.DEF = "Joe_t3";
Shape Shape542 = createNode("Shape");
Appearance Appearance543 = createNode("Appearance");
Appearance543.USE = "SegmentLine";
Shape542.appearance = Appearance543;

IndexedLineSet IndexedLineSet544 = createNode("IndexedLineSet");
IndexedLineSet544.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate545 = createNode("Coordinate");
Coordinate545.point = new MFVec3f(new float[0,1.438,-0.12,0,1.468,-0.105]);
IndexedLineSet544.coord = Coordinate545;

Shape542.geometry = IndexedLineSet544;

HAnimSegment541.children = new MFNode();

HAnimSegment541.children[0] = Shape542;

Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[0,1.438,-0.12]);
Shape Shape547 = createNode("Shape");
Shape547.USE = "jointbox";
Transform546.child = new undefined();

Transform546.child[0] = Shape547;

HAnimSegment541.children[1] = Transform546;

HAnimJoint540.children = new MFNode();

HAnimJoint540.children[0] = HAnimSegment541;

HAnimJoint HAnimJoint548 = createNode("HAnimJoint");
HAnimJoint548.name = "vt2";
HAnimJoint548.DEF = "Joe_vt2";
HAnimJoint548.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.name = "t2";
HAnimSegment549.DEF = "Joe_t2";
Shape Shape550 = createNode("Shape");
Appearance Appearance551 = createNode("Appearance");
Appearance551.USE = "SegmentLine";
Shape550.appearance = Appearance551;

IndexedLineSet IndexedLineSet552 = createNode("IndexedLineSet");
IndexedLineSet552.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate553 = createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[0,1.468,-0.105,0,1.497,-0.09]);
IndexedLineSet552.coord = Coordinate553;

Shape550.geometry = IndexedLineSet552;

HAnimSegment549.children = new MFNode();

HAnimSegment549.children[0] = Shape550;

Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[0,1.468,-0.105]);
Shape Shape555 = createNode("Shape");
Shape555.USE = "jointbox";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

HAnimSegment549.children[1] = Transform554;

HAnimJoint548.children = new MFNode();

HAnimJoint548.children[0] = HAnimSegment549;

HAnimJoint HAnimJoint556 = createNode("HAnimJoint");
HAnimJoint556.name = "vt1";
HAnimJoint556.DEF = "Joe_vt1";
HAnimJoint556.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint556.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint556.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment557 = createNode("HAnimSegment");
HAnimSegment557.name = "t1";
HAnimSegment557.DEF = "Joe_t1";
Shape Shape558 = createNode("Shape");
Appearance Appearance559 = createNode("Appearance");
Appearance559.USE = "SegmentLine";
Shape558.appearance = Appearance559;

IndexedLineSet IndexedLineSet560 = createNode("IndexedLineSet");
IndexedLineSet560.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate561 = createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[0,1.497,-0.09,0,1.525,-0.072]);
IndexedLineSet560.coord = Coordinate561;

Shape558.geometry = IndexedLineSet560;

HAnimSegment557.children = new MFNode();

HAnimSegment557.children[0] = Shape558;

Transform Transform562 = createNode("Transform");
Transform562.translation = new SFVec3f(new float[0,1.497,-0.09]);
Shape Shape563 = createNode("Shape");
Shape563.USE = "jointbox";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

HAnimSegment557.children[1] = Transform562;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.name = "suprasternale_pt";
HAnimSite564.DEF = "Joe_suprasternale_pt";
HAnimSite564.translation = new SFVec3f(new float[0,1.44,0.03]);
Shape Shape565 = createNode("Shape");
Shape565.USE = "sitebox";
HAnimSite564.children = new MFNode();

HAnimSite564.children[0] = Shape565;

HAnimSegment557.children[2] = HAnimSite564;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.name = "cervicale_pt";
HAnimSite566.DEF = "Joe_cervicale_pt";
HAnimSite566.translation = new SFVec3f(new float[0,1.53,-0.084]);
Shape Shape567 = createNode("Shape");
Shape567.USE = "sitebox";
HAnimSite566.children = new MFNode();

HAnimSite566.children[0] = Shape567;

HAnimSegment557.children[3] = HAnimSite566;

HAnimJoint556.children = new MFNode();

HAnimJoint556.children[0] = HAnimSegment557;

HAnimJoint HAnimJoint568 = createNode("HAnimJoint");
HAnimJoint568.name = "vc7";
HAnimJoint568.DEF = "Joe_vc7";
HAnimJoint568.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint568.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint568.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment569 = createNode("HAnimSegment");
HAnimSegment569.name = "c7";
HAnimSegment569.DEF = "Joe_c7";
Shape Shape570 = createNode("Shape");
Appearance Appearance571 = createNode("Appearance");
Appearance571.USE = "SegmentLine";
Shape570.appearance = Appearance571;

IndexedLineSet IndexedLineSet572 = createNode("IndexedLineSet");
IndexedLineSet572.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate573 = createNode("Coordinate");
Coordinate573.point = new MFVec3f(new float[0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]);
IndexedLineSet572.coord = Coordinate573;

Shape570.geometry = IndexedLineSet572;

HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = Shape570;

Transform Transform574 = createNode("Transform");
Transform574.translation = new SFVec3f(new float[0,1.525,-0.072]);
Shape Shape575 = createNode("Shape");
Shape575.USE = "jointbox";
Transform574.child = new undefined();

Transform574.child[0] = Shape575;

HAnimSegment569.children[1] = Transform574;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.name = "r_neck_base_pt";
HAnimSite576.DEF = "Joe_r_neck_base_pt";
HAnimSite576.translation = new SFVec3f(new float[-0.0646,1.5149,-0.0385]);
Shape Shape577 = createNode("Shape");
Shape577.USE = "sitebox";
HAnimSite576.children = new MFNode();

HAnimSite576.children[0] = Shape577;

HAnimSegment569.children[2] = HAnimSite576;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.name = "l_neck_base_pt";
HAnimSite578.DEF = "Joe_l_neck_base_pt";
HAnimSite578.translation = new SFVec3f(new float[0.0646,1.5149,-0.0385]);
Shape Shape579 = createNode("Shape");
Shape579.USE = "sitebox";
HAnimSite578.children = new MFNode();

HAnimSite578.children[0] = Shape579;

HAnimSegment569.children[3] = HAnimSite578;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

HAnimJoint HAnimJoint580 = createNode("HAnimJoint");
HAnimJoint580.name = "vc6";
HAnimJoint580.DEF = "Joe_vc6";
HAnimJoint580.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimSegment HAnimSegment581 = createNode("HAnimSegment");
HAnimSegment581.name = "c6";
HAnimSegment581.DEF = "Joe_c6";
Shape Shape582 = createNode("Shape");
Appearance Appearance583 = createNode("Appearance");
Appearance583.USE = "SegmentLine";
Shape582.appearance = Appearance583;

IndexedLineSet IndexedLineSet584 = createNode("IndexedLineSet");
IndexedLineSet584.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate585 = createNode("Coordinate");
Coordinate585.point = new MFVec3f(new float[0,1.54,-0.05,0,1.5675,-0.0256]);
IndexedLineSet584.coord = Coordinate585;

Shape582.geometry = IndexedLineSet584;

HAnimSegment581.children = new MFNode();

HAnimSegment581.children[0] = Shape582;

Transform Transform586 = createNode("Transform");
Transform586.translation = new SFVec3f(new float[0,1.54,-0.05]);
Shape Shape587 = createNode("Shape");
Shape587.USE = "jointbox";
Transform586.child = new undefined();

Transform586.child[0] = Shape587;

HAnimSegment581.children[1] = Transform586;

HAnimJoint580.children = new MFNode();

HAnimJoint580.children[0] = HAnimSegment581;

HAnimJoint HAnimJoint588 = createNode("HAnimJoint");
HAnimJoint588.name = "vc5";
HAnimJoint588.DEF = "Joe_vc5";
HAnimJoint588.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimSegment HAnimSegment589 = createNode("HAnimSegment");
HAnimSegment589.name = "c5";
HAnimSegment589.DEF = "Joe_c5";
Transform Transform590 = createNode("Transform");
Transform590.translation = new SFVec3f(new float[0,1.552,-0.035]);
Shape Shape591 = createNode("Shape");
Shape591.USE = "jointbox";
Transform590.child = new undefined();

Transform590.child[0] = Shape591;

HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = Transform590;

Shape Shape592 = createNode("Shape");
Appearance Appearance593 = createNode("Appearance");
Appearance593.USE = "SegmentLine";
Shape592.appearance = Appearance593;

IndexedLineSet IndexedLineSet594 = createNode("IndexedLineSet");
IndexedLineSet594.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate595 = createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0,1.5675,-0.0256,0,1.5823,-0.0185]);
IndexedLineSet594.coord = Coordinate595;

Shape592.geometry = IndexedLineSet594;

HAnimSegment589.children[1] = Shape592;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

HAnimJoint HAnimJoint596 = createNode("HAnimJoint");
HAnimJoint596.name = "vc4";
HAnimJoint596.DEF = "Joe_vc4";
HAnimJoint596.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimSegment HAnimSegment597 = createNode("HAnimSegment");
HAnimSegment597.name = "c4";
HAnimSegment597.DEF = "Joe_c4";
Shape Shape598 = createNode("Shape");
Appearance Appearance599 = createNode("Appearance");
Appearance599.USE = "SegmentLine";
Shape598.appearance = Appearance599;

IndexedLineSet IndexedLineSet600 = createNode("IndexedLineSet");
IndexedLineSet600.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate601 = createNode("Coordinate");
Coordinate601.point = new MFVec3f(new float[0,1.5823,-0.0185,0,1.595,-0.0175]);
IndexedLineSet600.coord = Coordinate601;

Shape598.geometry = IndexedLineSet600;

HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = Shape598;

Transform Transform602 = createNode("Transform");
Transform602.translation = new SFVec3f(new float[0,1.5675,-0.0256]);
Shape Shape603 = createNode("Shape");
Shape603.USE = "jointbox";
Transform602.child = new undefined();

Transform602.child[0] = Shape603;

HAnimSegment597.children[1] = Transform602;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

HAnimJoint HAnimJoint604 = createNode("HAnimJoint");
HAnimJoint604.name = "vc3";
HAnimJoint604.DEF = "Joe_vc3";
HAnimJoint604.center = new SFVec3f(new float[0,1.5823,-0.0185]);
HAnimSegment HAnimSegment605 = createNode("HAnimSegment");
HAnimSegment605.name = "c3";
HAnimSegment605.DEF = "Joe_c3";
Shape Shape606 = createNode("Shape");
Appearance Appearance607 = createNode("Appearance");
Appearance607.USE = "SegmentLine";
Shape606.appearance = Appearance607;

IndexedLineSet IndexedLineSet608 = createNode("IndexedLineSet");
IndexedLineSet608.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0,1.595,-0.0175,0,1.61,-0.015]);
IndexedLineSet608.coord = Coordinate609;

Shape606.geometry = IndexedLineSet608;

HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = Shape606;

Transform Transform610 = createNode("Transform");
Transform610.translation = new SFVec3f(new float[0,1.5823,-0.0185]);
Shape Shape611 = createNode("Shape");
Shape611.USE = "jointbox";
Transform610.child = new undefined();

Transform610.child[0] = Shape611;

HAnimSegment605.children[1] = Transform610;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

HAnimJoint HAnimJoint612 = createNode("HAnimJoint");
HAnimJoint612.name = "vc2";
HAnimJoint612.DEF = "Joe_vc2";
HAnimJoint612.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimSegment HAnimSegment613 = createNode("HAnimSegment");
HAnimSegment613.name = "c2";
HAnimSegment613.DEF = "Joe_c2";
Shape Shape614 = createNode("Shape");
Appearance Appearance615 = createNode("Appearance");
Appearance615.USE = "SegmentLine";
Shape614.appearance = Appearance615;

IndexedLineSet IndexedLineSet616 = createNode("IndexedLineSet");
IndexedLineSet616.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate617 = createNode("Coordinate");
Coordinate617.point = new MFVec3f(new float[0,1.61,-0.015,0,1.6144,-0.0034]);
IndexedLineSet616.coord = Coordinate617;

Shape614.geometry = IndexedLineSet616;

HAnimSegment613.children = new MFNode();

HAnimSegment613.children[0] = Shape614;

Transform Transform618 = createNode("Transform");
Transform618.translation = new SFVec3f(new float[0,1.595,-0.0175]);
Shape Shape619 = createNode("Shape");
Shape619.USE = "jointbox";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

HAnimSegment613.children[1] = Transform618;

HAnimJoint612.children = new MFNode();

HAnimJoint612.children[0] = HAnimSegment613;

HAnimJoint HAnimJoint620 = createNode("HAnimJoint");
HAnimJoint620.name = "vc1";
HAnimJoint620.DEF = "Joe_vc1";
HAnimJoint620.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimSegment HAnimSegment621 = createNode("HAnimSegment");
HAnimSegment621.name = "c1";
HAnimSegment621.DEF = "Joe_c1";
Shape Shape622 = createNode("Shape");
Appearance Appearance623 = createNode("Appearance");
Appearance623.USE = "SegmentLine";
Shape622.appearance = Appearance623;

IndexedLineSet IndexedLineSet624 = createNode("IndexedLineSet");
IndexedLineSet624.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate625 = createNode("Coordinate");
Coordinate625.point = new MFVec3f(new float[0,1.6144,-0.0034,0,1.63,-0.01]);
IndexedLineSet624.coord = Coordinate625;

Shape622.geometry = IndexedLineSet624;

HAnimSegment621.children = new MFNode();

HAnimSegment621.children[0] = Shape622;

Transform Transform626 = createNode("Transform");
Transform626.translation = new SFVec3f(new float[0,1.61,-0.015]);
Shape Shape627 = createNode("Shape");
Shape627.USE = "jointbox";
Transform626.child = new undefined();

Transform626.child[0] = Shape627;

HAnimSegment621.children[1] = Transform626;

HAnimJoint620.children = new MFNode();

HAnimJoint620.children[0] = HAnimSegment621;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.name = "skullbase";
HAnimJoint628.DEF = "Joe_skullbase";
HAnimJoint628.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint628.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint628.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.name = "skull";
HAnimSegment629.DEF = "Joe_skull";
Shape Shape630 = createNode("Shape");
Appearance Appearance631 = createNode("Appearance");
Appearance631.USE = "SegmentLine";
Shape630.appearance = Appearance631;

IndexedLineSet IndexedLineSet632 = createNode("IndexedLineSet");
IndexedLineSet632.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]);
IndexedLineSet632.coord = Coordinate633;

Shape630.geometry = IndexedLineSet632;

HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = Shape630;

Transform Transform634 = createNode("Transform");
Transform634.translation = new SFVec3f(new float[0,1.63,-0.01]);
Shape Shape635 = createNode("Shape");
Shape635.USE = "jointbox";
Transform634.child = new undefined();

Transform634.child[0] = Shape635;

HAnimSegment629.children[1] = Transform634;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.name = "skull_vertex_tip";
HAnimSite636.DEF = "Joe_skull_vertex_tip";
HAnimSite636.translation = new SFVec3f(new float[0,1.77,0]);
Shape Shape637 = createNode("Shape");
Shape637.USE = "sitebox";
HAnimSite636.children = new MFNode();

HAnimSite636.children[0] = Shape637;

HAnimSegment629.children[2] = HAnimSite636;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.name = "sellion_pt";
HAnimSite638.DEF = "Joe_sellion_pt";
HAnimSite638.translation = new SFVec3f(new float[0,1.665,0.09]);
Shape Shape639 = createNode("Shape");
Shape639.USE = "sitebox";
HAnimSite638.children = new MFNode();

HAnimSite638.children[0] = Shape639;

HAnimSegment629.children[3] = HAnimSite638;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.name = "r_infraorbitale_pt";
HAnimSite640.DEF = "Joe_r_infraorbitale_pt";
HAnimSite640.translation = new SFVec3f(new float[-0.033,1.62,0.087]);
Shape Shape641 = createNode("Shape");
Shape641.USE = "sitebox";
HAnimSite640.children = new MFNode();

HAnimSite640.children[0] = Shape641;

HAnimSegment629.children[4] = HAnimSite640;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.name = "l_infraorbitale_pt";
HAnimSite642.DEF = "Joe_l_infraorbitale_pt";
HAnimSite642.translation = new SFVec3f(new float[0.033,1.62,0.087]);
Shape Shape643 = createNode("Shape");
Shape643.USE = "sitebox";
HAnimSite642.children = new MFNode();

HAnimSite642.children[0] = Shape643;

HAnimSegment629.children[5] = HAnimSite642;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.name = "supramenton_pt";
HAnimSite644.DEF = "Joe_supramenton_pt";
HAnimSite644.translation = new SFVec3f(new float[0,1.55,0.097]);
Shape Shape645 = createNode("Shape");
Shape645.USE = "sitebox";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = Shape645;

HAnimSegment629.children[6] = HAnimSite644;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.name = "r_tragion_pt";
HAnimSite646.DEF = "Joe_r_tragion_pt";
HAnimSite646.translation = new SFVec3f(new float[-0.077,1.64,-0.01]);
Shape Shape647 = createNode("Shape");
Shape647.USE = "sitebox";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = Shape647;

HAnimSegment629.children[7] = HAnimSite646;

HAnimSite HAnimSite648 = createNode("HAnimSite");
HAnimSite648.name = "r_gonion_pt";
HAnimSite648.DEF = "Joe_r_gonion_pt";
HAnimSite648.translation = new SFVec3f(new float[-0.052,1.58,0.015]);
Shape Shape649 = createNode("Shape");
Shape649.USE = "sitebox";
HAnimSite648.children = new MFNode();

HAnimSite648.children[0] = Shape649;

HAnimSegment629.children[8] = HAnimSite648;

HAnimSite HAnimSite650 = createNode("HAnimSite");
HAnimSite650.name = "l_tragion_pt";
HAnimSite650.DEF = "Joe_l_tragion_pt";
HAnimSite650.translation = new SFVec3f(new float[0.077,1.64,-0.01]);
Shape Shape651 = createNode("Shape");
Shape651.USE = "sitebox";
HAnimSite650.children = new MFNode();

HAnimSite650.children[0] = Shape651;

HAnimSegment629.children[9] = HAnimSite650;

HAnimSite HAnimSite652 = createNode("HAnimSite");
HAnimSite652.name = "l_gonion_pt";
HAnimSite652.DEF = "Joe_l_gonion_pt";
HAnimSite652.translation = new SFVec3f(new float[0.0631,1.58,0.015]);
Shape Shape653 = createNode("Shape");
Shape653.USE = "sitebox";
HAnimSite652.children = new MFNode();

HAnimSite652.children[0] = Shape653;

HAnimSegment629.children[10] = HAnimSite652;

HAnimSite HAnimSite654 = createNode("HAnimSite");
HAnimSite654.name = "nuchale_pt";
HAnimSite654.DEF = "Joe_nuchale_pt";
HAnimSite654.translation = new SFVec3f(new float[0,1.625,-0.0925]);
Shape Shape655 = createNode("Shape");
Shape655.USE = "sitebox";
HAnimSite654.children = new MFNode();

HAnimSite654.children[0] = Shape655;

HAnimSegment629.children[11] = HAnimSite654;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

HAnimJoint HAnimJoint656 = createNode("HAnimJoint");
HAnimJoint656.name = "l_eyeball_joint";
HAnimJoint656.DEF = "Joe_l_eyeball_joint";
HAnimJoint656.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimSegment HAnimSegment657 = createNode("HAnimSegment");
HAnimSegment657.name = "l_eyeball";
HAnimSegment657.DEF = "Joe_l_eyeball";
Shape Shape658 = createNode("Shape");
Appearance Appearance659 = createNode("Appearance");
Appearance659.USE = "SegmentLine";
Shape658.appearance = Appearance659;

IndexedLineSet IndexedLineSet660 = createNode("IndexedLineSet");
IndexedLineSet660.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate661 = createNode("Coordinate");
Coordinate661.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet660.coord = Coordinate661;

Shape658.geometry = IndexedLineSet660;

HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = Shape658;

Transform Transform662 = createNode("Transform");
Transform662.scale = new SFVec3f(new float[1,1,1.4]);
Transform662.translation = new SFVec3f(new float[0.034,1.655,0.065]);
Shape Shape663 = createNode("Shape");
Shape663.USE = "jointbox";
Transform662.child = new undefined();

Transform662.child[0] = Shape663;

HAnimSegment657.children[1] = Transform662;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

HAnimJoint628.children[1] = HAnimJoint656;

HAnimJoint HAnimJoint664 = createNode("HAnimJoint");
HAnimJoint664.name = "r_eyeball_joint";
HAnimJoint664.DEF = "Joe_r_eyeball_joint";
HAnimJoint664.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimSegment HAnimSegment665 = createNode("HAnimSegment");
HAnimSegment665.name = "r_eyeball";
HAnimSegment665.DEF = "Joe_r_eyeball";
Shape Shape666 = createNode("Shape");
Appearance Appearance667 = createNode("Appearance");
Appearance667.USE = "SegmentLine";
Shape666.appearance = Appearance667;

IndexedLineSet IndexedLineSet668 = createNode("IndexedLineSet");
IndexedLineSet668.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate669 = createNode("Coordinate");
Coordinate669.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet668.coord = Coordinate669;

Shape666.geometry = IndexedLineSet668;

HAnimSegment665.children = new MFNode();

HAnimSegment665.children[0] = Shape666;

Transform Transform670 = createNode("Transform");
Transform670.scale = new SFVec3f(new float[1,1,1.4]);
Transform670.translation = new SFVec3f(new float[-0.034,1.655,0.065]);
Shape Shape671 = createNode("Shape");
Shape671.USE = "jointbox";
Transform670.child = new undefined();

Transform670.child[0] = Shape671;

HAnimSegment665.children[1] = Transform670;

HAnimJoint664.children = new MFNode();

HAnimJoint664.children[0] = HAnimSegment665;

HAnimJoint628.children[2] = HAnimJoint664;

HAnimJoint620.children[1] = HAnimJoint628;

HAnimJoint612.children[1] = HAnimJoint620;

HAnimJoint604.children[1] = HAnimJoint612;

HAnimJoint596.children[1] = HAnimJoint604;

HAnimJoint588.children[1] = HAnimJoint596;

HAnimJoint580.children[1] = HAnimJoint588;

HAnimJoint568.children[1] = HAnimJoint580;

HAnimJoint556.children[1] = HAnimJoint568;

HAnimJoint HAnimJoint672 = createNode("HAnimJoint");
HAnimJoint672.name = "l_sternoclavicular";
HAnimJoint672.DEF = "Joe_l_sternoclavicular";
HAnimJoint672.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint672.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint672.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment673 = createNode("HAnimSegment");
HAnimSegment673.name = "l_clavicle";
HAnimSegment673.DEF = "Joe_l_clavicle";
Shape Shape674 = createNode("Shape");
Appearance Appearance675 = createNode("Appearance");
Appearance675.USE = "SegmentLine";
Shape674.appearance = Appearance675;

IndexedLineSet IndexedLineSet676 = createNode("IndexedLineSet");
IndexedLineSet676.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate677 = createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
IndexedLineSet676.coord = Coordinate677;

Shape674.geometry = IndexedLineSet676;

HAnimSegment673.children = new MFNode();

HAnimSegment673.children[0] = Shape674;

Transform Transform678 = createNode("Transform");
Transform678.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape679 = createNode("Shape");
Shape679.USE = "jointbox";
Transform678.child = new undefined();

Transform678.child[0] = Shape679;

HAnimSegment673.children[1] = Transform678;

HAnimSite HAnimSite680 = createNode("HAnimSite");
HAnimSite680.name = "l_clavicle_pt";
HAnimSite680.DEF = "Joe_l_clavicle_pt";
HAnimSite680.translation = new SFVec3f(new float[0.03,1.46,0.035]);
Shape Shape681 = createNode("Shape");
Shape681.USE = "sitebox";
HAnimSite680.children = new MFNode();

HAnimSite680.children[0] = Shape681;

HAnimSegment673.children[2] = HAnimSite680;

HAnimJoint672.children = new MFNode();

HAnimJoint672.children[0] = HAnimSegment673;

HAnimJoint HAnimJoint682 = createNode("HAnimJoint");
HAnimJoint682.name = "l_acromioclavicular";
HAnimJoint682.DEF = "Joe_l_acromioclavicular";
HAnimJoint682.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint682.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint682.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment683 = createNode("HAnimSegment");
HAnimSegment683.name = "l_scapula";
HAnimSegment683.DEF = "Joe_l_scapula";
Shape Shape684 = createNode("Shape");
Appearance Appearance685 = createNode("Appearance");
Appearance685.USE = "SegmentLine";
Shape684.appearance = Appearance685;

IndexedLineSet IndexedLineSet686 = createNode("IndexedLineSet");
IndexedLineSet686.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate687 = createNode("Coordinate");
Coordinate687.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2,1.44,-0.04]);
IndexedLineSet686.coord = Coordinate687;

Shape684.geometry = IndexedLineSet686;

HAnimSegment683.children = new MFNode();

HAnimSegment683.children[0] = Shape684;

Transform Transform688 = createNode("Transform");
Transform688.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape689 = createNode("Shape");
Shape689.USE = "jointbox";
Transform688.child = new undefined();

Transform688.child[0] = Shape689;

HAnimSegment683.children[1] = Transform688;

Transform Transform690 = createNode("Transform");
Transform690.translation = new SFVec3f(new float[0.11,1.427,-0.1375]);
Shape Shape691 = createNode("Shape");
Shape691.USE = "skinsphere";
Transform690.child = new undefined();

Transform690.child[0] = Shape691;

HAnimSegment683.children[2] = Transform690;

HAnimSite HAnimSite692 = createNode("HAnimSite");
HAnimSite692.name = "l_acromion_pt";
HAnimSite692.DEF = "Joe_l_acromion_pt";
HAnimSite692.translation = new SFVec3f(new float[0.175,1.4825,-0.06]);
Shape Shape693 = createNode("Shape");
Shape693.USE = "sitebox";
HAnimSite692.children = new MFNode();

HAnimSite692.children[0] = Shape693;

HAnimSegment683.children[3] = HAnimSite692;

HAnimSite HAnimSite694 = createNode("HAnimSite");
HAnimSite694.name = "l_axilla_proximal_pt";
HAnimSite694.DEF = "Joe_l_axilla_proximal_pt";
HAnimSite694.translation = new SFVec3f(new float[0.17,1.38,0.007]);
Shape Shape695 = createNode("Shape");
Shape695.USE = "sitebox";
HAnimSite694.children = new MFNode();

HAnimSite694.children[0] = Shape695;

HAnimSegment683.children[4] = HAnimSite694;

HAnimSite HAnimSite696 = createNode("HAnimSite");
HAnimSite696.name = "l_axilla_distal_pt";
HAnimSite696.DEF = "Joe_l_axilla_distal_pt";
HAnimSite696.translation = new SFVec3f(new float[0.16,1.38,-0.125]);
Shape Shape697 = createNode("Shape");
Shape697.USE = "sitebox";
HAnimSite696.children = new MFNode();

HAnimSite696.children[0] = Shape697;

HAnimSegment683.children[5] = HAnimSite696;

HAnimJoint682.children = new MFNode();

HAnimJoint682.children[0] = HAnimSegment683;

HAnimJoint HAnimJoint698 = createNode("HAnimJoint");
HAnimJoint698.name = "l_shoulder";
HAnimJoint698.DEF = "Joe_l_shoulder";
HAnimJoint698.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint698.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint698.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment699 = createNode("HAnimSegment");
HAnimSegment699.name = "l_upperarm";
HAnimSegment699.DEF = "Joe_l_upperarm";
Shape Shape700 = createNode("Shape");
Appearance Appearance701 = createNode("Appearance");
Appearance701.USE = "SegmentLine";
Shape700.appearance = Appearance701;

IndexedLineSet IndexedLineSet702 = createNode("IndexedLineSet");
IndexedLineSet702.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate703 = createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.2029,1.44,-0.0387,0.2,1.1388,-0.04]);
IndexedLineSet702.coord = Coordinate703;

Shape700.geometry = IndexedLineSet702;

HAnimSegment699.children = new MFNode();

HAnimSegment699.children[0] = Shape700;

Transform Transform704 = createNode("Transform");
Transform704.translation = new SFVec3f(new float[0.2,1.44,-0.04]);
Shape Shape705 = createNode("Shape");
Shape705.USE = "jointbox";
Transform704.child = new undefined();

Transform704.child[0] = Shape705;

HAnimSegment699.children[1] = Transform704;

Transform Transform706 = createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.235,1.42,-0.0625]);
Shape Shape707 = createNode("Shape");
Shape707.USE = "skinsphere";
Transform706.child = new undefined();

Transform706.child[0] = Shape707;

HAnimSegment699.children[2] = Transform706;

Transform Transform708 = createNode("Transform");
Transform708.translation = new SFVec3f(new float[0.25,1.27,-0.04]);
Shape Shape709 = createNode("Shape");
Shape709.USE = "skinsphere";
Transform708.child = new undefined();

Transform708.child[0] = Shape709;

HAnimSegment699.children[3] = Transform708;

Transform Transform710 = createNode("Transform");
Transform710.translation = new SFVec3f(new float[0.17,1.27,-0.04]);
Shape Shape711 = createNode("Shape");
Shape711.USE = "skinsphere";
Transform710.child = new undefined();

Transform710.child[0] = Shape711;

HAnimSegment699.children[4] = Transform710;

Transform Transform712 = createNode("Transform");
Transform712.translation = new SFVec3f(new float[0.2,1.27,-0.09]);
Shape Shape713 = createNode("Shape");
Shape713.USE = "skinsphere";
Transform712.child = new undefined();

Transform712.child[0] = Shape713;

HAnimSegment699.children[5] = Transform712;

Transform Transform714 = createNode("Transform");
Transform714.translation = new SFVec3f(new float[0.2,1.27,0.02]);
Shape Shape715 = createNode("Shape");
Shape715.USE = "skinsphere";
Transform714.child = new undefined();

Transform714.child[0] = Shape715;

HAnimSegment699.children[6] = Transform714;

HAnimSite HAnimSite716 = createNode("HAnimSite");
HAnimSite716.name = "l_humeral_medial_epicondyle_pt";
HAnimSite716.DEF = "Joe_l_humeral_medial_epicondyle_pt";
HAnimSite716.translation = new SFVec3f(new float[0.165,1.1388,-0.04]);
Shape Shape717 = createNode("Shape");
Shape717.USE = "sitebox";
HAnimSite716.children = new MFNode();

HAnimSite716.children[0] = Shape717;

HAnimSegment699.children[7] = HAnimSite716;

HAnimSite HAnimSite718 = createNode("HAnimSite");
HAnimSite718.name = "l_radiale_pt";
HAnimSite718.DEF = "Joe_l_radiale_pt";
HAnimSite718.translation = new SFVec3f(new float[0.23,1.133,-0.055]);
Shape Shape719 = createNode("Shape");
Shape719.USE = "sitebox";
HAnimSite718.children = new MFNode();

HAnimSite718.children[0] = Shape719;

HAnimSegment699.children[8] = HAnimSite718;

HAnimSite HAnimSite720 = createNode("HAnimSite");
HAnimSite720.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite720.DEF = "Joe_l_humeral_lateral_epicondyle_pt";
HAnimSite720.translation = new SFVec3f(new float[0.244,1.1388,-0.04]);
Shape Shape721 = createNode("Shape");
Shape721.USE = "sitebox";
HAnimSite720.children = new MFNode();

HAnimSite720.children[0] = Shape721;

HAnimSegment699.children[9] = HAnimSite720;

HAnimJoint698.children = new MFNode();

HAnimJoint698.children[0] = HAnimSegment699;

HAnimJoint HAnimJoint722 = createNode("HAnimJoint");
HAnimJoint722.name = "l_elbow";
HAnimJoint722.DEF = "Joe_l_elbow";
HAnimJoint722.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint722.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint722.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment723 = createNode("HAnimSegment");
HAnimSegment723.name = "l_forearm";
HAnimSegment723.DEF = "Joe_l_forearm";
Shape Shape724 = createNode("Shape");
Appearance Appearance725 = createNode("Appearance");
Appearance725.USE = "SegmentLine";
Shape724.appearance = Appearance725;

IndexedLineSet IndexedLineSet726 = createNode("IndexedLineSet");
IndexedLineSet726.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate727 = createNode("Coordinate");
Coordinate727.point = new MFVec3f(new float[0.2,1.1388,-0.04,0.2,0.87,-0.04]);
IndexedLineSet726.coord = Coordinate727;

Shape724.geometry = IndexedLineSet726;

HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = Shape724;

Transform Transform728 = createNode("Transform");
Transform728.translation = new SFVec3f(new float[0.2,1.1388,-0.04]);
Shape Shape729 = createNode("Shape");
Shape729.USE = "jointbox";
Transform728.child = new undefined();

Transform728.child[0] = Shape729;

HAnimSegment723.children[1] = Transform728;

Transform Transform730 = createNode("Transform");
Transform730.translation = new SFVec3f(new float[0.2,1.1388,-0.013]);
Shape Shape731 = createNode("Shape");
Shape731.USE = "skinsphere";
Transform730.child = new undefined();

Transform730.child[0] = Shape731;

HAnimSegment723.children[2] = Transform730;

Transform Transform732 = createNode("Transform");
Transform732.translation = new SFVec3f(new float[0.225,1,-0.01]);
Shape Shape733 = createNode("Shape");
Shape733.USE = "skinsphere";
Transform732.child = new undefined();

Transform732.child[0] = Shape733;

HAnimSegment723.children[3] = Transform732;

Transform Transform734 = createNode("Transform");
Transform734.translation = new SFVec3f(new float[0.225,1,-0.07]);
Shape Shape735 = createNode("Shape");
Shape735.USE = "skinsphere";
Transform734.child = new undefined();

Transform734.child[0] = Shape735;

HAnimSegment723.children[4] = Transform734;

Transform Transform736 = createNode("Transform");
Transform736.translation = new SFVec3f(new float[0.185,1,-0.01]);
Shape Shape737 = createNode("Shape");
Shape737.USE = "skinsphere";
Transform736.child = new undefined();

Transform736.child[0] = Shape737;

HAnimSegment723.children[5] = Transform736;

Transform Transform738 = createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.185,1,-0.07]);
Shape Shape739 = createNode("Shape");
Shape739.USE = "skinsphere";
Transform738.child = new undefined();

Transform738.child[0] = Shape739;

HAnimSegment723.children[6] = Transform738;

HAnimSite HAnimSite740 = createNode("HAnimSite");
HAnimSite740.name = "l_radial_styloid_pt";
HAnimSite740.DEF = "Joe_l_radial_styloid_pt";
HAnimSite740.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
Shape Shape741 = createNode("Shape");
Shape741.USE = "sitebox";
HAnimSite740.children = new MFNode();

HAnimSite740.children[0] = Shape741;

HAnimSegment723.children[7] = HAnimSite740;

HAnimSite HAnimSite742 = createNode("HAnimSite");
HAnimSite742.name = "l_olecranon_pt";
HAnimSite742.DEF = "Joe_l_olecranon_pt";
HAnimSite742.translation = new SFVec3f(new float[0.2,1.1388,-0.08]);
Shape Shape743 = createNode("Shape");
Shape743.USE = "sitebox";
HAnimSite742.children = new MFNode();

HAnimSite742.children[0] = Shape743;

HAnimSegment723.children[8] = HAnimSite742;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

HAnimJoint HAnimJoint744 = createNode("HAnimJoint");
HAnimJoint744.name = "l_radiocarpal";
HAnimJoint744.DEF = "Joe_l_radiocarpal";
HAnimJoint744.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint744.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint744.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment745 = createNode("HAnimSegment");
HAnimSegment745.name = "l_carpal";
HAnimSegment745.DEF = "Joe_l_carpal";
Shape Shape746 = createNode("Shape");
Appearance Appearance747 = createNode("Appearance");
Appearance747.USE = "SegmentLine";
Shape746.appearance = Appearance747;

IndexedLineSet IndexedLineSet748 = createNode("IndexedLineSet");
IndexedLineSet748.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate749 = createNode("Coordinate");
Coordinate749.point = new MFVec3f(new float[0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
IndexedLineSet748.coord = Coordinate749;

Shape746.geometry = IndexedLineSet748;

HAnimSegment745.children = new MFNode();

HAnimSegment745.children[0] = Shape746;

Transform Transform750 = createNode("Transform");
Transform750.translation = new SFVec3f(new float[0.2,0.87,-0.04]);
Shape Shape751 = createNode("Shape");
Shape751.USE = "jointbox";
Transform750.child = new undefined();

Transform750.child[0] = Shape751;

HAnimSegment745.children[1] = Transform750;

HAnimSite HAnimSite752 = createNode("HAnimSite");
HAnimSite752.name = "l_metacarpal_phalanx_2_pt";
HAnimSite752.DEF = "Joe_l_metacarpal_phalanx_2_pt";
HAnimSite752.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
Shape Shape753 = createNode("Shape");
Shape753.USE = "sitebox";
HAnimSite752.children = new MFNode();

HAnimSite752.children[0] = Shape753;

HAnimSegment745.children[2] = HAnimSite752;

HAnimSite HAnimSite754 = createNode("HAnimSite");
HAnimSite754.name = "l_ulnar_styloid_pt";
HAnimSite754.DEF = "Joe_l_ulnar_styloid_pt";
HAnimSite754.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
Shape Shape755 = createNode("Shape");
Shape755.USE = "sitebox";
HAnimSite754.children = new MFNode();

HAnimSite754.children[0] = Shape755;

HAnimSegment745.children[3] = HAnimSite754;

HAnimSite HAnimSite756 = createNode("HAnimSite");
HAnimSite756.name = "l_metacarpal_phalanx_5_pt";
HAnimSite756.DEF = "Joe_l_metacarpal_phalanx_5_pt";
HAnimSite756.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
Shape Shape757 = createNode("Shape");
Shape757.USE = "sitebox";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = Shape757;

HAnimSegment745.children[4] = HAnimSite756;

HAnimJoint744.children = new MFNode();

HAnimJoint744.children[0] = HAnimSegment745;

HAnimJoint HAnimJoint758 = createNode("HAnimJoint");
HAnimJoint758.name = "l_carpometacarpal_1";
HAnimJoint758.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint758.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint758.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint758.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment759 = createNode("HAnimSegment");
HAnimSegment759.name = "l_metacarpal_1";
HAnimSegment759.DEF = "Joe_l_metacarpal_1";
Shape Shape760 = createNode("Shape");
Appearance Appearance761 = createNode("Appearance");
Appearance761.USE = "SegmentLine";
Shape760.appearance = Appearance761;

IndexedLineSet IndexedLineSet762 = createNode("IndexedLineSet");
IndexedLineSet762.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate763 = createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
IndexedLineSet762.coord = Coordinate763;

Shape760.geometry = IndexedLineSet762;

HAnimSegment759.children = new MFNode();

HAnimSegment759.children[0] = Shape760;

Transform Transform764 = createNode("Transform");
Transform764.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape765 = createNode("Shape");
Shape765.USE = "jointbox";
Transform764.child = new undefined();

Transform764.child[0] = Shape765;

HAnimSegment759.children[1] = Transform764;

HAnimJoint758.children = new MFNode();

HAnimJoint758.children[0] = HAnimSegment759;

HAnimJoint HAnimJoint766 = createNode("HAnimJoint");
HAnimJoint766.name = "l_metacarpophalangeal_1";
HAnimJoint766.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint766.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint766.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint766.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimSegment HAnimSegment767 = createNode("HAnimSegment");
HAnimSegment767.name = "l_carpal_proximal_phalanx_1";
HAnimSegment767.DEF = "Joe_l_carpal_proximal_phalanx_1";
Shape Shape768 = createNode("Shape");
Appearance Appearance769 = createNode("Appearance");
Appearance769.USE = "SegmentLine";
Shape768.appearance = Appearance769;

IndexedLineSet IndexedLineSet770 = createNode("IndexedLineSet");
IndexedLineSet770.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate771 = createNode("Coordinate");
Coordinate771.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
IndexedLineSet770.coord = Coordinate771;

Shape768.geometry = IndexedLineSet770;

HAnimSegment767.children = new MFNode();

HAnimSegment767.children[0] = Shape768;

Transform Transform772 = createNode("Transform");
Transform772.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape773 = createNode("Shape");
Shape773.USE = "jointbox";
Transform772.child = new undefined();

Transform772.child[0] = Shape773;

HAnimSegment767.children[1] = Transform772;

HAnimJoint766.children = new MFNode();

HAnimJoint766.children[0] = HAnimSegment767;

HAnimJoint HAnimJoint774 = createNode("HAnimJoint");
HAnimJoint774.name = "l_carpal_interphalangeal_1";
HAnimJoint774.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint774.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint774.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint774.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment775 = createNode("HAnimSegment");
HAnimSegment775.name = "l_carpal_distal_phalanx_1";
HAnimSegment775.DEF = "Joe_l_carpal_distal_phalanx_1";
Shape Shape776 = createNode("Shape");
Appearance Appearance777 = createNode("Appearance");
Appearance777.USE = "SegmentLine";
Shape776.appearance = Appearance777;

IndexedLineSet IndexedLineSet778 = createNode("IndexedLineSet");
IndexedLineSet778.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate779 = createNode("Coordinate");
Coordinate779.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
IndexedLineSet778.coord = Coordinate779;

Shape776.geometry = IndexedLineSet778;

HAnimSegment775.children = new MFNode();

HAnimSegment775.children[0] = Shape776;

Transform Transform780 = createNode("Transform");
Transform780.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape781 = createNode("Shape");
Shape781.USE = "jointbox";
Transform780.child = new undefined();

Transform780.child[0] = Shape781;

HAnimSegment775.children[1] = Transform780;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite782.DEF = "Joe_l_carpal_distal_phalanx_1_tip";
HAnimSite782.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
Shape Shape783 = createNode("Shape");
Shape783.USE = "sitebox";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = Shape783;

HAnimSegment775.children[2] = HAnimSite782;

HAnimJoint774.children = new MFNode();

HAnimJoint774.children[0] = HAnimSegment775;

HAnimJoint766.children[1] = HAnimJoint774;

HAnimJoint758.children[1] = HAnimJoint766;

HAnimJoint744.children[1] = HAnimJoint758;

HAnimJoint HAnimJoint784 = createNode("HAnimJoint");
HAnimJoint784.name = "l_carpometacarpal_2";
HAnimJoint784.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint784.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint784.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint784.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment785 = createNode("HAnimSegment");
HAnimSegment785.name = "l_metacarpal_2";
HAnimSegment785.DEF = "Joe_l_metacarpal_2";
Shape Shape786 = createNode("Shape");
Appearance Appearance787 = createNode("Appearance");
Appearance787.USE = "SegmentLine";
Shape786.appearance = Appearance787;

IndexedLineSet IndexedLineSet788 = createNode("IndexedLineSet");
IndexedLineSet788.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate789 = createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
IndexedLineSet788.coord = Coordinate789;

Shape786.geometry = IndexedLineSet788;

HAnimSegment785.children = new MFNode();

HAnimSegment785.children[0] = Shape786;

Transform Transform790 = createNode("Transform");
Transform790.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape791 = createNode("Shape");
Shape791.USE = "jointbox";
Transform790.child = new undefined();

Transform790.child[0] = Shape791;

HAnimSegment785.children[1] = Transform790;

HAnimJoint784.children = new MFNode();

HAnimJoint784.children[0] = HAnimSegment785;

HAnimJoint HAnimJoint792 = createNode("HAnimJoint");
HAnimJoint792.name = "l_metacarpophalangeal_2";
HAnimJoint792.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint792.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint792.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint792.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment HAnimSegment793 = createNode("HAnimSegment");
HAnimSegment793.name = "l_carpal_proximal_phalanx_2";
HAnimSegment793.DEF = "Joe_l_carpal_proximal_phalanx_2";
Shape Shape794 = createNode("Shape");
Appearance Appearance795 = createNode("Appearance");
Appearance795.USE = "SegmentLine";
Shape794.appearance = Appearance795;

IndexedLineSet IndexedLineSet796 = createNode("IndexedLineSet");
IndexedLineSet796.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate797 = createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
IndexedLineSet796.coord = Coordinate797;

Shape794.geometry = IndexedLineSet796;

HAnimSegment793.children = new MFNode();

HAnimSegment793.children[0] = Shape794;

Transform Transform798 = createNode("Transform");
Transform798.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape799 = createNode("Shape");
Shape799.USE = "jointbox";
Transform798.child = new undefined();

Transform798.child[0] = Shape799;

HAnimSegment793.children[1] = Transform798;

HAnimJoint792.children = new MFNode();

HAnimJoint792.children[0] = HAnimSegment793;

HAnimJoint HAnimJoint800 = createNode("HAnimJoint");
HAnimJoint800.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint800.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint800.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint800.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint800.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment801 = createNode("HAnimSegment");
HAnimSegment801.name = "l_carpal_middle_phalanx_2";
HAnimSegment801.DEF = "Joe_l_carpal_middle_phalanx_2";
Shape Shape802 = createNode("Shape");
Appearance Appearance803 = createNode("Appearance");
Appearance803.USE = "SegmentLine";
Shape802.appearance = Appearance803;

IndexedLineSet IndexedLineSet804 = createNode("IndexedLineSet");
IndexedLineSet804.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate805 = createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
IndexedLineSet804.coord = Coordinate805;

Shape802.geometry = IndexedLineSet804;

HAnimSegment801.children = new MFNode();

HAnimSegment801.children[0] = Shape802;

Transform Transform806 = createNode("Transform");
Transform806.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape807 = createNode("Shape");
Shape807.USE = "jointbox";
Transform806.child = new undefined();

Transform806.child[0] = Shape807;

HAnimSegment801.children[1] = Transform806;

HAnimJoint800.children = new MFNode();

HAnimJoint800.children[0] = HAnimSegment801;

HAnimJoint HAnimJoint808 = createNode("HAnimJoint");
HAnimJoint808.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint808.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint808.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint808.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint808.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment809 = createNode("HAnimSegment");
HAnimSegment809.name = "l_carpal_distal_phalanx_2";
HAnimSegment809.DEF = "Joe_l_carpal_distal_phalanx_2";
Shape Shape810 = createNode("Shape");
Appearance Appearance811 = createNode("Appearance");
Appearance811.USE = "SegmentLine";
Shape810.appearance = Appearance811;

IndexedLineSet IndexedLineSet812 = createNode("IndexedLineSet");
IndexedLineSet812.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate813 = createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
IndexedLineSet812.coord = Coordinate813;

Shape810.geometry = IndexedLineSet812;

HAnimSegment809.children = new MFNode();

HAnimSegment809.children[0] = Shape810;

Transform Transform814 = createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape815 = createNode("Shape");
Shape815.USE = "jointbox";
Transform814.child = new undefined();

Transform814.child[0] = Shape815;

HAnimSegment809.children[1] = Transform814;

HAnimSite HAnimSite816 = createNode("HAnimSite");
HAnimSite816.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite816.DEF = "Joe_l_carpal_distal_phalanx_2_tip";
HAnimSite816.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
Shape Shape817 = createNode("Shape");
Shape817.USE = "sitebox";
HAnimSite816.children = new MFNode();

HAnimSite816.children[0] = Shape817;

HAnimSegment809.children[2] = HAnimSite816;

HAnimSite HAnimSite818 = createNode("HAnimSite");
HAnimSite818.name = "l_dactylion_pt";
HAnimSite818.DEF = "Joe_l_dactylion_pt";
HAnimSite818.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
Shape Shape819 = createNode("Shape");
Shape819.USE = "sitebox";
HAnimSite818.children = new MFNode();

HAnimSite818.children[0] = Shape819;

HAnimSegment809.children[3] = HAnimSite818;

HAnimJoint808.children = new MFNode();

HAnimJoint808.children[0] = HAnimSegment809;

HAnimJoint800.children[1] = HAnimJoint808;

HAnimJoint792.children[1] = HAnimJoint800;

HAnimJoint784.children[1] = HAnimJoint792;

HAnimJoint744.children[2] = HAnimJoint784;

HAnimJoint HAnimJoint820 = createNode("HAnimJoint");
HAnimJoint820.name = "l_carpometacarpal_3";
HAnimJoint820.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint820.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint820.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint820.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment821 = createNode("HAnimSegment");
HAnimSegment821.name = "l_metacarpal_3";
HAnimSegment821.DEF = "Joe_l_metacarpal_3";
Shape Shape822 = createNode("Shape");
Appearance Appearance823 = createNode("Appearance");
Appearance823.USE = "SegmentLine";
Shape822.appearance = Appearance823;

IndexedLineSet IndexedLineSet824 = createNode("IndexedLineSet");
IndexedLineSet824.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate825 = createNode("Coordinate");
Coordinate825.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
IndexedLineSet824.coord = Coordinate825;

Shape822.geometry = IndexedLineSet824;

HAnimSegment821.children = new MFNode();

HAnimSegment821.children[0] = Shape822;

Transform Transform826 = createNode("Transform");
Transform826.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape827 = createNode("Shape");
Shape827.USE = "jointbox";
Transform826.child = new undefined();

Transform826.child[0] = Shape827;

HAnimSegment821.children[1] = Transform826;

HAnimJoint820.children = new MFNode();

HAnimJoint820.children[0] = HAnimSegment821;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.name = "l_metacarpophalangeal_3";
HAnimJoint828.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint828.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint828.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint828.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment829 = createNode("HAnimSegment");
HAnimSegment829.name = "l_carpal_proximal_phalanx_3";
HAnimSegment829.DEF = "Joe_l_carpal_proximal_phalanx_3";
Shape Shape830 = createNode("Shape");
Appearance Appearance831 = createNode("Appearance");
Appearance831.USE = "SegmentLine";
Shape830.appearance = Appearance831;

IndexedLineSet IndexedLineSet832 = createNode("IndexedLineSet");
IndexedLineSet832.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate833 = createNode("Coordinate");
Coordinate833.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
IndexedLineSet832.coord = Coordinate833;

Shape830.geometry = IndexedLineSet832;

HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = Shape830;

Transform Transform834 = createNode("Transform");
Transform834.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape835 = createNode("Shape");
Shape835.USE = "jointbox";
Transform834.child = new undefined();

Transform834.child[0] = Shape835;

HAnimSegment829.children[1] = Transform834;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

HAnimJoint HAnimJoint836 = createNode("HAnimJoint");
HAnimJoint836.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint836.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint836.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint836.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint836.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment837 = createNode("HAnimSegment");
HAnimSegment837.name = "l_carpal_middle_phalanx_3";
HAnimSegment837.DEF = "Joe_l_carpal_middle_phalanx_3";
Shape Shape838 = createNode("Shape");
Appearance Appearance839 = createNode("Appearance");
Appearance839.USE = "SegmentLine";
Shape838.appearance = Appearance839;

IndexedLineSet IndexedLineSet840 = createNode("IndexedLineSet");
IndexedLineSet840.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate841 = createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
IndexedLineSet840.coord = Coordinate841;

Shape838.geometry = IndexedLineSet840;

HAnimSegment837.children = new MFNode();

HAnimSegment837.children[0] = Shape838;

Transform Transform842 = createNode("Transform");
Transform842.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape843 = createNode("Shape");
Shape843.USE = "jointbox";
Transform842.child = new undefined();

Transform842.child[0] = Shape843;

HAnimSegment837.children[1] = Transform842;

HAnimJoint836.children = new MFNode();

HAnimJoint836.children[0] = HAnimSegment837;

HAnimJoint HAnimJoint844 = createNode("HAnimJoint");
HAnimJoint844.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint844.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint844.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint844.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint844.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment845 = createNode("HAnimSegment");
HAnimSegment845.name = "l_carpal_distal_phalanx_3";
HAnimSegment845.DEF = "Joe_l_carpal_distal_phalanx_3";
Shape Shape846 = createNode("Shape");
Appearance Appearance847 = createNode("Appearance");
Appearance847.USE = "SegmentLine";
Shape846.appearance = Appearance847;

IndexedLineSet IndexedLineSet848 = createNode("IndexedLineSet");
IndexedLineSet848.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate849 = createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
IndexedLineSet848.coord = Coordinate849;

Shape846.geometry = IndexedLineSet848;

HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = Shape846;

HAnimSite HAnimSite850 = createNode("HAnimSite");
HAnimSite850.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite850.DEF = "Joe_l_carpal_distal_phalanx_3_tip";
HAnimSite850.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
Shape Shape851 = createNode("Shape");
Shape851.USE = "sitebox";
HAnimSite850.children = new MFNode();

HAnimSite850.children[0] = Shape851;

HAnimSegment845.children[1] = HAnimSite850;

Transform Transform852 = createNode("Transform");
Transform852.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape853 = createNode("Shape");
Shape853.USE = "jointbox";
Transform852.child = new undefined();

Transform852.child[0] = Shape853;

HAnimSegment845.children[2] = Transform852;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

HAnimJoint836.children[1] = HAnimJoint844;

HAnimJoint828.children[1] = HAnimJoint836;

HAnimJoint820.children[1] = HAnimJoint828;

HAnimJoint744.children[3] = HAnimJoint820;

HAnimJoint HAnimJoint854 = createNode("HAnimJoint");
HAnimJoint854.name = "l_carpometacarpal_4";
HAnimJoint854.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint854.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint854.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint854.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment855 = createNode("HAnimSegment");
HAnimSegment855.name = "l_metacarpal_4";
HAnimSegment855.DEF = "Joe_l_metacarpal_4";
Shape Shape856 = createNode("Shape");
Appearance Appearance857 = createNode("Appearance");
Appearance857.USE = "SegmentLine";
Shape856.appearance = Appearance857;

IndexedLineSet IndexedLineSet858 = createNode("IndexedLineSet");
IndexedLineSet858.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate859 = createNode("Coordinate");
Coordinate859.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
IndexedLineSet858.coord = Coordinate859;

Shape856.geometry = IndexedLineSet858;

HAnimSegment855.children = new MFNode();

HAnimSegment855.children[0] = Shape856;

Transform Transform860 = createNode("Transform");
Transform860.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape861 = createNode("Shape");
Shape861.USE = "jointbox";
Transform860.child = new undefined();

Transform860.child[0] = Shape861;

HAnimSegment855.children[1] = Transform860;

HAnimJoint854.children = new MFNode();

HAnimJoint854.children[0] = HAnimSegment855;

HAnimJoint HAnimJoint862 = createNode("HAnimJoint");
HAnimJoint862.name = "l_metacarpophalangeal_4";
HAnimJoint862.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint862.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint862.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint862.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment863 = createNode("HAnimSegment");
HAnimSegment863.name = "l_carpal_proximal_phalanx_4";
HAnimSegment863.DEF = "Joe_l_carpal_proximal_phalanx_4";
Shape Shape864 = createNode("Shape");
Appearance Appearance865 = createNode("Appearance");
Appearance865.USE = "SegmentLine";
Shape864.appearance = Appearance865;

IndexedLineSet IndexedLineSet866 = createNode("IndexedLineSet");
IndexedLineSet866.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate867 = createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
IndexedLineSet866.coord = Coordinate867;

Shape864.geometry = IndexedLineSet866;

HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = Shape864;

Transform Transform868 = createNode("Transform");
Transform868.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape869 = createNode("Shape");
Shape869.USE = "jointbox";
Transform868.child = new undefined();

Transform868.child[0] = Shape869;

HAnimSegment863.children[1] = Transform868;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

HAnimJoint HAnimJoint870 = createNode("HAnimJoint");
HAnimJoint870.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint870.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint870.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint870.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint870.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment871 = createNode("HAnimSegment");
HAnimSegment871.name = "l_carpal_middle_phalanx_4";
HAnimSegment871.DEF = "Joe_l_carpal_middle_phalanx_4";
Shape Shape872 = createNode("Shape");
Appearance Appearance873 = createNode("Appearance");
Appearance873.USE = "SegmentLine";
Shape872.appearance = Appearance873;

IndexedLineSet IndexedLineSet874 = createNode("IndexedLineSet");
IndexedLineSet874.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate875 = createNode("Coordinate");
Coordinate875.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
IndexedLineSet874.coord = Coordinate875;

Shape872.geometry = IndexedLineSet874;

HAnimSegment871.children = new MFNode();

HAnimSegment871.children[0] = Shape872;

Transform Transform876 = createNode("Transform");
Transform876.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape877 = createNode("Shape");
Shape877.USE = "jointbox";
Transform876.child = new undefined();

Transform876.child[0] = Shape877;

HAnimSegment871.children[1] = Transform876;

HAnimJoint870.children = new MFNode();

HAnimJoint870.children[0] = HAnimSegment871;

HAnimJoint HAnimJoint878 = createNode("HAnimJoint");
HAnimJoint878.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint878.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint878.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint878.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint878.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment879 = createNode("HAnimSegment");
HAnimSegment879.name = "l_carpal_distal_phalanx_4";
HAnimSegment879.DEF = "Joe_l_carpal_distal_phalanx_4";
Shape Shape880 = createNode("Shape");
Appearance Appearance881 = createNode("Appearance");
Appearance881.USE = "SegmentLine";
Shape880.appearance = Appearance881;

IndexedLineSet IndexedLineSet882 = createNode("IndexedLineSet");
IndexedLineSet882.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate883 = createNode("Coordinate");
Coordinate883.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
IndexedLineSet882.coord = Coordinate883;

Shape880.geometry = IndexedLineSet882;

HAnimSegment879.children = new MFNode();

HAnimSegment879.children[0] = Shape880;

Transform Transform884 = createNode("Transform");
Transform884.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape885 = createNode("Shape");
Shape885.USE = "jointbox";
Transform884.child = new undefined();

Transform884.child[0] = Shape885;

HAnimSegment879.children[1] = Transform884;

HAnimSite HAnimSite886 = createNode("HAnimSite");
HAnimSite886.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite886.DEF = "Joe_l_carpal_distal_phalanx_4_tip";
HAnimSite886.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
Shape Shape887 = createNode("Shape");
Shape887.USE = "sitebox";
HAnimSite886.children = new MFNode();

HAnimSite886.children[0] = Shape887;

HAnimSegment879.children[2] = HAnimSite886;

HAnimJoint878.children = new MFNode();

HAnimJoint878.children[0] = HAnimSegment879;

HAnimJoint870.children[1] = HAnimJoint878;

HAnimJoint862.children[1] = HAnimJoint870;

HAnimJoint854.children[1] = HAnimJoint862;

HAnimJoint744.children[4] = HAnimJoint854;

HAnimJoint HAnimJoint888 = createNode("HAnimJoint");
HAnimJoint888.name = "l_carpometacarpal_5";
HAnimJoint888.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint888.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint888.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint888.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimSegment HAnimSegment889 = createNode("HAnimSegment");
HAnimSegment889.name = "l_metacarpal_5";
HAnimSegment889.DEF = "Joe_l_metacarpal_5";
Shape Shape890 = createNode("Shape");
Appearance Appearance891 = createNode("Appearance");
Appearance891.USE = "SegmentLine";
Shape890.appearance = Appearance891;

IndexedLineSet IndexedLineSet892 = createNode("IndexedLineSet");
IndexedLineSet892.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate893 = createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
IndexedLineSet892.coord = Coordinate893;

Shape890.geometry = IndexedLineSet892;

HAnimSegment889.children = new MFNode();

HAnimSegment889.children[0] = Shape890;

Transform Transform894 = createNode("Transform");
Transform894.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape895 = createNode("Shape");
Shape895.USE = "jointbox";
Transform894.child = new undefined();

Transform894.child[0] = Shape895;

HAnimSegment889.children[1] = Transform894;

HAnimJoint888.children = new MFNode();

HAnimJoint888.children[0] = HAnimSegment889;

HAnimJoint HAnimJoint896 = createNode("HAnimJoint");
HAnimJoint896.name = "l_metacarpophalangeal_5";
HAnimJoint896.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint896.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint896.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint896.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment897 = createNode("HAnimSegment");
HAnimSegment897.name = "l_carpal_proximal_phalanx_5";
HAnimSegment897.DEF = "Joe_l_carpal_proximal_phalanx_5";
Shape Shape898 = createNode("Shape");
Appearance Appearance899 = createNode("Appearance");
Appearance899.USE = "SegmentLine";
Shape898.appearance = Appearance899;

IndexedLineSet IndexedLineSet900 = createNode("IndexedLineSet");
IndexedLineSet900.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate901 = createNode("Coordinate");
Coordinate901.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
IndexedLineSet900.coord = Coordinate901;

Shape898.geometry = IndexedLineSet900;

HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = Shape898;

Transform Transform902 = createNode("Transform");
Transform902.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape903 = createNode("Shape");
Shape903.USE = "jointbox";
Transform902.child = new undefined();

Transform902.child[0] = Shape903;

HAnimSegment897.children[1] = Transform902;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

HAnimJoint HAnimJoint904 = createNode("HAnimJoint");
HAnimJoint904.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint904.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint904.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint904.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint904.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment905 = createNode("HAnimSegment");
HAnimSegment905.name = "l_carpal_middle_phalanx_5";
HAnimSegment905.DEF = "Joe_l_carpal_middle_phalanx_5";
Transform Transform906 = createNode("Transform");
Transform906.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape907 = createNode("Shape");
Shape907.USE = "jointbox";
Transform906.child = new undefined();

Transform906.child[0] = Shape907;

HAnimSegment905.children = new MFNode();

HAnimSegment905.children[0] = Transform906;

Shape Shape908 = createNode("Shape");
Appearance Appearance909 = createNode("Appearance");
Appearance909.USE = "SegmentLine";
Shape908.appearance = Appearance909;

IndexedLineSet IndexedLineSet910 = createNode("IndexedLineSet");
IndexedLineSet910.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate911 = createNode("Coordinate");
Coordinate911.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
IndexedLineSet910.coord = Coordinate911;

Shape908.geometry = IndexedLineSet910;

HAnimSegment905.children[1] = Shape908;

HAnimJoint904.children = new MFNode();

HAnimJoint904.children[0] = HAnimSegment905;

HAnimJoint HAnimJoint912 = createNode("HAnimJoint");
HAnimJoint912.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint912.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint912.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint912.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint912.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment913 = createNode("HAnimSegment");
HAnimSegment913.name = "l_carpal_distal_phalanx_5";
HAnimSegment913.DEF = "Joe_l_carpal_distal_phalanx_5";
Shape Shape914 = createNode("Shape");
Appearance Appearance915 = createNode("Appearance");
Appearance915.USE = "SegmentLine";
Shape914.appearance = Appearance915;

IndexedLineSet IndexedLineSet916 = createNode("IndexedLineSet");
IndexedLineSet916.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate917 = createNode("Coordinate");
Coordinate917.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
IndexedLineSet916.coord = Coordinate917;

Shape914.geometry = IndexedLineSet916;

HAnimSegment913.children = new MFNode();

HAnimSegment913.children[0] = Shape914;

Transform Transform918 = createNode("Transform");
Transform918.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape919 = createNode("Shape");
Shape919.USE = "jointbox";
Transform918.child = new undefined();

Transform918.child[0] = Shape919;

HAnimSegment913.children[1] = Transform918;

HAnimSite HAnimSite920 = createNode("HAnimSite");
HAnimSite920.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite920.DEF = "Joe_l_carpal_distal_phalanx_5_tip";
HAnimSite920.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
Shape Shape921 = createNode("Shape");
Shape921.USE = "sitebox";
HAnimSite920.children = new MFNode();

HAnimSite920.children[0] = Shape921;

HAnimSegment913.children[2] = HAnimSite920;

HAnimJoint912.children = new MFNode();

HAnimJoint912.children[0] = HAnimSegment913;

HAnimJoint904.children[1] = HAnimJoint912;

HAnimJoint896.children[1] = HAnimJoint904;

HAnimJoint888.children[1] = HAnimJoint896;

HAnimJoint744.children[5] = HAnimJoint888;

HAnimJoint722.children[1] = HAnimJoint744;

HAnimJoint698.children[1] = HAnimJoint722;

HAnimJoint682.children[1] = HAnimJoint698;

HAnimJoint672.children[1] = HAnimJoint682;

HAnimJoint556.children[2] = HAnimJoint672;

HAnimJoint HAnimJoint922 = createNode("HAnimJoint");
HAnimJoint922.name = "r_sternoclavicular";
HAnimJoint922.DEF = "Joe_r_sternoclavicular";
HAnimJoint922.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint922.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint922.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment923 = createNode("HAnimSegment");
HAnimSegment923.name = "r_clavicle";
HAnimSegment923.DEF = "Joe_r_clavicle";
Shape Shape924 = createNode("Shape");
Appearance Appearance925 = createNode("Appearance");
Appearance925.USE = "SegmentLine";
Shape924.appearance = Appearance925;

IndexedLineSet IndexedLineSet926 = createNode("IndexedLineSet");
IndexedLineSet926.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate927 = createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[-0.03,1.46,0.02,-0.09,1.41,-0.09]);
IndexedLineSet926.coord = Coordinate927;

Shape924.geometry = IndexedLineSet926;

HAnimSegment923.children = new MFNode();

HAnimSegment923.children[0] = Shape924;

Transform Transform928 = createNode("Transform");
Transform928.translation = new SFVec3f(new float[-0.03,1.46,0.02]);
Shape Shape929 = createNode("Shape");
Shape929.USE = "jointbox";
Transform928.child = new undefined();

Transform928.child[0] = Shape929;

HAnimSegment923.children[1] = Transform928;

HAnimSite HAnimSite930 = createNode("HAnimSite");
HAnimSite930.name = "r_clavicle_pt";
HAnimSite930.DEF = "Joe_r_clavicle_pt";
HAnimSite930.translation = new SFVec3f(new float[-0.03,1.46,0.035]);
Shape Shape931 = createNode("Shape");
Shape931.USE = "sitebox";
HAnimSite930.children = new MFNode();

HAnimSite930.children[0] = Shape931;

HAnimSegment923.children[2] = HAnimSite930;

HAnimJoint922.children = new MFNode();

HAnimJoint922.children[0] = HAnimSegment923;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.name = "r_acromioclavicular";
HAnimJoint932.DEF = "Joe_r_acromioclavicular";
HAnimJoint932.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint932.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint932.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.name = "r_scapula";
HAnimSegment933.DEF = "Joe_r_scapula";
Shape Shape934 = createNode("Shape");
Appearance Appearance935 = createNode("Appearance");
Appearance935.USE = "SegmentLine";
Shape934.appearance = Appearance935;

IndexedLineSet IndexedLineSet936 = createNode("IndexedLineSet");
IndexedLineSet936.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate937 = createNode("Coordinate");
Coordinate937.point = new MFVec3f(new float[-0.09,1.41,-0.09,-0.2,1.44,-0.04]);
IndexedLineSet936.coord = Coordinate937;

Shape934.geometry = IndexedLineSet936;

HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = Shape934;

Transform Transform938 = createNode("Transform");
Transform938.translation = new SFVec3f(new float[-0.09,1.41,-0.09]);
Shape Shape939 = createNode("Shape");
Shape939.USE = "jointbox";
Transform938.child = new undefined();

Transform938.child[0] = Shape939;

HAnimSegment933.children[1] = Transform938;

Transform Transform940 = createNode("Transform");
Transform940.translation = new SFVec3f(new float[-0.11,1.427,-0.1375]);
Shape Shape941 = createNode("Shape");
Shape941.USE = "skinsphere";
Transform940.child = new undefined();

Transform940.child[0] = Shape941;

HAnimSegment933.children[2] = Transform940;

HAnimSite HAnimSite942 = createNode("HAnimSite");
HAnimSite942.name = "r_acromion_pt";
HAnimSite942.DEF = "Joe_r_acromion_pt";
HAnimSite942.translation = new SFVec3f(new float[-0.178,1.4825,-0.0625]);
Shape Shape943 = createNode("Shape");
Shape943.USE = "sitebox";
HAnimSite942.children = new MFNode();

HAnimSite942.children[0] = Shape943;

HAnimSegment933.children[3] = HAnimSite942;

HAnimSite HAnimSite944 = createNode("HAnimSite");
HAnimSite944.name = "r_axilla_proximal_pt";
HAnimSite944.DEF = "Joe_r_axilla_proximal_pt";
HAnimSite944.translation = new SFVec3f(new float[-0.17,1.38,0.007]);
Shape Shape945 = createNode("Shape");
Shape945.USE = "sitebox";
HAnimSite944.children = new MFNode();

HAnimSite944.children[0] = Shape945;

HAnimSegment933.children[4] = HAnimSite944;

HAnimSite HAnimSite946 = createNode("HAnimSite");
HAnimSite946.name = "r_axilla_distal_pt";
HAnimSite946.DEF = "Joe_r_axilla_distal_pt";
HAnimSite946.translation = new SFVec3f(new float[-0.16,1.38,-0.127]);
Shape Shape947 = createNode("Shape");
Shape947.USE = "sitebox";
HAnimSite946.children = new MFNode();

HAnimSite946.children[0] = Shape947;

HAnimSegment933.children[5] = HAnimSite946;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint948 = createNode("HAnimJoint");
HAnimJoint948.name = "r_shoulder";
HAnimJoint948.DEF = "Joe_r_shoulder";
HAnimJoint948.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint948.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint948.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment HAnimSegment949 = createNode("HAnimSegment");
HAnimSegment949.name = "r_upperarm";
HAnimSegment949.DEF = "Joe_r_upperarm";
Transform Transform950 = createNode("Transform");
Transform950.translation = new SFVec3f(new float[-0.2,1.44,-0.04]);
Shape Shape951 = createNode("Shape");
Shape951.USE = "jointbox";
Transform950.child = new undefined();

Transform950.child[0] = Shape951;

HAnimSegment949.children = new MFNode();

HAnimSegment949.children[0] = Transform950;

Shape Shape952 = createNode("Shape");
Appearance Appearance953 = createNode("Appearance");
Appearance953.USE = "SegmentLine";
Shape952.appearance = Appearance953;

IndexedLineSet IndexedLineSet954 = createNode("IndexedLineSet");
IndexedLineSet954.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate955 = createNode("Coordinate");
Coordinate955.point = new MFVec3f(new float[-0.2,1.44,-0.04,-0.2,1.1388,-0.04]);
IndexedLineSet954.coord = Coordinate955;

Shape952.geometry = IndexedLineSet954;

HAnimSegment949.children[1] = Shape952;

Transform Transform956 = createNode("Transform");
Transform956.translation = new SFVec3f(new float[-0.178,1.4825,-0.0625]);
Shape Shape957 = createNode("Shape");
Shape957.USE = "skinsphere";
Transform956.child = new undefined();

Transform956.child[0] = Shape957;

HAnimSegment949.children[2] = Transform956;

Transform Transform958 = createNode("Transform");
Transform958.translation = new SFVec3f(new float[-0.17,1.38,0.007]);
Shape Shape959 = createNode("Shape");
Shape959.USE = "skinsphere";
Transform958.child = new undefined();

Transform958.child[0] = Shape959;

HAnimSegment949.children[3] = Transform958;

Transform Transform960 = createNode("Transform");
Transform960.translation = new SFVec3f(new float[-0.16,1.38,-0.127]);
Shape Shape961 = createNode("Shape");
Shape961.USE = "skinsphere";
Transform960.child = new undefined();

Transform960.child[0] = Shape961;

HAnimSegment949.children[4] = Transform960;

Transform Transform962 = createNode("Transform");
Transform962.translation = new SFVec3f(new float[-0.235,1.42,-0.0625]);
Shape Shape963 = createNode("Shape");
Shape963.USE = "skinsphere";
Transform962.child = new undefined();

Transform962.child[0] = Shape963;

HAnimSegment949.children[5] = Transform962;

Transform Transform964 = createNode("Transform");
Transform964.translation = new SFVec3f(new float[-0.23,1.235,-0.04]);
Shape Shape965 = createNode("Shape");
Shape965.USE = "skinsphere";
Transform964.child = new undefined();

Transform964.child[0] = Shape965;

HAnimSegment949.children[6] = Transform964;

Transform Transform966 = createNode("Transform");
Transform966.translation = new SFVec3f(new float[-0.16,1.23,-0.04]);
Shape Shape967 = createNode("Shape");
Shape967.USE = "skinsphere";
Transform966.child = new undefined();

Transform966.child[0] = Shape967;

HAnimSegment949.children[7] = Transform966;

Transform Transform968 = createNode("Transform");
Transform968.translation = new SFVec3f(new float[-0.2,1.23,-0.105]);
Shape Shape969 = createNode("Shape");
Shape969.USE = "skinsphere";
Transform968.child = new undefined();

Transform968.child[0] = Shape969;

HAnimSegment949.children[8] = Transform968;

Transform Transform970 = createNode("Transform");
Transform970.translation = new SFVec3f(new float[-0.2,1.235,0.02]);
Shape Shape971 = createNode("Shape");
Shape971.USE = "skinsphere";
Transform970.child = new undefined();

Transform970.child[0] = Shape971;

HAnimSegment949.children[9] = Transform970;

HAnimSite HAnimSite972 = createNode("HAnimSite");
HAnimSite972.name = "r_humeral_medial_epicondyle_pt";
HAnimSite972.DEF = "Joe_r_humeral_medial_epicondyle_pt";
HAnimSite972.translation = new SFVec3f(new float[-0.165,1.1388,-0.04]);
Shape Shape973 = createNode("Shape");
Shape973.USE = "sitebox";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = Shape973;

HAnimSegment949.children[10] = HAnimSite972;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.name = "r_radiale_pt";
HAnimSite974.DEF = "Joe_r_radiale_pt";
HAnimSite974.translation = new SFVec3f(new float[-0.23,1.133,-0.055]);
Shape Shape975 = createNode("Shape");
Shape975.USE = "sitebox";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = Shape975;

HAnimSegment949.children[11] = HAnimSite974;

HAnimSite HAnimSite976 = createNode("HAnimSite");
HAnimSite976.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite976.DEF = "Joe_r_humeral_lateral_epicondyle_pt";
HAnimSite976.translation = new SFVec3f(new float[-0.244,1.1388,-0.04]);
Shape Shape977 = createNode("Shape");
Shape977.USE = "sitebox";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = Shape977;

HAnimSegment949.children[12] = HAnimSite976;

HAnimJoint948.children = new MFNode();

HAnimJoint948.children[0] = HAnimSegment949;

HAnimJoint HAnimJoint978 = createNode("HAnimJoint");
HAnimJoint978.name = "r_elbow";
HAnimJoint978.DEF = "Joe_r_elbow";
HAnimJoint978.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint978.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint978.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.name = "r_forearm";
HAnimSegment979.DEF = "Joe_r_forearm";
Shape Shape980 = createNode("Shape");
Appearance Appearance981 = createNode("Appearance");
Appearance981.USE = "SegmentLine";
Shape980.appearance = Appearance981;

IndexedLineSet IndexedLineSet982 = createNode("IndexedLineSet");
IndexedLineSet982.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate983 = createNode("Coordinate");
Coordinate983.point = new MFVec3f(new float[-0.2,1.1388,-0.04,-0.2,0.89,-0.04]);
IndexedLineSet982.coord = Coordinate983;

Shape980.geometry = IndexedLineSet982;

HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = Shape980;

Transform Transform984 = createNode("Transform");
Transform984.translation = new SFVec3f(new float[-0.2,1.1388,-0.04]);
Shape Shape985 = createNode("Shape");
Shape985.USE = "jointbox";
Transform984.child = new undefined();

Transform984.child[0] = Shape985;

HAnimSegment979.children[1] = Transform984;

Transform Transform986 = createNode("Transform");
Transform986.translation = new SFVec3f(new float[-0.2,1.1388,0.013]);
Shape Shape987 = createNode("Shape");
Shape987.USE = "skinsphere";
Transform986.child = new undefined();

Transform986.child[0] = Shape987;

HAnimSegment979.children[2] = Transform986;

Transform Transform988 = createNode("Transform");
Transform988.translation = new SFVec3f(new float[-0.225,1,-0.01]);
Shape Shape989 = createNode("Shape");
Shape989.USE = "skinsphere";
Transform988.child = new undefined();

Transform988.child[0] = Shape989;

HAnimSegment979.children[3] = Transform988;

Transform Transform990 = createNode("Transform");
Transform990.translation = new SFVec3f(new float[-0.225,1,-0.07]);
Shape Shape991 = createNode("Shape");
Shape991.USE = "skinsphere";
Transform990.child = new undefined();

Transform990.child[0] = Shape991;

HAnimSegment979.children[4] = Transform990;

Transform Transform992 = createNode("Transform");
Transform992.translation = new SFVec3f(new float[-0.185,1,-0.01]);
Shape Shape993 = createNode("Shape");
Shape993.USE = "skinsphere";
Transform992.child = new undefined();

Transform992.child[0] = Shape993;

HAnimSegment979.children[5] = Transform992;

Transform Transform994 = createNode("Transform");
Transform994.translation = new SFVec3f(new float[-0.185,1,-0.07]);
Shape Shape995 = createNode("Shape");
Shape995.USE = "skinsphere";
Transform994.child = new undefined();

Transform994.child[0] = Shape995;

HAnimSegment979.children[6] = Transform994;

HAnimSite HAnimSite996 = createNode("HAnimSite");
HAnimSite996.name = "r_radial_styloid_pt";
HAnimSite996.DEF = "Joe_r_radial_styloid_pt";
HAnimSite996.translation = new SFVec3f(new float[-0.2,0.9,-0.015]);
Shape Shape997 = createNode("Shape");
Shape997.USE = "sitebox";
HAnimSite996.children = new MFNode();

HAnimSite996.children[0] = Shape997;

HAnimSegment979.children[7] = HAnimSite996;

HAnimSite HAnimSite998 = createNode("HAnimSite");
HAnimSite998.name = "r_olecranon_pt";
HAnimSite998.DEF = "Joe_r_olecranon_pt";
HAnimSite998.translation = new SFVec3f(new float[-0.2,1.1388,-0.08]);
Shape Shape999 = createNode("Shape");
Shape999.USE = "sitebox";
HAnimSite998.children = new MFNode();

HAnimSite998.children[0] = Shape999;

HAnimSegment979.children[8] = HAnimSite998;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

HAnimJoint HAnimJoint1000 = createNode("HAnimJoint");
HAnimJoint1000.name = "r_radiocarpal";
HAnimJoint1000.DEF = "Joe_r_radiocarpal";
HAnimJoint1000.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint1000.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint1000.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1001 = createNode("HAnimSegment");
HAnimSegment1001.name = "r_carpal";
HAnimSegment1001.DEF = "Joe_r_carpal";
Shape Shape1002 = createNode("Shape");
Appearance Appearance1003 = createNode("Appearance");
Appearance1003.USE = "SegmentLine";
Shape1002.appearance = Appearance1003;

IndexedLineSet IndexedLineSet1004 = createNode("IndexedLineSet");
IndexedLineSet1004.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate1005 = createNode("Coordinate");
Coordinate1005.point = new MFVec3f(new float[-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]);
IndexedLineSet1004.coord = Coordinate1005;

Shape1002.geometry = IndexedLineSet1004;

HAnimSegment1001.children = new MFNode();

HAnimSegment1001.children[0] = Shape1002;

Transform Transform1006 = createNode("Transform");
Transform1006.translation = new SFVec3f(new float[-0.2,0.89,-0.04]);
Shape Shape1007 = createNode("Shape");
Shape1007.USE = "jointbox";
Transform1006.child = new undefined();

Transform1006.child[0] = Shape1007;

HAnimSegment1001.children[1] = Transform1006;

HAnimSite HAnimSite1008 = createNode("HAnimSite");
HAnimSite1008.name = "r_ulnar_styloid_pt";
HAnimSite1008.DEF = "Joe_r_ulnar_styloid_pt";
HAnimSite1008.translation = new SFVec3f(new float[-0.2,0.9,-0.085]);
Shape Shape1009 = createNode("Shape");
Shape1009.USE = "sitebox";
HAnimSite1008.children = new MFNode();

HAnimSite1008.children[0] = Shape1009;

HAnimSegment1001.children[2] = HAnimSite1008;

HAnimJoint1000.children = new MFNode();

HAnimJoint1000.children[0] = HAnimSegment1001;

HAnimJoint HAnimJoint1010 = createNode("HAnimJoint");
HAnimJoint1010.name = "r_carpometacarpal_1";
HAnimJoint1010.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint1010.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint1010.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint1010.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1011 = createNode("HAnimSegment");
HAnimSegment1011.name = "r_metacarpal_1";
HAnimSegment1011.DEF = "Joe_r_metacarpal_1";
Shape Shape1012 = createNode("Shape");
Appearance Appearance1013 = createNode("Appearance");
Appearance1013.USE = "SegmentLine";
Shape1012.appearance = Appearance1013;

IndexedLineSet IndexedLineSet1014 = createNode("IndexedLineSet");
IndexedLineSet1014.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[-0.2,0.85,0,-0.2,0.82,0.03]);
IndexedLineSet1014.coord = Coordinate1015;

Shape1012.geometry = IndexedLineSet1014;

HAnimSegment1011.children = new MFNode();

HAnimSegment1011.children[0] = Shape1012;

Transform Transform1016 = createNode("Transform");
Transform1016.translation = new SFVec3f(new float[-0.2,0.85,0]);
Shape Shape1017 = createNode("Shape");
Shape1017.USE = "jointbox";
Transform1016.child = new undefined();

Transform1016.child[0] = Shape1017;

HAnimSegment1011.children[1] = Transform1016;

HAnimJoint1010.children = new MFNode();

HAnimJoint1010.children[0] = HAnimSegment1011;

HAnimJoint HAnimJoint1018 = createNode("HAnimJoint");
HAnimJoint1018.name = "r_metacarpophalangeal_1";
HAnimJoint1018.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint1018.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint1018.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint1018.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimSegment HAnimSegment1019 = createNode("HAnimSegment");
HAnimSegment1019.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1019.DEF = "Joe_r_carpal_proximal_phalanx_1";
Shape Shape1020 = createNode("Shape");
Appearance Appearance1021 = createNode("Appearance");
Appearance1021.USE = "SegmentLine";
Shape1020.appearance = Appearance1021;

IndexedLineSet IndexedLineSet1022 = createNode("IndexedLineSet");
IndexedLineSet1022.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[-0.2,0.82,0.03,-0.2,0.8,0.05]);
IndexedLineSet1022.coord = Coordinate1023;

Shape1020.geometry = IndexedLineSet1022;

HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = Shape1020;

Transform Transform1024 = createNode("Transform");
Transform1024.translation = new SFVec3f(new float[-0.2,0.82,0.03]);
Shape Shape1025 = createNode("Shape");
Shape1025.USE = "jointbox";
Transform1024.child = new undefined();

Transform1024.child[0] = Shape1025;

HAnimSegment1019.children[1] = Transform1024;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

HAnimJoint HAnimJoint1026 = createNode("HAnimJoint");
HAnimJoint1026.name = "r_carpal_interphalangeal_1";
HAnimJoint1026.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint1026.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint1026.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint1026.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1027 = createNode("HAnimSegment");
HAnimSegment1027.name = "r_carpal_distal_phalanx_1";
HAnimSegment1027.DEF = "Joe_r_carpal_distal_phalanx_1";
Shape Shape1028 = createNode("Shape");
Appearance Appearance1029 = createNode("Appearance");
Appearance1029.USE = "SegmentLine";
Shape1028.appearance = Appearance1029;

IndexedLineSet IndexedLineSet1030 = createNode("IndexedLineSet");
IndexedLineSet1030.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1031 = createNode("Coordinate");
Coordinate1031.point = new MFVec3f(new float[-0.2,0.8,0.05,-0.2,0.78,0.07]);
IndexedLineSet1030.coord = Coordinate1031;

Shape1028.geometry = IndexedLineSet1030;

HAnimSegment1027.children = new MFNode();

HAnimSegment1027.children[0] = Shape1028;

Transform Transform1032 = createNode("Transform");
Transform1032.DEF = "Thumbnail";
Transform1032.translation = new SFVec3f(new float[-0.2,0.785,0.075]);
Shape Shape1033 = createNode("Shape");
Shape1033.USE = "skinsphere";
Transform1032.child = new undefined();

Transform1032.child[0] = Shape1033;

HAnimSegment1027.children[1] = Transform1032;

Transform Transform1034 = createNode("Transform");
Transform1034.translation = new SFVec3f(new float[-0.2,0.8,0.05]);
Shape Shape1035 = createNode("Shape");
Shape1035.USE = "jointbox";
Transform1034.child = new undefined();

Transform1034.child[0] = Shape1035;

HAnimSegment1027.children[2] = Transform1034;

HAnimSite HAnimSite1036 = createNode("HAnimSite");
HAnimSite1036.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1036.DEF = "Joe_r_carpal_distal_phalanx_1_tip";
HAnimSite1036.translation = new SFVec3f(new float[-0.2,0.78,0.07]);
Shape Shape1037 = createNode("Shape");
Shape1037.USE = "sitebox";
HAnimSite1036.children = new MFNode();

HAnimSite1036.children[0] = Shape1037;

HAnimSegment1027.children[3] = HAnimSite1036;

HAnimJoint1026.children = new MFNode();

HAnimJoint1026.children[0] = HAnimSegment1027;

HAnimJoint1018.children[1] = HAnimJoint1026;

HAnimJoint1010.children[1] = HAnimJoint1018;

HAnimJoint1000.children[1] = HAnimJoint1010;

HAnimJoint HAnimJoint1038 = createNode("HAnimJoint");
HAnimJoint1038.name = "r_carpometacarpal_2";
HAnimJoint1038.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint1038.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint1038.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint1038.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1039 = createNode("HAnimSegment");
HAnimSegment1039.name = "r_metacarpal_2";
HAnimSegment1039.DEF = "Joe_r_metacarpal_2";
Shape Shape1040 = createNode("Shape");
Appearance Appearance1041 = createNode("Appearance");
Appearance1041.USE = "SegmentLine";
Shape1040.appearance = Appearance1041;

IndexedLineSet IndexedLineSet1042 = createNode("IndexedLineSet");
IndexedLineSet1042.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1043 = createNode("Coordinate");
Coordinate1043.point = new MFVec3f(new float[-0.2,0.84,-0.015,-0.2,0.793,-0.015]);
IndexedLineSet1042.coord = Coordinate1043;

Shape1040.geometry = IndexedLineSet1042;

HAnimSegment1039.children = new MFNode();

HAnimSegment1039.children[0] = Shape1040;

Transform Transform1044 = createNode("Transform");
Transform1044.translation = new SFVec3f(new float[-0.2,0.84,-0.015]);
Shape Shape1045 = createNode("Shape");
Shape1045.USE = "jointbox";
Transform1044.child = new undefined();

Transform1044.child[0] = Shape1045;

HAnimSegment1039.children[1] = Transform1044;

HAnimSite HAnimSite1046 = createNode("HAnimSite");
HAnimSite1046.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1046.DEF = "Joe_r_metacarpal_phalanx_2_pt";
HAnimSite1046.translation = new SFVec3f(new float[-0.2,0.793,-0.005]);
Shape Shape1047 = createNode("Shape");
Shape1047.USE = "sitebox";
HAnimSite1046.children = new MFNode();

HAnimSite1046.children[0] = Shape1047;

HAnimSegment1039.children[2] = HAnimSite1046;

HAnimJoint1038.children = new MFNode();

HAnimJoint1038.children[0] = HAnimSegment1039;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.name = "r_metacarpophalangeal_2";
HAnimJoint1048.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint1048.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint1048.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint1048.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment HAnimSegment1049 = createNode("HAnimSegment");
HAnimSegment1049.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1049.DEF = "Joe_r_carpal_proximal_phalanx_2";
Shape Shape1050 = createNode("Shape");
Appearance Appearance1051 = createNode("Appearance");
Appearance1051.USE = "SegmentLine";
Shape1050.appearance = Appearance1051;

IndexedLineSet IndexedLineSet1052 = createNode("IndexedLineSet");
IndexedLineSet1052.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1053 = createNode("Coordinate");
Coordinate1053.point = new MFVec3f(new float[-0.2,0.793,-0.015,-0.2,0.745,-0.015]);
IndexedLineSet1052.coord = Coordinate1053;

Shape1050.geometry = IndexedLineSet1052;

HAnimSegment1049.children = new MFNode();

HAnimSegment1049.children[0] = Shape1050;

Transform Transform1054 = createNode("Transform");
Transform1054.translation = new SFVec3f(new float[-0.2,0.793,-0.015]);
Shape Shape1055 = createNode("Shape");
Shape1055.USE = "jointbox";
Transform1054.child = new undefined();

Transform1054.child[0] = Shape1055;

HAnimSegment1049.children[1] = Transform1054;

HAnimJoint1048.children = new MFNode();

HAnimJoint1048.children[0] = HAnimSegment1049;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1056.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint1056.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint1056.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint1056.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1057 = createNode("HAnimSegment");
HAnimSegment1057.name = "r_carpal_middle_phalanx_2";
HAnimSegment1057.DEF = "Joe_r_carpal_middle_phalanx_2";
Shape Shape1058 = createNode("Shape");
Appearance Appearance1059 = createNode("Appearance");
Appearance1059.USE = "SegmentLine";
Shape1058.appearance = Appearance1059;

IndexedLineSet IndexedLineSet1060 = createNode("IndexedLineSet");
IndexedLineSet1060.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1061 = createNode("Coordinate");
Coordinate1061.point = new MFVec3f(new float[-0.2,0.745,-0.015,-0.2,0.72,-0.015]);
IndexedLineSet1060.coord = Coordinate1061;

Shape1058.geometry = IndexedLineSet1060;

HAnimSegment1057.children = new MFNode();

HAnimSegment1057.children[0] = Shape1058;

Transform Transform1062 = createNode("Transform");
Transform1062.translation = new SFVec3f(new float[-0.2,0.745,-0.015]);
Shape Shape1063 = createNode("Shape");
Shape1063.USE = "jointbox";
Transform1062.child = new undefined();

Transform1062.child[0] = Shape1063;

HAnimSegment1057.children[1] = Transform1062;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = HAnimSegment1057;

HAnimJoint HAnimJoint1064 = createNode("HAnimJoint");
HAnimJoint1064.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1064.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint1064.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint1064.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint1064.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1065 = createNode("HAnimSegment");
HAnimSegment1065.name = "r_carpal_distal_phalanx_2";
HAnimSegment1065.DEF = "Joe_r_carpal_distal_phalanx_2";
Shape Shape1066 = createNode("Shape");
Appearance Appearance1067 = createNode("Appearance");
Appearance1067.USE = "SegmentLine";
Shape1066.appearance = Appearance1067;

IndexedLineSet IndexedLineSet1068 = createNode("IndexedLineSet");
IndexedLineSet1068.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1069 = createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[-0.2,0.72,-0.015,-0.2,0.695,-0.015]);
IndexedLineSet1068.coord = Coordinate1069;

Shape1066.geometry = IndexedLineSet1068;

HAnimSegment1065.children = new MFNode();

HAnimSegment1065.children[0] = Shape1066;

Transform Transform1070 = createNode("Transform");
Transform1070.translation = new SFVec3f(new float[-0.2,0.72,-0.015]);
Shape Shape1071 = createNode("Shape");
Shape1071.USE = "jointbox";
Transform1070.child = new undefined();

Transform1070.child[0] = Shape1071;

HAnimSegment1065.children[1] = Transform1070;

HAnimSite HAnimSite1072 = createNode("HAnimSite");
HAnimSite1072.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1072.DEF = "Joe_r_carpal_distal_phalanx_2_tip";
HAnimSite1072.translation = new SFVec3f(new float[-0.2,0.695,-0.015]);
Shape Shape1073 = createNode("Shape");
Shape1073.USE = "sitebox";
HAnimSite1072.children = new MFNode();

HAnimSite1072.children[0] = Shape1073;

HAnimSegment1065.children[2] = HAnimSite1072;

HAnimJoint1064.children = new MFNode();

HAnimJoint1064.children[0] = HAnimSegment1065;

HAnimJoint1056.children[1] = HAnimJoint1064;

HAnimJoint1048.children[1] = HAnimJoint1056;

HAnimJoint1038.children[1] = HAnimJoint1048;

HAnimJoint1000.children[2] = HAnimJoint1038;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpometacarpal_3";
HAnimJoint1074.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint1074.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint1074.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint1074.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1075 = createNode("HAnimSegment");
HAnimSegment1075.name = "r_metacarpal_3";
HAnimSegment1075.DEF = "Joe_r_metacarpal_3";
Shape Shape1076 = createNode("Shape");
Appearance Appearance1077 = createNode("Appearance");
Appearance1077.USE = "SegmentLine";
Shape1076.appearance = Appearance1077;

IndexedLineSet IndexedLineSet1078 = createNode("IndexedLineSet");
IndexedLineSet1078.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1079 = createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[-0.2,0.835,-0.04,-0.2,0.788,-0.04]);
IndexedLineSet1078.coord = Coordinate1079;

Shape1076.geometry = IndexedLineSet1078;

HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = Shape1076;

Transform Transform1080 = createNode("Transform");
Transform1080.translation = new SFVec3f(new float[-0.2,0.835,-0.04]);
Shape Shape1081 = createNode("Shape");
Shape1081.USE = "jointbox";
Transform1080.child = new undefined();

Transform1080.child[0] = Shape1081;

HAnimSegment1075.children[1] = Transform1080;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

HAnimJoint HAnimJoint1082 = createNode("HAnimJoint");
HAnimJoint1082.name = "r_metacarpophalangeal_3";
HAnimJoint1082.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint1082.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint1082.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint1082.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment1083 = createNode("HAnimSegment");
HAnimSegment1083.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1083.DEF = "Joe_r_carpal_proximal_phalanx_3";
Shape Shape1084 = createNode("Shape");
Appearance Appearance1085 = createNode("Appearance");
Appearance1085.USE = "SegmentLine";
Shape1084.appearance = Appearance1085;

IndexedLineSet IndexedLineSet1086 = createNode("IndexedLineSet");
IndexedLineSet1086.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1087 = createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[-0.2,0.788,-0.04,-0.2,0.74,-0.04]);
IndexedLineSet1086.coord = Coordinate1087;

Shape1084.geometry = IndexedLineSet1086;

HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = Shape1084;

Transform Transform1088 = createNode("Transform");
Transform1088.translation = new SFVec3f(new float[-0.2,0.788,-0.04]);
Shape Shape1089 = createNode("Shape");
Shape1089.USE = "jointbox";
Transform1088.child = new undefined();

Transform1088.child[0] = Shape1089;

HAnimSegment1083.children[1] = Transform1088;

HAnimJoint1082.children = new MFNode();

HAnimJoint1082.children[0] = HAnimSegment1083;

HAnimJoint HAnimJoint1090 = createNode("HAnimJoint");
HAnimJoint1090.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1090.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint1090.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint1090.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint1090.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1091 = createNode("HAnimSegment");
HAnimSegment1091.name = "r_carpal_middle_phalanx_3";
HAnimSegment1091.DEF = "Joe_r_carpal_middle_phalanx_3";
Shape Shape1092 = createNode("Shape");
Appearance Appearance1093 = createNode("Appearance");
Appearance1093.USE = "SegmentLine";
Shape1092.appearance = Appearance1093;

IndexedLineSet IndexedLineSet1094 = createNode("IndexedLineSet");
IndexedLineSet1094.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1095 = createNode("Coordinate");
Coordinate1095.point = new MFVec3f(new float[-0.2,0.74,-0.04,-0.2,0.7142,-0.04]);
IndexedLineSet1094.coord = Coordinate1095;

Shape1092.geometry = IndexedLineSet1094;

HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = Shape1092;

Transform Transform1096 = createNode("Transform");
Transform1096.translation = new SFVec3f(new float[-0.2,0.74,-0.04]);
Shape Shape1097 = createNode("Shape");
Shape1097.USE = "jointbox";
Transform1096.child = new undefined();

Transform1096.child[0] = Shape1097;

HAnimSegment1091.children[1] = Transform1096;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

HAnimJoint HAnimJoint1098 = createNode("HAnimJoint");
HAnimJoint1098.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1098.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint1098.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint1098.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint1098.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1099 = createNode("HAnimSegment");
HAnimSegment1099.name = "r_carpal_distal_phalanx_3";
HAnimSegment1099.DEF = "Joe_r_carpal_distal_phalanx_3";
Shape Shape1100 = createNode("Shape");
Appearance Appearance1101 = createNode("Appearance");
Appearance1101.USE = "SegmentLine";
Shape1100.appearance = Appearance1101;

IndexedLineSet IndexedLineSet1102 = createNode("IndexedLineSet");
IndexedLineSet1102.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1103 = createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]);
IndexedLineSet1102.coord = Coordinate1103;

Shape1100.geometry = IndexedLineSet1102;

HAnimSegment1099.children = new MFNode();

HAnimSegment1099.children[0] = Shape1100;

Transform Transform1104 = createNode("Transform");
Transform1104.translation = new SFVec3f(new float[-0.2,0.7142,-0.04]);
Shape Shape1105 = createNode("Shape");
Shape1105.USE = "jointbox";
Transform1104.child = new undefined();

Transform1104.child[0] = Shape1105;

HAnimSegment1099.children[1] = Transform1104;

HAnimSite HAnimSite1106 = createNode("HAnimSite");
HAnimSite1106.name = "r_dactylion_pt";
HAnimSite1106.DEF = "Joe_r_dactylion_pt";
HAnimSite1106.translation = new SFVec3f(new float[-0.2,0.68,-0.04]);
Shape Shape1107 = createNode("Shape");
Shape1107.USE = "sitebox";
HAnimSite1106.children = new MFNode();

HAnimSite1106.children[0] = Shape1107;

HAnimSegment1099.children[2] = HAnimSite1106;

HAnimSite HAnimSite1108 = createNode("HAnimSite");
HAnimSite1108.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1108.DEF = "Joe_r_carpal_distal_phalanx_3_tip";
HAnimSite1108.translation = new SFVec3f(new float[-0.2,0.68,-0.04]);
Shape Shape1109 = createNode("Shape");
Shape1109.USE = "sitebox";
HAnimSite1108.children = new MFNode();

HAnimSite1108.children[0] = Shape1109;

HAnimSegment1099.children[3] = HAnimSite1108;

HAnimJoint1098.children = new MFNode();

HAnimJoint1098.children[0] = HAnimSegment1099;

HAnimJoint1090.children[1] = HAnimJoint1098;

HAnimJoint1082.children[1] = HAnimJoint1090;

HAnimJoint1074.children[1] = HAnimJoint1082;

HAnimJoint1000.children[3] = HAnimJoint1074;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpometacarpal_4";
HAnimJoint1110.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint1110.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint1110.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint1110.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1111 = createNode("HAnimSegment");
HAnimSegment1111.name = "r_metacarpal_4";
HAnimSegment1111.DEF = "Joe_r_metacarpal_4";
Shape Shape1112 = createNode("Shape");
Appearance Appearance1113 = createNode("Appearance");
Appearance1113.USE = "SegmentLine";
Shape1112.appearance = Appearance1113;

IndexedLineSet IndexedLineSet1114 = createNode("IndexedLineSet");
IndexedLineSet1114.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1115 = createNode("Coordinate");
Coordinate1115.point = new MFVec3f(new float[-0.2,0.835,-0.065,-0.2,0.793,-0.065]);
IndexedLineSet1114.coord = Coordinate1115;

Shape1112.geometry = IndexedLineSet1114;

HAnimSegment1111.children = new MFNode();

HAnimSegment1111.children[0] = Shape1112;

Transform Transform1116 = createNode("Transform");
Transform1116.translation = new SFVec3f(new float[-0.2,0.835,-0.065]);
Shape Shape1117 = createNode("Shape");
Shape1117.USE = "jointbox";
Transform1116.child = new undefined();

Transform1116.child[0] = Shape1117;

HAnimSegment1111.children[1] = Transform1116;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = HAnimSegment1111;

HAnimJoint HAnimJoint1118 = createNode("HAnimJoint");
HAnimJoint1118.name = "r_metacarpophalangeal_4";
HAnimJoint1118.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint1118.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint1118.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint1118.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment1119 = createNode("HAnimSegment");
HAnimSegment1119.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1119.DEF = "Joe_r_carpal_proximal_phalanx_4";
Shape Shape1120 = createNode("Shape");
Appearance Appearance1121 = createNode("Appearance");
Appearance1121.USE = "SegmentLine";
Shape1120.appearance = Appearance1121;

IndexedLineSet IndexedLineSet1122 = createNode("IndexedLineSet");
IndexedLineSet1122.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1123 = createNode("Coordinate");
Coordinate1123.point = new MFVec3f(new float[-0.2,0.793,-0.065,-0.2,0.74,-0.065]);
IndexedLineSet1122.coord = Coordinate1123;

Shape1120.geometry = IndexedLineSet1122;

HAnimSegment1119.children = new MFNode();

HAnimSegment1119.children[0] = Shape1120;

Transform Transform1124 = createNode("Transform");
Transform1124.translation = new SFVec3f(new float[-0.2,0.793,-0.065]);
Shape Shape1125 = createNode("Shape");
Shape1125.USE = "jointbox";
Transform1124.child = new undefined();

Transform1124.child[0] = Shape1125;

HAnimSegment1119.children[1] = Transform1124;

HAnimJoint1118.children = new MFNode();

HAnimJoint1118.children[0] = HAnimSegment1119;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1126.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint1126.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint1126.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint1126.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1127 = createNode("HAnimSegment");
HAnimSegment1127.name = "r_carpal_middle_phalanx_4";
HAnimSegment1127.DEF = "Joe_r_carpal_middle_phalanx_4";
Shape Shape1128 = createNode("Shape");
Appearance Appearance1129 = createNode("Appearance");
Appearance1129.USE = "SegmentLine";
Shape1128.appearance = Appearance1129;

IndexedLineSet IndexedLineSet1130 = createNode("IndexedLineSet");
IndexedLineSet1130.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1131 = createNode("Coordinate");
Coordinate1131.point = new MFVec3f(new float[-0.2,0.74,-0.065,-0.2,0.7177,-0.065]);
IndexedLineSet1130.coord = Coordinate1131;

Shape1128.geometry = IndexedLineSet1130;

HAnimSegment1127.children = new MFNode();

HAnimSegment1127.children[0] = Shape1128;

Transform Transform1132 = createNode("Transform");
Transform1132.translation = new SFVec3f(new float[-0.2,0.74,-0.065]);
Shape Shape1133 = createNode("Shape");
Shape1133.USE = "jointbox";
Transform1132.child = new undefined();

Transform1132.child[0] = Shape1133;

HAnimSegment1127.children[1] = Transform1132;

HAnimJoint1126.children = new MFNode();

HAnimJoint1126.children[0] = HAnimSegment1127;

HAnimJoint HAnimJoint1134 = createNode("HAnimJoint");
HAnimJoint1134.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1134.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint1134.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint1134.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint1134.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1135 = createNode("HAnimSegment");
HAnimSegment1135.name = "r_carpal_distal_phalanx_4";
HAnimSegment1135.DEF = "Joe_r_carpal_distal_phalanx_4";
Shape Shape1136 = createNode("Shape");
Appearance Appearance1137 = createNode("Appearance");
Appearance1137.USE = "SegmentLine";
Shape1136.appearance = Appearance1137;

IndexedLineSet IndexedLineSet1138 = createNode("IndexedLineSet");
IndexedLineSet1138.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1139 = createNode("Coordinate");
Coordinate1139.point = new MFVec3f(new float[-0.2,0.7177,-0.065,-0.2,0.695,-0.065]);
IndexedLineSet1138.coord = Coordinate1139;

Shape1136.geometry = IndexedLineSet1138;

HAnimSegment1135.children = new MFNode();

HAnimSegment1135.children[0] = Shape1136;

Transform Transform1140 = createNode("Transform");
Transform1140.translation = new SFVec3f(new float[-0.2,0.7177,-0.065]);
Shape Shape1141 = createNode("Shape");
Shape1141.USE = "jointbox";
Transform1140.child = new undefined();

Transform1140.child[0] = Shape1141;

HAnimSegment1135.children[1] = Transform1140;

HAnimSite HAnimSite1142 = createNode("HAnimSite");
HAnimSite1142.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1142.DEF = "Joe_r_carpal_distal_phalanx_4_tip";
HAnimSite1142.translation = new SFVec3f(new float[-0.2,0.695,-0.065]);
Shape Shape1143 = createNode("Shape");
Shape1143.USE = "sitebox";
HAnimSite1142.children = new MFNode();

HAnimSite1142.children[0] = Shape1143;

HAnimSegment1135.children[2] = HAnimSite1142;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

HAnimJoint1126.children[1] = HAnimJoint1134;

HAnimJoint1118.children[1] = HAnimJoint1126;

HAnimJoint1110.children[1] = HAnimJoint1118;

HAnimJoint1000.children[4] = HAnimJoint1110;

HAnimJoint HAnimJoint1144 = createNode("HAnimJoint");
HAnimJoint1144.name = "r_carpometacarpal_5";
HAnimJoint1144.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint1144.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint1144.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint1144.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimSegment HAnimSegment1145 = createNode("HAnimSegment");
HAnimSegment1145.name = "r_metacarpal_5";
HAnimSegment1145.DEF = "Joe_r_metacarpal_5";
Shape Shape1146 = createNode("Shape");
Appearance Appearance1147 = createNode("Appearance");
Appearance1147.USE = "SegmentLine";
Shape1146.appearance = Appearance1147;

IndexedLineSet IndexedLineSet1148 = createNode("IndexedLineSet");
IndexedLineSet1148.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1149 = createNode("Coordinate");
Coordinate1149.point = new MFVec3f(new float[-0.2,0.84,-0.085,-0.2,0.79,-0.085]);
IndexedLineSet1148.coord = Coordinate1149;

Shape1146.geometry = IndexedLineSet1148;

HAnimSegment1145.children = new MFNode();

HAnimSegment1145.children[0] = Shape1146;

Transform Transform1150 = createNode("Transform");
Transform1150.translation = new SFVec3f(new float[-0.2,0.84,-0.085]);
Shape Shape1151 = createNode("Shape");
Shape1151.USE = "jointbox";
Transform1150.child = new undefined();

Transform1150.child[0] = Shape1151;

HAnimSegment1145.children[1] = Transform1150;

HAnimSite HAnimSite1152 = createNode("HAnimSite");
HAnimSite1152.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1152.DEF = "Joe_r_metacarpal_phalanx_5_pt";
HAnimSite1152.translation = new SFVec3f(new float[-0.2,0.79,-0.095]);
Shape Shape1153 = createNode("Shape");
Shape1153.USE = "sitebox";
HAnimSite1152.children = new MFNode();

HAnimSite1152.children[0] = Shape1153;

HAnimSegment1145.children[2] = HAnimSite1152;

HAnimJoint1144.children = new MFNode();

HAnimJoint1144.children[0] = HAnimSegment1145;

HAnimJoint HAnimJoint1154 = createNode("HAnimJoint");
HAnimJoint1154.name = "r_metacarpophalangeal_5";
HAnimJoint1154.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint1154.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint1154.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint1154.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment1155 = createNode("HAnimSegment");
HAnimSegment1155.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1155.DEF = "Joe_r_carpal_proximal_phalanx_5";
Shape Shape1156 = createNode("Shape");
Appearance Appearance1157 = createNode("Appearance");
Appearance1157.USE = "SegmentLine";
Shape1156.appearance = Appearance1157;

IndexedLineSet IndexedLineSet1158 = createNode("IndexedLineSet");
IndexedLineSet1158.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1159 = createNode("Coordinate");
Coordinate1159.point = new MFVec3f(new float[-0.2,0.79,-0.085,-0.2,0.755,-0.085]);
IndexedLineSet1158.coord = Coordinate1159;

Shape1156.geometry = IndexedLineSet1158;

HAnimSegment1155.children = new MFNode();

HAnimSegment1155.children[0] = Shape1156;

Transform Transform1160 = createNode("Transform");
Transform1160.translation = new SFVec3f(new float[-0.2,0.79,-0.085]);
Shape Shape1161 = createNode("Shape");
Shape1161.USE = "jointbox";
Transform1160.child = new undefined();

Transform1160.child[0] = Shape1161;

HAnimSegment1155.children[1] = Transform1160;

HAnimJoint1154.children = new MFNode();

HAnimJoint1154.children[0] = HAnimSegment1155;

HAnimJoint HAnimJoint1162 = createNode("HAnimJoint");
HAnimJoint1162.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1162.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint1162.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint1162.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint1162.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1163 = createNode("HAnimSegment");
HAnimSegment1163.name = "r_carpal_middle_phalanx_5";
HAnimSegment1163.DEF = "Joe_r_carpal_middle_phalanx_5";
Shape Shape1164 = createNode("Shape");
Appearance Appearance1165 = createNode("Appearance");
Appearance1165.USE = "SegmentLine";
Shape1164.appearance = Appearance1165;

IndexedLineSet IndexedLineSet1166 = createNode("IndexedLineSet");
IndexedLineSet1166.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1167 = createNode("Coordinate");
Coordinate1167.point = new MFVec3f(new float[-0.2,0.755,-0.085,-0.2,0.735,-0.085]);
IndexedLineSet1166.coord = Coordinate1167;

Shape1164.geometry = IndexedLineSet1166;

HAnimSegment1163.children = new MFNode();

HAnimSegment1163.children[0] = Shape1164;

Transform Transform1168 = createNode("Transform");
Transform1168.translation = new SFVec3f(new float[-0.2,0.755,-0.085]);
Shape Shape1169 = createNode("Shape");
Shape1169.USE = "jointbox";
Transform1168.child = new undefined();

Transform1168.child[0] = Shape1169;

HAnimSegment1163.children[1] = Transform1168;

HAnimJoint1162.children = new MFNode();

HAnimJoint1162.children[0] = HAnimSegment1163;

HAnimJoint HAnimJoint1170 = createNode("HAnimJoint");
HAnimJoint1170.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1170.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint1170.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint1170.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint1170.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1171 = createNode("HAnimSegment");
HAnimSegment1171.name = "r_carpal_distal_phalanx_5";
HAnimSegment1171.DEF = "Joe_r_carpal_distal_phalanx_5";
Shape Shape1172 = createNode("Shape");
Appearance Appearance1173 = createNode("Appearance");
Appearance1173.USE = "SegmentLine";
Shape1172.appearance = Appearance1173;

IndexedLineSet IndexedLineSet1174 = createNode("IndexedLineSet");
IndexedLineSet1174.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1175 = createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[-0.2,0.735,-0.085,-0.2,0.72,-0.085]);
IndexedLineSet1174.coord = Coordinate1175;

Shape1172.geometry = IndexedLineSet1174;

HAnimSegment1171.children = new MFNode();

HAnimSegment1171.children[0] = Shape1172;

Transform Transform1176 = createNode("Transform");
Transform1176.translation = new SFVec3f(new float[-0.2,0.735,-0.085]);
Shape Shape1177 = createNode("Shape");
Shape1177.USE = "jointbox";
Transform1176.child = new undefined();

Transform1176.child[0] = Shape1177;

HAnimSegment1171.children[1] = Transform1176;

HAnimSite HAnimSite1178 = createNode("HAnimSite");
HAnimSite1178.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1178.DEF = "Joe_r_carpal_distal_phalanx_5_tip";
HAnimSite1178.translation = new SFVec3f(new float[-0.2,0.72,-0.085]);
Shape Shape1179 = createNode("Shape");
Shape1179.USE = "sitebox";
HAnimSite1178.children = new MFNode();

HAnimSite1178.children[0] = Shape1179;

HAnimSegment1171.children[2] = HAnimSite1178;

HAnimJoint1170.children = new MFNode();

HAnimJoint1170.children[0] = HAnimSegment1171;

HAnimJoint1162.children[1] = HAnimJoint1170;

HAnimJoint1154.children[1] = HAnimJoint1162;

HAnimJoint1144.children[1] = HAnimJoint1154;

HAnimJoint1000.children[5] = HAnimJoint1144;

HAnimJoint978.children[1] = HAnimJoint1000;

HAnimJoint948.children[1] = HAnimJoint978;

HAnimJoint932.children[1] = HAnimJoint948;

HAnimJoint922.children[1] = HAnimJoint932;

HAnimJoint556.children[3] = HAnimJoint922;

HAnimJoint548.children[1] = HAnimJoint556;

HAnimJoint540.children[1] = HAnimJoint548;

HAnimJoint530.children[1] = HAnimJoint540;

HAnimJoint522.children[1] = HAnimJoint530;

HAnimJoint514.children[1] = HAnimJoint522;

HAnimJoint506.children[1] = HAnimJoint514;

HAnimJoint498.children[1] = HAnimJoint506;

HAnimJoint486.children[1] = HAnimJoint498;

HAnimJoint476.children[1] = HAnimJoint486;

HAnimJoint468.children[1] = HAnimJoint476;

HAnimJoint460.children[1] = HAnimJoint468;

HAnimJoint452.children[1] = HAnimJoint460;

HAnimJoint426.children[1] = HAnimJoint452;

HAnimJoint418.children[1] = HAnimJoint426;

HAnimJoint410.children[1] = HAnimJoint418;

HAnimJoint395.children[2] = HAnimJoint410;

HAnimJoint81.children[2] = HAnimJoint395;

HAnimHumanoid78.joints[1] = HAnimJoint81;

Shape Shape1180 = createNode("Shape");
Shape1180.DEF = "SkinShape";
Appearance Appearance1181 = createNode("Appearance");
Appearance1181.DEF = "SkinAppearance";
Material Material1182 = createNode("Material");
Material1182.DEF = "SkinMaterial";
Material1182.ambientIntensity = 0.6;
Material1182.diffuseColor = new SFColor(new float[1,1,1]);
Material1182.shininess = 0.6;
Material1182.transparency = 0.2;
Appearance1181.material = Material1182;

ImageTexture ImageTexture1183 = createNode("ImageTexture");
ImageTexture1183.DEF = "zBlueSpiralBkg2";
ImageTexture1183.description = "Blue Spiral Pattern";
ImageTexture1183.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1181.texture = ImageTexture1183;

Shape1180.appearance = Appearance1181;

IndexedFaceSet IndexedFaceSet1184 = createNode("IndexedFaceSet");
IndexedFaceSet1184.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1184.creaseAngle = 3.1;
Color Color1185 = createNode("Color");
Color1185.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1184.color = Color1185;

Coordinate Coordinate1186 = createNode("Coordinate");
Coordinate1186.DEF = "TheSkinCoord";
Coordinate1186.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet1184.coord = Coordinate1186;

Shape1180.geometry = IndexedFaceSet1184;

HAnimHumanoid78.skin[2] = Shape1180;

Coordinate Coordinate1187 = createNode("Coordinate");
Coordinate1187.USE = "TheSkinCoord";
HAnimHumanoid78.skinCoord = Coordinate1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_humanoid_root";
HAnimHumanoid78.joints[3] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_sacroiliac";
HAnimHumanoid78.joints[4] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_vl5";
HAnimHumanoid78.joints[5] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_vl4";
HAnimHumanoid78.joints[6] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_vl3";
HAnimHumanoid78.joints[7] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_vl2";
HAnimHumanoid78.joints[8] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_vl1";
HAnimHumanoid78.joints[9] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_vt12";
HAnimHumanoid78.joints[10] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_vt11";
HAnimHumanoid78.joints[11] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_vt10";
HAnimHumanoid78.joints[12] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_vt9";
HAnimHumanoid78.joints[13] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_vt8";
HAnimHumanoid78.joints[14] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_vt7";
HAnimHumanoid78.joints[15] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_vt6";
HAnimHumanoid78.joints[16] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_vt5";
HAnimHumanoid78.joints[17] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vt4";
HAnimHumanoid78.joints[18] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vt3";
HAnimHumanoid78.joints[19] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vt2";
HAnimHumanoid78.joints[20] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vt1";
HAnimHumanoid78.joints[21] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vc7";
HAnimHumanoid78.joints[22] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vc6";
HAnimHumanoid78.joints[23] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vc5";
HAnimHumanoid78.joints[24] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vc4";
HAnimHumanoid78.joints[25] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_vc3";
HAnimHumanoid78.joints[26] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_vc2";
HAnimHumanoid78.joints[27] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_vc1";
HAnimHumanoid78.joints[28] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_skullbase";
HAnimHumanoid78.joints[29] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_l_acromioclavicular";
HAnimHumanoid78.joints[30] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_r_acromioclavicular";
HAnimHumanoid78.joints[31] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_l_carpal_distal_interphalangeal_2";
HAnimHumanoid78.joints[32] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_r_carpal_distal_interphalangeal_2";
HAnimHumanoid78.joints[33] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_l_carpal_distal_interphalangeal_3";
HAnimHumanoid78.joints[34] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_r_carpal_distal_interphalangeal_3";
HAnimHumanoid78.joints[35] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_l_carpal_distal_interphalangeal_4";
HAnimHumanoid78.joints[36] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_r_carpal_distal_interphalangeal_4";
HAnimHumanoid78.joints[37] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_l_carpal_distal_interphalangeal_5";
HAnimHumanoid78.joints[38] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_r_carpal_distal_interphalangeal_5";
HAnimHumanoid78.joints[39] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_l_carpal_interphalangeal_1";
HAnimHumanoid78.joints[40] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_r_carpal_interphalangeal_1";
HAnimHumanoid78.joints[41] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid78.joints[42] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid78.joints[43] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid78.joints[44] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid78.joints[45] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid78.joints[46] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid78.joints[47] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid78.joints[48] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid78.joints[49] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_l_carpometacarpal_1";
HAnimHumanoid78.joints[50] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_r_carpometacarpal_1";
HAnimHumanoid78.joints[51] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_l_carpometacarpal_2";
HAnimHumanoid78.joints[52] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_r_carpometacarpal_2";
HAnimHumanoid78.joints[53] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_l_carpometacarpal_3";
HAnimHumanoid78.joints[54] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_r_carpometacarpal_3";
HAnimHumanoid78.joints[55] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_l_carpometacarpal_4";
HAnimHumanoid78.joints[56] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_r_carpometacarpal_4";
HAnimHumanoid78.joints[57] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_l_carpometacarpal_5";
HAnimHumanoid78.joints[58] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_r_carpometacarpal_5";
HAnimHumanoid78.joints[59] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_l_elbow";
HAnimHumanoid78.joints[60] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_r_elbow";
HAnimHumanoid78.joints[61] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_l_eyeball_joint";
HAnimHumanoid78.joints[62] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_r_eyeball_joint";
HAnimHumanoid78.joints[63] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_l_hip";
HAnimHumanoid78.joints[64] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_r_hip";
HAnimHumanoid78.joints[65] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_l_knee";
HAnimHumanoid78.joints[66] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_r_knee";
HAnimHumanoid78.joints[67] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_l_metacarpophalangeal_1";
HAnimHumanoid78.joints[68] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_r_metacarpophalangeal_1";
HAnimHumanoid78.joints[69] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_l_metacarpophalangeal_2";
HAnimHumanoid78.joints[70] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_r_metacarpophalangeal_2";
HAnimHumanoid78.joints[71] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_l_metacarpophalangeal_3";
HAnimHumanoid78.joints[72] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_r_metacarpophalangeal_3";
HAnimHumanoid78.joints[73] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_l_metacarpophalangeal_4";
HAnimHumanoid78.joints[74] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_r_metacarpophalangeal_4";
HAnimHumanoid78.joints[75] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_l_metacarpophalangeal_5";
HAnimHumanoid78.joints[76] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_metacarpophalangeal_5";
HAnimHumanoid78.joints[77] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_l_metatarsal";
HAnimHumanoid78.joints[78] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_l_metatarsophalangeal_2";
HAnimHumanoid78.joints[79] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_r_metatarsophalangeal_2";
HAnimHumanoid78.joints[80] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_l_radiocarpal";
HAnimHumanoid78.joints[81] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_r_radiocarpal";
HAnimHumanoid78.joints[82] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "Joe_l_shoulder";
HAnimHumanoid78.joints[83] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "Joe_r_shoulder";
HAnimHumanoid78.joints[84] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "Joe_l_sternoclavicular";
HAnimHumanoid78.joints[85] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "Joe_r_sternoclavicular";
HAnimHumanoid78.joints[86] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "Joe_l_talocrural";
HAnimHumanoid78.joints[87] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "Joe_r_talocrural";
HAnimHumanoid78.joints[88] = HAnimJoint1273;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.USE = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid78.joints[89] = HAnimJoint1274;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.USE = "Joe_l_tarsometatarsal_2";
HAnimHumanoid78.joints[90] = HAnimJoint1275;

HAnimJoint HAnimJoint1276 = createNode("HAnimJoint");
HAnimJoint1276.USE = "Joe_r_tarsometatarsal_2";
HAnimHumanoid78.joints[91] = HAnimJoint1276;

HAnimSegment HAnimSegment1277 = createNode("HAnimSegment");
HAnimSegment1277.USE = "Joe_c1";
HAnimHumanoid78.segments[92] = HAnimSegment1277;

HAnimSegment HAnimSegment1278 = createNode("HAnimSegment");
HAnimSegment1278.USE = "Joe_c2";
HAnimHumanoid78.segments[93] = HAnimSegment1278;

HAnimSegment HAnimSegment1279 = createNode("HAnimSegment");
HAnimSegment1279.USE = "Joe_c3";
HAnimHumanoid78.segments[94] = HAnimSegment1279;

HAnimSegment HAnimSegment1280 = createNode("HAnimSegment");
HAnimSegment1280.USE = "Joe_c4";
HAnimHumanoid78.segments[95] = HAnimSegment1280;

HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.USE = "Joe_c5";
HAnimHumanoid78.segments[96] = HAnimSegment1281;

HAnimSegment HAnimSegment1282 = createNode("HAnimSegment");
HAnimSegment1282.USE = "Joe_c6";
HAnimHumanoid78.segments[97] = HAnimSegment1282;

HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.USE = "Joe_c7";
HAnimHumanoid78.segments[98] = HAnimSegment1283;

HAnimSegment HAnimSegment1284 = createNode("HAnimSegment");
HAnimSegment1284.USE = "Joe_l1";
HAnimHumanoid78.segments[99] = HAnimSegment1284;

HAnimSegment HAnimSegment1285 = createNode("HAnimSegment");
HAnimSegment1285.USE = "Joe_l2";
HAnimHumanoid78.segments[100] = HAnimSegment1285;

HAnimSegment HAnimSegment1286 = createNode("HAnimSegment");
HAnimSegment1286.USE = "Joe_l3";
HAnimHumanoid78.segments[101] = HAnimSegment1286;

HAnimSegment HAnimSegment1287 = createNode("HAnimSegment");
HAnimSegment1287.USE = "Joe_l4";
HAnimHumanoid78.segments[102] = HAnimSegment1287;

HAnimSegment HAnimSegment1288 = createNode("HAnimSegment");
HAnimSegment1288.USE = "Joe_l5";
HAnimHumanoid78.segments[103] = HAnimSegment1288;

HAnimSegment HAnimSegment1289 = createNode("HAnimSegment");
HAnimSegment1289.USE = "Joe_pelvis";
HAnimHumanoid78.segments[104] = HAnimSegment1289;

HAnimSegment HAnimSegment1290 = createNode("HAnimSegment");
HAnimSegment1290.USE = "Joe_sacrum";
HAnimHumanoid78.segments[105] = HAnimSegment1290;

HAnimSegment HAnimSegment1291 = createNode("HAnimSegment");
HAnimSegment1291.USE = "Joe_skull";
HAnimHumanoid78.segments[106] = HAnimSegment1291;

HAnimSegment HAnimSegment1292 = createNode("HAnimSegment");
HAnimSegment1292.USE = "Joe_t1";
HAnimHumanoid78.segments[107] = HAnimSegment1292;

HAnimSegment HAnimSegment1293 = createNode("HAnimSegment");
HAnimSegment1293.USE = "Joe_t10";
HAnimHumanoid78.segments[108] = HAnimSegment1293;

HAnimSegment HAnimSegment1294 = createNode("HAnimSegment");
HAnimSegment1294.USE = "Joe_t11";
HAnimHumanoid78.segments[109] = HAnimSegment1294;

HAnimSegment HAnimSegment1295 = createNode("HAnimSegment");
HAnimSegment1295.USE = "Joe_t12";
HAnimHumanoid78.segments[110] = HAnimSegment1295;

HAnimSegment HAnimSegment1296 = createNode("HAnimSegment");
HAnimSegment1296.USE = "Joe_t2";
HAnimHumanoid78.segments[111] = HAnimSegment1296;

HAnimSegment HAnimSegment1297 = createNode("HAnimSegment");
HAnimSegment1297.USE = "Joe_t3";
HAnimHumanoid78.segments[112] = HAnimSegment1297;

HAnimSegment HAnimSegment1298 = createNode("HAnimSegment");
HAnimSegment1298.USE = "Joe_t4";
HAnimHumanoid78.segments[113] = HAnimSegment1298;

HAnimSegment HAnimSegment1299 = createNode("HAnimSegment");
HAnimSegment1299.USE = "Joe_t5";
HAnimHumanoid78.segments[114] = HAnimSegment1299;

HAnimSegment HAnimSegment1300 = createNode("HAnimSegment");
HAnimSegment1300.USE = "Joe_t6";
HAnimHumanoid78.segments[115] = HAnimSegment1300;

HAnimSegment HAnimSegment1301 = createNode("HAnimSegment");
HAnimSegment1301.USE = "Joe_t7";
HAnimHumanoid78.segments[116] = HAnimSegment1301;

HAnimSegment HAnimSegment1302 = createNode("HAnimSegment");
HAnimSegment1302.USE = "Joe_t8";
HAnimHumanoid78.segments[117] = HAnimSegment1302;

HAnimSegment HAnimSegment1303 = createNode("HAnimSegment");
HAnimSegment1303.USE = "Joe_t9";
HAnimHumanoid78.segments[118] = HAnimSegment1303;

HAnimSegment HAnimSegment1304 = createNode("HAnimSegment");
HAnimSegment1304.USE = "Joe_toPelvis";
HAnimHumanoid78.segments[119] = HAnimSegment1304;

HAnimSegment HAnimSegment1305 = createNode("HAnimSegment");
HAnimSegment1305.USE = "Joe_l_calf";
HAnimHumanoid78.segments[120] = HAnimSegment1305;

HAnimSegment HAnimSegment1306 = createNode("HAnimSegment");
HAnimSegment1306.USE = "Joe_r_calf";
HAnimHumanoid78.segments[121] = HAnimSegment1306;

HAnimSegment HAnimSegment1307 = createNode("HAnimSegment");
HAnimSegment1307.USE = "Joe_l_carpal";
HAnimHumanoid78.segments[122] = HAnimSegment1307;

HAnimSegment HAnimSegment1308 = createNode("HAnimSegment");
HAnimSegment1308.USE = "Joe_r_carpal";
HAnimHumanoid78.segments[123] = HAnimSegment1308;

HAnimSegment HAnimSegment1309 = createNode("HAnimSegment");
HAnimSegment1309.USE = "Joe_l_carpal_distal_phalanx_1";
HAnimHumanoid78.segments[124] = HAnimSegment1309;

HAnimSegment HAnimSegment1310 = createNode("HAnimSegment");
HAnimSegment1310.USE = "Joe_r_carpal_distal_phalanx_1";
HAnimHumanoid78.segments[125] = HAnimSegment1310;

HAnimSegment HAnimSegment1311 = createNode("HAnimSegment");
HAnimSegment1311.USE = "Joe_l_carpal_distal_phalanx_2";
HAnimHumanoid78.segments[126] = HAnimSegment1311;

HAnimSegment HAnimSegment1312 = createNode("HAnimSegment");
HAnimSegment1312.USE = "Joe_r_carpal_distal_phalanx_2";
HAnimHumanoid78.segments[127] = HAnimSegment1312;

HAnimSegment HAnimSegment1313 = createNode("HAnimSegment");
HAnimSegment1313.USE = "Joe_l_carpal_distal_phalanx_3";
HAnimHumanoid78.segments[128] = HAnimSegment1313;

HAnimSegment HAnimSegment1314 = createNode("HAnimSegment");
HAnimSegment1314.USE = "Joe_r_carpal_distal_phalanx_3";
HAnimHumanoid78.segments[129] = HAnimSegment1314;

HAnimSegment HAnimSegment1315 = createNode("HAnimSegment");
HAnimSegment1315.USE = "Joe_l_carpal_distal_phalanx_4";
HAnimHumanoid78.segments[130] = HAnimSegment1315;

HAnimSegment HAnimSegment1316 = createNode("HAnimSegment");
HAnimSegment1316.USE = "Joe_r_carpal_distal_phalanx_4";
HAnimHumanoid78.segments[131] = HAnimSegment1316;

HAnimSegment HAnimSegment1317 = createNode("HAnimSegment");
HAnimSegment1317.USE = "Joe_l_carpal_distal_phalanx_5";
HAnimHumanoid78.segments[132] = HAnimSegment1317;

HAnimSegment HAnimSegment1318 = createNode("HAnimSegment");
HAnimSegment1318.USE = "Joe_r_carpal_distal_phalanx_5";
HAnimHumanoid78.segments[133] = HAnimSegment1318;

HAnimSegment HAnimSegment1319 = createNode("HAnimSegment");
HAnimSegment1319.USE = "Joe_l_carpal_middle_phalanx_2";
HAnimHumanoid78.segments[134] = HAnimSegment1319;

HAnimSegment HAnimSegment1320 = createNode("HAnimSegment");
HAnimSegment1320.USE = "Joe_r_carpal_middle_phalanx_2";
HAnimHumanoid78.segments[135] = HAnimSegment1320;

HAnimSegment HAnimSegment1321 = createNode("HAnimSegment");
HAnimSegment1321.USE = "Joe_l_carpal_middle_phalanx_3";
HAnimHumanoid78.segments[136] = HAnimSegment1321;

HAnimSegment HAnimSegment1322 = createNode("HAnimSegment");
HAnimSegment1322.USE = "Joe_r_carpal_middle_phalanx_3";
HAnimHumanoid78.segments[137] = HAnimSegment1322;

HAnimSegment HAnimSegment1323 = createNode("HAnimSegment");
HAnimSegment1323.USE = "Joe_l_carpal_middle_phalanx_4";
HAnimHumanoid78.segments[138] = HAnimSegment1323;

HAnimSegment HAnimSegment1324 = createNode("HAnimSegment");
HAnimSegment1324.USE = "Joe_r_carpal_middle_phalanx_4";
HAnimHumanoid78.segments[139] = HAnimSegment1324;

HAnimSegment HAnimSegment1325 = createNode("HAnimSegment");
HAnimSegment1325.USE = "Joe_l_carpal_middle_phalanx_5";
HAnimHumanoid78.segments[140] = HAnimSegment1325;

HAnimSegment HAnimSegment1326 = createNode("HAnimSegment");
HAnimSegment1326.USE = "Joe_r_carpal_middle_phalanx_5";
HAnimHumanoid78.segments[141] = HAnimSegment1326;

HAnimSegment HAnimSegment1327 = createNode("HAnimSegment");
HAnimSegment1327.USE = "Joe_l_carpal_proximal_phalanx_1";
HAnimHumanoid78.segments[142] = HAnimSegment1327;

HAnimSegment HAnimSegment1328 = createNode("HAnimSegment");
HAnimSegment1328.USE = "Joe_r_carpal_proximal_phalanx_1";
HAnimHumanoid78.segments[143] = HAnimSegment1328;

HAnimSegment HAnimSegment1329 = createNode("HAnimSegment");
HAnimSegment1329.USE = "Joe_l_carpal_proximal_phalanx_2";
HAnimHumanoid78.segments[144] = HAnimSegment1329;

HAnimSegment HAnimSegment1330 = createNode("HAnimSegment");
HAnimSegment1330.USE = "Joe_r_carpal_proximal_phalanx_2";
HAnimHumanoid78.segments[145] = HAnimSegment1330;

HAnimSegment HAnimSegment1331 = createNode("HAnimSegment");
HAnimSegment1331.USE = "Joe_l_carpal_proximal_phalanx_3";
HAnimHumanoid78.segments[146] = HAnimSegment1331;

HAnimSegment HAnimSegment1332 = createNode("HAnimSegment");
HAnimSegment1332.USE = "Joe_r_carpal_proximal_phalanx_3";
HAnimHumanoid78.segments[147] = HAnimSegment1332;

HAnimSegment HAnimSegment1333 = createNode("HAnimSegment");
HAnimSegment1333.USE = "Joe_l_carpal_proximal_phalanx_4";
HAnimHumanoid78.segments[148] = HAnimSegment1333;

HAnimSegment HAnimSegment1334 = createNode("HAnimSegment");
HAnimSegment1334.USE = "Joe_r_carpal_proximal_phalanx_4";
HAnimHumanoid78.segments[149] = HAnimSegment1334;

HAnimSegment HAnimSegment1335 = createNode("HAnimSegment");
HAnimSegment1335.USE = "Joe_l_carpal_proximal_phalanx_5";
HAnimHumanoid78.segments[150] = HAnimSegment1335;

HAnimSegment HAnimSegment1336 = createNode("HAnimSegment");
HAnimSegment1336.USE = "Joe_r_carpal_proximal_phalanx_5";
HAnimHumanoid78.segments[151] = HAnimSegment1336;

HAnimSegment HAnimSegment1337 = createNode("HAnimSegment");
HAnimSegment1337.USE = "Joe_l_clavicle";
HAnimHumanoid78.segments[152] = HAnimSegment1337;

HAnimSegment HAnimSegment1338 = createNode("HAnimSegment");
HAnimSegment1338.USE = "Joe_r_clavicle";
HAnimHumanoid78.segments[153] = HAnimSegment1338;

HAnimSegment HAnimSegment1339 = createNode("HAnimSegment");
HAnimSegment1339.USE = "Joe_l_eyeball";
HAnimHumanoid78.segments[154] = HAnimSegment1339;

HAnimSegment HAnimSegment1340 = createNode("HAnimSegment");
HAnimSegment1340.USE = "Joe_r_eyeball";
HAnimHumanoid78.segments[155] = HAnimSegment1340;

HAnimSegment HAnimSegment1341 = createNode("HAnimSegment");
HAnimSegment1341.USE = "Joe_l_forearm";
HAnimHumanoid78.segments[156] = HAnimSegment1341;

HAnimSegment HAnimSegment1342 = createNode("HAnimSegment");
HAnimSegment1342.USE = "Joe_r_forearm";
HAnimHumanoid78.segments[157] = HAnimSegment1342;

HAnimSegment HAnimSegment1343 = createNode("HAnimSegment");
HAnimSegment1343.USE = "Joe_l_metacarpal_1";
HAnimHumanoid78.segments[158] = HAnimSegment1343;

HAnimSegment HAnimSegment1344 = createNode("HAnimSegment");
HAnimSegment1344.USE = "Joe_r_metacarpal_1";
HAnimHumanoid78.segments[159] = HAnimSegment1344;

HAnimSegment HAnimSegment1345 = createNode("HAnimSegment");
HAnimSegment1345.USE = "Joe_l_metacarpal_2";
HAnimHumanoid78.segments[160] = HAnimSegment1345;

HAnimSegment HAnimSegment1346 = createNode("HAnimSegment");
HAnimSegment1346.USE = "Joe_r_metacarpal_2";
HAnimHumanoid78.segments[161] = HAnimSegment1346;

HAnimSegment HAnimSegment1347 = createNode("HAnimSegment");
HAnimSegment1347.USE = "Joe_l_metacarpal_3";
HAnimHumanoid78.segments[162] = HAnimSegment1347;

HAnimSegment HAnimSegment1348 = createNode("HAnimSegment");
HAnimSegment1348.USE = "Joe_r_metacarpal_3";
HAnimHumanoid78.segments[163] = HAnimSegment1348;

HAnimSegment HAnimSegment1349 = createNode("HAnimSegment");
HAnimSegment1349.USE = "Joe_l_metacarpal_4";
HAnimHumanoid78.segments[164] = HAnimSegment1349;

HAnimSegment HAnimSegment1350 = createNode("HAnimSegment");
HAnimSegment1350.USE = "Joe_r_metacarpal_4";
HAnimHumanoid78.segments[165] = HAnimSegment1350;

HAnimSegment HAnimSegment1351 = createNode("HAnimSegment");
HAnimSegment1351.USE = "Joe_l_metacarpal_5";
HAnimHumanoid78.segments[166] = HAnimSegment1351;

HAnimSegment HAnimSegment1352 = createNode("HAnimSegment");
HAnimSegment1352.USE = "Joe_r_metacarpal_5";
HAnimHumanoid78.segments[167] = HAnimSegment1352;

HAnimSegment HAnimSegment1353 = createNode("HAnimSegment");
HAnimSegment1353.USE = "Joe_l_metatarsal_2";
HAnimHumanoid78.segments[168] = HAnimSegment1353;

HAnimSegment HAnimSegment1354 = createNode("HAnimSegment");
HAnimSegment1354.USE = "Joe_r_metatarsal_2";
HAnimHumanoid78.segments[169] = HAnimSegment1354;

HAnimSegment HAnimSegment1355 = createNode("HAnimSegment");
HAnimSegment1355.USE = "Joe_l_scapula";
HAnimHumanoid78.segments[170] = HAnimSegment1355;

HAnimSegment HAnimSegment1356 = createNode("HAnimSegment");
HAnimSegment1356.USE = "Joe_r_scapula";
HAnimHumanoid78.segments[171] = HAnimSegment1356;

HAnimSegment HAnimSegment1357 = createNode("HAnimSegment");
HAnimSegment1357.USE = "Joe_l_talus";
HAnimHumanoid78.segments[172] = HAnimSegment1357;

HAnimSegment HAnimSegment1358 = createNode("HAnimSegment");
HAnimSegment1358.USE = "Joe_r_talus";
HAnimHumanoid78.segments[173] = HAnimSegment1358;

HAnimSegment HAnimSegment1359 = createNode("HAnimSegment");
HAnimSegment1359.USE = "Joe_l_tarsal_distal_phalanx_2";
HAnimHumanoid78.segments[174] = HAnimSegment1359;

HAnimSegment HAnimSegment1360 = createNode("HAnimSegment");
HAnimSegment1360.USE = "Joe_r_tarsal_distal_phalanx_2";
HAnimHumanoid78.segments[175] = HAnimSegment1360;

HAnimSegment HAnimSegment1361 = createNode("HAnimSegment");
HAnimSegment1361.USE = "Joe_l_tarsal_proximal_phalanx_2";
HAnimHumanoid78.segments[176] = HAnimSegment1361;

HAnimSegment HAnimSegment1362 = createNode("HAnimSegment");
HAnimSegment1362.USE = "Joe_r_tarsal_proximal_phalanx_2";
HAnimHumanoid78.segments[177] = HAnimSegment1362;

HAnimSegment HAnimSegment1363 = createNode("HAnimSegment");
HAnimSegment1363.USE = "Joe_l_thigh";
HAnimHumanoid78.segments[178] = HAnimSegment1363;

HAnimSegment HAnimSegment1364 = createNode("HAnimSegment");
HAnimSegment1364.USE = "Joe_r_thigh";
HAnimHumanoid78.segments[179] = HAnimSegment1364;

HAnimSegment HAnimSegment1365 = createNode("HAnimSegment");
HAnimSegment1365.USE = "Joe_l_upperarm";
HAnimHumanoid78.segments[180] = HAnimSegment1365;

HAnimSegment HAnimSegment1366 = createNode("HAnimSegment");
HAnimSegment1366.USE = "Joe_r_upperarm";
HAnimHumanoid78.segments[181] = HAnimSegment1366;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.USE = "Joe_cervicale_pt";
HAnimHumanoid78.viewpoints[182] = HAnimSite1367;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.USE = "Joe_crotch_pt";
HAnimHumanoid78.viewpoints[183] = HAnimSite1368;

HAnimSite HAnimSite1369 = createNode("HAnimSite");
HAnimSite1369.USE = "Joe_floormarker_pt";
HAnimHumanoid78.viewpoints[184] = HAnimSite1369;

HAnimSite HAnimSite1370 = createNode("HAnimSite");
HAnimSite1370.USE = "Joe_navel_pt";
HAnimHumanoid78.viewpoints[185] = HAnimSite1370;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.USE = "Joe_nuchale_pt";
HAnimHumanoid78.viewpoints[186] = HAnimSite1371;

HAnimSite HAnimSite1372 = createNode("HAnimSite");
HAnimSite1372.USE = "Joe_rib10_midspine_pt";
HAnimHumanoid78.viewpoints[187] = HAnimSite1372;

HAnimSite HAnimSite1373 = createNode("HAnimSite");
HAnimSite1373.USE = "Joe_sellion_pt";
HAnimHumanoid78.viewpoints[188] = HAnimSite1373;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.USE = "Joe_skull_vertex_tip";
HAnimHumanoid78.viewpoints[189] = HAnimSite1374;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.USE = "Joe_substernale_pt";
HAnimHumanoid78.viewpoints[190] = HAnimSite1375;

HAnimSite HAnimSite1376 = createNode("HAnimSite");
HAnimSite1376.USE = "Joe_supramenton_pt";
HAnimHumanoid78.viewpoints[191] = HAnimSite1376;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.USE = "Joe_suprasternale_pt";
HAnimHumanoid78.viewpoints[192] = HAnimSite1377;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.USE = "Joe_waist_preferred_posterior_pt";
HAnimHumanoid78.viewpoints[193] = HAnimSite1378;

HAnimSite HAnimSite1379 = createNode("HAnimSite");
HAnimSite1379.USE = "Joe_l_acromion_pt";
HAnimHumanoid78.viewpoints[194] = HAnimSite1379;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.USE = "Joe_r_acromion_pt";
HAnimHumanoid78.viewpoints[195] = HAnimSite1380;

HAnimSite HAnimSite1381 = createNode("HAnimSite");
HAnimSite1381.USE = "Joe_l_asis_pt";
HAnimHumanoid78.viewpoints[196] = HAnimSite1381;

HAnimSite HAnimSite1382 = createNode("HAnimSite");
HAnimSite1382.USE = "Joe_r_asis_pt";
HAnimHumanoid78.viewpoints[197] = HAnimSite1382;

HAnimSite HAnimSite1383 = createNode("HAnimSite");
HAnimSite1383.USE = "Joe_l_axilla_distal_pt";
HAnimHumanoid78.viewpoints[198] = HAnimSite1383;

HAnimSite HAnimSite1384 = createNode("HAnimSite");
HAnimSite1384.USE = "Joe_r_axilla_distal_pt";
HAnimHumanoid78.viewpoints[199] = HAnimSite1384;

HAnimSite HAnimSite1385 = createNode("HAnimSite");
HAnimSite1385.USE = "Joe_l_axilla_proximal_pt";
HAnimHumanoid78.viewpoints[200] = HAnimSite1385;

HAnimSite HAnimSite1386 = createNode("HAnimSite");
HAnimSite1386.USE = "Joe_r_axilla_proximal_pt";
HAnimHumanoid78.viewpoints[201] = HAnimSite1386;

HAnimSite HAnimSite1387 = createNode("HAnimSite");
HAnimSite1387.USE = "Joe_l_calcaneus_posterior_pt";
HAnimHumanoid78.viewpoints[202] = HAnimSite1387;

HAnimSite HAnimSite1388 = createNode("HAnimSite");
HAnimSite1388.USE = "Joe_r_calcaneus_posterior_pt";
HAnimHumanoid78.viewpoints[203] = HAnimSite1388;

HAnimSite HAnimSite1389 = createNode("HAnimSite");
HAnimSite1389.USE = "Joe_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid78.viewpoints[204] = HAnimSite1389;

HAnimSite HAnimSite1390 = createNode("HAnimSite");
HAnimSite1390.USE = "Joe_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid78.viewpoints[205] = HAnimSite1390;

HAnimSite HAnimSite1391 = createNode("HAnimSite");
HAnimSite1391.USE = "Joe_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid78.viewpoints[206] = HAnimSite1391;

HAnimSite HAnimSite1392 = createNode("HAnimSite");
HAnimSite1392.USE = "Joe_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid78.viewpoints[207] = HAnimSite1392;

HAnimSite HAnimSite1393 = createNode("HAnimSite");
HAnimSite1393.USE = "Joe_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid78.viewpoints[208] = HAnimSite1393;

HAnimSite HAnimSite1394 = createNode("HAnimSite");
HAnimSite1394.USE = "Joe_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid78.viewpoints[209] = HAnimSite1394;

HAnimSite HAnimSite1395 = createNode("HAnimSite");
HAnimSite1395.USE = "Joe_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid78.viewpoints[210] = HAnimSite1395;

HAnimSite HAnimSite1396 = createNode("HAnimSite");
HAnimSite1396.USE = "Joe_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid78.viewpoints[211] = HAnimSite1396;

HAnimSite HAnimSite1397 = createNode("HAnimSite");
HAnimSite1397.USE = "Joe_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid78.viewpoints[212] = HAnimSite1397;

HAnimSite HAnimSite1398 = createNode("HAnimSite");
HAnimSite1398.USE = "Joe_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid78.viewpoints[213] = HAnimSite1398;

HAnimSite HAnimSite1399 = createNode("HAnimSite");
HAnimSite1399.USE = "Joe_l_clavicle_pt";
HAnimHumanoid78.viewpoints[214] = HAnimSite1399;

HAnimSite HAnimSite1400 = createNode("HAnimSite");
HAnimSite1400.USE = "Joe_r_clavicle_pt";
HAnimHumanoid78.viewpoints[215] = HAnimSite1400;

HAnimSite HAnimSite1401 = createNode("HAnimSite");
HAnimSite1401.USE = "Joe_l_dactylion_pt";
HAnimHumanoid78.viewpoints[216] = HAnimSite1401;

HAnimSite HAnimSite1402 = createNode("HAnimSite");
HAnimSite1402.USE = "Joe_r_dactylion_pt";
HAnimHumanoid78.viewpoints[217] = HAnimSite1402;

HAnimSite HAnimSite1403 = createNode("HAnimSite");
HAnimSite1403.USE = "Joe_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid78.viewpoints[218] = HAnimSite1403;

HAnimSite HAnimSite1404 = createNode("HAnimSite");
HAnimSite1404.USE = "Joe_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid78.viewpoints[219] = HAnimSite1404;

HAnimSite HAnimSite1405 = createNode("HAnimSite");
HAnimSite1405.USE = "Joe_l_femoral_medial_epicondyle_pt";
HAnimHumanoid78.viewpoints[220] = HAnimSite1405;

HAnimSite HAnimSite1406 = createNode("HAnimSite");
HAnimSite1406.USE = "Joe_r_femoral_medial_epicondyle_pt";
HAnimHumanoid78.viewpoints[221] = HAnimSite1406;

HAnimSite HAnimSite1407 = createNode("HAnimSite");
HAnimSite1407.USE = "Joe_l_gonion_pt";
HAnimHumanoid78.viewpoints[222] = HAnimSite1407;

HAnimSite HAnimSite1408 = createNode("HAnimSite");
HAnimSite1408.USE = "Joe_r_gonion_pt";
HAnimHumanoid78.viewpoints[223] = HAnimSite1408;

HAnimSite HAnimSite1409 = createNode("HAnimSite");
HAnimSite1409.USE = "Joe_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid78.viewpoints[224] = HAnimSite1409;

HAnimSite HAnimSite1410 = createNode("HAnimSite");
HAnimSite1410.USE = "Joe_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid78.viewpoints[225] = HAnimSite1410;

HAnimSite HAnimSite1411 = createNode("HAnimSite");
HAnimSite1411.USE = "Joe_l_humeral_medial_epicondyle_pt";
HAnimHumanoid78.viewpoints[226] = HAnimSite1411;

HAnimSite HAnimSite1412 = createNode("HAnimSite");
HAnimSite1412.USE = "Joe_r_humeral_medial_epicondyle_pt";
HAnimHumanoid78.viewpoints[227] = HAnimSite1412;

HAnimSite HAnimSite1413 = createNode("HAnimSite");
HAnimSite1413.USE = "Joe_l_iliocristale_pt";
HAnimHumanoid78.viewpoints[228] = HAnimSite1413;

HAnimSite HAnimSite1414 = createNode("HAnimSite");
HAnimSite1414.USE = "Joe_r_iliocristale_pt";
HAnimHumanoid78.viewpoints[229] = HAnimSite1414;

HAnimSite HAnimSite1415 = createNode("HAnimSite");
HAnimSite1415.USE = "Joe_l_infraorbitale_pt";
HAnimHumanoid78.viewpoints[230] = HAnimSite1415;

HAnimSite HAnimSite1416 = createNode("HAnimSite");
HAnimSite1416.USE = "Joe_r_infraorbitale_pt";
HAnimHumanoid78.viewpoints[231] = HAnimSite1416;

HAnimSite HAnimSite1417 = createNode("HAnimSite");
HAnimSite1417.USE = "Joe_l_knee_crease_pt";
HAnimHumanoid78.viewpoints[232] = HAnimSite1417;

HAnimSite HAnimSite1418 = createNode("HAnimSite");
HAnimSite1418.USE = "Joe_r_knee_crease_pt";
HAnimHumanoid78.viewpoints[233] = HAnimSite1418;

HAnimSite HAnimSite1419 = createNode("HAnimSite");
HAnimSite1419.USE = "Joe_l_lateral_malleolus_pt";
HAnimHumanoid78.viewpoints[234] = HAnimSite1419;

HAnimSite HAnimSite1420 = createNode("HAnimSite");
HAnimSite1420.USE = "Joe_r_lateral_malleolus_pt";
HAnimHumanoid78.viewpoints[235] = HAnimSite1420;

HAnimSite HAnimSite1421 = createNode("HAnimSite");
HAnimSite1421.USE = "Joe_l_medial_malleolus_pt";
HAnimHumanoid78.viewpoints[236] = HAnimSite1421;

HAnimSite HAnimSite1422 = createNode("HAnimSite");
HAnimSite1422.USE = "Joe_r_medial_malleolus_pt";
HAnimHumanoid78.viewpoints[237] = HAnimSite1422;

HAnimSite HAnimSite1423 = createNode("HAnimSite");
HAnimSite1423.USE = "Joe_l_metacarpal_phalanx_2_pt";
HAnimHumanoid78.viewpoints[238] = HAnimSite1423;

HAnimSite HAnimSite1424 = createNode("HAnimSite");
HAnimSite1424.USE = "Joe_r_metacarpal_phalanx_2_pt";
HAnimHumanoid78.viewpoints[239] = HAnimSite1424;

HAnimSite HAnimSite1425 = createNode("HAnimSite");
HAnimSite1425.USE = "Joe_l_metacarpal_phalanx_5_pt";
HAnimHumanoid78.viewpoints[240] = HAnimSite1425;

HAnimSite HAnimSite1426 = createNode("HAnimSite");
HAnimSite1426.USE = "Joe_r_metacarpal_phalanx_5_pt";
HAnimHumanoid78.viewpoints[241] = HAnimSite1426;

HAnimSite HAnimSite1427 = createNode("HAnimSite");
HAnimSite1427.USE = "Joe_l_metatarsal_phalanx_1_pt";
HAnimHumanoid78.viewpoints[242] = HAnimSite1427;

HAnimSite HAnimSite1428 = createNode("HAnimSite");
HAnimSite1428.USE = "Joe_r_metatarsal_phalanx_1_pt";
HAnimHumanoid78.viewpoints[243] = HAnimSite1428;

HAnimSite HAnimSite1429 = createNode("HAnimSite");
HAnimSite1429.USE = "Joe_l_metatarsal_phalanx_5_pt";
HAnimHumanoid78.viewpoints[244] = HAnimSite1429;

HAnimSite HAnimSite1430 = createNode("HAnimSite");
HAnimSite1430.USE = "Joe_r_metatarsal_phalanx_5_pt";
HAnimHumanoid78.viewpoints[245] = HAnimSite1430;

HAnimSite HAnimSite1431 = createNode("HAnimSite");
HAnimSite1431.USE = "Joe_l_neck_base_pt";
HAnimHumanoid78.viewpoints[246] = HAnimSite1431;

HAnimSite HAnimSite1432 = createNode("HAnimSite");
HAnimSite1432.USE = "Joe_r_neck_base_pt";
HAnimHumanoid78.viewpoints[247] = HAnimSite1432;

HAnimSite HAnimSite1433 = createNode("HAnimSite");
HAnimSite1433.USE = "Joe_l_olecranon_pt";
HAnimHumanoid78.viewpoints[248] = HAnimSite1433;

HAnimSite HAnimSite1434 = createNode("HAnimSite");
HAnimSite1434.USE = "Joe_r_olecranon_pt";
HAnimHumanoid78.viewpoints[249] = HAnimSite1434;

HAnimSite HAnimSite1435 = createNode("HAnimSite");
HAnimSite1435.USE = "Joe_l_psis_pt";
HAnimHumanoid78.viewpoints[250] = HAnimSite1435;

HAnimSite HAnimSite1436 = createNode("HAnimSite");
HAnimSite1436.USE = "Joe_r_psis_pt";
HAnimHumanoid78.viewpoints[251] = HAnimSite1436;

HAnimSite HAnimSite1437 = createNode("HAnimSite");
HAnimSite1437.USE = "Joe_l_radial_styloid_pt";
HAnimHumanoid78.viewpoints[252] = HAnimSite1437;

HAnimSite HAnimSite1438 = createNode("HAnimSite");
HAnimSite1438.USE = "Joe_r_radial_styloid_pt";
HAnimHumanoid78.viewpoints[253] = HAnimSite1438;

HAnimSite HAnimSite1439 = createNode("HAnimSite");
HAnimSite1439.USE = "Joe_l_radiale_pt";
HAnimHumanoid78.viewpoints[254] = HAnimSite1439;

HAnimSite HAnimSite1440 = createNode("HAnimSite");
HAnimSite1440.USE = "Joe_r_radiale_pt";
HAnimHumanoid78.viewpoints[255] = HAnimSite1440;

HAnimSite HAnimSite1441 = createNode("HAnimSite");
HAnimSite1441.USE = "Joe_l_rib10_pt";
HAnimHumanoid78.viewpoints[256] = HAnimSite1441;

HAnimSite HAnimSite1442 = createNode("HAnimSite");
HAnimSite1442.USE = "Joe_r_rib10_pt";
HAnimHumanoid78.viewpoints[257] = HAnimSite1442;

HAnimSite HAnimSite1443 = createNode("HAnimSite");
HAnimSite1443.USE = "Joe_l_sphyrion_pt";
HAnimHumanoid78.viewpoints[258] = HAnimSite1443;

HAnimSite HAnimSite1444 = createNode("HAnimSite");
HAnimSite1444.USE = "Joe_r_sphyrion_pt";
HAnimHumanoid78.viewpoints[259] = HAnimSite1444;

HAnimSite HAnimSite1445 = createNode("HAnimSite");
HAnimSite1445.USE = "Joe_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid78.viewpoints[260] = HAnimSite1445;

HAnimSite HAnimSite1446 = createNode("HAnimSite");
HAnimSite1446.USE = "Joe_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid78.viewpoints[261] = HAnimSite1446;

HAnimSite HAnimSite1447 = createNode("HAnimSite");
HAnimSite1447.USE = "Joe_l_thelion_pt";
HAnimHumanoid78.viewpoints[262] = HAnimSite1447;

HAnimSite HAnimSite1448 = createNode("HAnimSite");
HAnimSite1448.USE = "Joe_r_thelion_pt";
HAnimHumanoid78.viewpoints[263] = HAnimSite1448;

HAnimSite HAnimSite1449 = createNode("HAnimSite");
HAnimSite1449.USE = "Joe_l_tragion_pt";
HAnimHumanoid78.viewpoints[264] = HAnimSite1449;

HAnimSite HAnimSite1450 = createNode("HAnimSite");
HAnimSite1450.USE = "Joe_r_tragion_pt";
HAnimHumanoid78.viewpoints[265] = HAnimSite1450;

HAnimSite HAnimSite1451 = createNode("HAnimSite");
HAnimSite1451.USE = "Joe_l_trochanterion_pt";
HAnimHumanoid78.viewpoints[266] = HAnimSite1451;

HAnimSite HAnimSite1452 = createNode("HAnimSite");
HAnimSite1452.USE = "Joe_r_trochanterion_pt";
HAnimHumanoid78.viewpoints[267] = HAnimSite1452;

HAnimSite HAnimSite1453 = createNode("HAnimSite");
HAnimSite1453.USE = "Joe_l_ulnar_styloid_pt";
HAnimHumanoid78.viewpoints[268] = HAnimSite1453;

HAnimSite HAnimSite1454 = createNode("HAnimSite");
HAnimSite1454.USE = "Joe_r_ulnar_styloid_pt";
HAnimHumanoid78.viewpoints[269] = HAnimSite1454;

Group77.children = new MFNode();

Group77.children[0] = HAnimHumanoid78;

Group76.children = new MFNode();

Group76.children[0] = Group77;

children[6] = Group76;

TimeSensor TimeSensor1455 = createNode("TimeSensor");
TimeSensor1455.DEF = "Time1";
TimeSensor1455.cycleInterval = 2.86;
TimeSensor1455.loop = True;
children[7] = TimeSensor1455;

TimeSensor TimeSensor1456 = createNode("TimeSensor");
TimeSensor1456.DEF = "Time2";
TimeSensor1456.cycleInterval = 5.72;
TimeSensor1456.loop = True;
children[8] = TimeSensor1456;

TimeSensor TimeSensor1457 = createNode("TimeSensor");
TimeSensor1457.DEF = "Time3";
TimeSensor1457.cycleInterval = 5.8;
TimeSensor1457.loop = True;
children[9] = TimeSensor1457;

OrientationInterpolator OrientationInterpolator1458 = createNode("OrientationInterpolator");
OrientationInterpolator1458.DEF = "Pitch";
OrientationInterpolator1458.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1458.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,1.256,1,0,0,2.512,1,0,0,3.768,1,0,0,5.024,1,0,0,6.28]);
children[10] = OrientationInterpolator1458;

OrientationInterpolator OrientationInterpolator1459 = createNode("OrientationInterpolator");
OrientationInterpolator1459.DEF = "Yaw";
OrientationInterpolator1459.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1459.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.256,0,1,0,2.512,0,1,0,3.768,0,1,0,5.024,0,1,0,6.28]);
children[11] = OrientationInterpolator1459;

OrientationInterpolator OrientationInterpolator1460 = createNode("OrientationInterpolator");
OrientationInterpolator1460.DEF = "Roll";
OrientationInterpolator1460.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1460.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.256,0,0,1,2.512,0,0,1,3.768,0,0,1,5.024,0,0,1,6.28]);
children[12] = OrientationInterpolator1460;

OrientationInterpolator OrientationInterpolator1461 = createNode("OrientationInterpolator");
OrientationInterpolator1461.DEF = "vc6Yaw";
OrientationInterpolator1461.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1461.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.7,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4,-1,0,0.7,-0.4,-1,0,0.4,0,1,0,0,0,1,0,0]);
children[13] = OrientationInterpolator1461;

ROUTE ROUTE1462 = createNode("ROUTE");
ROUTE1462.fromField = "fraction_changed";
ROUTE1462.fromNode = "Time2";
ROUTE1462.toField = "set_fraction";
ROUTE1462.toNode = "vc6Yaw";
children[14] = ROUTE1462;

ROUTE ROUTE1463 = createNode("ROUTE");
ROUTE1463.fromField = "value_changed";
ROUTE1463.fromNode = "vc6Yaw";
ROUTE1463.toField = "set_rotation";
ROUTE1463.toNode = "Joe_vc6";
children[15] = ROUTE1463;

OrientationInterpolator OrientationInterpolator1464 = createNode("OrientationInterpolator");
OrientationInterpolator1464.DEF = "EyeballsRotation";
OrientationInterpolator1464.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1464.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.2,0.2,0.2,0.2,-0.2,0.2,0.2,0.2,-0.2,-0.2,0.2,0.2,0.2,-0.2,0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,0,0,1,0,0,0,1,0]);
children[16] = OrientationInterpolator1464;

ROUTE ROUTE1465 = createNode("ROUTE");
ROUTE1465.fromField = "fraction_changed";
ROUTE1465.fromNode = "Time3";
ROUTE1465.toField = "set_fraction";
ROUTE1465.toNode = "EyeballsRotation";
children[17] = ROUTE1465;

ROUTE ROUTE1466 = createNode("ROUTE");
ROUTE1466.fromField = "value_changed";
ROUTE1466.fromNode = "EyeballsRotation";
ROUTE1466.toField = "set_rotation";
ROUTE1466.toNode = "Joe_r_eyeball_joint";
children[18] = ROUTE1466;

ROUTE ROUTE1467 = createNode("ROUTE");
ROUTE1467.fromField = "value_changed";
ROUTE1467.fromNode = "EyeballsRotation";
ROUTE1467.toField = "set_rotation";
ROUTE1467.toNode = "Joe_l_eyeball_joint";
children[19] = ROUTE1467;

OrientationInterpolator OrientationInterpolator1468 = createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "r_sternoclavicularRelax";
OrientationInterpolator1468.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1468.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.2,-1,0,0.11,0.2,-1,0,0.11,0.1,-1,0,0.1,0,0,1,0]);
children[20] = OrientationInterpolator1468;

OrientationInterpolator OrientationInterpolator1469 = createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "r_acromioclavicularRelax";
OrientationInterpolator1469.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1469.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
children[21] = OrientationInterpolator1469;

OrientationInterpolator OrientationInterpolator1470 = createNode("OrientationInterpolator");
OrientationInterpolator1470.DEF = "r_shoulderRelax";
OrientationInterpolator1470.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1470.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0,0,1,0]);
children[22] = OrientationInterpolator1470;

OrientationInterpolator OrientationInterpolator1471 = createNode("OrientationInterpolator");
OrientationInterpolator1471.DEF = "r_elbowRelax";
OrientationInterpolator1471.key = new MFFloat(new float[0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1471.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.2,0,0.01,0.5,-0.2,0,0.01,0.5,-0.2,0,0.01,0.5,0,0,1,0]);
children[23] = OrientationInterpolator1471;

OrientationInterpolator OrientationInterpolator1472 = createNode("OrientationInterpolator");
OrientationInterpolator1472.DEF = "r_wristRelax";
OrientationInterpolator1472.key = new MFFloat(new float[0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1472.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0.1,-0.09,0.25,0,0.1,-0.09,0.25,0,0.1,-0.09,0.25,0,0,1,0]);
children[24] = OrientationInterpolator1472;

OrientationInterpolator OrientationInterpolator1473 = createNode("OrientationInterpolator");
OrientationInterpolator1473.DEF = "r_index0Relax";
OrientationInterpolator1473.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1473.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]);
children[25] = OrientationInterpolator1473;

OrientationInterpolator OrientationInterpolator1474 = createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "r_index1Relax";
OrientationInterpolator1474.key = new MFFloat(new float[0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1474.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.135,-0.135,1,0.357,-0.159,-0.153,1,0.355,-0.159,-0.153,1,0.357,0,0,1,0]);
children[26] = OrientationInterpolator1474;

OrientationInterpolator OrientationInterpolator1475 = createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "r_middle0Relax";
OrientationInterpolator1475.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1475.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,-1,0.14,0,0,-1,0.14,0,0,-1,0.14,0,0,1,0]);
children[27] = OrientationInterpolator1475;

OrientationInterpolator OrientationInterpolator1476 = createNode("OrientationInterpolator");
OrientationInterpolator1476.DEF = "r_middle1Relax";
OrientationInterpolator1476.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1476.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,0.3,0.257,0,0,0.3,0.37,0,0,0.3,0.39,0,0,0.3,0.31,0,0,0.3,0.32,0,0,0.3,0.34,0,0,0.3,0.28,0,0,1,0,0,0,1,0]);
children[28] = OrientationInterpolator1476;

OrientationInterpolator OrientationInterpolator1477 = createNode("OrientationInterpolator");
OrientationInterpolator1477.DEF = "r_ring0Relax";
OrientationInterpolator1477.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1477.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.25,0.25,-1,0.1,0.25,0.25,-1,0.1,0.25,0.25,-1,0.1,0,0,1,0]);
children[29] = OrientationInterpolator1477;

OrientationInterpolator OrientationInterpolator1478 = createNode("OrientationInterpolator");
OrientationInterpolator1478.DEF = "r_ring1Relax";
OrientationInterpolator1478.key = new MFFloat(new float[0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1478.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.135,0.135,1,0.27,0.135,0.135,1,0.27,0.135,0.15,1,0.27,0,0,1,0]);
children[30] = OrientationInterpolator1478;

OrientationInterpolator OrientationInterpolator1479 = createNode("OrientationInterpolator");
OrientationInterpolator1479.DEF = "r_pinky0Relax";
OrientationInterpolator1479.key = new MFFloat(new float[0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1479.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.35,0.35,-0.7,0.12,0.35,0.35,-0.9,0.12,0.35,0.35,-0.7,0.12,0,0,1,0]);
children[31] = OrientationInterpolator1479;

OrientationInterpolator OrientationInterpolator1480 = createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "r_pinky1Relax";
OrientationInterpolator1480.key = new MFFloat(new float[0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1480.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.2,0.25,1,0.27,0.2,0.22,1,0.27,0.22,0.2,1,0.27,0,0,1,0]);
children[32] = OrientationInterpolator1480;

OrientationInterpolator OrientationInterpolator1481 = createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "r_thumb1Relax";
OrientationInterpolator1481.key = new MFFloat(new float[0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1481.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.16,0.16,0.785,0.5,-0.16,0.16,0.785,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]);
children[33] = OrientationInterpolator1481;

OrientationInterpolator OrientationInterpolator1482 = createNode("OrientationInterpolator");
OrientationInterpolator1482.DEF = "r_thumb2Relax";
OrientationInterpolator1482.key = new MFFloat(new float[0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1482.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.45,1,0,0,0.45,1,0,0,0.45,0,0,1,0]);
children[34] = OrientationInterpolator1482;

OrientationInterpolator OrientationInterpolator1483 = createNode("OrientationInterpolator");
OrientationInterpolator1483.DEF = "r_thumb3Relax";
OrientationInterpolator1483.key = new MFFloat(new float[0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1483.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.45,0,0,1,0,0,0,1,0]);
children[35] = OrientationInterpolator1483;

OrientationInterpolator OrientationInterpolator1484 = createNode("OrientationInterpolator");
OrientationInterpolator1484.DEF = "r_fingers2Relax";
OrientationInterpolator1484.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1484.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.43,0,0,1,0.44,0,0,1,0.46,0,0,1,0.44,0,0,1,0.245,0,0,1,0.24,0,0,1,0.21,0,0,1,0.24,0,0,1,0]);
children[36] = OrientationInterpolator1484;

OrientationInterpolator OrientationInterpolator1485 = createNode("OrientationInterpolator");
OrientationInterpolator1485.DEF = "r_fingers3Relax";
OrientationInterpolator1485.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1485.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.37,0,0,1,0.38,0,0,1,0.39,0,0,1,0.38,0,0,1,0.27,0,0,1,0.28,0,0,1,0.27,0,0,1,0.28,0,0,1,0]);
children[37] = OrientationInterpolator1485;

ROUTE ROUTE1486 = createNode("ROUTE");
ROUTE1486.fromField = "value_changed";
ROUTE1486.fromNode = "r_sternoclavicularRelax";
ROUTE1486.toField = "set_rotation";
ROUTE1486.toNode = "Joe_r_sternoclavicular";
children[38] = ROUTE1486;

ROUTE ROUTE1487 = createNode("ROUTE");
ROUTE1487.fromField = "value_changed";
ROUTE1487.fromNode = "r_acromioclavicularRelax";
ROUTE1487.toField = "set_rotation";
ROUTE1487.toNode = "Joe_r_acromioclavicular";
children[39] = ROUTE1487;

ROUTE ROUTE1488 = createNode("ROUTE");
ROUTE1488.fromField = "value_changed";
ROUTE1488.fromNode = "r_shoulderRelax";
ROUTE1488.toField = "set_rotation";
ROUTE1488.toNode = "Joe_r_shoulder";
children[40] = ROUTE1488;

ROUTE ROUTE1489 = createNode("ROUTE");
ROUTE1489.fromField = "value_changed";
ROUTE1489.fromNode = "r_elbowRelax";
ROUTE1489.toField = "set_rotation";
ROUTE1489.toNode = "Joe_r_elbow";
children[41] = ROUTE1489;

ROUTE ROUTE1490 = createNode("ROUTE");
ROUTE1490.fromField = "value_changed";
ROUTE1490.fromNode = "r_wristRelax";
ROUTE1490.toField = "set_rotation";
ROUTE1490.toNode = "Joe_r_radiocarpal";
children[42] = ROUTE1490;

ROUTE ROUTE1491 = createNode("ROUTE");
ROUTE1491.fromField = "value_changed";
ROUTE1491.fromNode = "r_thumb1Relax";
ROUTE1491.toField = "set_rotation";
ROUTE1491.toNode = "Joe_r_carpometacarpal_1";
children[43] = ROUTE1491;

ROUTE ROUTE1492 = createNode("ROUTE");
ROUTE1492.fromField = "value_changed";
ROUTE1492.fromNode = "r_thumb2Relax";
ROUTE1492.toField = "set_rotation";
ROUTE1492.toNode = "Joe_r_metacarpophalangeal_1";
children[44] = ROUTE1492;

ROUTE ROUTE1493 = createNode("ROUTE");
ROUTE1493.fromField = "value_changed";
ROUTE1493.fromNode = "r_thumb3Relax";
ROUTE1493.toField = "set_rotation";
ROUTE1493.toNode = "Joe_r_carpal_interphalangeal_1";
children[45] = ROUTE1493;

ROUTE ROUTE1494 = createNode("ROUTE");
ROUTE1494.fromField = "value_changed";
ROUTE1494.fromNode = "r_index0Relax";
ROUTE1494.toField = "set_rotation";
ROUTE1494.toNode = "Joe_r_carpometacarpal_2";
children[46] = ROUTE1494;

ROUTE ROUTE1495 = createNode("ROUTE");
ROUTE1495.fromField = "value_changed";
ROUTE1495.fromNode = "r_index1Relax";
ROUTE1495.toField = "set_rotation";
ROUTE1495.toNode = "Joe_r_metacarpophalangeal_2";
children[47] = ROUTE1495;

ROUTE ROUTE1496 = createNode("ROUTE");
ROUTE1496.fromField = "value_changed";
ROUTE1496.fromNode = "r_fingers2Relax";
ROUTE1496.toField = "set_rotation";
ROUTE1496.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
children[48] = ROUTE1496;

ROUTE ROUTE1497 = createNode("ROUTE");
ROUTE1497.fromField = "value_changed";
ROUTE1497.fromNode = "r_fingers3Relax";
ROUTE1497.toField = "set_rotation";
ROUTE1497.toNode = "Joe_r_carpal_distal_interphalangeal_2";
children[49] = ROUTE1497;

ROUTE ROUTE1498 = createNode("ROUTE");
ROUTE1498.fromField = "value_changed";
ROUTE1498.fromNode = "r_middle0Relax";
ROUTE1498.toField = "set_rotation";
ROUTE1498.toNode = "Joe_r_carpometacarpal_3";
children[50] = ROUTE1498;

ROUTE ROUTE1499 = createNode("ROUTE");
ROUTE1499.fromField = "value_changed";
ROUTE1499.fromNode = "r_middle1Relax";
ROUTE1499.toField = "set_rotation";
ROUTE1499.toNode = "Joe_r_metacarpophalangeal_3";
children[51] = ROUTE1499;

ROUTE ROUTE1500 = createNode("ROUTE");
ROUTE1500.fromField = "value_changed";
ROUTE1500.fromNode = "r_fingers2Relax";
ROUTE1500.toField = "set_rotation";
ROUTE1500.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
children[52] = ROUTE1500;

ROUTE ROUTE1501 = createNode("ROUTE");
ROUTE1501.fromField = "value_changed";
ROUTE1501.fromNode = "r_fingers3Relax";
ROUTE1501.toField = "set_rotation";
ROUTE1501.toNode = "Joe_r_carpal_distal_interphalangeal_3";
children[53] = ROUTE1501;

ROUTE ROUTE1502 = createNode("ROUTE");
ROUTE1502.fromField = "value_changed";
ROUTE1502.fromNode = "r_ring0Relax";
ROUTE1502.toField = "set_rotation";
ROUTE1502.toNode = "Joe_r_carpometacarpal_4";
children[54] = ROUTE1502;

ROUTE ROUTE1503 = createNode("ROUTE");
ROUTE1503.fromField = "value_changed";
ROUTE1503.fromNode = "r_ring1Relax";
ROUTE1503.toField = "set_rotation";
ROUTE1503.toNode = "Joe_r_metacarpophalangeal_4";
children[55] = ROUTE1503;

ROUTE ROUTE1504 = createNode("ROUTE");
ROUTE1504.fromField = "value_changed";
ROUTE1504.fromNode = "r_fingers2Relax";
ROUTE1504.toField = "set_rotation";
ROUTE1504.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
children[56] = ROUTE1504;

ROUTE ROUTE1505 = createNode("ROUTE");
ROUTE1505.fromField = "value_changed";
ROUTE1505.fromNode = "r_fingers3Relax";
ROUTE1505.toField = "set_rotation";
ROUTE1505.toNode = "Joe_r_carpal_distal_interphalangeal_4";
children[57] = ROUTE1505;

ROUTE ROUTE1506 = createNode("ROUTE");
ROUTE1506.fromField = "value_changed";
ROUTE1506.fromNode = "r_pinky0Relax";
ROUTE1506.toField = "set_rotation";
ROUTE1506.toNode = "Joe_r_carpometacarpal_5";
children[58] = ROUTE1506;

ROUTE ROUTE1507 = createNode("ROUTE");
ROUTE1507.fromField = "value_changed";
ROUTE1507.fromNode = "r_pinky1Relax";
ROUTE1507.toField = "set_rotation";
ROUTE1507.toNode = "Joe_r_metacarpophalangeal_5";
children[59] = ROUTE1507;

ROUTE ROUTE1508 = createNode("ROUTE");
ROUTE1508.fromField = "value_changed";
ROUTE1508.fromNode = "r_fingers2Relax";
ROUTE1508.toField = "set_rotation";
ROUTE1508.toNode = "Joe_r_carpal_proximal_interphalangeal_5";
children[60] = ROUTE1508;

ROUTE ROUTE1509 = createNode("ROUTE");
ROUTE1509.fromField = "value_changed";
ROUTE1509.fromNode = "r_fingers3Relax";
ROUTE1509.toField = "set_rotation";
ROUTE1509.toNode = "Joe_r_carpal_distal_interphalangeal_5";
children[61] = ROUTE1509;

OrientationInterpolator OrientationInterpolator1510 = createNode("OrientationInterpolator");
OrientationInterpolator1510.DEF = "r_sternoclavicularRoll";
OrientationInterpolator1510.key = new MFFloat(new float[0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1510.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.1,0,0,-1,0.22,0,0.5,-1,0.27,0,0,-1,0.1,0,0,1,0,0,0,1,0]);
children[62] = OrientationInterpolator1510;

OrientationInterpolator OrientationInterpolator1511 = createNode("OrientationInterpolator");
OrientationInterpolator1511.DEF = "r_acromioclavicularRoll";
OrientationInterpolator1511.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1511.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
children[63] = OrientationInterpolator1511;

OrientationInterpolator OrientationInterpolator1512 = createNode("OrientationInterpolator");
OrientationInterpolator1512.DEF = "r_shoulderRoll";
OrientationInterpolator1512.key = new MFFloat(new float[0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1512.keyValue = new MFRotation(new float[1,0,0,0,0,0,-1,1.66,-0.25,0,-1,1.76,0,0,-1,1.256,0,0,-1,0.05,1,0,0,0]);
children[64] = OrientationInterpolator1512;

OrientationInterpolator OrientationInterpolator1513 = createNode("OrientationInterpolator");
OrientationInterpolator1513.DEF = "r_ForeArmPitch";
OrientationInterpolator1513.key = new MFFloat(new float[0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1513.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.55,-1,-0.25,0,2.55,-1,-0.25,0,2.55,-1,-0.25,0,2.55,0,0,1,0,0,0,1,0]);
children[65] = OrientationInterpolator1513;

OrientationInterpolator OrientationInterpolator1514 = createNode("OrientationInterpolator");
OrientationInterpolator1514.DEF = "r_wristRoll";
OrientationInterpolator1514.key = new MFFloat(new float[0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
OrientationInterpolator1514.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,1,0,1.55,0,0,-1,1.55,0,0,1,0,0,0,1,0]);
children[66] = OrientationInterpolator1514;

OrientationInterpolator OrientationInterpolator1515 = createNode("OrientationInterpolator");
OrientationInterpolator1515.DEF = "r_handPitch";
OrientationInterpolator1515.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1515.keyValue = new MFRotation(new float[0,0,1,0,0,0,0.01,0.25,0,0,-0.01,0.03,0,0,0.01,0.05,0,0,0.01,0.01,0,0,1,0]);
children[67] = OrientationInterpolator1515;

OrientationInterpolator OrientationInterpolator1516 = createNode("OrientationInterpolator");
OrientationInterpolator1516.DEF = "r_thumb1Pitch";
OrientationInterpolator1516.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1516.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.4,1,0,0,0.2,1,0,0,0]);
children[68] = OrientationInterpolator1516;

OrientationInterpolator OrientationInterpolator1517 = createNode("OrientationInterpolator");
OrientationInterpolator1517.DEF = "r_thumb2Pitch";
OrientationInterpolator1517.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1517.keyValue = new MFRotation(new float[0,0,1,0,1,1,0,0.3,1,1,0,0.3,1,1,0,0.6,1,1,0,0.3,0,1,1,0]);
children[69] = OrientationInterpolator1517;

OrientationInterpolator OrientationInterpolator1518 = createNode("OrientationInterpolator");
OrientationInterpolator1518.DEF = "l_shoulderRoll";
OrientationInterpolator1518.key = new MFFloat(new float[0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1518.keyValue = new MFRotation(new float[0.25,0,1,1.76,0,0,1,1.66,0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0.25,0,1,1.76]);
children[70] = OrientationInterpolator1518;

ROUTE ROUTE1519 = createNode("ROUTE");
ROUTE1519.fromField = "fraction_changed";
ROUTE1519.fromNode = "Time2";
ROUTE1519.toField = "set_fraction";
ROUTE1519.toNode = "r_sternoclavicularRoll";
children[71] = ROUTE1519;

ROUTE ROUTE1520 = createNode("ROUTE");
ROUTE1520.fromField = "fraction_changed";
ROUTE1520.fromNode = "Time2";
ROUTE1520.toField = "set_fraction";
ROUTE1520.toNode = "r_acromioclavicularRoll";
children[72] = ROUTE1520;

ROUTE ROUTE1521 = createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "Time2";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "r_shoulderRoll";
children[73] = ROUTE1521;

ROUTE ROUTE1522 = createNode("ROUTE");
ROUTE1522.fromField = "fraction_changed";
ROUTE1522.fromNode = "Time2";
ROUTE1522.toField = "set_fraction";
ROUTE1522.toNode = "r_ForeArmPitch";
children[74] = ROUTE1522;

ROUTE ROUTE1523 = createNode("ROUTE");
ROUTE1523.fromField = "fraction_changed";
ROUTE1523.fromNode = "Time2";
ROUTE1523.toField = "set_fraction";
ROUTE1523.toNode = "r_wristRoll";
children[75] = ROUTE1523;

ROUTE ROUTE1524 = createNode("ROUTE");
ROUTE1524.fromField = "fraction_changed";
ROUTE1524.fromNode = "Time2";
ROUTE1524.toField = "set_fraction";
ROUTE1524.toNode = "r_handPitch";
children[76] = ROUTE1524;

ROUTE ROUTE1525 = createNode("ROUTE");
ROUTE1525.fromField = "fraction_changed";
ROUTE1525.fromNode = "Time2";
ROUTE1525.toField = "set_fraction";
ROUTE1525.toNode = "r_thumb1Pitch";
children[77] = ROUTE1525;

ROUTE ROUTE1526 = createNode("ROUTE");
ROUTE1526.fromField = "fraction_changed";
ROUTE1526.fromNode = "Time2";
ROUTE1526.toField = "set_fraction";
ROUTE1526.toNode = "r_thumb2Pitch";
children[78] = ROUTE1526;

ROUTE ROUTE1527 = createNode("ROUTE");
ROUTE1527.fromField = "value_changed";
ROUTE1527.fromNode = "r_sternoclavicularRoll";
ROUTE1527.toField = "set_rotation";
ROUTE1527.toNode = "Joe_r_sternoclavicular";
children[79] = ROUTE1527;

ROUTE ROUTE1528 = createNode("ROUTE");
ROUTE1528.fromField = "value_changed";
ROUTE1528.fromNode = "r_acromioclavicularRoll";
ROUTE1528.toField = "set_rotation";
ROUTE1528.toNode = "Joe_r_acromioclavicular";
children[80] = ROUTE1528;

ROUTE ROUTE1529 = createNode("ROUTE");
ROUTE1529.fromField = "value_changed";
ROUTE1529.fromNode = "r_shoulderRoll";
ROUTE1529.toField = "set_rotation";
ROUTE1529.toNode = "Joe_r_shoulder";
children[81] = ROUTE1529;

ROUTE ROUTE1530 = createNode("ROUTE");
ROUTE1530.fromField = "value_changed";
ROUTE1530.fromNode = "r_ForeArmPitch";
ROUTE1530.toField = "set_rotation";
ROUTE1530.toNode = "Joe_r_elbow";
children[82] = ROUTE1530;

ROUTE ROUTE1531 = createNode("ROUTE");
ROUTE1531.fromField = "value_changed";
ROUTE1531.fromNode = "r_wristRoll";
ROUTE1531.toField = "set_rotation";
ROUTE1531.toNode = "Joe_r_radiocarpal";
children[83] = ROUTE1531;

ROUTE ROUTE1532 = createNode("ROUTE");
ROUTE1532.fromField = "value_changed";
ROUTE1532.fromNode = "r_handPitch";
ROUTE1532.toField = "set_rotation";
ROUTE1532.toNode = "Joe_r_carpometacarpal_2";
children[84] = ROUTE1532;

ROUTE ROUTE1533 = createNode("ROUTE");
ROUTE1533.fromField = "value_changed";
ROUTE1533.fromNode = "r_handPitch";
ROUTE1533.toField = "set_rotation";
ROUTE1533.toNode = "Joe_r_metacarpophalangeal_2";
children[85] = ROUTE1533;

ROUTE ROUTE1534 = createNode("ROUTE");
ROUTE1534.fromField = "value_changed";
ROUTE1534.fromNode = "r_handPitch";
ROUTE1534.toField = "set_rotation";
ROUTE1534.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
children[86] = ROUTE1534;

ROUTE ROUTE1535 = createNode("ROUTE");
ROUTE1535.fromField = "value_changed";
ROUTE1535.fromNode = "r_handPitch";
ROUTE1535.toField = "set_rotation";
ROUTE1535.toNode = "Joe_r_carpal_distal_interphalangeal_2";
children[87] = ROUTE1535;

ROUTE ROUTE1536 = createNode("ROUTE");
ROUTE1536.fromField = "value_changed";
ROUTE1536.fromNode = "r_handPitch";
ROUTE1536.toField = "set_rotation";
ROUTE1536.toNode = "Joe_r_carpometacarpal_3";
children[88] = ROUTE1536;

ROUTE ROUTE1537 = createNode("ROUTE");
ROUTE1537.fromField = "value_changed";
ROUTE1537.fromNode = "r_handPitch";
ROUTE1537.toField = "set_rotation";
ROUTE1537.toNode = "Joe_r_metacarpophalangeal_3";
children[89] = ROUTE1537;

ROUTE ROUTE1538 = createNode("ROUTE");
ROUTE1538.fromField = "value_changed";
ROUTE1538.fromNode = "r_handPitch";
ROUTE1538.toField = "set_rotation";
ROUTE1538.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
children[90] = ROUTE1538;

ROUTE ROUTE1539 = createNode("ROUTE");
ROUTE1539.fromField = "value_changed";
ROUTE1539.fromNode = "r_handPitch";
ROUTE1539.toField = "set_rotation";
ROUTE1539.toNode = "Joe_r_carpal_distal_interphalangeal_3";
children[91] = ROUTE1539;

ROUTE ROUTE1540 = createNode("ROUTE");
ROUTE1540.fromField = "value_changed";
ROUTE1540.fromNode = "r_handPitch";
ROUTE1540.toField = "set_rotation";
ROUTE1540.toNode = "Joe_r_carpometacarpal_4";
children[92] = ROUTE1540;

ROUTE ROUTE1541 = createNode("ROUTE");
ROUTE1541.fromField = "value_changed";
ROUTE1541.fromNode = "r_handPitch";
ROUTE1541.toField = "set_rotation";
ROUTE1541.toNode = "Joe_r_metacarpophalangeal_4";
children[93] = ROUTE1541;

ROUTE ROUTE1542 = createNode("ROUTE");
ROUTE1542.fromField = "value_changed";
ROUTE1542.fromNode = "r_handPitch";
ROUTE1542.toField = "set_rotation";
ROUTE1542.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
children[94] = ROUTE1542;

ROUTE ROUTE1543 = createNode("ROUTE");
ROUTE1543.fromField = "value_changed";
ROUTE1543.fromNode = "r_handPitch";
ROUTE1543.toField = "set_rotation";
ROUTE1543.toNode = "Joe_r_carpal_distal_interphalangeal_4";
children[95] = ROUTE1543;

ROUTE ROUTE1544 = createNode("ROUTE");
ROUTE1544.fromField = "value_changed";
ROUTE1544.fromNode = "r_handPitch";
ROUTE1544.toField = "set_rotation";
ROUTE1544.toNode = "Joe_r_carpometacarpal_5";
children[96] = ROUTE1544;

ROUTE ROUTE1545 = createNode("ROUTE");
ROUTE1545.fromField = "value_changed";
ROUTE1545.fromNode = "r_handPitch";
ROUTE1545.toField = "set_rotation";
ROUTE1545.toNode = "Joe_r_metacarpophalangeal_5";
children[97] = ROUTE1545;

ROUTE ROUTE1546 = createNode("ROUTE");
ROUTE1546.fromField = "value_changed";
ROUTE1546.fromNode = "r_handPitch";
ROUTE1546.toField = "set_rotation";
ROUTE1546.toNode = "Joe_r_carpal_proximal_interphalangeal_5";
children[98] = ROUTE1546;

ROUTE ROUTE1547 = createNode("ROUTE");
ROUTE1547.fromField = "value_changed";
ROUTE1547.fromNode = "r_handPitch";
ROUTE1547.toField = "set_rotation";
ROUTE1547.toNode = "Joe_r_carpal_distal_interphalangeal_5";
children[99] = ROUTE1547;

ROUTE ROUTE1548 = createNode("ROUTE");
ROUTE1548.fromField = "value_changed";
ROUTE1548.fromNode = "r_thumb1Pitch";
ROUTE1548.toField = "set_rotation";
ROUTE1548.toNode = "Joe_r_carpometacarpal_1";
children[100] = ROUTE1548;

ROUTE ROUTE1549 = createNode("ROUTE");
ROUTE1549.fromField = "value_changed";
ROUTE1549.fromNode = "r_thumb2Pitch";
ROUTE1549.toField = "set_rotation";
ROUTE1549.toNode = "Joe_r_metacarpophalangeal_1";
children[101] = ROUTE1549;

ROUTE ROUTE1550 = createNode("ROUTE");
ROUTE1550.fromField = "value_changed";
ROUTE1550.fromNode = "r_thumb2Pitch";
ROUTE1550.toField = "set_rotation";
ROUTE1550.toNode = "Joe_r_carpal_interphalangeal_1";
children[102] = ROUTE1550;

ROUTE ROUTE1551 = createNode("ROUTE");
ROUTE1551.fromField = "value_changed";
ROUTE1551.fromNode = "l_shoulderRoll";
ROUTE1551.toField = "set_rotation";
ROUTE1551.toNode = "Joe_l_shoulder";
children[103] = ROUTE1551;

Group Group1552 = createNode("Group");
PositionInterpolator PositionInterpolator1553 = createNode("PositionInterpolator");
PositionInterpolator1553.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator1553.key = new MFFloat(new float[0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1553.keyValue = new MFVec3f(new float[0,-0.0093,0,0,-0.0039,0,0,-0.0088,0,0,-0.0149,0,0,-0.0264,0,0,-0.0393,0,0,-0.0502,0,0,-0.0747,0,0,-0.0273,0,0,-0.0161,0,0,-0.0113,0,0,-0.0058,0,0,-0.002,0,0,-0.0026,0,0,-0.0143,0,0,-0.038,0,0,-0.0565,0,0,-0.045,0,0,-0.0093,0]);
Group1552.children = new MFNode();

Group1552.children[0] = PositionInterpolator1553;

OrientationInterpolator OrientationInterpolator1554 = createNode("OrientationInterpolator");
OrientationInterpolator1554.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator1554.key = new MFFloat(new float[0,1]);
OrientationInterpolator1554.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
Group1552.children[1] = OrientationInterpolator1554;

OrientationInterpolator OrientationInterpolator1555 = createNode("OrientationInterpolator");
OrientationInterpolator1555.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator1555.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1555.keyValue = new MFRotation(new float[-0.873,0.0609,0.484,0.2865,0.9963,-0.0106,0.0848,0.2488,0.9965,0.0159,-0.0822,0.3836,-0.7018,-0.0322,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.0223,0.0817,0.5351,-0.9809,0.0491,0.1881,0.5204,-0.873,0.0609,0.484,0.2865]);
Group1552.children[2] = OrientationInterpolator1555;

OrientationInterpolator OrientationInterpolator1556 = createNode("OrientationInterpolator");
OrientationInterpolator1556.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator1556.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1556.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.0868,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.0996,1,0,0,0.3942,1,0,0,0.3226]);
Group1552.children[3] = OrientationInterpolator1556;

OrientationInterpolator OrientationInterpolator1557 = createNode("OrientationInterpolator");
OrientationInterpolator1557.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator1557.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1557.keyValue = new MFRotation(new float[-1,0,0,0.0671,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.2222,-1,0,0,0.0671]);
Group1552.children[4] = OrientationInterpolator1557;

OrientationInterpolator OrientationInterpolator1558 = createNode("OrientationInterpolator");
OrientationInterpolator1558.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator1558.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1558.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.4,1,0,0,0.127,-1,0,0,0.018,-1,0,0,0.058,-1,0,0,0.24,-1,0,0,0.35,-1,0,0,0.33,0,0,1,0]);
Group1552.children[5] = OrientationInterpolator1558;

OrientationInterpolator OrientationInterpolator1559 = createNode("OrientationInterpolator");
OrientationInterpolator1559.DEF = "L_subtalar_ANIMATOR";
OrientationInterpolator1559.key = new MFFloat(new float[0,0.3,1]);
OrientationInterpolator1559.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1552.children[6] = OrientationInterpolator1559;

OrientationInterpolator OrientationInterpolator1560 = createNode("OrientationInterpolator");
OrientationInterpolator1560.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator1560.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1560.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.2,1,0,0,0]);
Group1552.children[7] = OrientationInterpolator1560;

OrientationInterpolator OrientationInterpolator1561 = createNode("OrientationInterpolator");
OrientationInterpolator1561.DEF = "L_metatarsal_ANIMATOR";
OrientationInterpolator1561.key = new MFFloat(new float[0,0.2,0.4,0.8,1]);
OrientationInterpolator1561.keyValue = new MFRotation(new float[-1,0,0,0.3,-1,0,0,0.15,1,0,0,0.3,0,0,1,0,-1,0,0,0.3]);
Group1552.children[8] = OrientationInterpolator1561;

OrientationInterpolator OrientationInterpolator1562 = createNode("OrientationInterpolator");
OrientationInterpolator1562.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator1562.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1562.keyValue = new MFRotation(new float[-0.5831,0.0351,0.8116,0.1481,-0.995,0.023,0.0967,0.4683,-1,0.0019,0.008,0.4732,-0.998,-0.0158,-0.061,0.5079,-0.9911,-0.0354,-0.1286,0.5419,-0.9131,-0.0624,-0.403,0.3361,-0.4306,-0.0796,-0.899,0.0704,1,0,0,0.2571,0.9891,-0.0281,0.1444,0.3879,-0.5831,0.0351,0.8116,0.1481]);
Group1552.children[9] = OrientationInterpolator1562;

OrientationInterpolator OrientationInterpolator1563 = createNode("OrientationInterpolator");
OrientationInterpolator1563.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator1563.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1563.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.0935,1,0,0,0.0856,1,0,0,0.2475,1,0,0,0.8573]);
Group1552.children[10] = OrientationInterpolator1563;

OrientationInterpolator OrientationInterpolator1564 = createNode("OrientationInterpolator");
OrientationInterpolator1564.DEF = "R_subtalar_ANIMATOR";
OrientationInterpolator1564.key = new MFFloat(new float[0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1564.keyValue = new MFRotation(new float[-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]);
Group1552.children[11] = OrientationInterpolator1564;

OrientationInterpolator OrientationInterpolator1565 = createNode("OrientationInterpolator");
OrientationInterpolator1565.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator1565.key = new MFFloat(new float[0,0.22,1]);
OrientationInterpolator1565.keyValue = new MFRotation(new float[1,0,0,-0.2,0,0,1,0,1,0,0,-0.2]);
Group1552.children[12] = OrientationInterpolator1565;

OrientationInterpolator OrientationInterpolator1566 = createNode("OrientationInterpolator");
OrientationInterpolator1566.DEF = "R_metatarsal_ANIMATOR";
OrientationInterpolator1566.key = new MFFloat(new float[0,0.2,0.4,0.8,1]);
OrientationInterpolator1566.keyValue = new MFRotation(new float[-1,0,0,0.15,0,0,1,0,1,0,0,0.3,-1,0,0,0.3,-1,0,0,0.15]);
Group1552.children[13] = OrientationInterpolator1566;

OrientationInterpolator OrientationInterpolator1567 = createNode("OrientationInterpolator");
OrientationInterpolator1567.DEF = "VL5_ANIMATOR";
OrientationInterpolator1567.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1567.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.0197,-0.5974,0.8017,0.0823,0.0093,-0.9648,0.2627,0.1734,-0.0124,0.9549,-0.2968,0.0873,-0.0081,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group1552.children[14] = OrientationInterpolator1567;

OrientationInterpolator OrientationInterpolator1568 = createNode("OrientationInterpolator");
OrientationInterpolator1568.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator1568.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1568.keyValue = new MFRotation(new float[0,-1,0,0.0864,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.0439,0,-1,0,0.0312,0,-1,0,0.0794,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.0864]);
Group1552.children[15] = OrientationInterpolator1568;

OrientationInterpolator OrientationInterpolator1569 = createNode("OrientationInterpolator");
OrientationInterpolator1569.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator1569.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1569.keyValue = new MFRotation(new float[1,0,0.4,0.12,-1,0,0.4,0.186,1,0,0.1,0.336,1,0,0.4,0.12]);
Group1552.children[16] = OrientationInterpolator1569;

OrientationInterpolator OrientationInterpolator1570 = createNode("OrientationInterpolator");
OrientationInterpolator1570.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator1570.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1570.keyValue = new MFRotation(new float[-1,0,0,0.066,-1,0,0,0.488,-1,0,0,0.0177,-1,0,0,0.066]);
Group1552.children[17] = OrientationInterpolator1570;

OrientationInterpolator OrientationInterpolator1571 = createNode("OrientationInterpolator");
OrientationInterpolator1571.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator1571.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1571.keyValue = new MFRotation(new float[0,-1,0,0.461,-0.3302,-0.9275,0.1755,0.5388,0.0328,-0.9993,-0.0172,0.492,0,-1,0,0.4611]);
Group1552.children[18] = OrientationInterpolator1571;

OrientationInterpolator OrientationInterpolator1572 = createNode("OrientationInterpolator");
OrientationInterpolator1572.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator1572.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1572.keyValue = new MFRotation(new float[-1,0,-1,0.092,1,0,-0.2,0.3197,-1,0,-0.5,0.1564,-1,0,-1,0.092]);
Group1552.children[19] = OrientationInterpolator1572;

OrientationInterpolator OrientationInterpolator1573 = createNode("OrientationInterpolator");
OrientationInterpolator1573.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator1573.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1573.keyValue = new MFRotation(new float[-1,0,0,0.4115,-1,0,0,0.0925,-1,0,0,0.5726,-1,0,0,0.4115]);
Group1552.children[20] = OrientationInterpolator1573;

OrientationInterpolator OrientationInterpolator1574 = createNode("OrientationInterpolator");
OrientationInterpolator1574.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator1574.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1574.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.0258,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group1552.children[21] = OrientationInterpolator1574;

children[104] = Group1552;

ROUTE ROUTE1575 = createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "Time1";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
children[105] = ROUTE1575;

ROUTE ROUTE1576 = createNode("ROUTE");
ROUTE1576.fromField = "fraction_changed";
ROUTE1576.fromNode = "Time1";
ROUTE1576.toField = "set_fraction";
ROUTE1576.toNode = "HUMANOIDROOT_ANIMATOR";
children[106] = ROUTE1576;

ROUTE ROUTE1577 = createNode("ROUTE");
ROUTE1577.fromField = "fraction_changed";
ROUTE1577.fromNode = "Time1";
ROUTE1577.toField = "set_fraction";
ROUTE1577.toNode = "L_HIP_ANIMATOR";
children[107] = ROUTE1577;

ROUTE ROUTE1578 = createNode("ROUTE");
ROUTE1578.fromField = "fraction_changed";
ROUTE1578.fromNode = "Time1";
ROUTE1578.toField = "set_fraction";
ROUTE1578.toNode = "L_KNEE_ANIMATOR";
children[108] = ROUTE1578;

ROUTE ROUTE1579 = createNode("ROUTE");
ROUTE1579.fromField = "fraction_changed";
ROUTE1579.fromNode = "Time1";
ROUTE1579.toField = "set_fraction";
ROUTE1579.toNode = "L_ANKLE_ANIMATOR";
children[109] = ROUTE1579;

ROUTE ROUTE1580 = createNode("ROUTE");
ROUTE1580.fromField = "fraction_changed";
ROUTE1580.fromNode = "Time1";
ROUTE1580.toField = "set_fraction";
ROUTE1580.toNode = "L_subtalar_ANIMATOR";
children[110] = ROUTE1580;

ROUTE ROUTE1581 = createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "Time1";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "L_MIDTARSAL_ANIMATOR";
children[111] = ROUTE1581;

ROUTE ROUTE1582 = createNode("ROUTE");
ROUTE1582.fromField = "fraction_changed";
ROUTE1582.fromNode = "Time1";
ROUTE1582.toField = "set_fraction";
ROUTE1582.toNode = "L_metatarsal_ANIMATOR";
children[112] = ROUTE1582;

ROUTE ROUTE1583 = createNode("ROUTE");
ROUTE1583.fromField = "fraction_changed";
ROUTE1583.fromNode = "Time1";
ROUTE1583.toField = "set_fraction";
ROUTE1583.toNode = "R_HIP_ANIMATOR";
children[113] = ROUTE1583;

ROUTE ROUTE1584 = createNode("ROUTE");
ROUTE1584.fromField = "fraction_changed";
ROUTE1584.fromNode = "Time1";
ROUTE1584.toField = "set_fraction";
ROUTE1584.toNode = "R_KNEE_ANIMATOR";
children[114] = ROUTE1584;

ROUTE ROUTE1585 = createNode("ROUTE");
ROUTE1585.fromField = "fraction_changed";
ROUTE1585.fromNode = "Time1";
ROUTE1585.toField = "set_fraction";
ROUTE1585.toNode = "R_ANKLE_ANIMATOR";
children[115] = ROUTE1585;

ROUTE ROUTE1586 = createNode("ROUTE");
ROUTE1586.fromField = "fraction_changed";
ROUTE1586.fromNode = "Time1";
ROUTE1586.toField = "set_fraction";
ROUTE1586.toNode = "R_subtalar_ANIMATOR";
children[116] = ROUTE1586;

ROUTE ROUTE1587 = createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "Time1";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "R_MIDTARSAL_ANIMATOR";
children[117] = ROUTE1587;

ROUTE ROUTE1588 = createNode("ROUTE");
ROUTE1588.fromField = "fraction_changed";
ROUTE1588.fromNode = "Time1";
ROUTE1588.toField = "set_fraction";
ROUTE1588.toNode = "R_metatarsal_ANIMATOR";
children[118] = ROUTE1588;

ROUTE ROUTE1589 = createNode("ROUTE");
ROUTE1589.fromField = "fraction_changed";
ROUTE1589.fromNode = "Time1";
ROUTE1589.toField = "set_fraction";
ROUTE1589.toNode = "VL5_ANIMATOR";
children[119] = ROUTE1589;

ROUTE ROUTE1590 = createNode("ROUTE");
ROUTE1590.fromField = "fraction_changed";
ROUTE1590.fromNode = "Time1";
ROUTE1590.toField = "set_fraction";
ROUTE1590.toNode = "SKULLBASE_ANIMATOR";
children[120] = ROUTE1590;

ROUTE ROUTE1591 = createNode("ROUTE");
ROUTE1591.fromField = "fraction_changed";
ROUTE1591.fromNode = "Time1";
ROUTE1591.toField = "set_fraction";
ROUTE1591.toNode = "L_SHOULDER_ANIMATOR";
children[121] = ROUTE1591;

ROUTE ROUTE1592 = createNode("ROUTE");
ROUTE1592.fromField = "fraction_changed";
ROUTE1592.fromNode = "Time1";
ROUTE1592.toField = "set_fraction";
ROUTE1592.toNode = "L_ELBOW_ANIMATOR";
children[122] = ROUTE1592;

ROUTE ROUTE1593 = createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "Time1";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "L_WRIST_ANIMATOR";
children[123] = ROUTE1593;

ROUTE ROUTE1594 = createNode("ROUTE");
ROUTE1594.fromField = "value_changed";
ROUTE1594.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1594.toField = "set_translation";
ROUTE1594.toNode = "Joe_humanoid_root";
children[124] = ROUTE1594;

ROUTE ROUTE1595 = createNode("ROUTE");
ROUTE1595.fromField = "value_changed";
ROUTE1595.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1595.toField = "set_rotation";
ROUTE1595.toNode = "Joe_humanoid_root";
children[125] = ROUTE1595;

ROUTE ROUTE1596 = createNode("ROUTE");
ROUTE1596.fromField = "value_changed";
ROUTE1596.fromNode = "L_HIP_ANIMATOR";
ROUTE1596.toField = "set_rotation";
ROUTE1596.toNode = "Joe_l_hip";
children[126] = ROUTE1596;

ROUTE ROUTE1597 = createNode("ROUTE");
ROUTE1597.fromField = "value_changed";
ROUTE1597.fromNode = "L_KNEE_ANIMATOR";
ROUTE1597.toField = "set_rotation";
ROUTE1597.toNode = "Joe_l_knee";
children[127] = ROUTE1597;

ROUTE ROUTE1598 = createNode("ROUTE");
ROUTE1598.fromField = "value_changed";
ROUTE1598.fromNode = "L_ANKLE_ANIMATOR";
ROUTE1598.toField = "set_rotation";
ROUTE1598.toNode = "Joe_l_talocrural";
children[128] = ROUTE1598;

ROUTE ROUTE1599 = createNode("ROUTE");
ROUTE1599.fromField = "value_changed";
ROUTE1599.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1599.toField = "set_rotation";
ROUTE1599.toNode = "Joe_l_metatarsophalangeal_2";
children[129] = ROUTE1599;

ROUTE ROUTE1600 = createNode("ROUTE");
ROUTE1600.fromField = "value_changed";
ROUTE1600.fromNode = "L_subtalar_ANIMATOR";
ROUTE1600.toField = "set_rotation";
ROUTE1600.toNode = "Joe_l_tarsometatarsal_2";
children[130] = ROUTE1600;

ROUTE ROUTE1601 = createNode("ROUTE");
ROUTE1601.fromField = "value_changed";
ROUTE1601.fromNode = "L_metatarsal_ANIMATOR";
ROUTE1601.toField = "set_rotation";
ROUTE1601.toNode = "Joe_l_metatarsal";
children[131] = ROUTE1601;

ROUTE ROUTE1602 = createNode("ROUTE");
ROUTE1602.fromField = "value_changed";
ROUTE1602.fromNode = "R_HIP_ANIMATOR";
ROUTE1602.toField = "set_rotation";
ROUTE1602.toNode = "Joe_r_hip";
children[132] = ROUTE1602;

ROUTE ROUTE1603 = createNode("ROUTE");
ROUTE1603.fromField = "value_changed";
ROUTE1603.fromNode = "R_KNEE_ANIMATOR";
ROUTE1603.toField = "set_rotation";
ROUTE1603.toNode = "Joe_r_knee";
children[133] = ROUTE1603;

ROUTE ROUTE1604 = createNode("ROUTE");
ROUTE1604.fromField = "value_changed";
ROUTE1604.fromNode = "R_ANKLE_ANIMATOR";
ROUTE1604.toField = "set_rotation";
ROUTE1604.toNode = "Joe_r_talocrural";
children[134] = ROUTE1604;

ROUTE ROUTE1605 = createNode("ROUTE");
ROUTE1605.fromField = "value_changed";
ROUTE1605.fromNode = "R_subtalar_ANIMATOR";
ROUTE1605.toField = "set_rotation";
ROUTE1605.toNode = "Joe_r_tarsometatarsal_2";
children[135] = ROUTE1605;

ROUTE ROUTE1606 = createNode("ROUTE");
ROUTE1606.fromField = "value_changed";
ROUTE1606.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1606.toField = "set_rotation";
ROUTE1606.toNode = "Joe_r_metatarsophalangeal_2";
children[136] = ROUTE1606;

ROUTE ROUTE1607 = createNode("ROUTE");
ROUTE1607.fromField = "value_changed";
ROUTE1607.fromNode = "R_metatarsal_ANIMATOR";
ROUTE1607.toField = "set_rotation";
ROUTE1607.toNode = "Joe_r_tarsal_distal_interphalangeal_2";
children[137] = ROUTE1607;

ROUTE ROUTE1608 = createNode("ROUTE");
ROUTE1608.fromField = "value_changed";
ROUTE1608.fromNode = "VL5_ANIMATOR";
ROUTE1608.toField = "set_rotation";
ROUTE1608.toNode = "Joe_vl5";
children[138] = ROUTE1608;

ROUTE ROUTE1609 = createNode("ROUTE");
ROUTE1609.fromField = "value_changed";
ROUTE1609.fromNode = "SKULLBASE_ANIMATOR";
ROUTE1609.toField = "set_rotation";
ROUTE1609.toNode = "Joe_skullbase";
children[139] = ROUTE1609;

ROUTE ROUTE1610 = createNode("ROUTE");
ROUTE1610.fromField = "value_changed";
ROUTE1610.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE1610.toField = "set_rotation";
ROUTE1610.toNode = "Joe_l_shoulder";
children[140] = ROUTE1610;

ROUTE ROUTE1611 = createNode("ROUTE");
ROUTE1611.fromField = "value_changed";
ROUTE1611.fromNode = "L_ELBOW_ANIMATOR";
ROUTE1611.toField = "set_rotation";
ROUTE1611.toNode = "Joe_l_elbow";
children[141] = ROUTE1611;

ROUTE ROUTE1612 = createNode("ROUTE");
ROUTE1612.fromField = "value_changed";
ROUTE1612.fromNode = "L_WRIST_ANIMATOR";
ROUTE1612.toField = "set_rotation";
ROUTE1612.toNode = "Joe_l_radiocarpal";
children[142] = ROUTE1612;

ROUTE ROUTE1613 = createNode("ROUTE");
ROUTE1613.fromField = "value_changed";
ROUTE1613.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE1613.toField = "set_rotation";
ROUTE1613.toNode = "Joe_r_shoulder";
children[143] = ROUTE1613;

ROUTE ROUTE1614 = createNode("ROUTE");
ROUTE1614.fromField = "value_changed";
ROUTE1614.fromNode = "R_ELBOW_ANIMATOR";
ROUTE1614.toField = "set_rotation";
ROUTE1614.toNode = "Joe_r_elbow";
children[144] = ROUTE1614;

ROUTE ROUTE1615 = createNode("ROUTE");
ROUTE1615.fromField = "value_changed";
ROUTE1615.fromNode = "R_WRIST_ANIMATOR";
ROUTE1615.toField = "set_rotation";
ROUTE1615.toNode = "Joe_r_radiocarpal";
children[145] = ROUTE1615;

}
