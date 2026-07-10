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
meta3.content = "JoeSkeletonSkinSite.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.";
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
meta12.name = "Image";
meta12.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "drawing";
meta13.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "Image";
meta14.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "Image";
meta15.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Image";
meta17.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "generator";
meta22.content = "tovrmlx3d, https://castle-engine.io/convert.php";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "https://castle-engine.io/view3dscene.php#section_converting";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "translator";
meta24.content = "Michalis Kamburelis";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "translator";
meta25.content = "Don Brutzman";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "translator";
meta26.content = "Joe D. Williams";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "generator";
meta28.content = "X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "identifier";
meta29.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "license";
meta30.content = "../license.html";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "generator";
meta31.content = "X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[29] = meta31;

head = head1;

WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.info = new MFString(new java.lang.String["By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"]);
WorldInfo33.title = "JoeSkeletonSkinSite.x3d";
children = new MFNode();

children[0] = WorldInfo33;

NavigationInfo NavigationInfo34 = createNode("NavigationInfo");
NavigationInfo34.DEF = "HeadlightOnRevealsSkinTextureAndColors";
children[1] = NavigationInfo34;

Background Background35 = createNode("Background");
Background35.groundAngle = new MFFloat(new float[1.57]);
Background35.groundColor = new MFColor(new float[0,0.1,0,0,0.1,0]);
Background35.skyColor = new MFColor(new float[0,0,0.1]);
children[2] = Background35;

//Authoring hint: these axes are aligned within local coordinate system
Group Group36 = createNode("Group");
Group36.DEF = "ViewpointGroup";
Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Front Up View";
Viewpoint37.orientation = new SFRotation(new float[-1,-1,0,0.55]);
Viewpoint37.position = new SFVec3f(new float[-1,2,2.5]);
Group36.children = new MFNode();

Group36.children[0] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.description = "From Left View";
Viewpoint38.orientation = new SFRotation(new float[0.3,1,0,-1.57]);
Viewpoint38.position = new SFVec3f(new float[-2.5,1.5,0]);
Group36.children[1] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.description = "Front Mid View";
Viewpoint39.position = new SFVec3f(new float[0,0.5,1.25]);
Group36.children[2] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Front Feet View";
Viewpoint40.position = new SFVec3f(new float[0,0,0.75]);
Group36.children[3] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "From Right View";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint41.position = new SFVec3f(new float[1,1,0]);
Group36.children[4] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,1.65,0]);
Viewpoint42.description = "Front Head View";
Viewpoint42.position = new SFVec3f(new float[0,1.65,0.75]);
Group36.children[5] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.description = "Front Mid View";
Viewpoint43.position = new SFVec3f(new float[0,1,1.75]);
Group36.children[6] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "Rear View";
Viewpoint44.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint44.position = new SFVec3f(new float[0,1.5,-4]);
Group36.children[7] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.description = "Top View";
Viewpoint45.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint45.position = new SFVec3f(new float[0,4,0]);
Group36.children[8] = Viewpoint45;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.description = "Bottom View";
Viewpoint46.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint46.position = new SFVec3f(new float[0,-4,0]);
Group36.children[9] = Viewpoint46;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.description = "Right View";
Viewpoint47.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint47.position = new SFVec3f(new float[4,1.5,0]);
Group36.children[10] = Viewpoint47;

children[3] = Group36;

Group Group48 = createNode("Group");
Group48.DEF = "VisualizationShapes";
Group48.visible = False;
Transform Transform49 = createNode("Transform");
Transform49.scale = new SFVec3f(new float[5,5,5]);
Transform49.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape50 = createNode("Shape");
Shape50.DEF = "jointbox";
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.ambientIntensity = 0.5;
Material52.diffuseColor = new SFColor(new float[0,0,0]);
Material52.shininess = 1;
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet53.creaseAngle = 0.1;
Color Color54 = createNode("Color");
Color54.color = new MFColor(new float[1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
IndexedFaceSet53.color = Color54;

Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.DEF = "boxCoords";
Coordinate55.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet53.coord = Coordinate55;

Shape50.geometry = IndexedFaceSet53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Group48.children = new MFNode();

Group48.children[0] = Transform49;

Transform Transform56 = createNode("Transform");
Transform56.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform56.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Shape Shape57 = createNode("Shape");
Shape57.DEF = "sitebox";
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.ambientIntensity = 1;
Material59.diffuseColor = new SFColor(new float[1,0,0]);
Material59.emissiveColor = new SFColor(new float[1,0,0]);
Material59.shininess = 0.7;
Material59.specularColor = new SFColor(new float[1,0,0]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

IndexedFaceSet IndexedFaceSet60 = createNode("IndexedFaceSet");
IndexedFaceSet60.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet60.creaseAngle = 0.1;
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.USE = "boxCoords";
IndexedFaceSet60.coord = Coordinate61;

Shape57.geometry = IndexedFaceSet60;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

Group48.children[1] = Transform56;

Transform Transform62 = createNode("Transform");
Transform62.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform62.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Appearance64.DEF = "SegmentLine";
Material Material65 = createNode("Material");
Material65.diffuseColor = new SFColor(new float[0,1,0]);
Material65.emissiveColor = new SFColor(new float[0,1,0]);
Material65.specularColor = new SFColor(new float[0,1,0]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

IndexedLineSet IndexedLineSet66 = createNode("IndexedLineSet");
IndexedLineSet66.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate67 = createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0,0,0,0,0.0001,0]);
IndexedLineSet66.coord = Coordinate67;

Shape63.geometry = IndexedLineSet66;

Transform62.child = new undefined();

Transform62.child[0] = Shape63;

Group48.children[2] = Transform62;

Transform Transform68 = createNode("Transform");
Transform68.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform68.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Shape Shape69 = createNode("Shape");
Shape69.DEF = "skinsphere";
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.ambientIntensity = 0.5;
Material71.diffuseColor = new SFColor(new float[0,1,0]);
Material71.emissiveColor = new SFColor(new float[0,1,0]);
Material71.shininess = 1;
Material71.specularColor = new SFColor(new float[0,1,0]);
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

Sphere Sphere72 = createNode("Sphere");
Sphere72.radius = 0.005;
Shape69.geometry = Sphere72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Group48.children[3] = Transform68;

children[4] = Group48;

Group Group73 = createNode("Group");
Group73.DEF = "SpecHumanoid";
Group Group74 = createNode("Group");
Group74.DEF = "JoeISOHumanoid";
HAnimHumanoid HAnimHumanoid75 = createNode("HAnimHumanoid");
HAnimHumanoid75.name = "Human";
HAnimHumanoid75.DEF = "Joe_Human";
HAnimHumanoid75.loa = 4;
HAnimHumanoid75.version = "2.0";
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
MetadataSet MetadataSet76 = createNode("MetadataSet");
MetadataSet76.name = "HAnimHumanoid.info";
MetadataSet76.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString77 = createNode("MetadataString");
MetadataString77.name = "humanoidVersion";
MetadataString77.value = new MFString(new java.lang.String["2.0"]);
MetadataSet76.value = new MFNode();

MetadataSet76.value[0] = MetadataString77;

HAnimHumanoid75.metadata = new SFNode();

HAnimHumanoid75.metadata[0] = MetadataSet76;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "humanoid_root";
HAnimJoint78.DEF = "Joe_humanoid_root";
HAnimJoint78.center = new SFVec3f(new float[0,0.875,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "sacrum";
HAnimSegment79.DEF = "Joe_sacrum";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[0,0.875,0]);
Shape Shape81 = createNode("Shape");
Shape81.USE = "jointbox";
Transform80.child = new undefined();

Transform80.child[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
Appearance83.USE = "SegmentLine";
Shape82.appearance = Appearance83;

IndexedLineSet IndexedLineSet84 = createNode("IndexedLineSet");
IndexedLineSet84.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.875,0,0,0.92,0]);
IndexedLineSet84.coord = Coordinate85;

Shape82.geometry = IndexedLineSet84;

HAnimSegment79.children[1] = Shape82;

Transform Transform86 = createNode("Transform");
Transform86.translation = new SFVec3f(new float[0,0.92,0.08]);
Shape Shape87 = createNode("Shape");
Shape87.USE = "skinsphere";
Transform86.child = new undefined();

Transform86.child[0] = Shape87;

HAnimSegment79.children[2] = Transform86;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape89 = createNode("Shape");
Shape89.USE = "skinsphere";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSegment79.children[3] = Transform88;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "sacroiliac";
HAnimJoint90.DEF = "Joe_sacroiliac";
HAnimJoint90.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.name = "pelvis";
HAnimSegment91.DEF = "Joe_pelvis";
Transform Transform92 = createNode("Transform");
Transform92.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform93 = createNode("Transform");
Shape Shape94 = createNode("Shape");
Shape94.USE = "jointbox";
Transform93.child = new undefined();

Transform93.child[0] = Shape94;

Transform92.children = new MFNode();

Transform92.children[0] = Transform93;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Transform92;

Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Appearance96.USE = "SegmentLine";
Shape95.appearance = Appearance96;

IndexedLineSet IndexedLineSet97 = createNode("IndexedLineSet");
IndexedLineSet97.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate98 = createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
IndexedLineSet97.coord = Coordinate98;

Shape95.geometry = IndexedLineSet97;

HAnimSegment91.children[1] = Shape95;

HAnimSite HAnimSite99 = createNode("HAnimSite");
HAnimSite99.name = "l_iliocristale_pt";
HAnimSite99.DEF = "Joe_l_iliocristale_pt";
HAnimSite99.translation = new SFVec3f(new float[0.1425,1.065,0.0033]);
Shape Shape100 = createNode("Shape");
Shape100.USE = "sitebox";
HAnimSite99.children = new MFNode();

HAnimSite99.children[0] = Shape100;

HAnimSegment91.children[2] = HAnimSite99;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "l_trochanterion_pt";
HAnimSite101.DEF = "Joe_l_trochanterion_pt";
HAnimSite101.translation = new SFVec3f(new float[0.15,0.9,-0.01]);
Shape Shape102 = createNode("Shape");
Shape102.USE = "sitebox";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = Shape102;

HAnimSegment91.children[3] = HAnimSite101;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.name = "r_iliocristale_pt";
HAnimSite103.DEF = "Joe_r_iliocristale_pt";
HAnimSite103.translation = new SFVec3f(new float[-0.1425,1.065,0.0033]);
Shape Shape104 = createNode("Shape");
Shape104.USE = "sitebox";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = Shape104;

HAnimSegment91.children[4] = HAnimSite103;

HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.name = "r_trochanterion_pt";
HAnimSite105.DEF = "Joe_r_trochanterion_pt";
HAnimSite105.translation = new SFVec3f(new float[-0.15,0.9,-0.01]);
Shape Shape106 = createNode("Shape");
Shape106.USE = "sitebox";
HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = Shape106;

HAnimSegment91.children[5] = HAnimSite105;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.name = "l_asis_pt";
HAnimSite107.DEF = "Joe_l_asis_pt";
HAnimSite107.translation = new SFVec3f(new float[0.0935,1.03,0.075]);
Shape Shape108 = createNode("Shape");
Shape108.USE = "sitebox";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = Shape108;

HAnimSegment91.children[6] = HAnimSite107;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.name = "r_asis_pt";
HAnimSite109.DEF = "Joe_r_asis_pt";
HAnimSite109.translation = new SFVec3f(new float[-0.0935,1.03,0.075]);
Shape Shape110 = createNode("Shape");
Shape110.USE = "sitebox";
HAnimSite109.children = new MFNode();

HAnimSite109.children[0] = Shape110;

HAnimSegment91.children[7] = HAnimSite109;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "l_psis_pt";
HAnimSite111.DEF = "Joe_l_psis_pt";
HAnimSite111.translation = new SFVec3f(new float[0.0773,1.019,-0.12]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "sitebox";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = Shape112;

HAnimSegment91.children[8] = HAnimSite111;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "r_psis_pt";
HAnimSite113.DEF = "Joe_r_psis_pt";
HAnimSite113.translation = new SFVec3f(new float[-0.0773,1.019,-0.12]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "sitebox";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = Shape114;

HAnimSegment91.children[9] = HAnimSite113;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.name = "floormarker_pt";
HAnimSite115.DEF = "Joe_floormarker_pt";
Transform Transform116 = createNode("Transform");
Transform116.scale = new SFVec3f(new float[3,3,3]);
Shape Shape117 = createNode("Shape");
Shape117.USE = "sitebox";
Transform116.child = new undefined();

Transform116.child[0] = Shape117;

HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = Transform116;

HAnimSegment91.children[10] = HAnimSite115;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "crotch_pt";
HAnimSite118.DEF = "Joe_crotch_pt";
HAnimSite118.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape119 = createNode("Shape");
Shape119.USE = "sitebox";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = Shape119;

HAnimSegment91.children[11] = HAnimSite118;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.name = "l_hip";
HAnimJoint120.DEF = "Joe_l_hip";
HAnimJoint120.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimSegment HAnimSegment121 = createNode("HAnimSegment");
HAnimSegment121.name = "l_thigh";
HAnimSegment121.DEF = "Joe_l_thigh";
Transform Transform122 = createNode("Transform");
Transform122.translation = new SFVec3f(new float[0.1,0.92,0]);
Shape Shape123 = createNode("Shape");
Shape123.USE = "jointbox";
Transform122.child = new undefined();

Transform122.child[0] = Shape123;

HAnimSegment121.children = new MFNode();

HAnimSegment121.children[0] = Transform122;

Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
Appearance125.USE = "SegmentLine";
Shape124.appearance = Appearance125;

IndexedLineSet IndexedLineSet126 = createNode("IndexedLineSet");
IndexedLineSet126.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate127 = createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[0.1,0.92,0,0.115,0.466,0]);
IndexedLineSet126.coord = Coordinate127;

Shape124.geometry = IndexedLineSet126;

HAnimSegment121.children[1] = Shape124;

Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.1,0.9,0.0775]);
Shape Shape129 = createNode("Shape");
Shape129.USE = "skinsphere";
Transform128.child = new undefined();

Transform128.child[0] = Shape129;

HAnimSegment121.children[2] = Transform128;

Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[0.079,0.92,-0.14]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "skinsphere";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSegment121.children[3] = Transform130;

Transform Transform132 = createNode("Transform");
Transform132.translation = new SFVec3f(new float[0.171,0.65,0]);
Shape Shape133 = createNode("Shape");
Shape133.USE = "skinsphere";
Transform132.child = new undefined();

Transform132.child[0] = Shape133;

HAnimSegment121.children[4] = Transform132;

Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.02,0.65,0]);
Shape Shape135 = createNode("Shape");
Shape135.USE = "skinsphere";
Transform134.child = new undefined();

Transform134.child[0] = Shape135;

HAnimSegment121.children[5] = Transform134;

Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.1,0.65,-0.08]);
Shape Shape137 = createNode("Shape");
Shape137.USE = "skinsphere";
Transform136.child = new undefined();

Transform136.child[0] = Shape137;

HAnimSegment121.children[6] = Transform136;

Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.1,0.65,0.07]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "skinsphere";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSegment121.children[7] = Transform138;

HAnimSite HAnimSite140 = createNode("HAnimSite");
HAnimSite140.name = "l_knee_crease_pt";
HAnimSite140.DEF = "Joe_l_knee_crease_pt";
HAnimSite140.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "sitebox";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = Shape141;

HAnimSegment121.children[8] = HAnimSite140;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite142.DEF = "Joe_l_femoral_lateral_epicondyle_pt";
HAnimSite142.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape143 = createNode("Shape");
Shape143.USE = "sitebox";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = Shape143;

HAnimSegment121.children[9] = HAnimSite142;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.name = "l_femoral_medial_epicondyle_pt";
HAnimSite144.DEF = "Joe_l_femoral_medial_epicondyle_pt";
HAnimSite144.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "sitebox";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = Shape145;

HAnimSegment121.children[10] = HAnimSite144;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.name = "l_knee";
HAnimJoint146.DEF = "Joe_l_knee";
HAnimJoint146.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint146.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint146.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment147 = createNode("HAnimSegment");
HAnimSegment147.name = "l_calf";
HAnimSegment147.DEF = "Joe_l_calf";
Transform Transform148 = createNode("Transform");
Transform148.translation = new SFVec3f(new float[0.115,0.466,0]);
Shape Shape149 = createNode("Shape");
Shape149.USE = "jointbox";
Transform148.child = new undefined();

Transform148.child[0] = Shape149;

HAnimSegment147.children = new MFNode();

HAnimSegment147.children[0] = Transform148;

Shape Shape150 = createNode("Shape");
Appearance Appearance151 = createNode("Appearance");
Appearance151.USE = "SegmentLine";
Shape150.appearance = Appearance151;

IndexedLineSet IndexedLineSet152 = createNode("IndexedLineSet");
IndexedLineSet152.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate153 = createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0.115,0.466,0,0.1,0.069,0]);
IndexedLineSet152.coord = Coordinate153;

Shape150.geometry = IndexedLineSet152;

HAnimSegment147.children[1] = Shape150;

Transform Transform154 = createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.115,0.466,0.06]);
Shape Shape155 = createNode("Shape");
Shape155.USE = "skinsphere";
Transform154.child = new undefined();

Transform154.child[0] = Shape155;

HAnimSegment147.children[2] = Transform154;

Transform Transform156 = createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape157 = createNode("Shape");
Shape157.USE = "skinsphere";
Transform156.child = new undefined();

Transform156.child[0] = Shape157;

HAnimSegment147.children[3] = Transform156;

Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape159 = createNode("Shape");
Shape159.USE = "skinsphere";
Transform158.child = new undefined();

Transform158.child[0] = Shape159;

HAnimSegment147.children[4] = Transform158;

Transform Transform160 = createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape161 = createNode("Shape");
Shape161.USE = "skinsphere";
Transform160.child = new undefined();

Transform160.child[0] = Shape161;

HAnimSegment147.children[5] = Transform160;

Transform Transform162 = createNode("Transform");
Transform162.translation = new SFVec3f(new float[0.17,0.3,0]);
Shape Shape163 = createNode("Shape");
Shape163.USE = "skinsphere";
Transform162.child = new undefined();

Transform162.child[0] = Shape163;

HAnimSegment147.children[6] = Transform162;

Transform Transform164 = createNode("Transform");
Transform164.translation = new SFVec3f(new float[0.06,0.3,0]);
Shape Shape165 = createNode("Shape");
Shape165.USE = "skinsphere";
Transform164.child = new undefined();

Transform164.child[0] = Shape165;

HAnimSegment147.children[7] = Transform164;

Transform Transform166 = createNode("Transform");
Transform166.translation = new SFVec3f(new float[0.1,0.3,-0.05]);
Shape Shape167 = createNode("Shape");
Shape167.USE = "skinsphere";
Transform166.child = new undefined();

Transform166.child[0] = Shape167;

HAnimSegment147.children[8] = Transform166;

Transform Transform168 = createNode("Transform");
Transform168.translation = new SFVec3f(new float[0.1,0.3,0.05]);
Shape Shape169 = createNode("Shape");
Shape169.USE = "skinsphere";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

HAnimSegment147.children[9] = Transform168;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "l_lateral_malleolus_pt";
HAnimSite170.DEF = "Joe_l_lateral_malleolus_pt";
HAnimSite170.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape171 = createNode("Shape");
Shape171.USE = "sitebox";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = Shape171;

HAnimSegment147.children[10] = HAnimSite170;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.name = "l_medial_malleolus_pt";
HAnimSite172.DEF = "Joe_l_medial_malleolus_pt";
HAnimSite172.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape173 = createNode("Shape");
Shape173.USE = "sitebox";
HAnimSite172.children = new MFNode();

HAnimSite172.children[0] = Shape173;

HAnimSegment147.children[11] = HAnimSite172;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimSegment147;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.name = "l_talocrural";
HAnimJoint174.DEF = "Joe_l_talocrural";
HAnimJoint174.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint174.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint174.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.name = "l_talus";
HAnimSegment175.DEF = "Joe_l_talus";
Transform Transform176 = createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.115,0.069,0]);
Shape Shape177 = createNode("Shape");
Shape177.USE = "jointbox";
Transform176.child = new undefined();

Transform176.child[0] = Shape177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

Shape Shape178 = createNode("Shape");
Appearance Appearance179 = createNode("Appearance");
Appearance179.USE = "SegmentLine";
Shape178.appearance = Appearance179;

IndexedLineSet IndexedLineSet180 = createNode("IndexedLineSet");
IndexedLineSet180.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate181 = createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.1,0.069,0,0.115,0.031,0.03]);
IndexedLineSet180.coord = Coordinate181;

Shape178.geometry = IndexedLineSet180;

HAnimSegment175.children[1] = Shape178;

Transform Transform182 = createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape183 = createNode("Shape");
Shape183.USE = "skinsphere";
Transform182.child = new undefined();

Transform182.child[0] = Shape183;

HAnimSegment175.children[2] = Transform182;

Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape185 = createNode("Shape");
Shape185.USE = "skinsphere";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

HAnimSegment175.children[3] = Transform184;

Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[0.115,0.069,-0.045]);
Shape Shape187 = createNode("Shape");
Shape187.USE = "skinsphere";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

HAnimSegment175.children[4] = Transform186;

Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[0.117,0.0975,0.0615]);
Shape Shape189 = createNode("Shape");
Shape189.USE = "skinsphere";
Transform188.child = new undefined();

Transform188.child[0] = Shape189;

HAnimSegment175.children[5] = Transform188;

HAnimSite HAnimSite190 = createNode("HAnimSite");
HAnimSite190.name = "l_sphyrion_pt";
HAnimSite190.DEF = "Joe_l_sphyrion_pt";
HAnimSite190.translation = new SFVec3f(new float[0.09,0.056,0.0125]);
Shape Shape191 = createNode("Shape");
Shape191.USE = "sitebox";
HAnimSite190.children = new MFNode();

HAnimSite190.children[0] = Shape191;

HAnimSegment175.children[6] = HAnimSite190;

HAnimSite HAnimSite192 = createNode("HAnimSite");
HAnimSite192.name = "l_calcaneus_posterior_pt";
HAnimSite192.DEF = "Joe_l_calcaneus_posterior_pt";
HAnimSite192.translation = new SFVec3f(new float[0.115,0.04,-0.055]);
Shape Shape193 = createNode("Shape");
Shape193.USE = "sitebox";
HAnimSite192.children = new MFNode();

HAnimSite192.children[0] = Shape193;

HAnimSegment175.children[7] = HAnimSite192;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.name = "l_tarsometatarsal_2";
HAnimJoint194.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint194.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint194.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint194.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.name = "l_metatarsal_2";
HAnimSegment195.DEF = "Joe_l_metatarsal_2";
Transform Transform196 = createNode("Transform");
Transform196.translation = new SFVec3f(new float[0.115,0.031,0.03]);
Shape Shape197 = createNode("Shape");
Shape197.USE = "jointbox";
Transform196.child = new undefined();

Transform196.child[0] = Shape197;

HAnimSegment195.children = new MFNode();

HAnimSegment195.children[0] = Transform196;

Shape Shape198 = createNode("Shape");
Appearance Appearance199 = createNode("Appearance");
Appearance199.USE = "SegmentLine";
Shape198.appearance = Appearance199;

IndexedLineSet IndexedLineSet200 = createNode("IndexedLineSet");
IndexedLineSet200.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.115,0.031,0.03,0.115,0.037,0.09]);
IndexedLineSet200.coord = Coordinate201;

Shape198.geometry = IndexedLineSet200;

HAnimSegment195.children[1] = Shape198;

Transform Transform202 = createNode("Transform");
Transform202.translation = new SFVec3f(new float[0.1375,0.006,-0.03]);
Shape Shape203 = createNode("Shape");
Shape203.USE = "skinsphere";
Transform202.child = new undefined();

Transform202.child[0] = Shape203;

HAnimSegment195.children[2] = Transform202;

Transform Transform204 = createNode("Transform");
Transform204.translation = new SFVec3f(new float[0.095,0.006,-0.03]);
Shape Shape205 = createNode("Shape");
Shape205.USE = "skinsphere";
Transform204.child = new undefined();

Transform204.child[0] = Shape205;

HAnimSegment195.children[3] = Transform204;

Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.115,0.015,-0.045]);
Shape Shape207 = createNode("Shape");
Shape207.USE = "skinsphere";
Transform206.child = new undefined();

Transform206.child[0] = Shape207;

HAnimSegment195.children[4] = Transform206;

HAnimJoint194.children = new MFNode();

HAnimJoint194.children[0] = HAnimSegment195;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.name = "l_metatarsophalangeal_2";
HAnimJoint208.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint208.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint208.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint208.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment209 = createNode("HAnimSegment");
HAnimSegment209.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment209.DEF = "Joe_l_tarsal_proximal_phalanx_2";
Transform Transform210 = createNode("Transform");
Transform210.translation = new SFVec3f(new float[0.115,0.037,0.09]);
Shape Shape211 = createNode("Shape");
Shape211.USE = "jointbox";
Transform210.child = new undefined();

Transform210.child[0] = Shape211;

HAnimSegment209.children = new MFNode();

HAnimSegment209.children[0] = Transform210;

Shape Shape212 = createNode("Shape");
Appearance Appearance213 = createNode("Appearance");
Appearance213.USE = "SegmentLine";
Shape212.appearance = Appearance213;

IndexedLineSet IndexedLineSet214 = createNode("IndexedLineSet");
IndexedLineSet214.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate215 = createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[0.115,0.037,0.09,0.115,0.02,0.122]);
IndexedLineSet214.coord = Coordinate215;

Shape212.geometry = IndexedLineSet214;

HAnimSegment209.children[1] = Shape212;

Transform Transform216 = createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.115,0.06,0.1]);
Shape Shape217 = createNode("Shape");
Shape217.USE = "skinsphere";
Transform216.child = new undefined();

Transform216.child[0] = Shape217;

HAnimSegment209.children[2] = Transform216;

Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.115,0,0.07]);
Shape Shape219 = createNode("Shape");
Shape219.USE = "skinsphere";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

HAnimSegment209.children[3] = Transform218;

Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.165,0,0.07]);
Shape Shape221 = createNode("Shape");
Shape221.USE = "skinsphere";
Transform220.child = new undefined();

Transform220.child[0] = Shape221;

HAnimSegment209.children[4] = Transform220;

Transform Transform222 = createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.095,0,0.07]);
Shape Shape223 = createNode("Shape");
Shape223.USE = "skinsphere";
Transform222.child = new undefined();

Transform222.child[0] = Shape223;

HAnimSegment209.children[5] = Transform222;

HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.name = "l_metatarsal_phalanx_1_pt";
HAnimSite224.DEF = "Joe_l_metatarsal_phalanx_1_pt";
HAnimSite224.translation = new SFVec3f(new float[0.087,0.01,0.122]);
Shape Shape225 = createNode("Shape");
Shape225.USE = "sitebox";
HAnimSite224.children = new MFNode();

HAnimSite224.children[0] = Shape225;

HAnimSegment209.children[6] = HAnimSite224;

HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.name = "l_metatarsal";
HAnimJoint226.DEF = "Joe_l_metatarsal";
HAnimJoint226.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint226.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint226.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment227 = createNode("HAnimSegment");
HAnimSegment227.name = "l_tarsal_distal_phalanx_2";
HAnimSegment227.DEF = "Joe_l_tarsal_distal_phalanx_2";
Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[0.115,0.02,0.13]);
Shape Shape229 = createNode("Shape");
Shape229.USE = "jointbox";
Transform228.child = new undefined();

Transform228.child[0] = Shape229;

HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = Transform228;

Shape Shape230 = createNode("Shape");
Appearance Appearance231 = createNode("Appearance");
Appearance231.USE = "SegmentLine";
Shape230.appearance = Appearance231;

IndexedLineSet IndexedLineSet232 = createNode("IndexedLineSet");
IndexedLineSet232.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate233 = createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0.115,0.02,0.122,0.132,0.013,0.19]);
IndexedLineSet232.coord = Coordinate233;

Shape230.geometry = IndexedLineSet232;

HAnimSegment227.children[1] = Shape230;

Transform Transform234 = createNode("Transform");
Transform234.translation = new SFVec3f(new float[0.115,0.04,0.13]);
Shape Shape235 = createNode("Shape");
Shape235.USE = "skinsphere";
Transform234.child = new undefined();

Transform234.child[0] = Shape235;

HAnimSegment227.children[2] = Transform234;

Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[0.125,0,0.12]);
Shape Shape237 = createNode("Shape");
Shape237.USE = "skinsphere";
Transform236.child = new undefined();

Transform236.child[0] = Shape237;

HAnimSegment227.children[3] = Transform236;

Transform Transform238 = createNode("Transform");
Transform238.translation = new SFVec3f(new float[0.165,0,0.12]);
Shape Shape239 = createNode("Shape");
Shape239.USE = "skinsphere";
Transform238.child = new undefined();

Transform238.child[0] = Shape239;

HAnimSegment227.children[4] = Transform238;

Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.087,0,0.122]);
Shape Shape241 = createNode("Shape");
Shape241.USE = "skinsphere";
Transform240.child = new undefined();

Transform240.child[0] = Shape241;

HAnimSegment227.children[5] = Transform240;

Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.09,0.012,0.188]);
Shape Shape243 = createNode("Shape");
Shape243.USE = "skinsphere";
Transform242.child = new undefined();

Transform242.child[0] = Shape243;

HAnimSegment227.children[6] = Transform242;

Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[0.11,0.011,0.19]);
Shape Shape245 = createNode("Shape");
Shape245.USE = "skinsphere";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

