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
meta3.content = "JoeSkeletonSkinSaluteSiteWalk.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Comprehensive example showing skeleton, skin, sites and interpolator animation together.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "9 January 2004";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translated";
meta7.content = "4 December 2022";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Tue, 09 Sep 2025 19:38:38 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "warning";
meta9.content = "Under development, numerous errors and warnings";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "TODO";
meta11.content = "Provide feedback to tovrmlx3d converter";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "TODO";
meta12.content = "HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics.";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "TODO";
meta13.content = "ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "JoeSkeletonSkinSaluteSiteWalk.original.x3dv";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "https://castle-engine.io/view3dscene.php#section_converting";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "JoeSkeletonSkinSiteSaluteWalk_view3dscene.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "JoeSkeletonSkinSiteSaluteWalk_X_ITE.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "JoeSkeletonSkinSiteSaluteWalk_X3DOM.png";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Image";
meta23.content = "JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "JoeSkeletonSkinSiteSaluteWalk_freeWrl.png";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Image";
meta25.content = "JoeSkeletonSkinSiteSaluteWalk_Octaga.png";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "Image";
meta26.content = "JoeSkeletonSkinSiteSaluteWalk_vivaty.png";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "drawing";
meta27.content = "JoeSkeletonSkinSiteSaluteWalk_composite.vsdx";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "generator";
meta28.content = "tovrmlx3d, https://castle-engine.io/convert.php";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "generator";
meta29.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "generator";
meta30.content = "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "translator";
meta31.content = "Michalis Kamburelis";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "translator";
meta32.content = "Don Brutzman";
head1.meta[30] = meta32;

head = head1;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.title = "HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3";
WorldInfo34.info = new MFString(new java.lang.String["By Joe for Joe"]);
children = new MFNode();

children[0] = WorldInfo34;

WorldInfo WorldInfo35 = createNode("WorldInfo");
WorldInfo35.title = "HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3";
WorldInfo35.info = new MFString(new java.lang.String["By Joe for Joe"]);
children[1] = WorldInfo35;

NavigationInfo NavigationInfo36 = createNode("NavigationInfo");
NavigationInfo36.DEF = "HeadlightOnRevealsSkinTextureAndColors";
children[2] = NavigationInfo36;

Background Background37 = createNode("Background");
Background37.skyColor = new MFColor(new float[0,0,0.1]);
Background37.groundAngle = new MFFloat(new float[1.57]);
Background37.groundColor = new MFColor(new float[0,0.1,0,0,0.1,0]);
children[3] = Background37;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "cordsysfloor";
Transform38.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline39 = createNode("Inline");
Inline39.DEF = "CoordinateAxes";
Inline39.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform38.children = new MFNode();

Transform38.children[0] = Inline39;

children[4] = Transform38;

Group Group40 = createNode("Group");
Group40.DEF = "ViewpointGroup";
Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "Front Up View";
Viewpoint41.position = new SFVec3f(new float[-1,2,2.5]);
Viewpoint41.orientation = new SFRotation(new float[-1,-1,0,0.55]);
Group40.children = new MFNode();

Group40.children[0] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "From Left View";
Viewpoint42.position = new SFVec3f(new float[-2.5,1.5,0]);
Viewpoint42.orientation = new SFRotation(new float[0.3,1,0,-1.57]);
Group40.children[1] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.description = "Front Mid View";
Viewpoint43.position = new SFVec3f(new float[0,0.5,1.25]);
Group40.children[2] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "Front Feet View";
Viewpoint44.position = new SFVec3f(new float[0,0,0.75]);
Group40.children[3] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.description = "From Right View";
Viewpoint45.position = new SFVec3f(new float[1,1,0]);
Viewpoint45.orientation = new SFRotation(new float[0,1,0,1.57]);
Group40.children[4] = Viewpoint45;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.description = "Front Head View";
Viewpoint46.position = new SFVec3f(new float[0,1.65,0.75]);
Viewpoint46.centerOfRotation = new SFVec3f(new float[0,1.65,0]);
Group40.children[5] = Viewpoint46;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.description = "Front Mid View";
Viewpoint47.position = new SFVec3f(new float[0,1,1.75]);
Group40.children[6] = Viewpoint47;

Viewpoint Viewpoint48 = createNode("Viewpoint");
Viewpoint48.description = "Rear View";
Viewpoint48.position = new SFVec3f(new float[0,1.5,-4]);
Viewpoint48.orientation = new SFRotation(new float[0,1,0,3.14]);
Group40.children[7] = Viewpoint48;

Viewpoint Viewpoint49 = createNode("Viewpoint");
Viewpoint49.description = "Top View";
Viewpoint49.position = new SFVec3f(new float[0,4,0]);
Viewpoint49.orientation = new SFRotation(new float[1,0,0,-1.57]);
Group40.children[8] = Viewpoint49;

Viewpoint Viewpoint50 = createNode("Viewpoint");
Viewpoint50.description = "Bottom View";
Viewpoint50.position = new SFVec3f(new float[0,-4,0]);
Viewpoint50.orientation = new SFRotation(new float[1,0,0,1.57]);
Group40.children[9] = Viewpoint50;

Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.description = "Right View";
Viewpoint51.position = new SFVec3f(new float[4,1.5,0]);
Viewpoint51.orientation = new SFRotation(new float[0,1,0,1.57]);
Group40.children[10] = Viewpoint51;

children[5] = Group40;

Group Group52 = createNode("Group");
Group52.DEF = "VisualizationShapes";
Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[0,2.1,0]);
Transform53.scale = new SFVec3f(new float[5,5,5]);
Shape Shape54 = createNode("Shape");
Shape54.DEF = "jointbox";
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.ambientIntensity = 0.5;
Material56.diffuseColor = new SFColor(new float[0,0,0]);
Material56.shininess = 1;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

IndexedFaceSet IndexedFaceSet57 = createNode("IndexedFaceSet");
IndexedFaceSet57.creaseAngle = 0.1;
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Color Color58 = createNode("Color");
Color58.color = new MFColor(new float[1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
IndexedFaceSet57.color = Color58;

Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.DEF = "boxCoords";
Coordinate59.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet57.coord = Coordinate59;

Shape54.geometry = IndexedFaceSet57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Group52.children = new MFNode();

Group52.children[0] = Transform53;

Transform Transform60 = createNode("Transform");
Transform60.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Transform60.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape61 = createNode("Shape");
Shape61.DEF = "sitebox";
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.ambientIntensity = 1;
Material63.diffuseColor = new SFColor(new float[1,0,0]);
Material63.specularColor = new SFColor(new float[1,0,0]);
Material63.emissiveColor = new SFColor(new float[1,0,0]);
Material63.shininess = 0.7;
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

IndexedFaceSet IndexedFaceSet64 = createNode("IndexedFaceSet");
IndexedFaceSet64.creaseAngle = 0.1;
IndexedFaceSet64.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.USE = "boxCoords";
IndexedFaceSet64.coord = Coordinate65;

Shape61.geometry = IndexedFaceSet64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Group52.children[1] = Transform60;

Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[0,0.2,0]);
Transform66.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape67 = createNode("Shape");
Appearance Appearance68 = createNode("Appearance");
Appearance68.DEF = "SegmentLine";
Material Material69 = createNode("Material");
Material69.diffuseColor = new SFColor(new float[0,1,0]);
Material69.specularColor = new SFColor(new float[0,1,0]);
Material69.emissiveColor = new SFColor(new float[0,1,0]);
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

IndexedLineSet IndexedLineSet70 = createNode("IndexedLineSet");
IndexedLineSet70.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0,0,0,0.0001,0]);
IndexedLineSet70.coord = Coordinate71;

Shape67.geometry = IndexedLineSet70;

Transform66.child = new undefined();

Transform66.child[0] = Shape67;

Group52.children[2] = Transform66;

Transform Transform72 = createNode("Transform");
Transform72.translation = new SFVec3f(new float[-0.2,0.773,-0.016]);
Transform72.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape73 = createNode("Shape");
Shape73.DEF = "skinsphere";
Appearance Appearance74 = createNode("Appearance");
Material Material75 = createNode("Material");
Material75.ambientIntensity = 0.5;
Material75.diffuseColor = new SFColor(new float[0,1,0]);
Material75.specularColor = new SFColor(new float[0,1,0]);
Material75.emissiveColor = new SFColor(new float[0,1,0]);
Material75.shininess = 1;
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

Sphere Sphere76 = createNode("Sphere");
Sphere76.radius = 0.005;
Shape73.geometry = Sphere76;

Transform72.child = new undefined();

Transform72.child[0] = Shape73;

Group52.children[3] = Transform72;

children[6] = Group52;

Group Group77 = createNode("Group");
Group77.DEF = "SpecHumanoid";
Group Group78 = createNode("Group");
Group78.DEF = "JoeISOHumanoid";
HAnimHumanoid HAnimHumanoid79 = createNode("HAnimHumanoid");
HAnimHumanoid79.DEF = "Joe_Human";
HAnimHumanoid79.name = "Human";
HAnimHumanoid79.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.DEF = "Joe_HumanoidRoot";
HAnimJoint80.name = "humanoid_root";
HAnimJoint80.translation = new SFVec3f(new float[0,-0.0293965,0]);
HAnimJoint80.center = new SFVec3f(new float[0,0.875,0]);
HAnimSegment HAnimSegment81 = createNode("HAnimSegment");
HAnimSegment81.DEF = "Joe_sacrum";
HAnimSegment81.name = "sacrum";
Transform Transform82 = createNode("Transform");
Transform82.translation = new SFVec3f(new float[0,0.875,0]);
Shape Shape83 = createNode("Shape");
Shape83.USE = "jointbox";
Transform82.child = new undefined();

Transform82.child[0] = Shape83;

HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = Transform82;

Shape Shape84 = createNode("Shape");
Appearance Appearance85 = createNode("Appearance");
Appearance85.USE = "SegmentLine";
Shape84.appearance = Appearance85;

IndexedLineSet IndexedLineSet86 = createNode("IndexedLineSet");
IndexedLineSet86.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate87 = createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,0.875,0,0,0.92,0]);
IndexedLineSet86.coord = Coordinate87;

Shape84.geometry = IndexedLineSet86;

HAnimSegment81.children[1] = Shape84;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[0,0.92,0.08]);
Shape Shape89 = createNode("Shape");
Shape89.USE = "skinsphere";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSegment81.children[2] = Transform88;

Transform Transform90 = createNode("Transform");
Transform90.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape91 = createNode("Shape");
Shape91.USE = "skinsphere";
Transform90.child = new undefined();

Transform90.child[0] = Shape91;

HAnimSegment81.children[3] = Transform90;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.DEF = "Joe_sacroiliac";
HAnimJoint92.name = "sacroiliac";
HAnimJoint92.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimSegment HAnimSegment93 = createNode("HAnimSegment");
HAnimSegment93.DEF = "Joe_pelvis";
HAnimSegment93.name = "pelvis";
Transform Transform94 = createNode("Transform");
Transform94.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform95 = createNode("Transform");
Shape Shape96 = createNode("Shape");
Shape96.USE = "jointbox";
Transform95.child = new undefined();

Transform95.child[0] = Shape96;

Transform94.children = new MFNode();

Transform94.children[0] = Transform95;

HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = Transform94;

Shape Shape97 = createNode("Shape");
Appearance Appearance98 = createNode("Appearance");
Appearance98.USE = "SegmentLine";
Shape97.appearance = Appearance98;

IndexedLineSet IndexedLineSet99 = createNode("IndexedLineSet");
IndexedLineSet99.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate100 = createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]);
IndexedLineSet99.coord = Coordinate100;

Shape97.geometry = IndexedLineSet99;

HAnimSegment93.children[1] = Shape97;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.DEF = "Joe_l_iliocristale";
HAnimSite101.name = "l_iliocristale";
HAnimSite101.translation = new SFVec3f(new float[0.1425,1.065,0.0033]);
Shape Shape102 = createNode("Shape");
Shape102.USE = "sitebox";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = Shape102;

HAnimSegment93.children[2] = HAnimSite101;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.DEF = "Joe_l_trochanterion";
HAnimSite103.name = "l_trochanterion";
HAnimSite103.translation = new SFVec3f(new float[0.15,0.9,-0.01]);
Shape Shape104 = createNode("Shape");
Shape104.USE = "sitebox";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = Shape104;

HAnimSegment93.children[3] = HAnimSite103;

HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.DEF = "Joe_r_iliocristale";
HAnimSite105.name = "r_iliocristale";
HAnimSite105.translation = new SFVec3f(new float[-0.1425,1.065,0.0033]);
Shape Shape106 = createNode("Shape");
Shape106.USE = "sitebox";
HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = Shape106;

HAnimSegment93.children[4] = HAnimSite105;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.DEF = "Joe_r_trochanterion";
HAnimSite107.name = "r_trochanterion";
HAnimSite107.translation = new SFVec3f(new float[-0.15,0.9,-0.01]);
Shape Shape108 = createNode("Shape");
Shape108.USE = "sitebox";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = Shape108;

HAnimSegment93.children[5] = HAnimSite107;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.DEF = "Joe_l_asis";
HAnimSite109.name = "l_asis";
HAnimSite109.translation = new SFVec3f(new float[0.0935,1.03,0.075]);
Shape Shape110 = createNode("Shape");
Shape110.USE = "sitebox";
HAnimSite109.children = new MFNode();

HAnimSite109.children[0] = Shape110;

HAnimSegment93.children[6] = HAnimSite109;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.DEF = "Joe_r_asis";
HAnimSite111.name = "r_asis";
HAnimSite111.translation = new SFVec3f(new float[-0.0935,1.03,0.075]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "sitebox";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = Shape112;

HAnimSegment93.children[7] = HAnimSite111;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.DEF = "Joe_l_psis";
HAnimSite113.name = "l_psis";
HAnimSite113.translation = new SFVec3f(new float[0.0773,1.019,-0.12]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "sitebox";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = Shape114;

HAnimSegment93.children[8] = HAnimSite113;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.DEF = "Joe_r_psis";
HAnimSite115.name = "r_psis";
HAnimSite115.translation = new SFVec3f(new float[-0.0773,1.019,-0.12]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "sitebox";
HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = Shape116;

HAnimSegment93.children[9] = HAnimSite115;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.DEF = "Joe_floormarker";
HAnimSite117.name = "floormarker";
Transform Transform118 = createNode("Transform");
Transform118.scale = new SFVec3f(new float[3,3,3]);
Shape Shape119 = createNode("Shape");
Shape119.USE = "sitebox";
Transform118.child = new undefined();

Transform118.child[0] = Shape119;

HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = Transform118;

HAnimSegment93.children[10] = HAnimSite117;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.DEF = "Joe_crotch";
HAnimSite120.name = "crotch";
HAnimSite120.translation = new SFVec3f(new float[0,0.87,-0.022]);
Shape Shape121 = createNode("Shape");
Shape121.USE = "sitebox";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = Shape121;

HAnimSegment93.children[11] = HAnimSite120;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "Joe_l_hip";
HAnimJoint122.name = "l_hip";
HAnimJoint122.rotation = new SFRotation(new float[-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996]);
HAnimJoint122.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.DEF = "Joe_l_thigh";
HAnimSegment123.name = "l_thigh";
Transform Transform124 = createNode("Transform");
Transform124.translation = new SFVec3f(new float[0.1,0.92,0]);
Shape Shape125 = createNode("Shape");
Shape125.USE = "jointbox";
Transform124.child = new undefined();

Transform124.child[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

Shape Shape126 = createNode("Shape");
Appearance Appearance127 = createNode("Appearance");
Appearance127.USE = "SegmentLine";
Shape126.appearance = Appearance127;

IndexedLineSet IndexedLineSet128 = createNode("IndexedLineSet");
IndexedLineSet128.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate129 = createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[0.1,0.92,0,0.115,0.466,0]);
IndexedLineSet128.coord = Coordinate129;

Shape126.geometry = IndexedLineSet128;

HAnimSegment123.children[1] = Shape126;

Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[0.1,0.9,0.0775]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "skinsphere";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSegment123.children[2] = Transform130;

Transform Transform132 = createNode("Transform");
Transform132.translation = new SFVec3f(new float[0.079,0.92,-0.14]);
Shape Shape133 = createNode("Shape");
Shape133.USE = "skinsphere";
Transform132.child = new undefined();

Transform132.child[0] = Shape133;

HAnimSegment123.children[3] = Transform132;

Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.171,0.65,0]);
Shape Shape135 = createNode("Shape");
Shape135.USE = "skinsphere";
Transform134.child = new undefined();

Transform134.child[0] = Shape135;

HAnimSegment123.children[4] = Transform134;

Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.02,0.65,0]);
Shape Shape137 = createNode("Shape");
Shape137.USE = "skinsphere";
Transform136.child = new undefined();

Transform136.child[0] = Shape137;

HAnimSegment123.children[5] = Transform136;

Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.1,0.65,-0.08]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "skinsphere";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSegment123.children[6] = Transform138;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[0.1,0.65,0.07]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "skinsphere";
Transform140.child = new undefined();

Transform140.child[0] = Shape141;

HAnimSegment123.children[7] = Transform140;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.DEF = "Joe_l_knee_crease";
HAnimSite142.name = "l_knee_crease";
HAnimSite142.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape143 = createNode("Shape");
Shape143.USE = "sitebox";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = Shape143;

HAnimSegment123.children[8] = HAnimSite142;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.DEF = "Joe_l_femoral_lateral_epicn";
HAnimSite144.name = "l_femoral_lateral_epicn";
HAnimSite144.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "sitebox";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = Shape145;

HAnimSegment123.children[9] = HAnimSite144;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.DEF = "Joe_l_femoral_medial_epicn";
HAnimSite146.name = "l_femoral_medial_epicn";
HAnimSite146.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape147 = createNode("Shape");
Shape147.USE = "sitebox";
HAnimSite146.children = new MFNode();

HAnimSite146.children[0] = Shape147;

HAnimSegment123.children[10] = HAnimSite146;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.DEF = "Joe_l_knee";
HAnimJoint148.name = "l_knee";
HAnimJoint148.rotation = new SFRotation(new float[1.00000000000001,0,0,0.224421281773429]);
HAnimJoint148.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint148.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint148.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.DEF = "Joe_l_calf";
HAnimSegment149.name = "l_calf";
Transform Transform150 = createNode("Transform");
Transform150.translation = new SFVec3f(new float[0.115,0.466,0]);
Shape Shape151 = createNode("Shape");
Shape151.USE = "jointbox";
Transform150.child = new undefined();

Transform150.child[0] = Shape151;

HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = Transform150;

Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
Appearance153.USE = "SegmentLine";
Shape152.appearance = Appearance153;

IndexedLineSet IndexedLineSet154 = createNode("IndexedLineSet");
IndexedLineSet154.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate155 = createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[0.115,0.466,0,0.1,0.069,0]);
IndexedLineSet154.coord = Coordinate155;

Shape152.geometry = IndexedLineSet154;

HAnimSegment149.children[1] = Shape152;

Transform Transform156 = createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.115,0.466,0.06]);
Shape Shape157 = createNode("Shape");
Shape157.USE = "skinsphere";
Transform156.child = new undefined();

Transform156.child[0] = Shape157;

HAnimSegment149.children[2] = Transform156;

Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[0.115,0.466,-0.055]);
Shape Shape159 = createNode("Shape");
Shape159.USE = "skinsphere";
Transform158.child = new undefined();

Transform158.child[0] = Shape159;

HAnimSegment149.children[3] = Transform158;

Transform Transform160 = createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.17,0.466,0]);
Shape Shape161 = createNode("Shape");
Shape161.USE = "skinsphere";
Transform160.child = new undefined();

Transform160.child[0] = Shape161;

HAnimSegment149.children[4] = Transform160;

Transform Transform162 = createNode("Transform");
Transform162.translation = new SFVec3f(new float[0.05,0.466,0]);
Shape Shape163 = createNode("Shape");
Shape163.USE = "skinsphere";
Transform162.child = new undefined();

Transform162.child[0] = Shape163;

HAnimSegment149.children[5] = Transform162;

Transform Transform164 = createNode("Transform");
Transform164.translation = new SFVec3f(new float[0.17,0.3,0]);
Shape Shape165 = createNode("Shape");
Shape165.USE = "skinsphere";
Transform164.child = new undefined();

Transform164.child[0] = Shape165;

HAnimSegment149.children[6] = Transform164;

Transform Transform166 = createNode("Transform");
Transform166.translation = new SFVec3f(new float[0.06,0.3,0]);
Shape Shape167 = createNode("Shape");
Shape167.USE = "skinsphere";
Transform166.child = new undefined();

Transform166.child[0] = Shape167;

HAnimSegment149.children[7] = Transform166;

Transform Transform168 = createNode("Transform");
Transform168.translation = new SFVec3f(new float[0.1,0.3,-0.05]);
Shape Shape169 = createNode("Shape");
Shape169.USE = "skinsphere";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

HAnimSegment149.children[8] = Transform168;

Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.1,0.3,0.05]);
Shape Shape171 = createNode("Shape");
Shape171.USE = "skinsphere";
Transform170.child = new undefined();

Transform170.child[0] = Shape171;

HAnimSegment149.children[9] = Transform170;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.DEF = "Joe_l_lateral_malleolus";
HAnimSite172.name = "l_lateral_malleolus";
HAnimSite172.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape173 = createNode("Shape");
Shape173.USE = "sitebox";
HAnimSite172.children = new MFNode();

HAnimSite172.children[0] = Shape173;

HAnimSegment149.children[10] = HAnimSite172;

HAnimSite HAnimSite174 = createNode("HAnimSite");
HAnimSite174.DEF = "Joe_l_medial_malleolus";
HAnimSite174.name = "l_medial_malleolus";
HAnimSite174.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape175 = createNode("Shape");
Shape175.USE = "sitebox";
HAnimSite174.children = new MFNode();

HAnimSite174.children[0] = Shape175;

HAnimSegment149.children[11] = HAnimSite174;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.DEF = "Joe_l_ankle";
HAnimJoint176.name = "l_ankle";
HAnimJoint176.rotation = new SFRotation(new float[-1.00000000000007,0,0,0.0655639608914055]);
HAnimJoint176.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint176.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint176.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.DEF = "Joe_l_hindfoot";
HAnimSegment177.name = "l_hindfoot";
Transform Transform178 = createNode("Transform");
Transform178.translation = new SFVec3f(new float[0.115,0.069,0]);
Shape Shape179 = createNode("Shape");
Shape179.USE = "jointbox";
Transform178.child = new undefined();

Transform178.child[0] = Shape179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Transform178;

Shape Shape180 = createNode("Shape");
Appearance Appearance181 = createNode("Appearance");
Appearance181.USE = "SegmentLine";
Shape180.appearance = Appearance181;

IndexedLineSet IndexedLineSet182 = createNode("IndexedLineSet");
IndexedLineSet182.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate183 = createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0.1,0.069,0,0.115,0.031,0.03]);
IndexedLineSet182.coord = Coordinate183;

Shape180.geometry = IndexedLineSet182;

HAnimSegment177.children[1] = Shape180;

Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.15,0.07,0]);
Shape Shape185 = createNode("Shape");
Shape185.USE = "skinsphere";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

HAnimSegment177.children[2] = Transform184;

Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[0.085,0.086,0.0125]);
Shape Shape187 = createNode("Shape");
Shape187.USE = "skinsphere";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

HAnimSegment177.children[3] = Transform186;

Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[0.115,0.069,-0.045]);
Shape Shape189 = createNode("Shape");
Shape189.USE = "skinsphere";
Transform188.child = new undefined();

Transform188.child[0] = Shape189;

HAnimSegment177.children[4] = Transform188;

Transform Transform190 = createNode("Transform");
Transform190.translation = new SFVec3f(new float[0.117,0.0975,0.0615]);
Shape Shape191 = createNode("Shape");
Shape191.USE = "skinsphere";
Transform190.child = new undefined();

Transform190.child[0] = Shape191;

HAnimSegment177.children[5] = Transform190;

HAnimSite HAnimSite192 = createNode("HAnimSite");
HAnimSite192.DEF = "Joe_l_sphyrion";
HAnimSite192.name = "l_sphyrion";
HAnimSite192.translation = new SFVec3f(new float[0.09,0.056,0.0125]);
Shape Shape193 = createNode("Shape");
Shape193.USE = "sitebox";
HAnimSite192.children = new MFNode();

HAnimSite192.children[0] = Shape193;

HAnimSegment177.children[6] = HAnimSite192;

HAnimSite HAnimSite194 = createNode("HAnimSite");
HAnimSite194.DEF = "Joe_l_calcaneous_post";
HAnimSite194.name = "l_calcaneous_post";
HAnimSite194.translation = new SFVec3f(new float[0.115,0.04,-0.055]);
Shape Shape195 = createNode("Shape");
Shape195.USE = "sitebox";
HAnimSite194.children = new MFNode();

HAnimSite194.children[0] = Shape195;

HAnimSegment177.children[7] = HAnimSite194;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.DEF = "Joe_l_subtalar";
HAnimJoint196.name = "l_subtalar";
HAnimJoint196.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint196.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint196.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.DEF = "Joe_l_midproximal";
HAnimSegment197.name = "l_midproximal";
Transform Transform198 = createNode("Transform");
Transform198.translation = new SFVec3f(new float[0.115,0.031,0.03]);
Shape Shape199 = createNode("Shape");
Shape199.USE = "jointbox";
Transform198.child = new undefined();

Transform198.child[0] = Shape199;

HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = Transform198;

Shape Shape200 = createNode("Shape");
Appearance Appearance201 = createNode("Appearance");
Appearance201.USE = "SegmentLine";
Shape200.appearance = Appearance201;

IndexedLineSet IndexedLineSet202 = createNode("IndexedLineSet");
IndexedLineSet202.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate203 = createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.115,0.031,0.03,0.115,0.037,0.09]);
IndexedLineSet202.coord = Coordinate203;

Shape200.geometry = IndexedLineSet202;

HAnimSegment197.children[1] = Shape200;

Transform Transform204 = createNode("Transform");
Transform204.translation = new SFVec3f(new float[0.1375,0.006,-0.03]);
Shape Shape205 = createNode("Shape");
Shape205.USE = "skinsphere";
Transform204.child = new undefined();

Transform204.child[0] = Shape205;

HAnimSegment197.children[2] = Transform204;

Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.095,0.006,-0.03]);
Shape Shape207 = createNode("Shape");
Shape207.USE = "skinsphere";
Transform206.child = new undefined();

Transform206.child[0] = Shape207;

HAnimSegment197.children[3] = Transform206;

Transform Transform208 = createNode("Transform");
Transform208.translation = new SFVec3f(new float[0.115,0.015,-0.045]);
Shape Shape209 = createNode("Shape");
Shape209.USE = "skinsphere";
Transform208.child = new undefined();

Transform208.child[0] = Shape209;

HAnimSegment197.children[4] = Transform208;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.DEF = "Joe_l_midtarsal";
HAnimJoint210.name = "l_midtarsal";
HAnimJoint210.rotation = new SFRotation(new float[1.00000000000005,0,0,6.19381467367623]);
HAnimJoint210.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint210.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint210.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment211 = createNode("HAnimSegment");
HAnimSegment211.DEF = "Joe_l_middistal";
HAnimSegment211.name = "l_middistal";
Transform Transform212 = createNode("Transform");
Transform212.translation = new SFVec3f(new float[0.115,0.037,0.09]);
Shape Shape213 = createNode("Shape");
Shape213.USE = "jointbox";
Transform212.child = new undefined();

Transform212.child[0] = Shape213;

HAnimSegment211.children = new MFNode();

HAnimSegment211.children[0] = Transform212;

Shape Shape214 = createNode("Shape");
Appearance Appearance215 = createNode("Appearance");
Appearance215.USE = "SegmentLine";
Shape214.appearance = Appearance215;

IndexedLineSet IndexedLineSet216 = createNode("IndexedLineSet");
IndexedLineSet216.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate217 = createNode("Coordinate");
Coordinate217.point = new MFVec3f(new float[0.115,0.037,0.09,0.115,0.02,0.122]);
IndexedLineSet216.coord = Coordinate217;

Shape214.geometry = IndexedLineSet216;

HAnimSegment211.children[1] = Shape214;

Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.115,0.06,0.1]);
Shape Shape219 = createNode("Shape");
Shape219.USE = "skinsphere";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

HAnimSegment211.children[2] = Transform218;

Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.115,0,0.07]);
Shape Shape221 = createNode("Shape");
Shape221.USE = "skinsphere";
Transform220.child = new undefined();

Transform220.child[0] = Shape221;

HAnimSegment211.children[3] = Transform220;

Transform Transform222 = createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.165,0,0.07]);
Shape Shape223 = createNode("Shape");
Shape223.USE = "skinsphere";
Transform222.child = new undefined();

Transform222.child[0] = Shape223;

HAnimSegment211.children[4] = Transform222;

Transform Transform224 = createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.095,0,0.07]);
Shape Shape225 = createNode("Shape");
Shape225.USE = "skinsphere";
Transform224.child = new undefined();

Transform224.child[0] = Shape225;

HAnimSegment211.children[5] = Transform224;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.DEF = "Joe_l_metatarsal_pha1";
HAnimSite226.name = "l_metatarsal_pha1";
HAnimSite226.translation = new SFVec3f(new float[0.087,0.01,0.122]);
Shape Shape227 = createNode("Shape");
Shape227.USE = "sitebox";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = Shape227;

HAnimSegment211.children[6] = HAnimSite226;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.DEF = "Joe_l_metatarsal";
HAnimJoint228.name = "l_metatarsal";
HAnimJoint228.rotation = new SFRotation(new float[1.00000000000253,0,0,0.0175699446988144]);
HAnimJoint228.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint228.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint228.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment229 = createNode("HAnimSegment");
HAnimSegment229.DEF = "Joe_l_forefoot";
HAnimSegment229.name = "l_forefoot";
Transform Transform230 = createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.115,0.02,0.13]);
Shape Shape231 = createNode("Shape");
Shape231.USE = "jointbox";
Transform230.child = new undefined();

Transform230.child[0] = Shape231;

HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = Transform230;

Shape Shape232 = createNode("Shape");
Appearance Appearance233 = createNode("Appearance");
Appearance233.USE = "SegmentLine";
Shape232.appearance = Appearance233;

IndexedLineSet IndexedLineSet234 = createNode("IndexedLineSet");
IndexedLineSet234.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.115,0.02,0.122,0.132,0.013,0.19]);
IndexedLineSet234.coord = Coordinate235;

Shape232.geometry = IndexedLineSet234;

HAnimSegment229.children[1] = Shape232;

Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[0.115,0.04,0.13]);
Shape Shape237 = createNode("Shape");
Shape237.USE = "skinsphere";
Transform236.child = new undefined();

Transform236.child[0] = Shape237;

HAnimSegment229.children[2] = Transform236;

Transform Transform238 = createNode("Transform");
Transform238.translation = new SFVec3f(new float[0.125,0,0.12]);
Shape Shape239 = createNode("Shape");
Shape239.USE = "skinsphere";
Transform238.child = new undefined();

Transform238.child[0] = Shape239;

HAnimSegment229.children[3] = Transform238;

Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.165,0,0.12]);
Shape Shape241 = createNode("Shape");
Shape241.USE = "skinsphere";
Transform240.child = new undefined();

Transform240.child[0] = Shape241;

HAnimSegment229.children[4] = Transform240;

Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.087,0,0.122]);
Shape Shape243 = createNode("Shape");
Shape243.USE = "skinsphere";
Transform242.child = new undefined();

Transform242.child[0] = Shape243;

HAnimSegment229.children[5] = Transform242;

Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[0.09,0.012,0.188]);
Shape Shape245 = createNode("Shape");
Shape245.USE = "skinsphere";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

HAnimSegment229.children[6] = Transform244;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[0.11,0.011,0.19]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "skinsphere";
Transform246.child = new undefined();

Transform246.child[0] = Shape247;

HAnimSegment229.children[7] = Transform246;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.128,0.011,0.185]);
Shape Shape249 = createNode("Shape");
Shape249.USE = "skinsphere";
Transform248.child = new undefined();

Transform248.child[0] = Shape249;

HAnimSegment229.children[8] = Transform248;

Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.142,0.011,0.178]);
Shape Shape251 = createNode("Shape");
Shape251.USE = "skinsphere";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSegment229.children[9] = Transform250;

Transform Transform252 = createNode("Transform");
Transform252.translation = new SFVec3f(new float[0.154,0.01,0.168]);
Shape Shape253 = createNode("Shape");
Shape253.USE = "skinsphere";
Transform252.child = new undefined();

Transform252.child[0] = Shape253;

HAnimSegment229.children[10] = Transform252;

HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.DEF = "Joe_l_metatarsal_pha5";
HAnimSite254.name = "l_metatarsal_pha5";
HAnimSite254.translation = new SFVec3f(new float[0.165,0.01,0.12]);
Shape Shape255 = createNode("Shape");
Shape255.USE = "sitebox";
HAnimSite254.children = new MFNode();

HAnimSite254.children[0] = Shape255;

HAnimSegment229.children[11] = HAnimSite254;

HAnimSite HAnimSite256 = createNode("HAnimSite");
HAnimSite256.DEF = "Joe_l_digit2";
HAnimSite256.name = "l_digit2";
HAnimSite256.translation = new SFVec3f(new float[0.11,0.011,0.19]);
Shape Shape257 = createNode("Shape");
Shape257.USE = "sitebox";
HAnimSite256.children = new MFNode();

HAnimSite256.children[0] = Shape257;

HAnimSegment229.children[12] = HAnimSite256;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

HAnimJoint210.children[1] = HAnimJoint228;

HAnimJoint196.children[1] = HAnimJoint210;

HAnimJoint176.children[1] = HAnimJoint196;

HAnimJoint148.children[1] = HAnimJoint176;

HAnimJoint122.children[1] = HAnimJoint148;

HAnimJoint92.children[1] = HAnimJoint122;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.DEF = "Joe_r_hip";
HAnimJoint258.name = "r_hip";
HAnimJoint258.rotation = new SFRotation(new float[0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696]);
HAnimJoint258.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint258.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101]);
HAnimJoint258.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.DEF = "Joe_r_thigh";
HAnimSegment259.name = "r_thigh";
Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[-0.1,0.92,0]);
Shape Shape261 = createNode("Shape");
Shape261.USE = "jointbox";
Transform260.child = new undefined();

Transform260.child[0] = Shape261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

Shape Shape262 = createNode("Shape");
Appearance Appearance263 = createNode("Appearance");
Appearance263.USE = "SegmentLine";
Shape262.appearance = Appearance263;

IndexedLineSet IndexedLineSet264 = createNode("IndexedLineSet");
IndexedLineSet264.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate265 = createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[-0.1,0.92,0,-0.1,0.4913,0]);
IndexedLineSet264.coord = Coordinate265;

Shape262.geometry = IndexedLineSet264;

HAnimSegment259.children[1] = Shape262;

Transform Transform266 = createNode("Transform");
Transform266.translation = new SFVec3f(new float[-0.079,0.92,-0.14]);
Shape Shape267 = createNode("Shape");
Shape267.USE = "skinsphere";
Transform266.child = new undefined();

Transform266.child[0] = Shape267;

HAnimSegment259.children[2] = Transform266;

Transform Transform268 = createNode("Transform");
Transform268.translation = new SFVec3f(new float[-0.1,0.9,0.075]);
Shape Shape269 = createNode("Shape");
Shape269.USE = "skinsphere";
Transform268.child = new undefined();

Transform268.child[0] = Shape269;

HAnimSegment259.children[3] = Transform268;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[-0.171,0.65,0]);
Shape Shape271 = createNode("Shape");
Shape271.USE = "skinsphere";
Transform270.child = new undefined();

Transform270.child[0] = Shape271;

HAnimSegment259.children[4] = Transform270;

Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.02,0.65,0]);
Shape Shape273 = createNode("Shape");
Shape273.USE = "skinsphere";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

HAnimSegment259.children[5] = Transform272;

Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[-0.1,0.65,-0.08]);
Shape Shape275 = createNode("Shape");
Shape275.USE = "skinsphere";
Transform274.child = new undefined();

Transform274.child[0] = Shape275;

HAnimSegment259.children[6] = Transform274;

Transform Transform276 = createNode("Transform");
Transform276.translation = new SFVec3f(new float[-0.1,0.65,0.07]);
Shape Shape277 = createNode("Shape");
Shape277.USE = "skinsphere";
Transform276.child = new undefined();

Transform276.child[0] = Shape277;

HAnimSegment259.children[7] = Transform276;

HAnimSite HAnimSite278 = createNode("HAnimSite");
HAnimSite278.DEF = "Joe_r_knee_crease";
HAnimSite278.name = "r_knee_crease";
HAnimSite278.translation = new SFVec3f(new float[-0.115,0.466,-0.055]);
Shape Shape279 = createNode("Shape");
Shape279.USE = "sitebox";
HAnimSite278.children = new MFNode();

HAnimSite278.children[0] = Shape279;

HAnimSegment259.children[8] = HAnimSite278;

HAnimSite HAnimSite280 = createNode("HAnimSite");
HAnimSite280.DEF = "Joe_r_femoral_lateral_epicn";
HAnimSite280.name = "r_femoral_lateral_epicn";
HAnimSite280.translation = new SFVec3f(new float[-0.17,0.466,0]);
Shape Shape281 = createNode("Shape");
Shape281.USE = "sitebox";
HAnimSite280.children = new MFNode();

HAnimSite280.children[0] = Shape281;

HAnimSegment259.children[9] = HAnimSite280;

HAnimSite HAnimSite282 = createNode("HAnimSite");
HAnimSite282.DEF = "Joe_r_femoral_medial_epicn";
HAnimSite282.name = "r_femoral_medial_epicn";
HAnimSite282.translation = new SFVec3f(new float[-0.05,0.466,0]);
Shape Shape283 = createNode("Shape");
Shape283.USE = "sitebox";
HAnimSite282.children = new MFNode();

HAnimSite282.children[0] = Shape283;

HAnimSegment259.children[10] = HAnimSite282;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.DEF = "Joe_r_knee";
HAnimJoint284.name = "r_knee";
HAnimJoint284.rotation = new SFRotation(new float[0.999999999999952,0,0,0.086543259681602]);
HAnimJoint284.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint284.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369]);
HAnimJoint284.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment285 = createNode("HAnimSegment");
HAnimSegment285.DEF = "Joe_r_calf";
HAnimSegment285.name = "r_calf";
Transform Transform286 = createNode("Transform");
Transform286.translation = new SFVec3f(new float[-0.1,0.4913,0]);
Shape Shape287 = createNode("Shape");
Shape287.USE = "jointbox";
Transform286.child = new undefined();

Transform286.child[0] = Shape287;

HAnimSegment285.children = new MFNode();

HAnimSegment285.children[0] = Transform286;

Shape Shape288 = createNode("Shape");
Appearance Appearance289 = createNode("Appearance");
Appearance289.USE = "SegmentLine";
Shape288.appearance = Appearance289;

IndexedLineSet IndexedLineSet290 = createNode("IndexedLineSet");
IndexedLineSet290.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate291 = createNode("Coordinate");
Coordinate291.point = new MFVec3f(new float[-0.1,0.4913,0,-0.1,0.0712,0]);
IndexedLineSet290.coord = Coordinate291;

Shape288.geometry = IndexedLineSet290;

HAnimSegment285.children[1] = Shape288;

Transform Transform292 = createNode("Transform");
Transform292.translation = new SFVec3f(new float[-0.115,0.466,0.06]);
Shape Shape293 = createNode("Shape");
Shape293.USE = "skinsphere";
Transform292.child = new undefined();

Transform292.child[0] = Shape293;

HAnimSegment285.children[2] = Transform292;

Transform Transform294 = createNode("Transform");
Transform294.translation = new SFVec3f(new float[-0.115,0.466,-0.055]);
Shape Shape295 = createNode("Shape");
Shape295.USE = "skinsphere";
Transform294.child = new undefined();

Transform294.child[0] = Shape295;

HAnimSegment285.children[3] = Transform294;

Transform Transform296 = createNode("Transform");
Transform296.translation = new SFVec3f(new float[-0.17,0.466,0]);
Shape Shape297 = createNode("Shape");
Shape297.USE = "skinsphere";
Transform296.child = new undefined();

Transform296.child[0] = Shape297;

HAnimSegment285.children[4] = Transform296;

Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[-0.05,0.466,0]);
Shape Shape299 = createNode("Shape");
Shape299.USE = "skinsphere";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

HAnimSegment285.children[5] = Transform298;

Transform Transform300 = createNode("Transform");
Transform300.translation = new SFVec3f(new float[-0.17,0.3,0]);
Shape Shape301 = createNode("Shape");
Shape301.USE = "skinsphere";
Transform300.child = new undefined();

Transform300.child[0] = Shape301;

HAnimSegment285.children[6] = Transform300;

Transform Transform302 = createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.06,0.3,0]);
Shape Shape303 = createNode("Shape");
Shape303.USE = "skinsphere";
Transform302.child = new undefined();

Transform302.child[0] = Shape303;

HAnimSegment285.children[7] = Transform302;

Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.1,0.3,-0.05]);
Shape Shape305 = createNode("Shape");
Shape305.USE = "skinsphere";
Transform304.child = new undefined();

Transform304.child[0] = Shape305;

HAnimSegment285.children[8] = Transform304;

Transform Transform306 = createNode("Transform");
Transform306.translation = new SFVec3f(new float[-0.1,0.3,0.05]);
Shape Shape307 = createNode("Shape");
Shape307.USE = "skinsphere";
Transform306.child = new undefined();

Transform306.child[0] = Shape307;

HAnimSegment285.children[9] = Transform306;

HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.DEF = "Joe_r_lateral_malleolus";
HAnimSite308.name = "r_lateral_malleolus";
HAnimSite308.translation = new SFVec3f(new float[-0.15,0.07,0]);
Shape Shape309 = createNode("Shape");
Shape309.USE = "sitebox";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = Shape309;

HAnimSegment285.children[10] = HAnimSite308;

HAnimSite HAnimSite310 = createNode("HAnimSite");
HAnimSite310.DEF = "Joe_r_medial_malleolus";
HAnimSite310.name = "r_medial_malleolus";
HAnimSite310.translation = new SFVec3f(new float[-0.085,0.086,0.0125]);
Shape Shape311 = createNode("Shape");
Shape311.USE = "sitebox";
HAnimSite310.children = new MFNode();

HAnimSite310.children[0] = Shape311;

HAnimSegment285.children[11] = HAnimSite310;

HAnimJoint284.children = new MFNode();

HAnimJoint284.children[0] = HAnimSegment285;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.DEF = "Joe_r_ankle";
HAnimJoint312.name = "r_ankle";
HAnimJoint312.rotation = new SFRotation(new float[-1.00000000000001,0,0,0.337435958789841]);
HAnimJoint312.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint312.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint312.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.DEF = "Joe_r_hindfoot";
HAnimSegment313.name = "r_hindfoot";
Transform Transform314 = createNode("Transform");
Transform314.translation = new SFVec3f(new float[-0.1,0.0712,0]);
Shape Shape315 = createNode("Shape");
Shape315.USE = "jointbox";
Transform314.child = new undefined();

Transform314.child[0] = Shape315;

HAnimSegment313.children = new MFNode();

HAnimSegment313.children[0] = Transform314;

Shape Shape316 = createNode("Shape");
Appearance Appearance317 = createNode("Appearance");
Appearance317.USE = "SegmentLine";
Shape316.appearance = Appearance317;

IndexedLineSet IndexedLineSet318 = createNode("IndexedLineSet");
IndexedLineSet318.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate319 = createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[-0.1,0.0712,0,-0.1,0.015,-0.01]);
IndexedLineSet318.coord = Coordinate319;

Shape316.geometry = IndexedLineSet318;

HAnimSegment313.children[1] = Shape316;

Transform Transform320 = createNode("Transform");
Transform320.translation = new SFVec3f(new float[-0.15,0.07,0]);
Shape Shape321 = createNode("Shape");
Shape321.USE = "skinsphere";
Transform320.child = new undefined();

Transform320.child[0] = Shape321;

HAnimSegment313.children[2] = Transform320;

Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[-0.085,0.086,0.0125]);
Shape Shape323 = createNode("Shape");
Shape323.USE = "skinsphere";
Transform322.child = new undefined();

Transform322.child[0] = Shape323;

HAnimSegment313.children[3] = Transform322;

Transform Transform324 = createNode("Transform");
Transform324.translation = new SFVec3f(new float[-0.115,0.069,-0.045]);
Shape Shape325 = createNode("Shape");
Shape325.USE = "skinsphere";
Transform324.child = new undefined();

Transform324.child[0] = Shape325;

HAnimSegment313.children[4] = Transform324;

Transform Transform326 = createNode("Transform");
Transform326.translation = new SFVec3f(new float[-0.117,0.0975,0.0615]);
Shape Shape327 = createNode("Shape");
Shape327.USE = "skinsphere";
Transform326.child = new undefined();

Transform326.child[0] = Shape327;

HAnimSegment313.children[5] = Transform326;

HAnimSite HAnimSite328 = createNode("HAnimSite");
HAnimSite328.DEF = "Joe_r_sphyrion";
HAnimSite328.name = "r_sphyrion";
HAnimSite328.translation = new SFVec3f(new float[-0.09,0.056,0.0125]);
Shape Shape329 = createNode("Shape");
Shape329.USE = "sitebox";
HAnimSite328.children = new MFNode();

HAnimSite328.children[0] = Shape329;

HAnimSegment313.children[6] = HAnimSite328;

HAnimSite HAnimSite330 = createNode("HAnimSite");
HAnimSite330.DEF = "Joe_r_calcaneous_post";
HAnimSite330.name = "r_calcaneous_post";
HAnimSite330.translation = new SFVec3f(new float[-0.115,0.04,-0.055]);
Shape Shape331 = createNode("Shape");
Shape331.USE = "sitebox";
HAnimSite330.children = new MFNode();

HAnimSite330.children[0] = Shape331;

HAnimSegment313.children[7] = HAnimSite330;

HAnimJoint312.children = new MFNode();

HAnimJoint312.children[0] = HAnimSegment313;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.DEF = "Joe_r_subtalar";
HAnimJoint332.name = "r_subtalar";
HAnimJoint332.rotation = new SFRotation(new float[1.00000000000014,0,0,0.0816433505734676]);
HAnimJoint332.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint332.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint332.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment333 = createNode("HAnimSegment");
HAnimSegment333.DEF = "Joe_r_midproximal";
HAnimSegment333.name = "r_midproximal";
Transform Transform334 = createNode("Transform");
Transform334.translation = new SFVec3f(new float[-0.1,0.015,-0.01]);
Shape Shape335 = createNode("Shape");
Shape335.USE = "jointbox";
Transform334.child = new undefined();

Transform334.child[0] = Shape335;

HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = Transform334;

Shape Shape336 = createNode("Shape");
Appearance Appearance337 = createNode("Appearance");
Appearance337.USE = "SegmentLine";
Shape336.appearance = Appearance337;

IndexedLineSet IndexedLineSet338 = createNode("IndexedLineSet");
IndexedLineSet338.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate339 = createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[-0.1,0.015,-0.01,-0.1,0.02,0.07]);
IndexedLineSet338.coord = Coordinate339;

Shape336.geometry = IndexedLineSet338;

HAnimSegment333.children[1] = Shape336;

Transform Transform340 = createNode("Transform");
Transform340.translation = new SFVec3f(new float[-0.1375,0.006,-0.03]);
Shape Shape341 = createNode("Shape");
Shape341.USE = "skinsphere";
Transform340.child = new undefined();

Transform340.child[0] = Shape341;

HAnimSegment333.children[2] = Transform340;

Transform Transform342 = createNode("Transform");
Transform342.translation = new SFVec3f(new float[-0.095,0.006,-0.03]);
Shape Shape343 = createNode("Shape");
Shape343.USE = "skinsphere";
Transform342.child = new undefined();

Transform342.child[0] = Shape343;

HAnimSegment333.children[3] = Transform342;

Transform Transform344 = createNode("Transform");
Transform344.translation = new SFVec3f(new float[-0.095,0.006,-0.03]);
Shape Shape345 = createNode("Shape");
Shape345.USE = "skinsphere";
Transform344.child = new undefined();

Transform344.child[0] = Shape345;

HAnimSegment333.children[4] = Transform344;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.DEF = "Joe_r_midtarsal";
HAnimJoint346.name = "r_midtarsal";
HAnimJoint346.rotation = new SFRotation(new float[-1.00000000000001,0,0,0.14271113543743]);
HAnimJoint346.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint346.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint346.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment347 = createNode("HAnimSegment");
HAnimSegment347.DEF = "Joe_r_middistal";
HAnimSegment347.name = "r_middistal";
Transform Transform348 = createNode("Transform");
Transform348.translation = new SFVec3f(new float[-0.1,0.02,0.07]);
Shape Shape349 = createNode("Shape");
Shape349.USE = "jointbox";
Transform348.child = new undefined();

Transform348.child[0] = Shape349;

HAnimSegment347.children = new MFNode();

HAnimSegment347.children[0] = Transform348;

Shape Shape350 = createNode("Shape");
Appearance Appearance351 = createNode("Appearance");
Appearance351.USE = "SegmentLine";
Shape350.appearance = Appearance351;

IndexedLineSet IndexedLineSet352 = createNode("IndexedLineSet");
IndexedLineSet352.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate353 = createNode("Coordinate");
Coordinate353.point = new MFVec3f(new float[-0.1,0.02,0.07,-0.1,0.01,0.14]);
IndexedLineSet352.coord = Coordinate353;

Shape350.geometry = IndexedLineSet352;

HAnimSegment347.children[1] = Shape350;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.115,0.06,0.1]);
Shape Shape355 = createNode("Shape");
Shape355.USE = "skinsphere";
Transform354.child = new undefined();

Transform354.child[0] = Shape355;

HAnimSegment347.children[2] = Transform354;

Transform Transform356 = createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.115,0,0.07]);
Shape Shape357 = createNode("Shape");
Shape357.USE = "skinsphere";
Transform356.child = new undefined();

Transform356.child[0] = Shape357;

HAnimSegment347.children[3] = Transform356;

Transform Transform358 = createNode("Transform");
Transform358.translation = new SFVec3f(new float[-0.165,0,0.07]);
Shape Shape359 = createNode("Shape");
Shape359.USE = "skinsphere";
Transform358.child = new undefined();

Transform358.child[0] = Shape359;

HAnimSegment347.children[4] = Transform358;

Transform Transform360 = createNode("Transform");
Transform360.translation = new SFVec3f(new float[-0.165,0,0.07]);
Shape Shape361 = createNode("Shape");
Shape361.USE = "skinsphere";
Transform360.child = new undefined();

Transform360.child[0] = Shape361;

HAnimSegment347.children[5] = Transform360;

HAnimSite HAnimSite362 = createNode("HAnimSite");
HAnimSite362.DEF = "Joe_r_metatarsal_pha1";
HAnimSite362.name = "r_metatarsal_pha1";
HAnimSite362.translation = new SFVec3f(new float[-0.115,0.02,0.122]);
Shape Shape363 = createNode("Shape");
Shape363.USE = "sitebox";
HAnimSite362.children = new MFNode();

HAnimSite362.children[0] = Shape363;

HAnimSegment347.children[6] = HAnimSite362;

HAnimJoint346.children = new MFNode();

HAnimJoint346.children[0] = HAnimSegment347;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.DEF = "Joe_r_metatarsal";
HAnimJoint364.name = "r_metatarsal";
HAnimJoint364.rotation = new SFRotation(new float[-1.00000000000001,0,0,0.264860122523209]);
HAnimJoint364.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint364.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint364.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment365 = createNode("HAnimSegment");
HAnimSegment365.DEF = "Joe_r_forefoot";
HAnimSegment365.name = "r_forefoot";
Transform Transform366 = createNode("Transform");
Transform366.translation = new SFVec3f(new float[-0.1086,0.01,0.14]);
Shape Shape367 = createNode("Shape");
Shape367.USE = "jointbox";
Transform366.child = new undefined();

Transform366.child[0] = Shape367;

HAnimSegment365.children = new MFNode();

HAnimSegment365.children[0] = Transform366;

Shape Shape368 = createNode("Shape");
Appearance Appearance369 = createNode("Appearance");
Appearance369.USE = "SegmentLine";
Shape368.appearance = Appearance369;

IndexedLineSet IndexedLineSet370 = createNode("IndexedLineSet");
IndexedLineSet370.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate371 = createNode("Coordinate");
Coordinate371.point = new MFVec3f(new float[-0.1,0.01,0.14,-0.1043,0.0016,0.2]);
IndexedLineSet370.coord = Coordinate371;

Shape368.geometry = IndexedLineSet370;

HAnimSegment365.children[1] = Shape368;

Transform Transform372 = createNode("Transform");
Transform372.translation = new SFVec3f(new float[-0.115,0.04,0.13]);
Shape Shape373 = createNode("Shape");
Shape373.USE = "skinsphere";
Transform372.child = new undefined();

Transform372.child[0] = Shape373;

HAnimSegment365.children[2] = Transform372;

Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[-0.125,0,0.12]);
Shape Shape375 = createNode("Shape");
Shape375.USE = "skinsphere";
Transform374.child = new undefined();

Transform374.child[0] = Shape375;

HAnimSegment365.children[3] = Transform374;

Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[-0.165,0,0.12]);
Shape Shape377 = createNode("Shape");
Shape377.USE = "skinsphere";
Transform376.child = new undefined();

Transform376.child[0] = Shape377;

HAnimSegment365.children[4] = Transform376;

Transform Transform378 = createNode("Transform");
Transform378.translation = new SFVec3f(new float[-0.087,0,0.122]);
Shape Shape379 = createNode("Shape");
Shape379.USE = "skinsphere";
Transform378.child = new undefined();

Transform378.child[0] = Shape379;

HAnimSegment365.children[5] = Transform378;

Transform Transform380 = createNode("Transform");
Transform380.translation = new SFVec3f(new float[-0.09,0.012,0.188]);
Shape Shape381 = createNode("Shape");
Shape381.USE = "skinsphere";
Transform380.child = new undefined();

Transform380.child[0] = Shape381;

HAnimSegment365.children[6] = Transform380;

Transform Transform382 = createNode("Transform");
Transform382.translation = new SFVec3f(new float[-0.11,0.011,0.19]);
Shape Shape383 = createNode("Shape");
Shape383.USE = "skinsphere";
Transform382.child = new undefined();

Transform382.child[0] = Shape383;

HAnimSegment365.children[7] = Transform382;

Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.128,0.011,0.185]);
Shape Shape385 = createNode("Shape");
Shape385.USE = "skinsphere";
Transform384.child = new undefined();

Transform384.child[0] = Shape385;

HAnimSegment365.children[8] = Transform384;

Transform Transform386 = createNode("Transform");
Transform386.translation = new SFVec3f(new float[-0.142,0.011,0.178]);
Shape Shape387 = createNode("Shape");
Shape387.USE = "skinsphere";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

HAnimSegment365.children[9] = Transform386;

Transform Transform388 = createNode("Transform");
Transform388.translation = new SFVec3f(new float[-0.154,0.01,0.168]);
Shape Shape389 = createNode("Shape");
Shape389.USE = "skinsphere";
Transform388.child = new undefined();

Transform388.child[0] = Shape389;

HAnimSegment365.children[10] = Transform388;

HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.DEF = "Joe_r_metatarsal_pha5";
HAnimSite390.name = "r_metatarsal_pha5";
HAnimSite390.translation = new SFVec3f(new float[-0.165,0.01,0.12]);
Shape Shape391 = createNode("Shape");
Shape391.USE = "sitebox";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = Shape391;

HAnimSegment365.children[11] = HAnimSite390;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.DEF = "Joe_r_digit2";
HAnimSite392.name = "r_digit2";
HAnimSite392.translation = new SFVec3f(new float[-0.11,0.011,0.19]);
Shape Shape393 = createNode("Shape");
Shape393.USE = "sitebox";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = Shape393;

HAnimSegment365.children[12] = HAnimSite392;

HAnimJoint364.children = new MFNode();

HAnimJoint364.children[0] = HAnimSegment365;

HAnimJoint346.children[1] = HAnimJoint364;

HAnimJoint332.children[1] = HAnimJoint346;

HAnimJoint312.children[1] = HAnimJoint332;

HAnimJoint284.children[1] = HAnimJoint312;

HAnimJoint258.children[1] = HAnimJoint284;

HAnimJoint92.children[2] = HAnimJoint258;

HAnimJoint80.children[1] = HAnimJoint92;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.DEF = "Joe_vl5";
HAnimJoint394.name = "vl5";
HAnimJoint394.rotation = new SFRotation(new float[-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253]);
HAnimJoint394.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint394.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint394.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment395 = createNode("HAnimSegment");
HAnimSegment395.DEF = "Joe_toPelvisMarker";
HAnimSegment395.name = "toPelvis";
Shape Shape396 = createNode("Shape");
Appearance Appearance397 = createNode("Appearance");
Appearance397.USE = "SegmentLine";
Shape396.appearance = Appearance397;

IndexedLineSet IndexedLineSet398 = createNode("IndexedLineSet");
IndexedLineSet398.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate399 = createNode("Coordinate");
Coordinate399.point = new MFVec3f(new float[0,1.045,-0.095,0,0.9149,0.0016]);
IndexedLineSet398.coord = Coordinate399;

Shape396.geometry = IndexedLineSet398;

HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = Shape396;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

HAnimSegment HAnimSegment400 = createNode("HAnimSegment");
HAnimSegment400.DEF = "Joe_l5";
HAnimSegment400.name = "l5";
Shape Shape401 = createNode("Shape");
Appearance Appearance402 = createNode("Appearance");
Appearance402.USE = "SegmentLine";
Shape401.appearance = Appearance402;

IndexedLineSet IndexedLineSet403 = createNode("IndexedLineSet");
IndexedLineSet403.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate404 = createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[0,1.045,-0.095,0,1.068,-0.085]);
IndexedLineSet403.coord = Coordinate404;

Shape401.geometry = IndexedLineSet403;

HAnimSegment400.children = new MFNode();

HAnimSegment400.children[0] = Shape401;

HAnimSite HAnimSite405 = createNode("HAnimSite");
HAnimSite405.DEF = "Joe_waist_preferred_post";
HAnimSite405.name = "waist_preferred_post";
HAnimSite405.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
Shape Shape406 = createNode("Shape");
Shape406.USE = "sitebox";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = Shape406;

HAnimSegment400.children[1] = HAnimSite405;

HAnimSite HAnimSite407 = createNode("HAnimSite");
HAnimSite407.DEF = "Joe_navel";
HAnimSite407.name = "navel";
HAnimSite407.translation = new SFVec3f(new float[0,1.07225,0.09]);
Shape Shape408 = createNode("Shape");
Shape408.USE = "sitebox";
HAnimSite407.children = new MFNode();

HAnimSite407.children[0] = Shape408;

HAnimSegment400.children[2] = HAnimSite407;

HAnimJoint394.children[1] = HAnimSegment400;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.DEF = "Joe_vl4";
HAnimJoint409.name = "vl4";
HAnimJoint409.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimSegment HAnimSegment410 = createNode("HAnimSegment");
HAnimSegment410.DEF = "Joe_l4";
HAnimSegment410.name = "l4";
Shape Shape411 = createNode("Shape");
Appearance Appearance412 = createNode("Appearance");
Appearance412.USE = "SegmentLine";
Shape411.appearance = Appearance412;

IndexedLineSet IndexedLineSet413 = createNode("IndexedLineSet");
IndexedLineSet413.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate414 = createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[0,1.068,-0.085,0,1.092,-0.0725]);
IndexedLineSet413.coord = Coordinate414;

Shape411.geometry = IndexedLineSet413;

HAnimSegment410.children = new MFNode();

HAnimSegment410.children[0] = Shape411;

Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[0,1.068,-0.085]);
Shape Shape416 = createNode("Shape");
Shape416.USE = "jointbox";
Transform415.child = new undefined();

Transform415.child[0] = Shape416;

HAnimSegment410.children[1] = Transform415;

HAnimJoint409.children = new MFNode();

HAnimJoint409.children[0] = HAnimSegment410;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.DEF = "Joe_vl3";
HAnimJoint417.name = "vl3";
HAnimJoint417.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimSegment HAnimSegment418 = createNode("HAnimSegment");
HAnimSegment418.DEF = "Joe_l3";
HAnimSegment418.name = "l3";
Shape Shape419 = createNode("Shape");
Appearance Appearance420 = createNode("Appearance");
Appearance420.USE = "SegmentLine";
Shape419.appearance = Appearance420;

IndexedLineSet IndexedLineSet421 = createNode("IndexedLineSet");
IndexedLineSet421.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate422 = createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[0,1.092,-0.0725,0,1.12,-0.065]);
IndexedLineSet421.coord = Coordinate422;

Shape419.geometry = IndexedLineSet421;

HAnimSegment418.children = new MFNode();

HAnimSegment418.children[0] = Shape419;

Transform Transform423 = createNode("Transform");
Transform423.translation = new SFVec3f(new float[0,1.092,-0.0725]);
Shape Shape424 = createNode("Shape");
Shape424.USE = "jointbox";
Transform423.child = new undefined();

Transform423.child[0] = Shape424;

HAnimSegment418.children[1] = Transform423;

HAnimJoint417.children = new MFNode();

HAnimJoint417.children[0] = HAnimSegment418;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.DEF = "Joe_vl2";
HAnimJoint425.name = "vl2";
HAnimJoint425.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint425.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint425.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimSegment HAnimSegment426 = createNode("HAnimSegment");
HAnimSegment426.DEF = "Joe_l2";
HAnimSegment426.name = "l2";
Shape Shape427 = createNode("Shape");
Appearance Appearance428 = createNode("Appearance");
Appearance428.USE = "SegmentLine";
Shape427.appearance = Appearance428;

IndexedLineSet IndexedLineSet429 = createNode("IndexedLineSet");
IndexedLineSet429.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate430 = createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[0,1.12,-0.065,0,1.1459,-0.0625]);
IndexedLineSet429.coord = Coordinate430;

Shape427.geometry = IndexedLineSet429;

HAnimSegment426.children = new MFNode();

HAnimSegment426.children[0] = Shape427;

Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[0,1.12,-0.065]);
Shape Shape432 = createNode("Shape");
Shape432.USE = "jointbox";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

HAnimSegment426.children[1] = Transform431;

Transform Transform433 = createNode("Transform");
Transform433.translation = new SFVec3f(new float[-0.087,1.19,-0.09]);
Shape Shape434 = createNode("Shape");
Shape434.USE = "skinsphere";
Transform433.child = new undefined();

Transform433.child[0] = Shape434;

HAnimSegment426.children[2] = Transform433;

Transform Transform435 = createNode("Transform");
Transform435.translation = new SFVec3f(new float[0.087,1.19,-0.09]);
Shape Shape436 = createNode("Shape");
Shape436.USE = "skinsphere";
Transform435.child = new undefined();

Transform435.child[0] = Shape436;

HAnimSegment426.children[3] = Transform435;

Transform Transform437 = createNode("Transform");
Transform437.translation = new SFVec3f(new float[0.172,1.32,-0.03]);
Shape Shape438 = createNode("Shape");
Shape438.USE = "skinsphere";
Transform437.child = new undefined();

Transform437.child[0] = Shape438;

HAnimSegment426.children[4] = Transform437;

Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[-0.172,1.32,-0.03]);
Shape Shape440 = createNode("Shape");
Shape440.USE = "skinsphere";
Transform439.child = new undefined();

Transform439.child[0] = Shape440;

HAnimSegment426.children[5] = Transform439;

Transform Transform441 = createNode("Transform");
Transform441.translation = new SFVec3f(new float[0.15,1.23,-0.015]);
Shape Shape442 = createNode("Shape");
Shape442.USE = "skinsphere";
Transform441.child = new undefined();

Transform441.child[0] = Shape442;

HAnimSegment426.children[6] = Transform441;

Transform Transform443 = createNode("Transform");
Transform443.translation = new SFVec3f(new float[-0.15,1.23,-0.015]);
Shape Shape444 = createNode("Shape");
Shape444.USE = "skinsphere";
Transform443.child = new undefined();

Transform443.child[0] = Shape444;

HAnimSegment426.children[7] = Transform443;

HAnimSite HAnimSite445 = createNode("HAnimSite");
HAnimSite445.DEF = "Joe_r_rib10";
HAnimSite445.name = "r_rib10";
HAnimSite445.translation = new SFVec3f(new float[-0.087,1.19,0.09]);
Shape Shape446 = createNode("Shape");
Shape446.USE = "sitebox";
HAnimSite445.children = new MFNode();

HAnimSite445.children[0] = Shape446;

HAnimSegment426.children[8] = HAnimSite445;

HAnimSite HAnimSite447 = createNode("HAnimSite");
HAnimSite447.DEF = "Joe_l_rib10";
HAnimSite447.name = "l_rib10";
HAnimSite447.translation = new SFVec3f(new float[0.087,1.19,0.09]);
Shape Shape448 = createNode("Shape");
Shape448.USE = "sitebox";
HAnimSite447.children = new MFNode();