HAnimSegment227.children[7] = Transform244;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[0.128,0.011,0.185]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "skinsphere";
Transform246.child = new undefined();

Transform246.child[0] = Shape247;

HAnimSegment227.children[8] = Transform246;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.142,0.011,0.178]);
Shape Shape249 = createNode("Shape");
Shape249.USE = "skinsphere";
Transform248.child = new undefined();

Transform248.child[0] = Shape249;

HAnimSegment227.children[9] = Transform248;

Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.154,0.01,0.168]);
Shape Shape251 = createNode("Shape");
Shape251.USE = "skinsphere";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSegment227.children[10] = Transform250;

HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.name = "l_metatarsal_phalanx_5_pt";
HAnimSite252.DEF = "Joe_l_metatarsal_phalanx_5_pt";
HAnimSite252.translation = new SFVec3f(new float[0.165,0.01,0.12]);
Shape Shape253 = createNode("Shape");
Shape253.USE = "sitebox";
HAnimSite252.children = new MFNode();

HAnimSite252.children[0] = Shape253;

HAnimSegment227.children[11] = HAnimSite252;

HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite254.DEF = "Joe_l_tarsal_distal_phalanx_2_pt";
HAnimSite254.translation = new SFVec3f(new float[0.11,0.011,0.19]);
Shape Shape255 = createNode("Shape");
Shape255.USE = "sitebox";
HAnimSite254.children = new MFNode();

HAnimSite254.children[0] = Shape255;

HAnimSegment227.children[12] = HAnimSite254;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

HAnimJoint208.children[1] = HAnimJoint226;

HAnimJoint194.children[1] = HAnimJoint208;

HAnimJoint174.children[1] = HAnimJoint194;

HAnimJoint146.children[1] = HAnimJoint174;

HAnimJoint120.children[1] = HAnimJoint146;

HAnimJoint90.children[1] = HAnimJoint120;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.name = "r_hip";
HAnimJoint256.DEF = "Joe_r_hip";
HAnimJoint256.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint256.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101]);
HAnimJoint256.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimSegment HAnimSegment257 = createNode("HAnimSegment");
HAnimSegment257.name = "r_thigh";
HAnimSegment257.DEF = "Joe_r_thigh";
Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[-0.1,0.92,0]);
Shape Shape259 = createNode("Shape");
Shape259.USE = "jointbox";
Transform258.child = new undefined();

Transform258.child[0] = Shape259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

Shape Shape260 = createNode("Shape");
Appearance Appearance261 = createNode("Appearance");
Appearance261.USE = "SegmentLine";
Shape260.appearance = Appearance261;

IndexedLineSet IndexedLineSet262 = createNode("IndexedLineSet");
IndexedLineSet262.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate263 = createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[-0.1,0.92,0,-0.1,0.4913,0]);
IndexedLineSet262.coord = Coordinate263;

Shape260.geometry = IndexedLineSet262;

HAnimSegment257.children[1] = Shape260;

Transform Transform264 = createNode("Transform");
Transform264.translation = new SFVec3f(new float[-0.079,0.92,-0.14]);
Shape Shape265 = createNode("Shape");
Shape265.USE = "skinsphere";
Transform264.child = new undefined();

Transform264.child[0] = Shape265;

HAnimSegment257.children[2] = Transform264;

Transform Transform266 = createNode("Transform");
Transform266.translation = new SFVec3f(new float[-0.1,0.9,0.075]);
Shape Shape267 = createNode("Shape");
Shape267.USE = "skinsphere";
Transform266.child = new undefined();

Transform266.child[0] = Shape267;

HAnimSegment257.children[3] = Transform266;

Transform Transform268 = createNode("Transform");
Transform268.translation = new SFVec3f(new float[-0.171,0.65,0]);
Shape Shape269 = createNode("Shape");
Shape269.USE = "skinsphere";
Transform268.child = new undefined();

Transform268.child[0] = Shape269;

HAnimSegment257.children[4] = Transform268;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[-0.02,0.65,0]);
Shape Shape271 = createNode("Shape");
Shape271.USE = "skinsphere";
Transform270.child = new undefined();

Transform270.child[0] = Shape271;

HAnimSegment257.children[5] = Transform270;

Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.1,0.65,-0.08]);
Shape Shape273 = createNode("Shape");
Shape273.USE = "skinsphere";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

HAnimSegment257.children[6] = Transform272;

Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[-0.1,0.65,0.07]);
Shape Shape275 = createNode("Shape");
Shape275.USE = "skinsphere";
Transform274.child = new undefined();

Transform274.child[0] = Shape275;

HAnimSegment257.children[7] = Transform274;

HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.name = "r_knee_crease_pt";
HAnimSite276.DEF = "Joe_r_knee_crease_pt";
HAnimSite276.translation = new SFVec3f(new float[-0.115,0.466,-0.055]);
Shape Shape277 = createNode("Shape");
Shape277.USE = "sitebox";
HAnimSite276.children = new MFNode();

HAnimSite276.children[0] = Shape277;

HAnimSegment257.children[8] = HAnimSite276;

HAnimSite HAnimSite278 = createNode("HAnimSite");
HAnimSite278.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite278.DEF = "Joe_r_femoral_lateral_epicondyle_pt";
HAnimSite278.translation = new SFVec3f(new float[-0.17,0.466,0]);
Shape Shape279 = createNode("Shape");
Shape279.USE = "sitebox";
HAnimSite278.children = new MFNode();

HAnimSite278.children[0] = Shape279;

HAnimSegment257.children[9] = HAnimSite278;

HAnimSite HAnimSite280 = createNode("HAnimSite");
HAnimSite280.name = "r_femoral_medial_epicondyle_pt";
HAnimSite280.DEF = "Joe_r_femoral_medial_epicondyle_pt";
HAnimSite280.translation = new SFVec3f(new float[-0.05,0.466,0]);
Shape Shape281 = createNode("Shape");
Shape281.USE = "sitebox";
HAnimSite280.children = new MFNode();

HAnimSite280.children[0] = Shape281;

HAnimSegment257.children[10] = HAnimSite280;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.name = "r_knee";
HAnimJoint282.DEF = "Joe_r_knee";
HAnimJoint282.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint282.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369]);
HAnimJoint282.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment283 = createNode("HAnimSegment");
HAnimSegment283.name = "r_calf";
HAnimSegment283.DEF = "Joe_r_calf";
Transform Transform284 = createNode("Transform");
Transform284.translation = new SFVec3f(new float[-0.1,0.4913,0]);
Shape Shape285 = createNode("Shape");
Shape285.USE = "jointbox";
Transform284.child = new undefined();

Transform284.child[0] = Shape285;

HAnimSegment283.children = new MFNode();

HAnimSegment283.children[0] = Transform284;

Shape Shape286 = createNode("Shape");
Appearance Appearance287 = createNode("Appearance");
Appearance287.USE = "SegmentLine";
Shape286.appearance = Appearance287;

IndexedLineSet IndexedLineSet288 = createNode("IndexedLineSet");
IndexedLineSet288.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate289 = createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.1,0.4913,0,-0.1,0.0712,0]);
IndexedLineSet288.coord = Coordinate289;

Shape286.geometry = IndexedLineSet288;

HAnimSegment283.children[1] = Shape286;

Transform Transform290 = createNode("Transform");
Transform290.translation = new SFVec3f(new float[-0.115,0.466,0.06]);
Shape Shape291 = createNode("Shape");
Shape291.USE = "skinsphere";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

HAnimSegment283.children[2] = Transform290;

Transform Transform292 = createNode("Transform");
Transform292.translation = new SFVec3f(new float[-0.115,0.466,-0.055]);
Shape Shape293 = createNode("Shape");
Shape293.USE = "skinsphere";
Transform292.child = new undefined();

Transform292.child[0] = Shape293;

HAnimSegment283.children[3] = Transform292;

Transform Transform294 = createNode("Transform");
Transform294.translation = new SFVec3f(new float[-0.17,0.466,0]);
Shape Shape295 = createNode("Shape");
Shape295.USE = "skinsphere";
Transform294.child = new undefined();

Transform294.child[0] = Shape295;

HAnimSegment283.children[4] = Transform294;

Transform Transform296 = createNode("Transform");
Transform296.translation = new SFVec3f(new float[-0.05,0.466,0]);
Shape Shape297 = createNode("Shape");
Shape297.USE = "skinsphere";
Transform296.child = new undefined();

Transform296.child[0] = Shape297;

HAnimSegment283.children[5] = Transform296;

Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[-0.17,0.3,0]);
Shape Shape299 = createNode("Shape");
Shape299.USE = "skinsphere";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

HAnimSegment283.children[6] = Transform298;

Transform Transform300 = createNode("Transform");
Transform300.translation = new SFVec3f(new float[-0.06,0.3,0]);
Shape Shape301 = createNode("Shape");
Shape301.USE = "skinsphere";
Transform300.child = new undefined();

Transform300.child[0] = Shape301;

HAnimSegment283.children[7] = Transform300;

Transform Transform302 = createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.1,0.3,-0.05]);
Shape Shape303 = createNode("Shape");
Shape303.USE = "skinsphere";
Transform302.child = new undefined();

Transform302.child[0] = Shape303;

HAnimSegment283.children[8] = Transform302;

Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.1,0.3,0.05]);
Shape Shape305 = createNode("Shape");
Shape305.USE = "skinsphere";
Transform304.child = new undefined();

Transform304.child[0] = Shape305;

HAnimSegment283.children[9] = Transform304;

HAnimSite HAnimSite306 = createNode("HAnimSite");
HAnimSite306.name = "r_lateral_malleolus_pt";
HAnimSite306.DEF = "Joe_r_lateral_malleolus_pt";
HAnimSite306.translation = new SFVec3f(new float[-0.15,0.07,0]);
Shape Shape307 = createNode("Shape");
Shape307.USE = "sitebox";
HAnimSite306.children = new MFNode();

HAnimSite306.children[0] = Shape307;

HAnimSegment283.children[10] = HAnimSite306;

HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.name = "r_medial_malleolus_pt";
HAnimSite308.DEF = "Joe_r_medial_malleolus_pt";
HAnimSite308.translation = new SFVec3f(new float[-0.085,0.086,0.0125]);
Shape Shape309 = createNode("Shape");
Shape309.USE = "sitebox";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = Shape309;

HAnimSegment283.children[11] = HAnimSite308;

HAnimJoint282.children = new MFNode();

HAnimJoint282.children[0] = HAnimSegment283;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.name = "r_talocrural";
HAnimJoint310.DEF = "Joe_r_talocrural";
HAnimJoint310.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint310.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint310.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.name = "r_talus";
HAnimSegment311.DEF = "Joe_r_talus";
Transform Transform312 = createNode("Transform");
Transform312.translation = new SFVec3f(new float[-0.1,0.0712,0]);
Shape Shape313 = createNode("Shape");
Shape313.USE = "jointbox";
Transform312.child = new undefined();

Transform312.child[0] = Shape313;

HAnimSegment311.children = new MFNode();

HAnimSegment311.children[0] = Transform312;

Shape Shape314 = createNode("Shape");
Appearance Appearance315 = createNode("Appearance");
Appearance315.USE = "SegmentLine";
Shape314.appearance = Appearance315;

IndexedLineSet IndexedLineSet316 = createNode("IndexedLineSet");
IndexedLineSet316.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate317 = createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[-0.1,0.0712,0,-0.1,0.015,-0.01]);
IndexedLineSet316.coord = Coordinate317;

Shape314.geometry = IndexedLineSet316;

HAnimSegment311.children[1] = Shape314;

Transform Transform318 = createNode("Transform");
Transform318.translation = new SFVec3f(new float[-0.15,0.07,0]);
Shape Shape319 = createNode("Shape");
Shape319.USE = "skinsphere";
Transform318.child = new undefined();

Transform318.child[0] = Shape319;

HAnimSegment311.children[2] = Transform318;

Transform Transform320 = createNode("Transform");
Transform320.translation = new SFVec3f(new float[-0.085,0.086,0.0125]);
Shape Shape321 = createNode("Shape");
Shape321.USE = "skinsphere";
Transform320.child = new undefined();

Transform320.child[0] = Shape321;

HAnimSegment311.children[3] = Transform320;

Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[-0.115,0.069,-0.045]);
Shape Shape323 = createNode("Shape");
Shape323.USE = "skinsphere";
Transform322.child = new undefined();

Transform322.child[0] = Shape323;

HAnimSegment311.children[4] = Transform322;

Transform Transform324 = createNode("Transform");
Transform324.translation = new SFVec3f(new float[-0.117,0.0975,0.0615]);
Shape Shape325 = createNode("Shape");
Shape325.USE = "skinsphere";
Transform324.child = new undefined();

Transform324.child[0] = Shape325;

HAnimSegment311.children[5] = Transform324;

HAnimSite HAnimSite326 = createNode("HAnimSite");
HAnimSite326.name = "r_sphyrion_pt";
HAnimSite326.DEF = "Joe_r_sphyrion_pt";
HAnimSite326.translation = new SFVec3f(new float[-0.09,0.056,0.0125]);
Shape Shape327 = createNode("Shape");
Shape327.USE = "sitebox";
HAnimSite326.children = new MFNode();

HAnimSite326.children[0] = Shape327;

HAnimSegment311.children[6] = HAnimSite326;

HAnimSite HAnimSite328 = createNode("HAnimSite");
HAnimSite328.name = "r_calcaneus_posterior_pt";
HAnimSite328.DEF = "Joe_r_calcaneus_posterior_pt";
HAnimSite328.translation = new SFVec3f(new float[-0.115,0.04,-0.055]);
Shape Shape329 = createNode("Shape");
Shape329.USE = "sitebox";
HAnimSite328.children = new MFNode();

HAnimSite328.children[0] = Shape329;

HAnimSegment311.children[7] = HAnimSite328;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.name = "r_tarsometatarsal_2";
HAnimJoint330.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint330.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint330.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint330.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment331 = createNode("HAnimSegment");
HAnimSegment331.name = "r_metatarsal_2";
HAnimSegment331.DEF = "Joe_r_metatarsal_2";
Transform Transform332 = createNode("Transform");
Transform332.translation = new SFVec3f(new float[-0.1,0.015,-0.01]);
Shape Shape333 = createNode("Shape");
Shape333.USE = "jointbox";
Transform332.child = new undefined();

Transform332.child[0] = Shape333;

HAnimSegment331.children = new MFNode();

HAnimSegment331.children[0] = Transform332;

Shape Shape334 = createNode("Shape");
Appearance Appearance335 = createNode("Appearance");
Appearance335.USE = "SegmentLine";
Shape334.appearance = Appearance335;

IndexedLineSet IndexedLineSet336 = createNode("IndexedLineSet");
IndexedLineSet336.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate337 = createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[-0.1,0.015,-0.01,-0.1,0.02,0.07]);
IndexedLineSet336.coord = Coordinate337;

Shape334.geometry = IndexedLineSet336;

HAnimSegment331.children[1] = Shape334;

Transform Transform338 = createNode("Transform");
Transform338.translation = new SFVec3f(new float[-0.1375,0.006,-0.03]);
Shape Shape339 = createNode("Shape");
Shape339.USE = "skinsphere";
Transform338.child = new undefined();

Transform338.child[0] = Shape339;

HAnimSegment331.children[2] = Transform338;

Transform Transform340 = createNode("Transform");
Transform340.translation = new SFVec3f(new float[-0.095,0.006,-0.03]);
Shape Shape341 = createNode("Shape");
Shape341.USE = "skinsphere";
Transform340.child = new undefined();

Transform340.child[0] = Shape341;

HAnimSegment331.children[3] = Transform340;

Transform Transform342 = createNode("Transform");
Transform342.translation = new SFVec3f(new float[-0.095,0.006,-0.03]);
Shape Shape343 = createNode("Shape");
Shape343.USE = "skinsphere";
Transform342.child = new undefined();

Transform342.child[0] = Shape343;

HAnimSegment331.children[4] = Transform342;

HAnimJoint330.children = new MFNode();

HAnimJoint330.children[0] = HAnimSegment331;

HAnimJoint HAnimJoint344 = createNode("HAnimJoint");
HAnimJoint344.name = "r_metatarsophalangeal_2";
HAnimJoint344.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint344.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint344.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint344.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment345 = createNode("HAnimSegment");
HAnimSegment345.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment345.DEF = "Joe_r_tarsal_proximal_phalanx_2";
Transform Transform346 = createNode("Transform");
Transform346.translation = new SFVec3f(new float[-0.1,0.02,0.07]);
Shape Shape347 = createNode("Shape");
Shape347.USE = "jointbox";
Transform346.child = new undefined();

Transform346.child[0] = Shape347;

HAnimSegment345.children = new MFNode();

HAnimSegment345.children[0] = Transform346;

Shape Shape348 = createNode("Shape");
Appearance Appearance349 = createNode("Appearance");
Appearance349.USE = "SegmentLine";
Shape348.appearance = Appearance349;

IndexedLineSet IndexedLineSet350 = createNode("IndexedLineSet");
IndexedLineSet350.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate351 = createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[-0.1,0.02,0.07,-0.1,0.01,0.14]);
IndexedLineSet350.coord = Coordinate351;

Shape348.geometry = IndexedLineSet350;

HAnimSegment345.children[1] = Shape348;

Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[-0.115,0.06,0.1]);
Shape Shape353 = createNode("Shape");
Shape353.USE = "skinsphere";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

HAnimSegment345.children[2] = Transform352;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.115,0,0.07]);
Shape Shape355 = createNode("Shape");
Shape355.USE = "skinsphere";
Transform354.child = new undefined();

Transform354.child[0] = Shape355;

HAnimSegment345.children[3] = Transform354;

Transform Transform356 = createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.165,0,0.07]);
Shape Shape357 = createNode("Shape");
Shape357.USE = "skinsphere";
Transform356.child = new undefined();

Transform356.child[0] = Shape357;

HAnimSegment345.children[4] = Transform356;

Transform Transform358 = createNode("Transform");
Transform358.translation = new SFVec3f(new float[-0.165,0,0.07]);
Shape Shape359 = createNode("Shape");
Shape359.USE = "skinsphere";
Transform358.child = new undefined();

Transform358.child[0] = Shape359;

HAnimSegment345.children[5] = Transform358;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.name = "r_metatarsal_phalanx_1_pt";
HAnimSite360.DEF = "Joe_r_metatarsal_phalanx_1_pt";
HAnimSite360.translation = new SFVec3f(new float[-0.115,0.02,0.122]);
Shape Shape361 = createNode("Shape");
Shape361.USE = "sitebox";
HAnimSite360.children = new MFNode();

HAnimSite360.children[0] = Shape361;

HAnimSegment345.children[6] = HAnimSite360;

HAnimJoint344.children = new MFNode();

HAnimJoint344.children[0] = HAnimSegment345;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint362.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint362.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint362.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint362.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment363 = createNode("HAnimSegment");
HAnimSegment363.name = "r_tarsal_distal_phalanx_2";
HAnimSegment363.DEF = "Joe_r_tarsal_distal_phalanx_2";
Transform Transform364 = createNode("Transform");
Transform364.translation = new SFVec3f(new float[-0.1086,0.01,0.14]);
Shape Shape365 = createNode("Shape");
Shape365.USE = "jointbox";
Transform364.child = new undefined();

Transform364.child[0] = Shape365;

HAnimSegment363.children = new MFNode();

HAnimSegment363.children[0] = Transform364;

Shape Shape366 = createNode("Shape");
Appearance Appearance367 = createNode("Appearance");
Appearance367.USE = "SegmentLine";
Shape366.appearance = Appearance367;

IndexedLineSet IndexedLineSet368 = createNode("IndexedLineSet");
IndexedLineSet368.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate369 = createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[-0.1,0.01,0.14,-0.1043,0.0016,0.2]);
IndexedLineSet368.coord = Coordinate369;

Shape366.geometry = IndexedLineSet368;

HAnimSegment363.children[1] = Shape366;

Transform Transform370 = createNode("Transform");
Transform370.translation = new SFVec3f(new float[-0.115,0.04,0.13]);
Shape Shape371 = createNode("Shape");
Shape371.USE = "skinsphere";
Transform370.child = new undefined();

Transform370.child[0] = Shape371;

HAnimSegment363.children[2] = Transform370;

Transform Transform372 = createNode("Transform");
Transform372.translation = new SFVec3f(new float[-0.125,0,0.12]);
Shape Shape373 = createNode("Shape");
Shape373.USE = "skinsphere";
Transform372.child = new undefined();

Transform372.child[0] = Shape373;

HAnimSegment363.children[3] = Transform372;

Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[-0.165,0,0.12]);
Shape Shape375 = createNode("Shape");
Shape375.USE = "skinsphere";
Transform374.child = new undefined();

Transform374.child[0] = Shape375;

HAnimSegment363.children[4] = Transform374;

Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[-0.087,0,0.122]);
Shape Shape377 = createNode("Shape");
Shape377.USE = "skinsphere";
Transform376.child = new undefined();

Transform376.child[0] = Shape377;

HAnimSegment363.children[5] = Transform376;

Transform Transform378 = createNode("Transform");
Transform378.translation = new SFVec3f(new float[-0.09,0.012,0.188]);
Shape Shape379 = createNode("Shape");
Shape379.USE = "skinsphere";
Transform378.child = new undefined();

Transform378.child[0] = Shape379;

HAnimSegment363.children[6] = Transform378;

Transform Transform380 = createNode("Transform");
Transform380.translation = new SFVec3f(new float[-0.11,0.011,0.19]);
Shape Shape381 = createNode("Shape");
Shape381.USE = "skinsphere";
Transform380.child = new undefined();

Transform380.child[0] = Shape381;

HAnimSegment363.children[7] = Transform380;

Transform Transform382 = createNode("Transform");
Transform382.translation = new SFVec3f(new float[-0.128,0.011,0.185]);
Shape Shape383 = createNode("Shape");
Shape383.USE = "skinsphere";
Transform382.child = new undefined();

Transform382.child[0] = Shape383;

HAnimSegment363.children[8] = Transform382;

Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.142,0.011,0.178]);
Shape Shape385 = createNode("Shape");
Shape385.USE = "skinsphere";
Transform384.child = new undefined();

Transform384.child[0] = Shape385;

HAnimSegment363.children[9] = Transform384;

Transform Transform386 = createNode("Transform");
Transform386.translation = new SFVec3f(new float[-0.154,0.01,0.168]);
Shape Shape387 = createNode("Shape");
Shape387.USE = "skinsphere";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

HAnimSegment363.children[10] = Transform386;

HAnimSite HAnimSite388 = createNode("HAnimSite");
HAnimSite388.name = "r_metatarsal_phalanx_5_pt";
HAnimSite388.DEF = "Joe_r_metatarsal_phalanx_5_pt";
HAnimSite388.translation = new SFVec3f(new float[-0.165,0.01,0.12]);
Shape Shape389 = createNode("Shape");
Shape389.USE = "sitebox";
HAnimSite388.children = new MFNode();

HAnimSite388.children[0] = Shape389;

HAnimSegment363.children[11] = HAnimSite388;

HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite390.DEF = "Joe_r_tarsal_distal_phalanx_2_pt";
HAnimSite390.translation = new SFVec3f(new float[-0.11,0.011,0.19]);
Shape Shape391 = createNode("Shape");
Shape391.USE = "sitebox";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = Shape391;

HAnimSegment363.children[12] = HAnimSite390;

HAnimJoint362.children = new MFNode();

HAnimJoint362.children[0] = HAnimSegment363;

HAnimJoint344.children[1] = HAnimJoint362;

HAnimJoint330.children[1] = HAnimJoint344;

HAnimJoint310.children[1] = HAnimJoint330;

HAnimJoint282.children[1] = HAnimJoint310;

HAnimJoint256.children[1] = HAnimJoint282;

HAnimJoint90.children[2] = HAnimJoint256;

HAnimJoint78.children[1] = HAnimJoint90;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.name = "vl5";
HAnimJoint392.DEF = "Joe_vl5";
HAnimJoint392.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint392.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint392.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment393 = createNode("HAnimSegment");
HAnimSegment393.name = "toPelvis";
HAnimSegment393.DEF = "Joe_toPelvis";
Shape Shape394 = createNode("Shape");
Appearance Appearance395 = createNode("Appearance");
Appearance395.USE = "SegmentLine";
Shape394.appearance = Appearance395;

IndexedLineSet IndexedLineSet396 = createNode("IndexedLineSet");
IndexedLineSet396.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate397 = createNode("Coordinate");
Coordinate397.point = new MFVec3f(new float[0,1.045,-0.095,0,0.9149,0.0016]);
IndexedLineSet396.coord = Coordinate397;

Shape394.geometry = IndexedLineSet396;

HAnimSegment393.children = new MFNode();

HAnimSegment393.children[0] = Shape394;

HAnimJoint392.children = new MFNode();

HAnimJoint392.children[0] = HAnimSegment393;

HAnimSegment HAnimSegment398 = createNode("HAnimSegment");
HAnimSegment398.name = "l5";
HAnimSegment398.DEF = "Joe_l5";
Shape Shape399 = createNode("Shape");
Appearance Appearance400 = createNode("Appearance");
Appearance400.USE = "SegmentLine";
Shape399.appearance = Appearance400;

IndexedLineSet IndexedLineSet401 = createNode("IndexedLineSet");
IndexedLineSet401.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate402 = createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0,1.045,-0.095,0,1.068,-0.085]);
IndexedLineSet401.coord = Coordinate402;

Shape399.geometry = IndexedLineSet401;

HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = Shape399;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.name = "waist_preferred_posterior_pt";
HAnimSite403.DEF = "Joe_waist_preferred_posterior_pt";
HAnimSite403.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
Shape Shape404 = createNode("Shape");
Shape404.USE = "sitebox";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = Shape404;

HAnimSegment398.children[1] = HAnimSite403;

HAnimSite HAnimSite405 = createNode("HAnimSite");
HAnimSite405.name = "navel_pt";
HAnimSite405.DEF = "Joe_navel_pt";
HAnimSite405.translation = new SFVec3f(new float[0,1.0723,0.09]);
Shape Shape406 = createNode("Shape");
Shape406.USE = "sitebox";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = Shape406;

HAnimSegment398.children[2] = HAnimSite405;

HAnimJoint392.children[1] = HAnimSegment398;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.name = "vl4";
HAnimJoint407.DEF = "Joe_vl4";
HAnimJoint407.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimSegment HAnimSegment408 = createNode("HAnimSegment");
HAnimSegment408.name = "l4";
HAnimSegment408.DEF = "Joe_l4";
Shape Shape409 = createNode("Shape");
Appearance Appearance410 = createNode("Appearance");
Appearance410.USE = "SegmentLine";
Shape409.appearance = Appearance410;

IndexedLineSet IndexedLineSet411 = createNode("IndexedLineSet");
IndexedLineSet411.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate412 = createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0,1.068,-0.085,0,1.092,-0.0725]);
IndexedLineSet411.coord = Coordinate412;

Shape409.geometry = IndexedLineSet411;

HAnimSegment408.children = new MFNode();

HAnimSegment408.children[0] = Shape409;

Transform Transform413 = createNode("Transform");
Transform413.translation = new SFVec3f(new float[0,1.068,-0.085]);
Shape Shape414 = createNode("Shape");
Shape414.USE = "jointbox";
Transform413.child = new undefined();

Transform413.child[0] = Shape414;

HAnimSegment408.children[1] = Transform413;

HAnimJoint407.children = new MFNode();

HAnimJoint407.children[0] = HAnimSegment408;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.name = "vl3";
HAnimJoint415.DEF = "Joe_vl3";
HAnimJoint415.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimSegment HAnimSegment416 = createNode("HAnimSegment");
HAnimSegment416.name = "l3";
HAnimSegment416.DEF = "Joe_l3";
Shape Shape417 = createNode("Shape");
Appearance Appearance418 = createNode("Appearance");
Appearance418.USE = "SegmentLine";
Shape417.appearance = Appearance418;

IndexedLineSet IndexedLineSet419 = createNode("IndexedLineSet");
IndexedLineSet419.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate420 = createNode("Coordinate");
Coordinate420.point = new MFVec3f(new float[0,1.092,-0.0725,0,1.12,-0.065]);
IndexedLineSet419.coord = Coordinate420;

Shape417.geometry = IndexedLineSet419;

HAnimSegment416.children = new MFNode();

HAnimSegment416.children[0] = Shape417;

Transform Transform421 = createNode("Transform");
Transform421.translation = new SFVec3f(new float[0,1.092,-0.0725]);
Shape Shape422 = createNode("Shape");
Shape422.USE = "jointbox";
Transform421.child = new undefined();

Transform421.child[0] = Shape422;

HAnimSegment416.children[1] = Transform421;

HAnimJoint415.children = new MFNode();

HAnimJoint415.children[0] = HAnimSegment416;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.name = "vl2";
HAnimJoint423.DEF = "Joe_vl2";
HAnimJoint423.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint423.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint423.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment HAnimSegment424 = createNode("HAnimSegment");
HAnimSegment424.name = "l2";
HAnimSegment424.DEF = "Joe_l2";
Shape Shape425 = createNode("Shape");
Appearance Appearance426 = createNode("Appearance");
Appearance426.USE = "SegmentLine";
Shape425.appearance = Appearance426;

IndexedLineSet IndexedLineSet427 = createNode("IndexedLineSet");
IndexedLineSet427.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate428 = createNode("Coordinate");
Coordinate428.point = new MFVec3f(new float[0,1.12,-0.065,0,1.1459,-0.0625]);
IndexedLineSet427.coord = Coordinate428;