HAnimSite447.children[0] = Shape448;

HAnimSegment426.children[9] = HAnimSite447;

HAnimSite HAnimSite449 = createNode("HAnimSite");
HAnimSite449.DEF = "Joe_rib10_midspine";
HAnimSite449.name = "rib10_midspine";
HAnimSite449.translation = new SFVec3f(new float[0,1.1908,-0.1113]);
Shape Shape450 = createNode("Shape");
Shape450.USE = "sitebox";
HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = Shape450;

HAnimSegment426.children[10] = HAnimSite449;

HAnimJoint425.children = new MFNode();

HAnimJoint425.children[0] = HAnimSegment426;

HAnimJoint HAnimJoint451 = createNode("HAnimJoint");
HAnimJoint451.DEF = "Joe_vl1";
HAnimJoint451.name = "vl1";
HAnimJoint451.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimSegment HAnimSegment452 = createNode("HAnimSegment");
HAnimSegment452.DEF = "Joe_l1";
HAnimSegment452.name = "l1";
Shape Shape453 = createNode("Shape");
Appearance Appearance454 = createNode("Appearance");
Appearance454.USE = "SegmentLine";
Shape453.appearance = Appearance454;

IndexedLineSet IndexedLineSet455 = createNode("IndexedLineSet");
IndexedLineSet455.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate456 = createNode("Coordinate");
Coordinate456.point = new MFVec3f(new float[0,1.1459,-0.0625,0,1.179,-0.068]);
IndexedLineSet455.coord = Coordinate456;

Shape453.geometry = IndexedLineSet455;

HAnimSegment452.children = new MFNode();

HAnimSegment452.children[0] = Shape453;

Transform Transform457 = createNode("Transform");
Transform457.translation = new SFVec3f(new float[0,1.1459,-0.0625]);
Shape Shape458 = createNode("Shape");
Shape458.USE = "jointbox";
Transform457.child = new undefined();

Transform457.child[0] = Shape458;

HAnimSegment452.children[1] = Transform457;

HAnimJoint451.children = new MFNode();

HAnimJoint451.children[0] = HAnimSegment452;

HAnimJoint HAnimJoint459 = createNode("HAnimJoint");
HAnimJoint459.DEF = "Joe_vt12";
HAnimJoint459.name = "vt12";
HAnimJoint459.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.DEF = "Joe_t12";
HAnimSegment460.name = "t12";
Shape Shape461 = createNode("Shape");
Appearance Appearance462 = createNode("Appearance");
Appearance462.USE = "SegmentLine";
Shape461.appearance = Appearance462;

IndexedLineSet IndexedLineSet463 = createNode("IndexedLineSet");
IndexedLineSet463.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate464 = createNode("Coordinate");
Coordinate464.point = new MFVec3f(new float[0,1.179,-0.068,0,1.242,-0.09]);
IndexedLineSet463.coord = Coordinate464;

Shape461.geometry = IndexedLineSet463;

HAnimSegment460.children = new MFNode();

HAnimSegment460.children[0] = Shape461;

Transform Transform465 = createNode("Transform");
Transform465.translation = new SFVec3f(new float[0,1.179,-0.068]);
Shape Shape466 = createNode("Shape");
Shape466.USE = "jointbox";
Transform465.child = new undefined();

Transform465.child[0] = Shape466;

HAnimSegment460.children[1] = Transform465;

HAnimJoint459.children = new MFNode();

HAnimJoint459.children[0] = HAnimSegment460;

HAnimJoint HAnimJoint467 = createNode("HAnimJoint");
HAnimJoint467.DEF = "Joe_vt11";
HAnimJoint467.name = "vt11";
HAnimJoint467.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.DEF = "Joe_t11";
HAnimSegment468.name = "t11";
Shape Shape469 = createNode("Shape");
Appearance Appearance470 = createNode("Appearance");
Appearance470.USE = "SegmentLine";
Shape469.appearance = Appearance470;

IndexedLineSet IndexedLineSet471 = createNode("IndexedLineSet");
IndexedLineSet471.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate472 = createNode("Coordinate");
Coordinate472.point = new MFVec3f(new float[0,1.2145,-0.0755,0,1.242,-0.09]);
IndexedLineSet471.coord = Coordinate472;

Shape469.geometry = IndexedLineSet471;

HAnimSegment468.children = new MFNode();

HAnimSegment468.children[0] = Shape469;

Transform Transform473 = createNode("Transform");
Transform473.translation = new SFVec3f(new float[0,1.2145,-0.0755]);
Shape Shape474 = createNode("Shape");
Shape474.USE = "jointbox";
Transform473.child = new undefined();

Transform473.child[0] = Shape474;

HAnimSegment468.children[1] = Transform473;

HAnimJoint467.children = new MFNode();

HAnimJoint467.children[0] = HAnimSegment468;

HAnimJoint HAnimJoint475 = createNode("HAnimJoint");
HAnimJoint475.DEF = "Joe_vt10";
HAnimJoint475.name = "vt10";
HAnimJoint475.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint475.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint475.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.DEF = "Joe_t10";
HAnimSegment476.name = "t10";
Shape Shape477 = createNode("Shape");
Appearance Appearance478 = createNode("Appearance");
Appearance478.USE = "SegmentLine";
Shape477.appearance = Appearance478;

IndexedLineSet IndexedLineSet479 = createNode("IndexedLineSet");
IndexedLineSet479.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate480 = createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0,1.242,-0.09,0,1.268,-0.1]);
IndexedLineSet479.coord = Coordinate480;

Shape477.geometry = IndexedLineSet479;

HAnimSegment476.children = new MFNode();

HAnimSegment476.children[0] = Shape477;

Transform Transform481 = createNode("Transform");
Transform481.translation = new SFVec3f(new float[0,1.242,-0.09]);
Shape Shape482 = createNode("Shape");
Shape482.USE = "jointbox";
Transform481.child = new undefined();

Transform481.child[0] = Shape482;

HAnimSegment476.children[1] = Transform481;

HAnimSite HAnimSite483 = createNode("HAnimSite");
HAnimSite483.DEF = "Joe_substernale";
HAnimSite483.name = "substernale";
HAnimSite483.translation = new SFVec3f(new float[0,1.25,0.113]);
Shape Shape484 = createNode("Shape");
Shape484.USE = "sitebox";
HAnimSite483.children = new MFNode();

HAnimSite483.children[0] = Shape484;

HAnimSegment476.children[2] = HAnimSite483;

HAnimJoint475.children = new MFNode();

HAnimJoint475.children[0] = HAnimSegment476;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.DEF = "Joe_vt9";
HAnimJoint485.name = "vt9";
HAnimJoint485.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint485.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint485.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.DEF = "Joe_t9";
HAnimSegment486.name = "t9";
Shape Shape487 = createNode("Shape");
Appearance Appearance488 = createNode("Appearance");
Appearance488.USE = "SegmentLine";
Shape487.appearance = Appearance488;

IndexedLineSet IndexedLineSet489 = createNode("IndexedLineSet");
IndexedLineSet489.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate490 = createNode("Coordinate");
Coordinate490.point = new MFVec3f(new float[0,1.268,-0.1,0,1.294,-0.11]);
IndexedLineSet489.coord = Coordinate490;

Shape487.geometry = IndexedLineSet489;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Shape487;

Transform Transform491 = createNode("Transform");
Transform491.translation = new SFVec3f(new float[0,1.268,-0.1]);
Shape Shape492 = createNode("Shape");
Shape492.USE = "jointbox";
Transform491.child = new undefined();

Transform491.child[0] = Shape492;

HAnimSegment486.children[1] = Transform491;

HAnimSite HAnimSite493 = createNode("HAnimSite");
HAnimSite493.DEF = "Joe_r_thelion";
HAnimSite493.name = "r_thelion";
HAnimSite493.translation = new SFVec3f(new float[-0.1135,1.318,0.095]);
Shape Shape494 = createNode("Shape");
Shape494.USE = "sitebox";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = Shape494;

HAnimSegment486.children[2] = HAnimSite493;

HAnimSite HAnimSite495 = createNode("HAnimSite");
HAnimSite495.DEF = "Joe_l_thelion";
HAnimSite495.name = "l_thelion";
HAnimSite495.translation = new SFVec3f(new float[0.1135,1.318,0.095]);
Shape Shape496 = createNode("Shape");
Shape496.USE = "sitebox";
HAnimSite495.children = new MFNode();

HAnimSite495.children[0] = Shape496;

HAnimSegment486.children[3] = HAnimSite495;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint497 = createNode("HAnimJoint");
HAnimJoint497.DEF = "Joe_vt8";
HAnimJoint497.name = "vt8";
HAnimJoint497.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.DEF = "Joe_t8";
HAnimSegment498.name = "t8";
Shape Shape499 = createNode("Shape");
Appearance Appearance500 = createNode("Appearance");
Appearance500.USE = "SegmentLine";
Shape499.appearance = Appearance500;

IndexedLineSet IndexedLineSet501 = createNode("IndexedLineSet");
IndexedLineSet501.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate502 = createNode("Coordinate");
Coordinate502.point = new MFVec3f(new float[0,1.294,-0.11,0,1.352,-0.12]);
IndexedLineSet501.coord = Coordinate502;

Shape499.geometry = IndexedLineSet501;

HAnimSegment498.children = new MFNode();

HAnimSegment498.children[0] = Shape499;

Transform Transform503 = createNode("Transform");
Transform503.translation = new SFVec3f(new float[0,1.294,-0.11]);
Shape Shape504 = createNode("Shape");
Shape504.USE = "jointbox";
Transform503.child = new undefined();

Transform503.child[0] = Shape504;

HAnimSegment498.children[1] = Transform503;

HAnimJoint497.children = new MFNode();

HAnimJoint497.children[0] = HAnimSegment498;

HAnimJoint HAnimJoint505 = createNode("HAnimJoint");
HAnimJoint505.DEF = "Joe_vt7";
HAnimJoint505.name = "vt7";
HAnimJoint505.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.DEF = "Joe_t7";
HAnimSegment506.name = "t7";
Shape Shape507 = createNode("Shape");
Appearance Appearance508 = createNode("Appearance");
Appearance508.USE = "SegmentLine";
Shape507.appearance = Appearance508;

IndexedLineSet IndexedLineSet509 = createNode("IndexedLineSet");
IndexedLineSet509.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate510 = createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[0,1.352,-0.12,0,1.381,-0.1235]);
IndexedLineSet509.coord = Coordinate510;

Shape507.geometry = IndexedLineSet509;

HAnimSegment506.children = new MFNode();

HAnimSegment506.children[0] = Shape507;

Transform Transform511 = createNode("Transform");
Transform511.translation = new SFVec3f(new float[0,1.323,-0.1155]);
Shape Shape512 = createNode("Shape");
Shape512.USE = "jointbox";
Transform511.child = new undefined();

Transform511.child[0] = Shape512;

HAnimSegment506.children[1] = Transform511;

HAnimJoint505.children = new MFNode();

HAnimJoint505.children[0] = HAnimSegment506;

HAnimJoint HAnimJoint513 = createNode("HAnimJoint");
HAnimJoint513.DEF = "Joe_vt6";
HAnimJoint513.name = "vt6";
HAnimJoint513.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.DEF = "Joe_t6";
HAnimSegment514.name = "t6";
Shape Shape515 = createNode("Shape");
Appearance Appearance516 = createNode("Appearance");
Appearance516.USE = "SegmentLine";
Shape515.appearance = Appearance516;

IndexedLineSet IndexedLineSet517 = createNode("IndexedLineSet");
IndexedLineSet517.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate518 = createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0,1.381,-0.1235,0,1.41,-0.1235]);
IndexedLineSet517.coord = Coordinate518;

Shape515.geometry = IndexedLineSet517;

HAnimSegment514.children = new MFNode();

HAnimSegment514.children[0] = Shape515;

Transform Transform519 = createNode("Transform");
Transform519.translation = new SFVec3f(new float[0,1.352,-0.12]);
Shape Shape520 = createNode("Shape");
Shape520.USE = "jointbox";
Transform519.child = new undefined();

Transform519.child[0] = Shape520;

HAnimSegment514.children[1] = Transform519;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = HAnimSegment514;

HAnimJoint HAnimJoint521 = createNode("HAnimJoint");
HAnimJoint521.DEF = "Joe_vt5";
HAnimJoint521.name = "vt5";
HAnimJoint521.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.DEF = "Joe_t5";
HAnimSegment522.name = "t5";
Shape Shape523 = createNode("Shape");
Appearance Appearance524 = createNode("Appearance");
Appearance524.USE = "SegmentLine";
Shape523.appearance = Appearance524;

IndexedLineSet IndexedLineSet525 = createNode("IndexedLineSet");
IndexedLineSet525.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate526 = createNode("Coordinate");
Coordinate526.point = new MFVec3f(new float[0,1.41,-0.1235,0,1.438,-0.12]);
IndexedLineSet525.coord = Coordinate526;

Shape523.geometry = IndexedLineSet525;

HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = Shape523;

Transform Transform527 = createNode("Transform");
Transform527.translation = new SFVec3f(new float[0,1.381,-0.1235]);
Shape Shape528 = createNode("Shape");
Shape528.USE = "jointbox";
Transform527.child = new undefined();

Transform527.child[0] = Shape528;

HAnimSegment522.children[1] = Transform527;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

HAnimJoint HAnimJoint529 = createNode("HAnimJoint");
HAnimJoint529.DEF = "Joe_vt4";
HAnimJoint529.name = "vt4";
HAnimJoint529.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint529.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint529.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment530 = createNode("HAnimSegment");
HAnimSegment530.DEF = "Joe_t4";
HAnimSegment530.name = "t4";
Shape Shape531 = createNode("Shape");
Appearance Appearance532 = createNode("Appearance");
Appearance532.USE = "SegmentLine";
Shape531.appearance = Appearance532;

IndexedLineSet IndexedLineSet533 = createNode("IndexedLineSet");
IndexedLineSet533.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate534 = createNode("Coordinate");
Coordinate534.point = new MFVec3f(new float[0,1.41,-0.1235,0,1.438,-0.12]);
IndexedLineSet533.coord = Coordinate534;

Shape531.geometry = IndexedLineSet533;

HAnimSegment530.children = new MFNode();

HAnimSegment530.children[0] = Shape531;

Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[0,1.41,-0.1235]);
Shape Shape536 = createNode("Shape");
Shape536.USE = "jointbox";
Transform535.child = new undefined();

Transform535.child[0] = Shape536;

HAnimSegment530.children[1] = Transform535;

Transform Transform537 = createNode("Transform");
Transform537.translation = new SFVec3f(new float[0,1.41,-0.145]);
Shape Shape538 = createNode("Shape");
Shape538.USE = "skinsphere";
Transform537.child = new undefined();

Transform537.child[0] = Shape538;

HAnimSegment530.children[2] = Transform537;

HAnimJoint529.children = new MFNode();

HAnimJoint529.children[0] = HAnimSegment530;

HAnimJoint HAnimJoint539 = createNode("HAnimJoint");
HAnimJoint539.DEF = "Joe_vt3";
HAnimJoint539.name = "vt3";
HAnimJoint539.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.DEF = "Joe_t3";
HAnimSegment540.name = "t3";
Shape Shape541 = createNode("Shape");
Appearance Appearance542 = createNode("Appearance");
Appearance542.USE = "SegmentLine";
Shape541.appearance = Appearance542;

IndexedLineSet IndexedLineSet543 = createNode("IndexedLineSet");
IndexedLineSet543.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate544 = createNode("Coordinate");
Coordinate544.point = new MFVec3f(new float[0,1.438,-0.12,0,1.468,-0.105]);
IndexedLineSet543.coord = Coordinate544;

Shape541.geometry = IndexedLineSet543;

HAnimSegment540.children = new MFNode();

HAnimSegment540.children[0] = Shape541;

Transform Transform545 = createNode("Transform");
Transform545.translation = new SFVec3f(new float[0,1.438,-0.12]);
Shape Shape546 = createNode("Shape");
Shape546.USE = "jointbox";
Transform545.child = new undefined();

Transform545.child[0] = Shape546;

HAnimSegment540.children[1] = Transform545;

HAnimJoint539.children = new MFNode();

HAnimJoint539.children[0] = HAnimSegment540;

HAnimJoint HAnimJoint547 = createNode("HAnimJoint");
HAnimJoint547.DEF = "Joe_vt2";
HAnimJoint547.name = "vt2";
HAnimJoint547.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimSegment HAnimSegment548 = createNode("HAnimSegment");
HAnimSegment548.DEF = "Joe_t2";
HAnimSegment548.name = "t2";
Shape Shape549 = createNode("Shape");
Appearance Appearance550 = createNode("Appearance");
Appearance550.USE = "SegmentLine";
Shape549.appearance = Appearance550;

IndexedLineSet IndexedLineSet551 = createNode("IndexedLineSet");
IndexedLineSet551.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate552 = createNode("Coordinate");
Coordinate552.point = new MFVec3f(new float[0,1.468,-0.105,0,1.497,-0.09]);
IndexedLineSet551.coord = Coordinate552;

Shape549.geometry = IndexedLineSet551;

HAnimSegment548.children = new MFNode();

HAnimSegment548.children[0] = Shape549;

Transform Transform553 = createNode("Transform");
Transform553.translation = new SFVec3f(new float[0,1.468,-0.105]);
Shape Shape554 = createNode("Shape");
Shape554.USE = "jointbox";
Transform553.child = new undefined();

Transform553.child[0] = Shape554;

HAnimSegment548.children[1] = Transform553;

HAnimJoint547.children = new MFNode();

HAnimJoint547.children[0] = HAnimSegment548;

HAnimJoint HAnimJoint555 = createNode("HAnimJoint");
HAnimJoint555.DEF = "Joe_vt1";
HAnimJoint555.name = "vt1";
HAnimJoint555.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint555.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint555.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment556 = createNode("HAnimSegment");
HAnimSegment556.DEF = "Joe_t1";
HAnimSegment556.name = "t1";
Shape Shape557 = createNode("Shape");
Appearance Appearance558 = createNode("Appearance");
Appearance558.USE = "SegmentLine";
Shape557.appearance = Appearance558;

IndexedLineSet IndexedLineSet559 = createNode("IndexedLineSet");
IndexedLineSet559.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0,1.497,-0.09,0,1.525,-0.072]);
IndexedLineSet559.coord = Coordinate560;

Shape557.geometry = IndexedLineSet559;

HAnimSegment556.children = new MFNode();

HAnimSegment556.children[0] = Shape557;

Transform Transform561 = createNode("Transform");
Transform561.translation = new SFVec3f(new float[0,1.497,-0.09]);
Shape Shape562 = createNode("Shape");
Shape562.USE = "jointbox";
Transform561.child = new undefined();

Transform561.child[0] = Shape562;

HAnimSegment556.children[1] = Transform561;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.DEF = "Joe_suprasternale";
HAnimSite563.name = "suprasternale";
HAnimSite563.translation = new SFVec3f(new float[0,1.44,0.03]);
Shape Shape564 = createNode("Shape");
Shape564.USE = "sitebox";
HAnimSite563.children = new MFNode();

HAnimSite563.children[0] = Shape564;

HAnimSegment556.children[2] = HAnimSite563;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.DEF = "Joe_cervicale";
HAnimSite565.name = "cervicale";
HAnimSite565.translation = new SFVec3f(new float[0,1.53,-0.084]);
Shape Shape566 = createNode("Shape");
Shape566.USE = "sitebox";
HAnimSite565.children = new MFNode();

HAnimSite565.children[0] = Shape566;

HAnimSegment556.children[3] = HAnimSite565;

HAnimJoint555.children = new MFNode();

HAnimJoint555.children[0] = HAnimSegment556;

HAnimJoint HAnimJoint567 = createNode("HAnimJoint");
HAnimJoint567.DEF = "Joe_vc7";
HAnimJoint567.name = "vc7";
HAnimJoint567.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint567.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint567.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment568 = createNode("HAnimSegment");
HAnimSegment568.DEF = "Joe_c7";
HAnimSegment568.name = "c7";
Shape Shape569 = createNode("Shape");
Appearance Appearance570 = createNode("Appearance");
Appearance570.USE = "SegmentLine";
Shape569.appearance = Appearance570;

IndexedLineSet IndexedLineSet571 = createNode("IndexedLineSet");
IndexedLineSet571.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate572 = createNode("Coordinate");
Coordinate572.point = new MFVec3f(new float[0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]);
IndexedLineSet571.coord = Coordinate572;

Shape569.geometry = IndexedLineSet571;

HAnimSegment568.children = new MFNode();

HAnimSegment568.children[0] = Shape569;

Transform Transform573 = createNode("Transform");
Transform573.translation = new SFVec3f(new float[0,1.525,-0.072]);
Shape Shape574 = createNode("Shape");
Shape574.USE = "jointbox";
Transform573.child = new undefined();

Transform573.child[0] = Shape574;

HAnimSegment568.children[1] = Transform573;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.DEF = "Joe_r_neck_base";
HAnimSite575.name = "r_neck_base";
HAnimSite575.translation = new SFVec3f(new float[-0.0646,1.5149,-0.0385]);
Shape Shape576 = createNode("Shape");
Shape576.USE = "sitebox";
HAnimSite575.children = new MFNode();

HAnimSite575.children[0] = Shape576;

HAnimSegment568.children[2] = HAnimSite575;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.DEF = "Joe_l_neck_base";
HAnimSite577.name = "l_neck_base";
HAnimSite577.translation = new SFVec3f(new float[0.0646,1.5149,-0.0385]);
Shape Shape578 = createNode("Shape");
Shape578.USE = "sitebox";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = Shape578;

HAnimSegment568.children[3] = HAnimSite577;

HAnimJoint567.children = new MFNode();

HAnimJoint567.children[0] = HAnimSegment568;

HAnimJoint HAnimJoint579 = createNode("HAnimJoint");
HAnimJoint579.DEF = "Joe_vc6";
HAnimJoint579.name = "vc6";
HAnimJoint579.rotation = new SFRotation(new float[-0.37139068112485,-0.928476688976744,0,0.0468530829448654]);
HAnimJoint579.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimSegment HAnimSegment580 = createNode("HAnimSegment");
HAnimSegment580.DEF = "Joe_c6";
HAnimSegment580.name = "c6";
Shape Shape581 = createNode("Shape");
Appearance Appearance582 = createNode("Appearance");
Appearance582.USE = "SegmentLine";
Shape581.appearance = Appearance582;

IndexedLineSet IndexedLineSet583 = createNode("IndexedLineSet");
IndexedLineSet583.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate584 = createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0,1.54,-0.05,0,1.5675,-0.0256]);
IndexedLineSet583.coord = Coordinate584;

Shape581.geometry = IndexedLineSet583;

HAnimSegment580.children = new MFNode();

HAnimSegment580.children[0] = Shape581;

Transform Transform585 = createNode("Transform");
Transform585.translation = new SFVec3f(new float[0,1.54,-0.05]);
Shape Shape586 = createNode("Shape");
Shape586.USE = "jointbox";
Transform585.child = new undefined();

Transform585.child[0] = Shape586;

HAnimSegment580.children[1] = Transform585;

HAnimJoint579.children = new MFNode();

HAnimJoint579.children[0] = HAnimSegment580;

HAnimJoint HAnimJoint587 = createNode("HAnimJoint");
HAnimJoint587.DEF = "Joe_vc5";
HAnimJoint587.name = "vc5";
HAnimJoint587.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimSegment HAnimSegment588 = createNode("HAnimSegment");
HAnimSegment588.DEF = "Joe_c5";
HAnimSegment588.name = "c5";
Transform Transform589 = createNode("Transform");
Transform589.translation = new SFVec3f(new float[0,1.552,-0.035]);
Shape Shape590 = createNode("Shape");
Shape590.USE = "jointbox";
Transform589.child = new undefined();

Transform589.child[0] = Shape590;

HAnimSegment588.children = new MFNode();

HAnimSegment588.children[0] = Transform589;

Shape Shape591 = createNode("Shape");
Appearance Appearance592 = createNode("Appearance");
Appearance592.USE = "SegmentLine";
Shape591.appearance = Appearance592;

IndexedLineSet IndexedLineSet593 = createNode("IndexedLineSet");
IndexedLineSet593.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate594 = createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[0,1.5675,-0.0256,0,1.58225,-0.0185]);
IndexedLineSet593.coord = Coordinate594;

Shape591.geometry = IndexedLineSet593;

HAnimSegment588.children[1] = Shape591;

HAnimJoint587.children = new MFNode();

HAnimJoint587.children[0] = HAnimSegment588;

HAnimJoint HAnimJoint595 = createNode("HAnimJoint");
HAnimJoint595.DEF = "Joe_vc4";
HAnimJoint595.name = "vc4";
HAnimJoint595.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimSegment HAnimSegment596 = createNode("HAnimSegment");
HAnimSegment596.DEF = "Joe_c4";
HAnimSegment596.name = "c4";
Shape Shape597 = createNode("Shape");
Appearance Appearance598 = createNode("Appearance");
Appearance598.USE = "SegmentLine";
Shape597.appearance = Appearance598;

IndexedLineSet IndexedLineSet599 = createNode("IndexedLineSet");
IndexedLineSet599.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate600 = createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[0,1.58225,-0.0185,0,1.595,-0.0175]);
IndexedLineSet599.coord = Coordinate600;

Shape597.geometry = IndexedLineSet599;

HAnimSegment596.children = new MFNode();

HAnimSegment596.children[0] = Shape597;

Transform Transform601 = createNode("Transform");
Transform601.translation = new SFVec3f(new float[0,1.5675,-0.0256]);
Shape Shape602 = createNode("Shape");
Shape602.USE = "jointbox";
Transform601.child = new undefined();

Transform601.child[0] = Shape602;

HAnimSegment596.children[1] = Transform601;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

HAnimJoint HAnimJoint603 = createNode("HAnimJoint");
HAnimJoint603.DEF = "Joe_vc3";
HAnimJoint603.name = "vc3";
HAnimJoint603.center = new SFVec3f(new float[0,1.58225,-0.0185]);
HAnimSegment HAnimSegment604 = createNode("HAnimSegment");
HAnimSegment604.DEF = "Joe_c3";
HAnimSegment604.name = "c3";
Shape Shape605 = createNode("Shape");
Appearance Appearance606 = createNode("Appearance");
Appearance606.USE = "SegmentLine";
Shape605.appearance = Appearance606;

IndexedLineSet IndexedLineSet607 = createNode("IndexedLineSet");
IndexedLineSet607.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate608 = createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0,1.595,-0.0175,0,1.61,-0.015]);
IndexedLineSet607.coord = Coordinate608;

Shape605.geometry = IndexedLineSet607;

HAnimSegment604.children = new MFNode();

HAnimSegment604.children[0] = Shape605;

Transform Transform609 = createNode("Transform");
Transform609.translation = new SFVec3f(new float[0,1.58225,-0.0185]);
Shape Shape610 = createNode("Shape");
Shape610.USE = "jointbox";
Transform609.child = new undefined();

Transform609.child[0] = Shape610;

HAnimSegment604.children[1] = Transform609;

HAnimJoint603.children = new MFNode();

HAnimJoint603.children[0] = HAnimSegment604;

HAnimJoint HAnimJoint611 = createNode("HAnimJoint");
HAnimJoint611.DEF = "Joe_vc2";
HAnimJoint611.name = "vc2";
HAnimJoint611.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimSegment HAnimSegment612 = createNode("HAnimSegment");
HAnimSegment612.DEF = "Joe_c2";
HAnimSegment612.name = "c2";
Shape Shape613 = createNode("Shape");
Appearance Appearance614 = createNode("Appearance");
Appearance614.USE = "SegmentLine";
Shape613.appearance = Appearance614;

IndexedLineSet IndexedLineSet615 = createNode("IndexedLineSet");
IndexedLineSet615.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate616 = createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0,1.61,-0.015,0,1.6144,-0.0034]);
IndexedLineSet615.coord = Coordinate616;

Shape613.geometry = IndexedLineSet615;

HAnimSegment612.children = new MFNode();

HAnimSegment612.children[0] = Shape613;

Transform Transform617 = createNode("Transform");
Transform617.translation = new SFVec3f(new float[0,1.595,-0.0175]);
Shape Shape618 = createNode("Shape");
Shape618.USE = "jointbox";
Transform617.child = new undefined();

Transform617.child[0] = Shape618;

HAnimSegment612.children[1] = Transform617;

HAnimJoint611.children = new MFNode();

HAnimJoint611.children[0] = HAnimSegment612;

HAnimJoint HAnimJoint619 = createNode("HAnimJoint");
HAnimJoint619.DEF = "Joe_vc1";
HAnimJoint619.name = "vc1";
HAnimJoint619.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimSegment HAnimSegment620 = createNode("HAnimSegment");
HAnimSegment620.DEF = "Joe_c1";
HAnimSegment620.name = "c1";
Shape Shape621 = createNode("Shape");
Appearance Appearance622 = createNode("Appearance");
Appearance622.USE = "SegmentLine";
Shape621.appearance = Appearance622;

IndexedLineSet IndexedLineSet623 = createNode("IndexedLineSet");
IndexedLineSet623.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate624 = createNode("Coordinate");
Coordinate624.point = new MFVec3f(new float[0,1.6144,-0.0034,0,1.63,-0.01]);
IndexedLineSet623.coord = Coordinate624;

Shape621.geometry = IndexedLineSet623;

HAnimSegment620.children = new MFNode();

HAnimSegment620.children[0] = Shape621;

Transform Transform625 = createNode("Transform");
Transform625.translation = new SFVec3f(new float[0,1.61,-0.015]);
Shape Shape626 = createNode("Shape");
Shape626.USE = "jointbox";
Transform625.child = new undefined();

Transform625.child[0] = Shape626;

HAnimSegment620.children[1] = Transform625;

HAnimJoint619.children = new MFNode();

HAnimJoint619.children[0] = HAnimSegment620;

HAnimJoint HAnimJoint627 = createNode("HAnimJoint");
HAnimJoint627.DEF = "Joe_skullbase";
HAnimJoint627.name = "skullbase";
HAnimJoint627.rotation = new SFRotation(new float[0,-1,0,0.105595270685895]);
HAnimJoint627.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint627.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint627.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment628 = createNode("HAnimSegment");
HAnimSegment628.DEF = "Joe_skull";
HAnimSegment628.name = "skull";
Shape Shape629 = createNode("Shape");
Appearance Appearance630 = createNode("Appearance");
Appearance630.USE = "SegmentLine";
Shape629.appearance = Appearance630;

IndexedLineSet IndexedLineSet631 = createNode("IndexedLineSet");
IndexedLineSet631.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
Coordinate Coordinate632 = createNode("Coordinate");
Coordinate632.point = new MFVec3f(new float[0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]);
IndexedLineSet631.coord = Coordinate632;

Shape629.geometry = IndexedLineSet631;

HAnimSegment628.children = new MFNode();

HAnimSegment628.children[0] = Shape629;

Transform Transform633 = createNode("Transform");
Transform633.translation = new SFVec3f(new float[0,1.63,-0.01]);
Shape Shape634 = createNode("Shape");
Shape634.USE = "jointbox";
Transform633.child = new undefined();

Transform633.child[0] = Shape634;

HAnimSegment628.children[1] = Transform633;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.DEF = "Joe_skull_tip";
HAnimSite635.name = "skull_tip";
HAnimSite635.translation = new SFVec3f(new float[0,1.77,0]);
Shape Shape636 = createNode("Shape");
Shape636.USE = "sitebox";
HAnimSite635.children = new MFNode();

HAnimSite635.children[0] = Shape636;

HAnimSegment628.children[2] = HAnimSite635;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.DEF = "Joe_sellion";
HAnimSite637.name = "sellion";
HAnimSite637.translation = new SFVec3f(new float[0,1.665,0.09]);
Shape Shape638 = createNode("Shape");
Shape638.USE = "sitebox";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = Shape638;

HAnimSegment628.children[3] = HAnimSite637;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.DEF = "Joe_r_infraorbitale";
HAnimSite639.name = "r_infraorbitale";
HAnimSite639.translation = new SFVec3f(new float[-0.033,1.62,0.087]);
Shape Shape640 = createNode("Shape");
Shape640.USE = "sitebox";
HAnimSite639.children = new MFNode();

HAnimSite639.children[0] = Shape640;

HAnimSegment628.children[4] = HAnimSite639;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.DEF = "Joe_l_infraorbitale";
HAnimSite641.name = "l_infraorbitale";
HAnimSite641.translation = new SFVec3f(new float[0.033,1.62,0.087]);
Shape Shape642 = createNode("Shape");
Shape642.USE = "sitebox";
HAnimSite641.children = new MFNode();

HAnimSite641.children[0] = Shape642;

HAnimSegment628.children[5] = HAnimSite641;

HAnimSite HAnimSite643 = createNode("HAnimSite");
HAnimSite643.DEF = "Joe_supramenton";
HAnimSite643.name = "supramenton";
HAnimSite643.translation = new SFVec3f(new float[0,1.55,0.097]);
Shape Shape644 = createNode("Shape");
Shape644.USE = "sitebox";
HAnimSite643.children = new MFNode();

HAnimSite643.children[0] = Shape644;

HAnimSegment628.children[6] = HAnimSite643;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.DEF = "Joe_r_tragion";
HAnimSite645.name = "r_tragion";
HAnimSite645.translation = new SFVec3f(new float[-0.077,1.64,-0.01]);
Shape Shape646 = createNode("Shape");
Shape646.USE = "sitebox";
HAnimSite645.children = new MFNode();

HAnimSite645.children[0] = Shape646;

HAnimSegment628.children[7] = HAnimSite645;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.DEF = "Joe_r_gonion";
HAnimSite647.name = "r_gonion";
HAnimSite647.translation = new SFVec3f(new float[-0.052,1.58,0.015]);
Shape Shape648 = createNode("Shape");
Shape648.USE = "sitebox";
HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = Shape648;

HAnimSegment628.children[8] = HAnimSite647;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.DEF = "Joe_l_tragion";
HAnimSite649.name = "l_tragion";
HAnimSite649.translation = new SFVec3f(new float[0.077,1.64,-0.01]);
Shape Shape650 = createNode("Shape");
Shape650.USE = "sitebox";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = Shape650;

HAnimSegment628.children[9] = HAnimSite649;

HAnimSite HAnimSite651 = createNode("HAnimSite");
HAnimSite651.DEF = "Joe_l_gonion";
HAnimSite651.name = "l_gonion";
HAnimSite651.translation = new SFVec3f(new float[0.0631,1.58,0.015]);
Shape Shape652 = createNode("Shape");
Shape652.USE = "sitebox";
HAnimSite651.children = new MFNode();

HAnimSite651.children[0] = Shape652;

HAnimSegment628.children[10] = HAnimSite651;

HAnimSite HAnimSite653 = createNode("HAnimSite");
HAnimSite653.DEF = "Joe_nuchale";
HAnimSite653.name = "nuchale";
HAnimSite653.translation = new SFVec3f(new float[0,1.625,-0.0925]);
Shape Shape654 = createNode("Shape");
Shape654.USE = "sitebox";
HAnimSite653.children = new MFNode();

HAnimSite653.children[0] = Shape654;

HAnimSegment628.children[11] = HAnimSite653;

HAnimJoint627.children = new MFNode();

HAnimJoint627.children[0] = HAnimSegment628;

HAnimJoint HAnimJoint655 = createNode("HAnimJoint");
HAnimJoint655.DEF = "Joe_l_eyeball_joint";
HAnimJoint655.name = "l_eyeball_joint";
HAnimJoint655.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimSegment HAnimSegment656 = createNode("HAnimSegment");
HAnimSegment656.DEF = "Joe_l_eyeball";
HAnimSegment656.name = "l_eyeball";
Shape Shape657 = createNode("Shape");
Appearance Appearance658 = createNode("Appearance");
Appearance658.USE = "SegmentLine";
Shape657.appearance = Appearance658;

IndexedLineSet IndexedLineSet659 = createNode("IndexedLineSet");
IndexedLineSet659.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate660 = createNode("Coordinate");
Coordinate660.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet659.coord = Coordinate660;

Shape657.geometry = IndexedLineSet659;

HAnimSegment656.children = new MFNode();

HAnimSegment656.children[0] = Shape657;

Transform Transform661 = createNode("Transform");
Transform661.translation = new SFVec3f(new float[0.034,1.655,0.065]);
Transform661.scale = new SFVec3f(new float[1,1,1.4]);
Shape Shape662 = createNode("Shape");
Shape662.USE = "jointbox";
Transform661.child = new undefined();

Transform661.child[0] = Shape662;

HAnimSegment656.children[1] = Transform661;

HAnimJoint655.children = new MFNode();

HAnimJoint655.children[0] = HAnimSegment656;

HAnimJoint627.children[1] = HAnimJoint655;

HAnimJoint HAnimJoint663 = createNode("HAnimJoint");
HAnimJoint663.DEF = "Joe_r_eyeball_joint";
HAnimJoint663.name = "r_eyeball_joint";
HAnimJoint663.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimSegment HAnimSegment664 = createNode("HAnimSegment");
HAnimSegment664.DEF = "Joe_r_eyeball";
HAnimSegment664.name = "r_eyeball";
Shape Shape665 = createNode("Shape");
Appearance Appearance666 = createNode("Appearance");
Appearance666.USE = "SegmentLine";
Shape665.appearance = Appearance666;

IndexedLineSet IndexedLineSet667 = createNode("IndexedLineSet");
IndexedLineSet667.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate668 = createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.034,1.655,0.065,-0.034,1.655,0.065]);
IndexedLineSet667.coord = Coordinate668;

Shape665.geometry = IndexedLineSet667;

HAnimSegment664.children = new MFNode();

HAnimSegment664.children[0] = Shape665;

Transform Transform669 = createNode("Transform");
Transform669.translation = new SFVec3f(new float[-0.034,1.655,0.065]);
Transform669.scale = new SFVec3f(new float[1,1,1.4]);
Shape Shape670 = createNode("Shape");
Shape670.USE = "jointbox";
Transform669.child = new undefined();

Transform669.child[0] = Shape670;

HAnimSegment664.children[1] = Transform669;

HAnimJoint663.children = new MFNode();

HAnimJoint663.children[0] = HAnimSegment664;

HAnimJoint627.children[2] = HAnimJoint663;

HAnimJoint619.children[1] = HAnimJoint627;

HAnimJoint611.children[1] = HAnimJoint619;

HAnimJoint603.children[1] = HAnimJoint611;

HAnimJoint595.children[1] = HAnimJoint603;

HAnimJoint587.children[1] = HAnimJoint595;

HAnimJoint579.children[1] = HAnimJoint587;

HAnimJoint567.children[1] = HAnimJoint579;

HAnimJoint555.children[1] = HAnimJoint567;

HAnimJoint HAnimJoint671 = createNode("HAnimJoint");
HAnimJoint671.DEF = "Joe_l_sternoclavicular";
HAnimJoint671.name = "l_sternoclavicular";
HAnimJoint671.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint671.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint671.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment672 = createNode("HAnimSegment");
HAnimSegment672.DEF = "Joe_l_clavicle";
HAnimSegment672.name = "l_clavicle";
Shape Shape673 = createNode("Shape");
Appearance Appearance674 = createNode("Appearance");
Appearance674.USE = "SegmentLine";
Shape673.appearance = Appearance674;

IndexedLineSet IndexedLineSet675 = createNode("IndexedLineSet");
IndexedLineSet675.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate676 = createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
IndexedLineSet675.coord = Coordinate676;

Shape673.geometry = IndexedLineSet675;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Shape673;

Transform Transform677 = createNode("Transform");
Transform677.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape678 = createNode("Shape");
Shape678.USE = "jointbox";
Transform677.child = new undefined();

Transform677.child[0] = Shape678;

HAnimSegment672.children[1] = Transform677;

HAnimSite HAnimSite679 = createNode("HAnimSite");
HAnimSite679.DEF = "Joe_l_clavicale";
HAnimSite679.name = "l_clavicale";
HAnimSite679.translation = new SFVec3f(new float[0.03,1.46,0.035]);
Shape Shape680 = createNode("Shape");
Shape680.USE = "sitebox";
HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = Shape680;

HAnimSegment672.children[2] = HAnimSite679;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

HAnimJoint HAnimJoint681 = createNode("HAnimJoint");
HAnimJoint681.DEF = "Joe_l_acromioclavicular";
HAnimJoint681.name = "l_acromioclavicular";
HAnimJoint681.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint681.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint681.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment682 = createNode("HAnimSegment");
HAnimSegment682.DEF = "Joe_l_scapula";
HAnimSegment682.name = "l_scapula";
Shape Shape683 = createNode("Shape");
Appearance Appearance684 = createNode("Appearance");
Appearance684.USE = "SegmentLine";
Shape683.appearance = Appearance684;

IndexedLineSet IndexedLineSet685 = createNode("IndexedLineSet");
IndexedLineSet685.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate686 = createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2,1.44,-0.04]);
IndexedLineSet685.coord = Coordinate686;

Shape683.geometry = IndexedLineSet685;

HAnimSegment682.children = new MFNode();

HAnimSegment682.children[0] = Shape683;

Transform Transform687 = createNode("Transform");
Transform687.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape688 = createNode("Shape");
Shape688.USE = "jointbox";
Transform687.child = new undefined();

Transform687.child[0] = Shape688;

HAnimSegment682.children[1] = Transform687;

Transform Transform689 = createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.11,1.427,-0.1375]);
Shape Shape690 = createNode("Shape");
Shape690.USE = "skinsphere";
Transform689.child = new undefined();

Transform689.child[0] = Shape690;

HAnimSegment682.children[2] = Transform689;

HAnimSite HAnimSite691 = createNode("HAnimSite");
HAnimSite691.DEF = "Joe_l_acromion";
HAnimSite691.name = "l_acromion";
HAnimSite691.translation = new SFVec3f(new float[0.175,1.4825,-0.06]);
Shape Shape692 = createNode("Shape");
Shape692.USE = "sitebox";
HAnimSite691.children = new MFNode();

HAnimSite691.children[0] = Shape692;

HAnimSegment682.children[3] = HAnimSite691;

HAnimSite HAnimSite693 = createNode("HAnimSite");
HAnimSite693.DEF = "Joe_l_axilla_ant";
HAnimSite693.name = "l_axilla_ant";
HAnimSite693.translation = new SFVec3f(new float[0.17,1.38,0.007]);
Shape Shape694 = createNode("Shape");
Shape694.USE = "sitebox";
HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = Shape694;

HAnimSegment682.children[4] = HAnimSite693;

HAnimSite HAnimSite695 = createNode("HAnimSite");
HAnimSite695.DEF = "Joe_l_axilla_post";
HAnimSite695.name = "l_axilla_post";
HAnimSite695.translation = new SFVec3f(new float[0.16,1.38,-0.125]);
Shape Shape696 = createNode("Shape");
Shape696.USE = "sitebox";
HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = Shape696;

HAnimSegment682.children[5] = HAnimSite695;

HAnimJoint681.children = new MFNode();

HAnimJoint681.children[0] = HAnimSegment682;

HAnimJoint HAnimJoint697 = createNode("HAnimJoint");
HAnimJoint697.DEF = "Joe_l_shoulder";
HAnimJoint697.name = "l_shoulder";
HAnimJoint697.rotation = new SFRotation(new float[0.978440403355312,0,0.206529361307055,0.207668332501419]);
HAnimJoint697.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint697.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint697.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment698 = createNode("HAnimSegment");
HAnimSegment698.DEF = "Joe_l_upperarm";
HAnimSegment698.name = "l_upperarm";
Shape Shape699 = createNode("Shape");
Appearance Appearance700 = createNode("Appearance");
Appearance700.USE = "SegmentLine";
Shape699.appearance = Appearance700;

IndexedLineSet IndexedLineSet701 = createNode("IndexedLineSet");
IndexedLineSet701.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate702 = createNode("Coordinate");
Coordinate702.point = new MFVec3f(new float[0.2029,1.44,-0.0387,0.2,1.1388,-0.04]);
IndexedLineSet701.coord = Coordinate702;

Shape699.geometry = IndexedLineSet701;

HAnimSegment698.children = new MFNode();

HAnimSegment698.children[0] = Shape699;

Transform Transform703 = createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.2,1.44,-0.04]);
Shape Shape704 = createNode("Shape");
Shape704.USE = "jointbox";
Transform703.child = new undefined();

Transform703.child[0] = Shape704;

HAnimSegment698.children[1] = Transform703;

Transform Transform705 = createNode("Transform");
Transform705.translation = new SFVec3f(new float[0.235,1.42,-0.0625]);
Shape Shape706 = createNode("Shape");
Shape706.USE = "skinsphere";
Transform705.child = new undefined();

Transform705.child[0] = Shape706;

HAnimSegment698.children[2] = Transform705;

Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.25,1.27,-0.04]);
Shape Shape708 = createNode("Shape");
Shape708.USE = "skinsphere";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

HAnimSegment698.children[3] = Transform707;

Transform Transform709 = createNode("Transform");
Transform709.translation = new SFVec3f(new float[0.17,1.27,-0.04]);
Shape Shape710 = createNode("Shape");
Shape710.USE = "skinsphere";
Transform709.child = new undefined();

Transform709.child[0] = Shape710;

HAnimSegment698.children[4] = Transform709;

Transform Transform711 = createNode("Transform");
Transform711.translation = new SFVec3f(new float[0.2,1.27,-0.09]);
Shape Shape712 = createNode("Shape");
Shape712.USE = "skinsphere";
Transform711.child = new undefined();

Transform711.child[0] = Shape712;

HAnimSegment698.children[5] = Transform711;

Transform Transform713 = createNode("Transform");
Transform713.translation = new SFVec3f(new float[0.2,1.27,0.02]);
Shape Shape714 = createNode("Shape");
Shape714.USE = "skinsphere";
Transform713.child = new undefined();

Transform713.child[0] = Shape714;

HAnimSegment698.children[6] = Transform713;

HAnimSite HAnimSite715 = createNode("HAnimSite");
HAnimSite715.DEF = "Joe_l_humeral_medial_epicn";
HAnimSite715.name = "l_humeral_medial_epicn";
HAnimSite715.translation = new SFVec3f(new float[0.165,1.1388,-0.04]);
Shape Shape716 = createNode("Shape");
Shape716.USE = "sitebox";
HAnimSite715.children = new MFNode();

HAnimSite715.children[0] = Shape716;

HAnimSegment698.children[7] = HAnimSite715;

HAnimSite HAnimSite717 = createNode("HAnimSite");
HAnimSite717.DEF = "Joe_l_radiale";
HAnimSite717.name = "l_radiale";
HAnimSite717.translation = new SFVec3f(new float[0.23,1.133,-0.055]);
Shape Shape718 = createNode("Shape");
Shape718.USE = "sitebox";
HAnimSite717.children = new MFNode();

HAnimSite717.children[0] = Shape718;

HAnimSegment698.children[8] = HAnimSite717;

HAnimSite HAnimSite719 = createNode("HAnimSite");
HAnimSite719.DEF = "Joe_l_humeral_lateral_epicn";
HAnimSite719.name = "l_humeral_lateral_epicn";
HAnimSite719.translation = new SFVec3f(new float[0.244,1.1388,-0.04]);
Shape Shape720 = createNode("Shape");
Shape720.USE = "sitebox";
HAnimSite719.children = new MFNode();

HAnimSite719.children[0] = Shape720;

HAnimSegment698.children[9] = HAnimSite719;

HAnimJoint697.children = new MFNode();

HAnimJoint697.children[0] = HAnimSegment698;

HAnimJoint HAnimJoint721 = createNode("HAnimJoint");
HAnimJoint721.DEF = "Joe_l_elbow";
HAnimJoint721.name = "l_elbow";
HAnimJoint721.rotation = new SFRotation(new float[-0.999999999999982,0,0,0.139356882713934]);
HAnimJoint721.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint721.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint721.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment722 = createNode("HAnimSegment");
HAnimSegment722.DEF = "Joe_l_forearm";
HAnimSegment722.name = "l_forearm";
Shape Shape723 = createNode("Shape");
Appearance Appearance724 = createNode("Appearance");
Appearance724.USE = "SegmentLine";
Shape723.appearance = Appearance724;

IndexedLineSet IndexedLineSet725 = createNode("IndexedLineSet");
IndexedLineSet725.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate726 = createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.2,1.1388,-0.04,0.2,0.87,-0.04]);
IndexedLineSet725.coord = Coordinate726;

Shape723.geometry = IndexedLineSet725;

HAnimSegment722.children = new MFNode();

HAnimSegment722.children[0] = Shape723;

Transform Transform727 = createNode("Transform");
Transform727.translation = new SFVec3f(new float[0.2,1.1388,-0.04]);
Shape Shape728 = createNode("Shape");
Shape728.USE = "jointbox";
Transform727.child = new undefined();

Transform727.child[0] = Shape728;

HAnimSegment722.children[1] = Transform727;

Transform Transform729 = createNode("Transform");
Transform729.translation = new SFVec3f(new float[0.2,1.1388,-0.013]);
Shape Shape730 = createNode("Shape");
Shape730.USE = "skinsphere";
Transform729.child = new undefined();

Transform729.child[0] = Shape730;

HAnimSegment722.children[2] = Transform729;

Transform Transform731 = createNode("Transform");
Transform731.translation = new SFVec3f(new float[0.225,1,-0.01]);
Shape Shape732 = createNode("Shape");
Shape732.USE = "skinsphere";
Transform731.child = new undefined();

Transform731.child[0] = Shape732;

HAnimSegment722.children[3] = Transform731;

Transform Transform733 = createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.225,1,-0.07]);
Shape Shape734 = createNode("Shape");
Shape734.USE = "skinsphere";
Transform733.child = new undefined();

Transform733.child[0] = Shape734;

HAnimSegment722.children[4] = Transform733;

Transform Transform735 = createNode("Transform");
Transform735.translation = new SFVec3f(new float[0.185,1,-0.01]);
Shape Shape736 = createNode("Shape");
Shape736.USE = "skinsphere";
Transform735.child = new undefined();

Transform735.child[0] = Shape736;

HAnimSegment722.children[5] = Transform735;

Transform Transform737 = createNode("Transform");
Transform737.translation = new SFVec3f(new float[0.185,1,-0.07]);
Shape Shape738 = createNode("Shape");
Shape738.USE = "skinsphere";
Transform737.child = new undefined();

Transform737.child[0] = Shape738;

HAnimSegment722.children[6] = Transform737;

HAnimSite HAnimSite739 = createNode("HAnimSite");
HAnimSite739.DEF = "Joe_l_radial_styloid";
HAnimSite739.name = "l_radial_styloid";
HAnimSite739.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
Shape Shape740 = createNode("Shape");
Shape740.USE = "sitebox";
HAnimSite739.children = new MFNode();

HAnimSite739.children[0] = Shape740;

HAnimSegment722.children[7] = HAnimSite739;

HAnimSite HAnimSite741 = createNode("HAnimSite");
HAnimSite741.DEF = "Joe_l_olecranon";
HAnimSite741.name = "l_olecranon";
HAnimSite741.translation = new SFVec3f(new float[0.2,1.1388,-0.08]);
Shape Shape742 = createNode("Shape");
Shape742.USE = "sitebox";
HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = Shape742;

HAnimSegment722.children[8] = HAnimSite741;

HAnimJoint721.children = new MFNode();

HAnimJoint721.children[0] = HAnimSegment722;

HAnimJoint HAnimJoint743 = createNode("HAnimJoint");
HAnimJoint743.DEF = "Joe_l_wrist";
HAnimJoint743.name = "l_wrist";
HAnimJoint743.rotation = new SFRotation(new float[-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821]);
HAnimJoint743.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint743.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint743.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment744 = createNode("HAnimSegment");
HAnimSegment744.DEF = "Joe_l_hand";
HAnimSegment744.name = "l_hand";
Shape Shape745 = createNode("Shape");
Appearance Appearance746 = createNode("Appearance");
Appearance746.USE = "SegmentLine";
Shape745.appearance = Appearance746;