Shape425.geometry = IndexedLineSet427;

HAnimSegment424.children = new MFNode();

HAnimSegment424.children[0] = Shape425;

Transform Transform429 = createNode("Transform");
Transform429.translation = new SFVec3f(new float[0,1.12,-0.065]);
Shape Shape430 = createNode("Shape");
Shape430.USE = "jointbox";
Transform429.child = new undefined();

Transform429.child[0] = Shape430;

HAnimSegment424.children[1] = Transform429;

Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[-0.087,1.19,-0.09]);
Shape Shape432 = createNode("Shape");
Shape432.USE = "skinsphere";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

HAnimSegment424.children[2] = Transform431;

Transform Transform433 = createNode("Transform");
Transform433.translation = new SFVec3f(new float[0.087,1.19,-0.09]);
Shape Shape434 = createNode("Shape");
Shape434.USE = "skinsphere";
Transform433.child = new undefined();

Transform433.child[0] = Shape434;

HAnimSegment424.children[3] = Transform433;

Transform Transform435 = createNode("Transform");
Transform435.translation = new SFVec3f(new float[0.172,1.32,-0.03]);
Shape Shape436 = createNode("Shape");
Shape436.USE = "skinsphere";
Transform435.child = new undefined();

Transform435.child[0] = Shape436;

HAnimSegment424.children[4] = Transform435;

Transform Transform437 = createNode("Transform");
Transform437.translation = new SFVec3f(new float[-0.172,1.32,-0.03]);
Shape Shape438 = createNode("Shape");
Shape438.USE = "skinsphere";
Transform437.child = new undefined();

Transform437.child[0] = Shape438;

HAnimSegment424.children[5] = Transform437;

Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.15,1.23,-0.015]);
Shape Shape440 = createNode("Shape");
Shape440.USE = "skinsphere";
Transform439.child = new undefined();

Transform439.child[0] = Shape440;

HAnimSegment424.children[6] = Transform439;

Transform Transform441 = createNode("Transform");
Transform441.translation = new SFVec3f(new float[-0.15,1.23,-0.015]);
Shape Shape442 = createNode("Shape");
Shape442.USE = "skinsphere";
Transform441.child = new undefined();

Transform441.child[0] = Shape442;

HAnimSegment424.children[7] = Transform441;

HAnimSite HAnimSite443 = createNode("HAnimSite");
HAnimSite443.name = "r_rib10_pt";
HAnimSite443.DEF = "Joe_r_rib10_pt";
HAnimSite443.translation = new SFVec3f(new float[-0.087,1.19,0.09]);
Shape Shape444 = createNode("Shape");
Shape444.USE = "sitebox";
HAnimSite443.children = new MFNode();

HAnimSite443.children[0] = Shape444;

HAnimSegment424.children[8] = HAnimSite443;

HAnimSite HAnimSite445 = createNode("HAnimSite");
HAnimSite445.name = "l_rib10_pt";
HAnimSite445.DEF = "Joe_l_rib10_pt";
HAnimSite445.translation = new SFVec3f(new float[0.087,1.19,0.09]);
Shape Shape446 = createNode("Shape");
Shape446.USE = "sitebox";
HAnimSite445.children = new MFNode();

HAnimSite445.children[0] = Shape446;

HAnimSegment424.children[9] = HAnimSite445;

HAnimSite HAnimSite447 = createNode("HAnimSite");
HAnimSite447.name = "rib10_midspine_pt";
HAnimSite447.DEF = "Joe_rib10_midspine_pt";
HAnimSite447.translation = new SFVec3f(new float[0,1.1908,-0.1113]);
Shape Shape448 = createNode("Shape");
Shape448.USE = "sitebox";
HAnimSite447.children = new MFNode();

HAnimSite447.children[0] = Shape448;

HAnimSegment424.children[10] = HAnimSite447;

HAnimJoint423.children = new MFNode();

HAnimJoint423.children[0] = HAnimSegment424;

HAnimJoint HAnimJoint449 = createNode("HAnimJoint");
HAnimJoint449.name = "vl1";
HAnimJoint449.DEF = "Joe_vl1";
HAnimJoint449.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimSegment HAnimSegment450 = createNode("HAnimSegment");
HAnimSegment450.name = "l1";
HAnimSegment450.DEF = "Joe_l1";
Shape Shape451 = createNode("Shape");
Appearance Appearance452 = createNode("Appearance");
Appearance452.USE = "SegmentLine";
Shape451.appearance = Appearance452;

IndexedLineSet IndexedLineSet453 = createNode("IndexedLineSet");
IndexedLineSet453.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate454 = createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[0,1.1459,-0.0625,0,1.179,-0.068]);
IndexedLineSet453.coord = Coordinate454;

Shape451.geometry = IndexedLineSet453;

HAnimSegment450.children = new MFNode();

HAnimSegment450.children[0] = Shape451;

Transform Transform455 = createNode("Transform");
Transform455.translation = new SFVec3f(new float[0,1.1459,-0.0625]);
Shape Shape456 = createNode("Shape");
Shape456.USE = "jointbox";
Transform455.child = new undefined();

Transform455.child[0] = Shape456;

HAnimSegment450.children[1] = Transform455;

HAnimJoint449.children = new MFNode();

HAnimJoint449.children[0] = HAnimSegment450;

HAnimJoint HAnimJoint457 = createNode("HAnimJoint");
HAnimJoint457.name = "vt12";
HAnimJoint457.DEF = "Joe_vt12";
HAnimJoint457.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimSegment HAnimSegment458 = createNode("HAnimSegment");
HAnimSegment458.name = "t12";
HAnimSegment458.DEF = "Joe_t12";
Shape Shape459 = createNode("Shape");
Appearance Appearance460 = createNode("Appearance");
Appearance460.USE = "SegmentLine";
Shape459.appearance = Appearance460;

IndexedLineSet IndexedLineSet461 = createNode("IndexedLineSet");
IndexedLineSet461.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate462 = createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[0,1.179,-0.068,0,1.242,-0.09]);
IndexedLineSet461.coord = Coordinate462;

Shape459.geometry = IndexedLineSet461;

HAnimSegment458.children = new MFNode();

HAnimSegment458.children[0] = Shape459;

Transform Transform463 = createNode("Transform");
Transform463.translation = new SFVec3f(new float[0,1.179,-0.068]);
Shape Shape464 = createNode("Shape");
Shape464.USE = "jointbox";
Transform463.child = new undefined();

Transform463.child[0] = Shape464;

HAnimSegment458.children[1] = Transform463;

HAnimJoint457.children = new MFNode();

HAnimJoint457.children[0] = HAnimSegment458;

HAnimJoint HAnimJoint465 = createNode("HAnimJoint");
HAnimJoint465.name = "vt11";
HAnimJoint465.DEF = "Joe_vt11";
HAnimJoint465.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.name = "t11";
HAnimSegment466.DEF = "Joe_t11";
Shape Shape467 = createNode("Shape");
Appearance Appearance468 = createNode("Appearance");
Appearance468.USE = "SegmentLine";
Shape467.appearance = Appearance468;

IndexedLineSet IndexedLineSet469 = createNode("IndexedLineSet");
IndexedLineSet469.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate470 = createNode("Coordinate");
Coordinate470.point = new MFVec3f(new float[0,1.2145,-0.0755,0,1.242,-0.09]);
IndexedLineSet469.coord = Coordinate470;

Shape467.geometry = IndexedLineSet469;

HAnimSegment466.children = new MFNode();

HAnimSegment466.children[0] = Shape467;

Transform Transform471 = createNode("Transform");
Transform471.translation = new SFVec3f(new float[0,1.2145,-0.0755]);
Shape Shape472 = createNode("Shape");
Shape472.USE = "jointbox";
Transform471.child = new undefined();

Transform471.child[0] = Shape472;

HAnimSegment466.children[1] = Transform471;

HAnimJoint465.children = new MFNode();

HAnimJoint465.children[0] = HAnimSegment466;

HAnimJoint HAnimJoint473 = createNode("HAnimJoint");
HAnimJoint473.name = "vt10";
HAnimJoint473.DEF = "Joe_vt10";
HAnimJoint473.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint473.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint473.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.name = "t10";
HAnimSegment474.DEF = "Joe_t10";
Shape Shape475 = createNode("Shape");
Appearance Appearance476 = createNode("Appearance");
Appearance476.USE = "SegmentLine";
Shape475.appearance = Appearance476;

IndexedLineSet IndexedLineSet477 = createNode("IndexedLineSet");
IndexedLineSet477.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate478 = createNode("Coordinate");
Coordinate478.point = new MFVec3f(new float[0,1.242,-0.09,0,1.268,-0.1]);
IndexedLineSet477.coord = Coordinate478;

Shape475.geometry = IndexedLineSet477;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Shape475;

Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[0,1.242,-0.09]);
Shape Shape480 = createNode("Shape");
Shape480.USE = "jointbox";
Transform479.child = new undefined();

Transform479.child[0] = Shape480;

HAnimSegment474.children[1] = Transform479;

HAnimSite HAnimSite481 = createNode("HAnimSite");
HAnimSite481.name = "substernale_pt";
HAnimSite481.DEF = "Joe_substernale_pt";
HAnimSite481.translation = new SFVec3f(new float[0,1.25,0.113]);
Shape Shape482 = createNode("Shape");
Shape482.USE = "sitebox";
HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = Shape482;

HAnimSegment474.children[2] = HAnimSite481;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

HAnimJoint HAnimJoint483 = createNode("HAnimJoint");
HAnimJoint483.name = "vt9";
HAnimJoint483.DEF = "Joe_vt9";
HAnimJoint483.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint483.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint483.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.name = "t9";
HAnimSegment484.DEF = "Joe_t9";
Shape Shape485 = createNode("Shape");
Appearance Appearance486 = createNode("Appearance");
Appearance486.USE = "SegmentLine";
Shape485.appearance = Appearance486;

IndexedLineSet IndexedLineSet487 = createNode("IndexedLineSet");
IndexedLineSet487.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate488 = createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[0,1.268,-0.1,0,1.294,-0.11]);
IndexedLineSet487.coord = Coordinate488;

Shape485.geometry = IndexedLineSet487;

HAnimSegment484.children = new MFNode();

HAnimSegment484.children[0] = Shape485;

Transform Transform489 = createNode("Transform");
Transform489.translation = new SFVec3f(new float[0,1.268,-0.1]);
Shape Shape490 = createNode("Shape");
Shape490.USE = "jointbox";
Transform489.child = new undefined();

Transform489.child[0] = Shape490;

HAnimSegment484.children[1] = Transform489;

HAnimSite HAnimSite491 = createNode("HAnimSite");
HAnimSite491.name = "r_thelion_pt";
HAnimSite491.DEF = "Joe_r_thelion_pt";
HAnimSite491.translation = new SFVec3f(new float[-0.1135,1.318,0.095]);
Shape Shape492 = createNode("Shape");
Shape492.USE = "sitebox";
HAnimSite491.children = new MFNode();

HAnimSite491.children[0] = Shape492;

HAnimSegment484.children[2] = HAnimSite491;

HAnimSite HAnimSite493 = createNode("HAnimSite");
HAnimSite493.name = "l_thelion_pt";
HAnimSite493.DEF = "Joe_l_thelion_pt";
HAnimSite493.translation = new SFVec3f(new float[0.1135,1.318,0.095]);
Shape Shape494 = createNode("Shape");
Shape494.USE = "sitebox";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = Shape494;

HAnimSegment484.children[3] = HAnimSite493;

HAnimJoint483.children = new MFNode();

HAnimJoint483.children[0] = HAnimSegment484;

HAnimJoint HAnimJoint495 = createNode("HAnimJoint");
HAnimJoint495.name = "vt8";
HAnimJoint495.DEF = "Joe_vt8";
HAnimJoint495.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.name = "t8";
HAnimSegment496.DEF = "Joe_t8";
Shape Shape497 = createNode("Shape");
Appearance Appearance498 = createNode("Appearance");
Appearance498.USE = "SegmentLine";
Shape497.appearance = Appearance498;

IndexedLineSet IndexedLineSet499 = createNode("IndexedLineSet");
IndexedLineSet499.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate500 = createNode("Coordinate");
Coordinate500.point = new MFVec3f(new float[0,1.294,-0.11,0,1.352,-0.12]);
IndexedLineSet499.coord = Coordinate500;

Shape497.geometry = IndexedLineSet499;

HAnimSegment496.children = new MFNode();

HAnimSegment496.children[0] = Shape497;

Transform Transform501 = createNode("Transform");
Transform501.translation = new SFVec3f(new float[0,1.294,-0.11]);
Shape Shape502 = createNode("Shape");
Shape502.USE = "jointbox";
Transform501.child = new undefined();

Transform501.child[0] = Shape502;

HAnimSegment496.children[1] = Transform501;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = HAnimSegment496;

HAnimJoint HAnimJoint503 = createNode("HAnimJoint");
HAnimJoint503.name = "vt7";
HAnimJoint503.DEF = "Joe_vt7";
HAnimJoint503.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.name = "t7";
HAnimSegment504.DEF = "Joe_t7";
Shape Shape505 = createNode("Shape");
Appearance Appearance506 = createNode("Appearance");
Appearance506.USE = "SegmentLine";
Shape505.appearance = Appearance506;

IndexedLineSet IndexedLineSet507 = createNode("IndexedLineSet");
IndexedLineSet507.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate508 = createNode("Coordinate");
Coordinate508.point = new MFVec3f(new float[0,1.352,-0.12,0,1.381,-0.1235]);
IndexedLineSet507.coord = Coordinate508;

Shape505.geometry = IndexedLineSet507;

HAnimSegment504.children = new MFNode();

HAnimSegment504.children[0] = Shape505;

Transform Transform509 = createNode("Transform");
Transform509.translation = new SFVec3f(new float[0,1.323,-0.1155]);
Shape Shape510 = createNode("Shape");
Shape510.USE = "jointbox";
Transform509.child = new undefined();

Transform509.child[0] = Shape510;

HAnimSegment504.children[1] = Transform509;

HAnimJoint503.children = new MFNode();

HAnimJoint503.children[0] = HAnimSegment504;

HAnimJoint HAnimJoint511 = createNode("HAnimJoint");
HAnimJoint511.name = "vt6";
HAnimJoint511.DEF = "Joe_vt6";
HAnimJoint511.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.name = "t6";
HAnimSegment512.DEF = "Joe_t6";
Shape Shape513 = createNode("Shape");
Appearance Appearance514 = createNode("Appearance");
Appearance514.USE = "SegmentLine";
Shape513.appearance = Appearance514;

IndexedLineSet IndexedLineSet515 = createNode("IndexedLineSet");
IndexedLineSet515.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate516 = createNode("Coordinate");
Coordinate516.point = new MFVec3f(new float[0,1.381,-0.1235,0,1.41,-0.1235]);
IndexedLineSet515.coord = Coordinate516;

Shape513.geometry = IndexedLineSet515;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Shape513;

Transform Transform517 = createNode("Transform");
Transform517.translation = new SFVec3f(new float[0,1.352,-0.12]);
Shape Shape518 = createNode("Shape");
Shape518.USE = "jointbox";
Transform517.child = new undefined();

Transform517.child[0] = Shape518;

HAnimSegment512.children[1] = Transform517;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

HAnimJoint HAnimJoint519 = createNode("HAnimJoint");
HAnimJoint519.name = "vt5";
HAnimJoint519.DEF = "Joe_vt5";
HAnimJoint519.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimSegment HAnimSegment520 = createNode("HAnimSegment");
HAnimSegment520.name = "t5";
HAnimSegment520.DEF = "Joe_t5";
Shape Shape521 = createNode("Shape");
Appearance Appearance522 = createNode("Appearance");
Appearance522.USE = "SegmentLine";
Shape521.appearance = Appearance522;

IndexedLineSet IndexedLineSet523 = createNode("IndexedLineSet");
IndexedLineSet523.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate524 = createNode("Coordinate");
Coordinate524.point = new MFVec3f(new float[0,1.41,-0.1235,0,1.438,-0.12]);
IndexedLineSet523.coord = Coordinate524;

Shape521.geometry = IndexedLineSet523;

HAnimSegment520.children = new MFNode();

HAnimSegment520.children[0] = Shape521;

Transform Transform525 = createNode("Transform");
Transform525.translation = new SFVec3f(new float[0,1.381,-0.1235]);
Shape Shape526 = createNode("Shape");
Shape526.USE = "jointbox";
Transform525.child = new undefined();

Transform525.child[0] = Shape526;

HAnimSegment520.children[1] = Transform525;

HAnimJoint519.children = new MFNode();

HAnimJoint519.children[0] = HAnimSegment520;

HAnimJoint HAnimJoint527 = createNode("HAnimJoint");
HAnimJoint527.name = "vt4";
HAnimJoint527.DEF = "Joe_vt4";
HAnimJoint527.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint527.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint527.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment528 = createNode("HAnimSegment");
HAnimSegment528.name = "t4";
HAnimSegment528.DEF = "Joe_t4";
Shape Shape529 = createNode("Shape");
Appearance Appearance530 = createNode("Appearance");
Appearance530.USE = "SegmentLine";
Shape529.appearance = Appearance530;

IndexedLineSet IndexedLineSet531 = createNode("IndexedLineSet");
IndexedLineSet531.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate532 = createNode("Coordinate");
Coordinate532.point = new MFVec3f(new float[0,1.41,-0.1235,0,1.438,-0.12]);
IndexedLineSet531.coord = Coordinate532;

Shape529.geometry = IndexedLineSet531;

HAnimSegment528.children = new MFNode();

HAnimSegment528.children[0] = Shape529;

Transform Transform533 = createNode("Transform");
Transform533.translation = new SFVec3f(new float[0,1.41,-0.1235]);
Shape Shape534 = createNode("Shape");
Shape534.USE = "jointbox";
Transform533.child = new undefined();

Transform533.child[0] = Shape534;

HAnimSegment528.children[1] = Transform533;

Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[0,1.41,-0.145]);
Shape Shape536 = createNode("Shape");
Shape536.USE = "skinsphere";
Transform535.child = new undefined();

Transform535.child[0] = Shape536;

HAnimSegment528.children[2] = Transform535;

HAnimJoint527.children = new MFNode();

HAnimJoint527.children[0] = HAnimSegment528;

HAnimJoint HAnimJoint537 = createNode("HAnimJoint");
HAnimJoint537.name = "vt3";
HAnimJoint537.DEF = "Joe_vt3";
HAnimJoint537.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.name = "t3";
HAnimSegment538.DEF = "Joe_t3";
Shape Shape539 = createNode("Shape");
Appearance Appearance540 = createNode("Appearance");
Appearance540.USE = "SegmentLine";
Shape539.appearance = Appearance540;

IndexedLineSet IndexedLineSet541 = createNode("IndexedLineSet");
IndexedLineSet541.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate542 = createNode("Coordinate");
Coordinate542.point = new MFVec3f(new float[0,1.438,-0.12,0,1.468,-0.105]);
IndexedLineSet541.coord = Coordinate542;

Shape539.geometry = IndexedLineSet541;

HAnimSegment538.children = new MFNode();

HAnimSegment538.children[0] = Shape539;

Transform Transform543 = createNode("Transform");
Transform543.translation = new SFVec3f(new float[0,1.438,-0.12]);
Shape Shape544 = createNode("Shape");
Shape544.USE = "jointbox";
Transform543.child = new undefined();

Transform543.child[0] = Shape544;

HAnimSegment538.children[1] = Transform543;

HAnimJoint537.children = new MFNode();

HAnimJoint537.children[0] = HAnimSegment538;

HAnimJoint HAnimJoint545 = createNode("HAnimJoint");
HAnimJoint545.name = "vt2";
HAnimJoint545.DEF = "Joe_vt2";
HAnimJoint545.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimSegment HAnimSegment546 = createNode("HAnimSegment");
HAnimSegment546.name = "t2";
HAnimSegment546.DEF = "Joe_t2";
Shape Shape547 = createNode("Shape");
Appearance Appearance548 = createNode("Appearance");
Appearance548.USE = "SegmentLine";
Shape547.appearance = Appearance548;

IndexedLineSet IndexedLineSet549 = createNode("IndexedLineSet");
IndexedLineSet549.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate550 = createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0,1.468,-0.105,0,1.497,-0.09]);
IndexedLineSet549.coord = Coordinate550;

Shape547.geometry = IndexedLineSet549;

HAnimSegment546.children = new MFNode();

HAnimSegment546.children[0] = Shape547;

Transform Transform551 = createNode("Transform");
Transform551.translation = new SFVec3f(new float[0,1.468,-0.105]);
Shape Shape552 = createNode("Shape");
Shape552.USE = "jointbox";
Transform551.child = new undefined();

Transform551.child[0] = Shape552;

HAnimSegment546.children[1] = Transform551;

HAnimJoint545.children = new MFNode();

HAnimJoint545.children[0] = HAnimSegment546;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.name = "vt1";
HAnimJoint553.DEF = "Joe_vt1";
HAnimJoint553.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint553.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint553.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.name = "t1";
HAnimSegment554.DEF = "Joe_t1";
Shape Shape555 = createNode("Shape");
Appearance Appearance556 = createNode("Appearance");
Appearance556.USE = "SegmentLine";
Shape555.appearance = Appearance556;

IndexedLineSet IndexedLineSet557 = createNode("IndexedLineSet");
IndexedLineSet557.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate558 = createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0,1.497,-0.09,0,1.525,-0.072]);
IndexedLineSet557.coord = Coordinate558;

Shape555.geometry = IndexedLineSet557;

HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = Shape555;

Transform Transform559 = createNode("Transform");
Transform559.translation = new SFVec3f(new float[0,1.497,-0.09]);
Shape Shape560 = createNode("Shape");
Shape560.USE = "jointbox";
Transform559.child = new undefined();

Transform559.child[0] = Shape560;

HAnimSegment554.children[1] = Transform559;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.name = "suprasternale_pt";
HAnimSite561.DEF = "Joe_suprasternale_pt";
HAnimSite561.translation = new SFVec3f(new float[0,1.44,0.03]);
Shape Shape562 = createNode("Shape");
Shape562.USE = "sitebox";
HAnimSite561.children = new MFNode();

HAnimSite561.children[0] = Shape562;

HAnimSegment554.children[2] = HAnimSite561;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.name = "cervicale_pt";
HAnimSite563.DEF = "Joe_cervicale_pt";
HAnimSite563.translation = new SFVec3f(new float[0,1.53,-0.084]);
Shape Shape564 = createNode("Shape");
Shape564.USE = "sitebox";
HAnimSite563.children = new MFNode();

HAnimSite563.children[0] = Shape564;

HAnimSegment554.children[3] = HAnimSite563;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

HAnimJoint HAnimJoint565 = createNode("HAnimJoint");
HAnimJoint565.name = "vc7";
HAnimJoint565.DEF = "Joe_vc7";
HAnimJoint565.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint565.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint565.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment566 = createNode("HAnimSegment");
HAnimSegment566.name = "c7";
HAnimSegment566.DEF = "Joe_c7";
Shape Shape567 = createNode("Shape");
Appearance Appearance568 = createNode("Appearance");
Appearance568.USE = "SegmentLine";
Shape567.appearance = Appearance568;

IndexedLineSet IndexedLineSet569 = createNode("IndexedLineSet");
IndexedLineSet569.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate570 = createNode("Coordinate");
Coordinate570.point = new MFVec3f(new float[0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]);
IndexedLineSet569.coord = Coordinate570;

Shape567.geometry = IndexedLineSet569;

HAnimSegment566.children = new MFNode();

HAnimSegment566.children[0] = Shape567;

Transform Transform571 = createNode("Transform");
Transform571.translation = new SFVec3f(new float[0,1.525,-0.072]);
Shape Shape572 = createNode("Shape");
Shape572.USE = "jointbox";
Transform571.child = new undefined();

Transform571.child[0] = Shape572;

HAnimSegment566.children[1] = Transform571;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.name = "r_neck_base_pt";
HAnimSite573.DEF = "Joe_r_neck_base_pt";
HAnimSite573.translation = new SFVec3f(new float[-0.0646,1.5149,-0.0385]);
Shape Shape574 = createNode("Shape");
Shape574.USE = "sitebox";
HAnimSite573.children = new MFNode();

HAnimSite573.children[0] = Shape574;

HAnimSegment566.children[2] = HAnimSite573;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.name = "l_neck_base_pt";
HAnimSite575.DEF = "Joe_l_neck_base_pt";
HAnimSite575.translation = new SFVec3f(new float[0.0646,1.5149,-0.0385]);
Shape Shape576 = createNode("Shape");
Shape576.USE = "sitebox";
HAnimSite575.children = new MFNode();

HAnimSite575.children[0] = Shape576;

HAnimSegment566.children[3] = HAnimSite575;

HAnimJoint565.children = new MFNode();

HAnimJoint565.children[0] = HAnimSegment566;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.name = "vc6";
HAnimJoint577.DEF = "Joe_vc6";
HAnimJoint577.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimSegment HAnimSegment578 = createNode("HAnimSegment");
HAnimSegment578.name = "c6";
HAnimSegment578.DEF = "Joe_c6";
Shape Shape579 = createNode("Shape");
Appearance Appearance580 = createNode("Appearance");
Appearance580.USE = "SegmentLine";
Shape579.appearance = Appearance580;

IndexedLineSet IndexedLineSet581 = createNode("IndexedLineSet");
IndexedLineSet581.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate582 = createNode("Coordinate");
Coordinate582.point = new MFVec3f(new float[0,1.54,-0.05,0,1.5675,-0.0256]);
IndexedLineSet581.coord = Coordinate582;

Shape579.geometry = IndexedLineSet581;

HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = Shape579;

Transform Transform583 = createNode("Transform");
Transform583.translation = new SFVec3f(new float[0,1.54,-0.05]);
Shape Shape584 = createNode("Shape");
Shape584.USE = "jointbox";
Transform583.child = new undefined();

Transform583.child[0] = Shape584;

HAnimSegment578.children[1] = Transform583;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

HAnimJoint HAnimJoint585 = createNode("HAnimJoint");
HAnimJoint585.name = "vc5";
HAnimJoint585.DEF = "Joe_vc5";
HAnimJoint585.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimSegment HAnimSegment586 = createNode("HAnimSegment");
HAnimSegment586.name = "c5";
HAnimSegment586.DEF = "Joe_c5";
Transform Transform587 = createNode("Transform");
Transform587.translation = new SFVec3f(new float[0,1.552,-0.035]);
Shape Shape588 = createNode("Shape");
Shape588.USE = "jointbox";
Transform587.child = new undefined();

Transform587.child[0] = Shape588;

HAnimSegment586.children = new MFNode();

HAnimSegment586.children[0] = Transform587;

Shape Shape589 = createNode("Shape");
Appearance Appearance590 = createNode("Appearance");
Appearance590.USE = "SegmentLine";
Shape589.appearance = Appearance590;

IndexedLineSet IndexedLineSet591 = createNode("IndexedLineSet");
IndexedLineSet591.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate592 = createNode("Coordinate");
Coordinate592.point = new MFVec3f(new float[0,1.5675,-0.0256,0,1.5823,-0.0185]);
IndexedLineSet591.coord = Coordinate592;

Shape589.geometry = IndexedLineSet591;

HAnimSegment586.children[1] = Shape589;

HAnimJoint585.children = new MFNode();

HAnimJoint585.children[0] = HAnimSegment586;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.name = "vc4";
HAnimJoint593.DEF = "Joe_vc4";
HAnimJoint593.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimSegment HAnimSegment594 = createNode("HAnimSegment");
HAnimSegment594.name = "c4";
HAnimSegment594.DEF = "Joe_c4";
Shape Shape595 = createNode("Shape");
Appearance Appearance596 = createNode("Appearance");
Appearance596.USE = "SegmentLine";
Shape595.appearance = Appearance596;

IndexedLineSet IndexedLineSet597 = createNode("IndexedLineSet");
IndexedLineSet597.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate598 = createNode("Coordinate");
Coordinate598.point = new MFVec3f(new float[0,1.5823,-0.0185,0,1.595,-0.0175]);
IndexedLineSet597.coord = Coordinate598;

Shape595.geometry = IndexedLineSet597;

HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = Shape595;

Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[0,1.5675,-0.0256]);
Shape Shape600 = createNode("Shape");
Shape600.USE = "jointbox";
Transform599.child = new undefined();

Transform599.child[0] = Shape600;

HAnimSegment594.children[1] = Transform599;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

HAnimJoint HAnimJoint601 = createNode("HAnimJoint");
HAnimJoint601.name = "vc3";
HAnimJoint601.DEF = "Joe_vc3";
HAnimJoint601.center = new SFVec3f(new float[0,1.5823,-0.0185]);
HAnimSegment HAnimSegment602 = createNode("HAnimSegment");
HAnimSegment602.name = "c3";
HAnimSegment602.DEF = "Joe_c3";
Shape Shape603 = createNode("Shape");
Appearance Appearance604 = createNode("Appearance");
Appearance604.USE = "SegmentLine";
Shape603.appearance = Appearance604;

IndexedLineSet IndexedLineSet605 = createNode("IndexedLineSet");
IndexedLineSet605.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate606 = createNode("Coordinate");
Coordinate606.point = new MFVec3f(new float[0,1.595,-0.0175,0,1.61,-0.015]);
IndexedLineSet605.coord = Coordinate606;