IndexedLineSet IndexedLineSet747 = createNode("IndexedLineSet");
IndexedLineSet747.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate748 = createNode("Coordinate");
Coordinate748.point = new MFVec3f(new float[0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
IndexedLineSet747.coord = Coordinate748;

Shape745.geometry = IndexedLineSet747;

HAnimSegment744.children = new MFNode();

HAnimSegment744.children[0] = Shape745;

Transform Transform749 = createNode("Transform");
Transform749.translation = new SFVec3f(new float[0.2,0.87,-0.04]);
Shape Shape750 = createNode("Shape");
Shape750.USE = "jointbox";
Transform749.child = new undefined();

Transform749.child[0] = Shape750;

HAnimSegment744.children[1] = Transform749;

HAnimSite HAnimSite751 = createNode("HAnimSite");
HAnimSite751.DEF = "Joe_l_metacarpal_pha2";
HAnimSite751.name = "l_metacarpal_pha2";
HAnimSite751.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
Shape Shape752 = createNode("Shape");
Shape752.USE = "sitebox";
HAnimSite751.children = new MFNode();

HAnimSite751.children[0] = Shape752;

HAnimSegment744.children[2] = HAnimSite751;

HAnimSite HAnimSite753 = createNode("HAnimSite");
HAnimSite753.DEF = "Joe_l_ulnar_styloid";
HAnimSite753.name = "l_ulnar_styloid";
HAnimSite753.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
Shape Shape754 = createNode("Shape");
Shape754.USE = "sitebox";
HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = Shape754;

HAnimSegment744.children[3] = HAnimSite753;

HAnimSite HAnimSite755 = createNode("HAnimSite");
HAnimSite755.DEF = "Joe_l_metacarpal_pha5";
HAnimSite755.name = "l_metacarpal_pha5";
HAnimSite755.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
Shape Shape756 = createNode("Shape");
Shape756.USE = "sitebox";
HAnimSite755.children = new MFNode();

HAnimSite755.children[0] = Shape756;

HAnimSegment744.children[4] = HAnimSite755;

HAnimJoint743.children = new MFNode();

HAnimJoint743.children[0] = HAnimSegment744;

HAnimJoint HAnimJoint757 = createNode("HAnimJoint");
HAnimJoint757.DEF = "Joe_l_thumb1";
HAnimJoint757.name = "l_thumb1";
HAnimJoint757.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint757.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint757.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment758 = createNode("HAnimSegment");
HAnimSegment758.DEF = "Joe_l_thumb_metacarpal";
HAnimSegment758.name = "l_thumb_metacarpal";
Shape Shape759 = createNode("Shape");
Appearance Appearance760 = createNode("Appearance");
Appearance760.USE = "SegmentLine";
Shape759.appearance = Appearance760;

IndexedLineSet IndexedLineSet761 = createNode("IndexedLineSet");
IndexedLineSet761.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate762 = createNode("Coordinate");
Coordinate762.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
IndexedLineSet761.coord = Coordinate762;

Shape759.geometry = IndexedLineSet761;

HAnimSegment758.children = new MFNode();

HAnimSegment758.children[0] = Shape759;

Transform Transform763 = createNode("Transform");
Transform763.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape764 = createNode("Shape");
Shape764.USE = "jointbox";
Transform763.child = new undefined();

Transform763.child[0] = Shape764;

HAnimSegment758.children[1] = Transform763;

HAnimJoint757.children = new MFNode();

HAnimJoint757.children[0] = HAnimSegment758;

HAnimJoint HAnimJoint765 = createNode("HAnimJoint");
HAnimJoint765.DEF = "Joe_l_thumb2";
HAnimJoint765.name = "l_thumb2";
HAnimJoint765.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint765.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint765.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimSegment HAnimSegment766 = createNode("HAnimSegment");
HAnimSegment766.DEF = "Joe_l_thumb_proximal";
HAnimSegment766.name = "l_thumb_distal";
Shape Shape767 = createNode("Shape");
Appearance Appearance768 = createNode("Appearance");
Appearance768.USE = "SegmentLine";
Shape767.appearance = Appearance768;

IndexedLineSet IndexedLineSet769 = createNode("IndexedLineSet");
IndexedLineSet769.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate770 = createNode("Coordinate");
Coordinate770.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
IndexedLineSet769.coord = Coordinate770;

Shape767.geometry = IndexedLineSet769;

HAnimSegment766.children = new MFNode();

HAnimSegment766.children[0] = Shape767;

Transform Transform771 = createNode("Transform");
Transform771.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape772 = createNode("Shape");
Shape772.USE = "jointbox";
Transform771.child = new undefined();

Transform771.child[0] = Shape772;

HAnimSegment766.children[1] = Transform771;

HAnimJoint765.children = new MFNode();

HAnimJoint765.children[0] = HAnimSegment766;

HAnimJoint HAnimJoint773 = createNode("HAnimJoint");
HAnimJoint773.DEF = "Joe_l_thumb3";
HAnimJoint773.name = "l_thumb3";
HAnimJoint773.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint773.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint773.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment774 = createNode("HAnimSegment");
HAnimSegment774.DEF = "Joe_l_thumb_distal";
HAnimSegment774.name = "l_thumb_distal";
Shape Shape775 = createNode("Shape");
Appearance Appearance776 = createNode("Appearance");
Appearance776.USE = "SegmentLine";
Shape775.appearance = Appearance776;

IndexedLineSet IndexedLineSet777 = createNode("IndexedLineSet");
IndexedLineSet777.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate778 = createNode("Coordinate");
Coordinate778.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
IndexedLineSet777.coord = Coordinate778;

Shape775.geometry = IndexedLineSet777;

HAnimSegment774.children = new MFNode();

HAnimSegment774.children[0] = Shape775;

Transform Transform779 = createNode("Transform");
Transform779.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape780 = createNode("Shape");
Shape780.USE = "jointbox";
Transform779.child = new undefined();

Transform779.child[0] = Shape780;

HAnimSegment774.children[1] = Transform779;

HAnimSite HAnimSite781 = createNode("HAnimSite");
HAnimSite781.DEF = "Joe_l_thumb_distal_tip";
HAnimSite781.name = "l_thumb_distal_tip";
HAnimSite781.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
Shape Shape782 = createNode("Shape");
Shape782.USE = "sitebox";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = Shape782;

HAnimSegment774.children[2] = HAnimSite781;

HAnimJoint773.children = new MFNode();

HAnimJoint773.children[0] = HAnimSegment774;

HAnimJoint765.children[1] = HAnimJoint773;

HAnimJoint757.children[1] = HAnimJoint765;

HAnimJoint743.children[1] = HAnimJoint757;

HAnimJoint HAnimJoint783 = createNode("HAnimJoint");
HAnimJoint783.DEF = "Joe_l_index0";
HAnimJoint783.name = "l_index0";
HAnimJoint783.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint783.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint783.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment784 = createNode("HAnimSegment");
HAnimSegment784.DEF = "Joe_l_index_metacarpal";
HAnimSegment784.name = "l_index_metacarpal";
Shape Shape785 = createNode("Shape");
Appearance Appearance786 = createNode("Appearance");
Appearance786.USE = "SegmentLine";
Shape785.appearance = Appearance786;

IndexedLineSet IndexedLineSet787 = createNode("IndexedLineSet");
IndexedLineSet787.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate788 = createNode("Coordinate");
Coordinate788.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
IndexedLineSet787.coord = Coordinate788;

Shape785.geometry = IndexedLineSet787;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Shape785;

Transform Transform789 = createNode("Transform");
Transform789.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape790 = createNode("Shape");
Shape790.USE = "jointbox";
Transform789.child = new undefined();

Transform789.child[0] = Shape790;

HAnimSegment784.children[1] = Transform789;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

HAnimJoint HAnimJoint791 = createNode("HAnimJoint");
HAnimJoint791.DEF = "Joe_l_index1";
HAnimJoint791.name = "l_index1";
HAnimJoint791.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint791.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint791.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment HAnimSegment792 = createNode("HAnimSegment");
HAnimSegment792.DEF = "Joe_l_index_proximal";
HAnimSegment792.name = "l_index_proximal";
Shape Shape793 = createNode("Shape");
Appearance Appearance794 = createNode("Appearance");
Appearance794.USE = "SegmentLine";
Shape793.appearance = Appearance794;

IndexedLineSet IndexedLineSet795 = createNode("IndexedLineSet");
IndexedLineSet795.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate796 = createNode("Coordinate");
Coordinate796.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
IndexedLineSet795.coord = Coordinate796;

Shape793.geometry = IndexedLineSet795;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Shape793;

Transform Transform797 = createNode("Transform");
Transform797.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape798 = createNode("Shape");
Shape798.USE = "jointbox";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

HAnimSegment792.children[1] = Transform797;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

HAnimJoint HAnimJoint799 = createNode("HAnimJoint");
HAnimJoint799.DEF = "Joe_l_index2";
HAnimJoint799.name = "l_index2";
HAnimJoint799.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint799.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint799.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment800 = createNode("HAnimSegment");
HAnimSegment800.DEF = "Joe_l_index_middle";
HAnimSegment800.name = "l_index_middle";
Shape Shape801 = createNode("Shape");
Appearance Appearance802 = createNode("Appearance");
Appearance802.USE = "SegmentLine";
Shape801.appearance = Appearance802;

IndexedLineSet IndexedLineSet803 = createNode("IndexedLineSet");
IndexedLineSet803.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate804 = createNode("Coordinate");
Coordinate804.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
IndexedLineSet803.coord = Coordinate804;

Shape801.geometry = IndexedLineSet803;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Shape801;

Transform Transform805 = createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape806 = createNode("Shape");
Shape806.USE = "jointbox";
Transform805.child = new undefined();

Transform805.child[0] = Shape806;

HAnimSegment800.children[1] = Transform805;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

HAnimJoint HAnimJoint807 = createNode("HAnimJoint");
HAnimJoint807.DEF = "Joe_l_index3";
HAnimJoint807.name = "l_index3";
HAnimJoint807.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint807.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint807.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment808 = createNode("HAnimSegment");
HAnimSegment808.DEF = "Joe_l_index_distal";
HAnimSegment808.name = "l_index_distal";
Shape Shape809 = createNode("Shape");
Appearance Appearance810 = createNode("Appearance");
Appearance810.USE = "SegmentLine";
Shape809.appearance = Appearance810;

IndexedLineSet IndexedLineSet811 = createNode("IndexedLineSet");
IndexedLineSet811.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate812 = createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
IndexedLineSet811.coord = Coordinate812;

Shape809.geometry = IndexedLineSet811;

HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = Shape809;

Transform Transform813 = createNode("Transform");
Transform813.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape814 = createNode("Shape");
Shape814.USE = "jointbox";
Transform813.child = new undefined();

Transform813.child[0] = Shape814;

HAnimSegment808.children[1] = Transform813;

HAnimSite HAnimSite815 = createNode("HAnimSite");
HAnimSite815.DEF = "Joe_l_index_distal_tip";
HAnimSite815.name = "l_index_distal_tip";
HAnimSite815.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
Shape Shape816 = createNode("Shape");
Shape816.USE = "sitebox";
HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Shape816;

HAnimSegment808.children[2] = HAnimSite815;

HAnimSite HAnimSite817 = createNode("HAnimSite");
HAnimSite817.DEF = "Joe_l_dactylion";
HAnimSite817.name = "l_dactylion";
HAnimSite817.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
Shape Shape818 = createNode("Shape");
Shape818.USE = "sitebox";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = Shape818;

HAnimSegment808.children[3] = HAnimSite817;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

HAnimJoint799.children[1] = HAnimJoint807;

HAnimJoint791.children[1] = HAnimJoint799;

HAnimJoint783.children[1] = HAnimJoint791;

HAnimJoint743.children[2] = HAnimJoint783;

HAnimJoint HAnimJoint819 = createNode("HAnimJoint");
HAnimJoint819.DEF = "Joe_l_middle0";
HAnimJoint819.name = "l_middle0";
HAnimJoint819.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint819.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint819.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment820 = createNode("HAnimSegment");
HAnimSegment820.DEF = "Joe_l_middle_metacarpal";
HAnimSegment820.name = "l_middle_metacarpal";
Shape Shape821 = createNode("Shape");
Appearance Appearance822 = createNode("Appearance");
Appearance822.USE = "SegmentLine";
Shape821.appearance = Appearance822;

IndexedLineSet IndexedLineSet823 = createNode("IndexedLineSet");
IndexedLineSet823.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate824 = createNode("Coordinate");
Coordinate824.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
IndexedLineSet823.coord = Coordinate824;

Shape821.geometry = IndexedLineSet823;

HAnimSegment820.children = new MFNode();

HAnimSegment820.children[0] = Shape821;

Transform Transform825 = createNode("Transform");
Transform825.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape826 = createNode("Shape");
Shape826.USE = "jointbox";
Transform825.child = new undefined();

Transform825.child[0] = Shape826;

HAnimSegment820.children[1] = Transform825;

HAnimJoint819.children = new MFNode();

HAnimJoint819.children[0] = HAnimSegment820;

HAnimJoint HAnimJoint827 = createNode("HAnimJoint");
HAnimJoint827.DEF = "Joe_l_middle1";
HAnimJoint827.name = "l_middle1";
HAnimJoint827.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint827.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint827.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment828 = createNode("HAnimSegment");
HAnimSegment828.DEF = "Joe_l_middle_proximal";
HAnimSegment828.name = "l_middle_proximal";
Shape Shape829 = createNode("Shape");
Appearance Appearance830 = createNode("Appearance");
Appearance830.USE = "SegmentLine";
Shape829.appearance = Appearance830;

IndexedLineSet IndexedLineSet831 = createNode("IndexedLineSet");
IndexedLineSet831.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate832 = createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
IndexedLineSet831.coord = Coordinate832;

Shape829.geometry = IndexedLineSet831;

HAnimSegment828.children = new MFNode();

HAnimSegment828.children[0] = Shape829;

Transform Transform833 = createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape834 = createNode("Shape");
Shape834.USE = "jointbox";
Transform833.child = new undefined();

Transform833.child[0] = Shape834;

HAnimSegment828.children[1] = Transform833;

HAnimJoint827.children = new MFNode();

HAnimJoint827.children[0] = HAnimSegment828;

HAnimJoint HAnimJoint835 = createNode("HAnimJoint");
HAnimJoint835.DEF = "Joe_l_middle2";
HAnimJoint835.name = "l_middle2";
HAnimJoint835.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint835.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint835.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment836 = createNode("HAnimSegment");
HAnimSegment836.DEF = "Joe_l_middle_middle";
HAnimSegment836.name = "l_middle_middle";
Shape Shape837 = createNode("Shape");
Appearance Appearance838 = createNode("Appearance");
Appearance838.USE = "SegmentLine";
Shape837.appearance = Appearance838;

IndexedLineSet IndexedLineSet839 = createNode("IndexedLineSet");
IndexedLineSet839.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate840 = createNode("Coordinate");
Coordinate840.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
IndexedLineSet839.coord = Coordinate840;

Shape837.geometry = IndexedLineSet839;

HAnimSegment836.children = new MFNode();

HAnimSegment836.children[0] = Shape837;

Transform Transform841 = createNode("Transform");
Transform841.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape842 = createNode("Shape");
Shape842.USE = "jointbox";
Transform841.child = new undefined();

Transform841.child[0] = Shape842;

HAnimSegment836.children[1] = Transform841;

HAnimJoint835.children = new MFNode();

HAnimJoint835.children[0] = HAnimSegment836;

HAnimJoint HAnimJoint843 = createNode("HAnimJoint");
HAnimJoint843.DEF = "Joe_l_middle3";
HAnimJoint843.name = "l_middle3";
HAnimJoint843.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint843.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint843.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment844 = createNode("HAnimSegment");
HAnimSegment844.DEF = "Joe_l_middle_distal";
HAnimSegment844.name = "l_middle_distal";
Shape Shape845 = createNode("Shape");
Appearance Appearance846 = createNode("Appearance");
Appearance846.USE = "SegmentLine";
Shape845.appearance = Appearance846;

IndexedLineSet IndexedLineSet847 = createNode("IndexedLineSet");
IndexedLineSet847.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate848 = createNode("Coordinate");
Coordinate848.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
IndexedLineSet847.coord = Coordinate848;

Shape845.geometry = IndexedLineSet847;

HAnimSegment844.children = new MFNode();

HAnimSegment844.children[0] = Shape845;

HAnimSite HAnimSite849 = createNode("HAnimSite");
HAnimSite849.DEF = "Joe_l_middle_distal_tip";
HAnimSite849.name = "l_middle_distal_tip";
HAnimSite849.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
Shape Shape850 = createNode("Shape");
Shape850.USE = "sitebox";
HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = Shape850;

HAnimSegment844.children[1] = HAnimSite849;

Transform Transform851 = createNode("Transform");
Transform851.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape852 = createNode("Shape");
Shape852.USE = "jointbox";
Transform851.child = new undefined();

Transform851.child[0] = Shape852;

HAnimSegment844.children[2] = Transform851;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

HAnimJoint835.children[1] = HAnimJoint843;

HAnimJoint827.children[1] = HAnimJoint835;

HAnimJoint819.children[1] = HAnimJoint827;

HAnimJoint743.children[3] = HAnimJoint819;

HAnimJoint HAnimJoint853 = createNode("HAnimJoint");
HAnimJoint853.DEF = "Joe_l_ring0";
HAnimJoint853.name = "l_ring0";
HAnimJoint853.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint853.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint853.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment854 = createNode("HAnimSegment");
HAnimSegment854.DEF = "Joe_l_ring_metacarpal";
HAnimSegment854.name = "l_ring_metacarpal";
Shape Shape855 = createNode("Shape");
Appearance Appearance856 = createNode("Appearance");
Appearance856.USE = "SegmentLine";
Shape855.appearance = Appearance856;

IndexedLineSet IndexedLineSet857 = createNode("IndexedLineSet");
IndexedLineSet857.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate858 = createNode("Coordinate");
Coordinate858.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
IndexedLineSet857.coord = Coordinate858;

Shape855.geometry = IndexedLineSet857;

HAnimSegment854.children = new MFNode();

HAnimSegment854.children[0] = Shape855;

Transform Transform859 = createNode("Transform");
Transform859.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape860 = createNode("Shape");
Shape860.USE = "jointbox";
Transform859.child = new undefined();

Transform859.child[0] = Shape860;

HAnimSegment854.children[1] = Transform859;

HAnimJoint853.children = new MFNode();

HAnimJoint853.children[0] = HAnimSegment854;

HAnimJoint HAnimJoint861 = createNode("HAnimJoint");
HAnimJoint861.DEF = "Joe_l_ring1";
HAnimJoint861.name = "l_ring1";
HAnimJoint861.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint861.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint861.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment862 = createNode("HAnimSegment");
HAnimSegment862.DEF = "Joe_l_ring_proximal";
HAnimSegment862.name = "l_ring_proximal";
Shape Shape863 = createNode("Shape");
Appearance Appearance864 = createNode("Appearance");
Appearance864.USE = "SegmentLine";
Shape863.appearance = Appearance864;

IndexedLineSet IndexedLineSet865 = createNode("IndexedLineSet");
IndexedLineSet865.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate866 = createNode("Coordinate");
Coordinate866.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
IndexedLineSet865.coord = Coordinate866;

Shape863.geometry = IndexedLineSet865;

HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = Shape863;

Transform Transform867 = createNode("Transform");
Transform867.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape868 = createNode("Shape");
Shape868.USE = "jointbox";
Transform867.child = new undefined();

Transform867.child[0] = Shape868;

HAnimSegment862.children[1] = Transform867;

HAnimJoint861.children = new MFNode();

HAnimJoint861.children[0] = HAnimSegment862;

HAnimJoint HAnimJoint869 = createNode("HAnimJoint");
HAnimJoint869.DEF = "Joe_l_ring2";
HAnimJoint869.name = "l_ring2";
HAnimJoint869.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint869.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint869.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment870 = createNode("HAnimSegment");
HAnimSegment870.DEF = "Joe_l_ring_middle";
HAnimSegment870.name = "l_ring_middle";
Shape Shape871 = createNode("Shape");
Appearance Appearance872 = createNode("Appearance");
Appearance872.USE = "SegmentLine";
Shape871.appearance = Appearance872;

IndexedLineSet IndexedLineSet873 = createNode("IndexedLineSet");
IndexedLineSet873.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate874 = createNode("Coordinate");
Coordinate874.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
IndexedLineSet873.coord = Coordinate874;

Shape871.geometry = IndexedLineSet873;

HAnimSegment870.children = new MFNode();

HAnimSegment870.children[0] = Shape871;

Transform Transform875 = createNode("Transform");
Transform875.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape876 = createNode("Shape");
Shape876.USE = "jointbox";
Transform875.child = new undefined();

Transform875.child[0] = Shape876;

HAnimSegment870.children[1] = Transform875;

HAnimJoint869.children = new MFNode();

HAnimJoint869.children[0] = HAnimSegment870;

HAnimJoint HAnimJoint877 = createNode("HAnimJoint");
HAnimJoint877.DEF = "Joe_l_ring3";
HAnimJoint877.name = "l_ring3";
HAnimJoint877.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint877.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint877.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment878 = createNode("HAnimSegment");
HAnimSegment878.DEF = "Joe_l_ring_distal";
HAnimSegment878.name = "l_ring_distal";
Shape Shape879 = createNode("Shape");
Appearance Appearance880 = createNode("Appearance");
Appearance880.USE = "SegmentLine";
Shape879.appearance = Appearance880;

IndexedLineSet IndexedLineSet881 = createNode("IndexedLineSet");
IndexedLineSet881.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate882 = createNode("Coordinate");
Coordinate882.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
IndexedLineSet881.coord = Coordinate882;

Shape879.geometry = IndexedLineSet881;

HAnimSegment878.children = new MFNode();

HAnimSegment878.children[0] = Shape879;

Transform Transform883 = createNode("Transform");
Transform883.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape884 = createNode("Shape");
Shape884.USE = "jointbox";
Transform883.child = new undefined();

Transform883.child[0] = Shape884;

HAnimSegment878.children[1] = Transform883;

HAnimSite HAnimSite885 = createNode("HAnimSite");
HAnimSite885.DEF = "Joe_l_ring_distal_tip";
HAnimSite885.name = "l_ring_distal_tip";
HAnimSite885.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
Shape Shape886 = createNode("Shape");
Shape886.USE = "sitebox";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = Shape886;

HAnimSegment878.children[2] = HAnimSite885;

HAnimJoint877.children = new MFNode();

HAnimJoint877.children[0] = HAnimSegment878;

HAnimJoint869.children[1] = HAnimJoint877;

HAnimJoint861.children[1] = HAnimJoint869;

HAnimJoint853.children[1] = HAnimJoint861;

HAnimJoint743.children[4] = HAnimJoint853;

HAnimJoint HAnimJoint887 = createNode("HAnimJoint");
HAnimJoint887.DEF = "Joe_l_pinky0";
HAnimJoint887.name = "l_pinky0";
HAnimJoint887.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint887.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint887.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimSegment HAnimSegment888 = createNode("HAnimSegment");
HAnimSegment888.DEF = "Joe_l_pinky_metacarpal";
HAnimSegment888.name = "l_pinky_metacarpal";
Shape Shape889 = createNode("Shape");
Appearance Appearance890 = createNode("Appearance");
Appearance890.USE = "SegmentLine";
Shape889.appearance = Appearance890;

IndexedLineSet IndexedLineSet891 = createNode("IndexedLineSet");
IndexedLineSet891.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate892 = createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
IndexedLineSet891.coord = Coordinate892;

Shape889.geometry = IndexedLineSet891;

HAnimSegment888.children = new MFNode();

HAnimSegment888.children[0] = Shape889;

Transform Transform893 = createNode("Transform");
Transform893.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape894 = createNode("Shape");
Shape894.USE = "jointbox";
Transform893.child = new undefined();

Transform893.child[0] = Shape894;

HAnimSegment888.children[1] = Transform893;

HAnimJoint887.children = new MFNode();

HAnimJoint887.children[0] = HAnimSegment888;

HAnimJoint HAnimJoint895 = createNode("HAnimJoint");
HAnimJoint895.DEF = "Joe_l_pinky1";
HAnimJoint895.name = "l_pinky1";
HAnimJoint895.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint895.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint895.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment896 = createNode("HAnimSegment");
HAnimSegment896.DEF = "Joe_l_pinky_proximal";
HAnimSegment896.name = "l_pinky_proximal";
Shape Shape897 = createNode("Shape");
Appearance Appearance898 = createNode("Appearance");
Appearance898.USE = "SegmentLine";
Shape897.appearance = Appearance898;

IndexedLineSet IndexedLineSet899 = createNode("IndexedLineSet");
IndexedLineSet899.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate900 = createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
IndexedLineSet899.coord = Coordinate900;

Shape897.geometry = IndexedLineSet899;

HAnimSegment896.children = new MFNode();

HAnimSegment896.children[0] = Shape897;

Transform Transform901 = createNode("Transform");
Transform901.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape902 = createNode("Shape");
Shape902.USE = "jointbox";
Transform901.child = new undefined();

Transform901.child[0] = Shape902;

HAnimSegment896.children[1] = Transform901;

HAnimJoint895.children = new MFNode();

HAnimJoint895.children[0] = HAnimSegment896;

HAnimJoint HAnimJoint903 = createNode("HAnimJoint");
HAnimJoint903.DEF = "Joe_l_pinky2";
HAnimJoint903.name = "l_pinky2";
HAnimJoint903.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint903.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint903.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment904 = createNode("HAnimSegment");
HAnimSegment904.DEF = "Joe_l_pinky_middle";
HAnimSegment904.name = "l_pinky_middle";
Transform Transform905 = createNode("Transform");
Transform905.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape906 = createNode("Shape");
Shape906.USE = "jointbox";
Transform905.child = new undefined();

Transform905.child[0] = Shape906;

HAnimSegment904.children = new MFNode();

HAnimSegment904.children[0] = Transform905;

Shape Shape907 = createNode("Shape");
Appearance Appearance908 = createNode("Appearance");
Appearance908.USE = "SegmentLine";
Shape907.appearance = Appearance908;

IndexedLineSet IndexedLineSet909 = createNode("IndexedLineSet");
IndexedLineSet909.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate910 = createNode("Coordinate");
Coordinate910.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
IndexedLineSet909.coord = Coordinate910;

Shape907.geometry = IndexedLineSet909;

HAnimSegment904.children[1] = Shape907;

HAnimJoint903.children = new MFNode();

HAnimJoint903.children[0] = HAnimSegment904;

HAnimJoint HAnimJoint911 = createNode("HAnimJoint");
HAnimJoint911.DEF = "Joe_l_pinky3";
HAnimJoint911.name = "l_pinky3";
HAnimJoint911.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint911.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint911.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment912 = createNode("HAnimSegment");
HAnimSegment912.DEF = "Joe_l_pinky_distal";
HAnimSegment912.name = "l_pinky_distal";
Shape Shape913 = createNode("Shape");
Appearance Appearance914 = createNode("Appearance");
Appearance914.USE = "SegmentLine";
Shape913.appearance = Appearance914;

IndexedLineSet IndexedLineSet915 = createNode("IndexedLineSet");
IndexedLineSet915.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate916 = createNode("Coordinate");
Coordinate916.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
IndexedLineSet915.coord = Coordinate916;

Shape913.geometry = IndexedLineSet915;

HAnimSegment912.children = new MFNode();

HAnimSegment912.children[0] = Shape913;

Transform Transform917 = createNode("Transform");
Transform917.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape918 = createNode("Shape");
Shape918.USE = "jointbox";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

HAnimSegment912.children[1] = Transform917;

HAnimSite HAnimSite919 = createNode("HAnimSite");
HAnimSite919.DEF = "Joe_l_pinky_distal_tip";
HAnimSite919.name = "l_pinky_distal_tip";
HAnimSite919.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
Shape Shape920 = createNode("Shape");
Shape920.USE = "sitebox";
HAnimSite919.children = new MFNode();

HAnimSite919.children[0] = Shape920;

HAnimSegment912.children[2] = HAnimSite919;

HAnimJoint911.children = new MFNode();

HAnimJoint911.children[0] = HAnimSegment912;

HAnimJoint903.children[1] = HAnimJoint911;

HAnimJoint895.children[1] = HAnimJoint903;

HAnimJoint887.children[1] = HAnimJoint895;

HAnimJoint743.children[5] = HAnimJoint887;

HAnimJoint721.children[1] = HAnimJoint743;

HAnimJoint697.children[1] = HAnimJoint721;

HAnimJoint681.children[1] = HAnimJoint697;

HAnimJoint671.children[1] = HAnimJoint681;

HAnimJoint555.children[2] = HAnimJoint671;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.DEF = "Joe_r_sternoclavicular";
HAnimJoint921.name = "r_sternoclavicular";
HAnimJoint921.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint921.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint921.skinCoordWeight = new MFFloat(new float[1]);
HAnimSegment HAnimSegment922 = createNode("HAnimSegment");
HAnimSegment922.DEF = "Joe_r_clavicle";
HAnimSegment922.name = "r_clavicle";
Shape Shape923 = createNode("Shape");
Appearance Appearance924 = createNode("Appearance");
Appearance924.USE = "SegmentLine";
Shape923.appearance = Appearance924;

IndexedLineSet IndexedLineSet925 = createNode("IndexedLineSet");
IndexedLineSet925.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate926 = createNode("Coordinate");
Coordinate926.point = new MFVec3f(new float[-0.03,1.46,0.02,-0.09,1.41,-0.09]);
IndexedLineSet925.coord = Coordinate926;

Shape923.geometry = IndexedLineSet925;

HAnimSegment922.children = new MFNode();

HAnimSegment922.children[0] = Shape923;

Transform Transform927 = createNode("Transform");
Transform927.translation = new SFVec3f(new float[-0.03,1.46,0.02]);
Shape Shape928 = createNode("Shape");
Shape928.USE = "jointbox";
Transform927.child = new undefined();

Transform927.child[0] = Shape928;

HAnimSegment922.children[1] = Transform927;

HAnimSite HAnimSite929 = createNode("HAnimSite");
HAnimSite929.DEF = "Joe_r_clavicale";
HAnimSite929.name = "r_clavicale";
HAnimSite929.translation = new SFVec3f(new float[-0.03,1.46,0.035]);
Shape Shape930 = createNode("Shape");
Shape930.USE = "sitebox";
HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = Shape930;

HAnimSegment922.children[2] = HAnimSite929;

HAnimJoint921.children = new MFNode();

HAnimJoint921.children[0] = HAnimSegment922;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.DEF = "Joe_r_acromioclavicular";
HAnimJoint931.name = "r_acromioclavicular";
HAnimJoint931.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint931.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint931.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimSegment HAnimSegment932 = createNode("HAnimSegment");
HAnimSegment932.DEF = "Joe_r_scapula";
HAnimSegment932.name = "r_scapula";
Shape Shape933 = createNode("Shape");
Appearance Appearance934 = createNode("Appearance");
Appearance934.USE = "SegmentLine";
Shape933.appearance = Appearance934;

IndexedLineSet IndexedLineSet935 = createNode("IndexedLineSet");
IndexedLineSet935.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate936 = createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[-0.09,1.41,-0.09,-0.2,1.44,-0.04]);
IndexedLineSet935.coord = Coordinate936;

Shape933.geometry = IndexedLineSet935;

HAnimSegment932.children = new MFNode();

HAnimSegment932.children[0] = Shape933;

Transform Transform937 = createNode("Transform");
Transform937.translation = new SFVec3f(new float[-0.09,1.41,-0.09]);
Shape Shape938 = createNode("Shape");
Shape938.USE = "jointbox";
Transform937.child = new undefined();

Transform937.child[0] = Shape938;

HAnimSegment932.children[1] = Transform937;

Transform Transform939 = createNode("Transform");
Transform939.translation = new SFVec3f(new float[-0.11,1.427,-0.1375]);
Shape Shape940 = createNode("Shape");
Shape940.USE = "skinsphere";
Transform939.child = new undefined();

Transform939.child[0] = Shape940;

HAnimSegment932.children[2] = Transform939;

HAnimSite HAnimSite941 = createNode("HAnimSite");
HAnimSite941.DEF = "Joe_r_acromion";
HAnimSite941.name = "r_acromion";
HAnimSite941.translation = new SFVec3f(new float[-0.178,1.4825,-0.0625]);
Shape Shape942 = createNode("Shape");
Shape942.USE = "sitebox";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = Shape942;

HAnimSegment932.children[3] = HAnimSite941;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.DEF = "Joe_r_axilla_ant";
HAnimSite943.name = "r_axilla_ant";
HAnimSite943.translation = new SFVec3f(new float[-0.17,1.38,0.007]);
Shape Shape944 = createNode("Shape");
Shape944.USE = "sitebox";
HAnimSite943.children = new MFNode();

HAnimSite943.children[0] = Shape944;

HAnimSegment932.children[4] = HAnimSite943;

HAnimSite HAnimSite945 = createNode("HAnimSite");
HAnimSite945.DEF = "Joe_r_axilla_post";
HAnimSite945.name = "r_axilla_post";
HAnimSite945.translation = new SFVec3f(new float[-0.16,1.38,-0.127]);
Shape Shape946 = createNode("Shape");
Shape946.USE = "sitebox";
HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = Shape946;

HAnimSegment932.children[5] = HAnimSite945;

HAnimJoint931.children = new MFNode();

HAnimJoint931.children[0] = HAnimSegment932;

HAnimJoint HAnimJoint947 = createNode("HAnimJoint");
HAnimJoint947.DEF = "Joe_r_shoulder";
HAnimJoint947.name = "r_shoulder";
HAnimJoint947.rotation = new SFRotation(new float[0,0,-0.999999999999779,0.0372377698785245]);
HAnimJoint947.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint947.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint947.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimSegment HAnimSegment948 = createNode("HAnimSegment");
HAnimSegment948.DEF = "Joe_r_upperarm";
HAnimSegment948.name = "r_upperarm";
Transform Transform949 = createNode("Transform");
Transform949.translation = new SFVec3f(new float[-0.2,1.44,-0.04]);
Shape Shape950 = createNode("Shape");
Shape950.USE = "jointbox";
Transform949.child = new undefined();

Transform949.child[0] = Shape950;

HAnimSegment948.children = new MFNode();

HAnimSegment948.children[0] = Transform949;

Shape Shape951 = createNode("Shape");
Appearance Appearance952 = createNode("Appearance");
Appearance952.USE = "SegmentLine";
Shape951.appearance = Appearance952;

IndexedLineSet IndexedLineSet953 = createNode("IndexedLineSet");
IndexedLineSet953.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate954 = createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[-0.2,1.44,-0.04,-0.2,1.1388,-0.04]);
IndexedLineSet953.coord = Coordinate954;

Shape951.geometry = IndexedLineSet953;

HAnimSegment948.children[1] = Shape951;

Transform Transform955 = createNode("Transform");
Transform955.translation = new SFVec3f(new float[-0.178,1.4825,-0.0625]);
Shape Shape956 = createNode("Shape");
Shape956.USE = "skinsphere";
Transform955.child = new undefined();

Transform955.child[0] = Shape956;

HAnimSegment948.children[2] = Transform955;

Transform Transform957 = createNode("Transform");
Transform957.translation = new SFVec3f(new float[-0.17,1.38,0.007]);
Shape Shape958 = createNode("Shape");
Shape958.USE = "skinsphere";
Transform957.child = new undefined();

Transform957.child[0] = Shape958;

HAnimSegment948.children[3] = Transform957;

Transform Transform959 = createNode("Transform");
Transform959.translation = new SFVec3f(new float[-0.16,1.38,-0.127]);
Shape Shape960 = createNode("Shape");
Shape960.USE = "skinsphere";
Transform959.child = new undefined();

Transform959.child[0] = Shape960;

HAnimSegment948.children[4] = Transform959;

Transform Transform961 = createNode("Transform");
Transform961.translation = new SFVec3f(new float[-0.235,1.42,-0.0625]);
Shape Shape962 = createNode("Shape");
Shape962.USE = "skinsphere";
Transform961.child = new undefined();

Transform961.child[0] = Shape962;

HAnimSegment948.children[5] = Transform961;

Transform Transform963 = createNode("Transform");
Transform963.translation = new SFVec3f(new float[-0.23,1.235,-0.04]);
Shape Shape964 = createNode("Shape");
Shape964.USE = "skinsphere";
Transform963.child = new undefined();

Transform963.child[0] = Shape964;

HAnimSegment948.children[6] = Transform963;

Transform Transform965 = createNode("Transform");
Transform965.translation = new SFVec3f(new float[-0.16,1.23,-0.04]);
Shape Shape966 = createNode("Shape");
Shape966.USE = "skinsphere";
Transform965.child = new undefined();

Transform965.child[0] = Shape966;

HAnimSegment948.children[7] = Transform965;

Transform Transform967 = createNode("Transform");
Transform967.translation = new SFVec3f(new float[-0.2,1.23,-0.105]);
Shape Shape968 = createNode("Shape");
Shape968.USE = "skinsphere";
Transform967.child = new undefined();

Transform967.child[0] = Shape968;

HAnimSegment948.children[8] = Transform967;

Transform Transform969 = createNode("Transform");
Transform969.translation = new SFVec3f(new float[-0.2,1.235,0.02]);
Shape Shape970 = createNode("Shape");
Shape970.USE = "skinsphere";
Transform969.child = new undefined();

Transform969.child[0] = Shape970;

HAnimSegment948.children[9] = Transform969;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.DEF = "Joe_r_humeral_medial_epicn";
HAnimSite971.name = "r_humeral_medial_epicn";
HAnimSite971.translation = new SFVec3f(new float[-0.165,1.1388,-0.04]);
Shape Shape972 = createNode("Shape");
Shape972.USE = "sitebox";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = Shape972;

HAnimSegment948.children[10] = HAnimSite971;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.DEF = "Joe_r_radiale";
HAnimSite973.name = "r_radiale";
HAnimSite973.translation = new SFVec3f(new float[-0.23,1.133,-0.055]);
Shape Shape974 = createNode("Shape");
Shape974.USE = "sitebox";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = Shape974;

HAnimSegment948.children[11] = HAnimSite973;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.DEF = "Joe_r_humeral_lateral_epicn";
HAnimSite975.name = "r_humeral_lateral_epicn";
HAnimSite975.translation = new SFVec3f(new float[-0.244,1.1388,-0.04]);
Shape Shape976 = createNode("Shape");
Shape976.USE = "sitebox";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = Shape976;

HAnimSegment948.children[12] = HAnimSite975;

HAnimJoint947.children = new MFNode();

HAnimJoint947.children[0] = HAnimSegment948;

HAnimJoint HAnimJoint977 = createNode("HAnimJoint");
HAnimJoint977.DEF = "Joe_r_elbow";
HAnimJoint977.name = "r_elbow";
HAnimJoint977.rotation = new SFRotation(new float[-0.970142500145333,-0.242535625036333,0,0.149344152360623]);
HAnimJoint977.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint977.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint977.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.DEF = "Joe_r_forearm";
HAnimSegment978.name = "r_forearm";
Shape Shape979 = createNode("Shape");
Appearance Appearance980 = createNode("Appearance");
Appearance980.USE = "SegmentLine";
Shape979.appearance = Appearance980;

IndexedLineSet IndexedLineSet981 = createNode("IndexedLineSet");
IndexedLineSet981.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate982 = createNode("Coordinate");
Coordinate982.point = new MFVec3f(new float[-0.2,1.1388,-0.04,-0.2,0.89,-0.04]);
IndexedLineSet981.coord = Coordinate982;

Shape979.geometry = IndexedLineSet981;

HAnimSegment978.children = new MFNode();

HAnimSegment978.children[0] = Shape979;

Transform Transform983 = createNode("Transform");
Transform983.translation = new SFVec3f(new float[-0.2,1.1388,-0.04]);
Shape Shape984 = createNode("Shape");
Shape984.USE = "jointbox";
Transform983.child = new undefined();

Transform983.child[0] = Shape984;

HAnimSegment978.children[1] = Transform983;

Transform Transform985 = createNode("Transform");
Transform985.translation = new SFVec3f(new float[-0.2,1.1388,0.013]);
Shape Shape986 = createNode("Shape");
Shape986.USE = "skinsphere";
Transform985.child = new undefined();

Transform985.child[0] = Shape986;

HAnimSegment978.children[2] = Transform985;

Transform Transform987 = createNode("Transform");
Transform987.translation = new SFVec3f(new float[-0.225,1,-0.01]);
Shape Shape988 = createNode("Shape");
Shape988.USE = "skinsphere";
Transform987.child = new undefined();

Transform987.child[0] = Shape988;

HAnimSegment978.children[3] = Transform987;

Transform Transform989 = createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.225,1,-0.07]);
Shape Shape990 = createNode("Shape");
Shape990.USE = "skinsphere";
Transform989.child = new undefined();

Transform989.child[0] = Shape990;

HAnimSegment978.children[4] = Transform989;

Transform Transform991 = createNode("Transform");
Transform991.translation = new SFVec3f(new float[-0.185,1,-0.01]);
Shape Shape992 = createNode("Shape");
Shape992.USE = "skinsphere";
Transform991.child = new undefined();

Transform991.child[0] = Shape992;

HAnimSegment978.children[5] = Transform991;

Transform Transform993 = createNode("Transform");
Transform993.translation = new SFVec3f(new float[-0.185,1,-0.07]);
Shape Shape994 = createNode("Shape");
Shape994.USE = "skinsphere";
Transform993.child = new undefined();

Transform993.child[0] = Shape994;

HAnimSegment978.children[6] = Transform993;

HAnimSite HAnimSite995 = createNode("HAnimSite");
HAnimSite995.DEF = "Joe_r_radial_styloid";
HAnimSite995.name = "r_radial_styloid";
HAnimSite995.translation = new SFVec3f(new float[-0.2,0.9,-0.015]);
Shape Shape996 = createNode("Shape");
Shape996.USE = "sitebox";
HAnimSite995.children = new MFNode();

HAnimSite995.children[0] = Shape996;

HAnimSegment978.children[7] = HAnimSite995;

HAnimSite HAnimSite997 = createNode("HAnimSite");
HAnimSite997.DEF = "Joe_r_olecranon";
HAnimSite997.name = "r_olecranon";
HAnimSite997.translation = new SFVec3f(new float[-0.2,1.1388,-0.08]);
Shape Shape998 = createNode("Shape");
Shape998.USE = "sitebox";
HAnimSite997.children = new MFNode();

HAnimSite997.children[0] = Shape998;

HAnimSegment978.children[8] = HAnimSite997;

HAnimJoint977.children = new MFNode();

HAnimJoint977.children[0] = HAnimSegment978;

HAnimJoint HAnimJoint999 = createNode("HAnimJoint");
HAnimJoint999.DEF = "Joe_r_wrist";
HAnimJoint999.name = "r_wrist";
HAnimJoint999.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint999.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint999.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1000 = createNode("HAnimSegment");
HAnimSegment1000.DEF = "Joe_r_hand";
HAnimSegment1000.name = "r_hand";
Shape Shape1001 = createNode("Shape");
Appearance Appearance1002 = createNode("Appearance");
Appearance1002.USE = "SegmentLine";
Shape1001.appearance = Appearance1002;

IndexedLineSet IndexedLineSet1003 = createNode("IndexedLineSet");
IndexedLineSet1003.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate1004 = createNode("Coordinate");
Coordinate1004.point = new MFVec3f(new float[-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]);
IndexedLineSet1003.coord = Coordinate1004;

Shape1001.geometry = IndexedLineSet1003;

HAnimSegment1000.children = new MFNode();

HAnimSegment1000.children[0] = Shape1001;

Transform Transform1005 = createNode("Transform");
Transform1005.translation = new SFVec3f(new float[-0.2,0.89,-0.04]);
Shape Shape1006 = createNode("Shape");
Shape1006.USE = "jointbox";
Transform1005.child = new undefined();

Transform1005.child[0] = Shape1006;

HAnimSegment1000.children[1] = Transform1005;

HAnimSite HAnimSite1007 = createNode("HAnimSite");
HAnimSite1007.DEF = "Joe_r_ulnar_styloid";
HAnimSite1007.name = "r_ulnar_styloid";
HAnimSite1007.translation = new SFVec3f(new float[-0.2,0.9,-0.085]);
Shape Shape1008 = createNode("Shape");
Shape1008.USE = "sitebox";
HAnimSite1007.children = new MFNode();

HAnimSite1007.children[0] = Shape1008;

HAnimSegment1000.children[2] = HAnimSite1007;

HAnimJoint999.children = new MFNode();

HAnimJoint999.children[0] = HAnimSegment1000;

HAnimJoint HAnimJoint1009 = createNode("HAnimJoint");
HAnimJoint1009.DEF = "Joe_r_thumb1";
HAnimJoint1009.name = "r_thumb1";
HAnimJoint1009.rotation = new SFRotation(new float[0.999999999999976,0,0,0.11171329853783]);
HAnimJoint1009.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint1009.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint1009.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1010 = createNode("HAnimSegment");
HAnimSegment1010.DEF = "Joe_r_thumb_metacarpal";
HAnimSegment1010.name = "r_thumb_metacarpal";
Shape Shape1011 = createNode("Shape");
Appearance Appearance1012 = createNode("Appearance");
Appearance1012.USE = "SegmentLine";
Shape1011.appearance = Appearance1012;

IndexedLineSet IndexedLineSet1013 = createNode("IndexedLineSet");
IndexedLineSet1013.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1014 = createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[-0.2,0.85,0,-0.2,0.82,0.03]);
IndexedLineSet1013.coord = Coordinate1014;

Shape1011.geometry = IndexedLineSet1013;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Shape1011;

Transform Transform1015 = createNode("Transform");
Transform1015.translation = new SFVec3f(new float[-0.2,0.85,0]);
Shape Shape1016 = createNode("Shape");
Shape1016.USE = "jointbox";
Transform1015.child = new undefined();

Transform1015.child[0] = Shape1016;

HAnimSegment1010.children[1] = Transform1015;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

HAnimJoint HAnimJoint1017 = createNode("HAnimJoint");
HAnimJoint1017.DEF = "Joe_r_thumb2";
HAnimJoint1017.name = "r_thumb2";
HAnimJoint1017.rotation = new SFRotation(new float[0.707106781186553,0.707106781186553,0,0.167569951968385]);
HAnimJoint1017.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint1017.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint1017.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimSegment HAnimSegment1018 = createNode("HAnimSegment");
HAnimSegment1018.DEF = "Joe_r_thumb_proximal";
HAnimSegment1018.name = "r_thumb_proximal";
Shape Shape1019 = createNode("Shape");
Appearance Appearance1020 = createNode("Appearance");
Appearance1020.USE = "SegmentLine";
Shape1019.appearance = Appearance1020;

IndexedLineSet IndexedLineSet1021 = createNode("IndexedLineSet");
IndexedLineSet1021.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1022 = createNode("Coordinate");
Coordinate1022.point = new MFVec3f(new float[-0.2,0.82,0.03,-0.2,0.8,0.05]);
IndexedLineSet1021.coord = Coordinate1022;

Shape1019.geometry = IndexedLineSet1021;

HAnimSegment1018.children = new MFNode();

HAnimSegment1018.children[0] = Shape1019;

Transform Transform1023 = createNode("Transform");
Transform1023.translation = new SFVec3f(new float[-0.2,0.82,0.03]);
Shape Shape1024 = createNode("Shape");
Shape1024.USE = "jointbox";
Transform1023.child = new undefined();

Transform1023.child[0] = Shape1024;

HAnimSegment1018.children[1] = Transform1023;

HAnimJoint1017.children = new MFNode();

HAnimJoint1017.children[0] = HAnimSegment1018;

HAnimJoint HAnimJoint1025 = createNode("HAnimJoint");
HAnimJoint1025.DEF = "Joe_r_thumb3";
HAnimJoint1025.name = "r_thumb3";
HAnimJoint1025.rotation = new SFRotation(new float[0.707106781186553,0.707106781186553,0,0.167569951968385]);
HAnimJoint1025.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint1025.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint1025.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1026 = createNode("HAnimSegment");
HAnimSegment1026.DEF = "Joe_r_thumb_distal";
HAnimSegment1026.name = "r_thumb_distal";
Shape Shape1027 = createNode("Shape");
Appearance Appearance1028 = createNode("Appearance");
Appearance1028.USE = "SegmentLine";
Shape1027.appearance = Appearance1028;

IndexedLineSet IndexedLineSet1029 = createNode("IndexedLineSet");
IndexedLineSet1029.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1030 = createNode("Coordinate");
Coordinate1030.point = new MFVec3f(new float[-0.2,0.8,0.05,-0.2,0.78,0.07]);
IndexedLineSet1029.coord = Coordinate1030;

Shape1027.geometry = IndexedLineSet1029;

HAnimSegment1026.children = new MFNode();

HAnimSegment1026.children[0] = Shape1027;

Transform Transform1031 = createNode("Transform");
Transform1031.DEF = "Thumbnail";
Transform1031.translation = new SFVec3f(new float[-0.2,0.785,0.075]);
Shape Shape1032 = createNode("Shape");
Shape1032.USE = "skinsphere";
Transform1031.child = new undefined();

Transform1031.child[0] = Shape1032;

HAnimSegment1026.children[1] = Transform1031;

Transform Transform1033 = createNode("Transform");
Transform1033.translation = new SFVec3f(new float[-0.2,0.8,0.05]);
Shape Shape1034 = createNode("Shape");
Shape1034.USE = "jointbox";
Transform1033.child = new undefined();

Transform1033.child[0] = Shape1034;

HAnimSegment1026.children[2] = Transform1033;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.DEF = "Joe_r_thumb_distal_tip";
HAnimSite1035.name = "r_thumb_distal_tip";
HAnimSite1035.translation = new SFVec3f(new float[-0.2,0.78,0.07]);
Shape Shape1036 = createNode("Shape");
Shape1036.USE = "sitebox";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = Shape1036;

HAnimSegment1026.children[3] = HAnimSite1035;

HAnimJoint1025.children = new MFNode();

HAnimJoint1025.children[0] = HAnimSegment1026;

HAnimJoint1017.children[1] = HAnimJoint1025;

HAnimJoint1009.children[1] = HAnimJoint1017;

HAnimJoint999.children[1] = HAnimJoint1009;

HAnimJoint HAnimJoint1037 = createNode("HAnimJoint");
HAnimJoint1037.DEF = "Joe_r_index0";
HAnimJoint1037.name = "r_index0";
HAnimJoint1037.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1037.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint1037.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint1037.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1038 = createNode("HAnimSegment");
HAnimSegment1038.DEF = "Joe_r_index_metacarpal";
HAnimSegment1038.name = "r_index_metacarpal";
Shape Shape1039 = createNode("Shape");
Appearance Appearance1040 = createNode("Appearance");
Appearance1040.USE = "SegmentLine";
Shape1039.appearance = Appearance1040;

IndexedLineSet IndexedLineSet1041 = createNode("IndexedLineSet");
IndexedLineSet1041.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1042 = createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[-0.2,0.84,-0.015,-0.2,0.793,-0.015]);
IndexedLineSet1041.coord = Coordinate1042;

Shape1039.geometry = IndexedLineSet1041;

HAnimSegment1038.children = new MFNode();

HAnimSegment1038.children[0] = Shape1039;

Transform Transform1043 = createNode("Transform");
Transform1043.translation = new SFVec3f(new float[-0.2,0.84,-0.015]);
Shape Shape1044 = createNode("Shape");
Shape1044.USE = "jointbox";
Transform1043.child = new undefined();

Transform1043.child[0] = Shape1044;

HAnimSegment1038.children[1] = Transform1043;

HAnimSite HAnimSite1045 = createNode("HAnimSite");
HAnimSite1045.DEF = "Joe_r_metacarpal_pha2";
HAnimSite1045.name = "r_metacarpal_pha2";
HAnimSite1045.translation = new SFVec3f(new float[-0.2,0.793,-0.005]);
Shape Shape1046 = createNode("Shape");
Shape1046.USE = "sitebox";
HAnimSite1045.children = new MFNode();

HAnimSite1045.children[0] = Shape1046;

HAnimSegment1038.children[2] = HAnimSite1045;

HAnimJoint1037.children = new MFNode();

HAnimJoint1037.children[0] = HAnimSegment1038;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.DEF = "Joe_r_index1";
HAnimJoint1047.name = "r_index1";
HAnimJoint1047.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1047.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint1047.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint1047.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimSegment HAnimSegment1048 = createNode("HAnimSegment");
HAnimSegment1048.DEF = "Joe_r_index_proximal";
HAnimSegment1048.name = "r_index_proximal";
Shape Shape1049 = createNode("Shape");
Appearance Appearance1050 = createNode("Appearance");
Appearance1050.USE = "SegmentLine";
Shape1049.appearance = Appearance1050;

IndexedLineSet IndexedLineSet1051 = createNode("IndexedLineSet");
IndexedLineSet1051.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1052 = createNode("Coordinate");
Coordinate1052.point = new MFVec3f(new float[-0.2,0.793,-0.015,-0.2,0.745,-0.015]);
IndexedLineSet1051.coord = Coordinate1052;

Shape1049.geometry = IndexedLineSet1051;

HAnimSegment1048.children = new MFNode();

HAnimSegment1048.children[0] = Shape1049;

Transform Transform1053 = createNode("Transform");
Transform1053.translation = new SFVec3f(new float[-0.2,0.793,-0.015]);
Shape Shape1054 = createNode("Shape");
Shape1054.USE = "jointbox";
Transform1053.child = new undefined();

Transform1053.child[0] = Shape1054;

HAnimSegment1048.children[1] = Transform1053;

HAnimJoint1047.children = new MFNode();

HAnimJoint1047.children[0] = HAnimSegment1048;

HAnimJoint HAnimJoint1055 = createNode("HAnimJoint");
HAnimJoint1055.DEF = "Joe_r_index2";
HAnimJoint1055.name = "r_index2";
HAnimJoint1055.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1055.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint1055.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint1055.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1056 = createNode("HAnimSegment");
HAnimSegment1056.DEF = "Joe_r_index_middle";
HAnimSegment1056.name = "r_index_middle";
Shape Shape1057 = createNode("Shape");
Appearance Appearance1058 = createNode("Appearance");
Appearance1058.USE = "SegmentLine";
Shape1057.appearance = Appearance1058;

IndexedLineSet IndexedLineSet1059 = createNode("IndexedLineSet");
IndexedLineSet1059.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1060 = createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[-0.2,0.745,-0.015,-0.2,0.72,-0.015]);
IndexedLineSet1059.coord = Coordinate1060;

Shape1057.geometry = IndexedLineSet1059;

HAnimSegment1056.children = new MFNode();

HAnimSegment1056.children[0] = Shape1057;

Transform Transform1061 = createNode("Transform");
Transform1061.translation = new SFVec3f(new float[-0.2,0.745,-0.015]);
Shape Shape1062 = createNode("Shape");
Shape1062.USE = "jointbox";
Transform1061.child = new undefined();

Transform1061.child[0] = Shape1062;

HAnimSegment1056.children[1] = Transform1061;

HAnimJoint1055.children = new MFNode();

HAnimJoint1055.children[0] = HAnimSegment1056;

HAnimJoint HAnimJoint1063 = createNode("HAnimJoint");
HAnimJoint1063.DEF = "Joe_r_index3";
HAnimJoint1063.name = "r_index3";
HAnimJoint1063.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1063.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint1063.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint1063.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1064 = createNode("HAnimSegment");
HAnimSegment1064.DEF = "Joe_r_index_distal";
HAnimSegment1064.name = "r_index_distal";
Shape Shape1065 = createNode("Shape");
Appearance Appearance1066 = createNode("Appearance");
Appearance1066.USE = "SegmentLine";
Shape1065.appearance = Appearance1066;

IndexedLineSet IndexedLineSet1067 = createNode("IndexedLineSet");
IndexedLineSet1067.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1068 = createNode("Coordinate");
Coordinate1068.point = new MFVec3f(new float[-0.2,0.72,-0.015,-0.2,0.695,-0.015]);
IndexedLineSet1067.coord = Coordinate1068;

Shape1065.geometry = IndexedLineSet1067;

HAnimSegment1064.children = new MFNode();

HAnimSegment1064.children[0] = Shape1065;

Transform Transform1069 = createNode("Transform");
Transform1069.translation = new SFVec3f(new float[-0.2,0.72,-0.015]);
Shape Shape1070 = createNode("Shape");
Shape1070.USE = "jointbox";
Transform1069.child = new undefined();

Transform1069.child[0] = Shape1070;

HAnimSegment1064.children[1] = Transform1069;

HAnimSite HAnimSite1071 = createNode("HAnimSite");
HAnimSite1071.DEF = "Joe_r_index_distal_tip";
HAnimSite1071.name = "r_index_distal_tip";
HAnimSite1071.translation = new SFVec3f(new float[-0.2,0.695,-0.015]);
Shape Shape1072 = createNode("Shape");
Shape1072.USE = "sitebox";
HAnimSite1071.children = new MFNode();

HAnimSite1071.children[0] = Shape1072;

HAnimSegment1064.children[2] = HAnimSite1071;

HAnimJoint1063.children = new MFNode();

HAnimJoint1063.children[0] = HAnimSegment1064;

HAnimJoint1055.children[1] = HAnimJoint1063;

HAnimJoint1047.children[1] = HAnimJoint1055;

HAnimJoint1037.children[1] = HAnimJoint1047;

HAnimJoint999.children[2] = HAnimJoint1037;

HAnimJoint HAnimJoint1073 = createNode("HAnimJoint");
HAnimJoint1073.DEF = "Joe_r_middle0";
HAnimJoint1073.name = "r_middle0";
HAnimJoint1073.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1073.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint1073.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint1073.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1074 = createNode("HAnimSegment");
HAnimSegment1074.DEF = "Joe_r_middle_metacarpal";
HAnimSegment1074.name = "r_middle_metacarpal";
Shape Shape1075 = createNode("Shape");
Appearance Appearance1076 = createNode("Appearance");
Appearance1076.USE = "SegmentLine";
Shape1075.appearance = Appearance1076;

IndexedLineSet IndexedLineSet1077 = createNode("IndexedLineSet");
IndexedLineSet1077.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1078 = createNode("Coordinate");
Coordinate1078.point = new MFVec3f(new float[-0.2,0.835,-0.04,-0.2,0.788,-0.04]);
IndexedLineSet1077.coord = Coordinate1078;

Shape1075.geometry = IndexedLineSet1077;

HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = Shape1075;

Transform Transform1079 = createNode("Transform");
Transform1079.translation = new SFVec3f(new float[-0.2,0.835,-0.04]);
Shape Shape1080 = createNode("Shape");
Shape1080.USE = "jointbox";
Transform1079.child = new undefined();

Transform1079.child[0] = Shape1080;

HAnimSegment1074.children[1] = Transform1079;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

HAnimJoint HAnimJoint1081 = createNode("HAnimJoint");
HAnimJoint1081.DEF = "Joe_r_middle1";
HAnimJoint1081.name = "r_middle1";
HAnimJoint1081.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1081.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint1081.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint1081.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment1082 = createNode("HAnimSegment");
HAnimSegment1082.DEF = "Joe_r_middle_proximal";
HAnimSegment1082.name = "r_middle_proximal";
Shape Shape1083 = createNode("Shape");
Appearance Appearance1084 = createNode("Appearance");
Appearance1084.USE = "SegmentLine";
Shape1083.appearance = Appearance1084;

IndexedLineSet IndexedLineSet1085 = createNode("IndexedLineSet");
IndexedLineSet1085.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1086 = createNode("Coordinate");
Coordinate1086.point = new MFVec3f(new float[-0.2,0.788,-0.04,-0.2,0.74,-0.04]);
IndexedLineSet1085.coord = Coordinate1086;

Shape1083.geometry = IndexedLineSet1085;

HAnimSegment1082.children = new MFNode();

HAnimSegment1082.children[0] = Shape1083;

Transform Transform1087 = createNode("Transform");
Transform1087.translation = new SFVec3f(new float[-0.2,0.788,-0.04]);
Shape Shape1088 = createNode("Shape");
Shape1088.USE = "jointbox";
Transform1087.child = new undefined();

Transform1087.child[0] = Shape1088;

HAnimSegment1082.children[1] = Transform1087;

HAnimJoint1081.children = new MFNode();

HAnimJoint1081.children[0] = HAnimSegment1082;

HAnimJoint HAnimJoint1089 = createNode("HAnimJoint");
HAnimJoint1089.DEF = "Joe_r_middle2";
HAnimJoint1089.name = "r_middle2";
HAnimJoint1089.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1089.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint1089.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint1089.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1090 = createNode("HAnimSegment");
HAnimSegment1090.DEF = "Joe_r_middle_middle";
HAnimSegment1090.name = "r_middle_middle";
Shape Shape1091 = createNode("Shape");
Appearance Appearance1092 = createNode("Appearance");
Appearance1092.USE = "SegmentLine";
Shape1091.appearance = Appearance1092;

IndexedLineSet IndexedLineSet1093 = createNode("IndexedLineSet");
IndexedLineSet1093.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1094 = createNode("Coordinate");
Coordinate1094.point = new MFVec3f(new float[-0.2,0.74,-0.04,-0.2,0.7142,-0.04]);
IndexedLineSet1093.coord = Coordinate1094;

Shape1091.geometry = IndexedLineSet1093;

HAnimSegment1090.children = new MFNode();

HAnimSegment1090.children[0] = Shape1091;

Transform Transform1095 = createNode("Transform");
Transform1095.translation = new SFVec3f(new float[-0.2,0.74,-0.04]);
Shape Shape1096 = createNode("Shape");
Shape1096.USE = "jointbox";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

HAnimSegment1090.children[1] = Transform1095;

HAnimJoint1089.children = new MFNode();

HAnimJoint1089.children[0] = HAnimSegment1090;

HAnimJoint HAnimJoint1097 = createNode("HAnimJoint");
HAnimJoint1097.DEF = "Joe_r_middle3";
HAnimJoint1097.name = "r_middle3";
HAnimJoint1097.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1097.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint1097.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint1097.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1098 = createNode("HAnimSegment");
HAnimSegment1098.DEF = "Joe_r_middle_distal";
HAnimSegment1098.name = "r_middle_distal";
Shape Shape1099 = createNode("Shape");
Appearance Appearance1100 = createNode("Appearance");
Appearance1100.USE = "SegmentLine";
Shape1099.appearance = Appearance1100;

IndexedLineSet IndexedLineSet1101 = createNode("IndexedLineSet");
IndexedLineSet1101.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1102 = createNode("Coordinate");
Coordinate1102.point = new MFVec3f(new float[-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]);
IndexedLineSet1101.coord = Coordinate1102;

Shape1099.geometry = IndexedLineSet1101;

HAnimSegment1098.children = new MFNode();

HAnimSegment1098.children[0] = Shape1099;

Transform Transform1103 = createNode("Transform");
Transform1103.translation = new SFVec3f(new float[-0.2,0.7142,-0.04]);
Shape Shape1104 = createNode("Shape");
Shape1104.USE = "jointbox";
Transform1103.child = new undefined();

Transform1103.child[0] = Shape1104;

HAnimSegment1098.children[1] = Transform1103;

HAnimSite HAnimSite1105 = createNode("HAnimSite");
HAnimSite1105.DEF = "Joe_r_dactylion";
HAnimSite1105.name = "r_dactylion";
HAnimSite1105.translation = new SFVec3f(new float[-0.2,0.68,-0.04]);
Shape Shape1106 = createNode("Shape");
Shape1106.USE = "sitebox";
HAnimSite1105.children = new MFNode();

HAnimSite1105.children[0] = Shape1106;

HAnimSegment1098.children[2] = HAnimSite1105;

HAnimSite HAnimSite1107 = createNode("HAnimSite");
HAnimSite1107.DEF = "Joe_r_middle_distal_tip";
HAnimSite1107.name = "r_middle_distal_tip";
HAnimSite1107.translation = new SFVec3f(new float[-0.2,0.68,-0.04]);
Shape Shape1108 = createNode("Shape");
Shape1108.USE = "sitebox";
HAnimSite1107.children = new MFNode();

HAnimSite1107.children[0] = Shape1108;

HAnimSegment1098.children[3] = HAnimSite1107;

HAnimJoint1097.children = new MFNode();

HAnimJoint1097.children[0] = HAnimSegment1098;

HAnimJoint1089.children[1] = HAnimJoint1097;

HAnimJoint1081.children[1] = HAnimJoint1089;

HAnimJoint1073.children[1] = HAnimJoint1081;

HAnimJoint999.children[3] = HAnimJoint1073;

HAnimJoint HAnimJoint1109 = createNode("HAnimJoint");
HAnimJoint1109.DEF = "Joe_r_ring0";
HAnimJoint1109.name = "r_ring0";
HAnimJoint1109.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1109.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint1109.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint1109.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimSegment HAnimSegment1110 = createNode("HAnimSegment");
HAnimSegment1110.DEF = "Joe_r_ring_metacarpal";
HAnimSegment1110.name = "r_ring_metacarpal";
Shape Shape1111 = createNode("Shape");
Appearance Appearance1112 = createNode("Appearance");
Appearance1112.USE = "SegmentLine";
Shape1111.appearance = Appearance1112;

IndexedLineSet IndexedLineSet1113 = createNode("IndexedLineSet");
IndexedLineSet1113.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1114 = createNode("Coordinate");
Coordinate1114.point = new MFVec3f(new float[-0.2,0.835,-0.065,-0.2,0.793,-0.065]);
IndexedLineSet1113.coord = Coordinate1114;

Shape1111.geometry = IndexedLineSet1113;

HAnimSegment1110.children = new MFNode();

HAnimSegment1110.children[0] = Shape1111;

Transform Transform1115 = createNode("Transform");
Transform1115.translation = new SFVec3f(new float[-0.2,0.835,-0.065]);
Shape Shape1116 = createNode("Shape");
Shape1116.USE = "jointbox";
Transform1115.child = new undefined();

Transform1115.child[0] = Shape1116;

HAnimSegment1110.children[1] = Transform1115;

HAnimJoint1109.children = new MFNode();

HAnimJoint1109.children[0] = HAnimSegment1110;

HAnimJoint HAnimJoint1117 = createNode("HAnimJoint");
HAnimJoint1117.DEF = "Joe_r_ring1";
HAnimJoint1117.name = "r_ring1";
HAnimJoint1117.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1117.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint1117.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint1117.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimSegment HAnimSegment1118 = createNode("HAnimSegment");
HAnimSegment1118.DEF = "Joe_r_ring_proximal";
HAnimSegment1118.name = "r_ring_proximal";
Shape Shape1119 = createNode("Shape");
Appearance Appearance1120 = createNode("Appearance");
Appearance1120.USE = "SegmentLine";
Shape1119.appearance = Appearance1120;

IndexedLineSet IndexedLineSet1121 = createNode("IndexedLineSet");
IndexedLineSet1121.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1122 = createNode("Coordinate");
Coordinate1122.point = new MFVec3f(new float[-0.2,0.793,-0.065,-0.2,0.74,-0.065]);
IndexedLineSet1121.coord = Coordinate1122;

Shape1119.geometry = IndexedLineSet1121;

HAnimSegment1118.children = new MFNode();

HAnimSegment1118.children[0] = Shape1119;

Transform Transform1123 = createNode("Transform");
Transform1123.translation = new SFVec3f(new float[-0.2,0.793,-0.065]);
Shape Shape1124 = createNode("Shape");
Shape1124.USE = "jointbox";
Transform1123.child = new undefined();

Transform1123.child[0] = Shape1124;

HAnimSegment1118.children[1] = Transform1123;

HAnimJoint1117.children = new MFNode();

HAnimJoint1117.children[0] = HAnimSegment1118;

HAnimJoint HAnimJoint1125 = createNode("HAnimJoint");
HAnimJoint1125.DEF = "Joe_r_ring2";
HAnimJoint1125.name = "r_ring2";
HAnimJoint1125.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1125.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint1125.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint1125.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1126 = createNode("HAnimSegment");
HAnimSegment1126.DEF = "Joe_r_ring_middle";
HAnimSegment1126.name = "r_ring_middle";
Shape Shape1127 = createNode("Shape");
Appearance Appearance1128 = createNode("Appearance");
Appearance1128.USE = "SegmentLine";
Shape1127.appearance = Appearance1128;

IndexedLineSet IndexedLineSet1129 = createNode("IndexedLineSet");
IndexedLineSet1129.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1130 = createNode("Coordinate");
Coordinate1130.point = new MFVec3f(new float[-0.2,0.74,-0.065,-0.2,0.7177,-0.065]);
IndexedLineSet1129.coord = Coordinate1130;

Shape1127.geometry = IndexedLineSet1129;

HAnimSegment1126.children = new MFNode();

HAnimSegment1126.children[0] = Shape1127;

Transform Transform1131 = createNode("Transform");
Transform1131.translation = new SFVec3f(new float[-0.2,0.74,-0.065]);
Shape Shape1132 = createNode("Shape");
Shape1132.USE = "jointbox";
Transform1131.child = new undefined();

Transform1131.child[0] = Shape1132;

HAnimSegment1126.children[1] = Transform1131;

HAnimJoint1125.children = new MFNode();

HAnimJoint1125.children[0] = HAnimSegment1126;

HAnimJoint HAnimJoint1133 = createNode("HAnimJoint");
HAnimJoint1133.DEF = "Joe_r_ring3";
HAnimJoint1133.name = "r_ring3";
HAnimJoint1133.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1133.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint1133.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint1133.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1134 = createNode("HAnimSegment");
HAnimSegment1134.DEF = "Joe_r_ring_distal";
HAnimSegment1134.name = "r_ring_distal";
Shape Shape1135 = createNode("Shape");
Appearance Appearance1136 = createNode("Appearance");
Appearance1136.USE = "SegmentLine";
Shape1135.appearance = Appearance1136;

IndexedLineSet IndexedLineSet1137 = createNode("IndexedLineSet");
IndexedLineSet1137.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1138 = createNode("Coordinate");
Coordinate1138.point = new MFVec3f(new float[-0.2,0.7177,-0.065,-0.2,0.695,-0.065]);
IndexedLineSet1137.coord = Coordinate1138;

Shape1135.geometry = IndexedLineSet1137;

HAnimSegment1134.children = new MFNode();

HAnimSegment1134.children[0] = Shape1135;

Transform Transform1139 = createNode("Transform");
Transform1139.translation = new SFVec3f(new float[-0.2,0.7177,-0.065]);
Shape Shape1140 = createNode("Shape");
Shape1140.USE = "jointbox";
Transform1139.child = new undefined();

Transform1139.child[0] = Shape1140;

HAnimSegment1134.children[1] = Transform1139;

HAnimSite HAnimSite1141 = createNode("HAnimSite");
HAnimSite1141.DEF = "Joe_r_ring_distal_tip";
HAnimSite1141.name = "r_ring_distal_tip";
HAnimSite1141.translation = new SFVec3f(new float[-0.2,0.695,-0.065]);
Shape Shape1142 = createNode("Shape");
Shape1142.USE = "sitebox";
HAnimSite1141.children = new MFNode();

HAnimSite1141.children[0] = Shape1142;

HAnimSegment1134.children[2] = HAnimSite1141;

HAnimJoint1133.children = new MFNode();

HAnimJoint1133.children[0] = HAnimSegment1134;

HAnimJoint1125.children[1] = HAnimJoint1133;

HAnimJoint1117.children[1] = HAnimJoint1125;

HAnimJoint1109.children[1] = HAnimJoint1117;

HAnimJoint999.children[4] = HAnimJoint1109;

HAnimJoint HAnimJoint1143 = createNode("HAnimJoint");
HAnimJoint1143.DEF = "Joe_r_pinky0";
HAnimJoint1143.name = "r_pinky0";
HAnimJoint1143.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1143.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint1143.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint1143.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimSegment HAnimSegment1144 = createNode("HAnimSegment");
HAnimSegment1144.DEF = "Joe_r_pinky_metacarpal";
HAnimSegment1144.name = "r_pinky_metacarpal";
Shape Shape1145 = createNode("Shape");
Appearance Appearance1146 = createNode("Appearance");
Appearance1146.USE = "SegmentLine";
Shape1145.appearance = Appearance1146;

IndexedLineSet IndexedLineSet1147 = createNode("IndexedLineSet");
IndexedLineSet1147.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1148 = createNode("Coordinate");
Coordinate1148.point = new MFVec3f(new float[-0.2,0.84,-0.085,-0.2,0.79,-0.085]);
IndexedLineSet1147.coord = Coordinate1148;

Shape1145.geometry = IndexedLineSet1147;

HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = Shape1145;

Transform Transform1149 = createNode("Transform");
Transform1149.translation = new SFVec3f(new float[-0.2,0.84,-0.085]);
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "jointbox";
Transform1149.child = new undefined();

Transform1149.child[0] = Shape1150;

HAnimSegment1144.children[1] = Transform1149;

HAnimSite HAnimSite1151 = createNode("HAnimSite");
HAnimSite1151.DEF = "Joe_r_metacarpal_pha5";
HAnimSite1151.name = "r_metacarpal_pha5";
HAnimSite1151.translation = new SFVec3f(new float[-0.2,0.79,-0.095]);
Shape Shape1152 = createNode("Shape");
Shape1152.USE = "sitebox";
HAnimSite1151.children = new MFNode();

HAnimSite1151.children[0] = Shape1152;

HAnimSegment1144.children[2] = HAnimSite1151;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

HAnimJoint HAnimJoint1153 = createNode("HAnimJoint");
HAnimJoint1153.DEF = "Joe_r_pinky1";
HAnimJoint1153.name = "r_pinky1";
HAnimJoint1153.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1153.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint1153.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint1153.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimSegment HAnimSegment1154 = createNode("HAnimSegment");
HAnimSegment1154.DEF = "Joe_r_pinky_proximal";
HAnimSegment1154.name = "r_pinky_proximal";
Shape Shape1155 = createNode("Shape");
Appearance Appearance1156 = createNode("Appearance");
Appearance1156.USE = "SegmentLine";
Shape1155.appearance = Appearance1156;

IndexedLineSet IndexedLineSet1157 = createNode("IndexedLineSet");
IndexedLineSet1157.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1158 = createNode("Coordinate");
Coordinate1158.point = new MFVec3f(new float[-0.2,0.79,-0.085,-0.2,0.755,-0.085]);
IndexedLineSet1157.coord = Coordinate1158;

Shape1155.geometry = IndexedLineSet1157;

HAnimSegment1154.children = new MFNode();

HAnimSegment1154.children[0] = Shape1155;

Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[-0.2,0.79,-0.085]);
Shape Shape1160 = createNode("Shape");
Shape1160.USE = "jointbox";
Transform1159.child = new undefined();

Transform1159.child[0] = Shape1160;

HAnimSegment1154.children[1] = Transform1159;

HAnimJoint1153.children = new MFNode();

HAnimJoint1153.children[0] = HAnimSegment1154;

HAnimJoint HAnimJoint1161 = createNode("HAnimJoint");
HAnimJoint1161.DEF = "Joe_r_pinky2";
HAnimJoint1161.name = "r_pinky2";
HAnimJoint1161.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1161.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint1161.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint1161.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimSegment HAnimSegment1162 = createNode("HAnimSegment");
HAnimSegment1162.DEF = "Joe_r_pinky_middle";
HAnimSegment1162.name = "r_pinky_middle";
Shape Shape1163 = createNode("Shape");
Appearance Appearance1164 = createNode("Appearance");
Appearance1164.USE = "SegmentLine";
Shape1163.appearance = Appearance1164;

IndexedLineSet IndexedLineSet1165 = createNode("IndexedLineSet");
IndexedLineSet1165.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1166 = createNode("Coordinate");
Coordinate1166.point = new MFVec3f(new float[-0.2,0.755,-0.085,-0.2,0.735,-0.085]);
IndexedLineSet1165.coord = Coordinate1166;

Shape1163.geometry = IndexedLineSet1165;

HAnimSegment1162.children = new MFNode();

HAnimSegment1162.children[0] = Shape1163;

Transform Transform1167 = createNode("Transform");
Transform1167.translation = new SFVec3f(new float[-0.2,0.755,-0.085]);
Shape Shape1168 = createNode("Shape");
Shape1168.USE = "jointbox";
Transform1167.child = new undefined();

Transform1167.child[0] = Shape1168;

HAnimSegment1162.children[1] = Transform1167;

HAnimJoint1161.children = new MFNode();

HAnimJoint1161.children[0] = HAnimSegment1162;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.DEF = "Joe_r_pinky3";
HAnimJoint1169.name = "r_pinky3";
HAnimJoint1169.rotation = new SFRotation(new float[0,0,1.00000000001315,0.0055856647187357]);
HAnimJoint1169.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint1169.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint1169.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment1170 = createNode("HAnimSegment");
HAnimSegment1170.DEF = "Joe_r_pinky_distal";
HAnimSegment1170.name = "r_pinky_distal";
Shape Shape1171 = createNode("Shape");
Appearance Appearance1172 = createNode("Appearance");
Appearance1172.USE = "SegmentLine";
Shape1171.appearance = Appearance1172;

IndexedLineSet IndexedLineSet1173 = createNode("IndexedLineSet");
IndexedLineSet1173.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1174 = createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[-0.2,0.735,-0.085,-0.2,0.72,-0.085]);
IndexedLineSet1173.coord = Coordinate1174;

Shape1171.geometry = IndexedLineSet1173;

HAnimSegment1170.children = new MFNode();

HAnimSegment1170.children[0] = Shape1171;

Transform Transform1175 = createNode("Transform");
Transform1175.translation = new SFVec3f(new float[-0.2,0.735,-0.085]);
Shape Shape1176 = createNode("Shape");
Shape1176.USE = "jointbox";
Transform1175.child = new undefined();

Transform1175.child[0] = Shape1176;

HAnimSegment1170.children[1] = Transform1175;