Shape603.geometry = IndexedLineSet605;

HAnimSegment602.children = new MFNode();

HAnimSegment602.children[0] = Shape603;

Transform Transform607 = createNode("Transform");
Transform607.translation = new SFVec3f(new float[0,1.5823,-0.0185]);
Shape Shape608 = createNode("Shape");
Shape608.USE = "jointbox";
Transform607.child = new undefined();

Transform607.child[0] = Shape608;

HAnimSegment602.children[1] = Transform607;

HAnimJoint601.children = new MFNode();

HAnimJoint601.children[0] = HAnimSegment602;

HAnimJoint HAnimJoint609 = createNode("HAnimJoint");
HAnimJoint609.name = "vc2";
HAnimJoint609.DEF = "Joe_vc2";
HAnimJoint609.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimSegment HAnimSegment610 = createNode("HAnimSegment");
HAnimSegment610.name = "c2";
HAnimSegment610.DEF = "Joe_c2";
Shape Shape611 = createNode("Shape");
Appearance Appearance612 = createNode("Appearance");
Appearance612.USE = "SegmentLine";
Shape611.appearance = Appearance612;

IndexedLineSet IndexedLineSet613 = createNode("IndexedLineSet");
IndexedLineSet613.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate614 = createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0,1.61,-0.015,0,1.6144,-0.0034]);
IndexedLineSet613.coord = Coordinate614;

Shape611.geometry = IndexedLineSet613;

HAnimSegment610.children = new MFNode();

HAnimSegment610.children[0] = Shape611;

Transform Transform615 = createNode("Transform");
Transform615.translation = new SFVec3f(new float[0,1.595,-0.0175]);
Shape Shape616 = createNode("Shape");
Shape616.USE = "jointbox";
Transform615.child = new undefined();

Transform615.child[0] = Shape616;

HAnimSegment610.children[1] = Transform615;

HAnimJoint609.children = new MFNode();

HAnimJoint609.children[0] = HAnimSegment610;

HAnimJoint HAnimJoint617 = createNode("HAnimJoint");
HAnimJoint617.name = "vc1";
HAnimJoint617.DEF = "Joe_vc1";
HAnimJoint617.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimSegment HAnimSegment618 = createNode("HAnimSegment");
HAnimSegment618.name = "c1";
HAnimSegment618.DEF = "Joe_c1";
Shape Shape619 = createNode("Shape");
Appearance Appearance620 = createNode("Appearance");
Appearance620.USE = "SegmentLine";
Shape619.appearance = Appearance620;

IndexedLineSet IndexedLineSet621 = createNode("IndexedLineSet");
IndexedLineSet621.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate622 = createNode("Coordinate");
Coordinate622.point = new MFVec3f(new float[0,1.6144,-0.0034,0,1.63,-0.01]);
IndexedLineSet621.coord = Coordinate622;

Shape619.geometry = IndexedLineSet621;

HAnimSegment618.children = new MFNode();

HAnimSegment618.children[0] = Shape619;

Transform Transform623 = createNode("Transform");
Transform623.translation = new SFVec3f(new float[0,1.61,-0.015]);
Shape Shape624 = createNode("Shape");
Shape624.USE = "jointbox";
Transform623.child = new undefined();

Transform623.child[0] = Shape624;

HAnimSegment618.children[1] = Transform623;

HAnimJoint617.children = new MFNode();

HAnimJoint617.children[0] = HAnimSegment618;

HAnimJoint HAnimJoint625 = createNode("HAnimJoint");
HAnimJoint625.name = "skullbase";
HAnimJoint625.DEF = "Joe_skullbase";
HAnimJoint625.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint625.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint625.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment626 = createNode("HAnimSegment");
HAnimSegment626.name = "skull";
HAnimSegment626.DEF = "Joe_skull";
Shape Shape627 = createNode("Shape");
Appearance Appearance628 = createNode("Appearance");
Appearance628.USE = "SegmentLine";
Shape627.appearance = Appearance628;

IndexedLineSet IndexedLineSet629 = createNode("IndexedLineSet");
IndexedLineSet629.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
Coordinate Coordinate630 = createNode("Coordinate");
Coordinate630.point = new MFVec3f(new float[0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]);
IndexedLineSet629.coord = Coordinate630;

Shape627.geometry = IndexedLineSet629;

HAnimSegment626.children = new MFNode();

HAnimSegment626.children[0] = Shape627;

Transform Transform631 = createNode("Transform");
Transform631.translation = new SFVec3f(new float[0,1.63,-0.01]);
Shape Shape632 = createNode("Shape");
Shape632.USE = "jointbox";
Transform631.child = new undefined();

Transform631.child[0] = Shape632;

HAnimSegment626.children[1] = Transform631;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.name = "skull_vertex_tip";
HAnimSite633.DEF = "Joe_skull_vertex_tip";
HAnimSite633.translation = new SFVec3f(new float[0,1.77,0]);
Shape Shape634 = createNode("Shape");
Shape634.USE = "sitebox";
HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = Shape634;

HAnimSegment626.children[2] = HAnimSite633;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.name = "sellion_pt";
HAnimSite635.DEF = "Joe_sellion_pt";
HAnimSite635.translation = new SFVec3f(new float[0,1.665,0.09]);
Shape Shape636 = createNode("Shape");
Shape636.USE = "sitebox";
HAnimSite635.children = new MFNode();

HAnimSite635.children[0] = Shape636;

HAnimSegment626.children[3] = HAnimSite635;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.name = "r_infraorbitale_pt";
HAnimSite637.DEF = "Joe_r_infraorbitale_pt";
HAnimSite637.translation = new SFVec3f(new float[-0.033,1.62,0.087]);
Shape Shape638 = createNode("Shape");
Shape638.USE = "sitebox";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = Shape638;

HAnimSegment626.children[4] = HAnimSite637;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.name = "l_infraorbitale_pt";
HAnimSite639.DEF = "Joe_l_infraorbitale_pt";
HAnimSite639.translation = new SFVec3f(new float[0.033,1.62,0.087]);
Shape Shape640 = createNode("Shape");
Shape640.USE = "sitebox";
HAnimSite639.children = new MFNode();

HAnimSite639.children[0] = Shape640;

HAnimSegment626.children[5] = HAnimSite639;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.name = "supramenton_pt";
HAnimSite641.DEF = "Joe_supramenton_pt";
HAnimSite641.translation = new SFVec3f(new float[0,1.55,0.097]);
Shape Shape642 = createNode("Shape");
Shape642.USE = "sitebox";
HAnimSite641.children = new MFNode();

HAnimSite641.children[0] = Shape642;

HAnimSegment626.children[6] = HAnimSite641;

HAnimSite HAnimSite643 = createNode("HAnimSite");
HAnimSite643.name = "r_tragion_pt";
HAnimSite643.DEF = "Joe_r_tragion_pt";
HAnimSite643.translation = new SFVec3f(new float[-0.077,1.64,-0.01]);
Shape Shape644 = createNode("Shape");
Shape644.USE = "sitebox";
HAnimSite643.children = new MFNode();

HAnimSite643.children[0] = Shape644;

HAnimSegment626.children[7] = HAnimSite643;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.name = "r_gonion_pt";
HAnimSite645.DEF = "Joe_r_gonion_pt";
HAnimSite645.translation = new SFVec3f(new float[-0.052,1.58,0.015]);
Shape Shape646 = createNode("Shape");
Shape646.USE = "sitebox";
HAnimSite645.children = new MFNode();

HAnimSite645.children[0] = Shape646;

HAnimSegment626.children[8] = HAnimSite645;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.name = "l_tragion_pt";
HAnimSite647.DEF = "Joe_l_tragion_pt";
HAnimSite647.translation = new SFVec3f(new float[0.077,1.64,-0.01]);
Shape Shape648 = createNode("Shape");
Shape648.USE = "sitebox";
HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = Shape648;

HAnimSegment626.children[9] = HAnimSite647;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.name = "l_gonion_pt";
HAnimSite649.DEF = "Joe_l_gonion_pt";
HAnimSite649.translation = new SFVec3f(new float[0.0631,1.58,0.015]);
Shape Shape650 = createNode("Shape");
Shape650.USE = "sitebox";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = Shape650;

HAnimSegment626.children[10] = HAnimSite649;

HAnimSite HAnimSite651 = createNode("HAnimSite");
HAnimSite651.name = "nuchale_pt";
HAnimSite651.DEF = "Joe_nuchale_pt";
HAnimSite651.translation = new SFVec3f(new float[0,1.625,-0.0925]);
Shape Shape652 = createNode("Shape");
Shape652.USE = "sitebox";
HAnimSite651.children = new MFNode();

HAnimSite651.children[0] = Shape652;

HAnimSegment626.children[11] = HAnimSite651;

HAnimJoint625.children = new MFNode();

HAnimJoint625.children[0] = HAnimSegment626;

HAnimJoint HAnimJoint653 = createNode("HAnimJoint");
HAnimJoint653.name = "l_eyeball_joint";
HAnimJoint653.DEF = "Joe_l_eyeball_joint";
HAnimJoint653.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimSegment HAnimSegment654 = createNode("HAnimSegment");
HAnimSegment654.name = "l_eyeball";
HAnimSegment654.DEF = "Joe_l_eyeball";
Shape Shape655 = createNode("Shape");
Appearance Appearance656 = createNode("Appearance");
Appearance656.USE = "SegmentLine";
Shape655.appearance = Appearance656;

IndexedLineSet IndexedLineSet657 = createNode("IndexedLineSet");
IndexedLineSet657.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate658 = createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet657.coord = Coordinate658;

Shape655.geometry = IndexedLineSet657;

HAnimSegment654.children = new MFNode();

HAnimSegment654.children[0] = Shape655;

Transform Transform659 = createNode("Transform");
Transform659.scale = new SFVec3f(new float[1,1,1.4]);
Transform659.translation = new SFVec3f(new float[0.034,1.655,0.065]);
Shape Shape660 = createNode("Shape");
Shape660.USE = "jointbox";
Transform659.child = new undefined();

Transform659.child[0] = Shape660;

HAnimSegment654.children[1] = Transform659;

HAnimJoint653.children = new MFNode();

HAnimJoint653.children[0] = HAnimSegment654;

HAnimJoint625.children[1] = HAnimJoint653;

HAnimJoint HAnimJoint661 = createNode("HAnimJoint");
HAnimJoint661.name = "r_eyeball_joint";
HAnimJoint661.DEF = "Joe_r_eyeball_joint";
HAnimJoint661.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimSegment HAnimSegment662 = createNode("HAnimSegment");
HAnimSegment662.name = "r_eyeball";
HAnimSegment662.DEF = "Joe_r_eyeball";
Shape Shape663 = createNode("Shape");
Appearance Appearance664 = createNode("Appearance");
Appearance664.USE = "SegmentLine";
Shape663.appearance = Appearance664;

IndexedLineSet IndexedLineSet665 = createNode("IndexedLineSet");
IndexedLineSet665.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate666 = createNode("Coordinate");
Coordinate666.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet665.coord = Coordinate666;

Shape663.geometry = IndexedLineSet665;

HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = Shape663;

Transform Transform667 = createNode("Transform");
Transform667.scale = new SFVec3f(new float[1,1,1.4]);
Transform667.translation = new SFVec3f(new float[-0.034,1.655,0.065]);
Shape Shape668 = createNode("Shape");
Shape668.USE = "jointbox";
Transform667.child = new undefined();

Transform667.child[0] = Shape668;

HAnimSegment662.children[1] = Transform667;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

HAnimJoint625.children[2] = HAnimJoint661;

HAnimJoint617.children[1] = HAnimJoint625;

HAnimJoint609.children[1] = HAnimJoint617;

HAnimJoint601.children[1] = HAnimJoint609;

HAnimJoint593.children[1] = HAnimJoint601;

HAnimJoint585.children[1] = HAnimJoint593;

HAnimJoint577.children[1] = HAnimJoint585;

HAnimJoint565.children[1] = HAnimJoint577;

HAnimJoint553.children[1] = HAnimJoint565;

HAnimJoint HAnimJoint669 = createNode("HAnimJoint");
HAnimJoint669.name = "l_sternoclavicular";
HAnimJoint669.DEF = "Joe_l_sternoclavicular";
HAnimJoint669.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint669.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint669.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment670 = createNode("HAnimSegment");
HAnimSegment670.name = "l_clavicle";
HAnimSegment670.DEF = "Joe_l_clavicle";
Shape Shape671 = createNode("Shape");
Appearance Appearance672 = createNode("Appearance");
Appearance672.USE = "SegmentLine";
Shape671.appearance = Appearance672;

IndexedLineSet IndexedLineSet673 = createNode("IndexedLineSet");
IndexedLineSet673.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate674 = createNode("Coordinate");
Coordinate674.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
IndexedLineSet673.coord = Coordinate674;

Shape671.geometry = IndexedLineSet673;

HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = Shape671;

Transform Transform675 = createNode("Transform");
Transform675.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape676 = createNode("Shape");
Shape676.USE = "jointbox";
Transform675.child = new undefined();

Transform675.child[0] = Shape676;

HAnimSegment670.children[1] = Transform675;

HAnimSite HAnimSite677 = createNode("HAnimSite");
HAnimSite677.name = "l_clavicle_pt";
HAnimSite677.DEF = "Joe_l_clavicle_pt";
HAnimSite677.translation = new SFVec3f(new float[0.03,1.46,0.035]);
Shape Shape678 = createNode("Shape");
Shape678.USE = "sitebox";
HAnimSite677.children = new MFNode();

HAnimSite677.children[0] = Shape678;

HAnimSegment670.children[2] = HAnimSite677;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

HAnimJoint HAnimJoint679 = createNode("HAnimJoint");
HAnimJoint679.name = "l_acromioclavicular";
HAnimJoint679.DEF = "Joe_l_acromioclavicular";
HAnimJoint679.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint679.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint679.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment680 = createNode("HAnimSegment");
HAnimSegment680.name = "l_scapula";
HAnimSegment680.DEF = "Joe_l_scapula";
Shape Shape681 = createNode("Shape");
Appearance Appearance682 = createNode("Appearance");
Appearance682.USE = "SegmentLine";
Shape681.appearance = Appearance682;

IndexedLineSet IndexedLineSet683 = createNode("IndexedLineSet");
IndexedLineSet683.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate684 = createNode("Coordinate");
Coordinate684.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2,1.44,-0.04]);
IndexedLineSet683.coord = Coordinate684;

Shape681.geometry = IndexedLineSet683;

HAnimSegment680.children = new MFNode();

HAnimSegment680.children[0] = Shape681;

Transform Transform685 = createNode("Transform");
Transform685.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape686 = createNode("Shape");
Shape686.USE = "jointbox";
Transform685.child = new undefined();

Transform685.child[0] = Shape686;

HAnimSegment680.children[1] = Transform685;

Transform Transform687 = createNode("Transform");
Transform687.translation = new SFVec3f(new float[0.11,1.427,-0.1375]);
Shape Shape688 = createNode("Shape");
Shape688.USE = "skinsphere";
Transform687.child = new undefined();

Transform687.child[0] = Shape688;

HAnimSegment680.children[2] = Transform687;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.name = "l_acromion_pt";
HAnimSite689.DEF = "Joe_l_acromion_pt";
HAnimSite689.translation = new SFVec3f(new float[0.175,1.4825,-0.06]);
Shape Shape690 = createNode("Shape");
Shape690.USE = "sitebox";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = Shape690;

HAnimSegment680.children[3] = HAnimSite689;

HAnimSite HAnimSite691 = createNode("HAnimSite");
HAnimSite691.name = "l_axilla_proximal_pt";
HAnimSite691.DEF = "Joe_l_axilla_proximal_pt";
HAnimSite691.translation = new SFVec3f(new float[0.17,1.38,0.007]);
Shape Shape692 = createNode("Shape");
Shape692.USE = "sitebox";
HAnimSite691.children = new MFNode();

HAnimSite691.children[0] = Shape692;

HAnimSegment680.children[4] = HAnimSite691;

HAnimSite HAnimSite693 = createNode("HAnimSite");
HAnimSite693.name = "l_axilla_distal_pt";
HAnimSite693.DEF = "Joe_l_axilla_distal_pt";
HAnimSite693.translation = new SFVec3f(new float[0.16,1.38,-0.125]);
Shape Shape694 = createNode("Shape");
Shape694.USE = "sitebox";
HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = Shape694;

HAnimSegment680.children[5] = HAnimSite693;

HAnimJoint679.children = new MFNode();

HAnimJoint679.children[0] = HAnimSegment680;

HAnimJoint HAnimJoint695 = createNode("HAnimJoint");
HAnimJoint695.name = "l_shoulder";
HAnimJoint695.DEF = "Joe_l_shoulder";
HAnimJoint695.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint695.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint695.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment696 = createNode("HAnimSegment");
HAnimSegment696.name = "l_upperarm";
HAnimSegment696.DEF = "Joe_l_upperarm";
Shape Shape697 = createNode("Shape");
Appearance Appearance698 = createNode("Appearance");
Appearance698.USE = "SegmentLine";
Shape697.appearance = Appearance698;

IndexedLineSet IndexedLineSet699 = createNode("IndexedLineSet");
IndexedLineSet699.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate700 = createNode("Coordinate");
Coordinate700.point = new MFVec3f(new float[0.2029,1.44,-0.0387,0.2,1.1388,-0.04]);
IndexedLineSet699.coord = Coordinate700;

Shape697.geometry = IndexedLineSet699;

HAnimSegment696.children = new MFNode();

HAnimSegment696.children[0] = Shape697;

Transform Transform701 = createNode("Transform");
Transform701.translation = new SFVec3f(new float[0.2,1.44,-0.04]);
Shape Shape702 = createNode("Shape");
Shape702.USE = "jointbox";
Transform701.child = new undefined();

Transform701.child[0] = Shape702;

HAnimSegment696.children[1] = Transform701;

Transform Transform703 = createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.235,1.42,-0.0625]);
Shape Shape704 = createNode("Shape");
Shape704.USE = "skinsphere";
Transform703.child = new undefined();

Transform703.child[0] = Shape704;

HAnimSegment696.children[2] = Transform703;

Transform Transform705 = createNode("Transform");
Transform705.translation = new SFVec3f(new float[0.25,1.27,-0.04]);
Shape Shape706 = createNode("Shape");
Shape706.USE = "skinsphere";
Transform705.child = new undefined();

Transform705.child[0] = Shape706;

HAnimSegment696.children[3] = Transform705;

Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.17,1.27,-0.04]);
Shape Shape708 = createNode("Shape");
Shape708.USE = "skinsphere";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

HAnimSegment696.children[4] = Transform707;

Transform Transform709 = createNode("Transform");
Transform709.translation = new SFVec3f(new float[0.2,1.27,-0.09]);
Shape Shape710 = createNode("Shape");
Shape710.USE = "skinsphere";
Transform709.child = new undefined();

Transform709.child[0] = Shape710;

HAnimSegment696.children[5] = Transform709;

Transform Transform711 = createNode("Transform");
Transform711.translation = new SFVec3f(new float[0.2,1.27,0.02]);
Shape Shape712 = createNode("Shape");
Shape712.USE = "skinsphere";
Transform711.child = new undefined();

Transform711.child[0] = Shape712;

HAnimSegment696.children[6] = Transform711;

HAnimSite HAnimSite713 = createNode("HAnimSite");
HAnimSite713.name = "l_humeral_medial_epicondyle_pt";
HAnimSite713.DEF = "Joe_l_humeral_medial_epicondyle_pt";
HAnimSite713.translation = new SFVec3f(new float[0.165,1.1388,-0.04]);
Shape Shape714 = createNode("Shape");
Shape714.USE = "sitebox";
HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = Shape714;

HAnimSegment696.children[7] = HAnimSite713;

HAnimSite HAnimSite715 = createNode("HAnimSite");
HAnimSite715.name = "l_radiale_pt";
HAnimSite715.DEF = "Joe_l_radiale_pt";
HAnimSite715.translation = new SFVec3f(new float[0.23,1.133,-0.055]);
Shape Shape716 = createNode("Shape");
Shape716.USE = "sitebox";
HAnimSite715.children = new MFNode();

HAnimSite715.children[0] = Shape716;

HAnimSegment696.children[8] = HAnimSite715;

HAnimSite HAnimSite717 = createNode("HAnimSite");
HAnimSite717.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite717.DEF = "Joe_l_humeral_lateral_epicondyle_pt";
HAnimSite717.translation = new SFVec3f(new float[0.244,1.1388,-0.04]);
Shape Shape718 = createNode("Shape");
Shape718.USE = "sitebox";
HAnimSite717.children = new MFNode();

HAnimSite717.children[0] = Shape718;

HAnimSegment696.children[9] = HAnimSite717;

HAnimJoint695.children = new MFNode();

HAnimJoint695.children[0] = HAnimSegment696;

HAnimJoint HAnimJoint719 = createNode("HAnimJoint");
HAnimJoint719.name = "l_elbow";
HAnimJoint719.DEF = "Joe_l_elbow";
HAnimJoint719.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint719.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint719.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment720 = createNode("HAnimSegment");
HAnimSegment720.name = "l_forearm";
HAnimSegment720.DEF = "Joe_l_forearm";
Shape Shape721 = createNode("Shape");
Appearance Appearance722 = createNode("Appearance");
Appearance722.USE = "SegmentLine";
Shape721.appearance = Appearance722;

IndexedLineSet IndexedLineSet723 = createNode("IndexedLineSet");
IndexedLineSet723.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate724 = createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.2,1.1388,-0.04,0.2,0.87,-0.04]);
IndexedLineSet723.coord = Coordinate724;

Shape721.geometry = IndexedLineSet723;

HAnimSegment720.children = new MFNode();

HAnimSegment720.children[0] = Shape721;

Transform Transform725 = createNode("Transform");
Transform725.translation = new SFVec3f(new float[0.2,1.1388,-0.04]);
Shape Shape726 = createNode("Shape");
Shape726.USE = "jointbox";
Transform725.child = new undefined();

Transform725.child[0] = Shape726;

HAnimSegment720.children[1] = Transform725;

Transform Transform727 = createNode("Transform");
Transform727.translation = new SFVec3f(new float[0.2,1.1388,-0.013]);
Shape Shape728 = createNode("Shape");
Shape728.USE = "skinsphere";
Transform727.child = new undefined();

Transform727.child[0] = Shape728;

HAnimSegment720.children[2] = Transform727;

Transform Transform729 = createNode("Transform");
Transform729.translation = new SFVec3f(new float[0.225,1,-0.01]);
Shape Shape730 = createNode("Shape");
Shape730.USE = "skinsphere";
Transform729.child = new undefined();

Transform729.child[0] = Shape730;

HAnimSegment720.children[3] = Transform729;

Transform Transform731 = createNode("Transform");
Transform731.translation = new SFVec3f(new float[0.225,1,-0.07]);
Shape Shape732 = createNode("Shape");
Shape732.USE = "skinsphere";
Transform731.child = new undefined();

Transform731.child[0] = Shape732;

HAnimSegment720.children[4] = Transform731;

Transform Transform733 = createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.185,1,-0.01]);
Shape Shape734 = createNode("Shape");
Shape734.USE = "skinsphere";
Transform733.child = new undefined();

Transform733.child[0] = Shape734;

HAnimSegment720.children[5] = Transform733;

Transform Transform735 = createNode("Transform");
Transform735.translation = new SFVec3f(new float[0.185,1,-0.07]);
Shape Shape736 = createNode("Shape");
Shape736.USE = "skinsphere";
Transform735.child = new undefined();

Transform735.child[0] = Shape736;

HAnimSegment720.children[6] = Transform735;

HAnimSite HAnimSite737 = createNode("HAnimSite");
HAnimSite737.name = "l_radial_styloid_pt";
HAnimSite737.DEF = "Joe_l_radial_styloid_pt";
HAnimSite737.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
Shape Shape738 = createNode("Shape");
Shape738.USE = "sitebox";
HAnimSite737.children = new MFNode();

HAnimSite737.children[0] = Shape738;

HAnimSegment720.children[7] = HAnimSite737;

HAnimSite HAnimSite739 = createNode("HAnimSite");
HAnimSite739.name = "l_olecranon_pt";
HAnimSite739.DEF = "Joe_l_olecranon_pt";
HAnimSite739.translation = new SFVec3f(new float[0.2,1.1388,-0.08]);
Shape Shape740 = createNode("Shape");
Shape740.USE = "sitebox";
HAnimSite739.children = new MFNode();

HAnimSite739.children[0] = Shape740;

HAnimSegment720.children[8] = HAnimSite739;

HAnimJoint719.children = new MFNode();

HAnimJoint719.children[0] = HAnimSegment720;

HAnimJoint HAnimJoint741 = createNode("HAnimJoint");
HAnimJoint741.name = "l_radiocarpal";
HAnimJoint741.DEF = "Joe_l_radiocarpal";
HAnimJoint741.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint741.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint741.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment742 = createNode("HAnimSegment");
HAnimSegment742.name = "l_carpal";
HAnimSegment742.DEF = "Joe_l_carpal";
Shape Shape743 = createNode("Shape");
Appearance Appearance744 = createNode("Appearance");
Appearance744.USE = "SegmentLine";
Shape743.appearance = Appearance744;

IndexedLineSet IndexedLineSet745 = createNode("IndexedLineSet");
IndexedLineSet745.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate746 = createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
IndexedLineSet745.coord = Coordinate746;

Shape743.geometry = IndexedLineSet745;

HAnimSegment742.children = new MFNode();

HAnimSegment742.children[0] = Shape743;

Transform Transform747 = createNode("Transform");
Transform747.translation = new SFVec3f(new float[0.2,0.87,-0.04]);
Shape Shape748 = createNode("Shape");
Shape748.USE = "jointbox";
Transform747.child = new undefined();

Transform747.child[0] = Shape748;

HAnimSegment742.children[1] = Transform747;

HAnimSite HAnimSite749 = createNode("HAnimSite");
HAnimSite749.name = "l_metacarpal_phalanx_2_pt";
HAnimSite749.DEF = "Joe_l_metacarpal_phalanx_2_pt";
HAnimSite749.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
Shape Shape750 = createNode("Shape");
Shape750.USE = "sitebox";
HAnimSite749.children = new MFNode();

HAnimSite749.children[0] = Shape750;

HAnimSegment742.children[2] = HAnimSite749;

HAnimSite HAnimSite751 = createNode("HAnimSite");
HAnimSite751.name = "l_ulnar_styloid_pt";
HAnimSite751.DEF = "Joe_l_ulnar_styloid_pt";
HAnimSite751.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
Shape Shape752 = createNode("Shape");
Shape752.USE = "sitebox";
HAnimSite751.children = new MFNode();

HAnimSite751.children[0] = Shape752;

HAnimSegment742.children[3] = HAnimSite751;

HAnimSite HAnimSite753 = createNode("HAnimSite");
HAnimSite753.name = "l_metacarpal_phalanx_5_pt";
HAnimSite753.DEF = "Joe_l_metacarpal_phalanx_5_pt";
HAnimSite753.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
Shape Shape754 = createNode("Shape");
Shape754.USE = "sitebox";
HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = Shape754;

HAnimSegment742.children[4] = HAnimSite753;

HAnimJoint741.children = new MFNode();

HAnimJoint741.children[0] = HAnimSegment742;

HAnimJoint HAnimJoint755 = createNode("HAnimJoint");
HAnimJoint755.name = "l_carpometacarpal_1";
HAnimJoint755.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint755.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint755.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint755.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment756 = createNode("HAnimSegment");
HAnimSegment756.name = "l_metacarpal_1";
HAnimSegment756.DEF = "Joe_l_metacarpal_1";
Shape Shape757 = createNode("Shape");
Appearance Appearance758 = createNode("Appearance");
Appearance758.USE = "SegmentLine";
Shape757.appearance = Appearance758;

IndexedLineSet IndexedLineSet759 = createNode("IndexedLineSet");
IndexedLineSet759.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
IndexedLineSet759.coord = Coordinate760;

Shape757.geometry = IndexedLineSet759;

HAnimSegment756.children = new MFNode();

HAnimSegment756.children[0] = Shape757;

Transform Transform761 = createNode("Transform");
Transform761.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape762 = createNode("Shape");
Shape762.USE = "jointbox";
Transform761.child = new undefined();

Transform761.child[0] = Shape762;

HAnimSegment756.children[1] = Transform761;

HAnimJoint755.children = new MFNode();

HAnimJoint755.children[0] = HAnimSegment756;

HAnimJoint HAnimJoint763 = createNode("HAnimJoint");
HAnimJoint763.name = "l_metacarpophalangeal_1";
HAnimJoint763.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint763.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint763.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint763.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimSegment HAnimSegment764 = createNode("HAnimSegment");
HAnimSegment764.name = "l_carpal_proximal_phalanx_1";
HAnimSegment764.DEF = "Joe_l_carpal_proximal_phalanx_1";
Shape Shape765 = createNode("Shape");
Appearance Appearance766 = createNode("Appearance");
Appearance766.USE = "SegmentLine";
Shape765.appearance = Appearance766;

IndexedLineSet IndexedLineSet767 = createNode("IndexedLineSet");
IndexedLineSet767.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
IndexedLineSet767.coord = Coordinate768;

Shape765.geometry = IndexedLineSet767;

HAnimSegment764.children = new MFNode();

HAnimSegment764.children[0] = Shape765;