HAnimSite HAnimSite1177 = createNode("HAnimSite");
HAnimSite1177.DEF = "Joe_r_pinky_distal_tip";
HAnimSite1177.name = "r_pinky_distal_tip";
HAnimSite1177.translation = new SFVec3f(new float[-0.2,0.72,-0.085]);
Shape Shape1178 = createNode("Shape");
Shape1178.USE = "sitebox";
HAnimSite1177.children = new MFNode();

HAnimSite1177.children[0] = Shape1178;

HAnimSegment1170.children[2] = HAnimSite1177;

HAnimJoint1169.children = new MFNode();

HAnimJoint1169.children[0] = HAnimSegment1170;

HAnimJoint1161.children[1] = HAnimJoint1169;

HAnimJoint1153.children[1] = HAnimJoint1161;

HAnimJoint1143.children[1] = HAnimJoint1153;

HAnimJoint999.children[5] = HAnimJoint1143;

HAnimJoint977.children[1] = HAnimJoint999;

HAnimJoint947.children[1] = HAnimJoint977;

HAnimJoint931.children[1] = HAnimJoint947;

HAnimJoint921.children[1] = HAnimJoint931;

HAnimJoint555.children[3] = HAnimJoint921;

HAnimJoint547.children[1] = HAnimJoint555;

HAnimJoint539.children[1] = HAnimJoint547;

HAnimJoint529.children[1] = HAnimJoint539;

HAnimJoint521.children[1] = HAnimJoint529;

HAnimJoint513.children[1] = HAnimJoint521;

HAnimJoint505.children[1] = HAnimJoint513;

HAnimJoint497.children[1] = HAnimJoint505;

HAnimJoint485.children[1] = HAnimJoint497;

HAnimJoint475.children[1] = HAnimJoint485;

HAnimJoint467.children[1] = HAnimJoint475;

HAnimJoint459.children[1] = HAnimJoint467;

HAnimJoint451.children[1] = HAnimJoint459;

HAnimJoint425.children[1] = HAnimJoint451;

HAnimJoint417.children[1] = HAnimJoint425;

HAnimJoint409.children[1] = HAnimJoint417;

HAnimJoint394.children[2] = HAnimJoint409;

HAnimJoint80.children[2] = HAnimJoint394;

HAnimHumanoid79.joints = new MFNode();

HAnimHumanoid79.joints[0] = HAnimJoint80;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.USE = "Joe_HumanoidRoot";
HAnimHumanoid79.joints[1] = HAnimJoint1179;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.USE = "Joe_sacroiliac";
HAnimHumanoid79.joints[2] = HAnimJoint1180;

HAnimJoint HAnimJoint1181 = createNode("HAnimJoint");
HAnimJoint1181.USE = "Joe_l_hip";
HAnimHumanoid79.joints[3] = HAnimJoint1181;

HAnimJoint HAnimJoint1182 = createNode("HAnimJoint");
HAnimJoint1182.USE = "Joe_l_knee";
HAnimHumanoid79.joints[4] = HAnimJoint1182;

HAnimJoint HAnimJoint1183 = createNode("HAnimJoint");
HAnimJoint1183.USE = "Joe_l_ankle";
HAnimHumanoid79.joints[5] = HAnimJoint1183;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.USE = "Joe_l_subtalar";
HAnimHumanoid79.joints[6] = HAnimJoint1184;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.USE = "Joe_l_midtarsal";
HAnimHumanoid79.joints[7] = HAnimJoint1185;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.USE = "Joe_l_metatarsal";
HAnimHumanoid79.joints[8] = HAnimJoint1186;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.USE = "Joe_r_hip";
HAnimHumanoid79.joints[9] = HAnimJoint1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_r_knee";
HAnimHumanoid79.joints[10] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_r_ankle";
HAnimHumanoid79.joints[11] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_r_subtalar";
HAnimHumanoid79.joints[12] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_r_midtarsal";
HAnimHumanoid79.joints[13] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_r_metatarsal";
HAnimHumanoid79.joints[14] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_vl5";
HAnimHumanoid79.joints[15] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_vl4";
HAnimHumanoid79.joints[16] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_vl3";
HAnimHumanoid79.joints[17] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_vl2";
HAnimHumanoid79.joints[18] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_vl1";
HAnimHumanoid79.joints[19] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_vt12";
HAnimHumanoid79.joints[20] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_vt11";
HAnimHumanoid79.joints[21] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_vt10";
HAnimHumanoid79.joints[22] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_vt9";
HAnimHumanoid79.joints[23] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_vt8";
HAnimHumanoid79.joints[24] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_vt7";
HAnimHumanoid79.joints[25] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_vt6";
HAnimHumanoid79.joints[26] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_vt5";
HAnimHumanoid79.joints[27] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_vt4";
HAnimHumanoid79.joints[28] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_vt3";
HAnimHumanoid79.joints[29] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_vt2";
HAnimHumanoid79.joints[30] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_vt1";
HAnimHumanoid79.joints[31] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_vc7";
HAnimHumanoid79.joints[32] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_vc6";
HAnimHumanoid79.joints[33] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_vc5";
HAnimHumanoid79.joints[34] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_vc4";
HAnimHumanoid79.joints[35] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_vc3";
HAnimHumanoid79.joints[36] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_vc2";
HAnimHumanoid79.joints[37] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_vc1";
HAnimHumanoid79.joints[38] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_skullbase";
HAnimHumanoid79.joints[39] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_l_eyeball_joint";
HAnimHumanoid79.joints[40] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_r_eyeball_joint";
HAnimHumanoid79.joints[41] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_l_sternoclavicular";
HAnimHumanoid79.joints[42] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_l_acromioclavicular";
HAnimHumanoid79.joints[43] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_l_shoulder";
HAnimHumanoid79.joints[44] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_l_elbow";
HAnimHumanoid79.joints[45] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_l_wrist";
HAnimHumanoid79.joints[46] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_l_thumb1";
HAnimHumanoid79.joints[47] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_l_thumb2";
HAnimHumanoid79.joints[48] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_l_thumb3";
HAnimHumanoid79.joints[49] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_l_index0";
HAnimHumanoid79.joints[50] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_l_index1";
HAnimHumanoid79.joints[51] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_l_index2";
HAnimHumanoid79.joints[52] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_l_index3";
HAnimHumanoid79.joints[53] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_l_middle0";
HAnimHumanoid79.joints[54] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_l_middle1";
HAnimHumanoid79.joints[55] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "Joe_l_middle2";
HAnimHumanoid79.joints[56] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "Joe_l_middle3";
HAnimHumanoid79.joints[57] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "Joe_l_ring0";
HAnimHumanoid79.joints[58] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "Joe_l_ring1";
HAnimHumanoid79.joints[59] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "Joe_l_ring2";
HAnimHumanoid79.joints[60] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "Joe_l_ring3";
HAnimHumanoid79.joints[61] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "Joe_l_pinky0";
HAnimHumanoid79.joints[62] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "Joe_l_pinky1";
HAnimHumanoid79.joints[63] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_l_pinky2";
HAnimHumanoid79.joints[64] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "Joe_l_pinky3";
HAnimHumanoid79.joints[65] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "Joe_r_sternoclavicular";
HAnimHumanoid79.joints[66] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "Joe_r_acromioclavicular";
HAnimHumanoid79.joints[67] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "Joe_r_shoulder";
HAnimHumanoid79.joints[68] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "Joe_r_elbow";
HAnimHumanoid79.joints[69] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "Joe_r_wrist";
HAnimHumanoid79.joints[70] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "Joe_r_thumb1";
HAnimHumanoid79.joints[71] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "Joe_r_thumb2";
HAnimHumanoid79.joints[72] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "Joe_r_thumb3";
HAnimHumanoid79.joints[73] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "Joe_r_index0";
HAnimHumanoid79.joints[74] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "Joe_r_index1";
HAnimHumanoid79.joints[75] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "Joe_r_index2";
HAnimHumanoid79.joints[76] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "Joe_r_index3";
HAnimHumanoid79.joints[77] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "Joe_r_middle0";
HAnimHumanoid79.joints[78] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "Joe_r_middle1";
HAnimHumanoid79.joints[79] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "Joe_r_middle2";
HAnimHumanoid79.joints[80] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "Joe_r_middle3";
HAnimHumanoid79.joints[81] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "Joe_r_ring0";
HAnimHumanoid79.joints[82] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "Joe_r_ring1";
HAnimHumanoid79.joints[83] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "Joe_r_ring2";
HAnimHumanoid79.joints[84] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "Joe_r_ring3";
HAnimHumanoid79.joints[85] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "Joe_r_pinky0";
HAnimHumanoid79.joints[86] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "Joe_r_pinky1";
HAnimHumanoid79.joints[87] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "Joe_r_pinky2";
HAnimHumanoid79.joints[88] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "Joe_r_pinky3";
HAnimHumanoid79.joints[89] = HAnimJoint1267;

Coordinate Coordinate1268 = createNode("Coordinate");
Coordinate1268.DEF = "TheSkinCoord";
Coordinate1268.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid79.skinCoord = Coordinate1268;

Shape Shape1269 = createNode("Shape");
Shape1269.DEF = "SkinShape";
Appearance Appearance1270 = createNode("Appearance");
Appearance1270.DEF = "SkinAppearance";
Material Material1271 = createNode("Material");
Material1271.DEF = "SkinMaterial";
Material1271.ambientIntensity = 0.6;
Material1271.diffuseColor = new SFColor(new float[1,1,1]);
Material1271.shininess = 0.6;
Material1271.transparency = 0.2;
Appearance1270.material = Material1271;

ImageTexture ImageTexture1272 = createNode("ImageTexture");
ImageTexture1272.DEF = "zBlueSpiralBkg2";
ImageTexture1272.description = "Blue Spiral Pattern";
ImageTexture1272.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1270.texture = ImageTexture1272;

Shape1269.appearance = Appearance1270;

IndexedFaceSet IndexedFaceSet1273 = createNode("IndexedFaceSet");
IndexedFaceSet1273.creaseAngle = 3.1;
IndexedFaceSet1273.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color Color1274 = createNode("Color");
Color1274.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1273.color = Color1274;

Coordinate Coordinate1275 = createNode("Coordinate");
Coordinate1275.USE = "TheSkinCoord";
IndexedFaceSet1273.coord = Coordinate1275;

Shape1269.geometry = IndexedFaceSet1273;

HAnimHumanoid79.skin[90] = Shape1269;

Group78.children = new MFNode();

Group78.children[0] = HAnimHumanoid79;

Group77.children = new MFNode();

Group77.children[0] = Group78;

children[7] = Group77;

TimeSensor TimeSensor1276 = createNode("TimeSensor");
TimeSensor1276.DEF = "Time1";
TimeSensor1276.cycleInterval = 2.86;
TimeSensor1276.loop = True;
children[8] = TimeSensor1276;

TimeSensor TimeSensor1277 = createNode("TimeSensor");
TimeSensor1277.DEF = "Time2";
TimeSensor1277.cycleInterval = 5.72;
TimeSensor1277.loop = True;
children[9] = TimeSensor1277;

TimeSensor TimeSensor1278 = createNode("TimeSensor");
TimeSensor1278.DEF = "Time3";
TimeSensor1278.cycleInterval = 5.8;
TimeSensor1278.loop = True;
children[10] = TimeSensor1278;

OrientationInterpolator OrientationInterpolator1279 = createNode("OrientationInterpolator");
OrientationInterpolator1279.DEF = "Pitch";
OrientationInterpolator1279.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1279.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.76799988746643,1,0,0,5.02400016784668,1,0,0,6.28000020980835]);
children[11] = OrientationInterpolator1279;

OrientationInterpolator OrientationInterpolator1280 = createNode("OrientationInterpolator");
OrientationInterpolator1280.DEF = "Yaw";
OrientationInterpolator1280.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1280.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.76799988746643,0,1,0,5.02400016784668,0,1,0,6.28000020980835]);
children[12] = OrientationInterpolator1280;

OrientationInterpolator OrientationInterpolator1281 = createNode("OrientationInterpolator");
OrientationInterpolator1281.DEF = "Roll";
OrientationInterpolator1281.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.76799988746643,0,0,1,5.02400016784668,0,0,1,6.28000020980835]);
children[13] = OrientationInterpolator1281;

OrientationInterpolator OrientationInterpolator1282 = createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "vc6Yaw";
OrientationInterpolator1282.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1282.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.400000005960465,-1,0,0.699999988079071,-0.400000005960465,-1,0,0.400000005960465,0,1,0,0,0,1,0,0]);
children[14] = OrientationInterpolator1282;

OrientationInterpolator OrientationInterpolator1283 = createNode("OrientationInterpolator");
OrientationInterpolator1283.DEF = "EyeballsRotation";
OrientationInterpolator1283.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0,0,1,0,0,0,1,0]);
children[15] = OrientationInterpolator1283;

OrientationInterpolator OrientationInterpolator1284 = createNode("OrientationInterpolator");
OrientationInterpolator1284.DEF = "r_sternoclavicularRelax";
OrientationInterpolator1284.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.200000002980232,-1,0,0.109999999403954,0.200000002980232,-1,0,0.109999999403954,0.100000001490116,-1,0,0.100000001490116,0,0,1,0]);
children[16] = OrientationInterpolator1284;

OrientationInterpolator OrientationInterpolator1285 = createNode("OrientationInterpolator");
OrientationInterpolator1285.DEF = "r_acromioclavicularRelax";
OrientationInterpolator1285.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1285.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
children[17] = OrientationInterpolator1285;

OrientationInterpolator OrientationInterpolator1286 = createNode("OrientationInterpolator");
OrientationInterpolator1286.DEF = "r_shoulderRelax";
OrientationInterpolator1286.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1286.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0,0,1,0]);
children[18] = OrientationInterpolator1286;

OrientationInterpolator OrientationInterpolator1287 = createNode("OrientationInterpolator");
OrientationInterpolator1287.DEF = "r_elbowRelax";
OrientationInterpolator1287.key = new MFFloat(new float[0,0.15,0.4,0.6,0.9,1]);
OrientationInterpolator1287.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,0,0,1,0]);
children[19] = OrientationInterpolator1287;

OrientationInterpolator OrientationInterpolator1288 = createNode("OrientationInterpolator");
OrientationInterpolator1288.DEF = "r_wristRelax";
OrientationInterpolator1288.key = new MFFloat(new float[0,0.2,0.4,0.6,0.9,1]);
OrientationInterpolator1288.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0,1,0]);
children[20] = OrientationInterpolator1288;

OrientationInterpolator OrientationInterpolator1289 = createNode("OrientationInterpolator");
OrientationInterpolator1289.DEF = "r_index0Relax";
OrientationInterpolator1289.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]);
children[21] = OrientationInterpolator1289;

OrientationInterpolator OrientationInterpolator1290 = createNode("OrientationInterpolator");
OrientationInterpolator1290.DEF = "r_index1Relax";
OrientationInterpolator1290.key = new MFFloat(new float[0,0.1,0.2,0.6,0.8,1]);
OrientationInterpolator1290.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,-0.135000005364418,-0.135000005364418,1,0.35699999332428,-0.158999994397163,-0.152999997138977,1,0.354999989271164,-0.158999994397163,-0.152999997138977,1,0.35699999332428,0,0,1,0]);
children[22] = OrientationInterpolator1290;

OrientationInterpolator OrientationInterpolator1291 = createNode("OrientationInterpolator");
OrientationInterpolator1291.DEF = "r_middle0Relax";
OrientationInterpolator1291.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,1,0]);
children[23] = OrientationInterpolator1291;

OrientationInterpolator OrientationInterpolator1292 = createNode("OrientationInterpolator");
OrientationInterpolator1292.DEF = "r_middle1Relax";
OrientationInterpolator1292.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,0.300000011920929,0.256999999284744,0,0,0.300000011920929,0.370000004768372,0,0,0.300000011920929,0.389999985694885,0,0,0.300000011920929,0.310000002384186,0,0,0.300000011920929,0.319999992847443,0,0,0.300000011920929,0.340000003576279,0,0,0.300000011920929,0.280000001192093,0,0,1,0,0,0,1,0]);
children[24] = OrientationInterpolator1292;

OrientationInterpolator OrientationInterpolator1293 = createNode("OrientationInterpolator");
OrientationInterpolator1293.DEF = "r_ring0Relax";
OrientationInterpolator1293.key = new MFFloat(new float[0,0.1,0.3,0.6,0.8,1]);
OrientationInterpolator1293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0,0,1,0]);
children[25] = OrientationInterpolator1293;

OrientationInterpolator OrientationInterpolator1294 = createNode("OrientationInterpolator");
OrientationInterpolator1294.DEF = "r_ring1Relax";
OrientationInterpolator1294.key = new MFFloat(new float[0,0.1,0.4,0.5,0.8,1]);
OrientationInterpolator1294.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.150000005960464,1,0.270000010728836,0,0,1,0]);
children[26] = OrientationInterpolator1294;

OrientationInterpolator OrientationInterpolator1295 = createNode("OrientationInterpolator");
OrientationInterpolator1295.DEF = "r_pinky0Relax";
OrientationInterpolator1295.key = new MFFloat(new float[0,0.1,0.3,0.5,0.8,1]);
OrientationInterpolator1295.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0.349999994039536,0.349999994039536,-0.899999976158142,0.119999997317791,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0,0,1,0]);
children[27] = OrientationInterpolator1295;

OrientationInterpolator OrientationInterpolator1296 = createNode("OrientationInterpolator");
OrientationInterpolator1296.DEF = "r_pinky1Relax";
OrientationInterpolator1296.key = new MFFloat(new float[0,0.1,0.4,0.6,0.8,1]);
OrientationInterpolator1296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0.200000002980232,0.25,1,0.270000010728836,0.200000002980232,0.219999998807907,1,0.270000010728836,0.219999998807907,0.200000002980232,1,0.270000010728836,0,0,1,0]);
children[28] = OrientationInterpolator1296;

OrientationInterpolator OrientationInterpolator1297 = createNode("OrientationInterpolator");
OrientationInterpolator1297.DEF = "r_thumb1Relax";
OrientationInterpolator1297.key = new MFFloat(new float[0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]);
OrientationInterpolator1297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]);
children[29] = OrientationInterpolator1297;

OrientationInterpolator OrientationInterpolator1298 = createNode("OrientationInterpolator");
OrientationInterpolator1298.DEF = "r_thumb2Relax";
OrientationInterpolator1298.key = new MFFloat(new float[0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,1,0,0,0.449999988079071,1,0,0,0.449999988079071,0,0,1,0]);
children[30] = OrientationInterpolator1298;

OrientationInterpolator OrientationInterpolator1299 = createNode("OrientationInterpolator");
OrientationInterpolator1299.DEF = "r_thumb3Relax";
OrientationInterpolator1299.key = new MFFloat(new float[0,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator1299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,0,0,1,0,0,0,1,0]);
children[31] = OrientationInterpolator1299;

OrientationInterpolator OrientationInterpolator1300 = createNode("OrientationInterpolator");
OrientationInterpolator1300.DEF = "r_fingers2Relax";
OrientationInterpolator1300.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.430000007152557,0,0,1,0.439999997615814,0,0,1,0.46000000834465,0,0,1,0.439999997615814,0,0,1,0.245000004768372,0,0,1,0.239999994635582,0,0,1,0.209999993443489,0,0,1,0.239999994635582,0,0,1,0]);
children[32] = OrientationInterpolator1300;

OrientationInterpolator OrientationInterpolator1301 = createNode("OrientationInterpolator");
OrientationInterpolator1301.DEF = "r_fingers3Relax";
OrientationInterpolator1301.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator1301.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.370000004768372,0,0,1,0.379999995231628,0,0,1,0.389999985694885,0,0,1,0.379999995231628,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0]);
children[33] = OrientationInterpolator1301;

OrientationInterpolator OrientationInterpolator1302 = createNode("OrientationInterpolator");
OrientationInterpolator1302.DEF = "r_sternoclavicularRoll";
OrientationInterpolator1302.key = new MFFloat(new float[0,0.2,0.4,0.5,0.7,0.8,1]);
OrientationInterpolator1302.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.100000001490116,0,0,-1,0.219999998807907,0,0.5,-1,0.270000010728836,0,0,-1,0.100000001490116,0,0,1,0,0,0,1,0]);
children[34] = OrientationInterpolator1302;

OrientationInterpolator OrientationInterpolator1303 = createNode("OrientationInterpolator");
OrientationInterpolator1303.DEF = "r_acromioclavicularRoll";
OrientationInterpolator1303.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1303.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.0500000007450581,0,0,1,0,0,0,1,0,0,0,1,0]);
children[35] = OrientationInterpolator1303;

OrientationInterpolator OrientationInterpolator1304 = createNode("OrientationInterpolator");
OrientationInterpolator1304.DEF = "r_shoulderRoll";
OrientationInterpolator1304.key = new MFFloat(new float[0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1304.keyValue = new MFRotation(new float[1,0,0,0,0,0,-1,1.6599999666214,-0.25,0,-1,1.75999999046326,0,0,-1,1.25600004196167,0,0,-1,0.0500000007450581,1,0,0,0]);
children[36] = OrientationInterpolator1304;

OrientationInterpolator OrientationInterpolator1305 = createNode("OrientationInterpolator");
OrientationInterpolator1305.DEF = "r_ForeArmPitch";
OrientationInterpolator1305.key = new MFFloat(new float[0,0.15,0.3,0.5,0.7,0.9,1]);
OrientationInterpolator1305.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,0,0,1,0,0,0,1,0]);
children[37] = OrientationInterpolator1305;

OrientationInterpolator OrientationInterpolator1306 = createNode("OrientationInterpolator");
OrientationInterpolator1306.DEF = "r_wristRoll";
OrientationInterpolator1306.key = new MFFloat(new float[0,0.2,0.4,0.6,0.65,0.75,0.85,1]);
OrientationInterpolator1306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.54999995231628,0,0,-1,1.54999995231628,0,0,1,0,0,0,1,0]);
children[38] = OrientationInterpolator1306;

OrientationInterpolator OrientationInterpolator1307 = createNode("OrientationInterpolator");
OrientationInterpolator1307.DEF = "r_handPitch";
OrientationInterpolator1307.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1307.keyValue = new MFRotation(new float[0,0,1,0,0,0,0.00999999977648258,0.25,0,0,-0.00999999977648258,0.0299999993294477,0,0,0.00999999977648258,0.0500000007450581,0,0,0.00999999977648258,0.00999999977648258,0,0,1,0]);
children[39] = OrientationInterpolator1307;

OrientationInterpolator OrientationInterpolator1308 = createNode("OrientationInterpolator");
OrientationInterpolator1308.DEF = "r_thumb1Pitch";
OrientationInterpolator1308.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1308.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.400000005960465,1,0,0,0.200000002980232,1,0,0,0]);
children[40] = OrientationInterpolator1308;

OrientationInterpolator OrientationInterpolator1309 = createNode("OrientationInterpolator");
OrientationInterpolator1309.DEF = "r_thumb2Pitch";
OrientationInterpolator1309.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1309.keyValue = new MFRotation(new float[0,0,1,0,1,1,0,0.300000011920929,1,1,0,0.300000011920929,1,1,0,0.600000023841858,1,1,0,0.300000011920929,0,1,1,0]);
children[41] = OrientationInterpolator1309;

OrientationInterpolator OrientationInterpolator1310 = createNode("OrientationInterpolator");
OrientationInterpolator1310.DEF = "l_shoulderRoll";
OrientationInterpolator1310.key = new MFFloat(new float[0,0.2,0.4,0.5,0.85,1]);
OrientationInterpolator1310.keyValue = new MFRotation(new float[0.25,0,1,1.75999999046326,0,0,1,1.6599999666214,0.25,0,1,1.75999999046326,0,0,1,1.25600004196167,0,0,1,0.0500000007450581,0.25,0,1,1.75999999046326]);
children[42] = OrientationInterpolator1310;

Group Group1311 = createNode("Group");
PositionInterpolator PositionInterpolator1312 = createNode("PositionInterpolator");
PositionInterpolator1312.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator1312.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1312.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group1311.children = new MFNode();

Group1311.children[0] = PositionInterpolator1312;

OrientationInterpolator OrientationInterpolator1313 = createNode("OrientationInterpolator");
OrientationInterpolator1313.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator1313.key = new MFFloat(new float[0,1]);
OrientationInterpolator1313.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
Group1311.children[1] = OrientationInterpolator1313;

OrientationInterpolator OrientationInterpolator1314 = createNode("OrientationInterpolator");
OrientationInterpolator1314.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator1314.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1314.keyValue = new MFRotation(new float[-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139,0.996299982070923,-0.0105699999257922,0.0848100036382675,0.248799994587898,0.996500015258789,0.0159099996089935,-0.0822200030088425,0.383599996566772,-0.701799988746643,-0.0322300009429455,-0.711700022220612,0.12890000641346,-1,0,0,0.551800012588501,-0.996399998664856,0.0223099999129772,0.0816999971866608,0.535099983215332,-0.98089998960495,0.0491200014948845,0.18809999525547,0.520399987697601,-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139]);
Group1311.children[2] = OrientationInterpolator1314;

OrientationInterpolator OrientationInterpolator1315 = createNode("OrientationInterpolator");
OrientationInterpolator1315.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator1315.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1315.keyValue = new MFRotation(new float[1,0,0,0.32260000705719,1,0,0,0.155599996447563,1,0,0,0.086779996752739,1,0,0,0.875100016593933,1,0,0,1.13100004196167,1,0,0,0.0996100008487701,1,0,0,0.394199997186661,1,0,0,0.32260000705719]);
Group1311.children[3] = OrientationInterpolator1315;

OrientationInterpolator OrientationInterpolator1316 = createNode("OrientationInterpolator");
OrientationInterpolator1316.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator1316.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1316.keyValue = new MFRotation(new float[-1,0,0,0.067100003361702,-1,0,0,0.215200006961823,-1,0,0,0.318399995565414,-1,0,0,0.471700012683868,-1,0,0,0.291200011968613,1,0,0,0.222200006246567,-1,0,0,0.067100003361702]);
Group1311.children[4] = OrientationInterpolator1316;

OrientationInterpolator OrientationInterpolator1317 = createNode("OrientationInterpolator");
OrientationInterpolator1317.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator1317.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]);
OrientationInterpolator1317.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.107199996709824,1,0,0,0.400000005960465,1,0,0,0.127000004053116,-1,0,0,0.0179999992251396,-1,0,0,0.0579999983310699,-1,0,0,0.239999994635582,-1,0,0,0.349999994039536,-1,0,0,0.330000013113022,0,0,1,0]);
Group1311.children[5] = OrientationInterpolator1317;

OrientationInterpolator OrientationInterpolator1318 = createNode("OrientationInterpolator");
OrientationInterpolator1318.DEF = "L_subtalar_ANIMATOR";
OrientationInterpolator1318.key = new MFFloat(new float[0,0.3,1]);
OrientationInterpolator1318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1311.children[6] = OrientationInterpolator1318;

OrientationInterpolator OrientationInterpolator1319 = createNode("OrientationInterpolator");
OrientationInterpolator1319.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator1319.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1319.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.200000002980232,1,0,0,0]);
Group1311.children[7] = OrientationInterpolator1319;

OrientationInterpolator OrientationInterpolator1320 = createNode("OrientationInterpolator");
OrientationInterpolator1320.DEF = "L_metatarsal_ANIMATOR";
OrientationInterpolator1320.key = new MFFloat(new float[0,0.2,0.4,0.8,1]);
OrientationInterpolator1320.keyValue = new MFRotation(new float[-1,0,0,0.300000011920929,-1,0,0,0.150000005960464,1,0,0,0.300000011920929,0,0,1,0,-1,0,0,0.300000011920929]);
Group1311.children[8] = OrientationInterpolator1320;

OrientationInterpolator OrientationInterpolator1321 = createNode("OrientationInterpolator");
OrientationInterpolator1321.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator1321.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1321.keyValue = new MFRotation(new float[-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121,-0.995000004768372,0.0229599997401238,0.0967399999499321,0.468300014734268,-1,0.0019000000320375,0.00796000007539988,0.473199993371964,-0.998000025749207,-0.0157999992370605,-0.0610200017690659,0.50789999961853,-0.991100013256073,-0.0354099981486797,-0.128600001335144,0.541899979114533,-0.913100004196167,-0.0624300017952919,-0.402999997138977,0.33610001206398,-0.430599987506866,-0.0796200037002564,-0.898999989032745,0.0703800022602081,1,0,0,0.257099986076355,0.989099979400635,-0.0280499998480082,0.144400000572205,0.387899994850159,-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121]);
Group1311.children[9] = OrientationInterpolator1321;

OrientationInterpolator OrientationInterpolator1322 = createNode("OrientationInterpolator");
OrientationInterpolator1322.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator1322.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1322.keyValue = new MFRotation(new float[1,0,0,0.857299983501434,1,0,0,0.892599999904633,1,0,0,0.535099983215332,1,0,0,0.175600007176399,1,0,0,0.119400002062321,1,0,0,0.315299987792969,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.247500002384186,1,0,0,0.857299983501434]);
Group1311.children[10] = OrientationInterpolator1322;

OrientationInterpolator OrientationInterpolator1323 = createNode("OrientationInterpolator");
OrientationInterpolator1323.DEF = "R_subtalar_ANIMATOR";
OrientationInterpolator1323.key = new MFFloat(new float[0,0.225,0.25,0.35,0.45,0.85,0.91]);
OrientationInterpolator1323.keyValue = new MFRotation(new float[-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]);
Group1311.children[11] = OrientationInterpolator1323;

OrientationInterpolator OrientationInterpolator1324 = createNode("OrientationInterpolator");
OrientationInterpolator1324.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator1324.key = new MFFloat(new float[0,0.22,1]);
OrientationInterpolator1324.keyValue = new MFRotation(new float[1,0,0,-0.200000002980232,0,0,1,0,1,0,0,-0.200000002980232]);
Group1311.children[12] = OrientationInterpolator1324;

OrientationInterpolator OrientationInterpolator1325 = createNode("OrientationInterpolator");
OrientationInterpolator1325.DEF = "R_metatarsal_ANIMATOR";
OrientationInterpolator1325.key = new MFFloat(new float[0,0.2,0.4,0.8,1]);
OrientationInterpolator1325.keyValue = new MFRotation(new float[-1,0,0,0.150000005960464,0,0,1,0,1,0,0,0.300000011920929,-1,0,0,0.300000011920929,-1,0,0,0.150000005960464]);
Group1311.children[13] = OrientationInterpolator1325;

OrientationInterpolator OrientationInterpolator1326 = createNode("OrientationInterpolator");
OrientationInterpolator1326.DEF = "VL5_ANIMATOR";
OrientationInterpolator1326.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1326.keyValue = new MFRotation(new float[0,1,0,0.0825999975204468,-0.0197199992835522,-0.597400009632111,0.801699995994568,0.0823099985718727,0.0092960000038147,-0.964800000190735,0.262699991464615,0.17339999973774,-0.0123800002038479,0.954900026321411,-0.29679998755455,0.0873199999332428,-0.00812499970197678,0.969099998474121,-0.246299996972084,0.158000007271767,0,1,0,0.0825999975204468]);
Group1311.children[14] = OrientationInterpolator1326;

OrientationInterpolator OrientationInterpolator1327 = createNode("OrientationInterpolator");
OrientationInterpolator1327.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator1327.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1327.keyValue = new MFRotation(new float[0,-1,0,0.0864000022411346,0,1,0,0.182500004768372,0,1,0,0.150499999523163,0,1,0,0.10530000180006,0,1,0,0.0439100004732609,0,-1,0,0.031190000474453,0,-1,0,0.0793600007891655,0,-1,0,0.16159999370575,0,-1,0,0.155000001192093,0,-1,0,0.0864199995994568]);
Group1311.children[15] = OrientationInterpolator1327;

OrientationInterpolator OrientationInterpolator1328 = createNode("OrientationInterpolator");
OrientationInterpolator1328.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator1328.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1328.keyValue = new MFRotation(new float[1,0,0.400000005960465,0.119999997317791,-1,0,0.400000005960465,0.186000004410744,1,0,0.100000001490116,0.335999995470047,1,0,0.400000005960465,0.119999997317791]);
Group1311.children[16] = OrientationInterpolator1328;

OrientationInterpolator OrientationInterpolator1329 = createNode("OrientationInterpolator");
OrientationInterpolator1329.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator1329.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1329.keyValue = new MFRotation(new float[-1,0,0,0.0659999996423721,-1,0,0,0.488000005483627,-1,0,0,0.0176999997347593,-1,0,0,0.065987803041935]);
Group1311.children[17] = OrientationInterpolator1329;