Transform Transform769 = createNode("Transform");
Transform769.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape770 = createNode("Shape");
Shape770.USE = "jointbox";
Transform769.child = new undefined();

Transform769.child[0] = Shape770;

HAnimSegment764.children[1] = Transform769;

HAnimJoint763.children = new MFNode();

HAnimJoint763.children[0] = HAnimSegment764;

HAnimJoint HAnimJoint771 = createNode("HAnimJoint");
HAnimJoint771.name = "l_carpal_interphalangeal_1";
HAnimJoint771.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint771.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint771.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint771.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment772 = createNode("HAnimSegment");
HAnimSegment772.name = "l_carpal_distal_phalanx_1";
HAnimSegment772.DEF = "Joe_l_carpal_distal_phalanx_1";
Shape Shape773 = createNode("Shape");
Appearance Appearance774 = createNode("Appearance");
Appearance774.USE = "SegmentLine";
Shape773.appearance = Appearance774;

IndexedLineSet IndexedLineSet775 = createNode("IndexedLineSet");
IndexedLineSet775.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate776 = createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
IndexedLineSet775.coord = Coordinate776;

Shape773.geometry = IndexedLineSet775;

HAnimSegment772.children = new MFNode();

HAnimSegment772.children[0] = Shape773;

Transform Transform777 = createNode("Transform");
Transform777.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape778 = createNode("Shape");
Shape778.USE = "jointbox";
Transform777.child = new undefined();

Transform777.child[0] = Shape778;

HAnimSegment772.children[1] = Transform777;

HAnimSite HAnimSite779 = createNode("HAnimSite");
HAnimSite779.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite779.DEF = "Joe_l_carpal_distal_phalanx_1_tip";
HAnimSite779.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
Shape Shape780 = createNode("Shape");
Shape780.USE = "sitebox";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = Shape780;

HAnimSegment772.children[2] = HAnimSite779;

HAnimJoint771.children = new MFNode();

HAnimJoint771.children[0] = HAnimSegment772;

HAnimJoint763.children[1] = HAnimJoint771;

HAnimJoint755.children[1] = HAnimJoint763;

HAnimJoint741.children[1] = HAnimJoint755;

HAnimJoint HAnimJoint781 = createNode("HAnimJoint");
HAnimJoint781.name = "l_carpometacarpal_2";
HAnimJoint781.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint781.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint781.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint781.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment782 = createNode("HAnimSegment");
HAnimSegment782.name = "l_metacarpal_2";
HAnimSegment782.DEF = "Joe_l_metacarpal_2";
Shape Shape783 = createNode("Shape");
Appearance Appearance784 = createNode("Appearance");
Appearance784.USE = "SegmentLine";
Shape783.appearance = Appearance784;

IndexedLineSet IndexedLineSet785 = createNode("IndexedLineSet");
IndexedLineSet785.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate786 = createNode("Coordinate");
Coordinate786.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
IndexedLineSet785.coord = Coordinate786;

Shape783.geometry = IndexedLineSet785;

HAnimSegment782.children = new MFNode();

HAnimSegment782.children[0] = Shape783;

Transform Transform787 = createNode("Transform");
Transform787.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape788 = createNode("Shape");
Shape788.USE = "jointbox";
Transform787.child = new undefined();

Transform787.child[0] = Shape788;

HAnimSegment782.children[1] = Transform787;

HAnimJoint781.children = new MFNode();

HAnimJoint781.children[0] = HAnimSegment782;

HAnimJoint HAnimJoint789 = createNode("HAnimJoint");
HAnimJoint789.name = "l_metacarpophalangeal_2";
HAnimJoint789.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint789.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint789.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint789.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment HAnimSegment790 = createNode("HAnimSegment");
HAnimSegment790.name = "l_carpal_proximal_phalanx_2";
HAnimSegment790.DEF = "Joe_l_carpal_proximal_phalanx_2";
Shape Shape791 = createNode("Shape");
Appearance Appearance792 = createNode("Appearance");
Appearance792.USE = "SegmentLine";
Shape791.appearance = Appearance792;

IndexedLineSet IndexedLineSet793 = createNode("IndexedLineSet");
IndexedLineSet793.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate794 = createNode("Coordinate");
Coordinate794.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
IndexedLineSet793.coord = Coordinate794;

Shape791.geometry = IndexedLineSet793;

HAnimSegment790.children = new MFNode();

HAnimSegment790.children[0] = Shape791;

Transform Transform795 = createNode("Transform");
Transform795.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape796 = createNode("Shape");
Shape796.USE = "jointbox";
Transform795.child = new undefined();

Transform795.child[0] = Shape796;

HAnimSegment790.children[1] = Transform795;

HAnimJoint789.children = new MFNode();

HAnimJoint789.children[0] = HAnimSegment790;

HAnimJoint HAnimJoint797 = createNode("HAnimJoint");
HAnimJoint797.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint797.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint797.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint797.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint797.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment798 = createNode("HAnimSegment");
HAnimSegment798.name = "l_carpal_middle_phalanx_2";
HAnimSegment798.DEF = "Joe_l_carpal_middle_phalanx_2";
Shape Shape799 = createNode("Shape");
Appearance Appearance800 = createNode("Appearance");
Appearance800.USE = "SegmentLine";
Shape799.appearance = Appearance800;

IndexedLineSet IndexedLineSet801 = createNode("IndexedLineSet");
IndexedLineSet801.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate802 = createNode("Coordinate");
Coordinate802.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
IndexedLineSet801.coord = Coordinate802;

Shape799.geometry = IndexedLineSet801;

HAnimSegment798.children = new MFNode();

HAnimSegment798.children[0] = Shape799;

Transform Transform803 = createNode("Transform");
Transform803.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape804 = createNode("Shape");
Shape804.USE = "jointbox";
Transform803.child = new undefined();

Transform803.child[0] = Shape804;

HAnimSegment798.children[1] = Transform803;

HAnimJoint797.children = new MFNode();

HAnimJoint797.children[0] = HAnimSegment798;

HAnimJoint HAnimJoint805 = createNode("HAnimJoint");
HAnimJoint805.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint805.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint805.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint805.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint805.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment806 = createNode("HAnimSegment");
HAnimSegment806.name = "l_carpal_distal_phalanx_2";
HAnimSegment806.DEF = "Joe_l_carpal_distal_phalanx_2";
Shape Shape807 = createNode("Shape");
Appearance Appearance808 = createNode("Appearance");
Appearance808.USE = "SegmentLine";
Shape807.appearance = Appearance808;

IndexedLineSet IndexedLineSet809 = createNode("IndexedLineSet");
IndexedLineSet809.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate810 = createNode("Coordinate");
Coordinate810.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
IndexedLineSet809.coord = Coordinate810;

Shape807.geometry = IndexedLineSet809;

HAnimSegment806.children = new MFNode();

HAnimSegment806.children[0] = Shape807;

Transform Transform811 = createNode("Transform");
Transform811.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape812 = createNode("Shape");
Shape812.USE = "jointbox";
Transform811.child = new undefined();

Transform811.child[0] = Shape812;

HAnimSegment806.children[1] = Transform811;

HAnimSite HAnimSite813 = createNode("HAnimSite");
HAnimSite813.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite813.DEF = "Joe_l_carpal_distal_phalanx_2_tip";
HAnimSite813.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
Shape Shape814 = createNode("Shape");
Shape814.USE = "sitebox";
HAnimSite813.children = new MFNode();

HAnimSite813.children[0] = Shape814;

HAnimSegment806.children[2] = HAnimSite813;

HAnimSite HAnimSite815 = createNode("HAnimSite");
HAnimSite815.name = "l_dactylion_pt";
HAnimSite815.DEF = "Joe_l_dactylion_pt";
HAnimSite815.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
Shape Shape816 = createNode("Shape");
Shape816.USE = "sitebox";
HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Shape816;

HAnimSegment806.children[3] = HAnimSite815;

HAnimJoint805.children = new MFNode();

HAnimJoint805.children[0] = HAnimSegment806;

HAnimJoint797.children[1] = HAnimJoint805;

HAnimJoint789.children[1] = HAnimJoint797;

HAnimJoint781.children[1] = HAnimJoint789;

HAnimJoint741.children[2] = HAnimJoint781;

HAnimJoint HAnimJoint817 = createNode("HAnimJoint");
HAnimJoint817.name = "l_carpometacarpal_3";
HAnimJoint817.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint817.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint817.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint817.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment818 = createNode("HAnimSegment");
HAnimSegment818.name = "l_metacarpal_3";
HAnimSegment818.DEF = "Joe_l_metacarpal_3";
Shape Shape819 = createNode("Shape");
Appearance Appearance820 = createNode("Appearance");
Appearance820.USE = "SegmentLine";
Shape819.appearance = Appearance820;

IndexedLineSet IndexedLineSet821 = createNode("IndexedLineSet");
IndexedLineSet821.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate822 = createNode("Coordinate");
Coordinate822.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
IndexedLineSet821.coord = Coordinate822;

Shape819.geometry = IndexedLineSet821;

HAnimSegment818.children = new MFNode();

HAnimSegment818.children[0] = Shape819;

Transform Transform823 = createNode("Transform");
Transform823.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape824 = createNode("Shape");
Shape824.USE = "jointbox";
Transform823.child = new undefined();

Transform823.child[0] = Shape824;

HAnimSegment818.children[1] = Transform823;

HAnimJoint817.children = new MFNode();

HAnimJoint817.children[0] = HAnimSegment818;

HAnimJoint HAnimJoint825 = createNode("HAnimJoint");
HAnimJoint825.name = "l_metacarpophalangeal_3";
HAnimJoint825.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint825.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint825.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint825.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment826 = createNode("HAnimSegment");
HAnimSegment826.name = "l_carpal_proximal_phalanx_3";
HAnimSegment826.DEF = "Joe_l_carpal_proximal_phalanx_3";
Shape Shape827 = createNode("Shape");
Appearance Appearance828 = createNode("Appearance");
Appearance828.USE = "SegmentLine";
Shape827.appearance = Appearance828;

IndexedLineSet IndexedLineSet829 = createNode("IndexedLineSet");
IndexedLineSet829.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate830 = createNode("Coordinate");
Coordinate830.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
IndexedLineSet829.coord = Coordinate830;

Shape827.geometry = IndexedLineSet829;

HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = Shape827;

Transform Transform831 = createNode("Transform");
Transform831.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape832 = createNode("Shape");
Shape832.USE = "jointbox";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

HAnimSegment826.children[1] = Transform831;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

HAnimJoint HAnimJoint833 = createNode("HAnimJoint");
HAnimJoint833.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint833.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint833.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint833.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint833.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment834 = createNode("HAnimSegment");
HAnimSegment834.name = "l_carpal_middle_phalanx_3";
HAnimSegment834.DEF = "Joe_l_carpal_middle_phalanx_3";
Shape Shape835 = createNode("Shape");
Appearance Appearance836 = createNode("Appearance");
Appearance836.USE = "SegmentLine";
Shape835.appearance = Appearance836;

IndexedLineSet IndexedLineSet837 = createNode("IndexedLineSet");
IndexedLineSet837.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate838 = createNode("Coordinate");
Coordinate838.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
IndexedLineSet837.coord = Coordinate838;

Shape835.geometry = IndexedLineSet837;

HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = Shape835;

Transform Transform839 = createNode("Transform");
Transform839.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape840 = createNode("Shape");
Shape840.USE = "jointbox";
Transform839.child = new undefined();

Transform839.child[0] = Shape840;

HAnimSegment834.children[1] = Transform839;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

HAnimJoint HAnimJoint841 = createNode("HAnimJoint");
HAnimJoint841.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint841.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint841.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint841.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint841.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment842 = createNode("HAnimSegment");
HAnimSegment842.name = "l_carpal_distal_phalanx_3";
HAnimSegment842.DEF = "Joe_l_carpal_distal_phalanx_3";
Shape Shape843 = createNode("Shape");
Appearance Appearance844 = createNode("Appearance");
Appearance844.USE = "SegmentLine";
Shape843.appearance = Appearance844;

IndexedLineSet IndexedLineSet845 = createNode("IndexedLineSet");
IndexedLineSet845.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate846 = createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
IndexedLineSet845.coord = Coordinate846;

Shape843.geometry = IndexedLineSet845;

HAnimSegment842.children = new MFNode();

HAnimSegment842.children[0] = Shape843;

HAnimSite HAnimSite847 = createNode("HAnimSite");
HAnimSite847.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite847.DEF = "Joe_l_carpal_distal_phalanx_3_tip";
HAnimSite847.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
Shape Shape848 = createNode("Shape");
Shape848.USE = "sitebox";
HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = Shape848;

HAnimSegment842.children[1] = HAnimSite847;

Transform Transform849 = createNode("Transform");
Transform849.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape850 = createNode("Shape");
Shape850.USE = "jointbox";
Transform849.child = new undefined();

Transform849.child[0] = Shape850;

HAnimSegment842.children[2] = Transform849;

HAnimJoint841.children = new MFNode();

HAnimJoint841.children[0] = HAnimSegment842;

HAnimJoint833.children[1] = HAnimJoint841;

HAnimJoint825.children[1] = HAnimJoint833;

HAnimJoint817.children[1] = HAnimJoint825;

HAnimJoint741.children[3] = HAnimJoint817;

HAnimJoint HAnimJoint851 = createNode("HAnimJoint");
HAnimJoint851.name = "l_carpometacarpal_4";
HAnimJoint851.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint851.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint851.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint851.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment852 = createNode("HAnimSegment");
HAnimSegment852.name = "l_metacarpal_4";
HAnimSegment852.DEF = "Joe_l_metacarpal_4";
Shape Shape853 = createNode("Shape");
Appearance Appearance854 = createNode("Appearance");
Appearance854.USE = "SegmentLine";
Shape853.appearance = Appearance854;

IndexedLineSet IndexedLineSet855 = createNode("IndexedLineSet");
IndexedLineSet855.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate856 = createNode("Coordinate");
Coordinate856.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
IndexedLineSet855.coord = Coordinate856;

Shape853.geometry = IndexedLineSet855;

HAnimSegment852.children = new MFNode();

HAnimSegment852.children[0] = Shape853;

Transform Transform857 = createNode("Transform");
Transform857.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape858 = createNode("Shape");
Shape858.USE = "jointbox";
Transform857.child = new undefined();

Transform857.child[0] = Shape858;

HAnimSegment852.children[1] = Transform857;

HAnimJoint851.children = new MFNode();

HAnimJoint851.children[0] = HAnimSegment852;

HAnimJoint HAnimJoint859 = createNode("HAnimJoint");
HAnimJoint859.name = "l_metacarpophalangeal_4";
HAnimJoint859.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint859.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint859.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint859.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment860 = createNode("HAnimSegment");
HAnimSegment860.name = "l_carpal_proximal_phalanx_4";
HAnimSegment860.DEF = "Joe_l_carpal_proximal_phalanx_4";
Shape Shape861 = createNode("Shape");
Appearance Appearance862 = createNode("Appearance");
Appearance862.USE = "SegmentLine";
Shape861.appearance = Appearance862;

IndexedLineSet IndexedLineSet863 = createNode("IndexedLineSet");
IndexedLineSet863.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate864 = createNode("Coordinate");
Coordinate864.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
IndexedLineSet863.coord = Coordinate864;

Shape861.geometry = IndexedLineSet863;

HAnimSegment860.children = new MFNode();

HAnimSegment860.children[0] = Shape861;

Transform Transform865 = createNode("Transform");
Transform865.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape866 = createNode("Shape");
Shape866.USE = "jointbox";
Transform865.child = new undefined();

Transform865.child[0] = Shape866;

HAnimSegment860.children[1] = Transform865;

HAnimJoint859.children = new MFNode();

HAnimJoint859.children[0] = HAnimSegment860;

HAnimJoint HAnimJoint867 = createNode("HAnimJoint");
HAnimJoint867.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint867.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint867.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint867.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint867.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment868 = createNode("HAnimSegment");
HAnimSegment868.name = "l_carpal_middle_phalanx_4";
HAnimSegment868.DEF = "Joe_l_carpal_middle_phalanx_4";
Shape Shape869 = createNode("Shape");
Appearance Appearance870 = createNode("Appearance");
Appearance870.USE = "SegmentLine";
Shape869.appearance = Appearance870;

IndexedLineSet IndexedLineSet871 = createNode("IndexedLineSet");
IndexedLineSet871.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate872 = createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
IndexedLineSet871.coord = Coordinate872;

Shape869.geometry = IndexedLineSet871;

HAnimSegment868.children = new MFNode();

HAnimSegment868.children[0] = Shape869;

Transform Transform873 = createNode("Transform");
Transform873.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape874 = createNode("Shape");
Shape874.USE = "jointbox";
Transform873.child = new undefined();

Transform873.child[0] = Shape874;

HAnimSegment868.children[1] = Transform873;

HAnimJoint867.children = new MFNode();

HAnimJoint867.children[0] = HAnimSegment868;

HAnimJoint HAnimJoint875 = createNode("HAnimJoint");
HAnimJoint875.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint875.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint875.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint875.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint875.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment876 = createNode("HAnimSegment");
HAnimSegment876.name = "l_carpal_distal_phalanx_4";
HAnimSegment876.DEF = "Joe_l_carpal_distal_phalanx_4";
Shape Shape877 = createNode("Shape");
Appearance Appearance878 = createNode("Appearance");
Appearance878.USE = "SegmentLine";
Shape877.appearance = Appearance878;

IndexedLineSet IndexedLineSet879 = createNode("IndexedLineSet");
IndexedLineSet879.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate880 = createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
IndexedLineSet879.coord = Coordinate880;

Shape877.geometry = IndexedLineSet879;

HAnimSegment876.children = new MFNode();

HAnimSegment876.children[0] = Shape877;

Transform Transform881 = createNode("Transform");
Transform881.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape882 = createNode("Shape");
Shape882.USE = "jointbox";
Transform881.child = new undefined();

Transform881.child[0] = Shape882;

HAnimSegment876.children[1] = Transform881;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite883.DEF = "Joe_l_carpal_distal_phalanx_4_tip";
HAnimSite883.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
Shape Shape884 = createNode("Shape");
Shape884.USE = "sitebox";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = Shape884;

HAnimSegment876.children[2] = HAnimSite883;

HAnimJoint875.children = new MFNode();

HAnimJoint875.children[0] = HAnimSegment876;

HAnimJoint867.children[1] = HAnimJoint875;

HAnimJoint859.children[1] = HAnimJoint867;

HAnimJoint851.children[1] = HAnimJoint859;

HAnimJoint741.children[4] = HAnimJoint851;

HAnimJoint HAnimJoint885 = createNode("HAnimJoint");
HAnimJoint885.name = "l_carpometacarpal_5";
HAnimJoint885.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint885.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint885.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint885.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimSegment HAnimSegment886 = createNode("HAnimSegment");
HAnimSegment886.name = "l_metacarpal_5";
HAnimSegment886.DEF = "Joe_l_metacarpal_5";
Shape Shape887 = createNode("Shape");
Appearance Appearance888 = createNode("Appearance");
Appearance888.USE = "SegmentLine";
Shape887.appearance = Appearance888;

IndexedLineSet IndexedLineSet889 = createNode("IndexedLineSet");
IndexedLineSet889.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate890 = createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
IndexedLineSet889.coord = Coordinate890;

Shape887.geometry = IndexedLineSet889;

HAnimSegment886.children = new MFNode();

HAnimSegment886.children[0] = Shape887;

Transform Transform891 = createNode("Transform");
Transform891.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape892 = createNode("Shape");
Shape892.USE = "jointbox";
Transform891.child = new undefined();

Transform891.child[0] = Shape892;

HAnimSegment886.children[1] = Transform891;

HAnimJoint885.children = new MFNode();

HAnimJoint885.children[0] = HAnimSegment886;

HAnimJoint HAnimJoint893 = createNode("HAnimJoint");
HAnimJoint893.name = "l_metacarpophalangeal_5";
HAnimJoint893.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint893.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint893.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint893.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment894 = createNode("HAnimSegment");
HAnimSegment894.name = "l_carpal_proximal_phalanx_5";
HAnimSegment894.DEF = "Joe_l_carpal_proximal_phalanx_5";
Shape Shape895 = createNode("Shape");
Appearance Appearance896 = createNode("Appearance");
Appearance896.USE = "SegmentLine";
Shape895.appearance = Appearance896;

IndexedLineSet IndexedLineSet897 = createNode("IndexedLineSet");
IndexedLineSet897.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate898 = createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
IndexedLineSet897.coord = Coordinate898;

Shape895.geometry = IndexedLineSet897;

HAnimSegment894.children = new MFNode();

HAnimSegment894.children[0] = Shape895;

Transform Transform899 = createNode("Transform");
Transform899.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape900 = createNode("Shape");
Shape900.USE = "jointbox";
Transform899.child = new undefined();

Transform899.child[0] = Shape900;

HAnimSegment894.children[1] = Transform899;

HAnimJoint893.children = new MFNode();

HAnimJoint893.children[0] = HAnimSegment894;

HAnimJoint HAnimJoint901 = createNode("HAnimJoint");
HAnimJoint901.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint901.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint901.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint901.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint901.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment902 = createNode("HAnimSegment");
HAnimSegment902.name = "l_carpal_middle_phalanx_5";
HAnimSegment902.DEF = "Joe_l_carpal_middle_phalanx_5";
Transform Transform903 = createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape904 = createNode("Shape");
Shape904.USE = "jointbox";
Transform903.child = new undefined();

Transform903.child[0] = Shape904;

HAnimSegment902.children = new MFNode();

HAnimSegment902.children[0] = Transform903;

Shape Shape905 = createNode("Shape");
Appearance Appearance906 = createNode("Appearance");
Appearance906.USE = "SegmentLine";
Shape905.appearance = Appearance906;

IndexedLineSet IndexedLineSet907 = createNode("IndexedLineSet");
IndexedLineSet907.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate908 = createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
IndexedLineSet907.coord = Coordinate908;

Shape905.geometry = IndexedLineSet907;

HAnimSegment902.children[1] = Shape905;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

HAnimJoint HAnimJoint909 = createNode("HAnimJoint");
HAnimJoint909.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint909.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint909.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint909.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint909.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment910 = createNode("HAnimSegment");
HAnimSegment910.name = "l_carpal_distal_phalanx_5";
HAnimSegment910.DEF = "Joe_l_carpal_distal_phalanx_5";
Shape Shape911 = createNode("Shape");
Appearance Appearance912 = createNode("Appearance");
Appearance912.USE = "SegmentLine";
Shape911.appearance = Appearance912;

IndexedLineSet IndexedLineSet913 = createNode("IndexedLineSet");
IndexedLineSet913.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate914 = createNode("Coordinate");
Coordinate914.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
IndexedLineSet913.coord = Coordinate914;

Shape911.geometry = IndexedLineSet913;

HAnimSegment910.children = new MFNode();

HAnimSegment910.children[0] = Shape911;

Transform Transform915 = createNode("Transform");
Transform915.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape916 = createNode("Shape");
Shape916.USE = "jointbox";
Transform915.child = new undefined();

Transform915.child[0] = Shape916;

HAnimSegment910.children[1] = Transform915;

HAnimSite HAnimSite917 = createNode("HAnimSite");
HAnimSite917.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite917.DEF = "Joe_l_carpal_distal_phalanx_5_tip";
HAnimSite917.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
Shape Shape918 = createNode("Shape");
Shape918.USE = "sitebox";
HAnimSite917.children = new MFNode();

HAnimSite917.children[0] = Shape918;

HAnimSegment910.children[2] = HAnimSite917;

HAnimJoint909.children = new MFNode();

HAnimJoint909.children[0] = HAnimSegment910;

HAnimJoint901.children[1] = HAnimJoint909;

HAnimJoint893.children[1] = HAnimJoint901;

HAnimJoint885.children[1] = HAnimJoint893;

HAnimJoint741.children[5] = HAnimJoint885;

HAnimJoint719.children[1] = HAnimJoint741;

HAnimJoint695.children[1] = HAnimJoint719;

HAnimJoint679.children[1] = HAnimJoint695;

HAnimJoint669.children[1] = HAnimJoint679;

HAnimJoint553.children[2] = HAnimJoint669;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.name = "r_sternoclavicular";
HAnimJoint919.DEF = "Joe_r_sternoclavicular";
HAnimJoint919.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint919.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint919.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment920 = createNode("HAnimSegment");
HAnimSegment920.name = "r_clavicle";
HAnimSegment920.DEF = "Joe_r_clavicle";
Shape Shape921 = createNode("Shape");
Appearance Appearance922 = createNode("Appearance");
Appearance922.USE = "SegmentLine";
Shape921.appearance = Appearance922;

IndexedLineSet IndexedLineSet923 = createNode("IndexedLineSet");
IndexedLineSet923.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate924 = createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[-0.03,1.46,0.02,-0.09,1.41,-0.09]);
IndexedLineSet923.coord = Coordinate924;

Shape921.geometry = IndexedLineSet923;

HAnimSegment920.children = new MFNode();

HAnimSegment920.children[0] = Shape921;

Transform Transform925 = createNode("Transform");
Transform925.translation = new SFVec3f(new float[-0.03,1.46,0.02]);
Shape Shape926 = createNode("Shape");
Shape926.USE = "jointbox";
Transform925.child = new undefined();

Transform925.child[0] = Shape926;

HAnimSegment920.children[1] = Transform925;

HAnimSite HAnimSite927 = createNode("HAnimSite");
HAnimSite927.name = "r_clavicle_pt";
HAnimSite927.DEF = "Joe_r_clavicle_pt";
HAnimSite927.translation = new SFVec3f(new float[-0.03,1.46,0.035]);
Shape Shape928 = createNode("Shape");
Shape928.USE = "sitebox";
HAnimSite927.children = new MFNode();

HAnimSite927.children[0] = Shape928;

HAnimSegment920.children[2] = HAnimSite927;

HAnimJoint919.children = new MFNode();

HAnimJoint919.children[0] = HAnimSegment920;

HAnimJoint HAnimJoint929 = createNode("HAnimJoint");
HAnimJoint929.name = "r_acromioclavicular";
HAnimJoint929.DEF = "Joe_r_acromioclavicular";
HAnimJoint929.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint929.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint929.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimSegment HAnimSegment930 = createNode("HAnimSegment");
HAnimSegment930.name = "r_scapula";
HAnimSegment930.DEF = "Joe_r_scapula";
Shape Shape931 = createNode("Shape");
Appearance Appearance932 = createNode("Appearance");
Appearance932.USE = "SegmentLine";
Shape931.appearance = Appearance932;

IndexedLineSet IndexedLineSet933 = createNode("IndexedLineSet");
IndexedLineSet933.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate934 = createNode("Coordinate");
Coordinate934.point = new MFVec3f(new float[-0.09,1.41,-0.09,-0.2,1.44,-0.04]);
IndexedLineSet933.coord = Coordinate934;

Shape931.geometry = IndexedLineSet933;

HAnimSegment930.children = new MFNode();

HAnimSegment930.children[0] = Shape931;

Transform Transform935 = createNode("Transform");
Transform935.translation = new SFVec3f(new float[-0.09,1.41,-0.09]);
Shape Shape936 = createNode("Shape");
Shape936.USE = "jointbox";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

HAnimSegment930.children[1] = Transform935;

Transform Transform937 = createNode("Transform");
Transform937.translation = new SFVec3f(new float[-0.11,1.427,-0.1375]);
Shape Shape938 = createNode("Shape");
Shape938.USE = "skinsphere";
Transform937.child = new undefined();

Transform937.child[0] = Shape938;

HAnimSegment930.children[2] = Transform937;

HAnimSite HAnimSite939 = createNode("HAnimSite");
HAnimSite939.name = "r_acromion_pt";
HAnimSite939.DEF = "Joe_r_acromion_pt";
HAnimSite939.translation = new SFVec3f(new float[-0.178,1.4825,-0.0625]);
Shape Shape940 = createNode("Shape");
Shape940.USE = "sitebox";
HAnimSite939.children = new MFNode();

HAnimSite939.children[0] = Shape940;

HAnimSegment930.children[3] = HAnimSite939;

HAnimSite HAnimSite941 = createNode("HAnimSite");
HAnimSite941.name = "r_axilla_proximal_pt";
HAnimSite941.DEF = "Joe_r_axilla_proximal_pt";
HAnimSite941.translation = new SFVec3f(new float[-0.17,1.38,0.007]);
Shape Shape942 = createNode("Shape");
Shape942.USE = "sitebox";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = Shape942;

HAnimSegment930.children[4] = HAnimSite941;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.name = "r_axilla_distal_pt";
HAnimSite943.DEF = "Joe_r_axilla_distal_pt";
HAnimSite943.translation = new SFVec3f(new float[-0.16,1.38,-0.127]);
Shape Shape944 = createNode("Shape");
Shape944.USE = "sitebox";
HAnimSite943.children = new MFNode();

HAnimSite943.children[0] = Shape944;

HAnimSegment930.children[5] = HAnimSite943;

HAnimJoint929.children = new MFNode();

HAnimJoint929.children[0] = HAnimSegment930;

HAnimJoint HAnimJoint945 = createNode("HAnimJoint");
HAnimJoint945.name = "r_shoulder";
HAnimJoint945.DEF = "Joe_r_shoulder";
HAnimJoint945.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint945.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint945.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment HAnimSegment946 = createNode("HAnimSegment");
HAnimSegment946.name = "r_upperarm";
HAnimSegment946.DEF = "Joe_r_upperarm";
Transform Transform947 = createNode("Transform");
Transform947.translation = new SFVec3f(new float[-0.2,1.44,-0.04]);
Shape Shape948 = createNode("Shape");
Shape948.USE = "jointbox";
Transform947.child = new undefined();

Transform947.child[0] = Shape948;

HAnimSegment946.children = new MFNode();

HAnimSegment946.children[0] = Transform947;

Shape Shape949 = createNode("Shape");
Appearance Appearance950 = createNode("Appearance");
Appearance950.USE = "SegmentLine";
Shape949.appearance = Appearance950;

IndexedLineSet IndexedLineSet951 = createNode("IndexedLineSet");
IndexedLineSet951.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate952 = createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[-0.2,1.44,-0.04,-0.2,1.1388,-0.04]);
IndexedLineSet951.coord = Coordinate952;

Shape949.geometry = IndexedLineSet951;

HAnimSegment946.children[1] = Shape949;

Transform Transform953 = createNode("Transform");
Transform953.translation = new SFVec3f(new float[-0.178,1.4825,-0.0625]);
Shape Shape954 = createNode("Shape");
Shape954.USE = "skinsphere";
Transform953.child = new undefined();

Transform953.child[0] = Shape954;

HAnimSegment946.children[2] = Transform953;

Transform Transform955 = createNode("Transform");
Transform955.translation = new SFVec3f(new float[-0.17,1.38,0.007]);
Shape Shape956 = createNode("Shape");
Shape956.USE = "skinsphere";
Transform955.child = new undefined();

Transform955.child[0] = Shape956;

HAnimSegment946.children[3] = Transform955;

Transform Transform957 = createNode("Transform");
Transform957.translation = new SFVec3f(new float[-0.16,1.38,-0.127]);
Shape Shape958 = createNode("Shape");
Shape958.USE = "skinsphere";
Transform957.child = new undefined();

Transform957.child[0] = Shape958;

HAnimSegment946.children[4] = Transform957;

Transform Transform959 = createNode("Transform");
Transform959.translation = new SFVec3f(new float[-0.235,1.42,-0.0625]);
Shape Shape960 = createNode("Shape");
Shape960.USE = "skinsphere";
Transform959.child = new undefined();

Transform959.child[0] = Shape960;

HAnimSegment946.children[5] = Transform959;

Transform Transform961 = createNode("Transform");
Transform961.translation = new SFVec3f(new float[-0.23,1.235,-0.04]);
Shape Shape962 = createNode("Shape");
Shape962.USE = "skinsphere";
Transform961.child = new undefined();

Transform961.child[0] = Shape962;

HAnimSegment946.children[6] = Transform961;

Transform Transform963 = createNode("Transform");
Transform963.translation = new SFVec3f(new float[-0.16,1.23,-0.04]);
Shape Shape964 = createNode("Shape");
Shape964.USE = "skinsphere";
Transform963.child = new undefined();

Transform963.child[0] = Shape964;

HAnimSegment946.children[7] = Transform963;

Transform Transform965 = createNode("Transform");
Transform965.translation = new SFVec3f(new float[-0.2,1.23,-0.105]);
Shape Shape966 = createNode("Shape");
Shape966.USE = "skinsphere";
Transform965.child = new undefined();

Transform965.child[0] = Shape966;

HAnimSegment946.children[8] = Transform965;

Transform Transform967 = createNode("Transform");
Transform967.translation = new SFVec3f(new float[-0.2,1.235,0.02]);
Shape Shape968 = createNode("Shape");
Shape968.USE = "skinsphere";
Transform967.child = new undefined();

Transform967.child[0] = Shape968;

HAnimSegment946.children[9] = Transform967;

HAnimSite HAnimSite969 = createNode("HAnimSite");
HAnimSite969.name = "r_humeral_medial_epicondyle_pt";
HAnimSite969.DEF = "Joe_r_humeral_medial_epicondyle_pt";
HAnimSite969.translation = new SFVec3f(new float[-0.165,1.1388,-0.04]);
Shape Shape970 = createNode("Shape");
Shape970.USE = "sitebox";
HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = Shape970;

HAnimSegment946.children[10] = HAnimSite969;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.name = "r_radiale_pt";
HAnimSite971.DEF = "Joe_r_radiale_pt";
HAnimSite971.translation = new SFVec3f(new float[-0.23,1.133,-0.055]);
Shape Shape972 = createNode("Shape");
Shape972.USE = "sitebox";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = Shape972;

HAnimSegment946.children[11] = HAnimSite971;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite973.DEF = "Joe_r_humeral_lateral_epicondyle_pt";
HAnimSite973.translation = new SFVec3f(new float[-0.244,1.1388,-0.04]);
Shape Shape974 = createNode("Shape");
Shape974.USE = "sitebox";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = Shape974;

HAnimSegment946.children[12] = HAnimSite973;

HAnimJoint945.children = new MFNode();

HAnimJoint945.children[0] = HAnimSegment946;

HAnimJoint HAnimJoint975 = createNode("HAnimJoint");
HAnimJoint975.name = "r_elbow";
HAnimJoint975.DEF = "Joe_r_elbow";
HAnimJoint975.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint975.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint975.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment976 = createNode("HAnimSegment");
HAnimSegment976.name = "r_forearm";
HAnimSegment976.DEF = "Joe_r_forearm";
Shape Shape977 = createNode("Shape");
Appearance Appearance978 = createNode("Appearance");
Appearance978.USE = "SegmentLine";
Shape977.appearance = Appearance978;

IndexedLineSet IndexedLineSet979 = createNode("IndexedLineSet");
IndexedLineSet979.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate980 = createNode("Coordinate");
Coordinate980.point = new MFVec3f(new float[-0.2,1.1388,-0.04,-0.2,0.89,-0.04]);
IndexedLineSet979.coord = Coordinate980;

Shape977.geometry = IndexedLineSet979;

HAnimSegment976.children = new MFNode();

HAnimSegment976.children[0] = Shape977;

Transform Transform981 = createNode("Transform");
Transform981.translation = new SFVec3f(new float[-0.2,1.1388,-0.04]);
Shape Shape982 = createNode("Shape");
Shape982.USE = "jointbox";
Transform981.child = new undefined();

Transform981.child[0] = Shape982;

HAnimSegment976.children[1] = Transform981;

Transform Transform983 = createNode("Transform");
Transform983.translation = new SFVec3f(new float[-0.2,1.1388,0.013]);
Shape Shape984 = createNode("Shape");
Shape984.USE = "skinsphere";
Transform983.child = new undefined();

Transform983.child[0] = Shape984;

HAnimSegment976.children[2] = Transform983;

Transform Transform985 = createNode("Transform");
Transform985.translation = new SFVec3f(new float[-0.225,1,-0.01]);
Shape Shape986 = createNode("Shape");
Shape986.USE = "skinsphere";
Transform985.child = new undefined();

Transform985.child[0] = Shape986;

HAnimSegment976.children[3] = Transform985;

Transform Transform987 = createNode("Transform");
Transform987.translation = new SFVec3f(new float[-0.225,1,-0.07]);
Shape Shape988 = createNode("Shape");
Shape988.USE = "skinsphere";
Transform987.child = new undefined();

Transform987.child[0] = Shape988;

HAnimSegment976.children[4] = Transform987;

Transform Transform989 = createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.185,1,-0.01]);
Shape Shape990 = createNode("Shape");
Shape990.USE = "skinsphere";
Transform989.child = new undefined();

Transform989.child[0] = Shape990;

HAnimSegment976.children[5] = Transform989;

Transform Transform991 = createNode("Transform");
Transform991.translation = new SFVec3f(new float[-0.185,1,-0.07]);
Shape Shape992 = createNode("Shape");
Shape992.USE = "skinsphere";
Transform991.child = new undefined();

Transform991.child[0] = Shape992;

HAnimSegment976.children[6] = Transform991;

HAnimSite HAnimSite993 = createNode("HAnimSite");
HAnimSite993.name = "r_radial_styloid_pt";
HAnimSite993.DEF = "Joe_r_radial_styloid_pt";
HAnimSite993.translation = new SFVec3f(new float[-0.2,0.9,-0.015]);
Shape Shape994 = createNode("Shape");
Shape994.USE = "sitebox";
HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = Shape994;

HAnimSegment976.children[7] = HAnimSite993;

HAnimSite HAnimSite995 = createNode("HAnimSite");
HAnimSite995.name = "r_olecranon_pt";
HAnimSite995.DEF = "Joe_r_olecranon_pt";
HAnimSite995.translation = new SFVec3f(new float[-0.2,1.1388,-0.08]);
Shape Shape996 = createNode("Shape");
Shape996.USE = "sitebox";
HAnimSite995.children = new MFNode();

HAnimSite995.children[0] = Shape996;

HAnimSegment976.children[8] = HAnimSite995;

HAnimJoint975.children = new MFNode();

HAnimJoint975.children[0] = HAnimSegment976;

HAnimJoint HAnimJoint997 = createNode("HAnimJoint");
HAnimJoint997.name = "r_radiocarpal";
HAnimJoint997.DEF = "Joe_r_radiocarpal";
HAnimJoint997.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint997.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint997.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment998 = createNode("HAnimSegment");
HAnimSegment998.name = "r_carpal";
HAnimSegment998.DEF = "Joe_r_carpal";
Shape Shape999 = createNode("Shape");
Appearance Appearance1000 = createNode("Appearance");
Appearance1000.USE = "SegmentLine";
Shape999.appearance = Appearance1000;

IndexedLineSet IndexedLineSet1001 = createNode("IndexedLineSet");
IndexedLineSet1001.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate1002 = createNode("Coordinate");
Coordinate1002.point = new MFVec3f(new float[-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]);
IndexedLineSet1001.coord = Coordinate1002;

Shape999.geometry = IndexedLineSet1001;

HAnimSegment998.children = new MFNode();

HAnimSegment998.children[0] = Shape999;

Transform Transform1003 = createNode("Transform");
Transform1003.translation = new SFVec3f(new float[-0.2,0.89,-0.04]);
Shape Shape1004 = createNode("Shape");
Shape1004.USE = "jointbox";
Transform1003.child = new undefined();

Transform1003.child[0] = Shape1004;

HAnimSegment998.children[1] = Transform1003;

HAnimSite HAnimSite1005 = createNode("HAnimSite");
HAnimSite1005.name = "r_ulnar_styloid_pt";
HAnimSite1005.DEF = "Joe_r_ulnar_styloid_pt";
HAnimSite1005.translation = new SFVec3f(new float[-0.2,0.9,-0.085]);
Shape Shape1006 = createNode("Shape");
Shape1006.USE = "sitebox";
HAnimSite1005.children = new MFNode();

HAnimSite1005.children[0] = Shape1006;

HAnimSegment998.children[2] = HAnimSite1005;

HAnimJoint997.children = new MFNode();

HAnimJoint997.children[0] = HAnimSegment998;

HAnimJoint HAnimJoint1007 = createNode("HAnimJoint");
HAnimJoint1007.name = "r_carpometacarpal_1";
HAnimJoint1007.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint1007.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint1007.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint1007.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1008 = createNode("HAnimSegment");
HAnimSegment1008.name = "r_metacarpal_1";
HAnimSegment1008.DEF = "Joe_r_metacarpal_1";
Shape Shape1009 = createNode("Shape");
Appearance Appearance1010 = createNode("Appearance");
Appearance1010.USE = "SegmentLine";
Shape1009.appearance = Appearance1010;

IndexedLineSet IndexedLineSet1011 = createNode("IndexedLineSet");
IndexedLineSet1011.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1012 = createNode("Coordinate");
Coordinate1012.point = new MFVec3f(new float[-0.2,0.85,0,-0.2,0.82,0.03]);
IndexedLineSet1011.coord = Coordinate1012;

Shape1009.geometry = IndexedLineSet1011;

HAnimSegment1008.children = new MFNode();

HAnimSegment1008.children[0] = Shape1009;

Transform Transform1013 = createNode("Transform");
Transform1013.translation = new SFVec3f(new float[-0.2,0.85,0]);
Shape Shape1014 = createNode("Shape");
Shape1014.USE = "jointbox";
Transform1013.child = new undefined();

Transform1013.child[0] = Shape1014;

HAnimSegment1008.children[1] = Transform1013;

HAnimJoint1007.children = new MFNode();

HAnimJoint1007.children[0] = HAnimSegment1008;

HAnimJoint HAnimJoint1015 = createNode("HAnimJoint");
HAnimJoint1015.name = "r_metacarpophalangeal_1";
HAnimJoint1015.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint1015.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint1015.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint1015.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimSegment HAnimSegment1016 = createNode("HAnimSegment");
HAnimSegment1016.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1016.DEF = "Joe_r_carpal_proximal_phalanx_1";
Shape Shape1017 = createNode("Shape");
Appearance Appearance1018 = createNode("Appearance");
Appearance1018.USE = "SegmentLine";
Shape1017.appearance = Appearance1018;

IndexedLineSet IndexedLineSet1019 = createNode("IndexedLineSet");
IndexedLineSet1019.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1020 = createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[-0.2,0.82,0.03,-0.2,0.8,0.05]);
IndexedLineSet1019.coord = Coordinate1020;

Shape1017.geometry = IndexedLineSet1019;

HAnimSegment1016.children = new MFNode();

HAnimSegment1016.children[0] = Shape1017;

Transform Transform1021 = createNode("Transform");
Transform1021.translation = new SFVec3f(new float[-0.2,0.82,0.03]);
Shape Shape1022 = createNode("Shape");
Shape1022.USE = "jointbox";
Transform1021.child = new undefined();

Transform1021.child[0] = Shape1022;

HAnimSegment1016.children[1] = Transform1021;

HAnimJoint1015.children = new MFNode();

HAnimJoint1015.children[0] = HAnimSegment1016;

HAnimJoint HAnimJoint1023 = createNode("HAnimJoint");
HAnimJoint1023.name = "r_carpal_interphalangeal_1";
HAnimJoint1023.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint1023.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint1023.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint1023.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1024 = createNode("HAnimSegment");
HAnimSegment1024.name = "r_carpal_distal_phalanx_1";
HAnimSegment1024.DEF = "Joe_r_carpal_distal_phalanx_1";
Shape Shape1025 = createNode("Shape");
Appearance Appearance1026 = createNode("Appearance");
Appearance1026.USE = "SegmentLine";
Shape1025.appearance = Appearance1026;

IndexedLineSet IndexedLineSet1027 = createNode("IndexedLineSet");
IndexedLineSet1027.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1028 = createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[-0.2,0.8,0.05,-0.2,0.78,0.07]);
IndexedLineSet1027.coord = Coordinate1028;

Shape1025.geometry = IndexedLineSet1027;

HAnimSegment1024.children = new MFNode();

HAnimSegment1024.children[0] = Shape1025;

Transform Transform1029 = createNode("Transform");
Transform1029.DEF = "Thumbnail";
Transform1029.translation = new SFVec3f(new float[-0.2,0.785,0.075]);
Shape Shape1030 = createNode("Shape");
Shape1030.USE = "skinsphere";
Transform1029.child = new undefined();

Transform1029.child[0] = Shape1030;

HAnimSegment1024.children[1] = Transform1029;

Transform Transform1031 = createNode("Transform");
Transform1031.translation = new SFVec3f(new float[-0.2,0.8,0.05]);
Shape Shape1032 = createNode("Shape");
Shape1032.USE = "jointbox";
Transform1031.child = new undefined();

Transform1031.child[0] = Shape1032;

HAnimSegment1024.children[2] = Transform1031;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1033.DEF = "Joe_r_carpal_distal_phalanx_1_tip";
HAnimSite1033.translation = new SFVec3f(new float[-0.2,0.78,0.07]);
Shape Shape1034 = createNode("Shape");
Shape1034.USE = "sitebox";
HAnimSite1033.children = new MFNode();

HAnimSite1033.children[0] = Shape1034;

HAnimSegment1024.children[3] = HAnimSite1033;

HAnimJoint1023.children = new MFNode();

HAnimJoint1023.children[0] = HAnimSegment1024;

HAnimJoint1015.children[1] = HAnimJoint1023;

HAnimJoint1007.children[1] = HAnimJoint1015;

HAnimJoint997.children[1] = HAnimJoint1007;

HAnimJoint HAnimJoint1035 = createNode("HAnimJoint");
HAnimJoint1035.name = "r_carpometacarpal_2";
HAnimJoint1035.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint1035.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint1035.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint1035.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1036 = createNode("HAnimSegment");
HAnimSegment1036.name = "r_metacarpal_2";
HAnimSegment1036.DEF = "Joe_r_metacarpal_2";
Shape Shape1037 = createNode("Shape");
Appearance Appearance1038 = createNode("Appearance");
Appearance1038.USE = "SegmentLine";
Shape1037.appearance = Appearance1038;

IndexedLineSet IndexedLineSet1039 = createNode("IndexedLineSet");
IndexedLineSet1039.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1040 = createNode("Coordinate");
Coordinate1040.point = new MFVec3f(new float[-0.2,0.84,-0.015,-0.2,0.793,-0.015]);
IndexedLineSet1039.coord = Coordinate1040;

Shape1037.geometry = IndexedLineSet1039;

HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = Shape1037;

Transform Transform1041 = createNode("Transform");
Transform1041.translation = new SFVec3f(new float[-0.2,0.84,-0.015]);
Shape Shape1042 = createNode("Shape");
Shape1042.USE = "jointbox";
Transform1041.child = new undefined();

Transform1041.child[0] = Shape1042;

HAnimSegment1036.children[1] = Transform1041;

HAnimSite HAnimSite1043 = createNode("HAnimSite");
HAnimSite1043.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1043.DEF = "Joe_r_metacarpal_phalanx_2_pt";
HAnimSite1043.translation = new SFVec3f(new float[-0.2,0.793,-0.005]);
Shape Shape1044 = createNode("Shape");
Shape1044.USE = "sitebox";
HAnimSite1043.children = new MFNode();

HAnimSite1043.children[0] = Shape1044;

HAnimSegment1036.children[2] = HAnimSite1043;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.name = "r_metacarpophalangeal_2";
HAnimJoint1045.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint1045.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint1045.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint1045.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment HAnimSegment1046 = createNode("HAnimSegment");
HAnimSegment1046.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1046.DEF = "Joe_r_carpal_proximal_phalanx_2";
Shape Shape1047 = createNode("Shape");
Appearance Appearance1048 = createNode("Appearance");
Appearance1048.USE = "SegmentLine";
Shape1047.appearance = Appearance1048;

IndexedLineSet IndexedLineSet1049 = createNode("IndexedLineSet");
IndexedLineSet1049.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1050 = createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[-0.2,0.793,-0.015,-0.2,0.745,-0.015]);
IndexedLineSet1049.coord = Coordinate1050;

Shape1047.geometry = IndexedLineSet1049;

HAnimSegment1046.children = new MFNode();

HAnimSegment1046.children[0] = Shape1047;

Transform Transform1051 = createNode("Transform");
Transform1051.translation = new SFVec3f(new float[-0.2,0.793,-0.015]);
Shape Shape1052 = createNode("Shape");
Shape1052.USE = "jointbox";
Transform1051.child = new undefined();

Transform1051.child[0] = Shape1052;

HAnimSegment1046.children[1] = Transform1051;

HAnimJoint1045.children = new MFNode();

HAnimJoint1045.children[0] = HAnimSegment1046;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1053.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint1053.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint1053.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint1053.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1054 = createNode("HAnimSegment");
HAnimSegment1054.name = "r_carpal_middle_phalanx_2";
HAnimSegment1054.DEF = "Joe_r_carpal_middle_phalanx_2";
Shape Shape1055 = createNode("Shape");
Appearance Appearance1056 = createNode("Appearance");
Appearance1056.USE = "SegmentLine";
Shape1055.appearance = Appearance1056;

IndexedLineSet IndexedLineSet1057 = createNode("IndexedLineSet");
IndexedLineSet1057.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1058 = createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[-0.2,0.745,-0.015,-0.2,0.72,-0.015]);
IndexedLineSet1057.coord = Coordinate1058;

Shape1055.geometry = IndexedLineSet1057;

HAnimSegment1054.children = new MFNode();

HAnimSegment1054.children[0] = Shape1055;

Transform Transform1059 = createNode("Transform");
Transform1059.translation = new SFVec3f(new float[-0.2,0.745,-0.015]);
Shape Shape1060 = createNode("Shape");
Shape1060.USE = "jointbox";
Transform1059.child = new undefined();

Transform1059.child[0] = Shape1060;

HAnimSegment1054.children[1] = Transform1059;

HAnimJoint1053.children = new MFNode();

HAnimJoint1053.children[0] = HAnimSegment1054;

HAnimJoint HAnimJoint1061 = createNode("HAnimJoint");
HAnimJoint1061.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1061.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint1061.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint1061.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint1061.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1062 = createNode("HAnimSegment");
HAnimSegment1062.name = "r_carpal_distal_phalanx_2";
HAnimSegment1062.DEF = "Joe_r_carpal_distal_phalanx_2";
Shape Shape1063 = createNode("Shape");
Appearance Appearance1064 = createNode("Appearance");
Appearance1064.USE = "SegmentLine";
Shape1063.appearance = Appearance1064;

IndexedLineSet IndexedLineSet1065 = createNode("IndexedLineSet");
IndexedLineSet1065.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1066 = createNode("Coordinate");
Coordinate1066.point = new MFVec3f(new float[-0.2,0.72,-0.015,-0.2,0.695,-0.015]);
IndexedLineSet1065.coord = Coordinate1066;

Shape1063.geometry = IndexedLineSet1065;

HAnimSegment1062.children = new MFNode();

HAnimSegment1062.children[0] = Shape1063;

Transform Transform1067 = createNode("Transform");
Transform1067.translation = new SFVec3f(new float[-0.2,0.72,-0.015]);
Shape Shape1068 = createNode("Shape");
Shape1068.USE = "jointbox";
Transform1067.child = new undefined();

Transform1067.child[0] = Shape1068;

HAnimSegment1062.children[1] = Transform1067;

HAnimSite HAnimSite1069 = createNode("HAnimSite");
HAnimSite1069.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1069.DEF = "Joe_r_carpal_distal_phalanx_2_tip";
HAnimSite1069.translation = new SFVec3f(new float[-0.2,0.695,-0.015]);
Shape Shape1070 = createNode("Shape");
Shape1070.USE = "sitebox";
HAnimSite1069.children = new MFNode();

HAnimSite1069.children[0] = Shape1070;

HAnimSegment1062.children[2] = HAnimSite1069;

HAnimJoint1061.children = new MFNode();

HAnimJoint1061.children[0] = HAnimSegment1062;

HAnimJoint1053.children[1] = HAnimJoint1061;

HAnimJoint1045.children[1] = HAnimJoint1053;

HAnimJoint1035.children[1] = HAnimJoint1045;

HAnimJoint997.children[2] = HAnimJoint1035;

HAnimJoint HAnimJoint1071 = createNode("HAnimJoint");
HAnimJoint1071.name = "r_carpometacarpal_3";
HAnimJoint1071.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint1071.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint1071.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint1071.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1072 = createNode("HAnimSegment");
HAnimSegment1072.name = "r_metacarpal_3";
HAnimSegment1072.DEF = "Joe_r_metacarpal_3";
Shape Shape1073 = createNode("Shape");
Appearance Appearance1074 = createNode("Appearance");
Appearance1074.USE = "SegmentLine";
Shape1073.appearance = Appearance1074;

IndexedLineSet IndexedLineSet1075 = createNode("IndexedLineSet");
IndexedLineSet1075.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1076 = createNode("Coordinate");
Coordinate1076.point = new MFVec3f(new float[-0.2,0.835,-0.04,-0.2,0.788,-0.04]);
IndexedLineSet1075.coord = Coordinate1076;

Shape1073.geometry = IndexedLineSet1075;

HAnimSegment1072.children = new MFNode();

HAnimSegment1072.children[0] = Shape1073;

Transform Transform1077 = createNode("Transform");
Transform1077.translation = new SFVec3f(new float[-0.2,0.835,-0.04]);
Shape Shape1078 = createNode("Shape");
Shape1078.USE = "jointbox";
Transform1077.child = new undefined();

Transform1077.child[0] = Shape1078;

HAnimSegment1072.children[1] = Transform1077;

HAnimJoint1071.children = new MFNode();

HAnimJoint1071.children[0] = HAnimSegment1072;

HAnimJoint HAnimJoint1079 = createNode("HAnimJoint");
HAnimJoint1079.name = "r_metacarpophalangeal_3";
HAnimJoint1079.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint1079.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint1079.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint1079.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment1080 = createNode("HAnimSegment");
HAnimSegment1080.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1080.DEF = "Joe_r_carpal_proximal_phalanx_3";
Shape Shape1081 = createNode("Shape");
Appearance Appearance1082 = createNode("Appearance");
Appearance1082.USE = "SegmentLine";
Shape1081.appearance = Appearance1082;

IndexedLineSet IndexedLineSet1083 = createNode("IndexedLineSet");
IndexedLineSet1083.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1084 = createNode("Coordinate");
Coordinate1084.point = new MFVec3f(new float[-0.2,0.788,-0.04,-0.2,0.74,-0.04]);
IndexedLineSet1083.coord = Coordinate1084;

Shape1081.geometry = IndexedLineSet1083;

HAnimSegment1080.children = new MFNode();

HAnimSegment1080.children[0] = Shape1081;

Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.2,0.788,-0.04]);
Shape Shape1086 = createNode("Shape");
Shape1086.USE = "jointbox";
Transform1085.child = new undefined();

Transform1085.child[0] = Shape1086;

HAnimSegment1080.children[1] = Transform1085;

HAnimJoint1079.children = new MFNode();

HAnimJoint1079.children[0] = HAnimSegment1080;

HAnimJoint HAnimJoint1087 = createNode("HAnimJoint");
HAnimJoint1087.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1087.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint1087.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint1087.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint1087.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1088 = createNode("HAnimSegment");
HAnimSegment1088.name = "r_carpal_middle_phalanx_3";
HAnimSegment1088.DEF = "Joe_r_carpal_middle_phalanx_3";
Shape Shape1089 = createNode("Shape");
Appearance Appearance1090 = createNode("Appearance");
Appearance1090.USE = "SegmentLine";
Shape1089.appearance = Appearance1090;

IndexedLineSet IndexedLineSet1091 = createNode("IndexedLineSet");
IndexedLineSet1091.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1092 = createNode("Coordinate");
Coordinate1092.point = new MFVec3f(new float[-0.2,0.74,-0.04,-0.2,0.7142,-0.04]);
IndexedLineSet1091.coord = Coordinate1092;

Shape1089.geometry = IndexedLineSet1091;

HAnimSegment1088.children = new MFNode();

HAnimSegment1088.children[0] = Shape1089;

Transform Transform1093 = createNode("Transform");
Transform1093.translation = new SFVec3f(new float[-0.2,0.74,-0.04]);
Shape Shape1094 = createNode("Shape");
Shape1094.USE = "jointbox";
Transform1093.child = new undefined();

Transform1093.child[0] = Shape1094;

HAnimSegment1088.children[1] = Transform1093;

HAnimJoint1087.children = new MFNode();

HAnimJoint1087.children[0] = HAnimSegment1088;

HAnimJoint HAnimJoint1095 = createNode("HAnimJoint");
HAnimJoint1095.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1095.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint1095.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint1095.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint1095.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1096 = createNode("HAnimSegment");
HAnimSegment1096.name = "r_carpal_distal_phalanx_3";
HAnimSegment1096.DEF = "Joe_r_carpal_distal_phalanx_3";
Shape Shape1097 = createNode("Shape");
Appearance Appearance1098 = createNode("Appearance");
Appearance1098.USE = "SegmentLine";
Shape1097.appearance = Appearance1098;

IndexedLineSet IndexedLineSet1099 = createNode("IndexedLineSet");
IndexedLineSet1099.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1100 = createNode("Coordinate");
Coordinate1100.point = new MFVec3f(new float[-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]);
IndexedLineSet1099.coord = Coordinate1100;

Shape1097.geometry = IndexedLineSet1099;

HAnimSegment1096.children = new MFNode();

HAnimSegment1096.children[0] = Shape1097;

Transform Transform1101 = createNode("Transform");
Transform1101.translation = new SFVec3f(new float[-0.2,0.7142,-0.04]);
Shape Shape1102 = createNode("Shape");
Shape1102.USE = "jointbox";
Transform1101.child = new undefined();

Transform1101.child[0] = Shape1102;

HAnimSegment1096.children[1] = Transform1101;

HAnimSite HAnimSite1103 = createNode("HAnimSite");
HAnimSite1103.name = "r_dactylion_pt";
HAnimSite1103.DEF = "Joe_r_dactylion_pt";
HAnimSite1103.translation = new SFVec3f(new float[-0.2,0.68,-0.04]);
Shape Shape1104 = createNode("Shape");
Shape1104.USE = "sitebox";
HAnimSite1103.children = new MFNode();

HAnimSite1103.children[0] = Shape1104;

HAnimSegment1096.children[2] = HAnimSite1103;

HAnimSite HAnimSite1105 = createNode("HAnimSite");
HAnimSite1105.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1105.DEF = "Joe_r_carpal_distal_phalanx_3_tip";
HAnimSite1105.translation = new SFVec3f(new float[-0.2,0.68,-0.04]);
Shape Shape1106 = createNode("Shape");
Shape1106.USE = "sitebox";
HAnimSite1105.children = new MFNode();