OrientationInterpolator OrientationInterpolator1330 = createNode("OrientationInterpolator");
OrientationInterpolator1330.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator1330.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1330.keyValue = new MFRotation(new float[0,-1,0,0.460999995470047,-0.330199986696243,-0.927500009536743,0.175500005483627,0.538800001144409,0.0327773988246918,-0.99931401014328,-0.0172185003757477,0.492033004760742,0,-1,0,0.46110001206398]);
Group1311.children[18] = OrientationInterpolator1330;

OrientationInterpolator OrientationInterpolator1331 = createNode("OrientationInterpolator");
OrientationInterpolator1331.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator1331.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1331.keyValue = new MFRotation(new float[-1,0,-1,0.0920000001788139,1,0,-0.200000002980232,0.319700002670288,-1,0,-0.5,0.156399995088577,-1,0,-1,0.0920000001788139]);
Group1311.children[19] = OrientationInterpolator1331;

OrientationInterpolator OrientationInterpolator1332 = createNode("OrientationInterpolator");
OrientationInterpolator1332.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator1332.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1332.keyValue = new MFRotation(new float[-1,0,0,0.411500006914139,-1,0,0,0.0925000011920929,-1,0,0,0.572567999362946,-1,0,0,0.411507993936539]);
Group1311.children[20] = OrientationInterpolator1332;

OrientationInterpolator OrientationInterpolator1333 = createNode("OrientationInterpolator");
OrientationInterpolator1333.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator1333.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1333.keyValue = new MFRotation(new float[-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333,0.153300002217293,-0.987800002098084,0.0258200000971556,0.390199989080429,-0.570100009441376,0.760399997234345,-0.310999989509583,0.36599999666214,-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333]);
Group1311.children[21] = OrientationInterpolator1333;

children[43] = Group1311;

ROUTE ROUTE1334 = createNode("ROUTE");
ROUTE1334.fromNode = "Time2";
ROUTE1334.fromField = "fraction_changed";
ROUTE1334.toNode = "vc6Yaw";
ROUTE1334.toField = "set_fraction";
children[44] = ROUTE1334;

ROUTE ROUTE1335 = createNode("ROUTE");
ROUTE1335.fromNode = "vc6Yaw";
ROUTE1335.fromField = "value_changed";
ROUTE1335.toNode = "Joe_vc6";
ROUTE1335.toField = "set_rotation";
children[45] = ROUTE1335;

ROUTE ROUTE1336 = createNode("ROUTE");
ROUTE1336.fromNode = "Time3";
ROUTE1336.fromField = "fraction_changed";
ROUTE1336.toNode = "EyeballsRotation";
ROUTE1336.toField = "set_fraction";
children[46] = ROUTE1336;

ROUTE ROUTE1337 = createNode("ROUTE");
ROUTE1337.fromNode = "EyeballsRotation";
ROUTE1337.fromField = "value_changed";
ROUTE1337.toNode = "Joe_r_eyeball_joint";
ROUTE1337.toField = "set_rotation";
children[47] = ROUTE1337;

ROUTE ROUTE1338 = createNode("ROUTE");
ROUTE1338.fromNode = "EyeballsRotation";
ROUTE1338.fromField = "value_changed";
ROUTE1338.toNode = "Joe_l_eyeball_joint";
ROUTE1338.toField = "set_rotation";
children[48] = ROUTE1338;

ROUTE ROUTE1339 = createNode("ROUTE");
ROUTE1339.fromNode = "r_sternoclavicularRelax";
ROUTE1339.fromField = "value_changed";
ROUTE1339.toNode = "Joe_r_sternoclavicular";
ROUTE1339.toField = "set_rotation";
children[49] = ROUTE1339;

ROUTE ROUTE1340 = createNode("ROUTE");
ROUTE1340.fromNode = "r_acromioclavicularRelax";
ROUTE1340.fromField = "value_changed";
ROUTE1340.toNode = "Joe_r_acromioclavicular";
ROUTE1340.toField = "set_rotation";
children[50] = ROUTE1340;

ROUTE ROUTE1341 = createNode("ROUTE");
ROUTE1341.fromNode = "r_shoulderRelax";
ROUTE1341.fromField = "value_changed";
ROUTE1341.toNode = "Joe_r_shoulder";
ROUTE1341.toField = "set_rotation";
children[51] = ROUTE1341;

ROUTE ROUTE1342 = createNode("ROUTE");
ROUTE1342.fromNode = "r_elbowRelax";
ROUTE1342.fromField = "value_changed";
ROUTE1342.toNode = "Joe_r_elbow";
ROUTE1342.toField = "set_rotation";
children[52] = ROUTE1342;

ROUTE ROUTE1343 = createNode("ROUTE");
ROUTE1343.fromNode = "r_wristRelax";
ROUTE1343.fromField = "value_changed";
ROUTE1343.toNode = "Joe_r_wrist";
ROUTE1343.toField = "set_rotation";
children[53] = ROUTE1343;

ROUTE ROUTE1344 = createNode("ROUTE");
ROUTE1344.fromNode = "r_thumb1Relax";
ROUTE1344.fromField = "value_changed";
ROUTE1344.toNode = "Joe_r_thumb1";
ROUTE1344.toField = "set_rotation";
children[54] = ROUTE1344;

ROUTE ROUTE1345 = createNode("ROUTE");
ROUTE1345.fromNode = "r_thumb2Relax";
ROUTE1345.fromField = "value_changed";
ROUTE1345.toNode = "Joe_r_thumb2";
ROUTE1345.toField = "set_rotation";
children[55] = ROUTE1345;

ROUTE ROUTE1346 = createNode("ROUTE");
ROUTE1346.fromNode = "r_thumb3Relax";
ROUTE1346.fromField = "value_changed";
ROUTE1346.toNode = "Joe_r_thumb3";
ROUTE1346.toField = "set_rotation";
children[56] = ROUTE1346;

ROUTE ROUTE1347 = createNode("ROUTE");
ROUTE1347.fromNode = "r_index0Relax";
ROUTE1347.fromField = "value_changed";
ROUTE1347.toNode = "Joe_r_index0";
ROUTE1347.toField = "set_rotation";
children[57] = ROUTE1347;

ROUTE ROUTE1348 = createNode("ROUTE");
ROUTE1348.fromNode = "r_index1Relax";
ROUTE1348.fromField = "value_changed";
ROUTE1348.toNode = "Joe_r_index1";
ROUTE1348.toField = "set_rotation";
children[58] = ROUTE1348;

ROUTE ROUTE1349 = createNode("ROUTE");
ROUTE1349.fromNode = "r_fingers2Relax";
ROUTE1349.fromField = "value_changed";
ROUTE1349.toNode = "Joe_r_index2";
ROUTE1349.toField = "set_rotation";
children[59] = ROUTE1349;

ROUTE ROUTE1350 = createNode("ROUTE");
ROUTE1350.fromNode = "r_fingers3Relax";
ROUTE1350.fromField = "value_changed";
ROUTE1350.toNode = "Joe_r_index3";
ROUTE1350.toField = "set_rotation";
children[60] = ROUTE1350;

ROUTE ROUTE1351 = createNode("ROUTE");
ROUTE1351.fromNode = "r_middle0Relax";
ROUTE1351.fromField = "value_changed";
ROUTE1351.toNode = "Joe_r_middle0";
ROUTE1351.toField = "set_rotation";
children[61] = ROUTE1351;

ROUTE ROUTE1352 = createNode("ROUTE");
ROUTE1352.fromNode = "r_middle1Relax";
ROUTE1352.fromField = "value_changed";
ROUTE1352.toNode = "Joe_r_middle1";
ROUTE1352.toField = "set_rotation";
children[62] = ROUTE1352;

ROUTE ROUTE1353 = createNode("ROUTE");
ROUTE1353.fromNode = "r_fingers2Relax";
ROUTE1353.fromField = "value_changed";
ROUTE1353.toNode = "Joe_r_middle2";
ROUTE1353.toField = "set_rotation";
children[63] = ROUTE1353;

ROUTE ROUTE1354 = createNode("ROUTE");
ROUTE1354.fromNode = "r_fingers3Relax";
ROUTE1354.fromField = "value_changed";
ROUTE1354.toNode = "Joe_r_middle3";
ROUTE1354.toField = "set_rotation";
children[64] = ROUTE1354;

ROUTE ROUTE1355 = createNode("ROUTE");
ROUTE1355.fromNode = "r_ring0Relax";
ROUTE1355.fromField = "value_changed";
ROUTE1355.toNode = "Joe_r_ring0";
ROUTE1355.toField = "set_rotation";
children[65] = ROUTE1355;

ROUTE ROUTE1356 = createNode("ROUTE");
ROUTE1356.fromNode = "r_ring1Relax";
ROUTE1356.fromField = "value_changed";
ROUTE1356.toNode = "Joe_r_ring1";
ROUTE1356.toField = "set_rotation";
children[66] = ROUTE1356;

ROUTE ROUTE1357 = createNode("ROUTE");
ROUTE1357.fromNode = "r_fingers2Relax";
ROUTE1357.fromField = "value_changed";
ROUTE1357.toNode = "Joe_r_ring2";
ROUTE1357.toField = "set_rotation";
children[67] = ROUTE1357;

ROUTE ROUTE1358 = createNode("ROUTE");
ROUTE1358.fromNode = "r_fingers3Relax";
ROUTE1358.fromField = "value_changed";
ROUTE1358.toNode = "Joe_r_ring3";
ROUTE1358.toField = "set_rotation";
children[68] = ROUTE1358;

ROUTE ROUTE1359 = createNode("ROUTE");
ROUTE1359.fromNode = "r_pinky0Relax";
ROUTE1359.fromField = "value_changed";
ROUTE1359.toNode = "Joe_r_pinky0";
ROUTE1359.toField = "set_rotation";
children[69] = ROUTE1359;

ROUTE ROUTE1360 = createNode("ROUTE");
ROUTE1360.fromNode = "r_pinky1Relax";
ROUTE1360.fromField = "value_changed";
ROUTE1360.toNode = "Joe_r_pinky1";
ROUTE1360.toField = "set_rotation";
children[70] = ROUTE1360;

ROUTE ROUTE1361 = createNode("ROUTE");
ROUTE1361.fromNode = "r_fingers2Relax";
ROUTE1361.fromField = "value_changed";
ROUTE1361.toNode = "Joe_r_pinky2";
ROUTE1361.toField = "set_rotation";
children[71] = ROUTE1361;

ROUTE ROUTE1362 = createNode("ROUTE");
ROUTE1362.fromNode = "r_fingers3Relax";
ROUTE1362.fromField = "value_changed";
ROUTE1362.toNode = "Joe_r_pinky3";
ROUTE1362.toField = "set_rotation";
children[72] = ROUTE1362;

ROUTE ROUTE1363 = createNode("ROUTE");
ROUTE1363.fromNode = "Time2";
ROUTE1363.fromField = "fraction_changed";
ROUTE1363.toNode = "r_sternoclavicularRoll";
ROUTE1363.toField = "set_fraction";
children[73] = ROUTE1363;

ROUTE ROUTE1364 = createNode("ROUTE");
ROUTE1364.fromNode = "Time2";
ROUTE1364.fromField = "fraction_changed";
ROUTE1364.toNode = "r_acromioclavicularRoll";
ROUTE1364.toField = "set_fraction";
children[74] = ROUTE1364;

ROUTE ROUTE1365 = createNode("ROUTE");
ROUTE1365.fromNode = "Time2";
ROUTE1365.fromField = "fraction_changed";
ROUTE1365.toNode = "r_shoulderRoll";
ROUTE1365.toField = "set_fraction";
children[75] = ROUTE1365;

ROUTE ROUTE1366 = createNode("ROUTE");
ROUTE1366.fromNode = "Time2";
ROUTE1366.fromField = "fraction_changed";
ROUTE1366.toNode = "r_ForeArmPitch";
ROUTE1366.toField = "set_fraction";
children[76] = ROUTE1366;

ROUTE ROUTE1367 = createNode("ROUTE");
ROUTE1367.fromNode = "Time2";
ROUTE1367.fromField = "fraction_changed";
ROUTE1367.toNode = "r_wristRoll";
ROUTE1367.toField = "set_fraction";
children[77] = ROUTE1367;

ROUTE ROUTE1368 = createNode("ROUTE");
ROUTE1368.fromNode = "Time2";
ROUTE1368.fromField = "fraction_changed";
ROUTE1368.toNode = "r_handPitch";
ROUTE1368.toField = "set_fraction";
children[78] = ROUTE1368;

ROUTE ROUTE1369 = createNode("ROUTE");
ROUTE1369.fromNode = "Time2";
ROUTE1369.fromField = "fraction_changed";
ROUTE1369.toNode = "r_thumb1Pitch";
ROUTE1369.toField = "set_fraction";
children[79] = ROUTE1369;

ROUTE ROUTE1370 = createNode("ROUTE");
ROUTE1370.fromNode = "Time2";
ROUTE1370.fromField = "fraction_changed";
ROUTE1370.toNode = "r_thumb2Pitch";
ROUTE1370.toField = "set_fraction";
children[80] = ROUTE1370;

ROUTE ROUTE1371 = createNode("ROUTE");
ROUTE1371.fromNode = "r_sternoclavicularRoll";
ROUTE1371.fromField = "value_changed";
ROUTE1371.toNode = "Joe_r_sternoclavicular";
ROUTE1371.toField = "set_rotation";
children[81] = ROUTE1371;

ROUTE ROUTE1372 = createNode("ROUTE");
ROUTE1372.fromNode = "r_acromioclavicularRoll";
ROUTE1372.fromField = "value_changed";
ROUTE1372.toNode = "Joe_r_acromioclavicular";
ROUTE1372.toField = "set_rotation";
children[82] = ROUTE1372;

ROUTE ROUTE1373 = createNode("ROUTE");
ROUTE1373.fromNode = "r_shoulderRoll";
ROUTE1373.fromField = "value_changed";
ROUTE1373.toNode = "Joe_r_shoulder";
ROUTE1373.toField = "set_rotation";
children[83] = ROUTE1373;

ROUTE ROUTE1374 = createNode("ROUTE");
ROUTE1374.fromNode = "r_ForeArmPitch";
ROUTE1374.fromField = "value_changed";
ROUTE1374.toNode = "Joe_r_elbow";
ROUTE1374.toField = "set_rotation";
children[84] = ROUTE1374;

ROUTE ROUTE1375 = createNode("ROUTE");
ROUTE1375.fromNode = "r_wristRoll";
ROUTE1375.fromField = "value_changed";
ROUTE1375.toNode = "Joe_r_wrist";
ROUTE1375.toField = "set_rotation";
children[85] = ROUTE1375;

ROUTE ROUTE1376 = createNode("ROUTE");
ROUTE1376.fromNode = "r_handPitch";
ROUTE1376.fromField = "value_changed";
ROUTE1376.toNode = "Joe_r_index0";
ROUTE1376.toField = "set_rotation";
children[86] = ROUTE1376;

ROUTE ROUTE1377 = createNode("ROUTE");
ROUTE1377.fromNode = "r_handPitch";
ROUTE1377.fromField = "value_changed";
ROUTE1377.toNode = "Joe_r_index1";
ROUTE1377.toField = "set_rotation";
children[87] = ROUTE1377;

ROUTE ROUTE1378 = createNode("ROUTE");
ROUTE1378.fromNode = "r_handPitch";
ROUTE1378.fromField = "value_changed";
ROUTE1378.toNode = "Joe_r_index2";
ROUTE1378.toField = "set_rotation";
children[88] = ROUTE1378;

ROUTE ROUTE1379 = createNode("ROUTE");
ROUTE1379.fromNode = "r_handPitch";
ROUTE1379.fromField = "value_changed";
ROUTE1379.toNode = "Joe_r_index3";
ROUTE1379.toField = "set_rotation";
children[89] = ROUTE1379;

ROUTE ROUTE1380 = createNode("ROUTE");
ROUTE1380.fromNode = "r_handPitch";
ROUTE1380.fromField = "value_changed";
ROUTE1380.toNode = "Joe_r_middle0";
ROUTE1380.toField = "set_rotation";
children[90] = ROUTE1380;

ROUTE ROUTE1381 = createNode("ROUTE");
ROUTE1381.fromNode = "r_handPitch";
ROUTE1381.fromField = "value_changed";
ROUTE1381.toNode = "Joe_r_middle1";
ROUTE1381.toField = "set_rotation";
children[91] = ROUTE1381;

ROUTE ROUTE1382 = createNode("ROUTE");
ROUTE1382.fromNode = "r_handPitch";
ROUTE1382.fromField = "value_changed";
ROUTE1382.toNode = "Joe_r_middle2";
ROUTE1382.toField = "set_rotation";
children[92] = ROUTE1382;

ROUTE ROUTE1383 = createNode("ROUTE");
ROUTE1383.fromNode = "r_handPitch";
ROUTE1383.fromField = "value_changed";
ROUTE1383.toNode = "Joe_r_middle3";
ROUTE1383.toField = "set_rotation";
children[93] = ROUTE1383;

ROUTE ROUTE1384 = createNode("ROUTE");
ROUTE1384.fromNode = "r_handPitch";
ROUTE1384.fromField = "value_changed";
ROUTE1384.toNode = "Joe_r_ring0";
ROUTE1384.toField = "set_rotation";
children[94] = ROUTE1384;

ROUTE ROUTE1385 = createNode("ROUTE");
ROUTE1385.fromNode = "r_handPitch";
ROUTE1385.fromField = "value_changed";
ROUTE1385.toNode = "Joe_r_ring1";
ROUTE1385.toField = "set_rotation";
children[95] = ROUTE1385;

ROUTE ROUTE1386 = createNode("ROUTE");
ROUTE1386.fromNode = "r_handPitch";
ROUTE1386.fromField = "value_changed";
ROUTE1386.toNode = "Joe_r_ring2";
ROUTE1386.toField = "set_rotation";
children[96] = ROUTE1386;

ROUTE ROUTE1387 = createNode("ROUTE");
ROUTE1387.fromNode = "r_handPitch";
ROUTE1387.fromField = "value_changed";
ROUTE1387.toNode = "Joe_r_ring3";
ROUTE1387.toField = "set_rotation";
children[97] = ROUTE1387;

ROUTE ROUTE1388 = createNode("ROUTE");
ROUTE1388.fromNode = "r_handPitch";
ROUTE1388.fromField = "value_changed";
ROUTE1388.toNode = "Joe_r_pinky0";
ROUTE1388.toField = "set_rotation";
children[98] = ROUTE1388;

ROUTE ROUTE1389 = createNode("ROUTE");
ROUTE1389.fromNode = "r_handPitch";
ROUTE1389.fromField = "value_changed";
ROUTE1389.toNode = "Joe_r_pinky1";
ROUTE1389.toField = "set_rotation";
children[99] = ROUTE1389;

ROUTE ROUTE1390 = createNode("ROUTE");
ROUTE1390.fromNode = "r_handPitch";
ROUTE1390.fromField = "value_changed";
ROUTE1390.toNode = "Joe_r_pinky2";
ROUTE1390.toField = "set_rotation";
children[100] = ROUTE1390;

ROUTE ROUTE1391 = createNode("ROUTE");
ROUTE1391.fromNode = "r_handPitch";
ROUTE1391.fromField = "value_changed";
ROUTE1391.toNode = "Joe_r_pinky3";
ROUTE1391.toField = "set_rotation";
children[101] = ROUTE1391;

ROUTE ROUTE1392 = createNode("ROUTE");
ROUTE1392.fromNode = "r_thumb1Pitch";
ROUTE1392.fromField = "value_changed";
ROUTE1392.toNode = "Joe_r_thumb1";
ROUTE1392.toField = "set_rotation";
children[102] = ROUTE1392;

ROUTE ROUTE1393 = createNode("ROUTE");
ROUTE1393.fromNode = "r_thumb2Pitch";
ROUTE1393.fromField = "value_changed";
ROUTE1393.toNode = "Joe_r_thumb2";
ROUTE1393.toField = "set_rotation";
children[103] = ROUTE1393;

ROUTE ROUTE1394 = createNode("ROUTE");
ROUTE1394.fromNode = "r_thumb2Pitch";
ROUTE1394.fromField = "value_changed";
ROUTE1394.toNode = "Joe_r_thumb3";
ROUTE1394.toField = "set_rotation";
children[104] = ROUTE1394;

ROUTE ROUTE1395 = createNode("ROUTE");
ROUTE1395.fromNode = "l_shoulderRoll";
ROUTE1395.fromField = "value_changed";
ROUTE1395.toNode = "Joe_l_shoulder";
ROUTE1395.toField = "set_rotation";
children[105] = ROUTE1395;

ROUTE ROUTE1396 = createNode("ROUTE");
ROUTE1396.fromNode = "Time1";
ROUTE1396.fromField = "fraction_changed";
ROUTE1396.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1396.toField = "set_fraction";
children[106] = ROUTE1396;

ROUTE ROUTE1397 = createNode("ROUTE");
ROUTE1397.fromNode = "Time1";
ROUTE1397.fromField = "fraction_changed";
ROUTE1397.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1397.toField = "set_fraction";
children[107] = ROUTE1397;

ROUTE ROUTE1398 = createNode("ROUTE");
ROUTE1398.fromNode = "Time1";
ROUTE1398.fromField = "fraction_changed";
ROUTE1398.toNode = "L_HIP_ANIMATOR";
ROUTE1398.toField = "set_fraction";
children[108] = ROUTE1398;

ROUTE ROUTE1399 = createNode("ROUTE");
ROUTE1399.fromNode = "Time1";
ROUTE1399.fromField = "fraction_changed";
ROUTE1399.toNode = "L_KNEE_ANIMATOR";
ROUTE1399.toField = "set_fraction";
children[109] = ROUTE1399;

ROUTE ROUTE1400 = createNode("ROUTE");
ROUTE1400.fromNode = "Time1";
ROUTE1400.fromField = "fraction_changed";
ROUTE1400.toNode = "L_ANKLE_ANIMATOR";
ROUTE1400.toField = "set_fraction";
children[110] = ROUTE1400;

ROUTE ROUTE1401 = createNode("ROUTE");
ROUTE1401.fromNode = "Time1";
ROUTE1401.fromField = "fraction_changed";
ROUTE1401.toNode = "L_subtalar_ANIMATOR";
ROUTE1401.toField = "set_fraction";
children[111] = ROUTE1401;

ROUTE ROUTE1402 = createNode("ROUTE");
ROUTE1402.fromNode = "Time1";
ROUTE1402.fromField = "fraction_changed";
ROUTE1402.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1402.toField = "set_fraction";
children[112] = ROUTE1402;

ROUTE ROUTE1403 = createNode("ROUTE");
ROUTE1403.fromNode = "Time1";
ROUTE1403.fromField = "fraction_changed";
ROUTE1403.toNode = "L_metatarsal_ANIMATOR";
ROUTE1403.toField = "set_fraction";
children[113] = ROUTE1403;

ROUTE ROUTE1404 = createNode("ROUTE");
ROUTE1404.fromNode = "Time1";
ROUTE1404.fromField = "fraction_changed";
ROUTE1404.toNode = "R_HIP_ANIMATOR";
ROUTE1404.toField = "set_fraction";
children[114] = ROUTE1404;

ROUTE ROUTE1405 = createNode("ROUTE");
ROUTE1405.fromNode = "Time1";
ROUTE1405.fromField = "fraction_changed";
ROUTE1405.toNode = "R_KNEE_ANIMATOR";
ROUTE1405.toField = "set_fraction";
children[115] = ROUTE1405;

ROUTE ROUTE1406 = createNode("ROUTE");
ROUTE1406.fromNode = "Time1";
ROUTE1406.fromField = "fraction_changed";
ROUTE1406.toNode = "R_ANKLE_ANIMATOR";
ROUTE1406.toField = "set_fraction";
children[116] = ROUTE1406;

ROUTE ROUTE1407 = createNode("ROUTE");
ROUTE1407.fromNode = "Time1";
ROUTE1407.fromField = "fraction_changed";
ROUTE1407.toNode = "R_subtalar_ANIMATOR";
ROUTE1407.toField = "set_fraction";
children[117] = ROUTE1407;

ROUTE ROUTE1408 = createNode("ROUTE");
ROUTE1408.fromNode = "Time1";
ROUTE1408.fromField = "fraction_changed";
ROUTE1408.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1408.toField = "set_fraction";
children[118] = ROUTE1408;

ROUTE ROUTE1409 = createNode("ROUTE");
ROUTE1409.fromNode = "Time1";
ROUTE1409.fromField = "fraction_changed";
ROUTE1409.toNode = "R_metatarsal_ANIMATOR";
ROUTE1409.toField = "set_fraction";
children[119] = ROUTE1409;

ROUTE ROUTE1410 = createNode("ROUTE");
ROUTE1410.fromNode = "Time1";
ROUTE1410.fromField = "fraction_changed";
ROUTE1410.toNode = "VL5_ANIMATOR";
ROUTE1410.toField = "set_fraction";
children[120] = ROUTE1410;

ROUTE ROUTE1411 = createNode("ROUTE");
ROUTE1411.fromNode = "Time1";
ROUTE1411.fromField = "fraction_changed";
ROUTE1411.toNode = "SKULLBASE_ANIMATOR";
ROUTE1411.toField = "set_fraction";
children[121] = ROUTE1411;

ROUTE ROUTE1412 = createNode("ROUTE");
ROUTE1412.fromNode = "Time1";
ROUTE1412.fromField = "fraction_changed";
ROUTE1412.toNode = "L_SHOULDER_ANIMATOR";
ROUTE1412.toField = "set_fraction";
children[122] = ROUTE1412;

ROUTE ROUTE1413 = createNode("ROUTE");
ROUTE1413.fromNode = "Time1";
ROUTE1413.fromField = "fraction_changed";
ROUTE1413.toNode = "L_ELBOW_ANIMATOR";
ROUTE1413.toField = "set_fraction";
children[123] = ROUTE1413;

ROUTE ROUTE1414 = createNode("ROUTE");
ROUTE1414.fromNode = "Time1";
ROUTE1414.fromField = "fraction_changed";
ROUTE1414.toNode = "L_WRIST_ANIMATOR";
ROUTE1414.toField = "set_fraction";
children[124] = ROUTE1414;

ROUTE ROUTE1415 = createNode("ROUTE");
ROUTE1415.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1415.fromField = "value_changed";
ROUTE1415.toNode = "Joe_HumanoidRoot";
ROUTE1415.toField = "set_translation";
children[125] = ROUTE1415;

ROUTE ROUTE1416 = createNode("ROUTE");
ROUTE1416.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1416.fromField = "value_changed";
ROUTE1416.toNode = "Joe_HumanoidRoot";
ROUTE1416.toField = "set_rotation";
children[126] = ROUTE1416;

ROUTE ROUTE1417 = createNode("ROUTE");
ROUTE1417.fromNode = "L_HIP_ANIMATOR";
ROUTE1417.fromField = "value_changed";
ROUTE1417.toNode = "Joe_l_hip";
ROUTE1417.toField = "set_rotation";
children[127] = ROUTE1417;

ROUTE ROUTE1418 = createNode("ROUTE");
ROUTE1418.fromNode = "L_KNEE_ANIMATOR";
ROUTE1418.fromField = "value_changed";
ROUTE1418.toNode = "Joe_l_knee";
ROUTE1418.toField = "set_rotation";
children[128] = ROUTE1418;

ROUTE ROUTE1419 = createNode("ROUTE");
ROUTE1419.fromNode = "L_ANKLE_ANIMATOR";
ROUTE1419.fromField = "value_changed";
ROUTE1419.toNode = "Joe_l_ankle";
ROUTE1419.toField = "set_rotation";
children[129] = ROUTE1419;

ROUTE ROUTE1420 = createNode("ROUTE");
ROUTE1420.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1420.fromField = "value_changed";
ROUTE1420.toNode = "Joe_l_midtarsal";
ROUTE1420.toField = "set_rotation";
children[130] = ROUTE1420;

ROUTE ROUTE1421 = createNode("ROUTE");
ROUTE1421.fromNode = "L_subtalar_ANIMATOR";
ROUTE1421.fromField = "value_changed";
ROUTE1421.toNode = "Joe_l_subtalar";
ROUTE1421.toField = "set_rotation";
children[131] = ROUTE1421;

ROUTE ROUTE1422 = createNode("ROUTE");
ROUTE1422.fromNode = "L_metatarsal_ANIMATOR";
ROUTE1422.fromField = "value_changed";
ROUTE1422.toNode = "Joe_l_metatarsal";
ROUTE1422.toField = "set_rotation";
children[132] = ROUTE1422;

ROUTE ROUTE1423 = createNode("ROUTE");
ROUTE1423.fromNode = "R_HIP_ANIMATOR";
ROUTE1423.fromField = "value_changed";
ROUTE1423.toNode = "Joe_r_hip";
ROUTE1423.toField = "set_rotation";
children[133] = ROUTE1423;

ROUTE ROUTE1424 = createNode("ROUTE");
ROUTE1424.fromNode = "R_KNEE_ANIMATOR";
ROUTE1424.fromField = "value_changed";
ROUTE1424.toNode = "Joe_r_knee";
ROUTE1424.toField = "set_rotation";
children[134] = ROUTE1424;

ROUTE ROUTE1425 = createNode("ROUTE");
ROUTE1425.fromNode = "R_ANKLE_ANIMATOR";
ROUTE1425.fromField = "value_changed";
ROUTE1425.toNode = "Joe_r_ankle";
ROUTE1425.toField = "set_rotation";
children[135] = ROUTE1425;

ROUTE ROUTE1426 = createNode("ROUTE");
ROUTE1426.fromNode = "R_subtalar_ANIMATOR";
ROUTE1426.fromField = "value_changed";
ROUTE1426.toNode = "Joe_r_subtalar";
ROUTE1426.toField = "set_rotation";
children[136] = ROUTE1426;

ROUTE ROUTE1427 = createNode("ROUTE");
ROUTE1427.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1427.fromField = "value_changed";
ROUTE1427.toNode = "Joe_r_midtarsal";
ROUTE1427.toField = "set_rotation";
children[137] = ROUTE1427;

ROUTE ROUTE1428 = createNode("ROUTE");
ROUTE1428.fromNode = "R_metatarsal_ANIMATOR";
ROUTE1428.fromField = "value_changed";
ROUTE1428.toNode = "Joe_r_metatarsal";
ROUTE1428.toField = "set_rotation";
children[138] = ROUTE1428;

ROUTE ROUTE1429 = createNode("ROUTE");
ROUTE1429.fromNode = "VL5_ANIMATOR";
ROUTE1429.fromField = "value_changed";
ROUTE1429.toNode = "Joe_vl5";
ROUTE1429.toField = "set_rotation";
children[139] = ROUTE1429;

ROUTE ROUTE1430 = createNode("ROUTE");
ROUTE1430.fromNode = "SKULLBASE_ANIMATOR";
ROUTE1430.fromField = "value_changed";
ROUTE1430.toNode = "Joe_skullbase";
ROUTE1430.toField = "set_rotation";
children[140] = ROUTE1430;

ROUTE ROUTE1431 = createNode("ROUTE");
ROUTE1431.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE1431.fromField = "value_changed";
ROUTE1431.toNode = "Joe_l_shoulder";
ROUTE1431.toField = "set_rotation";
children[141] = ROUTE1431;

ROUTE ROUTE1432 = createNode("ROUTE");
ROUTE1432.fromNode = "L_ELBOW_ANIMATOR";
ROUTE1432.fromField = "value_changed";
ROUTE1432.toNode = "Joe_l_elbow";
ROUTE1432.toField = "set_rotation";
children[142] = ROUTE1432;

ROUTE ROUTE1433 = createNode("ROUTE");
ROUTE1433.fromNode = "L_WRIST_ANIMATOR";
ROUTE1433.fromField = "value_changed";
ROUTE1433.toNode = "Joe_l_wrist";
ROUTE1433.toField = "set_rotation";
children[143] = ROUTE1433;

ROUTE ROUTE1434 = createNode("ROUTE");
ROUTE1434.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE1434.fromField = "value_changed";
ROUTE1434.toNode = "Joe_r_shoulder";
ROUTE1434.toField = "set_rotation";
children[144] = ROUTE1434;

ROUTE ROUTE1435 = createNode("ROUTE");
ROUTE1435.fromNode = "R_ELBOW_ANIMATOR";
ROUTE1435.fromField = "value_changed";
ROUTE1435.toNode = "Joe_r_elbow";
ROUTE1435.toField = "set_rotation";
children[145] = ROUTE1435;

ROUTE ROUTE1436 = createNode("ROUTE");
ROUTE1436.fromNode = "R_WRIST_ANIMATOR";
ROUTE1436.fromField = "value_changed";
ROUTE1436.toNode = "Joe_r_wrist";
ROUTE1436.toField = "set_rotation";
children[146] = ROUTE1436;

}