HAnimSite1105.children[0] = Shape1106;

HAnimSegment1096.children[3] = HAnimSite1105;

HAnimJoint1095.children = new MFNode();

HAnimJoint1095.children[0] = HAnimSegment1096;

HAnimJoint1087.children[1] = HAnimJoint1095;

HAnimJoint1079.children[1] = HAnimJoint1087;

HAnimJoint1071.children[1] = HAnimJoint1079;

HAnimJoint997.children[3] = HAnimJoint1071;

HAnimJoint HAnimJoint1107 = createNode("HAnimJoint");
HAnimJoint1107.name = "r_carpometacarpal_4";
HAnimJoint1107.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint1107.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint1107.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint1107.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1108 = createNode("HAnimSegment");
HAnimSegment1108.name = "r_metacarpal_4";
HAnimSegment1108.DEF = "Joe_r_metacarpal_4";
Shape Shape1109 = createNode("Shape");
Appearance Appearance1110 = createNode("Appearance");
Appearance1110.USE = "SegmentLine";
Shape1109.appearance = Appearance1110;

IndexedLineSet IndexedLineSet1111 = createNode("IndexedLineSet");
IndexedLineSet1111.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1112 = createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[-0.2,0.835,-0.065,-0.2,0.793,-0.065]);
IndexedLineSet1111.coord = Coordinate1112;

Shape1109.geometry = IndexedLineSet1111;

HAnimSegment1108.children = new MFNode();

HAnimSegment1108.children[0] = Shape1109;

Transform Transform1113 = createNode("Transform");
Transform1113.translation = new SFVec3f(new float[-0.2,0.835,-0.065]);
Shape Shape1114 = createNode("Shape");
Shape1114.USE = "jointbox";
Transform1113.child = new undefined();

Transform1113.child[0] = Shape1114;

HAnimSegment1108.children[1] = Transform1113;

HAnimJoint1107.children = new MFNode();

HAnimJoint1107.children[0] = HAnimSegment1108;

HAnimJoint HAnimJoint1115 = createNode("HAnimJoint");
HAnimJoint1115.name = "r_metacarpophalangeal_4";
HAnimJoint1115.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint1115.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint1115.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint1115.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment1116 = createNode("HAnimSegment");
HAnimSegment1116.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1116.DEF = "Joe_r_carpal_proximal_phalanx_4";
Shape Shape1117 = createNode("Shape");
Appearance Appearance1118 = createNode("Appearance");
Appearance1118.USE = "SegmentLine";
Shape1117.appearance = Appearance1118;

IndexedLineSet IndexedLineSet1119 = createNode("IndexedLineSet");
IndexedLineSet1119.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1120 = createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[-0.2,0.793,-0.065,-0.2,0.74,-0.065]);
IndexedLineSet1119.coord = Coordinate1120;

Shape1117.geometry = IndexedLineSet1119;

HAnimSegment1116.children = new MFNode();

HAnimSegment1116.children[0] = Shape1117;

Transform Transform1121 = createNode("Transform");
Transform1121.translation = new SFVec3f(new float[-0.2,0.793,-0.065]);
Shape Shape1122 = createNode("Shape");
Shape1122.USE = "jointbox";
Transform1121.child = new undefined();

Transform1121.child[0] = Shape1122;

HAnimSegment1116.children[1] = Transform1121;

HAnimJoint1115.children = new MFNode();

HAnimJoint1115.children[0] = HAnimSegment1116;

HAnimJoint HAnimJoint1123 = createNode("HAnimJoint");
HAnimJoint1123.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1123.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint1123.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint1123.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint1123.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1124 = createNode("HAnimSegment");
HAnimSegment1124.name = "r_carpal_middle_phalanx_4";
HAnimSegment1124.DEF = "Joe_r_carpal_middle_phalanx_4";
Shape Shape1125 = createNode("Shape");
Appearance Appearance1126 = createNode("Appearance");
Appearance1126.USE = "SegmentLine";
Shape1125.appearance = Appearance1126;

IndexedLineSet IndexedLineSet1127 = createNode("IndexedLineSet");
IndexedLineSet1127.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1128 = createNode("Coordinate");
Coordinate1128.point = new MFVec3f(new float[-0.2,0.74,-0.065,-0.2,0.7177,-0.065]);
IndexedLineSet1127.coord = Coordinate1128;

Shape1125.geometry = IndexedLineSet1127;

HAnimSegment1124.children = new MFNode();

HAnimSegment1124.children[0] = Shape1125;

Transform Transform1129 = createNode("Transform");
Transform1129.translation = new SFVec3f(new float[-0.2,0.74,-0.065]);
Shape Shape1130 = createNode("Shape");
Shape1130.USE = "jointbox";
Transform1129.child = new undefined();

Transform1129.child[0] = Shape1130;

HAnimSegment1124.children[1] = Transform1129;

HAnimJoint1123.children = new MFNode();

HAnimJoint1123.children[0] = HAnimSegment1124;

HAnimJoint HAnimJoint1131 = createNode("HAnimJoint");
HAnimJoint1131.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1131.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint1131.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint1131.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint1131.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1132 = createNode("HAnimSegment");
HAnimSegment1132.name = "r_carpal_distal_phalanx_4";
HAnimSegment1132.DEF = "Joe_r_carpal_distal_phalanx_4";
Shape Shape1133 = createNode("Shape");
Appearance Appearance1134 = createNode("Appearance");
Appearance1134.USE = "SegmentLine";
Shape1133.appearance = Appearance1134;

IndexedLineSet IndexedLineSet1135 = createNode("IndexedLineSet");
IndexedLineSet1135.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1136 = createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[-0.2,0.7177,-0.065,-0.2,0.695,-0.065]);
IndexedLineSet1135.coord = Coordinate1136;

Shape1133.geometry = IndexedLineSet1135;

HAnimSegment1132.children = new MFNode();

HAnimSegment1132.children[0] = Shape1133;

Transform Transform1137 = createNode("Transform");
Transform1137.translation = new SFVec3f(new float[-0.2,0.7177,-0.065]);
Shape Shape1138 = createNode("Shape");
Shape1138.USE = "jointbox";
Transform1137.child = new undefined();

Transform1137.child[0] = Shape1138;

HAnimSegment1132.children[1] = Transform1137;

HAnimSite HAnimSite1139 = createNode("HAnimSite");
HAnimSite1139.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1139.DEF = "Joe_r_carpal_distal_phalanx_4_tip";
HAnimSite1139.translation = new SFVec3f(new float[-0.2,0.695,-0.065]);
Shape Shape1140 = createNode("Shape");
Shape1140.USE = "sitebox";
HAnimSite1139.children = new MFNode();

HAnimSite1139.children[0] = Shape1140;

HAnimSegment1132.children[2] = HAnimSite1139;

HAnimJoint1131.children = new MFNode();

HAnimJoint1131.children[0] = HAnimSegment1132;

HAnimJoint1123.children[1] = HAnimJoint1131;

HAnimJoint1115.children[1] = HAnimJoint1123;

HAnimJoint1107.children[1] = HAnimJoint1115;

HAnimJoint997.children[4] = HAnimJoint1107;

HAnimJoint HAnimJoint1141 = createNode("HAnimJoint");
HAnimJoint1141.name = "r_carpometacarpal_5";
HAnimJoint1141.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint1141.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint1141.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint1141.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimSegment HAnimSegment1142 = createNode("HAnimSegment");
HAnimSegment1142.name = "r_metacarpal_5";
HAnimSegment1142.DEF = "Joe_r_metacarpal_5";
Shape Shape1143 = createNode("Shape");
Appearance Appearance1144 = createNode("Appearance");
Appearance1144.USE = "SegmentLine";
Shape1143.appearance = Appearance1144;

IndexedLineSet IndexedLineSet1145 = createNode("IndexedLineSet");
IndexedLineSet1145.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1146 = createNode("Coordinate");
Coordinate1146.point = new MFVec3f(new float[-0.2,0.84,-0.085,-0.2,0.79,-0.085]);
IndexedLineSet1145.coord = Coordinate1146;

Shape1143.geometry = IndexedLineSet1145;

HAnimSegment1142.children = new MFNode();

HAnimSegment1142.children[0] = Shape1143;

Transform Transform1147 = createNode("Transform");
Transform1147.translation = new SFVec3f(new float[-0.2,0.84,-0.085]);
Shape Shape1148 = createNode("Shape");
Shape1148.USE = "jointbox";
Transform1147.child = new undefined();

Transform1147.child[0] = Shape1148;

HAnimSegment1142.children[1] = Transform1147;

HAnimSite HAnimSite1149 = createNode("HAnimSite");
HAnimSite1149.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1149.DEF = "Joe_r_metacarpal_phalanx_5_pt";
HAnimSite1149.translation = new SFVec3f(new float[-0.2,0.79,-0.095]);
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "sitebox";
HAnimSite1149.children = new MFNode();

HAnimSite1149.children[0] = Shape1150;

HAnimSegment1142.children[2] = HAnimSite1149;

HAnimJoint1141.children = new MFNode();

HAnimJoint1141.children[0] = HAnimSegment1142;

HAnimJoint HAnimJoint1151 = createNode("HAnimJoint");
HAnimJoint1151.name = "r_metacarpophalangeal_5";
HAnimJoint1151.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint1151.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint1151.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint1151.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment1152 = createNode("HAnimSegment");
HAnimSegment1152.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1152.DEF = "Joe_r_carpal_proximal_phalanx_5";
Shape Shape1153 = createNode("Shape");
Appearance Appearance1154 = createNode("Appearance");
Appearance1154.USE = "SegmentLine";
Shape1153.appearance = Appearance1154;

IndexedLineSet IndexedLineSet1155 = createNode("IndexedLineSet");
IndexedLineSet1155.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1156 = createNode("Coordinate");
Coordinate1156.point = new MFVec3f(new float[-0.2,0.79,-0.085,-0.2,0.755,-0.085]);
IndexedLineSet1155.coord = Coordinate1156;

Shape1153.geometry = IndexedLineSet1155;

HAnimSegment1152.children = new MFNode();

HAnimSegment1152.children[0] = Shape1153;

Transform Transform1157 = createNode("Transform");
Transform1157.translation = new SFVec3f(new float[-0.2,0.79,-0.085]);
Shape Shape1158 = createNode("Shape");
Shape1158.USE = "jointbox";
Transform1157.child = new undefined();

Transform1157.child[0] = Shape1158;

HAnimSegment1152.children[1] = Transform1157;

HAnimJoint1151.children = new MFNode();

HAnimJoint1151.children[0] = HAnimSegment1152;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint1159.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint1159.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1160 = createNode("HAnimSegment");
HAnimSegment1160.name = "r_carpal_middle_phalanx_5";
HAnimSegment1160.DEF = "Joe_r_carpal_middle_phalanx_5";
Shape Shape1161 = createNode("Shape");
Appearance Appearance1162 = createNode("Appearance");
Appearance1162.USE = "SegmentLine";
Shape1161.appearance = Appearance1162;

IndexedLineSet IndexedLineSet1163 = createNode("IndexedLineSet");
IndexedLineSet1163.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1164 = createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[-0.2,0.755,-0.085,-0.2,0.735,-0.085]);
IndexedLineSet1163.coord = Coordinate1164;

Shape1161.geometry = IndexedLineSet1163;

HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = Shape1161;

Transform Transform1165 = createNode("Transform");
Transform1165.translation = new SFVec3f(new float[-0.2,0.755,-0.085]);
Shape Shape1166 = createNode("Shape");
Shape1166.USE = "jointbox";
Transform1165.child = new undefined();

Transform1165.child[0] = Shape1166;

HAnimSegment1160.children[1] = Transform1165;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1167.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint1167.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint1167.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint1167.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1168 = createNode("HAnimSegment");
HAnimSegment1168.name = "r_carpal_distal_phalanx_5";
HAnimSegment1168.DEF = "Joe_r_carpal_distal_phalanx_5";
Shape Shape1169 = createNode("Shape");
Appearance Appearance1170 = createNode("Appearance");
Appearance1170.USE = "SegmentLine";
Shape1169.appearance = Appearance1170;

IndexedLineSet IndexedLineSet1171 = createNode("IndexedLineSet");
IndexedLineSet1171.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1172 = createNode("Coordinate");
Coordinate1172.point = new MFVec3f(new float[-0.2,0.735,-0.085,-0.2,0.72,-0.085]);
IndexedLineSet1171.coord = Coordinate1172;

Shape1169.geometry = IndexedLineSet1171;

HAnimSegment1168.children = new MFNode();

HAnimSegment1168.children[0] = Shape1169;

Transform Transform1173 = createNode("Transform");
Transform1173.translation = new SFVec3f(new float[-0.2,0.735,-0.085]);
Shape Shape1174 = createNode("Shape");
Shape1174.USE = "jointbox";
Transform1173.child = new undefined();

Transform1173.child[0] = Shape1174;

HAnimSegment1168.children[1] = Transform1173;

HAnimSite HAnimSite1175 = createNode("HAnimSite");
HAnimSite1175.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1175.DEF = "Joe_r_carpal_distal_phalanx_5_tip";
HAnimSite1175.translation = new SFVec3f(new float[-0.2,0.72,-0.085]);
Shape Shape1176 = createNode("Shape");
Shape1176.USE = "sitebox";
HAnimSite1175.children = new MFNode();

HAnimSite1175.children[0] = Shape1176;

HAnimSegment1168.children[2] = HAnimSite1175;

HAnimJoint1167.children = new MFNode();

HAnimJoint1167.children[0] = HAnimSegment1168;

HAnimJoint1159.children[1] = HAnimJoint1167;

HAnimJoint1151.children[1] = HAnimJoint1159;

HAnimJoint1141.children[1] = HAnimJoint1151;

HAnimJoint997.children[5] = HAnimJoint1141;

HAnimJoint975.children[1] = HAnimJoint997;

HAnimJoint945.children[1] = HAnimJoint975;

HAnimJoint929.children[1] = HAnimJoint945;

HAnimJoint919.children[1] = HAnimJoint929;

HAnimJoint553.children[3] = HAnimJoint919;

HAnimJoint545.children[1] = HAnimJoint553;

HAnimJoint537.children[1] = HAnimJoint545;

HAnimJoint527.children[1] = HAnimJoint537;

HAnimJoint519.children[1] = HAnimJoint527;

HAnimJoint511.children[1] = HAnimJoint519;

HAnimJoint503.children[1] = HAnimJoint511;

HAnimJoint495.children[1] = HAnimJoint503;

HAnimJoint483.children[1] = HAnimJoint495;

HAnimJoint473.children[1] = HAnimJoint483;

HAnimJoint465.children[1] = HAnimJoint473;

HAnimJoint457.children[1] = HAnimJoint465;

HAnimJoint449.children[1] = HAnimJoint457;

HAnimJoint423.children[1] = HAnimJoint449;

HAnimJoint415.children[1] = HAnimJoint423;

HAnimJoint407.children[1] = HAnimJoint415;

HAnimJoint392.children[2] = HAnimJoint407;

HAnimJoint78.children[2] = HAnimJoint392;

HAnimHumanoid75.joints[1] = HAnimJoint78;

Shape Shape1177 = createNode("Shape");
Shape1177.DEF = "SkinShape";
Appearance Appearance1178 = createNode("Appearance");
Appearance1178.DEF = "SkinAppearance";
Material Material1179 = createNode("Material");
Material1179.DEF = "SkinMaterial";
Material1179.ambientIntensity = 0.6;
Material1179.diffuseColor = new SFColor(new float[1,1,1]);
Material1179.shininess = 0.6;
Material1179.transparency = 0.2;
Appearance1178.material = Material1179;

ImageTexture ImageTexture1180 = createNode("ImageTexture");
ImageTexture1180.DEF = "zBlueSpiralBkg2";
ImageTexture1180.description = "Blue Spiral Pattern";
ImageTexture1180.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1178.texture = ImageTexture1180;

Shape1177.appearance = Appearance1178;

IndexedFaceSet IndexedFaceSet1181 = createNode("IndexedFaceSet");
IndexedFaceSet1181.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1181.creaseAngle = 3.1;
Color Color1182 = createNode("Color");
Color1182.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1181.color = Color1182;

Coordinate Coordinate1183 = createNode("Coordinate");
Coordinate1183.DEF = "TheSkinCoord";
Coordinate1183.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet1181.coord = Coordinate1183;

Shape1177.geometry = IndexedFaceSet1181;

HAnimHumanoid75.skin[2] = Shape1177;

Coordinate Coordinate1184 = createNode("Coordinate");
Coordinate1184.USE = "TheSkinCoord";
HAnimHumanoid75.skinCoord = Coordinate1184;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.USE = "Joe_humanoid_root";
HAnimHumanoid75.joints[3] = HAnimJoint1185;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.USE = "Joe_sacroiliac";
HAnimHumanoid75.joints[4] = HAnimJoint1186;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.USE = "Joe_vl5";
HAnimHumanoid75.joints[5] = HAnimJoint1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_vl4";
HAnimHumanoid75.joints[6] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_vl3";
HAnimHumanoid75.joints[7] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_vl2";
HAnimHumanoid75.joints[8] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_vl1";
HAnimHumanoid75.joints[9] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_vt12";
HAnimHumanoid75.joints[10] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_vt11";
HAnimHumanoid75.joints[11] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_vt10";
HAnimHumanoid75.joints[12] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_vt9";
HAnimHumanoid75.joints[13] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_vt8";
HAnimHumanoid75.joints[14] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_vt7";
HAnimHumanoid75.joints[15] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_vt6";
HAnimHumanoid75.joints[16] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_vt5";
HAnimHumanoid75.joints[17] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_vt4";
HAnimHumanoid75.joints[18] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_vt3";
HAnimHumanoid75.joints[19] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_vt2";
HAnimHumanoid75.joints[20] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vt1";
HAnimHumanoid75.joints[21] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vc7";
HAnimHumanoid75.joints[22] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vc6";
HAnimHumanoid75.joints[23] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vc5";
HAnimHumanoid75.joints[24] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vc4";
HAnimHumanoid75.joints[25] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vc3";
HAnimHumanoid75.joints[26] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vc2";
HAnimHumanoid75.joints[27] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vc1";
HAnimHumanoid75.joints[28] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_skullbase";
HAnimHumanoid75.joints[29] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_l_acromioclavicular";
HAnimHumanoid75.joints[30] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_r_acromioclavicular";
HAnimHumanoid75.joints[31] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_l_carpal_distal_interphalangeal_2";
HAnimHumanoid75.joints[32] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_r_carpal_distal_interphalangeal_2";
HAnimHumanoid75.joints[33] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_l_carpal_distal_interphalangeal_3";
HAnimHumanoid75.joints[34] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_r_carpal_distal_interphalangeal_3";
HAnimHumanoid75.joints[35] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_l_carpal_distal_interphalangeal_4";
HAnimHumanoid75.joints[36] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_r_carpal_distal_interphalangeal_4";
HAnimHumanoid75.joints[37] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_l_carpal_distal_interphalangeal_5";
HAnimHumanoid75.joints[38] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_r_carpal_distal_interphalangeal_5";
HAnimHumanoid75.joints[39] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_l_carpal_interphalangeal_1";
HAnimHumanoid75.joints[40] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_r_carpal_interphalangeal_1";
HAnimHumanoid75.joints[41] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid75.joints[42] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid75.joints[43] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid75.joints[44] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid75.joints[45] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid75.joints[46] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid75.joints[47] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid75.joints[48] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid75.joints[49] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_l_carpometacarpal_1";
HAnimHumanoid75.joints[50] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_r_carpometacarpal_1";
HAnimHumanoid75.joints[51] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_l_carpometacarpal_2";
HAnimHumanoid75.joints[52] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_r_carpometacarpal_2";
HAnimHumanoid75.joints[53] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_l_carpometacarpal_3";
HAnimHumanoid75.joints[54] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_r_carpometacarpal_3";
HAnimHumanoid75.joints[55] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_l_carpometacarpal_4";
HAnimHumanoid75.joints[56] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_r_carpometacarpal_4";
HAnimHumanoid75.joints[57] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_l_carpometacarpal_5";
HAnimHumanoid75.joints[58] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_r_carpometacarpal_5";
HAnimHumanoid75.joints[59] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_l_elbow";
HAnimHumanoid75.joints[60] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_r_elbow";
HAnimHumanoid75.joints[61] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_l_eyeball_joint";
HAnimHumanoid75.joints[62] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_r_eyeball_joint";
HAnimHumanoid75.joints[63] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_l_hip";
HAnimHumanoid75.joints[64] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_r_hip";
HAnimHumanoid75.joints[65] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_l_knee";
HAnimHumanoid75.joints[66] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_r_knee";
HAnimHumanoid75.joints[67] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_l_metacarpophalangeal_1";
HAnimHumanoid75.joints[68] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_r_metacarpophalangeal_1";
HAnimHumanoid75.joints[69] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_l_metacarpophalangeal_2";
HAnimHumanoid75.joints[70] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_r_metacarpophalangeal_2";
HAnimHumanoid75.joints[71] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_l_metacarpophalangeal_3";
HAnimHumanoid75.joints[72] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_r_metacarpophalangeal_3";
HAnimHumanoid75.joints[73] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_l_metacarpophalangeal_4";
HAnimHumanoid75.joints[74] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_r_metacarpophalangeal_4";
HAnimHumanoid75.joints[75] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_l_metacarpophalangeal_5";
HAnimHumanoid75.joints[76] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_r_metacarpophalangeal_5";
HAnimHumanoid75.joints[77] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_l_metatarsal";
HAnimHumanoid75.joints[78] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_l_metatarsophalangeal_2";
HAnimHumanoid75.joints[79] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_metatarsophalangeal_2";
HAnimHumanoid75.joints[80] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_l_radiocarpal";
HAnimHumanoid75.joints[81] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_r_radiocarpal";
HAnimHumanoid75.joints[82] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_l_shoulder";
HAnimHumanoid75.joints[83] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_r_shoulder";
HAnimHumanoid75.joints[84] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_l_sternoclavicular";
HAnimHumanoid75.joints[85] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "Joe_r_sternoclavicular";
HAnimHumanoid75.joints[86] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "Joe_l_talocrural";
HAnimHumanoid75.joints[87] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "Joe_r_talocrural";
HAnimHumanoid75.joints[88] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid75.joints[89] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "Joe_l_tarsometatarsal_2";
HAnimHumanoid75.joints[90] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "Joe_r_tarsometatarsal_2";
HAnimHumanoid75.joints[91] = HAnimJoint1273;

HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.USE = "Joe_c1";
HAnimHumanoid75.segments[92] = HAnimSegment1274;

HAnimSegment HAnimSegment1275 = createNode("HAnimSegment");
HAnimSegment1275.USE = "Joe_c2";
HAnimHumanoid75.segments[93] = HAnimSegment1275;

HAnimSegment HAnimSegment1276 = createNode("HAnimSegment");
HAnimSegment1276.USE = "Joe_c3";
HAnimHumanoid75.segments[94] = HAnimSegment1276;

HAnimSegment HAnimSegment1277 = createNode("HAnimSegment");
HAnimSegment1277.USE = "Joe_c4";
HAnimHumanoid75.segments[95] = HAnimSegment1277;

HAnimSegment HAnimSegment1278 = createNode("HAnimSegment");
HAnimSegment1278.USE = "Joe_c5";
HAnimHumanoid75.segments[96] = HAnimSegment1278;

HAnimSegment HAnimSegment1279 = createNode("HAnimSegment");
HAnimSegment1279.USE = "Joe_c6";
HAnimHumanoid75.segments[97] = HAnimSegment1279;

HAnimSegment HAnimSegment1280 = createNode("HAnimSegment");
HAnimSegment1280.USE = "Joe_c7";
HAnimHumanoid75.segments[98] = HAnimSegment1280;

HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.USE = "Joe_l1";
HAnimHumanoid75.segments[99] = HAnimSegment1281;

HAnimSegment HAnimSegment1282 = createNode("HAnimSegment");
HAnimSegment1282.USE = "Joe_l2";
HAnimHumanoid75.segments[100] = HAnimSegment1282;

HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.USE = "Joe_l3";
HAnimHumanoid75.segments[101] = HAnimSegment1283;

HAnimSegment HAnimSegment1284 = createNode("HAnimSegment");
HAnimSegment1284.USE = "Joe_l4";
HAnimHumanoid75.segments[102] = HAnimSegment1284;

HAnimSegment HAnimSegment1285 = createNode("HAnimSegment");
HAnimSegment1285.USE = "Joe_l5";
HAnimHumanoid75.segments[103] = HAnimSegment1285;

HAnimSegment HAnimSegment1286 = createNode("HAnimSegment");
HAnimSegment1286.USE = "Joe_pelvis";
HAnimHumanoid75.segments[104] = HAnimSegment1286;

HAnimSegment HAnimSegment1287 = createNode("HAnimSegment");
HAnimSegment1287.USE = "Joe_sacrum";
HAnimHumanoid75.segments[105] = HAnimSegment1287;

HAnimSegment HAnimSegment1288 = createNode("HAnimSegment");
HAnimSegment1288.USE = "Joe_skull";
HAnimHumanoid75.segments[106] = HAnimSegment1288;

HAnimSegment HAnimSegment1289 = createNode("HAnimSegment");
HAnimSegment1289.USE = "Joe_t1";
HAnimHumanoid75.segments[107] = HAnimSegment1289;

HAnimSegment HAnimSegment1290 = createNode("HAnimSegment");
HAnimSegment1290.USE = "Joe_t10";
HAnimHumanoid75.segments[108] = HAnimSegment1290;

HAnimSegment HAnimSegment1291 = createNode("HAnimSegment");
HAnimSegment1291.USE = "Joe_t11";
HAnimHumanoid75.segments[109] = HAnimSegment1291;

HAnimSegment HAnimSegment1292 = createNode("HAnimSegment");
HAnimSegment1292.USE = "Joe_t12";
HAnimHumanoid75.segments[110] = HAnimSegment1292;

HAnimSegment HAnimSegment1293 = createNode("HAnimSegment");
HAnimSegment1293.USE = "Joe_t2";
HAnimHumanoid75.segments[111] = HAnimSegment1293;

HAnimSegment HAnimSegment1294 = createNode("HAnimSegment");
HAnimSegment1294.USE = "Joe_t3";
HAnimHumanoid75.segments[112] = HAnimSegment1294;

HAnimSegment HAnimSegment1295 = createNode("HAnimSegment");
HAnimSegment1295.USE = "Joe_t4";
HAnimHumanoid75.segments[113] = HAnimSegment1295;

HAnimSegment HAnimSegment1296 = createNode("HAnimSegment");
HAnimSegment1296.USE = "Joe_t5";
HAnimHumanoid75.segments[114] = HAnimSegment1296;

HAnimSegment HAnimSegment1297 = createNode("HAnimSegment");
HAnimSegment1297.USE = "Joe_t6";
HAnimHumanoid75.segments[115] = HAnimSegment1297;

HAnimSegment HAnimSegment1298 = createNode("HAnimSegment");
HAnimSegment1298.USE = "Joe_t7";
HAnimHumanoid75.segments[116] = HAnimSegment1298;

HAnimSegment HAnimSegment1299 = createNode("HAnimSegment");
HAnimSegment1299.USE = "Joe_t8";
HAnimHumanoid75.segments[117] = HAnimSegment1299;

HAnimSegment HAnimSegment1300 = createNode("HAnimSegment");
HAnimSegment1300.USE = "Joe_t9";
HAnimHumanoid75.segments[118] = HAnimSegment1300;

HAnimSegment HAnimSegment1301 = createNode("HAnimSegment");
HAnimSegment1301.USE = "Joe_toPelvis";
HAnimHumanoid75.segments[119] = HAnimSegment1301;

HAnimSegment HAnimSegment1302 = createNode("HAnimSegment");
HAnimSegment1302.USE = "Joe_l_calf";
HAnimHumanoid75.segments[120] = HAnimSegment1302;

HAnimSegment HAnimSegment1303 = createNode("HAnimSegment");
HAnimSegment1303.USE = "Joe_r_calf";
HAnimHumanoid75.segments[121] = HAnimSegment1303;

HAnimSegment HAnimSegment1304 = createNode("HAnimSegment");
HAnimSegment1304.USE = "Joe_l_carpal";
HAnimHumanoid75.segments[122] = HAnimSegment1304;

HAnimSegment HAnimSegment1305 = createNode("HAnimSegment");
HAnimSegment1305.USE = "Joe_r_carpal";
HAnimHumanoid75.segments[123] = HAnimSegment1305;

HAnimSegment HAnimSegment1306 = createNode("HAnimSegment");
HAnimSegment1306.USE = "Joe_l_carpal_distal_phalanx_1";
HAnimHumanoid75.segments[124] = HAnimSegment1306;

HAnimSegment HAnimSegment1307 = createNode("HAnimSegment");
HAnimSegment1307.USE = "Joe_r_carpal_distal_phalanx_1";
HAnimHumanoid75.segments[125] = HAnimSegment1307;

HAnimSegment HAnimSegment1308 = createNode("HAnimSegment");
HAnimSegment1308.USE = "Joe_l_carpal_distal_phalanx_2";
HAnimHumanoid75.segments[126] = HAnimSegment1308;

HAnimSegment HAnimSegment1309 = createNode("HAnimSegment");
HAnimSegment1309.USE = "Joe_r_carpal_distal_phalanx_2";
HAnimHumanoid75.segments[127] = HAnimSegment1309;

HAnimSegment HAnimSegment1310 = createNode("HAnimSegment");
HAnimSegment1310.USE = "Joe_l_carpal_distal_phalanx_3";
HAnimHumanoid75.segments[128] = HAnimSegment1310;

HAnimSegment HAnimSegment1311 = createNode("HAnimSegment");
HAnimSegment1311.USE = "Joe_r_carpal_distal_phalanx_3";
HAnimHumanoid75.segments[129] = HAnimSegment1311;

HAnimSegment HAnimSegment1312 = createNode("HAnimSegment");
HAnimSegment1312.USE = "Joe_l_carpal_distal_phalanx_4";
HAnimHumanoid75.segments[130] = HAnimSegment1312;

HAnimSegment HAnimSegment1313 = createNode("HAnimSegment");
HAnimSegment1313.USE = "Joe_r_carpal_distal_phalanx_4";
HAnimHumanoid75.segments[131] = HAnimSegment1313;

HAnimSegment HAnimSegment1314 = createNode("HAnimSegment");
HAnimSegment1314.USE = "Joe_l_carpal_distal_phalanx_5";
HAnimHumanoid75.segments[132] = HAnimSegment1314;

HAnimSegment HAnimSegment1315 = createNode("HAnimSegment");
HAnimSegment1315.USE = "Joe_r_carpal_distal_phalanx_5";
HAnimHumanoid75.segments[133] = HAnimSegment1315;

HAnimSegment HAnimSegment1316 = createNode("HAnimSegment");
HAnimSegment1316.USE = "Joe_l_carpal_middle_phalanx_2";
HAnimHumanoid75.segments[134] = HAnimSegment1316;

HAnimSegment HAnimSegment1317 = createNode("HAnimSegment");
HAnimSegment1317.USE = "Joe_r_carpal_middle_phalanx_2";
HAnimHumanoid75.segments[135] = HAnimSegment1317;

HAnimSegment HAnimSegment1318 = createNode("HAnimSegment");
HAnimSegment1318.USE = "Joe_l_carpal_middle_phalanx_3";
HAnimHumanoid75.segments[136] = HAnimSegment1318;

HAnimSegment HAnimSegment1319 = createNode("HAnimSegment");
HAnimSegment1319.USE = "Joe_r_carpal_middle_phalanx_3";
HAnimHumanoid75.segments[137] = HAnimSegment1319;

HAnimSegment HAnimSegment1320 = createNode("HAnimSegment");
HAnimSegment1320.USE = "Joe_l_carpal_middle_phalanx_4";
HAnimHumanoid75.segments[138] = HAnimSegment1320;

HAnimSegment HAnimSegment1321 = createNode("HAnimSegment");
HAnimSegment1321.USE = "Joe_r_carpal_middle_phalanx_4";
HAnimHumanoid75.segments[139] = HAnimSegment1321;

HAnimSegment HAnimSegment1322 = createNode("HAnimSegment");
HAnimSegment1322.USE = "Joe_l_carpal_middle_phalanx_5";
HAnimHumanoid75.segments[140] = HAnimSegment1322;

HAnimSegment HAnimSegment1323 = createNode("HAnimSegment");
HAnimSegment1323.USE = "Joe_r_carpal_middle_phalanx_5";
HAnimHumanoid75.segments[141] = HAnimSegment1323;

HAnimSegment HAnimSegment1324 = createNode("HAnimSegment");
HAnimSegment1324.USE = "Joe_l_carpal_proximal_phalanx_1";
HAnimHumanoid75.segments[142] = HAnimSegment1324;

HAnimSegment HAnimSegment1325 = createNode("HAnimSegment");
HAnimSegment1325.USE = "Joe_r_carpal_proximal_phalanx_1";
HAnimHumanoid75.segments[143] = HAnimSegment1325;

HAnimSegment HAnimSegment1326 = createNode("HAnimSegment");
HAnimSegment1326.USE = "Joe_l_carpal_proximal_phalanx_2";
HAnimHumanoid75.segments[144] = HAnimSegment1326;

HAnimSegment HAnimSegment1327 = createNode("HAnimSegment");
HAnimSegment1327.USE = "Joe_r_carpal_proximal_phalanx_2";
HAnimHumanoid75.segments[145] = HAnimSegment1327;

HAnimSegment HAnimSegment1328 = createNode("HAnimSegment");
HAnimSegment1328.USE = "Joe_l_carpal_proximal_phalanx_3";
HAnimHumanoid75.segments[146] = HAnimSegment1328;

HAnimSegment HAnimSegment1329 = createNode("HAnimSegment");
HAnimSegment1329.USE = "Joe_r_carpal_proximal_phalanx_3";
HAnimHumanoid75.segments[147] = HAnimSegment1329;

HAnimSegment HAnimSegment1330 = createNode("HAnimSegment");
HAnimSegment1330.USE = "Joe_l_carpal_proximal_phalanx_4";
HAnimHumanoid75.segments[148] = HAnimSegment1330;

HAnimSegment HAnimSegment1331 = createNode("HAnimSegment");
HAnimSegment1331.USE = "Joe_r_carpal_proximal_phalanx_4";
HAnimHumanoid75.segments[149] = HAnimSegment1331;

HAnimSegment HAnimSegment1332 = createNode("HAnimSegment");
HAnimSegment1332.USE = "Joe_l_carpal_proximal_phalanx_5";
HAnimHumanoid75.segments[150] = HAnimSegment1332;

HAnimSegment HAnimSegment1333 = createNode("HAnimSegment");
HAnimSegment1333.USE = "Joe_r_carpal_proximal_phalanx_5";
HAnimHumanoid75.segments[151] = HAnimSegment1333;

HAnimSegment HAnimSegment1334 = createNode("HAnimSegment");
HAnimSegment1334.USE = "Joe_l_clavicle";
HAnimHumanoid75.segments[152] = HAnimSegment1334;

HAnimSegment HAnimSegment1335 = createNode("HAnimSegment");
HAnimSegment1335.USE = "Joe_r_clavicle";
HAnimHumanoid75.segments[153] = HAnimSegment1335;

HAnimSegment HAnimSegment1336 = createNode("HAnimSegment");
HAnimSegment1336.USE = "Joe_l_eyeball";
HAnimHumanoid75.segments[154] = HAnimSegment1336;

HAnimSegment HAnimSegment1337 = createNode("HAnimSegment");
HAnimSegment1337.USE = "Joe_r_eyeball";
HAnimHumanoid75.segments[155] = HAnimSegment1337;

HAnimSegment HAnimSegment1338 = createNode("HAnimSegment");
HAnimSegment1338.USE = "Joe_l_forearm";
HAnimHumanoid75.segments[156] = HAnimSegment1338;

HAnimSegment HAnimSegment1339 = createNode("HAnimSegment");
HAnimSegment1339.USE = "Joe_r_forearm";
HAnimHumanoid75.segments[157] = HAnimSegment1339;

HAnimSegment HAnimSegment1340 = createNode("HAnimSegment");
HAnimSegment1340.USE = "Joe_l_metacarpal_1";
HAnimHumanoid75.segments[158] = HAnimSegment1340;

HAnimSegment HAnimSegment1341 = createNode("HAnimSegment");
HAnimSegment1341.USE = "Joe_r_metacarpal_1";
HAnimHumanoid75.segments[159] = HAnimSegment1341;

HAnimSegment HAnimSegment1342 = createNode("HAnimSegment");
HAnimSegment1342.USE = "Joe_l_metacarpal_2";
HAnimHumanoid75.segments[160] = HAnimSegment1342;

HAnimSegment HAnimSegment1343 = createNode("HAnimSegment");
HAnimSegment1343.USE = "Joe_r_metacarpal_2";
HAnimHumanoid75.segments[161] = HAnimSegment1343;

HAnimSegment HAnimSegment1344 = createNode("HAnimSegment");
HAnimSegment1344.USE = "Joe_l_metacarpal_3";
HAnimHumanoid75.segments[162] = HAnimSegment1344;

HAnimSegment HAnimSegment1345 = createNode("HAnimSegment");
HAnimSegment1345.USE = "Joe_r_metacarpal_3";
HAnimHumanoid75.segments[163] = HAnimSegment1345;

HAnimSegment HAnimSegment1346 = createNode("HAnimSegment");
HAnimSegment1346.USE = "Joe_l_metacarpal_4";
HAnimHumanoid75.segments[164] = HAnimSegment1346;

HAnimSegment HAnimSegment1347 = createNode("HAnimSegment");
HAnimSegment1347.USE = "Joe_r_metacarpal_4";
HAnimHumanoid75.segments[165] = HAnimSegment1347;

HAnimSegment HAnimSegment1348 = createNode("HAnimSegment");
HAnimSegment1348.USE = "Joe_l_metacarpal_5";
HAnimHumanoid75.segments[166] = HAnimSegment1348;

HAnimSegment HAnimSegment1349 = createNode("HAnimSegment");
HAnimSegment1349.USE = "Joe_r_metacarpal_5";
HAnimHumanoid75.segments[167] = HAnimSegment1349;

HAnimSegment HAnimSegment1350 = createNode("HAnimSegment");
HAnimSegment1350.USE = "Joe_l_metatarsal_2";
HAnimHumanoid75.segments[168] = HAnimSegment1350;

HAnimSegment HAnimSegment1351 = createNode("HAnimSegment");
HAnimSegment1351.USE = "Joe_r_metatarsal_2";
HAnimHumanoid75.segments[169] = HAnimSegment1351;

HAnimSegment HAnimSegment1352 = createNode("HAnimSegment");
HAnimSegment1352.USE = "Joe_l_scapula";
HAnimHumanoid75.segments[170] = HAnimSegment1352;

HAnimSegment HAnimSegment1353 = createNode("HAnimSegment");
HAnimSegment1353.USE = "Joe_r_scapula";
HAnimHumanoid75.segments[171] = HAnimSegment1353;

HAnimSegment HAnimSegment1354 = createNode("HAnimSegment");
HAnimSegment1354.USE = "Joe_l_talus";
HAnimHumanoid75.segments[172] = HAnimSegment1354;

HAnimSegment HAnimSegment1355 = createNode("HAnimSegment");
HAnimSegment1355.USE = "Joe_r_talus";
HAnimHumanoid75.segments[173] = HAnimSegment1355;

HAnimSegment HAnimSegment1356 = createNode("HAnimSegment");
HAnimSegment1356.USE = "Joe_l_tarsal_distal_phalanx_2";
HAnimHumanoid75.segments[174] = HAnimSegment1356;

HAnimSegment HAnimSegment1357 = createNode("HAnimSegment");
HAnimSegment1357.USE = "Joe_r_tarsal_distal_phalanx_2";
HAnimHumanoid75.segments[175] = HAnimSegment1357;

HAnimSegment HAnimSegment1358 = createNode("HAnimSegment");
HAnimSegment1358.USE = "Joe_l_tarsal_proximal_phalanx_2";
HAnimHumanoid75.segments[176] = HAnimSegment1358;

HAnimSegment HAnimSegment1359 = createNode("HAnimSegment");
HAnimSegment1359.USE = "Joe_r_tarsal_proximal_phalanx_2";
HAnimHumanoid75.segments[177] = HAnimSegment1359;

HAnimSegment HAnimSegment1360 = createNode("HAnimSegment");
HAnimSegment1360.USE = "Joe_l_thigh";
HAnimHumanoid75.segments[178] = HAnimSegment1360;

HAnimSegment HAnimSegment1361 = createNode("HAnimSegment");
HAnimSegment1361.USE = "Joe_r_thigh";
HAnimHumanoid75.segments[179] = HAnimSegment1361;

HAnimSegment HAnimSegment1362 = createNode("HAnimSegment");
HAnimSegment1362.USE = "Joe_l_upperarm";
HAnimHumanoid75.segments[180] = HAnimSegment1362;

HAnimSegment HAnimSegment1363 = createNode("HAnimSegment");
HAnimSegment1363.USE = "Joe_r_upperarm";
HAnimHumanoid75.segments[181] = HAnimSegment1363;

HAnimSite HAnimSite1364 = createNode("HAnimSite");
HAnimSite1364.USE = "Joe_cervicale_pt";
HAnimHumanoid75.viewpoints[182] = HAnimSite1364;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.USE = "Joe_crotch_pt";
HAnimHumanoid75.viewpoints[183] = HAnimSite1365;

HAnimSite HAnimSite1366 = createNode("HAnimSite");
HAnimSite1366.USE = "Joe_floormarker_pt";
HAnimHumanoid75.viewpoints[184] = HAnimSite1366;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.USE = "Joe_navel_pt";
HAnimHumanoid75.viewpoints[185] = HAnimSite1367;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.USE = "Joe_nuchale_pt";
HAnimHumanoid75.viewpoints[186] = HAnimSite1368;

HAnimSite HAnimSite1369 = createNode("HAnimSite");
HAnimSite1369.USE = "Joe_rib10_midspine_pt";
HAnimHumanoid75.viewpoints[187] = HAnimSite1369;

HAnimSite HAnimSite1370 = createNode("HAnimSite");
HAnimSite1370.USE = "Joe_sellion_pt";
HAnimHumanoid75.viewpoints[188] = HAnimSite1370;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.USE = "Joe_skull_vertex_tip";
HAnimHumanoid75.viewpoints[189] = HAnimSite1371;

HAnimSite HAnimSite1372 = createNode("HAnimSite");
HAnimSite1372.USE = "Joe_substernale_pt";
HAnimHumanoid75.viewpoints[190] = HAnimSite1372;

HAnimSite HAnimSite1373 = createNode("HAnimSite");
HAnimSite1373.USE = "Joe_supramenton_pt";
HAnimHumanoid75.viewpoints[191] = HAnimSite1373;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.USE = "Joe_suprasternale_pt";
HAnimHumanoid75.viewpoints[192] = HAnimSite1374;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.USE = "Joe_waist_preferred_posterior_pt";
HAnimHumanoid75.viewpoints[193] = HAnimSite1375;

HAnimSite HAnimSite1376 = createNode("HAnimSite");
HAnimSite1376.USE = "Joe_l_acromion_pt";
HAnimHumanoid75.viewpoints[194] = HAnimSite1376;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.USE = "Joe_r_acromion_pt";
HAnimHumanoid75.viewpoints[195] = HAnimSite1377;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.USE = "Joe_l_asis_pt";
HAnimHumanoid75.viewpoints[196] = HAnimSite1378;

HAnimSite HAnimSite1379 = createNode("HAnimSite");
HAnimSite1379.USE = "Joe_r_asis_pt";
HAnimHumanoid75.viewpoints[197] = HAnimSite1379;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.USE = "Joe_l_axilla_distal_pt";
HAnimHumanoid75.viewpoints[198] = HAnimSite1380;

HAnimSite HAnimSite1381 = createNode("HAnimSite");
HAnimSite1381.USE = "Joe_r_axilla_distal_pt";
HAnimHumanoid75.viewpoints[199] = HAnimSite1381;

HAnimSite HAnimSite1382 = createNode("HAnimSite");
HAnimSite1382.USE = "Joe_l_axilla_proximal_pt";
HAnimHumanoid75.viewpoints[200] = HAnimSite1382;

HAnimSite HAnimSite1383 = createNode("HAnimSite");
HAnimSite1383.USE = "Joe_r_axilla_proximal_pt";
HAnimHumanoid75.viewpoints[201] = HAnimSite1383;

HAnimSite HAnimSite1384 = createNode("HAnimSite");
HAnimSite1384.USE = "Joe_l_calcaneus_posterior_pt";
HAnimHumanoid75.viewpoints[202] = HAnimSite1384;

HAnimSite HAnimSite1385 = createNode("HAnimSite");
HAnimSite1385.USE = "Joe_r_calcaneus_posterior_pt";
HAnimHumanoid75.viewpoints[203] = HAnimSite1385;

HAnimSite HAnimSite1386 = createNode("HAnimSite");
HAnimSite1386.USE = "Joe_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid75.viewpoints[204] = HAnimSite1386;

HAnimSite HAnimSite1387 = createNode("HAnimSite");
HAnimSite1387.USE = "Joe_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid75.viewpoints[205] = HAnimSite1387;

HAnimSite HAnimSite1388 = createNode("HAnimSite");
HAnimSite1388.USE = "Joe_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid75.viewpoints[206] = HAnimSite1388;

HAnimSite HAnimSite1389 = createNode("HAnimSite");
HAnimSite1389.USE = "Joe_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid75.viewpoints[207] = HAnimSite1389;

HAnimSite HAnimSite1390 = createNode("HAnimSite");
HAnimSite1390.USE = "Joe_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid75.viewpoints[208] = HAnimSite1390;

HAnimSite HAnimSite1391 = createNode("HAnimSite");
HAnimSite1391.USE = "Joe_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid75.viewpoints[209] = HAnimSite1391;

HAnimSite HAnimSite1392 = createNode("HAnimSite");
HAnimSite1392.USE = "Joe_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid75.viewpoints[210] = HAnimSite1392;

HAnimSite HAnimSite1393 = createNode("HAnimSite");
HAnimSite1393.USE = "Joe_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid75.viewpoints[211] = HAnimSite1393;

HAnimSite HAnimSite1394 = createNode("HAnimSite");
HAnimSite1394.USE = "Joe_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid75.viewpoints[212] = HAnimSite1394;

HAnimSite HAnimSite1395 = createNode("HAnimSite");
HAnimSite1395.USE = "Joe_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid75.viewpoints[213] = HAnimSite1395;

HAnimSite HAnimSite1396 = createNode("HAnimSite");
HAnimSite1396.USE = "Joe_l_clavicle_pt";
HAnimHumanoid75.viewpoints[214] = HAnimSite1396;

HAnimSite HAnimSite1397 = createNode("HAnimSite");
HAnimSite1397.USE = "Joe_r_clavicle_pt";
HAnimHumanoid75.viewpoints[215] = HAnimSite1397;

HAnimSite HAnimSite1398 = createNode("HAnimSite");
HAnimSite1398.USE = "Joe_l_dactylion_pt";
HAnimHumanoid75.viewpoints[216] = HAnimSite1398;

HAnimSite HAnimSite1399 = createNode("HAnimSite");
HAnimSite1399.USE = "Joe_r_dactylion_pt";
HAnimHumanoid75.viewpoints[217] = HAnimSite1399;

HAnimSite HAnimSite1400 = createNode("HAnimSite");
HAnimSite1400.USE = "Joe_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid75.viewpoints[218] = HAnimSite1400;

HAnimSite HAnimSite1401 = createNode("HAnimSite");
HAnimSite1401.USE = "Joe_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid75.viewpoints[219] = HAnimSite1401;

HAnimSite HAnimSite1402 = createNode("HAnimSite");
HAnimSite1402.USE = "Joe_l_femoral_medial_epicondyle_pt";
HAnimHumanoid75.viewpoints[220] = HAnimSite1402;

HAnimSite HAnimSite1403 = createNode("HAnimSite");
HAnimSite1403.USE = "Joe_r_femoral_medial_epicondyle_pt";
HAnimHumanoid75.viewpoints[221] = HAnimSite1403;

HAnimSite HAnimSite1404 = createNode("HAnimSite");
HAnimSite1404.USE = "Joe_l_gonion_pt";
HAnimHumanoid75.viewpoints[222] = HAnimSite1404;

HAnimSite HAnimSite1405 = createNode("HAnimSite");
HAnimSite1405.USE = "Joe_r_gonion_pt";
HAnimHumanoid75.viewpoints[223] = HAnimSite1405;

HAnimSite HAnimSite1406 = createNode("HAnimSite");
HAnimSite1406.USE = "Joe_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid75.viewpoints[224] = HAnimSite1406;

HAnimSite HAnimSite1407 = createNode("HAnimSite");
HAnimSite1407.USE = "Joe_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid75.viewpoints[225] = HAnimSite1407;

HAnimSite HAnimSite1408 = createNode("HAnimSite");
HAnimSite1408.USE = "Joe_l_humeral_medial_epicondyle_pt";
HAnimHumanoid75.viewpoints[226] = HAnimSite1408;

HAnimSite HAnimSite1409 = createNode("HAnimSite");
HAnimSite1409.USE = "Joe_r_humeral_medial_epicondyle_pt";
HAnimHumanoid75.viewpoints[227] = HAnimSite1409;

HAnimSite HAnimSite1410 = createNode("HAnimSite");
HAnimSite1410.USE = "Joe_l_iliocristale_pt";
HAnimHumanoid75.viewpoints[228] = HAnimSite1410;

HAnimSite HAnimSite1411 = createNode("HAnimSite");
HAnimSite1411.USE = "Joe_r_iliocristale_pt";
HAnimHumanoid75.viewpoints[229] = HAnimSite1411;

HAnimSite HAnimSite1412 = createNode("HAnimSite");
HAnimSite1412.USE = "Joe_l_infraorbitale_pt";
HAnimHumanoid75.viewpoints[230] = HAnimSite1412;

HAnimSite HAnimSite1413 = createNode("HAnimSite");
HAnimSite1413.USE = "Joe_r_infraorbitale_pt";
HAnimHumanoid75.viewpoints[231] = HAnimSite1413;

HAnimSite HAnimSite1414 = createNode("HAnimSite");
HAnimSite1414.USE = "Joe_l_knee_crease_pt";
HAnimHumanoid75.viewpoints[232] = HAnimSite1414;

HAnimSite HAnimSite1415 = createNode("HAnimSite");
HAnimSite1415.USE = "Joe_r_knee_crease_pt";
HAnimHumanoid75.viewpoints[233] = HAnimSite1415;

HAnimSite HAnimSite1416 = createNode("HAnimSite");
HAnimSite1416.USE = "Joe_l_lateral_malleolus_pt";
HAnimHumanoid75.viewpoints[234] = HAnimSite1416;

HAnimSite HAnimSite1417 = createNode("HAnimSite");
HAnimSite1417.USE = "Joe_r_lateral_malleolus_pt";
HAnimHumanoid75.viewpoints[235] = HAnimSite1417;

HAnimSite HAnimSite1418 = createNode("HAnimSite");
HAnimSite1418.USE = "Joe_l_medial_malleolus_pt";
HAnimHumanoid75.viewpoints[236] = HAnimSite1418;

HAnimSite HAnimSite1419 = createNode("HAnimSite");
HAnimSite1419.USE = "Joe_r_medial_malleolus_pt";
HAnimHumanoid75.viewpoints[237] = HAnimSite1419;

HAnimSite HAnimSite1420 = createNode("HAnimSite");
HAnimSite1420.USE = "Joe_l_metacarpal_phalanx_2_pt";
HAnimHumanoid75.viewpoints[238] = HAnimSite1420;

HAnimSite HAnimSite1421 = createNode("HAnimSite");
HAnimSite1421.USE = "Joe_r_metacarpal_phalanx_2_pt";
HAnimHumanoid75.viewpoints[239] = HAnimSite1421;

HAnimSite HAnimSite1422 = createNode("HAnimSite");
HAnimSite1422.USE = "Joe_l_metacarpal_phalanx_5_pt";
HAnimHumanoid75.viewpoints[240] = HAnimSite1422;

HAnimSite HAnimSite1423 = createNode("HAnimSite");
HAnimSite1423.USE = "Joe_r_metacarpal_phalanx_5_pt";
HAnimHumanoid75.viewpoints[241] = HAnimSite1423;

HAnimSite HAnimSite1424 = createNode("HAnimSite");
HAnimSite1424.USE = "Joe_l_metatarsal_phalanx_1_pt";
HAnimHumanoid75.viewpoints[242] = HAnimSite1424;

HAnimSite HAnimSite1425 = createNode("HAnimSite");
HAnimSite1425.USE = "Joe_r_metatarsal_phalanx_1_pt";
HAnimHumanoid75.viewpoints[243] = HAnimSite1425;

HAnimSite HAnimSite1426 = createNode("HAnimSite");
HAnimSite1426.USE = "Joe_l_metatarsal_phalanx_5_pt";
HAnimHumanoid75.viewpoints[244] = HAnimSite1426;

HAnimSite HAnimSite1427 = createNode("HAnimSite");
HAnimSite1427.USE = "Joe_r_metatarsal_phalanx_5_pt";
HAnimHumanoid75.viewpoints[245] = HAnimSite1427;

HAnimSite HAnimSite1428 = createNode("HAnimSite");
HAnimSite1428.USE = "Joe_l_neck_base_pt";
HAnimHumanoid75.viewpoints[246] = HAnimSite1428;

HAnimSite HAnimSite1429 = createNode("HAnimSite");
HAnimSite1429.USE = "Joe_r_neck_base_pt";
HAnimHumanoid75.viewpoints[247] = HAnimSite1429;

HAnimSite HAnimSite1430 = createNode("HAnimSite");
HAnimSite1430.USE = "Joe_l_olecranon_pt";
HAnimHumanoid75.viewpoints[248] = HAnimSite1430;

HAnimSite HAnimSite1431 = createNode("HAnimSite");
HAnimSite1431.USE = "Joe_r_olecranon_pt";
HAnimHumanoid75.viewpoints[249] = HAnimSite1431;

HAnimSite HAnimSite1432 = createNode("HAnimSite");
HAnimSite1432.USE = "Joe_l_psis_pt";
HAnimHumanoid75.viewpoints[250] = HAnimSite1432;

HAnimSite HAnimSite1433 = createNode("HAnimSite");
HAnimSite1433.USE = "Joe_r_psis_pt";
HAnimHumanoid75.viewpoints[251] = HAnimSite1433;

HAnimSite HAnimSite1434 = createNode("HAnimSite");
HAnimSite1434.USE = "Joe_l_radial_styloid_pt";
HAnimHumanoid75.viewpoints[252] = HAnimSite1434;

HAnimSite HAnimSite1435 = createNode("HAnimSite");
HAnimSite1435.USE = "Joe_r_radial_styloid_pt";
HAnimHumanoid75.viewpoints[253] = HAnimSite1435;

HAnimSite HAnimSite1436 = createNode("HAnimSite");
HAnimSite1436.USE = "Joe_l_radiale_pt";
HAnimHumanoid75.viewpoints[254] = HAnimSite1436;

HAnimSite HAnimSite1437 = createNode("HAnimSite");
HAnimSite1437.USE = "Joe_r_radiale_pt";
HAnimHumanoid75.viewpoints[255] = HAnimSite1437;

HAnimSite HAnimSite1438 = createNode("HAnimSite");
HAnimSite1438.USE = "Joe_l_rib10_pt";
HAnimHumanoid75.viewpoints[256] = HAnimSite1438;

HAnimSite HAnimSite1439 = createNode("HAnimSite");
HAnimSite1439.USE = "Joe_r_rib10_pt";
HAnimHumanoid75.viewpoints[257] = HAnimSite1439;

HAnimSite HAnimSite1440 = createNode("HAnimSite");
HAnimSite1440.USE = "Joe_l_sphyrion_pt";
HAnimHumanoid75.viewpoints[258] = HAnimSite1440;

HAnimSite HAnimSite1441 = createNode("HAnimSite");
HAnimSite1441.USE = "Joe_r_sphyrion_pt";
HAnimHumanoid75.viewpoints[259] = HAnimSite1441;

HAnimSite HAnimSite1442 = createNode("HAnimSite");
HAnimSite1442.USE = "Joe_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid75.viewpoints[260] = HAnimSite1442;

HAnimSite HAnimSite1443 = createNode("HAnimSite");
HAnimSite1443.USE = "Joe_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid75.viewpoints[261] = HAnimSite1443;

HAnimSite HAnimSite1444 = createNode("HAnimSite");
HAnimSite1444.USE = "Joe_l_thelion_pt";
HAnimHumanoid75.viewpoints[262] = HAnimSite1444;

HAnimSite HAnimSite1445 = createNode("HAnimSite");
HAnimSite1445.USE = "Joe_r_thelion_pt";
HAnimHumanoid75.viewpoints[263] = HAnimSite1445;

HAnimSite HAnimSite1446 = createNode("HAnimSite");
HAnimSite1446.USE = "Joe_l_tragion_pt";
HAnimHumanoid75.viewpoints[264] = HAnimSite1446;

HAnimSite HAnimSite1447 = createNode("HAnimSite");
HAnimSite1447.USE = "Joe_r_tragion_pt";
HAnimHumanoid75.viewpoints[265] = HAnimSite1447;

HAnimSite HAnimSite1448 = createNode("HAnimSite");
HAnimSite1448.USE = "Joe_l_trochanterion_pt";
HAnimHumanoid75.viewpoints[266] = HAnimSite1448;

HAnimSite HAnimSite1449 = createNode("HAnimSite");
HAnimSite1449.USE = "Joe_r_trochanterion_pt";
HAnimHumanoid75.viewpoints[267] = HAnimSite1449;

HAnimSite HAnimSite1450 = createNode("HAnimSite");
HAnimSite1450.USE = "Joe_l_ulnar_styloid_pt";
HAnimHumanoid75.viewpoints[268] = HAnimSite1450;

HAnimSite HAnimSite1451 = createNode("HAnimSite");
HAnimSite1451.USE = "Joe_r_ulnar_styloid_pt";
HAnimHumanoid75.viewpoints[269] = HAnimSite1451;

Group74.children = new MFNode();

Group74.children[0] = HAnimHumanoid75;

Group73.children = new MFNode();

Group73.children[0] = Group74;

children[5] = Group73;

//expected best practice: EXPORT AS='fileName' for clarity
EXPORT EXPORT1452 = createNode("EXPORT");
EXPORT1452.AS = "JoeSkeletonSkinSite";
EXPORT1452.localDEF = "Joe_Human";
children[6] = EXPORT1452;

}
